#ifndef __SDCC_51_A_UART__
#define __SDCC_51_A_UART__
#include "exttypes.h"
#include "stdarg.h"

void SerialBegin(word speed);

void putc(byte c);

// supports (%d %x %o)<long (%b)<short
void uprintf(byte* str, ...);

byte getc(void);

word SerialAvailable();
#define SerialRead getc

#endif
