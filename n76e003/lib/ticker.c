#include "ticker.h"
#include "Function_define.h"
#include "N76E003.h"
#include "SFR_macro.h"
#include "gpio.h"
#include "../../common/utility.h"

const byte period = 0x5F;

volatile unsigned long milliseconds;
volatile unsigned char microsecondsTens;

void Timer0_ISR(void) __interrupt(1) {
    microsecondsTens++;
    if(microsecondsTens == 100) {
        microsecondsTens = 0;
        milliseconds++;
    } 
}

void ticker_init(void) {
    microsecondsTens = 0;
    milliseconds = 0;
    TIMER0_MODE2_ENABLE;
    TH0 = period;
    TL0 = period;
    set_T0M;
    set_ET0;
    set_EA;
    set_TR0;
}

#include "../../common/ticker.c"
