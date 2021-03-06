#pragma once

#ifndef __SDCC_51_A_SPI__
#define __SDCC_51_A_SPI__
#include "config.h"
#include "../../common/exttypes.h"
#include "../../common/utility.h"

#ifdef USE_SPI

#define SPI_MSBFIRST 0x0
#define SPI_LSBFIRST 0x10

#define SPI_MODE0 0x0
#define SPI_MODE3 0x8

#define SPI_SPEED_1M 0x8
#define SPI_SPEED_2M 0x4
#define SPI_SPEED_4M 0x2
#define SPI_SPEED_8M 0x1

#define SPIBegin()           \
    SPI0_CK_SE = 24;         \
    bitClear(SPI0_SETUP, 7); \
    bitClear(SPI0_CTRL, 3);  \
    bitClear(SPI0_SETUP, 4); \
    bitSet(SPI0_CTRL, 0);    \
    bitSet(SPI0_CTRL, 5);    \
    bitSet(SPI0_CTRL, 6);    \ 
    bitClear(SPI0_CTRL, 7);  \
    P1_MOD_OC &= 0x0F;       \
    P1_DIR_PU |= 0xB0;       \
    P1_DIR_PU &= 0xBF;

#define SPIBeginTransaction(mode)              \
    SPI0_CK_SE = (mode & 0xf) * 3;             \
    bitClear(SPI0_SETUP, 7);                   \
    bitWrite(SPI0_CTRL, 3, bitRead(mode, 7));  \
    bitWrite(SPI0_SETUP, 4, bitRead(mode, 4)); \
    bitSet(SPI0_CTRL, 0);                      \
    bitSet(SPI0_CTRL, 5);                      \
    bitSet(SPI0_CTRL, 6);                      \
    bitClear(SPI0_CTRL, 7);                    \
    P1_MOD_OC &= 0x0F;                         \
    P1_DIR_PU |= 0xB0;                         \
    P1_DIR_PU &= 0xBF;

#define SPISettings(speed, msblsb, mode) ((speed) | (msblsb) | ((mode) << 4))

#define SPIEndTransaction()
#define SPIEnd()

byte SPITransfer(byte c);

#endif

#endif
