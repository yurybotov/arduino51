#include "arduino.h"

void setup() {
    SerialBegin(19200);

    pinMode(D15,OUTPUT);
    pinMode(A11,INPUT);
}

byte state = 0;
dword moment = 0;
int i;

void loop() {
    if(SerialAvailable() > 0) SerialPutc(SerialRead());

    if(moment < millis()) {
        moment = millis() + 200;
        //SerialPrintf("Adc11 = %d\n\r",(int16_t)analogRead(A11));
        digitalWrite(D15,state);
        state = ~state & 1;
    }
}
