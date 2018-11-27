// global_b.cpp

#include "types.h"

// address: 0x80138C98
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x801393E0
// size: 0x10
extern int OldBlock[4];

// address: 0x801393F0
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80139080
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80139184
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80139254
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80139324
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80139348
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x8013936C
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80139388
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x80139394
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80138C88
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80141630
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80141C84
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8013FDA8
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8013FDBC
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8013FDD0
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8013FDE0
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8013FE84
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8013FF28
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8013FF3C
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8013FF50
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8013FF64
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8013FF78
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8013FF8C
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8013FFA0
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8013FFB4
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8013FFC8
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8013FFDC
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8013FFF0
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x80140004
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80140018
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8014002C
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x80140040
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x80140054
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x80140068
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x80140078
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x80140088
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x80140098
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x801400A8
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x801400B8
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x801400C8
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x801400D8
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x801400E8
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x801400FC
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x80140110
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x80140124
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80140138
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8014014C
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x80140160
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x80140174
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x80140188
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8014019C
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x801401B0
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x801401C4
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x801401D8
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x801401EC
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x80140200
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x80140214
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x80140228
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80140238
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x80140248
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x80140258
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x80140268
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x80140278
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x80140288
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x80140298
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x801402A8
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x801402B8
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x801402C8
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x801402D8
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x801402E8
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x801402F8
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80140308
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80140318
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x80140328
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80140338
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x80140348
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x80140358
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x80140368
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x80140378
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x80140388
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x80140398
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x801403A8
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x801403B8
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x801403C8
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x801403D8
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x801403E8
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x801403F8
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80140408
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80140418
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x80140428
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80140438
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80140448
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80140458
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x80140468
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x80140478
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x80140488
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x80140498
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x801404A8
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x801404CC
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x801404F0
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x80140514
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x80140528
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x80140534
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80140540
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8014054C
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80140558
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x80140564
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80140570
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x80140590
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x801405B0
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x801405C4
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x801405D8
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x801405EC
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x80140600
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80140614
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x80140628
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8014063C
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80140650
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80147688
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x801473E8
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x801473F8
// size: 0x14
static unsigned char L3UP[20];

// address: 0x8014740C
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80147420
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x80147434
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80147458
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x8014747C
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x801474A0
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x801474CC
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x801474F8
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x8014750C
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80147520
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x80147534
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80147548
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80147558
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80147568
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80147578
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80147588
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x80147594
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014C4A4
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014C634
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014C648
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014DF48
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014DF58
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014DF84
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014DFB0
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014DFE4
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014E018
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014E04C
// size: 0x8C
static unsigned char L4BTYPES[140];

