#include "ticker.h"
#include "../../common/utility.h"
#include "stc8.h"
#include "gpio.h"

volatile unsigned long milliseconds;
volatile unsigned char microsecondsTens;

void Timer0_ISR(void) __interrupt(1) {
    TL0 = 0x10;		//Initial timer value
	TH0 = 0xFF;		//Initial timer value
    microsecondsTens++;
    if (microsecondsTens == 100) {
        microsecondsTens = 0;
        milliseconds++;
    }
}

void ticker_init(void) {
    microsecondsTens = 0;
    milliseconds = 0;
	AUXR |= 0x80;		//Timer clock is 1T mode
	TMOD &= 0xF0;		//Set timer work mode
	TL0 = 0x10;		//Initial timer value
	TH0 = 0xFF;		//Initial timer value
	TF0 = 0;		//Clear TF0 flag
	TR0 = 1;		//Timer0 start run
    ET0 = 1;        //Timer0 enable interrupt
    EA = 1;
}

#include "../../common/ticker.c"
