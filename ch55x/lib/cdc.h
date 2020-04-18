#ifndef __SDCC_51_A_CDC__
#define __SDCC_51_A_CDC__
#include "../../common/exttypes.h"
#include "ticker.h"

void CDC_init(void);
void USBDeviceEndPointCfg(void);
void USBDeviceIntCfg(void);
void USBDeviceCfg(void);


#ifndef UART1_BAUD
#define  UART1_BAUD    9600
#endif
void UART1Setup(void);
void Config_Uart1(uint8_t cfg_uart[]);

#endif