#include "../../common/buffer.h"
#include "Function_define.h"
#include "N76E003.h"
#include "SFR_Macro.h"
#include "gpio.h"
#include "i2c.h"

#ifdef USE_I2C_SLAVE

static uint8_t BIT_TMP;

static uint8_t self_address;
static uint8_t remote_address;

static void (*currentHandler)(byte c);

void I2CDefaultHandler(byte c) {

    //blinker();

    cbPut(c, I2C);
}

extern void I2CSlave(uint8_t c);

void I2CBeginSlave(byte address) {
    currentHandler = &I2CSlave /*I2CDefaultHandler*/;
    self_address = address << 1;
    P13_Quasi_Mode; //set SCL (P13) is Quasi mode
    P14_Quasi_Mode; //set SDA (P14) is Quasi mode
    SDA = 1; //set SDA and SCL pins high
    SCL = 1;
    set_P0SR_6; //set SCL (P06) is  Schmitt triggered input select.
    set_EI2C; //enable I2C interrupt by setting IE1 bit 0
    set_EA;
    I2ADDR = self_address; //define own slave address
    I2CLK = (byte)(16000000 / 100000 - 1);
    set_I2CEN; //enable I2C circuit
    set_AA;
}

void I2CBeginMaster() {
}

void I2CBeginTransmission(byte address) {
    remote_address = address;
}

void I2CEndTransmission(void) {
}

void I2CWrite(byte b) {
}

byte I2CRequestFrom(byte address, byte quantity, byte stop) {
}

void I2CSetClock(dword speed) {
    clr_I2CEN;
    I2CLK = (byte)(16000000 / speed - 1);
    set_I2CEN;
}

void I2COnRequest(void (*handler)(byte)) {
    currentHandler = handler;
}

void I2COnReceive(void (*handler)(byte)); // if master

extern uint16_t tmp;
void I2C_ISR(void) __interrupt(INT_NO_I2C) {
    switch (I2STAT) {
    case 0x00:
        STO = 1;
        break;
    case 0x60:
        AA = 1;
        break;
    case 0x68:
        P02 = 0;
        while (1)
            ;
        break;
    case 0x80:
        //I2CDefaultHandler(I2DAT);
        currentHandler(I2DAT);

        if (I2CAvailable() == 32)
            AA = 0;
        else
            AA = 1;
        break;
    case 0x88:
        //I2CDefaultHandler(I2DAT);
        currentHandler(I2DAT);
        AA = 1;
        break;
    case 0xA0:
        AA = 1;
        break;
    case 0xA8:
        I2DAT = cbGet(I2COUT);
        if (cbCount(I2COUT) == 0)
            AA = 0;
        else
            AA = 1;
        break;
    case 0xB8:
        I2DAT = cbGet(I2COUT);
        if (cbCount(I2COUT) == 0)
            AA = 0;
        else
            AA = 1;
        break;
    case 0xC0:
        AA = 1;
        break;
    case 0xC8:
        AA = 1;
        break;
    }
    SI = 0;
    //while(STO);
}

#endif
