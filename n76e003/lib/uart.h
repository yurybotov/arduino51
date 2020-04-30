#ifndef __SDCC_51_A_UART__
#define __SDCC_51_A_UART__
#include "../../common/exttypes.h"
#include "../../common/serialtemplate.h"
#include "stdarg.h"

void Serial0Begin(dword speed);

// print byte to UART0
void Serial0Putc(byte c);

void Serial0Printf(const byte* format, ...);

// read byte from serial
#define Serial0Read() cbGet(Serial0)

// Check. If in Serial buffer has chars, return it qwantity, else 0.
#define Serial0Available() cdCount(Serial0)

void Serial1Begin(dword speed);

// print byte to UART0
void Serial1Putc(byte c);

void Serial1Printf(const byte* format, ...);

// read byte from serial
#define Serial1Read() cbGet(Serial1)

// Check. If in Serial buffer has chars, return it qwantity, else 0.
#define Serial1Available() cdCount(Serial1)

#endif
