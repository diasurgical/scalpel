// global_b.cpp

#include "types.h"

// address: 0x80121AA0
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x801221E8
// size: 0x10
extern int OldBlock[4];

// address: 0x801221F8
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80121E88
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80121F8C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x8012205C
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x8012212C
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80122150
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80122174
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80122190
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8012219C
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80121A90
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x8012A428
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x8012AA7C
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x80128BB8
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x80128BCC
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x80128BE0
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x80128BF0
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x80128C94
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80128D38
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x80128D4C
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x80128D60
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x80128D74
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x80128D88
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x80128D9C
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x80128DB0
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x80128DC4
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x80128DD8
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x80128DEC
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x80128E00
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x80128E14
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80128E28
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x80128E3C
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x80128E50
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x80128E64
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x80128E78
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x80128E88
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x80128E98
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x80128EA8
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x80128EB8
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x80128EC8
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x80128ED8
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x80128EE8
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x80128EF8
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x80128F0C
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x80128F20
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x80128F34
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80128F48
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x80128F5C
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x80128F70
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x80128F84
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x80128F98
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x80128FAC
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x80128FC0
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x80128FD4
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x80128FE8
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x80128FFC
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x80129010
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x80129024
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x80129038
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80129048
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x80129058
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x80129068
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x80129078
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x80129088
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x80129098
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x801290A8
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x801290B8
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x801290C8
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x801290D8
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x801290E8
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x801290F8
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x80129108
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80129118
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80129128
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x80129138
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80129148
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x80129158
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x80129168
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x80129178
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x80129188
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x80129198
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x801291A8
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x801291B8
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x801291C8
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x801291D8
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x801291E8
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x801291F8
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x80129208
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80129218
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80129228
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x80129238
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80129248
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x80129258
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x80129268
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x80129278
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x80129288
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x80129298
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x801292A8
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x801292B8
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x801292DC
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x80129300
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x80129324
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x80129338
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x80129344
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x80129350
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8012935C
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x80129368
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x80129374
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x80129380
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x801293A0
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x801293C0
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x801293D4
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x801293E8
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x801293FC
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x80129410
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80129424
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x80129438
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8012944C
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x80129460
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80130470
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x801301D0
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x801301E0
// size: 0x14
static unsigned char L3UP[20];

// address: 0x801301F4
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80130208
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x8013021C
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80130240
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80130264
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80130288
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x801302B4
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x801302E0
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x801302F4
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80130308
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x8013031C
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80130330
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80130340
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80130350
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80130360
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80130370
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8013037C
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8013528C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8013541C
// size: 0x14
extern unsigned char hallok[20];

// address: 0x80135430
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x80136D30
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x80136D40
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x80136D6C
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x80136D98
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x80136DCC
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x80136E00
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x80136E34
// size: 0x8C
static unsigned char L4BTYPES[140];

