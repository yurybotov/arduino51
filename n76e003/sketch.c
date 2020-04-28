#include "arduino.h"

// for example 24c04 i2c reading

void setup() {   
    Serial0Begin(19200);

    I2CBeginMaster();
    I2CSetClock(I2C_HIGH);
}

void loop() {
    I2CBeginTransmission(0x50);
    I2CWrite(0);
    I2CWrite(0);
    I2CRequestFrom(0x50,32,1);
    I2CEndTransmission();
    while(I2CAvailable()) {
        Serial0Printf("%c",I2CRead());
    }
    Serial0Putc('\n');
    delay(1000);
}
