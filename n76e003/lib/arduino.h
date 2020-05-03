#ifndef __SDCC_51_A__
#define __SDCC_51_A__

#define FOSC_160000

#include "../../common/buffer.h"
#include "../../common/exttypes.h"
#include "../../common/utility.h"
#include "N76E003.h"

#include "gpio.h"
#include "i2c.h"
#include "spi.h"
#include "ticker.h"
#include "uart.h"
#include "eeprom.h"

extern void setup(void);
extern void loop(void);

#endif
