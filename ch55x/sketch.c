#include "arduino.h"

void setup() {
    Serial0Begin(19200);

    pinMode(D15,OUTPUT);
    pinMode(D11,ADC);
}

byte state = 0;
dword moment = 0;
int i;

void loop() {
    //if(SerialAvailable() > 0) SerialPutc(SerialRead());

    if(moment < millis()) {
        moment = millis() + 200;
        Serial0Printf("Adc11 = %d\n\r",(int16_t)analogRead(D11));
        digitalWrite(D15,state);
        state = ~state & 1;
    }
}
