#ifndef __SDCC_51_A_CDC__
#define __SDCC_51_A_CDC__
#include "config.h"
#include "../../common/buffer.h"
#include "../../common/exttypes.h"
#include "../../common/serialtemplate.h"
#include <stdarg.h>
#include <stdio.h>

#ifdef USE_SERIAL

void SerialBegin(dword speed);

// print byte to Serial (CDC)
void SerialPutc(byte c);

void SerialPrintf(byte* format, ...);

// read byte from serial
#define SerialRead() cbGet(Serial)

// Check. If in Serial buffer has chars, return it qwantity, else 0.
#define SerialAvailable() cbCount(Serial)

void CDCReceive(void);
void CDCSend(void);

#endif

#endif
