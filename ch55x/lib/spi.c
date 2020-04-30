#include "spi.h"
#include <ch554.h>

byte SPITransfer(byte c) {
    //while (S0_FREE)
    //    ;
    SPI0_DATA = c;
    while (S0_FREE == 0)
        ;
    return SPI0_DATA;
}
