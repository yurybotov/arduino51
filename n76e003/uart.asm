;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.5.0 #9253 (Apr  3 2018) (Linux)
; This file was generated Fri Apr 17 19:44:46 2020
;--------------------------------------------------------
	.module uart
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _printInteger
	.globl _printU
	.globl _SerialPort0_ISR
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
	.globl _lengthBuffer
	.globl _endBuffer
	.globl _beginBuffer
	.globl _SerialBuffer
	.globl _SerialBegin
	.globl _putc
	.globl _getc
	.globl _SerialAvailable
	.globl _uprintf
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
_SerialBuffer::
	.ds 32
_beginBuffer::
	.ds 1
_endBuffer::
	.ds 1
_lengthBuffer::
	.ds 1
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
;	lib/uart.c:7: byte beginBuffer = 0, endBuffer = 0, lengthBuffer = 0;
	mov	_beginBuffer,#0x00
;	lib/uart.c:7: 
	mov	_endBuffer,#0x00
;	lib/uart.c:7: byte beginBuffer = 0, endBuffer = 0, lengthBuffer = 0;
	mov	_lengthBuffer,#0x00
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
;Allocation info for local variables in function 'SerialPort0_ISR'
;------------------------------------------------------------
;	lib/uart.c:9: void SerialPort0_ISR(void) __interrupt(4) {
;	-----------------------------------------
;	 function SerialPort0_ISR
;	-----------------------------------------
_SerialPort0_ISR:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
	push	acc
	push	ar7
	push	ar0
	push	psw
	mov	psw,#0x00
;	lib/uart.c:10: if (RI == 1) {
;	lib/uart.c:11: clr_RI;
	jbc	_RI,00113$
	sjmp	00105$
00113$:
;	lib/uart.c:12: SerialBuffer[endBuffer++] = SBUF;
	mov	r7,_endBuffer
	inc	_endBuffer
	mov	a,r7
	add	a,#_SerialBuffer
	mov	r0,a
	mov	@r0,_SBUF
;	lib/uart.c:13: if (endBuffer == 32)
	mov	a,#0x20
	cjne	a,_endBuffer,00102$
;	lib/uart.c:14: endBuffer = 0;
	mov	_endBuffer,#0x00
00102$:
;	lib/uart.c:15: lengthBuffer++;
	inc	_lengthBuffer
00105$:
	pop	psw
	pop	ar0
	pop	ar7
	pop	acc
	reti
;	eliminated unneeded push/pop ar1
;	eliminated unneeded push/pop dpl
;	eliminated unneeded push/pop dph
;	eliminated unneeded push/pop b
;------------------------------------------------------------
;Allocation info for local variables in function 'SerialBegin'
;------------------------------------------------------------
;speed                     Allocated to registers r6 r7 
;------------------------------------------------------------
;	lib/uart.c:19: void SerialBegin(word speed) {
;	-----------------------------------------
;	 function SerialBegin
;	-----------------------------------------
_SerialBegin:
	mov	r6,dpl
	mov	r7,dph
;	lib/uart.c:20: P06_Quasi_Mode;
	mov	r5,_P0M1
	mov	a,#0xBF
	anl	a,r5
	mov	_P0M1,a
	mov	r5,_P0M2
	mov	a,#0xBF
	anl	a,r5
	mov	_P0M2,a
;	lib/uart.c:21: P07_Quasi_Mode;
	mov	r5,_P0M1
	mov	a,#0x7F
	anl	a,r5
	mov	_P0M1,a
	mov	r5,_P0M2
	mov	a,#0x7F
	anl	a,r5
	mov	_P0M2,a
;	lib/uart.c:22: SCON = 0x50;
	mov	_SCON,#0x50
;	lib/uart.c:23: TMOD |= 0x20;
	orl	_TMOD,#0x20
;	lib/uart.c:24: set_SMOD;
	orl	_PCON,#0x80
;	lib/uart.c:25: set_T1M;
	orl	_CKCON,#0x10
;	lib/uart.c:26: clr_BRCK;
	mov	r5,_T3CON
	mov	a,#0xDF
	anl	a,r5
	mov	_T3CON,a
;	lib/uart.c:27: TH1 = 256 - (1000000 / speed);
	mov	r5,#0x00
	mov	r4,#0x00
	push	ar6
	push	ar7
	push	ar5
	push	ar4
	mov	dptr,#0x4240
	mov	b,#0x0F
	clr	a
	lcall	__divslong
	mov	r4,dpl
	mov	a,sp
	add	a,#0xfc
	mov	sp,a
	clr	c
	clr	a
	subb	a,r4
	mov	_TH1,a
;	lib/uart.c:28: set_TR1;
	setb	_TR1
;	lib/uart.c:29: set_RB8;
	setb	_RB8
;	lib/uart.c:30: clr_TI;
	clr	_TI
;	lib/uart.c:31: set_ES;
	setb	_ES
;	lib/uart.c:32: set_EA;
	setb	_EA
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'putc'
;------------------------------------------------------------
;c                         Allocated to registers r7 
;------------------------------------------------------------
;	lib/uart.c:35: void putc(byte c) {
;	-----------------------------------------
;	 function putc
;	-----------------------------------------
_putc:
	mov	r7,dpl
;	lib/uart.c:36: TI = 0;
	clr	_TI
;	lib/uart.c:37: SBUF = c;
	mov	_SBUF,r7
;	lib/uart.c:38: while (TI == 0)
00101$:
	jnb	_TI,00101$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'getc'
;------------------------------------------------------------
;c                         Allocated to registers r7 
;------------------------------------------------------------
;	lib/../../common/uart.c:42: byte getc(void) {
;	-----------------------------------------
;	 function getc
;	-----------------------------------------
_getc:
;	lib/../../common/uart.c:43: if (lengthBuffer > 0) {
	mov	a,_lengthBuffer
	jz	00104$
;	lib/../../common/uart.c:44: byte c = SerialBuffer[beginBuffer++];
	mov	r7,_beginBuffer
	inc	_beginBuffer
	mov	a,r7
	add	a,#_SerialBuffer
	mov	r1,a
	mov	ar7,@r1
;	lib/../../common/uart.c:45: if (beginBuffer == 32)
	mov	a,#0x20
	cjne	a,_beginBuffer,00102$
;	lib/../../common/uart.c:46: beginBuffer = 0;
	mov	_beginBuffer,#0x00
00102$:
;	lib/../../common/uart.c:47: lengthBuffer--;
	dec	_lengthBuffer
;	lib/../../common/uart.c:48: return c;
	mov	dpl,r7
	ret
00104$:
;	lib/../../common/uart.c:50: return 0;
	mov	dpl,#0x00
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'SerialAvailable'
;------------------------------------------------------------
;	lib/../../common/uart.c:54: word SerialAvailable() {
;	-----------------------------------------
;	 function SerialAvailable
;	-----------------------------------------
_SerialAvailable:
;	lib/../../common/uart.c:55: return lengthBuffer;
	mov	r6,_lengthBuffer
	mov	r7,#0x00
	mov	dpl,r6
	mov	dph,r7
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'printU'
;------------------------------------------------------------
;radix                     Allocated to stack - _bp -3
;u32Temp                   Allocated to stack - _bp +1
;print_buf                 Allocated to stack - _bp +9
;i                         Allocated to registers r2 
;val                       Allocated to registers r5 
;sloc0                     Allocated to stack - _bp +5
;sloc1                     Allocated to stack - _bp +28
;------------------------------------------------------------
;	lib/../../common/uart.c:59: void printU(dword u32Temp, byte radix) {
;	-----------------------------------------
;	 function printU
;	-----------------------------------------
_printU:
	push	_bp
	mov	_bp,sp
	push	dpl
	push	dph
	push	b
	push	acc
	mov	a,sp
	add	a,#0x15
	mov	sp,a
;	lib/../../common/uart.c:62: print_buf[16] = 0;
	mov	a,_bp
	add	a,#0x09
	mov	r3,a
	add	a,#0x10
	mov	r0,a
	mov	@r0,#0x00
;	lib/../../common/uart.c:63: for (i = 15; i > 0; i--) {
	mov	r2,#0x0F
	mov	r7,#0x0F
00104$:
;	lib/../../common/uart.c:64: byte val = u32Temp % radix;
	push	ar2
	mov	a,_bp
	add	a,#0xfd
	mov	r0,a
	mov	a,_bp
	add	a,#0x05
	mov	r1,a
	mov	a,@r0
	mov	@r1,a
	inc	r1
	mov	@r1,#0x00
	inc	r1
	mov	@r1,#0x00
	inc	r1
	mov	@r1,#0x00
	push	ar7
	push	ar3
	mov	a,_bp
	add	a,#0x05
	mov	r0,a
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	mov	r0,_bp
	inc	r0
	mov	dpl,@r0
	inc	r0
	mov	dph,@r0
	inc	r0
	mov	b,@r0
	inc	r0
	mov	a,@r0
	lcall	__modulong
	mov	r2,dpl
	mov	r4,dph
	mov	r6,a
	mov	a,sp
	add	a,#0xfc
	mov	sp,a
	pop	ar3
	pop	ar7
	mov	ar5,r2
;	lib/../../common/uart.c:65: print_buf[i] = (val < 10) ? (val + '0') : (val - 10 + 'A');
	mov	a,r7
	add	a,r3
	mov	r1,a
	cjne	r5,#0x0A,00122$
00122$:
	pop	ar2
	jnc	00108$
	mov	ar6,r5
	mov	a,#0x30
	add	a,r6
	mov	r6,a
	sjmp	00109$
00108$:
	mov	a,#0x37
	add	a,r5
	mov	r6,a
00109$:
	mov	@r1,ar6
;	lib/../../common/uart.c:66: u32Temp /= radix;
	push	ar7
	push	ar3
	push	ar2
	mov	a,_bp
	add	a,#0x05
	mov	r0,a
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	mov	r0,_bp
	inc	r0
	mov	dpl,@r0
	inc	r0
	mov	dph,@r0
	inc	r0
	mov	b,@r0
	inc	r0
	mov	a,@r0
	lcall	__divulong
	mov	r0,_bp
	inc	r0
	mov	@r0,dpl
	inc	r0
	mov	@r0,dph
	inc	r0
	mov	@r0,b
	inc	r0
	mov	@r0,a
	mov	a,sp
	add	a,#0xfc
	mov	sp,a
	pop	ar2
	pop	ar3
	pop	ar7
;	lib/../../common/uart.c:67: if (u32Temp == 0)
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	inc	r0
	orl	a,@r0
	inc	r0
	orl	a,@r0
	inc	r0
	orl	a,@r0
	jz	00103$
;	lib/../../common/uart.c:63: for (i = 15; i > 0; i--) {
	dec	r7
	mov	a,r7
	mov	r2,a
	jz	00125$
	ljmp	00104$
00125$:
00103$:
;	lib/../../common/uart.c:70: uprintf(print_buf + i);
	mov	a,r2
	add	a,r3
	mov	r3,a
	mov	r7,#0x00
	mov	r6,#0x40
	push	ar3
	push	ar7
	push	ar6
	lcall	_uprintf
	dec	sp
	dec	sp
	dec	sp
	mov	sp,_bp
	pop	_bp
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'printInteger'
;------------------------------------------------------------
;u32Temp                   Allocated to stack - _bp +1
;print_buf                 Allocated to stack - _bp +5
;sign                      Allocated to registers r3 
;i                         Allocated to stack - _bp +17
;------------------------------------------------------------
;	lib/../../common/uart.c:73: void printInteger(dword u32Temp) {
;	-----------------------------------------
;	 function printInteger
;	-----------------------------------------
_printInteger:
	push	_bp
	mov	_bp,sp
	push	dpl
	push	dph
	push	b
	push	acc
	mov	a,sp
	add	a,#0x0D
	mov	sp,a
;	lib/../../common/uart.c:75: byte sign = 0;
	mov	r3,#0x00
;	lib/../../common/uart.c:78: print_buf[11] = 0;
	mov	a,_bp
	add	a,#0x05
	mov	r2,a
	add	a,#0x0B
	mov	r0,a
	mov	@r0,#0x00
;	lib/../../common/uart.c:79: if (u32Temp & 0x8000) {
	mov	r0,_bp
	inc	r0
	inc	r0
	mov	a,@r0
	jnb	acc.7,00102$
;	lib/../../common/uart.c:80: u32Temp = ~u32Temp + 1;
	push	ar2
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	cpl	a
	mov	r2,a
	inc	r0
	mov	a,@r0
	cpl	a
	mov	r5,a
	inc	r0
	mov	a,@r0
	cpl	a
	mov	r6,a
	inc	r0
	mov	a,@r0
	cpl	a
	mov	r7,a
	mov	r0,_bp
	inc	r0
	mov	a,#0x01
	add	a,r2
	mov	@r0,a
	clr	a
	addc	a,r5
	inc	r0
	mov	@r0,a
	clr	a
	addc	a,r6
	inc	r0
	mov	@r0,a
	clr	a
	addc	a,r7
	inc	r0
	mov	@r0,a
;	lib/../../common/uart.c:81: sign = 1;
	mov	r3,#0x01
;	lib/../../common/uart.c:91: uprintf(print_buf + i);
	pop	ar2
;	lib/../../common/uart.c:81: sign = 1;
00102$:
;	lib/../../common/uart.c:83: for (i = 10; i > 0; i--) {
	mov	r7,#0x0A
	mov	a,_bp
	add	a,#0x11
	mov	r0,a
	mov	@r0,#0x0A
00108$:
;	lib/../../common/uart.c:84: print_buf[i] = (u32Temp % 10) + '0';
	push	ar3
	mov	a,_bp
	add	a,#0x11
	mov	r0,a
	mov	a,@r0
	add	a,r2
	mov	r1,a
	push	ar7
	push	ar2
	push	ar1
	mov	a,#0x0A
	push	acc
	clr	a
	push	acc
	push	acc
	push	acc
	mov	r0,_bp
	inc	r0
	mov	dpl,@r0
	inc	r0
	mov	dph,@r0
	inc	r0
	mov	b,@r0
	inc	r0
	mov	a,@r0
	lcall	__modulong
	mov	r3,dpl
	mov	a,sp
	add	a,#0xfc
	mov	sp,a
	pop	ar1
	pop	ar2
	mov	a,#0x30
	add	a,r3
	mov	@r1,a
;	lib/../../common/uart.c:85: u32Temp /= 10;
	push	ar3
	push	ar2
	mov	a,#0x0A
	push	acc
	clr	a
	push	acc
	push	acc
	push	acc
	mov	r0,_bp
	inc	r0
	mov	dpl,@r0
	inc	r0
	mov	dph,@r0
	inc	r0
	mov	b,@r0
	inc	r0
	mov	a,@r0
	lcall	__divulong
	mov	r0,_bp
	inc	r0
	mov	@r0,dpl
	inc	r0
	mov	@r0,dph
	inc	r0
	mov	@r0,b
	inc	r0
	mov	@r0,a
	mov	a,sp
	add	a,#0xfc
	mov	sp,a
	pop	ar2
	pop	ar3
	pop	ar7
;	lib/../../common/uart.c:86: if (u32Temp == 0)
	pop	ar3
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	inc	r0
	orl	a,@r0
	inc	r0
	orl	a,@r0
	inc	r0
	orl	a,@r0
	jz	00105$
;	lib/../../common/uart.c:83: for (i = 10; i > 0; i--) {
	mov	a,_bp
	add	a,#0x11
	mov	r0,a
	dec	@r0
	mov	a,_bp
	add	a,#0x11
	mov	r0,a
	mov	ar7,@r0
	mov	a,_bp
	add	a,#0x11
	mov	r0,a
	mov	a,@r0
	jz	00129$
	ljmp	00108$
00129$:
00105$:
;	lib/../../common/uart.c:89: if (sign)
	mov	a,r3
	jz	00107$
;	lib/../../common/uart.c:90: print_buf[i--] = '-';
	mov	ar6,r7
	dec	r7
	mov	a,r6
	add	a,r2
	mov	r0,a
	mov	@r0,#0x2D
00107$:
;	lib/../../common/uart.c:91: uprintf(print_buf + i);
	mov	a,r7
	add	a,r2
	mov	r2,a
	mov	r7,#0x00
	mov	r6,#0x40
	push	ar2
	push	ar7
	push	ar6
	lcall	_uprintf
	dec	sp
	dec	sp
	dec	sp
	mov	sp,_bp
	pop	_bp
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'uprintf'
;------------------------------------------------------------
;str                       Allocated to stack - _bp -5
;args                      Allocated to stack - _bp +1
;sloc0                     Allocated to stack - _bp +2
;------------------------------------------------------------
;	lib/../../common/uart.c:94: void uprintf(byte* str, ...) {
;	-----------------------------------------
;	 function uprintf
;	-----------------------------------------
_uprintf:
	push	_bp
	mov	_bp,sp
	inc	sp
;	lib/../../common/uart.c:96: va_start(args, str);
	mov	a,_bp
	add	a,#0xFB
	mov	r7,a
	mov	r0,_bp
	inc	r0
	mov	@r0,ar7
;	lib/../../common/uart.c:97: while (*str != '\0') {
00116$:
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	ar4,@r0
	inc	r0
	mov	ar5,@r0
	inc	r0
	mov	ar6,@r0
	mov	dpl,r4
	mov	dph,r5
	mov	b,r6
	lcall	__gptrget
	mov	r3,a
	jnz	00145$
	ljmp	00119$
00145$:
;	lib/../../common/uart.c:98: if (*str == '%') {
	cjne	r3,#0x25,00146$
	sjmp	00147$
00146$:
	ljmp	00115$
00147$:
;	lib/../../common/uart.c:99: str++;
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,#0x01
	add	a,r4
	mov	@r0,a
	clr	a
	addc	a,r5
	inc	r0
	mov	@r0,a
	inc	r0
	mov	@r0,ar6
;	lib/../../common/uart.c:100: if (*str == '\0')
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	ar4,@r0
	inc	r0
	mov	ar5,@r0
	inc	r0
	mov	ar6,@r0
	mov	dpl,r4
	mov	dph,r5
	mov	b,r6
	lcall	__gptrget
	mov	r3,a
	jnz	00102$
;	lib/../../common/uart.c:101: return;
	ljmp	00119$
00102$:
;	lib/../../common/uart.c:102: if (*str == 'd') {
	cjne	r3,#0x64,00112$
;	lib/../../common/uart.c:103: str++;
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,#0x01
	add	a,r4
	mov	@r0,a
	clr	a
	addc	a,r5
	inc	r0
	mov	@r0,a
	inc	r0
	mov	@r0,ar6
;	lib/../../common/uart.c:104: printInteger(va_arg(args, int));
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	add	a,#0xFE
	mov	r2,a
	mov	r0,_bp
	inc	r0
	mov	@r0,ar2
	mov	ar1,r2
	mov	ar2,@r1
	inc	r1
	mov	ar7,@r1
	dec	r1
	mov	a,r7
	rlc	a
	subb	a,acc
	mov	r6,a
	mov	dpl,r2
	mov	dph,r7
	mov	b,r6
	lcall	_printInteger
	ljmp	00115$
00112$:
;	lib/../../common/uart.c:105: } else if (*str == 'x') {
	cjne	r3,#0x78,00109$
;	lib/../../common/uart.c:106: str++;
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,#0x01
	add	a,r4
	mov	@r0,a
	clr	a
	addc	a,r5
	inc	r0
	mov	@r0,a
	inc	r0
	mov	@r0,ar6
;	lib/../../common/uart.c:107: printU(va_arg(args, int), 16);
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	add	a,#0xFE
	mov	r7,a
	mov	r0,_bp
	inc	r0
	mov	@r0,ar7
	mov	ar1,r7
	mov	ar2,@r1
	inc	r1
	mov	ar7,@r1
	dec	r1
	mov	a,r7
	rlc	a
	subb	a,acc
	mov	r6,a
	mov	r5,a
	mov	a,#0x10
	push	acc
	mov	dpl,r2
	mov	dph,r7
	mov	b,r6
	mov	a,r5
	lcall	_printU
	dec	sp
	ljmp	00115$
00109$:
;	lib/../../common/uart.c:108: } else if (*str == 'o') {
	cjne	r3,#0x6F,00106$
;	lib/../../common/uart.c:109: str++;
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,#0x01
	add	a,r4
	mov	@r0,a
	clr	a
	addc	a,r5
	inc	r0
	mov	@r0,a
	inc	r0
	mov	@r0,ar6
;	lib/../../common/uart.c:110: printU(va_arg(args, int), 8);
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	add	a,#0xFE
	mov	r7,a
	mov	r0,_bp
	inc	r0
	mov	@r0,ar7
	mov	ar1,r7
	mov	ar2,@r1
	inc	r1
	mov	ar7,@r1
	dec	r1
	mov	a,r7
	rlc	a
	subb	a,acc
	mov	r6,a
	mov	r5,a
	mov	a,#0x08
	push	acc
	mov	dpl,r2
	mov	dph,r7
	mov	b,r6
	mov	a,r5
	lcall	_printU
	dec	sp
	sjmp	00115$
00106$:
;	lib/../../common/uart.c:111: } else if (*str == 'b') {
	cjne	r3,#0x62,00115$
;	lib/../../common/uart.c:112: str++;
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,#0x01
	add	a,r4
	mov	@r0,a
	clr	a
	addc	a,r5
	inc	r0
	mov	@r0,a
	inc	r0
	mov	@r0,ar6
;	lib/../../common/uart.c:113: printU(va_arg(args, int), 2);
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	add	a,#0xFE
	mov	r7,a
	mov	r0,_bp
	inc	r0
	mov	@r0,ar7
	mov	ar1,r7
	mov	ar6,@r1
	inc	r1
	mov	ar7,@r1
	dec	r1
	mov	a,r7
	rlc	a
	subb	a,acc
	mov	r5,a
	mov	r4,a
	mov	a,#0x02
	push	acc
	mov	dpl,r6
	mov	dph,r7
	mov	b,r5
	mov	a,r4
	lcall	_printU
	dec	sp
00115$:
;	lib/../../common/uart.c:116: putc(*str++);
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	ar5,@r0
	inc	r0
	mov	ar6,@r0
	inc	r0
	mov	ar7,@r0
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrget
	mov	r4,a
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,#0x01
	add	a,r5
	mov	@r0,a
	clr	a
	addc	a,r6
	inc	r0
	mov	@r0,a
	inc	r0
	mov	@r0,ar7
	mov	dpl,r4
	lcall	_putc
	ljmp	00116$
00119$:
	dec	sp
	pop	_bp
	ret
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
