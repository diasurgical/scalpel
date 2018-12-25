// global_b.cpp

#include "types.h"

// address: 0x8012F2D8
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x8012FA20
// size: 0x10
extern int OldBlock[4];

// address: 0x8012FA30
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x8012F6C0
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x8012F7C4
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x8012F894
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x8012F964
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x8012F988
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x8012F9AC
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x8012F9C8
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8012F9D4
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x8012F2C8
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80137CAC
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80138300
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x80136408
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8013641C
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x80136430
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x80136440
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x801364E4
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80136588
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8013659C
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x801365B0
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x801365C4
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x801365D8
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x801365EC
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x80136600
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x80136614
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x80136628
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8013663C
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x80136650
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x80136664
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80136678
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8013668C
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x801366A0
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x801366B4
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x801366C8
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x801366D8
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x801366E8
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x801366F8
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x80136708
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x80136718
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x80136728
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x80136738
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x80136748
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8013675C
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x80136770
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x80136784
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80136798
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x801367AC
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x801367C0
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x801367D4
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x801367E8
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x801367FC
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x80136810
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x80136824
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x80136838
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8013684C
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x80136860
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x80136874
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x80136888
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80136898
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x801368A8
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x801368B8
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x801368C8
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x801368D8
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x801368E8
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x801368F8
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x80136908
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x80136918
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x80136928
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x80136938
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x80136948
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x80136958
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80136968
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80136978
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x80136988
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80136998
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x801369A8
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x801369B8
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x801369C8
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x801369D8
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x801369E8
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x801369F8
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x80136A08
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x80136A18
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x80136A28
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x80136A38
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x80136A48
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x80136A58
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80136A68
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80136A78
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x80136A88
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80136A98
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80136AA8
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80136AB8
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x80136AC8
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x80136AD8
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x80136AE8
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x80136AF8
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x80136B08
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x80136B2C
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x80136B50
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x80136B74
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x80136B88
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x80136B94
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80136BA0
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x80136BAC
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80136BB8
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x80136BC4
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80136BD0
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x80136BF0
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x80136C10
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x80136C24
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x80136C38
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x80136C4C
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x80136C60
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80136C74
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x80136C88
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x80136C9C
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80136CB0
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x8013DD38
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x8013DA98
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x8013DAA8
// size: 0x14
static unsigned char L3UP[20];

// address: 0x8013DABC
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x8013DAD0
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x8013DAE4
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x8013DB08
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x8013DB2C
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x8013DB50
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x8013DB7C
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x8013DBA8
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x8013DBBC
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x8013DBD0
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x8013DBE4
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x8013DBF8
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x8013DC08
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x8013DC18
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x8013DC28
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x8013DC38
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8013DC44
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x80142B6C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x80142CFC
// size: 0x14
extern unsigned char hallok[20];

// address: 0x80142D10
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x80144610
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x80144620
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014464C
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x80144678
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x801446AC
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x801446E0
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x80144714
// size: 0x8C
static unsigned char L4BTYPES[140];

