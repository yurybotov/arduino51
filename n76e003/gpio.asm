;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Apr  3 2018) (Linux)
; This file was generated Fri Apr 17 19:44:45 2020
;--------------------------------------------------------
	.module gpio
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _MOSI
	.globl _P00
	.globl _MISO
	.globl _P01
	.globl _RXD_1
	.globl _P02
	.globl _P03
	.globl _STADC
	.globl _P04
	.globl _P05
	.globl _TXD
	.globl _P06
	.globl _RXD
	.globl _P07
	.globl _IT0
	.globl _IE0
	.globl _IT1
	.globl _IE1
	.globl _TR0
	.globl _TF0
	.globl _TR1
	.globl _TF1
	.globl _P10
	.globl _P11
	.globl _P12
	.globl _SCL
	.globl _P13
	.globl _SDA
	.globl _P14
	.globl _P15
	.globl _TXD_1
	.globl _P16
	.globl _P17
	.globl _RI
	.globl _TI
	.globl _RB8
	.globl _TB8
	.globl _REN
	.globl _SM2
	.globl _SM1
	.globl _FE
	.globl _SM0
	.globl _P20
	.globl _EX0
	.globl _ET0
	.globl _EX1
	.globl _ET1
	.globl _ES
	.globl _EBOD
	.globl _EADC
	.globl _EA
	.globl _P30
	.globl _PX0
	.globl _PT0
	.globl _PX1
	.globl _PT1
	.globl _PS
	.globl _PBOD
	.globl _PADC
	.globl _I2CPX
	.globl _AA
	.globl _SI
	.globl _STO
	.globl _STA
	.globl _I2CEN
	.globl _CM_RL2
	.globl _TR2
	.globl _TF2
	.globl _P
	.globl _OV
	.globl _RS0
	.globl _RS1
	.globl _F0
	.globl _AC
	.globl _CY
	.globl _CLRPWM
	.globl _PWMF
	.globl _LOAD
	.globl _PWMRUN
	.globl _ADCHS0
	.globl _ADCHS1
	.globl _ADCHS2
	.globl _ADCHS3
	.globl _ETGSEL0
	.globl _ETGSEL1
	.globl _ADCS
	.globl _ADCF
	.globl _RI_1
	.globl _TI_1
	.globl _RB8_1
	.globl _TB8_1
	.globl _REN_1
	.globl _SM2_1
	.globl _SM1_1
	.globl _FE_1
	.globl _SM0_1
	.globl _EIPH1
	.globl _EIP1
	.globl _PMD
	.globl _PMEN
	.globl _PDTCNT
	.globl _PDTEN
	.globl _SCON_1
	.globl _EIPH
	.globl _AINDIDS
	.globl _SPDR
	.globl _SPSR
	.globl _SPCR2
	.globl _SPCR
	.globl _CAPCON4
	.globl _CAPCON3
	.globl _B
	.globl _EIP
	.globl _C2H
	.globl _C2L
	.globl _PIF
	.globl _PIPEN
	.globl _PINEN
	.globl _PICON
	.globl _ADCCON0
	.globl _C1H
	.globl _C1L
	.globl _C0H
	.globl _C0L
	.globl _ADCDLY
	.globl _ADCCON2
	.globl _ADCCON1
	.globl _ACC
	.globl _PWMCON1
	.globl _PIOCON0
	.globl _PWM3L
	.globl _PWM2L
	.globl _PWM1L
	.globl _PWM0L
	.globl _PWMPL
	.globl _PWMCON0
	.globl _FBD
	.globl _PNP
	.globl _PWM3H
	.globl _PWM2H
	.globl _PWM1H
	.globl _PWM0H
	.globl _PWMPH
	.globl _PSW
	.globl _ADCMPH
	.globl _ADCMPL
	.globl _PWM5L
	.globl _TH2
	.globl _PWM4L
	.globl _TL2
	.globl _RCMP2H
	.globl _RCMP2L
	.globl _T2MOD
	.globl _T2CON
	.globl _TA
	.globl _PIOCON1
	.globl _RH3
	.globl _PWM5H
	.globl _RL3
	.globl _PWM4H
	.globl _T3CON
	.globl _ADCRH
	.globl _ADCRL
	.globl _I2ADDR
	.globl _I2CON
	.globl _I2TOC
	.globl _I2CLK
	.globl _I2STAT
	.globl _I2DAT
	.globl _SADDR_1
	.globl _SADEN_1
	.globl _SADEN
	.globl _IP
	.globl _PWMINTC
	.globl _IPH
	.globl _P2S
	.globl _P1SR
	.globl _P1M2
	.globl _P1S
	.globl _P1M1
	.globl _P0SR
	.globl _P0M2
	.globl _P0S
	.globl _P0M1
	.globl _P3
	.globl _IAPCN
	.globl _IAPFD
	.globl _P3SR
	.globl _P3M2
	.globl _P3S
	.globl _P3M1
	.globl _BODCON1
	.globl _WDCON
	.globl _SADDR
	.globl _IE
	.globl _IAPAH
	.globl _IAPAL
	.globl _IAPUEN
	.globl _IAPTRG
	.globl _BODCON0
	.globl _AUXR1
	.globl _P2
	.globl _CHPCON
	.globl _EIE1
	.globl _EIE
	.globl _SBUF_1
	.globl _SBUF
	.globl _SCON
	.globl _CKEN
	.globl _CKSWT
	.globl _CKDIV
	.globl _CAPCON2
	.globl _CAPCON1
	.globl _CAPCON0
	.globl _SFRS
	.globl _P1
	.globl _WKCON
	.globl _CKCON
	.globl _TH1
	.globl _TH0
	.globl _TL1
	.globl _TL0
	.globl _TMOD
	.globl _TCON
	.globl _PCON
	.globl _RWK
	.globl _RCTRIM1
	.globl _RCTRIM0
	.globl _DPH
	.globl _DPL
	.globl _SP
	.globl _P0
	.globl _pwm_init
	.globl _pinMode
	.globl _digitalRead
	.globl _digitalWrite
	.globl _analogRead
	.globl _analogWrite
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0	=	0x0080
_SP	=	0x0081
_DPL	=	0x0082
_DPH	=	0x0083
_RCTRIM0	=	0x0084
_RCTRIM1	=	0x0085
_RWK	=	0x0086
_PCON	=	0x0087
_TCON	=	0x0088
_TMOD	=	0x0089
_TL0	=	0x008a
_TL1	=	0x008b
_TH0	=	0x008c
_TH1	=	0x008d
_CKCON	=	0x008e
_WKCON	=	0x008f
_P1	=	0x0090
_SFRS	=	0x0091
_CAPCON0	=	0x0092
_CAPCON1	=	0x0093
_CAPCON2	=	0x0094
_CKDIV	=	0x0095
_CKSWT	=	0x0096
_CKEN	=	0x0097
_SCON	=	0x0098
_SBUF	=	0x0099
_SBUF_1	=	0x009a
_EIE	=	0x009b
_EIE1	=	0x009c
_CHPCON	=	0x009f
_P2	=	0x00a0
_AUXR1	=	0x00a2
_BODCON0	=	0x00a3
_IAPTRG	=	0x00a4
_IAPUEN	=	0x00a5
_IAPAL	=	0x00a6
_IAPAH	=	0x00a7
_IE	=	0x00a8
_SADDR	=	0x00a9
_WDCON	=	0x00aa
_BODCON1	=	0x00ab
_P3M1	=	0x00ac
_P3S	=	0x00ac
_P3M2	=	0x00ad
_P3SR	=	0x00ad
_IAPFD	=	0x00ae
_IAPCN	=	0x00af
_P3	=	0x00b0
_P0M1	=	0x00b1
_P0S	=	0x00b1
_P0M2	=	0x00b2
_P0SR	=	0x00b2
_P1M1	=	0x00b3
_P1S	=	0x00b3
_P1M2	=	0x00b4
_P1SR	=	0x00b4
_P2S	=	0x00b5
_IPH	=	0x00b7
_PWMINTC	=	0x00b7
_IP	=	0x00b8
_SADEN	=	0x00b9
_SADEN_1	=	0x00ba
_SADDR_1	=	0x00bb
_I2DAT	=	0x00bc
_I2STAT	=	0x00bd
_I2CLK	=	0x00be
_I2TOC	=	0x00bf
_I2CON	=	0x00c0
_I2ADDR	=	0x00c1
_ADCRL	=	0x00c2
_ADCRH	=	0x00c3
_T3CON	=	0x00c4
_PWM4H	=	0x00c4
_RL3	=	0x00c5
_PWM5H	=	0x00c5
_RH3	=	0x00c6
_PIOCON1	=	0x00c6
_TA	=	0x00c7
_T2CON	=	0x00c8
_T2MOD	=	0x00c9
_RCMP2L	=	0x00ca
_RCMP2H	=	0x00cb
_TL2	=	0x00cc
_PWM4L	=	0x00cc
_TH2	=	0x00cd
_PWM5L	=	0x00cd
_ADCMPL	=	0x00ce
_ADCMPH	=	0x00cf
_PSW	=	0x00d0
_PWMPH	=	0x00d1
_PWM0H	=	0x00d2
_PWM1H	=	0x00d3
_PWM2H	=	0x00d4
_PWM3H	=	0x00d5
_PNP	=	0x00d6
_FBD	=	0x00d7
_PWMCON0	=	0x00d8
_PWMPL	=	0x00d9
_PWM0L	=	0x00da
_PWM1L	=	0x00db
_PWM2L	=	0x00dc
_PWM3L	=	0x00dd
_PIOCON0	=	0x00de
_PWMCON1	=	0x00df
_ACC	=	0x00e0
_ADCCON1	=	0x00e1
_ADCCON2	=	0x00e2
_ADCDLY	=	0x00e3
_C0L	=	0x00e4
_C0H	=	0x00e5
_C1L	=	0x00e6
_C1H	=	0x00e7
_ADCCON0	=	0x00e8
_PICON	=	0x00e9
_PINEN	=	0x00ea
_PIPEN	=	0x00eb
_PIF	=	0x00ec
_C2L	=	0x00ed
_C2H	=	0x00ee
_EIP	=	0x00ef
_B	=	0x00f0
_CAPCON3	=	0x00f1
_CAPCON4	=	0x00f2
_SPCR	=	0x00f3
_SPCR2	=	0x00f3
_SPSR	=	0x00f4
_SPDR	=	0x00f5
_AINDIDS	=	0x00f6
_EIPH	=	0x00f7
_SCON_1	=	0x00f8
_PDTEN	=	0x00f9
_PDTCNT	=	0x00fa
_PMEN	=	0x00fb
_PMD	=	0x00fc
_EIP1	=	0x00fe
_EIPH1	=	0x00ff
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_SM0_1	=	0x00ff
_FE_1	=	0x00ff
_SM1_1	=	0x00fe
_SM2_1	=	0x00fd
_REN_1	=	0x00fc
_TB8_1	=	0x00fb
_RB8_1	=	0x00fa
_TI_1	=	0x00f9
_RI_1	=	0x00f8
_ADCF	=	0x00ef
_ADCS	=	0x00ee
_ETGSEL1	=	0x00ed
_ETGSEL0	=	0x00ec
_ADCHS3	=	0x00eb
_ADCHS2	=	0x00ea
_ADCHS1	=	0x00e9
_ADCHS0	=	0x00e8
_PWMRUN	=	0x00df
_LOAD	=	0x00de
_PWMF	=	0x00dd
_CLRPWM	=	0x00dc
_CY	=	0x00d7
_AC	=	0x00d6
_F0	=	0x00d5
_RS1	=	0x00d4
_RS0	=	0x00d3
_OV	=	0x00d2
_P	=	0x00d0
_TF2	=	0x00cf
_TR2	=	0x00ca
_CM_RL2	=	0x00c8
_I2CEN	=	0x00c6
_STA	=	0x00c5
_STO	=	0x00c4
_SI	=	0x00c3
_AA	=	0x00c2
_I2CPX	=	0x00c0
_PADC	=	0x00be
_PBOD	=	0x00bd
_PS	=	0x00bc
_PT1	=	0x00bb
_PX1	=	0x00ba
_PT0	=	0x00b9
_PX0	=	0x00b8
_P30	=	0x00b0
_EA	=	0x00af
_EADC	=	0x00ae
_EBOD	=	0x00ad
_ES	=	0x00ac
_ET1	=	0x00ab
_EX1	=	0x00aa
_ET0	=	0x00a9
_EX0	=	0x00a8
_P20	=	0x00a0
_SM0	=	0x009f
_FE	=	0x009f
_SM1	=	0x009e
_SM2	=	0x009d
_REN	=	0x009c
_TB8	=	0x009b
_RB8	=	0x009a
_TI	=	0x0099
_RI	=	0x0098
_P17	=	0x0097
_P16	=	0x0096
_TXD_1	=	0x0096
_P15	=	0x0095
_P14	=	0x0094
_SDA	=	0x0094
_P13	=	0x0093
_SCL	=	0x0093
_P12	=	0x0092
_P11	=	0x0091
_P10	=	0x0090
_TF1	=	0x008f
_TR1	=	0x008e
_TF0	=	0x008d
_TR0	=	0x008c
_IE1	=	0x008b
_IT1	=	0x008a
_IE0	=	0x0089
_IT0	=	0x0088
_P07	=	0x0087
_RXD	=	0x0087
_P06	=	0x0086
_TXD	=	0x0086
_P05	=	0x0085
_P04	=	0x0084
_STADC	=	0x0084
_P03	=	0x0083
_P02	=	0x0082
_RXD_1	=	0x0082
_P01	=	0x0081
_MISO	=	0x0081
_P00	=	0x0080
_MOSI	=	0x0080
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'pwm_init'
;------------------------------------------------------------
;	lib/gpio.c:8: void pwm_init(void) {
;	-----------------------------------------
;	 function pwm_init
;	-----------------------------------------
_pwm_init:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
;	lib/gpio.c:9: PWM_CLOCK_FSYS;
	anl	_CKCON,#0xBF
;	lib/gpio.c:10: PWM_IMDEPENDENT_MODE;
	anl	_PWMCON1,#0x3F
;	lib/gpio.c:11: PWM_CLOCK_DIV_4;
	orl	_PWMCON1,#0x02
	anl	_PWMCON1,#0xFA
;	lib/gpio.c:12: PWMPH = 0x07;
	mov	_PWMPH,#0x07
;	lib/gpio.c:13: PWMPL = 0xCF;
	mov	_PWMPL,#0xCF
;	lib/gpio.c:14: set_LOAD;
	setb	_LOAD
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'pinMode'
;------------------------------------------------------------
;mode                      Allocated to stack - _bp -3
;pin                       Allocated to registers r7 
;------------------------------------------------------------
;	lib/gpio.c:17: void pinMode(byte pin, byte mode) {
;	-----------------------------------------
;	 function pinMode
;	-----------------------------------------
_pinMode:
	push	_bp
	mov	_bp,sp
;	lib/gpio.c:18: if (GPIO_PORT(pin) == 0) {
	mov	a,dpl
	mov	r7,a
	anl	a,#0x03
	jz	00207$
	ljmp	00125$
00207$:
;	lib/gpio.c:19: bitWrite(P0M2, (GPIO_PIN(pin)), (mode & 1));
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	a,@r0
	jnb	acc.0,00102$
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00211$
00209$:
	add	a,acc
00211$:
	djnz	b,00209$
	mov	r6,a
	orl	_P0M2,a
	sjmp	00103$
00102$:
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00214$
00212$:
	add	a,acc
00214$:
	djnz	b,00212$
	cpl	a
	mov	r6,a
	anl	_P0M2,a
00103$:
;	lib/gpio.c:20: bitWrite(P0M1, (GPIO_PIN(pin)), ((mode >> 1) & 1));
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	a,@r0
	rr	a
	anl	a,#0x01
	mov	r6,a
	jz	00105$
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00218$
00216$:
	add	a,acc
00218$:
	djnz	b,00216$
	mov	r6,a
	orl	_P0M1,a
	sjmp	00106$
00105$:
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00221$
00219$:
	add	a,acc
00221$:
	djnz	b,00219$
	cpl	a
	mov	r6,a
	anl	_P0M1,a
00106$:
;	lib/gpio.c:21: if (GPIO_PWM(pin)) {
	mov	a,#0x80
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x80,00222$
	sjmp	00223$
00222$:
	ljmp	00122$
00223$:
;	lib/gpio.c:22: switch (GPIO_PIN(pin)) {
	mov	a,r7
	rr	a
	rr	a
	anl	a,#(0x3F&0x07)
	mov	r6,a
	add	a,#0xff - 0x05
	jnc	00224$
	ljmp	00125$
00224$:
	mov	a,r6
	add	a,r6
	add	a,r6
	mov	dptr,#00225$
	jmp	@a+dptr
00225$:
	ljmp	00107$
	ljmp	00108$
	ljmp	00112$
	ljmp	00109$
	ljmp	00110$
	ljmp	00111$
;	lib/gpio.c:23: case 0:
00107$:
;	lib/gpio.c:24: PWM3_P00_OUTPUT_ENABLE;
	orl	_PIOCON0,#0x08
;	lib/gpio.c:25: break;
	ljmp	00125$
;	lib/gpio.c:26: case 1:
00108$:
;	lib/gpio.c:27: PWM4_P01_OUTPUT_ENABLE;
	orl	_PIOCON0,#0x10
;	lib/gpio.c:28: break;
	ljmp	00125$
;	lib/gpio.c:29: case 3:
00109$:
;	lib/gpio.c:30: PWM5_P03_OUTPUT_ENABLE;
	orl	_PIOCON0,#0x20
;	lib/gpio.c:31: break;
	ljmp	00125$
;	lib/gpio.c:32: case 4:
00110$:
;	lib/gpio.c:33: PWM3_P04_OUTPUT_ENABLE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	orl	_SFRS,#0x01
	orl	_PIOCON1,#0x08
	mov	_TA,#0xAA
	mov	_TA,#0x55
	anl	_SFRS,#0xFE
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:34: break;
	ljmp	00125$
;	lib/gpio.c:35: case 5:
00111$:
;	lib/gpio.c:36: PWM2_P05_OUTPUT_ENABLE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	orl	_SFRS,#0x01
	orl	_PIOCON1,#0x04
	mov	_TA,#0xAA
	mov	_TA,#0x55
	anl	_SFRS,#0xFE
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:37: break;
	ljmp	00125$
;	lib/gpio.c:38: default:
00112$:
;	lib/gpio.c:40: }
	ljmp	00125$
00122$:
;	lib/gpio.c:42: switch (GPIO_PIN(pin)) {
	mov	a,r7
	rr	a
	rr	a
	anl	a,#(0x3F&0x07)
	mov	r6,a
	add	a,#0xff - 0x05
	jc	00125$
	mov	a,r6
	add	a,r6
	add	a,r6
	mov	dptr,#00227$
	jmp	@a+dptr
00227$:
	ljmp	00114$
	ljmp	00115$
	ljmp	00119$
	ljmp	00116$
	ljmp	00117$
	ljmp	00118$
;	lib/gpio.c:43: case 0:
00114$:
;	lib/gpio.c:44: PWM3_P00_OUTPUT_DISABLE;
	anl	_PIOCON0,#0xF7
;	lib/gpio.c:45: break;
;	lib/gpio.c:46: case 1:
	sjmp	00125$
00115$:
;	lib/gpio.c:47: PWM4_P01_OUTPUT_DISABLE;
	anl	_PIOCON0,#0xEF
;	lib/gpio.c:48: break;
;	lib/gpio.c:49: case 3:
	sjmp	00125$
00116$:
;	lib/gpio.c:50: PWM5_P03_OUTPUT_DISABLE;
	anl	_PIOCON0,#0xDF
;	lib/gpio.c:51: break;
;	lib/gpio.c:52: case 4:
	sjmp	00125$
00117$:
;	lib/gpio.c:53: PWM3_P04_OUTPUT_DISABLE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	orl	_SFRS,#0x01
	anl	_PIOCON1,#0xF7
	mov	_TA,#0xAA
	mov	_TA,#0x55
	anl	_SFRS,#0xFE
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:54: break;
;	lib/gpio.c:55: case 5:
	sjmp	00125$
00118$:
;	lib/gpio.c:56: PWM2_P05_OUTPUT_DISABLE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	orl	_SFRS,#0x01
	anl	_PIOCON1,#0xFB
	mov	_TA,#0xAA
	mov	_TA,#0x55
	anl	_SFRS,#0xFE
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:57: break;
;	lib/gpio.c:58: default:
;	lib/gpio.c:60: }
00119$:
00125$:
;	lib/gpio.c:63: if (GPIO_PORT(pin) == 1) {
	mov	a,#0x03
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x01,00228$
	sjmp	00229$
00228$:
	ljmp	00150$
00229$:
;	lib/gpio.c:64: bitWrite(P1M2, (GPIO_PIN(pin)), (mode & 1));
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	a,@r0
	jnb	acc.0,00127$
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00233$
00231$:
	add	a,acc
00233$:
	djnz	b,00231$
	mov	r6,a
	orl	_P1M2,a
	sjmp	00128$
00127$:
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00236$
00234$:
	add	a,acc
00236$:
	djnz	b,00234$
	cpl	a
	mov	r6,a
	anl	_P1M2,a
00128$:
;	lib/gpio.c:65: bitWrite(P1M1, (GPIO_PIN(pin)), ((mode >> 1) & 1));
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	a,@r0
	rr	a
	anl	a,#0x01
	mov	r6,a
	jz	00130$
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00240$
00238$:
	add	a,acc
00240$:
	djnz	b,00238$
	mov	r6,a
	orl	_P1M1,a
	sjmp	00131$
00130$:
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00243$
00241$:
	add	a,acc
00243$:
	djnz	b,00241$
	cpl	a
	mov	r6,a
	anl	_P1M1,a
00131$:
;	lib/gpio.c:66: if (GPIO_PWM(pin)) {
	mov	a,#0x80
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x80,00244$
	sjmp	00245$
00244$:
	ljmp	00147$
00245$:
;	lib/gpio.c:67: switch (GPIO_PIN(pin)) {
	mov	a,r7
	rr	a
	rr	a
	anl	a,#(0x3F&0x07)
	mov	r6,a
	add	a,#0xff - 0x05
	jnc	00246$
	ljmp	00150$
00246$:
	mov	a,r6
	add	a,r6
	add	a,r6
	mov	dptr,#00247$
	jmp	@a+dptr
00247$:
	ljmp	00132$
	ljmp	00133$
	ljmp	00134$
	ljmp	00137$
	ljmp	00135$
	ljmp	00136$
;	lib/gpio.c:68: case 0:
00132$:
;	lib/gpio.c:69: PWM2_P10_OUTPUT_ENABLE;
	orl	_PIOCON0,#0x04
;	lib/gpio.c:70: break;
	ljmp	00150$
;	lib/gpio.c:71: case 1:
00133$:
;	lib/gpio.c:72: PWM1_P11_OUTPUT_ENABLE;
	orl	_PIOCON0,#0x02
;	lib/gpio.c:73: break;
	ljmp	00150$
;	lib/gpio.c:74: case 2:
00134$:
;	lib/gpio.c:75: PWM0_P12_OUTPUT_ENABLE;
	orl	_PIOCON0,#0x01
;	lib/gpio.c:76: break;
	ljmp	00150$
;	lib/gpio.c:77: case 4:
00135$:
;	lib/gpio.c:78: PWM1_P14_OUTPUT_ENABLE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	orl	_SFRS,#0x01
	orl	_PIOCON1,#0x02
	mov	_TA,#0xAA
	mov	_TA,#0x55
	anl	_SFRS,#0xFE
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:79: break;
	ljmp	00150$
;	lib/gpio.c:80: case 5:
00136$:
;	lib/gpio.c:81: PWM5_P15_OUTPUT_ENABLE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	orl	_SFRS,#0x01
	orl	_PIOCON1,#0x20
	mov	_TA,#0xAA
	mov	_TA,#0x55
	anl	_SFRS,#0xFE
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:82: break;
	ljmp	00150$
;	lib/gpio.c:83: default:
00137$:
;	lib/gpio.c:85: }
	ljmp	00150$
00147$:
;	lib/gpio.c:87: switch (GPIO_PIN(pin)) {
	mov	a,r7
	rr	a
	rr	a
	anl	a,#(0x3F&0x07)
	mov	r6,a
	add	a,#0xff - 0x05
	jc	00150$
	mov	a,r6
	add	a,r6
	add	a,r6
	mov	dptr,#00249$
	jmp	@a+dptr
00249$:
	ljmp	00139$
	ljmp	00140$
	ljmp	00141$
	ljmp	00144$
	ljmp	00142$
	ljmp	00143$
;	lib/gpio.c:88: case 0:
00139$:
;	lib/gpio.c:89: PWM2_P10_OUTPUT_DISABLE;
	anl	_PIOCON0,#0xFB
;	lib/gpio.c:90: break;
;	lib/gpio.c:91: case 1:
	sjmp	00150$
00140$:
;	lib/gpio.c:92: PWM1_P11_OUTPUT_DISABLE;
	anl	_PIOCON0,#0xFD
;	lib/gpio.c:93: break;
;	lib/gpio.c:94: case 2:
	sjmp	00150$
00141$:
;	lib/gpio.c:95: PWM0_P12_OUTPUT_DISABLE;
	anl	_PIOCON0,#0xFE
;	lib/gpio.c:96: break;
;	lib/gpio.c:97: case 4:
	sjmp	00150$
00142$:
;	lib/gpio.c:98: PWM1_P14_OUTPUT_DISABLE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	orl	_SFRS,#0x01
	anl	_PIOCON1,#0xFD
	mov	_TA,#0xAA
	mov	_TA,#0x55
	anl	_SFRS,#0xFE
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:99: break;
;	lib/gpio.c:100: case 5:
	sjmp	00150$
00143$:
;	lib/gpio.c:101: PWM5_P15_OUTPUT_DISABLE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	orl	_SFRS,#0x01
	anl	_PIOCON1,#0xDF
	mov	_TA,#0xAA
	mov	_TA,#0x55
	anl	_SFRS,#0xFE
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:102: break;
;	lib/gpio.c:103: default:
;	lib/gpio.c:105: }
00144$:
00150$:
;	lib/gpio.c:108: if (GPIO_PORT(pin) == 3) {
	mov	a,#0x03
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x03,00250$
	sjmp	00251$
00250$:
	ljmp	00159$
00251$:
;	lib/gpio.c:109: bitWrite(P3M2, (GPIO_PIN(pin)), (mode & 1));
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	a,@r0
	jnb	acc.0,00152$
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00255$
00253$:
	add	a,acc
00255$:
	djnz	b,00253$
	mov	r6,a
	orl	_P3M2,a
	sjmp	00153$
00152$:
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00258$
00256$:
	add	a,acc
00258$:
	djnz	b,00256$
	cpl	a
	mov	r6,a
	anl	_P3M2,a
00153$:
;	lib/gpio.c:110: bitWrite(P3M1, (GPIO_PIN(pin)), ((mode >> 1) & 1));
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	a,@r0
	rr	a
	anl	a,#0x01
	mov	r6,a
	jz	00155$
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00262$
00260$:
	add	a,acc
00262$:
	djnz	b,00260$
	mov	r6,a
	orl	_P3M1,a
	sjmp	00159$
00155$:
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r7,a
	mov	a,#0x07
	anl	a,r7
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00265$
00263$:
	add	a,acc
00265$:
	djnz	b,00263$
	cpl	a
	mov	r7,a
	anl	_P3M1,a
00159$:
	pop	_bp
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'digitalRead'
;------------------------------------------------------------
;pin                       Allocated to registers r7 
;------------------------------------------------------------
;	lib/gpio.c:114: byte digitalRead(byte pin) {
;	-----------------------------------------
;	 function digitalRead
;	-----------------------------------------
_digitalRead:
;	lib/gpio.c:115: if (GPIO_PORT(pin) == 0) {
	mov	a,dpl
	mov	r7,a
	anl	a,#0x03
	jz	00119$
	sjmp	00102$
00119$:
;	lib/gpio.c:116: return bitRead(P0, GPIO_PIN(pin));
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,_P0
	sjmp	00121$
00120$:
	clr	c
	rrc	a
00121$:
	djnz	b,00120$
	anl	a,#0x01
	mov	dpl,a
	ret
00102$:
;	lib/gpio.c:118: if (GPIO_PORT(pin) == 1) {
	mov	a,#0x03
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x01,00104$
;	lib/gpio.c:119: return bitRead(P1, GPIO_PIN(pin));
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,_P1
	sjmp	00125$
00124$:
	clr	c
	rrc	a
00125$:
	djnz	b,00124$
	anl	a,#0x01
	mov	dpl,a
	ret
00104$:
;	lib/gpio.c:121: if (GPIO_PORT(pin) == 3) {
	mov	a,#0x03
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x03,00106$
;	lib/gpio.c:122: return bitRead(P3, GPIO_PIN(pin));
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r7,a
	mov	a,#0x07
	anl	a,r7
	mov	b,a
	inc	b
	mov	a,_P3
	sjmp	00129$
00128$:
	clr	c
	rrc	a
00129$:
	djnz	b,00128$
	anl	a,#0x01
	mov	dpl,a
	ret
00106$:
;	lib/gpio.c:124: return 0;
	mov	dpl,#0x00
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'digitalWrite'
;------------------------------------------------------------
;value                     Allocated to stack - _bp -3
;pin                       Allocated to registers r7 
;------------------------------------------------------------
;	lib/gpio.c:127: void digitalWrite(byte pin, byte value) {
;	-----------------------------------------
;	 function digitalWrite
;	-----------------------------------------
_digitalWrite:
	push	_bp
	mov	_bp,sp
;	lib/gpio.c:128: if (GPIO_PORT(pin) == 0) {
	mov	a,dpl
	mov	r7,a
	anl	a,#0x03
	jz	00137$
	sjmp	00105$
00137$:
;	lib/gpio.c:129: bitWrite(P0, (GPIO_PIN(pin)), value);
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	a,@r0
	jz	00102$
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00141$
00139$:
	add	a,acc
00141$:
	djnz	b,00139$
	mov	r6,a
	orl	_P0,a
	sjmp	00105$
00102$:
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00144$
00142$:
	add	a,acc
00144$:
	djnz	b,00142$
	cpl	a
	mov	r6,a
	anl	_P0,a
00105$:
;	lib/gpio.c:131: if (GPIO_PORT(pin) == 1) {
	mov	a,#0x03
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x01,00110$
;	lib/gpio.c:132: bitWrite(P1, (GPIO_PIN(pin)), value);
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	a,@r0
	jz	00107$
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00150$
00148$:
	add	a,acc
00150$:
	djnz	b,00148$
	mov	r6,a
	orl	_P1,a
	sjmp	00110$
00107$:
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00153$
00151$:
	add	a,acc
00153$:
	djnz	b,00151$
	cpl	a
	mov	r6,a
	anl	_P1,a
00110$:
;	lib/gpio.c:134: if (GPIO_PORT(pin) == 3) {
	mov	a,#0x03
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x03,00116$
;	lib/gpio.c:135: bitWrite(P3, (GPIO_PIN(pin)), value);
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	a,@r0
	jz	00112$
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	mov	a,#0x07
	anl	a,r6
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00159$
00157$:
	add	a,acc
00159$:
	djnz	b,00157$
	mov	r6,a
	orl	_P3,a
	sjmp	00116$
00112$:
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r7,a
	mov	a,#0x07
	anl	a,r7
	mov	b,a
	inc	b
	mov	a,#0x01
	sjmp	00162$
00160$:
	add	a,acc
00162$:
	djnz	b,00160$
	cpl	a
	mov	r7,a
	anl	_P3,a
00116$:
	pop	_bp
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'analogRead'
;------------------------------------------------------------
;pin                       Allocated to registers r7 
;result                    Allocated to registers r6 r7 
;------------------------------------------------------------
;	lib/gpio.c:139: word analogRead(byte pin) {
;	-----------------------------------------
;	 function analogRead
;	-----------------------------------------
_analogRead:
;	lib/gpio.c:141: if (GPIO_PORT(pin) == 0) {
	mov	a,dpl
	mov	r7,a
	anl	a,#0x03
	jz	00181$
	ljmp	00111$
00181$:
;	lib/gpio.c:142: if (GPIO_ADC(pin)) {
	mov	a,#0x40
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x40,00182$
	sjmp	00183$
00182$:
	ljmp	00111$
00183$:
;	lib/gpio.c:143: switch (GPIO_PIN(pin)) {
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	anl	ar6,#0x07
	cjne	r6,#0x03,00184$
	sjmp	00101$
00184$:
	cjne	r6,#0x04,00185$
	sjmp	00102$
00185$:
	cjne	r6,#0x05,00186$
	sjmp	00103$
00186$:
	cjne	r6,#0x06,00187$
	sjmp	00104$
00187$:
	cjne	r6,#0x07,00188$
	sjmp	00105$
00188$:
	ljmp	00111$
;	lib/gpio.c:144: case 3:
00101$:
;	lib/gpio.c:145: Enable_ADC_AIN6;
	anl	_ADCCON0,#0xF0
	orl	_ADCCON0,#0x06
	orl	_P0M1,#0x08
	mov	r6,_P0M2
	mov	a,#0xF7
	anl	a,r6
	mov	_P0M2,a
	mov	_AINDIDS,#0x00
	orl	_AINDIDS,#0x40
	orl	_ADCCON1,#0x01
;	lib/gpio.c:146: break;
;	lib/gpio.c:147: case 4:
	sjmp	00111$
00102$:
;	lib/gpio.c:148: Enable_ADC_AIN5;
	anl	_ADCCON0,#0xF0
	orl	_ADCCON0,#0x05
	orl	_P0M1,#0x10
	mov	r6,_P0M2
	mov	a,#0xEF
	anl	a,r6
	mov	_P0M2,a
	mov	_AINDIDS,#0x00
	orl	_AINDIDS,#0x20
	orl	_ADCCON1,#0x01
;	lib/gpio.c:149: break;
;	lib/gpio.c:150: case 5:
	sjmp	00111$
00103$:
;	lib/gpio.c:151: Enable_ADC_AIN4;
	anl	_ADCCON0,#0xF0
	orl	_ADCCON0,#0x04
	orl	_P0M1,#0x20
	mov	r6,_P0M2
	mov	a,#0xDF
	anl	a,r6
	mov	_P0M2,a
	mov	_AINDIDS,#0x00
	orl	_AINDIDS,#0x10
	orl	_ADCCON1,#0x01
;	lib/gpio.c:152: break;
;	lib/gpio.c:153: case 6:
	sjmp	00111$
00104$:
;	lib/gpio.c:154: Enable_ADC_AIN3;
	anl	_ADCCON0,#0xF0
	orl	_ADCCON0,#0x03
	orl	_P0M1,#0x40
	mov	r6,_P0M2
	mov	a,#0xBF
	anl	a,r6
	mov	_P0M2,a
	mov	_AINDIDS,#0x00
	orl	_AINDIDS,#0x08
	orl	_ADCCON1,#0x01
;	lib/gpio.c:155: break;
;	lib/gpio.c:156: case 7:
	sjmp	00111$
00105$:
;	lib/gpio.c:157: Enable_ADC_AIN2;
	anl	_ADCCON0,#0xF0
	orl	_ADCCON0,#0x02
	orl	_P0M1,#0x80
	mov	r6,_P0M2
	mov	a,#0x7F
	anl	a,r6
	mov	_P0M2,a
	mov	_AINDIDS,#0x00
	orl	_AINDIDS,#0x04
	orl	_ADCCON1,#0x01
;	lib/gpio.c:161: }
00111$:
;	lib/gpio.c:164: if (GPIO_PORT(pin) == 1) {
	mov	a,#0x03
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x01,00119$
;	lib/gpio.c:165: if (GPIO_ADC(pin)) {
	mov	a,#0x40
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x40,00119$
;	lib/gpio.c:166: switch (GPIO_PIN(pin)) {
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r6,a
	anl	ar6,#0x07
	cjne	r6,#0x01,00193$
	sjmp	00112$
00193$:
;	lib/gpio.c:167: case 1:
	cjne	r6,#0x07,00119$
	sjmp	00113$
00112$:
;	lib/gpio.c:168: Enable_ADC_AIN7;
	anl	_ADCCON0,#0xF0
	orl	_ADCCON0,#0x07
	orl	_P1M1,#0x02
	mov	r6,_P1M2
	mov	a,#0xFD
	anl	a,r6
	mov	_P1M2,a
	mov	_AINDIDS,#0x00
	orl	_AINDIDS,#0x80
	orl	_ADCCON1,#0x01
;	lib/gpio.c:169: break;
;	lib/gpio.c:170: case 7:
	sjmp	00119$
00113$:
;	lib/gpio.c:171: Enable_ADC_AIN0;
	anl	_ADCCON0,#0xF0
	orl	_P1M1,#0x80
	mov	r6,_P1M2
	mov	a,#0x7F
	anl	a,r6
	mov	_P1M2,a
	mov	_AINDIDS,#0x00
	orl	_AINDIDS,#0x01
	orl	_ADCCON1,#0x01
;	lib/gpio.c:175: }
00119$:
;	lib/gpio.c:178: if (GPIO_PORT(pin) == 3) {
	mov	a,#0x03
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x03,00126$
;	lib/gpio.c:179: if (GPIO_ADC(pin)) {
	mov	a,#0x40
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x40,00126$
;	lib/gpio.c:180: switch (GPIO_PIN(pin)) {
	mov	a,r7
	rr	a
	rr	a
	anl	a,#0x3F
	mov	r7,a
	anl	ar7,#0x07
	cjne	r7,#0x00,00126$
;	lib/gpio.c:182: Enable_ADC_AIN1;
	anl	_ADCCON0,#0xF0
	orl	_ADCCON0,#0x01
	orl	_P3M1,#0x01
	mov	r7,_P3M2
	mov	a,#0xFE
	anl	a,r7
	mov	_P3M2,a
	mov	_AINDIDS,#0x00
	orl	_AINDIDS,#0x02
	orl	_ADCCON1,#0x01
;	lib/gpio.c:186: }
00126$:
;	lib/gpio.c:189: clr_ADCF;
	clr	_ADCF
;	lib/gpio.c:190: set_ADCS;
	setb	_ADCS
;	lib/gpio.c:191: while (ADCF == 0)
00127$:
	jnb	_ADCF,00127$
;	lib/gpio.c:193: result = ADCRH << 8;
	mov	r7,_ADCRH
	mov	r6,#0x00
;	lib/gpio.c:194: result += ADCRL;
	mov	r4,_ADCRL
	mov	r5,#0x00
	mov	a,r4
	add	a,r6
	mov	r6,a
	mov	a,r5
	addc	a,r7
	mov	r7,a
;	lib/gpio.c:195: return result & 0xfff;
	mov	dpl,r6
	mov	a,#0x0F
	anl	a,r7
	mov	dph,a
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'analogWrite'
;------------------------------------------------------------
;value                     Allocated to stack - _bp -4
;pin                       Allocated to registers r7 
;------------------------------------------------------------
;	lib/gpio.c:198: void analogWrite(byte pin, word value) {
;	-----------------------------------------
;	 function analogWrite
;	-----------------------------------------
_analogWrite:
	push	_bp
	mov	_bp,sp
	mov	r7,dpl
;	lib/gpio.c:199: if (GPIO_PWM(pin)) {
	mov	a,#0x80
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x80,00140$
	sjmp	00141$
00140$:
	ljmp	00123$
00141$:
;	lib/gpio.c:200: if (GPIO_PORT(pin) == 0) {
	mov	a,r7
	anl	a,#0x03
	jz	00143$
	ljmp	00119$
00143$:
;	lib/gpio.c:201: switch (GPIO_PIN(pin)) {
	mov	a,r7
	rr	a
	rr	a
	anl	a,#(0x3F&0x07)
	mov	r6,a
	add	a,#0xff - 0x05
	jnc	00144$
	ljmp	00120$
00144$:
	mov	a,r6
	add	a,r6
	add	a,r6
	mov	dptr,#00145$
	jmp	@a+dptr
00145$:
	ljmp	00101$
	ljmp	00102$
	ljmp	00106$
	ljmp	00103$
	ljmp	00104$
	ljmp	00105$
;	lib/gpio.c:202: case 0: //3
00101$:
;	lib/gpio.c:203: PWM3H = highByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	inc	r0
	mov	ar6,@r0
	mov	_PWM3H,r6
;	lib/gpio.c:204: PWM3L = lowByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	ar5,@r0
	mov	r6,#0x00
	mov	_PWM3L,r5
;	lib/gpio.c:205: break;
	ljmp	00120$
;	lib/gpio.c:206: case 1: //4
00102$:
;	lib/gpio.c:207: set_SFRPAGE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	orl	_SFRS,#0x01
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:208: PWM4H = highByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	inc	r0
	mov	ar6,@r0
	mov	_PWM4H,r6
;	lib/gpio.c:209: PWM4L = lowByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	ar5,@r0
	mov	_PWM4L,r5
;	lib/gpio.c:210: clr_SFRPAGE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	mov	r6,_SFRS
	mov	a,#0xFE
	anl	a,r6
	mov	_SFRS,a
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:211: break;
	ljmp	00120$
;	lib/gpio.c:212: case 3: //5
00103$:
;	lib/gpio.c:213: set_SFRPAGE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	orl	_SFRS,#0x01
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:214: PWM5H = highByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	inc	r0
	mov	ar6,@r0
	mov	_PWM5H,r6
;	lib/gpio.c:215: PWM5L = lowByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	ar5,@r0
	mov	_PWM5L,r5
;	lib/gpio.c:216: clr_SFRPAGE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	mov	r6,_SFRS
	mov	a,#0xFE
	anl	a,r6
	mov	_SFRS,a
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:217: break;
	ljmp	00120$
;	lib/gpio.c:218: case 4: //3
00104$:
;	lib/gpio.c:219: PWM3H = highByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	inc	r0
	mov	ar6,@r0
	mov	_PWM3H,r6
;	lib/gpio.c:220: PWM3L = lowByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	ar5,@r0
	mov	r6,#0x00
	mov	_PWM3L,r5
;	lib/gpio.c:221: break;
	ljmp	00120$
;	lib/gpio.c:222: case 5: //2
00105$:
;	lib/gpio.c:223: PWM2H = highByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	inc	r0
	mov	ar6,@r0
	mov	_PWM2H,r6
;	lib/gpio.c:224: PWM2L = lowByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	ar5,@r0
	mov	r6,#0x00
	mov	_PWM2L,r5
;	lib/gpio.c:225: break;
	ljmp	00120$
;	lib/gpio.c:226: default:
00106$:
;	lib/gpio.c:228: }
	ljmp	00120$
00119$:
;	lib/gpio.c:229: } else if (GPIO_PORT(pin) == 1) {
	mov	a,#0x03
	anl	a,r7
	mov	r6,a
	cjne	r6,#0x01,00146$
	sjmp	00147$
00146$:
	ljmp	00116$
00147$:
;	lib/gpio.c:230: switch (GPIO_PIN(pin)) {
	mov	a,r7
	rr	a
	rr	a
	anl	a,#(0x3F&0x07)
	mov	r7,a
	add	a,#0xff - 0x05
	jnc	00148$
	ljmp	00120$
00148$:
	mov	a,r7
	add	a,r7
	add	a,r7
	mov	dptr,#00149$
	jmp	@a+dptr
00149$:
	ljmp	00108$
	ljmp	00109$
	ljmp	00110$
	ljmp	00113$
	ljmp	00111$
	ljmp	00112$
;	lib/gpio.c:231: case 0: //2
00108$:
;	lib/gpio.c:232: PWM2H = highByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	inc	r0
	mov	ar7,@r0
	mov	_PWM2H,r7
;	lib/gpio.c:233: PWM2L = lowByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	ar6,@r0
	mov	r7,#0x00
	mov	_PWM2L,r6
;	lib/gpio.c:234: break;
	ljmp	00120$
;	lib/gpio.c:235: case 1: //1
00109$:
;	lib/gpio.c:236: PWM2H = highByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	inc	r0
	mov	ar7,@r0
	mov	_PWM2H,r7
;	lib/gpio.c:237: PWM2L = lowByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	ar6,@r0
	mov	r7,#0x00
	mov	_PWM2L,r6
;	lib/gpio.c:238: break;
	ljmp	00120$
;	lib/gpio.c:239: case 2: //0
00110$:
;	lib/gpio.c:240: PWM0H = highByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	inc	r0
	mov	ar7,@r0
	mov	_PWM0H,r7
;	lib/gpio.c:241: PWM0L = lowByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	ar6,@r0
	mov	r7,#0x00
	mov	_PWM0L,r6
;	lib/gpio.c:242: break;
;	lib/gpio.c:243: case 4: //1
	sjmp	00120$
00111$:
;	lib/gpio.c:244: PWM1H = highByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	inc	r0
	mov	ar7,@r0
	mov	_PWM1H,r7
;	lib/gpio.c:245: PWM1L = lowByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	ar6,@r0
	mov	r7,#0x00
	mov	_PWM1L,r6
;	lib/gpio.c:246: break;
;	lib/gpio.c:247: case 5: //5
	sjmp	00120$
00112$:
;	lib/gpio.c:248: set_SFRPAGE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	orl	_SFRS,#0x01
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:249: PWM5H = highByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	inc	r0
	mov	ar7,@r0
	mov	_PWM5H,r7
;	lib/gpio.c:250: PWM5L = lowByte(value);
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	ar6,@r0
	mov	_PWM5L,r6
;	lib/gpio.c:251: clr_SFRPAGE;
	mov	c,_EA
	clr	a
	rlc	a
	mov	_BIT_TMP,a
	clr	_EA
	mov	_TA,#0xAA
	mov	_TA,#0x55
	mov	r7,_SFRS
	mov	a,#0xFE
	anl	a,r7
	mov	_SFRS,a
	mov	a,_BIT_TMP
	add	a,#0xff
	mov	_EA,c
;	lib/gpio.c:252: break;
;	lib/gpio.c:253: default:
	sjmp	00120$
00113$:
;	lib/gpio.c:255: }
	sjmp	00120$
00116$:
;	lib/gpio.c:257: return;
	sjmp	00123$
00120$:
;	lib/gpio.c:258: set_LOAD;
	setb	_LOAD
;	lib/gpio.c:259: set_PWMRUN;
	setb	_PWMRUN
00123$:
	pop	_bp
	ret
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
