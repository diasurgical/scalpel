// global_b.cpp

#include "types.h"

// address: 0x8012EA94
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x8012F1DC
// size: 0x10
extern int OldBlock[4];

// address: 0x8012F1EC
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x8012EE7C
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x8012EF80
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x8012F050
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x8012F120
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x8012F144
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x8012F168
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x8012F184
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8012F190
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x8012EA84
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80137494
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80137AE8
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x80135C24
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x80135C38
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x80135C4C
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x80135C5C
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x80135D00
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80135DA4
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x80135DB8
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x80135DCC
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x80135DE0
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x80135DF4
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x80135E08
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x80135E1C
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x80135E30
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x80135E44
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x80135E58
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x80135E6C
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x80135E80
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80135E94
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x80135EA8
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x80135EBC
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x80135ED0
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x80135EE4
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x80135EF4
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x80135F04
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x80135F14
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x80135F24
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x80135F34
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x80135F44
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x80135F54
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x80135F64
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x80135F78
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x80135F8C
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x80135FA0
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80135FB4
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x80135FC8
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x80135FDC
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x80135FF0
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x80136004
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x80136018
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8013602C
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x80136040
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x80136054
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x80136068
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8013607C
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x80136090
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x801360A4
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x801360B4
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x801360C4
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x801360D4
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x801360E4
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x801360F4
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x80136104
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x80136114
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x80136124
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x80136134
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x80136144
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x80136154
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x80136164
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x80136174
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80136184
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80136194
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x801361A4
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x801361B4
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x801361C4
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x801361D4
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x801361E4
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x801361F4
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x80136204
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x80136214
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x80136224
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x80136234
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x80136244
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x80136254
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x80136264
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x80136274
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80136284
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80136294
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x801362A4
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x801362B4
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x801362C4
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x801362D4
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x801362E4
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x801362F4
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x80136304
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x80136314
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x80136324
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x80136348
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8013636C
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x80136390
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x801363A4
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x801363B0
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x801363BC
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x801363C8
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x801363D4
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x801363E0
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x801363EC
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8013640C
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8013642C
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x80136440
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x80136454
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x80136468
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8013647C
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80136490
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x801364A4
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x801364B8
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x801364CC
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x8013D4DC
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x8013D23C
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x8013D24C
// size: 0x14
static unsigned char L3UP[20];

// address: 0x8013D260
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x8013D274
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x8013D288
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x8013D2AC
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x8013D2D0
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x8013D2F4
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x8013D320
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x8013D34C
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x8013D360
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x8013D374
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x8013D388
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x8013D39C
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x8013D3AC
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x8013D3BC
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x8013D3CC
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x8013D3DC
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8013D3E8
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014230C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014249C
// size: 0x14
extern unsigned char hallok[20];

// address: 0x801424B0
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x80143DB0
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x80143DC0
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x80143DEC
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x80143E18
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x80143E4C
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x80143E80
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x80143EB4
// size: 0x8C
static unsigned char L4BTYPES[140];

