#include "pinterrupt.h"
#include "Function_Define.h"
#include "N76E003.h"
#include "SFR_Macro.h"
#include "gpio.h"

void dumb(void) { }

void (*handler[8])(void) = { dumb, dumb, dumb, dumb, dumb, dumb, dumb, dumb };

volatile byte localPicom = 0;

void PIN_INTERRUPT_ISR(void) __interrupt(INT_NO_PIF) {
    byte i;
    byte template = 1;
    for (i = 0; i < 8; i++) {
        if (PIF & template != 0) {
            (*handler[i])();
            if (localPicom & template) {
                bitClear(PIF, i);
                if (PIF == 0)
                    break;
            }
        }
        template = template << 1;
    }
}

void attachInterrupt(byte pin, void (*isr)(void), enum InterruptMode mode) {
    pinMode(pin, INPUT);
    clr_EA;
    PICON |= GPIO_PORT(pin);
    bitSet(localPicom, GPIO_PIN(pin));
    switch (GPIO_PIN(pin)) {
    case 0:
        bitWrite(PICON, 2, bitRead(mode, 0));
        break;
    case 1:
        bitWrite(PICON, 3, bitRead(mode, 0));
        break;
    case 2:
        bitWrite(PICON, 4, bitRead(mode, 0));
        break;
    case 3:
        bitWrite(PICON, 5, bitRead(mode, 0));
        break;
    case 4:
    case 5:
        bitWrite(PICON, 6, bitRead(mode, 0));
        break;
    case 6:
    case 7:
        bitWrite(PICON, 7, bitRead(mode, 0));
        break;
    default:
        break;
    }
    bitWrite(PINEN, GPIO_PIN(pin), bitRead(mode, 1));
    bitWrite(PIPEN, GPIO_PIN(pin), bitRead(mode, 2));
    handler[GPIO_PIN(pin)] = isr;
    set_EPI;
    set_EX0;
    set_EA;
}

void detachInterrupt(byte pin) {
    clr_EA;
    handler[GPIO_PIN(pin)] = dumb;
    bitClear(PINEN, GPIO_PIN(pin));
    bitClear(PIPEN, GPIO_PIN(pin));
    set_EA;
}