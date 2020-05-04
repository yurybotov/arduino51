#include "spi.h"
#include <ch554.h>

#ifdef USE_SPI

byte SPITransfer(byte c) {
    SPI0_DATA = c;
    while (!S0_FREE)
        ;
    return SPI0_DATA;
}

#endif
