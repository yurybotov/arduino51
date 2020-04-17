#ifndef __SDCC_51_A_TIMER__
#define __SDCC_51_A_TIMER__
#include "exttypes.h"
#include "stdbool.h"

#define MSBFIRST 1
#define LSBFIRST 0

void ticker_init(void);

dword millis();
void delay(dword time);
dword pulseIn(byte pin, bool value, dword timeOut);
void shiftOut(byte dataPin, byte clockPin, byte bitOrder, byte value);
byte shiftIn(byte dataPin, byte clockPin, byte bitOrder);
#endif
