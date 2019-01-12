// global_b.cpp

#include "types.h"

// address: 0x80138550
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80138C98
// size: 0x10
extern int OldBlock[4];

// address: 0x80138CA8
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80138938
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80138A3C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80138B0C
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80138BDC
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80138C00
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80138C24
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80138C40
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x80138C4C
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80138540
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80140EE8
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x8014153C
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8013F660
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8013F674
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8013F688
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8013F698
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8013F73C
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8013F7E0
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8013F7F4
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8013F808
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8013F81C
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8013F830
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8013F844
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8013F858
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8013F86C
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8013F880
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8013F894
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8013F8A8
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8013F8BC
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8013F8D0
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8013F8E4
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8013F8F8
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8013F90C
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8013F920
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8013F930
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8013F940
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8013F950
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8013F960
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8013F970
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8013F980
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8013F990
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8013F9A0
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8013F9B4
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8013F9C8
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8013F9DC
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8013F9F0
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8013FA04
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8013FA18
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8013FA2C
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8013FA40
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8013FA54
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8013FA68
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8013FA7C
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8013FA90
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8013FAA4
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8013FAB8
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8013FACC
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8013FAE0
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8013FAF0
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8013FB00
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8013FB10
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8013FB20
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8013FB30
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8013FB40
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8013FB50
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8013FB60
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8013FB70
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8013FB80
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8013FB90
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8013FBA0
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8013FBB0
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8013FBC0
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8013FBD0
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8013FBE0
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8013FBF0
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8013FC00
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8013FC10
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8013FC20
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8013FC30
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8013FC40
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8013FC50
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8013FC60
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8013FC70
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8013FC80
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8013FC90
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8013FCA0
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8013FCB0
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8013FCC0
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8013FCD0
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8013FCE0
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8013FCF0
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8013FD00
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8013FD10
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8013FD20
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8013FD30
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8013FD40
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8013FD50
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x8013FD60
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x8013FD84
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8013FDA8
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8013FDCC
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8013FDE0
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8013FDEC
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8013FDF8
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8013FE04
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8013FE10
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8013FE1C
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8013FE28
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8013FE48
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8013FE68
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8013FE7C
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8013FE90
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8013FEA4
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8013FEB8
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8013FECC
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8013FEE0
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8013FEF4
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x8013FF08
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80146F40
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80146CA0
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80146CB0
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80146CC4
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80146CD8
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x80146CEC
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80146D10
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80146D34
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80146D58
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x80146D84
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80146DB0
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x80146DC4
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80146DD8
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x80146DEC
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80146E00
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80146E10
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80146E20
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80146E30
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80146E40
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x80146E4C
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014BD5C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014BEEC
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014BF00
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014D800
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014D810
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014D83C
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014D868
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014D89C
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014D8D0
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014D904
// size: 0x8C
static unsigned char L4BTYPES[140];

