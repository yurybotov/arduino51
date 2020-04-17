                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Apr  3 2018) (Linux)
                                      4 ; This file was generated Fri Apr 17 19:44:46 2020
                                      5 ;--------------------------------------------------------
                                      6 	.module uart
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _printInteger
                                     13 	.globl _printU
                                     14 	.globl _SerialPort0_ISR
                                     15 	.globl _MOSI
                                     16 	.globl _P00
                                     17 	.globl _MISO
                                     18 	.globl _P01
                                     19 	.globl _RXD_1
                                     20 	.globl _P02
                                     21 	.globl _P03
                                     22 	.globl _STADC
                                     23 	.globl _P04
                                     24 	.globl _P05
                                     25 	.globl _TXD
                                     26 	.globl _P06
                                     27 	.globl _RXD
                                     28 	.globl _P07
                                     29 	.globl _IT0
                                     30 	.globl _IE0
                                     31 	.globl _IT1
                                     32 	.globl _IE1
                                     33 	.globl _TR0
                                     34 	.globl _TF0
                                     35 	.globl _TR1
                                     36 	.globl _TF1
                                     37 	.globl _P10
                                     38 	.globl _P11
                                     39 	.globl _P12
                                     40 	.globl _SCL
                                     41 	.globl _P13
                                     42 	.globl _SDA
                                     43 	.globl _P14
                                     44 	.globl _P15
                                     45 	.globl _TXD_1
                                     46 	.globl _P16
                                     47 	.globl _P17
                                     48 	.globl _RI
                                     49 	.globl _TI
                                     50 	.globl _RB8
                                     51 	.globl _TB8
                                     52 	.globl _REN
                                     53 	.globl _SM2
                                     54 	.globl _SM1
                                     55 	.globl _FE
                                     56 	.globl _SM0
                                     57 	.globl _P20
                                     58 	.globl _EX0
                                     59 	.globl _ET0
                                     60 	.globl _EX1
                                     61 	.globl _ET1
                                     62 	.globl _ES
                                     63 	.globl _EBOD
                                     64 	.globl _EADC
                                     65 	.globl _EA
                                     66 	.globl _P30
                                     67 	.globl _PX0
                                     68 	.globl _PT0
                                     69 	.globl _PX1
                                     70 	.globl _PT1
                                     71 	.globl _PS
                                     72 	.globl _PBOD
                                     73 	.globl _PADC
                                     74 	.globl _I2CPX
                                     75 	.globl _AA
                                     76 	.globl _SI
                                     77 	.globl _STO
                                     78 	.globl _STA
                                     79 	.globl _I2CEN
                                     80 	.globl _CM_RL2
                                     81 	.globl _TR2
                                     82 	.globl _TF2
                                     83 	.globl _P
                                     84 	.globl _OV
                                     85 	.globl _RS0
                                     86 	.globl _RS1
                                     87 	.globl _F0
                                     88 	.globl _AC
                                     89 	.globl _CY
                                     90 	.globl _CLRPWM
                                     91 	.globl _PWMF
                                     92 	.globl _LOAD
                                     93 	.globl _PWMRUN
                                     94 	.globl _ADCHS0
                                     95 	.globl _ADCHS1
                                     96 	.globl _ADCHS2
                                     97 	.globl _ADCHS3
                                     98 	.globl _ETGSEL0
                                     99 	.globl _ETGSEL1
                                    100 	.globl _ADCS
                                    101 	.globl _ADCF
                                    102 	.globl _RI_1
                                    103 	.globl _TI_1
                                    104 	.globl _RB8_1
                                    105 	.globl _TB8_1
                                    106 	.globl _REN_1
                                    107 	.globl _SM2_1
                                    108 	.globl _SM1_1
                                    109 	.globl _FE_1
                                    110 	.globl _SM0_1
                                    111 	.globl _EIPH1
                                    112 	.globl _EIP1
                                    113 	.globl _PMD
                                    114 	.globl _PMEN
                                    115 	.globl _PDTCNT
                                    116 	.globl _PDTEN
                                    117 	.globl _SCON_1
                                    118 	.globl _EIPH
                                    119 	.globl _AINDIDS
                                    120 	.globl _SPDR
                                    121 	.globl _SPSR
                                    122 	.globl _SPCR2
                                    123 	.globl _SPCR
                                    124 	.globl _CAPCON4
                                    125 	.globl _CAPCON3
                                    126 	.globl _B
                                    127 	.globl _EIP
                                    128 	.globl _C2H
                                    129 	.globl _C2L
                                    130 	.globl _PIF
                                    131 	.globl _PIPEN
                                    132 	.globl _PINEN
                                    133 	.globl _PICON
                                    134 	.globl _ADCCON0
                                    135 	.globl _C1H
                                    136 	.globl _C1L
                                    137 	.globl _C0H
                                    138 	.globl _C0L
                                    139 	.globl _ADCDLY
                                    140 	.globl _ADCCON2
                                    141 	.globl _ADCCON1
                                    142 	.globl _ACC
                                    143 	.globl _PWMCON1
                                    144 	.globl _PIOCON0
                                    145 	.globl _PWM3L
                                    146 	.globl _PWM2L
                                    147 	.globl _PWM1L
                                    148 	.globl _PWM0L
                                    149 	.globl _PWMPL
                                    150 	.globl _PWMCON0
                                    151 	.globl _FBD
                                    152 	.globl _PNP
                                    153 	.globl _PWM3H
                                    154 	.globl _PWM2H
                                    155 	.globl _PWM1H
                                    156 	.globl _PWM0H
                                    157 	.globl _PWMPH
                                    158 	.globl _PSW
                                    159 	.globl _ADCMPH
                                    160 	.globl _ADCMPL
                                    161 	.globl _PWM5L
                                    162 	.globl _TH2
                                    163 	.globl _PWM4L
                                    164 	.globl _TL2
                                    165 	.globl _RCMP2H
                                    166 	.globl _RCMP2L
                                    167 	.globl _T2MOD
                                    168 	.globl _T2CON
                                    169 	.globl _TA
                                    170 	.globl _PIOCON1
                                    171 	.globl _RH3
                                    172 	.globl _PWM5H
                                    173 	.globl _RL3
                                    174 	.globl _PWM4H
                                    175 	.globl _T3CON
                                    176 	.globl _ADCRH
                                    177 	.globl _ADCRL
                                    178 	.globl _I2ADDR
                                    179 	.globl _I2CON
                                    180 	.globl _I2TOC
                                    181 	.globl _I2CLK
                                    182 	.globl _I2STAT
                                    183 	.globl _I2DAT
                                    184 	.globl _SADDR_1
                                    185 	.globl _SADEN_1
                                    186 	.globl _SADEN
                                    187 	.globl _IP
                                    188 	.globl _PWMINTC
                                    189 	.globl _IPH
                                    190 	.globl _P2S
                                    191 	.globl _P1SR
                                    192 	.globl _P1M2
                                    193 	.globl _P1S
                                    194 	.globl _P1M1
                                    195 	.globl _P0SR
                                    196 	.globl _P0M2
                                    197 	.globl _P0S
                                    198 	.globl _P0M1
                                    199 	.globl _P3
                                    200 	.globl _IAPCN
                                    201 	.globl _IAPFD
                                    202 	.globl _P3SR
                                    203 	.globl _P3M2
                                    204 	.globl _P3S
                                    205 	.globl _P3M1
                                    206 	.globl _BODCON1
                                    207 	.globl _WDCON
                                    208 	.globl _SADDR
                                    209 	.globl _IE
                                    210 	.globl _IAPAH
                                    211 	.globl _IAPAL
                                    212 	.globl _IAPUEN
                                    213 	.globl _IAPTRG
                                    214 	.globl _BODCON0
                                    215 	.globl _AUXR1
                                    216 	.globl _P2
                                    217 	.globl _CHPCON
                                    218 	.globl _EIE1
                                    219 	.globl _EIE
                                    220 	.globl _SBUF_1
                                    221 	.globl _SBUF
                                    222 	.globl _SCON
                                    223 	.globl _CKEN
                                    224 	.globl _CKSWT
                                    225 	.globl _CKDIV
                                    226 	.globl _CAPCON2
                                    227 	.globl _CAPCON1
                                    228 	.globl _CAPCON0
                                    229 	.globl _SFRS
                                    230 	.globl _P1
                                    231 	.globl _WKCON
                                    232 	.globl _CKCON
                                    233 	.globl _TH1
                                    234 	.globl _TH0
                                    235 	.globl _TL1
                                    236 	.globl _TL0
                                    237 	.globl _TMOD
                                    238 	.globl _TCON
                                    239 	.globl _PCON
                                    240 	.globl _RWK
                                    241 	.globl _RCTRIM1
                                    242 	.globl _RCTRIM0
                                    243 	.globl _DPH
                                    244 	.globl _DPL
                                    245 	.globl _SP
                                    246 	.globl _P0
                                    247 	.globl _lengthBuffer
                                    248 	.globl _endBuffer
                                    249 	.globl _beginBuffer
                                    250 	.globl _SerialBuffer
                                    251 	.globl _SerialBegin
                                    252 	.globl _putc
                                    253 	.globl _getc
                                    254 	.globl _SerialAvailable
                                    255 	.globl _uprintf
                                    256 ;--------------------------------------------------------
                                    257 ; special function registers
                                    258 ;--------------------------------------------------------
                                    259 	.area RSEG    (ABS,DATA)
      000000                        260 	.org 0x0000
                           000080   261 _P0	=	0x0080
                           000081   262 _SP	=	0x0081
                           000082   263 _DPL	=	0x0082
                           000083   264 _DPH	=	0x0083
                           000084   265 _RCTRIM0	=	0x0084
                           000085   266 _RCTRIM1	=	0x0085
                           000086   267 _RWK	=	0x0086
                           000087   268 _PCON	=	0x0087
                           000088   269 _TCON	=	0x0088
                           000089   270 _TMOD	=	0x0089
                           00008A   271 _TL0	=	0x008a
                           00008B   272 _TL1	=	0x008b
                           00008C   273 _TH0	=	0x008c
                           00008D   274 _TH1	=	0x008d
                           00008E   275 _CKCON	=	0x008e
                           00008F   276 _WKCON	=	0x008f
                           000090   277 _P1	=	0x0090
                           000091   278 _SFRS	=	0x0091
                           000092   279 _CAPCON0	=	0x0092
                           000093   280 _CAPCON1	=	0x0093
                           000094   281 _CAPCON2	=	0x0094
                           000095   282 _CKDIV	=	0x0095
                           000096   283 _CKSWT	=	0x0096
                           000097   284 _CKEN	=	0x0097
                           000098   285 _SCON	=	0x0098
                           000099   286 _SBUF	=	0x0099
                           00009A   287 _SBUF_1	=	0x009a
                           00009B   288 _EIE	=	0x009b
                           00009C   289 _EIE1	=	0x009c
                           00009F   290 _CHPCON	=	0x009f
                           0000A0   291 _P2	=	0x00a0
                           0000A2   292 _AUXR1	=	0x00a2
                           0000A3   293 _BODCON0	=	0x00a3
                           0000A4   294 _IAPTRG	=	0x00a4
                           0000A5   295 _IAPUEN	=	0x00a5
                           0000A6   296 _IAPAL	=	0x00a6
                           0000A7   297 _IAPAH	=	0x00a7
                           0000A8   298 _IE	=	0x00a8
                           0000A9   299 _SADDR	=	0x00a9
                           0000AA   300 _WDCON	=	0x00aa
                           0000AB   301 _BODCON1	=	0x00ab
                           0000AC   302 _P3M1	=	0x00ac
                           0000AC   303 _P3S	=	0x00ac
                           0000AD   304 _P3M2	=	0x00ad
                           0000AD   305 _P3SR	=	0x00ad
                           0000AE   306 _IAPFD	=	0x00ae
                           0000AF   307 _IAPCN	=	0x00af
                           0000B0   308 _P3	=	0x00b0
                           0000B1   309 _P0M1	=	0x00b1
                           0000B1   310 _P0S	=	0x00b1
                           0000B2   311 _P0M2	=	0x00b2
                           0000B2   312 _P0SR	=	0x00b2
                           0000B3   313 _P1M1	=	0x00b3
                           0000B3   314 _P1S	=	0x00b3
                           0000B4   315 _P1M2	=	0x00b4
                           0000B4   316 _P1SR	=	0x00b4
                           0000B5   317 _P2S	=	0x00b5
                           0000B7   318 _IPH	=	0x00b7
                           0000B7   319 _PWMINTC	=	0x00b7
                           0000B8   320 _IP	=	0x00b8
                           0000B9   321 _SADEN	=	0x00b9
                           0000BA   322 _SADEN_1	=	0x00ba
                           0000BB   323 _SADDR_1	=	0x00bb
                           0000BC   324 _I2DAT	=	0x00bc
                           0000BD   325 _I2STAT	=	0x00bd
                           0000BE   326 _I2CLK	=	0x00be
                           0000BF   327 _I2TOC	=	0x00bf
                           0000C0   328 _I2CON	=	0x00c0
                           0000C1   329 _I2ADDR	=	0x00c1
                           0000C2   330 _ADCRL	=	0x00c2
                           0000C3   331 _ADCRH	=	0x00c3
                           0000C4   332 _T3CON	=	0x00c4
                           0000C4   333 _PWM4H	=	0x00c4
                           0000C5   334 _RL3	=	0x00c5
                           0000C5   335 _PWM5H	=	0x00c5
                           0000C6   336 _RH3	=	0x00c6
                           0000C6   337 _PIOCON1	=	0x00c6
                           0000C7   338 _TA	=	0x00c7
                           0000C8   339 _T2CON	=	0x00c8
                           0000C9   340 _T2MOD	=	0x00c9
                           0000CA   341 _RCMP2L	=	0x00ca
                           0000CB   342 _RCMP2H	=	0x00cb
                           0000CC   343 _TL2	=	0x00cc
                           0000CC   344 _PWM4L	=	0x00cc
                           0000CD   345 _TH2	=	0x00cd
                           0000CD   346 _PWM5L	=	0x00cd
                           0000CE   347 _ADCMPL	=	0x00ce
                           0000CF   348 _ADCMPH	=	0x00cf
                           0000D0   349 _PSW	=	0x00d0
                           0000D1   350 _PWMPH	=	0x00d1
                           0000D2   351 _PWM0H	=	0x00d2
                           0000D3   352 _PWM1H	=	0x00d3
                           0000D4   353 _PWM2H	=	0x00d4
                           0000D5   354 _PWM3H	=	0x00d5
                           0000D6   355 _PNP	=	0x00d6
                           0000D7   356 _FBD	=	0x00d7
                           0000D8   357 _PWMCON0	=	0x00d8
                           0000D9   358 _PWMPL	=	0x00d9
                           0000DA   359 _PWM0L	=	0x00da
                           0000DB   360 _PWM1L	=	0x00db
                           0000DC   361 _PWM2L	=	0x00dc
                           0000DD   362 _PWM3L	=	0x00dd
                           0000DE   363 _PIOCON0	=	0x00de
                           0000DF   364 _PWMCON1	=	0x00df
                           0000E0   365 _ACC	=	0x00e0
                           0000E1   366 _ADCCON1	=	0x00e1
                           0000E2   367 _ADCCON2	=	0x00e2
                           0000E3   368 _ADCDLY	=	0x00e3
                           0000E4   369 _C0L	=	0x00e4
                           0000E5   370 _C0H	=	0x00e5
                           0000E6   371 _C1L	=	0x00e6
                           0000E7   372 _C1H	=	0x00e7
                           0000E8   373 _ADCCON0	=	0x00e8
                           0000E9   374 _PICON	=	0x00e9
                           0000EA   375 _PINEN	=	0x00ea
                           0000EB   376 _PIPEN	=	0x00eb
                           0000EC   377 _PIF	=	0x00ec
                           0000ED   378 _C2L	=	0x00ed
                           0000EE   379 _C2H	=	0x00ee
                           0000EF   380 _EIP	=	0x00ef
                           0000F0   381 _B	=	0x00f0
                           0000F1   382 _CAPCON3	=	0x00f1
                           0000F2   383 _CAPCON4	=	0x00f2
                           0000F3   384 _SPCR	=	0x00f3
                           0000F3   385 _SPCR2	=	0x00f3
                           0000F4   386 _SPSR	=	0x00f4
                           0000F5   387 _SPDR	=	0x00f5
                           0000F6   388 _AINDIDS	=	0x00f6
                           0000F7   389 _EIPH	=	0x00f7
                           0000F8   390 _SCON_1	=	0x00f8
                           0000F9   391 _PDTEN	=	0x00f9
                           0000FA   392 _PDTCNT	=	0x00fa
                           0000FB   393 _PMEN	=	0x00fb
                           0000FC   394 _PMD	=	0x00fc
                           0000FE   395 _EIP1	=	0x00fe
                           0000FF   396 _EIPH1	=	0x00ff
                                    397 ;--------------------------------------------------------
                                    398 ; special function bits
                                    399 ;--------------------------------------------------------
                                    400 	.area RSEG    (ABS,DATA)
      000000                        401 	.org 0x0000
                           0000FF   402 _SM0_1	=	0x00ff
                           0000FF   403 _FE_1	=	0x00ff
                           0000FE   404 _SM1_1	=	0x00fe
                           0000FD   405 _SM2_1	=	0x00fd
                           0000FC   406 _REN_1	=	0x00fc
                           0000FB   407 _TB8_1	=	0x00fb
                           0000FA   408 _RB8_1	=	0x00fa
                           0000F9   409 _TI_1	=	0x00f9
                           0000F8   410 _RI_1	=	0x00f8
                           0000EF   411 _ADCF	=	0x00ef
                           0000EE   412 _ADCS	=	0x00ee
                           0000ED   413 _ETGSEL1	=	0x00ed
                           0000EC   414 _ETGSEL0	=	0x00ec
                           0000EB   415 _ADCHS3	=	0x00eb
                           0000EA   416 _ADCHS2	=	0x00ea
                           0000E9   417 _ADCHS1	=	0x00e9
                           0000E8   418 _ADCHS0	=	0x00e8
                           0000DF   419 _PWMRUN	=	0x00df
                           0000DE   420 _LOAD	=	0x00de
                           0000DD   421 _PWMF	=	0x00dd
                           0000DC   422 _CLRPWM	=	0x00dc
                           0000D7   423 _CY	=	0x00d7
                           0000D6   424 _AC	=	0x00d6
                           0000D5   425 _F0	=	0x00d5
                           0000D4   426 _RS1	=	0x00d4
                           0000D3   427 _RS0	=	0x00d3
                           0000D2   428 _OV	=	0x00d2
                           0000D0   429 _P	=	0x00d0
                           0000CF   430 _TF2	=	0x00cf
                           0000CA   431 _TR2	=	0x00ca
                           0000C8   432 _CM_RL2	=	0x00c8
                           0000C6   433 _I2CEN	=	0x00c6
                           0000C5   434 _STA	=	0x00c5
                           0000C4   435 _STO	=	0x00c4
                           0000C3   436 _SI	=	0x00c3
                           0000C2   437 _AA	=	0x00c2
                           0000C0   438 _I2CPX	=	0x00c0
                           0000BE   439 _PADC	=	0x00be
                           0000BD   440 _PBOD	=	0x00bd
                           0000BC   441 _PS	=	0x00bc
                           0000BB   442 _PT1	=	0x00bb
                           0000BA   443 _PX1	=	0x00ba
                           0000B9   444 _PT0	=	0x00b9
                           0000B8   445 _PX0	=	0x00b8
                           0000B0   446 _P30	=	0x00b0
                           0000AF   447 _EA	=	0x00af
                           0000AE   448 _EADC	=	0x00ae
                           0000AD   449 _EBOD	=	0x00ad
                           0000AC   450 _ES	=	0x00ac
                           0000AB   451 _ET1	=	0x00ab
                           0000AA   452 _EX1	=	0x00aa
                           0000A9   453 _ET0	=	0x00a9
                           0000A8   454 _EX0	=	0x00a8
                           0000A0   455 _P20	=	0x00a0
                           00009F   456 _SM0	=	0x009f
                           00009F   457 _FE	=	0x009f
                           00009E   458 _SM1	=	0x009e
                           00009D   459 _SM2	=	0x009d
                           00009C   460 _REN	=	0x009c
                           00009B   461 _TB8	=	0x009b
                           00009A   462 _RB8	=	0x009a
                           000099   463 _TI	=	0x0099
                           000098   464 _RI	=	0x0098
                           000097   465 _P17	=	0x0097
                           000096   466 _P16	=	0x0096
                           000096   467 _TXD_1	=	0x0096
                           000095   468 _P15	=	0x0095
                           000094   469 _P14	=	0x0094
                           000094   470 _SDA	=	0x0094
                           000093   471 _P13	=	0x0093
                           000093   472 _SCL	=	0x0093
                           000092   473 _P12	=	0x0092
                           000091   474 _P11	=	0x0091
                           000090   475 _P10	=	0x0090
                           00008F   476 _TF1	=	0x008f
                           00008E   477 _TR1	=	0x008e
                           00008D   478 _TF0	=	0x008d
                           00008C   479 _TR0	=	0x008c
                           00008B   480 _IE1	=	0x008b
                           00008A   481 _IT1	=	0x008a
                           000089   482 _IE0	=	0x0089
                           000088   483 _IT0	=	0x0088
                           000087   484 _P07	=	0x0087
                           000087   485 _RXD	=	0x0087
                           000086   486 _P06	=	0x0086
                           000086   487 _TXD	=	0x0086
                           000085   488 _P05	=	0x0085
                           000084   489 _P04	=	0x0084
                           000084   490 _STADC	=	0x0084
                           000083   491 _P03	=	0x0083
                           000082   492 _P02	=	0x0082
                           000082   493 _RXD_1	=	0x0082
                           000081   494 _P01	=	0x0081
                           000081   495 _MISO	=	0x0081
                           000080   496 _P00	=	0x0080
                           000080   497 _MOSI	=	0x0080
                                    498 ;--------------------------------------------------------
                                    499 ; overlayable register banks
                                    500 ;--------------------------------------------------------
                                    501 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        502 	.ds 8
                                    503 ;--------------------------------------------------------
                                    504 ; internal ram data
                                    505 ;--------------------------------------------------------
                                    506 	.area DSEG    (DATA)
      000021                        507 _SerialBuffer::
      000021                        508 	.ds 32
      000041                        509 _beginBuffer::
      000041                        510 	.ds 1
      000042                        511 _endBuffer::
      000042                        512 	.ds 1
      000043                        513 _lengthBuffer::
      000043                        514 	.ds 1
                                    515 ;--------------------------------------------------------
                                    516 ; overlayable items in internal ram 
                                    517 ;--------------------------------------------------------
                                    518 ;--------------------------------------------------------
                                    519 ; indirectly addressable internal ram data
                                    520 ;--------------------------------------------------------
                                    521 	.area ISEG    (DATA)
                                    522 ;--------------------------------------------------------
                                    523 ; absolute internal ram data
                                    524 ;--------------------------------------------------------
                                    525 	.area IABS    (ABS,DATA)
                                    526 	.area IABS    (ABS,DATA)
                                    527 ;--------------------------------------------------------
                                    528 ; bit data
                                    529 ;--------------------------------------------------------
                                    530 	.area BSEG    (BIT)
                                    531 ;--------------------------------------------------------
                                    532 ; paged external ram data
                                    533 ;--------------------------------------------------------
                                    534 	.area PSEG    (PAG,XDATA)
                                    535 ;--------------------------------------------------------
                                    536 ; external ram data
                                    537 ;--------------------------------------------------------
                                    538 	.area XSEG    (XDATA)
                                    539 ;--------------------------------------------------------
                                    540 ; absolute external ram data
                                    541 ;--------------------------------------------------------
                                    542 	.area XABS    (ABS,XDATA)
                                    543 ;--------------------------------------------------------
                                    544 ; external initialized ram data
                                    545 ;--------------------------------------------------------
                                    546 	.area XISEG   (XDATA)
                                    547 	.area HOME    (CODE)
                                    548 	.area GSINIT0 (CODE)
                                    549 	.area GSINIT1 (CODE)
                                    550 	.area GSINIT2 (CODE)
                                    551 	.area GSINIT3 (CODE)
                                    552 	.area GSINIT4 (CODE)
                                    553 	.area GSINIT5 (CODE)
                                    554 	.area GSINIT  (CODE)
                                    555 	.area GSFINAL (CODE)
                                    556 	.area CSEG    (CODE)
                                    557 ;--------------------------------------------------------
                                    558 ; global & static initialisations
                                    559 ;--------------------------------------------------------
                                    560 	.area HOME    (CODE)
                                    561 	.area GSINIT  (CODE)
                                    562 	.area GSFINAL (CODE)
                                    563 	.area GSINIT  (CODE)
                                    564 ;	lib/uart.c:7: byte beginBuffer = 0, endBuffer = 0, lengthBuffer = 0;
      000082 75 41 00         [24]  565 	mov	_beginBuffer,#0x00
                                    566 ;	lib/uart.c:7: 
      000085 75 42 00         [24]  567 	mov	_endBuffer,#0x00
                                    568 ;	lib/uart.c:7: byte beginBuffer = 0, endBuffer = 0, lengthBuffer = 0;
      000088 75 43 00         [24]  569 	mov	_lengthBuffer,#0x00
                                    570 ;--------------------------------------------------------
                                    571 ; Home
                                    572 ;--------------------------------------------------------
                                    573 	.area HOME    (CODE)
                                    574 	.area HOME    (CODE)
                                    575 ;--------------------------------------------------------
                                    576 ; code
                                    577 ;--------------------------------------------------------
                                    578 	.area CSEG    (CODE)
                                    579 ;------------------------------------------------------------
                                    580 ;Allocation info for local variables in function 'SerialPort0_ISR'
                                    581 ;------------------------------------------------------------
                                    582 ;	lib/uart.c:9: void SerialPort0_ISR(void) __interrupt(4) {
                                    583 ;	-----------------------------------------
                                    584 ;	 function SerialPort0_ISR
                                    585 ;	-----------------------------------------
      000C1B                        586 _SerialPort0_ISR:
                           000007   587 	ar7 = 0x07
                           000006   588 	ar6 = 0x06
                           000005   589 	ar5 = 0x05
                           000004   590 	ar4 = 0x04
                           000003   591 	ar3 = 0x03
                           000002   592 	ar2 = 0x02
                           000001   593 	ar1 = 0x01
                           000000   594 	ar0 = 0x00
      000C1B C0 E0            [24]  595 	push	acc
      000C1D C0 07            [24]  596 	push	ar7
      000C1F C0 00            [24]  597 	push	ar0
      000C21 C0 D0            [24]  598 	push	psw
      000C23 75 D0 00         [24]  599 	mov	psw,#0x00
                                    600 ;	lib/uart.c:10: if (RI == 1) {
                                    601 ;	lib/uart.c:11: clr_RI;
      000C26 10 98 02         [24]  602 	jbc	_RI,00113$
      000C29 80 14            [24]  603 	sjmp	00105$
      000C2B                        604 00113$:
                                    605 ;	lib/uart.c:12: SerialBuffer[endBuffer++] = SBUF;
      000C2B AF 42            [24]  606 	mov	r7,_endBuffer
      000C2D 05 42            [12]  607 	inc	_endBuffer
      000C2F EF               [12]  608 	mov	a,r7
      000C30 24 21            [12]  609 	add	a,#_SerialBuffer
      000C32 F8               [12]  610 	mov	r0,a
      000C33 A6 99            [24]  611 	mov	@r0,_SBUF
                                    612 ;	lib/uart.c:13: if (endBuffer == 32)
      000C35 74 20            [12]  613 	mov	a,#0x20
      000C37 B5 42 03         [24]  614 	cjne	a,_endBuffer,00102$
                                    615 ;	lib/uart.c:14: endBuffer = 0;
      000C3A 75 42 00         [24]  616 	mov	_endBuffer,#0x00
      000C3D                        617 00102$:
                                    618 ;	lib/uart.c:15: lengthBuffer++;
      000C3D 05 43            [12]  619 	inc	_lengthBuffer
      000C3F                        620 00105$:
      000C3F D0 D0            [24]  621 	pop	psw
      000C41 D0 00            [24]  622 	pop	ar0
      000C43 D0 07            [24]  623 	pop	ar7
      000C45 D0 E0            [24]  624 	pop	acc
      000C47 32               [24]  625 	reti
                                    626 ;	eliminated unneeded push/pop ar1
                                    627 ;	eliminated unneeded push/pop dpl
                                    628 ;	eliminated unneeded push/pop dph
                                    629 ;	eliminated unneeded push/pop b
                                    630 ;------------------------------------------------------------
                                    631 ;Allocation info for local variables in function 'SerialBegin'
                                    632 ;------------------------------------------------------------
                                    633 ;speed                     Allocated to registers r6 r7 
                                    634 ;------------------------------------------------------------
                                    635 ;	lib/uart.c:19: void SerialBegin(word speed) {
                                    636 ;	-----------------------------------------
                                    637 ;	 function SerialBegin
                                    638 ;	-----------------------------------------
      000C48                        639 _SerialBegin:
      000C48 AE 82            [24]  640 	mov	r6,dpl
      000C4A AF 83            [24]  641 	mov	r7,dph
                                    642 ;	lib/uart.c:20: P06_Quasi_Mode;
      000C4C AD B1            [24]  643 	mov	r5,_P0M1
      000C4E 74 BF            [12]  644 	mov	a,#0xBF
      000C50 5D               [12]  645 	anl	a,r5
      000C51 F5 B1            [12]  646 	mov	_P0M1,a
      000C53 AD B2            [24]  647 	mov	r5,_P0M2
      000C55 74 BF            [12]  648 	mov	a,#0xBF
      000C57 5D               [12]  649 	anl	a,r5
      000C58 F5 B2            [12]  650 	mov	_P0M2,a
                                    651 ;	lib/uart.c:21: P07_Quasi_Mode;
      000C5A AD B1            [24]  652 	mov	r5,_P0M1
      000C5C 74 7F            [12]  653 	mov	a,#0x7F
      000C5E 5D               [12]  654 	anl	a,r5
      000C5F F5 B1            [12]  655 	mov	_P0M1,a
      000C61 AD B2            [24]  656 	mov	r5,_P0M2
      000C63 74 7F            [12]  657 	mov	a,#0x7F
      000C65 5D               [12]  658 	anl	a,r5
      000C66 F5 B2            [12]  659 	mov	_P0M2,a
                                    660 ;	lib/uart.c:22: SCON = 0x50;
      000C68 75 98 50         [24]  661 	mov	_SCON,#0x50
                                    662 ;	lib/uart.c:23: TMOD |= 0x20;
      000C6B 43 89 20         [24]  663 	orl	_TMOD,#0x20
                                    664 ;	lib/uart.c:24: set_SMOD;
      000C6E 43 87 80         [24]  665 	orl	_PCON,#0x80
                                    666 ;	lib/uart.c:25: set_T1M;
      000C71 43 8E 10         [24]  667 	orl	_CKCON,#0x10
                                    668 ;	lib/uart.c:26: clr_BRCK;
      000C74 AD C4            [24]  669 	mov	r5,_T3CON
      000C76 74 DF            [12]  670 	mov	a,#0xDF
      000C78 5D               [12]  671 	anl	a,r5
      000C79 F5 C4            [12]  672 	mov	_T3CON,a
                                    673 ;	lib/uart.c:27: TH1 = 256 - (1000000 / speed);
      000C7B 7D 00            [12]  674 	mov	r5,#0x00
      000C7D 7C 00            [12]  675 	mov	r4,#0x00
      000C7F C0 06            [24]  676 	push	ar6
      000C81 C0 07            [24]  677 	push	ar7
      000C83 C0 05            [24]  678 	push	ar5
      000C85 C0 04            [24]  679 	push	ar4
      000C87 90 42 40         [24]  680 	mov	dptr,#0x4240
      000C8A 75 F0 0F         [24]  681 	mov	b,#0x0F
      000C8D E4               [12]  682 	clr	a
      000C8E 12 11 D4         [24]  683 	lcall	__divslong
      000C91 AC 82            [24]  684 	mov	r4,dpl
      000C93 E5 81            [12]  685 	mov	a,sp
      000C95 24 FC            [12]  686 	add	a,#0xfc
      000C97 F5 81            [12]  687 	mov	sp,a
      000C99 C3               [12]  688 	clr	c
      000C9A E4               [12]  689 	clr	a
      000C9B 9C               [12]  690 	subb	a,r4
      000C9C F5 8D            [12]  691 	mov	_TH1,a
                                    692 ;	lib/uart.c:28: set_TR1;
      000C9E D2 8E            [12]  693 	setb	_TR1
                                    694 ;	lib/uart.c:29: set_RB8;
      000CA0 D2 9A            [12]  695 	setb	_RB8
                                    696 ;	lib/uart.c:30: clr_TI;
      000CA2 C2 99            [12]  697 	clr	_TI
                                    698 ;	lib/uart.c:31: set_ES;
      000CA4 D2 AC            [12]  699 	setb	_ES
                                    700 ;	lib/uart.c:32: set_EA;
      000CA6 D2 AF            [12]  701 	setb	_EA
      000CA8 22               [24]  702 	ret
                                    703 ;------------------------------------------------------------
                                    704 ;Allocation info for local variables in function 'putc'
                                    705 ;------------------------------------------------------------
                                    706 ;c                         Allocated to registers r7 
                                    707 ;------------------------------------------------------------
                                    708 ;	lib/uart.c:35: void putc(byte c) {
                                    709 ;	-----------------------------------------
                                    710 ;	 function putc
                                    711 ;	-----------------------------------------
      000CA9                        712 _putc:
      000CA9 AF 82            [24]  713 	mov	r7,dpl
                                    714 ;	lib/uart.c:36: TI = 0;
      000CAB C2 99            [12]  715 	clr	_TI
                                    716 ;	lib/uart.c:37: SBUF = c;
      000CAD 8F 99            [24]  717 	mov	_SBUF,r7
                                    718 ;	lib/uart.c:38: while (TI == 0)
      000CAF                        719 00101$:
      000CAF 30 99 FD         [24]  720 	jnb	_TI,00101$
      000CB2 22               [24]  721 	ret
                                    722 ;------------------------------------------------------------
                                    723 ;Allocation info for local variables in function 'getc'
                                    724 ;------------------------------------------------------------
                                    725 ;c                         Allocated to registers r7 
                                    726 ;------------------------------------------------------------
                                    727 ;	lib/../../common/uart.c:42: byte getc(void) {
                                    728 ;	-----------------------------------------
                                    729 ;	 function getc
                                    730 ;	-----------------------------------------
      000CB3                        731 _getc:
                                    732 ;	lib/../../common/uart.c:43: if (lengthBuffer > 0) {
      000CB3 E5 43            [12]  733 	mov	a,_lengthBuffer
      000CB5 60 17            [24]  734 	jz	00104$
                                    735 ;	lib/../../common/uart.c:44: byte c = SerialBuffer[beginBuffer++];
      000CB7 AF 41            [24]  736 	mov	r7,_beginBuffer
      000CB9 05 41            [12]  737 	inc	_beginBuffer
      000CBB EF               [12]  738 	mov	a,r7
      000CBC 24 21            [12]  739 	add	a,#_SerialBuffer
      000CBE F9               [12]  740 	mov	r1,a
      000CBF 87 07            [24]  741 	mov	ar7,@r1
                                    742 ;	lib/../../common/uart.c:45: if (beginBuffer == 32)
      000CC1 74 20            [12]  743 	mov	a,#0x20
      000CC3 B5 41 03         [24]  744 	cjne	a,_beginBuffer,00102$
                                    745 ;	lib/../../common/uart.c:46: beginBuffer = 0;
      000CC6 75 41 00         [24]  746 	mov	_beginBuffer,#0x00
      000CC9                        747 00102$:
                                    748 ;	lib/../../common/uart.c:47: lengthBuffer--;
      000CC9 15 43            [12]  749 	dec	_lengthBuffer
                                    750 ;	lib/../../common/uart.c:48: return c;
      000CCB 8F 82            [24]  751 	mov	dpl,r7
      000CCD 22               [24]  752 	ret
      000CCE                        753 00104$:
                                    754 ;	lib/../../common/uart.c:50: return 0;
      000CCE 75 82 00         [24]  755 	mov	dpl,#0x00
      000CD1 22               [24]  756 	ret
                                    757 ;------------------------------------------------------------
                                    758 ;Allocation info for local variables in function 'SerialAvailable'
                                    759 ;------------------------------------------------------------
                                    760 ;	lib/../../common/uart.c:54: word SerialAvailable() {
                                    761 ;	-----------------------------------------
                                    762 ;	 function SerialAvailable
                                    763 ;	-----------------------------------------
      000CD2                        764 _SerialAvailable:
                                    765 ;	lib/../../common/uart.c:55: return lengthBuffer;
      000CD2 AE 43            [24]  766 	mov	r6,_lengthBuffer
      000CD4 7F 00            [12]  767 	mov	r7,#0x00
      000CD6 8E 82            [24]  768 	mov	dpl,r6
      000CD8 8F 83            [24]  769 	mov	dph,r7
      000CDA 22               [24]  770 	ret
                                    771 ;------------------------------------------------------------
                                    772 ;Allocation info for local variables in function 'printU'
                                    773 ;------------------------------------------------------------
                                    774 ;radix                     Allocated to stack - _bp -3
                                    775 ;u32Temp                   Allocated to stack - _bp +1
                                    776 ;print_buf                 Allocated to stack - _bp +9
                                    777 ;i                         Allocated to registers r2 
                                    778 ;val                       Allocated to registers r5 
                                    779 ;sloc0                     Allocated to stack - _bp +5
                                    780 ;sloc1                     Allocated to stack - _bp +28
                                    781 ;------------------------------------------------------------
                                    782 ;	lib/../../common/uart.c:59: void printU(dword u32Temp, byte radix) {
                                    783 ;	-----------------------------------------
                                    784 ;	 function printU
                                    785 ;	-----------------------------------------
      000CDB                        786 _printU:
      000CDB C0 0D            [24]  787 	push	_bp
      000CDD 85 81 0D         [24]  788 	mov	_bp,sp
      000CE0 C0 82            [24]  789 	push	dpl
      000CE2 C0 83            [24]  790 	push	dph
      000CE4 C0 F0            [24]  791 	push	b
      000CE6 C0 E0            [24]  792 	push	acc
      000CE8 E5 81            [12]  793 	mov	a,sp
      000CEA 24 15            [12]  794 	add	a,#0x15
      000CEC F5 81            [12]  795 	mov	sp,a
                                    796 ;	lib/../../common/uart.c:62: print_buf[16] = 0;
      000CEE E5 0D            [12]  797 	mov	a,_bp
      000CF0 24 09            [12]  798 	add	a,#0x09
      000CF2 FB               [12]  799 	mov	r3,a
      000CF3 24 10            [12]  800 	add	a,#0x10
      000CF5 F8               [12]  801 	mov	r0,a
      000CF6 76 00            [12]  802 	mov	@r0,#0x00
                                    803 ;	lib/../../common/uart.c:63: for (i = 15; i > 0; i--) {
      000CF8 7A 0F            [12]  804 	mov	r2,#0x0F
      000CFA 7F 0F            [12]  805 	mov	r7,#0x0F
      000CFC                        806 00104$:
                                    807 ;	lib/../../common/uart.c:64: byte val = u32Temp % radix;
      000CFC C0 02            [24]  808 	push	ar2
      000CFE E5 0D            [12]  809 	mov	a,_bp
      000D00 24 FD            [12]  810 	add	a,#0xfd
      000D02 F8               [12]  811 	mov	r0,a
      000D03 E5 0D            [12]  812 	mov	a,_bp
      000D05 24 05            [12]  813 	add	a,#0x05
      000D07 F9               [12]  814 	mov	r1,a
      000D08 E6               [12]  815 	mov	a,@r0
      000D09 F7               [12]  816 	mov	@r1,a
      000D0A 09               [12]  817 	inc	r1
      000D0B 77 00            [12]  818 	mov	@r1,#0x00
      000D0D 09               [12]  819 	inc	r1
      000D0E 77 00            [12]  820 	mov	@r1,#0x00
      000D10 09               [12]  821 	inc	r1
      000D11 77 00            [12]  822 	mov	@r1,#0x00
      000D13 C0 07            [24]  823 	push	ar7
      000D15 C0 03            [24]  824 	push	ar3
      000D17 E5 0D            [12]  825 	mov	a,_bp
      000D19 24 05            [12]  826 	add	a,#0x05
      000D1B F8               [12]  827 	mov	r0,a
      000D1C E6               [12]  828 	mov	a,@r0
      000D1D C0 E0            [24]  829 	push	acc
      000D1F 08               [12]  830 	inc	r0
      000D20 E6               [12]  831 	mov	a,@r0
      000D21 C0 E0            [24]  832 	push	acc
      000D23 08               [12]  833 	inc	r0
      000D24 E6               [12]  834 	mov	a,@r0
      000D25 C0 E0            [24]  835 	push	acc
      000D27 08               [12]  836 	inc	r0
      000D28 E6               [12]  837 	mov	a,@r0
      000D29 C0 E0            [24]  838 	push	acc
      000D2B A8 0D            [24]  839 	mov	r0,_bp
      000D2D 08               [12]  840 	inc	r0
      000D2E 86 82            [24]  841 	mov	dpl,@r0
      000D30 08               [12]  842 	inc	r0
      000D31 86 83            [24]  843 	mov	dph,@r0
      000D33 08               [12]  844 	inc	r0
      000D34 86 F0            [24]  845 	mov	b,@r0
      000D36 08               [12]  846 	inc	r0
      000D37 E6               [12]  847 	mov	a,@r0
      000D38 12 11 62         [24]  848 	lcall	__modulong
      000D3B AA 82            [24]  849 	mov	r2,dpl
      000D3D AC 83            [24]  850 	mov	r4,dph
      000D3F FE               [12]  851 	mov	r6,a
      000D40 E5 81            [12]  852 	mov	a,sp
      000D42 24 FC            [12]  853 	add	a,#0xfc
      000D44 F5 81            [12]  854 	mov	sp,a
      000D46 D0 03            [24]  855 	pop	ar3
      000D48 D0 07            [24]  856 	pop	ar7
      000D4A 8A 05            [24]  857 	mov	ar5,r2
                                    858 ;	lib/../../common/uart.c:65: print_buf[i] = (val < 10) ? (val + '0') : (val - 10 + 'A');
      000D4C EF               [12]  859 	mov	a,r7
      000D4D 2B               [12]  860 	add	a,r3
      000D4E F9               [12]  861 	mov	r1,a
      000D4F BD 0A 00         [24]  862 	cjne	r5,#0x0A,00122$
      000D52                        863 00122$:
      000D52 D0 02            [24]  864 	pop	ar2
      000D54 50 08            [24]  865 	jnc	00108$
      000D56 8D 06            [24]  866 	mov	ar6,r5
      000D58 74 30            [12]  867 	mov	a,#0x30
      000D5A 2E               [12]  868 	add	a,r6
      000D5B FE               [12]  869 	mov	r6,a
      000D5C 80 04            [24]  870 	sjmp	00109$
      000D5E                        871 00108$:
      000D5E 74 37            [12]  872 	mov	a,#0x37
      000D60 2D               [12]  873 	add	a,r5
      000D61 FE               [12]  874 	mov	r6,a
      000D62                        875 00109$:
      000D62 A7 06            [24]  876 	mov	@r1,ar6
                                    877 ;	lib/../../common/uart.c:66: u32Temp /= radix;
      000D64 C0 07            [24]  878 	push	ar7
      000D66 C0 03            [24]  879 	push	ar3
      000D68 C0 02            [24]  880 	push	ar2
      000D6A E5 0D            [12]  881 	mov	a,_bp
      000D6C 24 05            [12]  882 	add	a,#0x05
      000D6E F8               [12]  883 	mov	r0,a
      000D6F E6               [12]  884 	mov	a,@r0
      000D70 C0 E0            [24]  885 	push	acc
      000D72 08               [12]  886 	inc	r0
      000D73 E6               [12]  887 	mov	a,@r0
      000D74 C0 E0            [24]  888 	push	acc
      000D76 08               [12]  889 	inc	r0
      000D77 E6               [12]  890 	mov	a,@r0
      000D78 C0 E0            [24]  891 	push	acc
      000D7A 08               [12]  892 	inc	r0
      000D7B E6               [12]  893 	mov	a,@r0
      000D7C C0 E0            [24]  894 	push	acc
      000D7E A8 0D            [24]  895 	mov	r0,_bp
      000D80 08               [12]  896 	inc	r0
      000D81 86 82            [24]  897 	mov	dpl,@r0
      000D83 08               [12]  898 	inc	r0
      000D84 86 83            [24]  899 	mov	dph,@r0
      000D86 08               [12]  900 	inc	r0
      000D87 86 F0            [24]  901 	mov	b,@r0
      000D89 08               [12]  902 	inc	r0
      000D8A E6               [12]  903 	mov	a,@r0
      000D8B 12 12 2A         [24]  904 	lcall	__divulong
      000D8E A8 0D            [24]  905 	mov	r0,_bp
      000D90 08               [12]  906 	inc	r0
      000D91 A6 82            [24]  907 	mov	@r0,dpl
      000D93 08               [12]  908 	inc	r0
      000D94 A6 83            [24]  909 	mov	@r0,dph
      000D96 08               [12]  910 	inc	r0
      000D97 A6 F0            [24]  911 	mov	@r0,b
      000D99 08               [12]  912 	inc	r0
      000D9A F6               [12]  913 	mov	@r0,a
      000D9B E5 81            [12]  914 	mov	a,sp
      000D9D 24 FC            [12]  915 	add	a,#0xfc
      000D9F F5 81            [12]  916 	mov	sp,a
      000DA1 D0 02            [24]  917 	pop	ar2
      000DA3 D0 03            [24]  918 	pop	ar3
      000DA5 D0 07            [24]  919 	pop	ar7
                                    920 ;	lib/../../common/uart.c:67: if (u32Temp == 0)
      000DA7 A8 0D            [24]  921 	mov	r0,_bp
      000DA9 08               [12]  922 	inc	r0
      000DAA E6               [12]  923 	mov	a,@r0
      000DAB 08               [12]  924 	inc	r0
      000DAC 46               [12]  925 	orl	a,@r0
      000DAD 08               [12]  926 	inc	r0
      000DAE 46               [12]  927 	orl	a,@r0
      000DAF 08               [12]  928 	inc	r0
      000DB0 46               [12]  929 	orl	a,@r0
      000DB1 60 08            [24]  930 	jz	00103$
                                    931 ;	lib/../../common/uart.c:63: for (i = 15; i > 0; i--) {
      000DB3 1F               [12]  932 	dec	r7
      000DB4 EF               [12]  933 	mov	a,r7
      000DB5 FA               [12]  934 	mov	r2,a
      000DB6 60 03            [24]  935 	jz	00125$
      000DB8 02 0C FC         [24]  936 	ljmp	00104$
      000DBB                        937 00125$:
      000DBB                        938 00103$:
                                    939 ;	lib/../../common/uart.c:70: uprintf(print_buf + i);
      000DBB EA               [12]  940 	mov	a,r2
      000DBC 2B               [12]  941 	add	a,r3
      000DBD FB               [12]  942 	mov	r3,a
      000DBE 7F 00            [12]  943 	mov	r7,#0x00
      000DC0 7E 40            [12]  944 	mov	r6,#0x40
      000DC2 C0 03            [24]  945 	push	ar3
      000DC4 C0 07            [24]  946 	push	ar7
      000DC6 C0 06            [24]  947 	push	ar6
      000DC8 12 0E F2         [24]  948 	lcall	_uprintf
      000DCB 15 81            [12]  949 	dec	sp
      000DCD 15 81            [12]  950 	dec	sp
      000DCF 15 81            [12]  951 	dec	sp
      000DD1 85 0D 81         [24]  952 	mov	sp,_bp
      000DD4 D0 0D            [24]  953 	pop	_bp
      000DD6 22               [24]  954 	ret
                                    955 ;------------------------------------------------------------
                                    956 ;Allocation info for local variables in function 'printInteger'
                                    957 ;------------------------------------------------------------
                                    958 ;u32Temp                   Allocated to stack - _bp +1
                                    959 ;print_buf                 Allocated to stack - _bp +5
                                    960 ;sign                      Allocated to registers r3 
                                    961 ;i                         Allocated to stack - _bp +17
                                    962 ;------------------------------------------------------------
                                    963 ;	lib/../../common/uart.c:73: void printInteger(dword u32Temp) {
                                    964 ;	-----------------------------------------
                                    965 ;	 function printInteger
                                    966 ;	-----------------------------------------
      000DD7                        967 _printInteger:
      000DD7 C0 0D            [24]  968 	push	_bp
      000DD9 85 81 0D         [24]  969 	mov	_bp,sp
      000DDC C0 82            [24]  970 	push	dpl
      000DDE C0 83            [24]  971 	push	dph
      000DE0 C0 F0            [24]  972 	push	b
      000DE2 C0 E0            [24]  973 	push	acc
      000DE4 E5 81            [12]  974 	mov	a,sp
      000DE6 24 0D            [12]  975 	add	a,#0x0D
      000DE8 F5 81            [12]  976 	mov	sp,a
                                    977 ;	lib/../../common/uart.c:75: byte sign = 0;
      000DEA 7B 00            [12]  978 	mov	r3,#0x00
                                    979 ;	lib/../../common/uart.c:78: print_buf[11] = 0;
      000DEC E5 0D            [12]  980 	mov	a,_bp
      000DEE 24 05            [12]  981 	add	a,#0x05
      000DF0 FA               [12]  982 	mov	r2,a
      000DF1 24 0B            [12]  983 	add	a,#0x0B
      000DF3 F8               [12]  984 	mov	r0,a
      000DF4 76 00            [12]  985 	mov	@r0,#0x00
                                    986 ;	lib/../../common/uart.c:79: if (u32Temp & 0x8000) {
      000DF6 A8 0D            [24]  987 	mov	r0,_bp
      000DF8 08               [12]  988 	inc	r0
      000DF9 08               [12]  989 	inc	r0
      000DFA E6               [12]  990 	mov	a,@r0
      000DFB 30 E7 2B         [24]  991 	jnb	acc.7,00102$
                                    992 ;	lib/../../common/uart.c:80: u32Temp = ~u32Temp + 1;
      000DFE C0 02            [24]  993 	push	ar2
      000E00 A8 0D            [24]  994 	mov	r0,_bp
      000E02 08               [12]  995 	inc	r0
      000E03 E6               [12]  996 	mov	a,@r0
      000E04 F4               [12]  997 	cpl	a
      000E05 FA               [12]  998 	mov	r2,a
      000E06 08               [12]  999 	inc	r0
      000E07 E6               [12] 1000 	mov	a,@r0
      000E08 F4               [12] 1001 	cpl	a
      000E09 FD               [12] 1002 	mov	r5,a
      000E0A 08               [12] 1003 	inc	r0
      000E0B E6               [12] 1004 	mov	a,@r0
      000E0C F4               [12] 1005 	cpl	a
      000E0D FE               [12] 1006 	mov	r6,a
      000E0E 08               [12] 1007 	inc	r0
      000E0F E6               [12] 1008 	mov	a,@r0
      000E10 F4               [12] 1009 	cpl	a
      000E11 FF               [12] 1010 	mov	r7,a
      000E12 A8 0D            [24] 1011 	mov	r0,_bp
      000E14 08               [12] 1012 	inc	r0
      000E15 74 01            [12] 1013 	mov	a,#0x01
      000E17 2A               [12] 1014 	add	a,r2
      000E18 F6               [12] 1015 	mov	@r0,a
      000E19 E4               [12] 1016 	clr	a
      000E1A 3D               [12] 1017 	addc	a,r5
      000E1B 08               [12] 1018 	inc	r0
      000E1C F6               [12] 1019 	mov	@r0,a
      000E1D E4               [12] 1020 	clr	a
      000E1E 3E               [12] 1021 	addc	a,r6
      000E1F 08               [12] 1022 	inc	r0
      000E20 F6               [12] 1023 	mov	@r0,a
      000E21 E4               [12] 1024 	clr	a
      000E22 3F               [12] 1025 	addc	a,r7
      000E23 08               [12] 1026 	inc	r0
      000E24 F6               [12] 1027 	mov	@r0,a
                                   1028 ;	lib/../../common/uart.c:81: sign = 1;
      000E25 7B 01            [12] 1029 	mov	r3,#0x01
                                   1030 ;	lib/../../common/uart.c:91: uprintf(print_buf + i);
      000E27 D0 02            [24] 1031 	pop	ar2
                                   1032 ;	lib/../../common/uart.c:81: sign = 1;
      000E29                       1033 00102$:
                                   1034 ;	lib/../../common/uart.c:83: for (i = 10; i > 0; i--) {
      000E29 7F 0A            [12] 1035 	mov	r7,#0x0A
      000E2B E5 0D            [12] 1036 	mov	a,_bp
      000E2D 24 11            [12] 1037 	add	a,#0x11
      000E2F F8               [12] 1038 	mov	r0,a
      000E30 76 0A            [12] 1039 	mov	@r0,#0x0A
      000E32                       1040 00108$:
                                   1041 ;	lib/../../common/uart.c:84: print_buf[i] = (u32Temp % 10) + '0';
      000E32 C0 03            [24] 1042 	push	ar3
      000E34 E5 0D            [12] 1043 	mov	a,_bp
      000E36 24 11            [12] 1044 	add	a,#0x11
      000E38 F8               [12] 1045 	mov	r0,a
      000E39 E6               [12] 1046 	mov	a,@r0
      000E3A 2A               [12] 1047 	add	a,r2
      000E3B F9               [12] 1048 	mov	r1,a
      000E3C C0 07            [24] 1049 	push	ar7
      000E3E C0 02            [24] 1050 	push	ar2
      000E40 C0 01            [24] 1051 	push	ar1
      000E42 74 0A            [12] 1052 	mov	a,#0x0A
      000E44 C0 E0            [24] 1053 	push	acc
      000E46 E4               [12] 1054 	clr	a
      000E47 C0 E0            [24] 1055 	push	acc
      000E49 C0 E0            [24] 1056 	push	acc
      000E4B C0 E0            [24] 1057 	push	acc
      000E4D A8 0D            [24] 1058 	mov	r0,_bp
      000E4F 08               [12] 1059 	inc	r0
      000E50 86 82            [24] 1060 	mov	dpl,@r0
      000E52 08               [12] 1061 	inc	r0
      000E53 86 83            [24] 1062 	mov	dph,@r0
      000E55 08               [12] 1063 	inc	r0
      000E56 86 F0            [24] 1064 	mov	b,@r0
      000E58 08               [12] 1065 	inc	r0
      000E59 E6               [12] 1066 	mov	a,@r0
      000E5A 12 11 62         [24] 1067 	lcall	__modulong
      000E5D AB 82            [24] 1068 	mov	r3,dpl
      000E5F E5 81            [12] 1069 	mov	a,sp
      000E61 24 FC            [12] 1070 	add	a,#0xfc
      000E63 F5 81            [12] 1071 	mov	sp,a
      000E65 D0 01            [24] 1072 	pop	ar1
      000E67 D0 02            [24] 1073 	pop	ar2
      000E69 74 30            [12] 1074 	mov	a,#0x30
      000E6B 2B               [12] 1075 	add	a,r3
      000E6C F7               [12] 1076 	mov	@r1,a
                                   1077 ;	lib/../../common/uart.c:85: u32Temp /= 10;
      000E6D C0 03            [24] 1078 	push	ar3
      000E6F C0 02            [24] 1079 	push	ar2
      000E71 74 0A            [12] 1080 	mov	a,#0x0A
      000E73 C0 E0            [24] 1081 	push	acc
      000E75 E4               [12] 1082 	clr	a
      000E76 C0 E0            [24] 1083 	push	acc
      000E78 C0 E0            [24] 1084 	push	acc
      000E7A C0 E0            [24] 1085 	push	acc
      000E7C A8 0D            [24] 1086 	mov	r0,_bp
      000E7E 08               [12] 1087 	inc	r0
      000E7F 86 82            [24] 1088 	mov	dpl,@r0
      000E81 08               [12] 1089 	inc	r0
      000E82 86 83            [24] 1090 	mov	dph,@r0
      000E84 08               [12] 1091 	inc	r0
      000E85 86 F0            [24] 1092 	mov	b,@r0
      000E87 08               [12] 1093 	inc	r0
      000E88 E6               [12] 1094 	mov	a,@r0
      000E89 12 12 2A         [24] 1095 	lcall	__divulong
      000E8C A8 0D            [24] 1096 	mov	r0,_bp
      000E8E 08               [12] 1097 	inc	r0
      000E8F A6 82            [24] 1098 	mov	@r0,dpl
      000E91 08               [12] 1099 	inc	r0
      000E92 A6 83            [24] 1100 	mov	@r0,dph
      000E94 08               [12] 1101 	inc	r0
      000E95 A6 F0            [24] 1102 	mov	@r0,b
      000E97 08               [12] 1103 	inc	r0
      000E98 F6               [12] 1104 	mov	@r0,a
      000E99 E5 81            [12] 1105 	mov	a,sp
      000E9B 24 FC            [12] 1106 	add	a,#0xfc
      000E9D F5 81            [12] 1107 	mov	sp,a
      000E9F D0 02            [24] 1108 	pop	ar2
      000EA1 D0 03            [24] 1109 	pop	ar3
      000EA3 D0 07            [24] 1110 	pop	ar7
                                   1111 ;	lib/../../common/uart.c:86: if (u32Temp == 0)
      000EA5 D0 03            [24] 1112 	pop	ar3
      000EA7 A8 0D            [24] 1113 	mov	r0,_bp
      000EA9 08               [12] 1114 	inc	r0
      000EAA E6               [12] 1115 	mov	a,@r0
      000EAB 08               [12] 1116 	inc	r0
      000EAC 46               [12] 1117 	orl	a,@r0
      000EAD 08               [12] 1118 	inc	r0
      000EAE 46               [12] 1119 	orl	a,@r0
      000EAF 08               [12] 1120 	inc	r0
      000EB0 46               [12] 1121 	orl	a,@r0
      000EB1 60 18            [24] 1122 	jz	00105$
                                   1123 ;	lib/../../common/uart.c:83: for (i = 10; i > 0; i--) {
      000EB3 E5 0D            [12] 1124 	mov	a,_bp
      000EB5 24 11            [12] 1125 	add	a,#0x11
      000EB7 F8               [12] 1126 	mov	r0,a
      000EB8 16               [12] 1127 	dec	@r0
      000EB9 E5 0D            [12] 1128 	mov	a,_bp
      000EBB 24 11            [12] 1129 	add	a,#0x11
      000EBD F8               [12] 1130 	mov	r0,a
      000EBE 86 07            [24] 1131 	mov	ar7,@r0
      000EC0 E5 0D            [12] 1132 	mov	a,_bp
      000EC2 24 11            [12] 1133 	add	a,#0x11
      000EC4 F8               [12] 1134 	mov	r0,a
      000EC5 E6               [12] 1135 	mov	a,@r0
      000EC6 60 03            [24] 1136 	jz	00129$
      000EC8 02 0E 32         [24] 1137 	ljmp	00108$
      000ECB                       1138 00129$:
      000ECB                       1139 00105$:
                                   1140 ;	lib/../../common/uart.c:89: if (sign)
      000ECB EB               [12] 1141 	mov	a,r3
      000ECC 60 08            [24] 1142 	jz	00107$
                                   1143 ;	lib/../../common/uart.c:90: print_buf[i--] = '-';
      000ECE 8F 06            [24] 1144 	mov	ar6,r7
      000ED0 1F               [12] 1145 	dec	r7
      000ED1 EE               [12] 1146 	mov	a,r6
      000ED2 2A               [12] 1147 	add	a,r2
      000ED3 F8               [12] 1148 	mov	r0,a
      000ED4 76 2D            [12] 1149 	mov	@r0,#0x2D
      000ED6                       1150 00107$:
                                   1151 ;	lib/../../common/uart.c:91: uprintf(print_buf + i);
      000ED6 EF               [12] 1152 	mov	a,r7
      000ED7 2A               [12] 1153 	add	a,r2
      000ED8 FA               [12] 1154 	mov	r2,a
      000ED9 7F 00            [12] 1155 	mov	r7,#0x00
      000EDB 7E 40            [12] 1156 	mov	r6,#0x40
      000EDD C0 02            [24] 1157 	push	ar2
      000EDF C0 07            [24] 1158 	push	ar7
      000EE1 C0 06            [24] 1159 	push	ar6
      000EE3 12 0E F2         [24] 1160 	lcall	_uprintf
      000EE6 15 81            [12] 1161 	dec	sp
      000EE8 15 81            [12] 1162 	dec	sp
      000EEA 15 81            [12] 1163 	dec	sp
      000EEC 85 0D 81         [24] 1164 	mov	sp,_bp
      000EEF D0 0D            [24] 1165 	pop	_bp
      000EF1 22               [24] 1166 	ret
                                   1167 ;------------------------------------------------------------
                                   1168 ;Allocation info for local variables in function 'uprintf'
                                   1169 ;------------------------------------------------------------
                                   1170 ;str                       Allocated to stack - _bp -5
                                   1171 ;args                      Allocated to stack - _bp +1
                                   1172 ;sloc0                     Allocated to stack - _bp +2
                                   1173 ;------------------------------------------------------------
                                   1174 ;	lib/../../common/uart.c:94: void uprintf(byte* str, ...) {
                                   1175 ;	-----------------------------------------
                                   1176 ;	 function uprintf
                                   1177 ;	-----------------------------------------
      000EF2                       1178 _uprintf:
      000EF2 C0 0D            [24] 1179 	push	_bp
      000EF4 85 81 0D         [24] 1180 	mov	_bp,sp
      000EF7 05 81            [12] 1181 	inc	sp
                                   1182 ;	lib/../../common/uart.c:96: va_start(args, str);
      000EF9 E5 0D            [12] 1183 	mov	a,_bp
      000EFB 24 FB            [12] 1184 	add	a,#0xFB
      000EFD FF               [12] 1185 	mov	r7,a
      000EFE A8 0D            [24] 1186 	mov	r0,_bp
      000F00 08               [12] 1187 	inc	r0
      000F01 A6 07            [24] 1188 	mov	@r0,ar7
                                   1189 ;	lib/../../common/uart.c:97: while (*str != '\0') {
      000F03                       1190 00116$:
      000F03 E5 0D            [12] 1191 	mov	a,_bp
      000F05 24 FB            [12] 1192 	add	a,#0xfb
      000F07 F8               [12] 1193 	mov	r0,a
      000F08 86 04            [24] 1194 	mov	ar4,@r0
      000F0A 08               [12] 1195 	inc	r0
      000F0B 86 05            [24] 1196 	mov	ar5,@r0
      000F0D 08               [12] 1197 	inc	r0
      000F0E 86 06            [24] 1198 	mov	ar6,@r0
      000F10 8C 82            [24] 1199 	mov	dpl,r4
      000F12 8D 83            [24] 1200 	mov	dph,r5
      000F14 8E F0            [24] 1201 	mov	b,r6
      000F16 12 12 97         [24] 1202 	lcall	__gptrget
      000F19 FB               [12] 1203 	mov	r3,a
      000F1A 70 03            [24] 1204 	jnz	00145$
      000F1C 02 10 76         [24] 1205 	ljmp	00119$
      000F1F                       1206 00145$:
                                   1207 ;	lib/../../common/uart.c:98: if (*str == '%') {
      000F1F BB 25 02         [24] 1208 	cjne	r3,#0x25,00146$
      000F22 80 03            [24] 1209 	sjmp	00147$
      000F24                       1210 00146$:
      000F24 02 10 47         [24] 1211 	ljmp	00115$
      000F27                       1212 00147$:
                                   1213 ;	lib/../../common/uart.c:99: str++;
      000F27 E5 0D            [12] 1214 	mov	a,_bp
      000F29 24 FB            [12] 1215 	add	a,#0xfb
      000F2B F8               [12] 1216 	mov	r0,a
      000F2C 74 01            [12] 1217 	mov	a,#0x01
      000F2E 2C               [12] 1218 	add	a,r4
      000F2F F6               [12] 1219 	mov	@r0,a
      000F30 E4               [12] 1220 	clr	a
      000F31 3D               [12] 1221 	addc	a,r5
      000F32 08               [12] 1222 	inc	r0
      000F33 F6               [12] 1223 	mov	@r0,a
      000F34 08               [12] 1224 	inc	r0
      000F35 A6 06            [24] 1225 	mov	@r0,ar6
                                   1226 ;	lib/../../common/uart.c:100: if (*str == '\0')
      000F37 E5 0D            [12] 1227 	mov	a,_bp
      000F39 24 FB            [12] 1228 	add	a,#0xfb
      000F3B F8               [12] 1229 	mov	r0,a
      000F3C 86 04            [24] 1230 	mov	ar4,@r0
      000F3E 08               [12] 1231 	inc	r0
      000F3F 86 05            [24] 1232 	mov	ar5,@r0
      000F41 08               [12] 1233 	inc	r0
      000F42 86 06            [24] 1234 	mov	ar6,@r0
      000F44 8C 82            [24] 1235 	mov	dpl,r4
      000F46 8D 83            [24] 1236 	mov	dph,r5
      000F48 8E F0            [24] 1237 	mov	b,r6
      000F4A 12 12 97         [24] 1238 	lcall	__gptrget
      000F4D FB               [12] 1239 	mov	r3,a
      000F4E 70 03            [24] 1240 	jnz	00102$
                                   1241 ;	lib/../../common/uart.c:101: return;
      000F50 02 10 76         [24] 1242 	ljmp	00119$
      000F53                       1243 00102$:
                                   1244 ;	lib/../../common/uart.c:102: if (*str == 'd') {
      000F53 BB 64 35         [24] 1245 	cjne	r3,#0x64,00112$
                                   1246 ;	lib/../../common/uart.c:103: str++;
      000F56 E5 0D            [12] 1247 	mov	a,_bp
      000F58 24 FB            [12] 1248 	add	a,#0xfb
      000F5A F8               [12] 1249 	mov	r0,a
      000F5B 74 01            [12] 1250 	mov	a,#0x01
      000F5D 2C               [12] 1251 	add	a,r4
      000F5E F6               [12] 1252 	mov	@r0,a
      000F5F E4               [12] 1253 	clr	a
      000F60 3D               [12] 1254 	addc	a,r5
      000F61 08               [12] 1255 	inc	r0
      000F62 F6               [12] 1256 	mov	@r0,a
      000F63 08               [12] 1257 	inc	r0
      000F64 A6 06            [24] 1258 	mov	@r0,ar6
                                   1259 ;	lib/../../common/uart.c:104: printInteger(va_arg(args, int));
      000F66 A8 0D            [24] 1260 	mov	r0,_bp
      000F68 08               [12] 1261 	inc	r0
      000F69 E6               [12] 1262 	mov	a,@r0
      000F6A 24 FE            [12] 1263 	add	a,#0xFE
      000F6C FA               [12] 1264 	mov	r2,a
      000F6D A8 0D            [24] 1265 	mov	r0,_bp
      000F6F 08               [12] 1266 	inc	r0
      000F70 A6 02            [24] 1267 	mov	@r0,ar2
      000F72 8A 01            [24] 1268 	mov	ar1,r2
      000F74 87 02            [24] 1269 	mov	ar2,@r1
      000F76 09               [12] 1270 	inc	r1
      000F77 87 07            [24] 1271 	mov	ar7,@r1
      000F79 19               [12] 1272 	dec	r1
      000F7A EF               [12] 1273 	mov	a,r7
      000F7B 33               [12] 1274 	rlc	a
      000F7C 95 E0            [12] 1275 	subb	a,acc
      000F7E FE               [12] 1276 	mov	r6,a
      000F7F 8A 82            [24] 1277 	mov	dpl,r2
      000F81 8F 83            [24] 1278 	mov	dph,r7
      000F83 8E F0            [24] 1279 	mov	b,r6
      000F85 12 0D D7         [24] 1280 	lcall	_printInteger
      000F88 02 10 47         [24] 1281 	ljmp	00115$
      000F8B                       1282 00112$:
                                   1283 ;	lib/../../common/uart.c:105: } else if (*str == 'x') {
      000F8B BB 78 3D         [24] 1284 	cjne	r3,#0x78,00109$
                                   1285 ;	lib/../../common/uart.c:106: str++;
      000F8E E5 0D            [12] 1286 	mov	a,_bp
      000F90 24 FB            [12] 1287 	add	a,#0xfb
      000F92 F8               [12] 1288 	mov	r0,a
      000F93 74 01            [12] 1289 	mov	a,#0x01
      000F95 2C               [12] 1290 	add	a,r4
      000F96 F6               [12] 1291 	mov	@r0,a
      000F97 E4               [12] 1292 	clr	a
      000F98 3D               [12] 1293 	addc	a,r5
      000F99 08               [12] 1294 	inc	r0
      000F9A F6               [12] 1295 	mov	@r0,a
      000F9B 08               [12] 1296 	inc	r0
      000F9C A6 06            [24] 1297 	mov	@r0,ar6
                                   1298 ;	lib/../../common/uart.c:107: printU(va_arg(args, int), 16);
      000F9E A8 0D            [24] 1299 	mov	r0,_bp
      000FA0 08               [12] 1300 	inc	r0
      000FA1 E6               [12] 1301 	mov	a,@r0
      000FA2 24 FE            [12] 1302 	add	a,#0xFE
      000FA4 FF               [12] 1303 	mov	r7,a
      000FA5 A8 0D            [24] 1304 	mov	r0,_bp
      000FA7 08               [12] 1305 	inc	r0
      000FA8 A6 07            [24] 1306 	mov	@r0,ar7
      000FAA 8F 01            [24] 1307 	mov	ar1,r7
      000FAC 87 02            [24] 1308 	mov	ar2,@r1
      000FAE 09               [12] 1309 	inc	r1
      000FAF 87 07            [24] 1310 	mov	ar7,@r1
      000FB1 19               [12] 1311 	dec	r1
      000FB2 EF               [12] 1312 	mov	a,r7
      000FB3 33               [12] 1313 	rlc	a
      000FB4 95 E0            [12] 1314 	subb	a,acc
      000FB6 FE               [12] 1315 	mov	r6,a
      000FB7 FD               [12] 1316 	mov	r5,a
      000FB8 74 10            [12] 1317 	mov	a,#0x10
      000FBA C0 E0            [24] 1318 	push	acc
      000FBC 8A 82            [24] 1319 	mov	dpl,r2
      000FBE 8F 83            [24] 1320 	mov	dph,r7
      000FC0 8E F0            [24] 1321 	mov	b,r6
      000FC2 ED               [12] 1322 	mov	a,r5
      000FC3 12 0C DB         [24] 1323 	lcall	_printU
      000FC6 15 81            [12] 1324 	dec	sp
      000FC8 02 10 47         [24] 1325 	ljmp	00115$
      000FCB                       1326 00109$:
                                   1327 ;	lib/../../common/uart.c:108: } else if (*str == 'o') {
      000FCB BB 6F 3C         [24] 1328 	cjne	r3,#0x6F,00106$
                                   1329 ;	lib/../../common/uart.c:109: str++;
      000FCE E5 0D            [12] 1330 	mov	a,_bp
      000FD0 24 FB            [12] 1331 	add	a,#0xfb
      000FD2 F8               [12] 1332 	mov	r0,a
      000FD3 74 01            [12] 1333 	mov	a,#0x01
      000FD5 2C               [12] 1334 	add	a,r4
      000FD6 F6               [12] 1335 	mov	@r0,a
      000FD7 E4               [12] 1336 	clr	a
      000FD8 3D               [12] 1337 	addc	a,r5
      000FD9 08               [12] 1338 	inc	r0
      000FDA F6               [12] 1339 	mov	@r0,a
      000FDB 08               [12] 1340 	inc	r0
      000FDC A6 06            [24] 1341 	mov	@r0,ar6
                                   1342 ;	lib/../../common/uart.c:110: printU(va_arg(args, int), 8);
      000FDE A8 0D            [24] 1343 	mov	r0,_bp
      000FE0 08               [12] 1344 	inc	r0
      000FE1 E6               [12] 1345 	mov	a,@r0
      000FE2 24 FE            [12] 1346 	add	a,#0xFE
      000FE4 FF               [12] 1347 	mov	r7,a
      000FE5 A8 0D            [24] 1348 	mov	r0,_bp
      000FE7 08               [12] 1349 	inc	r0
      000FE8 A6 07            [24] 1350 	mov	@r0,ar7
      000FEA 8F 01            [24] 1351 	mov	ar1,r7
      000FEC 87 02            [24] 1352 	mov	ar2,@r1
      000FEE 09               [12] 1353 	inc	r1
      000FEF 87 07            [24] 1354 	mov	ar7,@r1
      000FF1 19               [12] 1355 	dec	r1
      000FF2 EF               [12] 1356 	mov	a,r7
      000FF3 33               [12] 1357 	rlc	a
      000FF4 95 E0            [12] 1358 	subb	a,acc
      000FF6 FE               [12] 1359 	mov	r6,a
      000FF7 FD               [12] 1360 	mov	r5,a
      000FF8 74 08            [12] 1361 	mov	a,#0x08
      000FFA C0 E0            [24] 1362 	push	acc
      000FFC 8A 82            [24] 1363 	mov	dpl,r2
      000FFE 8F 83            [24] 1364 	mov	dph,r7
      001000 8E F0            [24] 1365 	mov	b,r6
      001002 ED               [12] 1366 	mov	a,r5
      001003 12 0C DB         [24] 1367 	lcall	_printU
      001006 15 81            [12] 1368 	dec	sp
      001008 80 3D            [24] 1369 	sjmp	00115$
      00100A                       1370 00106$:
                                   1371 ;	lib/../../common/uart.c:111: } else if (*str == 'b') {
      00100A BB 62 3A         [24] 1372 	cjne	r3,#0x62,00115$
                                   1373 ;	lib/../../common/uart.c:112: str++;
      00100D E5 0D            [12] 1374 	mov	a,_bp
      00100F 24 FB            [12] 1375 	add	a,#0xfb
      001011 F8               [12] 1376 	mov	r0,a
      001012 74 01            [12] 1377 	mov	a,#0x01
      001014 2C               [12] 1378 	add	a,r4
      001015 F6               [12] 1379 	mov	@r0,a
      001016 E4               [12] 1380 	clr	a
      001017 3D               [12] 1381 	addc	a,r5
      001018 08               [12] 1382 	inc	r0
      001019 F6               [12] 1383 	mov	@r0,a
      00101A 08               [12] 1384 	inc	r0
      00101B A6 06            [24] 1385 	mov	@r0,ar6
                                   1386 ;	lib/../../common/uart.c:113: printU(va_arg(args, int), 2);
      00101D A8 0D            [24] 1387 	mov	r0,_bp
      00101F 08               [12] 1388 	inc	r0
      001020 E6               [12] 1389 	mov	a,@r0
      001021 24 FE            [12] 1390 	add	a,#0xFE
      001023 FF               [12] 1391 	mov	r7,a
      001024 A8 0D            [24] 1392 	mov	r0,_bp
      001026 08               [12] 1393 	inc	r0
      001027 A6 07            [24] 1394 	mov	@r0,ar7
      001029 8F 01            [24] 1395 	mov	ar1,r7
      00102B 87 06            [24] 1396 	mov	ar6,@r1
      00102D 09               [12] 1397 	inc	r1
      00102E 87 07            [24] 1398 	mov	ar7,@r1
      001030 19               [12] 1399 	dec	r1
      001031 EF               [12] 1400 	mov	a,r7
      001032 33               [12] 1401 	rlc	a
      001033 95 E0            [12] 1402 	subb	a,acc
      001035 FD               [12] 1403 	mov	r5,a
      001036 FC               [12] 1404 	mov	r4,a
      001037 74 02            [12] 1405 	mov	a,#0x02
      001039 C0 E0            [24] 1406 	push	acc
      00103B 8E 82            [24] 1407 	mov	dpl,r6
      00103D 8F 83            [24] 1408 	mov	dph,r7
      00103F 8D F0            [24] 1409 	mov	b,r5
      001041 EC               [12] 1410 	mov	a,r4
      001042 12 0C DB         [24] 1411 	lcall	_printU
      001045 15 81            [12] 1412 	dec	sp
      001047                       1413 00115$:
                                   1414 ;	lib/../../common/uart.c:116: putc(*str++);
      001047 E5 0D            [12] 1415 	mov	a,_bp
      001049 24 FB            [12] 1416 	add	a,#0xfb
      00104B F8               [12] 1417 	mov	r0,a
      00104C 86 05            [24] 1418 	mov	ar5,@r0
      00104E 08               [12] 1419 	inc	r0
      00104F 86 06            [24] 1420 	mov	ar6,@r0
      001051 08               [12] 1421 	inc	r0
      001052 86 07            [24] 1422 	mov	ar7,@r0
      001054 8D 82            [24] 1423 	mov	dpl,r5
      001056 8E 83            [24] 1424 	mov	dph,r6
      001058 8F F0            [24] 1425 	mov	b,r7
      00105A 12 12 97         [24] 1426 	lcall	__gptrget
      00105D FC               [12] 1427 	mov	r4,a
      00105E E5 0D            [12] 1428 	mov	a,_bp
      001060 24 FB            [12] 1429 	add	a,#0xfb
      001062 F8               [12] 1430 	mov	r0,a
      001063 74 01            [12] 1431 	mov	a,#0x01
      001065 2D               [12] 1432 	add	a,r5
      001066 F6               [12] 1433 	mov	@r0,a
      001067 E4               [12] 1434 	clr	a
      001068 3E               [12] 1435 	addc	a,r6
      001069 08               [12] 1436 	inc	r0
      00106A F6               [12] 1437 	mov	@r0,a
      00106B 08               [12] 1438 	inc	r0
      00106C A6 07            [24] 1439 	mov	@r0,ar7
      00106E 8C 82            [24] 1440 	mov	dpl,r4
      001070 12 0C A9         [24] 1441 	lcall	_putc
      001073 02 0F 03         [24] 1442 	ljmp	00116$
      001076                       1443 00119$:
      001076 15 81            [12] 1444 	dec	sp
      001078 D0 0D            [24] 1445 	pop	_bp
      00107A 22               [24] 1446 	ret
                                   1447 	.area CSEG    (CODE)
                                   1448 	.area CONST   (CODE)
                                   1449 	.area XINIT   (CODE)
                                   1450 	.area CABS    (ABS,CODE)
