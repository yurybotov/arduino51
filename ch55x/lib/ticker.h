#ifndef __SDCC_51_A_TIMER__
#define __SDCC_51_A_TIMER__
#include "../../common/exttypes.h"
#include "stdbool.h"

#define MSBFIRST 1
#define LSBFIRST 0

// called on start in main.c
void ticker_init(void);

// milliseconds from uC start
dword millis();

//dword micros();

// delay in milliseconds
void delay(dword time);

//void delayMicroseconds(dword time);

// pulse length measure
dword pulseIn(byte pin, bool value, dword timeOut);

// pceudo SPI realisation
void shiftOut(byte dataPin, byte clockPin, byte bitOrder, byte value);
byte shiftIn(byte dataPin, byte clockPin, byte bitOrder);

#endif
