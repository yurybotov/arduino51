#ifndef __SDCC_51_A_I2C__
#define __SDCC_51_A_I2C__
#include "config.h"
#include "../../common/exttypes.h"
#include <stdbool.h>

#define I2C_STANDART 100000
#define I2C_FAST 400000
#define I2C_SLOW 40000
#define I2C_HIGHSPEED 1000000

#define I2CAvailable() cbCount(I2C)
#define I2CRead() cbGet(I2C)

#ifdef USE_I2C_SLAVE
void I2CBeginSlave(byte address);
void I2CSetClock(dword speed);

void I2COnRequest(void (*handler)(byte));
//void I2CDefaultHandler(byte c);

#endif

#ifdef USE_I2C
void I2CBeginMaster();
void I2CBeginTransmission(byte address);
void I2CEndTransmission(void);
void I2CWrite(byte b);
void I2CRequestFrom(byte address, byte quantity, byte stop);
void I2CSetClock(dword speed);
//void I2COnReceive(void (*handler)(byte)); // if master
#endif

#endif
// 
