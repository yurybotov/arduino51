#ifndef __SDCC_51_A_SERIAL_TEMPLATES__
#define __SDCC_51_A_SERIAL_TEMPLATES__
/*
#define implements_buffer(name,size) \
__xdata byte name##Buffer[size]; \
volatile byte begin##name##Buffer = 0; \
volatile byte end##name##Buffer = 0; \
volatile byte length##name##Buffer = 0;
*/
/*
#define implements_isr(name,uart,size,data,flag,flagtx) \
void uart##_ISR(void) __interrupt(INT_NO_##uart) { \
    if (flag == 1) { \
        flag = 0; \
        name##Buffer[end##name##Buffer++] = data; \
        if (end##name##Buffer == size) \
            end##name##Buffer = 0; \
        length##name##Buffer++; \
    } \
    if(flagtx == 1) flagtx = 0; \
}
*/
#define implements_isr(name,uart,data,flag,flagtx) \
void uart##_ISR(void) __interrupt(INT_NO_##uart) { \
    if (flag == 1) { \
        flag = 0; \
        cbPut(data,name); \
    } \
    if(flagtx == 1) flagtx = 0; \
}

#define implements_putc(name,data,flag) \
void name##Putc(byte c) { \
    flag = 0; \
    data = c; \
    while(flag == 0); \
}
/*
#define implements_getc(name,size) \
byte name##Getc(void) { \
    if (length##name##Buffer > 0) { \
        byte c = name##Buffer[begin##name##Buffer++]; \
        if (begin##name##Buffer == size) \
            begin##name##Buffer = 0; \
        length##name##Buffer--; \
        return c; \
    } else { \
        return 0; \
    } \
}
*/
#define implements_getc(name) \
byte name##Getc(void) { \
    return cbGet(name); \
}
/*
#define implements_available(name) \
word name##Available() { \
    return length##name##Buffer; \
}
*/
#define implements_available(name) \
word name##Available() { \
    return cbCount(name); \
}

#define implements_printf(name) \
static void name##SendChar(char c, void* p) { (p); name##Putc(c); } \
void name##Printf(const byte* format,...) { \
    va_list args; \
    va_start(args,format); \
    _print_format( name##SendChar, NULL, format, args ); \
    va_end(args); \
}

#endif