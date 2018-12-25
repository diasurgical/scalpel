// global_b.cpp

#include "types.h"

// address: 0x801242E8
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80124A30
// size: 0x10
extern int OldBlock[4];

// address: 0x80124A40
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x801246D0
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x801247D4
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x801248A4
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80124974
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80124998
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x801249BC
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x801249D8
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x801249E4
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x801242D8
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x8012CC70
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x8012D2C4
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8012B400
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8012B414
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8012B428
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8012B438
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8012B4DC
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8012B580
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8012B594
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8012B5A8
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8012B5BC
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8012B5D0
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8012B5E4
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8012B5F8
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8012B60C
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8012B620
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8012B634
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8012B648
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8012B65C
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8012B670
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8012B684
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8012B698
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8012B6AC
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8012B6C0
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8012B6D0
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8012B6E0
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8012B6F0
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8012B700
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8012B710
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8012B720
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8012B730
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8012B740
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8012B754
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8012B768
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8012B77C
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8012B790
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8012B7A4
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8012B7B8
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8012B7CC
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8012B7E0
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8012B7F4
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8012B808
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8012B81C
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8012B830
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8012B844
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8012B858
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8012B86C
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8012B880
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8012B890
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8012B8A0
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8012B8B0
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8012B8C0
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8012B8D0
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8012B8E0
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8012B8F0
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8012B900
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8012B910
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8012B920
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8012B930
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8012B940
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8012B950
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8012B960
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8012B970
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8012B980
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8012B990
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8012B9A0
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8012B9B0
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8012B9C0
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8012B9D0
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8012B9E0
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8012B9F0
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8012BA00
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8012BA10
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8012BA20
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8012BA30
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8012BA40
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8012BA50
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8012BA60
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8012BA70
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8012BA80
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8012BA90
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8012BAA0
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8012BAB0
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8012BAC0
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8012BAD0
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8012BAE0
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8012BAF0
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x8012BB00
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x8012BB24
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8012BB48
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8012BB6C
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8012BB80
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8012BB8C
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8012BB98
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8012BBA4
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8012BBB0
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8012BBBC
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8012BBC8
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8012BBE8
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8012BC08
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8012BC1C
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8012BC30
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8012BC44
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8012BC58
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8012BC6C
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8012BC80
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8012BC94
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x8012BCA8
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80132CB8
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80132A18
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80132A28
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80132A3C
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80132A50
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x80132A64
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80132A88
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80132AAC
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80132AD0
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x80132AFC
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80132B28
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x80132B3C
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80132B50
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x80132B64
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80132B78
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80132B88
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80132B98
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80132BA8
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80132BB8
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x80132BC4
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x80137AD4
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x80137C64
// size: 0x14
extern unsigned char hallok[20];

// address: 0x80137C78
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x80139578
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x80139588
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x801395B4
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x801395E0
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x80139614
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x80139648
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8013967C
// size: 0x8C
static unsigned char L4BTYPES[140];

