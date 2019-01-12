// global_c.cpp

#include "types.h"

// address: 0x80139DB8
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x8013A500
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x8013A1A0
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x8013A2A4
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x8013A374
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x8013A444
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x8013A468
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x8013A48C
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x8013A4A8
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8013A4B4
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80139DA8
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80142928
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80142F7C
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x801410B8
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x801410CC
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x801410E0
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x801410F0
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x80141194
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80141238
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8014124C
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x80141260
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x80141274
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x80141288
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8014129C
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x801412B0
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x801412C4
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x801412D8
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x801412EC
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x80141300
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x80141314
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80141328
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8014133C
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x80141350
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x80141364
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x80141378
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x80141388
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x80141398
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x801413A8
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x801413B8
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x801413C8
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x801413D8
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x801413E8
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x801413F8
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8014140C
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x80141420
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x80141434
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80141448
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8014145C
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x80141470
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x80141484
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x80141498
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x801414AC
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x801414C0
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x801414D4
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x801414E8
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x801414FC
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x80141510
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x80141524
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x80141538
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80141548
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x80141558
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x80141568
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x80141578
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x80141588
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x80141598
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x801415A8
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x801415B8
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x801415C8
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x801415D8
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x801415E8
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x801415F8
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x80141608
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80141618
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80141628
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x80141638
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80141648
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x80141658
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x80141668
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x80141678
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x80141688
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x80141698
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x801416A8
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x801416B8
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x801416C8
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x801416D8
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x801416E8
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x801416F8
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x80141708
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80141718
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80141728
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x80141738
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80141748
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80141758
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80141768
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x80141778
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x80141788
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x80141798
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x801417A8
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x801417B8
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x801417DC
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x80141800
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x80141824
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x80141838
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x80141844
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80141850
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8014185C
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80141868
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x80141874
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80141880
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x801418A0
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x801418C0
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x801418D4
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x801418E8
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x801418FC
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x80141910
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80141924
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x80141938
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8014194C
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80141960
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x801489A8
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80148734
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80148744
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80148758
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x8014876C
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x80148780
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x801487A4
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x801487C8
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x801487EC
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80148818
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x8014882C
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80148840
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x80148854
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80148868
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80148878
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80148888
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80148898
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x801488A8
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x801488B4
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014D974
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014DB04
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014DB18
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014F418
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014F428
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014F454
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014F480
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014F4B4
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014F4E8
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014F51C
// size: 0x8C
static unsigned char L4BTYPES[140];

