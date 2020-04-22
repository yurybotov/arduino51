#include "arduino.h"

void setup() {
    SerialBegin(57600);

    pinMode(D14, BIDIRECTIONAL);
    pinMode(A17,INPUT);
}

void loop() {
    int i, j;
    int adc0 = analogRead(A17);
    SerialPrintf("ADC0: %d\n", adc0);
    pinMode(D14, BIDIRECTIONAL);
    for (i = 0; i < 30; i++) {
        digitalWrite(D14, 0);
        delay(100);
        digitalWrite(D14, 1);
        delay(100);
    }
    pinMode(PWM14, BIDIRECTIONAL);
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 2048; j++) {
            analogWrite(PWM14, j);
            delay(1);
        }
    }
    /*
    digitalWrite(D14, 0);
    delay(100);
    digitalWrite(D14, 1);
    delay(100);
    */
}
