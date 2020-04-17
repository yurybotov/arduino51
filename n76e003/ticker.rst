                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Apr  3 2018) (Linux)
                                      4 ; This file was generated Fri Apr 17 19:44:45 2020
                                      5 ;--------------------------------------------------------
                                      6 	.module ticker
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _tl0
                                     13 	.globl _th0
                                     14 	.globl _Timer0_ISR
                                     15 	.globl _digitalWrite
                                     16 	.globl _digitalRead
                                     17 	.globl _MOSI
                                     18 	.globl _P00
                                     19 	.globl _MISO
                                     20 	.globl _P01
                                     21 	.globl _RXD_1
                                     22 	.globl _P02
                                     23 	.globl _P03
                                     24 	.globl _STADC
                                     25 	.globl _P04
                                     26 	.globl _P05
                                     27 	.globl _TXD
                                     28 	.globl _P06
                                     29 	.globl _RXD
                                     30 	.globl _P07
                                     31 	.globl _IT0
                                     32 	.globl _IE0
                                     33 	.globl _IT1
                                     34 	.globl _IE1
                                     35 	.globl _TR0
                                     36 	.globl _TF0
                                     37 	.globl _TR1
                                     38 	.globl _TF1
                                     39 	.globl _P10
                                     40 	.globl _P11
                                     41 	.globl _P12
                                     42 	.globl _SCL
                                     43 	.globl _P13
                                     44 	.globl _SDA
                                     45 	.globl _P14
                                     46 	.globl _P15
                                     47 	.globl _TXD_1
                                     48 	.globl _P16
                                     49 	.globl _P17
                                     50 	.globl _RI
                                     51 	.globl _TI
                                     52 	.globl _RB8
                                     53 	.globl _TB8
                                     54 	.globl _REN
                                     55 	.globl _SM2
                                     56 	.globl _SM1
                                     57 	.globl _FE
                                     58 	.globl _SM0
                                     59 	.globl _P20
                                     60 	.globl _EX0
                                     61 	.globl _ET0
                                     62 	.globl _EX1
                                     63 	.globl _ET1
                                     64 	.globl _ES
                                     65 	.globl _EBOD
                                     66 	.globl _EADC
                                     67 	.globl _EA
                                     68 	.globl _P30
                                     69 	.globl _PX0
                                     70 	.globl _PT0
                                     71 	.globl _PX1
                                     72 	.globl _PT1
                                     73 	.globl _PS
                                     74 	.globl _PBOD
                                     75 	.globl _PADC
                                     76 	.globl _I2CPX
                                     77 	.globl _AA
                                     78 	.globl _SI
                                     79 	.globl _STO
                                     80 	.globl _STA
                                     81 	.globl _I2CEN
                                     82 	.globl _CM_RL2
                                     83 	.globl _TR2
                                     84 	.globl _TF2
                                     85 	.globl _P
                                     86 	.globl _OV
                                     87 	.globl _RS0
                                     88 	.globl _RS1
                                     89 	.globl _F0
                                     90 	.globl _AC
                                     91 	.globl _CY
                                     92 	.globl _CLRPWM
                                     93 	.globl _PWMF
                                     94 	.globl _LOAD
                                     95 	.globl _PWMRUN
                                     96 	.globl _ADCHS0
                                     97 	.globl _ADCHS1
                                     98 	.globl _ADCHS2
                                     99 	.globl _ADCHS3
                                    100 	.globl _ETGSEL0
                                    101 	.globl _ETGSEL1
                                    102 	.globl _ADCS
                                    103 	.globl _ADCF
                                    104 	.globl _RI_1
                                    105 	.globl _TI_1
                                    106 	.globl _RB8_1
                                    107 	.globl _TB8_1
                                    108 	.globl _REN_1
                                    109 	.globl _SM2_1
                                    110 	.globl _SM1_1
                                    111 	.globl _FE_1
                                    112 	.globl _SM0_1
                                    113 	.globl _EIPH1
                                    114 	.globl _EIP1
                                    115 	.globl _PMD
                                    116 	.globl _PMEN
                                    117 	.globl _PDTCNT
                                    118 	.globl _PDTEN
                                    119 	.globl _SCON_1
                                    120 	.globl _EIPH
                                    121 	.globl _AINDIDS
                                    122 	.globl _SPDR
                                    123 	.globl _SPSR
                                    124 	.globl _SPCR2
                                    125 	.globl _SPCR
                                    126 	.globl _CAPCON4
                                    127 	.globl _CAPCON3
                                    128 	.globl _B
                                    129 	.globl _EIP
                                    130 	.globl _C2H
                                    131 	.globl _C2L
                                    132 	.globl _PIF
                                    133 	.globl _PIPEN
                                    134 	.globl _PINEN
                                    135 	.globl _PICON
                                    136 	.globl _ADCCON0
                                    137 	.globl _C1H
                                    138 	.globl _C1L
                                    139 	.globl _C0H
                                    140 	.globl _C0L
                                    141 	.globl _ADCDLY
                                    142 	.globl _ADCCON2
                                    143 	.globl _ADCCON1
                                    144 	.globl _ACC
                                    145 	.globl _PWMCON1
                                    146 	.globl _PIOCON0
                                    147 	.globl _PWM3L
                                    148 	.globl _PWM2L
                                    149 	.globl _PWM1L
                                    150 	.globl _PWM0L
                                    151 	.globl _PWMPL
                                    152 	.globl _PWMCON0
                                    153 	.globl _FBD
                                    154 	.globl _PNP
                                    155 	.globl _PWM3H
                                    156 	.globl _PWM2H
                                    157 	.globl _PWM1H
                                    158 	.globl _PWM0H
                                    159 	.globl _PWMPH
                                    160 	.globl _PSW
                                    161 	.globl _ADCMPH
                                    162 	.globl _ADCMPL
                                    163 	.globl _PWM5L
                                    164 	.globl _TH2
                                    165 	.globl _PWM4L
                                    166 	.globl _TL2
                                    167 	.globl _RCMP2H
                                    168 	.globl _RCMP2L
                                    169 	.globl _T2MOD
                                    170 	.globl _T2CON
                                    171 	.globl _TA
                                    172 	.globl _PIOCON1
                                    173 	.globl _RH3
                                    174 	.globl _PWM5H
                                    175 	.globl _RL3
                                    176 	.globl _PWM4H
                                    177 	.globl _T3CON
                                    178 	.globl _ADCRH
                                    179 	.globl _ADCRL
                                    180 	.globl _I2ADDR
                                    181 	.globl _I2CON
                                    182 	.globl _I2TOC
                                    183 	.globl _I2CLK
                                    184 	.globl _I2STAT
                                    185 	.globl _I2DAT
                                    186 	.globl _SADDR_1
                                    187 	.globl _SADEN_1
                                    188 	.globl _SADEN
                                    189 	.globl _IP
                                    190 	.globl _PWMINTC
                                    191 	.globl _IPH
                                    192 	.globl _P2S
                                    193 	.globl _P1SR
                                    194 	.globl _P1M2
                                    195 	.globl _P1S
                                    196 	.globl _P1M1
                                    197 	.globl _P0SR
                                    198 	.globl _P0M2
                                    199 	.globl _P0S
                                    200 	.globl _P0M1
                                    201 	.globl _P3
                                    202 	.globl _IAPCN
                                    203 	.globl _IAPFD
                                    204 	.globl _P3SR
                                    205 	.globl _P3M2
                                    206 	.globl _P3S
                                    207 	.globl _P3M1
                                    208 	.globl _BODCON1
                                    209 	.globl _WDCON
                                    210 	.globl _SADDR
                                    211 	.globl _IE
                                    212 	.globl _IAPAH
                                    213 	.globl _IAPAL
                                    214 	.globl _IAPUEN
                                    215 	.globl _IAPTRG
                                    216 	.globl _BODCON0
                                    217 	.globl _AUXR1
                                    218 	.globl _P2
                                    219 	.globl _CHPCON
                                    220 	.globl _EIE1
                                    221 	.globl _EIE
                                    222 	.globl _SBUF_1
                                    223 	.globl _SBUF
                                    224 	.globl _SCON
                                    225 	.globl _CKEN
                                    226 	.globl _CKSWT
                                    227 	.globl _CKDIV
                                    228 	.globl _CAPCON2
                                    229 	.globl _CAPCON1
                                    230 	.globl _CAPCON0
                                    231 	.globl _SFRS
                                    232 	.globl _P1
                                    233 	.globl _WKCON
                                    234 	.globl _CKCON
                                    235 	.globl _TH1
                                    236 	.globl _TH0
                                    237 	.globl _TL1
                                    238 	.globl _TL0
                                    239 	.globl _TMOD
                                    240 	.globl _TCON
                                    241 	.globl _PCON
                                    242 	.globl _RWK
                                    243 	.globl _RCTRIM1
                                    244 	.globl _RCTRIM0
                                    245 	.globl _DPH
                                    246 	.globl _DPL
                                    247 	.globl _SP
                                    248 	.globl _P0
                                    249 	.globl _milliseconds
                                    250 	.globl _ticker_init
                                    251 	.globl _millis
                                    252 	.globl _delay
                                    253 	.globl _pulseIn
                                    254 	.globl _shiftOut
                                    255 	.globl _shiftIn
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
                                    504 ; overlayable bit register bank
                                    505 ;--------------------------------------------------------
                                    506 	.area BIT_BANK	(REL,OVR,DATA)
      000020                        507 bits:
      000020                        508 	.ds 1
                           008000   509 	b0 = bits[0]
                           008100   510 	b1 = bits[1]
                           008200   511 	b2 = bits[2]
                           008300   512 	b3 = bits[3]
                           008400   513 	b4 = bits[4]
                           008500   514 	b5 = bits[5]
                           008600   515 	b6 = bits[6]
                           008700   516 	b7 = bits[7]
                                    517 ;--------------------------------------------------------
                                    518 ; internal ram data
                                    519 ;--------------------------------------------------------
                                    520 	.area DSEG    (DATA)
      000009                        521 _milliseconds::
      000009                        522 	.ds 4
                                    523 ;--------------------------------------------------------
                                    524 ; overlayable items in internal ram 
                                    525 ;--------------------------------------------------------
                                    526 ;--------------------------------------------------------
                                    527 ; indirectly addressable internal ram data
                                    528 ;--------------------------------------------------------
                                    529 	.area ISEG    (DATA)
                                    530 ;--------------------------------------------------------
                                    531 ; absolute internal ram data
                                    532 ;--------------------------------------------------------
                                    533 	.area IABS    (ABS,DATA)
                                    534 	.area IABS    (ABS,DATA)
                                    535 ;--------------------------------------------------------
                                    536 ; bit data
                                    537 ;--------------------------------------------------------
                                    538 	.area BSEG    (BIT)
                                    539 ;--------------------------------------------------------
                                    540 ; paged external ram data
                                    541 ;--------------------------------------------------------
                                    542 	.area PSEG    (PAG,XDATA)
                                    543 ;--------------------------------------------------------
                                    544 ; external ram data
                                    545 ;--------------------------------------------------------
                                    546 	.area XSEG    (XDATA)
                                    547 ;--------------------------------------------------------
                                    548 ; absolute external ram data
                                    549 ;--------------------------------------------------------
                                    550 	.area XABS    (ABS,XDATA)
                                    551 ;--------------------------------------------------------
                                    552 ; external initialized ram data
                                    553 ;--------------------------------------------------------
                                    554 	.area XISEG   (XDATA)
                                    555 	.area HOME    (CODE)
                                    556 	.area GSINIT0 (CODE)
                                    557 	.area GSINIT1 (CODE)
                                    558 	.area GSINIT2 (CODE)
                                    559 	.area GSINIT3 (CODE)
                                    560 	.area GSINIT4 (CODE)
                                    561 	.area GSINIT5 (CODE)
                                    562 	.area GSINIT  (CODE)
                                    563 	.area GSFINAL (CODE)
                                    564 	.area CSEG    (CODE)
                                    565 ;--------------------------------------------------------
                                    566 ; global & static initialisations
                                    567 ;--------------------------------------------------------
                                    568 	.area HOME    (CODE)
                                    569 	.area GSINIT  (CODE)
                                    570 	.area GSFINAL (CODE)
                                    571 	.area GSINIT  (CODE)
                                    572 ;--------------------------------------------------------
                                    573 ; Home
                                    574 ;--------------------------------------------------------
                                    575 	.area HOME    (CODE)
                                    576 	.area HOME    (CODE)
                                    577 ;--------------------------------------------------------
                                    578 ; code
                                    579 ;--------------------------------------------------------
                                    580 	.area CSEG    (CODE)
                                    581 ;------------------------------------------------------------
                                    582 ;Allocation info for local variables in function 'Timer0_ISR'
                                    583 ;------------------------------------------------------------
                                    584 ;	lib/ticker.c:13: void Timer0_ISR(void) __interrupt(1) {
                                    585 ;	-----------------------------------------
                                    586 ;	 function Timer0_ISR
                                    587 ;	-----------------------------------------
      000914                        588 _Timer0_ISR:
                           000007   589 	ar7 = 0x07
                           000006   590 	ar6 = 0x06
                           000005   591 	ar5 = 0x05
                           000004   592 	ar4 = 0x04
                           000003   593 	ar3 = 0x03
                           000002   594 	ar2 = 0x02
                           000001   595 	ar1 = 0x01
                           000000   596 	ar0 = 0x00
      000914 C0 E0            [24]  597 	push	acc
      000916 C0 82            [24]  598 	push	dpl
      000918 C0 83            [24]  599 	push	dph
      00091A C0 D0            [24]  600 	push	psw
                                    601 ;	lib/ticker.c:14: TH0 = th0;
      00091C 90 12 B7         [24]  602 	mov	dptr,#_th0
      00091F E4               [12]  603 	clr	a
      000920 93               [24]  604 	movc	a,@a+dptr
      000921 F5 8C            [12]  605 	mov	_TH0,a
                                    606 ;	lib/ticker.c:15: TL0 = tl0;
      000923 90 12 B8         [24]  607 	mov	dptr,#_tl0
      000926 E4               [12]  608 	clr	a
      000927 93               [24]  609 	movc	a,@a+dptr
      000928 F5 8A            [12]  610 	mov	_TL0,a
                                    611 ;	lib/ticker.c:16: milliseconds++;
      00092A 74 01            [12]  612 	mov	a,#0x01
      00092C 25 09            [12]  613 	add	a,_milliseconds
      00092E F5 09            [12]  614 	mov	_milliseconds,a
      000930 E4               [12]  615 	clr	a
      000931 35 0A            [12]  616 	addc	a,(_milliseconds + 1)
      000933 F5 0A            [12]  617 	mov	(_milliseconds + 1),a
      000935 E4               [12]  618 	clr	a
      000936 35 0B            [12]  619 	addc	a,(_milliseconds + 2)
      000938 F5 0B            [12]  620 	mov	(_milliseconds + 2),a
      00093A E4               [12]  621 	clr	a
      00093B 35 0C            [12]  622 	addc	a,(_milliseconds + 3)
      00093D F5 0C            [12]  623 	mov	(_milliseconds + 3),a
      00093F D0 D0            [24]  624 	pop	psw
      000941 D0 83            [24]  625 	pop	dph
      000943 D0 82            [24]  626 	pop	dpl
      000945 D0 E0            [24]  627 	pop	acc
      000947 32               [24]  628 	reti
                                    629 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    630 ;	eliminated unneeded push/pop b
                                    631 ;------------------------------------------------------------
                                    632 ;Allocation info for local variables in function 'ticker_init'
                                    633 ;------------------------------------------------------------
                                    634 ;	lib/ticker.c:19: void ticker_init(void) {
                                    635 ;	-----------------------------------------
                                    636 ;	 function ticker_init
                                    637 ;	-----------------------------------------
      000948                        638 _ticker_init:
                                    639 ;	lib/ticker.c:20: milliseconds = 0;
      000948 E4               [12]  640 	clr	a
      000949 F5 09            [12]  641 	mov	_milliseconds,a
      00094B F5 0A            [12]  642 	mov	(_milliseconds + 1),a
      00094D F5 0B            [12]  643 	mov	(_milliseconds + 2),a
      00094F F5 0C            [12]  644 	mov	(_milliseconds + 3),a
                                    645 ;	lib/ticker.c:21: TIMER0_MODE1_ENABLE;
      000951 53 89 F0         [24]  646 	anl	_TMOD,#0xF0
      000954 43 89 01         [24]  647 	orl	_TMOD,#0x01
                                    648 ;	lib/ticker.c:22: TH0 = th0;
      000957 90 12 B7         [24]  649 	mov	dptr,#_th0
      00095A E4               [12]  650 	clr	a
      00095B 93               [24]  651 	movc	a,@a+dptr
      00095C F5 8C            [12]  652 	mov	_TH0,a
                                    653 ;	lib/ticker.c:23: TL0 = tl0;
      00095E 90 12 B8         [24]  654 	mov	dptr,#_tl0
      000961 E4               [12]  655 	clr	a
      000962 93               [24]  656 	movc	a,@a+dptr
      000963 F5 8A            [12]  657 	mov	_TL0,a
                                    658 ;	lib/ticker.c:24: set_ET0;
      000965 D2 A9            [12]  659 	setb	_ET0
                                    660 ;	lib/ticker.c:25: set_EA;
      000967 D2 AF            [12]  661 	setb	_EA
                                    662 ;	lib/ticker.c:26: set_TR0;
      000969 D2 8C            [12]  663 	setb	_TR0
      00096B 22               [24]  664 	ret
                                    665 ;------------------------------------------------------------
                                    666 ;Allocation info for local variables in function 'millis'
                                    667 ;------------------------------------------------------------
                                    668 ;	lib/../../common/ticker.c:29: dword millis() { return milliseconds; }
                                    669 ;	-----------------------------------------
                                    670 ;	 function millis
                                    671 ;	-----------------------------------------
      00096C                        672 _millis:
      00096C 85 09 82         [24]  673 	mov	dpl,_milliseconds
      00096F 85 0A 83         [24]  674 	mov	dph,(_milliseconds + 1)
      000972 85 0B F0         [24]  675 	mov	b,(_milliseconds + 2)
      000975 E5 0C            [12]  676 	mov	a,(_milliseconds + 3)
      000977 22               [24]  677 	ret
                                    678 ;------------------------------------------------------------
                                    679 ;Allocation info for local variables in function 'delay'
                                    680 ;------------------------------------------------------------
                                    681 ;time                      Allocated to stack - _bp +1
                                    682 ;waitTo                    Allocated to stack - _bp +5
                                    683 ;------------------------------------------------------------
                                    684 ;	lib/../../common/ticker.c:31: void delay(dword time) {
                                    685 ;	-----------------------------------------
                                    686 ;	 function delay
                                    687 ;	-----------------------------------------
      000978                        688 _delay:
      000978 C0 0D            [24]  689 	push	_bp
      00097A 85 81 0D         [24]  690 	mov	_bp,sp
      00097D C0 82            [24]  691 	push	dpl
      00097F C0 83            [24]  692 	push	dph
      000981 C0 F0            [24]  693 	push	b
      000983 C0 E0            [24]  694 	push	acc
      000985 E5 81            [12]  695 	mov	a,sp
      000987 24 04            [12]  696 	add	a,#0x04
      000989 F5 81            [12]  697 	mov	sp,a
                                    698 ;	lib/../../common/ticker.c:32: volatile dword waitTo = millis() + time;
      00098B 12 09 6C         [24]  699 	lcall	_millis
      00098E AA 82            [24]  700 	mov	r2,dpl
      000990 AB 83            [24]  701 	mov	r3,dph
      000992 AE F0            [24]  702 	mov	r6,b
      000994 FF               [12]  703 	mov	r7,a
      000995 A8 0D            [24]  704 	mov	r0,_bp
      000997 08               [12]  705 	inc	r0
      000998 E6               [12]  706 	mov	a,@r0
      000999 2A               [12]  707 	add	a,r2
      00099A FA               [12]  708 	mov	r2,a
      00099B 08               [12]  709 	inc	r0
      00099C E6               [12]  710 	mov	a,@r0
      00099D 3B               [12]  711 	addc	a,r3
      00099E FB               [12]  712 	mov	r3,a
      00099F 08               [12]  713 	inc	r0
      0009A0 E6               [12]  714 	mov	a,@r0
      0009A1 3E               [12]  715 	addc	a,r6
      0009A2 FE               [12]  716 	mov	r6,a
      0009A3 08               [12]  717 	inc	r0
      0009A4 E6               [12]  718 	mov	a,@r0
      0009A5 3F               [12]  719 	addc	a,r7
      0009A6 FF               [12]  720 	mov	r7,a
      0009A7 E5 0D            [12]  721 	mov	a,_bp
      0009A9 24 05            [12]  722 	add	a,#0x05
      0009AB F8               [12]  723 	mov	r0,a
      0009AC A6 02            [24]  724 	mov	@r0,ar2
      0009AE 08               [12]  725 	inc	r0
      0009AF A6 03            [24]  726 	mov	@r0,ar3
      0009B1 08               [12]  727 	inc	r0
      0009B2 A6 06            [24]  728 	mov	@r0,ar6
      0009B4 08               [12]  729 	inc	r0
      0009B5 A6 07            [24]  730 	mov	@r0,ar7
                                    731 ;	lib/../../common/ticker.c:33: while (waitTo > millis())
      0009B7                        732 00101$:
      0009B7 12 09 6C         [24]  733 	lcall	_millis
      0009BA AC 82            [24]  734 	mov	r4,dpl
      0009BC AD 83            [24]  735 	mov	r5,dph
      0009BE AE F0            [24]  736 	mov	r6,b
      0009C0 FF               [12]  737 	mov	r7,a
      0009C1 E5 0D            [12]  738 	mov	a,_bp
      0009C3 24 05            [12]  739 	add	a,#0x05
      0009C5 F8               [12]  740 	mov	r0,a
      0009C6 C3               [12]  741 	clr	c
      0009C7 EC               [12]  742 	mov	a,r4
      0009C8 96               [12]  743 	subb	a,@r0
      0009C9 ED               [12]  744 	mov	a,r5
      0009CA 08               [12]  745 	inc	r0
      0009CB 96               [12]  746 	subb	a,@r0
      0009CC EE               [12]  747 	mov	a,r6
      0009CD 08               [12]  748 	inc	r0
      0009CE 96               [12]  749 	subb	a,@r0
      0009CF EF               [12]  750 	mov	a,r7
      0009D0 08               [12]  751 	inc	r0
      0009D1 96               [12]  752 	subb	a,@r0
      0009D2 40 E3            [24]  753 	jc	00101$
      0009D4 85 0D 81         [24]  754 	mov	sp,_bp
      0009D7 D0 0D            [24]  755 	pop	_bp
      0009D9 22               [24]  756 	ret
                                    757 ;------------------------------------------------------------
                                    758 ;Allocation info for local variables in function 'pulseIn'
                                    759 ;------------------------------------------------------------
                                    760 ;timeOut                   Allocated to stack - _bp -6
                                    761 ;value                     Allocated to registers b0 
                                    762 ;pin                       Allocated to registers r7 
                                    763 ;start                     Allocated to stack - _bp +1
                                    764 ;------------------------------------------------------------
                                    765 ;	lib/../../common/ticker.c:37: dword pulseIn(byte pin, bool value, dword timeOut) {
                                    766 ;	-----------------------------------------
                                    767 ;	 function pulseIn
                                    768 ;	-----------------------------------------
      0009DA                        769 _pulseIn:
      0009DA C0 0D            [24]  770 	push	_bp
      0009DC E5 81            [12]  771 	mov	a,sp
      0009DE F5 0D            [12]  772 	mov	_bp,a
      0009E0 24 04            [12]  773 	add	a,#0x04
      0009E2 F5 81            [12]  774 	mov	sp,a
      0009E4 AF 82            [24]  775 	mov	r7,dpl
                                    776 ;	lib/../../common/ticker.c:38: volatile dword start = millis();
      0009E6 C0 07            [24]  777 	push	ar7
      0009E8 C0 20            [24]  778 	push	bits
      0009EA 12 09 6C         [24]  779 	lcall	_millis
      0009ED AB 82            [24]  780 	mov	r3,dpl
      0009EF AC 83            [24]  781 	mov	r4,dph
      0009F1 AD F0            [24]  782 	mov	r5,b
      0009F3 FE               [12]  783 	mov	r6,a
      0009F4 D0 20            [24]  784 	pop	bits
      0009F6 D0 07            [24]  785 	pop	ar7
      0009F8 A8 0D            [24]  786 	mov	r0,_bp
      0009FA 08               [12]  787 	inc	r0
      0009FB A6 03            [24]  788 	mov	@r0,ar3
      0009FD 08               [12]  789 	inc	r0
      0009FE A6 04            [24]  790 	mov	@r0,ar4
      000A00 08               [12]  791 	inc	r0
      000A01 A6 05            [24]  792 	mov	@r0,ar5
      000A03 08               [12]  793 	inc	r0
      000A04 A6 06            [24]  794 	mov	@r0,ar6
                                    795 ;	lib/../../common/ticker.c:39: while (digitalRead(pin) != value) {
      000A06                        796 00103$:
      000A06 8F 82            [24]  797 	mov	dpl,r7
      000A08 C0 07            [24]  798 	push	ar7
      000A0A C0 20            [24]  799 	push	bits
      000A0C 12 04 72         [24]  800 	lcall	_digitalRead
      000A0F AE 82            [24]  801 	mov	r6,dpl
      000A11 D0 20            [24]  802 	pop	bits
      000A13 D0 07            [24]  803 	pop	ar7
      000A15 A2 00            [12]  804 	mov	c,b0
      000A17 E4               [12]  805 	clr	a
      000A18 33               [12]  806 	rlc	a
      000A19 FD               [12]  807 	mov	r5,a
      000A1A EE               [12]  808 	mov	a,r6
      000A1B B5 05 02         [24]  809 	cjne	a,ar5,00117$
      000A1E 80 49            [24]  810 	sjmp	00105$
      000A20                        811 00117$:
                                    812 ;	lib/../../common/ticker.c:40: if (millis() - start > timeOut)
      000A20 C0 07            [24]  813 	push	ar7
      000A22 C0 20            [24]  814 	push	bits
      000A24 12 09 6C         [24]  815 	lcall	_millis
      000A27 AB 82            [24]  816 	mov	r3,dpl
      000A29 AC 83            [24]  817 	mov	r4,dph
      000A2B AD F0            [24]  818 	mov	r5,b
      000A2D FE               [12]  819 	mov	r6,a
      000A2E D0 20            [24]  820 	pop	bits
      000A30 D0 07            [24]  821 	pop	ar7
      000A32 A8 0D            [24]  822 	mov	r0,_bp
      000A34 08               [12]  823 	inc	r0
      000A35 EB               [12]  824 	mov	a,r3
      000A36 C3               [12]  825 	clr	c
      000A37 96               [12]  826 	subb	a,@r0
      000A38 FB               [12]  827 	mov	r3,a
      000A39 EC               [12]  828 	mov	a,r4
      000A3A 08               [12]  829 	inc	r0
      000A3B 96               [12]  830 	subb	a,@r0
      000A3C FC               [12]  831 	mov	r4,a
      000A3D ED               [12]  832 	mov	a,r5
      000A3E 08               [12]  833 	inc	r0
      000A3F 96               [12]  834 	subb	a,@r0
      000A40 FD               [12]  835 	mov	r5,a
      000A41 EE               [12]  836 	mov	a,r6
      000A42 08               [12]  837 	inc	r0
      000A43 96               [12]  838 	subb	a,@r0
      000A44 FE               [12]  839 	mov	r6,a
      000A45 E5 0D            [12]  840 	mov	a,_bp
      000A47 24 FA            [12]  841 	add	a,#0xfa
      000A49 F8               [12]  842 	mov	r0,a
      000A4A C3               [12]  843 	clr	c
      000A4B E6               [12]  844 	mov	a,@r0
      000A4C 9B               [12]  845 	subb	a,r3
      000A4D 08               [12]  846 	inc	r0
      000A4E E6               [12]  847 	mov	a,@r0
      000A4F 9C               [12]  848 	subb	a,r4
      000A50 08               [12]  849 	inc	r0
      000A51 E6               [12]  850 	mov	a,@r0
      000A52 9D               [12]  851 	subb	a,r5
      000A53 08               [12]  852 	inc	r0
      000A54 E6               [12]  853 	mov	a,@r0
      000A55 9E               [12]  854 	subb	a,r6
      000A56 50 AE            [24]  855 	jnc	00103$
                                    856 ;	lib/../../common/ticker.c:41: return timeOut;
      000A58 E5 0D            [12]  857 	mov	a,_bp
      000A5A 24 FA            [12]  858 	add	a,#0xfa
      000A5C F8               [12]  859 	mov	r0,a
      000A5D 86 82            [24]  860 	mov	dpl,@r0
      000A5F 08               [12]  861 	inc	r0
      000A60 86 83            [24]  862 	mov	dph,@r0
      000A62 08               [12]  863 	inc	r0
      000A63 86 F0            [24]  864 	mov	b,@r0
      000A65 08               [12]  865 	inc	r0
      000A66 E6               [12]  866 	mov	a,@r0
      000A67 80 23            [24]  867 	sjmp	00106$
      000A69                        868 00105$:
                                    869 ;	lib/../../common/ticker.c:43: return millis() - start;
      000A69 12 09 6C         [24]  870 	lcall	_millis
      000A6C AC 82            [24]  871 	mov	r4,dpl
      000A6E AD 83            [24]  872 	mov	r5,dph
      000A70 AE F0            [24]  873 	mov	r6,b
      000A72 FF               [12]  874 	mov	r7,a
      000A73 A8 0D            [24]  875 	mov	r0,_bp
      000A75 08               [12]  876 	inc	r0
      000A76 EC               [12]  877 	mov	a,r4
      000A77 C3               [12]  878 	clr	c
      000A78 96               [12]  879 	subb	a,@r0
      000A79 FC               [12]  880 	mov	r4,a
      000A7A ED               [12]  881 	mov	a,r5
      000A7B 08               [12]  882 	inc	r0
      000A7C 96               [12]  883 	subb	a,@r0
      000A7D FD               [12]  884 	mov	r5,a
      000A7E EE               [12]  885 	mov	a,r6
      000A7F 08               [12]  886 	inc	r0
      000A80 96               [12]  887 	subb	a,@r0
      000A81 FE               [12]  888 	mov	r6,a
      000A82 EF               [12]  889 	mov	a,r7
      000A83 08               [12]  890 	inc	r0
      000A84 96               [12]  891 	subb	a,@r0
      000A85 FF               [12]  892 	mov	r7,a
      000A86 8C 82            [24]  893 	mov	dpl,r4
      000A88 8D 83            [24]  894 	mov	dph,r5
      000A8A 8E F0            [24]  895 	mov	b,r6
      000A8C                        896 00106$:
      000A8C 85 0D 81         [24]  897 	mov	sp,_bp
      000A8F D0 0D            [24]  898 	pop	_bp
      000A91 22               [24]  899 	ret
                                    900 ;------------------------------------------------------------
                                    901 ;Allocation info for local variables in function 'shiftOut'
                                    902 ;------------------------------------------------------------
                                    903 ;clockPin                  Allocated to stack - _bp -3
                                    904 ;bitOrder                  Allocated to stack - _bp -4
                                    905 ;value                     Allocated to stack - _bp -5
                                    906 ;dataPin                   Allocated to registers r7 
                                    907 ;bit                       Allocated to registers b0 
                                    908 ;i                         Allocated to registers r6 
                                    909 ;j                         Allocated to registers r5 
                                    910 ;------------------------------------------------------------
                                    911 ;	lib/../../common/ticker.c:46: void shiftOut(byte dataPin, byte clockPin, byte bitOrder, byte value) {
                                    912 ;	-----------------------------------------
                                    913 ;	 function shiftOut
                                    914 ;	-----------------------------------------
      000A92                        915 _shiftOut:
      000A92 C0 0D            [24]  916 	push	_bp
      000A94 85 81 0D         [24]  917 	mov	_bp,sp
      000A97 AF 82            [24]  918 	mov	r7,dpl
                                    919 ;	lib/../../common/ticker.c:49: digitalWrite(clockPin, 0);
      000A99 C0 07            [24]  920 	push	ar7
      000A9B E4               [12]  921 	clr	a
      000A9C C0 E0            [24]  922 	push	acc
      000A9E E5 0D            [12]  923 	mov	a,_bp
      000AA0 24 FD            [12]  924 	add	a,#0xfd
      000AA2 F8               [12]  925 	mov	r0,a
      000AA3 86 82            [24]  926 	mov	dpl,@r0
      000AA5 12 04 DE         [24]  927 	lcall	_digitalWrite
      000AA8 15 81            [12]  928 	dec	sp
                                    929 ;	lib/../../common/ticker.c:50: delay(1);
      000AAA 90 00 01         [24]  930 	mov	dptr,#(0x01&0x00ff)
      000AAD E4               [12]  931 	clr	a
      000AAE F5 F0            [12]  932 	mov	b,a
      000AB0 12 09 78         [24]  933 	lcall	_delay
      000AB3 D0 07            [24]  934 	pop	ar7
                                    935 ;	lib/../../common/ticker.c:51: for (i = 0; i < 8; i++) {
      000AB5 7E 00            [12]  936 	mov	r6,#0x00
      000AB7                        937 00109$:
                                    938 ;	lib/../../common/ticker.c:52: if (bitOrder) { // msb
      000AB7 E5 0D            [12]  939 	mov	a,_bp
      000AB9 24 FC            [12]  940 	add	a,#0xfc
      000ABB F8               [12]  941 	mov	r0,a
      000ABC E6               [12]  942 	mov	a,@r0
      000ABD 60 17            [24]  943 	jz	00102$
                                    944 ;	lib/../../common/ticker.c:53: bit = bitRead(value, i);
      000ABF 8E F0            [24]  945 	mov	b,r6
      000AC1 05 F0            [12]  946 	inc	b
      000AC3 E5 0D            [12]  947 	mov	a,_bp
      000AC5 24 FB            [12]  948 	add	a,#0xfb
      000AC7 F8               [12]  949 	mov	r0,a
      000AC8 E6               [12]  950 	mov	a,@r0
      000AC9 80 02            [24]  951 	sjmp	00128$
      000ACB                        952 00127$:
      000ACB C3               [12]  953 	clr	c
      000ACC 13               [12]  954 	rrc	a
      000ACD                        955 00128$:
      000ACD D5 F0 FB         [24]  956 	djnz	b,00127$
      000AD0 FD               [12]  957 	mov	r5,a
      000AD1 13               [12]  958 	rrc	a
      000AD2 92 00            [24]  959 	mov	b0,c
      000AD4 80 21            [24]  960 	sjmp	00103$
      000AD6                        961 00102$:
                                    962 ;	lib/../../common/ticker.c:55: bit = bitRead(value, (7 - i));
      000AD6 8E 04            [24]  963 	mov	ar4,r6
      000AD8 7D 00            [12]  964 	mov	r5,#0x00
      000ADA 74 07            [12]  965 	mov	a,#0x07
      000ADC C3               [12]  966 	clr	c
      000ADD 9C               [12]  967 	subb	a,r4
      000ADE FC               [12]  968 	mov	r4,a
      000ADF E4               [12]  969 	clr	a
      000AE0 9D               [12]  970 	subb	a,r5
      000AE1 FD               [12]  971 	mov	r5,a
      000AE2 8C F0            [24]  972 	mov	b,r4
      000AE4 05 F0            [12]  973 	inc	b
      000AE6 E5 0D            [12]  974 	mov	a,_bp
      000AE8 24 FB            [12]  975 	add	a,#0xfb
      000AEA F8               [12]  976 	mov	r0,a
      000AEB E6               [12]  977 	mov	a,@r0
      000AEC 80 02            [24]  978 	sjmp	00130$
      000AEE                        979 00129$:
      000AEE C3               [12]  980 	clr	c
      000AEF 13               [12]  981 	rrc	a
      000AF0                        982 00130$:
      000AF0 D5 F0 FB         [24]  983 	djnz	b,00129$
      000AF3 FC               [12]  984 	mov	r4,a
      000AF4 13               [12]  985 	rrc	a
      000AF5 92 00            [24]  986 	mov	b0,c
      000AF7                        987 00103$:
                                    988 ;	lib/../../common/ticker.c:57: digitalWrite(dataPin, bit);
      000AF7 A2 00            [12]  989 	mov	c,b0
      000AF9 E4               [12]  990 	clr	a
      000AFA 33               [12]  991 	rlc	a
      000AFB FD               [12]  992 	mov	r5,a
      000AFC C0 07            [24]  993 	push	ar7
      000AFE C0 06            [24]  994 	push	ar6
      000B00 C0 05            [24]  995 	push	ar5
      000B02 8F 82            [24]  996 	mov	dpl,r7
      000B04 12 04 DE         [24]  997 	lcall	_digitalWrite
      000B07 15 81            [12]  998 	dec	sp
                                    999 ;	lib/../../common/ticker.c:58: digitalWrite(clockPin, 1);
      000B09 74 01            [12] 1000 	mov	a,#0x01
      000B0B C0 E0            [24] 1001 	push	acc
      000B0D E5 0D            [12] 1002 	mov	a,_bp
      000B0F 24 FD            [12] 1003 	add	a,#0xfd
      000B11 F8               [12] 1004 	mov	r0,a
      000B12 86 82            [24] 1005 	mov	dpl,@r0
      000B14 12 04 DE         [24] 1006 	lcall	_digitalWrite
      000B17 15 81            [12] 1007 	dec	sp
      000B19 D0 06            [24] 1008 	pop	ar6
      000B1B D0 07            [24] 1009 	pop	ar7
                                   1010 ;	lib/../../common/ticker.c:59: for (j = 0; j < 4; j++)
      000B1D 7D 04            [12] 1011 	mov	r5,#0x04
      000B1F                       1012 00108$:
      000B1F 8D 04            [24] 1013 	mov	ar4,r5
      000B21 1C               [12] 1014 	dec	r4
      000B22 EC               [12] 1015 	mov	a,r4
      000B23 FD               [12] 1016 	mov	r5,a
      000B24 70 F9            [24] 1017 	jnz	00108$
                                   1018 ;	lib/../../common/ticker.c:61: digitalWrite(clockPin, 0);
      000B26 C0 07            [24] 1019 	push	ar7
      000B28 C0 06            [24] 1020 	push	ar6
      000B2A E4               [12] 1021 	clr	a
      000B2B C0 E0            [24] 1022 	push	acc
      000B2D E5 0D            [12] 1023 	mov	a,_bp
      000B2F 24 FD            [12] 1024 	add	a,#0xfd
      000B31 F8               [12] 1025 	mov	r0,a
      000B32 86 82            [24] 1026 	mov	dpl,@r0
      000B34 12 04 DE         [24] 1027 	lcall	_digitalWrite
      000B37 15 81            [12] 1028 	dec	sp
      000B39 D0 06            [24] 1029 	pop	ar6
      000B3B D0 07            [24] 1030 	pop	ar7
                                   1031 ;	lib/../../common/ticker.c:51: for (i = 0; i < 8; i++) {
      000B3D 0E               [12] 1032 	inc	r6
      000B3E BE 08 00         [24] 1033 	cjne	r6,#0x08,00132$
      000B41                       1034 00132$:
      000B41 50 03            [24] 1035 	jnc	00133$
      000B43 02 0A B7         [24] 1036 	ljmp	00109$
      000B46                       1037 00133$:
      000B46 D0 0D            [24] 1038 	pop	_bp
      000B48 22               [24] 1039 	ret
                                   1040 ;------------------------------------------------------------
                                   1041 ;Allocation info for local variables in function 'shiftIn'
                                   1042 ;------------------------------------------------------------
                                   1043 ;clockPin                  Allocated to stack - _bp -3
                                   1044 ;bitOrder                  Allocated to stack - _bp -4
                                   1045 ;dataPin                   Allocated to registers r7 
                                   1046 ;res                       Allocated to registers r6 
                                   1047 ;i                         Allocated to registers r5 
                                   1048 ;------------------------------------------------------------
                                   1049 ;	lib/../../common/ticker.c:65: byte shiftIn(byte dataPin, byte clockPin, byte bitOrder) {
                                   1050 ;	-----------------------------------------
                                   1051 ;	 function shiftIn
                                   1052 ;	-----------------------------------------
      000B49                       1053 _shiftIn:
      000B49 C0 0D            [24] 1054 	push	_bp
      000B4B 85 81 0D         [24] 1055 	mov	_bp,sp
      000B4E AF 82            [24] 1056 	mov	r7,dpl
                                   1057 ;	lib/../../common/ticker.c:66: byte res = 0;
      000B50 7E 00            [12] 1058 	mov	r6,#0x00
                                   1059 ;	lib/../../common/ticker.c:69: while (digitalRead(clockPin) != 1)
      000B52 7D 00            [12] 1060 	mov	r5,#0x00
      000B54                       1061 00101$:
      000B54 E5 0D            [12] 1062 	mov	a,_bp
      000B56 24 FD            [12] 1063 	add	a,#0xfd
      000B58 F8               [12] 1064 	mov	r0,a
      000B59 86 82            [24] 1065 	mov	dpl,@r0
      000B5B C0 07            [24] 1066 	push	ar7
      000B5D C0 06            [24] 1067 	push	ar6
      000B5F C0 05            [24] 1068 	push	ar5
      000B61 12 04 72         [24] 1069 	lcall	_digitalRead
      000B64 AC 82            [24] 1070 	mov	r4,dpl
      000B66 D0 05            [24] 1071 	pop	ar5
      000B68 D0 06            [24] 1072 	pop	ar6
      000B6A D0 07            [24] 1073 	pop	ar7
      000B6C BC 01 E5         [24] 1074 	cjne	r4,#0x01,00101$
                                   1075 ;	lib/../../common/ticker.c:71: if (bitOrder) { // msb
      000B6F E5 0D            [12] 1076 	mov	a,_bp
      000B71 24 FC            [12] 1077 	add	a,#0xfc
      000B73 F8               [12] 1078 	mov	r0,a
      000B74 E6               [12] 1079 	mov	a,@r0
      000B75 60 3A            [24] 1080 	jz	00111$
                                   1081 ;	lib/../../common/ticker.c:72: bitWrite(res, i, digitalRead(dataPin));
      000B77 8F 82            [24] 1082 	mov	dpl,r7
      000B79 C0 07            [24] 1083 	push	ar7
      000B7B C0 06            [24] 1084 	push	ar6
      000B7D C0 05            [24] 1085 	push	ar5
      000B7F 12 04 72         [24] 1086 	lcall	_digitalRead
      000B82 E5 82            [12] 1087 	mov	a,dpl
      000B84 D0 05            [24] 1088 	pop	ar5
      000B86 D0 06            [24] 1089 	pop	ar6
      000B88 D0 07            [24] 1090 	pop	ar7
      000B8A 60 12            [24] 1091 	jz	00105$
      000B8C 8D F0            [24] 1092 	mov	b,r5
      000B8E 05 F0            [12] 1093 	inc	b
      000B90 74 01            [12] 1094 	mov	a,#0x01
      000B92 80 02            [24] 1095 	sjmp	00152$
      000B94                       1096 00150$:
      000B94 25 E0            [12] 1097 	add	a,acc
      000B96                       1098 00152$:
      000B96 D5 F0 FB         [24] 1099 	djnz	b,00150$
      000B99 FC               [12] 1100 	mov	r4,a
      000B9A 42 06            [12] 1101 	orl	ar6,a
      000B9C 80 55            [24] 1102 	sjmp	00113$
      000B9E                       1103 00105$:
      000B9E 8D F0            [24] 1104 	mov	b,r5
      000BA0 05 F0            [12] 1105 	inc	b
      000BA2 74 01            [12] 1106 	mov	a,#0x01
      000BA4 80 02            [24] 1107 	sjmp	00155$
      000BA6                       1108 00153$:
      000BA6 25 E0            [12] 1109 	add	a,acc
      000BA8                       1110 00155$:
      000BA8 D5 F0 FB         [24] 1111 	djnz	b,00153$
      000BAB F4               [12] 1112 	cpl	a
      000BAC FC               [12] 1113 	mov	r4,a
      000BAD 52 06            [12] 1114 	anl	ar6,a
      000BAF 80 42            [24] 1115 	sjmp	00113$
      000BB1                       1116 00111$:
                                   1117 ;	lib/../../common/ticker.c:74: bitWrite(res, (7 - i), digitalRead(dataPin));
      000BB1 8F 82            [24] 1118 	mov	dpl,r7
      000BB3 C0 07            [24] 1119 	push	ar7
      000BB5 C0 06            [24] 1120 	push	ar6
      000BB7 C0 05            [24] 1121 	push	ar5
      000BB9 12 04 72         [24] 1122 	lcall	_digitalRead
      000BBC E5 82            [12] 1123 	mov	a,dpl
      000BBE D0 05            [24] 1124 	pop	ar5
      000BC0 D0 06            [24] 1125 	pop	ar6
      000BC2 D0 07            [24] 1126 	pop	ar7
      000BC4 60 17            [24] 1127 	jz	00108$
      000BC6 74 07            [12] 1128 	mov	a,#0x07
      000BC8 C3               [12] 1129 	clr	c
      000BC9 9D               [12] 1130 	subb	a,r5
      000BCA FC               [12] 1131 	mov	r4,a
      000BCB 8C F0            [24] 1132 	mov	b,r4
      000BCD 05 F0            [12] 1133 	inc	b
      000BCF 74 01            [12] 1134 	mov	a,#0x01
      000BD1 80 02            [24] 1135 	sjmp	00159$
      000BD3                       1136 00157$:
      000BD3 25 E0            [12] 1137 	add	a,acc
      000BD5                       1138 00159$:
      000BD5 D5 F0 FB         [24] 1139 	djnz	b,00157$
      000BD8 FC               [12] 1140 	mov	r4,a
      000BD9 42 06            [12] 1141 	orl	ar6,a
      000BDB 80 16            [24] 1142 	sjmp	00113$
      000BDD                       1143 00108$:
      000BDD 74 07            [12] 1144 	mov	a,#0x07
      000BDF C3               [12] 1145 	clr	c
      000BE0 9D               [12] 1146 	subb	a,r5
      000BE1 FC               [12] 1147 	mov	r4,a
      000BE2 8C F0            [24] 1148 	mov	b,r4
      000BE4 05 F0            [12] 1149 	inc	b
      000BE6 74 01            [12] 1150 	mov	a,#0x01
      000BE8 80 02            [24] 1151 	sjmp	00162$
      000BEA                       1152 00160$:
      000BEA 25 E0            [12] 1153 	add	a,acc
      000BEC                       1154 00162$:
      000BEC D5 F0 FB         [24] 1155 	djnz	b,00160$
      000BEF F4               [12] 1156 	cpl	a
      000BF0 FC               [12] 1157 	mov	r4,a
      000BF1 52 06            [12] 1158 	anl	ar6,a
                                   1159 ;	lib/../../common/ticker.c:76: while (digitalRead(clockPin) == 0)
      000BF3                       1160 00113$:
      000BF3 E5 0D            [12] 1161 	mov	a,_bp
      000BF5 24 FD            [12] 1162 	add	a,#0xfd
      000BF7 F8               [12] 1163 	mov	r0,a
      000BF8 86 82            [24] 1164 	mov	dpl,@r0
      000BFA C0 07            [24] 1165 	push	ar7
      000BFC C0 06            [24] 1166 	push	ar6
      000BFE C0 05            [24] 1167 	push	ar5
      000C00 12 04 72         [24] 1168 	lcall	_digitalRead
      000C03 E5 82            [12] 1169 	mov	a,dpl
      000C05 D0 05            [24] 1170 	pop	ar5
      000C07 D0 06            [24] 1171 	pop	ar6
      000C09 D0 07            [24] 1172 	pop	ar7
      000C0B 60 E6            [24] 1173 	jz	00113$
                                   1174 ;	lib/../../common/ticker.c:68: for (i = 0; i < 8; i++) {
      000C0D 0D               [12] 1175 	inc	r5
      000C0E BD 08 00         [24] 1176 	cjne	r5,#0x08,00164$
      000C11                       1177 00164$:
      000C11 50 03            [24] 1178 	jnc	00165$
      000C13 02 0B 54         [24] 1179 	ljmp	00101$
      000C16                       1180 00165$:
                                   1181 ;	lib/../../common/ticker.c:79: return res;
      000C16 8E 82            [24] 1182 	mov	dpl,r6
      000C18 D0 0D            [24] 1183 	pop	_bp
      000C1A 22               [24] 1184 	ret
                                   1185 	.area CSEG    (CODE)
                                   1186 	.area CONST   (CODE)
      0012B7                       1187 _th0:
      0012B7 FA                    1188 	.db #0xFA	; 250
      0012B8                       1189 _tl0:
      0012B8 CA                    1190 	.db #0xCA	; 202
                                   1191 	.area XINIT   (CODE)
                                   1192 	.area CABS    (ABS,CODE)
