#include "ticker.h"
#include "Function_define.h"
#include "N76E003.h"
#include "SFR_macro.h"
#include "gpio.h"
#include "../../common/utility.h"

volatile dword milliseconds;

const byte th0 = 0xfa;
const byte tl0 = 0xca;

void Timer0_ISR(void) __interrupt(1) {
    TH0 = th0;
    TL0 = tl0;
    milliseconds++;
}

void ticker_init(void) {
    milliseconds = 0;
    TIMER0_MODE1_ENABLE;
    TH0 = th0;
    TL0 = tl0;
    set_ET0;
    set_EA;
    set_TR0;
}

#include "../../common/ticker.c"
