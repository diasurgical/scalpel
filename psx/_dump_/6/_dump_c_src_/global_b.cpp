// global_b.cpp

#include "types.h"

// address: 0x80123560
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80123CA8
// size: 0x10
extern int OldBlock[4];

// address: 0x80123CB8
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80123948
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80123A4C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80123B1C
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80123BEC
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80123C10
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80123C34
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80123C50
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x80123C5C
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80123550
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x8012BEE8
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x8012C53C
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8012A678
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8012A68C
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8012A6A0
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8012A6B0
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8012A754
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8012A7F8
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8012A80C
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8012A820
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8012A834
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8012A848
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8012A85C
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8012A870
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8012A884
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8012A898
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8012A8AC
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8012A8C0
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8012A8D4
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8012A8E8
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8012A8FC
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8012A910
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8012A924
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8012A938
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8012A948
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8012A958
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8012A968
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8012A978
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8012A988
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8012A998
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8012A9A8
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8012A9B8
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8012A9CC
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8012A9E0
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8012A9F4
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8012AA08
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8012AA1C
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8012AA30
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8012AA44
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8012AA58
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8012AA6C
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8012AA80
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8012AA94
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8012AAA8
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8012AABC
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8012AAD0
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8012AAE4
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8012AAF8
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8012AB08
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8012AB18
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8012AB28
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8012AB38
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8012AB48
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8012AB58
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8012AB68
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8012AB78
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8012AB88
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8012AB98
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8012ABA8
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8012ABB8
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8012ABC8
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8012ABD8
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8012ABE8
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8012ABF8
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8012AC08
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8012AC18
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8012AC28
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8012AC38
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8012AC48
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8012AC58
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8012AC68
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8012AC78
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8012AC88
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8012AC98
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8012ACA8
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8012ACB8
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8012ACC8
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8012ACD8
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8012ACE8
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8012ACF8
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8012AD08
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8012AD18
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8012AD28
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8012AD38
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8012AD48
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8012AD58
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8012AD68
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x8012AD78
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x8012AD9C
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8012ADC0
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8012ADE4
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8012ADF8
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8012AE04
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8012AE10
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8012AE1C
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8012AE28
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8012AE34
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8012AE40
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8012AE60
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8012AE80
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8012AE94
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8012AEA8
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8012AEBC
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8012AED0
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8012AEE4
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8012AEF8
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8012AF0C
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x8012AF20
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80131F30
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80131C90
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80131CA0
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80131CB4
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80131CC8
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x80131CDC
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80131D00
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80131D24
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80131D48
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x80131D74
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80131DA0
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x80131DB4
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80131DC8
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x80131DDC
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80131DF0
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80131E00
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80131E10
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80131E20
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80131E30
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x80131E3C
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x80136D4C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x80136EDC
// size: 0x14
extern unsigned char hallok[20];

// address: 0x80136EF0
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x801387F0
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x80138800
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8013882C
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x80138858
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8013888C
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x801388C0
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x801388F4
// size: 0x8C
static unsigned char L4BTYPES[140];

