
dword millis() { return milliseconds; }

dword micros() { return milliseconds*1000 + microsecondsTens*10; }

#ifndef SPECIAL_DELAY
void delay(dword time) {
    volatile dword waitTo = millis() + time;
    while (waitTo > millis())
        ;
}
#endif

void delayMicroseconds(dword time) {
    volatile dword waitTo = micros() + time;
    while (waitTo > micros())
        ;
}

dword pulseIn(byte pin, bool value, dword timeOut) {
    volatile dword start = millis();
    while (digitalRead(pin) != value) {
        if (millis() - start > timeOut)
            return timeOut;
    }
    return millis() - start;
}

void shiftOut(byte dataPin, byte clockPin, byte bitOrder, byte value) {
    bool bit;
    byte i, j;
    digitalWrite(clockPin, 0);
    delay(1);
    for (i = 0; i < 8; i++) {
        if (bitOrder) { // msb
            bit = bitRead(value, i);
        } else { // lsb
            bit = bitRead(value, (7 - i));
        }
        digitalWrite(dataPin, bit);
        digitalWrite(clockPin, 1);
        for (j = 0; j < 4; j++)
            ;
        digitalWrite(clockPin, 0);
    }
}

byte shiftIn(byte dataPin, byte clockPin, byte bitOrder) {
    byte res = 0;
    byte i;
    for (i = 0; i < 8; i++) {
        while (digitalRead(clockPin) != 1)
            ;
        if (bitOrder) { // msb
            bitWrite(res, i, digitalRead(dataPin));
        } else { // lsb
            bitWrite(res, (7 - i), digitalRead(dataPin));
        }
        while (digitalRead(clockPin) == 0)
            ;
    }
    return res;
}
