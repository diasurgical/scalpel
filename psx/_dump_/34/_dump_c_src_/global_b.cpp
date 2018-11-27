// global_b.cpp

#include "types.h"

// address: 0x801392A8
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x801399F0
// size: 0x10
extern int OldBlock[4];

// address: 0x80139A00
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80139690
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80139794
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80139864
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80139934
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80139958
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x8013997C
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80139998
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x801399A4
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80139298
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80141C5C
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x801422B0
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x801403B8
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x801403CC
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x801403E0
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x801403F0
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x80140494
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80140538
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8014054C
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x80140560
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x80140574
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x80140588
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8014059C
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x801405B0
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x801405C4
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x801405D8
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x801405EC
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x80140600
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x80140614
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80140628
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8014063C
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x80140650
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x80140664
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x80140678
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x80140688
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x80140698
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x801406A8
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x801406B8
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x801406C8
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x801406D8
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x801406E8
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x801406F8
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8014070C
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x80140720
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x80140734
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80140748
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8014075C
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x80140770
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x80140784
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x80140798
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x801407AC
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x801407C0
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x801407D4
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x801407E8
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x801407FC
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x80140810
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x80140824
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x80140838
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80140848
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x80140858
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x80140868
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x80140878
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x80140888
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x80140898
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x801408A8
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x801408B8
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x801408C8
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x801408D8
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x801408E8
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x801408F8
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x80140908
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80140918
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80140928
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x80140938
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80140948
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x80140958
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x80140968
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x80140978
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x80140988
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x80140998
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x801409A8
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x801409B8
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x801409C8
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x801409D8
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x801409E8
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x801409F8
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x80140A08
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80140A18
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80140A28
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x80140A38
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80140A48
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80140A58
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80140A68
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x80140A78
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x80140A88
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x80140A98
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x80140AA8
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x80140AB8
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x80140ADC
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x80140B00
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x80140B24
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x80140B38
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x80140B44
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80140B50
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x80140B5C
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80140B68
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x80140B74
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80140B80
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x80140BA0
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x80140BC0
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x80140BD4
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x80140BE8
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x80140BFC
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x80140C10
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80140C24
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x80140C38
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x80140C4C
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80140C60
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80147CC8
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80147A28
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80147A38
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80147A4C
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80147A60
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x80147A74
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80147A98
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80147ABC
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80147AE0
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x80147B0C
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80147B38
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x80147B4C
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80147B60
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x80147B74
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80147B88
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80147B98
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80147BA8
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80147BB8
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80147BC8
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x80147BD4
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014CAE4
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014CC74
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014CC88
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014E588
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014E598
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014E5C4
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014E5F0
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014E624
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014E658
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014E68C
// size: 0x8C
static unsigned char L4BTYPES[140];

