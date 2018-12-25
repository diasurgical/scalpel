// global_c.cpp

#include "types.h"

// address: 0x80139EC0
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x8013A608
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x8013A2A8
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x8013A3AC
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x8013A47C
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x8013A54C
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x8013A570
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x8013A594
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x8013A5B0
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8013A5BC
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80139EB0
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80142A30
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80143084
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x801411C0
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x801411D4
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x801411E8
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x801411F8
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8014129C
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80141340
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x80141354
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x80141368
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8014137C
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x80141390
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x801413A4
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x801413B8
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x801413CC
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x801413E0
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x801413F4
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x80141408
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8014141C
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80141430
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x80141444
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x80141458
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8014146C
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x80141480
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x80141490
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x801414A0
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x801414B0
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x801414C0
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x801414D0
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x801414E0
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x801414F0
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x80141500
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x80141514
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x80141528
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8014153C
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80141550
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x80141564
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x80141578
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8014158C
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x801415A0
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x801415B4
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x801415C8
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x801415DC
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x801415F0
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x80141604
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x80141618
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8014162C
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x80141640
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80141650
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x80141660
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x80141670
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x80141680
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x80141690
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x801416A0
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x801416B0
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x801416C0
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x801416D0
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x801416E0
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x801416F0
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x80141700
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x80141710
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80141720
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80141730
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x80141740
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80141750
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x80141760
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x80141770
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x80141780
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x80141790
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x801417A0
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x801417B0
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x801417C0
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x801417D0
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x801417E0
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x801417F0
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x80141800
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x80141810
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80141820
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80141830
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x80141840
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80141850
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80141860
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80141870
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x80141880
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x80141890
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x801418A0
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x801418B0
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x801418C0
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x801418E4
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x80141908
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8014192C
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x80141940
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8014194C
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80141958
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x80141964
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80141970
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8014197C
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80141988
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x801419A8
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x801419C8
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x801419DC
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x801419F0
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x80141A04
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x80141A18
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80141A2C
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x80141A40
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x80141A54
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80141A68
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80148AB0
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x8014883C
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x8014884C
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80148860
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80148874
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x80148888
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x801488AC
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x801488D0
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x801488F4
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80148920
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x80148934
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80148948
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x8014895C
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80148970
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80148980
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80148990
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x801489A0
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x801489B0
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x801489BC
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014DA7C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014DC0C
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014DC20
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014F520
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014F530
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014F55C
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014F588
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014F5BC
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014F5F0
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014F624
// size: 0x8C
static unsigned char L4BTYPES[140];

