#ifndef __SDCC_51_A_GPIO__
#define __SDCC_51_A_GPIO__

#include "../../common/exttypes.h"
#include "../../common/utility.h"

#define GPIO_PXX(PORT, PIN) (PORT + (PIN << 4))
#define GPIO_PIN(P) ((P >> 4) & 0xF)
#define GPIO_PORT(P) (P & 0xF)
#define GPIO_PWM(P) ((P & 0x80) == 0x80)
#define GPIO_ADC(P) ((P & 0x40) == 0x40)

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

#define A11 (P11 | 0x40)
#define A14 (P14 | 0x40)
#define A15 (P15 | 0x40)
#define A32 (P32 | 0x40)

#define PWM15 (P15 | 0x80) // pwm1
#define PWM30 (P30 | 0x80) // pwm1
#define PWM34 (P34 | 0x80) // pwm2
#define PWM31 (P31 | 0x80) // pwm2

#define INPUT 0
#define PUSHPULL 1
#define OUTPUT PUSHPULL
#define OPENDRAIN 2
#define BIDIRECTIONAL 3

// called on start in main.c
void pwm_init(void);

// pin mode set
void pinMode(byte pin, byte mode);

// reads state of Dxx pins
byte digitalRead(byte pin);

// write value to Dxx pins
void digitalWrite(byte pin, byte value);

// read ADC value on Axx pin, read range [0...4095]
word analogRead(byte pin);

// set PWM value to PWMxx pin, value can be in range of [0...2047]
void analogWrite(byte pin, word value);

#endif