#ifndef __SDCC_51_A_GPIO__
#define __SDCC_51_A_GPIO__

#include "../../common/exttypes.h"
#include "../../common/utility.h"

#define GPIO_PXX(PORT, PIN) (PORT + (PIN << 2))
#define GPIO_PIN(P) ((P >> 2) & 0x7)
#define GPIO_PORT(P) (P & 0x3)

#define GPIO_PWM(M) ((M & 0x80) == 0x80)
#define GPIO_ADC(M) ((M & 0x40) == 0x40)

#define D05 GPIO_PXX(0, 5)
#define D06 GPIO_PXX(0, 6)
#define D07 GPIO_PXX(0, 7)
#define D20 GPIO_PXX(2, 0)
#define D30 GPIO_PXX(3, 0)
#define D17 GPIO_PXX(1, 7)
#define D16 GPIO_PXX(1, 6)
#define D15 GPIO_PXX(1, 5)
#define D14 GPIO_PXX(1, 4) // led
#define D13 GPIO_PXX(1, 3)
#define D12 GPIO_PXX(1, 2)
#define D11 GPIO_PXX(1, 1)
#define D10 GPIO_PXX(1, 0)
#define D00 GPIO_PXX(0, 0)
#define D01 GPIO_PXX(0, 1)
#define D02 GPIO_PXX(0, 2)
#define D03 GPIO_PXX(0, 3)
#define D04 GPIO_PXX(0, 4)

#define INPUT 2
#define PUSHPULL 1
#define OUTPUT PUSHPULL
#define OPENDRAIN 3
#define BIDIRECTIONAL 0
#define ADC (0x40 + 2)
#define PWM (0x80 + 1)

// called on start in main.c
void pwm_init(void);

// pin mode set
void pinMode(byte pin, byte mode);

// reads state of Dxx pins
byte digitalRead(byte pin);

// write value to Dxx pins
void digitalWrite(byte pin, byte value);

// read ADC value on Dxx pin, read range [0...4095]
word analogRead(byte pin);

// set PWM value to Dxx pin, value can be in range of [0...2047]
void analogWrite(byte pin, word value);

#endif