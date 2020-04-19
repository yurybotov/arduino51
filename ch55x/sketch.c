#include "arduino.h"

void setup() {
    //SerialBegin(115200);
    //pinMode(P32,PUSHPULL);
    //pinMode(P14,PUSHPULL);
    //pinMode(P17,PUSHPULL);
    //digitalWrite(P32,1);
    pinMode(PWM30,BIDIRECTIONAL);
}

byte state = 0;
dword moment = 0;

void loop() {
    /*if(SerialAvailable()) {putc(getc());}
    if(moment < millis()) {
        moment = millis() + 100;
        state = state? 0: 1;
        digitalWrite(P14,state);
        putc('*');
    }*/
    word i = 0;
    for(i = 0; i < 256; i++) {
        analogWrite(PWM30,i);
        delay(10);
    }
}
