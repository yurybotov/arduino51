#include "arduino.h"

void Timer0_ISR(void) __interrupt(INT_NO_TMR0);
void UART0_ISR(void) __interrupt(INT_NO_UART0);
void UART1_ISR(void) __interrupt(INT_NO_UART1);

byte BIT_TMP;

void main() {
    cbInit();
    ticker_init();
    pwm_init();
    setup();
    while (1) {
        loop();
    }
}
