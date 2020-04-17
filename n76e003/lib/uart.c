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

byte getc(void) {
    if (lengthBuffer > 0) {
        byte c = SerialBuffer[beginBuffer++];
        if (beginBuffer == 32)
            beginBuffer = 0;
        lengthBuffer--;
        return c;
    } else {
        return 0;
    }
}

word SerialAvailable() {
    return lengthBuffer;
}

void uprintf(byte* str, ...);
void printU(dword u32Temp, byte radix) {
    byte print_buf[17];
    byte i;
    print_buf[16] = 0;
    for (i = 15; i > 0; i--) {
        byte val = u32Temp % radix;
        print_buf[i] = (val < 10) ? (val + '0') : (val - 10 + 'A');
        u32Temp /= radix;
        if (u32Temp == 0)
            break;
    }
    uprintf(print_buf + i);
}

void printInteger(dword u32Temp) {
    byte print_buf[12];
    byte sign = 0;
    byte i;

    print_buf[11] = 0;
    if (u32Temp & 0x8000) {
        u32Temp = ~u32Temp + 1;
        sign = 1;
    }
    for (i = 10; i > 0; i--) {
        print_buf[i] = (u32Temp % 10) + '0';
        u32Temp /= 10;
        if (u32Temp == 0)
            break;
    }
    if (sign)
        print_buf[i--] = '-';
    uprintf(print_buf + i);
}

void uprintf(byte* str, ...) {
    va_list args;
    va_start(args, str);
    while (*str != '\0') {
        if (*str == '%') {
            str++;
            if (*str == '\0')
                return;
            if (*str == 'd') {
                str++;
                printInteger(va_arg(args, int));
            } else if (*str == 'x') {
                str++;
                printU(va_arg(args, int), 16);
            } else if (*str == 'o') {
                str++;
                printU(va_arg(args, int), 8);
            } else if (*str == 'b') {
                str++;
                printU(va_arg(args, int), 2);
            }
        }
        putc(*str++);
    }
}
