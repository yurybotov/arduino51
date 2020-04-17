#ifndef __SDCC_51_A_TIMER__
#define __SDCC_51_A_TIMER__

void ticker_init(void);

unsigned long millis();
void delay(unsigned long time);

#endif
