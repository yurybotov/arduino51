#ifndef __SDCC_51_A_CDC__
#define __SDCC_51_A_CDC__
#include "../../common/exttypes.h"
#include "ticker.h"

void CDC_init(void);
void CDC_loop(void);
void USBDeviceEndPointCfg(void);
void USBDeviceIntCfg(void);
void USBDeviceCfg(void);

void SerialBegin(word speed);

// print byte to Serial (CDC)
void putc(byte c);

// print string or format string with digits to CDC. Supports (%d %x %o)<long (%b)<short
void uprintf(byte* str, ...);

// read byte from Serial
byte getc(void);
#define SerialRead getc

// Check. If in Serial buffer has chars, return it qwantity, else 0.
word SerialAvailable();

/*
#ifndef UART1_BAUD
#define  UART1_BAUD    9600
#endif
void UART1Setup(void);
void Config_Uart1(uint8_t cfg_uart[]);*/

#endif