// global_b.cpp

#include "types.h"

// address: 0x80138B60
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x801392A8
// size: 0x10
extern int OldBlock[4];

// address: 0x801392B8
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80138F48
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x8013904C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x8013911C
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x801391EC
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80139210
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80139234
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80139250
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8013925C
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80138B50
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x801414F8
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80141B4C
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8013FC70
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8013FC84
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8013FC98
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8013FCA8
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8013FD4C
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8013FDF0
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8013FE04
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8013FE18
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8013FE2C
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8013FE40
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8013FE54
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8013FE68
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8013FE7C
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8013FE90
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8013FEA4
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8013FEB8
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8013FECC
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8013FEE0
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8013FEF4
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8013FF08
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8013FF1C
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8013FF30
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8013FF40
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8013FF50
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8013FF60
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8013FF70
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8013FF80
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8013FF90
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8013FFA0
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8013FFB0
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8013FFC4
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8013FFD8
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8013FFEC
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80140000
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x80140014
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x80140028
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8014003C
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x80140050
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x80140064
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x80140078
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8014008C
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x801400A0
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x801400B4
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x801400C8
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x801400DC
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x801400F0
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80140100
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x80140110
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x80140120
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x80140130
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x80140140
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x80140150
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x80140160
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x80140170
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x80140180
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x80140190
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x801401A0
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x801401B0
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x801401C0
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x801401D0
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x801401E0
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x801401F0
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80140200
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x80140210
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x80140220
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x80140230
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x80140240
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x80140250
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x80140260
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x80140270
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x80140280
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x80140290
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x801402A0
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x801402B0
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x801402C0
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x801402D0
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x801402E0
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x801402F0
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80140300
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80140310
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80140320
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x80140330
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x80140340
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x80140350
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x80140360
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x80140370
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x80140394
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x801403B8
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x801403DC
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x801403F0
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x801403FC
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80140408
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x80140414
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80140420
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8014042C
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80140438
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x80140458
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x80140478
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8014048C
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x801404A0
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x801404B4
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x801404C8
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x801404DC
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x801404F0
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x80140504
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80140518
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80147550
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x801472B0
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x801472C0
// size: 0x14
static unsigned char L3UP[20];

// address: 0x801472D4
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x801472E8
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x801472FC
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80147320
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80147344
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80147368
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x80147394
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x801473C0
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x801473D4
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x801473E8
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x801473FC
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80147410
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80147420
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80147430
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80147440
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80147450
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8014745C
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014C36C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014C4FC
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014C510
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014DE10
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014DE20
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014DE4C
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014DE78
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014DEAC
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014DEE0
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014DF14
// size: 0x8C
static unsigned char L4BTYPES[140];

