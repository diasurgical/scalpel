// global_b.cpp

#include "types.h"

// address: 0x801355B0
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x80135CF8
// size: 0x10
extern int OldBlock[4];

// address: 0x80135D08
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80135998
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80135A9C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80135B6C
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80135C3C
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x80135C60
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80135C84
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x80135CA0
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x80135CAC
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x801355A0
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x8013DF64
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x8013E5B8
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x8013C6C0
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x8013C6D4
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8013C6E8
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x8013C6F8
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8013C79C
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x8013C840
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x8013C854
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x8013C868
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x8013C87C
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x8013C890
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x8013C8A4
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x8013C8B8
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x8013C8CC
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x8013C8E0
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x8013C8F4
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8013C908
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x8013C91C
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x8013C930
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x8013C944
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8013C958
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x8013C96C
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x8013C980
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8013C990
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8013C9A0
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8013C9B0
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8013C9C0
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8013C9D0
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8013C9E0
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8013C9F0
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8013CA00
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8013CA14
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8013CA28
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8013CA3C
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8013CA50
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8013CA64
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8013CA78
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8013CA8C
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8013CAA0
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8013CAB4
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8013CAC8
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8013CADC
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8013CAF0
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8013CB04
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8013CB18
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8013CB2C
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8013CB40
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8013CB50
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8013CB60
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8013CB70
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8013CB80
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8013CB90
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8013CBA0
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8013CBB0
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8013CBC0
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8013CBD0
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8013CBE0
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8013CBF0
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8013CC00
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8013CC10
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8013CC20
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8013CC30
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8013CC40
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8013CC50
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8013CC60
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8013CC70
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8013CC80
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8013CC90
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8013CCA0
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8013CCB0
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8013CCC0
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8013CCD0
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8013CCE0
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8013CCF0
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8013CD00
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8013CD10
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8013CD20
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8013CD30
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8013CD40
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8013CD50
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8013CD60
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8013CD70
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8013CD80
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8013CD90
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8013CDA0
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8013CDB0
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x8013CDC0
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x8013CDE4
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8013CE08
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8013CE2C
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8013CE40
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8013CE4C
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8013CE58
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8013CE64
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8013CE70
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8013CE7C
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8013CE88
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8013CEA8
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8013CEC8
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8013CEDC
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8013CEF0
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8013CF04
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8013CF18
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8013CF2C
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8013CF40
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8013CF54
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x8013CF68
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80143FD0
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x80143D30
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80143D40
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80143D54
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80143D68
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x80143D7C
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80143DA0
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80143DC4
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80143DE8
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x80143E14
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80143E40
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x80143E54
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80143E68
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x80143E7C
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80143E90
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80143EA0
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80143EB0
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80143EC0
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80143ED0
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x80143EDC
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x80148DEC
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x80148F7C
// size: 0x14
extern unsigned char hallok[20];

// address: 0x80148F90
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014A890
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014A8A0
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014A8CC
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014A8F8
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014A92C
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014A960
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014A994
// size: 0x8C
static unsigned char L4BTYPES[140];

