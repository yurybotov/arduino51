#include "eeprom.h"
#include "ch554.h"
#include "../../common/utility.h"

void EEPROMWriteByte(byte address, byte c) {
    SAFE_MOD = 0x55; SAFE_MOD = 0xAA; GLOBAL_CFG |= bDATA_WE; SAFE_MOD = 0;
    ROM_ADDR_H = DATA_FLASH_ADDR >> 8;
    ROM_ADDR_L = (byte)(address) << 1;
    ROM_DATA_L = c;    
    if(ROM_STATUS & bROM_ADDR_OK) ROM_CTRL = ROM_CMD_WRITE;
    SAFE_MOD = 0x55; SAFE_MOD = 0xAA; GLOBAL_CFG &= ~bDATA_WE; SAFE_MOD = 0;
}

byte EEPROMRead(byte address) {
    ROM_ADDR_H = DATA_FLASH_ADDR >> 8;
    ROM_ADDR_L = address << 1;
    ROM_CTRL = ROM_CMD_READ;
    return ROM_DATA_L;
}

void EEPROMWrite(byte address, byte c) {
    byte x = EEPROMRead(address);
    if (c == x)
        return;
    EEPROMWriteByte(address, c);
}