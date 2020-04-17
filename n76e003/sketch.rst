                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Apr  3 2018) (Linux)
                                      4 ; This file was generated Fri Apr 17 19:40:49 2020
                                      5 ;--------------------------------------------------------
                                      6 	.module sketch
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _uprintf
                                     13 	.globl _SerialBegin
                                     14 	.globl _delay
                                     15 	.globl _analogWrite
                                     16 	.globl _analogRead
                                     17 	.globl _digitalWrite
                                     18 	.globl _pinMode
                                     19 	.globl _MOSI
                                     20 	.globl _P00
                                     21 	.globl _MISO
                                     22 	.globl _P01
                                     23 	.globl _RXD_1
                                     24 	.globl _P02
                                     25 	.globl _P03
                                     26 	.globl _STADC
                                     27 	.globl _P04
                                     28 	.globl _P05
                                     29 	.globl _TXD
                                     30 	.globl _P06
                                     31 	.globl _RXD
                                     32 	.globl _P07
                                     33 	.globl _IT0
                                     34 	.globl _IE0
                                     35 	.globl _IT1
                                     36 	.globl _IE1
                                     37 	.globl _TR0
                                     38 	.globl _TF0
                                     39 	.globl _TR1
                                     40 	.globl _TF1
                                     41 	.globl _P10
                                     42 	.globl _P11
                                     43 	.globl _P12
                                     44 	.globl _SCL
                                     45 	.globl _P13
                                     46 	.globl _SDA
                                     47 	.globl _P14
                                     48 	.globl _P15
                                     49 	.globl _TXD_1
                                     50 	.globl _P16
                                     51 	.globl _P17
                                     52 	.globl _RI
                                     53 	.globl _TI
                                     54 	.globl _RB8
                                     55 	.globl _TB8
                                     56 	.globl _REN
                                     57 	.globl _SM2
                                     58 	.globl _SM1
                                     59 	.globl _FE
                                     60 	.globl _SM0
                                     61 	.globl _P20
                                     62 	.globl _EX0
                                     63 	.globl _ET0
                                     64 	.globl _EX1
                                     65 	.globl _ET1
                                     66 	.globl _ES
                                     67 	.globl _EBOD
                                     68 	.globl _EADC
                                     69 	.globl _EA
                                     70 	.globl _P30
                                     71 	.globl _PX0
                                     72 	.globl _PT0
                                     73 	.globl _PX1
                                     74 	.globl _PT1
                                     75 	.globl _PS
                                     76 	.globl _PBOD
                                     77 	.globl _PADC
                                     78 	.globl _I2CPX
                                     79 	.globl _AA
                                     80 	.globl _SI
                                     81 	.globl _STO
                                     82 	.globl _STA
                                     83 	.globl _I2CEN
                                     84 	.globl _CM_RL2
                                     85 	.globl _TR2
                                     86 	.globl _TF2
                                     87 	.globl _P
                                     88 	.globl _OV
                                     89 	.globl _RS0
                                     90 	.globl _RS1
                                     91 	.globl _F0
                                     92 	.globl _AC
                                     93 	.globl _CY
                                     94 	.globl _CLRPWM
                                     95 	.globl _PWMF
                                     96 	.globl _LOAD
                                     97 	.globl _PWMRUN
                                     98 	.globl _ADCHS0
                                     99 	.globl _ADCHS1
                                    100 	.globl _ADCHS2
                                    101 	.globl _ADCHS3
                                    102 	.globl _ETGSEL0
                                    103 	.globl _ETGSEL1
                                    104 	.globl _ADCS
                                    105 	.globl _ADCF
                                    106 	.globl _RI_1
                                    107 	.globl _TI_1
                                    108 	.globl _RB8_1
                                    109 	.globl _TB8_1
                                    110 	.globl _REN_1
                                    111 	.globl _SM2_1
                                    112 	.globl _SM1_1
                                    113 	.globl _FE_1
                                    114 	.globl _SM0_1
                                    115 	.globl _EIPH1
                                    116 	.globl _EIP1
                                    117 	.globl _PMD
                                    118 	.globl _PMEN
                                    119 	.globl _PDTCNT
                                    120 	.globl _PDTEN
                                    121 	.globl _SCON_1
                                    122 	.globl _EIPH
                                    123 	.globl _AINDIDS
                                    124 	.globl _SPDR
                                    125 	.globl _SPSR
                                    126 	.globl _SPCR2
                                    127 	.globl _SPCR
                                    128 	.globl _CAPCON4
                                    129 	.globl _CAPCON3
                                    130 	.globl _B
                                    131 	.globl _EIP
                                    132 	.globl _C2H
                                    133 	.globl _C2L
                                    134 	.globl _PIF
                                    135 	.globl _PIPEN
                                    136 	.globl _PINEN
                                    137 	.globl _PICON
                                    138 	.globl _ADCCON0
                                    139 	.globl _C1H
                                    140 	.globl _C1L
                                    141 	.globl _C0H
                                    142 	.globl _C0L
                                    143 	.globl _ADCDLY
                                    144 	.globl _ADCCON2
                                    145 	.globl _ADCCON1
                                    146 	.globl _ACC
                                    147 	.globl _PWMCON1
                                    148 	.globl _PIOCON0
                                    149 	.globl _PWM3L
                                    150 	.globl _PWM2L
                                    151 	.globl _PWM1L
                                    152 	.globl _PWM0L
                                    153 	.globl _PWMPL
                                    154 	.globl _PWMCON0
                                    155 	.globl _FBD
                                    156 	.globl _PNP
                                    157 	.globl _PWM3H
                                    158 	.globl _PWM2H
                                    159 	.globl _PWM1H
                                    160 	.globl _PWM0H
                                    161 	.globl _PWMPH
                                    162 	.globl _PSW
                                    163 	.globl _ADCMPH
                                    164 	.globl _ADCMPL
                                    165 	.globl _PWM5L
                                    166 	.globl _TH2
                                    167 	.globl _PWM4L
                                    168 	.globl _TL2
                                    169 	.globl _RCMP2H
                                    170 	.globl _RCMP2L
                                    171 	.globl _T2MOD
                                    172 	.globl _T2CON
                                    173 	.globl _TA
                                    174 	.globl _PIOCON1
                                    175 	.globl _RH3
                                    176 	.globl _PWM5H
                                    177 	.globl _RL3
                                    178 	.globl _PWM4H
                                    179 	.globl _T3CON
                                    180 	.globl _ADCRH
                                    181 	.globl _ADCRL
                                    182 	.globl _I2ADDR
                                    183 	.globl _I2CON
                                    184 	.globl _I2TOC
                                    185 	.globl _I2CLK
                                    186 	.globl _I2STAT
                                    187 	.globl _I2DAT
                                    188 	.globl _SADDR_1
                                    189 	.globl _SADEN_1
                                    190 	.globl _SADEN
                                    191 	.globl _IP
                                    192 	.globl _PWMINTC
                                    193 	.globl _IPH
                                    194 	.globl _P2S
                                    195 	.globl _P1SR
                                    196 	.globl _P1M2
                                    197 	.globl _P1S
                                    198 	.globl _P1M1
                                    199 	.globl _P0SR
                                    200 	.globl _P0M2
                                    201 	.globl _P0S
                                    202 	.globl _P0M1
                                    203 	.globl _P3
                                    204 	.globl _IAPCN
                                    205 	.globl _IAPFD
                                    206 	.globl _P3SR
                                    207 	.globl _P3M2
                                    208 	.globl _P3S
                                    209 	.globl _P3M1
                                    210 	.globl _BODCON1
                                    211 	.globl _WDCON
                                    212 	.globl _SADDR
                                    213 	.globl _IE
                                    214 	.globl _IAPAH
                                    215 	.globl _IAPAL
                                    216 	.globl _IAPUEN
                                    217 	.globl _IAPTRG
                                    218 	.globl _BODCON0
                                    219 	.globl _AUXR1
                                    220 	.globl _P2
                                    221 	.globl _CHPCON
                                    222 	.globl _EIE1
                                    223 	.globl _EIE
                                    224 	.globl _SBUF_1
                                    225 	.globl _SBUF
                                    226 	.globl _SCON
                                    227 	.globl _CKEN
                                    228 	.globl _CKSWT
                                    229 	.globl _CKDIV
                                    230 	.globl _CAPCON2
                                    231 	.globl _CAPCON1
                                    232 	.globl _CAPCON0
                                    233 	.globl _SFRS
                                    234 	.globl _P1
                                    235 	.globl _WKCON
                                    236 	.globl _CKCON
                                    237 	.globl _TH1
                                    238 	.globl _TH0
                                    239 	.globl _TL1
                                    240 	.globl _TL0
                                    241 	.globl _TMOD
                                    242 	.globl _TCON
                                    243 	.globl _PCON
                                    244 	.globl _RWK
                                    245 	.globl _RCTRIM1
                                    246 	.globl _RCTRIM0
                                    247 	.globl _DPH
                                    248 	.globl _DPL
                                    249 	.globl _SP
                                    250 	.globl _P0
                                    251 	.globl _setup
                                    252 	.globl _loop
                                    253 ;--------------------------------------------------------
                                    254 ; special function registers
                                    255 ;--------------------------------------------------------
                                    256 	.area RSEG    (ABS,DATA)
      000000                        257 	.org 0x0000
                           000080   258 _P0	=	0x0080
                           000081   259 _SP	=	0x0081
                           000082   260 _DPL	=	0x0082
                           000083   261 _DPH	=	0x0083
                           000084   262 _RCTRIM0	=	0x0084
                           000085   263 _RCTRIM1	=	0x0085
                           000086   264 _RWK	=	0x0086
                           000087   265 _PCON	=	0x0087
                           000088   266 _TCON	=	0x0088
                           000089   267 _TMOD	=	0x0089
                           00008A   268 _TL0	=	0x008a
                           00008B   269 _TL1	=	0x008b
                           00008C   270 _TH0	=	0x008c
                           00008D   271 _TH1	=	0x008d
                           00008E   272 _CKCON	=	0x008e
                           00008F   273 _WKCON	=	0x008f
                           000090   274 _P1	=	0x0090
                           000091   275 _SFRS	=	0x0091
                           000092   276 _CAPCON0	=	0x0092
                           000093   277 _CAPCON1	=	0x0093
                           000094   278 _CAPCON2	=	0x0094
                           000095   279 _CKDIV	=	0x0095
                           000096   280 _CKSWT	=	0x0096
                           000097   281 _CKEN	=	0x0097
                           000098   282 _SCON	=	0x0098
                           000099   283 _SBUF	=	0x0099
                           00009A   284 _SBUF_1	=	0x009a
                           00009B   285 _EIE	=	0x009b
                           00009C   286 _EIE1	=	0x009c
                           00009F   287 _CHPCON	=	0x009f
                           0000A0   288 _P2	=	0x00a0
                           0000A2   289 _AUXR1	=	0x00a2
                           0000A3   290 _BODCON0	=	0x00a3
                           0000A4   291 _IAPTRG	=	0x00a4
                           0000A5   292 _IAPUEN	=	0x00a5
                           0000A6   293 _IAPAL	=	0x00a6
                           0000A7   294 _IAPAH	=	0x00a7
                           0000A8   295 _IE	=	0x00a8
                           0000A9   296 _SADDR	=	0x00a9
                           0000AA   297 _WDCON	=	0x00aa
                           0000AB   298 _BODCON1	=	0x00ab
                           0000AC   299 _P3M1	=	0x00ac
                           0000AC   300 _P3S	=	0x00ac
                           0000AD   301 _P3M2	=	0x00ad
                           0000AD   302 _P3SR	=	0x00ad
                           0000AE   303 _IAPFD	=	0x00ae
                           0000AF   304 _IAPCN	=	0x00af
                           0000B0   305 _P3	=	0x00b0
                           0000B1   306 _P0M1	=	0x00b1
                           0000B1   307 _P0S	=	0x00b1
                           0000B2   308 _P0M2	=	0x00b2
                           0000B2   309 _P0SR	=	0x00b2
                           0000B3   310 _P1M1	=	0x00b3
                           0000B3   311 _P1S	=	0x00b3
                           0000B4   312 _P1M2	=	0x00b4
                           0000B4   313 _P1SR	=	0x00b4
                           0000B5   314 _P2S	=	0x00b5
                           0000B7   315 _IPH	=	0x00b7
                           0000B7   316 _PWMINTC	=	0x00b7
                           0000B8   317 _IP	=	0x00b8
                           0000B9   318 _SADEN	=	0x00b9
                           0000BA   319 _SADEN_1	=	0x00ba
                           0000BB   320 _SADDR_1	=	0x00bb
                           0000BC   321 _I2DAT	=	0x00bc
                           0000BD   322 _I2STAT	=	0x00bd
                           0000BE   323 _I2CLK	=	0x00be
                           0000BF   324 _I2TOC	=	0x00bf
                           0000C0   325 _I2CON	=	0x00c0
                           0000C1   326 _I2ADDR	=	0x00c1
                           0000C2   327 _ADCRL	=	0x00c2
                           0000C3   328 _ADCRH	=	0x00c3
                           0000C4   329 _T3CON	=	0x00c4
                           0000C4   330 _PWM4H	=	0x00c4
                           0000C5   331 _RL3	=	0x00c5
                           0000C5   332 _PWM5H	=	0x00c5
                           0000C6   333 _RH3	=	0x00c6
                           0000C6   334 _PIOCON1	=	0x00c6
                           0000C7   335 _TA	=	0x00c7
                           0000C8   336 _T2CON	=	0x00c8
                           0000C9   337 _T2MOD	=	0x00c9
                           0000CA   338 _RCMP2L	=	0x00ca
                           0000CB   339 _RCMP2H	=	0x00cb
                           0000CC   340 _TL2	=	0x00cc
                           0000CC   341 _PWM4L	=	0x00cc
                           0000CD   342 _TH2	=	0x00cd
                           0000CD   343 _PWM5L	=	0x00cd
                           0000CE   344 _ADCMPL	=	0x00ce
                           0000CF   345 _ADCMPH	=	0x00cf
                           0000D0   346 _PSW	=	0x00d0
                           0000D1   347 _PWMPH	=	0x00d1
                           0000D2   348 _PWM0H	=	0x00d2
                           0000D3   349 _PWM1H	=	0x00d3
                           0000D4   350 _PWM2H	=	0x00d4
                           0000D5   351 _PWM3H	=	0x00d5
                           0000D6   352 _PNP	=	0x00d6
                           0000D7   353 _FBD	=	0x00d7
                           0000D8   354 _PWMCON0	=	0x00d8
                           0000D9   355 _PWMPL	=	0x00d9
                           0000DA   356 _PWM0L	=	0x00da
                           0000DB   357 _PWM1L	=	0x00db
                           0000DC   358 _PWM2L	=	0x00dc
                           0000DD   359 _PWM3L	=	0x00dd
                           0000DE   360 _PIOCON0	=	0x00de
                           0000DF   361 _PWMCON1	=	0x00df
                           0000E0   362 _ACC	=	0x00e0
                           0000E1   363 _ADCCON1	=	0x00e1
                           0000E2   364 _ADCCON2	=	0x00e2
                           0000E3   365 _ADCDLY	=	0x00e3
                           0000E4   366 _C0L	=	0x00e4
                           0000E5   367 _C0H	=	0x00e5
                           0000E6   368 _C1L	=	0x00e6
                           0000E7   369 _C1H	=	0x00e7
                           0000E8   370 _ADCCON0	=	0x00e8
                           0000E9   371 _PICON	=	0x00e9
                           0000EA   372 _PINEN	=	0x00ea
                           0000EB   373 _PIPEN	=	0x00eb
                           0000EC   374 _PIF	=	0x00ec
                           0000ED   375 _C2L	=	0x00ed
                           0000EE   376 _C2H	=	0x00ee
                           0000EF   377 _EIP	=	0x00ef
                           0000F0   378 _B	=	0x00f0
                           0000F1   379 _CAPCON3	=	0x00f1
                           0000F2   380 _CAPCON4	=	0x00f2
                           0000F3   381 _SPCR	=	0x00f3
                           0000F3   382 _SPCR2	=	0x00f3
                           0000F4   383 _SPSR	=	0x00f4
                           0000F5   384 _SPDR	=	0x00f5
                           0000F6   385 _AINDIDS	=	0x00f6
                           0000F7   386 _EIPH	=	0x00f7
                           0000F8   387 _SCON_1	=	0x00f8
                           0000F9   388 _PDTEN	=	0x00f9
                           0000FA   389 _PDTCNT	=	0x00fa
                           0000FB   390 _PMEN	=	0x00fb
                           0000FC   391 _PMD	=	0x00fc
                           0000FE   392 _EIP1	=	0x00fe
                           0000FF   393 _EIPH1	=	0x00ff
                                    394 ;--------------------------------------------------------
                                    395 ; special function bits
                                    396 ;--------------------------------------------------------
                                    397 	.area RSEG    (ABS,DATA)
      000000                        398 	.org 0x0000
                           0000FF   399 _SM0_1	=	0x00ff
                           0000FF   400 _FE_1	=	0x00ff
                           0000FE   401 _SM1_1	=	0x00fe
                           0000FD   402 _SM2_1	=	0x00fd
                           0000FC   403 _REN_1	=	0x00fc
                           0000FB   404 _TB8_1	=	0x00fb
                           0000FA   405 _RB8_1	=	0x00fa
                           0000F9   406 _TI_1	=	0x00f9
                           0000F8   407 _RI_1	=	0x00f8
                           0000EF   408 _ADCF	=	0x00ef
                           0000EE   409 _ADCS	=	0x00ee
                           0000ED   410 _ETGSEL1	=	0x00ed
                           0000EC   411 _ETGSEL0	=	0x00ec
                           0000EB   412 _ADCHS3	=	0x00eb
                           0000EA   413 _ADCHS2	=	0x00ea
                           0000E9   414 _ADCHS1	=	0x00e9
                           0000E8   415 _ADCHS0	=	0x00e8
                           0000DF   416 _PWMRUN	=	0x00df
                           0000DE   417 _LOAD	=	0x00de
                           0000DD   418 _PWMF	=	0x00dd
                           0000DC   419 _CLRPWM	=	0x00dc
                           0000D7   420 _CY	=	0x00d7
                           0000D6   421 _AC	=	0x00d6
                           0000D5   422 _F0	=	0x00d5
                           0000D4   423 _RS1	=	0x00d4
                           0000D3   424 _RS0	=	0x00d3
                           0000D2   425 _OV	=	0x00d2
                           0000D0   426 _P	=	0x00d0
                           0000CF   427 _TF2	=	0x00cf
                           0000CA   428 _TR2	=	0x00ca
                           0000C8   429 _CM_RL2	=	0x00c8
                           0000C6   430 _I2CEN	=	0x00c6
                           0000C5   431 _STA	=	0x00c5
                           0000C4   432 _STO	=	0x00c4
                           0000C3   433 _SI	=	0x00c3
                           0000C2   434 _AA	=	0x00c2
                           0000C0   435 _I2CPX	=	0x00c0
                           0000BE   436 _PADC	=	0x00be
                           0000BD   437 _PBOD	=	0x00bd
                           0000BC   438 _PS	=	0x00bc
                           0000BB   439 _PT1	=	0x00bb
                           0000BA   440 _PX1	=	0x00ba
                           0000B9   441 _PT0	=	0x00b9
                           0000B8   442 _PX0	=	0x00b8
                           0000B0   443 _P30	=	0x00b0
                           0000AF   444 _EA	=	0x00af
                           0000AE   445 _EADC	=	0x00ae
                           0000AD   446 _EBOD	=	0x00ad
                           0000AC   447 _ES	=	0x00ac
                           0000AB   448 _ET1	=	0x00ab
                           0000AA   449 _EX1	=	0x00aa
                           0000A9   450 _ET0	=	0x00a9
                           0000A8   451 _EX0	=	0x00a8
                           0000A0   452 _P20	=	0x00a0
                           00009F   453 _SM0	=	0x009f
                           00009F   454 _FE	=	0x009f
                           00009E   455 _SM1	=	0x009e
                           00009D   456 _SM2	=	0x009d
                           00009C   457 _REN	=	0x009c
                           00009B   458 _TB8	=	0x009b
                           00009A   459 _RB8	=	0x009a
                           000099   460 _TI	=	0x0099
                           000098   461 _RI	=	0x0098
                           000097   462 _P17	=	0x0097
                           000096   463 _P16	=	0x0096
                           000096   464 _TXD_1	=	0x0096
                           000095   465 _P15	=	0x0095
                           000094   466 _P14	=	0x0094
                           000094   467 _SDA	=	0x0094
                           000093   468 _P13	=	0x0093
                           000093   469 _SCL	=	0x0093
                           000092   470 _P12	=	0x0092
                           000091   471 _P11	=	0x0091
                           000090   472 _P10	=	0x0090
                           00008F   473 _TF1	=	0x008f
                           00008E   474 _TR1	=	0x008e
                           00008D   475 _TF0	=	0x008d
                           00008C   476 _TR0	=	0x008c
                           00008B   477 _IE1	=	0x008b
                           00008A   478 _IT1	=	0x008a
                           000089   479 _IE0	=	0x0089
                           000088   480 _IT0	=	0x0088
                           000087   481 _P07	=	0x0087
                           000087   482 _RXD	=	0x0087
                           000086   483 _P06	=	0x0086
                           000086   484 _TXD	=	0x0086
                           000085   485 _P05	=	0x0085
                           000084   486 _P04	=	0x0084
                           000084   487 _STADC	=	0x0084
                           000083   488 _P03	=	0x0083
                           000082   489 _P02	=	0x0082
                           000082   490 _RXD_1	=	0x0082
                           000081   491 _P01	=	0x0081
                           000081   492 _MISO	=	0x0081
                           000080   493 _P00	=	0x0080
                           000080   494 _MOSI	=	0x0080
                                    495 ;--------------------------------------------------------
                                    496 ; overlayable register banks
                                    497 ;--------------------------------------------------------
                                    498 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        499 	.ds 8
                                    500 ;--------------------------------------------------------
                                    501 ; internal ram data
                                    502 ;--------------------------------------------------------
                                    503 	.area DSEG    (DATA)
                                    504 ;--------------------------------------------------------
                                    505 ; overlayable items in internal ram 
                                    506 ;--------------------------------------------------------
                                    507 ;--------------------------------------------------------
                                    508 ; indirectly addressable internal ram data
                                    509 ;--------------------------------------------------------
                                    510 	.area ISEG    (DATA)
                                    511 ;--------------------------------------------------------
                                    512 ; absolute internal ram data
                                    513 ;--------------------------------------------------------
                                    514 	.area IABS    (ABS,DATA)
                                    515 	.area IABS    (ABS,DATA)
                                    516 ;--------------------------------------------------------
                                    517 ; bit data
                                    518 ;--------------------------------------------------------
                                    519 	.area BSEG    (BIT)
                                    520 ;--------------------------------------------------------
                                    521 ; paged external ram data
                                    522 ;--------------------------------------------------------
                                    523 	.area PSEG    (PAG,XDATA)
                                    524 ;--------------------------------------------------------
                                    525 ; external ram data
                                    526 ;--------------------------------------------------------
                                    527 	.area XSEG    (XDATA)
                                    528 ;--------------------------------------------------------
                                    529 ; absolute external ram data
                                    530 ;--------------------------------------------------------
                                    531 	.area XABS    (ABS,XDATA)
                                    532 ;--------------------------------------------------------
                                    533 ; external initialized ram data
                                    534 ;--------------------------------------------------------
                                    535 	.area XISEG   (XDATA)
                                    536 	.area HOME    (CODE)
                                    537 	.area GSINIT0 (CODE)
                                    538 	.area GSINIT1 (CODE)
                                    539 	.area GSINIT2 (CODE)
                                    540 	.area GSINIT3 (CODE)
                                    541 	.area GSINIT4 (CODE)
                                    542 	.area GSINIT5 (CODE)
                                    543 	.area GSINIT  (CODE)
                                    544 	.area GSFINAL (CODE)
                                    545 	.area CSEG    (CODE)
                                    546 ;--------------------------------------------------------
                                    547 ; global & static initialisations
                                    548 ;--------------------------------------------------------
                                    549 	.area HOME    (CODE)
                                    550 	.area GSINIT  (CODE)
                                    551 	.area GSFINAL (CODE)
                                    552 	.area GSINIT  (CODE)
                                    553 ;--------------------------------------------------------
                                    554 ; Home
                                    555 ;--------------------------------------------------------
                                    556 	.area HOME    (CODE)
                                    557 	.area HOME    (CODE)
                                    558 ;--------------------------------------------------------
                                    559 ; code
                                    560 ;--------------------------------------------------------
                                    561 	.area CSEG    (CODE)
                                    562 ;------------------------------------------------------------
                                    563 ;Allocation info for local variables in function 'setup'
                                    564 ;------------------------------------------------------------
                                    565 ;	sketch.c:3: void setup() {
                                    566 ;	-----------------------------------------
                                    567 ;	 function setup
                                    568 ;	-----------------------------------------
      001091                        569 _setup:
                           000007   570 	ar7 = 0x07
                           000006   571 	ar6 = 0x06
                           000005   572 	ar5 = 0x05
                           000004   573 	ar4 = 0x04
                           000003   574 	ar3 = 0x03
                           000002   575 	ar2 = 0x02
                           000001   576 	ar1 = 0x01
                           000000   577 	ar0 = 0x00
                                    578 ;	sketch.c:4: SerialBegin(57600);
      001091 90 E1 00         [24]  579 	mov	dptr,#0xE100
      001094 02 0C 48         [24]  580 	ljmp	_SerialBegin
                                    581 ;------------------------------------------------------------
                                    582 ;Allocation info for local variables in function 'loop'
                                    583 ;------------------------------------------------------------
                                    584 ;i                         Allocated to registers r6 r7 
                                    585 ;j                         Allocated to registers r4 r5 
                                    586 ;adc0                      Allocated to registers r6 r7 
                                    587 ;------------------------------------------------------------
                                    588 ;	sketch.c:7: void loop() {
                                    589 ;	-----------------------------------------
                                    590 ;	 function loop
                                    591 ;	-----------------------------------------
      001097                        592 _loop:
                                    593 ;	sketch.c:9: int adc0 = analogRead(A17);
      001097 75 82 5D         [24]  594 	mov	dpl,#0x5D
      00109A 12 05 B4         [24]  595 	lcall	_analogRead
      00109D AE 82            [24]  596 	mov	r6,dpl
      00109F AF 83            [24]  597 	mov	r7,dph
                                    598 ;	sketch.c:10: uprintf("ADC0: %d\n", adc0);
      0010A1 C0 06            [24]  599 	push	ar6
      0010A3 C0 07            [24]  600 	push	ar7
      0010A5 74 B9            [12]  601 	mov	a,#___str_0
      0010A7 C0 E0            [24]  602 	push	acc
      0010A9 74 12            [12]  603 	mov	a,#(___str_0 >> 8)
      0010AB C0 E0            [24]  604 	push	acc
      0010AD 74 80            [12]  605 	mov	a,#0x80
      0010AF C0 E0            [24]  606 	push	acc
      0010B1 12 0E F2         [24]  607 	lcall	_uprintf
      0010B4 E5 81            [12]  608 	mov	a,sp
      0010B6 24 FB            [12]  609 	add	a,#0xfb
      0010B8 F5 81            [12]  610 	mov	sp,a
                                    611 ;	sketch.c:11: pinMode(D14, BIDIRECTIONAL);
      0010BA E4               [12]  612 	clr	a
      0010BB C0 E0            [24]  613 	push	acc
      0010BD 75 82 11         [24]  614 	mov	dpl,#0x11
      0010C0 12 00 B1         [24]  615 	lcall	_pinMode
      0010C3 15 81            [12]  616 	dec	sp
                                    617 ;	sketch.c:12: for (i = 0; i < 30; i++) {
      0010C5 7E 00            [12]  618 	mov	r6,#0x00
      0010C7 7F 00            [12]  619 	mov	r7,#0x00
      0010C9                        620 00104$:
                                    621 ;	sketch.c:13: digitalWrite(D14, 0);
      0010C9 C0 07            [24]  622 	push	ar7
      0010CB C0 06            [24]  623 	push	ar6
      0010CD E4               [12]  624 	clr	a
      0010CE C0 E0            [24]  625 	push	acc
      0010D0 75 82 11         [24]  626 	mov	dpl,#0x11
      0010D3 12 04 DE         [24]  627 	lcall	_digitalWrite
      0010D6 15 81            [12]  628 	dec	sp
                                    629 ;	sketch.c:14: delay(100);
      0010D8 90 00 64         [24]  630 	mov	dptr,#(0x64&0x00ff)
      0010DB E4               [12]  631 	clr	a
      0010DC F5 F0            [12]  632 	mov	b,a
      0010DE 12 09 78         [24]  633 	lcall	_delay
                                    634 ;	sketch.c:15: digitalWrite(D14, 1);
      0010E1 74 01            [12]  635 	mov	a,#0x01
      0010E3 C0 E0            [24]  636 	push	acc
      0010E5 75 82 11         [24]  637 	mov	dpl,#0x11
      0010E8 12 04 DE         [24]  638 	lcall	_digitalWrite
      0010EB 15 81            [12]  639 	dec	sp
                                    640 ;	sketch.c:16: delay(100);
      0010ED 90 00 64         [24]  641 	mov	dptr,#(0x64&0x00ff)
      0010F0 E4               [12]  642 	clr	a
      0010F1 F5 F0            [12]  643 	mov	b,a
      0010F3 12 09 78         [24]  644 	lcall	_delay
      0010F6 D0 06            [24]  645 	pop	ar6
      0010F8 D0 07            [24]  646 	pop	ar7
                                    647 ;	sketch.c:12: for (i = 0; i < 30; i++) {
      0010FA 0E               [12]  648 	inc	r6
      0010FB BE 00 01         [24]  649 	cjne	r6,#0x00,00130$
      0010FE 0F               [12]  650 	inc	r7
      0010FF                        651 00130$:
      0010FF C3               [12]  652 	clr	c
      001100 EE               [12]  653 	mov	a,r6
      001101 94 1E            [12]  654 	subb	a,#0x1E
      001103 EF               [12]  655 	mov	a,r7
      001104 64 80            [12]  656 	xrl	a,#0x80
      001106 94 80            [12]  657 	subb	a,#0x80
      001108 40 BF            [24]  658 	jc	00104$
                                    659 ;	sketch.c:18: pinMode(PWM14, BIDIRECTIONAL);
      00110A E4               [12]  660 	clr	a
      00110B C0 E0            [24]  661 	push	acc
      00110D 75 82 91         [24]  662 	mov	dpl,#0x91
      001110 12 00 B1         [24]  663 	lcall	_pinMode
      001113 15 81            [12]  664 	dec	sp
                                    665 ;	sketch.c:19: for (i = 0; i < 10; i++) {
      001115 7E 00            [12]  666 	mov	r6,#0x00
      001117 7F 00            [12]  667 	mov	r7,#0x00
                                    668 ;	sketch.c:20: for (j = 0; j < 2048; j++) {
      001119                        669 00114$:
      001119 7C 00            [12]  670 	mov	r4,#0x00
      00111B 7D 00            [12]  671 	mov	r5,#0x00
      00111D                        672 00106$:
                                    673 ;	sketch.c:21: analogWrite(PWM14, j);
      00111D C0 07            [24]  674 	push	ar7
      00111F C0 06            [24]  675 	push	ar6
      001121 C0 05            [24]  676 	push	ar5
      001123 C0 04            [24]  677 	push	ar4
      001125 C0 04            [24]  678 	push	ar4
      001127 C0 05            [24]  679 	push	ar5
      001129 75 82 91         [24]  680 	mov	dpl,#0x91
      00112C 12 07 16         [24]  681 	lcall	_analogWrite
      00112F 15 81            [12]  682 	dec	sp
      001131 15 81            [12]  683 	dec	sp
                                    684 ;	sketch.c:22: delay(1);
      001133 90 00 01         [24]  685 	mov	dptr,#(0x01&0x00ff)
      001136 E4               [12]  686 	clr	a
      001137 F5 F0            [12]  687 	mov	b,a
      001139 12 09 78         [24]  688 	lcall	_delay
      00113C D0 04            [24]  689 	pop	ar4
      00113E D0 05            [24]  690 	pop	ar5
      001140 D0 06            [24]  691 	pop	ar6
      001142 D0 07            [24]  692 	pop	ar7
                                    693 ;	sketch.c:20: for (j = 0; j < 2048; j++) {
      001144 0C               [12]  694 	inc	r4
      001145 BC 00 01         [24]  695 	cjne	r4,#0x00,00132$
      001148 0D               [12]  696 	inc	r5
      001149                        697 00132$:
      001149 C3               [12]  698 	clr	c
      00114A ED               [12]  699 	mov	a,r5
      00114B 64 80            [12]  700 	xrl	a,#0x80
      00114D 94 88            [12]  701 	subb	a,#0x88
      00114F 40 CC            [24]  702 	jc	00106$
                                    703 ;	sketch.c:19: for (i = 0; i < 10; i++) {
      001151 0E               [12]  704 	inc	r6
      001152 BE 00 01         [24]  705 	cjne	r6,#0x00,00134$
      001155 0F               [12]  706 	inc	r7
      001156                        707 00134$:
      001156 C3               [12]  708 	clr	c
      001157 EE               [12]  709 	mov	a,r6
      001158 94 0A            [12]  710 	subb	a,#0x0A
      00115A EF               [12]  711 	mov	a,r7
      00115B 64 80            [12]  712 	xrl	a,#0x80
      00115D 94 80            [12]  713 	subb	a,#0x80
      00115F 40 B8            [24]  714 	jc	00114$
      001161 22               [24]  715 	ret
                                    716 	.area CSEG    (CODE)
                                    717 	.area CONST   (CODE)
      0012B9                        718 ___str_0:
      0012B9 41 44 43 30 3A 20 25   719 	.ascii "ADC0: %d"
             64
      0012C1 0A                     720 	.db 0x0A
      0012C2 00                     721 	.db 0x00
                                    722 	.area XINIT   (CODE)
                                    723 	.area CABS    (ABS,CODE)
