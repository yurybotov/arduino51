#include "arduino.h"

void setup() {
    Serial0Begin(19200);

    pinMode(PWM15,OUTPUT);
    pinMode(A11,INPUT);
}

byte state = 0;
dword moment = 0;
int i;

void loop() {
    //if(Serial0Available() > 0) Serial0Putc(Serial0Read());

    if(moment < millis()) {
        moment = millis() + 1000;
        Serial0Printf("Adc11 = %d\n\r",analogRead(A11));
        analogWrite(PWM15,state);
        state += 20;
        if(state>250) state = 0;
    }
}
