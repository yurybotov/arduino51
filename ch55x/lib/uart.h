#ifndef __SDCC_51_A_UART__
#define __SDCC_51_A_UART__
#include "../../common/exttypes.h"
#include "stdarg.h"
#include "../../common/serialtemplate.h"

void Serial0Begin(word speed);

// print byte to UART0
void Serial0Putc(byte c);


void Serial0Printf(const byte* format,...);

// read byte from serial
byte Serial0Getc(void);

// Check. If in Serial buffer has chars, return it qwantity, else 0.
word Serial0Available();

void Serial1Begin(word speed);

// print byte to UART0
void Serial1Putc(byte c);


void Serial1Printf(const byte* format,...);

// read byte from serial
byte Serial1Getc(void);

// Check. If in Serial buffer has chars, return it qwantity, else 0.
word Serial1Available();

#endif
