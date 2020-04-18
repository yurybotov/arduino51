#include "arduino.h"

void setup() {
    SerialBegin(115200);
    pinMode(P32,PUSHPULL);
    pinMode(P14,PUSHPULL);
    pinMode(P17,PUSHPULL);
    digitalWrite(P32,1);
}

byte state = 0;
dword moment = 0;

void loop() {
    if(SerialAvailable()) {putc(getc());}
    if(moment < millis()) {
        moment = millis() + 100;
        state = state? 0: 1;
        digitalWrite(P14,state);
        putc('*');
    }
}
