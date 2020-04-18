#include "arduino.h"

void setup() {
    pinMode(P32,PUSHPULL);
    pinMode(P14,PUSHPULL);
    pinMode(P17,PUSHPULL);
    digitalWrite(P32,1);
}

void loop() {
    digitalWrite(P14,1);
    delay(100);
    digitalWrite(P14,0);
    delay(100);
}
