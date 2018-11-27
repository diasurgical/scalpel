// global_b.cpp

#include "types.h"

// address: 0x80137A30
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80138178
// size: 0x10
extern int OldBlock[4];

// address: 0x80138188
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80137E18
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80137F1C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80137FEC
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x801380BC
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x801380E0
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80138104
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80138120
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8013812C
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80137A20
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x801403C8
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80140A1C
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8013EB40
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8013EB54
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8013EB68
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8013EB78
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8013EC1C
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8013ECC0
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8013ECD4
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8013ECE8
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8013ECFC
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8013ED10
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8013ED24
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8013ED38
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8013ED4C
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8013ED60
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8013ED74
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8013ED88
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8013ED9C
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8013EDB0
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8013EDC4
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8013EDD8
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8013EDEC
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8013EE00
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8013EE10
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8013EE20
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8013EE30
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8013EE40
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8013EE50
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8013EE60
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8013EE70
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8013EE80
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8013EE94
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8013EEA8
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8013EEBC
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8013EED0
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8013EEE4
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8013EEF8
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8013EF0C
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8013EF20
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8013EF34
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8013EF48
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8013EF5C
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8013EF70
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8013EF84
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8013EF98
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8013EFAC
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8013EFC0
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8013EFD0
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8013EFE0
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8013EFF0
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8013F000
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8013F010
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8013F020
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8013F030
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8013F040
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8013F050
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8013F060
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8013F070
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8013F080
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8013F090
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8013F0A0
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8013F0B0
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8013F0C0
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8013F0D0
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8013F0E0
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8013F0F0
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8013F100
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8013F110
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8013F120
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8013F130
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8013F140
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8013F150
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8013F160
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8013F170
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8013F180
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8013F190
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8013F1A0
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8013F1B0
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8013F1C0
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8013F1D0
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8013F1E0
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8013F1F0
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8013F200
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8013F210
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8013F220
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8013F230
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x8013F240
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x8013F264
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8013F288
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8013F2AC
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8013F2C0
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8013F2CC
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8013F2D8
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8013F2E4
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8013F2F0
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8013F2FC
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8013F308
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8013F328
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8013F348
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8013F35C
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8013F370
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8013F384
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8013F398
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8013F3AC
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8013F3C0
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8013F3D4
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x8013F3E8
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80146420
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80146180
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80146190
// size: 0x14
static unsigned char L3UP[20];

// address: 0x801461A4
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x801461B8
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x801461CC
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x801461F0
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80146214
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80146238
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x80146264
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80146290
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x801462A4
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x801462B8
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x801462CC
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x801462E0
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x801462F0
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80146300
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80146310
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80146320
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8014632C
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014B23C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014B3CC
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014B3E0
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014CCE0
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014CCF0
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014CD1C
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014CD48
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014CD7C
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014CDB0
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014CDE4
// size: 0x8C
static unsigned char L4BTYPES[140];

