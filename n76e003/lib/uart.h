#ifndef __SDCC_51_A_UART__
#define __SDCC_51_A_UART__
#include "../../common/exttypes.h"
#include "stdarg.h"

void SerialBegin(word speed);

// print byte to Serial (UART0)
void UART0_putc(byte c);
#define SerialPutc(c) UART0_putc(c)

// print string or format string with digits to Serial. Supports (%d %x %o)<long (%b)<short
void uprintf(void (*putc)(byte), byte* str, ...);

void SerialPrintf(const byte* format,...);

// read byte from serial
byte UART0_getc(void);
#define SerialRead UART0_getc

// Check. If in Serial buffer has chars, return it qwantity, else 0.
word SerialAvailable();

#endif
