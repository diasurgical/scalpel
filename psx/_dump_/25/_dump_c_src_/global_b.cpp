// global_b.cpp

#include "types.h"

// address: 0x80125760
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80125EA8
// size: 0x10
extern int OldBlock[4];

// address: 0x80125EB8
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80125B48
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80125C4C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80125D1C
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80125DEC
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80125E10
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80125E34
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80125E50
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x80125E5C
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80125750
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x8012E218
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x8012E86C
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8012C9A8
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8012C9BC
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8012C9D0
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8012C9E0
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8012CA84
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8012CB28
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8012CB3C
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8012CB50
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8012CB64
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8012CB78
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8012CB8C
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8012CBA0
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8012CBB4
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8012CBC8
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8012CBDC
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8012CBF0
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8012CC04
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8012CC18
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8012CC2C
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8012CC40
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8012CC54
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8012CC68
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8012CC78
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8012CC88
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8012CC98
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8012CCA8
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8012CCB8
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8012CCC8
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8012CCD8
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8012CCE8
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8012CCFC
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8012CD10
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8012CD24
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8012CD38
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8012CD4C
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8012CD60
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8012CD74
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8012CD88
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8012CD9C
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8012CDB0
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8012CDC4
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8012CDD8
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8012CDEC
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8012CE00
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8012CE14
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8012CE28
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8012CE38
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8012CE48
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8012CE58
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8012CE68
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8012CE78
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8012CE88
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8012CE98
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8012CEA8
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8012CEB8
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8012CEC8
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8012CED8
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8012CEE8
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8012CEF8
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8012CF08
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8012CF18
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8012CF28
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8012CF38
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8012CF48
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8012CF58
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8012CF68
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8012CF78
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8012CF88
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8012CF98
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8012CFA8
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8012CFB8
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8012CFC8
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8012CFD8
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8012CFE8
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8012CFF8
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8012D008
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8012D018
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8012D028
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8012D038
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8012D048
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8012D058
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8012D068
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8012D078
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8012D088
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8012D098
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x8012D0A8
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x8012D0CC
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8012D0F0
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8012D114
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8012D128
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8012D134
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8012D140
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8012D14C
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8012D158
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8012D164
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8012D170
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8012D190
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8012D1B0
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8012D1C4
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8012D1D8
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8012D1EC
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8012D200
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8012D214
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8012D228
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8012D23C
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x8012D250
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80134260
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80133FC0
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80133FD0
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80133FE4
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80133FF8
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x8013400C
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80134030
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80134054
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80134078
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x801340A4
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x801340D0
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x801340E4
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x801340F8
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x8013410C
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80134120
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80134130
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80134140
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80134150
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80134160
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8013416C
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8013907C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8013920C
// size: 0x14
extern unsigned char hallok[20];

// address: 0x80139220
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8013AB20
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8013AB30
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8013AB5C
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8013AB88
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8013ABBC
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8013ABF0
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8013AC24
// size: 0x8C
static unsigned char L4BTYPES[140];

