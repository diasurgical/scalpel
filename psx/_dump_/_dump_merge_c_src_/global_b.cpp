// global_b.cpp

#include "types.h"

// address: 0x801596E8
// size: 0x80
extern char AlertStr[128];

// address: 0x8012A4B8
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x8012A4C4
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8012A4D0
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x8012A4DC
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x8012A4E8
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x8012A4F4
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x8012310C
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x80129E14
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80129D70
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x8012A4A4
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x8012A540
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x8012A554
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x8012A568
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x8012A57C
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8012A590
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x8012A5A4
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x8012A5B8
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x8012A5CC
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x801577C0
// size: 0x1DE0
extern struct CharDataStructDef_dup_18 CharDataStruct;

// address: 0x801578C8
// size: 0x1DE0
extern struct CharDataStructDef CharDataStruct_addr_801578C8;

// address: 0x801437D0
// size: 0xC
extern int ClassStrTbl[3];

// address: 0x8013CCB0
// size: 0x258
extern struct Creds CreditsText[50];

// address: 0x8013CDB8
// size: 0x258
extern struct Creds_dup_17 CreditsText_addr_8013CDB8[50];

// address: 0x8012A45C
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x80129D38
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x80129D4C
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x8012A1B8
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x8012A1C8
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x8012A1D8
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x8012A1E8
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x8012A1F8
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x8012A208
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x8012A218
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x8012A228
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x8012A238
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x8012A248
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x8012A258
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x8012A268
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x8012A278
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x8012A288
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x8012A298
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x8012A2A8
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x8012A2B8
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x8012A2C8
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x8012A2D8
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x8012A2E8
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x8012A2F8
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x8012A308
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x8012A318
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x8012A328
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x8012A338
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x8012A348
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x8012A358
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x8012A368
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x8012A378
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x8012A388
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x8012A398
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x8012A3A8
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x8012A3B8
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x8012A3C8
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x8012A3D8
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x8012A3E8
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x8012A3F8
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x8012A408
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x8012A418
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x8012A428
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x801314FC
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x80131350
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x80131374
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x80131388
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x801314B0
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x801314C0
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x801314D0
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x801314E0
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x801314F0
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x8013139C
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x801313C0
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x801313E4
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x80131408
// size: 0x2A
static unsigned char L3TITE6[42];

// address: 0x80131434
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x80131460
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x80131474
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x80131488
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x8013149C
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80131360
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80137FB4
// size: 0x8C
static unsigned char L4BTYPES[140];

// address: 0x80137EB0
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x80137F18
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x80137F4C
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x80137F80
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x80137EEC
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x80137EC0
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x801365B0
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x801231DC
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x80122C10
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x801232D0
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x80123378
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x80123310
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x80123368
// size: 0x10
extern int OldBlock[4];

// address: 0x8012A500
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x8012A520
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8012331C
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x8012A5E0
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x8012B5A8
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80123008
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x80129D60
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x801232F4
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x801232AC
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x801596A8
// size: 0x40
extern char TempStr[64];

// address: 0x8012A438
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x80129EB8
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x80129ECC
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x80129EE0
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x80129EF4
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x80129F08
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x80129F1C
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x80129F30
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x80129F44
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x80129F58
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x80129F6C
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x80129F80
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x80129F94
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80129FA8
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x80129FBC
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x80129FD0
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x80129FE4
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x80129FF8
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x8012A008
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x8012A018
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x8012A028
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x8012A038
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x8012A048
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x8012A058
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x8012A068
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x8012A078
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x8012A08C
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8012A0A0
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x8012A0B4
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x8012A0C8
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x8012A0DC
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x8012A0F0
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x8012A104
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x8012A118
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x8012A12C
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8012A140
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x8012A154
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x8012A168
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x8012A17C
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8012A190
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x8012A1A4
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x8012A480
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x8013640C
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8013659C
// size: 0x14
extern unsigned char hallok[20];

// address: 0x801315F0
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x8012BBFC
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x801438C4
// size: 0x14000
extern unsigned char save_buffer[81920];

// address: 0x80122C20
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

