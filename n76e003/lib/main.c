#include "ardun76e003.h"

void Timer0_ISR(void) __interrupt (1);
void SerialPort0_ISR(void) __interrupt (4);

byte BIT_TMP;

void main() {
    ticker_init();
    pwm_init();
    setup();
    while(1) { 
        loop();
    }
}
