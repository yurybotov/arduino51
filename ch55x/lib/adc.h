#include "../../common/exttypes.h"
//#define ADC_INTERRUPT   1 

/*******************************************************************************
* Function Name  : ADCClkSet(UINT8 div)
* Description    : ADC����ʱ������,ģ�鿪�����жϿ���
* Input          : UINT8 div ʱ������ 
                   0 ��  384��Fosc                   								
                   1 ��  96��Fosc									 
* Output         : None
* Return         : None
*******************************************************************************/
void ADCInit(uint8_t div);

/*******************************************************************************
* Function Name  : ADC_ChannelSelect(UINT8 ch)
* Description    : ADC����ͨ������
* Input          : UINT8 ch ����ͨ��0-3
* Output         : None
* Return         : �ɹ� SUCCESS
                   ʧ�� FAIL ͨ�����ó�����Χ
*******************************************************************************/
uint8_t ADC_ChannelSelect(uint8_t ch);

/*******************************************************************************
* Function Name  : VoltageCMPModeInit()
* Description    : ��ѹ�Ƚ���ģʽ��ʼ��
* Input          : UINT8 fo ����˿� 0\1\2\3
                   UINT8 re ����˿� 1\3
* Output         : None
* Return         : �ɹ� SUCCESS
                   ʧ�� FAIL
*******************************************************************************/
uint8_t VoltageCMPModeInit(uint8_t fo,uint8_t re);
