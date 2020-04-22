#ifndef __SDCC_51_A_SPI__
#define __SDCC_51_A_SPI__
#include "../../common/exttypes.h"

#define SPI_MSBFIRST 0x00
#define SPI_LSBFIRST 0x20

#define SPI_MODE0 0x0
#define SPI_MODE1 0x4
#define SPI_MODE2 0x8
#define SPI_MODE3 0xC

#define SPI_SPEED_1M 0x0
#define SPI_SPEED_2M 0x1
#define SPI_SPEED_4M 0x2
#define SPI_SPEED_8M 0x3

#define SPIBegin() SPCR = 0x50
#define SPIBeginTransaction(mode) SPCR = mode | 0x50
#define SPISettings(speed, msblsb, mode) ((speed) | (msblsb) | (mode))
#define SPIEndTransaction() SPCR &= ~(0x50)
#define SPIEnd() SPCR &= ~(0x50)
byte SPITransfer(byte c);

#endif

// not tested!
