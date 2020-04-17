;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Apr  3 2018) (Linux)
; This file was generated Fri Apr 17 19:44:45 2020
;--------------------------------------------------------
	.module ticker
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _tl0
	.globl _th0
	.globl _Timer0_ISR
	.globl _digitalWrite
	.globl _digitalRead
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
	.globl _milliseconds
	.globl _ticker_init
	.globl _millis
	.globl _delay
	.globl _pulseIn
	.globl _shiftOut
	.globl _shiftIn
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
; overlayable bit register bank
;--------------------------------------------------------
	.area BIT_BANK	(REL,OVR,DATA)
bits:
	.ds 1
	b0 = bits[0]
	b1 = bits[1]
	b2 = bits[2]
	b3 = bits[3]
	b4 = bits[4]
	b5 = bits[5]
	b6 = bits[6]
	b7 = bits[7]
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
_milliseconds::
	.ds 4
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
;Allocation info for local variables in function 'Timer0_ISR'
;------------------------------------------------------------
;	lib/ticker.c:13: void Timer0_ISR(void) __interrupt(1) {
;	-----------------------------------------
;	 function Timer0_ISR
;	-----------------------------------------
_Timer0_ISR:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
	push	acc
	push	dpl
	push	dph
	push	psw
;	lib/ticker.c:14: TH0 = th0;
	mov	dptr,#_th0
	clr	a
	movc	a,@a+dptr
	mov	_TH0,a
;	lib/ticker.c:15: TL0 = tl0;
	mov	dptr,#_tl0
	clr	a
	movc	a,@a+dptr
	mov	_TL0,a
;	lib/ticker.c:16: milliseconds++;
	mov	a,#0x01
	add	a,_milliseconds
	mov	_milliseconds,a
	clr	a
	addc	a,(_milliseconds + 1)
	mov	(_milliseconds + 1),a
	clr	a
	addc	a,(_milliseconds + 2)
	mov	(_milliseconds + 2),a
	clr	a
	addc	a,(_milliseconds + 3)
	mov	(_milliseconds + 3),a
	pop	psw
	pop	dph
	pop	dpl
	pop	acc
	reti
;	eliminated unneeded mov psw,# (no regs used in bank)
;	eliminated unneeded push/pop b
;------------------------------------------------------------
;Allocation info for local variables in function 'ticker_init'
;------------------------------------------------------------
;	lib/ticker.c:19: void ticker_init(void) {
;	-----------------------------------------
;	 function ticker_init
;	-----------------------------------------
_ticker_init:
;	lib/ticker.c:20: milliseconds = 0;
	clr	a
	mov	_milliseconds,a
	mov	(_milliseconds + 1),a
	mov	(_milliseconds + 2),a
	mov	(_milliseconds + 3),a
;	lib/ticker.c:21: TIMER0_MODE1_ENABLE;
	anl	_TMOD,#0xF0
	orl	_TMOD,#0x01
;	lib/ticker.c:22: TH0 = th0;
	mov	dptr,#_th0
	clr	a
	movc	a,@a+dptr
	mov	_TH0,a
;	lib/ticker.c:23: TL0 = tl0;
	mov	dptr,#_tl0
	clr	a
	movc	a,@a+dptr
	mov	_TL0,a
;	lib/ticker.c:24: set_ET0;
	setb	_ET0
;	lib/ticker.c:25: set_EA;
	setb	_EA
;	lib/ticker.c:26: set_TR0;
	setb	_TR0
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'millis'
;------------------------------------------------------------
;	lib/../../common/ticker.c:29: dword millis() { return milliseconds; }
;	-----------------------------------------
;	 function millis
;	-----------------------------------------
_millis:
	mov	dpl,_milliseconds
	mov	dph,(_milliseconds + 1)
	mov	b,(_milliseconds + 2)
	mov	a,(_milliseconds + 3)
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'delay'
;------------------------------------------------------------
;time                      Allocated to stack - _bp +1
;waitTo                    Allocated to stack - _bp +5
;------------------------------------------------------------
;	lib/../../common/ticker.c:31: void delay(dword time) {
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
	push	_bp
	mov	_bp,sp
	push	dpl
	push	dph
	push	b
	push	acc
	mov	a,sp
	add	a,#0x04
	mov	sp,a
;	lib/../../common/ticker.c:32: volatile dword waitTo = millis() + time;
	lcall	_millis
	mov	r2,dpl
	mov	r3,dph
	mov	r6,b
	mov	r7,a
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	add	a,r2
	mov	r2,a
	inc	r0
	mov	a,@r0
	addc	a,r3
	mov	r3,a
	inc	r0
	mov	a,@r0
	addc	a,r6
	mov	r6,a
	inc	r0
	mov	a,@r0
	addc	a,r7
	mov	r7,a
	mov	a,_bp
	add	a,#0x05
	mov	r0,a
	mov	@r0,ar2
	inc	r0
	mov	@r0,ar3
	inc	r0
	mov	@r0,ar6
	inc	r0
	mov	@r0,ar7
;	lib/../../common/ticker.c:33: while (waitTo > millis())
00101$:
	lcall	_millis
	mov	r4,dpl
	mov	r5,dph
	mov	r6,b
	mov	r7,a
	mov	a,_bp
	add	a,#0x05
	mov	r0,a
	clr	c
	mov	a,r4
	subb	a,@r0
	mov	a,r5
	inc	r0
	subb	a,@r0
	mov	a,r6
	inc	r0
	subb	a,@r0
	mov	a,r7
	inc	r0
	subb	a,@r0
	jc	00101$
	mov	sp,_bp
	pop	_bp
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'pulseIn'
;------------------------------------------------------------
;timeOut                   Allocated to stack - _bp -6
;value                     Allocated to registers b0 
;pin                       Allocated to registers r7 
;start                     Allocated to stack - _bp +1
;------------------------------------------------------------
;	lib/../../common/ticker.c:37: dword pulseIn(byte pin, bool value, dword timeOut) {
;	-----------------------------------------
;	 function pulseIn
;	-----------------------------------------
_pulseIn:
	push	_bp
	mov	a,sp
	mov	_bp,a
	add	a,#0x04
	mov	sp,a
	mov	r7,dpl
;	lib/../../common/ticker.c:38: volatile dword start = millis();
	push	ar7
	push	bits
	lcall	_millis
	mov	r3,dpl
	mov	r4,dph
	mov	r5,b
	mov	r6,a
	pop	bits
	pop	ar7
	mov	r0,_bp
	inc	r0
	mov	@r0,ar3
	inc	r0
	mov	@r0,ar4
	inc	r0
	mov	@r0,ar5
	inc	r0
	mov	@r0,ar6
;	lib/../../common/ticker.c:39: while (digitalRead(pin) != value) {
00103$:
	mov	dpl,r7
	push	ar7
	push	bits
	lcall	_digitalRead
	mov	r6,dpl
	pop	bits
	pop	ar7
	mov	c,b0
	clr	a
	rlc	a
	mov	r5,a
	mov	a,r6
	cjne	a,ar5,00117$
	sjmp	00105$
00117$:
;	lib/../../common/ticker.c:40: if (millis() - start > timeOut)
	push	ar7
	push	bits
	lcall	_millis
	mov	r3,dpl
	mov	r4,dph
	mov	r5,b
	mov	r6,a
	pop	bits
	pop	ar7
	mov	r0,_bp
	inc	r0
	mov	a,r3
	clr	c
	subb	a,@r0
	mov	r3,a
	mov	a,r4
	inc	r0
	subb	a,@r0
	mov	r4,a
	mov	a,r5
	inc	r0
	subb	a,@r0
	mov	r5,a
	mov	a,r6
	inc	r0
	subb	a,@r0
	mov	r6,a
	mov	a,_bp
	add	a,#0xfa
	mov	r0,a
	clr	c
	mov	a,@r0
	subb	a,r3
	inc	r0
	mov	a,@r0
	subb	a,r4
	inc	r0
	mov	a,@r0
	subb	a,r5
	inc	r0
	mov	a,@r0
	subb	a,r6
	jnc	00103$
;	lib/../../common/ticker.c:41: return timeOut;
	mov	a,_bp
	add	a,#0xfa
	mov	r0,a
	mov	dpl,@r0
	inc	r0
	mov	dph,@r0
	inc	r0
	mov	b,@r0
	inc	r0
	mov	a,@r0
	sjmp	00106$
00105$:
;	lib/../../common/ticker.c:43: return millis() - start;
	lcall	_millis
	mov	r4,dpl
	mov	r5,dph
	mov	r6,b
	mov	r7,a
	mov	r0,_bp
	inc	r0
	mov	a,r4
	clr	c
	subb	a,@r0
	mov	r4,a
	mov	a,r5
	inc	r0
	subb	a,@r0
	mov	r5,a
	mov	a,r6
	inc	r0
	subb	a,@r0
	mov	r6,a
	mov	a,r7
	inc	r0
	subb	a,@r0
	mov	r7,a
	mov	dpl,r4
	mov	dph,r5
	mov	b,r6
00106$:
	mov	sp,_bp
	pop	_bp
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'shiftOut'
;------------------------------------------------------------
;clockPin                  Allocated to stack - _bp -3
;bitOrder                  Allocated to stack - _bp -4
;value                     Allocated to stack - _bp -5
;dataPin                   Allocated to registers r7 
;bit                       Allocated to registers b0 
;i                         Allocated to registers r6 
;j                         Allocated to registers r5 
;------------------------------------------------------------
;	lib/../../common/ticker.c:46: void shiftOut(byte dataPin, byte clockPin, byte bitOrder, byte value) {
;	-----------------------------------------
;	 function shiftOut
;	-----------------------------------------
_shiftOut:
	push	_bp
	mov	_bp,sp
	mov	r7,dpl
;	lib/../../common/ticker.c:49: digitalWrite(clockPin, 0);
	push	ar7
	clr	a
	push	acc
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	dpl,@r0
	lcall	_digitalWrite
	dec	sp
;	lib/../../common/ticker.c:50: delay(1);
	mov	dptr,#(0x01&0x00ff)
	clr	a
	mov	b,a
	lcall	_delay
	pop	ar7
;	lib/../../common/ticker.c:51: for (i = 0; i < 8; i++) {
	mov	r6,#0x00
00109$:
;	lib/../../common/ticker.c:52: if (bitOrder) { // msb
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	a,@r0
	jz	00102$
;	lib/../../common/ticker.c:53: bit = bitRead(value, i);
	mov	b,r6
	inc	b
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,@r0
	sjmp	00128$
00127$:
	clr	c
	rrc	a
00128$:
	djnz	b,00127$
	mov	r5,a
	rrc	a
	mov	b0,c
	sjmp	00103$
00102$:
;	lib/../../common/ticker.c:55: bit = bitRead(value, (7 - i));
	mov	ar4,r6
	mov	r5,#0x00
	mov	a,#0x07
	clr	c
	subb	a,r4
	mov	r4,a
	clr	a
	subb	a,r5
	mov	r5,a
	mov	b,r4
	inc	b
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,@r0
	sjmp	00130$
00129$:
	clr	c
	rrc	a
00130$:
	djnz	b,00129$
	mov	r4,a
	rrc	a
	mov	b0,c
00103$:
;	lib/../../common/ticker.c:57: digitalWrite(dataPin, bit);
	mov	c,b0
	clr	a
	rlc	a
	mov	r5,a
	push	ar7
	push	ar6
	push	ar5
	mov	dpl,r7
	lcall	_digitalWrite
	dec	sp
;	lib/../../common/ticker.c:58: digitalWrite(clockPin, 1);
	mov	a,#0x01
	push	acc
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	dpl,@r0
	lcall	_digitalWrite
	dec	sp
	pop	ar6
	pop	ar7
;	lib/../../common/ticker.c:59: for (j = 0; j < 4; j++)
	mov	r5,#0x04
00108$:
	mov	ar4,r5
	dec	r4
	mov	a,r4
	mov	r5,a
	jnz	00108$
;	lib/../../common/ticker.c:61: digitalWrite(clockPin, 0);
	push	ar7
	push	ar6
	clr	a
	push	acc
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	dpl,@r0
	lcall	_digitalWrite
	dec	sp
	pop	ar6
	pop	ar7
;	lib/../../common/ticker.c:51: for (i = 0; i < 8; i++) {
	inc	r6
	cjne	r6,#0x08,00132$
00132$:
	jnc	00133$
	ljmp	00109$
00133$:
	pop	_bp
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'shiftIn'
;------------------------------------------------------------
;clockPin                  Allocated to stack - _bp -3
;bitOrder                  Allocated to stack - _bp -4
;dataPin                   Allocated to registers r7 
;res                       Allocated to registers r6 
;i                         Allocated to registers r5 
;------------------------------------------------------------
;	lib/../../common/ticker.c:65: byte shiftIn(byte dataPin, byte clockPin, byte bitOrder) {
;	-----------------------------------------
;	 function shiftIn
;	-----------------------------------------
_shiftIn:
	push	_bp
	mov	_bp,sp
	mov	r7,dpl
;	lib/../../common/ticker.c:66: byte res = 0;
	mov	r6,#0x00
;	lib/../../common/ticker.c:69: while (digitalRead(clockPin) != 1)
	mov	r5,#0x00
00101$:
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	dpl,@r0
	push	ar7
	push	ar6
	push	ar5
	lcall	_digitalRead
	mov	r4,dpl
	pop	ar5
	pop	ar6
	pop	ar7
	cjne	r4,#0x01,00101$
;	lib/../../common/ticker.c:71: if (bitOrder) { // msb
	mov	a,_bp
	add	a,#0xfc
	mov	r0,a
	mov	a,@r0
	jz	00111$
;	lib/../../common/ticker.c:72: bitWrite(res, i, digitalRead(dataPin));
	mov	dpl,r7
	push	ar7
	push	ar6
	push	ar5
	lcall	_digitalRead
	mov	a,dpl
	pop	ar5
	pop	ar6
	pop	ar7
	jz	00105$
	mov	b,r5
	inc	b
	mov	a,#0x01
	sjmp	00152$
00150$:
	add	a,acc
00152$:
	djnz	b,00150$
	mov	r4,a
	orl	ar6,a
	sjmp	00113$
00105$:
	mov	b,r5
	inc	b
	mov	a,#0x01
	sjmp	00155$
00153$:
	add	a,acc
00155$:
	djnz	b,00153$
	cpl	a
	mov	r4,a
	anl	ar6,a
	sjmp	00113$
00111$:
;	lib/../../common/ticker.c:74: bitWrite(res, (7 - i), digitalRead(dataPin));
	mov	dpl,r7
	push	ar7
	push	ar6
	push	ar5
	lcall	_digitalRead
	mov	a,dpl
	pop	ar5
	pop	ar6
	pop	ar7
	jz	00108$
	mov	a,#0x07
	clr	c
	subb	a,r5
	mov	r4,a
	mov	b,r4
	inc	b
	mov	a,#0x01
	sjmp	00159$
00157$:
	add	a,acc
00159$:
	djnz	b,00157$
	mov	r4,a
	orl	ar6,a
	sjmp	00113$
00108$:
	mov	a,#0x07
	clr	c
	subb	a,r5
	mov	r4,a
	mov	b,r4
	inc	b
	mov	a,#0x01
	sjmp	00162$
00160$:
	add	a,acc
00162$:
	djnz	b,00160$
	cpl	a
	mov	r4,a
	anl	ar6,a
;	lib/../../common/ticker.c:76: while (digitalRead(clockPin) == 0)
00113$:
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	dpl,@r0
	push	ar7
	push	ar6
	push	ar5
	lcall	_digitalRead
	mov	a,dpl
	pop	ar5
	pop	ar6
	pop	ar7
	jz	00113$
;	lib/../../common/ticker.c:68: for (i = 0; i < 8; i++) {
	inc	r5
	cjne	r5,#0x08,00164$
00164$:
	jnc	00165$
	ljmp	00101$
00165$:
;	lib/../../common/ticker.c:79: return res;
	mov	dpl,r6
	pop	_bp
	ret
	.area CSEG    (CODE)
	.area CONST   (CODE)
_th0:
	.db #0xFA	; 250
_tl0:
	.db #0xCA	; 202
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
