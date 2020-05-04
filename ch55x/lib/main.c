#include "arduino.h"

void Timer0_ISR(void) __interrupt(INT_NO_TMR0);
#ifdef USE_SERIAL0
void UART0_ISR(void) __interrupt(INT_NO_UART0);
#endif
#ifdef USE_SERIAL
void DeviceInterrupt(void) __interrupt(INT_NO_USB);
#endif
#ifdef USE_SERIAL1
void UART1_ISR(void) __interrupt(INT_NO_UART1);
#endif
#ifdef USE_PWM
void PWMInterrupt(void) __interrupt(INT_NO_PWMX);
#endif

void CfgFsys() {
    // 		SAFE_MOD = 0x55;
    // 		SAFE_MOD = 0xAA;
    //     CLOCK_CFG |= bOSC_EN_XT;                          //使能外部晶振
    //     CLOCK_CFG &= ~bOSC_EN_INT;                        //关闭内部晶振

    SAFE_MOD = 0x55;
    SAFE_MOD = 0xAA;

#if FREQ_SYS == 32000000
    CLOCK_CFG = CLOCK_CFG & ~MASK_SYS_CK_SEL | 0x07; // 32MHz
#elif FREQ_SYS == 24000000
    CLOCK_CFG = CLOCK_CFG & ~MASK_SYS_CK_SEL | 0x06; // 24MHz
#elif FREQ_SYS == 16000000
    CLOCK_CFG = CLOCK_CFG & ~MASK_SYS_CK_SEL | 0x05; // 16MHz
#elif FREQ_SYS == 12000000
    CLOCK_CFG = CLOCK_CFG & ~MASK_SYS_CK_SEL | 0x04; // 12MHz
#elif FREQ_SYS == 6000000
    CLOCK_CFG = CLOCK_CFG & ~MASK_SYS_CK_SEL | 0x03; // 6MHz
#elif FREQ_SYS == 3000000
    CLOCK_CFG = CLOCK_CFG & ~MASK_SYS_CK_SEL | 0x02; // 3MHz
#elif FREQ_SYS == 750000
    CLOCK_CFG = CLOCK_CFG & ~MASK_SYS_CK_SEL | 0x01; // 750KHz
#elif FREQ_SYS == 187500
    CLOCK_CFG = CLOCK_CFG & ~MASK_SYS_CK_SEL | 0x00; // 187.5MHz
#else
#warning FREQ_SYS invalid or not set
#endif

    SAFE_MOD = 0x00;
}

#ifdef USE_SERIAL
__xdata dword CDCTimeout;
#endif

void main() {
    CfgFsys();
#if defined(USE_SEROAL0) || defined(USE_SERIAL1) || defined(USE_SERIAL)
    cbInit();
#endif
    ticker_init();
#ifdef USE_PWM
    pwm_init();
#endif
    setup();
#ifdef USE_SERIAL
    CDCTimeout = millis() + 100;
#endif
    while (1) {
        loop();
#ifdef USE_SERIAL
        CDCReceive();
        if (CDCTimeout > millis()) {
            CDCTimeout = millis() + 100;
            CDCSend();
        }
#endif
    }
}