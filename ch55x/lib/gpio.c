#include "ch554.h"
#include "adc.h"
#include "gpio.h"
#include "pwm.h"

byte pwm1value = 0, pwm2value = 0;

void PWMInterrupt(void) __interrupt (INT_NO_PWMX) {
    PWM_CTRL |= bPWM_IF_END;
    SetPWM1Dat(pwm1value);
    SetPWM2Dat(pwm2value);
}

void pwm_init(void) {
    SetPWMClk(31);
    PWM1OutPolarHighAct();
    PWM2OutPolarHighAct();
    PWM_CTRL |= bPWM_IF_END | bPWM_IE_END;
    IE_PWMX = 1;
    EA = 1;
    SetPWM1Dat(0);
    SetPWM2Dat(0);
}

void pinMode(byte pin, byte mode) {
    if(GPIO_PORT(pin) == 1) {
        bitWrite(P1_DIR_PU,GPIO_PIN(pin),(mode & 1));
        bitWrite(P1_MOD_OC,GPIO_PIN(pin),((mode>>1) & 1));
    }
    if(GPIO_PORT(pin) == 3) {
        bitWrite(P3_DIR_PU,GPIO_PIN(pin),(mode & 1));
        bitWrite(P3_MOD_OC,GPIO_PIN(pin),((mode>>1) & 1));
    }
}

byte digitalRead(byte pin) {
    if(GPIO_PORT(pin) == 1) { return bitRead(P1,GPIO_PIN(pin)); }
    if(GPIO_PORT(pin) == 3) { return bitRead(P3,GPIO_PIN(pin)); }
    return 0;
}

void digitalWrite(byte pin, byte value) {
    if(GPIO_PORT(pin) == 1) {
        bitWrite(P1,GPIO_PIN(pin),value);
    }
    if(GPIO_PORT(pin) == 3) { 
        bitWrite(P3,GPIO_PIN(pin),value);
    }
}

word analogRead(byte pin) {
    word result;
    ADCInit(0);
    if (GPIO_PORT(pin) == 1) {
        if (GPIO_ADC(pin)) {
            switch (GPIO_PIN(pin)) {
            case 1:
                ADC_ChannelSelect(0);
                break;
            case 4:
                ADC_ChannelSelect(1);
                break;
            case 5:
                ADC_ChannelSelect(2);
                break;                
            default:
                break;
            }
        }
    }
    if (GPIO_PORT(pin) == 3) {
        if (GPIO_ADC(pin)) {
            switch (GPIO_PIN(pin)) {
            case 2:
                ADC_ChannelSelect(4);
                break;
            default:
                break;
            }
        }
    }
    ADC_START = 1;
    while (ADC_START)
        ;
    result = ADC_DATA;
    return result & 0xff;
}

void analogWrite(byte pin, word value) {
    if (GPIO_PWM(pin)) {
        if (GPIO_PORT(pin) == 1) {
            switch (GPIO_PIN(pin)) {
            case 5: //1
                SetPWM1Dat(value);
                pwm1value = value;
                break;
            default:
                break;
            }
        } else if (GPIO_PORT(pin) == 3) {
            switch (GPIO_PIN(pin)) {
            case 0: //1_
                SetPWM1Dat(value);
                pwm1value = value;
                break;
            case 4: //2
                SetPWM2Dat(value);
                pwm2value = value;
                break;
            case 1: //2_
                SetPWM2Dat(value);
                pwm2value = value;
                break;
            default:
                break;
            }
        } else
            return;
    }
}
