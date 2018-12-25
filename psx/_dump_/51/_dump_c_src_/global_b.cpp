// global_b.cpp

#include "types.h"

// address: 0x80129080
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x801297C8
// size: 0x10
extern int OldBlock[4];

// address: 0x801297D8
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80129468
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x8012956C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x8012963C
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x8012970C
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80129730
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80129754
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80129770
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8012977C
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80129070
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80131A54
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x801320A8
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x801301B0
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x801301C4
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x801301D8
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x801301E8
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8013028C
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80130330
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x80130344
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x80130358
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8013036C
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x80130380
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x80130394
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x801303A8
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x801303BC
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x801303D0
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x801303E4
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x801303F8
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8013040C
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80130420
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x80130434
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x80130448
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8013045C
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x80130470
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x80130480
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x80130490
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x801304A0
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x801304B0
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x801304C0
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x801304D0
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x801304E0
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x801304F0
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x80130504
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x80130518
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8013052C
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80130540
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x80130554
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x80130568
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8013057C
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x80130590
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x801305A4
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x801305B8
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x801305CC
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x801305E0
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x801305F4
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x80130608
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8013061C
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x80130630
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80130640
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x80130650
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x80130660
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x80130670
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x80130680
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x80130690
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x801306A0
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x801306B0
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x801306C0
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x801306D0
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x801306E0
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x801306F0
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x80130700
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80130710
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80130720
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x80130730
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80130740
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x80130750
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x80130760
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x80130770
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x80130780
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x80130790
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x801307A0
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x801307B0
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x801307C0
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x801307D0
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x801307E0
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x801307F0
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x80130800
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80130810
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80130820
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x80130830
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80130840
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80130850
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80130860
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x80130870
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x80130880
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x80130890
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x801308A0
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x801308B0
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x801308D4
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x801308F8
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8013091C
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x80130930
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8013093C
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80130948
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x80130954
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80130960
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8013096C
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80130978
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x80130998
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x801309B8
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x801309CC
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x801309E0
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x801309F4
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x80130A08
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80130A1C
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x80130A30
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x80130A44
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80130A58
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80137AE0
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80137840
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80137850
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80137864
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80137878
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x8013788C
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x801378B0
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x801378D4
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x801378F8
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x80137924
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80137950
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x80137964
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80137978
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x8013798C
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x801379A0
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x801379B0
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x801379C0
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x801379D0
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x801379E0
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x801379EC
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8013C914
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8013CAA4
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8013CAB8
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8013E3B8
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8013E3C8
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8013E3F4
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8013E420
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8013E454
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8013E488
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8013E4BC
// size: 0x8C
static unsigned char L4BTYPES[140];

