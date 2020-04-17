                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Apr  3 2018) (Linux)
                                      4 ; This file was generated Fri Apr 17 19:44:46 2020
                                      5 ;--------------------------------------------------------
                                      6 	.module spi
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
                                    244 	.globl _SPITransfer
                                    245 ;--------------------------------------------------------
                                    246 ; special function registers
                                    247 ;--------------------------------------------------------
                                    248 	.area RSEG    (ABS,DATA)
      000000                        249 	.org 0x0000
                           000080   250 _P0	=	0x0080
                           000081   251 _SP	=	0x0081
                           000082   252 _DPL	=	0x0082
                           000083   253 _DPH	=	0x0083
                           000084   254 _RCTRIM0	=	0x0084
                           000085   255 _RCTRIM1	=	0x0085
                           000086   256 _RWK	=	0x0086
                           000087   257 _PCON	=	0x0087
                           000088   258 _TCON	=	0x0088
                           000089   259 _TMOD	=	0x0089
                           00008A   260 _TL0	=	0x008a
                           00008B   261 _TL1	=	0x008b
                           00008C   262 _TH0	=	0x008c
                           00008D   263 _TH1	=	0x008d
                           00008E   264 _CKCON	=	0x008e
                           00008F   265 _WKCON	=	0x008f
                           000090   266 _P1	=	0x0090
                           000091   267 _SFRS	=	0x0091
                           000092   268 _CAPCON0	=	0x0092
                           000093   269 _CAPCON1	=	0x0093
                           000094   270 _CAPCON2	=	0x0094
                           000095   271 _CKDIV	=	0x0095
                           000096   272 _CKSWT	=	0x0096
                           000097   273 _CKEN	=	0x0097
                           000098   274 _SCON	=	0x0098
                           000099   275 _SBUF	=	0x0099
                           00009A   276 _SBUF_1	=	0x009a
                           00009B   277 _EIE	=	0x009b
                           00009C   278 _EIE1	=	0x009c
                           00009F   279 _CHPCON	=	0x009f
                           0000A0   280 _P2	=	0x00a0
                           0000A2   281 _AUXR1	=	0x00a2
                           0000A3   282 _BODCON0	=	0x00a3
                           0000A4   283 _IAPTRG	=	0x00a4
                           0000A5   284 _IAPUEN	=	0x00a5
                           0000A6   285 _IAPAL	=	0x00a6
                           0000A7   286 _IAPAH	=	0x00a7
                           0000A8   287 _IE	=	0x00a8
                           0000A9   288 _SADDR	=	0x00a9
                           0000AA   289 _WDCON	=	0x00aa
                           0000AB   290 _BODCON1	=	0x00ab
                           0000AC   291 _P3M1	=	0x00ac
                           0000AC   292 _P3S	=	0x00ac
                           0000AD   293 _P3M2	=	0x00ad
                           0000AD   294 _P3SR	=	0x00ad
                           0000AE   295 _IAPFD	=	0x00ae
                           0000AF   296 _IAPCN	=	0x00af
                           0000B0   297 _P3	=	0x00b0
                           0000B1   298 _P0M1	=	0x00b1
                           0000B1   299 _P0S	=	0x00b1
                           0000B2   300 _P0M2	=	0x00b2
                           0000B2   301 _P0SR	=	0x00b2
                           0000B3   302 _P1M1	=	0x00b3
                           0000B3   303 _P1S	=	0x00b3
                           0000B4   304 _P1M2	=	0x00b4
                           0000B4   305 _P1SR	=	0x00b4
                           0000B5   306 _P2S	=	0x00b5
                           0000B7   307 _IPH	=	0x00b7
                           0000B7   308 _PWMINTC	=	0x00b7
                           0000B8   309 _IP	=	0x00b8
                           0000B9   310 _SADEN	=	0x00b9
                           0000BA   311 _SADEN_1	=	0x00ba
                           0000BB   312 _SADDR_1	=	0x00bb
                           0000BC   313 _I2DAT	=	0x00bc
                           0000BD   314 _I2STAT	=	0x00bd
                           0000BE   315 _I2CLK	=	0x00be
                           0000BF   316 _I2TOC	=	0x00bf
                           0000C0   317 _I2CON	=	0x00c0
                           0000C1   318 _I2ADDR	=	0x00c1
                           0000C2   319 _ADCRL	=	0x00c2
                           0000C3   320 _ADCRH	=	0x00c3
                           0000C4   321 _T3CON	=	0x00c4
                           0000C4   322 _PWM4H	=	0x00c4
                           0000C5   323 _RL3	=	0x00c5
                           0000C5   324 _PWM5H	=	0x00c5
                           0000C6   325 _RH3	=	0x00c6
                           0000C6   326 _PIOCON1	=	0x00c6
                           0000C7   327 _TA	=	0x00c7
                           0000C8   328 _T2CON	=	0x00c8
                           0000C9   329 _T2MOD	=	0x00c9
                           0000CA   330 _RCMP2L	=	0x00ca
                           0000CB   331 _RCMP2H	=	0x00cb
                           0000CC   332 _TL2	=	0x00cc
                           0000CC   333 _PWM4L	=	0x00cc
                           0000CD   334 _TH2	=	0x00cd
                           0000CD   335 _PWM5L	=	0x00cd
                           0000CE   336 _ADCMPL	=	0x00ce
                           0000CF   337 _ADCMPH	=	0x00cf
                           0000D0   338 _PSW	=	0x00d0
                           0000D1   339 _PWMPH	=	0x00d1
                           0000D2   340 _PWM0H	=	0x00d2
                           0000D3   341 _PWM1H	=	0x00d3
                           0000D4   342 _PWM2H	=	0x00d4
                           0000D5   343 _PWM3H	=	0x00d5
                           0000D6   344 _PNP	=	0x00d6
                           0000D7   345 _FBD	=	0x00d7
                           0000D8   346 _PWMCON0	=	0x00d8
                           0000D9   347 _PWMPL	=	0x00d9
                           0000DA   348 _PWM0L	=	0x00da
                           0000DB   349 _PWM1L	=	0x00db
                           0000DC   350 _PWM2L	=	0x00dc
                           0000DD   351 _PWM3L	=	0x00dd
                           0000DE   352 _PIOCON0	=	0x00de
                           0000DF   353 _PWMCON1	=	0x00df
                           0000E0   354 _ACC	=	0x00e0
                           0000E1   355 _ADCCON1	=	0x00e1
                           0000E2   356 _ADCCON2	=	0x00e2
                           0000E3   357 _ADCDLY	=	0x00e3
                           0000E4   358 _C0L	=	0x00e4
                           0000E5   359 _C0H	=	0x00e5
                           0000E6   360 _C1L	=	0x00e6
                           0000E7   361 _C1H	=	0x00e7
                           0000E8   362 _ADCCON0	=	0x00e8
                           0000E9   363 _PICON	=	0x00e9
                           0000EA   364 _PINEN	=	0x00ea
                           0000EB   365 _PIPEN	=	0x00eb
                           0000EC   366 _PIF	=	0x00ec
                           0000ED   367 _C2L	=	0x00ed
                           0000EE   368 _C2H	=	0x00ee
                           0000EF   369 _EIP	=	0x00ef
                           0000F0   370 _B	=	0x00f0
                           0000F1   371 _CAPCON3	=	0x00f1
                           0000F2   372 _CAPCON4	=	0x00f2
                           0000F3   373 _SPCR	=	0x00f3
                           0000F3   374 _SPCR2	=	0x00f3
                           0000F4   375 _SPSR	=	0x00f4
                           0000F5   376 _SPDR	=	0x00f5
                           0000F6   377 _AINDIDS	=	0x00f6
                           0000F7   378 _EIPH	=	0x00f7
                           0000F8   379 _SCON_1	=	0x00f8
                           0000F9   380 _PDTEN	=	0x00f9
                           0000FA   381 _PDTCNT	=	0x00fa
                           0000FB   382 _PMEN	=	0x00fb
                           0000FC   383 _PMD	=	0x00fc
                           0000FE   384 _EIP1	=	0x00fe
                           0000FF   385 _EIPH1	=	0x00ff
                                    386 ;--------------------------------------------------------
                                    387 ; special function bits
                                    388 ;--------------------------------------------------------
                                    389 	.area RSEG    (ABS,DATA)
      000000                        390 	.org 0x0000
                           0000FF   391 _SM0_1	=	0x00ff
                           0000FF   392 _FE_1	=	0x00ff
                           0000FE   393 _SM1_1	=	0x00fe
                           0000FD   394 _SM2_1	=	0x00fd
                           0000FC   395 _REN_1	=	0x00fc
                           0000FB   396 _TB8_1	=	0x00fb
                           0000FA   397 _RB8_1	=	0x00fa
                           0000F9   398 _TI_1	=	0x00f9
                           0000F8   399 _RI_1	=	0x00f8
                           0000EF   400 _ADCF	=	0x00ef
                           0000EE   401 _ADCS	=	0x00ee
                           0000ED   402 _ETGSEL1	=	0x00ed
                           0000EC   403 _ETGSEL0	=	0x00ec
                           0000EB   404 _ADCHS3	=	0x00eb
                           0000EA   405 _ADCHS2	=	0x00ea
                           0000E9   406 _ADCHS1	=	0x00e9
                           0000E8   407 _ADCHS0	=	0x00e8
                           0000DF   408 _PWMRUN	=	0x00df
                           0000DE   409 _LOAD	=	0x00de
                           0000DD   410 _PWMF	=	0x00dd
                           0000DC   411 _CLRPWM	=	0x00dc
                           0000D7   412 _CY	=	0x00d7
                           0000D6   413 _AC	=	0x00d6
                           0000D5   414 _F0	=	0x00d5
                           0000D4   415 _RS1	=	0x00d4
                           0000D3   416 _RS0	=	0x00d3
                           0000D2   417 _OV	=	0x00d2
                           0000D0   418 _P	=	0x00d0
                           0000CF   419 _TF2	=	0x00cf
                           0000CA   420 _TR2	=	0x00ca
                           0000C8   421 _CM_RL2	=	0x00c8
                           0000C6   422 _I2CEN	=	0x00c6
                           0000C5   423 _STA	=	0x00c5
                           0000C4   424 _STO	=	0x00c4
                           0000C3   425 _SI	=	0x00c3
                           0000C2   426 _AA	=	0x00c2
                           0000C0   427 _I2CPX	=	0x00c0
                           0000BE   428 _PADC	=	0x00be
                           0000BD   429 _PBOD	=	0x00bd
                           0000BC   430 _PS	=	0x00bc
                           0000BB   431 _PT1	=	0x00bb
                           0000BA   432 _PX1	=	0x00ba
                           0000B9   433 _PT0	=	0x00b9
                           0000B8   434 _PX0	=	0x00b8
                           0000B0   435 _P30	=	0x00b0
                           0000AF   436 _EA	=	0x00af
                           0000AE   437 _EADC	=	0x00ae
                           0000AD   438 _EBOD	=	0x00ad
                           0000AC   439 _ES	=	0x00ac
                           0000AB   440 _ET1	=	0x00ab
                           0000AA   441 _EX1	=	0x00aa
                           0000A9   442 _ET0	=	0x00a9
                           0000A8   443 _EX0	=	0x00a8
                           0000A0   444 _P20	=	0x00a0
                           00009F   445 _SM0	=	0x009f
                           00009F   446 _FE	=	0x009f
                           00009E   447 _SM1	=	0x009e
                           00009D   448 _SM2	=	0x009d
                           00009C   449 _REN	=	0x009c
                           00009B   450 _TB8	=	0x009b
                           00009A   451 _RB8	=	0x009a
                           000099   452 _TI	=	0x0099
                           000098   453 _RI	=	0x0098
                           000097   454 _P17	=	0x0097
                           000096   455 _P16	=	0x0096
                           000096   456 _TXD_1	=	0x0096
                           000095   457 _P15	=	0x0095
                           000094   458 _P14	=	0x0094
                           000094   459 _SDA	=	0x0094
                           000093   460 _P13	=	0x0093
                           000093   461 _SCL	=	0x0093
                           000092   462 _P12	=	0x0092
                           000091   463 _P11	=	0x0091
                           000090   464 _P10	=	0x0090
                           00008F   465 _TF1	=	0x008f
                           00008E   466 _TR1	=	0x008e
                           00008D   467 _TF0	=	0x008d
                           00008C   468 _TR0	=	0x008c
                           00008B   469 _IE1	=	0x008b
                           00008A   470 _IT1	=	0x008a
                           000089   471 _IE0	=	0x0089
                           000088   472 _IT0	=	0x0088
                           000087   473 _P07	=	0x0087
                           000087   474 _RXD	=	0x0087
                           000086   475 _P06	=	0x0086
                           000086   476 _TXD	=	0x0086
                           000085   477 _P05	=	0x0085
                           000084   478 _P04	=	0x0084
                           000084   479 _STADC	=	0x0084
                           000083   480 _P03	=	0x0083
                           000082   481 _P02	=	0x0082
                           000082   482 _RXD_1	=	0x0082
                           000081   483 _P01	=	0x0081
                           000081   484 _MISO	=	0x0081
                           000080   485 _P00	=	0x0080
                           000080   486 _MOSI	=	0x0080
                                    487 ;--------------------------------------------------------
                                    488 ; overlayable register banks
                                    489 ;--------------------------------------------------------
                                    490 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        491 	.ds 8
                                    492 ;--------------------------------------------------------
                                    493 ; internal ram data
                                    494 ;--------------------------------------------------------
                                    495 	.area DSEG    (DATA)
                                    496 ;--------------------------------------------------------
                                    497 ; overlayable items in internal ram 
                                    498 ;--------------------------------------------------------
                                    499 ;--------------------------------------------------------
                                    500 ; indirectly addressable internal ram data
                                    501 ;--------------------------------------------------------
                                    502 	.area ISEG    (DATA)
                                    503 ;--------------------------------------------------------
                                    504 ; absolute internal ram data
                                    505 ;--------------------------------------------------------
                                    506 	.area IABS    (ABS,DATA)
                                    507 	.area IABS    (ABS,DATA)
                                    508 ;--------------------------------------------------------
                                    509 ; bit data
                                    510 ;--------------------------------------------------------
                                    511 	.area BSEG    (BIT)
                                    512 ;--------------------------------------------------------
                                    513 ; paged external ram data
                                    514 ;--------------------------------------------------------
                                    515 	.area PSEG    (PAG,XDATA)
                                    516 ;--------------------------------------------------------
                                    517 ; external ram data
                                    518 ;--------------------------------------------------------
                                    519 	.area XSEG    (XDATA)
                                    520 ;--------------------------------------------------------
                                    521 ; absolute external ram data
                                    522 ;--------------------------------------------------------
                                    523 	.area XABS    (ABS,XDATA)
                                    524 ;--------------------------------------------------------
                                    525 ; external initialized ram data
                                    526 ;--------------------------------------------------------
                                    527 	.area XISEG   (XDATA)
                                    528 	.area HOME    (CODE)
                                    529 	.area GSINIT0 (CODE)
                                    530 	.area GSINIT1 (CODE)
                                    531 	.area GSINIT2 (CODE)
                                    532 	.area GSINIT3 (CODE)
                                    533 	.area GSINIT4 (CODE)
                                    534 	.area GSINIT5 (CODE)
                                    535 	.area GSINIT  (CODE)
                                    536 	.area GSFINAL (CODE)
                                    537 	.area CSEG    (CODE)
                                    538 ;--------------------------------------------------------
                                    539 ; global & static initialisations
                                    540 ;--------------------------------------------------------
                                    541 	.area HOME    (CODE)
                                    542 	.area GSINIT  (CODE)
                                    543 	.area GSFINAL (CODE)
                                    544 	.area GSINIT  (CODE)
                                    545 ;--------------------------------------------------------
                                    546 ; Home
                                    547 ;--------------------------------------------------------
                                    548 	.area HOME    (CODE)
                                    549 	.area HOME    (CODE)
                                    550 ;--------------------------------------------------------
                                    551 ; code
                                    552 ;--------------------------------------------------------
                                    553 	.area CSEG    (CODE)
                                    554 ;------------------------------------------------------------
                                    555 ;Allocation info for local variables in function 'SPITransfer'
                                    556 ;------------------------------------------------------------
                                    557 ;c                         Allocated to registers r7 
                                    558 ;------------------------------------------------------------
                                    559 ;	lib/spi.c:6: byte SPITransfer(byte c) {
                                    560 ;	-----------------------------------------
                                    561 ;	 function SPITransfer
                                    562 ;	-----------------------------------------
      00107B                        563 _SPITransfer:
                           000007   564 	ar7 = 0x07
                           000006   565 	ar6 = 0x06
                           000005   566 	ar5 = 0x05
                           000004   567 	ar4 = 0x04
                           000003   568 	ar3 = 0x03
                           000002   569 	ar2 = 0x02
                           000001   570 	ar1 = 0x01
                           000000   571 	ar0 = 0x00
      00107B AF 82            [24]  572 	mov	r7,dpl
                                    573 ;	lib/spi.c:7: while (SPSR & 0x2 != 0)
      00107D                        574 00101$:
      00107D E5 F4            [12]  575 	mov	a,_SPSR
      00107F 20 E0 FB         [24]  576 	jb	acc.0,00101$
                                    577 ;	lib/spi.c:9: clr_SPIF;
      001082 AE F4            [24]  578 	mov	r6,_SPSR
      001084 74 7F            [12]  579 	mov	a,#0x7F
      001086 5E               [12]  580 	anl	a,r6
      001087 F5 F4            [12]  581 	mov	_SPSR,a
                                    582 ;	lib/spi.c:10: SPDR = c;
      001089 8F F5            [24]  583 	mov	_SPDR,r7
                                    584 ;	lib/spi.c:11: while (SPSR & 0x80 == 0)
      00108B E5 F4            [12]  585 	mov	a,_SPSR
                                    586 ;	lib/spi.c:13: return SPDR;
      00108D 85 F5 82         [24]  587 	mov	dpl,_SPDR
      001090 22               [24]  588 	ret
                                    589 	.area CSEG    (CODE)
                                    590 	.area CONST   (CODE)
                                    591 	.area XINIT   (CODE)
                                    592 	.area CABS    (ABS,CODE)
