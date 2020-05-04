#include "arduino.h"

byte state = 0;

void change(void) {
    state = (~state) & 1;
    digitalWrite(D14, state);
}

void setup() {
    pinMode(D14, OUTPUT);
    digitalWrite(D14, state);
    attachInterrupt(D15, change, RISING_EDGE);
}

void loop() {
}
