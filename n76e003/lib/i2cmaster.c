#include "../../common/buffer.h"
#include "Function_define.h"
#include "N76E003.h"
#include "SFR_Macro.h"
#include "i2c.h"

#ifdef USE_I2C

void I2CBeginMaster() {
    P13_OpenDrain_Mode; // don't forget the pull high resister in circuit
    P14_OpenDrain_Mode;
    I2CLK = (byte)(16000000 / 100000 - 1);
    set_I2CEN;
}

void I2CBeginTransmission(byte address) {
    set_STA;
    clr_SI;
    while (!SI)
        ;
    clr_STA;
    I2DAT = address << 1;
    clr_SI;
    while (!SI)
        ;
}

void I2CEndTransmission(void) {
    set_STO;
    clr_SI;
}

void I2CWrite(byte b) {
    I2DAT = b;
    clr_SI;
    while (!SI)
        ;
}

void I2CRequestFrom(byte address, byte quantity, byte stop) {
    byte i;
    set_STA;
    clr_SI;
    while (!SI)
        ;
    clr_STA;
    I2DAT = address << 1 | 1;
    clr_SI;
    while (!SI)
        ;
    for (i = 0; i < quantity; i++) {
        set_AA;
        clr_SI;
        while (!SI)
            ;
        cbPut(I2DAT, I2C);
    }
    clr_AA;
    clr_SI;
    while (!SI)
        ;
    if (stop) {
        clr_SI;
        set_STO;
    }
}

void I2CSetClock(dword speed) {
    clr_I2CEN;
    I2CLK = (byte)(16000000 / speed - 1);
    set_I2CEN;
}

//void I2COnReceive(void (*handler)(byte)); // if master
//void I2COnRequest(void (*handler)(byte)); // if slave

#endif
