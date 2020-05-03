#include "utility.h"
#include "ticker.h"
#include "gpio.h"

void shiftOut(byte dataPin, byte clockPin, byte bitOrder, byte value) {
    byte i;
    for (i = 0; i < 8; i++) {
        if (bitOrder) { // msb
            digitalWrite(dataPin,!!bitRead(value, i));
        } else { // lsb
            digitalWrite(dataPin,!!bitRead(value, (7 - i)));
        }        
        digitalWrite(clockPin, 1);
        digitalWrite(clockPin, 0);      
    }
}

byte shiftIn(byte dataPin, byte clockPin, byte bitOrder) {
    byte res = 0;
    byte i;   
    for (i = 0; i < 8; i++) {
        digitalWrite(clockPin,1);
        if (bitOrder) { // msb
        res  |= digitalRead(dataPin) << i;                      
        } else { // lsb
        res  |= digitalRead(dataPin) << (7 - i);         
        }
        digitalWrite(clockPin,0);
    }
    return res;
}