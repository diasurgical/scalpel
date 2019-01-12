// global_b.cpp

#include "types.h"

// address: 0x80120308
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80120A50
// size: 0x10
extern int OldBlock[4];

// address: 0x80120A60
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x801206F0
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x801207F4
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x801208C4
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80120994
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x801209B8
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x801209DC
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x801209F8
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x80120A04
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x801202F8
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80128C90
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x801292E4
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x80127420
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x80127434
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x80127448
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x80127458
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x801274FC
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x801275A0
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x801275B4
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x801275C8
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x801275DC
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x801275F0
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x80127604
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x80127618
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8012762C
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x80127640
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x80127654
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x80127668
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8012767C
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80127690
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x801276A4
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x801276B8
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x801276CC
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x801276E0
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x801276F0
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x80127700
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x80127710
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x80127720
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x80127730
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x80127740
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x80127750
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x80127760
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x80127774
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x80127788
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8012779C
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x801277B0
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x801277C4
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x801277D8
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x801277EC
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x80127800
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x80127814
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x80127828
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8012783C
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x80127850
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x80127864
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x80127878
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8012788C
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x801278A0
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x801278B0
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x801278C0
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x801278D0
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x801278E0
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x801278F0
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x80127900
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x80127910
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x80127920
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x80127930
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x80127940
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x80127950
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x80127960
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x80127970
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80127980
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80127990
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x801279A0
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x801279B0
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x801279C0
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x801279D0
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x801279E0
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x801279F0
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x80127A00
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x80127A10
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x80127A20
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x80127A30
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x80127A40
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x80127A50
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x80127A60
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x80127A70
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80127A80
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80127A90
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x80127AA0
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80127AB0
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80127AC0
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80127AD0
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x80127AE0
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x80127AF0
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x80127B00
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x80127B10
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x80127B20
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x80127B44
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x80127B68
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x80127B8C
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x80127BA0
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x80127BAC
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80127BB8
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x80127BC4
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80127BD0
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x80127BDC
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80127BE8
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x80127C08
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x80127C28
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x80127C3C
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x80127C50
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x80127C64
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x80127C78
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80127C8C
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x80127CA0
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x80127CB4
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80127CC8
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x8012ECD8
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x8012EA38
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x8012EA48
// size: 0x14
static unsigned char L3UP[20];

// address: 0x8012EA5C
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x8012EA70
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x8012EA84
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x8012EAA8
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x8012EACC
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x8012EAF0
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x8012EB1C
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x8012EB48
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x8012EB5C
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x8012EB70
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x8012EB84
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x8012EB98
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x8012EBA8
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x8012EBB8
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x8012EBC8
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x8012EBD8
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8012EBE4
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x80133AF4
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x80133C84
// size: 0x14
extern unsigned char hallok[20];

// address: 0x80133C98
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x80135598
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x801355A8
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x801355D4
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x80135600
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x80135634
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x80135668
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8013569C
// size: 0x8C
static unsigned char L4BTYPES[140];

