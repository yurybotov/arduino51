#include "arduino.h"

/*byte state = 0;

void change(void) {
    state = (~state) & 1;
    digitalWrite(D14, state);
}

void setup() {
    pinMode(D14, OUTPUT);
    digitalWrite(D14, state);
    attachInterrupt(D15, change, RISING_EDGE);
}

void loop() {
}*/

void blinker(void) {
    static uint8_t blink = 0;
    blink = blink ? 0 : 1;
    digitalWrite(D01, blink);
}

volatile uint16_t tmp;

/*
Команды:
0xF0                              - reset
0xF1 (uint8_t addr)               - set new i2c address and reset
0xF2 (uint8_t pin, uint8_t mode)  - setMode
0xF3 (uint8_t pin, uint8_t val)   - digitalWrite
0xF4 (uint8_t pin, uint16_t val)  - analogWrite
0xF5 (uint8_t pin, uint8_t dir, uint32_t t) - pulse of t mks
0xF6 (uint8_t pin) -> uint32_t    - return interrupts status
0xF7 (uint8_t pin)                - set pin
0xF8 (uint8_t pin)                - reset pin
0xF9 (uint8_t pin)                - invert pin
0xFA (uint8_t pin) -> uint8_t     - digitalRead
0xFB (uint8_t pin) -> uint16_t    - analogRead
0xFC (uint8_t pin, uint8_t dir, uint32_t tout) - start pulse width measure
0xFD (uint8_t pin) -> uint32_t    - read pulse width (0xffffffff - in progress, 0 - timeout, other - width in mks)
0xFE (uint8_t pin, uint8_t mode)  - attachInterrupt
0xFF (uint8_t pin)                - detachInterrupt
*/

#define savedI2CAddress 126

uint8_t pins[] = { D03, D04, D05, D11 };

enum { DIN,
    DOUT,
    AIN,
    AOUT } Mode;

union Pin {
    struct {
        uint8_t val;
        uint8_t pulseWait;
        uint8_t intMode;
        uint8_t intCounter;
        uint32_t timeout;
        uint32_t start;
        uint32_t result;
    } din;
    struct {
        uint8_t val;
        uint8_t pulse;
        uint32_t pulseEnd;
    } dout;
    struct {
        uint16_t val;
    } ain;
    struct {
        uint16_t val;
    } aout;
};

typedef struct {
    enum Mode mode;
    union Pin pin;
} State;

__xdata volatile State state[4];

void decode1() {
    uint8_t cmd = I2CRead();
    uint8_t p = I2CRead();
    switch (cmd) {
    case 0xF1: // setAddress
        EEPROMWrite(savedI2CAddress, p);
        reset();
        break;
    case 0xF7: // digitalSet
        state[p].pin.dout.val = 1;
        digitalWrite(pins[p], 1);
        break;
    case 0xF8: // digitalReset
        state[p].pin.dout.val = 0;
        digitalWrite(pins[p], 0);
        break;
    case 0xF9: // digitalChange
        state[p].pin.dout.val = (state[p].pin.dout.val == 1) ? 0 : 1;
        digitalWrite(pins[p], state[p].pin.dout.val);
        break;
    case 0xFA: // digitalRead
        cbPut(state[p].pin.din.val, I2COUT);
        break;
    case 0xFB: // analogRead
        cbPut((state[p].pin.ain.val >> 8) & 0xFF, I2COUT);
        cbPut(state[p].pin.ain.val & 0xFF, I2COUT);
        break;
    case 0xFD: // getPulseWidth
        cbPut((state[p].pin.din.result >> 24) & 0xFF, I2COUT);
        cbPut((state[p].pin.din.result >> 16) & 0xFF, I2COUT);
        cbPut((state[p].pin.din.result >> 8) & 0xFF, I2COUT);
        cbPut(state[p].pin.din.result & 0xFF, I2COUT);
        break;
    case 0xFF: // detachInterrupt
        state[p].pin.din.intMode = 0;
        state[p].pin.din.intCounter = 0;
        break;
    default:
        break;
    }
}

void decode2() {
    uint8_t cmd = I2CRead();
    uint8_t pin = I2CRead();
    uint8_t p = I2CRead();

    tmp = p;
    //Serial0Printf(" %c\n\r", cmd);
    //Serial0Printf(" %c\n\r", pin);
    //Serial0Printf(" %c\n\r", p);    
    
    switch (cmd) {
    case 0xF2: // setMode
    blinker();
        if (p == 0x42)
            state[pin].mode = AIN;
        else if (p == 0x80 || p == 0x81 || p == 0x83)
            state[pin].mode = AOUT;
        else if (p == 0x02)
            state[pin].mode = DIN;
        else if (p == 0x00 || p == 0x01 || p == 0x03)
            state[pin].mode = DOUT;
        pinMode(pins[pin], p);
        break;
    case 0xF3: // digitalWrite
    blinker();
        state[pin].pin.dout.val = p;
        digitalWrite(pins[pin], p);
        break;
    case 0xFE: // attachInterrupt
        state[pin].pin.din.intMode = p;
        state[pin].pin.din.intCounter = 0;
        break;
    default:
        break;
    }
}

