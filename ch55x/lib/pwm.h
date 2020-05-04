#ifndef __SDCC_51_A_PWM__
#define __SDCC_51_A_PWM__
#include "config.h"

#ifdef USE_PWM

#define SetPWMClk(CK_SE) PWM_CK_SE = CK_SE

#define SetPWM1Dat(dat) PWM_DATA1 = dat
#define SetPWM2Dat(dat) PWM_DATA2 = dat

#define PWM1PINAlter() PIN_FUNC |= bPWM1_PIN_X
#define PWM2PINAlter() PIN_FUNC |= bPWM2_PIN_X

#define PWM1PINCasual() PIN_FUNC &= ~bPWM1_PIN_X
#define PWM2PINCasual() PIN_FUNC &= ~bPWM2_PIN_X

#define ForceClearPWMFIFO() PWM_CTRL |= bPWM_CLR_ALL
#define CancleClearPWMFIFO() PWM_CTRL &= ~bPWM_CLR_ALL

#define PWM1OutEnable() PWM_CTRL |= bPWM1_OUT_EN
#define PWM2OutEnable() PWM_CTRL |= bPWM2_OUT_EN
#define DisablePWM1Out() PWM_CTRL &= ~bPWM1_OUT_EN
#define DisablePWM2Out() PWM_CTRL &= ~bPWM2_OUT_EN

#define PWM1OutPolarHighAct() PWM_CTRL &= ~bPWM1_POLAR
#define PWM2OutPolarHighAct() PWM_CTRL &= ~bPWM2_POLAR
#define PWM1OutPolarLowAct() PWM_CTRL |= bPWM1_POLAR
#define PWM2OutPolarLowAct() PWM_CTRL |= bPWM2_POLAR

#endif

#endif