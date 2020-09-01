#ifndef __SDCC_51_A_BUFFER__
#define __SDCC_51_A_BUFFER__
#include "config.h"
#include "exttypes.h"

#if defined(USE_SERIAL0) || defined(USE_SERIAL1) || defined(USE_I2C) || defined(USE_I2C_SLAVE) || defined(USE_SERIAL)

enum DEVICES { 
    BLANK,
    Serial0,
    Serial1,
    I2C,
    I2COUT,
    Serial
};

#define COMMONBUFFERSIZE 128

void cbInit(void);
byte cbFull(void);
void cbPut(byte b, enum DEVICES device);
byte cbGet(enum DEVICES device);
byte cbCount(enum DEVICES device);

#endif

#endif