#include "types.h"

// address: 0x8012AD24
extern int NumOfMonsterListLevels;

// address: 0x800A7BF0
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x8012AA08
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x8012AA0C
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x8012AA10
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x8012AA18
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x8012AA1C
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x8012AA20
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x8012AA24
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x8012AA28
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x8012AA2C
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x8012AA30
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x8012AA34
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x8012AA38
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x8012AA3C
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x8012AA40
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x8012AA44
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x8012AA48
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x8012AA4C
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x8012AA54
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x8012AA58
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x8012AA60
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x8012AA64
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x8012AA68
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x8012AA6C
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x8012AA70
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x8012AA74
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x8012AA78
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x8012AA7C
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x8012AA80
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x8012AA88
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x8012AA8C
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x8012AA90
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x8012AA94
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x8012AA98
// size: 0x3
static unsigned char NumsLEV6M6QA[3];

// address: 0x8012AA9C
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x8012AAA0
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x8012AAA4
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x8012AAA8
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x8012AAAC
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x8012AAB0
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x8012AAB4
// size: 0x3
static unsigned char NumsLEV8M8A[3];

// address: 0x8012AAB8
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x8012AABC
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8012AAC0
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x8012AAC4
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x8012AAC8
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x8012AACC
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x8012AAD0
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x8012AAD4
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x8012AAD8
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x8012AADC
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x8012AAE0
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x8012AAE4
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x8012AAE8
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x8012AAEC
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x8012AAF0
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x8012AAF4
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x8012AAF8
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x8012AAFC
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x8012AB00
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x8012AB04
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x8012AB08
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x8012AB0C
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x8012AB10
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x8012AB14
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x8012AB18
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x8012AB1C
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x8012AB20
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x8012AB24
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x8012AB28
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x8012AB2C
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x8012AB30
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x8012AB34
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x8012AB38
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x8012AB3C
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x8012AB40
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8012AB44
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8012AB48
// size: 0x2
static unsigned char NumsLEV15M15QA[2];

// address: 0x8012AB4C
// size: 0x3
static unsigned char NumsLEV16M16D[3];

// address: 0x800A7710
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A7740
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A77A0
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A77E0
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A7850
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A78C0
// size: 0x60
static struct MonstList ChoiceListLEV6[6];

// address: 0x800A7920
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A7970
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A79D0
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A7A10
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800A7A60
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A7AB0
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A7AF0
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A7B40
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A7BA0
// size: 0x40
static struct MonstList ChoiceListLEV15[4];

// address: 0x800A7BE0
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x8012C5CC
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800A7C70
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x8012AD34
extern int ArgsSoFar;

// address: 0x8012AD44
extern unsigned long *ThisOt;

// address: 0x8012AD48
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x8012C5D0
static long hndPrimBuffers;

// address: 0x8012C5D4
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x8012C5D8
static unsigned char BufferDepth;

// address: 0x8012C5D9
static unsigned char WorkRamId;

// address: 0x8012C5DA
static unsigned char ScrNum;

// address: 0x8012C5DC
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x8012C5E0
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x8012C5E4
static unsigned char BufferNum;

// address: 0x8012AD4C
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x8012C5E5
static unsigned char LastBuffer;

// address: 0x8012C5E8
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x8012C5EC
static int ThisOtSize;

// address: 0x8012AD50
// size: 0x8
static struct RECT ScrRect;

// address: 0x8012C5F0
static int VidWait;

// address: 0x8012CA50
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8012C5F4
static void (*VbFunc)();

// address: 0x8012C5F8
static unsigned long VidTick;

// address: 0x8012C5FC
static int VXOff;

// address: 0x8012C600
static int VYOff;

// address: 0x8012AD64
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x8012AD68
extern int LastFmem;

// address: 0x8012AD58
extern unsigned int GSYS_MemStart;

// address: 0x8012AD5C
extern unsigned int GSYS_MemEnd;

// address: 0x800A7FB8
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A7FE0
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x8012AD60
extern int LowestFmem;

// address: 0x8012AD78
extern int FileSYS;

// address: 0x8012C604
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x8012C608
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x8012AD92
extern short DavesPad;

// address: 0x8012AD94
extern short DavesPadDeb;

// address: 0x800A8008
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x8012CB30
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A88AC
// size: 0x47C
extern struct TextDat *AllDats[287];

// address: 0x8012ADE4
extern int TpW;

// address: 0x8012ADE8
extern int TpH;

// address: 0x8012ADEC
extern int TpXDest;

// address: 0x8012ADF0
extern int TpYDest;

// address: 0x8012ADF4
// size: 0x8
extern struct RECT R;

// address: 0x800A8D28
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800A8D5C
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A803C
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x8012AE08
static bool ChunkGot;

// address: 0x800A8D84
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800A8D94
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A8DA4
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x8012AE1C
extern unsigned long BL_NoLumpFiles;

// address: 0x8012AE20
extern unsigned long BL_NoStreamFiles;

// address: 0x8012AE24
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x8012AE28
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x8012AE2C
extern unsigned char FileLoaded;

// address: 0x8012AE5C
extern int NoTAllocs;

// address: 0x800A8ED0
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x8012C614
static bool CanPause;

// address: 0x8012C618
static bool Paused;

// address: 0x8012CB58
// size: 0x10
static struct Dialog PBack;

// address: 0x800A9138
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800A915C
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800A9180
// size: 0x384
extern unsigned char demo_buffer[900];

// address: 0x8012AE88
extern int demo_pad_time;

// address: 0x8012AE8C
extern int demo_pad_count;

// address: 0x800A9060
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800A90CC
// size: 0x6C
extern struct CPad Pad1;

// address: 0x8012AE90
extern unsigned long demo_finish;

// address: 0x8012AE94
extern int cac_pad;

// address: 0x8012AEB0
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x8012AEB4
// size: 0x34
extern struct POLY_GT4 *CharGt4;

// address: 0x8012AEB8
extern int CharFrm;

// address: 0x8012AEA1
extern unsigned char WHITER;

// address: 0x8012AEA2
extern unsigned char WHITEG;

// address: 0x8012AEA3
extern unsigned char WHITEB;

// address: 0x8012AEA4
extern unsigned char BLUER;

// address: 0x8012AEA5
extern unsigned char BLUEG;

// address: 0x8012AEA6
extern unsigned char BLUEB;

// address: 0x8012AEA7
extern unsigned char REDR;

// address: 0x8012AEA8
extern unsigned char REDG;

// address: 0x8012AEA9
extern unsigned char REDB;

// address: 0x8012AEAA
extern unsigned char GOLDR;

// address: 0x8012AEAB
extern unsigned char GOLDG;

// address: 0x8012AEAC
extern unsigned char GOLDB;

// address: 0x800A9504
// size: 0x21C
extern struct CFont MediumFont;

// address: 0x800A9720
// size: 0x21C
extern struct CFont LargeFont;

// address: 0x800A993C
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800A99F0
// size: 0x10
extern struct FontTab LFont;

// address: 0x800A9A00
// size: 0x136
extern struct FontItem MFontTab[155];

// address: 0x800A9B38
// size: 0x10
extern struct FontTab MFont;

// address: 0x8012AECD
extern unsigned char DialogRed;

// address: 0x8012AECE
extern unsigned char DialogGreen;

// address: 0x8012AECF
extern unsigned char DialogBlue;

// address: 0x8012AED0
extern unsigned char DialogTRed;

// address: 0x8012AED1
extern unsigned char DialogTGreen;

// address: 0x8012AED2
extern unsigned char DialogTBlue;

// address: 0x8012AED4
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x8012AED8
extern int DialogBackGfx;

// address: 0x8012AEDC
extern int DialogBackW;

// address: 0x8012AEE0
extern int DialogBackH;

// address: 0x8012AEE4
extern int DialogBorderGfx;

// address: 0x8012AEE8
extern int DialogBorderTLW;

// address: 0x8012AEEC
extern int DialogBorderTLH;

// address: 0x8012AEF0
extern int DialogBorderTRW;

// address: 0x8012AEF4
extern int DialogBorderTRH;

// address: 0x8012AEF8
extern int DialogBorderBLW;

// address: 0x8012AEFC
extern int DialogBorderBLH;

// address: 0x8012AF00
extern int DialogBorderBRW;

// address: 0x8012AF04
extern int DialogBorderBRH;

// address: 0x8012AF08
extern int DialogBorderTW;

// address: 0x8012AF0C
extern int DialogBorderTH;

// address: 0x8012AF10
extern int DialogBorderBW;

// address: 0x8012AF14
extern int DialogBorderBH;

// address: 0x8012AF18
extern int DialogBorderLW;

// address: 0x8012AF1C
extern int DialogBorderLH;

// address: 0x8012AF20
extern int DialogBorderRW;

// address: 0x8012AF24
extern int DialogBorderRH;

// address: 0x8012AF28
extern int DialogBevelGfx;

// address: 0x8012AF2C
extern int DialogBevelCW;

// address: 0x8012AF30
extern int DialogBevelCH;

// address: 0x8012AF34
extern int DialogBevelLRW;

// address: 0x8012AF38
extern int DialogBevelLRH;

// address: 0x8012AF3C
extern int DialogBevelUDW;

// address: 0x8012AF40
extern int DialogBevelUDH;

// address: 0x8012AF44
extern int MY_DialogOTpos;

// address: 0x8012C61C
static unsigned char DialogGBack;

// address: 0x8012C61D
static char GShadeX;

// address: 0x8012C61E
static char GShadeY;

// address: 0x8012C624
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800A9B88
// size: 0x70
extern int Cxy[28];

// address: 0x8012AEC7
extern unsigned char BORDERR;

// address: 0x8012AEC8
extern unsigned char BORDERG;

// address: 0x8012AEC9
extern unsigned char BORDERB;

// address: 0x8012AECA
extern unsigned char BACKR;

// address: 0x8012AECB
extern unsigned char BACKG;

// address: 0x8012AECC
extern unsigned char BACKB;

// address: 0x800A9B48
// size: 0x40
static char GShadeTab[64];

// address: 0x8012AEC5
static char GShadePX;

// address: 0x8012AEC6
static char GShadePY;

// address: 0x8012AF51
extern unsigned char PlayDemoFlag;

// address: 0x8012CB68
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x8012CB98
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x8012C62C
static int blockr;

// address: 0x8012C630
static int blockg;

// address: 0x8012C634
static int blockb;

// address: 0x8012C638
static int InfraFlag;

// address: 0x8012C63C
static unsigned char blank_bit;

// address: 0x8012AF65
extern unsigned char P1ObjSelCount;

// address: 0x8012AF66
extern unsigned char P2ObjSelCount;

// address: 0x8012AF67
extern unsigned char P12ObjSelCount;

// address: 0x8012AF68
extern unsigned char P1ItemSelCount;

// address: 0x8012AF69
extern unsigned char P2ItemSelCount;

// address: 0x8012AF6A
extern unsigned char P12ItemSelCount;

// address: 0x8012AF6B
extern unsigned char P1MonstSelCount;

// address: 0x8012AF6C
extern unsigned char P2MonstSelCount;

// address: 0x8012AF6D
extern unsigned char P12MonstSelCount;

// address: 0x8012AF6E
static unsigned short P1ObjSelCol;

// address: 0x8012AF70
static unsigned short P2ObjSelCol;

// address: 0x8012AF72
static unsigned short P12ObjSelCol;

// address: 0x8012AF74
static unsigned short P1ItemSelCol;

// address: 0x8012AF76
static unsigned short P2ItemSelCol;

// address: 0x8012AF78
static unsigned short P12ItemSelCol;

// address: 0x8012AF7A
static unsigned short P1MonstSelCol;

// address: 0x8012AF7C
static unsigned short P2MonstSelCol;

// address: 0x8012AF7E
static unsigned short P12MonstSelCol;

// address: 0x8012AF80
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x800A9BF8
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x8012AF9C
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x80120848
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x8012CBC8
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x8012CBD8
// size: 0x10
static struct Overlay PregameOver;

// address: 0x8012CBE8
// size: 0x10
static struct Overlay GameOver;

// address: 0x8012CBF8
// size: 0x10
static struct Overlay FmvOver;

// address: 0x8012C640
static int OWorldX;

// address: 0x8012C644
static int OWorldY;

// address: 0x8012C648
static int WWorldX;

// address: 0x8012C64C
static int WWorldY;

// address: 0x801208C4
// size: 0x20
static short TxyAdd[16];

// address: 0x8012AFC0
extern int GXAdj2;

// address: 0x8012C650
static int TimePerFrame;

// address: 0x8012C654
static int CpuStart;

// address: 0x8012C658
static int CpuTime;

// address: 0x8012C65C
static int DrawTime;

// address: 0x8012C660
static int DrawStart;

// address: 0x8012C664
static int LastCpuTime;

// address: 0x8012C668
static int LastDrawTime;

// address: 0x8012C66C
static int DrawArea;

// address: 0x8012AFC8
extern bool ProfOn;

// address: 0x800A9C0C
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x80120A2C
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800A9C20
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800A9C74
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800A9CC8
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800A9D1C
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800A9D70
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x8012AFF0
extern int hof;

// address: 0x8012AFF4
extern int mof;

// address: 0x800A9E38
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x800A9F38
// size: 0x12000
extern unsigned long STR_Buffer[18432];

// address: 0x8012B024
extern unsigned long Time;

// address: 0x8012B028
extern bool CDWAIT;

// address: 0x800BBF38
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x800BBF78
// size: 0x80
extern struct SFXHDR STRSave;

// address: 0x8012B001
extern char NoActiveStreams;

// address: 0x8012B004
static bool STRInit;

// address: 0x8012B008
static unsigned char CDAngle;

// address: 0x8012B04C
extern char SFXNotPlayed;

// address: 0x8012B04D
extern char SFXNotInBank;

// address: 0x8012CC08
// size: 0x108
static char spu_management[264];

// address: 0x8012CD18
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x8012C674
static unsigned short NoSfx;

// address: 0x8012B038
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x8012B03C
static long OffsetHandle;

// address: 0x8012B040
static int BankBase;

// address: 0x8012B044
static unsigned char SPU_Done;

// address: 0x80120DD0
// size: 0x70
static unsigned short SFXRemapTab[56];

// address: 0x8012B048
static int NoSNDRemaps;

// address: 0x800BBFF8
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x80120E74
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x8012B08C
extern int demo_level;

// address: 0x8012CD30
// size: 0x20
static int buff[8];

// address: 0x8012B090
extern int old_val;

// address: 0x8012B094
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x8012B098
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x8012B09C
// size: 0x5C
extern struct TASK *tonys;

// address: 0x8012B078
extern int demo_load;

// address: 0x8012B07C
extern int demo_record_load;

// address: 0x8012B080
extern int level_record;

// address: 0x8012B084
extern char demo_fade_finished;

// address: 0x8012B086
extern unsigned char demo_which;

// address: 0x800BC1E4
// size: 0x14
extern unsigned long demolevel[5];

// address: 0x8012B085
extern unsigned char quest_cheat_num;

// address: 0x8012B074
extern int moo_moo;

// address: 0x8012B087
extern unsigned char demo_flash;

// address: 0x8012B088
extern int tonys_Task;

// address: 0x8012B1F8
extern bool DoShowPanel;

// address: 0x8012B1FC
extern bool DoDrawBg;

// address: 0x8012C678
static bool GlueFinished;

// address: 0x8012C67C
static bool DoHomingScroll;

// address: 0x8012C680
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x8012C684
static int CurrentMonsterList;

// address: 0x8012B0A9
extern char started_grtask;

// address: 0x800BC1F8
// size: 0x288
extern struct PInf PlayerInfo[81];

// address: 0x8012B200
// size: 0x4
static char ArmourChar[4];

// address: 0x80120F68
// size: 0xA
static char WepChar[10];

// address: 0x8012B204
// size: 0x4
static char CharChar[4];

// address: 0x8012C688
static char ctrl_select_line;

// address: 0x8012C689
static char ctrl_select_side;

// address: 0x8012C68A
static char ckeyheld;

// address: 0x8012C690
// size: 0x8
static struct RECT CtrlRect;

// address: 0x8012B218
extern unsigned char ctrlflag;

// address: 0x800BC528
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800BC480
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x8012B214
static int toppos;

// address: 0x8012CD50
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800BC658
// size: 0x98
static int controller_defaults[2][19];

// address: 0x8012B288
extern int gr_scrxoff;

// address: 0x8012B28C
extern int gr_scryoff;

// address: 0x8012B294
extern unsigned short water_clut;

// address: 0x8012B298
extern char visible_level;

// address: 0x8012B285
extern char last_type;

// address: 0x8012B29A
extern char daylight;

// address: 0x8012B296
extern char cow_in_sight;

// address: 0x8012B297
extern char inn_in_sight;

// address: 0x8012B290
extern unsigned int water_count;

// address: 0x8012B299
extern unsigned char lastrnd;

// address: 0x8012B29C
static int call_clock;

// address: 0x8012B2AC
extern int TitleAnimCount;

// address: 0x8012B2B0
static int flametick;

// address: 0x800BC710
// size: 0x90
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x8012CD60
// size: 0x240
static struct Particle PartArray[16];

// address: 0x8012C698
static int partOtPos;

// address: 0x8012B2CC
extern int SetParticle;

// address: 0x8012B2D0
static int p1partexecnum;

// address: 0x8012B2D4
static int p2partexecnum;

// address: 0x800BC6F0
// size: 0x20
static int JumpArray[8];

// address: 0x8012B2D8
static int partjumpflag;

// address: 0x8012B2DC
static int partglowflag;

// address: 0x8012B2E0
static int partcolour;

// address: 0x800BC7A0
// size: 0x48
extern struct Spell_Target SplTarget[2];

// address: 0x8012B301
extern unsigned char select_flag;

// address: 0x8012C69C
// size: 0x8
static struct RECT SelectRect;

// address: 0x8012C6A4
static char item_select;

// address: 0x8012B304
// size: 0x2
extern char QSpell[2];

// address: 0x8012B308
// size: 0x2
extern char _spltotype[2];

// address: 0x8012B30C
// size: 0x8
extern bool force_attack[2];

// address: 0x8012B2F4
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x8012CFA0
// size: 0x10
static struct Dialog SelectBack;

// address: 0x8012B2F8
// size: 0x4
extern char mana_order[4];

// address: 0x8012B2FC
// size: 0x4
extern char health_order[4];

// address: 0x8012B300
extern unsigned char birdcheck;

// address: 0x8012CFB0
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x8012C6A8
static unsigned short progress;

// address: 0x801210E0
// size: 0x2A
static unsigned short Level2CutScreen[21];

// address: 0x8012CFD8
// size: 0x78
static struct CScreen Scr;

// address: 0x8012B32C
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x8012B330
static bool GameLoading;

// address: 0x8012D058
// size: 0x10
static struct Dialog LBack;

// address: 0x8012B340
extern unsigned int card_ev0;

// address: 0x8012B344
extern unsigned int card_ev1;

// address: 0x8012B348
extern unsigned int card_ev2;

// address: 0x8012B34C
extern unsigned int card_ev3;

// address: 0x8012B350
extern unsigned int card_ev10;

// address: 0x8012B354
extern unsigned int card_ev11;

// address: 0x8012B358
extern unsigned int card_ev12;

// address: 0x8012B35C
extern unsigned int card_ev13;

// address: 0x8012B360
// size: 0x8
extern int card_dirty[2];

// address: 0x8012B368
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8012C6AC
static int card_event;

// address: 0x8012B33C
extern void (*mem_card_event_handler)();

// address: 0x8012B334
extern bool MemCardActive;

// address: 0x8012B338
static int never_hooked_events;

// address: 0x8012B3BC
extern unsigned long MasterVol;

// address: 0x8012B3C0
extern unsigned long MusicVol;

// address: 0x8012B3C4
extern unsigned long SoundVol;

// address: 0x8012B3C8
extern unsigned long VideoVol;

// address: 0x8012B3CC
extern unsigned long SpeechVol;

// address: 0x8012C6B0
// size: 0x6C
static struct TextDat *Slider;

// address: 0x8012C6B4
static int sw;

// address: 0x8012C6B8
static int sx;

// address: 0x8012C6BC
static int sy;

// address: 0x8012C6C0
static unsigned char Adjust;

// address: 0x8012C6C1
static unsigned char qspin;

// address: 0x8012C6C2
static unsigned char lqspin;

// address: 0x8012C6C4
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x8012C6C8
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8012C6CC
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x8012B3D0
extern int save_blocks;

// address: 0x8012B3D4
extern char *Savefilename;

// address: 0x8012B3D8
extern int ReturnMenu;

// address: 0x8012C6D0
// size: 0x8
static struct RECT ORect;

// address: 0x8012C6D8
// size: 0x8
static char *McState[2];

// address: 0x8012B3DC
extern int they_pressed;

// address: 0x8012B398
extern bool optionsflag;

// address: 0x8012B38C
extern int cmenu;

// address: 0x8012B3A4
extern int options_pad;

// address: 0x8012B394
extern bool allspellsflag;

// address: 0x800BD208
// size: 0x80
extern short Circle[64];

// address: 0x8012B378
extern bool goldcheat;

// address: 0x8012B37C
extern unsigned char Qfromoptions;

// address: 0x8012B380
static int Spacing;

// address: 0x8012B384
static int cs;

// address: 0x8012B388
static int lastcs;

// address: 0x8012B390
static bool MemcardOverlay;

// address: 0x8012B39C
extern int saveflag;

// address: 0x8012B3A0
extern int loadflag;

// address: 0x8012B3B0
static char *PrevTxt;

// address: 0x8012B3B4
static char *SelTxt;

// address: 0x800BC7E8
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800BC890
// size: 0xF0
extern struct OMENUITEM GameMenu[10];

// address: 0x800BC980
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800BCA10
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800BCAB8
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800BCB60
// size: 0x60
extern struct OMENUITEM QuitMenu[4];

// address: 0x800BCBC0
// size: 0xA8
extern struct OMENUITEM MemcardMenu[7];

// address: 0x800BCC68
// size: 0x60
extern struct OMENUITEM MemcardLoadGameMenu[4];

// address: 0x800BCCC8
// size: 0x60
extern struct OMENUITEM MemcardSaveGameMenu[4];

// address: 0x800BCD28
// size: 0x60
extern struct OMENUITEM MemcardSaveOptionsMenu[4];

// address: 0x800BCD88
// size: 0x60
extern struct OMENUITEM MemcardLoadOptionsMenu[4];

// address: 0x800BCDE8
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800BCE48
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800BCEF0
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800BCF98
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800BCFF8
// size: 0x108
extern struct OMENUITEM CheatMenu[11];

// address: 0x800BD100
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800BD130
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x800BD178
// size: 0x90
extern struct OMENULIST MenuList[18];

// address: 0x8012B3B8
static bool debounce;

// address: 0x800BD288
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x8012C6E0
// size: 0x8
static int last_seenx[2];

// address: 0x8012C6E8
// size: 0x8
static int last_seeny[2];

// address: 0x8012B3E9
extern char hop_height;

// address: 0x8012B3EC
// size: 0x8
static struct Perch perches[4];

// address: 0x800BD408
// size: 0x30
extern struct FMVDAT FmvTab[6];

// address: 0x8012B400
static int CurMons;

// address: 0x8012B404
static int Frame;

// address: 0x8012B408
static int Action;

// address: 0x8012B40C
static int Dir;

// address: 0x8012B470
extern int indsize;

// address: 0x8012B450
static unsigned char *kanjbuff;

// address: 0x8012B454
// size: 0x4
static struct kindexS *kindex;

// address: 0x8012B458
static long hndKanjBuff;

// address: 0x8012B45C
static long hndKanjIndex;

// address: 0x8012B4B0
extern int FeBackX;

// address: 0x8012B4B4
extern int FeBackY;

// address: 0x8012B4B8
extern int FeBackW;

// address: 0x8012B4BC
extern int FeBackH;

// address: 0x8012B4C0
extern unsigned char FeFlag;

// address: 0x800BDF98
// size: 0x780
extern struct FeStruct FeBuffer[80];

// address: 0x8012B4C4
extern int FePlayerNo;

// address: 0x8012C6F0
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x8012B4C8
extern int FeBufferCount;

// address: 0x8012B4CC
extern int FeNoOfPlayers;

// address: 0x8012B4D0
// size: 0x8
extern int FeChrClass[2];

// address: 0x800BE718
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x8012B4D8
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x8012B4DC
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x8012B4E0
extern unsigned long FeCount;

// address: 0x8012B4E4
extern int fileselect;

// address: 0x8012B4E8
extern int BookMenu;

// address: 0x8012B4EC
extern int FeAttractMode;

// address: 0x8012B4F0
extern int FMVPress;

// address: 0x8012B480
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x8012B488
// size: 0x8
extern bool LoadedChar[2];

// address: 0x8012B484
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x8012B490
extern unsigned char FeIsAVirgin;

// address: 0x8012B494
extern int FeMenuDelay;

// address: 0x800BD438
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800BD454
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800BD470
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800BD48C
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800BD4A8
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800BD4C4
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800BD4E0
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800BD4FC
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800BD518
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800BD534
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800BD550
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800BD56C
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800BD588
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800BD5A4
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x8012B498
static int fadeval;

// address: 0x800BD5C0
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800BD638
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800BD680
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800BD6F8
// size: 0x6A8
extern struct FeMenuTable FeNameEngMenuTable[71];

// address: 0x800BDDA0
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800BDDE8
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800BDE48
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800BDEA8
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800BDF20
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x8012B4A4
extern unsigned long AttractTitleDelay;

// address: 0x8012B4A8
extern unsigned long AttractMainDelay;

// address: 0x8012B4AC
extern int FMVEndPad;

// address: 0x8012B524
extern int InCredits;

// address: 0x8012B528
extern int CreditTitleNo;

// address: 0x8012B52C
extern int CreditSubTitleNo;

// address: 0x8012B540
// size: 0x8
extern int card_status[2];

// address: 0x8012B548
// size: 0x8
extern int card_usable[2];

// address: 0x8012B550
// size: 0x8
extern int card_files[2];

// address: 0x8012B558
// size: 0x8
extern int card_changed[2];

// address: 0x8012B59C
extern int AlertTxt;

// address: 0x8012B5A0
extern int current_card;

// address: 0x8012B5A4
extern int LoadType;

// address: 0x8012B5A8
extern int McMenuPos;

// address: 0x8012B5AC
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x8012B598
extern bool fileinfoflag;

// address: 0x8012B56C
extern char *DiabloGameFile;

// address: 0x8012B570
extern char *DiabloOptionFile;

// address: 0x8012B590
// size: 0x8
extern char *McState_addr_8012B590[2];

// address: 0x8012B680
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x8012B688
extern int mdec_audio_sec;

// address: 0x8012B68C
extern int mdec_audio_offs;

// address: 0x8012B690
extern int mdec_audio_playing;

// address: 0x8012B694
extern int mdec_audio_rate_shift;

// address: 0x8012B698
// size: 0x8
extern char *vlcbuf[2];

// address: 0x8012B6A0
extern int slice_size;

// address: 0x8012B6A4
// size: 0x8
extern struct RECT slice;

// address: 0x8012B6AC
extern int slice_inc;

// address: 0x8012B6B0
extern int area_pw;

// address: 0x8012B6B4
extern int area_ph;

// address: 0x8012B6B8
// size: 0x2
extern char tmdc_pol_dirty[2];

// address: 0x8012B6BC
// size: 0x8
extern int num_pol[2];

// address: 0x8012B6C4
extern int mdec_cx;

// address: 0x8012B6C8
extern int mdec_cy;

// address: 0x8012B6CC
extern int mdec_w;

// address: 0x8012B6D0
extern int mdec_h;

// address: 0x8012B6D4
// size: 0x8
extern int mdec_pw[2];

// address: 0x8012B6DC
// size: 0x8
extern int mdec_ph[2];

// address: 0x8012B6E4
extern int move_x;

// address: 0x8012B6E8
extern int move_y;

// address: 0x8012B6EC
extern int move_scale;

// address: 0x8012B6F0
extern int stream_frames;

// address: 0x8012B6F4
extern int last_stream_frame;

// address: 0x8012B6F8
extern int mdec_framecount;

// address: 0x8012B6FC
extern int mdec_speed;

// address: 0x8012B700
extern int mdec_stream_starting;

// address: 0x8012B704
extern int mdec_last_frame;

// address: 0x8012B708
extern int mdec_sectors_per_frame;

// address: 0x8012B70C
extern unsigned short *vlctab;

// address: 0x8012B710
extern unsigned char *mdc_buftop;

// address: 0x8012B714
extern unsigned char *mdc_bufstart;

// address: 0x8012B718
extern int mdc_bufleft;

// address: 0x8012B71C
extern int mdc_buftotal;

// address: 0x8012B720
extern int ordertab_length;

// address: 0x8012B724
extern int time_in_frames;

// address: 0x8012B728
extern int stream_chunksize;

// address: 0x8012B72C
extern int stream_bufsize;

// address: 0x8012B730
extern int stream_subsec;

// address: 0x8012B734
extern int stream_secnum;

// address: 0x8012B738
extern int stream_last_sector;

// address: 0x8012B73C
extern int stream_startsec;

// address: 0x8012B740
extern int stream_opened;

// address: 0x8012B744
extern int stream_last_chunk;

// address: 0x8012B748
extern int stream_got_chunks;

// address: 0x8012B74C
extern int last_sector;

// address: 0x8012B750
extern int cdstream_resetsec;

// address: 0x8012B754
extern int last_handler_event;

// address: 0x8012B624
extern bool user_start;

// address: 0x8012B5BC
extern unsigned char *vlc_tab;

// address: 0x8012B5C0
extern unsigned char *vlc_buf;

// address: 0x8012B5C4
extern unsigned char *img_buf;

// address: 0x8012B5C8
extern int vbuf;

// address: 0x8012B5CC
extern int last_fn;

// address: 0x8012B5D0
extern int last_mdc;

// address: 0x8012B5D4
extern int slnum;

// address: 0x8012B5D8
extern int slices_to_do;

// address: 0x8012B5DC
extern int mbuf;

// address: 0x8012B5E0
extern int mfn;

// address: 0x8012B5E4
extern int last_move_mbuf;

// address: 0x8012B5E8
extern int move_request;

// address: 0x8012B5EC
extern int mdec_scale;

// address: 0x8012B5F0
extern int do_brightness;

// address: 0x8012B5F4
extern int frame_decoded;

// address: 0x8012B5F8
extern int mdec_streaming;

// address: 0x8012B5FC
extern int mdec_stream_size;

// address: 0x8012B600
extern int first_stream_frame;

// address: 0x8012B604
extern int stream_frames_played;

// address: 0x8012B608
extern int num_mdcs;

// address: 0x8012B60C
extern int mdec_head;

// address: 0x8012B610
extern int mdec_tail;

// address: 0x8012B614
extern int mdec_waiting_tail;

// address: 0x8012B618
extern int mdecs_queued;

// address: 0x8012B61C
extern int mdecs_waiting;

// address: 0x8012B620
extern int sfx_volume;

// address: 0x8012B628
extern int stream_chunks_in;

// address: 0x8012B62C
extern int stream_chunks_total;

// address: 0x8012B630
extern int stream_in;

// address: 0x8012B634
extern int stream_out;

// address: 0x8012B638
extern int stream_stalled;

// address: 0x8012B63C
extern int stream_ending;

// address: 0x8012B640
extern int stream_open;

// address: 0x8012B644
extern int stream_handler_installed;

// address: 0x8012B648
extern int stream_chunks_borrowed;

// address: 0x8012B64C
extern int _get_count;

// address: 0x8012B650
extern int _discard_count;

// address: 0x8012B654
// size: 0x5C
extern struct TASK *CDTask;

// address: 0x8012B658
// size: 0x98
static struct cdstreamstruct *CDStream;

// address: 0x8012B65C
extern int cdready_calls;

// address: 0x8012B660
extern int cdready_errors;

// address: 0x8012B664
extern int cdready_out_of_sync;

// address: 0x8012B668
extern int cdstream_resetting;

// address: 0x8012B66C
extern int sector_dma;

// address: 0x8012B670
extern int sector_dma_in;

// address: 0x8012B674
extern unsigned long *chkaddr;

// address: 0x8012B678
// size: 0x8
extern struct chunkhdrstruct *chunk;

// address: 0x8012B67C
extern int first_handler_event;

// address: 0x8012B7D4
extern unsigned char *pStatusPanel;

// address: 0x8012B7D8
extern unsigned char *pGBoxBuff;

// address: 0x8012B7DC
extern unsigned char dropGoldFlag;

// address: 0x8012B7E0
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800BEC30
// size: 0x200
extern char _infostr[256][2];

// address: 0x8012B7E4
// size: 0x2
extern char _infoclr[2];

// address: 0x800BEE30
// size: 0x100
extern char tempstr[256];

// address: 0x8012B7E6
extern unsigned char drawhpflag;

// address: 0x8012B7E7
extern unsigned char drawmanaflag;

// address: 0x8012B7E8
extern unsigned char chrflag;

// address: 0x8012B7E9
extern unsigned char drawbtnflag;

// address: 0x8012B7EA
extern unsigned char panbtndown;

// address: 0x8012B7EB
extern unsigned char panelflag;

// address: 0x8012B7EC
extern unsigned char chrbtndown;

// address: 0x8012B7ED
extern unsigned char lvlbtndown;

// address: 0x8012B7EE
extern unsigned char sbookflag;

// address: 0x8012B7EF
extern unsigned char talkflag;

// address: 0x8012B7F0
extern int dropGoldValue;

// address: 0x8012B7F4
extern int initialDropGoldValue;

// address: 0x8012B7F8
extern int initialDropGoldIndex;

// address: 0x8012B7FC
extern unsigned char *pPanelButtons;

// address: 0x8012B800
extern unsigned char *pPanelText;

// address: 0x8012B804
extern unsigned char *pManaBuff;

// address: 0x8012B808
extern unsigned char *pLifeBuff;

// address: 0x8012B80C
extern unsigned char *pChrPanel;

// address: 0x8012B810
extern unsigned char *pChrButtons;

// address: 0x8012B814
extern unsigned char *pSpellCels;

// address: 0x8012D0A8
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x8012D4A8
// size: 0x40
static int _pstrjust[8][2];

// address: 0x8012C700
// size: 0x8
static int _pnumlines[2];

// address: 0x8012B818
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x8012B81C
// size: 0x8
extern struct RECT CSRect;

// address: 0x8012C710
// size: 0x8
static int _pSpell[2];

// address: 0x8012C718
// size: 0x8
static int _pSplType[2];

// address: 0x8012B824
extern int numpanbtns;

// address: 0x8012B828
extern unsigned char *pDurIcons;

// address: 0x8012B82C
extern unsigned char drawdurflag;

// address: 0x8012C720
// size: 0x8
static unsigned char chrbtn[4][2];

// address: 0x8012B82D
extern unsigned char chrbtnactive;

// address: 0x8012B830
extern unsigned char *pSpellBkCel;

// address: 0x8012B834
extern unsigned char *pSBkBtnCel;

// address: 0x8012B838
extern unsigned char *pSBkIconCels;

// address: 0x8012B83C
extern int sbooktab;

// address: 0x8012B840
extern int cur_spel;

// address: 0x8012C728
static long talkofs;

// address: 0x8012D4F8
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x8012C72C
static unsigned char sgbTalkSavePos;

// address: 0x8012C72D
static unsigned char sgbNextTalkSave;

// address: 0x8012C72E
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x8012C730
static unsigned char *pTalkPanel;

// address: 0x8012C734
static unsigned char *pMultiBtns;

// address: 0x8012C738
static unsigned char *pTalkBtns;

// address: 0x8012C73C
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x800BE744
// size: 0x25
extern char SpellITbl[37];

// address: 0x8012B761
extern unsigned char DrawLevelUpFlag;

// address: 0x8012B788
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x8012B784
extern unsigned char spspelstate;

