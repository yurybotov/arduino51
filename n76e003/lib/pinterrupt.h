#ifndef __SDCC_51_A_PIN_INTERRUPT__
#define __SDCC_51_A_PIN_INTERRUPT__
#include "config.h"
#include "../../common/exttypes.h"
#include "../../common/utility.h"

#ifdef USE_PIN_INTERRUPT

// 0 -> 0 level/1 edge
// 1 -> 0 nolow/1 low
// 2 -> 0 nohi/1 hi 
enum InterruptMode {NONE = 0, LOW_LEVEL = 2, HIGH_LEVEL = 4, FALLING_EDGE = 3, RISING_EDGE = 5, CHANGE_EDGE = 7};

void attachInterrupt(byte pin, void (*isr)(void), enum InterruptMode mode);

void detachInterrupt(byte pin);

#endif

#endif