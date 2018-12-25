// global_c.cpp

#include "types.h"

// address: 0x80135730
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80135E78
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80135B18
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80135C1C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80135CEC
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80135DBC
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80135DE0
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80135E04
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80135E20
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x80135E2C
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80135720
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x8013E2A0
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x8013E8F4
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8013CA30
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8013CA44
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8013CA58
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8013CA68
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8013CB0C
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8013CBB0
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8013CBC4
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8013CBD8
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8013CBEC
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8013CC00
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8013CC14
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8013CC28
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8013CC3C
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8013CC50
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8013CC64
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8013CC78
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8013CC8C
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8013CCA0
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8013CCB4
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8013CCC8
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8013CCDC
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8013CCF0
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8013CD00
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8013CD10
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8013CD20
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8013CD30
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8013CD40
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8013CD50
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8013CD60
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8013CD70
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8013CD84
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8013CD98
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8013CDAC
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8013CDC0
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8013CDD4
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8013CDE8
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8013CDFC
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8013CE10
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8013CE24
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8013CE38
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8013CE4C
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8013CE60
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8013CE74
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8013CE88
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8013CE9C
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8013CEB0
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8013CEC0
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8013CED0
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8013CEE0
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8013CEF0
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8013CF00
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8013CF10
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8013CF20
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8013CF30
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8013CF40
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8013CF50
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8013CF60
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8013CF70
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8013CF80
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8013CF90
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8013CFA0
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8013CFB0
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8013CFC0
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8013CFD0
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8013CFE0
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8013CFF0
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8013D000
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8013D010
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8013D020
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8013D030
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8013D040
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8013D050
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8013D060
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8013D070
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8013D080
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8013D090
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8013D0A0
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8013D0B0
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8013D0C0
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8013D0D0
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8013D0E0
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8013D0F0
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8013D100
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8013D110
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8013D120
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x8013D130
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x8013D154
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8013D178
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8013D19C
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8013D1B0
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8013D1BC
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8013D1C8
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8013D1D4
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8013D1E0
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8013D1EC
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8013D1F8
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8013D218
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8013D238
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8013D24C
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8013D260
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8013D274
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8013D288
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8013D29C
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8013D2B0
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8013D2C4
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x8013D2D8
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80144320
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x801440AC
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x801440BC
// size: 0x14
static unsigned char L3UP[20];

// address: 0x801440D0
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x801440E4
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x801440F8
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x8014411C
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80144140
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80144164
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80144190
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x801441A4
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x801441B8
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x801441CC
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x801441E0
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x801441F0
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80144200
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80144210
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80144220
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8014422C
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x801492EC
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014947C
// size: 0x14
extern unsigned char hallok[20];

// address: 0x80149490
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014AD90
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014ADA0
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014ADCC
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014ADF8
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014AE2C
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014AE60
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014AE94
// size: 0x8C
static unsigned char L4BTYPES[140];

