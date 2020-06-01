#include "arduino.h"

void Timer0_ISR(void) __interrupt(INT_NO_TIMER0);

#ifdef USE_SERIAL0
void UART1_ISR(void) __interrupt(INT_NO_UART1);
#endif
#ifdef USE_SERIAL1
void UART2_ISR(void) __interrupt(INT_NO_UART2);
#endif
#ifdef USE_PIN_INTERRUPT
//void PIN_INTERRUPT_ISR(void) __interrupt (INT_NO_PIF);
#endif

void main() {
#if defined(USE_SERIAL0) || defined(USE_SERIAL1) || defined(USE_I2C)    
    cbInit();
#endif
    ticker_init();

    setup();
    while (1) {
        loop();
    }
}
