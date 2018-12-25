// global_b.cpp

#include "types.h"

// address: 0x80139060
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x801397A8
// size: 0x10
extern int OldBlock[4];

// address: 0x801397B8
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80139448
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x8013954C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x8013961C
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x801396EC
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80139710
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80139734
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80139750
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8013975C
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80139050
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80141A14
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80142068
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x80140170
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x80140184
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x80140198
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x801401A8
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8014024C
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x801402F0
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x80140304
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x80140318
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8014032C
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x80140340
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x80140354
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x80140368
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8014037C
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x80140390
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x801403A4
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x801403B8
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x801403CC
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x801403E0
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x801403F4
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x80140408
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8014041C
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x80140430
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x80140440
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x80140450
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x80140460
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x80140470
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x80140480
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x80140490
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x801404A0
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x801404B0
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x801404C4
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x801404D8
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x801404EC
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80140500
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x80140514
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x80140528
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8014053C
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x80140550
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x80140564
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x80140578
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8014058C
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x801405A0
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x801405B4
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x801405C8
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x801405DC
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x801405F0
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80140600
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x80140610
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x80140620
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x80140630
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x80140640
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x80140650
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x80140660
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x80140670
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x80140680
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x80140690
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x801406A0
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x801406B0
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x801406C0
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x801406D0
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x801406E0
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x801406F0
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80140700
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x80140710
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x80140720
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x80140730
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x80140740
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x80140750
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x80140760
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x80140770
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x80140780
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x80140790
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x801407A0
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x801407B0
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x801407C0
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x801407D0
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x801407E0
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x801407F0
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80140800
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80140810
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80140820
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x80140830
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x80140840
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x80140850
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x80140860
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x80140870
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x80140894
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x801408B8
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x801408DC
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x801408F0
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x801408FC
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80140908
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x80140914
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80140920
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8014092C
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80140938
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x80140958
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x80140978
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8014098C
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x801409A0
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x801409B4
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x801409C8
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x801409DC
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x801409F0
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x80140A04
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80140A18
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80147A80
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x801477E0
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x801477F0
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80147804
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80147818
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x8014782C
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80147850
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80147874
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80147898
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x801478C4
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x801478F0
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x80147904
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80147918
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x8014792C
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80147940
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80147950
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80147960
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80147970
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80147980
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8014798C
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014C89C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014CA2C
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014CA40
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014E340
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014E350
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014E37C
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014E3A8
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014E3DC
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014E410
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014E444
// size: 0x8C
static unsigned char L4BTYPES[140];

