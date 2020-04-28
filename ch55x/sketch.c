#include "arduino.h"

void setup() {
//    SerialBegin(115200);

    pinMode(PWM15,OUTPUT);
}

byte state = 0;
dword moment = 0;
int i;

void loop() {
    //if(SerialAvailable() > 0) SerialPutc(SerialGetc());

    if(moment < millis()) {
        moment = millis() + 100;
        analogWrite(PWM15,state);
        state += 20;
        if(state>250) state = 0;
    }
}
