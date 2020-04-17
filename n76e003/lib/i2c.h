#ifndef __SDCC_51_A_I2C__
#define __SDCC_51_A_I2C__
#include "exttypes.h"

void I2CBegin(byte address);
void I2CBeginTransmission(byte address);
void I2CEndTransmission(void);
void I2CWrite(byte b);
byte I2CAvailable(void);
byte I2CRead(void);
byte I2CRequestFrom(byte address, byte quantity, byte stop);

#define I2C_STANDART
#define I2C_FAST
#define I2C_LOW
#define I2C_HIGHSPEED

void I2CSetClock();

void I2COnReceive( void (*handler)(byte)); // if master
void I2COnRequest( void (*handler)(byte)); // if slave


#endif