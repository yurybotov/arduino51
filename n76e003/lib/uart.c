#include "uart.h"
#include "../../common/buffer.h"
#include "../../common/utility.h"
#include "Function_define.h"
#include "N76E003.h"
#include "SFR_macro.h"
#include <stdio.h>


// void UART0_ISR(void) __interrupt(INT_NO_UART0)
implements_isr(Serial0, UART0, SBUF, RI)

    //void Serial0Putc(byte c)
    implements_putc(Serial0, SBUF, TI)

    // void Serial0Printf(const byte* format,...)
    implements_printf(Serial0)

        void Serial0Begin(dword speed) {
    byte coef = 256 - (1000000 / speed);
    P06_Quasi_Mode;
    set_P06;
    P07_Quasi_Mode;
    set_P07;
    SCON = 0x50;
    TMOD |= 0x20;
    set_SMOD;
    set_T1M;
    clr_BRCK;
    TH1 = coef;
    TL1 = coef;
    set_TR1;
    clr_TI;
    set_ES;
    set_EA;
}

// void UART1_ISR(void) __interrupt(INT_NO_UART1)
implements_isr(Serial1, UART1, SBUF_1, RI_1)

    //void Serial1Putc(byte c)
    implements_putc(Serial1, SBUF_1, TI_1)

    // void Serial1Printf(const byte* format,...)
    implements_printf(Serial1)

        void Serial1Begin(dword speed) {
    P02_Quasi_Mode;
    set_P02;
    P16_Quasi_Mode;
    set_P16;
    SCON_1 = 0x50;
    T3CON = 0x08;
    clr_BRCK;
    RH3 = highByte(65536 - (1000000 / speed));
    RL3 = lowByte(65536 - (1000000 / speed));
    set_TR3;
    set_ES_1;
    set_EA;
}
