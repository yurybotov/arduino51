#ifndef __SDCC_51_A_CONFIG__
#define __SDCC_51_A_CONFIG__

// Закоментируйте то что не  используется если не хватает памяти

#define USE_ADC                 // analogRead
#define USE_PWM                 // analogWrite
#define USE_SERIAL              // USB CDC device
#define USE_SERIAL0             // Serial0
#define USE_SERIAL1             // Serial1
// #define USE_SPI                // SPI not working now
#define USE_SOFTWARE_SPI        // shiftIn/shiftOut
#define USE_EEPROM              // EEPROM

#endif