#include "spi.h"
#include "Function_define.h"
#include "N76E003.h"
#include "SFR_Macro.h"

byte SPITransfer(byte c) {
    while (SPSR & 0x2 != 0)
        ;
    clr_SPIF;
    SPDR = c;
    while (SPSR & 0x80 == 0)
        ;
    return SPDR;
}
