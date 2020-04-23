#ifndef __SDCC_51_A_CDC__
#define __SDCC_51_A_CDC__
#include "../../common/exttypes.h"
#include "stdarg.h"
#include "ticker.h"

void CDC_init(void);
void CDC_loop(void);
void USBDeviceEndPointCfg(void);
void USBDeviceIntCfg(void);
void USBDeviceCfg(void);

void SerialBegin(word speed);

// print byte to Serial (CDC)
void SerialPutc(byte c);


void SerialPrintf(byte* format,...);

// read byte from Serial
byte SerialGetc(void);
#define SerialRead SerialGetc

// Check. If in Serial buffer has chars, return it qwantity, else 0.
word SerialAvailable();

#endif
