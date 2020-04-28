#ifndef __SDCC_51_A_I2C__
#define __SDCC_51_A_I2C__
#include "../../common/exttypes.h"

void I2CBeginSlave(byte address);
void I2CBeginMaster();
void I2CBeginTransmission(byte address);
void I2CEndTransmission(void);
void I2CWrite(byte b);
#define I2CAvailable() cbCount(I2C)
#define I2CRead() cbGet(I2C)
void I2CRequestFrom(byte address, byte quantity, byte stop);

#define I2C_STANDART 100000
#define I2C_FAST 400000
#define I2C_LOW  40000
#define I2C_HIGHSPEED 1000000

void I2CSetClock(dword speed);

void I2COnReceive(void (*handler)(byte)); // if master
void I2COnRequest(void (*handler)(byte)); // if slave

#endif

// not realised!
