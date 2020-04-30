#ifndef __SDCC_51_A_CDC__
#define __SDCC_51_A_CDC__
#include "../../common/exttypes.h"
#include <stdarg.h>
#include "../../common/serialtemplate.h"
#include "../../common/buffer.h"
#include <stdio.h>

void SerialBegin(dword speed);

// print byte to Serial (CDC)
void SerialPutc(byte c);


void SerialPrintf(byte* format,...);

// read byte from serial
#define SerialRead() cbGet(Serial)

// Check. If in Serial buffer has chars, return it qwantity, else 0.
#define SerialAvailable() cbCount(Serial)


void CDCReceive(void);
void CDCSend(void);

#endif
