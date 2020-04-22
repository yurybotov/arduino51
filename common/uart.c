//#include <stdint.h>

__xdata uint8_t print_buf[34];

/*void uputc(uint8_t c) {
    putchar((int)c);
}*/

void uputs(void (*putc)(uint8_t), __xdata uint8_t* str) {
    while (*str != 0) {
        putc(*str++);
    }
}

void printU(void (*putc)(uint8_t), uint32_t u32Temp, uint8_t radix) {
    uint8_t i;
    print_buf[33] = 0;
    for (i = 32; i > 0; i--) {
        uint8_t val = u32Temp % radix;
        print_buf[i] = (val < 10) ? (val + '0') : (val - 10 + 'A');
        u32Temp /= radix;
        if (u32Temp == 0)
            break;
    }
    uputs(putc, &print_buf[i]);
}

void printInteger(void (*putc)(uint8_t), uint32_t u32Temp) {
    uint8_t i;
    print_buf[33] = 0;
    if (u32Temp & 0x8000) {
        u32Temp = ~u32Temp + 1;
        putc('-');
    }
    for (i = 32; i > 0; i--) {
        print_buf[i] = (u32Temp % 10) + '0';
        u32Temp /= 10;
        if (u32Temp == 0)
            break;
    }
    uputs(putc, &print_buf[i]);
}

void uprintf(void (*putc)(uint8_t), const uint8_t* str, ...) {
    va_list args;
    va_start(args, str);
    while (*str != 0) {
        if (*str == '%') {
            str++;
            if (*str == 0)
                return;
            if (*str == 'c') {
                str++;
                putc(va_arg(args, uint8_t));
            }
            else if (*str == 'd') {
                str++;
                printInteger(putc, (uint32_t)((int32_t)va_arg(args, int)));
            }
            else if (*str == 'l') {
                str++;
                printInteger(putc, (uint32_t)va_arg(args, long));
            }
            else if (*str == 'i') {
                str++;
                printInteger(putc, (uint32_t)((int32_t)va_arg(args, char)));
            }
            else if (*str == 'x') {
                if (*(str + 1) == 'l') {
                    str += 2;
                    printU(putc, (uint32_t)va_arg(args, uint32_t), 16);
                }
                else if (*(str + 1) == 'i') {
                    str += 2;
                    printU(putc, (uint32_t)va_arg(args, uint8_t), 16);
                }
                else {
                    str++;
                    printU(putc, (uint32_t)va_arg(args, uint16_t), 16);
                }
            }
            else if (*str == 'u') {
                if (*(str + 1) == 'l') {
                    str += 2;
                    printU(putc, (uint32_t)va_arg(args, uint32_t), 10);
                }
                else if (*(str + 1) == 'i') {
                    str += 2;
                    printU(putc, (uint32_t)va_arg(args, uint8_t), 10);
                }
                else {
                    str++;
                    printU(putc, (uint32_t)va_arg(args, uint16_t), 10);
                }
            }
            else if (*str == 'b') {
                if (*(str + 1) == 'l') {
                    str += 2;
                    printU(putc, (uint32_t)va_arg(args, uint32_t), 2);
                }
                else if (*(str + 1) == 'i') {
                    str += 2;
                    printU(putc, (uint32_t)va_arg(args, uint8_t), 2);
                }
                else {
                    str++;
                    printU(putc, (uint32_t)va_arg(args, uint16_t), 2);
                }
            }
        }
        putc(*str++);
    }
}
