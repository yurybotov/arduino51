
/********************************** (C) COPYRIGHT *******************************
* File Name          : ADC.C
* Author             : WCH
* Version            : V1.0
* Date               : 2019/07/22
* Description        : CH554 ADC����ʱ�����ã�ADCͨ�����ú�������ѹ�Ƚ�ģʽ���� 
*******************************************************************************/

#include "ch554.h"                                                          
#include "adc.h"
#include "stdio.h"

//#define ADC_INTERRUPT  1
uint16_t UserData;
/*******************************************************************************
* Function Name  : ADCInit(uint8_t div)
* Description    : ADC����ʱ������,ģ�鿪�����жϿ���
* Input          : uint8_t div ʱ������ 
                   1 ��  384��Fosc                   								
                   0 ��  96��Fosc									 
* Output         : None
* Return         : None
*******************************************************************************/
void ADCInit(uint8_t div)
{
    ADC_CFG &= ~bADC_CLK | div;
    ADC_CFG |= bADC_EN;                                                        //ADC��Դʹ��
#if ADC_INTERRUPT
    ADC_IF = 0;                                                                //����ж�
    IE_ADC = 1;                                                                //ʹ��ADC�ж�
#endif
}

/*******************************************************************************
* Function Name  : ADC_ChannelSelect(uint8_t ch)
* Description    : ADC��������
* Input          : uint8_t ch ����ͨ��
* Output         : None
* Return         : �ɹ� SUCCESS
                   ʧ�� FAIL
*******************************************************************************/
uint8_t ADC_ChannelSelect(uint8_t ch)
{
    if(ch == 0){ADC_CHAN1 =0;ADC_CHAN0=0;P1_DIR_PU &= ~bAIN0;}                 //AIN0
    else if(ch == 1){ADC_CHAN1 =0;ADC_CHAN0=1;P1_DIR_PU &= ~bAIN1;}            //AIN1
    else if(ch == 2){ADC_CHAN1 =1;ADC_CHAN0=0;P1_DIR_PU &= ~bAIN2;}            //AIN2
    else if(ch == 3){ADC_CHAN1 =1;ADC_CHAN0=1;P3_DIR_PU &= ~bAIN3;}            //AIN3
    else return 0;
    return 1;
}

/*******************************************************************************
* Function Name  : VoltageCMPModeInit()
* Description    : ��ѹ�Ƚ���ģʽ��ʼ��
* Input          : uint8_t fo ����˿� 0\1\2\3
                   uint8_t re ����˿� 1\3
* Output         : None
* Return         : �ɹ� SUCCESS
                   ʧ�� FAIL
*******************************************************************************/
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
#if ADC_INTERRUPT
    CMP_IF = 0;                                                                //����ж�
    IE_ADC = 1;                                                                //ʹ��ADC�ж�
#endif

     return 1;
}

#if ADC_INTERRUPT
/*******************************************************************************
* Function Name  : ADCInterrupt(void)
* Description    : ADC �жϷ������
*******************************************************************************/
void ADCInterrupt( void ) __interrupt (INT_NO_ADC) {                       //ADC�жϷ������,ʹ�üĴ�����1
    if(ADC_IF ==  1) {                                                          //ADC����ж�
      UserData = ADC_DATA;                                                    //ȡ��ADC��������
      ADC_IF = 0;		                                                          //���ADC�жϱ�־
	  printf(" %d ",UserData);
    }
    if(CMP_IF ==  1) {                                                       //��ѹ�Ƚ�����ж�	
//       UserData = ADC_CTRL&0x80 >> 7);	                                        //����Ƚ������		
      CMP_IF = 0;		                                                          //��ձȽ�������ж�
    }
}
#endif

