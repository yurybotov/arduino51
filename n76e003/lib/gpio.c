#include "N76E003.h"
#include "SFR_macro.h"
#include "Function_define.h"
#include "gpio.h"

extern byte BIT_TMP;

void pwm_init(void) {
    PWM_CLOCK_FSYS;
    PWM_IMDEPENDENT_MODE;
    PWM_CLOCK_DIV_4;
    PWMPH = 0x07;
    PWMPL = 0xCF;
    set_LOAD;  
}

void pinMode(byte pin, byte mode) {
    if(GPIO_PORT(pin) == 0) {
        bitWrite(P0M2,(GPIO_PIN(pin)),(mode & 1));
        bitWrite(P0M1,(GPIO_PIN(pin)),((mode>>1) & 1));
        if(GPIO_PWM(pin)) {
          switch(GPIO_PIN(pin)) {
          case 0: PWM3_P00_OUTPUT_ENABLE; break;
          case 1: PWM4_P01_OUTPUT_ENABLE; break;
          case 3: PWM5_P03_OUTPUT_ENABLE; break;
          case 4: PWM3_P04_OUTPUT_ENABLE; break;
          case 5: PWM2_P05_OUTPUT_ENABLE; break;
          default: break;
          }
        } else {
          switch(GPIO_PIN(pin)) {
          case 0: PWM3_P00_OUTPUT_DISABLE; break;
          case 1: PWM4_P01_OUTPUT_DISABLE; break;
          case 3: PWM5_P03_OUTPUT_DISABLE; break;
          case 4: PWM3_P04_OUTPUT_DISABLE; break;
          case 5: PWM2_P05_OUTPUT_DISABLE; break;
          default: break;
          }
        }
    }
    if(GPIO_PORT(pin) == 1) {
        bitWrite(P1M2,(GPIO_PIN(pin)),(mode & 1));
        bitWrite(P1M1,(GPIO_PIN(pin)),((mode>>1) & 1));      
        if(GPIO_PWM(pin)) {
          switch(GPIO_PIN(pin)) {
          case 0: PWM2_P10_OUTPUT_ENABLE; break;
          case 1: PWM1_P11_OUTPUT_ENABLE; break;
          case 2: PWM0_P12_OUTPUT_ENABLE; break;
          case 4: PWM1_P14_OUTPUT_ENABLE; break;
          case 5: PWM5_P15_OUTPUT_ENABLE; break;
          default: break;
          }
        } else {
          switch(GPIO_PIN(pin)) {
          case 0: PWM2_P10_OUTPUT_DISABLE; break;
          case 1: PWM1_P11_OUTPUT_DISABLE; break;
          case 2: PWM0_P12_OUTPUT_DISABLE; break;
          case 4: PWM1_P14_OUTPUT_DISABLE; break;
          case 5: PWM5_P15_OUTPUT_DISABLE; break;
          default: break;
          }
        }
    }
    if(GPIO_PORT(pin) == 3) {
        bitWrite(P3M2,(GPIO_PIN(pin)),(mode & 1));
        bitWrite(P3M1,(GPIO_PIN(pin)),((mode>>1) & 1));  
    }
}

byte digitalRead(byte pin) {
    if(GPIO_PORT(pin) == 0) { return bitRead(P0,GPIO_PIN(pin)); }
    if(GPIO_PORT(pin) == 1) { return bitRead(P1,GPIO_PIN(pin)); }
    if(GPIO_PORT(pin) == 3) { return bitRead(P3,GPIO_PIN(pin)); }
    return 0;
}

void digitalWrite(byte pin, byte value) {
    if(GPIO_PORT(pin) == 0) { bitWrite(P0,(GPIO_PIN(pin)),value); }
    if(GPIO_PORT(pin) == 1) { bitWrite(P1,(GPIO_PIN(pin)),value); }
    if(GPIO_PORT(pin) == 3) { bitWrite(P3,(GPIO_PIN(pin)),value); }
}

word analogRead(byte pin) {
  word result;
    if(GPIO_PORT(pin) == 0) {
      if(GPIO_ADC(pin)) {
        switch(GPIO_PIN(pin)) {
        case 3: Enable_ADC_AIN6; break;
        case 4: Enable_ADC_AIN5; break;
        case 5: Enable_ADC_AIN4; break;
        case 6: Enable_ADC_AIN3; break;
        case 7: Enable_ADC_AIN2; break;
        default: break;
        }          
      }
    }  
    if(GPIO_PORT(pin) == 1) {
      if(GPIO_ADC(pin)) {
        switch(GPIO_PIN(pin)) {
        case 1: Enable_ADC_AIN7; break;
        case 7: Enable_ADC_AIN0; break;
        default: break;
        } 
      }
    }  
    if(GPIO_PORT(pin) == 3) {
      if(GPIO_ADC(pin)) {
        switch(GPIO_PIN(pin)) {
        case 0: Enable_ADC_AIN1; break;
        default: break;
        }          
      }
    }
    clr_ADCF;
    set_ADCS;
    while(ADCF==0);
    result = ADCRH << 8;
    result += ADCRL;
    return result & 0xfff;
}

void analogWrite(byte pin, word value) {
    if(GPIO_PWM(pin)) {
      if(GPIO_PORT(pin) == 0) {
            switch(GPIO_PIN(pin)) {
            case 0: //3
              PWM3H = highByte(value);
              PWM3L = lowByte(value);
              break;
            case 1: //4
              set_SFRPAGE;
              PWM4H = highByte(value);
              PWM4L = lowByte(value);
              clr_SFRPAGE;
              break;
            case 3: //5
              set_SFRPAGE;
              PWM5H = highByte(value);
              PWM5L = lowByte(value);
              clr_SFRPAGE;
              break;
            case 4: //3
              PWM3H = highByte(value);
              PWM3L = lowByte(value);
              break;
            case 5: //2
              PWM2H = highByte(value);
              PWM2L = lowByte(value);
              break;
            default: break;
            }
      } else if(GPIO_PORT(pin) == 1) {
            switch(GPIO_PIN(pin)) {
            case 0: //2
              PWM2H = highByte(value);
              PWM2L = lowByte(value);
              break;
            case 1: //1
              PWM2H = highByte(value);
              PWM2L = lowByte(value);
              break;
            case 2: //0
              PWM0H = highByte(value);
              PWM0L = lowByte(value);
              break;
            case 4: //1
              PWM1H = highByte(value);
              PWM1L = lowByte(value);
              break;
            case 5: //5
              set_SFRPAGE;
              PWM5H = highByte(value);
              PWM5L = lowByte(value);
              clr_SFRPAGE;
              break;
            default: break;
            }
      } else return;
      set_LOAD;
      set_PWMRUN;
    }
}