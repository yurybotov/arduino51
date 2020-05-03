#include "arduino.h"

void setup() {
    SerialBegin(19200);
    

    pinMode(D14,OUTPUT);
    digitalWrite(D14,1);
    //pinMode(D11,ADC);
    pinMode(D17, OUTPUT);
    pinMode(D15, OUTPUT);
    //digitalWrite(D15, 1);
    //digitalWrite(D17, 0);
    pinMode(D16, INPUT);
    //digitalWrite(D16, 1);
    SPIBegin();
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
        //digitalWrite(D15,state);
        //state = ~state & 1;
        digitalWrite(D14,0);
        SPITransfer(0x9f);
        data[0] = SPITransfer(0x00);
        data[1] = SPITransfer(0x00);
        data[2] = SPITransfer(0x00);
        data[3] = SPITransfer(0xFF);
        //shiftOut(D15, D17, 0, 0x9f);
        //data[0] = shiftIn(D16, D17, 0);
        //data[1] = shiftIn(D16, D17, 0);
        //data[2] = shiftIn(D16, D17, 0);
        //data[3] = shiftIn(D16, D17, 0);
        digitalWrite(D14,1);
        SerialPrintf("ID = 0x%2x%2x%2x%2x\n", data[0],data[1],data[2],data[3]);
    }
}
