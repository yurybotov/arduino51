#include "ticker.h"
#include "gpio.h"
#include "cdc.h"
#include "../../common/utility.h"
#include "ch554.h"

const byte th0 = 0xf8;
const byte tl0 = 0x4a;

#define NO_MICROS

__xdata volatile unsigned long milliseconds;

void Timer0_ISR(void) __interrupt (INT_NO_TMR0) {
    TH0 = th0;
    TL0 = tl0;
    milliseconds++;
}

void ticker_init(void) {
    milliseconds = 0;
    TR0 = 0;
    TF0 = 0;
    TMOD = 1;
    TH0 = th0;
    TL0 = tl0;
    ET0 = 1;
    EA = 1;
    TR0 = 1;
}

#define SPECIAL_DELAY

void delay(dword time) {
    volatile dword waitTo = millis() + time;
    while (waitTo > millis()) { 
#ifdef USE_SERIAL
        if(time > 50) CDCReceive(); 
#endif
    }
#ifdef USE_SERIAL
    if(time > 100) CDCSend();
#endif
}

#include "../../common/ticker.c"
