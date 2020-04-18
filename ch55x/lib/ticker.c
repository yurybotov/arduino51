#include "ticker.h"
#include "gpio.h"
#include "../../common/utility.h"
#include "ch554.h"

const byte period = 0x12;

volatile unsigned long milliseconds;
volatile unsigned char microsecondsTens;

void Timer0_ISR(void) __interrupt (INT_NO_TMR0) {
    microsecondsTens++;
    if(microsecondsTens == 100) {
        microsecondsTens = 0;
        milliseconds++;
    } 
}

void ticker_init(void) {
    microsecondsTens = 0;
    milliseconds = 0;
    TR0 = 0;
    TF0 = 0;
    TMOD = 2;
    T2MOD |= (bTMR_CLK | bT0_CLK);
    TH0 = period;
    TL0 = period;
    ET0 = 1;
    EA = 1;
    TR0 = 1;
}

#include "../../common/ticker.c"
