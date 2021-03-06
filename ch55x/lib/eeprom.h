#ifndef __SDCC_51_A_EEPROM__
#define __SDCC_51_A_EEPROM__
#include "config.h"
#include "../../common/exttypes.h"

// 128 bytes only!!!

#ifdef USE_EEPROM

byte EEPROMRead(byte address);

void EEPROMWrite(byte address, byte c);
#define EEPROMUpdate(address, c) EEPROMWrite(address, c)

#endif

#endif
