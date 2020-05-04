TARGET = arduino

XRAM_SIZE = 0x300
XRAM_LOC = 0x100

C_FILES = \
	lib/main.c \
	lib/ticker.c \
	lib/gpio.c \
	lib/cdc.c \
	lib/adc.c \
	lib/uart.c \
	lib/eeprom.c \
	../common/buffer.c \
	../common/utility.c \
	sketch.c

pre-flash:
	
include Makefile.include
