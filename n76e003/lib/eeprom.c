#include "eeprom.h"
#include "N76E003.h"
#include "../../common/utility.h"


#ifdef USE_EEPROM

volatile unsigned char __code __at 0x4700 tempEEPROM[128];
volatile unsigned char __code __at 0x4780 EEPROM[128];

void EEPROMPre(void) {
    TA = 0xAA;
    TA = 0x55;
    CHPCON |= 1;
    TA = 0xAA;
    TA = 0x55;
    IAPUEN |= 1;
}

void EEPROMPost(void) {
    TA = 0xAA;
    TA = 0x55;
    IAPUEN &= ~1;
    TA = 0xAA;
    TA = 0x55;
    CHPCON &= ~1;
}

void EEPROMErasePage(__code byte* address) {
    EEPROMPre();
    IAPCN = 0x22;
    IAPAH = highByte((word)address);
    IAPAL = lowByte((word)address);
    IAPFD = 0xff;
    TA = 0xAA;
    TA = 0x55;
    IAPTRG |= 1;
    EEPROMPost();
}

void EEPROMWriteByte(__code byte* address, byte c) {
    EEPROMPre();
    IAPCN = 0x21;
    IAPAH = highByte((word)address);
    IAPAL = lowByte((word)address);
    IAPFD = c;
    TA = 0xAA;
    TA = 0x55;
    IAPTRG |= 1;
    EEPROMPost();
}

void EEPROMCopyPageWithChange(__code byte* to, __code byte* from, byte address, byte c) {
    byte i;
    __code byte* t;
    EEPROMPre();
    for (i = 0; i < 128; i++) {
        IAPCN = 0x21;
        t = to + i;
        IAPAH = highByte((word)t);
        IAPAL = lowByte((word)t);
        if (address == i) {
            IAPFD = c;
        } else {
            IAPFD = *((byte*)(from + i));
        }
        TA = 0xAA;
        TA = 0x55;
        IAPTRG |= 1;
    }
    EEPROMPost();
}

byte EEPROMRead(byte address) {
    return EEPROM[address];
}

void EEPROMWrite(byte address, byte c) {
    byte x = EEPROMRead(address);
    if (c == x)
        return;
    if (x == 0xff) {
        EEPROMWriteByte(address+EEPROM, c);
    } else {
        EEPROMErasePage(tempEEPROM);
        EEPROMCopyPageWithChange(tempEEPROM, EEPROM, address, c);
        EEPROMErasePage(EEPROM);
        EEPROMCopyPageWithChange(EEPROM, tempEEPROM, 130, 0);
    }
}

#endif
