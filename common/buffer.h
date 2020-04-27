#ifndef __SDCC_51_A_BUFFER__
#define __SDCC_51_A_BUFFER__
#include "exttypes.h"

enum DEVICES {BLANK,Serial0,Serial1,I2C,Serial};

#define COMMONBUFFERSIZE 128

void cbInit(void);
byte cbFull(void);
void cbPut(byte b, enum DEVICES device);
byte cbGet(enum DEVICES device);
byte cbCount(enum DEVICES device);

#endif