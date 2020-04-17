//
// Some BIT and simple macros
//
#ifndef __SDCC_51_A_UTILITY__
#define __SDCC_51_A_UTILITY__

#define bit(b) (1 << (b))
#define bitClear(x, b) ((x) &= ~(1 << (b)))
#define bitSet(x, b) ((x) |= (1 << (b)))
#define bitRead(x, b) (((x) >> (b)) & 1)
#define bitWrite(x, b, v)   \
    if (v) {                \
        bitSet((x), (b));   \
    } else {                \
        bitClear((x), (b)); \
    }
#define highByte(w) (((w) >> 8) & 0xff)
#define lowByte(w) ((w)&0xff)

#define abs(x) (((x) < 0) ? -(x) : (x))
#define constrain(v, mi, ma) (((v) > (ma)) ? (ma) : (((v) < (mi)) ? (mi) : (v)))
#define max(x, y) (((x) < (y)) ? (y) : (x))
#define min(x, y) (((x) > (y)) ? (y) : (x))
#define map(x, in_min, in_max, out_min, out_max) (((x) - (in_min)) * ((out_max) - (out_min)) / ((in_max) - (in_min)) + (out_min))
#define sq(x) ((x) * (x))

#endif
