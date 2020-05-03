#include "arduino.h"

dword next;
int value = 0;

void setup() {   
    SerialBegin(19200);
    next = millis() + 500;
}



void loop() {
    if(next < millis()) {
        next = millis() + 500;
        EEPROMWrite(0,'A');
        EEPROMWrite(1,'b');
        EEPROMWrite(2,'c');
        EEPROMWrite(1,'B');
        SerialPrintf("%c%c%c\n",EEPROMRead(0),EEPROMRead(1),EEPROMRead(2));
    }
}
