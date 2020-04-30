#include "arduino.h"

dword next;
int value = 0;

void setup() {   
    Serial0Begin(19200);
    next = millis() + 500;
    pinMode(D11,ADC);
}



void loop() {
    if(next < millis()) {
        next = millis() + 500;
        Serial0Printf("A11 = %d\n", analogRead(D11));
    }
}
