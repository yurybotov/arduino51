#include "arduino.h"

void setup() {
    SerialBegin(115200);
    //pinMode(P32,PUSHPULL);
    //pinMode(P14,PUSHPULL);
    pinMode(A14,INPUT);
    //digitalWrite(P32,1);
    //pinMode(PWM30,BIDIRECTIONAL);
}

byte state = 0;
dword moment = 0;

void loop() {
    char sto = 100;
    char nosto = -100;
    /*if(SerialAvailable()) {putc(getc());}
    if(moment < millis()) {
        moment = millis() + 100;
        state = state? 0: 1;
        digitalWrite(P14,state);
        putc('*');
    }*/
    /*word i = 0;
    for(i = 0; i < 256; i++) {
        analogWrite(PWM30,i);
        delay(10);
    }*/
    SerialPrintf(" test char: %c\n", '*');
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
    /*SerialPrintf("2 unsigned...\n");
    delay(1000);
    SerialPrintf(" test small int: 0b%bi\n", (uint8_t)255);
    delay(1000);
    SerialPrintf(" test short: 0b%b\n", 65535);
    delay(1000);
    SerialPrintf(" test long: 0b%bl\n", 65536 * 65536 - 1);
    delay(1000);*/
    SerialPrintf(" test string %s","AAAA!\n");
    delay(1000);
}
