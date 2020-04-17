                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Apr  3 2018) (Linux)
                                      4 ; This file was generated Fri Apr 17 19:44:45 2020
                                      5 ;--------------------------------------------------------
                                      6 	.module gpio
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _MOSI
                                     13 	.globl _P00
                                     14 	.globl _MISO
                                     15 	.globl _P01
                                     16 	.globl _RXD_1
                                     17 	.globl _P02
                                     18 	.globl _P03
                                     19 	.globl _STADC
                                     20 	.globl _P04
                                     21 	.globl _P05
                                     22 	.globl _TXD
                                     23 	.globl _P06
                                     24 	.globl _RXD
                                     25 	.globl _P07
                                     26 	.globl _IT0
                                     27 	.globl _IE0
                                     28 	.globl _IT1
                                     29 	.globl _IE1
                                     30 	.globl _TR0
                                     31 	.globl _TF0
                                     32 	.globl _TR1
                                     33 	.globl _TF1
                                     34 	.globl _P10
                                     35 	.globl _P11
                                     36 	.globl _P12
                                     37 	.globl _SCL
                                     38 	.globl _P13
                                     39 	.globl _SDA
                                     40 	.globl _P14
                                     41 	.globl _P15
                                     42 	.globl _TXD_1
                                     43 	.globl _P16
                                     44 	.globl _P17
                                     45 	.globl _RI
                                     46 	.globl _TI
                                     47 	.globl _RB8
                                     48 	.globl _TB8
                                     49 	.globl _REN
                                     50 	.globl _SM2
                                     51 	.globl _SM1
                                     52 	.globl _FE
                                     53 	.globl _SM0
                                     54 	.globl _P20
                                     55 	.globl _EX0
                                     56 	.globl _ET0
                                     57 	.globl _EX1
                                     58 	.globl _ET1
                                     59 	.globl _ES
                                     60 	.globl _EBOD
                                     61 	.globl _EADC
                                     62 	.globl _EA
                                     63 	.globl _P30
                                     64 	.globl _PX0
                                     65 	.globl _PT0
                                     66 	.globl _PX1
                                     67 	.globl _PT1
                                     68 	.globl _PS
                                     69 	.globl _PBOD
                                     70 	.globl _PADC
                                     71 	.globl _I2CPX
                                     72 	.globl _AA
                                     73 	.globl _SI
                                     74 	.globl _STO
                                     75 	.globl _STA
                                     76 	.globl _I2CEN
                                     77 	.globl _CM_RL2
                                     78 	.globl _TR2
                                     79 	.globl _TF2
                                     80 	.globl _P
                                     81 	.globl _OV
                                     82 	.globl _RS0
                                     83 	.globl _RS1
                                     84 	.globl _F0
                                     85 	.globl _AC
                                     86 	.globl _CY
                                     87 	.globl _CLRPWM
                                     88 	.globl _PWMF
                                     89 	.globl _LOAD
                                     90 	.globl _PWMRUN
                                     91 	.globl _ADCHS0
                                     92 	.globl _ADCHS1
                                     93 	.globl _ADCHS2
                                     94 	.globl _ADCHS3
                                     95 	.globl _ETGSEL0
                                     96 	.globl _ETGSEL1
                                     97 	.globl _ADCS
                                     98 	.globl _ADCF
                                     99 	.globl _RI_1
                                    100 	.globl _TI_1
                                    101 	.globl _RB8_1
                                    102 	.globl _TB8_1
                                    103 	.globl _REN_1
                                    104 	.globl _SM2_1
                                    105 	.globl _SM1_1
                                    106 	.globl _FE_1
                                    107 	.globl _SM0_1
                                    108 	.globl _EIPH1
                                    109 	.globl _EIP1
                                    110 	.globl _PMD
                                    111 	.globl _PMEN
                                    112 	.globl _PDTCNT
                                    113 	.globl _PDTEN
                                    114 	.globl _SCON_1
                                    115 	.globl _EIPH
                                    116 	.globl _AINDIDS
                                    117 	.globl _SPDR
                                    118 	.globl _SPSR
                                    119 	.globl _SPCR2
                                    120 	.globl _SPCR
                                    121 	.globl _CAPCON4
                                    122 	.globl _CAPCON3
                                    123 	.globl _B
                                    124 	.globl _EIP
                                    125 	.globl _C2H
                                    126 	.globl _C2L
                                    127 	.globl _PIF
                                    128 	.globl _PIPEN
                                    129 	.globl _PINEN
                                    130 	.globl _PICON
                                    131 	.globl _ADCCON0
                                    132 	.globl _C1H
                                    133 	.globl _C1L
                                    134 	.globl _C0H
                                    135 	.globl _C0L
                                    136 	.globl _ADCDLY
                                    137 	.globl _ADCCON2
                                    138 	.globl _ADCCON1
                                    139 	.globl _ACC
                                    140 	.globl _PWMCON1
                                    141 	.globl _PIOCON0
                                    142 	.globl _PWM3L
                                    143 	.globl _PWM2L
                                    144 	.globl _PWM1L
                                    145 	.globl _PWM0L
                                    146 	.globl _PWMPL
                                    147 	.globl _PWMCON0
                                    148 	.globl _FBD
                                    149 	.globl _PNP
                                    150 	.globl _PWM3H
                                    151 	.globl _PWM2H
                                    152 	.globl _PWM1H
                                    153 	.globl _PWM0H
                                    154 	.globl _PWMPH
                                    155 	.globl _PSW
                                    156 	.globl _ADCMPH
                                    157 	.globl _ADCMPL
                                    158 	.globl _PWM5L
                                    159 	.globl _TH2
                                    160 	.globl _PWM4L
                                    161 	.globl _TL2
                                    162 	.globl _RCMP2H
                                    163 	.globl _RCMP2L
                                    164 	.globl _T2MOD
                                    165 	.globl _T2CON
                                    166 	.globl _TA
                                    167 	.globl _PIOCON1
                                    168 	.globl _RH3
                                    169 	.globl _PWM5H
                                    170 	.globl _RL3
                                    171 	.globl _PWM4H
                                    172 	.globl _T3CON
                                    173 	.globl _ADCRH
                                    174 	.globl _ADCRL
                                    175 	.globl _I2ADDR
                                    176 	.globl _I2CON
                                    177 	.globl _I2TOC
                                    178 	.globl _I2CLK
                                    179 	.globl _I2STAT
                                    180 	.globl _I2DAT
                                    181 	.globl _SADDR_1
                                    182 	.globl _SADEN_1
                                    183 	.globl _SADEN
                                    184 	.globl _IP
                                    185 	.globl _PWMINTC
                                    186 	.globl _IPH
                                    187 	.globl _P2S
                                    188 	.globl _P1SR
                                    189 	.globl _P1M2
                                    190 	.globl _P1S
                                    191 	.globl _P1M1
                                    192 	.globl _P0SR
                                    193 	.globl _P0M2
                                    194 	.globl _P0S
                                    195 	.globl _P0M1
                                    196 	.globl _P3
                                    197 	.globl _IAPCN
                                    198 	.globl _IAPFD
                                    199 	.globl _P3SR
                                    200 	.globl _P3M2
                                    201 	.globl _P3S
                                    202 	.globl _P3M1
                                    203 	.globl _BODCON1
                                    204 	.globl _WDCON
                                    205 	.globl _SADDR
                                    206 	.globl _IE
                                    207 	.globl _IAPAH
                                    208 	.globl _IAPAL
                                    209 	.globl _IAPUEN
                                    210 	.globl _IAPTRG
                                    211 	.globl _BODCON0
                                    212 	.globl _AUXR1
                                    213 	.globl _P2
                                    214 	.globl _CHPCON
                                    215 	.globl _EIE1
                                    216 	.globl _EIE
                                    217 	.globl _SBUF_1
                                    218 	.globl _SBUF
                                    219 	.globl _SCON
                                    220 	.globl _CKEN
                                    221 	.globl _CKSWT
                                    222 	.globl _CKDIV
                                    223 	.globl _CAPCON2
                                    224 	.globl _CAPCON1
                                    225 	.globl _CAPCON0
                                    226 	.globl _SFRS
                                    227 	.globl _P1
                                    228 	.globl _WKCON
                                    229 	.globl _CKCON
                                    230 	.globl _TH1
                                    231 	.globl _TH0
                                    232 	.globl _TL1
                                    233 	.globl _TL0
                                    234 	.globl _TMOD
                                    235 	.globl _TCON
                                    236 	.globl _PCON
                                    237 	.globl _RWK
                                    238 	.globl _RCTRIM1
                                    239 	.globl _RCTRIM0
                                    240 	.globl _DPH
                                    241 	.globl _DPL
                                    242 	.globl _SP
                                    243 	.globl _P0
                                    244 	.globl _pwm_init
                                    245 	.globl _pinMode
                                    246 	.globl _digitalRead
                                    247 	.globl _digitalWrite
                                    248 	.globl _analogRead
                                    249 	.globl _analogWrite
                                    250 ;--------------------------------------------------------
                                    251 ; special function registers
                                    252 ;--------------------------------------------------------
                                    253 	.area RSEG    (ABS,DATA)
      000000                        254 	.org 0x0000
                           000080   255 _P0	=	0x0080
                           000081   256 _SP	=	0x0081
                           000082   257 _DPL	=	0x0082
                           000083   258 _DPH	=	0x0083
                           000084   259 _RCTRIM0	=	0x0084
                           000085   260 _RCTRIM1	=	0x0085
                           000086   261 _RWK	=	0x0086
                           000087   262 _PCON	=	0x0087
                           000088   263 _TCON	=	0x0088
                           000089   264 _TMOD	=	0x0089
                           00008A   265 _TL0	=	0x008a
                           00008B   266 _TL1	=	0x008b
                           00008C   267 _TH0	=	0x008c
                           00008D   268 _TH1	=	0x008d
                           00008E   269 _CKCON	=	0x008e
                           00008F   270 _WKCON	=	0x008f
                           000090   271 _P1	=	0x0090
                           000091   272 _SFRS	=	0x0091
                           000092   273 _CAPCON0	=	0x0092
                           000093   274 _CAPCON1	=	0x0093
                           000094   275 _CAPCON2	=	0x0094
                           000095   276 _CKDIV	=	0x0095
                           000096   277 _CKSWT	=	0x0096
                           000097   278 _CKEN	=	0x0097
                           000098   279 _SCON	=	0x0098
                           000099   280 _SBUF	=	0x0099
                           00009A   281 _SBUF_1	=	0x009a
                           00009B   282 _EIE	=	0x009b
                           00009C   283 _EIE1	=	0x009c
                           00009F   284 _CHPCON	=	0x009f
                           0000A0   285 _P2	=	0x00a0
                           0000A2   286 _AUXR1	=	0x00a2
                           0000A3   287 _BODCON0	=	0x00a3
                           0000A4   288 _IAPTRG	=	0x00a4
                           0000A5   289 _IAPUEN	=	0x00a5
                           0000A6   290 _IAPAL	=	0x00a6
                           0000A7   291 _IAPAH	=	0x00a7
                           0000A8   292 _IE	=	0x00a8
                           0000A9   293 _SADDR	=	0x00a9
                           0000AA   294 _WDCON	=	0x00aa
                           0000AB   295 _BODCON1	=	0x00ab
                           0000AC   296 _P3M1	=	0x00ac
                           0000AC   297 _P3S	=	0x00ac
                           0000AD   298 _P3M2	=	0x00ad
                           0000AD   299 _P3SR	=	0x00ad
                           0000AE   300 _IAPFD	=	0x00ae
                           0000AF   301 _IAPCN	=	0x00af
                           0000B0   302 _P3	=	0x00b0
                           0000B1   303 _P0M1	=	0x00b1
                           0000B1   304 _P0S	=	0x00b1
                           0000B2   305 _P0M2	=	0x00b2
                           0000B2   306 _P0SR	=	0x00b2
                           0000B3   307 _P1M1	=	0x00b3
                           0000B3   308 _P1S	=	0x00b3
                           0000B4   309 _P1M2	=	0x00b4
                           0000B4   310 _P1SR	=	0x00b4
                           0000B5   311 _P2S	=	0x00b5
                           0000B7   312 _IPH	=	0x00b7
                           0000B7   313 _PWMINTC	=	0x00b7
                           0000B8   314 _IP	=	0x00b8
                           0000B9   315 _SADEN	=	0x00b9
                           0000BA   316 _SADEN_1	=	0x00ba
                           0000BB   317 _SADDR_1	=	0x00bb
                           0000BC   318 _I2DAT	=	0x00bc
                           0000BD   319 _I2STAT	=	0x00bd
                           0000BE   320 _I2CLK	=	0x00be
                           0000BF   321 _I2TOC	=	0x00bf
                           0000C0   322 _I2CON	=	0x00c0
                           0000C1   323 _I2ADDR	=	0x00c1
                           0000C2   324 _ADCRL	=	0x00c2
                           0000C3   325 _ADCRH	=	0x00c3
                           0000C4   326 _T3CON	=	0x00c4
                           0000C4   327 _PWM4H	=	0x00c4
                           0000C5   328 _RL3	=	0x00c5
                           0000C5   329 _PWM5H	=	0x00c5
                           0000C6   330 _RH3	=	0x00c6
                           0000C6   331 _PIOCON1	=	0x00c6
                           0000C7   332 _TA	=	0x00c7
                           0000C8   333 _T2CON	=	0x00c8
                           0000C9   334 _T2MOD	=	0x00c9
                           0000CA   335 _RCMP2L	=	0x00ca
                           0000CB   336 _RCMP2H	=	0x00cb
                           0000CC   337 _TL2	=	0x00cc
                           0000CC   338 _PWM4L	=	0x00cc
                           0000CD   339 _TH2	=	0x00cd
                           0000CD   340 _PWM5L	=	0x00cd
                           0000CE   341 _ADCMPL	=	0x00ce
                           0000CF   342 _ADCMPH	=	0x00cf
                           0000D0   343 _PSW	=	0x00d0
                           0000D1   344 _PWMPH	=	0x00d1
                           0000D2   345 _PWM0H	=	0x00d2
                           0000D3   346 _PWM1H	=	0x00d3
                           0000D4   347 _PWM2H	=	0x00d4
                           0000D5   348 _PWM3H	=	0x00d5
                           0000D6   349 _PNP	=	0x00d6
                           0000D7   350 _FBD	=	0x00d7
                           0000D8   351 _PWMCON0	=	0x00d8
                           0000D9   352 _PWMPL	=	0x00d9
                           0000DA   353 _PWM0L	=	0x00da
                           0000DB   354 _PWM1L	=	0x00db
                           0000DC   355 _PWM2L	=	0x00dc
                           0000DD   356 _PWM3L	=	0x00dd
                           0000DE   357 _PIOCON0	=	0x00de
                           0000DF   358 _PWMCON1	=	0x00df
                           0000E0   359 _ACC	=	0x00e0
                           0000E1   360 _ADCCON1	=	0x00e1
                           0000E2   361 _ADCCON2	=	0x00e2
                           0000E3   362 _ADCDLY	=	0x00e3
                           0000E4   363 _C0L	=	0x00e4
                           0000E5   364 _C0H	=	0x00e5
                           0000E6   365 _C1L	=	0x00e6
                           0000E7   366 _C1H	=	0x00e7
                           0000E8   367 _ADCCON0	=	0x00e8
                           0000E9   368 _PICON	=	0x00e9
                           0000EA   369 _PINEN	=	0x00ea
                           0000EB   370 _PIPEN	=	0x00eb
                           0000EC   371 _PIF	=	0x00ec
                           0000ED   372 _C2L	=	0x00ed
                           0000EE   373 _C2H	=	0x00ee
                           0000EF   374 _EIP	=	0x00ef
                           0000F0   375 _B	=	0x00f0
                           0000F1   376 _CAPCON3	=	0x00f1
                           0000F2   377 _CAPCON4	=	0x00f2
                           0000F3   378 _SPCR	=	0x00f3
                           0000F3   379 _SPCR2	=	0x00f3
                           0000F4   380 _SPSR	=	0x00f4
                           0000F5   381 _SPDR	=	0x00f5
                           0000F6   382 _AINDIDS	=	0x00f6
                           0000F7   383 _EIPH	=	0x00f7
                           0000F8   384 _SCON_1	=	0x00f8
                           0000F9   385 _PDTEN	=	0x00f9
                           0000FA   386 _PDTCNT	=	0x00fa
                           0000FB   387 _PMEN	=	0x00fb
                           0000FC   388 _PMD	=	0x00fc
                           0000FE   389 _EIP1	=	0x00fe
                           0000FF   390 _EIPH1	=	0x00ff
                                    391 ;--------------------------------------------------------
                                    392 ; special function bits
                                    393 ;--------------------------------------------------------
                                    394 	.area RSEG    (ABS,DATA)
      000000                        395 	.org 0x0000
                           0000FF   396 _SM0_1	=	0x00ff
                           0000FF   397 _FE_1	=	0x00ff
                           0000FE   398 _SM1_1	=	0x00fe
                           0000FD   399 _SM2_1	=	0x00fd
                           0000FC   400 _REN_1	=	0x00fc
                           0000FB   401 _TB8_1	=	0x00fb
                           0000FA   402 _RB8_1	=	0x00fa
                           0000F9   403 _TI_1	=	0x00f9
                           0000F8   404 _RI_1	=	0x00f8
                           0000EF   405 _ADCF	=	0x00ef
                           0000EE   406 _ADCS	=	0x00ee
                           0000ED   407 _ETGSEL1	=	0x00ed
                           0000EC   408 _ETGSEL0	=	0x00ec
                           0000EB   409 _ADCHS3	=	0x00eb
                           0000EA   410 _ADCHS2	=	0x00ea
                           0000E9   411 _ADCHS1	=	0x00e9
                           0000E8   412 _ADCHS0	=	0x00e8
                           0000DF   413 _PWMRUN	=	0x00df
                           0000DE   414 _LOAD	=	0x00de
                           0000DD   415 _PWMF	=	0x00dd
                           0000DC   416 _CLRPWM	=	0x00dc
                           0000D7   417 _CY	=	0x00d7
                           0000D6   418 _AC	=	0x00d6
                           0000D5   419 _F0	=	0x00d5
                           0000D4   420 _RS1	=	0x00d4
                           0000D3   421 _RS0	=	0x00d3
                           0000D2   422 _OV	=	0x00d2
                           0000D0   423 _P	=	0x00d0
                           0000CF   424 _TF2	=	0x00cf
                           0000CA   425 _TR2	=	0x00ca
                           0000C8   426 _CM_RL2	=	0x00c8
                           0000C6   427 _I2CEN	=	0x00c6
                           0000C5   428 _STA	=	0x00c5
                           0000C4   429 _STO	=	0x00c4
                           0000C3   430 _SI	=	0x00c3
                           0000C2   431 _AA	=	0x00c2
                           0000C0   432 _I2CPX	=	0x00c0
                           0000BE   433 _PADC	=	0x00be
                           0000BD   434 _PBOD	=	0x00bd
                           0000BC   435 _PS	=	0x00bc
                           0000BB   436 _PT1	=	0x00bb
                           0000BA   437 _PX1	=	0x00ba
                           0000B9   438 _PT0	=	0x00b9
                           0000B8   439 _PX0	=	0x00b8
                           0000B0   440 _P30	=	0x00b0
                           0000AF   441 _EA	=	0x00af
                           0000AE   442 _EADC	=	0x00ae
                           0000AD   443 _EBOD	=	0x00ad
                           0000AC   444 _ES	=	0x00ac
                           0000AB   445 _ET1	=	0x00ab
                           0000AA   446 _EX1	=	0x00aa
                           0000A9   447 _ET0	=	0x00a9
                           0000A8   448 _EX0	=	0x00a8
                           0000A0   449 _P20	=	0x00a0
                           00009F   450 _SM0	=	0x009f
                           00009F   451 _FE	=	0x009f
                           00009E   452 _SM1	=	0x009e
                           00009D   453 _SM2	=	0x009d
                           00009C   454 _REN	=	0x009c
                           00009B   455 _TB8	=	0x009b
                           00009A   456 _RB8	=	0x009a
                           000099   457 _TI	=	0x0099
                           000098   458 _RI	=	0x0098
                           000097   459 _P17	=	0x0097
                           000096   460 _P16	=	0x0096
                           000096   461 _TXD_1	=	0x0096
                           000095   462 _P15	=	0x0095
                           000094   463 _P14	=	0x0094
                           000094   464 _SDA	=	0x0094
                           000093   465 _P13	=	0x0093
                           000093   466 _SCL	=	0x0093
                           000092   467 _P12	=	0x0092
                           000091   468 _P11	=	0x0091
                           000090   469 _P10	=	0x0090
                           00008F   470 _TF1	=	0x008f
                           00008E   471 _TR1	=	0x008e
                           00008D   472 _TF0	=	0x008d
                           00008C   473 _TR0	=	0x008c
                           00008B   474 _IE1	=	0x008b
                           00008A   475 _IT1	=	0x008a
                           000089   476 _IE0	=	0x0089
                           000088   477 _IT0	=	0x0088
                           000087   478 _P07	=	0x0087
                           000087   479 _RXD	=	0x0087
                           000086   480 _P06	=	0x0086
                           000086   481 _TXD	=	0x0086
                           000085   482 _P05	=	0x0085
                           000084   483 _P04	=	0x0084
                           000084   484 _STADC	=	0x0084
                           000083   485 _P03	=	0x0083
                           000082   486 _P02	=	0x0082
                           000082   487 _RXD_1	=	0x0082
                           000081   488 _P01	=	0x0081
                           000081   489 _MISO	=	0x0081
                           000080   490 _P00	=	0x0080
                           000080   491 _MOSI	=	0x0080
                                    492 ;--------------------------------------------------------
                                    493 ; overlayable register banks
                                    494 ;--------------------------------------------------------
                                    495 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        496 	.ds 8
                                    497 ;--------------------------------------------------------
                                    498 ; internal ram data
                                    499 ;--------------------------------------------------------
                                    500 	.area DSEG    (DATA)
                                    501 ;--------------------------------------------------------
                                    502 ; overlayable items in internal ram 
                                    503 ;--------------------------------------------------------
                                    504 ;--------------------------------------------------------
                                    505 ; indirectly addressable internal ram data
                                    506 ;--------------------------------------------------------
                                    507 	.area ISEG    (DATA)
                                    508 ;--------------------------------------------------------
                                    509 ; absolute internal ram data
                                    510 ;--------------------------------------------------------
                                    511 	.area IABS    (ABS,DATA)
                                    512 	.area IABS    (ABS,DATA)
                                    513 ;--------------------------------------------------------
                                    514 ; bit data
                                    515 ;--------------------------------------------------------
                                    516 	.area BSEG    (BIT)
                                    517 ;--------------------------------------------------------
                                    518 ; paged external ram data
                                    519 ;--------------------------------------------------------
                                    520 	.area PSEG    (PAG,XDATA)
                                    521 ;--------------------------------------------------------
                                    522 ; external ram data
                                    523 ;--------------------------------------------------------
                                    524 	.area XSEG    (XDATA)
                                    525 ;--------------------------------------------------------
                                    526 ; absolute external ram data
                                    527 ;--------------------------------------------------------
                                    528 	.area XABS    (ABS,XDATA)
                                    529 ;--------------------------------------------------------
                                    530 ; external initialized ram data
                                    531 ;--------------------------------------------------------
                                    532 	.area XISEG   (XDATA)
                                    533 	.area HOME    (CODE)
                                    534 	.area GSINIT0 (CODE)
                                    535 	.area GSINIT1 (CODE)
                                    536 	.area GSINIT2 (CODE)
                                    537 	.area GSINIT3 (CODE)
                                    538 	.area GSINIT4 (CODE)
                                    539 	.area GSINIT5 (CODE)
                                    540 	.area GSINIT  (CODE)
                                    541 	.area GSFINAL (CODE)
                                    542 	.area CSEG    (CODE)
                                    543 ;--------------------------------------------------------
                                    544 ; global & static initialisations
                                    545 ;--------------------------------------------------------
                                    546 	.area HOME    (CODE)
                                    547 	.area GSINIT  (CODE)
                                    548 	.area GSFINAL (CODE)
                                    549 	.area GSINIT  (CODE)
                                    550 ;--------------------------------------------------------
                                    551 ; Home
                                    552 ;--------------------------------------------------------
                                    553 	.area HOME    (CODE)
                                    554 	.area HOME    (CODE)
                                    555 ;--------------------------------------------------------
                                    556 ; code
                                    557 ;--------------------------------------------------------
                                    558 	.area CSEG    (CODE)
                                    559 ;------------------------------------------------------------
                                    560 ;Allocation info for local variables in function 'pwm_init'
                                    561 ;------------------------------------------------------------
                                    562 ;	lib/gpio.c:8: void pwm_init(void) {
                                    563 ;	-----------------------------------------
                                    564 ;	 function pwm_init
                                    565 ;	-----------------------------------------
      00009C                        566 _pwm_init:
                           000007   567 	ar7 = 0x07
                           000006   568 	ar6 = 0x06
                           000005   569 	ar5 = 0x05
                           000004   570 	ar4 = 0x04
                           000003   571 	ar3 = 0x03
                           000002   572 	ar2 = 0x02
                           000001   573 	ar1 = 0x01
                           000000   574 	ar0 = 0x00
                                    575 ;	lib/gpio.c:9: PWM_CLOCK_FSYS;
      00009C 53 8E BF         [24]  576 	anl	_CKCON,#0xBF
                                    577 ;	lib/gpio.c:10: PWM_IMDEPENDENT_MODE;
      00009F 53 DF 3F         [24]  578 	anl	_PWMCON1,#0x3F
                                    579 ;	lib/gpio.c:11: PWM_CLOCK_DIV_4;
      0000A2 43 DF 02         [24]  580 	orl	_PWMCON1,#0x02
      0000A5 53 DF FA         [24]  581 	anl	_PWMCON1,#0xFA
                                    582 ;	lib/gpio.c:12: PWMPH = 0x07;
      0000A8 75 D1 07         [24]  583 	mov	_PWMPH,#0x07
                                    584 ;	lib/gpio.c:13: PWMPL = 0xCF;
      0000AB 75 D9 CF         [24]  585 	mov	_PWMPL,#0xCF
                                    586 ;	lib/gpio.c:14: set_LOAD;
      0000AE D2 DE            [12]  587 	setb	_LOAD
      0000B0 22               [24]  588 	ret
                                    589 ;------------------------------------------------------------
                                    590 ;Allocation info for local variables in function 'pinMode'
                                    591 ;------------------------------------------------------------
                                    592 ;mode                      Allocated to stack - _bp -3
                                    593 ;pin                       Allocated to registers r7 
                                    594 ;------------------------------------------------------------
                                    595 ;	lib/gpio.c:17: void pinMode(byte pin, byte mode) {
                                    596 ;	-----------------------------------------
                                    597 ;	 function pinMode
                                    598 ;	-----------------------------------------
      0000B1                        599 _pinMode:
      0000B1 C0 0D            [24]  600 	push	_bp
      0000B3 85 81 0D         [24]  601 	mov	_bp,sp
                                    602 ;	lib/gpio.c:18: if (GPIO_PORT(pin) == 0) {
      0000B6 E5 82            [12]  603 	mov	a,dpl
      0000B8 FF               [12]  604 	mov	r7,a
      0000B9 54 03            [12]  605 	anl	a,#0x03
      0000BB 60 03            [24]  606 	jz	00207$
      0000BD 02 02 4C         [24]  607 	ljmp	00125$
      0000C0                        608 00207$:
                                    609 ;	lib/gpio.c:19: bitWrite(P0M2, (GPIO_PIN(pin)), (mode & 1));
      0000C0 E5 0D            [12]  610 	mov	a,_bp
      0000C2 24 FD            [12]  611 	add	a,#0xfd
      0000C4 F8               [12]  612 	mov	r0,a
      0000C5 E6               [12]  613 	mov	a,@r0
      0000C6 30 E0 1B         [24]  614 	jnb	acc.0,00102$
      0000C9 EF               [12]  615 	mov	a,r7
      0000CA 03               [12]  616 	rr	a
      0000CB 03               [12]  617 	rr	a
      0000CC 54 3F            [12]  618 	anl	a,#0x3F
      0000CE FE               [12]  619 	mov	r6,a
      0000CF 74 07            [12]  620 	mov	a,#0x07
      0000D1 5E               [12]  621 	anl	a,r6
      0000D2 F5 F0            [12]  622 	mov	b,a
      0000D4 05 F0            [12]  623 	inc	b
      0000D6 74 01            [12]  624 	mov	a,#0x01
      0000D8 80 02            [24]  625 	sjmp	00211$
      0000DA                        626 00209$:
      0000DA 25 E0            [12]  627 	add	a,acc
      0000DC                        628 00211$:
      0000DC D5 F0 FB         [24]  629 	djnz	b,00209$
      0000DF FE               [12]  630 	mov	r6,a
      0000E0 42 B2            [12]  631 	orl	_P0M2,a
      0000E2 80 1A            [24]  632 	sjmp	00103$
      0000E4                        633 00102$:
      0000E4 EF               [12]  634 	mov	a,r7
      0000E5 03               [12]  635 	rr	a
      0000E6 03               [12]  636 	rr	a
      0000E7 54 3F            [12]  637 	anl	a,#0x3F
      0000E9 FE               [12]  638 	mov	r6,a
      0000EA 74 07            [12]  639 	mov	a,#0x07
      0000EC 5E               [12]  640 	anl	a,r6
      0000ED F5 F0            [12]  641 	mov	b,a
      0000EF 05 F0            [12]  642 	inc	b
      0000F1 74 01            [12]  643 	mov	a,#0x01
      0000F3 80 02            [24]  644 	sjmp	00214$
      0000F5                        645 00212$:
      0000F5 25 E0            [12]  646 	add	a,acc
      0000F7                        647 00214$:
      0000F7 D5 F0 FB         [24]  648 	djnz	b,00212$
      0000FA F4               [12]  649 	cpl	a
      0000FB FE               [12]  650 	mov	r6,a
      0000FC 52 B2            [12]  651 	anl	_P0M2,a
      0000FE                        652 00103$:
                                    653 ;	lib/gpio.c:20: bitWrite(P0M1, (GPIO_PIN(pin)), ((mode >> 1) & 1));
      0000FE E5 0D            [12]  654 	mov	a,_bp
      000100 24 FD            [12]  655 	add	a,#0xfd
      000102 F8               [12]  656 	mov	r0,a
      000103 E6               [12]  657 	mov	a,@r0
      000104 03               [12]  658 	rr	a
      000105 54 01            [12]  659 	anl	a,#0x01
      000107 FE               [12]  660 	mov	r6,a
      000108 60 1B            [24]  661 	jz	00105$
      00010A EF               [12]  662 	mov	a,r7
      00010B 03               [12]  663 	rr	a
      00010C 03               [12]  664 	rr	a
      00010D 54 3F            [12]  665 	anl	a,#0x3F
      00010F FE               [12]  666 	mov	r6,a
      000110 74 07            [12]  667 	mov	a,#0x07
      000112 5E               [12]  668 	anl	a,r6
      000113 F5 F0            [12]  669 	mov	b,a
      000115 05 F0            [12]  670 	inc	b
      000117 74 01            [12]  671 	mov	a,#0x01
      000119 80 02            [24]  672 	sjmp	00218$
      00011B                        673 00216$:
      00011B 25 E0            [12]  674 	add	a,acc
      00011D                        675 00218$:
      00011D D5 F0 FB         [24]  676 	djnz	b,00216$
      000120 FE               [12]  677 	mov	r6,a
      000121 42 B1            [12]  678 	orl	_P0M1,a
      000123 80 1A            [24]  679 	sjmp	00106$
      000125                        680 00105$:
      000125 EF               [12]  681 	mov	a,r7
      000126 03               [12]  682 	rr	a
      000127 03               [12]  683 	rr	a
      000128 54 3F            [12]  684 	anl	a,#0x3F
      00012A FE               [12]  685 	mov	r6,a
      00012B 74 07            [12]  686 	mov	a,#0x07
      00012D 5E               [12]  687 	anl	a,r6
      00012E F5 F0            [12]  688 	mov	b,a
      000130 05 F0            [12]  689 	inc	b
      000132 74 01            [12]  690 	mov	a,#0x01
      000134 80 02            [24]  691 	sjmp	00221$
      000136                        692 00219$:
      000136 25 E0            [12]  693 	add	a,acc
      000138                        694 00221$:
      000138 D5 F0 FB         [24]  695 	djnz	b,00219$
      00013B F4               [12]  696 	cpl	a
      00013C FE               [12]  697 	mov	r6,a
      00013D 52 B1            [12]  698 	anl	_P0M1,a
      00013F                        699 00106$:
                                    700 ;	lib/gpio.c:21: if (GPIO_PWM(pin)) {
      00013F 74 80            [12]  701 	mov	a,#0x80
      000141 5F               [12]  702 	anl	a,r7
      000142 FE               [12]  703 	mov	r6,a
      000143 BE 80 02         [24]  704 	cjne	r6,#0x80,00222$
      000146 80 03            [24]  705 	sjmp	00223$
      000148                        706 00222$:
      000148 02 01 D2         [24]  707 	ljmp	00122$
      00014B                        708 00223$:
                                    709 ;	lib/gpio.c:22: switch (GPIO_PIN(pin)) {
      00014B EF               [12]  710 	mov	a,r7
      00014C 03               [12]  711 	rr	a
      00014D 03               [12]  712 	rr	a
      00014E 54 07            [12]  713 	anl	a,#(0x3F&0x07)
      000150 FE               [12]  714 	mov	r6,a
      000151 24 FA            [12]  715 	add	a,#0xff - 0x05
      000153 50 03            [24]  716 	jnc	00224$
      000155 02 02 4C         [24]  717 	ljmp	00125$
      000158                        718 00224$:
      000158 EE               [12]  719 	mov	a,r6
      000159 2E               [12]  720 	add	a,r6
      00015A 2E               [12]  721 	add	a,r6
      00015B 90 01 5F         [24]  722 	mov	dptr,#00225$
      00015E 73               [24]  723 	jmp	@a+dptr
      00015F                        724 00225$:
      00015F 02 01 71         [24]  725 	ljmp	00107$
      000162 02 01 77         [24]  726 	ljmp	00108$
      000165 02 01 CF         [24]  727 	ljmp	00112$
      000168 02 01 7D         [24]  728 	ljmp	00109$
      00016B 02 01 83         [24]  729 	ljmp	00110$
      00016E 02 01 A9         [24]  730 	ljmp	00111$
                                    731 ;	lib/gpio.c:23: case 0:
      000171                        732 00107$:
                                    733 ;	lib/gpio.c:24: PWM3_P00_OUTPUT_ENABLE;
      000171 43 DE 08         [24]  734 	orl	_PIOCON0,#0x08
                                    735 ;	lib/gpio.c:25: break;
      000174 02 02 4C         [24]  736 	ljmp	00125$
                                    737 ;	lib/gpio.c:26: case 1:
      000177                        738 00108$:
                                    739 ;	lib/gpio.c:27: PWM4_P01_OUTPUT_ENABLE;
      000177 43 DE 10         [24]  740 	orl	_PIOCON0,#0x10
                                    741 ;	lib/gpio.c:28: break;
      00017A 02 02 4C         [24]  742 	ljmp	00125$
                                    743 ;	lib/gpio.c:29: case 3:
      00017D                        744 00109$:
                                    745 ;	lib/gpio.c:30: PWM5_P03_OUTPUT_ENABLE;
      00017D 43 DE 20         [24]  746 	orl	_PIOCON0,#0x20
                                    747 ;	lib/gpio.c:31: break;
      000180 02 02 4C         [24]  748 	ljmp	00125$
                                    749 ;	lib/gpio.c:32: case 4:
      000183                        750 00110$:
                                    751 ;	lib/gpio.c:33: PWM3_P04_OUTPUT_ENABLE;
      000183 A2 AF            [12]  752 	mov	c,_EA
      000185 E4               [12]  753 	clr	a
      000186 33               [12]  754 	rlc	a
      000187 F5 08            [12]  755 	mov	_BIT_TMP,a
      000189 C2 AF            [12]  756 	clr	_EA
      00018B 75 C7 AA         [24]  757 	mov	_TA,#0xAA
      00018E 75 C7 55         [24]  758 	mov	_TA,#0x55
      000191 43 91 01         [24]  759 	orl	_SFRS,#0x01
      000194 43 C6 08         [24]  760 	orl	_PIOCON1,#0x08
      000197 75 C7 AA         [24]  761 	mov	_TA,#0xAA
      00019A 75 C7 55         [24]  762 	mov	_TA,#0x55
      00019D 53 91 FE         [24]  763 	anl	_SFRS,#0xFE
      0001A0 E5 08            [12]  764 	mov	a,_BIT_TMP
      0001A2 24 FF            [12]  765 	add	a,#0xff
      0001A4 92 AF            [24]  766 	mov	_EA,c
                                    767 ;	lib/gpio.c:34: break;
      0001A6 02 02 4C         [24]  768 	ljmp	00125$
                                    769 ;	lib/gpio.c:35: case 5:
      0001A9                        770 00111$:
                                    771 ;	lib/gpio.c:36: PWM2_P05_OUTPUT_ENABLE;
      0001A9 A2 AF            [12]  772 	mov	c,_EA
      0001AB E4               [12]  773 	clr	a
      0001AC 33               [12]  774 	rlc	a
      0001AD F5 08            [12]  775 	mov	_BIT_TMP,a
      0001AF C2 AF            [12]  776 	clr	_EA
      0001B1 75 C7 AA         [24]  777 	mov	_TA,#0xAA
      0001B4 75 C7 55         [24]  778 	mov	_TA,#0x55
      0001B7 43 91 01         [24]  779 	orl	_SFRS,#0x01
      0001BA 43 C6 04         [24]  780 	orl	_PIOCON1,#0x04
      0001BD 75 C7 AA         [24]  781 	mov	_TA,#0xAA
      0001C0 75 C7 55         [24]  782 	mov	_TA,#0x55
      0001C3 53 91 FE         [24]  783 	anl	_SFRS,#0xFE
      0001C6 E5 08            [12]  784 	mov	a,_BIT_TMP
      0001C8 24 FF            [12]  785 	add	a,#0xff
      0001CA 92 AF            [24]  786 	mov	_EA,c
                                    787 ;	lib/gpio.c:37: break;
      0001CC 02 02 4C         [24]  788 	ljmp	00125$
                                    789 ;	lib/gpio.c:38: default:
      0001CF                        790 00112$:
                                    791 ;	lib/gpio.c:40: }
      0001CF 02 02 4C         [24]  792 	ljmp	00125$
      0001D2                        793 00122$:
                                    794 ;	lib/gpio.c:42: switch (GPIO_PIN(pin)) {
      0001D2 EF               [12]  795 	mov	a,r7
      0001D3 03               [12]  796 	rr	a
      0001D4 03               [12]  797 	rr	a
      0001D5 54 07            [12]  798 	anl	a,#(0x3F&0x07)
      0001D7 FE               [12]  799 	mov	r6,a
      0001D8 24 FA            [12]  800 	add	a,#0xff - 0x05
      0001DA 40 70            [24]  801 	jc	00125$
      0001DC EE               [12]  802 	mov	a,r6
      0001DD 2E               [12]  803 	add	a,r6
      0001DE 2E               [12]  804 	add	a,r6
      0001DF 90 01 E3         [24]  805 	mov	dptr,#00227$
      0001E2 73               [24]  806 	jmp	@a+dptr
      0001E3                        807 00227$:
      0001E3 02 01 F5         [24]  808 	ljmp	00114$
      0001E6 02 01 FA         [24]  809 	ljmp	00115$
      0001E9 02 02 4C         [24]  810 	ljmp	00119$
      0001EC 02 01 FF         [24]  811 	ljmp	00116$
      0001EF 02 02 04         [24]  812 	ljmp	00117$
      0001F2 02 02 29         [24]  813 	ljmp	00118$
                                    814 ;	lib/gpio.c:43: case 0:
      0001F5                        815 00114$:
                                    816 ;	lib/gpio.c:44: PWM3_P00_OUTPUT_DISABLE;
      0001F5 53 DE F7         [24]  817 	anl	_PIOCON0,#0xF7
                                    818 ;	lib/gpio.c:45: break;
                                    819 ;	lib/gpio.c:46: case 1:
      0001F8 80 52            [24]  820 	sjmp	00125$
      0001FA                        821 00115$:
                                    822 ;	lib/gpio.c:47: PWM4_P01_OUTPUT_DISABLE;
      0001FA 53 DE EF         [24]  823 	anl	_PIOCON0,#0xEF
                                    824 ;	lib/gpio.c:48: break;
                                    825 ;	lib/gpio.c:49: case 3:
      0001FD 80 4D            [24]  826 	sjmp	00125$
      0001FF                        827 00116$:
                                    828 ;	lib/gpio.c:50: PWM5_P03_OUTPUT_DISABLE;
      0001FF 53 DE DF         [24]  829 	anl	_PIOCON0,#0xDF
                                    830 ;	lib/gpio.c:51: break;
                                    831 ;	lib/gpio.c:52: case 4:
      000202 80 48            [24]  832 	sjmp	00125$
      000204                        833 00117$:
                                    834 ;	lib/gpio.c:53: PWM3_P04_OUTPUT_DISABLE;
      000204 A2 AF            [12]  835 	mov	c,_EA
      000206 E4               [12]  836 	clr	a
      000207 33               [12]  837 	rlc	a
      000208 F5 08            [12]  838 	mov	_BIT_TMP,a
      00020A C2 AF            [12]  839 	clr	_EA
      00020C 75 C7 AA         [24]  840 	mov	_TA,#0xAA
      00020F 75 C7 55         [24]  841 	mov	_TA,#0x55
      000212 43 91 01         [24]  842 	orl	_SFRS,#0x01
      000215 53 C6 F7         [24]  843 	anl	_PIOCON1,#0xF7
      000218 75 C7 AA         [24]  844 	mov	_TA,#0xAA
      00021B 75 C7 55         [24]  845 	mov	_TA,#0x55
      00021E 53 91 FE         [24]  846 	anl	_SFRS,#0xFE
      000221 E5 08            [12]  847 	mov	a,_BIT_TMP
      000223 24 FF            [12]  848 	add	a,#0xff
      000225 92 AF            [24]  849 	mov	_EA,c
                                    850 ;	lib/gpio.c:54: break;
                                    851 ;	lib/gpio.c:55: case 5:
      000227 80 23            [24]  852 	sjmp	00125$
      000229                        853 00118$:
                                    854 ;	lib/gpio.c:56: PWM2_P05_OUTPUT_DISABLE;
      000229 A2 AF            [12]  855 	mov	c,_EA
      00022B E4               [12]  856 	clr	a
      00022C 33               [12]  857 	rlc	a
      00022D F5 08            [12]  858 	mov	_BIT_TMP,a
      00022F C2 AF            [12]  859 	clr	_EA
      000231 75 C7 AA         [24]  860 	mov	_TA,#0xAA
      000234 75 C7 55         [24]  861 	mov	_TA,#0x55
      000237 43 91 01         [24]  862 	orl	_SFRS,#0x01
      00023A 53 C6 FB         [24]  863 	anl	_PIOCON1,#0xFB
      00023D 75 C7 AA         [24]  864 	mov	_TA,#0xAA
      000240 75 C7 55         [24]  865 	mov	_TA,#0x55
      000243 53 91 FE         [24]  866 	anl	_SFRS,#0xFE
      000246 E5 08            [12]  867 	mov	a,_BIT_TMP
      000248 24 FF            [12]  868 	add	a,#0xff
      00024A 92 AF            [24]  869 	mov	_EA,c
                                    870 ;	lib/gpio.c:57: break;
                                    871 ;	lib/gpio.c:58: default:
                                    872 ;	lib/gpio.c:60: }
      00024C                        873 00119$:
      00024C                        874 00125$:
                                    875 ;	lib/gpio.c:63: if (GPIO_PORT(pin) == 1) {
      00024C 74 03            [12]  876 	mov	a,#0x03
      00024E 5F               [12]  877 	anl	a,r7
      00024F FE               [12]  878 	mov	r6,a
      000250 BE 01 02         [24]  879 	cjne	r6,#0x01,00228$
      000253 80 03            [24]  880 	sjmp	00229$
      000255                        881 00228$:
      000255 02 03 E4         [24]  882 	ljmp	00150$
      000258                        883 00229$:
                                    884 ;	lib/gpio.c:64: bitWrite(P1M2, (GPIO_PIN(pin)), (mode & 1));
      000258 E5 0D            [12]  885 	mov	a,_bp
      00025A 24 FD            [12]  886 	add	a,#0xfd
      00025C F8               [12]  887 	mov	r0,a
      00025D E6               [12]  888 	mov	a,@r0
      00025E 30 E0 1B         [24]  889 	jnb	acc.0,00127$
      000261 EF               [12]  890 	mov	a,r7
      000262 03               [12]  891 	rr	a
      000263 03               [12]  892 	rr	a
      000264 54 3F            [12]  893 	anl	a,#0x3F
      000266 FE               [12]  894 	mov	r6,a
      000267 74 07            [12]  895 	mov	a,#0x07
      000269 5E               [12]  896 	anl	a,r6
      00026A F5 F0            [12]  897 	mov	b,a
      00026C 05 F0            [12]  898 	inc	b
      00026E 74 01            [12]  899 	mov	a,#0x01
      000270 80 02            [24]  900 	sjmp	00233$
      000272                        901 00231$:
      000272 25 E0            [12]  902 	add	a,acc
      000274                        903 00233$:
      000274 D5 F0 FB         [24]  904 	djnz	b,00231$
      000277 FE               [12]  905 	mov	r6,a
      000278 42 B4            [12]  906 	orl	_P1M2,a
      00027A 80 1A            [24]  907 	sjmp	00128$
      00027C                        908 00127$:
      00027C EF               [12]  909 	mov	a,r7
      00027D 03               [12]  910 	rr	a
      00027E 03               [12]  911 	rr	a
      00027F 54 3F            [12]  912 	anl	a,#0x3F
      000281 FE               [12]  913 	mov	r6,a
      000282 74 07            [12]  914 	mov	a,#0x07
      000284 5E               [12]  915 	anl	a,r6
      000285 F5 F0            [12]  916 	mov	b,a
      000287 05 F0            [12]  917 	inc	b
      000289 74 01            [12]  918 	mov	a,#0x01
      00028B 80 02            [24]  919 	sjmp	00236$
      00028D                        920 00234$:
      00028D 25 E0            [12]  921 	add	a,acc
      00028F                        922 00236$:
      00028F D5 F0 FB         [24]  923 	djnz	b,00234$
      000292 F4               [12]  924 	cpl	a
      000293 FE               [12]  925 	mov	r6,a
      000294 52 B4            [12]  926 	anl	_P1M2,a
      000296                        927 00128$:
                                    928 ;	lib/gpio.c:65: bitWrite(P1M1, (GPIO_PIN(pin)), ((mode >> 1) & 1));
      000296 E5 0D            [12]  929 	mov	a,_bp
      000298 24 FD            [12]  930 	add	a,#0xfd
      00029A F8               [12]  931 	mov	r0,a
      00029B E6               [12]  932 	mov	a,@r0
      00029C 03               [12]  933 	rr	a
      00029D 54 01            [12]  934 	anl	a,#0x01
      00029F FE               [12]  935 	mov	r6,a
      0002A0 60 1B            [24]  936 	jz	00130$
      0002A2 EF               [12]  937 	mov	a,r7
      0002A3 03               [12]  938 	rr	a
      0002A4 03               [12]  939 	rr	a
      0002A5 54 3F            [12]  940 	anl	a,#0x3F
      0002A7 FE               [12]  941 	mov	r6,a
      0002A8 74 07            [12]  942 	mov	a,#0x07
      0002AA 5E               [12]  943 	anl	a,r6
      0002AB F5 F0            [12]  944 	mov	b,a
      0002AD 05 F0            [12]  945 	inc	b
      0002AF 74 01            [12]  946 	mov	a,#0x01
      0002B1 80 02            [24]  947 	sjmp	00240$
      0002B3                        948 00238$:
      0002B3 25 E0            [12]  949 	add	a,acc
      0002B5                        950 00240$:
      0002B5 D5 F0 FB         [24]  951 	djnz	b,00238$
      0002B8 FE               [12]  952 	mov	r6,a
      0002B9 42 B3            [12]  953 	orl	_P1M1,a
      0002BB 80 1A            [24]  954 	sjmp	00131$
      0002BD                        955 00130$:
      0002BD EF               [12]  956 	mov	a,r7
      0002BE 03               [12]  957 	rr	a
      0002BF 03               [12]  958 	rr	a
      0002C0 54 3F            [12]  959 	anl	a,#0x3F
      0002C2 FE               [12]  960 	mov	r6,a
      0002C3 74 07            [12]  961 	mov	a,#0x07
      0002C5 5E               [12]  962 	anl	a,r6
      0002C6 F5 F0            [12]  963 	mov	b,a
      0002C8 05 F0            [12]  964 	inc	b
      0002CA 74 01            [12]  965 	mov	a,#0x01
      0002CC 80 02            [24]  966 	sjmp	00243$
      0002CE                        967 00241$:
      0002CE 25 E0            [12]  968 	add	a,acc
      0002D0                        969 00243$:
      0002D0 D5 F0 FB         [24]  970 	djnz	b,00241$
      0002D3 F4               [12]  971 	cpl	a
      0002D4 FE               [12]  972 	mov	r6,a
      0002D5 52 B3            [12]  973 	anl	_P1M1,a
      0002D7                        974 00131$:
                                    975 ;	lib/gpio.c:66: if (GPIO_PWM(pin)) {
      0002D7 74 80            [12]  976 	mov	a,#0x80
      0002D9 5F               [12]  977 	anl	a,r7
      0002DA FE               [12]  978 	mov	r6,a
      0002DB BE 80 02         [24]  979 	cjne	r6,#0x80,00244$
      0002DE 80 03            [24]  980 	sjmp	00245$
      0002E0                        981 00244$:
      0002E0 02 03 6A         [24]  982 	ljmp	00147$
      0002E3                        983 00245$:
                                    984 ;	lib/gpio.c:67: switch (GPIO_PIN(pin)) {
      0002E3 EF               [12]  985 	mov	a,r7
      0002E4 03               [12]  986 	rr	a
      0002E5 03               [12]  987 	rr	a
      0002E6 54 07            [12]  988 	anl	a,#(0x3F&0x07)
      0002E8 FE               [12]  989 	mov	r6,a
      0002E9 24 FA            [12]  990 	add	a,#0xff - 0x05
      0002EB 50 03            [24]  991 	jnc	00246$
      0002ED 02 03 E4         [24]  992 	ljmp	00150$
      0002F0                        993 00246$:
      0002F0 EE               [12]  994 	mov	a,r6
      0002F1 2E               [12]  995 	add	a,r6
      0002F2 2E               [12]  996 	add	a,r6
      0002F3 90 02 F7         [24]  997 	mov	dptr,#00247$
      0002F6 73               [24]  998 	jmp	@a+dptr
      0002F7                        999 00247$:
      0002F7 02 03 09         [24] 1000 	ljmp	00132$
      0002FA 02 03 0F         [24] 1001 	ljmp	00133$
      0002FD 02 03 15         [24] 1002 	ljmp	00134$
      000300 02 03 67         [24] 1003 	ljmp	00137$
      000303 02 03 1B         [24] 1004 	ljmp	00135$
      000306 02 03 41         [24] 1005 	ljmp	00136$
                                   1006 ;	lib/gpio.c:68: case 0:
      000309                       1007 00132$:
                                   1008 ;	lib/gpio.c:69: PWM2_P10_OUTPUT_ENABLE;
      000309 43 DE 04         [24] 1009 	orl	_PIOCON0,#0x04
                                   1010 ;	lib/gpio.c:70: break;
      00030C 02 03 E4         [24] 1011 	ljmp	00150$
                                   1012 ;	lib/gpio.c:71: case 1:
      00030F                       1013 00133$:
                                   1014 ;	lib/gpio.c:72: PWM1_P11_OUTPUT_ENABLE;
      00030F 43 DE 02         [24] 1015 	orl	_PIOCON0,#0x02
                                   1016 ;	lib/gpio.c:73: break;
      000312 02 03 E4         [24] 1017 	ljmp	00150$
                                   1018 ;	lib/gpio.c:74: case 2:
      000315                       1019 00134$:
                                   1020 ;	lib/gpio.c:75: PWM0_P12_OUTPUT_ENABLE;
      000315 43 DE 01         [24] 1021 	orl	_PIOCON0,#0x01
                                   1022 ;	lib/gpio.c:76: break;
      000318 02 03 E4         [24] 1023 	ljmp	00150$
                                   1024 ;	lib/gpio.c:77: case 4:
      00031B                       1025 00135$:
                                   1026 ;	lib/gpio.c:78: PWM1_P14_OUTPUT_ENABLE;
      00031B A2 AF            [12] 1027 	mov	c,_EA
      00031D E4               [12] 1028 	clr	a
      00031E 33               [12] 1029 	rlc	a
      00031F F5 08            [12] 1030 	mov	_BIT_TMP,a
      000321 C2 AF            [12] 1031 	clr	_EA
      000323 75 C7 AA         [24] 1032 	mov	_TA,#0xAA
      000326 75 C7 55         [24] 1033 	mov	_TA,#0x55
      000329 43 91 01         [24] 1034 	orl	_SFRS,#0x01
      00032C 43 C6 02         [24] 1035 	orl	_PIOCON1,#0x02
      00032F 75 C7 AA         [24] 1036 	mov	_TA,#0xAA
      000332 75 C7 55         [24] 1037 	mov	_TA,#0x55
      000335 53 91 FE         [24] 1038 	anl	_SFRS,#0xFE
      000338 E5 08            [12] 1039 	mov	a,_BIT_TMP
      00033A 24 FF            [12] 1040 	add	a,#0xff
      00033C 92 AF            [24] 1041 	mov	_EA,c
                                   1042 ;	lib/gpio.c:79: break;
      00033E 02 03 E4         [24] 1043 	ljmp	00150$
                                   1044 ;	lib/gpio.c:80: case 5:
      000341                       1045 00136$:
                                   1046 ;	lib/gpio.c:81: PWM5_P15_OUTPUT_ENABLE;
      000341 A2 AF            [12] 1047 	mov	c,_EA
      000343 E4               [12] 1048 	clr	a
      000344 33               [12] 1049 	rlc	a
      000345 F5 08            [12] 1050 	mov	_BIT_TMP,a
      000347 C2 AF            [12] 1051 	clr	_EA
      000349 75 C7 AA         [24] 1052 	mov	_TA,#0xAA
      00034C 75 C7 55         [24] 1053 	mov	_TA,#0x55
      00034F 43 91 01         [24] 1054 	orl	_SFRS,#0x01
      000352 43 C6 20         [24] 1055 	orl	_PIOCON1,#0x20
      000355 75 C7 AA         [24] 1056 	mov	_TA,#0xAA
      000358 75 C7 55         [24] 1057 	mov	_TA,#0x55
      00035B 53 91 FE         [24] 1058 	anl	_SFRS,#0xFE
      00035E E5 08            [12] 1059 	mov	a,_BIT_TMP
      000360 24 FF            [12] 1060 	add	a,#0xff
      000362 92 AF            [24] 1061 	mov	_EA,c
                                   1062 ;	lib/gpio.c:82: break;
      000364 02 03 E4         [24] 1063 	ljmp	00150$
                                   1064 ;	lib/gpio.c:83: default:
      000367                       1065 00137$:
                                   1066 ;	lib/gpio.c:85: }
      000367 02 03 E4         [24] 1067 	ljmp	00150$
      00036A                       1068 00147$:
                                   1069 ;	lib/gpio.c:87: switch (GPIO_PIN(pin)) {
      00036A EF               [12] 1070 	mov	a,r7
      00036B 03               [12] 1071 	rr	a
      00036C 03               [12] 1072 	rr	a
      00036D 54 07            [12] 1073 	anl	a,#(0x3F&0x07)
      00036F FE               [12] 1074 	mov	r6,a
      000370 24 FA            [12] 1075 	add	a,#0xff - 0x05
      000372 40 70            [24] 1076 	jc	00150$
      000374 EE               [12] 1077 	mov	a,r6
      000375 2E               [12] 1078 	add	a,r6
      000376 2E               [12] 1079 	add	a,r6
      000377 90 03 7B         [24] 1080 	mov	dptr,#00249$
      00037A 73               [24] 1081 	jmp	@a+dptr
      00037B                       1082 00249$:
      00037B 02 03 8D         [24] 1083 	ljmp	00139$
      00037E 02 03 92         [24] 1084 	ljmp	00140$
      000381 02 03 97         [24] 1085 	ljmp	00141$
      000384 02 03 E4         [24] 1086 	ljmp	00144$
      000387 02 03 9C         [24] 1087 	ljmp	00142$
      00038A 02 03 C1         [24] 1088 	ljmp	00143$
                                   1089 ;	lib/gpio.c:88: case 0:
      00038D                       1090 00139$:
                                   1091 ;	lib/gpio.c:89: PWM2_P10_OUTPUT_DISABLE;
      00038D 53 DE FB         [24] 1092 	anl	_PIOCON0,#0xFB
                                   1093 ;	lib/gpio.c:90: break;
                                   1094 ;	lib/gpio.c:91: case 1:
      000390 80 52            [24] 1095 	sjmp	00150$
      000392                       1096 00140$:
                                   1097 ;	lib/gpio.c:92: PWM1_P11_OUTPUT_DISABLE;
      000392 53 DE FD         [24] 1098 	anl	_PIOCON0,#0xFD
                                   1099 ;	lib/gpio.c:93: break;
                                   1100 ;	lib/gpio.c:94: case 2:
      000395 80 4D            [24] 1101 	sjmp	00150$
      000397                       1102 00141$:
                                   1103 ;	lib/gpio.c:95: PWM0_P12_OUTPUT_DISABLE;
      000397 53 DE FE         [24] 1104 	anl	_PIOCON0,#0xFE
                                   1105 ;	lib/gpio.c:96: break;
                                   1106 ;	lib/gpio.c:97: case 4:
      00039A 80 48            [24] 1107 	sjmp	00150$
      00039C                       1108 00142$:
                                   1109 ;	lib/gpio.c:98: PWM1_P14_OUTPUT_DISABLE;
      00039C A2 AF            [12] 1110 	mov	c,_EA
      00039E E4               [12] 1111 	clr	a
      00039F 33               [12] 1112 	rlc	a
      0003A0 F5 08            [12] 1113 	mov	_BIT_TMP,a
      0003A2 C2 AF            [12] 1114 	clr	_EA
      0003A4 75 C7 AA         [24] 1115 	mov	_TA,#0xAA
      0003A7 75 C7 55         [24] 1116 	mov	_TA,#0x55
      0003AA 43 91 01         [24] 1117 	orl	_SFRS,#0x01
      0003AD 53 C6 FD         [24] 1118 	anl	_PIOCON1,#0xFD
      0003B0 75 C7 AA         [24] 1119 	mov	_TA,#0xAA
      0003B3 75 C7 55         [24] 1120 	mov	_TA,#0x55
      0003B6 53 91 FE         [24] 1121 	anl	_SFRS,#0xFE
      0003B9 E5 08            [12] 1122 	mov	a,_BIT_TMP
      0003BB 24 FF            [12] 1123 	add	a,#0xff
      0003BD 92 AF            [24] 1124 	mov	_EA,c
                                   1125 ;	lib/gpio.c:99: break;
                                   1126 ;	lib/gpio.c:100: case 5:
      0003BF 80 23            [24] 1127 	sjmp	00150$
      0003C1                       1128 00143$:
                                   1129 ;	lib/gpio.c:101: PWM5_P15_OUTPUT_DISABLE;
      0003C1 A2 AF            [12] 1130 	mov	c,_EA
      0003C3 E4               [12] 1131 	clr	a
      0003C4 33               [12] 1132 	rlc	a
      0003C5 F5 08            [12] 1133 	mov	_BIT_TMP,a
      0003C7 C2 AF            [12] 1134 	clr	_EA
      0003C9 75 C7 AA         [24] 1135 	mov	_TA,#0xAA
      0003CC 75 C7 55         [24] 1136 	mov	_TA,#0x55
      0003CF 43 91 01         [24] 1137 	orl	_SFRS,#0x01
      0003D2 53 C6 DF         [24] 1138 	anl	_PIOCON1,#0xDF
      0003D5 75 C7 AA         [24] 1139 	mov	_TA,#0xAA
      0003D8 75 C7 55         [24] 1140 	mov	_TA,#0x55
      0003DB 53 91 FE         [24] 1141 	anl	_SFRS,#0xFE
      0003DE E5 08            [12] 1142 	mov	a,_BIT_TMP
      0003E0 24 FF            [12] 1143 	add	a,#0xff
      0003E2 92 AF            [24] 1144 	mov	_EA,c
                                   1145 ;	lib/gpio.c:102: break;
                                   1146 ;	lib/gpio.c:103: default:
                                   1147 ;	lib/gpio.c:105: }
      0003E4                       1148 00144$:
      0003E4                       1149 00150$:
                                   1150 ;	lib/gpio.c:108: if (GPIO_PORT(pin) == 3) {
      0003E4 74 03            [12] 1151 	mov	a,#0x03
      0003E6 5F               [12] 1152 	anl	a,r7
      0003E7 FE               [12] 1153 	mov	r6,a
      0003E8 BE 03 02         [24] 1154 	cjne	r6,#0x03,00250$
      0003EB 80 03            [24] 1155 	sjmp	00251$
      0003ED                       1156 00250$:
      0003ED 02 04 6F         [24] 1157 	ljmp	00159$
      0003F0                       1158 00251$:
                                   1159 ;	lib/gpio.c:109: bitWrite(P3M2, (GPIO_PIN(pin)), (mode & 1));
      0003F0 E5 0D            [12] 1160 	mov	a,_bp
      0003F2 24 FD            [12] 1161 	add	a,#0xfd
      0003F4 F8               [12] 1162 	mov	r0,a
      0003F5 E6               [12] 1163 	mov	a,@r0
      0003F6 30 E0 1B         [24] 1164 	jnb	acc.0,00152$
      0003F9 EF               [12] 1165 	mov	a,r7
      0003FA 03               [12] 1166 	rr	a
      0003FB 03               [12] 1167 	rr	a
      0003FC 54 3F            [12] 1168 	anl	a,#0x3F
      0003FE FE               [12] 1169 	mov	r6,a
      0003FF 74 07            [12] 1170 	mov	a,#0x07
      000401 5E               [12] 1171 	anl	a,r6
      000402 F5 F0            [12] 1172 	mov	b,a
      000404 05 F0            [12] 1173 	inc	b
      000406 74 01            [12] 1174 	mov	a,#0x01
      000408 80 02            [24] 1175 	sjmp	00255$
      00040A                       1176 00253$:
      00040A 25 E0            [12] 1177 	add	a,acc
      00040C                       1178 00255$:
      00040C D5 F0 FB         [24] 1179 	djnz	b,00253$
      00040F FE               [12] 1180 	mov	r6,a
      000410 42 AD            [12] 1181 	orl	_P3M2,a
      000412 80 1A            [24] 1182 	sjmp	00153$
      000414                       1183 00152$:
      000414 EF               [12] 1184 	mov	a,r7
      000415 03               [12] 1185 	rr	a
      000416 03               [12] 1186 	rr	a
      000417 54 3F            [12] 1187 	anl	a,#0x3F
      000419 FE               [12] 1188 	mov	r6,a
      00041A 74 07            [12] 1189 	mov	a,#0x07
      00041C 5E               [12] 1190 	anl	a,r6
      00041D F5 F0            [12] 1191 	mov	b,a
      00041F 05 F0            [12] 1192 	inc	b
      000421 74 01            [12] 1193 	mov	a,#0x01
      000423 80 02            [24] 1194 	sjmp	00258$
      000425                       1195 00256$:
      000425 25 E0            [12] 1196 	add	a,acc
      000427                       1197 00258$:
      000427 D5 F0 FB         [24] 1198 	djnz	b,00256$
      00042A F4               [12] 1199 	cpl	a
      00042B FE               [12] 1200 	mov	r6,a
      00042C 52 AD            [12] 1201 	anl	_P3M2,a
      00042E                       1202 00153$:
                                   1203 ;	lib/gpio.c:110: bitWrite(P3M1, (GPIO_PIN(pin)), ((mode >> 1) & 1));
      00042E E5 0D            [12] 1204 	mov	a,_bp
      000430 24 FD            [12] 1205 	add	a,#0xfd
      000432 F8               [12] 1206 	mov	r0,a
      000433 E6               [12] 1207 	mov	a,@r0
      000434 03               [12] 1208 	rr	a
      000435 54 01            [12] 1209 	anl	a,#0x01
      000437 FE               [12] 1210 	mov	r6,a
      000438 60 1B            [24] 1211 	jz	00155$
      00043A EF               [12] 1212 	mov	a,r7
      00043B 03               [12] 1213 	rr	a
      00043C 03               [12] 1214 	rr	a
      00043D 54 3F            [12] 1215 	anl	a,#0x3F
      00043F FE               [12] 1216 	mov	r6,a
      000440 74 07            [12] 1217 	mov	a,#0x07
      000442 5E               [12] 1218 	anl	a,r6
      000443 F5 F0            [12] 1219 	mov	b,a
      000445 05 F0            [12] 1220 	inc	b
      000447 74 01            [12] 1221 	mov	a,#0x01
      000449 80 02            [24] 1222 	sjmp	00262$
      00044B                       1223 00260$:
      00044B 25 E0            [12] 1224 	add	a,acc
      00044D                       1225 00262$:
      00044D D5 F0 FB         [24] 1226 	djnz	b,00260$
      000450 FE               [12] 1227 	mov	r6,a
      000451 42 AC            [12] 1228 	orl	_P3M1,a
      000453 80 1A            [24] 1229 	sjmp	00159$
      000455                       1230 00155$:
      000455 EF               [12] 1231 	mov	a,r7
      000456 03               [12] 1232 	rr	a
      000457 03               [12] 1233 	rr	a
      000458 54 3F            [12] 1234 	anl	a,#0x3F
      00045A FF               [12] 1235 	mov	r7,a
      00045B 74 07            [12] 1236 	mov	a,#0x07
      00045D 5F               [12] 1237 	anl	a,r7
      00045E F5 F0            [12] 1238 	mov	b,a
      000460 05 F0            [12] 1239 	inc	b
      000462 74 01            [12] 1240 	mov	a,#0x01
      000464 80 02            [24] 1241 	sjmp	00265$
      000466                       1242 00263$:
      000466 25 E0            [12] 1243 	add	a,acc
      000468                       1244 00265$:
      000468 D5 F0 FB         [24] 1245 	djnz	b,00263$
      00046B F4               [12] 1246 	cpl	a
      00046C FF               [12] 1247 	mov	r7,a
      00046D 52 AC            [12] 1248 	anl	_P3M1,a
      00046F                       1249 00159$:
      00046F D0 0D            [24] 1250 	pop	_bp
      000471 22               [24] 1251 	ret
                                   1252 ;------------------------------------------------------------
                                   1253 ;Allocation info for local variables in function 'digitalRead'
                                   1254 ;------------------------------------------------------------
                                   1255 ;pin                       Allocated to registers r7 
                                   1256 ;------------------------------------------------------------
                                   1257 ;	lib/gpio.c:114: byte digitalRead(byte pin) {
                                   1258 ;	-----------------------------------------
                                   1259 ;	 function digitalRead
                                   1260 ;	-----------------------------------------
      000472                       1261 _digitalRead:
                                   1262 ;	lib/gpio.c:115: if (GPIO_PORT(pin) == 0) {
      000472 E5 82            [12] 1263 	mov	a,dpl
      000474 FF               [12] 1264 	mov	r7,a
      000475 54 03            [12] 1265 	anl	a,#0x03
      000477 60 02            [24] 1266 	jz	00119$
      000479 80 1B            [24] 1267 	sjmp	00102$
      00047B                       1268 00119$:
                                   1269 ;	lib/gpio.c:116: return bitRead(P0, GPIO_PIN(pin));
      00047B EF               [12] 1270 	mov	a,r7
      00047C 03               [12] 1271 	rr	a
      00047D 03               [12] 1272 	rr	a
      00047E 54 3F            [12] 1273 	anl	a,#0x3F
      000480 FE               [12] 1274 	mov	r6,a
      000481 74 07            [12] 1275 	mov	a,#0x07
      000483 5E               [12] 1276 	anl	a,r6
      000484 F5 F0            [12] 1277 	mov	b,a
      000486 05 F0            [12] 1278 	inc	b
      000488 E5 80            [12] 1279 	mov	a,_P0
      00048A 80 02            [24] 1280 	sjmp	00121$
      00048C                       1281 00120$:
      00048C C3               [12] 1282 	clr	c
      00048D 13               [12] 1283 	rrc	a
      00048E                       1284 00121$:
      00048E D5 F0 FB         [24] 1285 	djnz	b,00120$
      000491 54 01            [12] 1286 	anl	a,#0x01
      000493 F5 82            [12] 1287 	mov	dpl,a
      000495 22               [24] 1288 	ret
      000496                       1289 00102$:
                                   1290 ;	lib/gpio.c:118: if (GPIO_PORT(pin) == 1) {
      000496 74 03            [12] 1291 	mov	a,#0x03
      000498 5F               [12] 1292 	anl	a,r7
      000499 FE               [12] 1293 	mov	r6,a
      00049A BE 01 1B         [24] 1294 	cjne	r6,#0x01,00104$
                                   1295 ;	lib/gpio.c:119: return bitRead(P1, GPIO_PIN(pin));
      00049D EF               [12] 1296 	mov	a,r7
      00049E 03               [12] 1297 	rr	a
      00049F 03               [12] 1298 	rr	a
      0004A0 54 3F            [12] 1299 	anl	a,#0x3F
      0004A2 FE               [12] 1300 	mov	r6,a
      0004A3 74 07            [12] 1301 	mov	a,#0x07
      0004A5 5E               [12] 1302 	anl	a,r6
      0004A6 F5 F0            [12] 1303 	mov	b,a
      0004A8 05 F0            [12] 1304 	inc	b
      0004AA E5 90            [12] 1305 	mov	a,_P1
      0004AC 80 02            [24] 1306 	sjmp	00125$
      0004AE                       1307 00124$:
      0004AE C3               [12] 1308 	clr	c
      0004AF 13               [12] 1309 	rrc	a
      0004B0                       1310 00125$:
      0004B0 D5 F0 FB         [24] 1311 	djnz	b,00124$
      0004B3 54 01            [12] 1312 	anl	a,#0x01
      0004B5 F5 82            [12] 1313 	mov	dpl,a
      0004B7 22               [24] 1314 	ret
      0004B8                       1315 00104$:
                                   1316 ;	lib/gpio.c:121: if (GPIO_PORT(pin) == 3) {
      0004B8 74 03            [12] 1317 	mov	a,#0x03
      0004BA 5F               [12] 1318 	anl	a,r7
      0004BB FE               [12] 1319 	mov	r6,a
      0004BC BE 03 1B         [24] 1320 	cjne	r6,#0x03,00106$
                                   1321 ;	lib/gpio.c:122: return bitRead(P3, GPIO_PIN(pin));
      0004BF EF               [12] 1322 	mov	a,r7
      0004C0 03               [12] 1323 	rr	a
      0004C1 03               [12] 1324 	rr	a
      0004C2 54 3F            [12] 1325 	anl	a,#0x3F
      0004C4 FF               [12] 1326 	mov	r7,a
      0004C5 74 07            [12] 1327 	mov	a,#0x07
      0004C7 5F               [12] 1328 	anl	a,r7
      0004C8 F5 F0            [12] 1329 	mov	b,a
      0004CA 05 F0            [12] 1330 	inc	b
      0004CC E5 B0            [12] 1331 	mov	a,_P3
      0004CE 80 02            [24] 1332 	sjmp	00129$
      0004D0                       1333 00128$:
      0004D0 C3               [12] 1334 	clr	c
      0004D1 13               [12] 1335 	rrc	a
      0004D2                       1336 00129$:
      0004D2 D5 F0 FB         [24] 1337 	djnz	b,00128$
      0004D5 54 01            [12] 1338 	anl	a,#0x01
      0004D7 F5 82            [12] 1339 	mov	dpl,a
      0004D9 22               [24] 1340 	ret
      0004DA                       1341 00106$:
                                   1342 ;	lib/gpio.c:124: return 0;
      0004DA 75 82 00         [24] 1343 	mov	dpl,#0x00
      0004DD 22               [24] 1344 	ret
                                   1345 ;------------------------------------------------------------
                                   1346 ;Allocation info for local variables in function 'digitalWrite'
                                   1347 ;------------------------------------------------------------
                                   1348 ;value                     Allocated to stack - _bp -3
                                   1349 ;pin                       Allocated to registers r7 
                                   1350 ;------------------------------------------------------------
                                   1351 ;	lib/gpio.c:127: void digitalWrite(byte pin, byte value) {
                                   1352 ;	-----------------------------------------
                                   1353 ;	 function digitalWrite
                                   1354 ;	-----------------------------------------
      0004DE                       1355 _digitalWrite:
      0004DE C0 0D            [24] 1356 	push	_bp
      0004E0 85 81 0D         [24] 1357 	mov	_bp,sp
                                   1358 ;	lib/gpio.c:128: if (GPIO_PORT(pin) == 0) {
      0004E3 E5 82            [12] 1359 	mov	a,dpl
      0004E5 FF               [12] 1360 	mov	r7,a
      0004E6 54 03            [12] 1361 	anl	a,#0x03
      0004E8 60 02            [24] 1362 	jz	00137$
      0004EA 80 3D            [24] 1363 	sjmp	00105$
      0004EC                       1364 00137$:
                                   1365 ;	lib/gpio.c:129: bitWrite(P0, (GPIO_PIN(pin)), value);
      0004EC E5 0D            [12] 1366 	mov	a,_bp
      0004EE 24 FD            [12] 1367 	add	a,#0xfd
      0004F0 F8               [12] 1368 	mov	r0,a
      0004F1 E6               [12] 1369 	mov	a,@r0
      0004F2 60 1B            [24] 1370 	jz	00102$
      0004F4 EF               [12] 1371 	mov	a,r7
      0004F5 03               [12] 1372 	rr	a
      0004F6 03               [12] 1373 	rr	a
      0004F7 54 3F            [12] 1374 	anl	a,#0x3F
      0004F9 FE               [12] 1375 	mov	r6,a
      0004FA 74 07            [12] 1376 	mov	a,#0x07
      0004FC 5E               [12] 1377 	anl	a,r6
      0004FD F5 F0            [12] 1378 	mov	b,a
      0004FF 05 F0            [12] 1379 	inc	b
      000501 74 01            [12] 1380 	mov	a,#0x01
      000503 80 02            [24] 1381 	sjmp	00141$
      000505                       1382 00139$:
      000505 25 E0            [12] 1383 	add	a,acc
      000507                       1384 00141$:
      000507 D5 F0 FB         [24] 1385 	djnz	b,00139$
      00050A FE               [12] 1386 	mov	r6,a
      00050B 42 80            [12] 1387 	orl	_P0,a
      00050D 80 1A            [24] 1388 	sjmp	00105$
      00050F                       1389 00102$:
      00050F EF               [12] 1390 	mov	a,r7
      000510 03               [12] 1391 	rr	a
      000511 03               [12] 1392 	rr	a
      000512 54 3F            [12] 1393 	anl	a,#0x3F
      000514 FE               [12] 1394 	mov	r6,a
      000515 74 07            [12] 1395 	mov	a,#0x07
      000517 5E               [12] 1396 	anl	a,r6
      000518 F5 F0            [12] 1397 	mov	b,a
      00051A 05 F0            [12] 1398 	inc	b
      00051C 74 01            [12] 1399 	mov	a,#0x01
      00051E 80 02            [24] 1400 	sjmp	00144$
      000520                       1401 00142$:
      000520 25 E0            [12] 1402 	add	a,acc
      000522                       1403 00144$:
      000522 D5 F0 FB         [24] 1404 	djnz	b,00142$
      000525 F4               [12] 1405 	cpl	a
      000526 FE               [12] 1406 	mov	r6,a
      000527 52 80            [12] 1407 	anl	_P0,a
      000529                       1408 00105$:
                                   1409 ;	lib/gpio.c:131: if (GPIO_PORT(pin) == 1) {
      000529 74 03            [12] 1410 	mov	a,#0x03
      00052B 5F               [12] 1411 	anl	a,r7
      00052C FE               [12] 1412 	mov	r6,a
      00052D BE 01 3D         [24] 1413 	cjne	r6,#0x01,00110$
                                   1414 ;	lib/gpio.c:132: bitWrite(P1, (GPIO_PIN(pin)), value);
      000530 E5 0D            [12] 1415 	mov	a,_bp
      000532 24 FD            [12] 1416 	add	a,#0xfd
      000534 F8               [12] 1417 	mov	r0,a
      000535 E6               [12] 1418 	mov	a,@r0
      000536 60 1B            [24] 1419 	jz	00107$
      000538 EF               [12] 1420 	mov	a,r7
      000539 03               [12] 1421 	rr	a
      00053A 03               [12] 1422 	rr	a
      00053B 54 3F            [12] 1423 	anl	a,#0x3F
      00053D FE               [12] 1424 	mov	r6,a
      00053E 74 07            [12] 1425 	mov	a,#0x07
      000540 5E               [12] 1426 	anl	a,r6
      000541 F5 F0            [12] 1427 	mov	b,a
      000543 05 F0            [12] 1428 	inc	b
      000545 74 01            [12] 1429 	mov	a,#0x01
      000547 80 02            [24] 1430 	sjmp	00150$
      000549                       1431 00148$:
      000549 25 E0            [12] 1432 	add	a,acc
      00054B                       1433 00150$:
      00054B D5 F0 FB         [24] 1434 	djnz	b,00148$
      00054E FE               [12] 1435 	mov	r6,a
      00054F 42 90            [12] 1436 	orl	_P1,a
      000551 80 1A            [24] 1437 	sjmp	00110$
      000553                       1438 00107$:
      000553 EF               [12] 1439 	mov	a,r7
      000554 03               [12] 1440 	rr	a
      000555 03               [12] 1441 	rr	a
      000556 54 3F            [12] 1442 	anl	a,#0x3F
      000558 FE               [12] 1443 	mov	r6,a
      000559 74 07            [12] 1444 	mov	a,#0x07
      00055B 5E               [12] 1445 	anl	a,r6
      00055C F5 F0            [12] 1446 	mov	b,a
      00055E 05 F0            [12] 1447 	inc	b
      000560 74 01            [12] 1448 	mov	a,#0x01
      000562 80 02            [24] 1449 	sjmp	00153$
      000564                       1450 00151$:
      000564 25 E0            [12] 1451 	add	a,acc
      000566                       1452 00153$:
      000566 D5 F0 FB         [24] 1453 	djnz	b,00151$
      000569 F4               [12] 1454 	cpl	a
      00056A FE               [12] 1455 	mov	r6,a
      00056B 52 90            [12] 1456 	anl	_P1,a
      00056D                       1457 00110$:
                                   1458 ;	lib/gpio.c:134: if (GPIO_PORT(pin) == 3) {
      00056D 74 03            [12] 1459 	mov	a,#0x03
      00056F 5F               [12] 1460 	anl	a,r7
      000570 FE               [12] 1461 	mov	r6,a
      000571 BE 03 3D         [24] 1462 	cjne	r6,#0x03,00116$
                                   1463 ;	lib/gpio.c:135: bitWrite(P3, (GPIO_PIN(pin)), value);
      000574 E5 0D            [12] 1464 	mov	a,_bp
      000576 24 FD            [12] 1465 	add	a,#0xfd
      000578 F8               [12] 1466 	mov	r0,a
      000579 E6               [12] 1467 	mov	a,@r0
      00057A 60 1B            [24] 1468 	jz	00112$
      00057C EF               [12] 1469 	mov	a,r7
      00057D 03               [12] 1470 	rr	a
      00057E 03               [12] 1471 	rr	a
      00057F 54 3F            [12] 1472 	anl	a,#0x3F
      000581 FE               [12] 1473 	mov	r6,a
      000582 74 07            [12] 1474 	mov	a,#0x07
      000584 5E               [12] 1475 	anl	a,r6
      000585 F5 F0            [12] 1476 	mov	b,a
      000587 05 F0            [12] 1477 	inc	b
      000589 74 01            [12] 1478 	mov	a,#0x01
      00058B 80 02            [24] 1479 	sjmp	00159$
      00058D                       1480 00157$:
      00058D 25 E0            [12] 1481 	add	a,acc
      00058F                       1482 00159$:
      00058F D5 F0 FB         [24] 1483 	djnz	b,00157$
      000592 FE               [12] 1484 	mov	r6,a
      000593 42 B0            [12] 1485 	orl	_P3,a
      000595 80 1A            [24] 1486 	sjmp	00116$
      000597                       1487 00112$:
      000597 EF               [12] 1488 	mov	a,r7
      000598 03               [12] 1489 	rr	a
      000599 03               [12] 1490 	rr	a
      00059A 54 3F            [12] 1491 	anl	a,#0x3F
      00059C FF               [12] 1492 	mov	r7,a
      00059D 74 07            [12] 1493 	mov	a,#0x07
      00059F 5F               [12] 1494 	anl	a,r7
      0005A0 F5 F0            [12] 1495 	mov	b,a
      0005A2 05 F0            [12] 1496 	inc	b
      0005A4 74 01            [12] 1497 	mov	a,#0x01
      0005A6 80 02            [24] 1498 	sjmp	00162$
      0005A8                       1499 00160$:
      0005A8 25 E0            [12] 1500 	add	a,acc
      0005AA                       1501 00162$:
      0005AA D5 F0 FB         [24] 1502 	djnz	b,00160$
      0005AD F4               [12] 1503 	cpl	a
      0005AE FF               [12] 1504 	mov	r7,a
      0005AF 52 B0            [12] 1505 	anl	_P3,a
      0005B1                       1506 00116$:
      0005B1 D0 0D            [24] 1507 	pop	_bp
      0005B3 22               [24] 1508 	ret
                                   1509 ;------------------------------------------------------------
                                   1510 ;Allocation info for local variables in function 'analogRead'
                                   1511 ;------------------------------------------------------------
                                   1512 ;pin                       Allocated to registers r7 
                                   1513 ;result                    Allocated to registers r6 r7 
                                   1514 ;------------------------------------------------------------
                                   1515 ;	lib/gpio.c:139: word analogRead(byte pin) {
                                   1516 ;	-----------------------------------------
                                   1517 ;	 function analogRead
                                   1518 ;	-----------------------------------------
      0005B4                       1519 _analogRead:
                                   1520 ;	lib/gpio.c:141: if (GPIO_PORT(pin) == 0) {
      0005B4 E5 82            [12] 1521 	mov	a,dpl
      0005B6 FF               [12] 1522 	mov	r7,a
      0005B7 54 03            [12] 1523 	anl	a,#0x03
      0005B9 60 03            [24] 1524 	jz	00181$
      0005BB 02 06 74         [24] 1525 	ljmp	00111$
      0005BE                       1526 00181$:
                                   1527 ;	lib/gpio.c:142: if (GPIO_ADC(pin)) {
      0005BE 74 40            [12] 1528 	mov	a,#0x40
      0005C0 5F               [12] 1529 	anl	a,r7
      0005C1 FE               [12] 1530 	mov	r6,a
      0005C2 BE 40 02         [24] 1531 	cjne	r6,#0x40,00182$
      0005C5 80 03            [24] 1532 	sjmp	00183$
      0005C7                       1533 00182$:
      0005C7 02 06 74         [24] 1534 	ljmp	00111$
      0005CA                       1535 00183$:
                                   1536 ;	lib/gpio.c:143: switch (GPIO_PIN(pin)) {
      0005CA EF               [12] 1537 	mov	a,r7
      0005CB 03               [12] 1538 	rr	a
      0005CC 03               [12] 1539 	rr	a
      0005CD 54 3F            [12] 1540 	anl	a,#0x3F
      0005CF FE               [12] 1541 	mov	r6,a
      0005D0 53 06 07         [24] 1542 	anl	ar6,#0x07
      0005D3 BE 03 02         [24] 1543 	cjne	r6,#0x03,00184$
      0005D6 80 17            [24] 1544 	sjmp	00101$
      0005D8                       1545 00184$:
      0005D8 BE 04 02         [24] 1546 	cjne	r6,#0x04,00185$
      0005DB 80 2D            [24] 1547 	sjmp	00102$
      0005DD                       1548 00185$:
      0005DD BE 05 02         [24] 1549 	cjne	r6,#0x05,00186$
      0005E0 80 43            [24] 1550 	sjmp	00103$
      0005E2                       1551 00186$:
      0005E2 BE 06 02         [24] 1552 	cjne	r6,#0x06,00187$
      0005E5 80 59            [24] 1553 	sjmp	00104$
      0005E7                       1554 00187$:
      0005E7 BE 07 02         [24] 1555 	cjne	r6,#0x07,00188$
      0005EA 80 6F            [24] 1556 	sjmp	00105$
      0005EC                       1557 00188$:
      0005EC 02 06 74         [24] 1558 	ljmp	00111$
                                   1559 ;	lib/gpio.c:144: case 3:
      0005EF                       1560 00101$:
                                   1561 ;	lib/gpio.c:145: Enable_ADC_AIN6;
      0005EF 53 E8 F0         [24] 1562 	anl	_ADCCON0,#0xF0
      0005F2 43 E8 06         [24] 1563 	orl	_ADCCON0,#0x06
      0005F5 43 B1 08         [24] 1564 	orl	_P0M1,#0x08
      0005F8 AE B2            [24] 1565 	mov	r6,_P0M2
      0005FA 74 F7            [12] 1566 	mov	a,#0xF7
      0005FC 5E               [12] 1567 	anl	a,r6
      0005FD F5 B2            [12] 1568 	mov	_P0M2,a
      0005FF 75 F6 00         [24] 1569 	mov	_AINDIDS,#0x00
      000602 43 F6 40         [24] 1570 	orl	_AINDIDS,#0x40
      000605 43 E1 01         [24] 1571 	orl	_ADCCON1,#0x01
                                   1572 ;	lib/gpio.c:146: break;
                                   1573 ;	lib/gpio.c:147: case 4:
      000608 80 6A            [24] 1574 	sjmp	00111$
      00060A                       1575 00102$:
                                   1576 ;	lib/gpio.c:148: Enable_ADC_AIN5;
      00060A 53 E8 F0         [24] 1577 	anl	_ADCCON0,#0xF0
      00060D 43 E8 05         [24] 1578 	orl	_ADCCON0,#0x05
      000610 43 B1 10         [24] 1579 	orl	_P0M1,#0x10
      000613 AE B2            [24] 1580 	mov	r6,_P0M2
      000615 74 EF            [12] 1581 	mov	a,#0xEF
      000617 5E               [12] 1582 	anl	a,r6
      000618 F5 B2            [12] 1583 	mov	_P0M2,a
      00061A 75 F6 00         [24] 1584 	mov	_AINDIDS,#0x00
      00061D 43 F6 20         [24] 1585 	orl	_AINDIDS,#0x20
      000620 43 E1 01         [24] 1586 	orl	_ADCCON1,#0x01
                                   1587 ;	lib/gpio.c:149: break;
                                   1588 ;	lib/gpio.c:150: case 5:
      000623 80 4F            [24] 1589 	sjmp	00111$
      000625                       1590 00103$:
                                   1591 ;	lib/gpio.c:151: Enable_ADC_AIN4;
      000625 53 E8 F0         [24] 1592 	anl	_ADCCON0,#0xF0
      000628 43 E8 04         [24] 1593 	orl	_ADCCON0,#0x04
      00062B 43 B1 20         [24] 1594 	orl	_P0M1,#0x20
      00062E AE B2            [24] 1595 	mov	r6,_P0M2
      000630 74 DF            [12] 1596 	mov	a,#0xDF
      000632 5E               [12] 1597 	anl	a,r6
      000633 F5 B2            [12] 1598 	mov	_P0M2,a
      000635 75 F6 00         [24] 1599 	mov	_AINDIDS,#0x00
      000638 43 F6 10         [24] 1600 	orl	_AINDIDS,#0x10
      00063B 43 E1 01         [24] 1601 	orl	_ADCCON1,#0x01
                                   1602 ;	lib/gpio.c:152: break;
                                   1603 ;	lib/gpio.c:153: case 6:
      00063E 80 34            [24] 1604 	sjmp	00111$
      000640                       1605 00104$:
                                   1606 ;	lib/gpio.c:154: Enable_ADC_AIN3;
      000640 53 E8 F0         [24] 1607 	anl	_ADCCON0,#0xF0
      000643 43 E8 03         [24] 1608 	orl	_ADCCON0,#0x03
      000646 43 B1 40         [24] 1609 	orl	_P0M1,#0x40
      000649 AE B2            [24] 1610 	mov	r6,_P0M2
      00064B 74 BF            [12] 1611 	mov	a,#0xBF
      00064D 5E               [12] 1612 	anl	a,r6
      00064E F5 B2            [12] 1613 	mov	_P0M2,a
      000650 75 F6 00         [24] 1614 	mov	_AINDIDS,#0x00
      000653 43 F6 08         [24] 1615 	orl	_AINDIDS,#0x08
      000656 43 E1 01         [24] 1616 	orl	_ADCCON1,#0x01
                                   1617 ;	lib/gpio.c:155: break;
                                   1618 ;	lib/gpio.c:156: case 7:
      000659 80 19            [24] 1619 	sjmp	00111$
      00065B                       1620 00105$:
                                   1621 ;	lib/gpio.c:157: Enable_ADC_AIN2;
      00065B 53 E8 F0         [24] 1622 	anl	_ADCCON0,#0xF0
      00065E 43 E8 02         [24] 1623 	orl	_ADCCON0,#0x02
      000661 43 B1 80         [24] 1624 	orl	_P0M1,#0x80
      000664 AE B2            [24] 1625 	mov	r6,_P0M2
      000666 74 7F            [12] 1626 	mov	a,#0x7F
      000668 5E               [12] 1627 	anl	a,r6
      000669 F5 B2            [12] 1628 	mov	_P0M2,a
      00066B 75 F6 00         [24] 1629 	mov	_AINDIDS,#0x00
      00066E 43 F6 04         [24] 1630 	orl	_AINDIDS,#0x04
      000671 43 E1 01         [24] 1631 	orl	_ADCCON1,#0x01
                                   1632 ;	lib/gpio.c:161: }
      000674                       1633 00111$:
                                   1634 ;	lib/gpio.c:164: if (GPIO_PORT(pin) == 1) {
      000674 74 03            [12] 1635 	mov	a,#0x03
      000676 5F               [12] 1636 	anl	a,r7
      000677 FE               [12] 1637 	mov	r6,a
      000678 BE 01 4B         [24] 1638 	cjne	r6,#0x01,00119$
                                   1639 ;	lib/gpio.c:165: if (GPIO_ADC(pin)) {
      00067B 74 40            [12] 1640 	mov	a,#0x40
      00067D 5F               [12] 1641 	anl	a,r7
      00067E FE               [12] 1642 	mov	r6,a
      00067F BE 40 44         [24] 1643 	cjne	r6,#0x40,00119$
                                   1644 ;	lib/gpio.c:166: switch (GPIO_PIN(pin)) {
      000682 EF               [12] 1645 	mov	a,r7
      000683 03               [12] 1646 	rr	a
      000684 03               [12] 1647 	rr	a
      000685 54 3F            [12] 1648 	anl	a,#0x3F
      000687 FE               [12] 1649 	mov	r6,a
      000688 53 06 07         [24] 1650 	anl	ar6,#0x07
      00068B BE 01 02         [24] 1651 	cjne	r6,#0x01,00193$
      00068E 80 05            [24] 1652 	sjmp	00112$
      000690                       1653 00193$:
                                   1654 ;	lib/gpio.c:167: case 1:
      000690 BE 07 33         [24] 1655 	cjne	r6,#0x07,00119$
      000693 80 1B            [24] 1656 	sjmp	00113$
      000695                       1657 00112$:
                                   1658 ;	lib/gpio.c:168: Enable_ADC_AIN7;
      000695 53 E8 F0         [24] 1659 	anl	_ADCCON0,#0xF0
      000698 43 E8 07         [24] 1660 	orl	_ADCCON0,#0x07
      00069B 43 B3 02         [24] 1661 	orl	_P1M1,#0x02
      00069E AE B4            [24] 1662 	mov	r6,_P1M2
      0006A0 74 FD            [12] 1663 	mov	a,#0xFD
      0006A2 5E               [12] 1664 	anl	a,r6
      0006A3 F5 B4            [12] 1665 	mov	_P1M2,a
      0006A5 75 F6 00         [24] 1666 	mov	_AINDIDS,#0x00
      0006A8 43 F6 80         [24] 1667 	orl	_AINDIDS,#0x80
      0006AB 43 E1 01         [24] 1668 	orl	_ADCCON1,#0x01
                                   1669 ;	lib/gpio.c:169: break;
                                   1670 ;	lib/gpio.c:170: case 7:
      0006AE 80 16            [24] 1671 	sjmp	00119$
      0006B0                       1672 00113$:
                                   1673 ;	lib/gpio.c:171: Enable_ADC_AIN0;
      0006B0 53 E8 F0         [24] 1674 	anl	_ADCCON0,#0xF0
      0006B3 43 B3 80         [24] 1675 	orl	_P1M1,#0x80
      0006B6 AE B4            [24] 1676 	mov	r6,_P1M2
      0006B8 74 7F            [12] 1677 	mov	a,#0x7F
      0006BA 5E               [12] 1678 	anl	a,r6
      0006BB F5 B4            [12] 1679 	mov	_P1M2,a
      0006BD 75 F6 00         [24] 1680 	mov	_AINDIDS,#0x00
      0006C0 43 F6 01         [24] 1681 	orl	_AINDIDS,#0x01
      0006C3 43 E1 01         [24] 1682 	orl	_ADCCON1,#0x01
                                   1683 ;	lib/gpio.c:175: }
      0006C6                       1684 00119$:
                                   1685 ;	lib/gpio.c:178: if (GPIO_PORT(pin) == 3) {
      0006C6 74 03            [12] 1686 	mov	a,#0x03
      0006C8 5F               [12] 1687 	anl	a,r7
      0006C9 FE               [12] 1688 	mov	r6,a
      0006CA BE 03 2C         [24] 1689 	cjne	r6,#0x03,00126$
                                   1690 ;	lib/gpio.c:179: if (GPIO_ADC(pin)) {
      0006CD 74 40            [12] 1691 	mov	a,#0x40
      0006CF 5F               [12] 1692 	anl	a,r7
      0006D0 FE               [12] 1693 	mov	r6,a
      0006D1 BE 40 25         [24] 1694 	cjne	r6,#0x40,00126$
                                   1695 ;	lib/gpio.c:180: switch (GPIO_PIN(pin)) {
      0006D4 EF               [12] 1696 	mov	a,r7
      0006D5 03               [12] 1697 	rr	a
      0006D6 03               [12] 1698 	rr	a
      0006D7 54 3F            [12] 1699 	anl	a,#0x3F
      0006D9 FF               [12] 1700 	mov	r7,a
      0006DA 53 07 07         [24] 1701 	anl	ar7,#0x07
      0006DD BF 00 19         [24] 1702 	cjne	r7,#0x00,00126$
                                   1703 ;	lib/gpio.c:182: Enable_ADC_AIN1;
      0006E0 53 E8 F0         [24] 1704 	anl	_ADCCON0,#0xF0
      0006E3 43 E8 01         [24] 1705 	orl	_ADCCON0,#0x01
      0006E6 43 AC 01         [24] 1706 	orl	_P3M1,#0x01
      0006E9 AF AD            [24] 1707 	mov	r7,_P3M2
      0006EB 74 FE            [12] 1708 	mov	a,#0xFE
      0006ED 5F               [12] 1709 	anl	a,r7
      0006EE F5 AD            [12] 1710 	mov	_P3M2,a
      0006F0 75 F6 00         [24] 1711 	mov	_AINDIDS,#0x00
      0006F3 43 F6 02         [24] 1712 	orl	_AINDIDS,#0x02
      0006F6 43 E1 01         [24] 1713 	orl	_ADCCON1,#0x01
                                   1714 ;	lib/gpio.c:186: }
      0006F9                       1715 00126$:
                                   1716 ;	lib/gpio.c:189: clr_ADCF;
      0006F9 C2 EF            [12] 1717 	clr	_ADCF
                                   1718 ;	lib/gpio.c:190: set_ADCS;
      0006FB D2 EE            [12] 1719 	setb	_ADCS
                                   1720 ;	lib/gpio.c:191: while (ADCF == 0)
      0006FD                       1721 00127$:
      0006FD 30 EF FD         [24] 1722 	jnb	_ADCF,00127$
                                   1723 ;	lib/gpio.c:193: result = ADCRH << 8;
      000700 AF C3            [24] 1724 	mov	r7,_ADCRH
      000702 7E 00            [12] 1725 	mov	r6,#0x00
                                   1726 ;	lib/gpio.c:194: result += ADCRL;
      000704 AC C2            [24] 1727 	mov	r4,_ADCRL
      000706 7D 00            [12] 1728 	mov	r5,#0x00
      000708 EC               [12] 1729 	mov	a,r4
      000709 2E               [12] 1730 	add	a,r6
      00070A FE               [12] 1731 	mov	r6,a
      00070B ED               [12] 1732 	mov	a,r5
      00070C 3F               [12] 1733 	addc	a,r7
      00070D FF               [12] 1734 	mov	r7,a
                                   1735 ;	lib/gpio.c:195: return result & 0xfff;
      00070E 8E 82            [24] 1736 	mov	dpl,r6
      000710 74 0F            [12] 1737 	mov	a,#0x0F
      000712 5F               [12] 1738 	anl	a,r7
      000713 F5 83            [12] 1739 	mov	dph,a
      000715 22               [24] 1740 	ret
                                   1741 ;------------------------------------------------------------
                                   1742 ;Allocation info for local variables in function 'analogWrite'
                                   1743 ;------------------------------------------------------------
                                   1744 ;value                     Allocated to stack - _bp -4
                                   1745 ;pin                       Allocated to registers r7 
                                   1746 ;------------------------------------------------------------
                                   1747 ;	lib/gpio.c:198: void analogWrite(byte pin, word value) {
                                   1748 ;	-----------------------------------------
                                   1749 ;	 function analogWrite
                                   1750 ;	-----------------------------------------
      000716                       1751 _analogWrite:
      000716 C0 0D            [24] 1752 	push	_bp
      000718 85 81 0D         [24] 1753 	mov	_bp,sp
      00071B AF 82            [24] 1754 	mov	r7,dpl
                                   1755 ;	lib/gpio.c:199: if (GPIO_PWM(pin)) {
      00071D 74 80            [12] 1756 	mov	a,#0x80
      00071F 5F               [12] 1757 	anl	a,r7
      000720 FE               [12] 1758 	mov	r6,a
      000721 BE 80 02         [24] 1759 	cjne	r6,#0x80,00140$
      000724 80 03            [24] 1760 	sjmp	00141$
      000726                       1761 00140$:
      000726 02 09 11         [24] 1762 	ljmp	00123$
      000729                       1763 00141$:
                                   1764 ;	lib/gpio.c:200: if (GPIO_PORT(pin) == 0) {
      000729 EF               [12] 1765 	mov	a,r7
      00072A 54 03            [12] 1766 	anl	a,#0x03
      00072C 60 03            [24] 1767 	jz	00143$
      00072E 02 08 32         [24] 1768 	ljmp	00119$
      000731                       1769 00143$:
                                   1770 ;	lib/gpio.c:201: switch (GPIO_PIN(pin)) {
      000731 EF               [12] 1771 	mov	a,r7
      000732 03               [12] 1772 	rr	a
      000733 03               [12] 1773 	rr	a
      000734 54 07            [12] 1774 	anl	a,#(0x3F&0x07)
      000736 FE               [12] 1775 	mov	r6,a
      000737 24 FA            [12] 1776 	add	a,#0xff - 0x05
      000739 50 03            [24] 1777 	jnc	00144$
      00073B 02 09 0D         [24] 1778 	ljmp	00120$
      00073E                       1779 00144$:
      00073E EE               [12] 1780 	mov	a,r6
      00073F 2E               [12] 1781 	add	a,r6
      000740 2E               [12] 1782 	add	a,r6
      000741 90 07 45         [24] 1783 	mov	dptr,#00145$
      000744 73               [24] 1784 	jmp	@a+dptr
      000745                       1785 00145$:
      000745 02 07 57         [24] 1786 	ljmp	00101$
      000748 02 07 6F         [24] 1787 	ljmp	00102$
      00074B 02 08 2F         [24] 1788 	ljmp	00106$
      00074E 02 07 B7         [24] 1789 	ljmp	00103$
      000751 02 07 FF         [24] 1790 	ljmp	00104$
      000754 02 08 17         [24] 1791 	ljmp	00105$
                                   1792 ;	lib/gpio.c:202: case 0: //3
      000757                       1793 00101$:
                                   1794 ;	lib/gpio.c:203: PWM3H = highByte(value);
      000757 E5 0D            [12] 1795 	mov	a,_bp
      000759 24 FC            [12] 1796 	add	a,#0xfc
      00075B F8               [12] 1797 	mov	r0,a
      00075C 08               [12] 1798 	inc	r0
      00075D 86 06            [24] 1799 	mov	ar6,@r0
      00075F 8E D5            [24] 1800 	mov	_PWM3H,r6
                                   1801 ;	lib/gpio.c:204: PWM3L = lowByte(value);
      000761 E5 0D            [12] 1802 	mov	a,_bp
      000763 24 FC            [12] 1803 	add	a,#0xfc
      000765 F8               [12] 1804 	mov	r0,a
      000766 86 05            [24] 1805 	mov	ar5,@r0
      000768 7E 00            [12] 1806 	mov	r6,#0x00
      00076A 8D DD            [24] 1807 	mov	_PWM3L,r5
                                   1808 ;	lib/gpio.c:205: break;
      00076C 02 09 0D         [24] 1809 	ljmp	00120$
                                   1810 ;	lib/gpio.c:206: case 1: //4
      00076F                       1811 00102$:
                                   1812 ;	lib/gpio.c:207: set_SFRPAGE;
      00076F A2 AF            [12] 1813 	mov	c,_EA
      000771 E4               [12] 1814 	clr	a
      000772 33               [12] 1815 	rlc	a
      000773 F5 08            [12] 1816 	mov	_BIT_TMP,a
      000775 C2 AF            [12] 1817 	clr	_EA
      000777 75 C7 AA         [24] 1818 	mov	_TA,#0xAA
      00077A 75 C7 55         [24] 1819 	mov	_TA,#0x55
      00077D 43 91 01         [24] 1820 	orl	_SFRS,#0x01
      000780 E5 08            [12] 1821 	mov	a,_BIT_TMP
      000782 24 FF            [12] 1822 	add	a,#0xff
      000784 92 AF            [24] 1823 	mov	_EA,c
                                   1824 ;	lib/gpio.c:208: PWM4H = highByte(value);
      000786 E5 0D            [12] 1825 	mov	a,_bp
      000788 24 FC            [12] 1826 	add	a,#0xfc
      00078A F8               [12] 1827 	mov	r0,a
      00078B 08               [12] 1828 	inc	r0
      00078C 86 06            [24] 1829 	mov	ar6,@r0
      00078E 8E C4            [24] 1830 	mov	_PWM4H,r6
                                   1831 ;	lib/gpio.c:209: PWM4L = lowByte(value);
      000790 E5 0D            [12] 1832 	mov	a,_bp
      000792 24 FC            [12] 1833 	add	a,#0xfc
      000794 F8               [12] 1834 	mov	r0,a
      000795 86 05            [24] 1835 	mov	ar5,@r0
      000797 8D CC            [24] 1836 	mov	_PWM4L,r5
                                   1837 ;	lib/gpio.c:210: clr_SFRPAGE;
      000799 A2 AF            [12] 1838 	mov	c,_EA
      00079B E4               [12] 1839 	clr	a
      00079C 33               [12] 1840 	rlc	a
      00079D F5 08            [12] 1841 	mov	_BIT_TMP,a
      00079F C2 AF            [12] 1842 	clr	_EA
      0007A1 75 C7 AA         [24] 1843 	mov	_TA,#0xAA
      0007A4 75 C7 55         [24] 1844 	mov	_TA,#0x55
      0007A7 AE 91            [24] 1845 	mov	r6,_SFRS
      0007A9 74 FE            [12] 1846 	mov	a,#0xFE
      0007AB 5E               [12] 1847 	anl	a,r6
      0007AC F5 91            [12] 1848 	mov	_SFRS,a
      0007AE E5 08            [12] 1849 	mov	a,_BIT_TMP
      0007B0 24 FF            [12] 1850 	add	a,#0xff
      0007B2 92 AF            [24] 1851 	mov	_EA,c
                                   1852 ;	lib/gpio.c:211: break;
      0007B4 02 09 0D         [24] 1853 	ljmp	00120$
                                   1854 ;	lib/gpio.c:212: case 3: //5
      0007B7                       1855 00103$:
                                   1856 ;	lib/gpio.c:213: set_SFRPAGE;
      0007B7 A2 AF            [12] 1857 	mov	c,_EA
      0007B9 E4               [12] 1858 	clr	a
      0007BA 33               [12] 1859 	rlc	a
      0007BB F5 08            [12] 1860 	mov	_BIT_TMP,a
      0007BD C2 AF            [12] 1861 	clr	_EA
      0007BF 75 C7 AA         [24] 1862 	mov	_TA,#0xAA
      0007C2 75 C7 55         [24] 1863 	mov	_TA,#0x55
      0007C5 43 91 01         [24] 1864 	orl	_SFRS,#0x01
      0007C8 E5 08            [12] 1865 	mov	a,_BIT_TMP
      0007CA 24 FF            [12] 1866 	add	a,#0xff
      0007CC 92 AF            [24] 1867 	mov	_EA,c
                                   1868 ;	lib/gpio.c:214: PWM5H = highByte(value);
      0007CE E5 0D            [12] 1869 	mov	a,_bp
      0007D0 24 FC            [12] 1870 	add	a,#0xfc
      0007D2 F8               [12] 1871 	mov	r0,a
      0007D3 08               [12] 1872 	inc	r0
      0007D4 86 06            [24] 1873 	mov	ar6,@r0
      0007D6 8E C5            [24] 1874 	mov	_PWM5H,r6
                                   1875 ;	lib/gpio.c:215: PWM5L = lowByte(value);
      0007D8 E5 0D            [12] 1876 	mov	a,_bp
      0007DA 24 FC            [12] 1877 	add	a,#0xfc
      0007DC F8               [12] 1878 	mov	r0,a
      0007DD 86 05            [24] 1879 	mov	ar5,@r0
      0007DF 8D CD            [24] 1880 	mov	_PWM5L,r5
                                   1881 ;	lib/gpio.c:216: clr_SFRPAGE;
      0007E1 A2 AF            [12] 1882 	mov	c,_EA
      0007E3 E4               [12] 1883 	clr	a
      0007E4 33               [12] 1884 	rlc	a
      0007E5 F5 08            [12] 1885 	mov	_BIT_TMP,a
      0007E7 C2 AF            [12] 1886 	clr	_EA
      0007E9 75 C7 AA         [24] 1887 	mov	_TA,#0xAA
      0007EC 75 C7 55         [24] 1888 	mov	_TA,#0x55
      0007EF AE 91            [24] 1889 	mov	r6,_SFRS
      0007F1 74 FE            [12] 1890 	mov	a,#0xFE
      0007F3 5E               [12] 1891 	anl	a,r6
      0007F4 F5 91            [12] 1892 	mov	_SFRS,a
      0007F6 E5 08            [12] 1893 	mov	a,_BIT_TMP
      0007F8 24 FF            [12] 1894 	add	a,#0xff
      0007FA 92 AF            [24] 1895 	mov	_EA,c
                                   1896 ;	lib/gpio.c:217: break;
      0007FC 02 09 0D         [24] 1897 	ljmp	00120$
                                   1898 ;	lib/gpio.c:218: case 4: //3
      0007FF                       1899 00104$:
                                   1900 ;	lib/gpio.c:219: PWM3H = highByte(value);
      0007FF E5 0D            [12] 1901 	mov	a,_bp
      000801 24 FC            [12] 1902 	add	a,#0xfc
      000803 F8               [12] 1903 	mov	r0,a
      000804 08               [12] 1904 	inc	r0
      000805 86 06            [24] 1905 	mov	ar6,@r0
      000807 8E D5            [24] 1906 	mov	_PWM3H,r6
                                   1907 ;	lib/gpio.c:220: PWM3L = lowByte(value);
      000809 E5 0D            [12] 1908 	mov	a,_bp
      00080B 24 FC            [12] 1909 	add	a,#0xfc
      00080D F8               [12] 1910 	mov	r0,a
      00080E 86 05            [24] 1911 	mov	ar5,@r0
      000810 7E 00            [12] 1912 	mov	r6,#0x00
      000812 8D DD            [24] 1913 	mov	_PWM3L,r5
                                   1914 ;	lib/gpio.c:221: break;
      000814 02 09 0D         [24] 1915 	ljmp	00120$
                                   1916 ;	lib/gpio.c:222: case 5: //2
      000817                       1917 00105$:
                                   1918 ;	lib/gpio.c:223: PWM2H = highByte(value);
      000817 E5 0D            [12] 1919 	mov	a,_bp
      000819 24 FC            [12] 1920 	add	a,#0xfc
      00081B F8               [12] 1921 	mov	r0,a
      00081C 08               [12] 1922 	inc	r0
      00081D 86 06            [24] 1923 	mov	ar6,@r0
      00081F 8E D4            [24] 1924 	mov	_PWM2H,r6
                                   1925 ;	lib/gpio.c:224: PWM2L = lowByte(value);
      000821 E5 0D            [12] 1926 	mov	a,_bp
      000823 24 FC            [12] 1927 	add	a,#0xfc
      000825 F8               [12] 1928 	mov	r0,a
      000826 86 05            [24] 1929 	mov	ar5,@r0
      000828 7E 00            [12] 1930 	mov	r6,#0x00
      00082A 8D DC            [24] 1931 	mov	_PWM2L,r5
                                   1932 ;	lib/gpio.c:225: break;
      00082C 02 09 0D         [24] 1933 	ljmp	00120$
                                   1934 ;	lib/gpio.c:226: default:
      00082F                       1935 00106$:
                                   1936 ;	lib/gpio.c:228: }
      00082F 02 09 0D         [24] 1937 	ljmp	00120$
      000832                       1938 00119$:
                                   1939 ;	lib/gpio.c:229: } else if (GPIO_PORT(pin) == 1) {
      000832 74 03            [12] 1940 	mov	a,#0x03
      000834 5F               [12] 1941 	anl	a,r7
      000835 FE               [12] 1942 	mov	r6,a
      000836 BE 01 02         [24] 1943 	cjne	r6,#0x01,00146$
      000839 80 03            [24] 1944 	sjmp	00147$
      00083B                       1945 00146$:
      00083B 02 09 0B         [24] 1946 	ljmp	00116$
      00083E                       1947 00147$:
                                   1948 ;	lib/gpio.c:230: switch (GPIO_PIN(pin)) {
      00083E EF               [12] 1949 	mov	a,r7
      00083F 03               [12] 1950 	rr	a
      000840 03               [12] 1951 	rr	a
      000841 54 07            [12] 1952 	anl	a,#(0x3F&0x07)
      000843 FF               [12] 1953 	mov	r7,a
      000844 24 FA            [12] 1954 	add	a,#0xff - 0x05
      000846 50 03            [24] 1955 	jnc	00148$
      000848 02 09 0D         [24] 1956 	ljmp	00120$
      00084B                       1957 00148$:
      00084B EF               [12] 1958 	mov	a,r7
      00084C 2F               [12] 1959 	add	a,r7
      00084D 2F               [12] 1960 	add	a,r7
      00084E 90 08 52         [24] 1961 	mov	dptr,#00149$
      000851 73               [24] 1962 	jmp	@a+dptr
      000852                       1963 00149$:
      000852 02 08 64         [24] 1964 	ljmp	00108$
      000855 02 08 7C         [24] 1965 	ljmp	00109$
      000858 02 08 94         [24] 1966 	ljmp	00110$
      00085B 02 09 09         [24] 1967 	ljmp	00113$
      00085E 02 08 AB         [24] 1968 	ljmp	00111$
      000861 02 08 C2         [24] 1969 	ljmp	00112$
                                   1970 ;	lib/gpio.c:231: case 0: //2
      000864                       1971 00108$:
                                   1972 ;	lib/gpio.c:232: PWM2H = highByte(value);
      000864 E5 0D            [12] 1973 	mov	a,_bp
      000866 24 FC            [12] 1974 	add	a,#0xfc
      000868 F8               [12] 1975 	mov	r0,a
      000869 08               [12] 1976 	inc	r0
      00086A 86 07            [24] 1977 	mov	ar7,@r0
      00086C 8F D4            [24] 1978 	mov	_PWM2H,r7
                                   1979 ;	lib/gpio.c:233: PWM2L = lowByte(value);
      00086E E5 0D            [12] 1980 	mov	a,_bp
      000870 24 FC            [12] 1981 	add	a,#0xfc
      000872 F8               [12] 1982 	mov	r0,a
      000873 86 06            [24] 1983 	mov	ar6,@r0
      000875 7F 00            [12] 1984 	mov	r7,#0x00
      000877 8E DC            [24] 1985 	mov	_PWM2L,r6
                                   1986 ;	lib/gpio.c:234: break;
      000879 02 09 0D         [24] 1987 	ljmp	00120$
                                   1988 ;	lib/gpio.c:235: case 1: //1
      00087C                       1989 00109$:
                                   1990 ;	lib/gpio.c:236: PWM2H = highByte(value);
      00087C E5 0D            [12] 1991 	mov	a,_bp
      00087E 24 FC            [12] 1992 	add	a,#0xfc
      000880 F8               [12] 1993 	mov	r0,a
      000881 08               [12] 1994 	inc	r0
      000882 86 07            [24] 1995 	mov	ar7,@r0
      000884 8F D4            [24] 1996 	mov	_PWM2H,r7
                                   1997 ;	lib/gpio.c:237: PWM2L = lowByte(value);
      000886 E5 0D            [12] 1998 	mov	a,_bp
      000888 24 FC            [12] 1999 	add	a,#0xfc
      00088A F8               [12] 2000 	mov	r0,a
      00088B 86 06            [24] 2001 	mov	ar6,@r0
      00088D 7F 00            [12] 2002 	mov	r7,#0x00
      00088F 8E DC            [24] 2003 	mov	_PWM2L,r6
                                   2004 ;	lib/gpio.c:238: break;
      000891 02 09 0D         [24] 2005 	ljmp	00120$
                                   2006 ;	lib/gpio.c:239: case 2: //0
      000894                       2007 00110$:
                                   2008 ;	lib/gpio.c:240: PWM0H = highByte(value);
      000894 E5 0D            [12] 2009 	mov	a,_bp
      000896 24 FC            [12] 2010 	add	a,#0xfc
      000898 F8               [12] 2011 	mov	r0,a
      000899 08               [12] 2012 	inc	r0
      00089A 86 07            [24] 2013 	mov	ar7,@r0
      00089C 8F D2            [24] 2014 	mov	_PWM0H,r7
                                   2015 ;	lib/gpio.c:241: PWM0L = lowByte(value);
      00089E E5 0D            [12] 2016 	mov	a,_bp
      0008A0 24 FC            [12] 2017 	add	a,#0xfc
      0008A2 F8               [12] 2018 	mov	r0,a
      0008A3 86 06            [24] 2019 	mov	ar6,@r0
      0008A5 7F 00            [12] 2020 	mov	r7,#0x00
      0008A7 8E DA            [24] 2021 	mov	_PWM0L,r6
                                   2022 ;	lib/gpio.c:242: break;
                                   2023 ;	lib/gpio.c:243: case 4: //1
      0008A9 80 62            [24] 2024 	sjmp	00120$
      0008AB                       2025 00111$:
                                   2026 ;	lib/gpio.c:244: PWM1H = highByte(value);
      0008AB E5 0D            [12] 2027 	mov	a,_bp
      0008AD 24 FC            [12] 2028 	add	a,#0xfc
      0008AF F8               [12] 2029 	mov	r0,a
      0008B0 08               [12] 2030 	inc	r0
      0008B1 86 07            [24] 2031 	mov	ar7,@r0
      0008B3 8F D3            [24] 2032 	mov	_PWM1H,r7
                                   2033 ;	lib/gpio.c:245: PWM1L = lowByte(value);
      0008B5 E5 0D            [12] 2034 	mov	a,_bp
      0008B7 24 FC            [12] 2035 	add	a,#0xfc
      0008B9 F8               [12] 2036 	mov	r0,a
      0008BA 86 06            [24] 2037 	mov	ar6,@r0
      0008BC 7F 00            [12] 2038 	mov	r7,#0x00
      0008BE 8E DB            [24] 2039 	mov	_PWM1L,r6
                                   2040 ;	lib/gpio.c:246: break;
                                   2041 ;	lib/gpio.c:247: case 5: //5
      0008C0 80 4B            [24] 2042 	sjmp	00120$
      0008C2                       2043 00112$:
                                   2044 ;	lib/gpio.c:248: set_SFRPAGE;
      0008C2 A2 AF            [12] 2045 	mov	c,_EA
      0008C4 E4               [12] 2046 	clr	a
      0008C5 33               [12] 2047 	rlc	a
      0008C6 F5 08            [12] 2048 	mov	_BIT_TMP,a
      0008C8 C2 AF            [12] 2049 	clr	_EA
      0008CA 75 C7 AA         [24] 2050 	mov	_TA,#0xAA
      0008CD 75 C7 55         [24] 2051 	mov	_TA,#0x55
      0008D0 43 91 01         [24] 2052 	orl	_SFRS,#0x01
      0008D3 E5 08            [12] 2053 	mov	a,_BIT_TMP
      0008D5 24 FF            [12] 2054 	add	a,#0xff
      0008D7 92 AF            [24] 2055 	mov	_EA,c
                                   2056 ;	lib/gpio.c:249: PWM5H = highByte(value);
      0008D9 E5 0D            [12] 2057 	mov	a,_bp
      0008DB 24 FC            [12] 2058 	add	a,#0xfc
      0008DD F8               [12] 2059 	mov	r0,a
      0008DE 08               [12] 2060 	inc	r0
      0008DF 86 07            [24] 2061 	mov	ar7,@r0
      0008E1 8F C5            [24] 2062 	mov	_PWM5H,r7
                                   2063 ;	lib/gpio.c:250: PWM5L = lowByte(value);
      0008E3 E5 0D            [12] 2064 	mov	a,_bp
      0008E5 24 FC            [12] 2065 	add	a,#0xfc
      0008E7 F8               [12] 2066 	mov	r0,a
      0008E8 86 06            [24] 2067 	mov	ar6,@r0
      0008EA 8E CD            [24] 2068 	mov	_PWM5L,r6
                                   2069 ;	lib/gpio.c:251: clr_SFRPAGE;
      0008EC A2 AF            [12] 2070 	mov	c,_EA
      0008EE E4               [12] 2071 	clr	a
      0008EF 33               [12] 2072 	rlc	a
      0008F0 F5 08            [12] 2073 	mov	_BIT_TMP,a
      0008F2 C2 AF            [12] 2074 	clr	_EA
      0008F4 75 C7 AA         [24] 2075 	mov	_TA,#0xAA
      0008F7 75 C7 55         [24] 2076 	mov	_TA,#0x55
      0008FA AF 91            [24] 2077 	mov	r7,_SFRS
      0008FC 74 FE            [12] 2078 	mov	a,#0xFE
      0008FE 5F               [12] 2079 	anl	a,r7
      0008FF F5 91            [12] 2080 	mov	_SFRS,a
      000901 E5 08            [12] 2081 	mov	a,_BIT_TMP
      000903 24 FF            [12] 2082 	add	a,#0xff
      000905 92 AF            [24] 2083 	mov	_EA,c
                                   2084 ;	lib/gpio.c:252: break;
                                   2085 ;	lib/gpio.c:253: default:
      000907 80 04            [24] 2086 	sjmp	00120$
      000909                       2087 00113$:
                                   2088 ;	lib/gpio.c:255: }
      000909 80 02            [24] 2089 	sjmp	00120$
      00090B                       2090 00116$:
                                   2091 ;	lib/gpio.c:257: return;
      00090B 80 04            [24] 2092 	sjmp	00123$
      00090D                       2093 00120$:
                                   2094 ;	lib/gpio.c:258: set_LOAD;
      00090D D2 DE            [12] 2095 	setb	_LOAD
                                   2096 ;	lib/gpio.c:259: set_PWMRUN;
      00090F D2 DF            [12] 2097 	setb	_PWMRUN
      000911                       2098 00123$:
      000911 D0 0D            [24] 2099 	pop	_bp
      000913 22               [24] 2100 	ret
                                   2101 	.area CSEG    (CODE)
                                   2102 	.area CONST   (CODE)
                                   2103 	.area XINIT   (CODE)
                                   2104 	.area CABS    (ABS,CODE)
