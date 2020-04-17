#ifndef __SDCC_51_A__
#define __SDCC_51_A__

#define FOSC_160000

#include "N76E003.h"
#include "utility.h"
#include "exttypes.h"

#include "gpio.h"
#include "ticker.h"
#include "uart.h"
#include "spi.h"

extern void setup( void);
extern void loop( void);

#endif