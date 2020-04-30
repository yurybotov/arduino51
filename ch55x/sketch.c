#include "arduino.h"

void setup() {
    SerialBegin(19200);
    SPIBegin();

    pinMode(D32,OUTPUT);
    digitalWrite(D32,1);
    //pinMode(D11,ADC);
}

byte state = 0;
dword moment = 0;
int i;

byte data[4];

void loop() {
    //if(SerialAvailable() > 0) SerialPutc(SerialRead());

    if(moment < millis()) {
        moment = millis() + 200;
        //Serial0Printf("Adc11 = %d\n\r",(int16_t)analogRead(D11));
        digitalWrite(D15,state);
        state = ~state & 1;
        digitalWrite(D32,0);
        SPITransfer(0x9f);
        data[0] = SPITransfer(0x00);
        data[1] = SPITransfer(0x00);
        data[2] = SPITransfer(0xff);
        data[3] = SPITransfer(0xff);
        digitalWrite(D32,1);
        SerialPrintf("ID = 0x%2x%2x%2x%2x\n", data[0],data[1],data[2],data[3]);
    }
}
