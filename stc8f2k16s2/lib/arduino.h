#ifndef __SDCC_51_A__
#define __SDCC_51_A__
#include "config.h"

//#define FOSC_160000
#include "stc8.h"

#include "../../common/exttypes.h"
#include "../../common/utility.h"


#include "gpio.h"
#include "ticker.h"

#ifdef USE_I2C
//#include "i2c.h"
#endif

#ifdef USE_SPI
//#include "spi.h"
#endif

#if defined(USE_SERIAL0) || defined(USE_SERIAL1)
#include "uart.h"
#endif

#if defined(USE_SERIAL0) || defined(USE_SERIAL1) || defined(USE_I2C)
#include "../../common/buffer.h"
#endif

#ifdef USE_EEPROM
//#include "eeprom.h"
#endif

#ifdef USE_PIN_INTERRUPT
//#include "pinterrupt.h"
#endif

extern void setup(void);
extern void loop(void);

#endif
