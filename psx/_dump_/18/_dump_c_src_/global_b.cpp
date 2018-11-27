// global_b.cpp

#include "types.h"

// address: 0x801301C8
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80130910
// size: 0x10
extern int OldBlock[4];

// address: 0x80130920
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x801305B0
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x801306B4
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80130784
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80130854
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80130878
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x8013089C
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x801308B8
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x801308C4
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x801301B8
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80138B50
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x801391A4
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x801372E0
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x801372F4
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x80137308
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x80137318
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x801373BC
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80137460
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x80137474
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x80137488
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8013749C
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x801374B0
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x801374C4
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x801374D8
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x801374EC
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x80137500
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x80137514
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x80137528
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8013753C
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80137550
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x80137564
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x80137578
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8013758C
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x801375A0
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x801375B0
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x801375C0
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x801375D0
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x801375E0
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x801375F0
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x80137600
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x80137610
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x80137620
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x80137634
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x80137648
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8013765C
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80137670
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x80137684
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x80137698
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x801376AC
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x801376C0
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x801376D4
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x801376E8
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x801376FC
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x80137710
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x80137724
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x80137738
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8013774C
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x80137760
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80137770
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x80137780
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x80137790
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x801377A0
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x801377B0
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x801377C0
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x801377D0
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x801377E0
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x801377F0
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x80137800
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x80137810
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x80137820
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x80137830
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80137840
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80137850
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x80137860
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80137870
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x80137880
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x80137890
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x801378A0
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x801378B0
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x801378C0
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x801378D0
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x801378E0
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x801378F0
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x80137900
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x80137910
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x80137920
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x80137930
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80137940
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80137950
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x80137960
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80137970
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80137980
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80137990
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x801379A0
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x801379B0
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x801379C0
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x801379D0
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x801379E0
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x80137A04
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x80137A28
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x80137A4C
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x80137A60
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x80137A6C
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80137A78
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x80137A84
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80137A90
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x80137A9C
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80137AA8
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x80137AC8
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x80137AE8
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x80137AFC
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x80137B10
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x80137B24
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x80137B38
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80137B4C
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x80137B60
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x80137B74
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80137B88
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x8013EB98
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x8013E8F8
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x8013E908
// size: 0x14
static unsigned char L3UP[20];

// address: 0x8013E91C
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x8013E930
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x8013E944
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x8013E968
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x8013E98C
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x8013E9B0
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x8013E9DC
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x8013EA08
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x8013EA1C
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x8013EA30
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x8013EA44
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x8013EA58
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x8013EA68
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x8013EA78
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x8013EA88
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x8013EA98
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8013EAA4
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x801439B4
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x80143B44
// size: 0x14
extern unsigned char hallok[20];

// address: 0x80143B58
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x80145458
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x80145468
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x80145494
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x801454C0
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x801454F4
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x80145528
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014555C
// size: 0x8C
static unsigned char L4BTYPES[140];

