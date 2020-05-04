#ifndef __SDCC_51_A_ADC__
#define __SDCC_51_A_ADC__
#include "config.h"
#include "../../common/exttypes.h"

#ifdef USE_ADC

#define ADCInit(div) ADC_CFG &= ~bADC_CLK | div; ADC_CFG |= bADC_EN;

uint8_t ADC_ChannelSelect(uint8_t ch);

#endif

#endif
