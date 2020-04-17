#include "uart.h"
#include "Function_define.h"
#include "N76E003.h"
#include "SFR_macro.h"

byte SerialBuffer[32];
byte beginBuffer = 0, endBuffer = 0, lengthBuffer = 0;

void SerialPort0_ISR(void) __interrupt(4) {
    if (RI == 1) {
        clr_RI;
        SerialBuffer[endBuffer++] = SBUF;
        if (endBuffer == 32)
            endBuffer = 0;
        lengthBuffer++;
    }
}

void SerialBegin(word speed) {
    P06_Quasi_Mode;
    P07_Quasi_Mode;
    SCON = 0x50;
    TMOD |= 0x20;
    set_SMOD;
    set_T1M;
    clr_BRCK;
    TH1 = 256 - (1000000 / speed);
    set_TR1;
    set_RB8;
    clr_TI;
    set_ES;
    set_EA;
}

void putc(byte c) {
    TI = 0;
    SBUF = c;
    while (TI == 0)
        ;
}

#include "../../common/uart.c"
