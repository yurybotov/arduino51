#ifndef __SDCC_51_A_UART__
#define __SDCC_51_A_UART__
#include "../../common/exttypes.h"
#include "stdarg.h"

void SerialBegin(word speed);

// print byte to Serial (UART0)
void putc(byte c);

// print string or format string with digits to Serial. Supports (%d %x %o)<long (%b)<short
void uprintf(byte* str, ...);

// read byte from serial
byte getc(void);
#define SerialRead getc

// Check. If in Serial buffer has chars, return it qwantity, else 0.
word SerialAvailable();

#endif