// address: 0x8012B7A4
extern bool initchr;

// address: 0x8012B764
static int SPLICONNO;

// address: 0x8012B768
static int SPLICONY;

// address: 0x8012C708
static int SPLICONRIGHT;

// address: 0x8012B76C
static int scx;

// address: 0x8012B770
static int scy;

// address: 0x8012B774
static int scx1;

// address: 0x8012B778
static int scy1;

// address: 0x8012B77C
static int scx2;

// address: 0x8012B780
static int scy2;

// address: 0x8012B790
extern char SpellCol;

// address: 0x800BE730
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800BE76C
// size: 0x64
extern int SpellPages[5][5];

// address: 0x8012B794
static int lus;

// address: 0x8012B798
static int CsNo;

// address: 0x8012B79C
static char plusanim;

// address: 0x8012D4E8
// size: 0x10
static struct Dialog CSBack;

// address: 0x8012B7A0
static int CS_XOFF;

// address: 0x800BE7D0
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x8012B7A8
extern int NoCSEntries;

// address: 0x8012B7AC
static int SPALOFF;

// address: 0x8012B7B0
static int paloffset1;

// address: 0x8012B7B4
static int paloffset2;

// address: 0x8012B7B8
static int paloffset3;

// address: 0x8012B7BC
static int paloffset4;

// address: 0x8012B7C0
static int pinc1;

// address: 0x8012B7C4
static int pinc2;

// address: 0x8012B7C8
static int pinc3;

// address: 0x8012B7CC
static int pinc4;

// address: 0x8012B854
// size: 0x8
extern int _pcurs[2];

// address: 0x8012B85C
extern int cursW;

// address: 0x8012B860
extern int cursH;

// address: 0x8012B864
extern int icursW;

// address: 0x8012B868
extern int icursH;

// address: 0x8012B86C
extern int icursW28;

// address: 0x8012B870
extern int icursH28;

// address: 0x8012B874
extern int cursmx;

// address: 0x8012B878
extern int cursmy;

// address: 0x8012B87C
// size: 0x8
extern int _pcursmonst[2];

// address: 0x8012B884
// size: 0x2
extern char _pcursobj[2];

// address: 0x8012B888
// size: 0x2
extern char _pcursitem[2];

// address: 0x8012B88C
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x8012B890
// size: 0x2
extern char _pcursplr[2];

// address: 0x8012B850
extern int sel_data;

// address: 0x800BEF30
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x8012B894
extern int spurtndx;

// address: 0x8012B898
extern int stonendx;

// address: 0x8012B89C
extern unsigned char *pSquareCel;

// address: 0x8012B8DC
extern unsigned long ghInst;

// address: 0x8012B8E0
extern unsigned char svgamode;

// address: 0x8012B8E4
extern int MouseX;

// address: 0x8012B8E8
extern int MouseY;

// address: 0x8012B8EC
extern long gv1;

// address: 0x8012B8F0
extern long gv2;

// address: 0x8012B8F4
extern long gv3;

// address: 0x8012B8F8
extern long gv4;

// address: 0x8012B8FC
extern long gv5;

// address: 0x8012B900
extern unsigned char gbProcessPlayers;

// address: 0x800BF0A4
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800BF0CC
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800BF110
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x8012B901
extern unsigned char gbDoEnding;

// address: 0x8012B902
extern unsigned char gbRunGame;

// address: 0x8012B903
extern unsigned char gbRunGameResult;

// address: 0x8012B904
extern unsigned char gbGameLoopStartup;

// address: 0x8012D548
// size: 0x44
static int glEndSeed[17];

// address: 0x8012D598
// size: 0x44
static int glMid1Seed[17];

// address: 0x8012D5E8
// size: 0x44
static int glMid2Seed[17];

// address: 0x8012D638
// size: 0x44
static int glMid3Seed[17];

// address: 0x8012C740
static long *sg_previousFilter;

// address: 0x800BF154
// size: 0x30
extern int CreateEnv[12];

// address: 0x8012B908
extern int Passedlvldir;

// address: 0x8012B90C
extern unsigned char *TempStack;

// address: 0x8012B8AC
extern unsigned long ghMainWnd;

// address: 0x8012B8B0
extern unsigned char fullscreen;

// address: 0x8012B8B4
extern int force_redraw;

// address: 0x8012B8C8
extern unsigned char PauseMode;

// address: 0x8012B8C9
extern unsigned char FriendlyMode;

// address: 0x8012B8B9
extern unsigned char visiondebug;

// address: 0x8012B8BB
extern unsigned char light4flag;

// address: 0x8012B8BC
extern unsigned char leveldebug;

// address: 0x8012B8BD
extern unsigned char monstdebug;

// address: 0x8012B8C4
extern int debugmonsttypes;

// address: 0x8012B8B8
static unsigned char cineflag;

// address: 0x8012B8BA
extern unsigned char scrollflag;

// address: 0x8012B8BE
extern unsigned char trigdebug;

// address: 0x8012B8C0
extern int setseed;

// address: 0x8012B8CC
static int sgnTimeoutCurs;

// address: 0x8012B8D0
extern unsigned char sgbMouseDown;

// address: 0x800BF820
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x8012B924
extern int numtowners;

// address: 0x8012B928
extern unsigned char storeflag;

// address: 0x8012B929
extern unsigned char boyloadflag;

// address: 0x8012B92A
extern unsigned char bannerflag;

// address: 0x8012B92C
extern unsigned char *pCowCels;

// address: 0x8012C744
static unsigned long sgdwCowClicks;

// address: 0x8012C748
static int sgnCowMsg;

// address: 0x800BF560
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x8012B91C
extern unsigned long CowPlaying;

// address: 0x800BF184
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800BF4FC
// size: 0xC
extern int TownCowX[3];

// address: 0x800BF508
// size: 0xC
extern int TownCowY[3];

// address: 0x800BF514
// size: 0xC
extern int TownCowDir[3];

// address: 0x800BF520
// size: 0x20
extern int cowoffx[8];

// address: 0x800BF540
// size: 0x20
extern int cowoffy[8];

// address: 0x8012B944
extern int sfxdelay;

// address: 0x8012B948
extern int sfxdnum;

// address: 0x8012B93C
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800C0620
// size: 0xF78
extern struct TSFX sgSFX[990];

// address: 0x8012B940
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x8012B94C
extern long orgseed;

// address: 0x8012C74C
static long sglGameSeed;

// address: 0x8012B950
extern int SeedCount;

// address: 0x8012C750
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8012C754
static int sgnWidth;

// address: 0x8012B95E
extern char msgflag;

// address: 0x8012B95F
extern char msgdelay;

// address: 0x800C1648
// size: 0x50
extern char msgtable[80];

// address: 0x800C1598
// size: 0xB0
extern int MsgStrings[44];

// address: 0x8012B95D
extern char msgcnt;

// address: 0x8012C758
static unsigned long sgdwProgress;

// address: 0x8012C75C
static unsigned long sgdwXY;

// address: 0x800C1698
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x8012180C
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x80122BAC
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x801238CC
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x801247CC
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800C18AC
// size: 0x4C00
extern struct ItemStruct item[128];

// address: 0x800C64AC
// size: 0x7F
extern char itemactive[127];

// address: 0x800C652C
// size: 0x7F
extern char itemavail[127];

// address: 0x800C65AC
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8012B998
extern unsigned char uitemflag;

// address: 0x8012C760
static int tem;

// address: 0x8012D680
// size: 0x98
static struct ItemStruct curruitem;

// address: 0x8012D720
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x8012B99C
extern int ScrollType;

// address: 0x800C662C
// size: 0x40
extern char ItemStr[64];

// address: 0x800C666C
// size: 0x40
extern char SufStr[64];

// address: 0x8012B978
extern long numitems;

// address: 0x8012B97C
extern int gnNumGetRecords;

// address: 0x800C1808
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800C1738
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x801265E0
// size: 0x40
extern short SinTab[32];

// address: 0x80126650
// size: 0x46
static short Item2Frm[35];

// address: 0x800C17E4
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x8012B980
extern int *ItemAnimSnds;

// address: 0x8012B984
extern int idoppely;

// address: 0x8012B988
extern int ScrollFlag;

// address: 0x800C1894
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800C7458
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800C7598
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x8012B9B0
extern int numlights;

// address: 0x8012B9B4
extern char lightmax;

// address: 0x800C75C0
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x8012B9B8
extern int numvision;

// address: 0x8012B9BC
extern unsigned char dovision;

// address: 0x8012B9C0
extern int visionid;

// address: 0x8012C764
static int disp_mask;

// address: 0x8012C768
static int weird;

// address: 0x8012C76C
static int disp_tab_r;

// address: 0x8012C770
static int dispy_r;

// address: 0x8012C774
static int disp_tab_g;

// address: 0x8012C778
static int dispy_g;

// address: 0x8012C77C
static int disp_tab_b;

// address: 0x8012C780
static int dispy_b;

// address: 0x8012C784
static int radius;

// address: 0x8012C788
static int bright;

// address: 0x8012D730
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x8012B9A0
extern int lightflag;

// address: 0x800C716C
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800C7420
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800C66AC
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x8012B9A4
extern int restore_r;

// address: 0x8012B9A8
extern int restore_g;

// address: 0x8012B9AC
extern int restore_b;

// address: 0x800C7438
// size: 0x10
extern char radius_tab[16];

// address: 0x800C7448
// size: 0x10
extern char bright_tab[16];

// address: 0x8012B9E1
extern unsigned char qtextflag;

// address: 0x8012B9E4
extern int qtextSpd;

// address: 0x8012C78C
static unsigned char *pMedTextCels;

// address: 0x8012C790
static unsigned char *pTextBoxCels;

// address: 0x8012C794
static char *qtextptr;

// address: 0x8012C798
static int qtexty;

// address: 0x8012C79C
static unsigned long qtextDelay;

// address: 0x8012C7A0
static unsigned long sgLastScroll;

// address: 0x8012C7A4
static unsigned long scrolltexty;

// address: 0x8012C7A8
static long sglMusicVolumeSave;

// address: 0x8012B9D0
static bool qtbodge;

// address: 0x800C7780
// size: 0x10
extern struct Dialog QBack;

// address: 0x800C7790
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800C7F00
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800C7DF0
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800C7FEC
// size: 0x13D4C
extern struct DLevel sgLevels[21];

// address: 0x800DBD38
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x8012D7B0
// size: 0x16
static struct DJunk sgJunk;

// address: 0x8012C7AD
static unsigned char sgbRecvCmd;

// address: 0x8012C7B0
static unsigned long sgdwRecvOffset;

// address: 0x8012C7B4
static unsigned char sgbDeltaChunks;

// address: 0x8012C7B5
static unsigned char sgbDeltaChanged;

// address: 0x8012C7B8
static unsigned long sgdwOwnerWait;

// address: 0x8012C7BC
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x8012C7C0
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8012C7C4
static int sgnCurrMegaPlayer;

// address: 0x8012B9FD
extern unsigned char deltaload;

// address: 0x8012B9FE
extern unsigned char gbBufferMsgs;

// address: 0x8012BA00
extern unsigned long dwRecCount;

// address: 0x8012BA04
extern bool LevelOut;

// address: 0x8012BA1A
extern unsigned char gbMaxPlayers;

// address: 0x8012BA1B
extern unsigned char gbActivePlayers;

// address: 0x8012BA1C
extern unsigned char gbGameDestroyed;

// address: 0x8012BA1D
extern unsigned char gbDeltaSender;

// address: 0x8012BA1E
extern unsigned char gbSelectProvider;

// address: 0x8012BA1F
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x8012C7C8
static unsigned char sgbSentThisCycle;

// address: 0x8012C7CC
static unsigned long sgdwGameLoops;

// address: 0x8012C7D0
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x8012C7D4
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x8012C7D8
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x8012C7E0
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x8012C7E8
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x8012C7F0
static unsigned char sgbTimeout;

// address: 0x8012C7F4
static long sglTimeoutStart;

// address: 0x8012BA14
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x8012BA19
static unsigned char sgbNetInited;

// address: 0x800DCDA0
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800DCF64
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80126D2C
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800DD744
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x8012BA40
extern long numobjects;

// address: 0x800DED18
// size: 0x7F
extern char objectactive[127];

// address: 0x800DED98
// size: 0x7F
extern char objectavail[127];

// address: 0x8012BA44
extern unsigned char InitObjFlag;

// address: 0x8012BA48
extern int trapid;

// address: 0x800DEE18
// size: 0x28
extern char ObjFileList[40];

// address: 0x8012BA4C
extern int trapdir;

// address: 0x8012BA50
extern int leverid;

// address: 0x8012BA38
extern int numobjfiles;

// address: 0x800DD65C
// size: 0x20
extern int bxadd[8];

// address: 0x800DD67C
// size: 0x20
extern int byadd[8];

// address: 0x800DD704
// size: 0x1A
extern char shrineavail[26];

// address: 0x800DD69C
// size: 0x68
extern int shrinestrs[26];

// address: 0x800DD720
// size: 0x24
extern int StoryBookName[9];

// address: 0x8012BA3C
extern int myscale;

// address: 0x8012BA64
extern unsigned char gbValidSaveFile;

// address: 0x8012BA60
extern bool DoLoadedChar;

// address: 0x800DF038
// size: 0x4750
extern struct PlayerStruct plr[2];

// address: 0x8012BA84
extern int myplr;

// address: 0x8012BA88
extern int deathdelay;

// address: 0x8012BA8C
extern unsigned char deathflag;

// address: 0x8012BA8D
extern char light_rad;

// address: 0x8012BA7C
// size: 0x5
extern char light_level[5];

// address: 0x800DEF30
// size: 0x30
extern int MaxStats[4][3];

// address: 0x8012BA74
static int PlrStructSize;

// address: 0x8012BA78
static int ItemStructSize;

// address: 0x800DEE40
// size: 0x24
extern int plrxoff[9];

// address: 0x800DEE64
// size: 0x24
extern int plryoff[9];

// address: 0x800DEE88
// size: 0x24
extern int plrxoff2[9];

// address: 0x800DEEAC
// size: 0x24
extern int plryoff2[9];

// address: 0x800DEED0
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800DEEF4
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800DEF00
// size: 0xC
extern int MagicTbl[3];

// address: 0x800DEF0C
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800DEF18
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800DEF24
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800DEF60
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800E38C0
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x8012BACC
extern unsigned char *pQLogCel;

// address: 0x8012BAD0
extern int ReturnLvlX;

// address: 0x8012BAD4
extern int ReturnLvlY;

// address: 0x8012BAD8
extern int ReturnLvl;

// address: 0x8012BADC
extern int ReturnLvlT;

// address: 0x8012BAE0
extern unsigned char rporttest;

// address: 0x8012BAE4
extern int qline;

// address: 0x8012BAE8
extern int numqlines;

// address: 0x8012BAEC
extern int qtopline;

// address: 0x8012D7C8
// size: 0x40
static int qlist[16];

// address: 0x8012C7F8
// size: 0x8
static struct RECT QSRect;

// address: 0x8012BA99
extern unsigned char questlog;

// address: 0x800E3788
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x8012BA9C
extern int ALLQUESTS;

// address: 0x800E389C
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800E38A8
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800E38B4
// size: 0xC
extern int QuestGroup3[3];

// address: 0x8012BAB0
// size: 0x8
extern int QuestGroup4[2];

// address: 0x8012BAC8
extern bool WaterDone;

// address: 0x8012BAA0
// size: 0x7
static char questxoff[7];

// address: 0x8012BAA8
// size: 0x7
static char questyoff[7];

// address: 0x800E3888
// size: 0x14
extern int questtrigstr[5];

// address: 0x8012BAB8
static int QS_PX;

// address: 0x8012BABC
static int QS_PY;

// address: 0x8012BAC0
static int QS_PW;

// address: 0x8012BAC4
static int QS_PH;

// address: 0x8012D808
// size: 0x10
static struct Dialog QSBack;

// address: 0x800E3A00
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x8012BB27
extern char stextflag;

// address: 0x800E42A8
// size: 0xBE0
extern struct ItemStruct smithitem[20];

// address: 0x800E4E88
// size: 0x390
extern struct ItemStruct premiumitem[6];

// address: 0x8012BB28
extern int numpremium;

// address: 0x8012BB2C
extern int premiumlevel;

// address: 0x800E5218
// size: 0xBE0
extern struct ItemStruct witchitem[20];

// address: 0x800E5DF8
// size: 0x98
extern struct ItemStruct boyitem;

// address: 0x8012BB30
extern int boylevel;

// address: 0x800E5E90
// size: 0x98
extern struct ItemStruct golditem;

// address: 0x800E5F28
// size: 0xBE0
extern struct ItemStruct healitem[20];

// address: 0x8012BB34
extern char stextsize;

// address: 0x8012BB35
extern unsigned char stextscrl;

// address: 0x8012C800
static int stextsel;

// address: 0x8012C804
static int stextlhold;

// address: 0x8012C808
static int stextshold;

// address: 0x8012C80C
static int stextvhold;

// address: 0x8012C810
static int stextsval;

// address: 0x8012C814
static int stextsmax;

// address: 0x8012C818
static int stextup;

// address: 0x8012C81C
static int stextdown;

// address: 0x8012C820
static char stextscrlubtn;

// address: 0x8012C821
static char stextscrldbtn;

// address: 0x8012C822
static char SItemListFlag;

// address: 0x8012D818
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800E6B08
// size: 0x1C80
extern struct ItemStruct storehold[48];

// address: 0x800E8788
// size: 0x30
extern char storehidx[48];

// address: 0x8012C824
static int storenumh;

// address: 0x8012C828
static int gossipstart;

// address: 0x8012C82C
static int gossipend;

// address: 0x8012C830
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x8012C838
static int talker;

// address: 0x8012BB14
extern unsigned char *pSTextBoxCels;

// address: 0x8012BB18
extern unsigned char *pSTextSlidCels;

// address: 0x8012BB1C
extern int *SStringY;

// address: 0x800E4184
// size: 0x10
extern struct Dialog SBack;

// address: 0x800E4194
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800E41E4
// size: 0x50
extern int SStringYBuy0[20];

// address: 0x800E4234
// size: 0x50
extern int SStringYBuy1[20];

// address: 0x800E4284
// size: 0x24
extern int talkname[9];

// address: 0x8012BB26
extern unsigned char InStoreFlag;

// address: 0x80127FA8
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x8012BB44
extern unsigned long gdwAllTextEntries;

// address: 0x8012C83C
static unsigned char *P3Tiles;

// address: 0x8012BB54
extern int tile;

// address: 0x8012BB64
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800E89F0
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x8012BB68
extern int numtrigs;

// address: 0x8012BB6C
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x8012BB70
extern int TWarpFrom;

// address: 0x800E87B8
// size: 0x2C
extern int TownDownList[11];

// address: 0x800E87E4
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800E8818
// size: 0x30
extern int L1UpList[12];

// address: 0x800E8848
// size: 0x28
extern int L1DownList[10];

// address: 0x800E8870
// size: 0xC
extern int L2UpList[3];

// address: 0x800E887C
// size: 0x14
extern int L2DownList[5];

// address: 0x800E8890
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800E889C
// size: 0x3C
extern int L3UpList[15];

// address: 0x800E88D8
// size: 0x24
extern int L3DownList[9];

// address: 0x800E88FC
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800E8934
// size: 0x10
extern int L4UpList[4];

// address: 0x800E8944
// size: 0x18
extern int L4DownList[6];

// address: 0x800E895C
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800E896C
// size: 0x84
extern int L4PentaList[33];

// address: 0x80128D38
// size: 0xA
static char cursoff[10];

// address: 0x8012BB8A
extern unsigned char gbMusicOn;

// address: 0x8012BB8B
extern unsigned char gbSoundOn;

// address: 0x8012BB89
extern unsigned char gbSndInited;

// address: 0x8012BB90
extern long sglMasterVolume;

// address: 0x8012BB94
extern long sglMusicVolume;

// address: 0x8012BB98
extern long sglSoundVolume;

// address: 0x8012BB9C
extern long sglSpeechVolume;

// address: 0x8012BBA0
extern int sgnMusicTrack;

// address: 0x8012BB8C
extern unsigned char gbDupSounds;

// address: 0x8012BBA4
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x80128DE4
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x8012BBC8
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800E8A40
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x8012BBD0
// size: 0x2
extern char _pfind_index[2];

// address: 0x8012BBD4
// size: 0x2
extern char _pfindx[2];

// address: 0x8012BBD8
// size: 0x2
extern char _pfindy[2];

// address: 0x8012BBDA
extern unsigned char automapmoved;

// address: 0x8012C840
// size: 0x9C
static struct GamePad *_GP0;

// address: 0x8012C844
// size: 0x9C
static struct GamePad *_GP1;

// address: 0x8012BBBC
extern unsigned char flyflag;

// address: 0x8012BBB4
// size: 0x8
extern char (*pad_styles[2])();

// address: 0x8012BBBD
static char seen_combo;

// address: 0x8012C848
static unsigned long (*CurrentProc)();

// address: 0x80128F80
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x8012BC14
extern int NumOfStrings;

// address: 0x8012BBE8
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x8012BBEC
extern long hndText;

// address: 0x8012BBF0
extern char **TextPtr;

// address: 0x8012BBF4
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x8012BC24
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x8012BC28
extern int CharFade;

// address: 0x8012BC2C
extern int rotateness;

// address: 0x8012BC30
extern int spiralling_shape;

// address: 0x8012BC34
extern int down;

// address: 0x800E8A90
// size: 0x10
extern char MlTab[16];

// address: 0x800E8AA0
// size: 0x10
extern char QlTab[16];

// address: 0x800E8AB0
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x8012BC50
extern int MyXoff1;

// address: 0x8012BC54
extern int MyYoff1;

// address: 0x8012BC58
extern int MyXoff2;

// address: 0x8012BC5C
extern int MyYoff2;

// address: 0x8012BC6C
extern bool iscflag;

// address: 0x8012BC79
static unsigned char sgbFadedIn;

// address: 0x8012BC7A
static unsigned char screenbright;

// address: 0x8012BC7C
static int faderate;

// address: 0x8012BC80
static bool fading;

// address: 0x8012BC8C
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x8012BC84
extern int st;

// address: 0x8012BC88
extern int mode;

// address: 0x800E8C38
// size: 0x18
extern struct PortalStruct portal[2];

// address: 0x8012BCBE
extern char portalindex;

// address: 0x8012BCB8
// size: 0x2
static char WarpDropX[2];

// address: 0x8012BCBC
// size: 0x2
static char WarpDropY[2];

// address: 0x800E8C50
// size: 0x78
extern char MyVerString[120];

// address: 0x8012BE30
extern int Year;

// address: 0x8012BE34
extern int Day;

// address: 0x8012C84C
static unsigned char *tbuff;

// address: 0x800E8CC8
// size: 0x300
extern unsigned char IconBuffer[768];

// address: 0x8012C850
static unsigned char HR1;

// address: 0x8012C851
static unsigned char HR2;

// address: 0x8012C852
static unsigned char HR3;

// address: 0x8012C853
static unsigned char VR1;

// address: 0x8012C854
static unsigned char VR2;

// address: 0x8012C855
static unsigned char VR3;

// address: 0x8012BEA4
// size: 0x18
extern struct NODE *pHallList;

// address: 0x8012BEA8
extern int nRoomCnt;

// address: 0x8012BEAC
extern int nSx1;

// address: 0x8012BEB0
extern int nSy1;

// address: 0x8012BEB4
extern int nSx2;

// address: 0x8012BEB8
extern int nSy2;

// address: 0x8012BE5C
extern int Area_Min;

// address: 0x8012BE60
extern int Room_Max;

// address: 0x8012BE64
extern int Room_Min;

// address: 0x8012BE68
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x8012BE70
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x8012BE78
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x8012BE80
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x8012BE88
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x8012BE8C
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x8012BE90
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x8012BE94
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x8012BE98
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x8012BE9C
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x8012BEA0
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x8012C858
static int abyssx;

// address: 0x8012C85C
static unsigned char lavapool;

// address: 0x8012BF44
extern int lockoutcnt;

// address: 0x8012BEC8
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x8012BED0
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x8012BED8
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x8012BEE0
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x8012BEE8
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x8012BEF0
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x8012BEF8
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x8012BF00
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x8012BF08
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x8012BF10
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x8012BF18
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x8012BF20
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x8012BF28
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x8012BF30
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x8012BF34
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x8012BF38
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x8012BF3C
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x8012BF40
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x8012BF48
extern int diabquad1x;

// address: 0x8012BF4C
extern int diabquad2x;

// address: 0x8012BF50
extern int diabquad3x;

// address: 0x8012BF54
extern int diabquad4x;

// address: 0x8012BF58
extern int diabquad1y;

// address: 0x8012BF5C
extern int diabquad2y;

// address: 0x8012BF60
extern int diabquad3y;

// address: 0x8012BF64
extern int diabquad4y;

// address: 0x8012BF68
extern int SP4x1;

// address: 0x8012BF6C
extern int SP4y1;

// address: 0x8012BF70
extern int SP4x2;

// address: 0x8012BF74
extern int SP4y2;

// address: 0x8012BF78
extern int l4holdx;

// address: 0x8012BF7C
extern int l4holdy;

// address: 0x8012C860
static unsigned char *lpSetPiece1;

// address: 0x8012C864
static unsigned char *lpSetPiece2;

// address: 0x8012C868
static unsigned char *lpSetPiece3;

// address: 0x8012C86C
static unsigned char *lpSetPiece4;

// address: 0x8012BF8C
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x8012BF94
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800E8FC8
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800E8FDC
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800E8FF8
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8012BF9C
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800E900C
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x8012C090
static bool DoUiForChooseMonster;

// address: 0x800E9030
// size: 0x88
static char *MgToText[34];

// address: 0x800E90B8
// size: 0x24
extern int StoryText[3][3];

// address: 0x800E90DC
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800EA2DC
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800EA91C
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x8012C0B4
extern int setpc_x;

// address: 0x8012C0B8
extern int setpc_y;

// address: 0x8012C0BC
extern int setpc_w;

// address: 0x8012C0C0
extern int setpc_h;

// address: 0x8012C0C4
extern unsigned char setloadflag;

// address: 0x8012C0C8
extern unsigned char *pMegaTiles;

// address: 0x800EAF5C
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800EB760
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800EBF64
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800EC768
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800ECF6C
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x8012C0CC
extern int dminx;

// address: 0x8012C0D0
extern int dminy;

// address: 0x8012C0D4
extern int dmaxx;

// address: 0x8012C0D8
extern int dmaxy;

// address: 0x8012C0DC
extern int gnDifficulty;

// address: 0x8012C0E0
extern unsigned char currlevel;

// address: 0x8012C0E1
extern unsigned char leveltype;

// address: 0x8012C0E2
extern unsigned char setlevel;

// address: 0x8012C0E3
extern unsigned char setlvlnum;

// address: 0x8012C0E4
extern unsigned char setlvltype;

// address: 0x8012C0E8
extern int ViewX;

// address: 0x8012C0EC
extern int ViewY;

// address: 0x8012C0F0
extern int ViewDX;

// address: 0x8012C0F4
extern int ViewDY;

// address: 0x8012C0F8
extern int ViewBX;

// address: 0x8012C0FC
extern int ViewBY;

// address: 0x800ED770
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x8012C100
extern int LvlViewX;

// address: 0x8012C104
extern int LvlViewY;

// address: 0x8012C108
extern int btmbx;

// address: 0x8012C10C
extern int btmby;

// address: 0x8012C110
extern int btmdx;

// address: 0x8012C114
extern int btmdy;

// address: 0x8012C118
extern int MicroTileLen;

// address: 0x8012C11C
extern char TransVal;

// address: 0x800ED784
// size: 0x20
extern bool TransList[8];

// address: 0x8012C120
extern int themeCount;

// address: 0x800ED7A4
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x8010FA64
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x801105C8
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x8011112C
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x80111C90
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x8012C0AC
extern unsigned char *pSetPiece;

// address: 0x8012C0B0
extern int DungSize;

// address: 0x80111E5C
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x8012C160
extern int numthemes;

// address: 0x8012C164
extern int zharlib;

// address: 0x8012C168
extern unsigned char armorFlag;

// address: 0x8012C169
extern unsigned char bCrossFlag;

// address: 0x8012C16A
extern unsigned char weaponFlag;

// address: 0x8012C16C
extern int themex;

// address: 0x8012C170
extern int themey;

// address: 0x8012C174
extern int themeVar1;

// address: 0x8012C178
extern unsigned char bFountainFlag;

// address: 0x8012C179
extern unsigned char cauldronFlag;

// address: 0x8012C17A
extern unsigned char mFountainFlag;

// address: 0x8012C17B
extern unsigned char pFountainFlag;

// address: 0x8012C17C
extern unsigned char tFountainFlag;

// address: 0x8012C17D
extern unsigned char treasureFlag;

// address: 0x8012C180
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x80111D3C
// size: 0x10
extern int ThemeGood[4];

// address: 0x80111D4C
// size: 0x64
extern int trm5x[25];

// address: 0x80111DB0
// size: 0x64
extern int trm5y[25];

// address: 0x80111E14
// size: 0x24
extern int trm3x[9];

// address: 0x80111E38
// size: 0x24
extern int trm3y[9];

// address: 0x8012C258
extern int nummissiles;

// address: 0x80112074
// size: 0x1F4
extern int missileactive[125];

// address: 0x80112268
// size: 0x1F4
extern int missileavail[125];

// address: 0x8012C25C
extern unsigned char MissilePreFlag;

// address: 0x8011245C
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x8012C25D
extern unsigned char ManashieldFlag;

// address: 0x8012C25E
extern unsigned char ManashieldFlag2;

// address: 0x80111FEC
// size: 0x20
extern int XDirAdd[8];

// address: 0x8011200C
// size: 0x20
extern int YDirAdd[8];

// address: 0x8012C225
extern unsigned char fadetor;

// address: 0x8012C226
extern unsigned char fadetog;

// address: 0x8012C227
extern unsigned char fadetob;

// address: 0x8011202C
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x8011203C
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x80114D0C
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x8012C2C0
extern long nummonsters;

// address: 0x8011A48C
// size: 0x190
extern short monstactive[200];

// address: 0x8011A61C
// size: 0x190
extern short monstkills[200];

// address: 0x8011A7AC
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x8012C2C4
extern long monstimgtot;

// address: 0x8012C2C8
extern char totalmonsters;

// address: 0x8012C2CC
extern int uniquetrans;

// address: 0x8012C870
static unsigned char sgbSaveSoundOn;

// address: 0x8012C290
// size: 0x8
extern char offset_x[8];

// address: 0x8012C298
// size: 0x8
extern char offset_y[8];

// address: 0x8012C278
// size: 0x8
extern char left[8];

// address: 0x8012C280
// size: 0x8
extern char right[8];

// address: 0x8012C288
// size: 0x8
extern char opposite[8];

// address: 0x8012C26C
extern int nummtypes;

// address: 0x8012C270
// size: 0x7
extern char animletter[7];

// address: 0x80114B6C
// size: 0x120
extern int MWVel[3][24];

// address: 0x8012C2A0
// size: 0x4
extern char rnd5[4];

// address: 0x8012C2A4
// size: 0x4
extern char rnd10[4];

// address: 0x8012C2A8
// size: 0x4
extern char rnd20[4];

// address: 0x8012C2AC
// size: 0x4
extern char rnd60[4];

// address: 0x80114C8C
// size: 0x80
extern void (*AiProc[32])();

// address: 0x8011AC84
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x8011C6C4
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x8011C744
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x8011C7B4
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x8011AA6C
// size: 0x218
extern int TransPals[134];

// address: 0x8011A96C
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x8012C2FC
extern unsigned char invflag;

// address: 0x8012C2FD
extern unsigned char drawsbarflag;

// address: 0x8012C300
extern int InvBackY;

// address: 0x8012C304
extern int InvCursPos;

// address: 0x8011D75C
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x8012C308
extern int InvBackAY;

// address: 0x8012C30C
extern int InvSel;

// address: 0x8012C310
extern int ItemW;

// address: 0x8012C314
extern int ItemH;

// address: 0x8012C318
extern int ItemNo;

// address: 0x8012C31C
// size: 0x8
extern struct RECT BRect;

// address: 0x8012C2EC
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x8012C2F0
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x8012C2E8
extern int InvPageNo;

// address: 0x8011D0E4
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8011D10C
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x8011D354
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x8011D5F4
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x8011D6A8
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x8012C2F4
static bool InvOn;

// address: 0x8012C2F8
static unsigned long sgdwLastTime;

// address: 0x8012C346
extern unsigned char automapflag;

// address: 0x8011D7A8
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x8011D870
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8012C347
extern unsigned char AMLWallFlag;

// address: 0x8012C348
extern unsigned char AMRWallFlag;

// address: 0x8012C349
extern unsigned char AMLLWallFlag;

// address: 0x8012C34A
extern unsigned char AMLRWallFlag;

// address: 0x8012C34B
extern unsigned char AMDirtFlag;

// address: 0x8012C34C
extern unsigned char AMColumnFlag;

// address: 0x8012C34D
extern unsigned char AMStairFlag;

// address: 0x8012C34E
extern unsigned char AMLDoorFlag;

// address: 0x8012C34F
extern unsigned char AMLGrateFlag;

// address: 0x8012C350
extern unsigned char AMLArchFlag;

// address: 0x8012C351
extern unsigned char AMRDoorFlag;

// address: 0x8012C352
extern unsigned char AMRGrateFlag;

// address: 0x8012C353
extern unsigned char AMRArchFlag;

// address: 0x8012C354
extern int AutoMapX;

// address: 0x8012C358
extern int AutoMapY;

// address: 0x8012C35C
extern int AutoMapXOfs;

// address: 0x8012C360
extern int AutoMapYOfs;

// address: 0x8012C364
extern int AMPlayerX;

// address: 0x8012C368
extern int AMPlayerY;

// address: 0x8012C330
extern int AutoMapScale;

// address: 0x8012C334
extern unsigned char AutoMapPlayerR;

// address: 0x8012C335
extern unsigned char AutoMapPlayerG;

// address: 0x8012C336
extern unsigned char AutoMapPlayerB;

// address: 0x8012C337
extern unsigned char AutoMapWallR;

// address: 0x8012C338
extern unsigned char AutoMapWallG;

// address: 0x8012C339
extern unsigned char AutoMapWallB;

// address: 0x8012C33A
extern unsigned char AutoMapDoorR;

// address: 0x8012C33B
extern unsigned char AutoMapDoorG;

// address: 0x8012C33C
extern unsigned char AutoMapDoorB;

// address: 0x8012C33D
extern unsigned char AutoMapColumnR;

// address: 0x8012C33E
extern unsigned char AutoMapColumnG;

// address: 0x8012C33F
extern unsigned char AutoMapColumnB;

// address: 0x8012C340
extern unsigned char AutoMapArchR;

// address: 0x8012C341
extern unsigned char AutoMapArchG;

// address: 0x8012C342
extern unsigned char AutoMapArchB;

// address: 0x8012C343
extern unsigned char AutoMapStairR;

// address: 0x8012C344
extern unsigned char AutoMapStairG;

// address: 0x8012C345
extern unsigned char AutoMapStairB;

// address: 0x8012C9CC
extern unsigned long GazTick;

// address: 0x80133308
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A69E4
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x8012C9F4
extern void (*PollFunc)();

// address: 0x8012C9D8
extern void (*MsgFunc)();

// address: 0x8012CA24
extern void (*ErrorFunc)();

// address: 0x8012C8F8
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x8012C8FC
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x8012C900
// size: 0x5C
static struct TASK *T;

// address: 0x8012C904
static unsigned long MemTypeForTasker;

// address: 0x80130B38
// size: 0x30
static int SchEnv[12];

// address: 0x8012C908
static unsigned long ExecId;

