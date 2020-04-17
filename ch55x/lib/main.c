#include "arduino.h"

void Timer0_ISR(void) __interrupt (INT_NO_TMR0);

void main() {
    CfgFsys();
    ticker_init();
    setup();
    while(1) { 
        loop();
    }
}