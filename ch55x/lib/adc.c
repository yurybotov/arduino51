
#include "ch554.h"                                                          
#include "adc.h"
#include "stdio.h"

__xdata uint16_t UserData;

void ADCInit(uint8_t div)
{
    ADC_CFG &= ~bADC_CLK | div;
    ADC_CFG |= bADC_EN;                                                        //ADC��Դʹ��
}

uint8_t ADC_ChannelSelect(uint8_t ch)
{
    if(ch == 0){ADC_CHAN1 =0;ADC_CHAN0=0;P1_DIR_PU &= ~bAIN0;}                 //AIN0
    else if(ch == 1){ADC_CHAN1 =0;ADC_CHAN0=1;P1_DIR_PU &= ~bAIN1;}            //AIN1
    else if(ch == 2){ADC_CHAN1 =1;ADC_CHAN0=0;P1_DIR_PU &= ~bAIN2;}            //AIN2
    else if(ch == 3){ADC_CHAN1 =1;ADC_CHAN0=1;P3_DIR_PU &= ~bAIN3;}            //AIN3
    else return 0;
    return 1;
}

uint8_t VoltageCMPModeInit(uint8_t fo,uint8_t re)
{
    ADC_CFG |= bCMP_EN;                                                        //��ƽ�Ƚϵ�Դʹ��
    if(re == 1){
      if(fo == 0) {ADC_CHAN1 =0;ADC_CHAN0=0;CMP_CHAN =0;}                      //AIN0��AIN1
      else if(fo == 2) {ADC_CHAN1 =1;ADC_CHAN0=0;CMP_CHAN =0;}                 //AIN2��AIN1
      else if(fo == 3) {ADC_CHAN1 =1;ADC_CHAN0=1;CMP_CHAN =0; }                //AIN3��AIN1			
      else return 0;
    }			     
    else if(re == 3){
      if(fo == 0) {ADC_CHAN1 =0;ADC_CHAN0=0;CMP_CHAN =0;}                      //AIN0��AIN1
      else if(fo == 1) {ADC_CHAN1 =0;ADC_CHAN0=1;CMP_CHAN =0;}                 //AIN1��AIN1
      else if(fo == 2) {ADC_CHAN1 =1;ADC_CHAN0=0;CMP_CHAN =0;}                 //AIN2��AIN1			
      else return 0;
    }
    else return 0;
    return 1;
}
