#include "uart.h"
#include "ch554.h"
#include "gpio.h"
#include <stdio.h>
#include "../../common/buffer.h"

// void UART0_ISR(void) __interrupt(INT_NO_UART0)
implements_isr(Serial0,UART0,SBUF,RI)

//void Serial0Putc(byte c)
implements_putc(Serial0,SBUF,TI)

// byte Serial0Getc(void)
//implements_getc(Serial0)

// word Serial0Available()
//implements_available(Serial0)

// void Serial0Printf(const byte* format,...)
implements_printf(Serial0)

void Serial0Begin(dword speed) {
    byte coef = 256 - (1500000 / speed);
    P3 |= bTXD | bRXD;
    P3_DIR_PU |= bTXD | bRXD;
    P3_MOD_OC |= bTXD | bRXD;    
    SM0 = 0;
    SM1 = 1;
    SM2 = 0;
    REN = 1;
    RCLK = 0;
    TCLK = 0;
    T2MOD |= bTMR_CLK | bT1_CLK;
    PCON |= SMOD;
    TMOD &= ~bT1_GATE;
    TMOD &= ~bT1_CT;
    TMOD |= bT1_M1;
    TMOD &= ~bT1_M0;
    TH1 = coef;
    TL1 = coef;
    TR1 = 1;
    TI = 1;
    ES = 1;
    EA = 1;
}

// void UART1_ISR(void) __interrupt(INT_NO_UART1)
implements_isr(Serial1,UART1,SBUF1,U1RI)

//void Serial1Putc(byte c)
implements_putc(Serial1,SBUF1,U1TI)

// byte Serial1Getc(void)
//implements_getc(Serial1)

// word Serial1Available()
//implements_available(Serial1)

// void Serial1Printf(const byte* format,...)
implements_printf(Serial1)

void Serial1Begin(dword speed) {  
    P1 |= bTXD1 | bRXD1;
    P1_DIR_PU |= bTXD1 | bRXD1;
    P1_MOD_OC |= bTXD1 | bRXD1;
    U1SMOD = 1;
    SBAUD1 = 256 - (uint8_t)(1500000 / speed);
    U1SM0 = 0;
    U1REN = 1;  
    IE_UART1 = 1;
    EA = 1; 
}
