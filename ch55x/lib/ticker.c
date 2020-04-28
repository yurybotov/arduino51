#include "ticker.h"
#include "gpio.h"
#include "../../common/utility.h"
#include "ch554.h"

//const byte period = 0x12;
const byte th0 = 0xf8;
const byte tl0 = 0x4a;

#define NO_MICROS

__xdata volatile unsigned long milliseconds;
//__data volatile unsigned char microsecondsTens;

void Timer0_ISR(void) __interrupt (INT_NO_TMR0) {
    /*microsecondsTens++;
    if(microsecondsTens == 100) {
        microsecondsTens = 0;
        milliseconds++;
    }*/ 
    TH0 = th0;
    TL0 = tl0;
    milliseconds++;
}

void ticker_init(void) {
//    microsecondsTens = 0;
    milliseconds = 0;
    TR0 = 0;
    TF0 = 0;
    TMOD = 1;
    //T2MOD |= (bTMR_CLK | bT0_CLK);
    TH0 = th0;
    TL0 = tl0;
    ET0 = 1;
    EA = 1;
    TR0 = 1;
}

void CDC_loop(void);

#define SPECIAL_DELAY
void delay(dword time) {
    volatile dword waitTo = millis() + time;
    //if(time > 50) CDC_loop();
    while (waitTo > millis()) { if(time > 50) CDC_loop(); }
}

#include "../../common/ticker.c"
