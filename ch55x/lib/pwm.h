
#define SetPWMClk(CK_SE) (PWM_CK_SE = CK_SE)                                  //��Ƶ,Ĭ��ʱ��Fsys    

#define SetPWM1Dat(dat)  (PWM_DATA1 = dat)                                    //����PWM���ռ�ձ�
#define SetPWM2Dat(dat)  (PWM_DATA2 = dat)

#define PWM1PINAlter( )  {PIN_FUNC |= bPWM1_PIN_X;}                           //PWMӳ���P30
#define PWM2PINAlter( )  {PIN_FUNC |= bPWM2_PIN_X;}                           //PWMӳ���P31

#define PWM1PINCasual( )  {PIN_FUNC &= ~bPWM1_PIN_X;}                           
#define PWM2PINCasual( )  {PIN_FUNC &= ~bPWM2_PIN_X;}                           

#define ForceClearPWMFIFO( ) {PWM_CTRL |= bPWM_CLR_ALL;}                      //ǿ�����PWM FIFO��COUNT
#define CancleClearPWMFIFO( ) {PWM_CTRL &= ~bPWM_CLR_ALL;}                    //ȡ�����PWM FIFO��COUNT

#define PWM1OutEnable()  (PWM_CTRL |= bPWM1_OUT_EN)                           //����PWM1���                           
#define PWM2OutEnable()  (PWM_CTRL |= bPWM2_OUT_EN)                           //����PWM2���  
#define DisablePWM1Out() (PWM_CTRL &= ~bPWM1_OUT_EN)                          //�ر�PWM1���                           
#define DisablePWM2Out() (PWM_CTRL &= ~bPWM2_OUT_EN)                          //�ر�PWM2���  

#define PWM1OutPolarHighAct()(PWM_CTRL &= ~bPWM1_POLAR)                       //PWM1���Ĭ�ϵͣ�����Ч                           
#define PWM2OutPolarHighAct()(PWM_CTRL &= ~bPWM2_POLAR)                       //PWM2���Ĭ�ϵͣ�����Ч  
#define PWM1OutPolarLowAct() (PWM_CTRL |= bPWM1_POLAR)                        //PWM1���Ĭ�ϸߣ�����Ч                         
#define PWM2OutPolarLowAct() (PWM_CTRL |= bPWM2_POLAR)                        //PWM2���Ĭ�ϸߣ�����Ч   