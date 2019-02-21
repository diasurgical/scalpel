// global_b.cpp

#include "types.h"

// address: 0x801376F0
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80137E38
// size: 0x10
extern int OldBlock[4];

// address: 0x80137E48
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80137AD8
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80137BDC
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80137CAC
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80137D7C
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80137DA0
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80137DC4
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80137DE0
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x80137DEC
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x801376E0
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x801401A8
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x801407FC
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8013E938
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8013E94C
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8013E960
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8013E970
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8013EA14
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8013EAB8
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8013EACC
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8013EAE0
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8013EAF4
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8013EB08
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8013EB1C
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8013EB30
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8013EB44
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8013EB58
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8013EB6C
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8013EB80
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8013EB94
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8013EBA8
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8013EBBC
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8013EBD0
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8013EBE4
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8013EBF8
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8013EC08
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8013EC18
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8013EC28
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8013EC38
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8013EC48
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8013EC58
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8013EC68
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8013EC78
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8013EC8C
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8013ECA0
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8013ECB4
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8013ECC8
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8013ECDC
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8013ECF0
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8013ED04
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8013ED18
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8013ED2C
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8013ED40
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8013ED54
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8013ED68
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8013ED7C
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8013ED90
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8013EDA4
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8013EDB8
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8013EDC8
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8013EDD8
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8013EDE8
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8013EDF8
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8013EE08
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8013EE18
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8013EE28
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8013EE38
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8013EE48
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8013EE58
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8013EE68
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8013EE78
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8013EE88
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8013EE98
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8013EEA8
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8013EEB8
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8013EEC8
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8013EED8
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8013EEE8
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8013EEF8
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8013EF08
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8013EF18
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8013EF28
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8013EF38
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8013EF48
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8013EF58
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8013EF68
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8013EF78
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8013EF88
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8013EF98
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8013EFA8
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8013EFB8
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8013EFC8
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8013EFD8
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8013EFE8
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8013EFF8
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8013F008
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8013F018
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8013F028
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x8013F038
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x8013F05C
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8013F080
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8013F0A4
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8013F0B8
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8013F0C4
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8013F0D0
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8013F0DC
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8013F0E8
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8013F0F4
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8013F100
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8013F120
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8013F140
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8013F154
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8013F168
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8013F17C
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8013F190
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8013F1A4
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8013F1B8
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8013F1CC
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x8013F1E0
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x801461F0
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80145F50
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80145F60
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80145F74
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80145F88
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x80145F9C
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80145FC0
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80145FE4
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80146008
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x80146034
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80146060
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x80146074
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80146088
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x8014609C
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x801460B0
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x801460C0
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x801460D0
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x801460E0
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x801460F0
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x801460FC
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014B00C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014B19C
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014B1B0
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014CAB0
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014CAC0
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014CAEC
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014CB18
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014CB4C
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014CB80
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014CBB4
// size: 0x8C
static unsigned char L4BTYPES[140];

