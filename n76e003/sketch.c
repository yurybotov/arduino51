#include "arduino.h"


byte res1,res2,res3,res4,res5,res6;

void setup() {
    
    Serial0Begin(19200);
    //Serial1Begin(19200);

    //pinMode(D14, BIDIRECTIONAL);
    //pinMode(A17,INPUT);
    //pinMode(D04,OUTPUT);
    //digitalWrite(D04,1);

    //pinMode(D00,OUTPUT);
    //pinMode(D01,BIDIRECTIONAL);
    //digitalWrite(D01,1);
    //pinMode(D10,OUTPUT);

    /*SPIBegin();
    SPIBeginTransaction(SPISettings(SPI_SPEED_1M, SPI_MSBFIRST, SPI_MODE0));
    digitalWrite(D14,0);
    SPITransfer(0x9f);
    res1 = SPITransfer(0xff);
    res2 = SPITransfer(0xff);
    res3 = SPITransfer(0xff);
    res4 = SPITransfer(0xff);
    res5 = SPITransfer(0xff);
    res6 = SPITransfer(0xff);
    digitalWrite(D14,1);
    SPIEndTransaction();
    Serial0Printf("0x%x%x",res1,res2);
    Serial0Printf("%x%x",res3,res4);
    Serial0Printf("%x%x\n",res5,res6);*/
}

void loop() {
    //int i, j;
    //int adc0 = analogRead(A17);
    //Serial1Putc('*');
    //Serial0Printf("ADC0: %d\n", adc0);
    //Serial1Printf("ADC0: %d\n", adc0);
    //pinMode(D14, BIDIRECTIONAL);
    if(Serial0Available() > 0) Serial0Printf("%c",Serial0Getc());
    /*for (i = 0; i < 5; i++) {
        digitalWrite(D14, 0);
        delay(100);
        digitalWrite(D14, 1);
        delay(100);
    }*/
 /*   pinMode(PWM14, BIDIRECTIONAL);
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 2048; j++) {
            analogWrite(PWM14, j);
            delay(1);
        }
    }*/
    /*
    digitalWrite(D14, 0);
    delay(100);
    digitalWrite(D14, 1);
    delay(100);
    */
    /*SPIBegin();
    SPIBeginTransaction(SPISettings(SPI_SPEED_2M, SPI_MSBFIRST, SPI_MODE0));
    digitalWrite(D04,0);
    SPITransfer(0x9f);
    res1 = SPITransfer(0xff);
    res2 = SPITransfer(0xff);
    res3 = SPITransfer(0xff);
    res4 = SPITransfer(0xff);
    res5 = SPITransfer(0xff);
    //res6 = SPITransfer(0xff);
    digitalWrite(D04,1);
    SPIEndTransaction();
    Serial0Printf("0x%2x%2x",res2,res3);
    Serial0Printf("%2x%2x\n",res4,res5);
    //Serial0Printf("%x%x\n",res5,res6);
    delay(400);*/
}
