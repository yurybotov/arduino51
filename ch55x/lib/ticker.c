#include "ticker.h"
#include "gpio.h"
#include "../../common/utility.h"
#include "ch554.h"

const byte th0 = 0xfa;
const byte tl0 = 0xca;

volatile unsigned long milliseconds;    // ISR counter variable.
volatile unsigned char quarta;

void Timer0_ISR(void) __interrupt (INT_NO_TMR0) {
    TH0 = th0;
    TL0 = tl0;
    milliseconds++;        // Increment counter variable.
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

#include "../../common/ticker.c"
