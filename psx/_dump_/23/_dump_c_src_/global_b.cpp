// global_b.cpp

#include "types.h"

// address: 0x80124F78
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x801256C0
// size: 0x10
extern int OldBlock[4];

// address: 0x801256D0
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80125360
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80125464
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80125534
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80125604
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80125628
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x8012564C
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80125668
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x80125674
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80124F68
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x8012D8F8
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x8012DF4C
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8012C088
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8012C09C
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8012C0B0
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8012C0C0
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8012C164
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8012C208
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8012C21C
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8012C230
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8012C244
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8012C258
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8012C26C
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8012C280
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8012C294
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8012C2A8
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8012C2BC
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8012C2D0
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8012C2E4
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8012C2F8
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8012C30C
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8012C320
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8012C334
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8012C348
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8012C358
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8012C368
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8012C378
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8012C388
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8012C398
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8012C3A8
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8012C3B8
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8012C3C8
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8012C3DC
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8012C3F0
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8012C404
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8012C418
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8012C42C
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8012C440
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8012C454
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8012C468
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8012C47C
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8012C490
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8012C4A4
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8012C4B8
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8012C4CC
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8012C4E0
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8012C4F4
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8012C508
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8012C518
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8012C528
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8012C538
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8012C548
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8012C558
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8012C568
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8012C578
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8012C588
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8012C598
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8012C5A8
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8012C5B8
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8012C5C8
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8012C5D8
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8012C5E8
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8012C5F8
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8012C608
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8012C618
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8012C628
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8012C638
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8012C648
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8012C658
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8012C668
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8012C678
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8012C688
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8012C698
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8012C6A8
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8012C6B8
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8012C6C8
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8012C6D8
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8012C6E8
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8012C6F8
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8012C708
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8012C718
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8012C728
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8012C738
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8012C748
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8012C758
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8012C768
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8012C778
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x8012C788
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x8012C7AC
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8012C7D0
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8012C7F4
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8012C808
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8012C814
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8012C820
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8012C82C
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8012C838
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8012C844
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8012C850
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8012C870
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8012C890
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8012C8A4
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8012C8B8
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8012C8CC
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8012C8E0
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8012C8F4
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8012C908
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8012C91C
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x8012C930
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80133940
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x801336A0
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x801336B0
// size: 0x14
static unsigned char L3UP[20];

// address: 0x801336C4
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x801336D8
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x801336EC
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80133710
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80133734
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80133758
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x80133784
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x801337B0
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x801337C4
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x801337D8
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x801337EC
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80133800
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80133810
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80133820
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80133830
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80133840
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8013384C
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8013875C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x801388EC
// size: 0x14
extern unsigned char hallok[20];

// address: 0x80138900
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8013A200
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8013A210
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8013A23C
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8013A268
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8013A29C
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8013A2D0
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8013A304
// size: 0x8C
static unsigned char L4BTYPES[140];

