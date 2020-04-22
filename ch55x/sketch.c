#include "arduino.h"

void setup() {
    //SerialBegin(115200);
    //pinMode(P32,PUSHPULL);
    //pinMode(P14,PUSHPULL);
    // pinMode(A14,INPUT);
    //digitalWrite(P32,1);
    pinMode(PWM34,OUTPUT);
    //pinMode(D15,OUTPUT);
}

byte state = 0;
dword moment = 0;
int i;

void loop() {
    //char sto = 100;
    //char nosto = -100;
    /*if(SerialAvailable()) {putc(getc());}
    if(moment < millis()) {
        moment = millis() + 100;
        state = state? 0: 1;
        digitalWrite(P14,state);
        putc('*');
    }*/
    for(i = 0; i < 256; i++) {
    //    SerialPrintf("*\n");
        analogWrite(PWM34,i);
        delay(2);
    }
    //SerialPrintf("*****************************\n");
    /*SerialPrintf(" test char: %c\n", '*');
    delay(1000);
    SerialPrintf("10 signed...\n");
    delay(1000);
    //SerialPrintf(" test small int: %hd\n", sto);
    //delay(1000);
    //SerialPrintf(" test small int: %hd\n", nosto);
    //delay(1000);
    SerialPrintf(" test short: %d\n", 100);
    delay(1000);
    SerialPrintf(" test short: %d\n", -100);
    delay(1000);
    SerialPrintf(" test long: %ld\n", 100L);
    delay(1000);
    SerialPrintf(" test long: %ld\n", -100L);
    delay(1000);
    SerialPrintf("16 unsigned...\n");
    delay(1000);
    SerialPrintf(" test small int: 0x%x\n", (int)sto);
    delay(1000);
    SerialPrintf(" test short: 0x%x\n",65535);
    delay(1000);
    SerialPrintf(" test long: 0x%lx\n", 65536 * 65536 - 1);
    delay(1000);
    SerialPrintf(" ADC A14: %d\n", analogRead(A14));
    SerialPrintf(" test string %s","AAAA!\n");
    delay(1000);*/
    /*digitalWrite(D15,1);
    delay(100);
    digitalWrite(D15,0);
    delay(100);*/
    //delay(100);
}
