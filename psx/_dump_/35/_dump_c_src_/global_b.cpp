// global_b.cpp

#include "types.h"

// address: 0x80139F98
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x8013A6E0
// size: 0x10
extern int OldBlock[4];

// address: 0x8013A6F0
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x8013A380
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x8013A484
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x8013A554
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x8013A624
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x8013A648
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x8013A66C
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x8013A688
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8013A694
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80139F88
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x8014294C
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80142FA0
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x801410A8
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x801410BC
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x801410D0
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x801410E0
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x80141184
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80141228
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8014123C
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x80141250
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x80141264
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x80141278
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8014128C
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x801412A0
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x801412B4
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x801412C8
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x801412DC
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x801412F0
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x80141304
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80141318
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8014132C
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x80141340
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x80141354
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x80141368
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x80141378
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x80141388
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x80141398
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x801413A8
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x801413B8
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x801413C8
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x801413D8
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x801413E8
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x801413FC
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x80141410
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x80141424
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80141438
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8014144C
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x80141460
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x80141474
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x80141488
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8014149C
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x801414B0
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x801414C4
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x801414D8
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x801414EC
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x80141500
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x80141514
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x80141528
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80141538
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x80141548
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x80141558
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x80141568
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x80141578
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x80141588
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x80141598
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x801415A8
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x801415B8
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x801415C8
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x801415D8
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x801415E8
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x801415F8
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80141608
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80141618
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x80141628
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80141638
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x80141648
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x80141658
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x80141668
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x80141678
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x80141688
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x80141698
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x801416A8
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x801416B8
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x801416C8
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x801416D8
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x801416E8
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x801416F8
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80141708
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80141718
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x80141728
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80141738
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80141748
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80141758
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x80141768
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x80141778
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x80141788
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x80141798
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x801417A8
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x801417CC
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x801417F0
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x80141814
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x80141828
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x80141834
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80141840
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8014184C
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80141858
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x80141864
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80141870
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x80141890
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x801418B0
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x801418C4
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x801418D8
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x801418EC
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x80141900
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80141914
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x80141928
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8014193C
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80141950
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x801489B8
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80148718
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80148728
// size: 0x14
static unsigned char L3UP[20];

// address: 0x8014873C
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80148750
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x80148764
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80148788
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x801487AC
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x801487D0
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x801487FC
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80148828
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x8014883C
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80148850
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x80148864
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80148878
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80148888
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80148898
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x801488A8
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x801488B8
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x801488C4
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014D7D4
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014D964
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014D978
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014F278
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014F288
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014F2B4
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014F2E0
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014F314
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014F348
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014F37C
// size: 0x8C
static unsigned char L4BTYPES[140];

