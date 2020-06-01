#include "gpio.h"
#include "stc8.h"

void pinMode(byte pin, byte mode) {
    if (GPIO_PORT(pin) == 1) {
        bitWrite(P1M0, (GPIO_PIN(pin)), (mode & 1));
        bitWrite(P1M1, (GPIO_PIN(pin)), ((mode >> 1) & 1));
    }
    if (GPIO_PORT(pin) == 3) {
        bitWrite(P3M0, (GPIO_PIN(pin)), (mode & 1));
        bitWrite(P3M1, (GPIO_PIN(pin)), ((mode >> 1) & 1));
    }
    if (GPIO_PORT(pin) == 3) {
        bitWrite(P5M0, (GPIO_PIN(pin)), (mode & 1));
        bitWrite(P5M1, (GPIO_PIN(pin)), ((mode >> 1) & 1));
    }
}

byte digitalRead(byte pin) {
    switch (GPIO_PORT(pin)) {
    case 1:
        return bitRead(P1, GPIO_PIN(pin));
    case 3:
        return bitRead(P3, GPIO_PIN(pin));
    case 5:
        return bitRead(P5, GPIO_PIN(pin));
    default:
        return 0;
    }
}

void digitalWrite(byte pin, byte value) {
    switch (GPIO_PORT(pin)) {
    case 1:
        bitWrite(P1, (GPIO_PIN(pin)), value);
        break;
    case 3:
        bitWrite(P3, (GPIO_PIN(pin)), value);
        break;
    case 5:
        bitWrite(P5, (GPIO_PIN(pin)), value);
        break;
    default:
        break;
    }
}
