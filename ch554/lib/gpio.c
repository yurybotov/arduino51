#include "ch554.h"
#include "adc.h"
#include "gpio.h"
#include "pwm.h"
#include "cdc.h"

volatile byte pwm1value = 100, pwm2value = 100;

void PWMInterrupt(void) __interrupt (INT_NO_PWMX) {
    PWM_CTRL |= bPWM_IF_END;
    SetPWM1Dat(pwm1value);
    SetPWM2Dat(pwm2value);
}

void pwm_init(void) {
    SetPWMClk(31);
    ForceClearPWMFIFO();
    CancleClearPWMFIFO();
    PWM1OutPolarHighAct();
    PWM2OutPolarHighAct();
    PWM_CTRL |= bPWM_IF_END | bPWM_IE_END;
    IE_PWMX = 1;
    EA = 1;
    SetPWM1Dat(pwm1value);
    SetPWM2Dat(pwm2value);
}

void pinMode(byte pin, byte mode) {
    if(GPIO_PORT(pin) == 1) {
        bitWrite(P1_DIR_PU,GPIO_PIN(pin),(mode & 1));
        bitWrite(P1_MOD_OC,GPIO_PIN(pin),((mode>>1) & 1));
        if (GPIO_PWM(pin)) {
            switch (GPIO_PIN(pin)) {
            case 5:
                PWM1PINCasual();
                PWM1OutEnable();
                SetPWM1Dat(pwm1value);
                break;
            default:
                break;
            }
        } else {
            switch (GPIO_PIN(pin)) {
            case 5:
                DisablePWM1Out();
                break;
            default:
                break;
            }
        }
    }
    if(GPIO_PORT(pin) == 3) {
        bitWrite(P3_DIR_PU,GPIO_PIN(pin),(mode & 1));
        bitWrite(P3_MOD_OC,GPIO_PIN(pin),((mode>>1) & 1));
        if (GPIO_PWM(pin)) {
            switch (GPIO_PIN(pin)) {
            case 0:
                PWM1PINAlter();
                PWM1OutEnable();
                SetPWM1Dat(pwm1value);
                break;
            case 4:
                PWM2PINCasual();
                PWM2OutEnable();
                SetPWM2Dat(pwm2value);
                break;
            case 1:
                PWM2PINAlter();
                PWM2OutEnable();
                SetPWM2Dat(pwm2value);
                break;
            default:
                break;
            }
        } else {
            switch (GPIO_PIN(pin)) {
            case 0:
                DisablePWM1Out();
                break;
            case 4:
                DisablePWM2Out();
                break;
            case 1:
                DisablePWM2Out();
                break;                                
            default:
                break;
            }
        }        
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
                PWM1PINCasual();
                PWM1OutEnable();
                SetPWM1Dat(value);
                pwm1value = value;
                break;
            default:
                break;
            }
        } else if (GPIO_PORT(pin) == 3) {
            switch (GPIO_PIN(pin)) {
            case 0: //1_
                PWM1PINAlter();
                PWM1OutEnable();
                SetPWM1Dat(value);
                pwm1value = value;
                break;
            case 4: //2
                PWM2PINCasual();
                PWM2OutEnable();
                SetPWM2Dat(value);
                pwm2value = value;
                break;
            case 1: //2_
                PWM2PINAlter();
                PWM2OutEnable();
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
