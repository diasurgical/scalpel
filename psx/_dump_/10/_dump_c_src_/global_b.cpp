// global_b.cpp

#include "types.h"

// address: 0x80122D48
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80123490
// size: 0x10
extern int OldBlock[4];

// address: 0x801234A0
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80123130
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80123234
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80123304
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x801233D4
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x801233F8
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x8012341C
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80123438
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x80123444
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80122D38
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x8012B6D0
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x8012BD24
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x80129E60
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x80129E74
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x80129E88
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x80129E98
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x80129F3C
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80129FE0
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x80129FF4
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8012A008
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8012A01C
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8012A030
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8012A044
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8012A058
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8012A06C
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8012A080
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8012A094
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8012A0A8
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8012A0BC
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8012A0D0
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8012A0E4
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8012A0F8
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8012A10C
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8012A120
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8012A130
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8012A140
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8012A150
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8012A160
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8012A170
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8012A180
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8012A190
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8012A1A0
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8012A1B4
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8012A1C8
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8012A1DC
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8012A1F0
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8012A204
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8012A218
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8012A22C
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8012A240
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8012A254
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8012A268
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8012A27C
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8012A290
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8012A2A4
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8012A2B8
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8012A2CC
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8012A2E0
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8012A2F0
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8012A300
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8012A310
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8012A320
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8012A330
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8012A340
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8012A350
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8012A360
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8012A370
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8012A380
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8012A390
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8012A3A0
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8012A3B0
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8012A3C0
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8012A3D0
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8012A3E0
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8012A3F0
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8012A400
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8012A410
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8012A420
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8012A430
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8012A440
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8012A450
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8012A460
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8012A470
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8012A480
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8012A490
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8012A4A0
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8012A4B0
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8012A4C0
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8012A4D0
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8012A4E0
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8012A4F0
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8012A500
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8012A510
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8012A520
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8012A530
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8012A540
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8012A550
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x8012A560
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x8012A584
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8012A5A8
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8012A5CC
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8012A5E0
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8012A5EC
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8012A5F8
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8012A604
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8012A610
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8012A61C
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8012A628
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8012A648
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8012A668
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8012A67C
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8012A690
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8012A6A4
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8012A6B8
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8012A6CC
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8012A6E0
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8012A6F4
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x8012A708
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80131718
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80131478
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80131488
// size: 0x14
static unsigned char L3UP[20];

// address: 0x8013149C
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x801314B0
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x801314C4
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x801314E8
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x8013150C
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80131530
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x8013155C
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80131588
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x8013159C
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x801315B0
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x801315C4
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x801315D8
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x801315E8
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x801315F8
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80131608
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80131618
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x80131624
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x80136534
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x801366C4
// size: 0x14
extern unsigned char hallok[20];

// address: 0x801366D8
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x80137FD8
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x80137FE8
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x80138014
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x80138040
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x80138074
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x801380A8
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x801380DC
// size: 0x8C
static unsigned char L4BTYPES[140];

