#ifndef __SDCC_51_A_SERIAL_TEMPLATES__
#define __SDCC_51_A_SERIAL_TEMPLATES__

#define implements_isr(name, uart, data, flag)         \
    void uart##_ISR(void) __interrupt(INT_NO_##uart) { \
        if (flag == 1) {                               \
            flag = 0;                                  \
            cbPut(data, name);                         \
        }                                              \
    }

#define implements_putc(name, data, flagtx) \
    void name##Putc(byte c) {               \
        flagtx = 0;                         \
        data = c;                           \
        while (flagtx == 0)                 \
            ;                               \
        flagtx = 0;                         \
    }

#define implements_printf(name)                            \
    static void name##SendChar(char c, void* p) {          \
        (p);                                               \
        name##Putc(c);                                     \
    }                                                      \
    void name##Printf(const byte* format, ...) {           \
        va_list args;                                      \
        va_start(args, format);                            \
        _print_format(name##SendChar, NULL, format, args); \
        va_end(args);                                      \
    }

#endif