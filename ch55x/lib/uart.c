#include "uart.h"
#include "ch554.h"
#include <stdio.h>

__xdata byte UART0_buffer[32];
byte beginUART0Buffer = 0, endUART0Buffer = 0, lengthUART0Buffer = 0;

void UART0_ISR(void) __interrupt(INT_NO_UART0) {
    if (RI == 1) {
        RI = 0;
        UART0_buffer[endUART0Buffer++] = SBUF;
        if (endUART0Buffer == 32)
            endUART0Buffer = 0;
        lengthUART0Buffer++;
    }
}

void UART0_begin(word speed) {
    SM0 = 0;
    SM1 = 1;
    SM2 = 0;
    REN = 1;
    T2MOD |= bTMR_CLK | bT1_CLK;
    PCON |= SMOD;
    TH1 = 256 - (1500000 / speed);
    TI = 0;
    PIN_FUNC |= bUART0_PIN_X;
    ES = 1;
    EA = 1;
}

void UART0_putc(byte c) {
    SBUF = c;
    while(TI == 0);
    TI = 0;
}

byte UART0_getc(void) {
    if (lengthUART0Buffer > 0) {
        byte c = UART0_buffer[beginUART0Buffer++];
        if (beginUART0Buffer == 32)
            beginUART0Buffer = 0;
        lengthUART0Buffer--;
        return c;
    } else {
        return 0;
    }
}

word UART0_available() {
    return lengthUART0Buffer;
}

static void UART0_send_char(char c, void* p) { (p); UART0_putc(c); }
void UART0_printf(const byte* format,...) {
    va_list args;
    va_start(args,format);
    _print_format( UART0_send_char, NULL, format, args );
    va_end(args);
}

__xdata byte UART1_buffer[32];
byte beginUART1Buffer = 0, endUART1Buffer = 0, lengthUART1Buffer = 0;

void UART1_ISR(void) __interrupt(INT_NO_UART1) {
    if (U1RI == 1) {
        U1RI = 0;
        UART1_buffer[endUART1Buffer++] = SBUF1;
        if (endUART1Buffer == 32)
            endUART1Buffer = 0;
        lengthUART1Buffer++;
    }
}

void UART1_begin(word speed) {
    U1SM0 = 0;
    U1SMOD = 1;
    U1REN = 1;
    SBAUD1 = 256 - (1500000 / speed);
    U1TI = 0;
    PIN_FUNC |= bUART1_PIN_X;
    IE_UART1 = 1;
    EA = 1;
}

void UART1_putc(byte c) {
    SBUF1 = c;
    while(U1TI == 0);
    U1TI = 0;
}

byte UART1_getc(void) {
    if (lengthUART1Buffer > 0) {
        byte c = UART1_buffer[beginUART1Buffer++];
        if (beginUART1Buffer == 32)
            beginUART1Buffer = 0;
        lengthUART1Buffer--;
        return c;
    } else {
        return 0;
    }
}

word UART1_available() {
    return lengthUART1Buffer;
}

static void UART1_send_char(char c, void* p) { (p); UART1_putc(c); }
void UART1_printf(const byte* format,...) {
    va_list args;
    va_start(args,format);
    _print_format( UART1_send_char, NULL, format, args );
    va_end(args);
}
