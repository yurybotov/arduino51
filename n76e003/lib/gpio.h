#ifndef __SDCC_51_A_GPIO__
#define __SDCC_51_A_GPIO__

#include "exttypes.h"
#include "utility.h"

#define GPIO_PXX(PORT, PIN) (PORT + (PIN << 2))
#define GPIO_PIN(P) ((P >> 2) & 0x7)
#define GPIO_PORT(P) (P & 0x3)
#define GPIO_PWM(P) ((P & 0x80) == 0x80)
#define GPIO_ADC(P) ((P & 0x40) == 0x40)

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

#define A17 (D17 | 0x40) // 1
#define A30 (D30 | 0x40) // 2
#define A07 (D07 | 0x40) // 3
#define A06 (D06 | 0x40) // 4
#define A05 (D05 | 0x40) // 5
#define A04 (D04 | 0x40) // 6
#define A03 (D03 | 0x40) // 7

#define PWM12 (D12 | 0x80) // 0
#define PWM14 (D14 | 0x80) // 1
#define PWM11 (D11 | 0x80)
#define PWM10 (D10 | 0x80) // 2
#define PWM05 (D05 | 0x80)
#define PWM04 (D04 | 0x80) // 3
#define PWM00 (D00 | 0x80)
#define PWM01 (D01 | 0x80) // 4
#define PWM15 (D15 | 0x80) // 5
#define PWM03 (D03 | 0x80)

#define INPUT 2
#define PUSHPULL 1
#define OUTPUT PUSHPULL
#define OPENDRAIN 3
#define BIDIRECTIONAL 0

void pwm_init(void);

void pinMode(byte pin, byte mode);

byte digitalRead(byte pin);

void digitalWrite(byte pin, byte value);

// read range [0...4095]
word analogRead(byte pin);

// PWM value can be in range of [0...2047]
void analogWrite(byte pin, word value);

#endif