// address: 0x8012C90C
static unsigned long ExecMask;

// address: 0x8012C910
static int TasksActive;

// address: 0x8012C914
static void (*EpiFunc)();

// address: 0x8012C918
static void (*ProFunc)();

// address: 0x8012C91C
static unsigned long EpiProId;

// address: 0x8012C920
static unsigned long EpiProMask;

// address: 0x8012C924
static void (*DoTasksPrologue)();

// address: 0x8012C928
static void (*DoTasksEpilogue)();

// address: 0x8012C92C
static void (*StackFloodCallback)();

// address: 0x8012C930
static unsigned char ExtraStackProtection;

// address: 0x8012C934
static int ExtraStackSizeLongs;

// address: 0x8012C9E0
extern void *LastPtr;

// address: 0x800A6A1C
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8012C938
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x80130B68
// size: 0x1180
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x8012C93C
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x8012C940
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x8012C944
static int TimeStamp;

// address: 0x8012C948
static unsigned char FullErrorChecking;

// address: 0x8012C94C
static unsigned long LastAttemptedAlloc;

// address: 0x8012C950
static unsigned long LastDeallocedBlock;

// address: 0x8012C954
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x8012C958
static int NumOfFreeHdrs;

// address: 0x8012C95C
static unsigned long LastTypeAlloced;

// address: 0x8012C960
static void (*AllocFilter)();

// address: 0x800A6A24
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A6A4C
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80131CE8
// size: 0x1380
static char buf[4992];

// address: 0x800A6A74
// size: 0x7
static char NULL_REP[7];

// address: 0x8007B37C
// line start: 177
// line end:   178
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B398
// line start: 182
// line end:   183
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007B3A4
// line start: 114
// line end:   123
void Remove96__Fv() {
}


// address: 0x8007B3DC
// line start: 133
// line end:   224
void AppMain() {
	{
		// register: 16
		register int option_file;
		{
			{
				// register: 16
				register int option_file;
			}
		}
	}
}


// address: 0x8007B4F4
// line start: 232
// line end:   233
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007B520
// line start: 241
// line end:   276
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007B608
// line start: 290
// line end:   302
void MAIN_MainLoop__Fv() {
}


// address: 0x8007B650
// line start: 76
// line end:   80
void CheckMaxArgs__Fv() {
}


// address: 0x8007B684
// line start: 96
// line end:   98
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007B690
// line start: 106
// line end:   149
void GPUQ_FlushQ__Fv() {
	// register: 18
	register int f;
	// register: 16
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Img;
	{
		{
			{
				{
					{
						{
							// register: 17
							register void *ImgMem;
							{
								{
									// register: 2
									register unsigned char GalRet;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8007B804
// line start: 159
// line end:   178
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007B8B8
// line start: 220
// line end:   239
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007B958
// line start: 249
// line end:   266
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007B9F4
// line start: 276
// line end:   287
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BA94
// line start: 144
// line end:   181
unsigned char PRIM_Open__FiiiP10SCREEN_ENVUl(int Prims, int OtSize, int Depth, struct SCREEN_ENV *Scr, unsigned long MemType) {
	{
		{
			{
				{
					// register: 16
					register int f;
				}
			}
		}
	}
}


// address: 0x8007BBB0
// line start: 188
// line end:   206
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007BC8C
// line start: 217
// line end:   239
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007BDB4
// line start: 249
// line end:   250
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007BDC0
// line start: 258
// line end:   267
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007BDFC
// line start: 280
// line end:   346
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007C010
// line start: 370
// line end:   371
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007C01C
// line start: 379
// line end:   381
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007C058
// line start: 385
// line end:   386
unsigned char ClearedYet__Fv() {
}


// address: 0x8007C064
// line start: 394
// line end:   398
void PrimDrawSycnCallBack() {
}


// address: 0x8007C084
// line start: 408
// line end:   409
void SendDispEnv__Fv() {
}


// address: 0x8007C0A8
// size: 0x18
// line start: 458
// line end:   462
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007C0C0
// size: 0x28
// line start: 466
// line end:   470
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007C0D8
// size: 0x34
// line start: 474
// line end:   478
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007C0F0
// size: 0x24
// line start: 483
// line end:   487
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007C108
// size: 0x14
// line start: 491
// line end:   495
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007C120
// size: 0xC
// line start: 508
// line end:   512
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007C138
// line start: 516
// line end:   545
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007C24C
// line start: 551
// line end:   562
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007C2B4
// line start: 127
// line end:   128
void VID_AfterDisplay__Fv() {
}


// address: 0x8007C2D4
// line start: 182
// line end:   184
void VID_ScrOn__Fv() {
}


// address: 0x8007C2FC
// line start: 203
// line end:   209
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007C354
// line start: 213
// line end:   214
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007C360
// line start: 218
// line end:   219
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007C36C
// line start: 224
// line end:   230
void VID_DispEnvSend() {
}


// address: 0x8007C3A8
// line start: 236
// line end:   238
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007C3B8
// line start: 242
// line end:   243
int VID_GetXOff__Fv() {
}


// address: 0x8007C3C4
// line start: 247
// line end:   248
int VID_GetYOff__Fv() {
}


// address: 0x8007C3D0
// line start: 252
// line end:   292
void VID_SetDBuffer__Fb(bool DBuf) {
	{
		{
		}
	}
}


// address: 0x8007C540
// line start: 96
// line end:   116
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007C548
// line start: 148
// line end:   149
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007C568
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C568(unsigned short tpage) {
}


// address: 0x8007C584
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C584(unsigned short tpage) {
}


// address: 0x8007C590
// size: 0x14
// line start: 163
// line end:   164
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007C59C
// size: 0x14
// line start: 173
// line end:   174
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007C5A8
// line start: 182
// line end:   242
void SortOutFileSystem__Fv() {
}


// address: 0x8007C6E4
// line start: 111
// line end:   113
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007C704
// line start: 117
// line end:   125
void Spanker__Fv() {
}


// address: 0x8007C744
// line start: 271
// line end:   272
void GaryLiddon__Fv() {
}


// address: 0x8007C74C
// line start: 65
// line end:   103
void ReadPad__Fi(int NoDeb) {
	// register: 2
	// size: 0x6C
	register struct CPad *Pad;
	// register: 2
	register int New;
	// register: 3
	register int cmem;
	// register: 4
	register int p1mema;
	// register: 5
	register int p1memb;
	// register: 6
	register int p2mema;
	// register: 7
	register int p2memb;
	// register: 8
	register int diffm;
}


// address: 0x8007C838
// line start: 108
// line end:   111
void DummyPoll__Fv() {
}


// address: 0x8007C840
// line start: 114
// line end:   115
void DaveOwens__Fv() {
}


// address: 0x8007C868
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007C890
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C890(unsigned short tpage) {
}


// address: 0x8007C8AC
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C8AC(unsigned short tpage) {
}


// address: 0x8007C8B8
// line start: 474
// line end:   502
void TimSwann__Fv() {
}


// address: 0x8007C8C0
// line start: 25
// line end:   26
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007C8C8
// line start: 30
// line end:   32
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007C8FC
// line start: 36
// line end:   39
void leighbird__Fv() {
}


// address: 0x8007C924
// size: 0x14
// line start: 61
// line end:   63
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007C974
// line start: 70
// line end:   71
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007C9C8
// line start: 79
// line end:   102
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007CB30
// line start: 112
// line end:   119
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007CB94
// line start: 129
// line end:   131
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007CBB4
// line start: 138
// line end:   150
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007CC94
// line start: 157
// line end:   171
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007CD58
// line start: 180
// line end:   185
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007CDBC
// line start: 193
// line end:   207
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007CE98
// line start: 215
// line end:   245
bool FindFile__6FileIOPCcPc(struct FileIO *this, char *Name, char *Buffa) {
	{
		{
			// register: 19
			register bool Success;
			{
				{
					// register: 18
					register char *Path;
				}
			}
		}
	}
}


// address: 0x8007CFAC
// line start: 254
// line end:   274
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007D054
// line start: 282
// line end:   286
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007D0AC
// line start: 295
// line end:   299
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007D104
// line start: 308
// line end:   309
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007D118
// line start: 317
// line end:   318
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007D154
// size: 0x14
// line start: 62
// line end:   65
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007D1BC
// line start: 75
// line end:   75
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007D214
// line start: 85
// line end:   93
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007D258
// line start: 106
// line end:   118
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D31C
// line start: 125
// line end:   139
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007D3D4
// line start: 143
// line end:   160
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D4A8
// line start: 169
// line end:   214
bool LoStreamFile__4PCIOPCciPFPUciib_bii(struct PCIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
	register int FileHnd;
	// register: 21
	register long hnd;
	// register: 18
	register unsigned char *Dest;
	// register: 22
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


// address: 0x8007D6B8
// size: 0x4
// line start: 65
// line end:   67
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007D6D0
// line start: 77
// line end:   79
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007D6FC
// line start: 89
// line end:   101
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007D778
// line start: 111
// line end:   119
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007D7E4
// size: 0x14
// line start: 65
// line end:   68
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007D820
// line start: 78
// line end:   78
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007D878
// line start: 88
// line end:   96
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007D8B8
// line start: 109
// line end:   121
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D978
// line start: 128
// line end:   142
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007DA2C
// line start: 146
// line end:   158
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DAD4
// line start: 173
// line end:   220
bool LoStreamFile__5DatIOPCciPFPUciib_bii(struct DatIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
	register int FileHnd;
	// register: 21
	register long hnd;
	// register: 18
	register unsigned char *Dest;
	// register: 22
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


// address: 0x8007DCE0
// size: 0x6C
// line start: 112
// line end:   118
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007DD20
// line start: 128
// line end:   129
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007DD68
// line start: 139
// line end:   197
void Use__7TextDat(struct TextDat *this) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char NameBuff[40];
			{
				{
					// address: 0xFFFFFFE8
					// size: 0x8
					auto struct RECT R;
					// register: 18
					register int DecompSize;
				}
			}
		}
	}
}


// address: 0x8007DF5C
// line start: 215
// line end:   243
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012C60C
	static int TpX;
	// address: 0x8012C610
	static int TpY;
	{
		// register: 16
		register int f;
		{
			// register: 3
			register int Dx;
			// register: 2
			register int Dy;
		}
	}
}


// address: 0x8007E02C
// line start: 246
// line end:   270
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007E0E4
// line start: 285
// line end:   298
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007E140
// line start: 309
// line end:   316
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007E1B0
// line start: 321
// line end:   343
long MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this) {
	// register: 21
	register long hndRet;
	// register: 18
	// size: 0xC
	register struct CBlock *MyBlock;
	// register: 19
	register int *Tab;
	{
		// register: 16
		register unsigned int f;
	}
}


// address: 0x8007E2DC
// line start: 353
// line end:   411
void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4, int XFlip, int YFlip) {
	// register: 2
	register int Rotated;
	// register: 12
	register int Tpage;
	// register: 3
	register int U;
	// register: 9
	register int V;
	// register: 8
	register int W;
	// register: 10
	register int H;
}


// address: 0x8007E3D8
// size: 0x28
// line start: 427
// line end:   564
struct POLY_FT4 *PrintMonster__7TextDatiiibi(struct TextDat *this, int Frm, int X, int Y, bool XFlip, int OtPos) {
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x28
			auto struct POLY_FT4 *FT4;
			// register: 18
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// register: 7
			register int W;
			// register: 8
			register int H;
			{
				{
					// register: 16
					register unsigned char *Dest;
					// register: 17
					register int DecompSize;
					// register: 16
					register unsigned char *CompFrAddr;
					// register: 22
					register unsigned long NumOfPrims;
					// register: 17
					// size: 0x44
					register struct DR_LOAD2 *DrPtr;
					// register: 4
					register int TpX;
					// register: 5
					register int TpY;
					// register: 4
					register int U;
					// register: 5
					register int V;
					// register: 3
					register int W;
					// register: 8
					register int H;
					{
						// register: 19
						register unsigned int f;
						{
							// address: 0xFFFFFFD0
							// size: 0x8
							auto struct RECT mrect;
						}
					}
				}
			}
		}
	}
}


// address: 0x8007E7E0
// line start: 570
// line end:   627
void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 21
	register int W;
	// register: 22
	register int H;
	{
		{
			{
				{
					// address: 0xFFFFFFD0
					// size: 0x8
					auto struct RECT R;
					{
						{
							// register: 4
							register unsigned char sw;
						}
					}
				}
			}
		}
	}
}


// address: 0x8007EA4C
// line start: 635
// line end:   669
unsigned char *GetDecompBufffer__7TextDati(struct TextDat *this, int Size) {
	// register: 18
	register long *DecArray;
	// register: 19
	register int DecIndex;
	// register: 16
	register long hnd;
	// register: 20
	register unsigned char *RetAddr;
}


// address: 0x8007EBAC
// line start: 674
// line end:   732
void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT4 *FT4, int XFlip, int YFlip) {
	// register: 2
	register int Rotated;
	// register: 12
	register int Tpage;
	// register: 3
	register int U;
	// register: 9
	register int V;
	// register: 8
	register int W;
	// register: 10
	register int H;
}


// address: 0x8007ECA8
// line start: 736
// line end:   807
void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 20
	register int W;
	// register: 22
	register int H;
	// register: 4
	register unsigned char sw;
	// register: 17
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFD0
				// size: 0x8
				auto struct RECT R;
				{
					{
						// register: 2
						register int DecX;
						// register: 2
						register int DecY;
						// address: 0xFFFFFFD0
						// size: 0x8
						auto struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x8007EF04
// line start: 814
// line end:   841
void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT3 *GT3) {
	// register: 2
	register int Rotated;
	// register: 10
	register int Tpage;
	// register: 4
	register int U;
	// register: 9
	register int V;
	// register: 7
	register int W;
	// register: 3
	register int H;
}


// address: 0x8007EF84
// line start: 846
// line end:   904
void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat *this, struct POLY_GT3 *GT3, int Frm, int X, int Y) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 21
	register int W;
	// register: 17
	register int H;
	// register: 16
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFD8
				// size: 0x8
				auto struct RECT R;
				{
					{
						// register: 2
						register int DecX;
						// register: 2
						register int DecY;
						// address: 0xFFFFFFD8
						// size: 0x8
						auto struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x8007F148
// size: 0x28
// line start: 918
// line end:   937
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007F29C
// size: 0x34
// line start: 943
// line end:   962
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007F3F0
// size: 0x28
// line start: 968
// line end:   984
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007F4D4
// line start: 989
// line end:   1027
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007F628
// line start: 1036
// line end:   1066
void MakeCreatureOffsetTab__7TextDat(struct TextDat *this) {
	// register: 17
	register int NumOfCreatures;
	{
		{
			// register: 16
			register unsigned char *ThisAddr;
			{
				// register: 17
				register unsigned int f;
				{
					// register: 16
					register int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x8007F768
// line start: 1076
// line end:   1100
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x8007F864
// line start: 1157
// line end:   1167
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007F890
// line start: 1177
// line end:   1212
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007F9D8
// size: 0x6C
// line start: 1223
// line end:   1243
struct TextDat *GM_UseTexData__Fi(int Id) {
	{
		{
			// register: 18
			// size: 0x6C
			register struct TextDat *Dat2Use;
			// register: 20
			// size: 0x4
			register struct CTextFileInfo **Tab;
			{
				// register: 17
				register int f;
			}
		}
	}
}


// address: 0x8007FAF8
// line start: 1253
// line end:   1257
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x8007FB4C
// line start: 1261
// line end:   1282
void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4) {
	// register: 17
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFE8
				// size: 0x8
				auto struct RECT R;
			}
		}
	}
}


// address: 0x8007FC14
// line start: 1309
// line end:   1310
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8007FC68
// line start: 1314
// line end:   1315
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x8007FCC0
// line start: 1324
// line end:   1354
void DoDecompRequests__7TextDat(struct TextDat *this) {
	// register: 17
	register long *DecArray;
	{
		// register: 18
		register int f;
		{
		}
	}
}


// address: 0x8007FDE4
// line start: 1392
// line end:   1418
void FindDecompArea__7TextDatR4RECT(struct TextDat *this, struct RECT *R) {
	// register: 8
	register int NumOfFrames;
	// register: 4
	register int Widest;
	// register: 16
	register int Tallest;
	{
		// register: 7
		register int f;
		{
			// register: 3
			register int w;
			// register: 5
			register int h;
		}
	}
}


// address: 0x8007FEB8
// size: 0x4
// line start: 1422
// line end:   1424
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x8007FF08
// line start: 1430
// line end:   1431
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x8007FF30
// line start: 1435
// line end:   1441
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x8007FFD8
// line start: 1447
// line end:   1475
void InitDirRemap__15CCreatureAction(struct CCreatureAction *this) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto bool Dir2Remap[8];
	// register: 7
	register int f;
	// register: 11
	register int RemapNum;
	{
		{
			{
				{
					// register: 9
					register int OrigNum;
					{
						// register: 6
						register int g;
					}
				}
			}
		}
	}
}


// address: 0x80080098
// line start: 1479
// line end:   1483
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x800800DC
// size: 0xE
// line start: 1487
// line end:   1495
struct CCreatureAction *GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8008016C
// line start: 1499
// line end:   1506
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x800801DC
// line start: 1511
// line end:   1522
int GetSize__C12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 18
	register int Size;
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
		{
			// register: 2
			register int ThisSize;
		}
	}
}


// address: 0x80080248
// line start: 1530
// line end:   1532
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080298
// line start: 1545
// line end:   1546
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800802C0
// line start: 1550
// line end:   1563
long GetFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// register: 16
	register long hnd;
}


// address: 0x8008035C
// line start: 1568
// line end:   1577
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x800803C4
// line start: 1609
// line end:   1651
void Un64__FPUcT0l(unsigned char *Src, unsigned char *Dest, long SizeBytes) {
	// register: 9
	register unsigned char *EndDest;
	// register: 7
	register unsigned long *BigDest;
	// register: 8
	register unsigned long Code;
	// register: 6
	register unsigned long Run;
	// register: 3
	register unsigned long BigCode;
}


// address: 0x80080498
// size: 0x78
// line start: 1665
// line end:   1666
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x800804CC
// line start: 1670
// line end:   1726
void Load__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	// register: 8
	register unsigned char r;
	// register: 5
	register unsigned char g;
	// register: 6
	register unsigned char b;
	{
		{
			// register: 17
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// address: 0xFFFFFFD8
			// size: 0x8
			auto struct RECT R;
			// register: 17
			// size: 0x8
			register struct PAL *Pal;
			{
				// register: 16
				register int i;
				{
					{
						// register: 10
						register int v;
						{
							// register: 2
							register unsigned short c;
						}
					}
				}
			}
		}
	}
}


// address: 0x80080748
// line start: 1731
// line end:   1733
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x8008076C
// line start: 1737
// line end:   1766
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80080A4C
// line start: 1774
// line end:   1782
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80080AC4
// line start: 1786
// line end:   1830
void GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this, struct TextDat *TDat, struct RECT *R) {
	// register: 18
	register int left;
	// register: 22
	register int right;
	// register: 17
	register int top;
	// register: 21
	register int bottom;
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x8
			auto struct RECT Pr;
			{
				// register: 16
				register unsigned int f;
			}
		}
	}
}


// address: 0x80080C20
// line start: 1868
// line end:   1868
void _GLOBAL__D_DatPool() {
}


// address: 0x80080C78
// line start: 1868
// line end:   1868
void _GLOBAL__I_DatPool() {
}


// address: 0x80080CCC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x80080D48
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x80080DC4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80080E40
// line start: 243
// line end:   243
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x80080E68
// line start: 242
// line end:   242
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x80080E90
// line start: 241
// line end:   241
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x80080E9C
// line start: 240
// line end:   240
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x80080EA8
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80080F20
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x80080F34
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80080F40
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x80080F54
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x80080F70
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80080F8C
// line start: 167
// line end:   167
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080F98
// line start: 158
// line end:   158
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080FC0
// line start: 157
// line end:   157
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080FE8
// line start: 66
// line end:   66
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x80080FFC
// size: 0x14
// line start: 122
// line end:   125
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x80081040
// line start: 135
// line end:   135
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80081098
// line start: 145
// line end:   155
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x800810BC
// line start: 167
// line end:   192
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x800810E4
// line start: 201
// line end:   211
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80081108
// line start: 217
// line end:   236
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x800811E8
// line start: 253
// line end:   254
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x800811F8
// line start: 259
// line end:   286
bool CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile) {
	// address: 0xFFFFFF98
	// size: 0x19
	auto char SearchBuffer[25];
	// register: 17
	register int pos;
	// register: 3
	register int c;
	// register: 16
	register int size;
	// address: 0xFFFFFFB8
	// size: 0x19
	auto char Monkey[25];
	{
		// register: 3
		register int i;
	}
}


// address: 0x80081344
// line start: 293
// line end:   366
bool LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 23
	register unsigned char *Dest;
	// register: 30
	register int OrigSize;
	// register: 21
	register unsigned long Pos;
	// address: 0xFFFFFFC0
	// size: 0x14
	auto struct STRHDR *sh;
	// register: 17
	register int ah;
	// address: 0xFFFFFFC8
	auto unsigned char Count;
	{
		// register: 16
		register int SizeToRead;
		// register: 18
		register unsigned char *ptr;
		{
			// register: 17
			register int i;
		}
	}
}


// address: 0x800815FC
// line start: 375
// line end:   410
bool LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 20
	register long hndText;
	// register: 18
	register unsigned char *Dest;
	// register: 21
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