void decode3() {
    uint8_t cmd = I2CRead();
    uint8_t pin = I2CRead();
    uint16_t p = I2CRead();
    p = (p << 8) | I2CRead();
    if (cmd == 0xF4) { // analogWrite
        state[pin].pin.aout.val = p;
        analogWrite(pins[pin], p);
    }
}

void decode6() {
    uint8_t cmd = I2CRead();
    uint8_t pin = I2CRead();
    uint8_t dir = I2CRead();
    uint32_t p = I2CRead();
    p = (p << 8) | I2CRead();
    p = (p << 8) | I2CRead();
    p = (p << 8) | I2CRead();
    switch (cmd) {
    case 0xFC: // startPWidth
        state[pin].pin.din.pulseWait = dir + 1;
        state[pin].pin.din.start = micros();
        state[pin].pin.din.timeout = state[pin].pin.din.start + p;
        state[pin].pin.din.result = 0xffffffff;
        break;
    case 0xF5: // genPulse
        state[pin].pin.dout.pulse = dir + 1;
        state[pin].pin.dout.pulseEnd = micros() + p;
        if (dir == 0)
            digitalWrite(pins[pin], 1);
        else
            digitalWrite(pins[pin], 0);
        break;
    default:
        break;
    }
}

void (*I2CSlaveHandler)(uint8_t);

void I2CSlave(uint8_t c) {
    static uint8_t cmd;

    blinker();
    //tmp = c;

    if (I2CAvailable() == 0) {
        if (c == 0xF0) // reset
            reset();
        if (c == 0xF6) { // interrupts state
            cbPut(state[0].pin.din.intCounter, I2COUT);
            cbPut(state[1].pin.din.intCounter, I2COUT);
            cbPut(state[2].pin.din.intCounter, I2COUT);
            cbPut(state[3].pin.din.intCounter, I2COUT);
            state[0].pin.din.intCounter = state[1].pin.din.intCounter = 
                state[2].pin.din.intCounter = state[3].pin.din.intCounter = 0;
        }
        if (c >= 0xF0 && c <= 0xFF) {
            cmd = c;
            cbPut(c, I2C);
        }
    } else {
        cbPut(c, I2C);
        if (I2CAvailable() == 2 && (cmd == 0xF1 || (cmd > 0xF6 && cmd < 0xFC) || cmd == 0xFD))  decode1();
        if (I2CAvailable() == 3 && (cmd == 0xF2 || cmd == 0xF3))  decode2();
        if (I2CAvailable() == 4 && (cmd == 0xF4))  decode3();
        if (I2CAvailable() == 7 && (cmd == 0xF5 || cmd == 0xFC))  decode6();
    }
}

void setup() {
    uint8_t addr;

    Serial0Begin(9600);

    pinMode(D01,OUTPUT);
    digitalWrite(D01,0);

    addr = EEPROMRead(savedI2CAddress);
    if (addr == 0xFF) {
        addr = 0x19;
        EEPROMWrite(savedI2CAddress, addr);
    }
    //I2CSlaveHandler = &I2CSlave;
    //I2COnRequest(I2CSlaveHandler);
    I2CBeginSlave(addr);
    I2CSetClock(I2C_STANDART);
}

void updateState(void) {
    uint8_t i;
    for (i = 0; i < 4; i++) {
        if (state[i].mode == DIN) {
            state[i].pin.din.val = digitalRead(pins[i]);
            if (state[i].pin.din.pulseWait != 0) {
                if (state[i].pin.din.pulseWait == 1 && state[i].pin.din.val == 1) {
                    state[i].pin.din.result = micros() - state[i].pin.din.start;
                    state[i].pin.din.pulseWait = 0;
                } else if (state[i].pin.din.pulseWait == 2 && state[i].pin.din.val == 0) {
                    state[i].pin.din.result = micros() - state[i].pin.din.start;
                    state[i].pin.din.pulseWait = 0;
                } else if (state[i].pin.din.timeout <= micros()) {
                    state[i].pin.din.result = 0;
                    state[i].pin.din.pulseWait = 0;
                }
            }
        } else if (state[i].mode == AIN) {
            state[i].pin.ain.val = analogRead(pins[i]);
        } else if (state[i].mode == DOUT && state[i].pin.dout.pulse != 0) {
            if (state[i].pin.dout.pulseEnd <= micros()) {
                if (state[i].pin.dout.pulse == 1)
                    digitalWrite(pins[i], 0);
                else
                    digitalWrite(pins[i], 1);
                state[i].pin.dout.pulseEnd = 0;
                state[i].pin.dout.pulse = 0;
            }
        }
    }
}

void loop() {
    //uint8_t i;

    updateState();

    //if(I2CAvailable() > 0)
    //    Serial0Putc(I2CRead());

    //for(i = 0; i < 4; i++) {
    //    Serial0Printf("\n %d is %d", i, state[i].mode);
    //}
    
    Serial0Printf("\n\r 0x%X", tmp);
    delay(200);
}
