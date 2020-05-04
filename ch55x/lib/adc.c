#include "adc.h"
#include "ch554.h"

#ifdef USE_ADC

__xdata uint16_t UserData;

uint8_t ADC_ChannelSelect(uint8_t ch) {
    if (ch == 0) {
        ADC_CHAN1 = 0;
        ADC_CHAN0 = 0;
        P1_DIR_PU &= ~bAIN0;
    } //AIN0
    else if (ch == 1) {
        ADC_CHAN1 = 0;
        ADC_CHAN0 = 1;
        P1_DIR_PU &= ~bAIN1;
    } //AIN1
    else if (ch == 2) {
        ADC_CHAN1 = 1;
        ADC_CHAN0 = 0;
        P1_DIR_PU &= ~bAIN2;
    } //AIN2
    else if (ch == 3) {
        ADC_CHAN1 = 1;
        ADC_CHAN0 = 1;
        P3_DIR_PU &= ~bAIN3;
    } //AIN3
    else
        return 0;
    return 1;
}

#endif
