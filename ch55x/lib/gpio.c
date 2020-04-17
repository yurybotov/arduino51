#include "lib/ch554.h"
#include "gpio.h"

void pinMode(byte pin, byte mode) {
    if(GPIO_PORT(pin) == 1) {
        GPIO_SET_BIT(P1_DIR_PU,GPIO_PIN(pin),mode & 1);
        GPIO_SET_BIT(P1_MOD_OC,GPIO_PIN(pin),(mode>>1) & 1);
    }
    if(GPIO_PORT(pin) == 3) {
        GPIO_SET_BIT(P3_DIR_PU,GPIO_PIN(pin),mode & 1);
        GPIO_SET_BIT(P3_MOD_OC,GPIO_PIN(pin),(mode>>1) & 1);
    }
}

bool digitalRead(byte pin) {
    if(GPIO_PORT(pin) == 1) { return (P1 >> GPIO_PIN(pin)) & 0x1; }
    if(GPIO_PORT(pin) == 3) { return (P3 >> GPIO_PIN(pin)) & 0x1; }
    return 0;
}

void digitalWrite(byte pin, bool value) {
    if(GPIO_PORT(pin) == 1) {
        GPIO_SET_BIT(P1,GPIO_PIN(pin),value);
    }
    if(GPIO_PORT(pin) == 3) { 
        GPIO_SET_BIT(P3,GPIO_PIN(pin),value);
    }
}

word analogRead(byte pin) {

}

void analogWrite(byte pin, word value) {

}
