#include "ticker.h"
#include "gpio.h"
#include "../../common/utility.h"
#include "ch554.h"

#define LED1_PIN 7
SBIT(LED, 0x90, LED1_PIN);

volatile unsigned long milliseconds;    // ISR counter variable.
volatile unsigned char quarta;

void Timer0_ISR(void) __interrupt (INT_NO_TMR0) {
    LED = !LED;
/*    quarta++;
    if(quarta > 4) {
        quarta = 0;
        milliseconds++;        // Increment counter variable.
    }*/
    //TF0 = 0;
}

void ticker_init(void) {
    milliseconds = 0;
    quarta = 0;
    TR0 = 0;
    TF0 = 0;
    TMOD = 2;
    TH0 = 127;
    TL0 = 127;
    ET0 = 1;
    EA = 1;
    TR0 = 1;
}

#include "../../common/ticker.c"
