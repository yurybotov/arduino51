#ifndef __SDCC_51_A_GPIO__
#define __SDCC_51_A_GPIO__

#include "exttypes.h"
#include "stdbool.h"

#define GPIO_PXX(PORT, PIN) (PORT + (PIN << 4))
#define GPIO_PIN(P) ((P >> 4) & 0xF)
#define GPIO_PORT(P) (P & 0xF)

#define P11 GPIO_PXX(1, 1)
#define P14 GPIO_PXX(1, 4)
#define P15 GPIO_PXX(1, 5)
#define P16 GPIO_PXX(1, 6)
#define P17 GPIO_PXX(1, 7)
#define P30 GPIO_PXX(3, 0)
#define P31 GPIO_PXX(3, 1)
#define P32 GPIO_PXX(3, 2)
#define P33 GPIO_PXX(3, 3)
#define P34 GPIO_PXX(3, 4)
#define P36 GPIO_PXX(3, 6)
#define P37 GPIO_PXX(3, 7)

#define A11 P11
#define A14 P14
#define A15 P15
#define A32 P32

#define INPUT 0
#define PUSHPULL 1
#define OUTPUT PUSHPULL
#define OPENDRAIN 2
#define BIDIRECTIONAL 3

#define GPIO_SET_BIT(PORT, BIT, VALUE) \
    if (VALUE) {                       \
        PORT |= 1 << (BIT);            \
    } else {                           \
        PORT &= ~(1 << (BIT));         \
    }

void pinMode(byte pin, byte mode);
bool digitalRead(byte pin);
void digitalWrite(byte pin, bool value);
word analogRead(byte pin);
void analogWrite(byte pin, word value);

#endif