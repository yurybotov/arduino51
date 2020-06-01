#ifndef __SDCC_51_A_GPIO__
#define __SDCC_51_A_GPIO__
#include "config.h"

#include "../../common/exttypes.h"
#include "../../common/utility.h"

#define GPIO_PXX(PORT, PIN) (PORT + (PIN << 3))
#define GPIO_PIN(P) ((P >> 3) & 0x7)
#define GPIO_PORT(P) (P & 0x7)


#define D10 GPIO_PXX(1, 0)
#define D11 GPIO_PXX(1, 1)
#define D12 GPIO_PXX(1, 2)
#define D13 GPIO_PXX(1, 3)
#define D14 GPIO_PXX(1, 4)
#define D15 GPIO_PXX(1, 5)
#define D16 GPIO_PXX(1, 6)
#define D17 GPIO_PXX(1, 7)
#define D30 GPIO_PXX(3, 0)
#define D31 GPIO_PXX(3, 1)
#define D32 GPIO_PXX(3, 2)
#define D33 GPIO_PXX(3, 3)
#define D34 GPIO_PXX(3, 4)
#define D35 GPIO_PXX(3, 5)
#define D36 GPIO_PXX(3, 6)
#define D37 GPIO_PXX(3, 7)
#define D54 GPIO_PXX(5, 4)
#define D55 GPIO_PXX(5, 5)

#define INPUT 2
#define PUSHPULL 1
#define OUTPUT PUSHPULL
#define OPENDRAIN 3
#define BIDIRECTIONAL 0

// pin mode set
void pinMode(byte pin, byte mode);

// reads state of Dxx pins
byte digitalRead(byte pin);

// write value to Dxx pins
void digitalWrite(byte pin, byte value);

#endif