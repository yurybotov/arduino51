#include "uart.h"
#include "../../common/buffer.h"
#include "../../common/utility.h"
#include "stc8.h"
#include "gpio.h"
#include <stdio.h>

#ifdef USE_SERIAL0

byte busy1 = 0;
byte busy2 = 0;

// void UART1_ISR(void) __interrupt(INT_NO_UART1)
void UART1_ISR(void) __interrupt(INT_NO_UART1) {
    if (TI) {
        TI = 0;
        busy1 = 0;
    }
    if (RI) {
        RI = 0;
        cbPut(SBUF, Serial0);
    }
}
//void Serial0Putc(byte c)
void Serial0Putc(byte c) {
    while (busy1);
    busy1 = 1;
    SBUF = c;
}

// void Serial0Printf(const byte* format,...)
implements_printf(Serial0)

void Serial0Begin(dword speed) {
    word coef = 65536 - (6000000 / speed);
    pinMode(D31,BIDIRECTIONAL);
    pinMode(D30,BIDIRECTIONAL);
    digitalWrite(D31,HIGH);
    digitalWrite(D30,HIGH);

	SCON = 0x50;		//8bit and variable baudrate
	AUXR |= 0x40;		//Timer1's clock is Fosc (1T)
	AUXR &= 0xFE;		//Use Timer1 as baudrate generator
	TMOD &= 0x0F;		//Set Timer1 as 16-bit auto reload mode
	TL1 = lowByte(coef);		//Initial timer value
	TH1 = highByte(coef);		//Initial timer value
	ET1 = 0;		//Disable Timer1 interrupt
    ES = 1;
    EA = 1;
	TR1 = 1;		//Timer1 running    
}

#endif

#ifdef USE_SERIAL1

// void UART2_ISR(void) __interrupt(INT_NO_UART2)
void UART2_ISR(void) __interrupt(INT_NO_UART2) {
    if (S2CON & 2) {
        S2CON &= ~2;
        busy2 = 0;
    }
    if (S2CON & 1) {
        S2CON &= ~1;
        cbPut(S2BUF, Serial1);
    }
}
//void Serial1Putc(byte c)
void Serial1Putc(byte c) {
    while (busy2);
    busy2 = 1;
    S2BUF = c;
}

// void Serial1Printf(const byte* format,...)
implements_printf(Serial1)

void Serial1Begin(dword speed) {
    word coef = 65536 - (6000000 / speed);
    pinMode(D11,BIDIRECTIONAL);
    pinMode(D10,BIDIRECTIONAL);
    digitalWrite(D11,HIGH);
    digitalWrite(D10,HIGH);

    S2CON = 0x50;		//8bit and variable baudrate
	AUXR |= 0x04;		//Timer2's clock is Fosc (1T)
	T2L = lowByte(coef);		//Initial timer value
	T2H = highByte(coef);		//Initial timer value
	AUXR |= 0x10;		//Timer2 running
    IE2 |= ES2;
    EA = 1;  
}

#endif
