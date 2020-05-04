#ifndef __SDCC_51_A__
#define __SDCC_51_A__

#include "ch554.h"
#include "gpio.h"
#include "ticker.h"

#if defined(USE_SEROAL0) || defined(USE_SERIAL1) || defined(USE_SERIAL)
#include "../../common/buffer.h"
#endif

#if defined(USE_SEROAL0) || defined(USE_SERIAL1)
#include "uart.h"
#endif

#ifdef USE_SERIAL
#include "cdc.h"
#endif

#ifdef USE_EEPROM
#include "eeprom.h"
#endif

void setup(void);
void loop(void);

#endif
