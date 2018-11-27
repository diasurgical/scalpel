// global_b.cpp

#include "types.h"

// address: 0x80137C50
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80138398
// size: 0x10
extern int OldBlock[4];

// address: 0x801383A8
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80138038
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x8013813C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x8013820C
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x801382DC
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80138300
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80138324
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80138340
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8013834C
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80137C40
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x801405D0
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80140C24
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8013ED60
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8013ED74
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8013ED88
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8013ED98
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8013EE3C
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8013EEE0
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8013EEF4
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8013EF08
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8013EF1C
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8013EF30
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8013EF44
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8013EF58
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8013EF6C
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8013EF80
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8013EF94
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8013EFA8
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8013EFBC
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8013EFD0
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8013EFE4
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8013EFF8
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8013F00C
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8013F020
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8013F030
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8013F040
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8013F050
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8013F060
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8013F070
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8013F080
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8013F090
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8013F0A0
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8013F0B4
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8013F0C8
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8013F0DC
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8013F0F0
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8013F104
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8013F118
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8013F12C
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8013F140
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8013F154
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8013F168
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8013F17C
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8013F190
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8013F1A4
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8013F1B8
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8013F1CC
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8013F1E0
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8013F1F0
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8013F200
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8013F210
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8013F220
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8013F230
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8013F240
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8013F250
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8013F260
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8013F270
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8013F280
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8013F290
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8013F2A0
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8013F2B0
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8013F2C0
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8013F2D0
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8013F2E0
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8013F2F0
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8013F300
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8013F310
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8013F320
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8013F330
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8013F340
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8013F350
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8013F360
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8013F370
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8013F380
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8013F390
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8013F3A0
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8013F3B0
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8013F3C0
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8013F3D0
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8013F3E0
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8013F3F0
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8013F400
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8013F410
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8013F420
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8013F430
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8013F440
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8013F450
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x8013F460
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x8013F484
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8013F4A8
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8013F4CC
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8013F4E0
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8013F4EC
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8013F4F8
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8013F504
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8013F510
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8013F51C
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8013F528
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8013F548
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8013F568
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8013F57C
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8013F590
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8013F5A4
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8013F5B8
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8013F5CC
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8013F5E0
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8013F5F4
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x8013F608
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80146618
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80146378
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80146388
// size: 0x14
static unsigned char L3UP[20];

// address: 0x8014639C
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x801463B0
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x801463C4
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x801463E8
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x8014640C
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80146430
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x8014645C
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80146488
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x8014649C
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x801464B0
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x801464C4
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x801464D8
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x801464E8
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x801464F8
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80146508
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80146518
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x80146524
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014B434
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014B5C4
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014B5D8
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014CED8
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014CEE8
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014CF14
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014CF40
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014CF74
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014CFA8
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014CFDC
// size: 0x8C
static unsigned char L4BTYPES[140];