// address: 0x80081738
// line start: 107
// line end:   134
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x80081824
// line start: 144
// line end:   170
long BL_ReadFile__FPcUl(char *Name, unsigned long RamId) {
	// register: 16
	register int MemSize;
	// address: 0xFFFFFFB8
	// size: 0x32
	auto char FileToLoad[50];
	// register: 16
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x80081950
// line start: 180
// line end:   220
long BL_AsyncReadFile__FPcUl(char *Name, unsigned long RamId) {
	// register: 16
	register int MemSize;
	// address: 0xFFFFFFB0
	// size: 0x32
	auto char FileToLoad[50];
	// register: 18
	register long MyHnd;
	// register: 19
	register unsigned char *LoadAddr;
	// register: 17
	register int ah;
}


// address: 0x80081AC4
// line start: 230
// line end:   274
void BL_LoadDirectory__Fv() {
	// register: 18
	register long BL_DirMHandle;
	// register: 16
	register char *AsyncAddr;
	// register: 16
	register unsigned char *BL_DirPtr;
	// register: 17
	register unsigned long DirId;
	// register: 2
	register unsigned long DirId2;
	// register: 3
	register long vm;
}


// address: 0x80081C30
// line start: 279
// line end:   346
void BL_LoadStreamDir__Fv() {
	// register: 17
	register long BL_DirMHandle;
	// register: 16
	register unsigned char *BL_DirPtr;
	// register: 18
	register unsigned long DirId;
	// register: 2
	register unsigned long DirId2;
	// register: 3
	// size: 0x4
	register enum LANG_TYPE Lang;
}


// address: 0x80081F10
// size: 0x14
// line start: 356
// line end:   377
struct STRHDR *BL_MakeFilePosTab__FPUcUl(unsigned char *BL_DirPtr, unsigned long NoStreamFiles) {
	// register: 18
	// size: 0x14
	register struct STREAM *DirPtr;
	// register: 16
	// size: 0x14
	register struct STRHDR *TFileTab;
	{
		{
			{
				// register: 5
				register int j;
			}
		}
	}
}


// address: 0x80082010
// size: 0x14
// line start: 387
// line end:   426
struct STRHDR *BL_FindStreamFile__FPcc(char *Name, char LumpID) {
	// register: 17
	// size: 0x14
	register struct STRHDR *ptr;
	// register: 21
	register unsigned long NoFiles;
	// register: 20
	register int pos;
	// register: 3
	register int c;
	// address: 0xFFFFFFC0
	// size: 0xE
	auto char fname[14];
	// register: 19
	register int size;
	{
		// register: 3
		register int i;
		{
			// register: 3
			register int i;
			{
				// register: 16
				register int s;
				// register: 3
				register int i;
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x800821AC
// line start: 436
// line end:   438
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x800821D0
// line start: 450
// line end:   456
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80082204
// line start: 466
// line end:   547
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x800822EC
// line start: 557
// line end:   559
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x800822F8
// line start: 564
// line end:   580
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x80082364
// line start: 585
// line end:   631
long BL_LoadFileAsync__FPcc(char *Name, char LumpID) {
	// register: 17
	// size: 0x14
	register struct STRHDR *sh;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int Size;
	// register: 16
	register int ah;
	// register: 18
	register long MyHnd;
	// register: 16
	register unsigned char *LoadAddr;
}


// address: 0x80082508
// line start: 641
// line end:   673
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 3
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x800825D0
// size: 0x14
// line start: 683
// line end:   687
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x800825FC
// line start: 702
// line end:   709
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80082634
// line start: 42
// line end:   90
int LZNP_Decode__FPUcT0(unsigned char *in, unsigned char *out) {
	// register: 6
	register int i;
	// register: 3
	register int j;
	// register: 7
	register unsigned int flags;
	// register: 8
	register unsigned char *OriginalOut;
}


// address: 0x80082708
// line start: 77
// line end:   108
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x8008282C
// line start: 118
// line end:   137
void Tfree__FPv(void *Addr) {
}


// address: 0x800828DC
// line start: 146
// line end:   151
void InitTmalloc__Fv() {
}


// address: 0x80082904
// line start: 161
// line end:   167
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80082958
// line start: 175
// line end:   187
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x800829A4
// line start: 198
// line end:   226
int GetPausePad__Fv() {
	// register: 18
	register bool Done;
	// register: 19
	register int PadVal;
	{
		{
			{
				{
					// register: 16
					register int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x80082A90
// line start: 238
// line end:   243
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80082ABC
// line start: 255
// line end:   320
void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum) {
	{
		{
			{
				{
					// register: 19
					register bool oldsflag;
					// register: 18
					register bool oldpflag;
					{
						{
							{
								{
									{
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80082D3C
// line start: 331
// line end:   432
bool DoPausedMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register bool RetVal;
	// register: 19
	register bool Done;
	// register: 16
	register int lvlchange;
	// address: 0xFFFFFFD0
	auto int newx;
	// register: 30
	register int newy;
	{
		// register: 17
		// size: 0x6C
		register struct CPad *P;
		{
			{
				{
					// register: 5
					register int y;
					{
						{
							// register: 4
							register int x;
						}
					}
				}
			}
		}
	}
}


// address: 0x80083054
// line start: 443
// line end:   481
int DoQuitMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register int RetVal;
	// register: 19
	register bool Done;
	// register: 17
	register int Menu;
	{
		// register: 16
		register unsigned short PadVal;
	}
}


// address: 0x80083174
// line start: 491
// line end:   522
bool AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register bool RetVal;
	// register: 19
	register bool Done;
	// register: 17
	register int Menu;
	{
		// register: 16
		register unsigned short PadVal;
	}
}


// address: 0x80083278
// line start: 546
// line end:   549
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80083288
// line start: 559
// line end:   560
bool PA_GetPauseOk__Fv() {
}


// address: 0x80083294
// line start: 583
// line end:   592
void MY_PausePrint__17CTempPauseMessageiPciP4RECT(struct CTempPauseMessage *this, int s, char *Txt, int Menu, struct RECT *PRect) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x800833E0
// line start: 597
// line end:   598
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800833E8
// line start: 601
// line end:   616
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x800834F8
// line start: 623
// line end:   624
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80083500
// line start: 627
// line end:   628
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083508
// line start: 631
// line end:   644
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083618
// line start: 651
// line end:   652
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80083620
// line start: 655
// line end:   656
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083628
// line start: 659
// line end:   672
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083754
// line start: 689
// line end:   690
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x8008375C
// line start: 693
// line end:   693
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80083784
// line start: 698
// line end:   698
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x800837AC
// line start: 698
// line end:   698
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x800837D4
// size: 0xC
// line start: 112
// line end:   112
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083818
// line start: 83
// line end:   83
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x8008384C
// size: 0x8
// line start: 82
// line end:   82
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80083860
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80083880
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80083888
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80083890
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x800838B8
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80083914
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x8008393C
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x80083964
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x80083970
// line start: 111
// line end:   141
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x80083A88
// line start: 152
// line end:   201
void PAD_Handler__Fv() {
	// register: 16
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 17
	register unsigned char fin;
}


// address: 0x80083C40
// size: 0x6C
// line start: 215
// line end:   226
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x80083CDC
// line start: 238
// line end:   269
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80083E14
// line start: 273
// line end:   305
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80083F70
// line start: 315
// line end:   339
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80084094
// line start: 343
// line end:   343
void _GLOBAL__I_Pad0() {
}


// address: 0x800840CC
// line start: 96
// line end:   96
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x800840D4
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_800840D4(struct CPad *this) {
}


// address: 0x800840E0
// line start: 88
// line end:   88
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x800840E8
// line start: 81
// line end:   81
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x800840F0
// size: 0x6C
// line start: 79
// line end:   79
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80084124
// line start: 128
// line end:   132
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80084148
// line start: 89
// line end:   94
void Set__7FontTab(struct FontTab *this) {
	{
		// register: 16
		register int Loop;
		{
			// register: 16
			register int f;
			// register: 16
			register int Loop;
		}
	}
}


// address: 0x800841E4
// line start: 360
// line end:   372
void InitPrinty__Fv() {
}


// address: 0x80084284
// line start: 377
// line end:   378
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x8008428C
// line start: 385
// line end:   444
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// address: 0xFFFFFFB8
	auto int Cw;
	{
		{
			{
				{
					// address: 0xFFFFFFC0
					auto unsigned short DR;
					// address: 0xFFFFFFC8
					auto unsigned short DG;
					// address: 0xFFFFFFD0
					auto unsigned short DB;
					// register: 16
					register unsigned short LR;
					// register: 17
					register unsigned short LG;
					// register: 19
					register unsigned short LB;
				}
			}
		}
	}
}


// address: 0x80084558
// line start: 449
// line end:   630
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	// register: 16
	register int Cx;
	// register: 20
	register int Cy;
	// address: 0xFFFFFF68
	auto int WrapCount;
	// register: 19
	register char *EndPtr;
	// register: 21
	register char *SpacePtr;
	// register: 3
	register int CharW;
	// register: 16
	register int SpaceW;
	// address: 0xFFFFFF70
	auto int WindowW;
	// address: 0xFFFFFF78
	auto int WindowH;
	// address: 0xFFFFFF80
	auto int WindowX;
	// address: 0xFFFFFF88
	auto int WindowY;
	// address: 0xFFFFFF90
	auto bool JapLang;
	// address: 0xFFFFFF98
	auto unsigned short col;
	{
		{
			// register: 5
			register char c;
			{
				{
					{
						{
							// register: 6
							register unsigned char h;
							{
								{
									// register: 6
									register unsigned char h;
									{
										{
											// register: 6
											register unsigned char h;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80084B7C
// line start: 635
// line end:   651
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x80084C30
// line start: 659
// line end:   661
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80084C94
// line start: 667
// line end:   670
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80084CA0
// line start: 91
// line end:   91
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80084CC4
// line start: 88
// line end:   88
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80084CE4
// line start: 85
// line end:   85
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80084CFC
// line start: 71
// line end:   78
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80084D54
// line start: 59
// line end:   59
void Init__5CFont(struct CFont *this) {
}


// address: 0x80084D88
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80084D88(struct TextDat *this, int FrNum) {
}


// address: 0x80084DA4
// line start: 110
// line end:   113
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80084DDC
// size: 0x34
// line start: 204
// line end:   385
struct POLY_GT4 *DialogPrint__Fiiiiiiiiii(int Frm, int X, int Y, int SW, int SH, int UW, int UH, int UOfs, int VOfs, int Trans) {
	// address: 0xFFFFFF78
	// size: 0xC
	auto struct FRAME_HDR *Fr;
	// register: 17
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// address: 0xFFFFFF80
	// size: 0x4
	auto struct TP_LOAD_HDR *Tp;
	// address: 0xFFFFFF88
	auto int x0;
	// address: 0xFFFFFF90
	auto int x1;
	// address: 0xFFFFFF98
	auto int x2;
	// address: 0xFFFFFFA0
	auto int x3;
	// address: 0xFFFFFFA8
	auto int y0;
	// address: 0xFFFFFFB0
	auto int y1;
	// address: 0xFFFFFFB8
	auto int y2;
	// address: 0xFFFFFFC0
	auto int y3;
	// register: 18
	register int u0;
	// register: 19
	register int u1;
	// register: 23
	register int u2;
	// register: 30
	register int u3;
	// register: 21
	register int v0;
	// register: 20
	register int v1;
	// register: 22
	register int v2;
	// address: 0xFFFFFFC8
	auto int v3;
	// register: 6
	register int U;
	// register: 5
	register int V;
	// register: 4
	register int W;
	// register: 7
	register int H;
	{
		{
			{
				{
					// register: 3
					// size: 0x8
					register struct PAL *Pal;
					{
						{
							{
								// register: 3
								// size: 0x8
								register struct PAL *Pal;
								// register: 16
								register short G1;
								// register: 18
								register short G2;
								// register: 19
								register short G3;
								// register: 20
								register short G4;
								{
									{
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80085754
// size: 0x24
// line start: 391
// line end:   402
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x8008588C
// line start: 406
// line end:   459
void DropShadows__Fiiii(int x, int y, int w, int h) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
	// register: 19
	register unsigned char dbr;
	// register: 17
	register unsigned char dbg;
	// register: 16
	register unsigned char dbb;
}


// address: 0x80085B30
// line start: 474
// line end:   492
void InitDialog__Fv() {
	{
		// register: 16
		register int i;
		{
			// register: 18
			register int y;
			// register: 16
			register int i;
			{
				// register: 16
				register unsigned char bits;
				{
					// register: 17
					register int x;
					{
						// register: 18
						register int i;
						// register: 18
						register int y;
					}
				}
			}
		}
	}
}


// address: 0x80085C68
// line start: 496
// line end:   552
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80085EC0
// line start: 565
// line end:   989
void Back__6Dialogiiii(struct Dialog *this, int DX, int DY, int DW, int DH) {
	// register: 30
	register int X;
	// register: 23
	register int Y;
	// address: 0xFFFFFF70
	auto int W;
	// address: 0xFFFFFF78
	auto int H;
	// register: 18
	register int Bx;
	// register: 20
	register int By;
	// register: 19
	register int Xr;
	// register: 22
	register int Yr;
	// register: 17
	register int Xl;
	// register: 21
	register int Yl;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// address: 0xFFFFFF68
	// size: 0x8
	auto struct RECT ClipRect;
	// address: 0xFFFFFF90
	auto char trans;
	{
		{
			{
				{
					{
						// register: 16
						register int c;
						{
							// register: 2
							// size: 0xC
							register struct FRAME_HDR *Fr;
							// register: 3
							register int fw;
							// register: 5
							register int fh;
						}
					}
				}
			}
		}
	}
}


// address: 0x80087080
// line start: 993
// line end:   1081
void Line__6Dialogiii(struct Dialog *this, int DX, int DY, int DW) {
	// register: 20
	register int X;
	// register: 23
	register int Y;
	// register: 19
	register int W;
	// register: 17
	register int Bx;
	// register: 16
	register int Xr;
	// register: 16
	register int Xl;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 21
	register char trans;
}


// address: 0x80087298
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80087298(struct TextDat *this, int PalNum) {
}


// address: 0x800872B4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800872B4(struct TextDat *this, int FrNum) {
}


// address: 0x800872D0
// line start: 67
// line end:   109
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80087420
// line start: 114
// line end:   119
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x800874BC
// line start: 226
// line end:   232
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x800874FC
// line start: 237
// line end:   266
void CycleSelCols__Fv() {
}


// address: 0x800876B4
// line start: 274
// line end:   282
int FindTownCreature__7CBlocksi(struct CBlocks *this, int GameEqu) {
	{
		// register: 17
		register unsigned int f;
		{
			// register: 2
			register int Creature;
		}
	}
}


// address: 0x80087728
// line start: 291
// line end:   297
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008777C
// size: 0xE0
// line start: 306
// line end:   360
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x800878D0
// line start: 370
// line end:   372
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80087908
// line start: 381
// line end:   392
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x800879D0
// line start: 402
// line end:   414
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80087A58
// line start: 424
// line end:   431
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80087AC0
// line start: 440
// line end:   447
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80087B28
// line start: 457
// line end:   462
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x80087B84
// line start: 472
// line end:   478
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x80087BD4
// line start: 486
// line end:   521
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80087F20
// line start: 532
// line end:   542
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x80087FCC
// line start: 553
// line end:   564
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x800880A0
// line start: 574
// line end:   585
void MakeGt4Table__7CBlocks(struct CBlocks *this) {
	{
		// register: 17
		register unsigned int f;
		{
			// address: 0xFFFFFFB8
			// size: 0x34
			auto struct POLY_GT4 ThisGt4;
		}
	}
}


// address: 0x800881A8
// line start: 595
// line end:   653
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr) {
	// register: 3
	register int W;
	// register: 2
	register int Rotated;
	// register: 9
	register int Tpage;
	// register: 4
	register int zU;
	// register: 7
	register int zV;
	// register: 6
	register int zW;
	// register: 8
	register int zH;
}


// address: 0x800882E4
// size: 0xC
// line start: 663
// line end:   665
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x8008835C
// line start: 676
// line end:   677
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088384
// line start: 687
// line end:   690
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x800883AC
// line start: 700
// line end:   702
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x800883C4
// line start: 745
// line end:   1229
void PrintMap__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF08
	auto int XPos;
	// address: 0xFFFFFF10
	auto int YPos;
	// address: 0xFFFFFF18
	auto int xx;
	// address: 0xFFFFFF20
	auto int block_trans;
	// address: 0xFFFFFF28
	auto unsigned short nlval1;
	// address: 0xFFFFFF30
	auto int BlankBlock;
	// register: 16
	register int XPix;
	// register: 17
	register int YPix;
	// address: 0xFFFFFF38
	auto int CLeft;
	// address: 0xFFFFFF40
	auto int CRight;
	// address: 0xFFFFFF48
	auto int CTop;
	// address: 0xFFFFFF50
	auto int CBottom;
	{
		// address: 0xFFFFFF58
		auto int ThisY;
		// address: 0xFFFFFF60
		auto int OtPos;
		// address: 0xFFFFFF68
		auto int ThisXPos;
		// register: 8
		register int ThisYPos;
		// address: 0xFFFFFF70
		auto int Height;
		{
			// register: 23
			// size: 0x8
			register struct CPart *Parts;
			// register: 5
			// size: 0xC
			register struct CBlock *MyBlock;
			// register: 16
			register int BlockNum;
			// address: 0xFFFFFF78
			auto bool Hi;
			// register: 6
			register int bx;
			// register: 7
			register int by;
			{
				{
					{
						{
							{
								{
									{
										{
											{
												// register: 11
												register int MyOt;
												// register: 16
												// size: 0x8
												register struct RECT *BlockR;
												// register: 4
												register int clipx;
												// register: 3
												register int clipy;
												{
													{
														// register: 13
														register int NumOfParts;
														{
															// register: 12
															register int f;
															{
																// register: 18
																register int X;
																// register: 16
																register int Y;
																// register: 19
																register int W;
																// register: 20
																register int H;
																// address: 0xFFFFFEF0
																// size: 0x34
																auto struct POLY_GT4 *DestGt4;
																{
																	{
																		// register: 17
																		// size: 0x10
																		register struct LittleGt4 *ThisGt4;
																		{
																			{
																				// address: 0xFFFFFF80
																				auto int MyOt;
																				// register: 16
																				// size: 0x8
																				register struct RECT *BlockR;
																				// register: 4
																				register int clipx;
																				// register: 3
																				register int clipy;
																				{
																					{
																						// register: 10
																						register int NumOfParts;
																						{
																							// register: 22
																							register int f;
																							{
																								// register: 18
																								register int X;
																								// register: 17
																								register int Y;
																								// register: 19
																								register int W;
																								// register: 20
																								register int H;
																								// address: 0xFFFFFEF4
																								// size: 0x34
																								auto struct POLY_GT4 *DestGt4;
																								{
																									{
																										// register: 16
																										// size: 0x10
																										register struct LittleGt4 *ThisGt4;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800898E8
// line start: 1241
// line end:   1264
void PrintGameSprites__7CBlocksiiiii(struct CBlocks *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY) {
	// register: 17
	// size: 0xC
	register struct map_info *p1;
	// register: 18
	// size: 0xC
	register struct map_info *p2;
	// register: 16
	// size: 0xC
	register struct map_info *p3;
}


// address: 0x80089A58
// line start: 1274
// line end:   1647
void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// address: 0xFFFFFFA0
	auto int nMonster;
	// register: 21
	register int bItem;
	// register: 2
	register int bObject;
	// address: 0xFFFFFFA8
	auto int bFlags;
	// address: 0xFFFFFFB0
	auto int vFlags;
	// address: 0xFFFFFFB8
	auto int bDead;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *ShadFt4;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			// size: 0x6C
			register struct TextDat *ObjDat;
			{
				{
					// register: 18
					register int ObjIndex;
					// register: 17
					// size: 0x2C
					register struct ObjectStruct *OStr;
					// register: 2
					register int LoadIndex;
					// register: 3
					register int TexDat;
					{
						{
							// register: 5
							register int Col;
							{
								{
									// register: 16
									// size: 0x98
									register struct ItemStruct *pItem;
									{
										{
											// register: 23
											// size: 0xC
											register struct FRAME_HDR *Fr;
											// register: 18
											register int W;
											// register: 19
											register int H;
											// register: 4
											register short height;
											{
												{
													// register: 2
													register int it;
													{
														// register: 5
														register int Col;
														{
															{
																// register: 2
																register int gnMI;
																{
																	{
																		// register: 5
																		register int ScrXOff;
																		// register: 6
																		register int ScrYOff;
																		{
																			{
																				{
																					{
																						// register: 18
																						// size: 0x70
																						register struct MonsterStruct *MyMonst;
																						// register: 21
																						// size: 0x6C
																						register struct TextDat *CMonstGraphics;
																						// address: 0xFFFFFFC0
																						auto int mi;
																						{
																							{
																								// register: 16
																								register int Frame;
																								// register: 19
																								register int Action;
																								// register: 20
																								register int Dir;
																								// register: 16
																								register int PhysFrame;
																								// register: 17
																								register int Creature;
																								// register: 30
																								register int ScrXOff;
																								// register: 23
																								register int ScrYOff;
																								{
																									{
																										// register: 2
																										register char transfile;
																										// register: 5
																										register int Col;
																										{
																											{
																												// register: 2
																												register int MG_No;
																												// register: 5
																												register int SPal;
																												{
																													{
																														// register: 18
																														// size: 0x1C
																														register struct CMonster *MyMonst;
																														// register: 2
																														register int Frame;
																														// register: 16
																														register int PhysFrame;
																														// register: 17
																														register int Creature;
																														// register: 2
																														register char transfile;
																														{
																															{
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008A79C
// line start: 1656
// line end:   1829
void PrintSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// address: 0xFFFFFFC8
	auto int Monster;
	// register: 19
	register int bItem;
	// address: 0xFFFFFFD0
	auto int bFlags;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 17
			// size: 0x98
			register struct ItemStruct *pItem;
			{
				{
					// register: 2
					// size: 0xC
					register struct FRAME_HDR *Fr;
					// register: 18
					register int W;
					// register: 20
					register int H;
					// register: 8
					register short height;
					{
						{
							// register: 2
							register int it;
							{
								// register: 5
								register int Col;
								{
									{
										// register: 2
										register int gnMI;
										{
											{
												// register: 5
												register int ScrXOff;
												// register: 6
												register int ScrYOff;
												{
													{
														// register: 20
														register int Creature;
														// register: 18
														register int mi;
														// address: 0xFFFFFFB8
														// size: 0x28
														auto struct POLY_FT4 *Ft4;
														// register: 17
														// size: 0x6C
														register struct TextDat *ThisData;
														// register: 16
														register int PhysFrame;
														// register: 19
														register int GameFrame;
														// register: 16
														register int Dir;
														{
															{
																// register: 5
																register int Col;
																{
																	{
																		// register: 16
																		// size: 0x28
																		register struct POLY_FT4 *ShadFt4;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008AEB0
// line start: 1837
// line end:   1857
void PrintSprites__7CBlocksiiiii(struct CBlocks *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY) {
	// register: 17
	// size: 0xC
	register struct map_info *p1;
	// register: 18
	// size: 0xC
	register struct map_info *p2;
	// register: 16
	// size: 0xC
	register struct map_info *p3;
}


// address: 0x8008B020
// line start: 1867
// line end:   1868
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B034
// line start: 1878
// line end:   1879
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B048
// line start: 1889
// line end:   1891
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B10C
// line start: 1901
// line end:   1909
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 7
	register int XDiff;
	// register: 4
	register int YDiff;
	// register: 6
	register int divnum;
}


// address: 0x8008B18C
// line start: 1919
// line end:   1929
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008B22C
// line start: 1940
// line end:   1951
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008B300
// line start: 2008
// line end:   2035
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008B380
// line start: 2047
// line end:   2048
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B388
// line start: 2058
// line end:   2059
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B39C
// size: 0xE0
// line start: 2095
// line end:   2102
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008B3A8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008B3A8(struct POLY_FT4 **Prim) {
}


// address: 0x8008B424
// line start: 100
// line end:   108
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008B46C
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008B4A8
// line start: 100
// line end:   108
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008B4F0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008B4F0(struct POLY_GT4 **Prim) {
}


// address: 0x8008B56C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x8008B5E8
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008B610
// line start: 166
// line end:   168
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008B62C
// line start: 173
// line end:   173
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008B654
// line start: 172
// line end:   172
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008B67C
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B6A0
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B6C4
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B6EC
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B6F8
// line start: 64
// line end:   76
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008B790
// line start: 47
// line end:   60
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8008B820
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008B858
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008B858(struct TextDat *this, int Creature) {
}


// address: 0x8008B8D0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008B8D0(struct TextDat *this) {
}


// address: 0x8008B8E4
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008B8E4(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008B8F0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008B8F0(struct TextDat *this, int PalNum) {
}


// address: 0x8008B90C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008B90C(struct TextDat *this, int FrNum) {
}


// address: 0x8008B928
// line start: 119
// line end:   121
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008B954
// line start: 129
// line end:   130
void OVR_LoadPregame__Fv() {
}


// address: 0x8008B97C
// line start: 137
// line end:   138
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008B9A4
// line start: 146
// line end:   147
void OVR_LoadGame__Fv() {
}


// address: 0x8008B9CC
// line start: 155
// line end:   156
void OVR_LoadFmv__Fv() {
}


// address: 0x8008B9F4
// line start: 164
// line end:   165
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008BA20
// line start: 174
// line end:   178
void ClearOutOverlays__Fv() {
}


// address: 0x8008BA78
// line start: 187
// line end:   194
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008BB3C
// line start: 203
// line end:   216
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008BBAC
// size: 0x4
// line start: 225
// line end:   226
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x8008BBB8
// line start: 234
// line end:   239
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x8008BC0C
// line start: 244
// line end:   244
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008BD7C
// size: 0x4
// line start: 65
// line end:   65
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x8008BD88
// line start: 74
// line end:   75
void StevesDummyPoll__Fv() {
}


// address: 0x8008BD90
// line start: 78
// line end:   81
void Lambo__Fv() {
}


// address: 0x8008BD98
// size: 0x84
// line start: 66
// line end:   111
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008BE7C
// line start: 122
// line end:   124
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008BED4
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008BF30
// line start: 167
// line end:   173
void SetBlockXY__7CPlayerR7CBlocksR12PlayerStruct(struct CPlayer *this, struct CBlocks *Bg, struct PlayerStruct *Plr) {
	// register: 17
	register int ScrX;
	// register: 16
	register int ScrY;
	// register: 16
	register int WorldX;
	// register: 7
	register int WorldY;
}


// address: 0x8008C07C
// line start: 178
// line end:   244
void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// register: 17
	register int ScrX;
	// register: 16
	register int ScrY;
	// register: 17
	register int NWorldX;
	// register: 16
	register int NWorldY;
	// register: 3
	register int pdir;
	// register: 4
	register int wtime;
}


// address: 0x8008C4A8
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008C528
// line start: 282
// line end:   415
void Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// address: 0xFFFFFFD0
	auto int ScrXOff;
	// register: 30
	register int ScrYOff;
	// register: 16
	register int Action;
	// register: 23
	register int WorldX;
	// register: 22
	register int WorldY;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			register int Frame;
			{
				{
					// register: 2
					register int FrmNum;
					// address: 0xFFFFFFC0
					// size: 0x8
					auto struct RECT R;
					// register: 17
					register int pOtPos;
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
					{
						{
							{
								{
									{
										// register: 20
										register int Frame;
										{
											{
												// register: 19
												register int FrmNum;
												// address: 0xFFFFFFC0
												// size: 0x8
												auto struct RECT R;
												// register: 17
												register int pOtPos;
												// register: 16
												// size: 0x28
												register struct POLY_FT4 *ShadFt4;
												{
													{
														// register: 3
														register int SpellFr;
														{
															{
																// register: 17
																register int zX;
																// register: 16
																register int zY;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008CA1C
// line start: 426
// line end:   484
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008CA98
// size: 0x4
// line start: 489
// line end:   520
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008CB14
// line start: 531
// line end:   532
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008CB1C
// line start: 541
// line end:   542
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008CB24
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008CB24(struct POLY_FT4 **Prim) {
}


// address: 0x8008CBA0
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008CBA0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008CBDC
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008CBDC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008CC04
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008CC18
// line start: 249
// line end:   253
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008CC30
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008CC30(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008CC68
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008CC8C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008CC8C(struct TextDat *this, int Creature) {
}


// address: 0x8008CD04
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008CD04(struct TextDat *this) {
}


// address: 0x8008CD18
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008CD18(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008CD24
// line start: 87
// line end:   94
void PROF_Open__Fv() {
}


// address: 0x8008CD64
// line start: 99
// line end:   100
bool PROF_State__Fv() {
}


// address: 0x8008CD70
// line start: 104
// line end:   105
void PROF_On__Fv() {
}


// address: 0x8008CD80
// line start: 109
// line end:   110
void PROF_Off__Fv() {
}


// address: 0x8008CD8C
// line start: 114
// line end:   115
void PROF_CpuEnd__Fv() {
}


// address: 0x8008CDBC
// line start: 119
// line end:   120
void PROF_CpuStart__Fv() {
}


// address: 0x8008CDE0
// line start: 124
// line end:   125
void PROF_DrawStart__Fv() {
}


// address: 0x8008CE04
// line start: 129
// line end:   130
void PROF_DrawEnd__Fv() {
}


// address: 0x8008CE34
// line start: 134
// line end:   174
void PROF_Draw__FPUl(unsigned long *Ot) {
	{
		{
			// register: 2
			// size: 0x18
			register struct POLY_F4 *F4;
			// register: 22
			register int XCent;
			{
				// register: 23
				register int f;
				{
					// register: 2
					// size: 0x14
					register struct POLY_F3 *F3;
				}
			}
		}
	}
}


// address: 0x8008D028
// line start: 179
// line end:   180
void PROF_Restart__Fv() {
}


// address: 0x8008D048
// line start: 181
// line end:   220
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008D140
// line start: 231
// line end:   268
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008D1F0
// line start: 276
// line end:   283
void GoBackLevel__Fv() {
}


// address: 0x8008D268
// line start: 287
// line end:   291
void GoWarpLevel__Fv() {
}


// address: 0x8008D2A0
// line start: 297
// line end:   303
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D33C
// line start: 307
// line end:   322
void GoLoadGame__Fv() {
}


// address: 0x8008D3C4
// line start: 326
// line end:   332
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D460
// line start: 336
// line end:   347
void GoNewLevel__Fv() {
}


// address: 0x8008D4B4
// line start: 354
// line end:   358
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D54C
// line start: 365
// line end:   368
void GoForwardLevel__Fv() {
}


// address: 0x8008D5A4
// line start: 372
// line end:   376
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D63C
// line start: 384
// line end:   389
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008D68C
// line start: 393
// line end:   397
void PostNewGame__Fv() {
}


// address: 0x8008D6C4
// line start: 406
// line end:   417
void LevelToLevelInit__Fv() {
}


// address: 0x8008D71C
// line start: 205
// line end:   219
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008D760
// size: 0x10
// line start: 227
// line end:   231
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008D7B8
// line start: 242
// line end:   339
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 22
	register int ManaHeight;
	// address: 0xFFFFFFC8
	auto int HealthAnim;
	// address: 0xFFFFFFD0
	auto int ManaAnim;
	// register: 23
	register int BarY;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	register int X;
	// register: 19
	register int Y;
	// register: 16
	register int xof;
}


// address: 0x8008DC38
// line start: 347
// line end:   415
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 17
	register int X;
	// register: 19
	register int Y;
	// register: 21
	register int Loop;
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 22
	register int Bx;
	// register: 23
	register int By;
}


// address: 0x8008E0BC
// line start: 422
// line end:   454
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 21
	register int X;
	// register: 19
	register int Y;
	// register: 2
	register int Anim;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 3
	register int SpellNo;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto char YT[16];
}


// address: 0x8008E25C
// line start: 462
// line end:   474
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008E2A8
// line start: 491
// line end:   554
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008E664
// line start: 558
// line end:   577
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008E758
// line start: 583
// line end:   601
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008E85C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008E85C(struct TextDat *this, int PalNum) {
}


// address: 0x8008E878
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008E878(struct TextDat *this, int FrNum) {
}


// address: 0x8008E894
// line start: 142
// line end:   163
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat *CDGfxData;
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8008E978
// line start: 169
// line end:   171
void InitCDWaitIcon__Fv() {
}


// address: 0x8008E9AC
// line start: 181
// line end:   198
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008E9C0
// line start: 394
// line end:   417
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008EA08
// line start: 427
// line end:   437
void STR_AllocBuffer__Fv() {
	{
		{
			{
				// register: 3
				register int i;
			}
		}
	}
}


// address: 0x8008EA5C
// line start: 443
// line end:   470
void STR_Init__Fv() {
	{
		{
			// register: 4
			register unsigned char *ptr;
			// register: 16
			// size: 0x5C
			register struct TASK *T;
			{
			}
		}
	}
}


// address: 0x8008EB28
// size: 0x80
// line start: 481
// line end:   539
struct SFXHDR *STR_InitStream__Fv() {
	// register: 18
	// size: 0x80
	register struct SFXHDR *sfh;
	{
		// register: 17
		register int s;
	}
}


// address: 0x8008EC60
// size: 0x80
// line start: 549
// line end:   609
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008ED9C
// line start: 619
// line end:   624
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008EDF4
// line start: 649
// line end:   680
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008EF00
// line start: 690
// line end:   694
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008EF50
// line start: 704
// line end:   708
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008EFA0
// line start: 718
// line end:   736
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F00C
// line start: 745
// line end:   787
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008F118
// line start: 796
// line end:   865
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F2C4
// line start: 875
// line end:   894
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008F38C
// line start: 905
// line end:   982
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008F568
// line start: 994
// line end:   1115
void STR_AsyncWeeTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 19
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// register: 17
	register char Done;
	// register: 18
	register int frame;
	// register: 20
	register int framediff;
	// register: 21
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
}


// address: 0x8008F860
// line start: 1128
// line end:   1295
void STR_AsyncTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 21
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// register: 18
	register char Done;
	// register: 17
	register int latency;
	// register: 19
	register int frame;
	// register: 22
	register int framediff;
	// register: 20
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
}


// address: 0x8008FC8C
// line start: 1309
// line end:   1344
void STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh, char FileType) {
	// register: 18
	// size: 0x14
	register struct STRHDR *sh;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	{
		{
			// register: 16
			// size: 0x5C
			register struct TASK *T2;
		}
	}
}


// address: 0x8008FD9C
// line start: 140
// line end:   177
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x8008FE6C
// line start: 190
// line end:   203
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8008FED8
// line start: 213
// line end:   223
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8008FF50
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012C670
	static int DestAddr;
}


// address: 0x8008FFC8
// line start: 250
// line end:   289
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x800900FC
// line start: 355
// line end:   360
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090150
// line start: 384
// line end:   386
void SND_StopSnd__Fi(int voice) {
}


// address: 0x80090174
// line start: 396
// line end:   401
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800901D8
// line start: 411
// line end:   474
int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj) {
	// address: 0xFFFFFFA0
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 19
	register int Offset;
	// register: 3
	register int sfxnum;
	// register: 17
	register int voice;
}


// address: 0x8009038C
// line start: 86
// line end:   87
void AS_CallBack0__Fi(int handle) {
}


// address: 0x800903A0
// line start: 91
// line end:   92
void AS_CallBack1__Fi(int handle) {
}


// address: 0x800903B4
// line start: 102
// line end:   125
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80090490
// line start: 148
// line end:   164
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x80090530
// line start: 174
// line end:   175
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8009053C
// line start: 185
// line end:   189
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x80090568
// line start: 200
// line end:   242
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x80090688
// line start: 170
// line end:   171
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x800906BC
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8009074C
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80090828
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x800908A8
// line start: 277
// line end:   293
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x80090948
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x800909DC
// line start: 327
// line end:   344
void UpdatePals__13PalCollection(struct PalCollection *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *ThisPal;
	{
		// register: 17
		// size: 0x18
		register struct PalEntry *NextPal;
	}
}


// address: 0x80090A50
// line start: 353
// line end:   354
void SCR_Handler__Fv() {
}


// address: 0x80090A78
// line start: 132
// line end:   132
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x80090A80
// size: 0x18
// line start: 110
// line end:   116
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80090ABC
// line start: 98
// line end:   104
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80090B20
// line start: 90
// line end:   93
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090B78
// line start: 83
// line end:   86
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090BD0
// line start: 97
// line end:   100
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80090BE4
// line start: 89
// line end:   92
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x80090C10
// line start: 82
// line end:   85
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x80090C18
// line start: 79
// line end:   79
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x80090C20
// line start: 78
// line end:   78
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x80090C2C
// line start: 73
// line end:   73
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80090C64
// size: 0x18
// line start: 67
// line end:   67
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80090C70
// line start: 57
// line end:   63
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090C90
// line start: 46
// line end:   53
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090CDC
// line start: 97
// line end:   98
void stub__FPcPv_addr_80090CDC(char *e, void *argptr) {
}


// address: 0x80090CE4
// line start: 101
// line end:   103
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x80090D18
// line start: 107
// line end:   115
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x80090DA0
// line start: 120
// line end:   140
void SetAmbientLight__Fv() {
}


// address: 0x80090E24
// line start: 157
// line end:   199
void print_demo_task__FP4TASK(struct TASK *T) {
	{
		{
			// register: 3
			register int x;
		}
	}
}


// address: 0x80091030
// line start: 203
// line end:   205
void TonysDummyPoll__Fv() {
}


// address: 0x80091054
// line start: 209
// line end:   216
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800910B4
// line start: 220
// line end:   227
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x80091114
// line start: 239
// line end:   250
void set_pad_record_play__Fi(int level) {
}


// address: 0x80091188
// line start: 255
// line end:   263
void start_demo__Fv() {
}


// address: 0x80091224
// line start: 267
// line end:   272
void SetQuest__Fv() {
}


// address: 0x800912A4
// line start: 276
// line end:   277
int CurrCheatStr__Fv() {
}


// address: 0x800912C4
// line start: 281
// line end:   283
void tony__Fv() {
}


// address: 0x800912FC
// line start: 222
// line end:   223
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x80091308
// line start: 233
// line end:   234
int GLUE_GetMonsterList__Fv() {
}


// address: 0x80091314
// line start: 244
// line end:   249
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091368
// line start: 259
// line end:   264
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800913BC
// line start: 274
// line end:   281
void GLUE_PreTown__Fv() {
}


// address: 0x80091420
// line start: 290
// line end:   296
void GLUE_PreDun__Fv() {
}


// address: 0x8009146C
// line start: 316
// line end:   317
bool GLUE_Finished__Fv() {
}


// address: 0x80091478
// line start: 327
// line end:   328
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80091484
// line start: 338
// line end:   350
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x80091508
// line start: 359
// line end:   363
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091518
// line start: 371
// line end:   375
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091528
// line start: 383
// line end:   387
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091538
// line start: 397
// line end:   417
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x80091610
// line start: 428
// line end:   589
void BgTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// register: 19
	register bool IsTown;
	// register: 16
	register int TextId;
	// register: 17
	register int Level;
	// register: 18
	register int ObjId;
	// register: 20
	register int List;
	// address: 0xFFFFFDD0
	// size: 0xE0
	auto struct CBlocks MyBlocks;
	// address: 0xFFFFFEB0
	// size: 0x84
	auto struct CPlayer MyPlayer;
	// address: 0xFFFFFF38
	// size: 0x84
	auto struct CPlayer MyPlayer2;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct GPanel P1Panel;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct GPanel P2Panel;
}


// address: 0x80091AD4
// size: 0x8
// line start: 599
// line end:   609
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x80091B5C
// size: 0x8
// line start: 614
// line end:   620
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80091BB8
// size: 0x8
// line start: 624
// line end:   629
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80091BE8
// line start: 633
// line end:   639
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x80091C28
// line start: 649
// line end:   655
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80091C7C
// size: 0x10
// line start: 666
// line end:   673
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80091D28
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x80091D34
// line start: 139
// line end:   139
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x80091D3C
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80091D50
// line start: 166
// line end:   181
void SetDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80091E28
// line start: 185
// line end:   195
void RestoreDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 3
		register int i;
	}
}


// address: 0x80091EB8
// line start: 199
// line end:   216
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80091F30
// line start: 245
// line end:   255
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x80091F68
// line start: 260
// line end:   275
bool checkvalid__Fv() {
	// register: 6
	register int start;
	// register: 5
	register int end;
	{
		// register: 3
		register int i;
	}
}


// address: 0x80091FCC
// line start: 281
// line end:   292
bool RemoveCtrlScreen__Fv() {
}


// address: 0x80092034
// line start: 300
// line end:   318
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x800920EC
// line start: 322
// line end:   334
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009212C
// line start: 338
// line end:   351
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009216C
// line start: 355
// line end:   399
unsigned char set_buttons__Fii(int cline, int n) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 3
	register int cval;
	// register: 4
	register int i;
	// register: 18
	register int p;
}


// address: 0x800922C0
// line start: 403
// line end:   410
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x80092308
// line start: 417
// line end:   566
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x800927A0
// line start: 573
// line end:   688
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	// register: 18
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 2
	register int i;
	// address: 0xFFFFFFC8
	auto unsigned char r;
	// address: 0xFFFFFFD0
	auto unsigned char g;
	// register: 23
	register unsigned char b;
	// register: 19
	register int str;
	// register: 21
	register int len;
	{
		{
			// register: 4
			register int x1;
			// register: 22
			register int x2;
			// register: 5
			register int nlen;
		}
	}
}


// address: 0x80092CDC
// line start: 691
// line end:   765
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 20
	register int pnum;
	{
		{
			{
				{
					// register: 17
					register int lena;
					// register: 2
					register int len;
					{
						{
							// register: 19
							register int oldDot;
							// register: 18
							register int OldPrintOT;
						}
					}
				}
			}
		}
	}
}


// address: 0x80093194
// line start: 765
// line end:   765
void _GLOBAL__D_ctrlflag() {
}


// address: 0x800931BC
// line start: 765
// line end:   765
void _GLOBAL__I_ctrlflag() {
}


// address: 0x800931E4
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009320C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009320C(struct CPad *this) {
}


// address: 0x80093234
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80093234(struct CPad *this) {
}


// address: 0x8009325C
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x80093264
// line start: 85
// line end:   85
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009326C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8009326C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009328C
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8009328C(struct Dialog *this, int Type) {
}


// address: 0x80093294
// line start: 84
// line end:   87
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x800932A0
// line start: 77
// line end:   77
void ___6Dialog_addr_800932A0(struct Dialog *this, int __in_chrg) {
}


// address: 0x800932C8
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_800932C8(struct Dialog *this) {
}


// address: 0x80093324
// line start: 160
// line end:   163
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80093370
// line start: 194
// line end:   223
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x800934F0
// line start: 233
// line end:   261
void color_cycle__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct RECT ClutR;
	// register: 2
	register unsigned short cx;
	// register: 3
	register unsigned short cy;
	// address: 0xFFFFFF78
	// size: 0x40
	auto unsigned long VRAMPal[16];
	// address: 0xFFFFFFB8
	// size: 0x40
	auto unsigned long CLUTPal[16];
	{
		{
			{
				{
					// register: 6
					register int i;
					{
						// register: 4
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x80093634
// line start: 50
// line end:   82
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	register int diff;
}


// address: 0x80093884
// line start: 87
// line end:   90
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x800938D8
// line start: 87
// line end:   136
bool TryCreaturePrint__Fiiiiiii(int nMonster, int blockr, int blockg, int blockb, int OtPos, int ScrX, int ScrY) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *ShadFt4;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 18
			// size: 0x70
			register struct MonsterStruct *MyMonst;
			// register: 19
			// size: 0x6C
			register struct TextDat *CMonstGraphics;
			// register: 2
			register int Frame;
			// register: 17
			register int Action;
			// register: 16
			register int Dir;
			// register: 16
			register int PhysFrame;
			// register: 21
			register int ScrXOff;
			// register: 20
			register int ScrYOff;
		}
	}
}


// address: 0x80093B3C
// line start: 148
// line end:   183
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80093D14
// line start: 188
// line end:   217
void nightgfx__FibiP8POLY_GT4i(int BlockBase, bool water, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80093DA0
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80093DA0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80093DDC
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80093DDC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80093E04
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80093E04(struct POLY_FT4 **Prim) {
}


// address: 0x80093E80
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80093E80(struct TextDat *this, int Creature) {
}


// address: 0x80093EA4
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80093EA4(struct TextDat *this, int Creature) {
}


// address: 0x80093F1C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80093F1C(struct TextDat *this) {
}


// address: 0x80093F30
// line start: 83
// line end:   84
void DaveLDummyPoll__Fv() {
}


// address: 0x80093F38
// line start: 87
// line end:   89
void DaveL__Fv() {
}


// address: 0x80093F60
// line start: 100
// line end:   160
void DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4, int R, int G, int B) {
	// register: 3
	register unsigned char zV0;
	// register: 2
	register unsigned char zV2;
	// register: 2
	register unsigned char zH;
	// register: 22
	register unsigned char dH;
	// register: 17
	register unsigned char zV;
	// register: 3
	register unsigned char *s;
	// register: 4
	register unsigned char *d;
	// register: 19
	register unsigned char *Ft4m;
	// register: 23
	register short zX0;
	// register: 30
	register short zX1;
	// address: 0x8012B2E4
	static int count;
	// register: 21
	register int n;
	// register: 16
	register int xoffset;
	// register: 4
	register int yoffset;
	// register: 18
	register short zY;
}


// address: 0x80094240
// line start: 164
// line end:   190
void mteleportfx__Fv() {
	// register: 19
	register int plr;
	// register: 16
	register int br;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8009451C
// line start: 195
// line end:   209
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x800945E8
// line start: 212
// line end:   247
void setUVparams__FP8POLY_FT4P9FRAME_HDR(struct POLY_FT4 *Ft4, struct FRAME_HDR *Fr) {
	// register: 5
	register int zU;
	// register: 7
	register int zV;
	// register: 3
	register int zW;
	// register: 8
	register int zH;
}


// address: 0x80094670
// line start: 253
// line end:   284
void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos) {
	// register: 30
	// size: 0x6C
	register struct TextDat *Dat;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 23
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 16
	register unsigned char SpR;
	// register: 17
	register unsigned char SpG;
	// register: 18
	register unsigned char SpB;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFFD0
	auto int f;
}


// address: 0x80094860
// line start: 289
// line end:   302
void drawpolyF4__Fiiiiii(int x, int y, int w, int h, int colour, int OtPos) {
	// address: 0xFFFFFFD0
	// size: 0x18
	auto struct POLY_F4 *F4;
	// register: 21
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 18
	register unsigned char SpB;
}


// address: 0x80094994
// line start: 307
// line end:   328
void drawpolyG4__Fiiiiiiii(int x, int y, int w, int h1, int h2, int colour0, int colour1, int OtPos) {
	// address: 0xFFFFFFC0
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 30
	register unsigned char SpR0;
	// register: 23
	register unsigned char SpG0;
	// register: 18
	register unsigned char SpB0;
	// address: 0xFFFFFFC8
	auto unsigned char SpR1;
	// address: 0xFFFFFFD0
	auto unsigned char SpG1;
	// register: 22
	register unsigned char SpB1;
}


// address: 0x80094B64
// line start: 333
// line end:   356
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80094D04
// line start: 360
// line end:   370
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80094DE8
// line start: 375
// line end:   377
void doparticlejump__Fv() {
}


// address: 0x80094E28
// line start: 381
// line end:   400
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80094F90
// line start: 405
// line end:   487
void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source) {
	// address: 0xFFFFFF90
	// size: 0x6C
	auto struct TextDat *Dat;
	// address: 0xFFFFFF88
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 30
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 21
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 22
	register unsigned char SpB;
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 3
	register int br;
	// register: 16
	register int w;
	// register: 19
	register int h;
	// register: 20
	register int f;
	// address: 0xFFFFFF98
	auto int c;
	// address: 0xFFFFFFA0
	auto int t;
	// register: 2
	register int rand;
	// register: 3
	register int xoffs;
	// register: 2
	register int yoffs;
	// address: 0xFFFFFFA8
	auto int xf;
	// address: 0xFFFFFFB0
	auto int yf;
	// address: 0xFFFFFFB8
	auto int dxf;
	// address: 0xFFFFFFC0
	auto int dyf;
	// register: 5
	register int dxabs;
	// register: 4
	register int dyabs;
	// register: 4
	register int divisor;
	// register: 8
	register int *partexecnum;
}


// address: 0x80095388
// line start: 492
// line end:   509
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80095448
// line start: 513
// line end:   561
void Teleportfx__Fiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart) {
	// register: 30
	// size: 0x6C
	register struct TextDat *Dat;
	// address: 0xFFFFFF78
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 17
	register unsigned char SpB;
	// register: 16
	register int w;
	// register: 20
	register int h;
	// register: 18
	register int x;
	// register: 19
	register int y;
	// address: 0xFFFFFFA0
	auto int f;
	// address: 0xFFFFFFA8
	auto int n;
	// register: 21
	register int rand;
	// register: 17
	register int randu;
	// register: 2
	register int randl;
	// address: 0xFFFFFFB0
	auto unsigned char Rmask;
	// address: 0xFFFFFFB8
	auto unsigned char Gmask;
	// address: 0xFFFFFFC0
	auto unsigned char Bmask;
}


// address: 0x800956F0
// line start: 566
// line end:   581
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x80095914
// line start: 586
// line end:   603
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80095A38
// line start: 607
// line end:   620
void healFX__Fv() {
	// register: 19
	register int plr;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80095B50
// line start: 625
// line end:   627
void HealStart__Fi(int plr) {
}


// address: 0x80095B84
// line start: 631
// line end:   634
void HealotherStart__Fi(int plr) {
}


// address: 0x80095BBC
// line start: 638
// line end:   641
void TeleStart__Fi(int plr) {
}


// address: 0x80095C18
// line start: 646
// line end:   648
void PhaseStart__Fi(int plr) {
}


// address: 0x80095C4C
// line start: 653
// line end:   655
void PhaseEnd__Fi(int plr) {
}


// address: 0x80095C78
// line start: 661
// line end:   684
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80095E18
// line start: 689
// line end:   696
void ApocUpdate__11SPELLFX_DAT(struct SPELLFX_DAT *this) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x80095E84
// line start: 700
// line end:   703
void ApocaStart__Fi(int plr) {
}


// address: 0x80095EDC
// line start: 708
// line end:   723
void doapocaFX__Fv() {
	// register: 17
	register int plr;
}


// address: 0x80095FF4
// line start: 728
// line end:   748
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80096058
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x800960D4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80096150
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096150(struct POLY_FT4 **Prim) {
}


// address: 0x800961CC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800961CC(struct TextDat *this, int FrNum) {
}


// address: 0x800961E8
// line start: 86
// line end:   113
void DrawArrow__Fii(int x1, int y1) {
	// register: 22
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 20
	register char r;
	// register: 18
	register char b;
	{
		// register: 6
		register int ni;
		{
			// register: 30
			register int i;
			// register: 6
			register int ni;
		}
	}
}


// address: 0x800963EC
// line start: 121
// line end:   228
void show_spell_dir__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	register int cp;
	// register: 19
	// size: 0x24
	register struct Spell_Target *spl;
	// address: 0xFFFFFFB8
	auto int otx;
	// register: 30
	register int oty;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFC0
	// size: 0xE0
	auto struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80096860
// line start: 240
// line end:   252
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x800968D4
// line start: 260
// line end:   269
void select_belt_item__Fi(int pnum) {
}


// address: 0x800968DC
// line start: 277
// line end:   286
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096944
// line start: 293
// line end:   311
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096A74
// line start: 317
// line end:   337
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096BAC
// line start: 346
// line end:   348
void pad_func_up__Fi(int pnum) {
}


// address: 0x80096BD8
// line start: 356
// line end:   358
void pad_func_down__Fi(int pnum) {
}


// address: 0x80096C04
// line start: 366
// line end:   367
void pad_func_left__Fi(int pnum) {
}


// address: 0x80096C0C
// line start: 374
// line end:   375
void pad_func_right__Fi(int pnum) {
}


// address: 0x80096C14
// line start: 393
// line end:   404
void pad_func_select__Fi(int pnum) {
}


// address: 0x80096CD0
// line start: 416
// line end:   481
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x800970F4
// line start: 488
// line end:   537
void pad_func_Action__Fi(int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80097408
// line start: 541
// line end:   561
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80097510
// line start: 565
// line end:   584
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x800975A0
// line start: 591
// line end:   712
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 17
	register int sp;
	// register: 19
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 5
	// size: 0x6C
	register struct CPad *pad;
	// register: 20
	register unsigned char DoTarget;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80097B20
// line start: 719
// line end:   724
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80097BE0
// line start: 733
// line end:   746
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80097CE8
// line start: 751
// line end:   763
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80097DD4
// line start: 768
// line end:   779
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x80097EC0
// line start: 784
// line end:   788
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80097F44
// line start: 802
// line end:   806
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80097FDC
// line start: 837
// line end:   848
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80098098
// line start: 863
// line end:   871
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80098114
// line start: 894
// line end:   931
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 2
	register int ii;
	// register: 20
	// size: 0x23A8
	register struct PlayerStruct *player;
	{
	}
}


// address: 0x800982DC
// line start: 939
// line end:   940
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80098304
// line start: 950
// line end:   951
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x8009832C
// line start: 956
// line end:   971
int get_max_find_size__FPici(int *lsize, char mask, int pnum) {
	// register: 19
	register int maxlen;
	// register: 18
	register int size;
	{
		// register: 17
		register int i;
		{
			{
				{
					// register: 3
					register int l;
				}
			}
		}
	}
}


// address: 0x8009846C
// line start: 975
// line end:   993
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80098578
// line start: 997
// line end:   1137
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// address: 0xFFFFFF40
	// size: 0x1E
	auto char str[30];
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	register int cp;
	// address: 0xFFFFFF60
	auto int list_size;
	// address: 0xFFFFFF68
	auto int maxlen;
	// register: 2
	register int cgold;
	{
		// register: 21
		register int i;
		{
			// register: 9
			register int R;
			// register: 8
			register int G;
			// register: 3
			register int B;
			{
				{
					// register: 17
					register int len;
				}
			}
		}
	}
}


// address: 0x80098E3C
// line start: 1141
// line end:   1165
void DrawObjTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	{
		// register: 16
		register int oseldata;
	}
}


// address: 0x80098F18
// line start: 1174
// line end:   1180
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80099024
// line start: 1189
// line end:   1259
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x800993E4
// line start: 1264
// line end:   1318
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 20
	register int y;
	// register: 16
	register int dir;
	// register: 19
	register int front_range;
	{
		{
			// register: 17
			register int i;
			{
				// register: 17
				register int l;
				{
					{
						// register: 19
						register int j;
						{
							{
								// register: 16
								register int i;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80099638
// line start: 1363
// line end:   1388
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8009985C
// line start: 1389
// line end:   1389
void _GLOBAL__D_gplayer() {
}


// address: 0x80099884
// line start: 1389
// line end:   1389
void _GLOBAL__I_gplayer() {
}


// address: 0x800998AC
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_800998AC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800998CC
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_800998CC(struct Dialog *this, int Type) {
}


// address: 0x800998D4
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_800998D4(struct Dialog *this, int Type) {
}


// address: 0x800998DC
// line start: 77
// line end:   77
void ___6Dialog_addr_800998DC(struct Dialog *this, int __in_chrg) {
}


// address: 0x80099904
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80099904(struct Dialog *this) {
}


// address: 0x80099960
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80099960(struct CBlocks *this) {
}


// address: 0x80099974
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80099974(struct CPad *this) {
}


// address: 0x8009999C
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_8009999C(struct CPad *this) {
}


// address: 0x800999C4
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80099A40
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80099A98
// line start: 102
// line end:   107
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80099AF4
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80099B2C
// line start: 130
// line end:   136
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80099B64
// line start: 139
// line end:   144
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80099BC4
// line start: 155
// line end:   156
bool IsGameLoading__Fv() {
}


// address: 0x80099BD0
// line start: 166
// line end:   242
void PutUpCutScreenTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// address: 0xFFFFFFD0
	auto int lev;
	// register: 16
	register int tx;
	// address: 0xFFFFFFC8
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 21
	register unsigned char barr;
	// register: 16
	register unsigned char barg;
	// register: 17
	register unsigned short prog;
}


// address: 0x8009A044
// line start: 254
// line end:   280
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x8009A0F4
// line start: 290
// line end:   308
void TakeDownCutScreen__Fv() {
}


// address: 0x8009A180
// line start: 319
// line end:   325
void FinishProgress__Fv() {
}


// address: 0x8009A1E4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009A1E4(struct POLY_G4 **Prim) {
}


// address: 0x8009A260
// line start: 329
// line end:   329
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009A298
// line start: 329
// line end:   329
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x8009A2D0
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8009A2D0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009A2F0
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8009A2F0(struct Dialog *this, int Type) {
}


// address: 0x8009A2F8
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8009A2F8(struct Dialog *this, int Type) {
}


// address: 0x8009A300
// line start: 77
// line end:   77
void ___6Dialog_addr_8009A300(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009A328
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8009A328(struct Dialog *this) {
}


// address: 0x8009A384
// line start: 345
// line end:   120
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8009A3A4
// line start: 104
// line end:   184
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x8009A5C0
// line start: 188
// line end:   212
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009A5C8
// line start: 217
// line end:   221
void init_card__Fi(int card_number) {
}


// address: 0x8009A5FC
// line start: 226
// line end:   239
int ping_card__Fi(int card_number) {
}


// address: 0x8009A690
// line start: 243
// line end:   249
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009A6C8
// line start: 254
// line end:   265
void MemcardON__Fv() {
}


// address: 0x8009A738
// line start: 271
// line end:   279
void MemcardOFF__Fv() {
}


// address: 0x8009A788
// line start: 605
// line end:   618
void PrintSelectBack__FbT0(bool S, bool B) {
	// register: 2
	register int len;
}


// address: 0x8009A8DC
// line start: 625
// line end:   634
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009A9C0
// line start: 650
// line end:   773
void DrawSpinner__FiiUcUcUciiibiT8(int x, int y, unsigned char SpinR, unsigned char SpinG, int SpinB, int spinradius, int spinbright, int angle, bool Sparkle, int OtPos, bool cross) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// register: 6
	// size: 0x28
	register struct POLY_GT3 *GT3;
	// address: 0xFFFFFFD0
	// size: 0x6C
	auto struct TextDat *ThisDat;
	// register: 16
	register unsigned char rand;
	// register: 5
	register int f;
	// register: 2
	register unsigned short bright;
	// register: 30
	register unsigned short r;
	// register: 23
	register unsigned short g;
	// register: 22
	register unsigned short b;
	// register: 3
	register int xr1;
	// register: 5
	register int yr1;
	// register: 7
	register int xr2;
	// register: 4
	register int yr2;
	// register: 2
	register int yr3;
	// register: 20
	register int radius;
	{
		// register: 17
		register int i;
		{
			{
				{
					// register: 17
					register char flip;
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8009AE88
// line start: 779
// line end:   1023
void DrawMenu__Fi(int MenuNo) {
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct OMENULIST *mptr;
	// address: 0xFFFFFF78
	// size: 0x18
	auto struct OMENUITEM *iptr;
	// address: 0xFFFFFF80
	auto int sh;
	// address: 0xFFFFFF58
	// size: 0x24
	auto struct POLY_G4 *G4;
	// address: 0xFFFFFF88
	auto int yoff;
	// register: 17
	register int len;
	// address: 0xFFFFFF90
	auto unsigned char r;
	// address: 0xFFFFFF98
	auto unsigned char g;
	// address: 0xFFFFFFA0
	auto unsigned char b;
	// address: 0xFFFFFFA8
	auto int mx;
	// address: 0xFFFFFFB0
	auto int my;
	// address: 0xFFFFFFB8
	auto int BARFRAC;
	// register: 17
	register int mptrx;
	// register: 16
	register int mptry;
	{
		// address: 0xFFFFFFC0
		auto int i;
		{
			{
				{
					// register: 20
					register int sxp;
					// register: 16
					register int syp;
					// register: 18
					register unsigned char barg;
					// register: 23
					register unsigned char barr;
					{
						{
							// register: 18
							register int len;
							// register: 19
							register int cx;
							// register: 20
							register int cy;
							{
								{
									// register: 3
									register int fi;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009BB4C
// line start: 1027
// line end:   1036
int who_pressed__Fi(int pval) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad1;
}


// address: 0x8009BBD4
// size: 0x6C
// line start: 1041
// line end:   1046
struct CPad *PAD_GetOptionsPad__Fi(int p) {
}


// address: 0x8009BC10
// line start: 1051
// line end:   1265
void ShowCharacterFiles__Fv() {
	// register: 19
	register int j;
	// register: 23
	register int yoff;
	// register: 20
	register int move;
	// register: 6
	register int fileno;
	// register: 21
	// size: 0x6C
	register struct CPad *P;
	// register: 22
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x10
			auto struct Dialog SBack;
			// address: 0xFFFFFFD0
			// size: 0x8
			auto struct RECT um;
			// register: 2
			register int X;
			// register: 2
			register int Y;
			// register: 2
			register int W;
			// register: 17
			register int H;
			// register: 19
			register int oldBot;
			// register: 18
			register int oldTot;
			{
				{
					// register: 18
					register int r;
					// register: 17
					register int g;
					// register: 16
					register int b;
				}
			}
		}
	}
}


// address: 0x8009C29C
// line start: 1268
// line end:   1481
void MemcardPad__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	{
		{
			// register: 5
			register int lcs;
			{
				{
					// address: 0xFFFFFFD0
					// size: 0x10
					auto struct Dialog SBack;
					// address: 0xFFFFFFE0
					// size: 0x8
					auto struct RECT um;
					// register: 2
					register int X;
					// register: 2
					register int Y;
					// register: 2
					register int W;
					// register: 17
					register int H;
					// register: 19
					register int oldBot;
					// register: 18
					register int oldTot;
				}
			}
		}
	}
}


// address: 0x8009C90C
// line start: 1487
// line end:   1487
void UnBounce__Fv() {
}


// address: 0x8009C918
// line start: 1490
// line end:   1703
void SoundPad__Fv() {
	// register: 18
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 17
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 6
	register int lcs;
	{
		{
			{
				// register: 3
				register int l;
				{
					{
						{
							{
								{
									{
										// register: 16
										register int llen;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009D014
// line start: 1711
// line end:   1814
void CentrePad__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	{
		{
			// register: 5
			register int lcs;
			{
				// register: 16
				register int osx;
				// register: 19
				register int osy;
			}
		}
	}
}


// address: 0x8009D438
// line start: 1820
// line end:   1845
void CalcVolumes__Fv() {
}


// address: 0x8009D578
// line start: 1853
// line end:   1873
void GetVolumes__Fv() {
	{
		// register: 8
		register int i;
		{
			// register: 5
			// size: 0x8
			register struct OMENULIST *mptr;
			// register: 3
			// size: 0x18
			register struct OMENUITEM *iptr;
			{
				// register: 4
				register int s;
			}
		}
	}
}


// address: 0x8009D680
// line start: 1881
// line end:   1898
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009D828
// line start: 1916
// line end:   2197
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 16
	register int old_pad;
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	{
		{
			{
				// register: 4
				register int x;
				{
					{
						{
							{
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009E0C0
// line start: 2203
// line end:   2227
void ToggleOptions__Fv() {
}


// address: 0x8009E168
// line start: 2234
// line end:   2314
void FormatPad__Fv() {
	// register: 16
	register int move;
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
}


// address: 0x8009E474
// line start: 2317
// line end:   2329
void ActivateMemcard__Fv() {
}


// address: 0x8009E4F8
// line start: 2334
// line end:   2355
void ShowGameFiles__FPc(char *filename) {
	// register: 22
	register int yoff;
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 3
					register int FileNo;
				}
			}
		}
	}
}


// address: 0x8009E644
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009E644(struct POLY_G4 **Prim) {
}


// address: 0x8009E6C0
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009E6C0(struct CPad *this) {
}


// address: 0x8009E6E8
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009E6E8(struct CPad *this) {
}


// address: 0x8009E710
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_8009E710(struct CPad *this) {
}


// address: 0x8009E738
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_8009E738(struct CPad *this, unsigned short mask) {
}


// address: 0x8009E740
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_8009E740(struct CPad *this, unsigned short tick) {
}


// address: 0x8009E748
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8009E748(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009E768
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8009E768(struct Dialog *this, int Type) {
}


// address: 0x8009E770
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8009E770(struct Dialog *this, int Type) {
}


// address: 0x8009E778
// line start: 84
// line end:   87
int SetOTpos__6Dialogi_addr_8009E778(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8009E784
// line start: 77
// line end:   77
void ___6Dialog_addr_8009E784(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009E7AC
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8009E7AC(struct Dialog *this) {
}


// address: 0x8009E808
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009E808(struct TextDat *this, int FrNum) {
}


// address: 0x8009E824
// line start: 72
// line end:   79
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009E87C
// line start: 88
// line end:   129
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x8009EA58
// line start: 139
// line end:   149
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009EAD4
// line start: 160
// line end:   183
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 2
	register int type;
	// register: 4
	register int i;
	{
		{
			// register: 6
			// size: 0x23A8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x8009EC60
// line start: 192
// line end:   201
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009ECB4
// line start: 210
// line end:   237
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009EE1C
// line start: 246
// line end:   266
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EF20
// line start: 277
// line end:   284
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EF8C
// line start: 293
// line end:   309
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F010
// line start: 317
// line end:   330
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F0BC
// line start: 338
// line end:   348
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F160
// line start: 358
// line end:   381
void BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *leader;
	{
		{
			{
				// register: 16
				register int i;
			}
		}
	}
}


// address: 0x8009F204
// line start: 389
// line end:   441
void BIRD_DoFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 20
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 17
							register int x;
							// register: 18
							register int y;
						}
					}
				}
			}
		}
	}
}


// address: 0x8009F4B0
// line start: 451
// line end:   459
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F508
// line start: 470
// line end:   474
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F558
// line start: 483
// line end:   500
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009F644
// line start: 508
// line end:   527
void ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 19
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 20
		register int i;
		{
			{
				{
					// register: 17
					register int x;
					// register: 18
					register int y;
				}
			}
		}
	}
}


// address: 0x8009F774
// line start: 551
// line end:   570
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009F84C
// line start: 582
// line end:   623
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009F9A4
// line start: 631
// line end:   660
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x8009FA40
// line start: 666
// line end:   686
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x8009FB70
// line start: 691
// line end:   710
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x8009FC7C
// line start: 749
// line end:   811
void DrawLBird__Fv() {
	// register: 19
	// size: 0x18
	register struct BIRDSTRUCT *ThisBird;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD0
	// size: 0xE0
	auto struct CBlocks *gblock;
	// register: 2
	register int ScrXOff;
	// register: 2
	register int ScrYOff;
	// register: 17
	register int x;
	// register: 18
	register int y;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT R;
	// register: 30
	// size: 0x6C
	register struct TextDat *Dat;
	{
		{
			{
				// register: 21
				register int i;
			}
		}
	}
}


// address: 0x8009FE88
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009FE88(struct POLY_FT4 **Prim) {
}


// address: 0x8009FF04
// line start: 90
// line end:   132
short PlayFMV__FPcii(char *str, int w, int h) {
	// register: 16
	register short RetVal;
	// register: 19
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009FFC4
// line start: 137
// line end:   151
void play_movie(char *pszMovie) {
	{
		{
			{
			}
		}
	}
}


// address: 0x800A0080
// line start: 130
// line end:   216
void DisplayMonsterTypes__Fv() {
	// address: 0xFFFFFED8
	// size: 0x100
	auto char Text[256];
	// register: 17
	// size: 0xE0
	register struct CBlocks *MBlocks;
	// register: 20
	// size: 0x1C
	register struct CMonster *MyCMonst;
	// register: 18
	// size: 0x3C
	register struct MonsterData *MyMonst;
	// register: 17
	// size: 0x6C
	register struct TextDat *CMonstGraphics;
	// register: 19
	// size: 0x6C
	register struct TextDat *ObjGraphics;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	register int NumMons;
	// register: 16
	register int PhysFrame;
	// register: 16
	register int Creature;
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	{
		{
			{
				{
					// register: 2
					register char transfile;
				}
			}
		}
	}
}


// address: 0x800A051C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A051C(struct CPad *this) {
}


// address: 0x800A0544
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800A0544(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A057C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800A057C(struct TextDat *this, int Creature) {
}


// address: 0x800A05F4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800A05F4(struct TextDat *this) {
}


// address: 0x800A0608
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A0608(struct TextDat *this, int FrNum) {
}


// address: 0x800A0624
// line start: 40
// line end:   52
void LoadKanjiFont__FPc(char *name) {
}


// address: 0x800A06B8
// line start: 57
// line end:   71
void LoadKanjiIndex__FPc(char *name) {
	// register: 16
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A076C
// line start: 76
// line end:   94
void FreeKanji__Fv() {
}


// address: 0x800A07F4
// line start: 101
// line end:   123
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto char tmp[40];
	// register: 16
	register char *bname;
}


// address: 0x800A08C8
// line start: 129
// line end:   147
unsigned short *getb__FUs(unsigned short n) {
	// register: 4
	// size: 0x4
	register struct kindexS *ii;
	// register: 3
	register int i;
	// register: 16
	register int off;
}


// address: 0x800A0938
// line start: 158
// line end:   180
void _get_font__FPUsUsUs(unsigned short *into, unsigned short num, unsigned short col) {
	// register: 8
	register unsigned short *p;
	// register: 16
	register unsigned short *d;
	// register: 5
	register long i;
	// register: 3
	register long j;
	// register: 6
	register short by;
}


// address: 0x800A0A08
// line start: 188
// line end:   229
int KPrintChar__FUsUsUcUcUs(unsigned short Cx, unsigned short Cy, unsigned char h, unsigned char l, int col) {
	// address: 0xFFFFFFE8
	// size: 0x28
	auto struct POLY_FT4 *ft4;
	// address: 0xFFFFFE88
	// size: 0x152
	auto unsigned short buff[169];
	// register: 5
	register unsigned short kan;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT r;
}


// address: 0x800A0B74
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0B74(struct POLY_FT4 **Prim) {
}


// address: 0x800A0BF0
// line start: 85
// line end:   108
void writeblock__FP5block(struct block *theblock) {
	{
		{
			{
				{
					{
						// register: 18
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x800A0CD8
// line start: 118
// line end:   235
int PAK_DoPak__FPUcT0i(unsigned char *Dest, unsigned char *buffer, int insize) {
	// register: 3
	register long begin;
	// register: 19
	register long end;
	// register: 17
	register long bestlength;
	// register: 20
	register int offset;
	// register: 23
	register int bestoffset;
	// register: 22
	register unsigned char *theptr;
	// register: 18
	register unsigned char *ptr1;
	// register: 5
	register unsigned char *ptr2;
	// register: 4
	register unsigned char *ptr3;
	// address: 0xFFFFFDB0
	// size: 0x214
	auto struct block theblock;
	// register: 21
	register int inpos;
}


// address: 0x800A0F18
// line start: 245
// line end:   278
int PAK_DoUnpak__FPUcT0(unsigned char *Dest, unsigned char *Source) {
	// register: 19
	register int outsize;
	{
		// register: 5
		register unsigned char *From;
		// register: 17
		register int size;
		// register: 3
		register int ch;
	}
}


// address: 0x800A0FB8
// line start: 55
// line end:   58
void fputc__5blockUc(struct block *this, unsigned char Val) {
}


// address: 0x8002E8A0
// line start: 520
// line end:   523
unsigned char TrimCol__Fs_addr_8002E8A0(short col) {
}


// address: 0x8002E8D8
// line start: 527
// line end:   695
void DrawSpellCel__FllUclUc(long xp, long yp, unsigned char Trans, long nCel, int w) {
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct TextDat *ThisDat;
	// register: 17
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// address: 0xFFFFFF80
	// size: 0x4
	auto struct TP_LOAD_HDR *Tp;
	// register: 19
	register int SpellW;
	// register: 20
	register int SpellH;
	// register: 18
	register unsigned char r;
	// address: 0xFFFFFF88
	auto unsigned char g;
	// address: 0xFFFFFF90
	auto unsigned char b;
	// register: 13
	register int x0;
	// register: 12
	register int x1;
	// register: 16
	register int x2;
	// register: 15
	register int x3;
	// register: 24
	register int y0;
	// register: 11
	register int y1;
	// register: 9
	register int y2;
	// register: 14
	register int y3;
	// register: 4
	register int u0;
	// register: 5
	register int u1;
	// register: 10
	register int u2;
	// register: 8
	register int u3;
	// register: 6
	register int v0;
	// register: 7
	register int v1;
	// register: 3
	register int v2;
	// register: 2
	register int v3;
	{
		{
			{
				{
					// register: 22
					register int X;
					// address: 0xFFFFFFC8
					auto int Y;
					// register: 20
					register int SW;
					// register: 23
					register int SH;
					// register: 3
					// size: 0x8
					register struct PAL *Pal;
					// address: 0xFFFFFFD0
					auto int st;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8002F3F4
// line start: 709
// line end:   710
void SetSpellTrans__Fc(char t) {
}


// address: 0x8002F400
// line start: 718
// line end:   735
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8002F498
// line start: 740
// line end:   750
void DrawSpeedSpellTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	{
		// register: 16
		register int old_opts;
	}
}


// address: 0x8002F510
// line start: 756
// line end:   788
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8002F5C4
// line start: 814
// line end:   1112
void DrawSpellList__Fv() {
	// register: 18
	register int x;
	// register: 20
	register int y;
	// register: 22
	register int i;
	// register: 19
	register int j;
	// register: 4
	register int t;
	// address: 0xFFFFFFA8
	auto unsigned long mask;
	// address: 0xFFFFFFB0
	auto unsigned long spl;
	// register: 5
	register int s;
	// register: 17
	register int c;
	// register: 23
	register int v;
	// address: 0xFFFFFFB8
	auto int NoSpells;
	// register: 6
	register unsigned char trans;
	// register: 21
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	// register: 19
	register int lx;
	// register: 20
	register int ly;
	// register: 17
	register int NoYSpells;
	// register: 18
	register int NoXSpells;
	{
		{
			{
				{
					{
						{
							// register: 4
							register bool Flag;
						}
					}
				}
			}
		}
	}
}


// address: 0x80030188
// line start: 1118
// line end:   1130
void SetSpell__Fi(int pnum) {
}


// address: 0x8003025C
// line start: 1141
// line end:   1144
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x8003030C
// line start: 1151
// line end:   1153
void ClearPanel__Fv() {
}


// address: 0x8003033C
// line start: 1206
// line end:   1207
void InitPanelStr__Fv() {
}


// address: 0x8003035C
// line start: 1293
// line end:   1440
void InitControlPan__Fv() {
	// register: 3
	register int i;
}


// address: 0x8003057C
// line start: 1446
// line end:   1449
void DrawCtrlPan__Fv() {
}


// address: 0x800305A8
// line start: 1529
// line end:   1541
void DoAutoMap__Fv() {
}


// address: 0x8003061C
// line start: 1548
// line end:   1639
void CheckPanelInfo__Fv() {
	// register: 17
	// size: 0x4
	register int (*_pSpell)[1];
	// register: 16
	register int c;
	// register: 5
	register int s;
	// register: 16
	register int v;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											{
												{
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80030D3C
// line start: 1713
// line end:   1729
void FreeControlPan__Fv() {
	{
		// register: 4
		register void *p__p;
		{
			// register: 4
			register void *p__p;
			{
				// register: 4
				register void *p__p;
				{
					// register: 4
					register void *p__p;
					{
						// register: 4
						register void *p__p;
						{
							// register: 4
							register void *p__p;
							{
								// register: 4
								register void *p__p;
								{
									// register: 4
									register void *p__p;
									{
										// register: 4
										register void *p__p;
										{
											// register: 4
											register void *p__p;
											{
												// register: 4
												register void *p__p;
												{
													// register: 4
													register void *p__p;
													{
														// register: 4
														register void *p__p;
														{
															// register: 4
															register void *p__p;
															{
																// register: 4
																register void *p__p;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80030E4C
// line start: 1751
// line end:   1779
int CPrintString__FiPci(int No, char *pszStr, int Just) {
	// register: 6
	// size: 0x4
	register enum TXT_JUST Justify;
	// register: 8
	register unsigned char R;
	// register: 5
	register unsigned char G;
	// register: 3
	register unsigned char B;
}


// address: 0x80030F68
// line start: 1822
// line end:   1858
void PrintInfo__Fv() {
	// register: 19
	register int nOffset1;
	// register: 20
	register int w;
	// register: 18
	register int nlines;
	{
		{
			{
				// register: 16
				register int i;
				{
					// register: 16
					register int i;
				}
			}
		}
	}
}


// address: 0x800311A4
// line start: 1864
// line end:   1984
void DrawInfoBox__FP4RECT(struct RECT *InfoRect) {
	// register: 16
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 17
							register int nGold;
							{
								{
									{
										{
											{
												{
													{
														{
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80031858
// line start: 2037
// line end:   2131
void MY_PlrStringXY__Fv() {
	// register: 21
	// size: 0x28
	register struct CSDATA *ptr;
	// address: 0xFFFFFFC0
	auto char r;
	// address: 0xFFFFFFC8
	auto char g;
	// register: 30
	register char b;
	// register: 22
	register int x;
	// register: 23
	register int y;
	// address: 0xFFFFFFD0
	auto int w;
	// register: 20
	register int len;
}


// address: 0x80031DA4
// line start: 2137
// line end:   2153
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80031E4C
// line start: 2176
// line end:   2212
void DrawPlus__Fii(int n, int pnum) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 3
	register int x;
	// register: 7
	register int y;
}


// address: 0x80031FB4
// line start: 2219
// line end:   2232
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x80032090
// line start: 2240
// line end:   2261
void DrawArrows__Fv() {
	// register: 18
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 10
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 16
	register unsigned char flip;
	// register: 17
	register int x;
}


// address: 0x80032188
// line start: 2266
// line end:   2460
void BuildChr__Fv() {
	// register: 18
	register char c;
	// address: 0xFFFFFFB0
	// size: 0x40
	auto char chrstr[64];
	// register: 17
	register long mind;
	// register: 16
	register long maxd;
	// register: 16
	register int hper;
	// register: 16
	register int ac;
	{
		{
		}
	}
}


// address: 0x80033460
// line start: 2465
// line end:   2558
void DrawChr__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x40
	auto char chrstr[64];
	// register: 2
	register int pc;
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	{
		{
			// register: 18
			register int llus;
			// register: 16
			register int move;
		}
	}
}


// address: 0x800338B8
// line start: 2612
// line end:   2633
void DrawChrTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
}


// address: 0x8003399C
// line start: 2642
// line end:   2650
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80033A30
// line start: 2655
// line end:   2692
void CheckChrBtns__Fv() {
	// register: 16
	register int pc;
}


// address: 0x80033D9C
// line start: 2699
// line end:   2739
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80033E20
// line start: 2747
// line end:   2761
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80033F08
// line start: 2767
// line end:   2774
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x80033FA0
// line start: 2781
// line end:   2793
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x800341B8
// line start: 2820
// line end:   3005
void DrawSpellBook__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int ii;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// address: 0xFFFFFFC8
	auto int mind;
	// address: 0xFFFFFFCC
	auto int maxd;
	// register: 23
	register int sx;
	// register: 22
	register int sy;
	// address: 0xFFFFFFD0
	auto unsigned long tspls;
	// register: 17
	register char c;
	// register: 16
	register int v;
	// register: 19
	register unsigned char bright;
	// address: 0xFFFFFFC0
	// size: 0x4
	auto char Num[4];
	// register: 22
	register int bw;
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	// register: 17
	register int lsbooktab;
	// register: 18
	register int lcur_spel;
}


// address: 0x80034B70
// line start: 3014
// line end:   3057
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 10
	register char st;
	{
		{
			{
				{
					{
						{
							{
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80034DA4
// line start: 3071
// line end:   3073
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80034DD8
// line start: 3582
// line end:   3582
void _GLOBAL__D_DrawLevelUpFlag() {
}


// address: 0x80034E00
// line start: 3582
// line end:   3582
void _GLOBAL__I_DrawLevelUpFlag() {
}


// address: 0x80034E3C
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80034E3C(struct CPad *this) {
}


// address: 0x80034E64
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80034E64(struct CPad *this) {
}


// address: 0x80034E8C
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_80034E8C(struct CPad *this, unsigned short mask) {
}


// address: 0x80034E94
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_80034E94(struct CPad *this, unsigned short tick) {
}


// address: 0x80034E9C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80034E9C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80034EBC
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_80034EBC(struct Dialog *this, int Type) {
}


// address: 0x80034EC4
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80034EC4(struct Dialog *this, int Type) {
}


// address: 0x80034ECC
// line start: 77
// line end:   77
void ___6Dialog_addr_80034ECC(struct Dialog *this, int __in_chrg) {
}


// address: 0x80034EF4
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80034EF4(struct Dialog *this) {
}


// address: 0x80034F50
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80034F50(struct TextDat *this, int PalNum) {
}


// address: 0x80034F6C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80034F6C(struct TextDat *this, int FrNum) {
}


// address: 0x80034F88
// line start: 126
// line end:   132
void InitCursor__Fv() {
}


// address: 0x80034F90
// line start: 137
// line end:   142
void FreeCursor__Fv() {
}


// address: 0x80034F98
// line start: 148
// line end:   158
void SetICursor__Fi(int i) {
}


// address: 0x80034FF4
// line start: 165
// line end:   173
void SetCursor__Fi(int i) {
}


// address: 0x80035058
// line start: 179
// line end:   180
void NewCursor__Fi(int i) {
}


// address: 0x80035078
// line start: 186
// line end:   201
void InitLevelCursor__Fv() {
}


// address: 0x800350D8
// line start: 211
// line end:   231
void CheckTown__Fv() {
	{
		// register: 18
		register int i;
		{
			// register: 17
			register int mx;
		}
	}
}


// address: 0x80035330
// line start: 237
// line end:   258
void CheckRportal__Fv() {
	{
		// register: 17
		register int i;
		{
			// register: 16
			register int mx;
		}
	}
}


// address: 0x80035558
// line start: 264
// line end:   756
void CheckCursMove__Fv() {
}


// address: 0x80035560
// line start: 40
// line end:   90
void InitDead__Fv() {
	// register: 6
	register int nd;
	// register: 7
	register int i;
	// register: 2
	register int mi;
	// address: 0xFFFFFCD0
	// size: 0x320
	auto int mtypes[200];
}


// address: 0x8003575C
// line start: 98
// line end:   102
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x800357A4
// line start: 284
// line end:   297
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x800357F4
// line start: 304
// line end:   320
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80035850
// line start: 325
// line end:   342
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800358C4
// line start: 358
// line end:   396
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035988
// line start: 401
// line end:   485
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035B70
// line start: 491
// line end:   607
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035CE0
// line start: 1041
// line end:   1121
unsigned char TryIconCurs__Fv() {
}


// address: 0x800360BC
// line start: 2144
// line end:   2191
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800360C4
// line start: 2198
// line end:   2358
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036174
// line start: 2365
// line end:   2432
void LoadLvlGFX__Fv() {
}


// address: 0x80036210
// line start: 2440
// line end:   2452
void LoadAllGFX__Fv() {
}


// address: 0x80036230
// line start: 2473
// line end:   2493
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036328
// line start: 2502
// line end:   2556
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x800364B0
// line start: 2560
// line end:   2585
void ClearOutDungeonMap__Fv() {
	// register: 11
	register unsigned short val;
	{
		// register: 10
		register int x;
		{
			{
				// register: 6
				register int y;
			}
		}
	}
}


// address: 0x8003658C
// line start: 2592
// line end:   2925
void LoadGameLevel__FUci(unsigned char firstflag, int lvldir) {
	// register: 16
	register int i;
	// register: 4
	register int j;
	{
		{
			// register: 6
			register unsigned char visited;
		}
	}
}


// address: 0x80036F10
// line start: 2938
// line end:   2990
void game_logic__Fv() {
}


// address: 0x8003701C
// line start: 3000
// line end:   3030
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x800370C4
// line start: 3038
// line end:   3093
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x800370FC
// line start: 3160
// line end:   3165
void alloc_plr__Fv() {
}


// address: 0x80037104
// line start: 3228
// line end:   3286
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x8003710C
// line start: 3293
// line end:   3295
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x8003712C
// line start: 3300
// line end:   3302
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x8003714C
// line start: 3305
// line end:   3306
void app_fatal(char *pszFile) {
}


// address: 0x8003717C
// line start: 3565
// line end:   3571
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800371A4
// line start: 3575
// line end:   3581
void DoMemCardFromInGame__Fv() {
}


// address: 0x800371CC
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037220
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037240
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037288
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800373E8
// line start: 166
// line end:   175
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x800374A0
// line start: 181
// line end:   190
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800375CC
// line start: 196
// line end:   206
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037700
// line start: 211
// line end:   220
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037830
// line start: 225
// line end:   234
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037960
// line start: 239
// line end:   248
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A90
// line start: 253
// line end:   263
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037BC8
// line start: 268
// line end:   277
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CF8
// line start: 283
// line end:   292
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E28
// line start: 297
// line end:   306
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F58
// line start: 312
// line end:   337
void InitCows__Fv() {
	// register: 20
	register int i;
	// register: 17
	register int x;
	// register: 19
	register int y;
	// register: 18
	register int d;
	// register: 17
	register int x2;
	// register: 3
	register int y2;
}


// address: 0x8003821C
// line start: 344
// line end:   358
void InitTowners__Fv() {
}


// address: 0x800382A8
// line start: 363
// line end:   377
void FreeTownerGFX__Fv() {
	// register: 17
	register int i;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 4
									register void *p__p;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8003834C
// line start: 384
// line end:   395
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8003846C
// line start: 404
// line end:   412
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800384A0
// line start: 420
// line end:   427
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800384D4
// line start: 435
// line end:   447
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800385BC
// line start: 453
// line end:   455
void TownHealer__Fv() {
}


// address: 0x800385E4
// line start: 462
// line end:   465
void TownStory__Fv() {
}


// address: 0x8003860C
// line start: 472
// line end:   475
void TownDrunk__Fv() {
}


// address: 0x80038634
// line start: 482
// line end:   485
void TownBoy__Fv() {
}


// address: 0x8003865C
// line start: 493
// line end:   496
void TownWitch__Fv() {
}


// address: 0x80038684
// line start: 503
// line end:   505
void TownBarMaid__Fv() {
}


// address: 0x800386AC
// line start: 512
// line end:   515
void TownCow__Fv() {
}


// address: 0x800386D4
// line start: 522
// line end:   573
void ProcessTowners__Fv() {
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80038924
// size: 0x98
// line start: 579
// line end:   584
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800389F8
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x80121730
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012B920
	static int snLastCowSFX;
}


// address: 0x80038B14
// line start: 645
// line end:   652
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038B54
// line start: 659
// line end:   1055
void TalkToTowner__Fii(int p, int t) {
	// address: 0xFFFFFFE0
	auto int i;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 17
	// size: 0x98
	register struct ItemStruct *Item;
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80039F7C
// line start: 77
// line end:   88
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x80039F84
// line start: 96
// line end:   103
void stream_stop__Fv() {
}


// address: 0x80039FCC
// line start: 116
// line end:   143
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003A090
// line start: 149
// line end:   165
void stream_update__Fv() {
}


// address: 0x8003A098
// line start: 171
// line end:   178
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003A0B4
// line start: 185
// line end:   216
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003A10C
// line start: 222
// line end:   245
void FreeMonsterSnd__Fv() {
}


// address: 0x8003A114
// line start: 251
// line end:   271
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A218
// line start: 278
// line end:   309
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A328
// line start: 318
// line end:   363
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003A454
// line start: 370
// line end:   392
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A4EC
// line start: 407
// line end:   410
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A52C
// line start: 418
// line end:   428
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A580
// line start: 435
// line end:   450
void sound_stop__Fv() {
	// register: 18
	register int mi;
	// register: 17
	register int mode;
	// register: 16
	register int nr;
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8003A618
// line start: 457
// line end:   467
void sound_update__Fv() {
}


// address: 0x8003A64C
// line start: 475
// line end:   506
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A690
// line start: 512
// line end:   525
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003A738
// line start: 45
// line end:   75
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003A7DC
// line start: 91
// line end:   94
void SetRndSeed__Fl(long s) {
}


// address: 0x8003A7EC
// line start: 99
// line end:   104
long GetRndSeed__Fv() {
}


// address: 0x8003A834
// line start: 110
// line end:   116
long random__Fil(int idx, long v) {
}


// address: 0x8003A8A0
// line start: 368
// line end:   418
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003A8EC
// line start: 429
// line end:   475
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003A93C
// line start: 487
// line end:   497
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003A944
// line start: 565
// line end:   580
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003A9D4
// line start: 1104
// line end:   1104
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003A9DC
// line start: 154
// line end:   165
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003AA70
// line start: 171
// line end:   174
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003AA9C
// line start: 183
// line end:   266
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFEE8
	// size: 0x100
	auto char tempstr[256];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x8003ABA8
// line start: 297
// line end:   306
void interface_msg_pump__Fv() {
}


// address: 0x8003ABB0
// line start: 331
// line end:   562
void ShowProgress__FUi(unsigned int uMsg) {
	// register: 17
	register int nol;
	// register: 18
	register unsigned long (*saveProc)();
	{
		{
		}
	}
}


// address: 0x8003B09C
// line start: 969
// line end:   971
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003B0D4
// line start: 508
// line end:   519
void InitItemGFX__Fv() {
}


// address: 0x8003B100
// line start: 525
// line end:   532
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003B1C8
// line start: 539
// line end:   576
void AddInitItems__Fv() {
	// register: 22
	register int j;
	{
		// register: 20
		register int i;
		{
			// register: 19
			register int ii;
			// register: 18
			register int xx;
			// register: 17
			register int yy;
		}
	}
}


// address: 0x8003B3E0
// line start: 583
// line end:   630
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003B5A4
// line start: 637
// line end:   890
void CalcPlrItemVals__FiUc(int p, unsigned char Loadgfx) {
	// register: 11
	register int mind;
	// register: 10
	register int maxd;
	// register: 15
	register int tac;
	// register: 5
	register int g;
	// address: 0xFFFFFFD0
	auto int i;
	// register: 2
	register int mi;
	// register: 24
	register int bdam;
	// register: 25
	register int btohit;
	// address: 0xFFFFFF60
	auto int bac;
	// address: 0xFFFFFF68
	auto int sadd;
	// register: 19
	register int madd;
	// address: 0xFFFFFF70
	auto int dadd;
	// register: 18
	register int vadd;
	// register: 23
	register int fr;
	// register: 30
	register int lr;
	// register: 22
	register int mr;
	// register: 13
	register int dmod;
	// register: 14
	register int ghit;
	// register: 17
	register int lrad;
	// address: 0xFFFFFF78
	auto int ihp;
	// address: 0xFFFFFF80
	auto int imana;
	// address: 0xFFFFFF88
	auto int spllvladd;
	// address: 0xFFFFFF90
	auto int enac;
	// address: 0xFFFFFF98
	auto int fmin;
	// address: 0xFFFFFFA0
	auto int fmax;
	// address: 0xFFFFFFA8
	auto int lmin;
	// address: 0xFFFFFFB0
	auto int lmax;
	// address: 0xFFFFFFB8
	auto long iflgs;
	// register: 20
	register unsigned long spl;
	// register: 6
	register unsigned long t;
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
	{
		{
			// register: 5
			// size: 0x98
			register struct ItemStruct *itm;
			{
				{
					// register: 3
					register int tmpac;
				}
			}
		}
	}
}


// address: 0x8003C054
// line start: 895
// line end:   925
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003C3D4
// line start: 934
// line end:   942
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003C470
// line start: 946
// line end:   986
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 5
	register unsigned char sf;
	// register: 11
	register unsigned char changeflag;
	// register: 10
	register int sa;
	// register: 9
	register int ma;
	// register: 8
	register int da;
}


// address: 0x8003C5D0
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003C61C
// line start: 1002
// line end:   1017
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct *p;
}


// address: 0x8003C6FC
// line start: 1023
// line end:   1046
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003C990
// line start: 1051
// line end:   1061
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003CA54
// line start: 1067
// line end:   1098
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003CB6C
// line start: 1104
// line end:   1105
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CB98
// line start: 1111
// line end:   1127
void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct *h) {
	// register: 4
	register int i;
	// register: 2
	register int ii;
	// register: 7
	register int s;
	// register: 17
	register unsigned char doneflag;
}


// address: 0x8003CD14
// line start: 1133
// line end:   1134
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003CD1C
// line start: 1140
// line end:   1145
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CD4C
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003D188
// line start: 1269
// line end:   1298
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003D460
// line start: 1306
// line end:   1354
unsigned char GetItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 5
	register int xx;
	// register: 18
	register int yy;
	// register: 4
	register int rs;
	// register: 16
	register unsigned char savail;
}


// address: 0x8003D68C
// line start: 1361
// line end:   1384
void GetSuperItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int xx;
	// register: 18
	register int yy;
	{
		// register: 19
		register int l;
		{
			{
				// register: 21
				register int j;
				{
					{
						// register: 17
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8003D7F4
// line start: 1390
// line end:   1402
void GetSuperItemLoc__FiiRiT2(int x, int y, int *xx, int *yy) {
	{
		// register: 17
		register int l;
		{
			{
				// register: 18
				register int j;
				{
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8003D8BC
// line start: 1408
// line end:   1414
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003D974
// line start: 1421
// line end:   1466
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003DBDC
// line start: 1473
// line end:   1533
void GetStaffPower__FiiiUc(int i, int lvl, int bs, unsigned char onlygood) {
	// address: 0xFFFFFB68
	// size: 0x400
	auto int l[256];
	// register: 5
	register int nl;
	// register: 6
	register int j;
	// register: 17
	register int preidx;
	// address: 0xFFFFFF68
	// size: 0x80
	auto char istr[128];
	// register: 2
	register unsigned char addok;
}


// address: 0x8003DDCC
// line start: 1541
// line end:   1609
void GetStaffSpell__FiiUc(int i, int lvl, unsigned char onlygood) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int l;
	// register: 19
	register int bs;
	// register: 5
	register int maxc;
	// register: 17
	register int minc;
	{
		{
			// register: 8
			register int v;
		}
	}
}


// address: 0x8003E080
// line start: 1650
// line end:   1740
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003E5CC
// line start: 1749
// line end:   1750
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003E604
// line start: 1757
// line end:   1760
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003E678
// line start: 1767
// line end:   2049
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8003FDA4
// line start: 2057
// line end:   2155
void GetItemPower__FiiilUc(int i, int minlvl, int maxlvl, long flgs, int onlygood) {
	// register: 16
	register int pre;
	// register: 23
	register int post;
	// address: 0xFFFFFB48
	// size: 0x400
	auto int l[256];
	// register: 5
	register int nl;
	// register: 7
	register int j;
	// register: 20
	register int preidx;
	// register: 30
	register int sufidx;
	// address: 0xFFFFFF48
	// size: 0x80
	auto char istr[128];
	// register: 21
	register unsigned char goe;
}


// address: 0x8004020C
// line start: 2162
// line end:   2192
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80040308
// line start: 2198
// line end:   2225
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80040410
// line start: 2234
// line end:   2270
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x80040654
// line start: 2278
// line end:   2309
int RndUItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 8
	register int i;
	// register: 6
	register unsigned char okflag;
}


// address: 0x80040894
// line start: 2317
// line end:   2340
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80040A08
// line start: 2348
// line end:   2363
int RndTypeItems__Fii(int itype, int imid) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 9
	register int i;
	// register: 6
	register unsigned char okflag;
}


// address: 0x80040B08
// line start: 2370
// line end:   2404
int CheckUnique__FiiiUc(int i, int lvl, int uper, unsigned char recreate) {
	// register: 4
	register int j;
	// register: 2
	register int idata;
	// address: 0xFFFFFF68
	// size: 0x80
	auto unsigned char uok[128];
	// register: 16
	register int numu;
}


// address: 0x80040CB8
// line start: 2411
// line end:   2433
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80040F60
// line start: 2440
// line end:   2453
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x8004106C
// line start: 2463
// line end:   2467
void ItemRndDur__Fi(int ii) {
}


// address: 0x800410FC
// line start: 2474
// line end:   2512
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80041408
// line start: 2520
// line end:   2563
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x80041650
// line start: 2571
// line end:   2585
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x80041780
// line start: 2595
// line end:   2610
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800418C8
// line start: 2622
// line end:   2632
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x800419A0
// line start: 2636
// line end:   2646
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x80041A60
// line start: 2655
// line end:   2670
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041BA4
// line start: 2682
// line end:   2706
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80041D90
// line start: 2713
// line end:   2748
void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag) {
	// register: 17
	register int i;
	// register: 16
	register int j;
	// register: 3
	register unsigned char failed;
	{
		{
			// register: 21
			register int tries;
		}
	}
}


// address: 0x80041FBC
// line start: 2755
// line end:   2780
void SpawnRock__Fv() {
	// register: 3
	register int i;
	// register: 17
	register int ii;
	// register: 5
	register int ostand;
	// register: 5
	register int xx;
	// register: 2
	register int yy;
	// register: 4
	register unsigned char done;
}


// address: 0x8004217C
// line start: 2788
// line end:   2820
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x80042334
// line start: 2827
// line end:   2831
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80042388
// line start: 2841
// line end:   2856
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x80042450
// line start: 2871
// line end:   2921
void ProcessItems__Fv() {
	// register: 19
	register int i;
	// register: 4
	register int ii;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 2
											register int it;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80042684
// line start: 2928
// line end:   2933
void FreeItemGFX__Fv() {
}


// address: 0x8004268C
// line start: 2952
// line end:   2976
void GetItemStr__Fi(int i) {
	{
		{
			{
				// register: 17
				register int nGold;
			}
		}
	}
}


// address: 0x8004281C
// line start: 2982
// line end:   2992
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8004290C
// line start: 2997
// line end:   3021
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x800429DC
// line start: 3025
// line end:   3038
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80042AA0
// line start: 3043
// line end:   3056
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80042B10
// line start: 3060
// line end:   3078
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 16
	// size: 0x98
	register struct ItemStruct *pi;
	{
		{
			// register: 2
			register int r;
		}
	}
}


// address: 0x80042C10
// line start: 3183
// line end:   3307
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80042D04
// line start: 3313
// line end:   3525
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x800433B8
// line start: 3569
// line end:   3597
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x800433C0
// line start: 3610
// line end:   3648
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x8004364C
// line start: 3655
// line end:   3700
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800439BC
// line start: 3706
// line end:   3746
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043CCC
// line start: 3753
// line end:   3756
void CastScroll__Fii(int pnum, int Spell) {
}


// address: 0x80043CDC
// line start: 3764
// line end:   3954
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
}


// address: 0x800442F4
// line start: 3963
// line end:   3968
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80044388
// line start: 3987
// line end:   4002
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80044404
// line start: 4008
// line end:   4027
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x8004450C
// line start: 4035
// line end:   4060
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct holditem;
}


// address: 0x8004472C
// line start: 4069
// line end:   4088
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x80044970
// line start: 4101
// line end:   4116
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80044AC0
// line start: 4147
// line end:   4151
void SpawnStoreGold__Fv() {
}


// address: 0x80044B44
// line start: 4200
// line end:   4211
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80044CE4
// line start: 4223
// line end:   4231
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80044D48
// line start: 4250
// line end:   4272
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80044ED8
// line start: 4280
// line end:   4301
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045054
// line start: 4309
// line end:   4330
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x800451D0
// line start: 4469
// line end:   4510
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x80045344
// line start: 4664
// line end:   4762
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x8004549C
// line start: 319
// line end:   334
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x80045504
// line start: 380
// line end:   399
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 5
	register int y;
	// register: 4
	register int c;
}


// address: 0x80045578
// line start: 404
// line end:   411
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x800455E4
// line start: 415
// line end:   765
void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum) {
	// register: 9
	register int xoff;
	// register: 10
	register int yoff;
	// register: 20
	register int x;
	// register: 30
	register int y;
	// register: 4
	register int v;
	// register: 22
	register int colour_mask;
	// register: 17
	register int shift_mask;
	// register: 12
	register int shake;
	// address: 0xFFFFFFA8
	auto int light_x;
	// address: 0xFFFFFFB0
	auto int light_y;
	// address: 0xFFFFFFB8
	auto int block_x;
	// register: 9
	register int block_y;
	// register: 23
	register int dist_y;
	// register: 11
	register int max_x;
	// register: 6
	register int mult;
	// register: 7
	register int mult_st;
	// register: 21
	register int radius_block;
	// register: 7
	register int scr_x;
	// register: 8
	register int scr_y;
	// register: 6
	register int temp_x;
	// register: 5
	register int temp_y;
	// register: 19
	register int weirdy;
	// register: 11
	register int cont;
}


// address: 0x80046294
// line start: 771
// line end:   819
void DoUnLight__Fv() {
	// register: 6
	register int x;
	// register: 7
	register int y;
	// register: 11
	register int max_x;
	// register: 16
	register int max_y;
	// register: 14
	register int radius_block;
	// register: 13
	register int nXPos;
	// register: 12
	register int nYPos;
}


// address: 0x800464D8
// line start: 826
// line end:   841
void DoUnVision__Fiii(int nXPos, int nYPos, int nRadius) {
	// register: 4
	register int i;
	// register: 6
	register int j;
	// register: 3
	register int x1;
	// register: 9
	register int y1;
	// register: 8
	register int x2;
	// register: 5
	register int y2;
}


// address: 0x8004659C
// line start: 848
// line end:   952
void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible) {
	// register: 16
	register int nCrawlX;
	// register: 19
	register int nCrawlY;
	// register: 9
	register int nLineLen;
	// register: 21
	register int nBlockerFlag;
	// register: 8
	register int j;
	// register: 20
	register int k;
	// register: 2
	register int v;
	// register: 5
	register int x1adj;
	// register: 7
	register int x2adj;
	// register: 4
	register int y1adj;
	// register: 6
	register int y2adj;
}


// address: 0x80046AAC
// line start: 957
// line end:   958
void FreeLightTable__Fv() {
}


// address: 0x80046AB4
// line start: 964
// line end:   965
void InitLightTable__Fv() {
}


// address: 0x80046ABC
// line start: 970
// line end:   971
void MakeLightTable__Fv() {
}


// address: 0x80046AC4
// line start: 1062
// line end:   1065
void InitLightMax__Fv() {
}


// address: 0x80046AE8
// line start: 1072
// line end:   1083
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80046B2C
// line start: 1089
// line end:   1105
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x80046BC0
// line start: 1110
// line end:   1116
void AddUnLight__Fi(int i) {
}


// address: 0x80046BF0
// line start: 1121
// line end:   1131
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80046C1C
// line start: 1136
// line end:   1147
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80046C54
// line start: 1150
// line end:   1156
void light_fix__Fi(int i) {
}


// address: 0x80046C5C
// line start: 1166
// line end:   1178
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80046C94
// line start: 1183
// line end:   1195
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x80046CD8
// line start: 1198
// line end:   1199
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x80046D08
// line start: 1205
// line end:   1266
void ProcessLightList__Fv() {
	// register: 7
	register int i;
	// register: 16
	register int j;
	// register: 4
	register unsigned char temp;
}


// address: 0x80046E34
// line start: 1271
// line end:   1298
void SavePreLighting__Fv() {
}


// address: 0x80046E3C
// line start: 1303
// line end:   1310
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80046E8C
// line start: 1317
// line end:   1333
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80046F90
// line start: 1356
// line end:   1369
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80047044
// line start: 1374
// line end:   1388
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x800470FC
// line start: 1417
// line end:   1446
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x8004735C
// line start: 110
// line end:   113
void FreeQuestText__Fv() {
}


// address: 0x80047364
// line start: 117
// line end:   121
void InitQuestText__Fv() {
}


// address: 0x80047370
// line start: 129
// line end:   167
void CalcTextSpeed__FPCc(char *Name) {
	// register: 16
	register char *ptr;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto char SpeechName[16];
	// register: 19
	register unsigned long SfxFrames;
	// register: 2
	register unsigned long TextHeight;
	// register: 18
	register int NoLines;
	// register: 17
	register int cw;
}


// address: 0x800474C4
// line start: 176
// line end:   217
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x800475EC
// line start: 222
// line end:   228
void DrawQTextBack__Fv() {
}


// address: 0x8004765C
// line start: 238
// line end:   277
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80047740
// line start: 282
// line end:   394
void DrawQText__Fv() {
	// register: 18
	register char *p;
	// address: 0xFFFFFFC0
	auto char *pnl;
	// register: 21
	register char *SpacePtr;
	// address: 0xFFFFFF38
	// size: 0x80
	auto char tempstr[128];
	// register: 30
	register int ty;
	// register: 19
	register int l;
	// register: 17
	register int i;
	// register: 23
	register unsigned char doneflag;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
	// register: 20
	register int LetterCount;
}


// address: 0x80047A90
// line start: 397
// line end:   397
void _GLOBAL__D_QBack() {
}


// address: 0x80047AB8
// line start: 397
// line end:   397
void _GLOBAL__I_QBack() {
}


// address: 0x80047AE0
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80047AE0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80047B00
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80047B00(struct Dialog *this, int Type) {
}


// address: 0x80047B08
// line start: 77
// line end:   77
void ___6Dialog_addr_80047B08(struct Dialog *this, int __in_chrg) {
}


// address: 0x80047B30
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80047B30(struct Dialog *this) {
}


// address: 0x80047B8C
// line start: 71
// line end:   78
int GetCharWidth__5CFontc_addr_80047B8C(struct CFont *this, char ch) {
}


// address: 0x80047BE4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047BE4(struct TextDat *this, int FrNum) {
}


// address: 0x80047C00
// line start: 33
// line end:   35
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80047C08
// line start: 806
// line end:   808
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80047C10
// line start: 187
// line end:   201
void delta_init__Fv() {
}


// address: 0x80047C70
// line start: 208
// line end:   229
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047D0C
// line start: 236
// line end:   252
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047D90
// line start: 261
// line end:   283
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x80047E20
// line start: 289
// line end:   330
void delta_leave_sync__FUc(unsigned char bLevel) {
	// register: 20
	// size: 0xF1C
	register struct DLevel *Dl;
	{
		// register: 19
		register int i;
		{
			// register: 4
			register int ii;
			// register: 16
			// size: 0x6
			register struct DMonsterStr *pD;
		}
	}
}


// address: 0x8004814C
// line start: 336
// line end:   352
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x800481AC
// line start: 359
// line end:   478
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 15
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x80048370
// line start: 485
// line end:   546
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 9
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 7
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 8
	register int i;
}


// address: 0x800484F8
// line start: 552
// line end:   555
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x8004851C
// line start: 561
// line end:   564
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x80048540
// line start: 571
// line end:   634
void DeltaAddItem__Fi(int ii) {
	// register: 7
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 10
	// size: 0x14
	register struct TCmdPItem *OpD;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 8
	register int i;
}


// address: 0x80048754
// line start: 639
// line end:   647
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x80048784
// line start: 658
// line end:   666
int DeltaImportData__FPc(char *Src) {
}


// address: 0x800487B8
// line start: 678
// line end:   693
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800488B4
// line start: 768
// line end:   772
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x800488DC
// line start: 778
// line end:   792
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x80048928
// line start: 798
// line end:   808
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x80048958
// line start: 814
// line end:   823
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80048990
// line start: 829
// line end:   839
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x800489D0
// line start: 845
// line end:   856
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x80048A18
// line start: 862
// line end:   867
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x80048A44
// line start: 873
// line end:   879
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80048A74
// line start: 884
// line end:   891
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80048AAC
// line start: 896
// line end:   904
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80048B20
// line start: 909
// line end:   955
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048C54
// line start: 961
// line end:   976
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048CD0
// line start: 992
// line end:   1011
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048D28
// line start: 1018
// line end:   1025
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048D90
// line start: 1030
// line end:   1073
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048E98
// line start: 1079
// line end:   1090
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x80048F3C
// line start: 1096
// line end:   1101
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x80048F6C
// line start: 1107
// line end:   1149
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80049080
// line start: 1154
// line end:   1170
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80049088
// line start: 1176
// line end:   1184
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x800490BC
// line start: 1199
// line end:   1210
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80049118
// line start: 1216
// line end:   1219
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80049158
// line start: 1225
// line end:   1234
void check_update_plr__Fi(int pnum) {
}


// address: 0x80049160
// line start: 1245
// line end:   1252
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800491E0
// line start: 1261
// line end:   1275
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049210
// line start: 1280
// line end:   1289
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049240
// line start: 1293
// line end:   1306
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049270
// line start: 1312
// line end:   1325
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800492A0
// line start: 1331
// line end:   1337
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049314
// line start: 1346
// line end:   1352
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004939C
// line start: 1359
// line end:   1392
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x800494DC
// line start: 1402
// line end:   1439
void On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem *p;
	// register: 21
	register int nIndex;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 5
											register int hitem;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800496AC
// line start: 1448
// line end:   1454
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049734
// line start: 1461
// line end:   1495
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049868
// line start: 1504
// line end:   1547
void On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem *p;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 5
											register int hitem;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80049A30
// line start: 1555
// line end:   1568
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049A7C
// line start: 1575
// line end:   1606
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80049B94
// line start: 1615
// line end:   1630
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80049C94
// line start: 1650
// line end:   1660
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049CEC
// line start: 1667
// line end:   1675
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049D78
// line start: 1682
// line end:   1698
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049E60
// line start: 1706
// line end:   1721
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049F38
// line start: 1728
// line end:   1743
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A014
// line start: 1750
// line end:   1761
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004A0F4
// line start: 1768
// line end:   1779
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004A1D4
// line start: 1787
// line end:   1793
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A220
// line start: 1800
// line end:   1812
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 19
	// size: 0x4
	register struct TCmdParam1 *p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8004A354
// line start: 1819
// line end:   1833
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A41C
// line start: 1840
// line end:   1851
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A4DC
// line start: 1859
// line end:   1869
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A5A0
// line start: 1876
// line end:   1887
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A664
// line start: 1894
// line end:   1900
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A6AC
// line start: 1907
// line end:   1911
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A6E4
// line start: 1917
// line end:   1921
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A70C
// line start: 1928
// line end:   1935
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A794
// line start: 1943
// line end:   1947
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A7C4
// line start: 1954
// line end:   1963
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A8A8
// line start: 1971
// line end:   1977
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A914
// line start: 1984
// line end:   1990
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A980
// line start: 1997
// line end:   2017
void On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				// register: 7
				register unsigned char addok;
				{
					// register: 5
					register int i;
					{
						// register: 2
						register int mi;
					}
				}
			}
		}
	}
}


// address: 0x8004AA98
// line start: 2026
// line end:   2042
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB84
// line start: 2056
// line end:   2063
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ABCC
// line start: 2070
// line end:   2117
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AD88
// line start: 2126
// line end:   2132
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AE04
// line start: 2139
// line end:   2145
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AE80
// line start: 2152
// line end:   2158
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AEFC
// line start: 2165
// line end:   2171
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AF78
// line start: 2177
// line end:   2182
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFF0
// line start: 2188
// line end:   2195
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFF8
// line start: 2201
// line end:   2204
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B000
// line start: 2209
// line end:   2215
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B008
// line start: 2220
// line end:   2225
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B060
// line start: 2231
// line end:   2279
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B2D8
// line start: 2287
// line end:   2319
void On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0xA
	register struct TCmdLocParam3 *p;
	{
		{
			{
				{
					{
						{
							// register: 4
							register int i;
							// register: 2
							register int mi;
							// register: 6
							register unsigned char addok;
						}
					}
				}
			}
		}
	}
}


// address: 0x8004B468
// line start: 2325
// line end:   2330
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4B8
// line start: 2336
// line end:   2343
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B500
// line start: 2349
// line end:   2357
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B540
// line start: 2362
// line end:   2370
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B580
// line start: 2376
// line end:   2384
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5C0
// line start: 2390
// line end:   2399
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B600
// line start: 2404
// line end:   2411
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B648
// line start: 2418
// line end:   2430
void On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 16
					register int mi;
				}
			}
		}
	}
}


// address: 0x8004B724
// line start: 2470
// line end:   2572
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012C7AC
	static unsigned char sbLastCmd;
}


// address: 0x8004BB44
// size: 0xF1C
// line start: 2583
// line end:   2593
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004BBD4
// line start: 2600
// line end:   2604
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x8004BC0C
// line start: 165
// line end:   169
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004BC38
// line start: 554
// line end:   559
int InitLevelType__Fi(int l) {
}


// address: 0x8004BC84
// line start: 565
// line end:   603
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004BE14
// line start: 682
// line end:   688
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004BE88
// line start: 703
// line end:   812
unsigned char NetInit__FUcPUc(unsigned char bSinglePlayer, unsigned char *pfExitProgram) {
	// address: 0xFFFFFF50
	// size: 0x80
	auto char szPlayerDescript[128];
	{
		{
			// address: 0xFFFFFFD0
			// size: 0x28
			auto struct _uiheroinfo heroinfo;
			{
				{
				}
			}
		}
	}
}


// address: 0x8004C0B0
// line start: 256
// line end:   270
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C1E8
// line start: 277
// line end:   295
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C334
// line start: 302
// line end:   310
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004C3BC
// line start: 317
// line end:   319
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004C3FC
// line start: 346
// line end:   357
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004C4A0
// line start: 365
// line end:   388
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004C554
// line start: 510
// line end:   551
void InitObjectGFX__Fv() {
	// address: 0xFFFFFF88
	// size: 0x38
	auto unsigned char fileload[56];
	// register: 3
	register int i;
	// register: 5
	register int t;
	{
		{
			{
				{
					// address: 0xFFFFFFC0
					// size: 0x20
					auto char filestr[32];
				}
			}
		}
	}
}


// address: 0x8004C770
// line start: 556
// line end:   560
void FreeObjectGFX__Fv() {
}


// address: 0x8004C77C
// line start: 564
// line end:   575
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004C834
// line start: 583
// line end:   617
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004CAB8
// line start: 624
// line end:   630
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004CB18
// line start: 637
// line end:   639
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004CB40
// line start: 663
// line end:   700
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CC4C
// line start: 708
// line end:   745
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CD58
// line start: 753
// line end:   781
void Obj_Light__Fii(int i, int lr) {
	// register: 23
	register int ox;
	// register: 22
	register int oy;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 19
	register int p;
	// register: 21
	register int tr;
	// register: 20
	register unsigned char turnon;
}


// address: 0x8004CF68
// line start: 787
// line end:   830
void Obj_Circle__Fi(int i) {
	// register: 3
	register int px;
	// register: 2
	register int py;
	// register: 6
	register int ox;
	// register: 7
	register int oy;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8004D28C
// line start: 837
// line end:   842
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004D2F0
// line start: 873
// line end:   935
void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 30
	register int PhysFrame;
	// register: 21
	// size: 0x6C
	register struct TextDat *ObjDat;
	// register: 5
	register int temp;
	// register: 17
	register int bright;
	// register: 2
	register int W;
	// register: 2
	register int H;
}


// address: 0x8004D5CC
// line start: 940
// line end:   948
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004D63C
// line start: 957
// line end:   982
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004D7D0
// line start: 990
// line end:   992
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004D81C
// line start: 999
// line end:   1010
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004D92C
// line start: 1017
// line end:   1058
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004DBFC
// line start: 1067
// line end:   1118
void Obj_Trap__Fi(int i) {
	// register: 16
	register int oti;
	// register: 5
	register unsigned char otrig;
	// register: 20
	register int sx;
	// register: 21
	register int sy;
	// register: 18
	register int dx;
	// register: 17
	register int dy;
	// register: 3
	register int x;
	// register: 5
	register int y;
	// register: 8
	register int ax;
	// register: 9
	register int ay;
}


// address: 0x8004DF4C
// line start: 1127
// line end:   1153
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004E1DC
// line start: 1162
// line end:   1244
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004E47C
// line start: 1252
// line end:   1253
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004E4B4
// line start: 1266
// line end:   1305
void ObjSetMini__Fiii(int x, int y, int v) {
	// register: 16
	register long v2;
	// register: 17
	register long v3;
	// register: 18
	register long v4;
	// register: 22
	register int xx;
	// register: 21
	register int yy;
}


// address: 0x8004E588
// line start: 1312
// line end:   1336
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E590
// line start: 1342
// line end:   1371
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E598
// line start: 1377
// line end:   1398
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004E818
// line start: 1405
// line end:   1412
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004E8BC
// line start: 1419
// line end:   1466
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004EC60
// line start: 1472
// line end:   1520
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F038
// line start: 1526
// line end:   1567
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F3D0
// line start: 1573
// line end:   1614
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F768
// line start: 1620
// line end:   1659
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FA70
// line start: 1663
// line end:   1720
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FD78
// line start: 1726
// line end:   1770
void MonstCheckDoors__Fi(int m) {
	// register: 20
	register int i;
	// register: 16
	register int oi;
	// register: 19
	register int dpx;
	// register: 18
	register int dpy;
	// register: 21
	register int mx;
	// register: 22
	register int my;
}


// address: 0x80050274
// line start: 1776
// line end:   1788
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x800503AC
// line start: 1795
// line end:   1805
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x800504C0
// line start: 1812
// line end:   1827
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050678
// line start: 1836
// line end:   1846
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80050724
// line start: 1854
// line end:   1870
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x800508A8
// line start: 1877
// line end:   1884
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80050A04
// line start: 1891
// line end:   1916
void OperateLever__Fii(int pnum, int i) {
	// register: 6
	register unsigned char mapflag;
	// register: 5
	register int j;
	// register: 2
	register int oi;
	// register: 2
	register int ot;
}


// address: 0x80050BF0
// line start: 1922
// line end:   1980
void OperateBook__Fii(int pnum, int i) {
	// register: 21
	register int v1;
	// register: 19
	register int v2;
	// register: 16
	register int j;
	// register: 3
	register int oi;
	// register: 3
	register int ot;
	// register: 16
	register int itm;
	{
		{
			// register: 6
			register unsigned char found;
			// register: 5
			register unsigned char dowarp;
			{
				{
				}
			}
		}
	}
}


// address: 0x800510E4
// line start: 1986
// line end:   2031
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x8005148C
// line start: 2037
// line end:   2068
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x800516B4
// line start: 2074
// line end:   2115
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x80051A84
// line start: 2121
// line end:   2147
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80051C48
// line start: 2153
// line end:   2176
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80051DE0
// line start: 2182
// line end:   2208
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052034
// line start: 2214
// line end:   2237
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x80052204
// line start: 2245
// line end:   2261
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800523BC
// line start: 2267
// line end:   2274
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052518
// line start: 2281
// line end:   2288
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052674
// line start: 2294
// line end:   2328
void LoadMapObjs__FPUcii(unsigned char *pMap, int startx, int starty) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 19
	register int rw;
	// register: 20
	register int rh;
	// register: 17
	register unsigned char *lm;
	// register: 2
	register long mapoff;
}


// address: 0x8005277C
// line start: 2336
// line end:   2370
void OperatePedistal__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int jstn;
	{
		{
			{
				{
					// register: 16
					register unsigned char *setp;
					{
					}
				}
			}
		}
	}
}


// address: 0x80052A34
// line start: 2379
// line end:   2405
void TryDisarm__Fii(int pnum, int i) {
	// register: 6
	register int j;
	// register: 3
	register int oi;
	// register: 2
	register int oti;
	// register: 16
	register int trapdisper;
	// register: 2
	register unsigned char checkflag;
}


// address: 0x80052BF8
// line start: 2411
// line end:   2414
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80052C68
// line start: 2421
// line end:   2974
void OperateShrine__Fiii(int pnum, int i, int sType) {
	// register: 18
	register int r;
	// register: 4
	register int xx;
	// register: 5
	register int yy;
	// register: 6
	register int sc;
	// register: 16
	register int v1;
	// register: 20
	register int v2;
	// register: 21
	register int v3;
	// register: 17
	register int v4;
	// register: 16
	register unsigned long lv;
	// register: 6
	register unsigned long t;
	// register: 21
	register unsigned char done;
}


// address: 0x80055244
// line start: 2980
// line end:   2991
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800553C0
// line start: 2997
// line end:   3018
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055590
// line start: 3024
// line end:   3032
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055678
// line start: 3038
// line end:   3066
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x800557E8
// line start: 3078
// line end:   3100
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x800558D8
// line start: 3107
// line end:   3113
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x80055980
// line start: 3120
// line end:   3127
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80055A34
// line start: 3134
// line end:   3226
unsigned char OperateFountains__Fii(int pnum, int i) {
	// register: 21
	register int ii;
	// register: 19
	register unsigned char rv;
	{
		{
			{
				{
					// register: 16
					register int rndVal;
					// register: 19
					register int statVal;
					// register: 20
					register int saveRnd;
					// register: 22
					register int status;
				}
			}
		}
	}
}


// address: 0x80055FE0
// line start: 3233
// line end:   3273
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x8005618C
// line start: 3279
// line end:   3289
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x8005627C
// line start: 3295
// line end:   3308
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x8005635C
// line start: 3314
// line end:   3431
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80056794
// line start: 3439
// line end:   3449
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x800568A8
// line start: 3455
// line end:   3465
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x800569BC
// line start: 3471
// line end:   3481
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056AD0
// line start: 3487
// line end:   3573
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80056CC0
// line start: 3581
// line end:   3607
void BreakCrux__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int ot;
	// register: 2
	register int oi;
	// register: 6
	register unsigned char mapflag;
}


// address: 0x80056EB0
// line start: 3615
// line end:   3676
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80057404
// line start: 3682
// line end:   3703
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057564
// line start: 3711
// line end:   3717
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x800575C0
// line start: 3725
// line end:   3749
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x800576D8
// line start: 3755
// line end:   3771
void SyncCrux__Fi(int i) {
	// register: 6
	register int j;
	// register: 3
	register int ot;
	// register: 2
	register int oi;
	// register: 7
	register unsigned char mapflag;
}


// address: 0x80057810
// line start: 3778
// line end:   3781
void SyncLever__Fi(int i) {
}


// address: 0x8005788C
// line start: 3789
// line end:   3801
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x80057998
// line start: 3810
// line end:   3825
void SyncPedistal__Fi(int i) {
	// register: 16
	register unsigned char *setp;
	{
		{
			{
			}
		}
	}
}


// address: 0x80057AF4
// line start: 3833
// line end:   3857
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80057C5C
// line start: 3865
// line end:   3888
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80057D88
// line start: 3896
// line end:   3935
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x80057EC8
// line start: 3943
// line end:   4084
void GetObjectStr__Fi(int i) {
}


// address: 0x800582E4
// line start: 4089
// line end:   4244
void RestoreObjectLight__Fv() {
	// register: 16
	register int i;
	// register: 2
	register int oi;
	// register: 4
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x80058538
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058538(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058570
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058570(struct TextDat *this, int Creature) {
}


// address: 0x800585E8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800585E8(struct TextDat *this) {
}


// address: 0x800585FC
// line start: 25
// line end:   26
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80058604
// line start: 380
// line end:   385
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058630
// line start: 391
// line end:   404
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x800586E4
// line start: 449
// line end:   498
void SetupLocalPlayer__Fv() {
}


// address: 0x80058704
// line start: 269
// line end:   270
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058748
// line start: 274
// line end:   275
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005875C
// line start: 411
// line end:   417
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005877C
// line start: 527
// line end:   546
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058784
// line start: 553
// line end:   564
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x800587A0
// line start: 573
// line end:   584
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800587C4
// line start: 590
// line end:   671
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x80058A00
// line start: 718
// line end:   835
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80058E1C
// line start: 842
// line end:   848
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80058E84
// line start: 854
// line end:   890
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80058FF4
// line start: 897
// line end:   960
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp) {
	// register: 19
	register int omp;
	// register: 4294967295
	register long v;
	// register: 6
	register long e;
	{
		{
			// register: 4
			register long lLevel;
			// register: 3
			register long lMax;
			{
				{
					// register: 17
					register int l;
					{
						{
							{
								// register: 16
								register int i;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80059200
// line start: 966
// line end:   973
void AddPlrMonstExper__Filc(int lvl, long exp, char pmask) {
	// register: 3
	register int totplrs;
	{
		// register: 4
		register int i;
		{
			{
			}
		}
	}
}


// address: 0x80059284
// line start: 982
// line end:   1152
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime) {
	{
		{
			{
				{
					// register: 17
					register int i;
				}
			}
		}
	}
}


// address: 0x80059650
// line start: 1162
// line end:   1168
void InitMultiView__Fv() {
}


// address: 0x80059658
// line start: 1269
// line end:   1293
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFB0
	// size: 0x50
	auto struct bbssbb bodge[10];
	{
		// register: 4
		register int i;
	}
}


// address: 0x800596F0
// line start: 1297
// line end:   1302
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059778
// line start: 1356
// line end:   1365
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005980C
// line start: 1372
// line end:   1385
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059900
// line start: 1391
// line end:   1395
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059914
// line start: 1430
// line end:   1451
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x800599A0
// line start: 1456
// line end:   1475
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059A04
// line start: 1483
// line end:   1541
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800DF02C
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80059A40
// line start: 1549
// line end:   1571
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059A6C
// line start: 1668
// line end:   1700
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x80059BA4
// line start: 1726
// line end:   1741
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80059C3C
// line start: 1747
// line end:   1788
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x80059DD8
// line start: 1821
// line end:   1837
void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 13
	register int pp;
	// register: 4
	register int pn;
	// register: 5
	register int x;
	// register: 10
	register int y;
}


// address: 0x80059EF8
// line start: 1844
// line end:   1877
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A018
// line start: 1884
// line end:   1913
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A1B4
// line start: 1919
// line end:   1956
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct *ptrplr, struct ItemStruct *itm, int xx, int yy) {
	// register: 19
	register int x;
	// register: 20
	register int y;
	{
		// register: 17
		register int l;
		{
			{
				// register: 18
				register int j;
				{
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8005A37C
// line start: 1961
// line end:   2085
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct ear;
	// register: 16
	register int i;
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 20
	register unsigned char diablolevel;
	{
		{
			{
				{
					{
						// register: 2
						register int pdd;
					}
				}
			}
		}
	}
}


// address: 0x8005A680
// line start: 2090
// line end:   2256
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005AAC8
// line start: 2263
// line end:   2285
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005AC0C
// line start: 2291
// line end:   2293
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005AC2C
// line start: 2299
// line end:   2324
void RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 16
	register int mx;
	{
		{
		}
	}
}


// address: 0x8005AF14
// line start: 2330
// line end:   2350
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AFD0
// line start: 2357
// line end:   2411
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B114
// line start: 2416
// line end:   2434
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B1A4
// line start: 2442
// line end:   2458
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005B260
// line start: 2466
// line end:   2467
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B268
// line start: 2495
// line end:   2512
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005B2F0
// line start: 2516
// line end:   2633
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005B65C
// line start: 2640
// line end:   2689
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005B7FC
// line start: 2696
// line end:   2810
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr, int m) {
	// register: 18
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 5
	register int maxd;
	// register: 16
	register int ddp;
	// register: 18
	register long dam;
	// register: 20
	register long skdam;
	// register: 4
	register int phanditype;
	// register: 3
	register int tmac;
	// register: 21
	register unsigned char rv;
	// address: 0xFFFFFFD8
	auto unsigned char ret;
}


// address: 0x8005BE2C
// line start: 2817
// line end:   2880
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct *ptrplr, char p) {
	// register: 20
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 5
	register int maxd;
	// register: 16
	register int ddp;
	// register: 17
	register long dam;
	// register: 4
	register long skdam;
	// register: 4
	register int tac;
	// register: 7
	register int blk;
	// register: 3
	register int blkper;
	// register: 21
	register unsigned char rv;
}


// address: 0x8005C1DC
// line start: 2887
// line end:   2894
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C26C
// line start: 2902
// line end:   2973
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int dx;
	// register: 18
	register int dy;
	// register: 5
	register int m;
	// register: 5
	register char p;
	// register: 19
	register unsigned char didhit;
	// register: 4
	register int frame;
}


// address: 0x8005C5F8
// line start: 2981
// line end:   3002
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005C6F8
// line start: 3010
// line end:   3035
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C7B8
// line start: 3041
// line end:   3053
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C858
// line start: 3057
// line end:   3221
void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr) {
	// register: 16
	// size: 0x84
	register struct CPlayer *test;
	// register: 30
	register int OtPos;
	// register: 23
	register int ScrX;
	// register: 18
	register int ScrY;
	// register: 20
	// size: 0x6C
	register struct TextDat *missdat;
	// register: 16
	// size: 0x6C
	register struct TextDat *objdat;
	// register: 21
	register int otad;
	// address: 0xFFFFFF88
	// size: 0x28
	auto struct POLY_FT4 *FT4a;
	// address: 0xFFFFFF8C
	// size: 0x28
	auto struct POLY_FT4 *FT4b;
	// address: 0xFFFFFF90
	// size: 0x28
	auto struct POLY_FT4 *FT4c;
	// register: 19
	register int frame;
	// register: 2
	register unsigned int rnd;
	// register: 18
	register unsigned int rot;
}


// address: 0x8005D81C
// line start: 3228
// line end:   3286
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DB5C
// line start: 3292
// line end:   3317
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8005DC58
// line start: 3322
// line end:   3338
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005DCD4
// line start: 3345
// line end:   3370
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DE14
// line start: 3377
// line end:   3378
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DE1C
// line start: 3385
// line end:   3692
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E25C
// line start: 3704
// line end:   3712
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E2C4
// line start: 3719
// line end:   3758
void ValidatePlayer__Fv() {
	// register: 5
	register int i;
	// register: 8
	register int gt;
	// register: 2
	register int pc;
	// register: 10
	register unsigned long msk;
	// register: 14
	register unsigned long b;
}


// address: 0x8005E7AC
// line start: 3805
// line end:   3822
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E848
// line start: 3831
// line end:   3952
void ProcessPlayers__Fv() {
	// register: 16
	register int raflag;
	// register: 18
	register int pnum;
	// register: 20
	register int tplayer;
	{
		{
			// register: 17
			// size: 0x23A8
			register struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x8005EB7C
// line start: 3958
// line end:   3961
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EBA4
// line start: 3969
// line end:   3994
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
	// register: 17
	// size: 0xC
	register struct map_info *dm;
}


// address: 0x8005ED4C
// line start: 4001
// line end:   4053
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005ED54
// line start: 4059
// line end:   4152
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 7
	register unsigned char addflag;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
}


// address: 0x8005F15C
// line start: 4219
// line end:   4243
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x8005F284
// line start: 4247
// line end:   4252
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F2B4
// line start: 4269
// line end:   4303
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005F450
// line start: 4310
// line end:   4322
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F56C
// line start: 4330
// line end:   4347
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F658
// line start: 4355
// line end:   4365
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F73C
// line start: 4373
// line end:   4387
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F818
// line start: 4395
// line end:   4400
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005F85C
// line start: 4407
// line end:   4416
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005F938
// line start: 4423
// line end:   4432
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005F9A8
// line start: 4439
// line end:   4448
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FA84
// line start: 4455
// line end:   4464
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FAF0
// line start: 4471
// line end:   4474
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FAF8
// line start: 4481
// line end:   4548
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FE28
// line start: 4551
// line end:   4551
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FE50
// line start: 4552
// line end:   4552
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x8005FE94
// line start: 4553
// line end:   4553
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005FEC8
// line start: 4554
// line end:   4554
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FEFC
// line start: 4555
// line end:   4555
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FF30
// line start: 4556
// line end:   4556
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x8005FF64
// line start: 4557
// line end:   4557
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FF98
// line start: 4558
// line end:   4558
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x8005FFD0
// line start: 4559
// line end:   4559
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060004
// line start: 4560
// line end:   4560
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006002C
// line start: 4561
// line end:   4561
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060054
// line start: 4562
// line end:   4562
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006007C
// line start: 4563
// line end:   4563
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x800600C4
// line start: 4564
// line end:   4564
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800600EC
// line start: 4565
// line end:   4565
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060114
// line start: 4566
// line end:   4566
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060148
// line start: 4567
// line end:   4567
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060170
// line start: 4568
// line end:   4568
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x800601B4
// line start: 4569
// line end:   4569
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x800601E8
// line start: 4570
// line end:   4570
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006021C
// line start: 4572
// line end:   4572
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80060268
// line start: 4573
// line end:   4573
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x800602B4
// line start: 4574
// line end:   4574
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060300
// line start: 4575
// line end:   4575
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80060354
// line start: 4576
// line end:   4576
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x800603A0
// line start: 4577
// line end:   4577
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x800603EC
// line start: 4578
// line end:   4578
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x8006043C
// line start: 4579
// line end:   4579
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060488
// line start: 4580
// line end:   4580
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x800604D4
// line start: 4581
// line end:   4581
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060520
// line start: 4582
// line end:   4582
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x8006056C
// line start: 4583
// line end:   4583
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x800605B8
// line start: 4584
// line end:   4584
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060604
// line start: 4585
// line end:   4585
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060654
// line start: 4586
// line end:   4586
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x800606A0
// line start: 4588
// line end:   4588
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x800606F0
// line start: 4590
// line end:   4590
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x8006073C
// line start: 4591
// line end:   4591
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060788
// line start: 4592
// line end:   4592
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x800607D4
// line start: 4593
// line end:   4593
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060820
// line start: 4594
// line end:   4594
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x8006086C
// line start: 4595
// line end:   4595
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x800608B8
// line start: 4596
// line end:   4596
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80060904
// line start: 4597
// line end:   4597
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80060950
// line start: 4598
// line end:   4598
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x8006099C
// line start: 4599
// line end:   4599
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x800609E8
// line start: 4600
// line end:   4600
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80060A34
// line start: 4608
// line end:   4609
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x80060A68
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80060A68(struct POLY_FT4 **Prim) {
}


// address: 0x80060AE4
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80060B34
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80060B40
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80060B4C
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80060B58
// line start: 160
// line end:   220
void TSK_Lava2Water__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFFB0
	// size: 0x20
	auto unsigned short LAVAPAL[16];
	// address: 0xFFFFFFD0
	// size: 0x20
	auto unsigned short WATERPAL[16];
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT ClutR;
	// register: 16
	register int clut;
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 3
	// size: 0x8
	register struct PAL *Pal;
	// register: 2
	register unsigned short cx;
	// register: 3
	register unsigned short cy;
	// register: 16
	register bool ch;
	{
		{
			{
				// register: 4
				register int i;
				{
					{
						// register: 10
						register int i;
						{
							// register: 11
							register unsigned short col1;
							// register: 3
							register unsigned short col2;
							// register: 14
							register unsigned char sb;
							// register: 13
							register unsigned char sg;
							// register: 8
							register unsigned char dr;
							// register: 7
							register unsigned char dg;
							// register: 5
							register unsigned char db;
						}
					}
				}
			}
		}
	}
}


// address: 0x80060DA8
// line start: 226
// line end:   291
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x80061264
// line start: 295
// line end:   322
unsigned char ForceQuests__Fv() {
	{
		// register: 6
		register int i;
		{
			// register: 16
			register int ql;
			// register: 18
			register int qx;
			// register: 17
			register int qy;
			{
				// register: 4
				register int j;
			}
		}
	}
}


// address: 0x80061408
// line start: 327
// line end:   333
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x8006149C
// line start: 339
// line end:   437
void CheckQuestKill__FiUc(int m, unsigned char sendmsg) {
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 4
											register int i;
											// register: 7
											register int j;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80061A7C
// line start: 471
// line end:   496
void SetReturnLvlPos__Fv() {
}


// address: 0x80061B8C
// line start: 504
// line end:   509
void GetReturnLvlPos__Fv() {
}


// address: 0x80061BE0
// line start: 516
// line end:   538
void ResyncMPQuests__Fv() {
}


// address: 0x80061D1C
// line start: 548
// line end:   637
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x8006227C
// line start: 653
// line end:   694
void PrintQLString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
	// register: 10
	register unsigned char r;
	// register: 9
	register unsigned char g;
	// register: 8
	register unsigned char b;
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x800624A8
// line start: 703
// line end:   733
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062670
// line start: 743
// line end:   764
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062708
// line start: 772
// line end:   793
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062820
// line start: 800
// line end:   818
void QuestlogUp__Fv() {
}


// address: 0x80062870
// line start: 826
// line end:   846
void QuestlogDown__Fv() {
}


// address: 0x800628D8
// line start: 855
// line end:   867
void RemoveQLog__Fv() {
}


// address: 0x80062950
// line start: 872
// line end:   893
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80062A14
// line start: 901
// line end:   903
void QuestlogESC__Fv() {
}


// address: 0x80062A3C
// line start: 910
// line end:   930
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80062ABC
// line start: 977
// line end:   977
void _GLOBAL__D_questlog() {
}


// address: 0x80062AE4
// line start: 977
// line end:   977
void _GLOBAL__I_questlog() {
}


// address: 0x80062B0C
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x80062B18
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80062B18(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80062B38
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_80062B38(struct Dialog *this, int Type) {
}


// address: 0x80062B40
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80062B40(struct Dialog *this, int Type) {
}


// address: 0x80062B48
// line start: 77
// line end:   77
void ___6Dialog_addr_80062B48(struct Dialog *this, int __in_chrg) {
}


// address: 0x80062B70
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80062B70(struct Dialog *this) {
}


// address: 0x80062BCC
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80062BCC(struct TextDat *this, int PalNum) {
}


// address: 0x80062BE8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80062BE8(struct TextDat *this, int FrNum) {
}


// address: 0x80062C04
// line start: 85
// line end:   304
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x80062DCC
// line start: 315
// line end:   373
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x80062EC4
// line start: 158
// line end:   159
void FreeStoreMem__Fv() {
}


// address: 0x80062ECC
// line start: 167
// line end:   170
void DrawSTextBack__Fv() {
}


// address: 0x80062F3C
// line start: 175
// line end:   250
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	// register: 21
	register int xx;
	// register: 19
	register int yy;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto char valstr[32];
	// register: 30
	register int SpinnerY;
	// register: 20
	register unsigned char R;
	// register: 18
	register unsigned char G;
	// register: 17
	register unsigned char B;
	// address: 0x8012BB20
	static unsigned char DaveFix;
}


// address: 0x80063314
// line start: 257
// line end:   264
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800633A8
// line start: 271
// line end:   284
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063440
// line start: 290
// line end:   294
void AddSLine__Fi(int y) {
}


// address: 0x80063490
// line start: 300
// line end:   301
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800634B8
// line start: 310
// line end:   319
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x8006356C
// line start: 324
// line end:   416
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x800639F4
// line start: 424
// line end:   482
void StoreAutoPlace__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int w;
	// register: 19
	register int h;
	// register: 3
	register int idx;
	// register: 4
	register unsigned char done;
}


// address: 0x80064014
// line start: 489
// line end:   503
void S_StartSmith__Fv() {
}


// address: 0x8006419C
// line start: 509
// line end:   536
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064354
// line start: 542
// line end:   560
void S_StartSBuy__Fv() {
}


// address: 0x80064484
// line start: 566
// line end:   607
void S_ScrollSPBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 22
	register int ls;
	// register: 16
	register char iclr;
	// register: 3
	register int boughtitems;
	{
		{
			{
				{
					// register: 16
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x800646A4
// line start: 613
// line end:   643
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x800647F4
// line start: 649
// line end:   660
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x800648D8
// line start: 666
// line end:   718
void S_ScrollSSell__Fi(int idx) {
	// register: 19
	register int l;
	// register: 23
	register int ls;
	// register: 20
	register int v;
	// register: 18
	register char iclr;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x80064B00
// line start: 724
// line end:   770
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80064F30
// line start: 778
// line end:   786
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80064FD4
// line start: 791
// line end:   812
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800651B4
// line start: 817
// line end:   875
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065684
// line start: 884
// line end:   896
void S_StartWitch__Fv() {
}


// address: 0x800657C4
// line start: 902
// line end:   939
void S_ScrollWBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 21
	register int ls;
	// register: 18
	register char iclr;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006599C
// line start: 945
// line end:   965
void S_StartWBuy__Fv() {
}


// address: 0x80065AC8
// line start: 971
// line end:   991
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80065BEC
// line start: 997
// line end:   1057
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80066244
// line start: 1066
// line end:   1072
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x800662CC
// line start: 1078
// line end:   1087
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006644C
// line start: 1093
// line end:   1134
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006686C
// line start: 1143
// line end:   1149
void S_StartNoMoney__Fv() {
}


// address: 0x800668D4
// line start: 1155
// line end:   1160
void S_StartNoRoom__Fv() {
}


// address: 0x80066934
// line start: 1166
// line end:   1226
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80066C84
// line start: 1232
// line end:   1250
void S_StartBoy__Fv() {
}


// address: 0x80066E14
// line start: 1257
// line end:   1286
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80066F9C
// line start: 1294
// line end:   1314
void S_StartHealer__Fv() {
}


// address: 0x80067170
// line start: 1320
// line end:   1342
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800672DC
// line start: 1348
// line end:   1365
void S_StartHBuy__Fv() {
}


// address: 0x800673FC
// line start: 1371
// line end:   1380
void S_StartStory__Fv() {
}


// address: 0x800674EC
// line start: 1386
// line end:   1390
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067520
// line start: 1398
// line end:   1403
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800675F4
// line start: 1409
// line end:   1480
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068054
// line start: 1489
// line end:   1513
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80068228
// line start: 1519
// line end:   1553
void S_StartTalk__Fv() {
	// register: 18
	register int i;
	// register: 5
	register int tq;
	// register: 17
	register int sn;
	// register: 22
	register int la;
	// register: 20
	register int gl;
}


// address: 0x80068458
// line start: 1560
// line end:   1570
void S_StartTavern__Fv() {
}


// address: 0x80068550
// line start: 1576
// line end:   1585
void S_StartBarMaid__Fv() {
}


// address: 0x80068624
// line start: 1591
// line end:   1600
void S_StartDrunk__Fv() {
}


// address: 0x800686F8
// line start: 1606
// line end:   1680
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800689E8
// line start: 1687
// line end:   1691
void DrawSText__Fv() {
}


// address: 0x80068A28
// line start: 1696
// line end:   1710
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068AF0
// line start: 1714
// line end:   1767
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80068C9C
// line start: 1775
// line end:   1840
void STextESC__Fv() {
}


// address: 0x80068DF8
// line start: 1847
// line end:   1882
void STextUp__Fv() {
}


// address: 0x80068F90
// line start: 1892
// line end:   1925
void STextDown__Fv() {
}


// address: 0x80069140
// line start: 1937
// line end:   1959
void S_SmithEnter__Fv() {
}


// address: 0x80069214
// line start: 1966
// line end:   1977
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069290
// line start: 1985
// line end:   1995
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006930C
// line start: 2003
// line end:   2094
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069758
// line start: 2103
// line end:   2127
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006994C
// line start: 2133
// line end:   2167
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80069B70
// line start: 2175
// line end:   2201
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069CF8
// line start: 2208
// line end:   2247
void S_SPBuyEnter__Fv() {
	// register: 5
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
	{
		// register: 3
		register int xx;
	}
}


// address: 0x80069F28
// line start: 2254
// line end:   2284
unsigned char StoreGoldFit__Fi(int idx) {
	// register: 18
	register int sz;
	// register: 16
	register int numsqrs;
	// register: 4
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006A1E0
// line start: 2293
// line end:   2317
void PlaceStoreGold__Fl(long v) {
	// register: 16
	register int i;
	// register: 18
	register int ii;
	// register: 19
	register int xx;
	// register: 17
	register int yy;
	// register: 5
	register unsigned char done;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8006A444
// line start: 2323
// line end:   2379
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006A738
// line start: 2386
// line end:   2403
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006A83C
// line start: 2410
// line end:   2428
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006AAAC
// line start: 2434
// line end:   2453
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AC08
// line start: 2460
// line end:   2477
void S_WitchEnter__Fv() {
}


// address: 0x8006ACB8
// line start: 2484
// line end:   2517
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006AEB8
// line start: 2522
// line end:   2553
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B0A4
// line start: 2561
// line end:   2578
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B1A8
// line start: 2585
// line end:   2600
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B320
// line start: 2606
// line end:   2625
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B47C
// line start: 2632
// line end:   2660
void S_BoyEnter__Fv() {
}


// address: 0x8006B5B4
// line start: 2667
// line end:   2678
void BoyBuyItem__Fv() {
}


// address: 0x8006B638
// line start: 2684
// line end:   2731
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B8DC
// line start: 2736
// line end:   2770
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BAB4
// line start: 2776
// line end:   2798
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006BE00
// line start: 2805
// line end:   2840
void S_ConfirmEnter__Fv() {
}


// address: 0x8006BF1C
// line start: 2845
// line end:   2863
void S_HealerEnter__Fv() {
}


// address: 0x8006BFB4
// line start: 2870
// line end:   2901
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C1C0
// line start: 2909
// line end:   2922
void S_StoryEnter__Fv() {
}


// address: 0x8006C258
// line start: 2929
// line end:   2948
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C3D4
// line start: 2955
// line end:   2997
void S_TalkEnter__Fv() {
	// register: 16
	register int i;
	// register: 5
	register int tq;
	// register: 18
	register int sn;
	// register: 21
	register int la;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8006C5CC
// line start: 3006
// line end:   3017
void S_TavernEnter__Fv() {
}


// address: 0x8006C63C
// line start: 3024
// line end:   3036
void S_BarmaidEnter__Fv() {
}


// address: 0x8006C6AC
// line start: 3043
// line end:   3054
void S_DrunkEnter__Fv() {
}


// address: 0x8006C71C
// line start: 3061
// line end:   3123
void STextEnter__Fv() {
}


// address: 0x8006C91C
// line start: 3128
// line end:   3218
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CA50
// line start: 3223
// line end:   3225
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CA64
// line start: 3304
// line end:   3304
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CA8C
// line start: 3304
// line end:   3304
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006CAB4
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8006CAB4(struct CPad *this) {
}


// address: 0x8006CADC
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8006CADC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006CAFC
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8006CAFC(struct Dialog *this, int Type) {
}


// address: 0x8006CB04
// line start: 77
// line end:   77
void ___6Dialog_addr_8006CB04(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006CB2C
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8006CB2C(struct Dialog *this) {
}


// address: 0x8006CB88
// line start: 129
// line end:   202
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006CCFC
// line start: 212
// line end:   265
void T_FillSector__FPUcT0iiiib(unsigned char *P3Tiles, unsigned char *pSector, int xi, int yi, int w, int h, bool AddSec) {
	// register: 9
	register int i;
	// register: 14
	register int j;
	// register: 3
	register int xx;
	// register: 5
	register int yy;
	// register: 7
	register long v1;
	// register: 4
	register long v2;
	// register: 3
	register long v3;
	// register: 8
	register long v4;
	// register: 25
	register long ii;
	{
		{
			// register: 12
			register unsigned short *Map;
			{
				{
					{
						{
							// register: 2
							register long Dave;
						}
					}
				}
			}
		}
	}
}


// address: 0x8006CEF4
// line start: 272
// line end:   319
void T_FillTile__FPUciii(unsigned char *P3Tiles, int xx, int yy, int t) {
	// register: 4
	register long v1;
	// register: 9
	register long v2;
	// register: 9
	register long v3;
	// register: 3
	register long v4;
}


// address: 0x8006CFE4
// line start: 326
// line end:   402
void T_Pass3__Fv() {
	// register: 19
	register unsigned char *pSector;
	// register: 16
	register int xx;
	// register: 10
	register int yy;
	{
		// register: 5
		register int y;
		{
			{
				// register: 4
				register int x;
				{
					{
						{
							{
								{
									// register: 4
									register void *p__p;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8006D3A4
// line start: 411
// line end:   464
void CreateTown__Fi(int entry) {
	{
		// register: 6
		register int y;
		{
			{
				// register: 4
				register int x;
			}
		}
	}
}


// address: 0x8006D50C
// line start: 526
// line end:   558
unsigned char *GRL_LoadFileInMemSig__FPCcPUl(char *Name, unsigned long *Len) {
	// register: 18
	// size: 0x14
	register struct FileIO *MyIo;
	// address: 0xFFFFFFD8
	// size: 0x14
	auto char SmallName[20];
	// register: 16
	register unsigned char *Dest;
	// register: 16
	register int FileLen;
}


// address: 0x8006D5F0
// line start: 570
// line end:   597
void GRL_StripDir__FPcPCc(char *Dest, char *Src) {
	// register: 17
	register char *BSlash;
	// register: 3
	register char *FSlash;
	{
		{
			// register: 5
			register char *Last;
		}
	}
}


// address: 0x8006D688
// line start: 76
// line end:   117
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006D9A0
// line start: 122
// line end:   150
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006DC50
// line start: 157
// line end:   206
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x8006E0B0
// line start: 213
// line end:   260
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006E52C
// line start: 267
// line end:   326
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006EA38
// line start: 332
// line end:   342
void Freeupstairs__Fv() {
	// register: 8
	register int j;
	// register: 9
	register int tx;
	// register: 10
	register int ty;
	// register: 4
	register int xx;
	// register: 5
	register int yy;
}


// address: 0x8006EAF8
// line start: 349
// line end:   360
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006EBEC
// line start: 367
// line end:   378
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006ECE0
// line start: 385
// line end:   396
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006EDD4
// line start: 414
// line end:   466
void CheckTrigForce__Fv() {
	// register: 21
	register int ocursmx;
	// register: 20
	register int ocursmy;
	{
		{
			{
				// register: 19
				register int i;
				{
					{
						// register: 19
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8006F0F0
// line start: 476
// line end:   497
void FadeGameOut__Fv() {
}


// address: 0x8006F18C
// line start: 502
// line end:   509
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x8006F1F0
// line start: 513
// line end:   655
void CheckTriggers__Fi(int pnum) {
	// register: 17
	register int x;
	// register: 16
	register int y;
	{
		// register: 23
		register int i;
		{
			{
				{
					{
						{
							// register: 4
							register unsigned char abortflag;
							// register: 17
							register int dx;
							// register: 16
							register int dy;
							// register: 19
							register char m;
						}
					}
				}
			}
		}
	}
}


// address: 0x8006F700
// line start: 45
// line end:   94
int GetManaAmount__Fii(int id, int sn) {
	// register: 3
	register int i;
	// register: 8
	register int sl;
	// register: 6
	register int ma;
	// register: 7
	register int adj;
}


// address: 0x8006F9C8
// line start: 101
// line end:   138
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x8006FB0C
// line start: 144
// line end:   165
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x8006FBAC
// line start: 172
// line end:   204
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x8006FE58
// line start: 209
// line end:   244
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x8007010C
// line start: 249
// line end:   272
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80070370
// line start: 106
// line end:   107
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070378
// line start: 113
// line end:   121
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x800703E0
// line start: 128
// line end:   130
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80070400
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070470
// line start: 167
// line end:   195
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x8007050C
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070568
// line start: 227
// line end:   233
void music_stop__Fv() {
}


// address: 0x800705AC
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x800705EC
// line start: 261
// line end:   275
void music_start__Fi(int nTrack) {
	{
		{
			// register: 6
			register int MusicVolume;
		}
	}
}


// address: 0x80070678
// line start: 284
// line end:   290
void music_hold__Fv() {
}


// address: 0x800706D8
// line start: 299
// line end:   305
void music_release__Fv() {
}


// address: 0x80070728
// line start: 97
// line end:   160
void flyabout__7GamePad(struct GamePad *this) {
	// register: 16
	register int cp;
	// register: 20
	register int owx;
	// register: 21
	register int owy;
	// register: 18
	register int wx;
	// register: 19
	register int wy;
	// register: 23
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x80070BE4
// line start: 171
// line end:   175
void CloseInvChr__Fv() {
}


// address: 0x80070C2C
// line start: 184
// line end:   195
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80070CD8
// line start: 204
// line end:   235
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80070D48
// line start: 244
// line end:   274
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80070DB8
// size: 0x9C
// line start: 287
// line end:   314
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80070EE8
// line start: 323
// line end:   325
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80070F28
// line start: 334
// line end:   337
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80070F6C
// line start: 346
// line end:   349
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80070FB0
// line start: 390
// line end:   448
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80071210
// line start: 458
// line end:   511
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x800713C0
// line start: 519
// line end:   538
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x8007141C
// line start: 546
// line end:   549
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80071458
// line start: 558
// line end:   578
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x800714F8
// line start: 586
// line end:   709
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80071904
// line start: 719
// line end:   753
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80071A48
// line start: 761
// line end:   807
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071B60
// line start: 818
// line end:   827
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80071BA4
// line start: 835
// line end:   931
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 20
	register int x;
	// register: 21
	register int y;
	// register: 16
	register int lnd;
	// register: 17
	register int rnd;
	// register: 22
	register int newdir;
	// register: 17
	register int fx;
	// register: 16
	register int fy;
}


// address: 0x80071EA8
// line start: 941
// line end:   1003
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x800721B4
// line start: 1011
// line end:   1075
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 17
	register int y;
	{
		{
			// register: 16
			// size: 0x98
			register struct ItemStruct *pi;
		}
	}
}


// address: 0x80072554
// line start: 1085
// line end:   1107
void show_combos__7GamePad(struct GamePad *this) {
	// register: 22
	register int x;
	// register: 21
	register int y;
	{
		// register: 19
		register int i;
	}
}


// address: 0x80072714
// line start: 1175
// line end:   1410
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
	register int cp;
	{
		{
			{
				{
					// register: 6
					register unsigned long msk;
					{
						{
							{
								{
									{
										{
											{
												{
													{
														{
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80072D9C
// line start: 1415
// line end:   1444
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEB0
	// size: 0x9C
	auto struct GamePad GPad1;
	// address: 0xFFFFFF50
	// size: 0x9C
	auto struct GamePad GPad2;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80072E6C
// line start: 1450
// line end:   1506
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 4
	// size: 0x9C
	register struct GamePad *GPad1;
	// register: 8
	// size: 0x9C
	register struct GamePad *GPad2;
}


// address: 0x80072F50
// line start: 1512
// line end:   1514
void Init_GamePad__Fv() {
}


// address: 0x80072F80
// line start: 1519
// line end:   1533
void InitGamePadVars__Fv() {
}


// address: 0x80073010
// line start: 1537
// line end:   1546
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x80073080
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80073080(struct CBlocks *this) {
}


// address: 0x80073094
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80073094(struct CPad *this) {
}


// address: 0x800730BC
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_800730BC(struct CPad *this) {
}


// address: 0x800730E4
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_800730E4(struct CPad *this) {
}


// address: 0x8007310C
// line start: 66
// line end:   69
void DoGameTestStuff__Fv() {
}


// address: 0x80073138
// line start: 73
// line end:   76
void DoInitGameStuff__Fv() {
}


// address: 0x8007316C
// line start: 63
// line end:   64
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x8007318C
// line start: 74
// line end:   76
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x800731AC
// line start: 94
// line end:   95
void GRL_InitGwin__Fv() {
}


// address: 0x800731B8
// line start: 106
// line end:   110
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x800731C8
// line start: 121
// line end:   123
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x800731F0
// line start: 133
// line end:   150
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8007329C
// line start: 160
// line end:   167
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x800732E4
// size: 0x4
// line start: 83
// line end:   84
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x800732F0
// line start: 91
// line end:   136
void LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char FileNameBuffer[40];
			// register: 17
			// size: 0x14
			register struct FileIO *FIO;
			{
				// register: 4
				register int f;
			}
		}
	}
}


// address: 0x80073470
// line start: 146
// line end:   166
char *GetStr__Fi(int StrId) {
}


// address: 0x800734D8
// line start: 172
// line end:   173
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x800734F8
// line start: 184
// line end:   219
void LANG_SetLang__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char FileNameBuffer[40];
			// register: 16
			// size: 0x14
			register struct FileIO *FIO;
			{
				// register: 4
				register int f;
			}
		}
	}
}


// address: 0x80073670
// line start: 231
// line end:   240
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800736C8
// line start: 249
// line end:   251
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800736D4
// line start: 261
// line end:   279
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x800737F4
// line start: 287
// line end:   313
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80073874
// line start: 97
// line end:   176
void TempPrintMissile__FiiiiiiiiccUcUcUcc(int ScrX, int ScrY, int OtPos, int spell, int aframe, int direction, int anim, int sfx, int xflip, int yflip, int red, int grn, int blu, int semi) {
	// address: 0xFFFFFFA8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// address: 0xFFFFFFAC
	// size: 0x28
	auto struct POLY_FT4 *FT5;
	// register: 17
	// size: 0x6C
	register struct TextDat *missdat;
	// register: 16
	register int frame;
	// register: 5
	register int tv1;
	{
		{
			{
				{
					// register: 16
					register int yness;
					// register: 16
					register int shape;
					// register: 19
					register int redness;
					// register: 18
					register int bluness;
					{
						// register: 21
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x80073DB8
// line start: 179
// line end:   203
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80073F38
// line start: 207
// line end:   225
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80074098
// line start: 229
// line end:   244
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074130
// line start: 251
// line end:   266
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800741E0
// line start: 273
// line end:   274
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074244
// line start: 278
// line end:   281
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007435C
// line start: 285
// line end:   287
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x800743F4
// line start: 291
// line end:   293
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x8007448C
// line start: 297
// line end:   298
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800744F4
// line start: 302
// line end:   313
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074594
// line start: 317
// line end:   332
void FuncFARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 11
			register char xflip;
			// register: 10
			register char yflip;
			// register: 8
			register int frame;
		}
	}
}


// address: 0x80074674
// line start: 337
// line end:   352
void FuncLARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 11
			register char xflip;
			// register: 10
			register char yflip;
			// register: 8
			register int frame;
		}
	}
}


// address: 0x8007474C
// line start: 357
// line end:   369
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x800747DC
// line start: 373
// line end:   387
void FuncBONESPIRIT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 22
	register char xflip;
	// register: 23
	register char yflip;
	// register: 16
	register int frame;
	// register: 21
	register int sfx;
}


// address: 0x800748F8
// line start: 391
// line end:   403
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074994
// line start: 407
// line end:   408
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800749FC
// line start: 412
// line end:   413
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074A64
// line start: 417
// line end:   426
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80074B98
// line start: 430
// line end:   439
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80074CDC
// line start: 443
// line end:   444
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074D44
// line start: 448
// line end:   449
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074D9C
// line start: 453
// line end:   463
void FuncELEMENT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 9
			register char xflip;
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074E68
// line start: 468
// line end:   469
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074ECC
// line start: 473
// line end:   475
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074ED4
// line start: 478
// line end:   553
void FuncFLASH__FP13MissileStructiii(struct MissileStruct *Ms, int x, int y, int OtPos) {
	// register: 16
	register int size;
	{
		{
			// register: 16
			// size: 0x84
			register struct CPlayer *test;
			// register: 16
			register int rot;
			{
				{
					// register: 5
					// size: 0x34
					register struct POLY_GT4 *GT4;
					// address: 0xFFFFFFC0
					// size: 0x6C
					auto struct TextDat *ThisDat;
					// register: 4
					register int xr1;
					// register: 3
					register int yr1;
					// register: 6
					register int xr2;
					// register: 7
					register int yr2;
					// register: 17
					register int radius;
					// address: 0xFFFFFFC8
					auto int angle;
					// register: 3
					register unsigned int bright;
					// register: 21
					register unsigned int r;
					// register: 23
					register unsigned int g;
					// register: 20
					register unsigned int b;
					// register: 22
					register char flip;
					{
						// register: 16
						register int i;
						{
							// register: 16
							register int i;
						}
					}
				}
			}
		}
	}
}


// address: 0x800753FC
// line start: 558
// line end:   563
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800754A4
// line start: 567
// line end:   568
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800754AC
// line start: 571
// line end:   572
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800754E0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800754E0(struct POLY_FT4 **Prim) {
}


// address: 0x8007555C
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_8007555C(int PNum) {
}


// address: 0x800755AC
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_800755AC(struct CPlayer *this) {
}


// address: 0x800755B8
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_800755B8(struct CPlayer *this) {
}


// address: 0x800755C4
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_800755C4(struct CPlayer *this) {
}


// address: 0x800755D0
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_800755D0(struct TextDat *this) {
}


// address: 0x800755E4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800755E4(struct TextDat *this, int FrNum) {
}


// address: 0x80075600
// line start: 67
// line end:   72
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80075638
// line start: 81
// line end:   96
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x800756B8
// line start: 105
// line end:   120
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80075750
// line start: 131
// line end:   147
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80075800
// line start: 156
// line end:   199
int ML_GetPresetMonsters__FiPiUl(int currlevel, int *typelist, unsigned long QuestsNeededMask) {
	// register: 10
	// size: 0x10
	register struct MonstList *Mlist;
	// register: 18
	register int NumOfMonsters;
	// register: 16
	register int ThisList;
	{
		// register: 9
		register unsigned int f;
		{
			{
				{
					{
						// register: 7
						register int i;
						{
							{
								{
									// register: 4
									register int minl;
									// register: 2
									register int maxl;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800759BC
// size: 0x28
// line start: 287
// line end:   314
struct POLY_FT4 *DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos, int XOffSet, int YOffSet) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 17
	register int Creature;
	{
		{
			// register: 16
			register int PhysFrame;
			{
				{
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
				}
			}
		}
	}
}


// address: 0x80075B50
// size: 0x28
// line start: 319
// line end:   338
struct POLY_FT4 *LightObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 19
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80075C08
// size: 0x28
// line start: 354
// line end:   430
struct POLY_FT4 *DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 22
	register int AnimFrame;
	// register: 18
	register int XOffSet;
	// register: 17
	register int YOffSet;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *PalFr;
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 3
	register int LoadIndex;
	// register: 23
	register int Creature;
	{
		{
		}
	}
}


// address: 0x80075E9C
// line start: 441
// line end:   448
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80075F74
// size: 0x28
// line start: 459
// line end:   467
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80075FFC
// size: 0x28
// line start: 477
// line end:   478
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076028
// size: 0x28
// line start: 488
// line end:   489
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076054
// size: 0x28
// line start: 499
// line end:   500
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076080
// size: 0x28
// line start: 510
// line end:   511
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800760AC
// size: 0x28
// line start: 521
// line end:   522
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800760D8
// size: 0x28
// line start: 532
// line end:   533
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800760FC
// size: 0x28
// line start: 543
// line end:   544
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076120
// size: 0x28
// line start: 554
// line end:   555
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007614C
// size: 0x28
// line start: 565
// line end:   566
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076178
// size: 0x28
// line start: 576
// line end:   577
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800761A4
// size: 0x28
// line start: 587
// line end:   588
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800761D0
// size: 0x28
// line start: 598
// line end:   599
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800761FC
// size: 0x28
// line start: 609
// line end:   610
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076228
// size: 0x28
// line start: 620
// line end:   621
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076254
// size: 0x28
// line start: 631
// line end:   632
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076280
// size: 0x28
// line start: 642
// line end:   643
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800762AC
// size: 0x28
// line start: 653
// line end:   654
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800762D8
// size: 0x28
// line start: 664
// line end:   665
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076304
// size: 0x28
// line start: 675
// line end:   676
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076330
// size: 0x28
// line start: 686
// line end:   687
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007635C
// size: 0x28
// line start: 697
// line end:   698
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076388
// size: 0x28
// line start: 708
// line end:   709
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763B4
// size: 0x28
// line start: 719
// line end:   720
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763E0
// size: 0x28
// line start: 730
// line end:   731
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007640C
// size: 0x28
// line start: 741
// line end:   742
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076438
// size: 0x28
// line start: 752
// line end:   753
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076464
// size: 0x28
// line start: 763
// line end:   764
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076490
// size: 0x28
// line start: 774
// line end:   775
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764BC
// size: 0x28
// line start: 785
// line end:   786
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764E8
// size: 0x28
// line start: 796
// line end:   797
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076514
// size: 0x28
// line start: 807
// line end:   808
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076540
// size: 0x28
// line start: 818
// line end:   819
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007656C
// size: 0x28
// line start: 829
// line end:   830
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076598
// size: 0x28
// line start: 840
// line end:   841
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765C4
// size: 0x28
// line start: 851
// line end:   852
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765F0
// size: 0x28
// line start: 862
// line end:   863
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007661C
// size: 0x28
// line start: 873
// line end:   874
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076648
// size: 0x28
// line start: 884
// line end:   885
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076674
// size: 0x28
// line start: 895
// line end:   896
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800766A0
// line start: 906
// line end:   911
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80076734
// size: 0x28
// line start: 915
// line end:   921
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800767C4
// size: 0x28
// line start: 931
// line end:   937
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076854
// size: 0x28
// line start: 947
// line end:   953
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800768E4
// size: 0x28
// line start: 963
// line end:   969
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076974
// size: 0x28
// line start: 979
// line end:   980
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769A0
// size: 0x28
// line start: 990
// line end:   991
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769CC
// size: 0x28
// line start: 1001
// line end:   1002
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769F8
// size: 0x28
// line start: 1012
// line end:   1013
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A24
// size: 0x28
// line start: 1023
// line end:   1024
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A50
// size: 0x28
// line start: 1034
// line end:   1035
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A7C
// size: 0x28
// line start: 1045
// line end:   1046
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AA8
// size: 0x28
// line start: 1056
// line end:   1057
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AD4
// size: 0x28
// line start: 1067
// line end:   1068
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B00
// size: 0x28
// line start: 1078
// line end:   1079
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B2C
// size: 0x28
// line start: 1089
// line end:   1115
struct POLY_FT4 *PrintOBJ_BARRELEX__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			register int PhysFrame;
			{
				{
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
				}
			}
		}
	}
}


// address: 0x80076C84
// size: 0x28
// line start: 1125
// line end:   1132
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80076D50
// size: 0x28
// line start: 1142
// line end:   1149
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80076E1C
// size: 0x28
// line start: 1159
// line end:   1160
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E48
// size: 0x28
// line start: 1170
// line end:   1171
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E74
// size: 0x28
// line start: 1181
// line end:   1182
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EA0
// size: 0x28
// line start: 1192
// line end:   1193
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076ECC
// size: 0x28
// line start: 1203
// line end:   1204
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EF0
// size: 0x28
// line start: 1214
// line end:   1215
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F1C
// size: 0x28
// line start: 1225
// line end:   1226
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F48
// size: 0x28
// line start: 1236
// line end:   1237
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F74
// size: 0x28
// line start: 1247
// line end:   1248
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076FA0
// size: 0x28
// line start: 1258
// line end:   1259
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076FCC
// size: 0x28
// line start: 1269
// line end:   1270
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076FF8
// size: 0x28
// line start: 1280
// line end:   1281
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077024
// size: 0x28
// line start: 1291
// line end:   1292
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077050
// size: 0x28
// line start: 1302
// line end:   1303
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007707C
// size: 0x28
// line start: 1313
// line end:   1314
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800770A8
// size: 0x28
// line start: 1324
// line end:   1325
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800770D4
// size: 0x28
// line start: 1335
// line end:   1336
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077100
// size: 0x28
// line start: 1346
// line end:   1347
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007712C
// size: 0x28
// line start: 1357
// line end:   1358
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077158
// size: 0x28
// line start: 1368
// line end:   1369
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077184
// size: 0x28
// line start: 1379
// line end:   1380
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800771B0
// size: 0x28
// line start: 1390
// line end:   1422
struct POLY_FT4 *PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 19
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 5
	register int Creature;
	{
		// register: 20
		register int PhysFrame;
		{
			{
				// register: 16
				// size: 0x28
				register struct POLY_FT4 *ShadFt4;
			}
		}
	}
}


// address: 0x80077344
// size: 0x28
// line start: 1446
// line end:   1470
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 17
	register int Creature;
	// register: 16
	register int PhysFrame;
	{
		{
			// register: 16
			// size: 0x28
			register struct POLY_FT4 *ShadFt4;
		}
	}
}


// address: 0x800774CC
// size: 0x28
// line start: 1480
// line end:   1481
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800774F0
// size: 0x28
// line start: 1491
// line end:   1492
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007751C
// size: 0x28
// line start: 1502
// line end:   1503
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077548
// size: 0x28
// line start: 1513
// line end:   1514
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077574
// size: 0x28
// line start: 1524
// line end:   1525
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775A0
// size: 0x28
// line start: 1535
// line end:   1536
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775CC
// size: 0x28
// line start: 1546
// line end:   1547
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775F8
// size: 0x28
// line start: 1557
// line end:   1558
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077624
// size: 0x28
// line start: 1568
// line end:   1569
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077650
// size: 0x28
// line start: 1579
// line end:   1580
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007767C
// size: 0x28
// line start: 1590
// line end:   1591
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800776A8
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800776A8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800776E4
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_800776E4(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8007770C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007770C(struct POLY_FT4 **Prim) {
}


// address: 0x80077788
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077788(struct CBlocks *this) {
}


// address: 0x80077794
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80077794(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800777CC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800777CC(struct TextDat *this, int Creature) {
}


// address: 0x80077844
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077844(struct TextDat *this) {
}


// address: 0x80077858
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077858(struct TextDat *this, int FrNum) {
}


// address: 0x80077874
// line start: 48
// line end:   58
void gamemenu_on__Fv() {
}


// address: 0x8007787C
// line start: 63
// line end:   65
void gamemenu_off__Fv() {
}


// address: 0x80077884
// line start: 74
// line end:   96
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x8007788C
// line start: 101
// line end:   114
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077894
// line start: 119
// line end:   125
void ResetPal__Fv() {
}


// address: 0x8007789C
// line start: 133
// line end:   140
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x800778CC
// line start: 175
// line end:   176
bool GetFadeState__Fv() {
}


// address: 0x800778D8
// line start: 203
// line end:   227
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x800779DC
// line start: 235
// line end:   258
void SmearScreen__Fv() {
}


// address: 0x800779E4
// line start: 261
// line end:   266
void DrawFadedScreen__Fv() {
}


// address: 0x80077A38
// line start: 285
// line end:   297
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077AF4
// line start: 304
// line end:   332
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80077B84
// line start: 339
// line end:   346
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077BDC
// line start: 354
// line end:   389
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80077C8C
// line start: 396
// line end:   406
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x80077CE0
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x80077D00
// line start: 139
// line end:   163
void M_ClearSquares__Fi(int i) {
	// register: 8
	register int mx;
	// register: 10
	register int my;
	// register: 12
	register int mt;
	// register: 11
	register int mt2;
	{
		// register: 5
		register int y;
		{
			{
				// register: 3
				register int x;
			}
		}
	}
}


// address: 0x80077E6C
// line start: 168
// line end:   171
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x80077EA8
// line start: 176
// line end:   188
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80077EF4
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x80077F3C
// line start: 205
// line end:   217
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80077F9C
// line start: 221
// line end:   304
void M_Enemy__Fi(int i) {
	// address: 0xFFFFFFA8
	auto int j;
	// register: 19
	register int mi;
	// register: 22
	register int pnum;
	// address: 0xFFFFFFB0
	auto int closest;
	// register: 3
	register int dist;
	// address: 0xFFFFFFB8
	auto int bestdist;
	// register: 20
	register unsigned char sameroom;
	// address: 0xFFFFFFC0
	auto unsigned char bestsameroom;
	// register: 21
	// size: 0x70
	register struct MonsterStruct *Monst;
	// address: 0xFFFFFFC8
	auto unsigned char enemyx;
	// address: 0xFFFFFFD0
	auto unsigned char enemyy;
	// register: 23
	register int _mxi;
	// register: 30
	register int _myi;
	{
		{
			// register: 17
			register int _mx;
			// register: 22
			register int _my;
		}
	}
}


// address: 0x80078510
// line start: 309
// line end:   318
void ClearMVars__Fi(int i) {
}


// address: 0x80078584
// line start: 322
// line end:   429
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x800789D0
// line start: 434
// line end:   442
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80078A80
// line start: 447
// line end:   475
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x80078BC4
// line start: 479
// line end:   498
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80078CBC
// line start: 502
// line end:   510
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x80078D64
// line start: 514
// line end:   559
unsigned char SpawnSkeleton__Fiii(int ii, int x, int y) {
	// address: 0xFFFFFF98
	// size: 0x24
	auto int monstok[3][3];
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 16
	register int xx;
	// register: 18
	register int yy;
	// register: 4
	register int rs;
	// register: 20
	register unsigned char savail;
}


// address: 0x80078F54
// line start: 563
// line end:   580
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80079034
// line start: 584
// line end:   613
unsigned char PosOkMonst__Fiii(int i, int x, int y) {
	// register: 18
	register unsigned char ret;
	// register: 3
	register int oi;
	// register: 4
	register int mi;
	// register: 19
	register unsigned char fire;
}


// address: 0x800792B0
// line start: 618
// line end:   649
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x800795B8
// line start: 110
// line end:   198
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x800798B4
// line start: 203
// line end:   276
void SetAutomapView__Fii(int x, int y) {
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 2
	register unsigned short s;
	// register: 3
	register unsigned short d;
}


// address: 0x80079D04
// line start: 70
// line end:   140
int lAddMissile__Fiiici(int sx, int sy, int midir, char micaster, int id) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
	// register: 18
	register int mi;
}


// address: 0x80079ED8
// line start: 149
// line end:   178
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 3
	register int mi;
}


// address: 0x8007A020
// line start: 184
// line end:   198
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8007A128
// line start: 206
// line end:   207
void AddInTownPortal__Fi(int i) {
}


// address: 0x8007A160
// line start: 214
// line end:   222
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8007A1D0
// line start: 230
// line end:   232
void DeactivatePortal__Fi(int i) {
}


// address: 0x8007A1F0
// line start: 239
// line end:   243
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8007A228
// line start: 249
// line end:   256
void DelMis__Fii(int mi, int i) {
}


// address: 0x8007A288
// line start: 262
// line end:   277
void RemovePortalMissile__Fi(int id) {
	// register: 17
	register int i;
	// register: 18
	register int mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
}


// address: 0x8007A404
// line start: 283
// line end:   284
void SetCurrentPortal__Fi(int p) {
}


// address: 0x8007A410
// line start: 289
// line end:   315
void GetPortalLevel__Fv() {
}


// address: 0x8007A5B4
// line start: 321
// line end:   334
void GetPortalLvlPos__Fv() {
}


// address: 0x8007A664
// size: 0xB8
// line start: 61
// line end:   62
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x8007A690
// line start: 70
// line end:   70
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x8007A6B8
// line start: 78
// line end:   84
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007A6E8
// line start: 92
// line end:   108
void Dump__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		{
			{
				// register: 16
				register int f;
			}
		}
	}
}


// address: 0x8007A78C
// line start: 117
// line end:   123
void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x8007A7F4
// size: 0xF1C
// line start: 132
// line end:   152
struct DLevel *UseMap__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007A8C8
// line start: 160
// line end:   171
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Map) {
}


// address: 0x8007A938
// line start: 179
// line end:   185
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007A9AC
// line start: 195
// line end:   250
void WriteBackCachedMap__13CompLevelMaps(struct CompLevelMaps *this) {
	// register: 16
	register unsigned char *DecDest;
	// register: 19
	register long hndDec;
	// register: 18
	register int CompSize;
	{
		{
			// register: 16
			register long hndSplit;
		}
	}
}


// address: 0x8007ABC0
// line start: 258
// line end:   302
void DecompToCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
	// register: 17
	// size: 0xF1C
	register struct DLevel *DPtr;
	{
		{
			// register: 19
			register unsigned char *SrcPtr;
		}
	}
}


// address: 0x8007AD60
// line start: 310
// line end:   356
void BuildCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this, struct CompLevelMemImage *Dest) {
	// register: 20
	register unsigned char *DestPtr;
	{
		// register: 22
		register int f;
		{
			// register: 16
			register long hnd;
			{
				{
					// register: 17
					register unsigned char *MyData;
				}
			}
		}
	}
}


// address: 0x8007AEC0
// line start: 364
// line end:   401
void InitFromCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this, struct CompLevelMemImage *Src) {
	{
		// register: 20
		register int f;
		{
			{
				{
					// register: 17
					register long hnd;
					// register: 16
					register unsigned char *DestData;
					// register: 21
					register int Offset;
				}
			}
		}
	}
}


// address: 0x8007B000
// line start: 408
// line end:   414
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x8007B038
// line start: 418
// line end:   420
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x8007B070
// line start: 73
// line end:   75
void GO_DoGameOver__Fv() {
}


// address: 0x8007B0B4
// line start: 85
// line end:   116
void GameOverTask__FP4TASK(struct TASK *T) {
	// register: 17
	register bool OldPause;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8007B170
// line start: 126
// line end:   140
void PrintGameOver__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct Dialog PBack;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x8007B24C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8007B24C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8007B26C
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8007B26C(struct Dialog *this, int Type) {
}


// address: 0x8007B274
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8007B274(struct Dialog *this, int Type) {
}


// address: 0x8007B27C
// line start: 77
// line end:   77
void ___6Dialog_addr_8007B27C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8007B2A4
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8007B2A4(struct Dialog *this) {
}


// address: 0x8007B300
// line start: 230
// line end:   236
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x8007B344
// line start: 240
// line end:   241
char *VER_GetVerString__Fv() {
}


// address: 0x8007B354
// line start: 284
// line end:   285
int CharPair2Num__FPc(char *Str) {
}


// address: 0x8001E698
// line start: 32
// line end:   33
void TICK_InitModule();

// address: 0x8001E6B8
// line start: 41
// line end:   42
void TICK_Set(unsigned long Val);

// address: 0x8001E6C8
// line start: 49
// line end:   50
unsigned long TICK_Get();

// address: 0x8001E6D8
// line start: 58
// line end:   59
void TICK_Update();

// address: 0x8001E6F8
// line start: 66
// line end:   67
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001E724
// line start: 71
// line end:   72
char *TICK_GetDateString();

// address: 0x8001E734
// line start: 76
// line end:   77
char *TICK_GetTimeString();

// address: 0x8001E744
// line start: 55
// line end:   57
unsigned char GU_InitModule();

// address: 0x8001E770
// line start: 65
// line end:   70
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E7A0
// line start: 76
// line end:   95
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E830
// line start: 103
// line end:   104
long GU_GetSRnd();

// address: 0x8001E850
// line start: 114
// line end:   115
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E88C
// line start: 126
// line end:   128
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001E8B0
// line start: 31
// line end:   39
void main();

// address: 0x8001E900
// line start: 53
// line end:   60
unsigned char DBG_OpenModule();

// address: 0x8001E908
// line start: 72
// line end:   79
void DBG_PollHost();

// address: 0x8001E910
// line start: 88
// line end:   92
void DBG_Halt();

// address: 0x8001E918
// line start: 108
// line end:   126
void DBG_SendMessage(char *e);

// address: 0x8001E930
// line start: 135
// line end:   136
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E940
// line start: 146
// line end:   158
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E96C
// line start: 164
// line end:   165
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E97C
// line start: 175
// line end:   179
void SendPsyqString(char *e);

// address: 0x8001E984
// line start: 188
// line end:   189
void DBG_SetPollRoutine(void (*Func)());

// address: 0x8001E994
// line start: 52
// line end:   53
unsigned long GTIMSYS_GetTimer();

// address: 0x8001E9B8
// line start: 57
// line end:   58
void GTIMSYS_ResetTimer();

// address: 0x8001E9DC
// line start: 63
// line end:   91
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8001EC10
// line start: 88
// line end:   91
void DoEpi(struct TASK *T);

// address: 0x8001EC60
// line start: 99
// line end:   102
void DoPro(struct TASK *T);

// address: 0x8001ECB0
// line start: 115
// line end:   129
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x8001ED24
// size: 0x5C
// line start: 141
// line end:   211
struct TASK *TSK_AddTask(unsigned long Id, void (*Main)(), int StackSize, int DataSize) {
	// register: 16
	// size: 0x5C
	register struct TASK *RetTask;
	// register: 17
	register long hndTask;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct GAL_STRUCT G[4];
}


// address: 0x8001EF0C
// line start: 218
// line end:   277
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F0CC
// line start: 287
// line end:   313
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x8001F1A8
// line start: 321
// line end:   330
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8001F230
// line start: 338
// line end:   340
void TSK_Die();

// address: 0x8001F25C
// line start: 350
// line end:   357
void TSK_Kill(struct TASK *T);

// address: 0x8001F2AC
// size: 0x5C
// line start: 371
// line end:   372
struct TASK *TSK_GetFirstActive();

// address: 0x8001F2BC
// line start: 385
// line end:   395
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8001F338
// line start: 408
// line end:   418
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8001F380
// line start: 430
// line end:   440
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8001F3C4
// size: 0x5C
// line start: 454
// line end:   455
struct TASK *TSK_GetCurrentTask();

// address: 0x8001F3D4
// line start: 467
// line end:   468
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x8001F3EC
// size: 0x5C
// line start: 482
// line end:   498
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x8001F444
// line start: 512
// line end:   514
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F45C
// line start: 525
// line end:   526
void TSK_ClearExecFilter();

// address: 0x8001F480
// line start: 543
// line end:   583
int TSK_KillTasks(struct TASK *CallingT, unsigned long Id, unsigned long Mask) {
	// register: 17
	register int TasksKilled;
	// register: 4
	// size: 0x5C
	register struct TASK *T;
	// register: 18
	register unsigned char WasCurrentTaskKilled;
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F580
// line start: 594
// line end:   610
void TSK_IterateTasks(unsigned long Id, unsigned long Mask, void (*CallBack)()) {
	// register: 4
	// size: 0x5C
	register struct TASK *T;
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F5F8
// line start: 619
// line end:   620
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x8001F60C
// line start: 630
// line end:   631
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8001F620
// line start: 642
// line end:   643
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8001F634
// line start: 653
// line end:   654
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8001F648
// line start: 665
// line end:   666
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x8001F65C
// line start: 677
// line end:   678
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8001F670
// line start: 689
// line end:   696
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6BC
// line start: 707
// line end:   713
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6DC
// line start: 722
// line end:   734
void LoTskKill(struct TASK *T) {
}


// address: 0x8001F74C
// line start: 744
// line end:   748
void ExecuteTask(struct TASK *T);

// address: 0x8001F79C
// line start: 756
// line end:   762
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7B4
// line start: 765
// line end:   771
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7CC
// line start: 775
// line end:   781
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7E4
// line start: 784
// line end:   790
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7FC
// line start: 793
// line end:   795
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F814
// line start: 799
// line end:   802
void TSK_ClearEpiProFilter();

// address: 0x8001F848
// line start: 810
// line end:   811
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8001F858
// line start: 819
// line end:   826
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x8001F870
// line start: 833
// line end:   838
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x8001F898
// line start: 841
// line end:   845
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8001F8C4
// line start: 848
// line end:   857
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x8001F900
// size: 0x8
// line start: 74
// line end:   75
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F910
// line start: 89
// line end:   91
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001F94C
// line start: 110
// line end:   115
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F95C
// line start: 130
// line end:   135
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F974
// line start: 147
// line end:   151
unsigned char GSYS_InitMachine();

// address: 0x8001F9C8
// line start: 170
// line end:   184
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001F9FC
// line start: 195
// line end:   199
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FA78
// line start: 174
// line end:   175
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001FA88
// line start: 194
// line end:   245
long GAL_SplitBlock(long CurBlock, unsigned long Size) {
	// register: 19
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *MemHdr;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
}


// address: 0x8001FBBC
// line start: 253
// line end:   275
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FC74
// line start: 288
// line end:   358
unsigned char GAL_AddMemType(struct MEM_INIT_INFO *M) {
	// register: 4
	// size: 0x28
	register struct MEM_INIT_INFO *P;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *FreeMemHdr;
	// register: 5
	register unsigned long Addr1;
	// register: 3
	register unsigned long Addr2;
}


// address: 0x8001FD94
// line start: 373
// line end:   450
long GAL_Alloc(unsigned long Size, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 18
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 19
	register unsigned long FullSize;
	// register: 20
	// size: 0x20
	register struct MEM_HDR *(*FRoute)();
	// register: 23
	register unsigned char High;
	{
	}
}


// address: 0x8001FF2C
// line start: 464
// line end:   486
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FF8C
// line start: 499
// line end:   530
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020008
// line start: 542
// line end:   581
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x800200A8
// line start: 594
// line end:   618
unsigned long GAL_GetFreeMem(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x8002011C
// line start: 632
// line end:   656
unsigned long GAL_GetUsedMem(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x80020190
// line start: 671
// line end:   697
unsigned long GAL_LargestFreeBlock(unsigned long Type) {
	// register: 5
	register unsigned long Largest;
	// register: 3
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *MI;
}


// address: 0x8002020C
// line start: 709
// line end:   715
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x8002022C
// line start: 729
// line end:   736
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80020278
// line start: 751
// line end:   764
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x800202A8
// line start: 778
// line end:   788
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x800202D8
// line start: 801
// line end:   802
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80020308
// size: 0x20
// line start: 816
// line end:   841
struct MEM_HDR *FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
}


// address: 0x80020360
// size: 0x20
// line start: 853
// line end:   886
struct MEM_HDR *FindHighestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 7
	register void *Highest;
}


// address: 0x800203C8
// size: 0x20
// line start: 897
// line end:   932
struct MEM_HDR *FindLowestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 7
	register unsigned long Lowest;
}


// address: 0x80020430
// size: 0x28
// line start: 944
// line end:   965
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x8002046C
// line start: 978
// line end:   1031
void MergeToEmptyList(struct MEM_INIT_INFO *MI, struct MEM_HDR *M) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 18
	// size: 0x20
	register struct MEM_HDR *NextIndex;
	// register: 19
	register void *Start;
	// register: 21
	register void *End;
	{
		// register: 2
		register void *ThisStart;
		// register: 4
		register void *ThisEnd;
	}
}


// address: 0x80020540
// line start: 1053
// line end:   1083
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x8002061C
// line start: 1107
// line end:   1194
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x800207B4
// size: 0x20
// line start: 1210
// line end:   1237
struct MEM_HDR *FindBlockInTheseBounds(struct MEM_HDR *Head, void *Addr, unsigned long Size) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 7
	register unsigned char Done;
	// register: 3
	register unsigned long ThisStart;
	// register: 2
	register unsigned long ThisEnd;
	// register: 5
	register unsigned long Start;
	// register: 6
	register unsigned long End;
}


// address: 0x80020820
// size: 0x20
// line start: 1249
// line end:   1266
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x800208A8
// line start: 1279
// line end:   1281
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x800208E8
// line start: 1293
// line end:   1313
void GAL_IterateEmptyMem(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x8002096C
// line start: 1323
// line end:   1343
void GAL_IterateUsedMem(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x80020A08
// line start: 1354
// line end:   1358
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020A70
// line start: 1378
// line end:   1392
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020AC4
// line start: 1406
// line end:   1422
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020B18
// line start: 1436
// line end:   1453
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020B9C
// line start: 1466
// line end:   1471
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020BF8
// line start: 1486
// line end:   1538
unsigned char GAL_CheckMem(unsigned long Type) {
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *MemHdr;
	// register: 18
	register unsigned long TotalMem;
}


// address: 0x80020CF4
// line start: 1553
// line end:   1578
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020DA0
// line start: 1591
// line end:   1606
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020DF8
// line start: 1618
// line end:   1620
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020E28
// size: 0x4
// line start: 1633
// line end:   1634
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020E38
// line start: 1645
// line end:   1646
char *GAL_GetLastErrorText();

// address: 0x80020E60
// line start: 1658
// line end:   1685
int GAL_HowManyEmptyRegions(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x20
		register struct MEM_HDR *mh;
	}
}


// address: 0x80020EC8
// line start: 1695
// line end:   1720
int GAL_HowManyUsedRegions(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x20
		register struct MEM_HDR *mh;
	}
}


// address: 0x80020F30
// line start: 1729
// line end:   1730
void GAL_SetTimeStamp(int Time);

// address: 0x80020F40
// line start: 1740
// line end:   1741
void GAL_IncTimeStamp();

// address: 0x80020F60
// line start: 1750
// line end:   1751
int GAL_GetTimeStamp();

// address: 0x80020F70
// line start: 1767
// line end:   1778
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80020FC0
// line start: 1798
// line end:   1803
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80021010
// line start: 1818
// line end:   1835
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x800210BC
// line start: 1846
// line end:   1857
long GAL_GetSize(long hnd) {
}


// address: 0x80021110
// line start: 1871
// line end:   1963
unsigned char GazDefragMem(unsigned long MemType) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto struct MEM_HDR *LockedBlocks;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct MEM_REG Reg;
	{
		// register: 5
		// size: 0x20
		register struct MEM_HDR *NewEmptyBlock;
		// address: 0xFFFFFFE4
		// size: 0x20
		auto struct MEM_HDR *ListOfBlocksInRegion;
		// register: 18
		register unsigned long ShuffledSize;
		// register: 16
		register int GapSize;
	}
}


// address: 0x80021278
// line start: 1976
// line end:   2000
void PutBlocksInRegionIntoList(struct MEM_REG *Reg, struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
	{
		// register: 17
		// size: 0x20
		register struct MEM_HDR *NextBlock;
		// address: 0xFFFFFFE0
		// size: 0x8
		auto struct MEM_REG MemReg;
	}
}


// address: 0x8002131C
// line start: 2013
// line end:   2019
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80021350
// line start: 2032
// line end:   2042
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x800213BC
// line start: 2060
// line end:   2095
unsigned char GetRegion(struct MEM_REG *Reg, struct MEM_HDR *LockedBlocks, struct MEM_INIT_INFO *M) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *FirstBlock;
	// register: 2
	// size: 0x20
	register struct MEM_HDR *SecondBlock;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct MEM_REG NewReg;
}


// address: 0x800214B4
// size: 0x20
// line start: 2134
// line end:   2153
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x800214F0
// line start: 2167
// line end:   2196
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
}


// address: 0x80021580
// line start: 2208
// line end:   2227
void PutAllLockedBlocksOntoList(struct MEM_HDR **ToHead, struct MEM_HDR **FromHead) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	{
		// register: 17
		// size: 0x20
		register struct MEM_HDR *NextCurHdr;
	}
}


// address: 0x800215FC
// line start: 2240
// line end:   2290
void SortMemHdrListByAddr(struct MEM_HDR **Head) {
	// register: 7
	register unsigned char DidASwap;
	// register: 5
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	// register: 6
	// size: 0x20
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *OldPrev;
	}
}


// address: 0x800216B0
// line start: 2301
// line end:   2324
void GraftMemHdrList(struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *OldFirst;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *LastHdr;
	}
}


// address: 0x8002170C
// line start: 2335
// line end:   2340
void GAL_MemDump(unsigned long Type);

// address: 0x80021780
// line start: 2354
// line end:   2355
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80021790
// line start: 2368
// line end:   2382
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x800217BC
// line start: 2394
// line end:   2406
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x80021804
// line start: 2415
// line end:   2416
int GAL_GetNumFreeHeaders();

// address: 0x80021814
// line start: 2420
// line end:   2421
unsigned long GAL_GetLastTypeAlloced();

// address: 0x80021824
// line start: 2431
// line end:   2438
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x8002183C
// line start: 2447
// line end:   2459
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021890
// line start: 2462
// line end:   2463
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x800218A0
// line start: 2476
// line end:   2525
void SortMemHdrList(struct MEM_HDR **Head, unsigned char (*CompFunc)()) {
	// register: 18
	register unsigned char DidASwap;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *OldPrev;
	}
}


// address: 0x80023C5C
// line start: 157
// line end:   167
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80023CA8
// line start: 172
// line end:   479
int _doprnt(char *fmt0, char *argp, struct FILE *fp) {
	// register: 22
	register char *fmt;
	// register: 4
	register int ch;
	// address: 0xFFFFFFA8
	auto int cnt;
	// register: 16
	register int n;
	// register: 17
	register char *t;
	// register: 3
	register unsigned long _ulong;
	// register: 5
	register int base;
	// address: 0xFFFFFFB0
	auto int dprec;
	// register: 30
	register int fieldsz;
	// register: 19
	register int flags;
	// address: 0xFFFFFFB8
	auto int fpprec;
	// register: 20
	register int prec;
	// register: 20
	register int realsz;
	// register: 23
	register int size;
	// address: 0xFFFFFFC0
	auto int width;
	// register: 6
	register char sign;
	// address: 0xFFFFFFC8
	auto char *digs;
	// address: 0x80023DFC
	bool rflag;
	// address: 0x80024164
	bool nosign;
	// address: 0x80024210
	bool pforw;
	{
		// register: 2
		register char c;
		{
			{
				// register: 2
				register char *p;
			}
		}
	}
}


