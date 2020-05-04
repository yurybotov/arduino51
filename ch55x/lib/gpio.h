#ifndef __SDCC_51_A_GPIO__
#define __SDCC_51_A_GPIO__
#include "config.h"
#include "../../common/exttypes.h"
#include "../../common/utility.h"

#define GPIO_PXX(PORT, PIN) (PORT + (PIN << 2))
#define GPIO_PIN(P) ((P >> 2) & 0x7)
#define GPIO_PORT(P) (P & 0x3)

#ifdef USE_PWM
#define GPIO_PWM(M) ((M & 0x80) == 0x80)
#endif
#ifdef USE_ADC
#define GPIO_ADC(M) ((M & 0x40) == 0x40)
#endif

#define D11 GPIO_PXX(1, 1)
#define D14 GPIO_PXX(1, 4)
#define D15 GPIO_PXX(1, 5)
#define D16 GPIO_PXX(1, 6)
#define D17 GPIO_PXX(1, 7)
#define D30 GPIO_PXX(3, 0)
#define D31 GPIO_PXX(3, 1)
#define D32 GPIO_PXX(3, 2)
#define D33 GPIO_PXX(3, 3)
#define D34 GPIO_PXX(3, 4)
#define D36 GPIO_PXX(3, 6)
#define D37 GPIO_PXX(3, 7)

#define INPUT 0
#define PUSHPULL 1
#define OUTPUT PUSHPULL
#define OPENDRAIN 2
#define BIDIRECTIONAL 3
#ifdef USE_ADC
#define ADC (0x40 + 0)
#endif
#ifdef USE_PWM
#define PWM (0x80 + 1)
#endif

// called on start in main.c
#ifdef USE_PWM
void pwm_init(void);
#endif

// pin mode set
void pinMode(byte pin, byte mode);

// reads state of Dxx pins
byte digitalRead(byte pin);

// write value to Dxx pins
void digitalWrite(byte pin, byte value);

// read ADC value on Axx pin, read range [0...255]
#ifdef USE_ADC
word analogRead(byte pin);
#endif

#ifdef USE_PWM
// set PWM value to PWMxx pin, value can be in range of [0...255]
void analogWrite(byte pin, word value);
#endif

#endif