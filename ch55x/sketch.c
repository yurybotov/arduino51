#include "arduino.h"

void setup() {
//    SerialBegin(115200);

    pinMode(D15,OUTPUT);
}

byte state = 0;
dword moment = 0;
int i;

void loop() {
    //if(SerialAvailable() > 0) SerialPutc(SerialGetc());

    if(moment < millis()) {
        moment = millis() + 100;
        state = state? 0: 1;
        digitalWrite(D15,state);
    }
}
