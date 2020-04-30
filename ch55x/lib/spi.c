#include <ch554.h>
#include "spi.h"

byte SPITransfer(byte c) {
    //while (S0_FREE)
    //    ;
    SPI0_DATA = c;
    while (S0_FREE == 0)
        ;
    return SPI0_DATA;
}
