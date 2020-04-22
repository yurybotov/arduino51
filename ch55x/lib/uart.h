#ifndef __SDCC_51_A_UART__
#define __SDCC_51_A_UART__
#include "../../common/exttypes.h"
#include "stdarg.h"

void UART0_begin(word speed);

// print byte to UART0
void UART0_putc(byte c);


void UART0_printf(const byte* format,...);

// read byte from serial
byte UART0_getc(void);

// Check. If in Serial buffer has chars, return it qwantity, else 0.
word UART0_available();

void UART1_begin(word speed);

// print byte to UART0
void UART1_putc(byte c);


void UART1_printf(const byte* format,...);

// read byte from serial
byte UART1_getc(void);

// Check. If in Serial buffer has chars, return it qwantity, else 0.
word UART1_available();

#endif
