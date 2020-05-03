
dword millis() { return milliseconds; }

#ifndef NO_MICROS
dword micros() { return milliseconds * 1000 + microsecondsTens * 10; }
#endif

#ifndef SPECIAL_DELAY
void delay(dword time) {
    volatile dword waitTo = millis() + time;
    while (waitTo > millis())
        ;
}
#endif

#ifndef NO_MICROS
void delayMicroseconds(dword time) {
    volatile dword waitTo = micros() + time;
    while (waitTo > micros())
        ;
}
#endif

dword pulseIn(byte pin, bool value, dword timeOut) {
    volatile dword start = millis();
    while (digitalRead(pin) != value) {
        if (millis() - start > timeOut)
            return timeOut;
    }
    return millis() - start;
}
