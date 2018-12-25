#include "types.h"

// address: 0x8011AD08
extern int NumOfMonsterListLevels;

// address: 0x800B72A4
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x8011A9F4
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x8011A9F8
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x8011A9FC
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x8011AA04
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x8011AA08
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x8011AA0C
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x8011AA10
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x8011AA14
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x8011AA18
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x8011AA1C
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x8011AA20
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x8011AA24
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x8011AA28
// size: 0x4
static unsigned char NumsLEV3M3QA[4];

// address: 0x8011AA2C
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x8011AA30
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x8011AA34
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x8011AA38
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x8011AA3C
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x8011AA40
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x8011AA48
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x8011AA50
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x8011AA54
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x8011AA58
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x8011AA5C
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x8011AA60
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x8011AA64
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x8011AA68
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x8011AA6C
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x8011AA74
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x8011AA78
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x8011AA7C
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x8011AA80
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x8011AA84
// size: 0x3
static unsigned char NumsLEV6M6QA[3];

// address: 0x8011AA88
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x8011AA8C
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x8011AA90
// size: 0x4
static unsigned char NumsLEV7M7C[4];

// address: 0x8011AA94
// size: 0x3
static unsigned char NumsLEV7M7D[3];

// address: 0x8011AA98
// size: 0x3
static unsigned char NumsLEV7M7E[3];

// address: 0x8011AA9C
// size: 0x2
static unsigned char NumsLEV8M8A[2];

// address: 0x8011AAA0
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x8011AAA4
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8011AAA8
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x8011AAAC
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x8011AAB0
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x8011AAB4
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x8011AAB8
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x8011AABC
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x8011AAC0
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x8011AAC4
// size: 0x3
static unsigned char NumsLEV10M10B[3];

// address: 0x8011AAC8
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x8011AACC
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x8011AAD0
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x8011AAD4
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x8011AAD8
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x8011AADC
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x8011AAE0
// size: 0x2
static unsigned char NumsLEV11M11D[2];

// address: 0x8011AAE4
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x8011AAE8
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x8011AAEC
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x8011AAF0
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x8011AAF4
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x8011AAF8
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x8011AAFC
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x8011AB00
// size: 0x2
static unsigned char NumsLEV13M13C[2];

// address: 0x8011AB04
// size: 0x3
static unsigned char NumsLEV13M13D[3];

// address: 0x8011AB08
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x8011AB0C
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x8011AB10
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x8011AB14
// size: 0x2
static unsigned char NumsLEV14M14C[2];

// address: 0x8011AB18
// size: 0x2
static unsigned char NumsLEV14M14D[2];

// address: 0x8011AB1C
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x8011AB20
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x8011AB24
// size: 0x2
static unsigned char NumsLEV15M15A[2];

// address: 0x8011AB28
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8011AB2C
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8011AB30
// size: 0x2
static unsigned char NumsLEV15M15QA[2];

// address: 0x8011AB34
// size: 0x3
static unsigned char NumsLEV16M16D[3];

// address: 0x800B6DD4
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800B6E04
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800B6E64
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800B6EA4
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800B6F14
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800B6F84
// size: 0x60
static struct MonstList ChoiceListLEV6[6];

// address: 0x800B6FE4
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800B7034
// size: 0x50
static struct MonstList ChoiceListLEV8[5];

// address: 0x800B7084
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800B70C4
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800B7114
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800B7164
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800B71A4
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800B71F4
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800B7254
// size: 0x40
static struct MonstList ChoiceListLEV15[4];

// address: 0x800B7294
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x8011C858
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800B7324
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x8011AD18
extern int ArgsSoFar;

// address: 0x8011AD28
extern unsigned long *ThisOt;

// address: 0x8011AD2C
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x8011C85C
static long hndPrimBuffers;

// address: 0x8011C860
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x8011C864
static unsigned char BufferDepth;

// address: 0x8011C865
static unsigned char WorkRamId;

// address: 0x8011C866
static unsigned char ScrNum;

// address: 0x8011C868
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x8011C86C
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x8011C870
static unsigned char BufferNum;

// address: 0x8011AD30
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x8011C871
static unsigned char LastBuffer;

// address: 0x8011C874
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x8011C878
static int ThisOtSize;

// address: 0x8011AD34
// size: 0x8
static struct RECT ScrRect;

// address: 0x8011C87C
static int VidWait;

// address: 0x8011CD38
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8011C880
static void (*VbFunc)();

// address: 0x8011C884
static unsigned long VidTick;

// address: 0x8011C888
static int VXOff;

// address: 0x8011C88C
static int VYOff;

// address: 0x8011AD3C
static bool DBufferFlag;

// address: 0x8011AD4C
// size: 0x20
extern struct LNK_OPTS *Gaz;

// address: 0x8011AD50
extern int LastFmem;

// address: 0x8011AD40
extern unsigned int GSYS_MemStart;

// address: 0x8011AD44
extern unsigned int GSYS_MemEnd;

// address: 0x800B766C
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800B7694
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x8011AD48
extern int LowestFmem;

// address: 0x8011AD60
extern int FileSYS;

// address: 0x8011C890
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x8011C894
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x8011AD70
extern unsigned long LastAddr;

// address: 0x8011AD86
extern short DavesPad;

// address: 0x8011AD88
extern short DavesPadDeb;

// address: 0x8011AD8C
// size: 0x8
extern long PDosh[2];

// address: 0x8011AD80
extern int DaveDebCount;

// address: 0x800B76BC
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x800B76F0
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800B7700
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800B7710
// size: 0x190
extern unsigned char EAC_DirectoryCache[400];

// address: 0x8011ADD4
extern unsigned long BL_NoLumpFiles;

// address: 0x8011ADD8
extern unsigned long BL_NoStreamFiles;

// address: 0x8011ADDC
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x8011ADE0
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x8011ADE4
extern unsigned char FileLoaded;

// address: 0x8011ADE5
extern unsigned char NoQuedAsyncs;

// address: 0x8011ADE6
extern unsigned char CurrAsync;

// address: 0x8011AE08
extern int NoTAllocs;

// address: 0x800B78A0
// size: 0x1E0
extern struct MEMSTRUCT MemBlock[60];

// address: 0x8011C898
static bool CanPause;

// address: 0x8011C89C
static bool Paused;

// address: 0x8011AE18
// size: 0x5C
extern struct TASK *TPtr;

// address: 0x8011CE18
// size: 0x10
static struct Dialog PBack;

// address: 0x800B7C58
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800B7C7C
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800B7CA0
// size: 0x384
extern unsigned char demo_buffer[900];

// address: 0x8011AE28
extern int demo_pad_time;

// address: 0x8011AE2C
extern int demo_pad_count;

// address: 0x800B7A80
// size: 0xEC
extern struct CPad Pad0;

// address: 0x800B7B6C
// size: 0xEC
extern struct CPad Pad1;

// address: 0x8011AE30
extern unsigned long demo_finish;

// address: 0x8011AE34
extern int demo_start;

// address: 0x8011AE38
extern int cac_pad;

// address: 0x8011AE58
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x8011AE5C
extern int CharFrm;

// address: 0x8011AE45
extern unsigned char WHITER;

// address: 0x8011AE46
extern unsigned char WHITEG;

// address: 0x8011AE47
extern unsigned char WHITEB;

// address: 0x8011AE48
extern unsigned char BLUER;

// address: 0x8011AE49
extern unsigned char BLUEG;

// address: 0x8011AE4A
extern unsigned char BLUEB;

// address: 0x8011AE4B
extern unsigned char REDR;

// address: 0x8011AE4C
extern unsigned char REDG;

// address: 0x8011AE4D
extern unsigned char REDB;

// address: 0x8011AE4E
extern unsigned char GOLDR;

// address: 0x8011AE4F
extern unsigned char GOLDG;

// address: 0x8011AE50
extern unsigned char GOLDB;

// address: 0x800B8024
// size: 0x21C
extern struct CFont MediumFont;

// address: 0x800B8240
// size: 0x21C
extern struct CFont LargeFont;

// address: 0x8011AE54
extern bool buttoncol;

// address: 0x800B845C
// size: 0x1C8
extern struct FontItem LFontTab[114];

// address: 0x800B8624
// size: 0x10
extern struct FontTab LFont;

// address: 0x800B8634
// size: 0x1D8
extern struct FontItem MFontTab[118];

// address: 0x800B880C
// size: 0x10
extern struct FontTab MFont;

// address: 0x8011AE71
extern unsigned char DialogRed;

// address: 0x8011AE72
extern unsigned char DialogGreen;

// address: 0x8011AE73
extern unsigned char DialogBlue;

// address: 0x8011AE74
extern unsigned char DialogTRed;

// address: 0x8011AE75
extern unsigned char DialogTGreen;

// address: 0x8011AE76
extern unsigned char DialogTBlue;

// address: 0x8011AE78
// size: 0x70
extern struct TextDat *DialogTData;

// address: 0x8011AE7C
extern int DialogBackGfx;

// address: 0x8011AE80
extern int DialogBackW;

// address: 0x8011AE84
extern int DialogBackH;

// address: 0x8011AE88
extern int DialogBorderGfx;

// address: 0x8011AE8C
extern int DialogBorderTLW;

// address: 0x8011AE90
extern int DialogBorderTLH;

// address: 0x8011AE94
extern int DialogBorderTRW;

// address: 0x8011AE98
extern int DialogBorderTRH;

// address: 0x8011AE9C
extern int DialogBorderBLW;

// address: 0x8011AEA0
extern int DialogBorderBLH;

// address: 0x8011AEA4
extern int DialogBorderBRW;

// address: 0x8011AEA8
extern int DialogBorderBRH;

// address: 0x8011AEAC
extern int DialogBorderTW;

// address: 0x8011AEB0
extern int DialogBorderTH;

// address: 0x8011AEB4
extern int DialogBorderBW;

// address: 0x8011AEB8
extern int DialogBorderBH;

// address: 0x8011AEBC
extern int DialogBorderLW;

// address: 0x8011AEC0
extern int DialogBorderLH;

// address: 0x8011AEC4
extern int DialogBorderRW;

// address: 0x8011AEC8
extern int DialogBorderRH;

// address: 0x8011AECC
extern int DialogBevelGfx;

// address: 0x8011AED0
extern int DialogBevelCW;

// address: 0x8011AED4
extern int DialogBevelCH;

// address: 0x8011AED8
extern int DialogBevelLRW;

// address: 0x8011AEDC
extern int DialogBevelLRH;

// address: 0x8011AEE0
extern int DialogBevelUDW;

// address: 0x8011AEE4
extern int DialogBevelUDH;

// address: 0x8011AEE8
extern int MY_DialogOTpos;

// address: 0x8011C8A0
static unsigned char DialogGBack;

// address: 0x8011C8A1
static char GShadeX;

// address: 0x8011C8A2
static char GShadeY;

// address: 0x8011C8A8
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800B885C
// size: 0x70
extern int Cxy[28];

// address: 0x8011AE6B
extern unsigned char BORDERR;

// address: 0x8011AE6C
extern unsigned char BORDERG;

// address: 0x8011AE6D
extern unsigned char BORDERB;

// address: 0x8011AE6E
extern unsigned char BACKR;

// address: 0x8011AE6F
extern unsigned char BACKG;

// address: 0x8011AE70
extern unsigned char BACKB;

// address: 0x800B881C
// size: 0x40
static char GShadeTab[64];

// address: 0x8011AE69
static char GShadePX;

// address: 0x8011AE6A
static char GShadePY;

// address: 0x8011AEF5
extern unsigned char PlayDemoFlag;

// address: 0x8011CE38
// size: 0xC
static int dx[3];

// address: 0x8011CE48
// size: 0xC
static int dy[3];

// address: 0x8011C8B0
static bool InfraFlag;

// address: 0x8011C8B4
static int blockr;

// address: 0x8011C8B8
static int blockg;

// address: 0x8011C8BC
static int blockb;

// address: 0x8011AF54
extern int OldSp;

// address: 0x8011AF58
extern int ax;

// address: 0x8011AF5C
extern int ay;

// address: 0x8011AF20
extern int PosAdj;

// address: 0x8011AF01
extern unsigned char P1ObjSelCount;

// address: 0x8011AF02
extern unsigned char P2ObjSelCount;

// address: 0x8011AF03
extern unsigned char P12ObjSelCount;

// address: 0x8011AF04
extern unsigned char P1ItemSelCount;

// address: 0x8011AF05
extern unsigned char P2ItemSelCount;

// address: 0x8011AF06
extern unsigned char P12ItemSelCount;

// address: 0x8011AF07
extern unsigned char P1MonstSelCount;

// address: 0x8011AF08
extern unsigned char P2MonstSelCount;

// address: 0x8011AF09
extern unsigned char P12MonstSelCount;

// address: 0x8011AF0A
static unsigned short P1ObjSelCol;

// address: 0x8011AF0C
static unsigned short P2ObjSelCol;

// address: 0x8011AF0E
static unsigned short P12ObjSelCol;

// address: 0x8011AF10
static unsigned short P1ItemSelCol;

// address: 0x8011AF12
static unsigned short P2ItemSelCol;

// address: 0x8011AF14
static unsigned short P12ItemSelCol;

// address: 0x8011AF16
static unsigned short P1MonstSelCol;

// address: 0x8011AF18
static unsigned short P2MonstSelCol;

// address: 0x8011AF1A
static unsigned short P12MonstSelCol;

// address: 0x8011AF1C
// size: 0x108
extern struct CBlocks *CurrentBlocks;

// address: 0x8011AF24
static int LightMethod;

// address: 0x800B88CC
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x8011AF38
extern int OtShift;

// address: 0x8011AF3C
extern int OldLighting;

// address: 0x8011AF40
extern int GMXAdj2;

// address: 0x8011AF44
extern int GMYAdj2;

// address: 0x8011AF48
extern int Adjust;

// address: 0x8011CE58
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800B91A0
// size: 0x5D0
extern struct TextDat *AllDats[372];

// address: 0x8011AF90
extern int TpW;

// address: 0x8011AF94
extern int TpH;

// address: 0x8011AF98
extern int TpXDest;

// address: 0x8011AF9C
extern int TpYDest;

// address: 0x800B9770
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800B88E0
// size: 0x8C0
extern struct TextDat DatPool[20];

// address: 0x8011AF84
extern int wank;

// address: 0x8011AFA8
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x8011089C
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x8011CE80
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x8011CE90
// size: 0x10
static struct Overlay PregameOver;

// address: 0x8011CEA0
// size: 0x10
static struct Overlay GameOver;

// address: 0x8011CEB0
// size: 0x10
static struct Overlay FmvOver;

// address: 0x8011C8C8
static int OWorldX;

// address: 0x8011C8CC
static int OWorldY;

// address: 0x8011C8D0
static int WWorldX;

// address: 0x8011C8D4
static int WWorldY;

// address: 0x8011C8D8
static int TimePerFrame;

// address: 0x8011C8DC
static int CpuStart;

// address: 0x8011C8E0
static int CpuTime;

// address: 0x8011C8E4
static int DrawTime;

// address: 0x8011C8E8
static int DrawStart;

// address: 0x8011C8EC
static int LastCpuTime;

// address: 0x8011C8F0
static int LastDrawTime;

// address: 0x8011C8F4
static int DrawArea;

// address: 0x8011AFD4
extern bool ProfOn;

// address: 0x801109E0
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800B97A4
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x8011AFF0
static int CutScreen;

// address: 0x800B97B8
// size: 0x58
extern struct PanelXY DefP1PanelXY;

// address: 0x800B9810
// size: 0x58
extern struct PanelXY DefP1PanelXY2;

// address: 0x800B9868
// size: 0x58
extern struct PanelXY DefP2PanelXY;

// address: 0x800B98C0
// size: 0x58
extern struct PanelXY DefP2PanelXY2;

// address: 0x8011B000
extern int hof;

// address: 0x8011B004
extern int mof;

// address: 0x8011B008
static int SpdCol0;

// address: 0x8011B00C
static int SpdCol1;

// address: 0x8011B010
static int SpdCol2;

// address: 0x8011B014
static int SpdCol3;

// address: 0x8011B018
static int SpdColInc0;

// address: 0x8011B01C
static int SpdColInc1;

// address: 0x8011B020
static int SpdColInc2;

// address: 0x8011B024
static int SpdColInc3;

// address: 0x800B9918
// size: 0x12
static unsigned char DurColors[3][6];

// address: 0x800B992C
// size: 0x108
extern struct SFXHDR SFXTab[2];

// address: 0x800B9A34
// size: 0x12000
extern unsigned long STR_Buffer[18432];

// address: 0x8011B05C
extern unsigned long Time;

// address: 0x8011B060
extern bool CDWAIT;

// address: 0x800CBA34
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x800CBA74
// size: 0x84
extern struct SFXHDR STRSave;

// address: 0x8011C8F8
static bool SavePause;

// address: 0x8011B031
extern char NoActiveStreams;

// address: 0x8011B034
static bool STRInit;

// address: 0x8011B038
static int frame_rate;

// address: 0x8011B03C
static unsigned char CDAngle;

// address: 0x8011B040
extern int my_spurate;

// address: 0x8011B07C
extern char SFXNotPlayed;

// address: 0x8011B07D
extern char SFXNotInBank;

// address: 0x8011CEC0
// size: 0x108
static char spu_management[264];

// address: 0x8011CFD0
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x8011C900
static unsigned short NoSfx;

// address: 0x8011CFF0
// size: 0x30
static unsigned short CHStatus[24];

// address: 0x8011B070
static long OffsetHandle;

// address: 0x8011B074
static int BankBase;

// address: 0x80110C6C
// size: 0x78
static unsigned short SFXRemapTab[60];

// address: 0x8011B078
static int NoSNDRemaps;

// address: 0x800CBAF8
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x8011B098
extern unsigned short ShadClut;

// address: 0x80110D18
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x8011B0FC
extern int demo_level;

// address: 0x8011B100
// size: 0x4
extern enum GM_SPEEDS speedstore;

// address: 0x8011D020
// size: 0x28
static int buff[10];

// address: 0x8011B104
extern int old_val;

// address: 0x8011B108
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x8011B10C
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x8011B110
// size: 0x5C
extern struct TASK *tonys;

// address: 0x8011B0B0
extern int demo_load;

// address: 0x8011B0B4
extern int demo_record_load;

// address: 0x8011B0B8
extern int level_record;

// address: 0x8011B0BC
extern char demo_fade_finished;

// address: 0x8011B0BD
extern unsigned char demo_which;

// address: 0x8011B0C0
// size: 0x5
extern unsigned char demo_level_num[5];

// address: 0x8011B0C8
// size: 0x5
extern unsigned char demo_level_player[5];

// address: 0x8011B0D0
// size: 0x5
extern unsigned char demo_level_spell1[5];

// address: 0x8011B0D8
// size: 0x5
extern unsigned char demo_level_spell2[5];

// address: 0x8011B0E0
// size: 0x5
extern unsigned char demo_level_clothe[5];

// address: 0x8011B0BE
extern unsigned char quest_cheat_num;

// address: 0x8011B0BF
extern unsigned char cheat_quest_flag;

// address: 0x8011B0A8
extern int tony_poll;

// address: 0x8011B0AC
extern int moo_moo;

// address: 0x8011B0E8
// size: 0x5
extern unsigned char demo_level_dam[5];

// address: 0x8011B0F0
// size: 0x5
extern unsigned char demo_level_dex[5];

// address: 0x8011B0F5
extern unsigned char demo_flash;

// address: 0x8011B0F8
extern int tonys_Task;

// address: 0x8011B274
extern bool DoShowPanel;

// address: 0x8011B278
extern bool DoDrawBg;

// address: 0x8011C904
static bool GlueFinished;

// address: 0x8011C908
static bool DoHomingScroll;

// address: 0x8011C90C
// size: 0x70
static struct TextDat *TownerGfx;

// address: 0x8011C910
static int CurrentMonsterList;

// address: 0x8011C914
static int QuakeTime;

// address: 0x8011C918
static int QuakeAmount;

// address: 0x800CBCE4
// size: 0x3CC
extern struct PInf PlayerInfo[81];

// address: 0x8011B27C
// size: 0x4
static char ArmourChar[4];

// address: 0x80110E0C
// size: 0xA
static char WepChar[10];

// address: 0x8011B280
// size: 0x4
static char CharChar[4];

// address: 0x8011B264
static unsigned char JustLoadedPlayer;

// address: 0x8011B268
static bool GameStarted;

// address: 0x8011C91C
static char ctrl_select_line;

// address: 0x8011C91D
static char ctrl_select_side;

// address: 0x8011C91E
static char ckeyheld;

// address: 0x8011C924
// size: 0x8
static struct RECT CtrlRect;

// address: 0x8011B294
extern unsigned char ctrlflag;

// address: 0x800CC158
// size: 0x140
extern struct KEY_ASSIGNS txt_actions[20];

// address: 0x800CC0B0
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x8011B290
static int toppos;

// address: 0x8011D048
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800CC298
// size: 0xA0
static int AdvancedDefaults[2][20];

// address: 0x800CC338
// size: 0xA0
static int BeginnerDefaults[2][20];

// address: 0x8011B2E0
static bool waitnomore;

// address: 0x8011B324
extern bool penta_cycle;

// address: 0x8011B30C
extern int gr_scrxoff;

// address: 0x8011B310
extern int gr_scryoff;

// address: 0x8011B318
extern unsigned short water_clut;

// address: 0x8011B31C
extern char visible_level;

// address: 0x8011B309
extern char last_type;

// address: 0x8011B314
extern unsigned int water_count;

// address: 0x8011B31A
extern unsigned short penta_clut;

// address: 0x8011B31D
extern char daylight;

// address: 0x8011B320
extern int daytimer;

// address: 0x8011B334
static int TitleAnimCount;

// address: 0x8011B338
static int flametick;

// address: 0x800CC3D8
// size: 0x18
static int frmlist[6];

// address: 0x800CC3F0
// size: 0x18
static int xoff[6];

// address: 0x8011B33C
extern int flamecol;

// address: 0x800CC428
// size: 0x90
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x8011D058
// size: 0x240
static struct Particle PartArray[16];

// address: 0x8011C92C
static int partOtPos;

// address: 0x8011C930
static int partmonst;

// address: 0x8011B358
extern int SetParticle;

// address: 0x8011B35C
static int p1partexecnum;

// address: 0x8011B360
static int p2partexecnum;

// address: 0x800CC408
// size: 0x20
static int JumpArray[8];

// address: 0x8011B364
static int partjumpflag;

// address: 0x8011B368
static int partglowflag;

// address: 0x8011B36C
static int partcolour;

// address: 0x8011B370
static bool anyfuckingmenus;

// address: 0x8011B391
extern unsigned char select_flag;

// address: 0x8011C934
// size: 0x8
static struct RECT SelectRect;

// address: 0x8011C93C
static char item_select;

// address: 0x8011B394
// size: 0x2
extern char QSpell[2];

// address: 0x8011B398
// size: 0x2
extern char _spltotype[2];

// address: 0x8011B384
// size: 0x90
extern struct CPlayer *gplayer;

// address: 0x8011D298
// size: 0x10
static struct Dialog SelectBack;

// address: 0x8011B388
// size: 0x4
static char mana_order[4];

// address: 0x8011B38C
// size: 0x5
static char health_order[5];

// address: 0x8011D2A8
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x8011C940
static unsigned short progress;

// address: 0x800CC4B8
// size: 0x7C
extern struct CScreen CutScr;

// address: 0x8011B3B4
extern bool TitleFlag;

// address: 0x80110F4C
// size: 0x18
static unsigned short Level2CutScreen[12];

// address: 0x8011B3B8
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x8011B3BC
static bool GameLoading;

// address: 0x8011B3C0
static bool BootScreen;

// address: 0x8011B3C4
static int ThisLev;

// address: 0x800CC534
// size: 0x80
extern unsigned char block_buf[128];

// address: 0x8011B43C
extern unsigned int card_ev0;

// address: 0x8011B440
extern unsigned int card_ev1;

// address: 0x8011B444
extern unsigned int card_ev2;

// address: 0x8011B448
extern unsigned int card_ev3;

// address: 0x8011B44C
extern unsigned int card_ev10;

// address: 0x8011B450
extern unsigned int card_ev11;

// address: 0x8011B454
extern unsigned int card_ev12;

// address: 0x8011B458
extern unsigned int card_ev13;

// address: 0x8011B45C
// size: 0x8
extern int card_dirty[2];

// address: 0x8011B464
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8011B468
extern int save_blocks;

// address: 0x8011B46C
extern int card_event;

// address: 0x8011B470
extern int cardondelay;

// address: 0x8011B474
// size: 0x8
extern int card_active[2];

// address: 0x8011B47C
extern char *Savefilename;

// address: 0x8011B480
extern char *Loadfilename;

// address: 0x8011B484
// size: 0x8
extern bool new_card_flag[2];

// address: 0x8011B3E8
extern void (*mem_card_event_handler)();

// address: 0x8011B3D4
extern bool MemCardActive;

// address: 0x8011B3F8
extern bool DoLoadedGame;

// address: 0x8011B3D8
extern bool MemcardOverlay;

// address: 0x8011B3EC
extern int saveflag;

// address: 0x8011B3F0
extern int loadflag;

// address: 0x8011B3F4
extern int formatflag;

// address: 0x8011B3E0
extern int countdownloadcharblock;

// address: 0x8011B3FC
// size: 0x8
extern int card_side_empty[2];

// address: 0x8011B404
// size: 0x8
extern int card_side_read[2];

// address: 0x8011B40C
// size: 0x8
extern int card_side_nogame[2];

// address: 0x8011B414
// size: 0x8
extern int card_side_noopt[2];

// address: 0x8011B41C
// size: 0x8
extern int card_side_nocha[2];

// address: 0x8011B42C
// size: 0x8
extern int card_side_load[2];

// address: 0x8011B424
// size: 0x8
extern int card_side_save[2];

// address: 0x8011B434
// size: 0x8
extern int card_side_format[2];

// address: 0x8011B3DC
extern int NewCardFlag;

// address: 0x8011B3E4
static int never_hooked_events;

// address: 0x8011B4EC
extern unsigned long MasterVol;

// address: 0x8011B4F0
extern unsigned long MusicVol;

// address: 0x8011B4F4
extern unsigned long SoundVol;

// address: 0x8011B4F8
extern unsigned long VideoVol;

// address: 0x8011B4FC
extern unsigned long SpeechVol;

// address: 0x8011C944
// size: 0x70
static struct TextDat *Slider;

// address: 0x8011C948
static int sw;

// address: 0x8011C94C
static int sx;

// address: 0x8011C950
static int sy;

// address: 0x8011C954
static unsigned char Adjust_addr_8011C954;

// address: 0x8011C955
static unsigned char qspin;

// address: 0x8011C956
static unsigned char lqspin;

// address: 0x8011C958
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x8011C95C
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8011C960
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x8011B500
extern int ReturnMenu;

// address: 0x8011C964
// size: 0x8
static struct RECT ORect;

// address: 0x8011C96C
// size: 0x8
static char *McState[2];

// address: 0x8011B504
extern int they_pressed;

// address: 0x8011B4BC
extern bool optionsflag;

// address: 0x8011B4B0
extern int cmenu;

// address: 0x8011B4C4
extern int options_pad;

// address: 0x8011B4B8
extern bool allspellsflag;

// address: 0x800CD02C
// size: 0x80
extern short Circle[64];

// address: 0x8011B498
extern bool goldcheat;

// address: 0x8011B4C8
extern int OptionsSeed;

// address: 0x8011B4CC
extern bool OptionsSetSeed;

// address: 0x8011B4B4
extern bool CharacterBlockLoaded;

// address: 0x8011B49C
extern unsigned char Qfromoptions;

// address: 0x8011B4A0
static int Spacing;

// address: 0x8011B4A4
static int cs;

// address: 0x8011B4A8
static int lastcs;

// address: 0x8011B4AC
static int lastlastcs;

// address: 0x8011B4C0
extern int ReturnCards;

// address: 0x8011B4D0
extern bool DiabloDieFlag;

// address: 0x8011B4D4
extern bool PadFrig;

// address: 0x8011B4D8
// size: 0x5C
extern struct TASK *DrawOptionsTask;

// address: 0x800CC5B4
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800CC65C
// size: 0x120
extern struct OMENUITEM GameMenu[12];

// address: 0x800CC77C
// size: 0x60
extern struct OMENUITEM GameSpeedMenu[4];

// address: 0x800CC7DC
// size: 0x48
extern struct OMENUITEM GameOverMenu[3];

// address: 0x800CC824
// size: 0x60
extern struct OMENUITEM MemcardLoadGameOverMenu[4];

// address: 0x800CC884
// size: 0xA8
extern struct OMENUITEM SoundMenu[7];

// address: 0x800CC92C
// size: 0x48
extern struct OMENUITEM CentreMenu[3];

// address: 0x800CC974
// size: 0x90
extern struct OMENUITEM LangMenu[6];

// address: 0x800CCA04
// size: 0x60
extern struct OMENUITEM QuitMenu[4];

// address: 0x800CCA64
// size: 0x60
extern struct OMENUITEM AreYouSureMenu[4];

// address: 0x800CCAC4
// size: 0xA8
extern struct OMENUITEM MemcardMenu[7];

// address: 0x800CCB6C
// size: 0x60
extern struct OMENUITEM MemcardLoadGameMenu[4];

// address: 0x800CCBCC
// size: 0x60
extern struct OMENUITEM MemcardSaveGameMenu[4];

// address: 0x800CCC2C
// size: 0x60
extern struct OMENUITEM MemcardSaveOptionsMenu[4];

// address: 0x800CCC8C
// size: 0x60
extern struct OMENUITEM MemcardLoadOptionsMenu[4];

// address: 0x800CCCEC
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800CCD4C
// size: 0xC0
extern struct OMENUITEM MemcardSelectCard1[8];

// address: 0x800CCE0C
// size: 0xC0
extern struct OMENUITEM MemcardSelectCard2[8];

// address: 0x800CCECC
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800CCF2C
// size: 0x60
extern struct OMENUITEM SaveConfirmMenu[4];

// address: 0x800CCF8C
// size: 0xA0
extern struct OMENULIST MenuList[20];

// address: 0x8011B4DC
extern int MonoX;

// address: 0x8011B4E0
static bool debounce;

// address: 0x8011B4E4
static unsigned char KeyPos;

// address: 0x800CD0AC
// size: 0x14
static unsigned short KeyTab[10];

// address: 0x8011B4E8
extern int old_pad;

// address: 0x800CD0C0
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x8011C974
// size: 0x8
static int last_seenx[2];

// address: 0x8011C97C
// size: 0x8
static int last_seeny[2];

// address: 0x8011B511
extern char hop_height;

// address: 0x8011B514
// size: 0x8
static struct Perch perches[4];

// address: 0x8011B51C
static bool BirdFrig;

// address: 0x800CD240
// size: 0x30
extern struct FMVDAT FmvTab[6];

// address: 0x8011C984
// size: 0x4
static enum KANJI_FRMS KanjiCacheType;

// address: 0x8011D2D0
// size: 0x320
static struct vbuffS KanjiList[200];

// address: 0x8011C988
// size: 0xC
static struct ALL_DECOMP_BUFFERS *KanjiBuffers;

// address: 0x8011C98C
// size: 0xC
static struct FRAME_HDR *KanjiPalFrame;

// address: 0x8011D5F0
// size: 0x48DA
static unsigned char KanjiFontData[18650];

// address: 0x8011B538
// size: 0x70
static struct TextDat *KanjiGfxTData;

// address: 0x8011B53C
// size: 0x4
static struct vbuffS *KanjiCache;

// address: 0x8011B540
static int CacheLen;

// address: 0x8011B544
static bool KanjiLoaded;

// address: 0x8011C990
// size: 0x8
static struct RECT HelpRect;

// address: 0x8011C998
static unsigned char HelpTop;

// address: 0x8011C999
static char help_select_line;

// address: 0x8011B56C
extern bool displayinghelp;

// address: 0x80121EE0
// size: 0x10
static struct Dialog HelpBack;

// address: 0x8011B554
static bool helpflag;

// address: 0x800CD270
// size: 0x12C
static struct HelpStruct HelpList[25];

// address: 0x800CD39C
// size: 0x30
static int AutoSpellList[12];

// address: 0x8011B5D8
extern int FeBackX;

// address: 0x8011B5DC
extern int FeBackY;

// address: 0x8011B5E0
extern int FeBackW;

// address: 0x8011B5E4
extern int FeBackH;

// address: 0x8011B5E8
extern unsigned char FeFlag;

// address: 0x800CD8C4
// size: 0x780
extern struct FeStruct FeBuffer[80];

// address: 0x8011B5EC
extern int FePlayerNo;

// address: 0x8011C99C
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x8011B5F0
extern int FeBufferCount;

// address: 0x8011B5F4
extern int FeMaxBufferCount;

// address: 0x8011B5F8
extern int FeNoOfPlayers;

// address: 0x8011B5FC
// size: 0x2
extern unsigned char FePadInTab[2];

// address: 0x8011B5FE
extern unsigned char FePadInFlag;

// address: 0x8011B600
// size: 0x8
extern int FeChrClass[2];

// address: 0x800CE044
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x8011B608
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x8011B60C
extern int FeEnterLang;

// address: 0x8011B610
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x8011B614
extern unsigned long FeCount;

// address: 0x8011B618
extern int fileselect;

// address: 0x8011B61C
extern int BookMenu;

// address: 0x8011B620
extern int FMVPress;

// address: 0x8011B594
// size: 0x70
extern struct TextDat *FeTData;

// address: 0x8011B5AC
extern bool JustQuitQText;

// address: 0x8011B59C
// size: 0x8
extern bool LoadedChar[2];

// address: 0x8011B598
// size: 0x70
extern struct TextDat *FlameTData;

// address: 0x8011B5A4
extern unsigned char FeIsAVirgin;

// address: 0x8011B5A8
extern int FeMenuDelay;

// address: 0x800CD3CC
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800CD3E8
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800CD404
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800CD420
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800CD43C
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800CD458
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800CD474
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800CD490
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800CD4AC
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800CD4C8
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800CD4E4
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800CD500
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800CD51C
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800CD538
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x8011B5B0
static int fadeval;

// address: 0x800CD554
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800CD5CC
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800CD614
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800CD68C
// size: 0x28
extern unsigned char FeNameEngMenuTable[40];

// address: 0x800CD6B4
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800CD6FC
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800CD75C
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800CD7BC
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800CD834
// size: 0x90
extern struct FeMenuTable FeBook2MenuTable[6];

// address: 0x8011B5BC
static bool DrawBackOn;

// address: 0x8011B5C0
extern int FeAttractMode;

// address: 0x8011B5C4
extern int AttractNo;

// address: 0x8011B5C8
extern unsigned long AttractTitleDelay;

// address: 0x8011B5CC
extern unsigned long AttractMainDelay;

// address: 0x8011B5D0
extern int FMVEndPad;

// address: 0x8011B5D4
static int JustInCredits;

// address: 0x8011B630
extern int InCredits;

// address: 0x8011B634
extern int CreditTitleNo;

// address: 0x8011B638
extern int CreditSubTitleNo;

// address: 0x8011B650
// size: 0x8
extern int card_status[2];

// address: 0x8011B658
// size: 0x8
extern int card_usable[2];

// address: 0x8011B660
// size: 0x8
extern int card_files[2];

// address: 0x8011B668
// size: 0x8
extern int card_changed[2];

// address: 0x8011B670
// size: 0x8
extern int last_card_status[2];

// address: 0x8011B63C
extern int to_ascii_invalid_char;

// address: 0x8011B64F
extern char dirflag;

// address: 0x8011B6CC
extern int AlertTxt;

// address: 0x8011B6D0
extern int StatusTxt;

// address: 0x8011B6D4
extern int current_card;

// address: 0x8011B6D8
extern int LoadType;

// address: 0x8011B6DC
extern int McMenuPos;

// address: 0x8011B6E0
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x8011B69C
extern bool fileinfoflag;

// address: 0x8011B684
extern char *DiabloGameFile;

// address: 0x8011B688
extern char *DiabloOptionFile;

// address: 0x8011B68C
extern char *DiabloCharacterFile;

// address: 0x8011B694
// size: 0x8
extern char *McState_addr_8011B694[2];

// address: 0x8011B7B4
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x8011B7BC
extern int mdec_audio_sec;

// address: 0x8011B7C0
extern int mdec_audio_offs;

// address: 0x8011B7C4
extern int mdec_audio_playing;

// address: 0x8011B7C8
extern int mdec_audio_rate_shift;

// address: 0x8011B7CC
// size: 0x8
extern char *vlcbuf[2];

// address: 0x8011B7D4
extern int slice_size;

// address: 0x8011B7D8
// size: 0x8
extern struct RECT slice;

// address: 0x8011B7E0
extern int slice_inc;

// address: 0x8011B7E4
extern int area_pw;

// address: 0x8011B7E8
extern int area_ph;

// address: 0x8011B7EC
// size: 0x2
extern char tmdc_pol_dirty[2];

// address: 0x8011B7F0
// size: 0x8
extern int num_pol[2];

// address: 0x8011B7F8
extern int mdec_cx;

// address: 0x8011B7FC
extern int mdec_cy;

// address: 0x8011B800
extern int mdec_w;

// address: 0x8011B804
extern int mdec_h;

// address: 0x8011B808
// size: 0x8
extern int mdec_pw[2];

// address: 0x8011B810
// size: 0x8
extern int mdec_ph[2];

// address: 0x8011B818
extern int move_x;

// address: 0x8011B81C
extern int move_y;

// address: 0x8011B820
extern int move_scale;

// address: 0x8011B824
extern int stream_frames;

// address: 0x8011B828
extern int last_stream_frame;

// address: 0x8011B82C
extern int mdec_framecount;

// address: 0x8011B830
extern int mdec_speed;

// address: 0x8011B834
extern int mdec_stream_starting;

// address: 0x8011B838
extern int mdec_last_frame;

// address: 0x8011B83C
extern int mdec_sectors_per_frame;

// address: 0x8011B840
extern unsigned short *vlctab;

// address: 0x8011B844
extern unsigned char *mdc_buftop;

// address: 0x8011B848
extern unsigned char *mdc_bufstart;

// address: 0x8011B84C
extern int mdc_bufleft;

// address: 0x8011B850
extern int mdc_buftotal;

// address: 0x8011B854
extern int ordertab_length;

// address: 0x8011B858
extern int time_in_frames;

// address: 0x80121F40
// size: 0x20
static char FMVName[32];

// address: 0x8011B85C
extern int stream_chunksize;

// address: 0x8011B860
extern int stream_bufsize;

// address: 0x8011B864
extern int stream_subsec;

// address: 0x8011B868
extern int stream_secnum;

// address: 0x8011B86C
extern int stream_last_sector;

// address: 0x8011B870
extern int stream_startsec;

// address: 0x8011B874
extern int stream_opened;

// address: 0x8011B878
extern int stream_last_chunk;

// address: 0x8011B87C
extern int stream_got_chunks;

// address: 0x8011B880
extern int stream_subcode;

// address: 0x8011B884
extern int streampos;

// address: 0x8011B888
extern int last_sector;

// address: 0x8011B88C
extern int cdstream_resetsec;

// address: 0x8011B890
extern int last_handler_event;

// address: 0x80121F60
// size: 0x30
static int CreateEnv[12];

// address: 0x8011C9AC
static char *Passedfilename;

// address: 0x8011C9B0
static int Passedw;

// address: 0x8011C9B4
static int Passedh;

// address: 0x80121F90
// size: 0xC800
static unsigned char TempStack[51200];

// address: 0x8011B758
extern bool user_start;

// address: 0x8011B6F0
extern unsigned char *vlc_tab;

// address: 0x8011B6F4
extern unsigned char *vlc_buf;

// address: 0x8011B6F8
extern unsigned char *img_buf;

// address: 0x8011B6FC
extern int vbuf;

// address: 0x8011B700
extern int last_fn;

// address: 0x8011B704
extern int last_mdc;

// address: 0x8011B708
extern int slnum;

// address: 0x8011B70C
extern int slices_to_do;

// address: 0x8011B710
extern int mbuf;

// address: 0x8011B714
extern int mfn;

// address: 0x8011B718
extern int last_move_mbuf;

// address: 0x8011B71C
extern int move_request;

// address: 0x8011B720
extern int mdec_scale;

// address: 0x8011B724
extern int do_brightness;

// address: 0x8011B728
extern int frame_decoded;

// address: 0x8011B72C
extern int mdec_streaming;

// address: 0x8011B730
extern int mdec_stream_size;

// address: 0x8011B734
extern int first_stream_frame;

// address: 0x8011B738
extern int stream_frames_played;

// address: 0x8011B73C
extern int num_mdcs;

// address: 0x8011B740
extern int mdec_head;

// address: 0x8011B744
extern int mdec_tail;

// address: 0x8011B748
extern int mdec_waiting_tail;

// address: 0x8011B74C
extern int mdecs_queued;

// address: 0x8011B750
extern int mdecs_waiting;

// address: 0x8011B754
extern int sfx_volume;

// address: 0x8011B75C
static unsigned char DiabEnd;

// address: 0x8011B760
// size: 0x4
extern int (*stream_buf)[504];

// address: 0x8011B764
// size: 0x20
extern struct strheader *stream_bufh;

// address: 0x8011B768
extern int stream_chunks_in;

// address: 0x8011B76C
extern int stream_chunks_total;

// address: 0x8011B770
extern int stream_in;

// address: 0x8011B774
extern int stream_out;

// address: 0x8011B778
extern int stream_stalled;

// address: 0x8011B77C
extern int stream_ending;

// address: 0x8011B780
extern int stream_open;

// address: 0x8011B784
extern int stream_handler_installed;

// address: 0x8011B788
extern int stream_chunks_borrowed;

// address: 0x8011B78C
extern int _get_count;

// address: 0x8011B790
extern int _discard_count;

// address: 0x8011B794
extern void (*old_cdready_handler)();

// address: 0x8011B798
extern int cdready_calls;

// address: 0x8011B79C
extern int cdready_errors;

// address: 0x8011B7A0
extern int cdready_out_of_sync;

// address: 0x8011B7A4
extern int cdstream_resetting;

// address: 0x8011B7A8
extern int sector_dma;

// address: 0x8011B7AC
extern int sector_dma_in;

// address: 0x8011B7B0
extern int first_handler_event;

// address: 0x8011B920
extern unsigned char *pStatusPanel;

// address: 0x8011B924
extern unsigned char *pGBoxBuff;

// address: 0x8011B928
extern unsigned char dropGoldFlag;

// address: 0x8011B92C
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800CE55C
// size: 0x200
extern char _infostr[256][2];

// address: 0x8011B930
// size: 0x2
extern char _infoclr[2];

// address: 0x800CE75C
// size: 0x100
extern char tempstr[256];

// address: 0x8011B932
extern unsigned char drawhpflag;

// address: 0x8011B933
extern unsigned char drawmanaflag;

// address: 0x8011B934
extern unsigned char chrflag;

// address: 0x8011B935
extern unsigned char drawbtnflag;

// address: 0x8011B936
extern unsigned char panbtndown;

// address: 0x8011B937
extern unsigned char panelflag;

// address: 0x8011B938
extern unsigned char chrbtndown;

// address: 0x8011B939
extern unsigned char lvlbtndown;

// address: 0x8011B93A
extern unsigned char sbookflag;

// address: 0x8011B93B
extern unsigned char talkflag;

// address: 0x8011B93C
extern int dropGoldValue;

// address: 0x8011B940
extern int initialDropGoldValue;

// address: 0x8011B944
extern int initialDropGoldIndex;

// address: 0x8011B948
extern unsigned char *pPanelButtons;

// address: 0x8011B94C
extern unsigned char *pPanelText;

// address: 0x8011B950
extern unsigned char *pManaBuff;

// address: 0x8011B954
extern unsigned char *pLifeBuff;

// address: 0x8011B958
extern unsigned char *pChrPanel;

// address: 0x8011B95C
extern unsigned char *pChrButtons;

// address: 0x8011B960
extern unsigned char *pSpellCels;

// address: 0x8012E790
// size: 0x500
static char _panelstr[64][10][2];

// address: 0x8012EC90
// size: 0x50
static int _pstrjust[10][2];

// address: 0x8011C9B8
// size: 0x8
static int _pnumlines[2];

// address: 0x8011B964
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x8011B968
// size: 0x8
extern struct RECT CSRect;

// address: 0x8011C9C8
// size: 0x8
static int _pSpell[2];

// address: 0x8011C9D0
// size: 0x8
static int _pSplType[2];

// address: 0x8011B970
extern int numpanbtns;

// address: 0x8011B974
extern unsigned char *pDurIcons;

// address: 0x8011B978
extern unsigned char drawdurflag;

// address: 0x8011C9D8
// size: 0x8
static unsigned char chrbtn[4][2];

// address: 0x8011B979
extern unsigned char chrbtnactive;

// address: 0x8011B97C
extern unsigned char *pSpellBkCel;

// address: 0x8011B980
extern unsigned char *pSBkBtnCel;

// address: 0x8011B984
extern unsigned char *pSBkIconCels;

// address: 0x8011B988
extern int sbooktab;

// address: 0x8011B98C
// size: 0x8
extern int cur_spel[2];

// address: 0x8011C9E0
// size: 0x8
static int my_cur_spel[2];

// address: 0x8011C9E8
static long talkofs;

// address: 0x8012ECF0
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x8011C9EC
static unsigned char sgbTalkSavePos;

// address: 0x8011C9ED
static unsigned char sgbNextTalkSave;

// address: 0x8011C9EE
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x8011C9F0
static unsigned char *pTalkPanel;

// address: 0x8011C9F4
static unsigned char *pMultiBtns;

// address: 0x8011C9F8
static unsigned char *pTalkBtns;

// address: 0x8011C9FC
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x800CE070
// size: 0x25
extern char SpellITbl[37];

// address: 0x8011B89D
extern unsigned char DrawLevelUpFlag;

// address: 0x8011B8C4
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x8011B8C0
extern unsigned char spspelstate;

// address: 0x8011B8E0
extern bool initchr;

// address: 0x8011B8A0
static int SPLICONNO;

// address: 0x8011B8A4
static int SPLICONY;

// address: 0x8011C9C0
static int SPLICONRIGHT;

// address: 0x8011B8A8
static int scx;

// address: 0x8011B8AC
static int scy;

// address: 0x8011B8B0
static int scx1;

// address: 0x8011B8B4
static int scy1;

// address: 0x8011B8B8
static int scx2;

// address: 0x8011B8BC
static int scy2;

// address: 0x8011B8CC
extern char SpellCol;

// address: 0x800CE05C
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800CE098
// size: 0x64
extern int SpellPages[5][5];

// address: 0x8011B8D0
static int lus;

// address: 0x8011B8D4
static int CsNo;

// address: 0x8011B8D8
static char plusanim;

// address: 0x8012ECE0
// size: 0x10
static struct Dialog CSBack;

// address: 0x8011B8DC
static int CS_XOFF;

// address: 0x800CE0FC
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x8011B8E4
extern int NoCSEntries;

// address: 0x8011B8E8
static int SPALOFF;

// address: 0x8011B8EC
static int paloffset1;

// address: 0x8011B8F0
static int paloffset2;

// address: 0x8011B8F4
static int paloffset3;

// address: 0x8011B8F8
static int paloffset4;

// address: 0x8011B8FC
static int pinc1;

// address: 0x8011B900
static int pinc2;

// address: 0x8011B904
static int pinc3;

// address: 0x8011B908
static int pinc4;

// address: 0x8011B914
// size: 0x2
static unsigned char CrossCount[2];

// address: 0x8011B9A4
// size: 0x8
extern int _pcurs[2];

// address: 0x8011B9AC
extern int cursW;

// address: 0x8011B9B0
extern int cursH;

// address: 0x8011B9B4
extern int icursW;

// address: 0x8011B9B8
extern int icursH;

// address: 0x8011B9BC
extern int icursW28;

// address: 0x8011B9C0
extern int icursH28;

// address: 0x8011B9C4
extern int cursmx;

// address: 0x8011B9C8
extern int cursmy;

// address: 0x8011B9CC
// size: 0x8
extern int _pcursmonst[2];

// address: 0x8011B9D4
// size: 0x2
extern char _pcursobj[2];

// address: 0x8011B9D8
// size: 0x2
extern char _pcursitem[2];

// address: 0x8011B9DC
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x8011B9E0
// size: 0x2
extern char _pcursplr[2];

// address: 0x8011B9A0
extern int sel_data;

// address: 0x800CE85C
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x8011B9E4
extern int spurtndx;

// address: 0x8011B9E8
extern int stonendx;

// address: 0x8011B9EC
extern unsigned char *pSquareCel;

// address: 0x8011BA54
extern unsigned char svgamode;

// address: 0x8011BA58
extern int MouseX;

// address: 0x8011BA5C
extern int MouseY;

// address: 0x8011BA60
extern long gv1;

// address: 0x8011BA64
extern long gv2;

// address: 0x8011BA68
extern long gv3;

// address: 0x8011BA6C
extern long gv4;

// address: 0x8011BA70
extern long gv5;

// address: 0x8011BA74
extern unsigned char gbProcessPlayers;

// address: 0x800CE9D0
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800CE9F8
// size: 0xAB0
extern unsigned char pMegaTiles[2736];

// address: 0x800CF4A8
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800CF4EC
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x8011BA75
extern unsigned char gbDoEnding;

// address: 0x8011BA76
extern unsigned char gbRunGame;

// address: 0x8011BA77
extern unsigned char gbRunGameResult;

// address: 0x8011BA78
extern unsigned char gbGameLoopStartup;

// address: 0x8012ED40
// size: 0x44
static int glEndSeed[17];

// address: 0x8012ED90
// size: 0x44
static int glMid1Seed[17];

// address: 0x8012EDE0
// size: 0x44
static int glMid2Seed[17];

// address: 0x8012EE30
// size: 0x44
static int glMid3Seed[17];

// address: 0x8011CA00
static long *sg_previousFilter;

// address: 0x8012EE80
// size: 0x30
static int CreateEnv_addr_8012EE80[12];

// address: 0x8011CA04
static int Passedlvldir;

// address: 0x8011CA08
static unsigned char *TempStack_addr_8011CA08;

// address: 0x8011CA0C
static bool pauseo;

// address: 0x8011B9FC
extern unsigned long ghMainWnd;

// address: 0x8011BA00
extern unsigned char fullscreen;

// address: 0x8011BA04
extern int force_redraw;

// address: 0x8011BA18
extern unsigned char PauseMode;

// address: 0x8011BA19
extern unsigned char FriendlyMode;

// address: 0x8011BA09
extern unsigned char visiondebug;

// address: 0x8011BA0B
extern unsigned char light4flag;

// address: 0x8011BA0C
extern unsigned char leveldebug;

// address: 0x8011BA0D
extern unsigned char monstdebug;

// address: 0x8011BA14
extern int debugmonsttypes;

// address: 0x8011BA08
static unsigned char cineflag;

// address: 0x8011BA0A
extern unsigned char scrollflag;

// address: 0x8011BA0E
extern unsigned char trigdebug;

// address: 0x8011BA10
extern int setseed;

// address: 0x8011BA1C
static int sgnTimeoutCurs;

// address: 0x8011BA20
extern unsigned char sgbMouseDown;

// address: 0x8011BA4C
extern int LastFrCount;

// address: 0x8011BA50
// size: 0x4
extern enum GM_SPEEDS GameSpeed;

// address: 0x800CFBCC
// size: 0xC40
extern struct TownerStruct towner[16];

// address: 0x8011BA90
extern int numtowners;

// address: 0x8011BA94
extern unsigned char storeflag;

// address: 0x8011BA95
extern unsigned char boyloadflag;

// address: 0x8011BA96
extern unsigned char bannerflag;

// address: 0x8011BA98
extern unsigned char *pCowCels;

// address: 0x8011CA10
static unsigned long sgdwCowClicks;

// address: 0x8011CA14
static int sgnCowMsg;

// address: 0x800CF90C
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x8011BA88
extern unsigned long CowPlaying;

// address: 0x800CF530
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800CF8A8
// size: 0xC
extern int TownCowX[3];

// address: 0x800CF8B4
// size: 0xC
extern int TownCowY[3];

// address: 0x800CF8C0
// size: 0xC
extern int TownCowDir[3];

// address: 0x800CF8CC
// size: 0x20
extern int cowoffx[8];

// address: 0x800CF8EC
// size: 0x20
extern int cowoffy[8];

// address: 0x8011BAC4
extern int sfxdelay;

// address: 0x8011BAC8
extern int sfxdnum;

// address: 0x8011BAA8
// size: 0x84
extern struct SFXHDR *sghStream;

// address: 0x800D080C
// size: 0xF80
extern struct TSFX sgSFX[992];

// address: 0x8011BAAC
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x8011BAB0
static int SFXX;

// address: 0x8011BAB4
static int SFXY;

// address: 0x8011BAB8
static int SFXW;

// address: 0x8011BABC
static int SFXH;

// address: 0x8011BAC0
extern int mypan;

// address: 0x8011BACC
extern long orgseed;

// address: 0x8011CA18
static long sglGameSeed;

// address: 0x8011BAD0
extern int SeedCount;

// address: 0x8011CA1C
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8011CA20
static int sgnWidth;

// address: 0x8011BADF
extern char msgflag;

// address: 0x8011BAE0
extern char msgdelay;

// address: 0x800D183C
// size: 0x50
extern char msgtable[80];

// address: 0x800D178C
// size: 0xB0
extern int MsgStrings[44];

// address: 0x8011BADD
extern char msgholdflag;

// address: 0x8011BADE
extern char msgcnt;

// address: 0x8011CA24
static unsigned long sgdwProgress;

// address: 0x8011CA28
static unsigned long sgdwXY;

// address: 0x800D188C
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x80111620
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x801129C0
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x801136E0
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x801145E0
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800D1AA0
// size: 0x3600
extern struct ItemStruct item[128];

// address: 0x800D50A0
// size: 0x7F
extern char itemactive[127];

// address: 0x800D5120
// size: 0x7F
extern char itemavail[127];

// address: 0x800D51A0
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8011BB30
extern unsigned char uitemflag;

// address: 0x8011CA2C
static int tem;

// address: 0x8012EEB0
// size: 0x6C
static struct ItemStruct curruitem;

// address: 0x8012EF20
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x8012EF30
// size: 0x7F
static char itemactivelist[127];

// address: 0x8011BB34
extern int ScrollType;

// address: 0x800D5220
// size: 0x80
extern char OutStr[128];

// address: 0x8011BB38
// size: 0x20
extern struct ItemDataStruct *itemsave;

// address: 0x8011BAFC
extern long numitems;

// address: 0x8011BB00
extern int gnNumGetRecords;

// address: 0x800D19FC
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800D192C
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x801163F4
// size: 0x40
extern short SinTab[32];

// address: 0x80116468
// size: 0x46
static short Item2Frm[35];

// address: 0x800D19D8
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x8011BB04
extern int *ItemAnimSnds;

// address: 0x8011BB08
extern int idoppely;

// address: 0x8011BB0C
// size: 0x8
extern int ScrollFlag[2];

// address: 0x800D1A88
// size: 0x18
extern int premiumlvladd[6];

// address: 0x8011BB2C
extern bool FIRSTTIME;

// address: 0x800D604C
// size: 0x280
extern struct LightListStruct2 LightList[80];

// address: 0x800D62CC
// size: 0x50
extern unsigned char lightactive[80];

// address: 0x8011BB68
extern int numlights;

// address: 0x8011BB6C
extern char lightmax;

// address: 0x800D631C
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x8011BB70
extern int numvision;

// address: 0x8011BB74
extern unsigned char dovision;

// address: 0x8011BB78
extern int visionid;

// address: 0x8011CA30
static int disp_mask;

// address: 0x8011CA34
static int weird;

// address: 0x8011CA38
static int disp_tab_r;

// address: 0x8011CA3C
static int dispy_r;

// address: 0x8011CA40
static int disp_tab_g;

// address: 0x8011CA44
static int dispy_g;

// address: 0x8011CA48
static int disp_tab_b;

// address: 0x8011CA4C
static int dispy_b;

// address: 0x8011CA50
static int radius;

// address: 0x8011CA54
static int bright;

// address: 0x8011CA58
static int max_bright;

// address: 0x8012EFB0
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x800D5D60
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800D6014
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800D52A0
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x8011BB4C
extern int restore_r;

// address: 0x8011BB50
extern int restore_g;

// address: 0x8011BB54
extern int restore_b;

// address: 0x8011BB58
// size: 0x5
extern char light_level[5];

// address: 0x8011BB60
// size: 0x5
extern char level_lamp[5];

// address: 0x8011BB48
extern int weird_cheat;

// address: 0x800D602C
// size: 0x10
static char radius_tab[16];

// address: 0x800D603C
// size: 0x10
static char bright_tab[16];

// address: 0x8011BBB4
extern unsigned char qtextflag;

// address: 0x8011BBB8
extern int qtextSpd;

// address: 0x8011CA5C
static unsigned char *pMedTextCels;

// address: 0x8011CA60
static unsigned char *pTextBoxCels;

// address: 0x8011CA64
static char *qtextptr;

// address: 0x8011CA68
static int qtexty;

// address: 0x8011CA6C
static unsigned long qtextDelay;

// address: 0x8011CA70
static unsigned long sgLastScroll;

// address: 0x8011CA74
static unsigned long scrolltexty;

// address: 0x800D64EC
// size: 0x50
extern char MtPrevText[80];

// address: 0x8011CA78
static int TextNum;

// address: 0x8011CA7C
static bool qtextonflag;

// address: 0x8011BB88
static bool qtbodge;

// address: 0x800D64DC
// size: 0x10
extern struct Dialog QBack;

// address: 0x8011BB8C
static int textadj;

// address: 0x8011BB90
static int fetextadj;

// address: 0x8011BB94
static char FadeState;

// address: 0x8011BB98
static bool MusicFading;

// address: 0x8011BB9C
static int iBookName;

// address: 0x8011BBA8
extern int mytx;

// address: 0x8011BBAC
extern int myty;

// address: 0x8011BBB0
extern int TextWait;

// address: 0x800D653C
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800D6CAC
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800D6B9C
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800D6F08
// size: 0x1130
extern struct LocalLevel sgLocals[22];

// address: 0x8012F030
// size: 0x20
static struct DJunk sgJunk;

// address: 0x8011CA81
static unsigned char sgbRecvCmd;

// address: 0x8011CA84
static unsigned long sgdwRecvOffset;

// address: 0x8011CA88
static unsigned char sgbDeltaChunks;

// address: 0x8011CA89
static unsigned char sgbDeltaChanged;

// address: 0x8011CA8C
static unsigned long sgdwOwnerWait;

// address: 0x8011CA90
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x8011CA94
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8011CA98
static int sgnCurrMegaPlayer;

// address: 0x8011BBD1
extern unsigned char deltaload;

// address: 0x8011BBD2
extern unsigned char gbBufferMsgs;

// address: 0x8011BBD4
// size: 0x4
extern struct NoComp CompNoComp;

// address: 0x8011BBD8
// size: 0x4
extern struct PakComp CompPakComp;

// address: 0x8011BBDC
// size: 0x4
extern struct CrunchComp CompCrunchComp;

// address: 0x800D6D98
// size: 0x170
extern struct CompLevelMaps GameMaps;

// address: 0x8011BBE0
extern unsigned long dwRecCount;

// address: 0x8011BBF6
extern unsigned char gbMaxPlayers;

// address: 0x8011BBF7
extern unsigned char gbActivePlayers;

// address: 0x8011BBF8
extern unsigned char gbGameDestroyed;

// address: 0x8011BBF9
extern unsigned char gbDeltaSender;

// address: 0x8011BBFA
extern unsigned char gbSelectProvider;

// address: 0x8011BBFB
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x8011CA9C
static unsigned char sgbSentThisCycle;

// address: 0x8011CAA0
static unsigned long sgdwGameLoops;

// address: 0x8011CAA4
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x8011CAA8
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x8011CAAC
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x8011CAB4
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x8011CABC
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x8011CAC4
static unsigned char sgbTimeout;

// address: 0x8011CAC8
static long sglTimeoutStart;

// address: 0x8011BBF0
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x8011BBF5
static unsigned char sgbNetInited;

// address: 0x800D8038
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800D81FC
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80116C64
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800D8998
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x8011BC20
extern long numobjects;

// address: 0x800D9F6C
// size: 0x7F
extern char objectactive[127];

// address: 0x800D9FEC
// size: 0x7F
extern char objectavail[127];

// address: 0x8011BC24
extern unsigned char InitObjFlag;

// address: 0x8011BC28
extern int trapid;

// address: 0x800DA06C
// size: 0x28
extern char ObjFileList[40];

// address: 0x8011BC2C
extern int trapdir;

// address: 0x8011BC30
extern int leverid;

// address: 0x8011BC14
extern int numobjfiles;

// address: 0x800D88F4
// size: 0x20
extern int bxadd[8];

// address: 0x800D8914
// size: 0x20
extern int byadd[8];

// address: 0x800D8968
// size: 0x1A
extern char shrineavail[26];

// address: 0x800D8934
// size: 0x34
extern unsigned short shrinestrs[26];

// address: 0x800D8984
// size: 0x12
extern unsigned short StoryBookName[9];

// address: 0x8011BC18
extern int myscale;

// address: 0x8011BC44
extern unsigned char gbValidSaveFile;

// address: 0x8011BC40
extern bool DoLoadedChar;

// address: 0x800DA284
// size: 0x33D0
extern struct PlayerStruct plr[2];

// address: 0x8011BC5C
extern int myplr;

// address: 0x8011BC60
extern unsigned char deathflag;

// address: 0x8011CACC
// size: 0x2
static char deathdelay2[2];

// address: 0x8011BC61
extern char light_rad;

// address: 0x8011BC64
// size: 0x8
extern int PlayerDeathCount[2];

// address: 0x8011BC6C
// size: 0x8
extern int PlayerEar[2];

// address: 0x800DA184
// size: 0x30
extern int MaxStats[4][3];

// address: 0x8011BC54
static int PlrStructSize;

// address: 0x8011BC58
static int ItemStructSize;

// address: 0x800DA094
// size: 0x24
extern int plrxoff[9];

// address: 0x800DA0B8
// size: 0x24
extern int plryoff[9];

// address: 0x800DA0DC
// size: 0x24
extern int plrxoff2[9];

// address: 0x800DA100
// size: 0x24
extern int plryoff2[9];

// address: 0x800DA124
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800DA148
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800DA154
// size: 0xC
extern int MagicTbl[3];

// address: 0x800DA160
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800DA16C
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800DA178
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800DA1B4
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800DD78C
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x8011BCA4
extern unsigned char *pQLogCel;

// address: 0x8011BCA8
extern int ReturnLvlX;

// address: 0x8011BCAC
extern int ReturnLvlY;

// address: 0x8011BCB0
extern int ReturnLvl;

// address: 0x8011BCB4
extern int ReturnLvlT;

// address: 0x8011BCB8
extern unsigned char rporttest;

// address: 0x8011BCBC
extern int qline;

// address: 0x8011BCC0
extern int numqlines;

// address: 0x8011BCC4
extern int qtopline;

// address: 0x8012F050
// size: 0x40
static int qlist[16];

// address: 0x8011CAD0
// size: 0x8
static struct RECT QSRect;

// address: 0x8011BC7D
extern unsigned char questlog;

// address: 0x800DD654
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x8011BC80
extern int ALLQUESTS;

// address: 0x800DD768
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800DD774
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800DD780
// size: 0xC
extern int QuestGroup3[3];

// address: 0x8011BC84
// size: 0x8
extern int QuestGroup4[2];

// address: 0x8011BC9C
extern bool WaterDone;

// address: 0x800DD754
// size: 0x14
extern int questtrigstr[5];

// address: 0x8011BC8C
static int QS_PX;

// address: 0x8011BC90
static int QS_PY;

// address: 0x8011BC94
static int QS_PW;

// address: 0x8011BC98
static int QS_PH;

// address: 0x8012F090
// size: 0x10
static struct Dialog QSBack;

// address: 0x8011BCA0
static int qtoffset;

// address: 0x800DD8CC
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x8011BD08
extern int StorePlrNo;

// address: 0x800DE174
// size: 0x10E0
extern struct ItemStruct _smithitem[20][2];

// address: 0x800DF254
// size: 0x510
extern struct ItemStruct _premiumitem[6][2];

// address: 0x8011BD0C
// size: 0x8
extern int _numpremium[2];

// address: 0x8011BD14
// size: 0x8
extern int _premiumlevel[2];

// address: 0x800DF764
// size: 0x10E0
extern struct ItemStruct _witchitem[20][2];

// address: 0x8011BD1C
// size: 0x8
extern int _NoWitchItems[2];

// address: 0x8011BD24
// size: 0x8
extern int _WitchIdxOfs[2];

// address: 0x800E0844
// size: 0xD8
extern struct ItemStruct _boyitem[2];

// address: 0x8011BD2C
// size: 0x8
extern int _boylevel[2];

// address: 0x800E091C
// size: 0x10E0
extern struct ItemStruct _healitem[20][2];

// address: 0x800E19FC
// size: 0xD8
extern struct ItemStruct _golditem[2];

// address: 0x8011BD34
extern char stextflag;

// address: 0x8011BD35
extern char stextsize;

// address: 0x8011BD36
extern unsigned char stextscrl;

// address: 0x8011CAD8
static int stextsel;

// address: 0x8011CADC
static int stextlhold;

// address: 0x8011CAE0
static int stextshold;

// address: 0x8011CAE4
static int stextvhold;

// address: 0x8011CAE8
static int stextsval;

// address: 0x8011CAEC
static int stextsmax;

// address: 0x8011CAF0
static int stextup;

// address: 0x8011CAF4
static int stextdown;

// address: 0x8011CAF8
static char stextscrlubtn;

// address: 0x8011CAF9
static char stextscrldbtn;

// address: 0x8011CAFA
static char SItemListFlag;

// address: 0x8012F0A0
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x8011CAFC
static int storenumh;

// address: 0x8011CB00
static int gossipstart;

// address: 0x8011CB04
static int gossipend;

// address: 0x8011CB08
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x8011CB10
// size: 0x8
static struct RECT StoreBackRectClipper;

// address: 0x8011BD38
extern int SmithItemCount;

// address: 0x800E1AD4
// size: 0x1440
extern struct ItemStruct storehold[48];

// address: 0x800E2F14
// size: 0x30
extern char storehidx[48];

// address: 0x8011BD3C
extern int SellIdx;

// address: 0x8011CB18
static int talker;

// address: 0x8011BD40
extern int SWrapCount;

// address: 0x8011BCEC
extern unsigned char *pSTextBoxCels;

// address: 0x8011BCF0
extern unsigned char *pSTextSlidCels;

// address: 0x8011BCF8
extern int *SStringY;

// address: 0x800DE050
// size: 0x10
extern struct Dialog SBack;

// address: 0x8011BCF4
extern char WStaffFlag;

// address: 0x8011BCF5
extern char WFlag;

// address: 0x800DE060
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800DE0B0
// size: 0x50
extern int SStringYBuy0[20];

// address: 0x800DE100
// size: 0x50
extern int SStringYBuy1[20];

// address: 0x800DE150
// size: 0x24
extern int talkname[9];

// address: 0x8011BD07
extern unsigned char InStoreFlag;

// address: 0x80117E94
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x8011BD50
extern unsigned long gdwAllTextEntries;

// address: 0x8011CB1C
static unsigned char *P3Tiles;

// address: 0x8011BD60
extern int tile;

// address: 0x8011BDC8
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800E3118
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x8011BDCC
extern int numtrigs;

// address: 0x8011BDD0
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x8011BDD4
extern int TWarpFrom;

// address: 0x800E3168
// size: 0x200
extern short TrigList[64][4];

// address: 0x800E3368
// size: 0x280
extern struct BLOCK BlockList[160];

// address: 0x8011BD9C
extern bool FRIGFLAG;

// address: 0x800E2F44
// size: 0x16
extern short TownDownList[11];

// address: 0x800E2F5C
// size: 0x1A
extern short TownWarp1List[13];

// address: 0x800E2F78
// size: 0x2E
extern short TownWarp2List[23];

// address: 0x800E2FA8
// size: 0x22
extern short TownWarp3List[17];

// address: 0x800E2FCC
// size: 0x18
extern short L1UpList[12];

// address: 0x800E2FE4
// size: 0x14
extern short L1DownList[10];

// address: 0x8011BD70
// size: 0x6
extern short L2UpList[3];

// address: 0x800E2FF8
// size: 0xA
extern short L2DownList[5];

// address: 0x8011BD78
// size: 0x6
extern short L2TWarpUpList[3];

// address: 0x800E3004
// size: 0x1E
extern short L3UpList[15];

// address: 0x800E3024
// size: 0x12
extern short L3DownList[9];

// address: 0x800E3038
// size: 0x1C
extern short L3TWarpUpList[14];

// address: 0x8011BD80
// size: 0x8
extern short L4UpList[4];

// address: 0x800E3054
// size: 0xC
extern short L4DownList[6];

// address: 0x8011BD88
// size: 0x8
extern short L4TWarpUpList[4];

// address: 0x800E3060
// size: 0x42
extern short L4PentaList[33];

// address: 0x800E30A4
// size: 0x52
extern short L1BlockList[41];

// address: 0x800E30F8
// size: 0x12
extern short L2BlockList[9];

// address: 0x800E310C
// size: 0xA
extern short L3BlockList[5];

// address: 0x8011BD90
// size: 0x4
extern short L4BlockList[2];

// address: 0x8011BD94
static int NoBlocks;

// address: 0x8011BD98
static short *levlist;

// address: 0x8011BDA0
static int FRIGCheat;

// address: 0x8011BDA4
static int FRIGTime;

// address: 0x8011BDA8
static int FRIGState;

// address: 0x8011BDAC
static int FRIGFlip;

// address: 0x8011BDB0
static int FRIGFlipit;

// address: 0x8011BDB4
static int FRIGFirst;

// address: 0x8011BDB8
extern int FRIGX;

// address: 0x8011BDBC
extern int FRIGY;

// address: 0x8011BDC0
extern int FRIGZ;

// address: 0x8011BDC4
extern int fot;

// address: 0x8011BDED
extern unsigned char gbSndInited;

// address: 0x8011BDF0
extern long sglMasterVolume;

// address: 0x8011BDF4
extern long sglMusicVolume;

// address: 0x8011BDF8
extern long sglSoundVolume;

// address: 0x8011BDFC
extern long sglSpeechVolume;

// address: 0x8011BE00
extern int sgnMusicTrack;

// address: 0x8011BE04
extern bool MONO;

// address: 0x8011BDEE
extern unsigned char gbDupSounds;

// address: 0x8011BE08
// size: 0x84
extern struct SFXHDR *sghMusic;

// address: 0x800E35E8
// size: 0xC
extern unsigned short sgszMusicTracks[6];

// address: 0x8011BE28
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800E35F4
// size: 0x3C
extern struct found_objects _pfind_list[10][2];

// address: 0x8011BE30
// size: 0x2
extern char _pfind_index[2];

// address: 0x8011BE32
extern unsigned char automapmoved;

// address: 0x8011BE15
extern unsigned char flyflag;

// address: 0x8011BE18
// size: 0x2
extern unsigned char _SpdBeltSelFlag[2];

// address: 0x8011BE24
extern bool ignore_buttons;

// address: 0x8012FDC0
// size: 0xD4
static struct GamePad GPad1;

// address: 0x8012FEA0
// size: 0xD4
static struct GamePad GPad2;

// address: 0x8011BE1C
static int HappyManFlag;

// address: 0x8011BE20
static char seen_combo;

// address: 0x8011CB20
static unsigned long (*CurrentProc)();

// address: 0x80118E4C
// size: 0x58
static struct MESSAGE_STR AllMsgs[11];

// address: 0x8011BE6C
extern int NumOfStrings;

// address: 0x8011BE48
extern char **TextPtr;

// address: 0x8011BE40
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x8011BE44
extern long hndText;

// address: 0x8011BE4C
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x8011BE7C
// size: 0x70
extern struct TextDat *MissDat;

// address: 0x800E3710
// size: 0x10
extern char MlTab[16];

// address: 0x800E3720
// size: 0x10
extern char QlTab[16];

// address: 0x8012FF78
// size: 0x60
static struct CINDER Cinders[16];

// address: 0x800E3730
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x8011BE98
static int lasttick;

// address: 0x8011BE9C
static bool FireInit;

// address: 0x8011BEA0
static bool FirstFire;

// address: 0x800E38B8
// size: 0x40
extern struct DoorOff DoorOffsets[4][4];

// address: 0x8011BEA4
extern int lox;

// address: 0x8011BEA8
extern int loy;

// address: 0x8011BEAC
extern int lot;

// address: 0x8011BEB9
static unsigned char sgbFadedIn;

// address: 0x8011BEBA
static unsigned char screenbright;

// address: 0x8011BEBC
static int faderate;

// address: 0x8011BEC0
static bool fading;

// address: 0x8011BEC4
static int FADE_OT;

// address: 0x8011BED0
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x8011BED8
// size: 0x8
static unsigned char FadeCoords2[8];

// address: 0x8011BEC8
extern int st;

// address: 0x8011BECC
extern int mode;

// address: 0x800E38F8
// size: 0x10
extern unsigned char AmLTab[16];

// address: 0x800E3908
// size: 0x10
extern unsigned char AmRTab[16];

// address: 0x800E3938
// size: 0x30
extern struct PortalStruct portal[4];

// address: 0x8011CB24
static int portalindex;

// address: 0x800E3918
// size: 0x10
static int WarpDropX[4];

// address: 0x800E3928
// size: 0x10
static int WarpDropY[4];

// address: 0x800E3968
// size: 0x78
extern char MyVerString[120];

// address: 0x8011C068
extern int Year;

// address: 0x8011C06C
extern int Day;

// address: 0x8011C088
extern bool iscflag;

// address: 0x8011C098
extern short *dPiece;

// address: 0x8011CB28
static unsigned char *tbuff;

// address: 0x800E3A0C
// size: 0x300
extern unsigned char IconBuffer[768];

// address: 0x800E39E0
// size: 0xB
static char DiabloStr[11];

// address: 0x800E39EC
// size: 0x13
static char SaveCharName[19];

// address: 0x800E3A00
// size: 0xB
static char OptSaveName[11];

// address: 0x8011C0AE
extern unsigned char ADirtyFlagThatGaryWillLove;

// address: 0x8011C0B0
extern int DirtyVidx;

// address: 0x8011C0B4
extern int DirtyVidY;

// address: 0x8011CB2C
static unsigned char HR1;

// address: 0x8011CB2D
static unsigned char HR2;

// address: 0x8011CB2E
static unsigned char HR3;

// address: 0x8011CB2F
static unsigned char VR1;

// address: 0x8011CB30
static unsigned char VR2;

// address: 0x8011CB31
static unsigned char VR3;

// address: 0x8011C11C
// size: 0x18
extern struct NODE *pHallList;

// address: 0x8011C120
extern int nRoomCnt;

// address: 0x8011C124
extern int nSx1;

// address: 0x8011C128
extern int nSy1;

// address: 0x8011C12C
extern int nSx2;

// address: 0x8011C130
extern int nSy2;

// address: 0x8011C0D0
extern int Area_Min;

// address: 0x8011C0D4
extern int Room_Max;

// address: 0x8011C0D8
extern int Room_Min;

// address: 0x8011C0DC
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x8011C0E4
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x8011C0EC
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x8011C0F4
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x8011C0FC
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x8011C100
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x8011C104
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x8011C108
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x8011C10C
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x8011C110
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x8011C114
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x8011C118
extern int myk;

// address: 0x8011CB34
static int abyssx;

// address: 0x8011CB38
static unsigned char lavapool;

// address: 0x8011C1BC
extern int lockoutcnt;

// address: 0x8011C140
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x8011C148
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x8011C150
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x8011C158
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x8011C160
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x8011C168
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x8011C170
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x8011C178
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x8011C180
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x8011C188
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x8011C190
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x8011C198
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x8011C1A0
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x8011C1A8
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x8011C1AC
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x8011C1B0
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x8011C1B4
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x8011C1B8
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x8011C1D0
extern int diabquad1x;

// address: 0x8011C1D4
extern int diabquad2x;

// address: 0x8011C1D8
extern int diabquad3x;

// address: 0x8011C1DC
extern int diabquad4x;

// address: 0x8011C1E0
extern int diabquad1y;

// address: 0x8011C1E4
extern int diabquad2y;

// address: 0x8011C1E8
extern int diabquad3y;

// address: 0x8011C1EC
extern int diabquad4y;

// address: 0x8011C1F0
extern int SP4x1;

// address: 0x8011C1F4
extern int SP4y1;

// address: 0x8011C1F8
extern int SP4x2;

// address: 0x8011C1FC
extern int SP4y2;

// address: 0x8011C200
extern int l4holdx;

// address: 0x8011C204
extern int l4holdy;

// address: 0x8011CB3C
static unsigned char *lpSetPiece1;

// address: 0x8011CB40
static unsigned char *lpSetPiece2;

// address: 0x8011CB44
static unsigned char *lpSetPiece3;

// address: 0x8011CB48
static unsigned char *lpSetPiece4;

// address: 0x8011CB4C
static unsigned char *lppSetPiece2;

// address: 0x8011CB50
static unsigned char *lppSetPiece3;

// address: 0x8011CB54
static unsigned char *lppSetPiece4;

// address: 0x8011C1CC
static int recurs;

// address: 0x8011C214
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x8011C21C
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800E3D0C
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800E3D20
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800E3D3C
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8011C224
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800E3D50
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x8011C310
static bool DoUiForChooseMonster;

// address: 0x800E3D74
// size: 0x88
static char *MgToText[34];

// address: 0x800E3DFC
// size: 0x12
extern unsigned short StoryText[3][3];

// address: 0x800E3E10
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800E5010
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x8011C338
extern int setpc_x;

// address: 0x8011C33C
extern int setpc_y;

// address: 0x8011C340
extern int setpc_w;

// address: 0x8011C344
extern int setpc_h;

// address: 0x8011C348
extern unsigned char setloadflag;

// address: 0x800E5650
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800E5E54
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800E6658
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800E6E5C
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x8011C34C
extern int dminx;

// address: 0x8011C350
extern int dminy;

// address: 0x8011C354
extern int dmaxx;

// address: 0x8011C358
extern int dmaxy;

// address: 0x8011C35C
extern int gnDifficulty;

// address: 0x8011C360
extern unsigned char currlevel;

// address: 0x8011C361
extern unsigned char leveltype;

// address: 0x8011C362
extern unsigned char setlevel;

// address: 0x8011C363
extern unsigned char setlvlnum;

// address: 0x8011C364
extern unsigned char setlvltype;

// address: 0x8011C368
extern int ViewX;

// address: 0x8011C36C
extern int ViewY;

// address: 0x8011C370
extern int ViewDX;

// address: 0x8011C374
extern int ViewDY;

// address: 0x8011C378
extern int ViewBX;

// address: 0x8011C37C
extern int ViewBY;

// address: 0x800E7660
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x8011C380
extern int LvlViewX;

// address: 0x8011C384
extern int LvlViewY;

// address: 0x8011C388
extern int btmbx;

// address: 0x8011C38C
extern int btmby;

// address: 0x8011C390
extern int btmdx;

// address: 0x8011C394
extern int btmdy;

// address: 0x8011C398
extern int MicroTileLen;

// address: 0x8011C39C
extern char TransVal;

// address: 0x800E7674
// size: 0x100
extern unsigned char TransList[256];

// address: 0x8011C3A0
extern int themeCount;

// address: 0x800E7774
// size: 0x18800
extern struct map_info dung_map[112][112];

// address: 0x800FFF74
// size: 0xC40
extern unsigned char dung_map_r[56][56];

// address: 0x80100BB4
// size: 0xC40
extern unsigned char dung_map_g[56][56];

// address: 0x801017F4
// size: 0xC40
extern unsigned char dung_map_b[56][56];

// address: 0x80102434
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x8011C32C
extern unsigned char *mydflags;

// address: 0x8011C330
extern unsigned char *pSetPiece;

// address: 0x8011C334
extern int DungSize;

// address: 0x80102600
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x8011C3E0
extern int numthemes;

// address: 0x8011C3E4
extern int zharlib;

// address: 0x8011C3E8
extern unsigned char armorFlag;

// address: 0x8011C3E9
extern unsigned char bCrossFlag;

// address: 0x8011C3EA
extern unsigned char weaponFlag;

// address: 0x8011C3EC
extern int themex;

// address: 0x8011C3F0
extern int themey;

// address: 0x8011C3F4
extern int themeVar1;

// address: 0x8011C3F8
extern unsigned char bFountainFlag;

// address: 0x8011C3F9
extern unsigned char cauldronFlag;

// address: 0x8011C3FA
extern unsigned char mFountainFlag;

// address: 0x8011C3FB
extern unsigned char pFountainFlag;

// address: 0x8011C3FC
extern unsigned char tFountainFlag;

// address: 0x8011C3FD
extern unsigned char treasureFlag;

// address: 0x8011C400
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x801024E0
// size: 0x10
extern int ThemeGood[4];

// address: 0x801024F0
// size: 0x64
extern int trm5x[25];

// address: 0x80102554
// size: 0x64
extern int trm5y[25];

// address: 0x801025B8
// size: 0x24
extern int trm3x[9];

// address: 0x801025DC
// size: 0x24
extern int trm3y[9];

// address: 0x8011C454
// size: 0x70
extern struct TextDat *AutoMapTData;

// address: 0x8012FFD8
// size: 0x200
static unsigned char AmpBuffer[512];

// address: 0x8011C4DC
extern int nummissiles;

// address: 0x80102818
// size: 0xFA
extern short missileactive[125];

// address: 0x80102914
// size: 0xFA
extern short missileavail[125];

// address: 0x8011C4E0
extern unsigned char MissilePreFlag;

// address: 0x80102A10
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x8011C4E1
extern unsigned char ManashieldFlag;

// address: 0x8011C4E2
extern unsigned char ManashieldFlag2;

// address: 0x80105120
// size: 0x80
extern char dMissArray[4][32];

// address: 0x80102790
// size: 0x20
extern int XDirAdd[8];

// address: 0x801027B0
// size: 0x20
extern int YDirAdd[8];

// address: 0x8011C4A9
extern unsigned char fadetor;

// address: 0x8011C4AA
extern unsigned char fadetog;

// address: 0x8011C4AB
extern unsigned char fadetob;

// address: 0x801027D0
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x801027E0
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x80105340
// size: 0x5028
extern struct MonsterStruct monster[190];

// address: 0x8011C520
extern long nummonsters;

// address: 0x8010A368
// size: 0x17C
extern short monstactive[190];

// address: 0x8010A4E4
// size: 0x17C
extern short monstkills[190];

// address: 0x8010A660
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x8011C524
extern long monstimgtot;

// address: 0x8011C528
extern unsigned char totalmonsters;

// address: 0x8011C52C
extern int uniquetrans;

// address: 0x8011CB58
static unsigned char sgbSaveSoundOn;

// address: 0x8011C4FC
// size: 0x8
extern char offset_x[8];

// address: 0x8011C504
// size: 0x8
extern char offset_y[8];

// address: 0x8011C4F0
extern int nummtypes;

// address: 0x8011C4F4
// size: 0x7
extern char animletter[7];

// address: 0x801051A0
// size: 0x120
extern int MWVel[3][24];

// address: 0x801052C0
// size: 0x80
extern void (*AiProc[32])();

// address: 0x8010AA38
// size: 0x308
extern int UniqTransPals[194];

// address: 0x8010AE40
// size: 0x1A7C
extern struct MonsterData monsterdata[113];

// address: 0x8010C8BC
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x8010C93C
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x8010C9AC
// size: 0x900
extern struct UniqMonstStruct UniqMonst[96];

// address: 0x8010A820
// size: 0x218
extern int TransPals[134];

// address: 0x8010AD40
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x8011C580
extern unsigned char invflag;

// address: 0x8011C581
extern unsigned char drawsbarflag;

// address: 0x8011C584
extern int InvBackY;

// address: 0x8011C588
extern int InvCursPos;

// address: 0x8011C58C
extern int InvPageNo;

// address: 0x8011C590
extern int InvPageFlag;

// address: 0x8010D924
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x8011C594
extern int InvBackAY;

// address: 0x8011C598
extern int InvSel;

// address: 0x8011C59C
extern int ItemW;

// address: 0x8011C5A0
extern int ItemH;

// address: 0x8011C5A4
extern int ItemNo;

// address: 0x8011C5A8
// size: 0x8
extern struct RECT BRect;

// address: 0x8011C55C
// size: 0x70
extern struct TextDat *InvPanelTData;

// address: 0x8011C560
// size: 0x70
extern struct TextDat *InvGfxTData;

// address: 0x8010D51C
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x8011C548
static int clipit;

// address: 0x8011C54C
static int backot;

// address: 0x8011C550
static int slotot;

// address: 0x8011C554
static int slotbackot;

// address: 0x8011C558
static int itemot;

// address: 0x8010D2AC
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8010D2D4
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x8010D7BC
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x8010D870
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x8011C564
extern int CursGlow;

// address: 0x8011C568
extern int CursGlowDx;

// address: 0x8011C578
static bool InvOn;

// address: 0x8011C57C
static unsigned long sgdwLastTime;

// address: 0x8011C5CF
extern unsigned char automapflag;

// address: 0x8010D988
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x8010DA50
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8011C5D0
extern int AutoMapX;

// address: 0x8011C5D4
extern int AutoMapY;

// address: 0x8011C5D8
extern int AutoMapXOfs;

// address: 0x8011C5DC
extern int AutoMapYOfs;

// address: 0x8011C5E0
extern int AMPlayerX;

// address: 0x8011C5E4
extern int AMPlayerY;

// address: 0x8011C5E8
// size: 0x8
extern int AMPx[2];

// address: 0x8011C5F0
// size: 0x8
extern int AMPy[2];

// address: 0x8011C5BC
extern int AutoMapScale;

// address: 0x8011C5C0
static int AutoMapOt;

// address: 0x8010D970
// size: 0x18
static int SetLevelName[6];

// address: 0x8011CBE0
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x8011CBE4
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x8011CBE8
// size: 0x5C
static struct TASK *T;

// address: 0x8011CBEC
static unsigned long MemTypeForTasker;

// address: 0x801327F8
// size: 0x30
static int SchEnv[12];

// address: 0x8011CBF0
static unsigned long ExecId;

// address: 0x8011CBF4
static unsigned long ExecMask;

// address: 0x8011CBF8
static int TasksActive;

// address: 0x8011CBFC
static void (*EpiFunc)();

// address: 0x8011CC00
static void (*ProFunc)();

// address: 0x8011CC04
static unsigned long EpiProId;

// address: 0x8011CC08
static unsigned long EpiProMask;

// address: 0x8011CC0C
static void (*DoTasksPrologue)();

// address: 0x8011CC10
static void (*DoTasksEpilogue)();

// address: 0x8011CC14
static void (*StackFloodCallback)();

// address: 0x8011CC18
static unsigned char ExtraStackProtection;

// address: 0x8011CC1C
static int ExtraStackSizeLongs;

// address: 0x8011CCB4
extern unsigned long GazTick;

// address: 0x80135440
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800B60A8
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x8011CCDC
extern void (*PollFunc)();

// address: 0x8011CCC0
extern void (*MsgFunc)();

// address: 0x8011CD0C
extern void (*ErrorFunc)();

// address: 0x8011CCC8
extern void *LastPtr;

// address: 0x800B60E0
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8011CC20
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x80132828
// size: 0x15E0
static struct MEM_HDR MemHdrBlocks[200];

// address: 0x8011CC24
// size: 0x1C
static struct MEM_HDR *FreeBlocks;

// address: 0x8011CC28
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x8011CC2C
static int TimeStamp;

// address: 0x8011CC30
static unsigned char FullErrorChecking;

// address: 0x8011CC34
static unsigned long LastAttemptedAlloc;

// address: 0x8011CC38
static unsigned long LastDeallocedBlock;

// address: 0x8011CC3C
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x8011CC40
static int NumOfFreeHdrs;

// address: 0x8011CC44
static unsigned long LastTypeAlloced;

// address: 0x8011CC48
static void (*AllocFilter)();

// address: 0x800B60E8
// size: 0x28
extern char *GalErrors[10];

// address: 0x800B6110
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80133E08
// size: 0x1380
static char buf[4992];

// address: 0x800B6138
// size: 0x7
static char NULL_REP[7];

// address: 0x80082E48
// line start: 177
// line end:   178
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x80082E64
// line start: 182
// line end:   183
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x80082E70
// line start: 116
// line end:   125
void Remove96__Fv() {
}


// address: 0x80082EA8
// line start: 141
// line end:   263
void AppMain() {
}


// address: 0x80082F6C
// line start: 271
// line end:   272
void MAIN_RestartGameTask__Fv() {
}


// address: 0x80082F98
// line start: 354
// line end:   429
void GameTask__FP4TASK(struct TASK *T) {
	{
		{
			{
			}
		}
	}
}


// address: 0x800830A4
// line start: 443
// line end:   455
void MAIN_MainLoop__Fv() {
}


// address: 0x800830F8
// line start: 76
// line end:   80
void CheckMaxArgs__Fv() {
}


// address: 0x8008312C
// line start: 96
// line end:   98
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x80083138
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


// address: 0x800832AC
// line start: 159
// line end:   178
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x80083360
// line start: 220
// line end:   239
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x80083400
// line start: 249
// line end:   266
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8008349C
// line start: 276
// line end:   287
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8008353C
// line start: 143
// line end:   180
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


// address: 0x80083658
// line start: 187
// line end:   205
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x80083734
// line start: 216
// line end:   238
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8008385C
// line start: 248
// line end:   249
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x80083868
// line start: 257
// line end:   266
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x800838A4
// line start: 279
// line end:   349
void PRIM_Flush__Fv() {
	// register: 17
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
	{
		{
		}
	}
}


// address: 0x80083AD4
// line start: 373
// line end:   374
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x80083AE0
// line start: 382
// line end:   384
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x80083B1C
// line start: 388
// line end:   389
unsigned char ClearedYet__Fv() {
}


// address: 0x80083B28
// line start: 397
// line end:   401
void PrimDrawSycnCallBack() {
}


// address: 0x80083B48
// line start: 411
// line end:   412
void SendDispEnv__Fv() {
}


// address: 0x80083B6C
// size: 0x18
// line start: 461
// line end:   465
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x80083B84
// size: 0x28
// line start: 469
// line end:   473
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x80083B9C
// size: 0x34
// line start: 477
// line end:   481
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x80083BB4
// size: 0x24
// line start: 486
// line end:   490
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x80083BCC
// size: 0x14
// line start: 494
// line end:   498
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x80083BE4
// size: 0xC
// line start: 511
// line end:   515
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x80083BFC
// line start: 519
// line end:   548
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x80083D10
// line start: 554
// line end:   565
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x80083D78
// line start: 149
// line end:   157
void VID_AfterDisplay__Fv() {
}


// address: 0x80083DA0
// line start: 226
// line end:   230
void VID_ScrOn__Fv() {
}


// address: 0x80083DDC
// line start: 249
// line end:   255
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x80083E34
// line start: 259
// line end:   260
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x80083E40
// line start: 264
// line end:   265
unsigned long VID_GetTick__Fv() {
}


// address: 0x80083E4C
// line start: 270
// line end:   282
void VID_DispEnvSend() {
	// register: 16
	register unsigned long OldGp;
}


// address: 0x80083EA4
// line start: 287
// line end:   289
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x80083EB4
// line start: 293
// line end:   294
int VID_GetXOff__Fv() {
}


// address: 0x80083EC0
// line start: 298
// line end:   299
int VID_GetYOff__Fv() {
}


// address: 0x80083ECC
// line start: 304
// line end:   306
bool VID_IsDbuffer__Fv() {
}


// address: 0x80083ED8
// line start: 313
// line end:   369
void VID_SetDBuffer__Fb(bool DBuf) {
	{
		{
		}
	}
}


// address: 0x8008416C
// line start: 96
// line end:   116
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x80084174
// line start: 150
// line end:   151
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x80084194
// line start: 177
// line end:   178
int GetTpY__FUs_addr_80084194(unsigned short tpage) {
}


// address: 0x800841B0
// line start: 182
// line end:   183
int GetTpX__FUs_addr_800841B0(unsigned short tpage) {
}


// address: 0x800841BC
// size: 0x14
// line start: 182
// line end:   183
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x800841C8
// size: 0x14
// line start: 192
// line end:   193
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x800841D4
// line start: 201
// line end:   275
void SortOutFileSystem__Fv() {
	// register: 16
	register char *SearchPath;
}


// address: 0x80084304
// line start: 111
// line end:   127
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x80084328
// line start: 131
// line end:   145
void Spanker__Fv() {
}


// address: 0x8008437C
// line start: 330
// line end:   331
void GaryLiddon__Fv() {
}


// address: 0x80084384
// line start: 71
// line end:   137
void ReadPad__Fi(int NoDeb) {
	// register: 16
	// size: 0xEC
	register struct CPad *DPad;
	// register: 2
	register int New;
	// register: 4
	register int cmem;
	// register: 5
	register int p1mema;
	// register: 6
	register int p1memb;
	// register: 7
	register int p2mema;
	// register: 8
	register int p2memb;
	// register: 9
	register int diffm;
}


// address: 0x8008450C
// line start: 297
// line end:   300
void DummyPoll__Fv() {
}


// address: 0x80084514
// line start: 303
// line end:   312
void DaveOwens__Fv() {
}


// address: 0x8008451C
// line start: 316
// line end:   335
void DaveCentreStuff__Fv() {
	// address: 0xFFFFFFC0
	// size: 0x28
	auto char TempStr[40];
}


// address: 0x80084664
// line start: 376
// line end:   400
void PlaceStoreGold2__Fil(int myplr, long v) {
	// register: 17
	register int i;
	// register: 20
	register int ii;
	// register: 22
	register int xx;
	// register: 19
	register int yy;
	// register: 4
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


// address: 0x8008488C
// line start: 405
// line end:   436
void GivePlayerDosh__Fil(int PlayerNo, long cost) {
	// register: 18
	register int i;
}


// address: 0x80084A40
// line start: 441
// line end:   450
int CalcItemVal__FP10ItemStruct(struct ItemStruct *Item) {
	// register: 2
	register int cost;
}


// address: 0x80084A9C
// line start: 454
// line end:   477
void RemoveDupInvItem__Fii(int pnum, int iv) {
}


// address: 0x80084C8C
// line start: 491
// line end:   557
long DetectDup__FP10ItemStructi(struct ItemStruct *Item, int PlayerNo) {
	// register: 6
	register long Value;
	// register: 3
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 17
	register int i;
	// register: 18
	register int InvItem;
	// register: 21
	register long DupSell;
	// register: 19
	register unsigned char Flag;
}


// address: 0x80084F08
// line start: 562
// line end:   633
void WinterSales__Fi(int PlayerNo) {
	// register: 16
	register int Value;
	// register: 17
	register int i;
	// register: 18
	register int InvItem;
	// register: 19
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 21
	register unsigned char Flag;
}


// address: 0x80085144
// line start: 642
// line end:   715
void KeefDaFeef__Fi(int PlayerNo) {
	// register: 17
	register int i;
	// register: 19
	register int InvItem;
	// register: 18
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 21
	register unsigned char Flag;
}


// address: 0x80085590
// line start: 106
// line end:   110
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x800855B8
// line start: 97
// line end:   99
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x800855C4
// line start: 177
// line end:   178
int GetTpY__FUs_addr_800855C4(unsigned short tpage) {
}


// address: 0x800855E0
// line start: 182
// line end:   183
int GetTpX__FUs_addr_800855E0(unsigned short tpage) {
}


// address: 0x800855EC
// line start: 462
// line end:   490
void TimSwann__Fv() {
}


// address: 0x800855F4
// size: 0x14
// line start: 61
// line end:   63
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x80085644
// line start: 70
// line end:   71
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x80085698
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


// address: 0x80085808
// line start: 112
// line end:   119
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8008586C
// line start: 129
// line end:   131
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8008588C
// line start: 138
// line end:   150
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8008596C
// line start: 157
// line end:   171
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80085A30
// line start: 180
// line end:   185
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x80085A94
// line start: 193
// line end:   207
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x80085B70
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


// address: 0x80085C84
// line start: 254
// line end:   274
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x80085D2C
// line start: 282
// line end:   286
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x80085D84
// line start: 295
// line end:   299
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x80085DDC
// line start: 308
// line end:   309
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x80085DF0
// line start: 317
// line end:   318
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x80085E2C
// size: 0x14
// line start: 62
// line end:   65
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x80085E94
// line start: 75
// line end:   75
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x80085EEC
// line start: 85
// line end:   93
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x80085F30
// line start: 106
// line end:   118
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80085FF4
// line start: 125
// line end:   139
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x800860AC
// line start: 143
// line end:   160
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80086180
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


// address: 0x80086390
// size: 0x4
// line start: 65
// line end:   67
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x800863A8
// line start: 77
// line end:   79
void *__nw__6SysObji(int Amount) {
}


// address: 0x800863D4
// line start: 89
// line end:   101
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x80086450
// line start: 111
// line end:   119
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x800864BC
// size: 0x14
// line start: 65
// line end:   68
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x800864F8
// line start: 78
// line end:   78
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x80086550
// line start: 88
// line end:   96
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x80086590
// line start: 109
// line end:   121
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80086650
// line start: 128
// line end:   142
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x80086704
// line start: 146
// line end:   158
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x800867AC
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


// address: 0x800869B8
// size: 0x14
// line start: 123
// line end:   126
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x800869FC
// line start: 136
// line end:   136
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80086A54
// line start: 146
// line end:   156
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80086A78
// line start: 168
// line end:   200
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80086B14
// line start: 209
// line end:   219
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80086B38
// line start: 226
// line end:   245
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80086C0C
// line start: 268
// line end:   285
bool CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char SearchBuffer[256];
}


// address: 0x80086C5C
// line start: 292
// line end:   373
bool LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// address: 0xFFFFFFC8
	auto unsigned char *Dest;
	// address: 0xFFFFFFD0
	auto int OrigSize;
	// register: 19
	register unsigned long Pos;
	// register: 23
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
	// register: 22
	register unsigned char Count;
	// register: 30
	register int Lumpfile;
	{
		// register: 17
		register int SizeToRead;
		// register: 20
		register unsigned char *ptr;
	}
}


// address: 0x80086E84
// line start: 382
// line end:   422
bool LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
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


// address: 0x80086FD4
// line start: 116
// line end:   147
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x800870CC
// line start: 157
// line end:   183
long BL_ReadFile__FPcUl(char *Name, unsigned long RamId) {
	// register: 16
	register int MemSize;
	// address: 0xFFFFFFB8
	// size: 0x32
	auto char FileToLoad[50];
	// register: 16
	register long MyHnd;
	// register: 17
	register unsigned char *LoadAddr;
}


// address: 0x800871E4
// line start: 193
// line end:   237
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


// address: 0x80087344
// line start: 247
// line end:   281
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
}


// address: 0x8008746C
// line start: 286
// line end:   366
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


// address: 0x800876FC
// size: 0x14
// line start: 376
// line end:   397
struct STRHDR *BL_MakeFilePosTab__FPUcUl(unsigned char *BL_DirPtr, unsigned long NoStreamFiles) {
	// register: 17
	// size: 0x14
	register struct STREAM *DirPtr;
	// register: 9
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


// address: 0x800877E4
// size: 0x14
// line start: 407
// line end:   449
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


// address: 0x80087970
// line start: 459
// line end:   463
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x800879AC
// line start: 475
// line end:   493
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80087A2C
// line start: 503
// line end:   603
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80087B94
// line start: 614
// line end:   616
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80087BA0
// line start: 623
// line end:   626
void BL_WaitForAsyncFinish__Fv() {
}


// address: 0x80087BE4
// line start: 631
// line end:   644
void BL_AsyncLoadCallBack__Fi(int ah) {
	// register: 16
	register unsigned long OldGp;
}


// address: 0x80087C48
// line start: 649
// line end:   699
long BL_LoadFileAsync__FPcc(char *Name, char LumpID) {
	// register: 18
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int Size;
	// register: 16
	register long MyHnd;
	// register: 19
	register unsigned char *LoadAddr;
}


// address: 0x80087DFC
// line start: 709
// line end:   748
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80087F18
// size: 0x14
// line start: 758
// line end:   762
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80087F44
// line start: 777
// line end:   781
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80087F4C
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


// address: 0x80088020
// line start: 78
// line end:   109
void *Tmalloc__Fi(int MemSize) {
	// register: 16
	register long MyHnd;
	// register: 17
	register void *Addr;
}


// address: 0x80088114
// line start: 119
// line end:   138
void Tfree__FPv(void *Addr) {
}


// address: 0x800881C4
// line start: 147
// line end:   152
void InitTmalloc__Fv() {
}


// address: 0x800881EC
// line start: 162
// line end:   168
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80088240
// line start: 181
// line end:   199
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80088290
// line start: 211
// line end:   239
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


// address: 0x800883B8
// line start: 251
// line end:   256
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x800883E4
// line start: 268
// line end:   328
void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x800885F4
// line start: 339
// line end:   451
bool DoPausedMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 18
	register bool RetVal;
	// register: 17
	register bool Done;
	{
	}
}


// address: 0x8008872C
// line start: 462
// line end:   501
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


// address: 0x8008884C
// line start: 511
// line end:   549
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


// address: 0x8008896C
// line start: 573
// line end:   576
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x8008897C
// line start: 586
// line end:   587
bool PA_GetPauseOk__Fv() {
}


// address: 0x80088988
// line start: 610
// line end:   634
void MY_PausePrint__17CTempPauseMessageiiiP4RECT(struct CTempPauseMessage *this, int s, int Txt, int Menu, struct RECT *PRect) {
	// register: 23
	register int y;
	// register: 30
	register int otpos;
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80088BC8
// line start: 637
// line end:   638
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088BD0
// line start: 641
// line end:   662
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT PRect;
	// register: 16
	register int otpos;
	// register: 22
	register int oldDotpos;
	// register: 21
	register int oldTotpos;
}


// address: 0x80088D48
// line start: 669
// line end:   670
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80088D50
// line start: 673
// line end:   674
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088D58
// line start: 677
// line end:   699
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT PRect;
	// register: 16
	register int otpos;
	// register: 22
	register int oldDotpos;
	// register: 21
	register int oldTotpos;
}


// address: 0x80088ED0
// line start: 706
// line end:   707
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80088ED8
// line start: 710
// line end:   711
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088EE0
// line start: 715
// line end:   758
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT PRect;
	// register: 16
	register int otpos;
	// register: 19
	register int oldDotpos;
	// register: 16
	register int oldTotpos;
}


// address: 0x80089030
// line start: 761
// line end:   762
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80089038
// line start: 765
// line end:   765
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80089060
// line start: 770
// line end:   770
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80089088
// line start: 770
// line end:   770
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x800890B0
// size: 0xC
// line start: 115
// line end:   115
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800890F4
// line start: 86
// line end:   86
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80089128
// size: 0x8
// line start: 85
// line end:   85
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x8008913C
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8008915C
// line start: 94
// line end:   94
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80089164
// line start: 91
// line end:   91
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8008916C
// line start: 79
// line end:   79
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80089194
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80089214
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks() {
}


// address: 0x8008921C
// line start: 171
// line end:   171
int GetMaxOtPos__7CBlocks() {
}


// address: 0x80089224
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x8008924C
// line start: 97
// line end:   99
unsigned char CheckActive__4CPad_addr_8008924C(struct CPad *this) {
}


// address: 0x80089258
// line start: 116
// line end:   165
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x80089370
// line start: 176
// line end:   237
void PAD_Handler__Fv() {
	// register: 20
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 16
	register unsigned char fin;
}


// address: 0x8008956C
// size: 0xEC
// line start: 251
// line end:   265
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x8008961C
// line start: 277
// line end:   285
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
}


// address: 0x80089690
// line start: 290
// line end:   299
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
}


// address: 0x80089724
// line start: 309
// line end:   340
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80089848
// line start: 344
// line end:   350
void Flush__4CPad(struct CPad *this) {
}


// address: 0x8008989C
// line start: 357
// line end:   361
void InitClickBits__FPUs(unsigned short *CountArray) {
	// register: 2
	register int f;
}


// address: 0x800898BC
// line start: 365
// line end:   399
unsigned short MakeClickBits__FiiiPUs(int Switch, int Closed, int Speed, unsigned short *CountArray) {
	// register: 9
	register unsigned short Click;
	// register: 3
	register unsigned short BitMask;
	{
		{
			// register: 8
			register int ResetSpeed;
		}
	}
}


// address: 0x80089948
// line start: 404
// line end:   404
void _GLOBAL__I_Pad0() {
}


// address: 0x80089980
// line start: 102
// line end:   102
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x80089988
// line start: 97
// line end:   99
unsigned char CheckActive__4CPad_addr_80089988(struct CPad *this) {
}


// address: 0x80089994
// line start: 94
// line end:   94
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x8008999C
// line start: 87
// line end:   87
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x800899A4
// size: 0xEC
// line start: 85
// line end:   85
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x800899D8
// line start: 102
// line end:   107
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


// address: 0x80089A74
// line start: 581
// line end:   600
void InitPrinty__Fv() {
	// register: 16
	register int otpos;
}


// address: 0x80089B24
// line start: 605
// line end:   606
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80089B2C
// line start: 617
// line end:   659
int KanjiPrintChar__5CFontUsUsUsUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned short kan, int R, int G, int B) {
}


// address: 0x80089C64
// line start: 667
// line end:   740
int PrintChar__5CFontUsUsUcUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned char C, int R, int G, int B) {
	// register: 18
	register int Cw;
}


// address: 0x80089E08
// line start: 746
// line end:   984
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	// register: 20
	register int Cx;
	// register: 22
	register int Cy;
	// address: 0xFFFFFF70
	auto int WrapCount;
	// register: 17
	register char *EndPtr;
	// register: 21
	register char *SpacePtr;
	// register: 3
	register int CharW;
	// register: 16
	register int SpaceW;
	// address: 0xFFFFFF78
	auto int _WindowW;
	// register: 23
	register int WindowW;
	// address: 0xFFFFFF80
	auto int WindowH;
	// address: 0xFFFFFF88
	auto int WindowX;
	// address: 0xFFFFFF90
	auto int WindowY;
	// address: 0xFFFFFF50
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 2
	register unsigned short kan;
	// address: 0xFFFFFF98
	auto char *OrigStr;
	{
		{
			// register: 5
			register unsigned char c;
			{
				{
					{
						{
							// register: 16
							register char c;
							{
								{
									{
										// register: 8
										register char c;
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


// address: 0x8008A440
// line start: 989
// line end:   1101
int GetWrap__5CFontPcP4RECT(struct CFont *this, char *Str, struct RECT *TextWindow) {
	// register: 22
	register int WrapCount;
	// register: 16
	register char *EndPtr;
	// register: 19
	register char *SpacePtr;
	// register: 23
	register char *LastSpacePtr;
	// register: 3
	register int CharW;
	// register: 17
	register int SpaceW;
	// register: 20
	register int WindowW;
	// register: 30
	register int _WindowW;
	{
		{
			// register: 5
			register unsigned char c;
			{
				{
					{
						{
							// register: 17
							register char c;
						}
					}
				}
			}
		}
	}
}


// address: 0x8008A6B0
// line start: 1107
// line end:   1190
int GetWrapWidth__5CFontPcP4RECT(struct CFont *this, char *Str, struct RECT *TextWindow) {
	// register: 16
	register char *EndPtr;
	// register: 19
	register char *SpacePtr;
	// register: 3
	register int CharW;
	// register: 18
	register int SpaceW;
	// register: 20
	register int WindowW;
	{
		// register: 5
		register unsigned char c;
	}
}


// address: 0x8008A81C
// line start: 1196
// line end:   1218
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x8008A898
// line start: 1226
// line end:   1229
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x8008A918
// line start: 1235
// line end:   1238
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8008A924
// line start: 1246
// line end:   1266
int GetCharWidth__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x8008A9D4
// line start: 1273
// line end:   1273
void _GLOBAL__I_WHITER() {
}


// address: 0x8008AA30
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_8008AA30() {
}


// address: 0x8008AA38
// line start: 85
// line end:   85
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x8008AA5C
// line start: 82
// line end:   82
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x8008AA7C
// line start: 79
// line end:   79
int GetCharFrameNum__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x8008AA94
// line start: 59
// line end:   59
void Init__5CFont(struct CFont *this) {
}


// address: 0x8008AAC8
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8008AAE4
// line start: 112
// line end:   115
unsigned char TrimCol__Fs(short col) {
}


// address: 0x8008AB1C
// size: 0x34
// line start: 206
// line end:   387
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
	// register: 3
	register int U;
	// register: 7
	register int V;
	// register: 4
	register int W;
	// register: 5
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


// address: 0x8008B49C
// size: 0x24
// line start: 393
// line end:   404
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x8008B5D4
// line start: 408
// line end:   461
void DropShadows__Fiiii(int x, int y, int w, int h) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
	// register: 18
	register unsigned char dbr;
	// register: 17
	register unsigned char dbg;
	// register: 16
	register unsigned char dbb;
}


// address: 0x8008B878
// line start: 476
// line end:   495
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


// address: 0x8008B9B0
// line start: 499
// line end:   555
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x8008BC34
// line start: 569
// line end:   995
void Back__6Dialogiiii(struct Dialog *this, int DX, int DY, int DW, int DH) {
	// register: 30
	register int X;
	// register: 23
	register int Y;
	// address: 0xFFFFFF78
	auto int W;
	// address: 0xFFFFFF80
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
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct RECT ClipRect;
	{
		{
			{
				{
					{
						// register: 16
						register int c;
						{
							// register: 2
							register int fw;
							// register: 3
							register int fh;
						}
					}
				}
			}
		}
	}
}


// address: 0x8008CD4C
// line start: 999
// line end:   1087
void Line__6Dialogiii(struct Dialog *this, int DX, int DY, int DW) {
	// register: 21
	register int X;
	// register: 22
	register int Y;
	// register: 23
	register int W;
	// register: 17
	register int Bx;
	// register: 16
	register int Xr;
	// register: 16
	register int Xl;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT ClipRect;
}


// address: 0x8008CF7C
// line start: 1099
// line end:   1103
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8008CF90
// size: 0x8
// line start: 232
// line end:   232
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x8008CFAC
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati_addr_8008CFAC(struct TextDat *this, int FrNum) {
}


// address: 0x8008CFC8
// line start: 71
// line end:   136
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
	{
		{
		}
	}
}


// address: 0x8008D090
// line start: 144
// line end:   145
void CustomPlayerInit__FR12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8008D098
// line start: 149
// line end:   158
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x8008D170
// line start: 310
// line end:   316
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x8008D1B0
// line start: 321
// line end:   350
void CycleSelCols__Fv() {
}


// address: 0x8008D368
// line start: 358
// line end:   366
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


// address: 0x8008D3DC
// line start: 375
// line end:   383
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008D450
// size: 0x108
// line start: 392
// line end:   451
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x8008D5B4
// line start: 461
// line end:   463
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008D5EC
// line start: 472
// line end:   483
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x8008D6B4
// line start: 493
// line end:   505
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x8008D73C
// line start: 515
// line end:   522
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x8008D7A4
// line start: 531
// line end:   538
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x8008D80C
// line start: 548
// line end:   553
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x8008D868
// line start: 563
// line end:   569
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x8008D8B8
// line start: 624
// line end:   636
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x8008D970
// line start: 648
// line end:   685
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	// register: 19
	register unsigned char *MyBlocks;
	// register: 18
	register int *BlockOffsets;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8008DAC4
// line start: 698
// line end:   719
void MakeGt4Table__7CBlocks(struct CBlocks *this) {
	{
		// register: 19
		register unsigned int f;
		{
			// address: 0xFFFFFFB0
			// size: 0x34
			auto struct POLY_GT4 ThisGt4;
		}
	}
}


// address: 0x8008DCA8
// line start: 729
// line end:   789
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr) {
	// register: 2
	register int H;
	// register: 3
	register int Rotated;
	// register: 9
	register int Tpage;
	// register: 7
	register int zU;
	// register: 8
	register int zV;
	// register: 4
	register int zW;
	// register: 5
	register int zH;
}


// address: 0x8008DDD0
// line start: 801
// line end:   806
void MyRoutine__FR7CBlocksii(struct CBlocks *B, int x, int y) {
}


// address: 0x8008DE38
// line start: 810
// line end:   812
void SetRandOffset__7CBlocksi(struct CBlocks *this, int QuakeAmount) {
}


// address: 0x8008DE94
// line start: 816
// line end:   843
void Print__7CBlocks(struct CBlocks *this) {
	// register: 18
	register int MxInt;
	// register: 17
	register int MyInt;
}


// address: 0x8008DFB0
// line start: 854
// line end:   857
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x8008DFD8
// line start: 867
// line end:   869
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x8008DFF0
// line start: 879
// line end:   918
void InitColourCycling__7CBlocks(struct CBlocks *this) {
	// register: 16
	register int CycleIndex;
	{
		// register: 19
		register int f;
		{
			{
				{
					{
						// register: 19
						register int f;
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


// address: 0x8008E13C
// line start: 958
// line end:   1009
void GetGCol__7CBlocksiiPUcP7RGBData(struct CBlocks *this, int x, int y, unsigned char *Rgb, struct RGBData *Data) {
	// register: 2
	register int rgb_itxr;
	// register: 2
	register int rgb_itxg;
	// register: 2
	register int rgb_itxb;
	// register: 7
	register int rgb_leftr;
	// register: 6
	register int rgb_leftg;
	// register: 5
	register int rgb_leftb;
	// register: 2
	register int rgb_rightr;
	// register: 2
	register int rgb_rightg;
	// register: 2
	register int rgb_rightb;
	// register: 4
	register int rgb_cordr;
	// register: 3
	register int rgb_cordg;
	// register: 2
	register int rgb_cordb;
}


// address: 0x8008E27C
// line start: 1025
// line end:   1341
void PrintMap__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF50
	auto int XPos;
	// address: 0xFFFFFF58
	auto int YPos;
	// address: 0xFFFFFF60
	auto int xx;
	// address: 0xFFFFFF68
	auto int BlankBlock;
	// address: 0xFFFFFF70
	auto unsigned char *MyBlocks;
	// address: 0xFFFFFF78
	auto int *BlockOffsets;
	// register: 20
	register int XPix;
	// register: 21
	register int YPix;
	// register: 19
	register int nx;
	// register: 16
	register int ny;
	// address: 0xFFFFFF80
	auto int CLeft;
	// address: 0xFFFFFF88
	auto int CRight;
	// address: 0xFFFFFF90
	auto int CTop;
	// address: 0xFFFFFF98
	auto int CBottom;
	{
		// address: 0xFFFFFFA0
		auto int ThisY;
		// address: 0xFFFFFFA8
		auto int ThisXPos;
		// register: 21
		register int ThisYPos;
		// address: 0xFFFFFFB0
		auto int Height;
		{
			// register: 22
			// size: 0x8
			register struct CPart *Parts;
			// register: 18
			// size: 0xC
			register struct CBlock *MyBlock;
			// register: 6
			register int BlockNum;
			// address: 0xFFFFFF08
			// size: 0x28
			auto struct RGBData MyRgbData;
			// register: 16
			register int bx;
			// register: 17
			register int by;
			{
				{
					// register: 5
					// size: 0x8
					register struct RECT *BlockR;
					// register: 4
					register int clipx;
					// register: 3
					register int clipy;
					{
						{
							// address: 0xFFFFFFB8
							auto int NumOfParts;
							// register: 7
							register bool DoTrans;
							// register: 20
							register int OtPos;
							// address: 0xFFFFFFC0
							auto bool PFlag;
							{
								{
									{
										{
											// address: 0xFFFFFFC8
											auto int f;
											{
												// address: 0xFFFFFF30
												// size: 0x34
												auto struct POLY_GT4 *DestGt4;
												// register: 16
												// size: 0x10
												register struct LittleGt4 *ThisGt4;
												// register: 3
												register unsigned char Flags;
												// register: 19
												register int W;
												// register: 16
												register int H;
												{
													{
														// register: 3
														register int r;
														// register: 4
														register int g;
														// register: 5
														register int b;
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


// address: 0x8008EDEC
// line start: 1350
// line end:   1501
void IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib(struct CBlocks *this, int x, int y, int (*Func)(), bool VisCheck) {
	// address: 0xFFFFFF90
	auto int XPos;
	// address: 0xFFFFFF98
	auto int YPos;
	// address: 0xFFFFFFA0
	auto int xx;
	// register: 2
	register bool Infra;
	// address: 0xFFFFFFA8
	auto int MyXShifter;
	// address: 0xFFFFFFB0
	auto int MyYShifter;
	// register: 18
	register int Total;
	// address: 0xFFFFFFB8
	auto bool DoVisCheck;
	// register: 7
	register int XPix;
	// register: 5
	register int YPix;
	// address: 0xFFFFFFC0
	auto int CRight;
	{
		// register: 30
		register int ThisXPos;
		// register: 23
		register int ThisYPos;
		// address: 0xFFFFFFC8
		auto int Height;
		{
			{
				{
					// register: 5
					// size: 0x8
					register struct map_info *p0;
					// register: 19
					// size: 0x8
					register struct map_info *p1;
					// register: 22
					// size: 0x8
					register struct map_info *p2;
					// address: 0xFFFFFFD0
					// size: 0x8
					auto struct map_info *p3;
					// register: 21
					register int myx;
					// register: 20
					register int myy;
				}
			}
		}
	}
}


// address: 0x8008F264
// line start: 1510
// line end:   1549
int AddMonst__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	// register: 2
	register int nMonster;
	// register: 8
	register int Index;
	// register: 9
	register int bFlags;
	{
		{
			// register: 3
			// size: 0x6C
			register struct MonsterStruct *MyMonst;
			// register: 2
			register int mi;
			{
				{
					{
						{
							{
								{
									// register: 4
									register int ThisIndex;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008F344
// line start: 1556
// line end:   1895
void PrintMonsters__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFEE8
	// size: 0x70
	auto struct TextDat *CMonstGraphics;
	// address: 0xFFFFFEF0
	auto int Total;
	// address: 0xFFFFFEF8
	auto int Wx;
	// address: 0xFFFFFF00
	auto int Wy;
	// address: 0xFFFFFF08
	auto int Cx;
	// address: 0xFFFFFF10
	auto int Cy;
	// address: 0xFFFFFF18
	// size: 0x70
	auto struct TextDat *GolemGraphics;
	// address: 0xFFFFFF68
	auto bool MyInfraFlag;
	{
		// address: 0xFFFFFF20
		auto int f;
		{
			// address: 0xFFFFFF28
			auto int Index;
			{
				{
					// register: 22
					// size: 0x6C
					register struct MonsterStruct *MyMonst;
					// register: 21
					register int Frame;
					// register: 20
					register int Action;
					// register: 16
					register int Dir;
					// register: 16
					register int PhysFrame;
					// register: 30
					register int Creature;
					// register: 16
					register int ScrXOff;
					// register: 17
					register int ScrYOff;
					// register: 5
					// size: 0x28
					register struct POLY_FT4 *Ft4;
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
					// address: 0xFFFFFF30
					auto bool StartAnim;
					// address: 0x8011CE28
					// size: 0x10
					static int AddVal[4];
					// address: 0xFFFFFF38
					auto int bx;
					// register: 23
					register int by;
					// address: 0xFFFFFF48
					auto int Sx;
					// address: 0xFFFFFF50
					auto int Sy;
					// address: 0xFFFFFF58
					auto int OtPos;
					{
						{
							// register: 17
							register int blockr;
							// register: 18
							register int blockg;
							// register: 19
							register int blockb;
							{
								{
									// register: 6
									register int AVal;
									{
										// address: 0xFFFFFF70
										auto int DoCompress;
										// address: 0xFFFFFF20
										auto int f;
										{
											// address: 0xFFFFFF78
											auto int MaxDecompress;
											{
												// address: 0xFFFFFF80
												auto int f;
												{
													// register: 20
													register int Frame;
													// address: 0xFFFFFF88
													auto int Action;
													// address: 0xFFFFFF90
													auto int Dir;
													// register: 19
													register int Creature;
													// address: 0xFFFFFF98
													auto int ScrXOff;
													// address: 0xFFFFFFA0
													auto int ScrYOff;
													// address: 0xFFFFFED8
													// size: 0x8
													auto struct RECT R;
													// register: 6
													register int GType;
													// register: 17
													register int Sx;
													// register: 16
													register int Sy;
													// address: 0xFFFFFFA8
													auto int Index;
													// register: 5
													register int transfile;
													// address: 0xFFFFFFB0
													auto int Mg;
													{
														{
															// register: 18
															// size: 0x6C
															register struct MonsterStruct *MyMonst;
															{
																{
																	// register: 30
																	register int bx;
																	// register: 23
																	register int by;
																	// register: 21
																	register int mx;
																	// register: 22
																	register int my;
																	// register: 3
																	register bool PrintIt;
																	// register: 2
																	register bool Compressed;
																	{
																		// register: 4
																		register unsigned int g;
																		{
																			{
																				// register: 19
																				register int OtPos;
																				// register: 17
																				// size: 0x28
																				register struct POLY_FT4 *Ft4;
																				// register: 6
																				register int blockr;
																				// register: 5
																				register int blockg;
																				// register: 2
																				register int blockb;
																				// register: 16
																				// size: 0x28
																				register struct POLY_FT4 *ShadFt4;
																				// register: 4
																				register int paloff;
																				// register: 5
																				register int Col;
																				{
																					{
																						{
																							{
																								{
																									{
																										// register: 5
																										register int SPal;
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


// address: 0x8008FDE8
// line start: 1915
// line end:   1933
int AddTowners__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	// register: 3
	register int nMonster;
	{
		{
			// register: 4
			// size: 0x6C
			register struct MonsterStruct *MyMonst;
			// register: 3
			register int mi;
		}
	}
}


// address: 0x8008FE44
// line start: 1942
// line end:   2042
void PrintTowners__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0x8011AF4C
	static int YPos;
	// address: 0x8011AF50
	static int YVel;
	// address: 0xFFFFFFB0
	auto int Total;
	// address: 0xFFFFFFB8
	auto int Wx;
	// address: 0xFFFFFFC0
	auto int Wy;
	// address: 0xFFFFFFC8
	auto int Cx;
	// address: 0xFFFFFFD0
	auto int Cy;
	{
		// register: 23
		register int f;
		{
			// register: 30
			register int Creature;
			// register: 20
			register int mi;
			// address: 0xFFFFFFA8
			// size: 0x28
			auto struct POLY_FT4 *Ft4;
			// register: 19
			// size: 0x70
			register struct TextDat *ThisData;
			// register: 18
			register int PhysFrame;
			// register: 17
			register int GameFrame;
			// register: 18
			register int Dir;
			// register: 17
			register int Sx;
			// register: 16
			register int Sy;
			// register: 16
			register int OtPos;
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


// address: 0x800901FC
// line start: 2051
// line end:   2065
int AddObject__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	// register: 6
	register int bObject;
	{
		{
			// register: 3
			// size: 0x2C
			register struct ObjectStruct *OStr;
		}
	}
}


// address: 0x80090258
// line start: 2074
// line end:   2184
void PrintObjects__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF78
	auto int Total;
	// address: 0xFFFFFF80
	auto int Wx;
	// address: 0xFFFFFF88
	auto int Wy;
	// address: 0xFFFFFF90
	auto int Cx;
	// address: 0xFFFFFF98
	auto int Cy;
	{
		// address: 0xFFFFFFA0
		auto int z;
		{
			{
				// address: 0xFFFFFFA8
				auto int f;
				{
					// register: 22
					register int Sx;
					// register: 20
					register int Sy;
					// register: 3
					register int LoadIndex;
					// register: 18
					// size: 0x2C
					register struct ObjectStruct *OStr;
					// register: 2
					register bool DoCreature;
					// register: 23
					// size: 0x28
					register struct POLY_FT4 *(*PFunc)();
					// address: 0xFFFFFFB0
					auto int Index;
					{
						{
							// register: 16
							register int AnimFrame;
							// register: 21
							register int OtPos;
							// register: 17
							// size: 0x28
							register struct POLY_FT4 *Ft4;
							// register: 17
							register int Creature;
							// register: 16
							register int PhysFrame;
							// register: 19
							// size: 0x70
							register struct TextDat *ObjDat;
							// address: 0xFFFFFFB8
							auto int bx;
							// address: 0xFFFFFFC0
							auto int by;
							// register: 5
							register int Col;
							// register: 3
							register int blockr;
							// register: 4
							register int blockg;
							// register: 2
							register int blockb;
							{
								{
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


// address: 0x800906B4
// line start: 2193
// line end:   2208
int AddDead__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	// register: 16
	register int bDead;
}


// address: 0x80090740
// line start: 2217
// line end:   2299
void PrintDead__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFFA8
	auto int Total;
	// address: 0xFFFFFFB0
	auto int Wx;
	// address: 0xFFFFFFB8
	auto int Wy;
	// address: 0xFFFFFFC0
	auto int Cx;
	// address: 0xFFFFFFC8
	auto int Cy;
	{
		// address: 0xFFFFFFD0
		auto int f;
		{
			// register: 3
			register int bDead;
			// register: 18
			register int dx;
			// register: 19
			register int dy;
			// register: 20
			register int Frame;
			// register: 21
			register int Creature;
			// register: 16
			// size: 0x28
			register struct POLY_FT4 *Ft4;
			// register: 3
			register int transfile;
			// register: 17
			register int Sx;
			// register: 16
			register int Sy;
			// register: 5
			register int Mg;
			// register: 30
			// size: 0x1C
			register struct CMonster *MyMonst;
			{
				{
					// register: 2
					register int bx;
					// register: 6
					register int by;
					// register: 5
					register int blockr;
					// register: 4
					register int blockg;
					// register: 3
					register int blockb;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80090A04
// line start: 2308
// line end:   2320
int AddItem__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	// register: 6
	register int bItem;
}


// address: 0x80090A60
// line start: 2329
// line end:   2479
void PrintItems__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF80
	auto int Total;
	// address: 0xFFFFFF88
	auto int Wx;
	// address: 0xFFFFFF90
	auto int Wy;
	// address: 0xFFFFFF98
	auto int Cx;
	// address: 0xFFFFFFA0
	auto int Cy;
	{
		// address: 0xFFFFFFA8
		auto int z;
		{
			// address: 0xFFFFFFB0
			auto bool DoAnim;
			{
				// address: 0xFFFFFFB8
				auto int f;
				{
					// register: 21
					register int Sx;
					// register: 20
					register int Sy;
					// register: 19
					// size: 0x6C
					register struct ItemStruct *IStr;
					// register: 30
					register int OtPos;
					// register: 18
					// size: 0x28
					register struct POLY_FT4 *Ft4;
					// address: 0xFFFFFFC0
					auto int Index;
					// address: 0xFFFFFFC8
					auto int bx;
					// address: 0xFFFFFFD0
					auto int by;
					// register: 5
					register int Col;
					// register: 5
					register int blockr;
					// register: 4
					register int blockg;
					// register: 3
					register int blockb;
					{
						{
							{
								{
									// register: 23
									// size: 0xC
									register struct FRAME_HDR *Fr;
									// register: 17
									register int W;
									// register: 16
									register int H;
									// register: 4
									register short height;
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


// address: 0x80091020
// line start: 2489
// line end:   2523
int AddMissile__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	// register: 2
	register int bFlags;
	{
		{
			{
				{
					// register: 6
					register int MissIndex;
					{
						{
							// register: 5
							register int dMiss;
							// register: 8
							register int nMiss;
							// register: 2
							register int MissIndex;
							// register: 7
							register int Index;
						}
					}
				}
			}
		}
	}
}


// address: 0x80091128
// line start: 2531
// line end:   2573
void PrintMissiles__7CBlocksii(struct CBlocks *this, int x, int y) {
	// register: 23
	// size: 0x8
	register struct CachedInfoList *InfoList;
	// address: 0xFFFFFFB8
	auto int Wx;
	// address: 0xFFFFFFC0
	auto int Wy;
	// address: 0xFFFFFFC8
	auto int Cx;
	// register: 30
	register int Cy;
	// address: 0xFFFFFFD0
	auto int Total;
	{
		// register: 21
		register int f;
		{
			// register: 19
			register int Sx;
			// register: 16
			register int Sy;
			// register: 18
			// size: 0x50
			register struct MissileStruct *MissStr;
		}
	}
}


// address: 0x80091320
// line start: 2597
// line end:   2598
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x80091334
// line start: 2608
// line end:   2609
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x80091348
// line start: 2619
// line end:   2621
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8009140C
// line start: 2633
// line end:   2692
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 12
	register int XDiff;
	// register: 8
	register int YDiff;
	// register: 5
	register int divnum;
}


// address: 0x800914F8
// line start: 2702
// line end:   2712
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x80091598
// line start: 2723
// line end:   2734
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8009166C
// line start: 2745
// line end:   2772
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 4
	register int W;
}


// address: 0x8009170C
// line start: 2789
// line end:   2790
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x80091714
// line start: 2800
// line end:   2801
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x80091728
// size: 0x108
// line start: 2805
// line end:   2812
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x80091734
// line start: 115
// line end:   123
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8009177C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x800917F8
// line start: 115
// line end:   123
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80091840
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8009187C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x800918F8
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


// address: 0x80091920
// line start: 239
// line end:   241
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8009193C
// line start: 261
// line end:   261
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80091964
// line start: 260
// line end:   260
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8009198C
// line start: 230
// line end:   230
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x800919B0
// line start: 229
// line end:   229
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x800919D4
// line start: 228
// line end:   228
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x800919FC
// line start: 177
// line end:   188
int GetOtPos__7CBlocksi(struct CBlocks *this, int LogicalY) {
	// register: 3
	register int OtPos;
}


// address: 0x80091A34
// line start: 56
// line end:   69
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x80091AC0
// line start: 253
// line end:   253
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80091AF8
// line start: 252
// line end:   252
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80091B1C
// size: 0x14
// line start: 284
// line end:   286
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80091B38
// line start: 240
// line end:   240
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80091B44
// line start: 233
// line end:   233
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x80091B58
// size: 0x8
// line start: 232
// line end:   232
struct PAL *GetPal__7TextDati_addr_80091B58(struct TextDat *this, int PalNum) {
}


// address: 0x80091B74
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati_addr_80091B74(struct TextDat *this, int FrNum) {
}


// address: 0x80091B90
// size: 0x70
// line start: 123
// line end:   125
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x80091BC4
// line start: 129
// line end:   134
void OnceOnlyInit__7TextDat(struct TextDat *this) {
}


// address: 0x80091BE4
// line start: 144
// line end:   145
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x80091C2C
// line start: 155
// line end:   158
void ReloadTP__7TextDat(struct TextDat *this) {
}


// address: 0x80091C6C
// line start: 170
// line end:   246
void Use__7TextDatlbi(struct TextDat *this, long NewHndDat, bool DatLoaded, int size) {
	{
		{
			// address: 0xFFFFFFB0
			// size: 0x28
			auto char NameBuff[40];
			{
				{
					{
						{
							// address: 0xFFFFFFD8
							// size: 0x8
							auto struct RECT R;
							// register: 17
							register int DecompSize;
						}
					}
				}
			}
		}
	}
}


// address: 0x80091EAC
// line start: 263
// line end:   288
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011C8C0
	static int TpX;
	// address: 0x8011C8C4
	static int TpY;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
	// register: 2
	register int Dx;
	// register: 2
	register int Dy;
}


// address: 0x80091F54
// line start: 292
// line end:   306
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8009200C
// line start: 316
// line end:   333
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x800920A4
// line start: 343
// line end:   347
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x800920F0
// line start: 375
// line end:   398
long MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this) {
	// register: 18
	// size: 0xC
	register struct CBlock *MyBlock;
	// register: 21
	register long hndRet;
	// register: 19
	register int *Tab;
	{
		// register: 16
		register unsigned int f;
	}
}


// address: 0x8009221C
// line start: 408
// line end:   466
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


// address: 0x8009231C
// line start: 481
// line end:   488
bool IsCompressed__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame) {
}


// address: 0x80092368
// size: 0x28
// line start: 495
// line end:   504
struct POLY_FT4 *PrintMonster__7TextDatiiiiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame, int x, int y, int OtPos) {
	// register: 16
	register int PhysFrame;
}


// address: 0x80092414
// size: 0x28
// line start: 508
// line end:   625
struct POLY_FT4 *PrintMonsterA__7TextDatiiibi(struct TextDat *this, int Frm, int X, int Y, bool XFlip, int OtPos) {
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x28
			auto struct POLY_FT4 *FT4;
			// register: 18
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// register: 3
			register int W;
			// register: 7
			register int H;
			{
				{
					// register: 16
					register unsigned char *Dest;
					// register: 2
					register int DecompSize;
					// register: 16
					register unsigned char *CompFrAddr;
					// register: 17
					// size: 0x44
					register struct DR_LOAD2 *DrPtr;
					// register: 22
					register unsigned long NumOfPrims;
					// register: 3
					register int VH;
					// register: 5
					register int TpX;
					// register: 6
					register int TpY;
					// register: 5
					register int U;
					// register: 3
					register int V;
					// register: 2
					register int W;
					// register: 7
					register int H;
					// register: 4
					register int u0;
					// register: 5
					register int u1;
					// register: 6
					register int u2;
					// register: 8
					register int u3;
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


// address: 0x800927BC
// line start: 630
// line end:   698
void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register int W;
	// register: 21
	register int H;
	{
		{
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
	}
}


// address: 0x80092A50
// line start: 706
// line end:   740
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


// address: 0x80092BB0
// line start: 745
// line end:   803
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


// address: 0x80092CB0
// line start: 807
// line end:   878
void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register int W;
	// register: 20
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


// address: 0x80092F08
// line start: 885
// line end:   912
void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT3 *GT3) {
	// register: 2
	register int Rotated;
	// register: 10
	register int Tpage;
	// register: 4
	register int U;
	// register: 9
	register int V;
	// register: 3
	register int W;
	// register: 8
	register int H;
}


// address: 0x80092F8C
// line start: 917
// line end:   975
void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat *this, struct POLY_GT3 *GT3, int Frm, int X, int Y) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register int W;
	// register: 21
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


// address: 0x80093154
// size: 0x28
// line start: 989
// line end:   1006
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x800932A8
// size: 0x34
// line start: 1012
// line end:   1031
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x800933FC
// line start: 1058
// line end:   1096
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x80093554
// line start: 1105
// line end:   1135
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


// address: 0x80093694
// line start: 1145
// line end:   1176
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x80093790
// line start: 1231
// line end:   1242
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x800937C0
// line start: 1252
// line end:   1288
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x800938E8
// line start: 1292
// line end:   1299
void DumpHdr__7TextDat(struct TextDat *this) {
}


// address: 0x8009394C
// size: 0x70
// line start: 1312
// line end:   1333
struct TextDat *GM_UseTexData__Fi(int Id) {
	{
		{
			// register: 18
			// size: 0x70
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


// address: 0x80093A80
// line start: 1337
// line end:   1339
void GM_ForceTpLoad__Fi(int Id) {
}


// address: 0x80093ABC
// line start: 1349
// line end:   1353
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x80093B10
// line start: 1358
// line end:   1386
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


// address: 0x80093BD4
// line start: 1413
// line end:   1414
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x80093C28
// line start: 1418
// line end:   1419
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x80093C80
// line start: 1428
// line end:   1458
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


// address: 0x80093DA4
// line start: 1496
// line end:   1522
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
			// register: 5
			register int w;
			// register: 3
			register int h;
		}
	}
}


// address: 0x80093E7C
// size: 0x4
// line start: 1526
// line end:   1528
struct CTextFileInfo *GetFileInfo__7TextDati(int Id) {
}


// address: 0x80093ECC
// line start: 1534
// line end:   1535
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x80093EF4
// line start: 1539
// line end:   1545
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x80093F24
// line start: 1551
// line end:   1579
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


// address: 0x80093FE4
// line start: 1583
// line end:   1587
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x80094028
// size: 0xE
// line start: 1591
// line end:   1599
struct CCreatureAction *GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x800940B8
// line start: 1603
// line end:   1610
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80094128
// line start: 1616
// line end:   1627
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


// address: 0x80094194
// line start: 1635
// line end:   1656
void LoadDat__C13CTextFileInfoli(struct CTextFileInfo *this, long hnd, int size) {
	// address: 0xFFFFFFD8
	// size: 0xD
	auto char FName[13];
	// register: 16
	register unsigned char *Dest;
	// register: 17
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x800942C8
// line start: 1661
// line end:   1663
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80094320
// line start: 1667
// line end:   1668
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80094348
// line start: 1672
// line end:   1674
void MakeFname__C13CTextFileInfoPcPCc(struct CTextFileInfo *this, char *Dest, char *Ext) {
}


// address: 0x80094390
// line start: 1678
// line end:   1691
long GetFile__C13CTextFileInfoPcUl(struct CTextFileInfo *this, char *Ext, unsigned long RamId) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	register long hnd;
}


// address: 0x80094430
// line start: 1696
// line end:   1711
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x800944C4
// line start: 1743
// line end:   1785
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


// address: 0x80094598
// size: 0x7C
// line start: 1799
// line end:   1800
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x800945CC
// line start: 1804
// line end:   1882
void Load__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	// register: 8
	register unsigned char r;
	// register: 5
	register unsigned char g;
	// register: 6
	register unsigned char b;
	{
		{
			// register: 16
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// address: 0xFFFFFDE0
			// size: 0x8
			auto struct RECT R;
			// register: 18
			// size: 0x8
			register struct PAL *Pal;
			// address: 0xFFFFFDE8
			// size: 0x200
			auto unsigned short MyPal[256];
			{
				// register: 5
				register int i;
				{
					// register: 16
					register int i;
					{
						// register: 11
						register int nocols;
						{
							// register: 10
							register int v;
							{
								// register: 2
								register unsigned short c;
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


// address: 0x800948E0
// line start: 1891
// line end:   1893
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x80094904
// line start: 1897
// line end:   1926
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80094BE4
// line start: 1934
// line end:   1942
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80094C60
// line start: 1946
// line end:   1990
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


// address: 0x80094DBC
// line start: 2021
// line end:   2021
void _GLOBAL__D_DatPool() {
}


// address: 0x80094E14
// line start: 2021
// line end:   2021
void _GLOBAL__I_DatPool() {
}


// address: 0x80094E68
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_80094E68(struct POLY_GT4 **Prim) {
}


// address: 0x80094EE4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80094EE4(struct POLY_FT4 **Prim) {
}


// address: 0x80094F60
// line start: 290
// line end:   296
void DumpDatFile__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x80094FD4
// line start: 259
// line end:   259
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x80094FFC
// line start: 258
// line end:   258
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x80095024
// line start: 257
// line end:   257
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x80095030
// line start: 256
// line end:   256
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x8009503C
// size: 0x14
// line start: 284
// line end:   286
struct CCreatureHdr *GetCreature__7TextDati_addr_8009503C(struct TextDat *this, int Creature) {
}


// address: 0x80095058
// line start: 251
// line end:   251
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x8009506C
// line start: 240
// line end:   240
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8009506C(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80095078
// line start: 233
// line end:   233
int GetNumOfFrames__7TextDat_addr_80095078(struct TextDat *this) {
}


// address: 0x8009508C
// size: 0x8
// line start: 232
// line end:   232
struct PAL *GetPal__7TextDati_addr_8009508C(struct TextDat *this, int PalNum) {
}


// address: 0x800950A8
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati_addr_800950A8(struct TextDat *this, int FrNum) {
}


// address: 0x800950C4
// line start: 173
// line end:   173
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800950D0
// line start: 161
// line end:   161
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800950F8
// line start: 160
// line end:   160
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80095120
// line start: 67
// line end:   67
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x80095134
// line start: 119
// line end:   121
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x80095160
// line start: 129
// line end:   130
void OVR_LoadPregame__Fv() {
}


// address: 0x80095188
// line start: 137
// line end:   138
void OVR_LoadFrontend__Fv() {
}


// address: 0x800951B0
// line start: 146
// line end:   147
void OVR_LoadGame__Fv() {
}


// address: 0x800951D8
// line start: 155
// line end:   156
void OVR_LoadFmv__Fv() {
}


// address: 0x80095200
// line start: 164
// line end:   165
void OVR_LoadMemcard__Fv() {
}


// address: 0x8009522C
// line start: 174
// line end:   178
void ClearOutOverlays__Fv() {
}


// address: 0x80095284
// line start: 187
// line end:   194
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x80095348
// line start: 203
// line end:   216
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x800953A4
// size: 0x4
// line start: 225
// line end:   226
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x800953B0
// line start: 234
// line end:   239
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x80095404
// line start: 244
// line end:   244
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x80095574
// size: 0x4
// line start: 65
// line end:   65
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x80095580
// line start: 73
// line end:   74
void StevesDummyPoll__Fv() {
}


// address: 0x80095588
// line start: 77
// line end:   80
void Lambo__Fv() {
}


// address: 0x80095590
// size: 0x90
// line start: 72
// line end:   134
struct CPlayer *__7CPlayerbii(struct CPlayer *this, bool Town, int mPlayerNum, int NewNumOfPlayers) {
	// register: 4
	register int SizeToAlloc;
	{
		{
			// register: 16
			register long hnd;
		}
	}
}


// address: 0x800956E8
// line start: 147
// line end:   155
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
	{
		{
		}
	}
}


// address: 0x80095778
// line start: 166
// line end:   170
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x800957E4
// line start: 210
// line end:   284
void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// register: 18
	register int ScrX;
	// register: 16
	register int ScrY;
	// register: 16
	register int WorldX;
	// register: 6
	register int WorldY;
	// register: 19
	register int NWorldX;
	// register: 17
	register int NWorldY;
	// register: 2
	register int wtime;
	// register: 21
	register bool ok;
}


// address: 0x80095BC8
// line start: 316
// line end:   468
void Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// register: 30
	register int ScrXOff;
	// register: 23
	register int ScrYOff;
	// register: 16
	register int Action;
	// register: 22
	register int WorldX;
	// register: 21
	register int WorldY;
	// address: 0xFFFFFFD0
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
					// address: 0xFFFFFFC8
					// size: 0x8
					auto struct RECT R;
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
					{
						{
							{
								// register: 19
								register int Frame;
								{
									{
										{
											{
												// address: 0xFFFFFFC8
												// size: 0x8
												auto struct RECT R;
												// register: 17
												register int OtPos;
												// register: 16
												// size: 0x28
												register struct POLY_FT4 *ShadFt4;
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


// address: 0x80096100
// line start: 477
// line end:   535
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x80096184
// size: 0x4
// line start: 540
// line end:   574
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x80096208
// line start: 585
// line end:   586
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x80096210
// line start: 595
// line end:   596
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x80096218
// line start: 606
// line end:   610
void LoadThis__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x80096288
// line start: 626
// line end:   634
void NonBlockingLoadNewGFX__7CPlayeri(struct CPlayer *this, int Id) {
	{
		{
			// register: 2
			// size: 0x8
			register struct PlayerParam *Pp;
		}
	}
}


// address: 0x800962F4
// line start: 641
// line end:   668
void FilthyTask__FP4TASK(struct TASK *T) {
	// register: 16
	// size: 0x90
	register struct CPlayer *ThePlayer;
	// address: 0xFFFFFFE0
	// size: 0xF
	auto char FName[15];
	// register: 17
	register int Id;
	// register: 3
	// size: 0x8
	register struct PlayerParam *Pp;
}


// address: 0x8009637C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009637C(struct POLY_FT4 **Prim) {
}


// address: 0x800963F8
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800963F8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80096434
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80096434(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8009645C
// line start: 76
// line end:   80
int GetDatMaxSize__7CPlayer(struct CPlayer *this) {
}


// address: 0x8009649C
// line start: 177
// line end:   188
int GetOtPos__7CBlocksi_addr_8009649C(struct CBlocks *this, int LogicalY) {
	// register: 3
	register int OtPos;
}


// address: 0x800964D8
// line start: 265
// line end:   269
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x800964F0
// line start: 253
// line end:   253
int GetNumOfFrames__7TextDatii_addr_800964F0(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80096528
// line start: 252
// line end:   252
int GetNumOfActions__7TextDati_addr_80096528(struct TextDat *this, int Creature) {
}


// address: 0x8009654C
// size: 0x14
// line start: 284
// line end:   286
struct CCreatureHdr *GetCreature__7TextDati_addr_8009654C(struct TextDat *this, int Creature) {
}


// address: 0x80096568
// line start: 240
// line end:   240
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_80096568(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80096574
// line start: 87
// line end:   94
void PROF_Open__Fv() {
}


// address: 0x800965B4
// line start: 99
// line end:   100
bool PROF_State__Fv() {
}


// address: 0x800965C0
// line start: 104
// line end:   105
void PROF_On__Fv() {
}


// address: 0x800965D0
// line start: 109
// line end:   110
void PROF_Off__Fv() {
}


// address: 0x800965DC
// line start: 114
// line end:   115
void PROF_CpuEnd__Fv() {
}


// address: 0x8009660C
// line start: 119
// line end:   120
void PROF_CpuStart__Fv() {
}


// address: 0x80096630
// line start: 124
// line end:   125
void PROF_DrawStart__Fv() {
}


// address: 0x80096654
// line start: 129
// line end:   130
void PROF_DrawEnd__Fv() {
}


// address: 0x80096684
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


// address: 0x80096878
// line start: 179
// line end:   180
void PROF_Restart__Fv() {
}


// address: 0x80096898
// line start: 194
// line end:   384
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80096C1C
// line start: 395
// line end:   432
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80096CD4
// line start: 440
// line end:   449
void GoSetLevel__Fv() {
}


// address: 0x80096D6C
// line start: 453
// line end:   460
void GoBackLevel__Fv() {
}


// address: 0x80096DC8
// line start: 464
// line end:   469
void GoWarpLevel__Fv() {
}


// address: 0x80096DF4
// line start: 475
// line end:   487
void PostLoadGame__Fv() {
}


// address: 0x80096E6C
// line start: 491
// line end:   542
void GoLoadGame__Fv() {
	{
		// register: 6
		register int p;
		{
			{
				{
					{
						// register: 4
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x80096FC4
// line start: 546
// line end:   552
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x80097078
// line start: 556
// line end:   568
void GoNewLevel__Fv() {
}


// address: 0x800970C0
// line start: 574
// line end:   578
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8009716C
// line start: 585
// line end:   588
void GoForwardLevel__Fv() {
}


// address: 0x800971C0
// line start: 592
// line end:   596
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8009726C
// line start: 604
// line end:   609
void GoNewGame__Fv() {
}


// address: 0x80097290
// line start: 613
// line end:   614
void PostNewGame__Fv() {
}


// address: 0x800972B8
// line start: 623
// line end:   631
void LevelToLevelInit__Fv() {
}


// address: 0x80097308
// line start: 212
// line end:   226
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8009734C
// size: 0x1C
// line start: 234
// line end:   239
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x800973B0
// line start: 251
// line end:   351
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 18
	register int HealthHeight;
	// register: 20
	register int ManaHeight;
	// address: 0xFFFFFFC8
	auto int HealthAnim;
	// address: 0xFFFFFFD0
	auto int ManaAnim;
	// register: 22
	register int BarY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	register int X;
	// register: 19
	register int Y;
	// register: 16
	register int xof;
}


// address: 0x80097824
// line start: 382
// line end:   385
unsigned char SpdTrimCol__Fs(short col) {
}


// address: 0x8009785C
// line start: 389
// line end:   478
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 18
	register int X;
	// register: 20
	register int Y;
	// register: 19
	register int Loop;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	register int Bx;
	// register: 22
	register int By;
	{
		{
			// register: 16
			// size: 0x24
			register struct POLY_G4 *G4;
		}
	}
}


// address: 0x80097F88
// line start: 488
// line end:   520
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 21
	register int X;
	// register: 20
	register int Y;
	// register: 2
	register int Anim;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	register int SpellNo;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto char YT[16];
}


// address: 0x80098124
// line start: 528
// line end:   539
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x80098174
// line start: 566
// line end:   635
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	register unsigned char NewR;
	// register: 8
	register unsigned char NewG;
	// register: 4
	register unsigned char NewB;
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80098440
// line start: 639
// line end:   659
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8009856C
// line start: 665
// line end:   683
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x80098684
// line start: 171
// line end:   171
int GetMaxOtPos__7CBlocks_addr_80098684() {
}


// address: 0x8009868C
// size: 0x8
// line start: 232
// line end:   232
struct PAL *GetPal__7TextDati_addr_8009868C(struct TextDat *this, int PalNum) {
}


// address: 0x800986A8
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati_addr_800986A8(struct TextDat *this, int FrNum) {
}


// address: 0x800986C4
// line start: 166
// line end:   191
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 20
	// size: 0x70
	register struct TextDat *CDGfxData;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			{
				// register: 16
				register int cdx;
				// register: 17
				register int cdy;
			}
		}
	}
}


// address: 0x80098800
// line start: 197
// line end:   199
void InitCDWaitIcon__Fv() {
}


// address: 0x80098834
// line start: 209
// line end:   228
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x80098848
// line start: 424
// line end:   443
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x80098878
// line start: 456
// line end:   464
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


// address: 0x800988B0
// line start: 472
// line end:   520
void STR_Init__Fv() {
	{
		{
			// register: 3
			register long vm;
			// register: 5
			register unsigned char *ptr;
			// register: 16
			// size: 0x5C
			register struct TASK *T;
			{
				// register: 4
				register int i;
			}
		}
	}
}


// address: 0x800989DC
// size: 0x84
// line start: 531
// line end:   585
struct SFXHDR *STR_InitStream__Fc(char flag) {
	// register: 16
	// size: 0x84
	register struct SFXHDR *sfh;
}


// address: 0x80098B04
// size: 0x84
// line start: 597
// line end:   726
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 17
	// size: 0x84
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto char tstring[32];
	// address: 0xFFFFFFD8
	// size: 0x2
	auto char Prefix[2];
	{
		{
			// register: 3
			// size: 0x4
			register enum LANG_TYPE Lang;
		}
	}
}


// address: 0x80098D4C
// line start: 736
// line end:   752
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 2
	// size: 0x4
	register enum LANG_TYPE lang;
}


// address: 0x80098E18
// line start: 761
// line end:   765
void STR_setpitch__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80098E64
// line start: 775
// line end:   806
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x80098F70
// line start: 816
// line end:   821
void STR_pauseall__Fv() {
	{
		// register: 18
		register int i;
	}
}


// address: 0x80098FE4
// line start: 831
// line end:   836
void STR_resumeall__Fv() {
	{
		// register: 18
		register int i;
	}
}


// address: 0x80099058
// line start: 846
// line end:   867
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x800990C4
// line start: 876
// line end:   918
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x800991B0
// line start: 927
// line end:   1003
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x800993A0
// line start: 1013
// line end:   1031
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x80099468
// line start: 1042
// line end:   1133
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
	// register: 2
	register int read;
	// register: 5
	register int osize;
}


// address: 0x800996E8
// line start: 1145
// line end:   1268
void STR_AsyncWeeTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 20
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x84
	register struct SFXHDR *sfh;
	// register: 17
	register char Done;
	// register: 19
	register int frame;
	// register: 18
	register int framediff;
	// register: 21
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
	{
		{
			{
			}
		}
	}
}


// address: 0x800999C0
// line start: 1281
// line end:   1461
void STR_AsyncTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 21
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x84
	register struct SFXHDR *sfh;
	// register: 17
	register char Done;
	// register: 20
	register int latency;
	// register: 19
	register int frame;
	// register: 18
	register int framediff;
	// register: 22
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
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
												// register: 16
												register unsigned long vol;
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


// address: 0x80099DA8
// line start: 1471
// line end:   1515
void STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh, char FileType) {
	// register: 17
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


// address: 0x80099ED4
// line start: 145
// line end:   159
void SND_Monitor__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFFD8
	// size: 0x18
	auto char status[24];
	{
		{
			// register: 5
			register int i;
		}
	}
}


// address: 0x80099F60
// line start: 164
// line end:   166
void SPU_OnceOnlyInit__Fv() {
}


// address: 0x80099F98
// line start: 175
// line end:   218
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFC8
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8009A0A0
// line start: 231
// line end:   244
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8009A10C
// line start: 254
// line end:   269
void SND_ClearBank__Fv() {
	{
		{
		}
	}
}


// address: 0x8009A17C
// line start: 278
// line end:   291
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011C8FC
	static int DestAddr;
}


// address: 0x8009A1F4
// line start: 296
// line end:   334
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8009A318
// line start: 410
// line end:   429
int SND_FindSFX__FUs(unsigned short Name) {
	// register: 17
	// size: 0xC
	register struct bank_entry *BankOffsets;
	// register: 16
	register int RetVal;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8009A3F4
// line start: 453
// line end:   456
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8009A428
// line start: 466
// line end:   473
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009A464
// line start: 483
// line end:   488
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8009A4D8
// line start: 498
// line end:   572
int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj) {
	// register: 21
	register int RetVal;
	{
		{
			// register: 18
			register int sfxnum;
			{
				{
					// register: 19
					register int voice;
					{
						{
							// register: 17
							// size: 0xC
							register struct bank_entry *BankOffsets;
							// register: 6
							register int Offset;
							// address: 0xFFFFFF98
							// size: 0x40
							auto struct SpuVoiceAttr voice_attr;
						}
					}
				}
			}
		}
	}
}


// address: 0x8009A6F0
// line start: 88
// line end:   99
void AS_CallBack0__Fi(int ah) {
	// register: 16
	register unsigned long OldGp;
}


// address: 0x8009A75C
// line start: 102
// line end:   113
void AS_CallBack1__Fi(int ah) {
	// register: 16
	register unsigned long OldGp;
}


// address: 0x8009A7C8
// line start: 122
// line end:   142
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x8009A890
// line start: 166
// line end:   183
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8009A930
// line start: 193
// line end:   195
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8009A960
// line start: 205
// line end:   212
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8009A9B4
// line start: 162
// line end:   163
unsigned short SCR_GetBlackClut__Fv() {
}


// address: 0x8009A9C0
// line start: 171
// line end:   176
void SCR_Open__Fv() {
}


// address: 0x8009A9F8
// line start: 181
// line end:   199
void SCR_DumpClut__Fv() {
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct RECT R;
	// register: 4
	register unsigned short ColVal;
	// address: 0xFFFFFF78
	// size: 0x80
	auto unsigned short BlankPal[64];
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009AA6C
// line start: 212
// line end:   213
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x8009AAA0
// line start: 223
// line end:   232
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8009AB30
// size: 0x18
// line start: 247
// line end:   280
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8009AC0C
// size: 0x18
// line start: 289
// line end:   311
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8009AC8C
// line start: 319
// line end:   335
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x8009AD2C
// line start: 346
// line end:   364
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8009AD74
// line start: 376
// line end:   393
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


// address: 0x8009ADE8
// line start: 402
// line end:   403
void SCR_Handler__Fv() {
}


// address: 0x8009AE10
// line start: 132
// line end:   132
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8009AE18
// size: 0x18
// line start: 110
// line end:   116
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8009AE54
// line start: 98
// line end:   104
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8009AEB8
// line start: 90
// line end:   93
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8009AF10
// line start: 83
// line end:   86
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8009AF68
// line start: 101
// line end:   104
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8009AF7C
// line start: 93
// line end:   96
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x8009AFA8
// line start: 86
// line end:   89
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x8009AFB0
// line start: 83
// line end:   83
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8009AFB8
// line start: 82
// line end:   82
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x8009AFC4
// line start: 77
// line end:   77
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8009AFFC
// size: 0x18
// line start: 67
// line end:   67
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8009B008
// line start: 57
// line end:   63
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8009B028
// line start: 46
// line end:   53
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8009B074
// line start: 107
// line end:   108
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8009B07C
// line start: 111
// line end:   113
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8009B0B0
// line start: 117
// line end:   125
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009B138
// line start: 130
// line end:   164
void SetAmbientLight__Fv() {
	// register: 10
	register int x;
	// register: 6
	register int y;
}


// address: 0x8009B1F8
// line start: 170
// line end:   174
void SetDemoPlayer__Fv() {
}


// address: 0x8009B228
// line start: 178
// line end:   255
void print_demo_task__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int demo_char;
		{
			// register: 3
			register int x;
		}
	}
}


// address: 0x8009B568
// line start: 259
// line end:   263
void TonysDummyPoll__Fv() {
}


// address: 0x8009B594
// line start: 268
// line end:   269
void SetTonyPoll__Fv() {
}


// address: 0x8009B5A0
// line start: 273
// line end:   274
void ClearTonyPoll__Fv() {
}


// address: 0x8009B5AC
// line start: 278
// line end:   285
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009B60C
// line start: 289
// line end:   296
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009B66C
// line start: 308
// line end:   319
void set_pad_record_play__Fi(int level) {
}


// address: 0x8009B6E0
// line start: 324
// line end:   337
void start_demo__Fv() {
}


// address: 0x8009B6F0
// line start: 340
// line end:   341
void SetQuest__Fv() {
}


// address: 0x8009B6F8
// line start: 344
// line end:   365
void DrawManaShield__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8009B700
// line start: 368
// line end:   386
void ManaTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009B708
// line start: 389
// line end:   392
void tony__Fv() {
}


// address: 0x8009B748
// line start: 244
// line end:   245
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8009B754
// line start: 255
// line end:   256
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8009B760
// line start: 266
// line end:   271
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8009B7B4
// line start: 281
// line end:   286
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8009B808
// line start: 296
// line end:   301
void GLUE_PreTown__Fv() {
}


// address: 0x8009B838
// line start: 310
// line end:   312
void GLUE_PreDun__Fv() {
}


// address: 0x8009B840
// line start: 331
// line end:   332
bool GLUE_Finished__Fv() {
}


// address: 0x8009B84C
// line start: 342
// line end:   343
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8009B858
// line start: 353
// line end:   362
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8009B8C0
// line start: 371
// line end:   375
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8009B8D0
// line start: 383
// line end:   384
bool GLUE_GetShowGameScreenFlag__Fv() {
}


// address: 0x8009B8DC
// line start: 392
// line end:   396
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8009B8EC
// line start: 404
// line end:   408
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8009B8FC
// line start: 420
// line end:   421
bool GLUE_HasGameStarted__Fv() {
}


// address: 0x8009B908
// line start: 430
// line end:   450
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8009B9E0
// line start: 463
// line end:   465
void GLUE_DoQuake__Fii(int Time, int Amount) {
}


// address: 0x8009B9F0
// line start: 470
// line end:   625
void BgTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// register: 18
	register bool IsTown;
	// register: 20
	register int TextId;
	// register: 16
	register int Level;
	// register: 17
	register int ObjId;
	// register: 19
	register int List;
	// register: 21
	// size: 0x19E8
	register struct PlayerStruct *plr1;
	// register: 22
	// size: 0x19E8
	register struct PlayerStruct *plr2;
	// address: 0xFFFFFD78
	// size: 0x108
	auto struct CBlocks MyBlocks;
	// address: 0xFFFFFE80
	// size: 0x90
	auto struct CPlayer MyPlayer;
	// address: 0xFFFFFF10
	// size: 0x90
	auto struct CPlayer MyPlayer2;
	// address: 0xFFFFFFA0
	// size: 0x1C
	auto struct GPanel P1Panel;
	// address: 0xFFFFFFC0
	// size: 0x1C
	auto struct GPanel P2Panel;
}


// address: 0x8009BE9C
// size: 0xC
// line start: 635
// line end:   645
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8009BF34
// size: 0xC
// line start: 650
// line end:   656
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8009BF90
// size: 0xC
// line start: 660
// line end:   665
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8009BFC0
// line start: 669
// line end:   701
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	{
		{
			// register: 3
			// size: 0xC
			register struct PInf *Inf;
		}
	}
}


// address: 0x8009C08C
// line start: 714
// line end:   724
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown, bool Blocking) {
	// register: 16
	register int Id;
}


// address: 0x8009C104
// size: 0x10
// line start: 737
// line end:   744
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x8009C1B0
// line start: 757
// line end:   768
void GLUE_StartGameExit__Fv() {
	{
	}
}


// address: 0x8009C21C
// line start: 779
// line end:   781
void GLUE_Init__Fv() {
}


// address: 0x8009C224
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x8009C230
// line start: 212
// line end:   212
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x8009C238
// line start: 205
// line end:   205
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x8009C24C
// line start: 304
// line end:   320
void SetDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 4
		register int i;
	}
}


// address: 0x8009C324
// line start: 324
// line end:   334
void RestoreDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8009C3B4
// line start: 338
// line end:   355
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8009C42C
// line start: 360
// line end:   370
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x8009C464
// line start: 375
// line end:   390
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


// address: 0x8009C4C8
// line start: 396
// line end:   405
bool RemoveCtrlScreen__Fv() {
}


// address: 0x8009C524
// line start: 413
// line end:   430
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x8009C5DC
// line start: 434
// line end:   446
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009C61C
// line start: 450
// line end:   463
int remove_comboval__Fib(int p, bool all) {
	// register: 7
	register int n;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8009C664
// line start: 468
// line end:   517
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


// address: 0x8009C7DC
// line start: 521
// line end:   542
void restore_controller_settings__F8CTRL_SET(enum CTRL_SET s) {
	// register: 5
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8009C880
// line start: 551
// line end:   562
bool only_one_button__Fi(int p) {
	// register: 3
	register int hand;
	// register: 5
	register int count;
}


// address: 0x8009C8AC
// line start: 587
// line end:   786
unsigned char main_ctrl_setup__Fv() {
	// register: 17
	// size: 0xEC
	register struct CPad *Pad;
	// register: 16
	register int lv;
}


// address: 0x8009CD88
// line start: 793
// line end:   914
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 2
	register int i;
	// address: 0xFFFFFFC8
	auto unsigned char r;
	// address: 0xFFFFFFD0
	auto unsigned char g;
	// register: 30
	register unsigned char b;
	// register: 18
	register int str;
	// register: 21
	register int len;
	{
		{
			// register: 16
			register int x1;
			// register: 23
			register int x2;
			// register: 4
			register int nlen;
			// register: 22
			register int otpos;
		}
	}
}


// address: 0x8009D2DC
// line start: 918
// line end:   1002
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 2
	register int pnum;
	{
		{
			// register: 16
			register int otpos;
			// register: 21
			register int oldDot;
			// register: 20
			register int OldPrintOT;
			{
				{
					// register: 17
					register int lena;
					// register: 2
					register int len;
				}
			}
		}
	}
}


// address: 0x8009D7DC
// line start: 1002
// line end:   1002
void _GLOBAL__D_ctrlflag() {
}


// address: 0x8009D804
// line start: 1002
// line end:   1002
void _GLOBAL__I_ctrlflag() {
}


// address: 0x8009D82C
// line start: 127
// line end:   131
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009D854
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad_addr_8009D854(struct CPad *this) {
}


// address: 0x8009D87C
// line start: 113
// line end:   117
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x8009D8A4
// line start: 106
// line end:   110
unsigned short GetCur__C4CPad_addr_8009D8A4(struct CPad *this) {
}


// address: 0x8009D8CC
// line start: 92
// line end:   92
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8009D8D4
// line start: 91
// line end:   91
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009D8DC
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc_addr_8009D8DC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009D8FC
// line start: 91
// line end:   91
void SetBorder__6Dialogi_addr_8009D8FC(struct Dialog *this, int Type) {
}


// address: 0x8009D904
// line start: 79
// line end:   79
void ___6Dialog_addr_8009D904(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009D92C
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_8009D92C(struct Dialog *this) {
}


// address: 0x8009D9AC
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_8009D9AC() {
}


// address: 0x8009D9B4
// line start: 233
// line end:   326
void color_cycle__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct RECT ClutR;
	// register: 2
	register int cx;
	// register: 2
	register int cy;
	// address: 0xFFFFFF88
	// size: 0x20
	auto unsigned short ORIGPal[16];
	// address: 0xFFFFFFA8
	// size: 0x20
	auto unsigned short VRAMPal[16];
	// address: 0xFFFFFFC8
	// size: 0x20
	auto unsigned short CLUTPal[16];
	// register: 17
	register int paloffset;
	// register: 9
	register int y;
	// register: 16
	register bool ch;
	{
		{
			// register: 8
			register unsigned short col1;
			// register: 5
			register unsigned char r;
			// register: 4
			register unsigned char g;
			// register: 6
			register unsigned char b;
			{
				{
					{
						{
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
										{
											// register: 5
											register int i;
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


// address: 0x8009DD74
// line start: 331
// line end:   388
void penta_cycle_task__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct RECT ClutR;
	// register: 2
	register int cx;
	// register: 3
	register int cy;
	// register: 16
	register int RVal;
	{
		{
			{
				// address: 0xFFFFFFD0
				// size: 0x20
				auto unsigned short Pal[16];
				// register: 3
				register int Col;
				{
					// register: 4
					register int f;
				}
			}
		}
	}
}


// address: 0x8009DEF4
// line start: 65
// line end:   99
void DrawFlameLogo__Fv() {
	// register: 8
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	register int diff;
	// register: 6
	register int x;
	// register: 18
	register int *frm;
	// register: 17
	register int *xp;
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009E0A4
// line start: 107
// line end:   110
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8009E0F8
// line start: 92
// line end:   95
void DaveLDummyPoll__Fv() {
}


// address: 0x8009E100
// line start: 98
// line end:   100
void DaveL__Fv() {
}


// address: 0x8009E128
// line start: 118
// line end:   185
void DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4, int R, int G, int B) {
	// register: 4
	register unsigned char zV0;
	// register: 5
	register unsigned char zV2;
	// register: 5
	register unsigned char zH;
	// register: 20
	register unsigned char dH;
	// register: 17
	register unsigned char zV;
	// register: 3
	register unsigned char *s;
	// register: 4
	register unsigned char *d;
	// register: 18
	register unsigned char *Ft4m;
	// register: 23
	register short zX0;
	// register: 30
	register short zX1;
	// address: 0x8011B374
	static int count;
	// register: 22
	register int n;
	// register: 16
	register int xoffset;
	// register: 6
	register int yoffset;
	// register: 19
	register short zY;
}


// address: 0x8009E468
// line start: 189
// line end:   220
void mteleportfx__Fv() {
	// register: 20
	register int plr;
	// register: 16
	register int br;
	{
		{
			{
				{
					// register: 17
					register int OtPos;
				}
			}
		}
	}
}


// address: 0x8009E77C
// line start: 225
// line end:   239
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x8009E854
// line start: 242
// line end:   277
void setUVparams__FP8POLY_FT4P9FRAME_HDR(struct POLY_FT4 *Ft4, struct FRAME_HDR *Fr) {
	// register: 5
	register int zU;
	// register: 9
	register int zV;
	// register: 8
	register int zW;
	// register: 7
	register int zH;
}


// address: 0x8009E8E4
// line start: 283
// line end:   316
void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos) {
	// register: 23
	// size: 0x70
	register struct TextDat *Dat;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD0
	// size: 0xC
	auto struct FRAME_HDR *Fr;
	// register: 16
	register unsigned char SpR;
	// register: 17
	register unsigned char SpG;
	// register: 18
	register unsigned char SpB;
	// register: 20
	register int w;
	// register: 19
	register int h;
	// register: 30
	register int f;
}


// address: 0x8009EADC
// line start: 320
// line end:   333
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


// address: 0x8009EC10
// line start: 338
// line end:   359
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


// address: 0x8009EDE0
// line start: 364
// line end:   390
void particlejump__Fii(int ScrX, int ScrY) {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x8009EFB0
// line start: 412
// line end:   431
void doparticlejump__Fv() {
	// register: 17
	register int ScrX;
	// register: 5
	register int ScrY;
	// register: 19
	register int ScrXOff;
	// register: 20
	register int ScrYOff;
	// address: 0xFFFFFFD8
	auto int WorldX;
	// address: 0xFFFFFFDC
	auto int WorldY;
	// register: 21
	// size: 0x108
	register struct CBlocks *gblocks;
}


// address: 0x8009F144
// line start: 436
// line end:   456
void StartPartJump__Fiiiii(int mi, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x8009F298
// line start: 461
// line end:   480
void MonstPartJump__Fi(int m) {
	// register: 17
	register int ScrYOff;
	// address: 0xFFFFFFE0
	auto int WorldX;
	// address: 0xFFFFFFE4
	auto int WorldY;
	// register: 18
	// size: 0x108
	register struct CBlocks *gblocks;
}


// address: 0x8009F3B8
// line start: 485
// line end:   566
void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source) {
	// address: 0xFFFFFF90
	// size: 0x70
	auto struct TextDat *Dat;
	// register: 5
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 8
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 21
	register unsigned char SpB;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 3
	register int br;
	// register: 20
	register int w;
	// register: 18
	register int h;
	// register: 19
	register int f;
	// register: 22
	register int c;
	// address: 0xFFFFFF98
	auto int t;
	// register: 2
	register int rand;
	// register: 3
	register int xoffs;
	// register: 2
	register int yoffs;
	// address: 0xFFFFFFA0
	auto int xf;
	// address: 0xFFFFFFA8
	auto int yf;
	// address: 0xFFFFFFB0
	auto int dxf;
	// address: 0xFFFFFFB8
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


// address: 0x8009F708
// line start: 570
// line end:   587
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009F7C4
// line start: 591
// line end:   641
void Teleportfx__Fiiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart, int OtPos) {
	// address: 0xFFFFFF98
	// size: 0x70
	auto struct TextDat *Dat;
	// address: 0xFFFFFF70
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 22
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 17
	register unsigned char SpB;
	// register: 20
	register int w;
	// register: 16
	register int h;
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 30
	register int f;
	// address: 0xFFFFFFA0
	auto int n;
	// register: 17
	register int randu;
	// register: 21
	register int randl;
	// address: 0xFFFFFFA8
	auto unsigned char Rmask;
	// address: 0xFFFFFFB0
	auto unsigned char Gmask;
	// address: 0xFFFFFFB8
	auto unsigned char Bmask;
	// address: 0xFFFFFE70
	// size: 0x100
	auto int rand[64];
}


// address: 0x8009FAC4
// line start: 645
// line end:   660
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x8009FCEC
// line start: 665
// line end:   680
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009FD84
// line start: 685
// line end:   702
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x8009FEA8
// line start: 706
// line end:   721
void healFX__Fv() {
	// register: 17
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


// address: 0x8009FFE4
// line start: 726
// line end:   728
void HealStart__Fi(int plr) {
}


// address: 0x800A0018
// line start: 732
// line end:   735
void HealotherStart__Fi(int plr) {
}


// address: 0x800A0050
// line start: 739
// line end:   745
void TeleStart__Fi(int plr) {
}


// address: 0x800A0110
// line start: 749
// line end:   751
void TeleStop__Fi(int plr) {
}


// address: 0x800A013C
// line start: 755
// line end:   757
void PhaseStart__Fi(int plr) {
}


// address: 0x800A0170
// line start: 762
// line end:   764
void PhaseEnd__Fi(int plr) {
}


// address: 0x800A019C
// line start: 770
// line end:   793
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT R;
	// register: 22
	// size: 0x108
	register struct CBlocks *TheBlocks;
	// register: 21
	register int ScrXOff;
	// register: 20
	register int ScrYOff;
	// register: 17
	register int OtPos;
}


// address: 0x800A0384
// line start: 798
// line end:   801
void ApocaStart__Fi(int plr) {
}


// address: 0x800A03E8
// line start: 806
// line end:   826
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x800A04B8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x800A0534
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x800A05B0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A05B0(struct POLY_FT4 **Prim) {
}


// address: 0x800A062C
// size: 0x90
// line start: 64
// line end:   66
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x800A067C
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800A0688
// line start: 177
// line end:   188
int GetOtPos__7CBlocksi_addr_800A0688(struct CBlocks *this, int LogicalY) {
	// register: 3
	register int OtPos;
}


// address: 0x800A06C4
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati_addr_800A06C4(struct TextDat *this, int FrNum) {
}


// address: 0x800A06E0
// line start: 88
// line end:   90
void SetQSpell__Fiii(int pnum, int Spell, int type) {
}


// address: 0x800A0700
// line start: 99
// line end:   111
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x48
	register struct SpellTarget *spl;
}


// address: 0x800A0764
// line start: 119
// line end:   128
void select_belt_item__Fi(int pnum) {
}


// address: 0x800A076C
// line start: 136
// line end:   145
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x800A07D4
// line start: 152
// line end:   170
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800A0900
// line start: 176
// line end:   196
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800A0A34
// line start: 204
// line end:   206
void pad_func_up__Fi(int pnum) {
}


// address: 0x800A0A60
// line start: 214
// line end:   216
void pad_func_down__Fi(int pnum) {
}


// address: 0x800A0A8C
// line start: 224
// line end:   225
void pad_func_left__Fi(int pnum) {
}


// address: 0x800A0A94
// line start: 232
// line end:   233
void pad_func_right__Fi(int pnum) {
}


// address: 0x800A0A9C
// line start: 251
// line end:   263
void pad_func_select__Fi(int pnum) {
}


// address: 0x800A0B60
// line start: 270
// line end:   282
void SetFindMonsterXY__FP12PlayerStructi(struct PlayerStruct *p, int i) {
	{
		{
			// register: 3
			// size: 0x6C
			register struct MonsterStruct *m;
			{
				// register: 2
				// size: 0xC4
				register struct TownerStruct *t;
			}
		}
	}
}


// address: 0x800A0BF0
// line start: 293
// line end:   389
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	{
		{
			{
				{
					// register: 16
					register int fx;
					// register: 17
					register int fy;
					{
						{
							{
								// register: 17
								register int fx;
								// register: 20
								register int fy;
								// register: 23
								// size: 0x19E8
								register struct PlayerStruct *plr2;
								{
									// register: 3
									register int oco;
									{
										{
											{
												// register: 16
												register int fx;
												// register: 17
												register int fy;
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


// address: 0x800A10A4
// line start: 396
// line end:   453
void pad_func_Action__Fi(int pnum) {
	// register: 20
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 21
	register int x;
	// register: 22
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	{
		{
			{
				{
					{
						{
							// register: 17
							register int ox;
							// register: 18
							register int oy;
						}
					}
				}
			}
		}
	}
}


// address: 0x800A145C
// line start: 458
// line end:   461
void InitTargetCursor__Fi(int pnum) {
}


// address: 0x800A1490
// line start: 466
// line end:   478
void RemoveTargetCursor__Fi(int pnum) {
}


// address: 0x800A14D8
// line start: 482
// line end:   488
bool TargetingSpell__Fi(int sp) {
}


// address: 0x800A1520
// line start: 496
// line end:   585
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 19
	register int sp;
	// register: 16
	// size: 0x108
	register struct CBlocks *gblocks;
	// register: 22
	register int omp;
	// register: 20
	register unsigned char DoTarget;
	{
		{
			{
				{
					// register: 5
					// size: 0x48
					register struct SpellTarget *spl;
				}
			}
		}
	}
}


// address: 0x800A1920
// line start: 592
// line end:   633
void pad_func_Use_Item__Fi(int pnum) {
	{
		{
			// register: 18
			// size: 0x19E8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x800A1B54
// line start: 639
// line end:   663
void pad_func_BeltList__Fi(int pnum) {
}


// address: 0x800A1CBC
// line start: 672
// line end:   688
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x800A1DF0
// line start: 694
// line end:   711
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800A1F20
// line start: 717
// line end:   731
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800A2050
// line start: 737
// line end:   743
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x800A2144
// line start: 758
// line end:   763
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x800A221C
// line start: 794
// line end:   805
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x800A22D8
// line start: 820
// line end:   849
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 21
	register int sp;
	// register: 19
	register char spt;
	// register: 18
	register int qps;
	// register: 20
	register int qst;
}


// address: 0x800A244C
// line start: 871
// line end:   921
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 2
	register int ii;
	// register: 20
	// size: 0x19E8
	register struct PlayerStruct *player;
	{
	}
}


// address: 0x800A26CC
// line start: 929
// line end:   930
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800A26F4
// line start: 940
// line end:   941
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800A271C
// line start: 946
// line end:   963
bool sort_gold__Fi(int pnum) {
	// register: 17
	// size: 0x3
	register struct found_objects *fo;
	// register: 19
	register bool ngold;
	{
		// register: 18
		register int i;
	}
}


// address: 0x800A2824
// line start: 969
// line end:   1129
void DrawObjSelector__FiP12PlayerStruct(int pnum, struct PlayerStruct *player) {
	// address: 0xFFFFFF20
	// size: 0x80
	auto char str[128];
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
	// register: 16
	register int cp;
	// register: 18
	register int list_size;
	// register: 22
	register int maxlen;
	// address: 0xFFFFFFA0
	// size: 0x3
	auto struct found_objects *fo;
	// register: 8
	register int R;
	// register: 3
	register int G;
	// register: 2
	register int B;
	// register: 20
	register int i;
	// register: 3
	register int nwrap;
	// register: 16
	register int add_wrap;
	// address: 0xFFFFFFB8
	auto int nx;
	// address: 0xFFFFFFC0
	auto int ny;
	// register: 22
	register int nw;
	// register: 16
	register int nh;
	// register: 21
	register int ypos;
	{
		{
			// register: 16
			register int fx;
			// register: 17
			register int fy;
			{
				{
					{
						{
							// register: 18
							register int len;
						}
					}
				}
			}
		}
	}
}


// address: 0x800A302C
// line start: 1133
// line end:   1138
bool SelectorActive__Fv() {
}


// address: 0x800A3038
// line start: 1142
// line end:   1220
void DrawObjTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 18
	register int pnum;
	// register: 22
	register bool op;
	// register: 30
	register bool oamap;
	// register: 21
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 19
	register int oseldata;
	// register: 20
	register int omp;
	// register: 16
	register bool opan;
	// register: 23
	register int opause;
	{
		{
			// register: 16
			register int x;
			// register: 17
			register int y;
		}
	}
}


// address: 0x800A3374
// line start: 1228
// line end:   1244
void add_area_find_object__Fiii(int index, int x, int y) {
	{
		{
			// register: 2
			// size: 0x3
			register struct found_objects *fo;
		}
	}
}


// address: 0x800A33E4
// line start: 1254
// line end:   1347
unsigned char CheckRangeObject__Fiii(int x, int y, int distance) {
	// register: 4
	register char co;
	// register: 6
	// size: 0x8
	register struct map_info *dm;
	// register: 17
	register int nitem;
	// register: 16
	register int nmonster;
	// register: 19
	register int nobject;
	// register: 20
	register bool ok;
	{
		{
			// register: 4
			register int vis_flag;
		}
	}
}


// address: 0x800A375C
// line start: 1351
// line end:   1474
unsigned char CheckArea__FiiiUci(int xx, int yy, int range, unsigned char allflag, int pnum) {
	// address: 0xFFFFFFB8
	// size: 0x19E8
	auto struct PlayerStruct *player;
	// address: 0xFFFFFFC0
	// size: 0x48
	auto struct SpellTarget *spl;
	// address: 0xFFFFFFC8
	auto bool is_myplr;
	// register: 21
	register int i;
	// register: 17
	register int dir;
	// register: 23
	register int cm;
	// register: 4
	register int ci;
	// register: 20
	register int x;
	// register: 19
	register int y;
	{
		{
			// register: 18
			register int dx;
			// register: 17
			register int dy;
			{
				{
					{
						{
							// register: 16
							// size: 0x6C
							register struct MonsterStruct *Monst;
							{
								{
									{
										// register: 22
										register int j;
										{
											{
												// register: 18
												register int k;
												{
													{
														{
															{
																{
																	{
																		{
																			{
																				{
																					// register: 16
																					// size: 0x6C
																					register struct MonsterStruct *Monst;
																					{
																						// register: 16
																						// size: 0xC4
																						register struct TownerStruct *Twn;
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


// address: 0x800A3D44
// line start: 1479
// line end:   1505
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	{
		{
			// register: 30
			register bool done;
			// register: 17
			register int nx;
			// register: 16
			register int ny;
			{
			}
		}
	}
}


// address: 0x800A3EBC
// line start: 1505
// line end:   1505
void _GLOBAL__D_gplayer() {
}


// address: 0x800A3EE4
// line start: 1505
// line end:   1505
void _GLOBAL__I_gplayer() {
}


// address: 0x800A3F0C
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc_addr_800A3F0C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800A3F2C
// line start: 94
// line end:   94
void SetBack__6Dialogi_addr_800A3F2C(struct Dialog *this, int Type) {
}


// address: 0x800A3F34
// line start: 91
// line end:   91
void SetBorder__6Dialogi_addr_800A3F34(struct Dialog *this, int Type) {
}


// address: 0x800A3F3C
// line start: 79
// line end:   79
void ___6Dialog_addr_800A3F3C(struct Dialog *this, int __in_chrg) {
}


// address: 0x800A3F64
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_800A3F64(struct Dialog *this) {
}


// address: 0x800A3FE4
// line start: 17
// line end:   17
bool Active__11SpellTarget(struct SpellTarget *this) {
}


// address: 0x800A3FF0
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_800A3FF0() {
}


// address: 0x800A3FF8
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad_addr_800A3FF8(struct CPad *this) {
}


// address: 0x800A4020
// line start: 106
// line end:   110
unsigned short GetCur__C4CPad_addr_800A4020(struct CPad *this) {
}


// address: 0x800A4048
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x800A40C4
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x800A411C
// line start: 102
// line end:   107
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x800A4178
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A41B0
// line start: 130
// line end:   136
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A41E8
// line start: 145
// line end:   151
void MY_TSK_Sleep__Fi(int time) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800A4240
// line start: 162
// line end:   202
void UPDATEPROGRESS__Fi(int inc) {
	{
		{
			{
				// register: 16
				register int i;
			}
		}
	}
}


// address: 0x800A430C
// line start: 212
// line end:   213
bool IsGameLoading__Fv() {
}


// address: 0x800A4318
// line start: 224
// line end:   280
void DrawCutScreen__Fi(int lev) {
	// register: 30
	register unsigned char barr;
	// register: 22
	register unsigned char barg;
	// register: 21
	register unsigned short prog;
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog LBack;
	// register: 16
	register int tx;
	// address: 0xFFFFFFB8
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 19
	register int BarOt;
	// address: 0xFFFFFFC0
	auto int oldDot;
	// address: 0xFFFFFFC8
	auto int oldTot;
}


// address: 0x800A4754
// line start: 286
// line end:   303
void PutUpCutScreenTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// register: 18
	register int lev;
	// register: 17
	register int tpx;
}


// address: 0x800A481C
// line start: 315
// line end:   364
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	{
		{
			{
				// register: 16
				register int f;
			}
		}
	}
}


// address: 0x800A496C
// line start: 374
// line end:   396
void TakeDownCutScreen__Fv() {
}


// address: 0x800A4A10
// line start: 407
// line end:   426
void FinishBootProgress__Fv() {
}


// address: 0x800A4A9C
// line start: 438
// line end:   452
void FinishProgress__Fv() {
}


// address: 0x800A4AFC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_800A4AFC(struct POLY_G4 **Prim) {
}


// address: 0x800A4B78
// line start: 458
// line end:   458
void _GLOBAL__D_CutScr() {
}


// address: 0x800A4BA0
// line start: 458
// line end:   458
void _GLOBAL__I_CutScr() {
}


// address: 0x800A4BC8
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc_addr_800A4BC8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800A4BE8
// line start: 94
// line end:   94
void SetBack__6Dialogi_addr_800A4BE8(struct Dialog *this, int Type) {
}


// address: 0x800A4BF0
// line start: 91
// line end:   91
void SetBorder__6Dialogi_addr_800A4BF0(struct Dialog *this, int Type) {
}


// address: 0x800A4BF8
// line start: 79
// line end:   79
void ___6Dialog_addr_800A4BF8(struct Dialog *this, int __in_chrg) {
}


// address: 0x800A4C20
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_800A4C20(struct Dialog *this) {
}


// address: 0x800A4CA0
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_800A4CA0() {
}


// address: 0x800A4CA8
// line start: 382
// line end:   119
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x800A4CC8
// line start: 162
// line end:   248
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}


// address: 0x800A4F00
// line start: 252
// line end:   278
void memcard_event__Fii(int evt, int side) {
}


// address: 0x800A4F38
// line start: 283
// line end:   302
void init_card__Fib(int card_number, bool read_dir) {
}


// address: 0x800A5004
// line start: 311
// line end:   324
int ping_card__Fi(int card_number) {
}


// address: 0x800A5098
// line start: 328
// line end:   344
void DealWithCard__Fi(int side) {
}


// address: 0x800A515C
// line start: 350
// line end:   366
void CardUpdateTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int toggle;
}


// address: 0x800A51B0
// line start: 371
// line end:   392
void MemcardON__Fv() {
}


// address: 0x800A521C
// line start: 396
// line end:   404
void MemcardOFF__Fv() {
}


// address: 0x800A5254
// line start: 417
// line end:   443
void CheckSavedOptions__Fv() {
	// register: 2
	register int option_file;
}


// address: 0x800A5354
// line start: 447
// line end:   456
void card_removed__Fi(int card_number) {
}


// address: 0x800A538C
// line start: 464
// line end:   472
int read_card_block__Fii(int card_number, int block) {
}


// address: 0x800A53D4
// line start: 482
// line end:   488
int test_hw_event__Fv() {
}


// address: 0x800A5454
// line start: 492
// line end:   499
void ActivateMemcard__Fii(int card1, int card2) {
}


// address: 0x800A5490
// line start: 504
// line end:   529
void ActivateCharacterMemcard__Fii(int card1, int card2) {
	{
		{
			// register: 5
			register int fileno;
			{
				{
				}
			}
		}
	}
}


// address: 0x800A554C
// line start: 535
// line end:   606
void ShowCardActionText__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT um;
	// register: 3
	register int X;
	// register: 17
	register int Y;
	// register: 18
	register int W;
	// register: 20
	register int H;
	// register: 16
	register int otpos;
	// address: 0xFFFFFFC8
	auto int oldBot;
	// register: 23
	register int oldTot;
	// register: 19
	register int lines;
	// register: 16
	register int yprintpos;
	{
		{
			{
			}
		}
	}
}


// address: 0x800A5830
// line start: 611
// line end:   689
int CountdownLoad__Fi(int Counter) {
	{
		{
			{
				// register: 3
				register int readstate;
				{
					{
						// register: 3
						register int readstate;
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x800A5A40
// line start: 695
// line end:   738
int CountdownSave__Fi(int Counter) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto int cardstate[2];
}


// address: 0x800A5B20
// line start: 742
// line end:   789
void ShowLoadingBox__Fi(int Text) {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT um;
	// register: 21
	register bool addwaitmsg;
	// register: 19
	register int W;
	// register: 20
	register int H;
	// register: 3
	register int X;
	// register: 18
	register int Y;
	// register: 16
	register int otpos;
	// address: 0xFFFFFFC8
	auto int oldBot;
	// register: 30
	register int oldTot;
	// register: 3
	register int lines;
	// register: 18
	register int topline;
	// register: 20
	register int yprintpos;
}


// address: 0x800A5DAC
// line start: 795
// line end:   864
void KillItemDead__Fiii(int pnum, int InvPos, int Idx) {
	// register: 9
	register int ii;
	// register: 9
	register int iv;
}


// address: 0x800A63F0
// line start: 870
// line end:   893
void DoRemoveSpellItems__Fii(int plrno, int item) {
	// register: 2
	register int i;
	// register: 16
	register int j;
}


// address: 0x800A6528
// line start: 914
// line end:   941
void ClearLoadCharItems__Fv() {
	// register: 16
	register int i;
}


// address: 0x800A65C8
// line start: 978
// line end:   980
void PantsDelay__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800A6604
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc_addr_800A6604(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800A6624
// line start: 94
// line end:   94
void SetBack__6Dialogi_addr_800A6624(struct Dialog *this, int Type) {
}


// address: 0x800A662C
// line start: 91
// line end:   91
void SetBorder__6Dialogi_addr_800A662C(struct Dialog *this, int Type) {
}


// address: 0x800A6634
// line start: 79
// line end:   79
void ___6Dialog_addr_800A6634(struct Dialog *this, int __in_chrg) {
}


// address: 0x800A665C
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_800A665C(struct Dialog *this) {
}


// address: 0x800A66DC
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_800A66DC() {
}


// address: 0x800A66E4
// line start: 817
// line end:   824
void PrintSelectBack__FUs(unsigned short Str) {
}


// address: 0x800A6774
// line start: 862
// line end:   871
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x800A6858
// line start: 898
// line end:   1053
void DrawSpinner__FiiUcUcUciiibiT8T8Uc(int x, int y, unsigned char SpinR, unsigned char SpinG, int SpinB, int spinradius, int spinbright, int angle, bool Sparkle, int OtPos, bool cross, bool iso, int SinStep) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 4
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// address: 0xFFFFFF88
	// size: 0x70
	auto struct TextDat *ThisDat;
	// register: 16
	register unsigned char rand;
	// register: 5
	register int f;
	// register: 4
	register unsigned short bright;
	// address: 0xFFFFFF90
	auto unsigned short r;
	// address: 0xFFFFFF98
	auto unsigned short g;
	// address: 0xFFFFFFA0
	auto unsigned short b;
	// address: 0xFFFFFFA8
	auto unsigned short r2;
	// address: 0xFFFFFFB0
	auto unsigned short g2;
	// address: 0xFFFFFFB8
	auto unsigned short b2;
	// register: 22
	register int x1;
	// register: 20
	register int y1;
	// register: 16
	register int x2;
	// register: 17
	register int y2;
	// register: 19
	register int x3;
	// register: 18
	register int y3;
	// register: 23
	register int radius;
	{
		// address: 0xFFFFFFC0
		auto int i;
	}
}


// address: 0x800A6ED4
// line start: 1059
// line end:   1085
void SetLoadedLang__F9LANG_TYPE(enum LANG_TYPE LoadLang) {
}


// address: 0x800A6F84
// line start: 1091
// line end:   1107
void ChangeLang__Fv() {
}


// address: 0x800A7048
// line start: 1121
// line end:   1133
void DrawLeftRight__Fv() {
}


// address: 0x800A7050
// line start: 1137
// line end:   1149
void PrintMono__Fi(int ypos) {
	// register: 17
	register char *String;
	// register: 7
	register int len;
}


// address: 0x800A7108
// line start: 1155
// line end:   1493
void DrawMenu__Fi(int MenuNo) {
	// address: 0xFFFFFF68
	// size: 0x8
	auto struct OMENULIST *mptr;
	// address: 0xFFFFFF70
	// size: 0x18
	auto struct OMENUITEM *iptr;
	// address: 0xFFFFFF78
	auto int sh;
	// address: 0xFFFFFF50
	// size: 0x24
	auto struct POLY_G4 *G4;
	// address: 0xFFFFFF80
	auto int yoff;
	// register: 19
	register int len;
	// address: 0xFFFFFF88
	auto int depth;
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
	// register: 7
	register int mptrx;
	// register: 6
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
							register int cx;
							// register: 20
							register int cy;
						}
					}
				}
			}
		}
	}
}


// address: 0x800A8128
// line start: 1498
// line end:   1507
int who_pressed__Fi(int pval) {
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
	// register: 16
	// size: 0xEC
	register struct CPad *Pad1;
}


// address: 0x800A81B0
// line start: 1522
// line end:   1716
void CharacterLoadPad__Fv() {
	// register: 17
	// size: 0xEC
	register struct CPad *P;
	// register: 19
	// size: 0x18
	register struct OMENUITEM *iptr;
}


// address: 0x800A8704
// line start: 1719
// line end:   1990
void MemcardPad__Fv() {
	// register: 17
	// size: 0xEC
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
		}
	}
}


// address: 0x800A8FE8
// line start: 2013
// line end:   2018
void SwitchMONO__Fv() {
}


// address: 0x800A9034
// line start: 2033
// line end:   2389
void SoundPad__Fv() {
	// register: 17
	// size: 0xEC
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
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


// address: 0x800A9A3C
// line start: 2399
// line end:   2447
void CentrePad__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *P;
	// register: 19
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 17
	register int osx;
	// register: 18
	register int osy;
}


// address: 0x800A9C80
// line start: 2453
// line end:   2481
void CalcVolumes__Fv() {
}


// address: 0x800A9DDC
// line start: 2488
// line end:   2499
void SetLoadedVolumes__Fv() {
}


// address: 0x800A9E8C
// line start: 2504
// line end:   2521
void GetVolumes__Fv() {
	{
		// register: 6
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


// address: 0x800A9F28
// line start: 2611
// line end:   2627
void AlterSpeedMenu__F9GM_SPEEDS(enum GM_SPEEDS gs) {
	// register: 3
	// size: 0x18
	register struct OMENUITEM *it;
}


// address: 0x800A9F7C
// line start: 2634
// line end:   2678
void GameSpeedPad__Fv() {
	// register: 16
	register int cp;
	// register: 17
	register bool exit_flag;
}


// address: 0x800AA0A4
// line start: 2693
// line end:   3136
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 18
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x800AA7A0
// line start: 3164
// line end:   3219
void ToggleOptions__Fv() {
}


// address: 0x800AA948
// line start: 3224
// line end:   3325
void FormatPad__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x800AABE8
// line start: 3330
// line end:   3400
void SaveOverwritePad__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x800AADBC
// line start: 3403
// line end:   3474
void CharCardSelectMemcardPad__Fv() {
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 16
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x800AB004
// line start: 3479
// line end:   3505
void LAMBO_MovePad__FP4CPad(struct CPad *P) {
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 17
	register int move;
	// register: 5
	register int lcs;
}


// address: 0x800AB1B4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_800AB1B4(struct POLY_G4 **Prim) {
}


// address: 0x800AB230
// line start: 127
// line end:   131
unsigned short GetTick__C4CPad_addr_800AB230(struct CPad *this) {
}


// address: 0x800AB258
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad_addr_800AB258(struct CPad *this) {
}


// address: 0x800AB280
// line start: 113
// line end:   117
unsigned short GetUp__C4CPad_addr_800AB280(struct CPad *this) {
}


// address: 0x800AB2A8
// line start: 92
// line end:   92
void SetPadTickMask__4CPadUs_addr_800AB2A8(struct CPad *this, unsigned short mask) {
}


// address: 0x800AB2B0
// line start: 91
// line end:   91
void SetPadTick__4CPadUs_addr_800AB2B0(struct CPad *this, unsigned short tick) {
}


// address: 0x800AB2B8
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc_addr_800AB2B8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800AB2D8
// line start: 94
// line end:   94
void SetBack__6Dialogi_addr_800AB2D8(struct Dialog *this, int Type) {
}


// address: 0x800AB2E0
// line start: 91
// line end:   91
void SetBorder__6Dialogi_addr_800AB2E0(struct Dialog *this, int Type) {
}


// address: 0x800AB2E8
// line start: 79
// line end:   79
void ___6Dialog_addr_800AB2E8(struct Dialog *this, int __in_chrg) {
}


// address: 0x800AB310
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_800AB310(struct Dialog *this) {
}


// address: 0x800AB390
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_800AB390() {
}


// address: 0x800AB398
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati_addr_800AB398(struct TextDat *this, int FrNum) {
}


// address: 0x800AB3B4
// line start: 47
// line end:   51
void SetBirdFrig__Fb(bool f) {
}


// address: 0x800AB3E8
// line start: 84
// line end:   91
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x800AB440
// line start: 100
// line end:   146
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x800AB5A0
// line start: 156
// line end:   166
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x800AB61C
// line start: 174
// line end:   189
bool CheckDist__Fii(int x, int y) {
	// register: 16
	register int x1;
	// register: 16
	register int y1;
	{
		// register: 19
		register int i;
	}
}


// address: 0x800AB704
// line start: 200
// line end:   223
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 4
	register int p;
	// register: 4
	register int i;
	{
		{
			// register: 5
			// size: 0x19E8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x800AB830
// line start: 232
// line end:   241
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x800AB884
// line start: 250
// line end:   283
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 20
	register int nd;
	// register: 19
	register int x;
	// register: 18
	register int y;
	{
		{
			// register: 17
			// size: 0x2
			register struct Perch *p;
		}
	}
}


// address: 0x800ABA64
// line start: 292
// line end:   312
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABB68
// line start: 323
// line end:   330
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABBD4
// line start: 339
// line end:   355
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABC58
// line start: 363
// line end:   376
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABD04
// line start: 381
// line end:   408
void CheckDirOk__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 21
	register int ofx;
	// register: 20
	register int ofy;
	// register: 22
	register bool posok;
	{
		// register: 23
		register int d;
		{
			{
				// register: 18
				register int i;
			}
		}
	}
}


// address: 0x800ABE14
// line start: 416
// line end:   428
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABEC0
// line start: 437
// line end:   460
void BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *leader;
	{
		{
			{
				// register: 17
				register int i;
			}
		}
	}
}


// address: 0x800ABF4C
// line start: 468
// line end:   526
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


// address: 0x800AC250
// line start: 536
// line end:   540
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800AC25C
// line start: 555
// line end:   562
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800AC2C8
// line start: 572
// line end:   591
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x800AC3C0
// line start: 599
// line end:   612
void ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	// size: 0x18
	register struct BIRDSTRUCT *leader;
	{
		{
			// register: 17
			register int x;
			// register: 18
			register int y;
		}
	}
}


// address: 0x800AC4B0
// line start: 637
// line end:   656
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x800AC588
// line start: 668
// line end:   707
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x800AC6CC
// line start: 715
// line end:   744
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 3
	register int banim;
}


// address: 0x800AC764
// line start: 750
// line end:   770
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x800AC894
// line start: 775
// line end:   795
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// register: 4
	// size: 0x108
	register struct CBlocks *gb;
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 20
	// size: 0x70
	register struct TextDat *Dat;
	{
		{
			// register: 16
			register int ot;
		}
	}
}


// address: 0x800AC9BC
// line start: 834
// line end:   898
void DrawLBird__Fv() {
	// register: 20
	// size: 0x18
	register struct BIRDSTRUCT *ThisBird;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 30
	// size: 0x108
	register struct CBlocks *gblock;
	// register: 2
	register int ScrXOff;
	// register: 2
	register int ScrYOff;
	// register: 19
	register int x;
	// register: 18
	register int y;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFD0
	// size: 0x70
	auto struct TextDat *Dat;
	{
		{
			{
				// register: 22
				register int i;
				{
					{
						{
							// register: 16
							register int ot;
						}
					}
				}
			}
		}
	}
}


// address: 0x800ACBF0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800ACBF0(struct POLY_FT4 **Prim) {
}


// address: 0x800ACC6C
// line start: 177
// line end:   188
int GetOtPos__7CBlocksi_addr_800ACC6C(struct CBlocks *this, int LogicalY) {
	// register: 3
	register int OtPos;
}


// address: 0x800ACCA8
// line start: 95
// line end:   192
short PlayFMV__FPcii(char *str, int w, int h) {
	// register: 17
	register short RetVal;
	// register: 21
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x800ACE78
// line start: 197
// line end:   218
void play_movie(char *pszMovie) {
	{
		{
			{
			}
		}
	}
}


// address: 0x800ACF40
// line start: 177
// line end:   178
int GetTpY__FUs_addr_800ACF40(unsigned short tpage) {
}


// address: 0x800ACF5C
// line start: 182
// line end:   183
int GetTpX__FUs_addr_800ACF5C(unsigned short tpage) {
}


// address: 0x800ACF68
// line start: 71
// line end:   90
void LoadKanjiFont__FPc(char *name) {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800AD014
// line start: 107
// line end:   121
void FreeKanji__Fv() {
}


// address: 0x800AD020
// line start: 127
// line end:   135
void ClearKanjiCount__Fv() {
	// register: 4
	// size: 0x4
	register struct vbuffS *kl;
	// register: 3
	register int i;
}


// address: 0x800AD058
// line start: 139
// line end:   149
void ClearKanjiBuffer__Fv() {
	// register: 4
	// size: 0x4
	register struct vbuffS *kl;
	// register: 3
	register int i;
}


// address: 0x800AD09C
// line start: 154
// line end:   236
void KANJI_SetCache__F10KANJI_FRMS(enum KANJI_FRMS ct) {
	// register: 17
	// size: 0x108
	register struct CBlocks *BgBlocks;
	{
		{
			// register: 16
			// size: 0x70
			register struct TextDat *Dat;
			{
				// register: 16
				// size: 0x70
				register struct TextDat *Dat;
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x800AD328
// line start: 245
// line end:   278
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
}


// address: 0x800AD458
// line start: 286
// line end:   289
bool SetKanjiLoaded__Fb(bool loaded) {
	// register: 2
	register bool iret;
}


// address: 0x800AD468
// line start: 294
// line end:   295
bool IsKanjiLoaded__Fv() {
}


// address: 0x800AD474
// line start: 300
// line end:   313
void KanjiSetTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	// size: 0x4
	register enum LANG_DB_NO NewLangDbNo;
}


// address: 0x800AD4CC
// line start: 317
// line end:   330
void KANJI_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
	// register: 3
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x800AD544
// line start: 336
// line end:   347
int inmem__Fs(short k) {
	// register: 16
	// size: 0x4
	register struct vbuffS *kl;
	{
		// register: 3
		register int i;
	}
}


// address: 0x800AD5CC
// line start: 351
// line end:   355
unsigned short getb__FUs(unsigned short n) {
}


// address: 0x800AD5DC
// line start: 365
// line end:   441
void ShadeBuff__FPUcii(unsigned char *b, int col, int border) {
	{
		// register: 7
		register int y;
		{
			{
				// register: 3
				register int x;
			}
		}
	}
}


// address: 0x800AD784
// line start: 450
// line end:   469
void Crunch__FPUcT0(unsigned char *s, unsigned char *db) {
	// register: 2
	register int c;
	// register: 8
	register unsigned short *d;
	{
		// register: 9
		register int y;
		{
			{
				// register: 7
				register int x;
			}
		}
	}
}


// address: 0x800AD7F8
// line start: 474
// line end:   502
void _get_font__FPUcUsT0(unsigned char *d, unsigned short num, unsigned char *abuff) {
	// register: 16
	register unsigned char *bp;
	// register: 4
	register long i;
	// register: 18
	register char bcy;
	// register: 3
	register char shift;
}


// address: 0x800AD8B8
// line start: 507
// line end:   525
int getfreekan__Fv() {
	// register: 17
	register unsigned char max;
	// register: 18
	register int n;
	// register: 16
	// size: 0x4
	register struct vbuffS *kl;
	{
		// register: 4
		register int i;
	}
}


// address: 0x800AD970
// size: 0x4
// line start: 530
// line end:   531
enum KANJI_FRMS GetKanjiCacheFrm__Fv() {
}


// address: 0x800AD97C
// size: 0x28
// line start: 535
// line end:   619
struct POLY_FT4 *GetKanjiFrm__FUs(unsigned short kan) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *ft4;
	// register: 17
	register int im;
	// address: 0xFFFFFEB8
	// size: 0x8
	auto struct RECT r;
	// address: 0xFFFFFEC0
	// size: 0x90
	auto unsigned char deBuff[144];
	// address: 0xFFFFFF50
	// size: 0x90
	auto unsigned char dekbuff[144];
	// register: 3
	// size: 0x4
	register struct vbuffS *kl;
	// register: 16
	// size: 0x70
	register struct TextDat *Dat;
	// register: 17
	register int TpX;
	// register: 16
	register int TpY;
	// register: 16
	register unsigned char *kbuff;
	// register: 18
	register unsigned char *kanjbuff;
	// register: 3
	register int U;
	// register: 4
	register int V;
}


// address: 0x800ADC08
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800ADC08(struct POLY_FT4 **Prim) {
}


// address: 0x800ADC84
// line start: 228
// line end:   228
void DumpMonsters__7CBlocks_addr_800ADC84(struct CBlocks *this) {
}


// address: 0x800ADCAC
// size: 0xC
// line start: 243
// line end:   247
struct ALL_DECOMP_BUFFERS *GetDecompBuffers__7TextDat(struct TextDat *this) {
}


// address: 0x800ADCD0
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati_addr_800ADCD0(struct TextDat *this, int FrNum) {
}


// address: 0x800ADCEC
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


// address: 0x800ADDD4
// line start: 118
// line end:   235
int PAK_DoPak__FPUcPCUci(unsigned char *Dest, unsigned char *buffer, int insize) {
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


// address: 0x800AE014
// line start: 245
// line end:   278
int PAK_DoUnpak__FPUcPCUc(unsigned char *Dest, unsigned char *Source) {
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


// address: 0x800AE0B4
// line start: 55
// line end:   58
void fputc__5blockUc(struct block *this, unsigned char Val) {
}


// address: 0x800AE0DC
// line start: 72
// line end:   74
void RemoveHelp__Fv() {
}


// address: 0x800AE0F0
// line start: 80
// line end:   150
void HelpPad__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
}


// address: 0x800AE398
// line start: 156
// line end:   176
int GetControlKey__FiPb(int str, bool *iscombo) {
	// register: 6
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 7
		register int i;
	}
}


// address: 0x800AE440
// line start: 228
// line end:   233
void InitHelp__Fv() {
}


// address: 0x800AE48C
// line start: 294
// line end:   342
int DrawHelpLine__FiiPccccP10HelpStruct(int x, int y, char *txt, char R, int G, int B, struct HelpStruct *hp) {
	// register: 2
	register int eln;
	{
		{
			// register: 16
			register int key;
			// address: 0xFFFFFFD8
			auto bool combo;
			{
				{
					// register: 2
					register int nkey;
				}
			}
		}
	}
}


// address: 0x800AE6A0
// line start: 346
// line end:   411
void DisplayHelp__Fv() {
	// register: 23
	// size: 0xC
	register struct HelpStruct *hp;
	// register: 22
	register int y;
	{
		// address: 0xFFFFFFB8
		auto int i;
		{
			// register: 16
			register char *txt;
			{
				{
					{
						{
							// register: 30
							register int nlen;
						}
					}
				}
			}
		}
	}
}


// address: 0x800AEA20
// line start: 415
// line end:   452
void DrawHelp__Fv() {
	// address: 0x80121ED0
	// size: 0x10
	static struct Dialog txtBack;
	// register: 16
	register int otpos;
	// register: 19
	register int oldDot;
	// register: 20
	register int OldPrintOT;
}


// address: 0x800AEC98
// line start: 454
// line end:   454
void _GLOBAL__D_DrawHelp__Fv() {
}


// address: 0x800AECD8
// line start: 454
// line end:   454
void _GLOBAL__I_DrawHelp__Fv() {
}


// address: 0x800AED00
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc_addr_800AED00(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800AED20
// line start: 91
// line end:   91
void SetBorder__6Dialogi_addr_800AED20(struct Dialog *this, int Type) {
}


// address: 0x800AED28
// line start: 79
// line end:   79
void ___6Dialog_addr_800AED28(struct Dialog *this, int __in_chrg) {
}


// address: 0x800AED50
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_800AED50(struct Dialog *this) {
}


// address: 0x800AEDD0
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_800AEDD0() {
}


// address: 0x800AEDD8
// line start: 127
// line end:   131
unsigned short GetTick__C4CPad_addr_800AEDD8(struct CPad *this) {
}


// address: 0x800AEE00
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad_addr_800AEE00(struct CPad *this) {
}


// address: 0x800AEE28
// line start: 92
// line end:   92
void SetPadTickMask__4CPadUs_addr_800AEE28(struct CPad *this, unsigned short mask) {
}


// address: 0x800AEE30
// line start: 91
// line end:   91
void SetPadTick__4CPadUs_addr_800AEE30(struct CPad *this, unsigned short tick) {
}


// address: 0x800AEE38
// line start: 232
// line end:   233
void DisplayMonsterTypes__Fv() {
}


// address: 0x800AEE40
// line start: 42
// line end:   48
bool IsAutoTarget__Fi(int Spell) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800AEE78
// line start: 53
// line end:   61
int GetXOff__Fii(int wx, int wy) {
	// register: 2
	register int xo;
}


// address: 0x800AEEC0
// line start: 65
// line end:   74
int GetYOff__Fii(int wx, int wy) {
	// register: 2
	register int yo;
}


// address: 0x800AEF0C
// line start: 79
// line end:   99
void GetScrXY__FPiT0(int *wx, int *wy) {
	// register: 19
	// size: 0x108
	register struct CBlocks *gblocks;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT R;
	// register: 16
	register int plx;
	// register: 17
	register int ply;
	// register: 18
	register int xo;
	// register: 16
	register int x;
	// register: 17
	register int y;
}


// address: 0x800AEFDC
// line start: 103
// line end:   108
void ClearTrails__11SpellTarget(struct SpellTarget *this) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800AF004
// line start: 114
// line end:   170
void Init__11SpellTargeti(struct SpellTarget *this, int plrn) {
	{
		{
			{
				{
					{
						{
							// register: 2
							register int SplLvl;
						}
					}
				}
			}
		}
	}
}


// address: 0x800AF268
// line start: 174
// line end:   181
void Remove__11SpellTarget(struct SpellTarget *this) {
}


// address: 0x800AF2CC
// line start: 187
// line end:   230
void DrawArrow__11SpellTargetii(struct SpellTarget *this, int x1, int y1) {
	// register: 23
	register int bright;
	// register: 21
	register char r;
	// register: 19
	register char g;
	// register: 20
	register char b;
	// register: 30
	register int otpos;
	{
		// register: 5
		register int ni;
		{
			// register: 17
			register int i;
			// register: 5
			register int ni;
		}
	}
}


// address: 0x800AF550
// line start: 239
// line end:   387
void Show__11SpellTarget(struct SpellTarget *this) {
	// address: 0xFFFFFFD8
	auto int x;
	// address: 0xFFFFFFDC
	auto int y;
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
	// register: 20
	register int otx;
	// register: 21
	register int oty;
	// register: 16
	register int cp;
	// register: 18
	register int plx;
	// register: 16
	register int ply;
	// register: 19
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 20
	register int ops;
	{
		{
			// register: 2
			register int vis_flag;
			// register: 4
			register int inthatx;
			// register: 5
			register int inthaty;
			{
				{
					{
						// register: 2
						register int d;
					}
				}
			}
		}
	}
}


// address: 0x800AFA6C
// line start: 390
// line end:   426
void ForceTarget__11SpellTargetiii(struct SpellTarget *this, int monst, int x, int y) {
}


// address: 0x800AFBC0
// line start: 434
// line end:   437
bool TargetActive__Fi(int pnum) {
}


// address: 0x800AFBE8
// size: 0x48
// line start: 441
// line end:   443
struct SpellTarget *GetSpellTarget__Fi(int pnum) {
}


// address: 0x800AFC08
// line start: 449
// line end:   533
void ArrowTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 20
	register int pnum;
	// register: 30
	register int times;
	// address: 0xFFFFFFB8
	auto int bright;
	// register: 22
	// size: 0x4
	register enum TARGET targ;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct RECT R;
	// register: 21
	register int angle;
	// address: 0xFFFFFFC0
	auto int r;
	// address: 0xFFFFFFC8
	auto int g;
	// register: 23
	register int b;
	{
		{
			{
				// address: 0xFFFFFFB0
				auto int plx;
				// address: 0xFFFFFFB4
				auto int ply;
				// register: 19
				register int otpos;
				{
					{
						{
							// register: 3
							// size: 0x19E8
							register struct PlayerStruct *ptrplr;
							{
								// register: 2
								// size: 0x6C
								register struct MonsterStruct *Monst;
								{
									// register: 16
									// size: 0x50
									register struct MissileStruct *Miss;
									// register: 2
									register int pxo;
									// register: 2
									register int pyo;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800AFFAC
// line start: 540
// line end:   550
void SPL_Arrow__F6TARGETiii(enum TARGET t, int pnum, int times, int size) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 2
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800B002C
// line start: 17
// line end:   17
bool Active__11SpellTarget_addr_800B002C(struct SpellTarget *this) {
}


// address: 0x800B0038
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_800B0038() {
}


// address: 0x800B0040
// line start: 106
// line end:   110
unsigned short GetCur__C4CPad_addr_800B0040(struct CPad *this) {
}


// address: 0x8003017C
// line start: 542
// line end:   545
unsigned char TrimCol__Fs_addr_8003017C(short col) {
}


// address: 0x800301B4
// line start: 551
// line end:   728
void DrawSpellCel__FllUclUcc(long xp, long yp, unsigned char Trans, long nCel, int w, int sel) {
	// address: 0xFFFFFF78
	// size: 0x70
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
	// register: 16
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
	// address: 0xFFFFFF98
	auto int otpos;
	{
		{
			{
				{
					// register: 22
					register int X;
					// register: 23
					register int Y;
					// register: 21
					register int SW;
					// register: 20
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


// address: 0x80030D38
// line start: 742
// line end:   743
void SetSpellTrans__Fc(char t) {
}


// address: 0x80030D44
// line start: 754
// line end:   798
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	// register: 17
	register int CountDown;
	// register: 16
	register int i;
	{
		// register: 16
		register int omp;
	}
}


// address: 0x80030E9C
// line start: 804
// line end:   825
void DrawSpeedSpellTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	// register: 19
	register bool alive;
	{
		// register: 18
		register int old_opts;
	}
}


// address: 0x80030FCC
// line start: 830
// line end:   862
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80031080
// line start: 888
// line end:   1242
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
	// address: 0xFFFFFFA0
	auto unsigned long mask;
	// address: 0xFFFFFFA8
	auto unsigned long spl;
	// register: 5
	register int s;
	// register: 17
	register int c;
	// register: 23
	register int v;
	// address: 0xFFFFFFB0
	auto int NoSpells;
	// register: 6
	register unsigned char trans;
	// register: 21
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 18
	// size: 0xEC
	register struct CPad *P;
	// register: 21
	register int lx;
	// register: 22
	register int ly;
	// register: 16
	register int NoYSpells;
	// register: 17
	register int NoXSpells;
	// register: 19
	register int PLEFT;
	// register: 20
	register int PRIGHT;
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


// address: 0x80031D3C
// line start: 1248
// line end:   1261
void SetSpell__Fi(int pnum) {
}


// address: 0x80031E48
// line start: 1272
// line end:   1278
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80031F08
// line start: 1284
// line end:   1286
void ClearPanel__Fv() {
}


// address: 0x80031F38
// line start: 1339
// line end:   1340
void InitPanelStr__Fv() {
}


// address: 0x80031F58
// line start: 1426
// line end:   1576
void InitControlPan__Fv() {
	// register: 3
	register int i;
}


// address: 0x80032184
// line start: 1582
// line end:   1585
void DrawCtrlPan__Fv() {
}


// address: 0x800321B0
// line start: 1665
// line end:   1677
void DoAutoMap__Fv() {
}


// address: 0x80032210
// line start: 1684
// line end:   1775
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


// address: 0x80032930
// line start: 1849
// line end:   1865
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


// address: 0x80032A40
// line start: 1887
// line end:   1915
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


// address: 0x80032B5C
// line start: 1959
// line end:   2066
void PrintInfo__Fv() {
	// register: 18
	register int NoOfLines;
	// register: 20
	register int nOffset1;
	// register: 19
	register int nlines;
	// register: 22
	register int PageOffset;
	{
		{
			{
				// register: 17
				register int i;
				{
					{
						{
							{
								// register: 17
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
	}
}


// address: 0x80032F8C
// line start: 2072
// line end:   2193
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


// address: 0x800336C0
// line start: 2246
// line end:   2385
void MY_PlrStringXY__Fv() {
	// register: 22
	// size: 0x28
	register struct CSDATA *ptr;
	// address: 0xFFFFFFB8
	auto char r;
	// address: 0xFFFFFFC0
	auto char g;
	// address: 0xFFFFFFC8
	auto char b;
	// register: 23
	register int x;
	// register: 30
	register int y;
	// address: 0xFFFFFFD0
	auto int w;
	// register: 21
	register int len;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT Angle;
}


// address: 0x80033DD0
// line start: 2391
// line end:   2407
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80033E78
// line start: 2437
// line end:   2486
void DrawPlus__Fii(int n, int pnum) {
	// register: 17
	// size: 0x70
	register struct TextDat *ThisDat;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 18
	register int otpos;
	// register: 3
	register int x;
	// register: 7
	register int y;
}


// address: 0x80034010
// line start: 2493
// line end:   2547
void ChrCheckValidButton__Fi(int move) {
	// register: 2
	register int pc;
	// register: 3
	register int count;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8003431C
// line start: 2557
// line end:   2584
void DrawArrows__Fv() {
	// register: 18
	// size: 0x70
	register struct TextDat *ThisDat;
	// register: 10
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 16
	register unsigned char flip;
	// register: 17
	register int x;
	// register: 19
	register int otpos;
}


// address: 0x8003441C
// line start: 2589
// line end:   2796
void BuildChr__Fv() {
	// register: 17
	register char c;
	// address: 0xFFFFFFB0
	// size: 0x40
	auto char chrstr[64];
	// register: 18
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


// address: 0x80035680
// line start: 2801
// line end:   2898
void DrawChr__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x40
	auto char chrstr[64];
	// register: 2
	register int pc;
	// register: 17
	// size: 0xEC
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


// address: 0x80035B30
// line start: 2952
// line end:   2977
void DrawChrTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
}


// address: 0x80035C40
// line start: 2986
// line end:   2994
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80035CD4
// line start: 2999
// line end:   3050
void CheckChrBtns__Fv() {
	// register: 16
	register int pc;
}


// address: 0x8003605C
// line start: 3057
// line end:   3097
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x800360E0
// line start: 3105
// line end:   3120
void RedBack__Fv() {
	// register: 16
	// size: 0x70
	register struct TextDat *ThisDat;
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800361D8
// line start: 3126
// line end:   3192
void PrintSBookStr__FiiiPCcUcUc(int x, int y, int cspel, char *pszStr, int bright, int Staff) {
	// register: 4
	register unsigned char r;
	// register: 3
	register unsigned char g;
	// register: 5
	register unsigned char b;
}


// address: 0x80036460
// line start: 3199
// line end:   3219
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x800366C0
// line start: 3246
// line end:   3455
void DrawSpellBook__Fb(bool DrawBg) {
	// register: 18
	register int i;
	// register: 17
	register int ii;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// address: 0xFFFFFFC0
	auto int mind;
	// address: 0xFFFFFFC4
	auto int maxd;
	// register: 23
	register int sx;
	// register: 22
	register int sy;
	// address: 0xFFFFFFC8
	auto unsigned long tspls;
	// register: 19
	register char st;
	// register: 17
	register char c;
	// register: 16
	register int v;
	// register: 21
	register unsigned char bright;
	// address: 0xFFFFFFB8
	// size: 0x4
	auto char Num[4];
	// register: 22
	register int bw;
	// register: 16
	// size: 0xEC
	register struct CPad *P;
	// register: 18
	register int lsbooktab;
	// register: 19
	register int lcur_spel;
}


// address: 0x80037230
// line start: 3460
// line end:   3518
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 7
	register char st;
	// register: 8
	register int cspel;
	{
		{
			{
				// register: 2
				register bool splok;
			}
		}
	}
}


// address: 0x800374CC
// line start: 3532
// line end:   3534
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80037500
// line start: 4043
// line end:   4043
void _GLOBAL__D_DrawLevelUpFlag() {
}


// address: 0x80037528
// line start: 4043
// line end:   4043
void _GLOBAL__I_DrawLevelUpFlag() {
}


// address: 0x80037564
// line start: 127
// line end:   131
unsigned short GetTick__C4CPad_addr_80037564(struct CPad *this) {
}


// address: 0x8003758C
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad_addr_8003758C(struct CPad *this) {
}


// address: 0x800375B4
// line start: 92
// line end:   92
void SetPadTickMask__4CPadUs_addr_800375B4(struct CPad *this, unsigned short mask) {
}


// address: 0x800375BC
// line start: 91
// line end:   91
void SetPadTick__4CPadUs_addr_800375BC(struct CPad *this, unsigned short tick) {
}


// address: 0x800375C4
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc_addr_800375C4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800375E4
// line start: 94
// line end:   94
void SetBack__6Dialogi_addr_800375E4(struct Dialog *this, int Type) {
}


// address: 0x800375EC
// line start: 91
// line end:   91
void SetBorder__6Dialogi_addr_800375EC(struct Dialog *this, int Type) {
}


// address: 0x800375F4
// line start: 79
// line end:   79
void ___6Dialog_addr_800375F4(struct Dialog *this, int __in_chrg) {
}


// address: 0x8003761C
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_8003761C(struct Dialog *this) {
}


// address: 0x8003769C
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_8003769C() {
}


// address: 0x800376A4
// line start: 171
// line end:   171
int GetMaxOtPos__7CBlocks_addr_800376A4() {
}


// address: 0x800376AC
// size: 0x8
// line start: 232
// line end:   232
struct PAL *GetPal__7TextDati_addr_800376AC(struct TextDat *this, int PalNum) {
}


// address: 0x800376C8
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati_addr_800376C8(struct TextDat *this, int FrNum) {
}


// address: 0x800376E4
// line start: 126
// line end:   132
void InitCursor__Fv() {
}


// address: 0x800376EC
// line start: 137
// line end:   142
void FreeCursor__Fv() {
}


// address: 0x800376F4
// line start: 148
// line end:   158
void SetICursor__Fi(int i) {
}


// address: 0x80037750
// line start: 165
// line end:   173
void SetCursor__Fi(int i) {
}


// address: 0x800377B4
// line start: 179
// line end:   180
void NewCursor__Fi(int i) {
}


// address: 0x800377D4
// line start: 186
// line end:   201
void InitLevelCursor__Fv() {
}


// address: 0x80037834
// line start: 211
// line end:   242
void CheckTown__Fv() {
	// register: 11
	register int ocursmx;
	// register: 10
	register int ocursmy;
	{
		// register: 9
		register int i;
		{
			// register: 3
			register int mx;
			{
				{
					{
						// register: 8
						register int dir;
					}
				}
			}
		}
	}
}


// address: 0x80037AC0
// line start: 247
// line end:   279
void CheckRportal__Fv() {
	// register: 11
	register int ocursmx;
	// register: 10
	register int ocursmy;
	{
		// register: 9
		register int i;
		{
			// register: 3
			register int mx;
			{
				{
					{
						// register: 8
						register int dir;
					}
				}
			}
		}
	}
}


// address: 0x80037D20
// line start: 284
// line end:   777
void CheckCursMove__Fv() {
}


// address: 0x80037D28
// line start: 40
// line end:   91
void InitDead__Fv() {
	// register: 6
	register int nd;
	// register: 7
	register int i;
	// register: 2
	register int mi;
	// address: 0xFFFFFCF8
	// size: 0x2F8
	auto int mtypes[190];
}


// address: 0x80037F2C
// line start: 99
// line end:   103
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
}


// address: 0x80037F4C
// line start: 292
// line end:   305
void FreeGameMem__Fv() {
}


// address: 0x80037F84
// line start: 312
// line end:   352
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80038074
// line start: 357
// line end:   374
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800380E8
// line start: 390
// line end:   428
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x800381AC
// line start: 433
// line end:   526
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x800383AC
// line start: 532
// line end:   653
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80038514
// line start: 1087
// line end:   1168
unsigned char TryIconCurs__Fv() {
}


// address: 0x80038834
// line start: 2191
// line end:   2238
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x8003883C
// line start: 2245
// line end:   2405
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800388D0
// line start: 2413
// line end:   2447
void LoadLvlGFX__Fv() {
	// register: 16
	register char *LoadFile;
}


// address: 0x80038988
// line start: 2452
// line end:   2464
void LoadMegaTiles__FPCc(char *LoadFile) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyIo;
}


// address: 0x80038A18
// line start: 2472
// line end:   2484
void LoadAllGFX__Fv() {
}


// address: 0x80038A38
// line start: 2505
// line end:   2525
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80038B30
// line start: 2534
// line end:   2587
void LoCreateLevel__FPv() {
	// register: 5
	register int lvldir;
}


// address: 0x80038C94
// line start: 2592
// line end:   2661
void ClearOutDungeonMap__Fv() {
	// register: 17
	register bool istown;
	// register: 16
	register unsigned short val;
	{
		// register: 6
		register int x;
		{
			{
				// register: 4
				register int y;
				{
					// register: 7
					register int y;
					// register: 6
					register int x;
					{
						{
							// register: 4
							register int x;
							{
								// register: 5
								register int y;
								// register: 6
								register int x;
								{
									{
										// register: 4
										register int x;
										{
											// register: 5
											register int y;
											// register: 6
											register int x;
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
					}
				}
			}
		}
	}
}


// address: 0x80038E94
// line start: 2690
// line end:   2703
void AddQuestItems__Fv() {
}


// address: 0x80038F34
// line start: 2710
// line end:   2712
void AllSolid__Fii(int x, int y) {
}


// address: 0x80038F74
// line start: 2716
// line end:   2750
void FillCrapBits__Fv() {
	// register: 18
	// size: 0x14
	register struct QuestStruct *qs;
	{
		{
			{
				{
					// register: 16
					register int x;
					// register: 17
					register int y;
				}
			}
		}
	}
}


// address: 0x80039114
// line start: 2755
// line end:   2771
void Lsaveplrpos__Fv() {
}


// address: 0x800391C0
// line start: 2776
// line end:   2780
void Lrestoreplrpos__Fv() {
}


// address: 0x80039210
// line start: 2785
// line end:   3135
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


// address: 0x80039B48
// line start: 3163
// line end:   3165
void SetSpeed__F9GM_SPEEDS(enum GM_SPEEDS Speed) {
}


// address: 0x80039B5C
// size: 0x4
// line start: 3169
// line end:   3170
enum GM_SPEEDS GetSpeed__Fv() {
}


// address: 0x80039B68
// line start: 3175
// line end:   3273
void game_logic__Fv() {
	// register: 17
	register int Frames;
	// register: 18
	register int ThisTick;
	// register: 16
	register int SinceLast;
}


// address: 0x80039D50
// line start: 3278
// line end:   3308
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80039DF8
// line start: 3317
// line end:   3381
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80039E58
// line start: 3448
// line end:   3453
void alloc_plr__Fv() {
}


// address: 0x80039E60
// line start: 3516
// line end:   3574
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80039E68
// line start: 3581
// line end:   3583
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80039E88
// line start: 3588
// line end:   3590
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80039EA8
// line start: 3593
// line end:   3594
void app_fatal(char *pszFile) {
}


// address: 0x80039ED8
// line start: 3853
// line end:   3859
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80039F00
// line start: 3863
// line end:   3869
void DoMemCardFromInGame__Fv() {
}


// address: 0x80039F28
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80039F7C
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80039F9C
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80039FEC
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003A144
// line start: 166
// line end:   175
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 7
		register int quest;
	}
}


// address: 0x8003A204
// line start: 181
// line end:   191
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A334
// line start: 197
// line end:   208
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A46C
// line start: 213
// line end:   223
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A5A0
// line start: 228
// line end:   238
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A6D4
// line start: 243
// line end:   253
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A808
// line start: 258
// line end:   269
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A944
// line start: 274
// line end:   284
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003AA78
// line start: 290
// line end:   300
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003ABAC
// line start: 305
// line end:   315
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003ACE0
// line start: 321
// line end:   347
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
	// register: 2
	register int y2;
}


// address: 0x8003AF7C
// line start: 354
// line end:   368
void InitTowners__Fv() {
}


// address: 0x8003B008
// line start: 373
// line end:   387
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


// address: 0x8003B0AC
// line start: 394
// line end:   401
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8003B194
// line start: 417
// line end:   425
void TownBlackSmith__Fv() {
	// register: 16
	register int tidx;
}


// address: 0x8003B220
// line start: 433
// line end:   440
void TownBarOwner__Fv() {
	// register: 16
	register int tidx;
}


// address: 0x8003B2BC
// line start: 448
// line end:   461
void TownDead__Fv() {
	// register: 16
	register int tidx;
}


// address: 0x8003B3A4
// line start: 467
// line end:   469
void TownHealer__Fv() {
}


// address: 0x8003B3CC
// line start: 476
// line end:   479
void TownStory__Fv() {
}


// address: 0x8003B3F4
// line start: 486
// line end:   489
void TownDrunk__Fv() {
}


// address: 0x8003B41C
// line start: 496
// line end:   499
void TownBoy__Fv() {
}


// address: 0x8003B444
// line start: 507
// line end:   510
void TownWitch__Fv() {
}


// address: 0x8003B46C
// line start: 517
// line end:   519
void TownBarMaid__Fv() {
}


// address: 0x8003B494
// line start: 526
// line end:   529
void TownCow__Fv() {
}


// address: 0x8003B4BC
// line start: 536
// line end:   587
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


// address: 0x8003B70C
// size: 0x6C
// line start: 593
// line end:   598
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x8003B7E0
// line start: 607
// line end:   653
void CowSFX__Fi(int pnum) {
	// address: 0x80111548
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8011BA8C
	static int snLastCowSFX;
}


// address: 0x8003B8FC
// line start: 659
// line end:   666
void TownerTalk__Fii(int first, int t) {
}


// address: 0x8003B93C
// line start: 673
// line end:   1090
void TalkToTowner__Fii(int p, int t) {
	// address: 0xFFFFFFE0
	auto int i;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 17
	// size: 0x6C
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


// address: 0x8003CEC4
// line start: 83
// line end:   99
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003CEEC
// line start: 107
// line end:   117
void stream_stop__Fv() {
}


// address: 0x8003CF48
// line start: 127
// line end:   137
void stream_pause__Fv() {
}


// address: 0x8003CFAC
// line start: 148
// line end:   156
void stream_resume__Fv() {
}


// address: 0x8003CFFC
// line start: 169
// line end:   207
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003D0E8
// line start: 213
// line end:   229
void stream_update__Fv() {
}


// address: 0x8003D0F0
// line start: 235
// line end:   242
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003D10C
// line start: 249
// line end:   280
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003D164
// line start: 286
// line end:   309
void FreeMonsterSnd__Fv() {
}


// address: 0x8003D16C
// line start: 327
// line end:   368
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// address: 0xFFFFFFA0
	// size: 0x40
	auto char Temp[64];
	// register: 4294967295
	register long volume;
	// register: 6
	register long pan;
	// register: 5
	register int scrx;
	// register: 4
	register int scry;
	// register: 2
	// size: 0x108
	register struct CBlocks *gblocks;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register long vol;
}


// address: 0x8003D354
// line start: 375
// line end:   424
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003D4B8
// line start: 433
// line end:   478
void PlayEffect__Fii(int i, int mode) {
	// register: 3
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003D604
// line start: 485
// line end:   511
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003D6AC
// line start: 520
// line end:   528
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003D718
// line start: 535
// line end:   548
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003D7C4
// line start: 554
// line end:   569
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


// address: 0x8003D85C
// line start: 576
// line end:   586
void sound_update__Fv() {
}


// address: 0x8003D890
// line start: 594
// line end:   625
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003D8D4
// line start: 631
// line end:   644
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003D97C
// line start: 656
// line end:   663
void stream_fade__Fv() {
}


// address: 0x8003D9BC
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


// address: 0x8003DA60
// line start: 94
// line end:   97
void SetRndSeed__Fl(long s) {
}


// address: 0x8003DA70
// line start: 102
// line end:   107
long GetRndSeed__Fv() {
}


// address: 0x8003DAB8
// line start: 113
// line end:   119
long random__Fil(int idx, long v) {
}


// address: 0x8003DB24
// line start: 371
// line end:   421
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003DB70
// line start: 432
// line end:   478
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003DBC0
// line start: 490
// line end:   500
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003DBC8
// line start: 568
// line end:   587
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003DBD0
// line start: 1104
// line end:   1104
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003DBD8
// line start: 156
// line end:   167
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003DC6C
// line start: 173
// line end:   176
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003DC98
// line start: 185
// line end:   282
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x8003DDCC
// line start: 302
// line end:   311
void interface_msg_pump__Fv() {
}


// address: 0x8003DDD4
// line start: 336
// line end:   576
void ShowProgress__FUi(unsigned int uMsg) {
	// register: 17
	register unsigned long (*saveProc)();
}


// address: 0x8003E1A8
// line start: 969
// line end:   971
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003E1E0
// line start: 556
// line end:   567
void InitItemGFX__Fv() {
}


// address: 0x8003E20C
// line start: 573
// line end:   581
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003E2A8
// line start: 588
// line end:   634
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


// address: 0x8003E4C4
// line start: 641
// line end:   677
void InitItems__Fb(bool re_init) {
	// register: 5
	register int i;
}


// address: 0x8003E67C
// line start: 684
// line end:   940
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
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
	{
		{
			// register: 5
			// size: 0x6C
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


// address: 0x8003F0F4
// line start: 945
// line end:   975
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003F474
// line start: 984
// line end:   1000
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003F530
// line start: 1004
// line end:   1044
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x19E8
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


// address: 0x8003F690
// line start: 1050
// line end:   1054
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003F6DC
// line start: 1058
// line end:   1059
void SetItemMinStats__FPC12PlayerStructP10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003F708
// line start: 1065
// line end:   1080
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x8003F7E8
// line start: 1086
// line end:   1109
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003FACC
// line start: 1114
// line end:   1124
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003FB7C
// line start: 1130
// line end:   1161
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003FC94
// line start: 1167
// line end:   1170
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003FCC0
// line start: 1178
// line end:   1196
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


// address: 0x8003FE28
// line start: 1203
// line end:   1206
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003FE30
// line start: 1214
// line end:   1219
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003FE60
// line start: 1225
// line end:   1351
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x6C
	register struct ItemStruct *pi;
}


// address: 0x800403C0
// line start: 1358
// line end:   1389
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80040640
// line start: 1397
// line end:   1445
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


// address: 0x8004085C
// line start: 1452
// line end:   1475
void GetSuperItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int xx;
	// register: 20
	register int yy;
	{
		// register: 18
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


// address: 0x800409B4
// line start: 1481
// line end:   1493
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


// address: 0x80040A7C
// line start: 1499
// line end:   1505
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x80040B34
// line start: 1512
// line end:   1557
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x80040D98
// line start: 1564
// line end:   1626
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


// address: 0x80040F88
// line start: 1634
// line end:   1709
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


// address: 0x80041264
// line start: 1750
// line end:   1850
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 19
	register int rndv;
}


// address: 0x80041810
// line start: 1857
// line end:   1858
int RndPL__Fii(int param1, int param2) {
}


// address: 0x80041848
// line start: 1865
// line end:   1868
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x800418BC
// line start: 1875
// line end:   2157
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x80042FEC
// line start: 2165
// line end:   2267
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


// address: 0x80043454
// line start: 2274
// line end:   2308
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80043550
// line start: 2314
// line end:   2343
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80043680
// line start: 2352
// line end:   2388
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 8
	register int i;
}


// address: 0x800438C0
// line start: 2396
// line end:   2427
int RndUItem__Fi(int m) {
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


// address: 0x80043B04
// line start: 2435
// line end:   2458
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x80043C6C
// line start: 2466
// line end:   2491
int RndTypeItems__Fii(int itype, int imid) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 8
	register int ri;
	// register: 9
	register int i;
	// register: 7
	register unsigned char okflag;
}


// address: 0x80043DDC
// line start: 2498
// line end:   2532
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


// address: 0x80043F8C
// line start: 2539
// line end:   2568
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80044244
// line start: 2603
// line end:   2635
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80044384
// line start: 2647
// line end:   2651
void ItemRndDur__Fi(int ii) {
}


// address: 0x80044420
// line start: 2658
// line end:   2727
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80044768
// line start: 2735
// line end:   2789
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x800449C0
// line start: 2797
// line end:   2820
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x80044B1C
// line start: 2830
// line end:   2848
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80044C64
// line start: 2860
// line end:   2879
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 16
	register int idx;
}


// address: 0x80044D50
// line start: 2883
// line end:   2893
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x80044E10
// line start: 2902
// line end:   2918
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80044F54
// line start: 2930
// line end:   2959
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80045154
// line start: 2968
// line end:   3014
void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag) {
	// register: 18
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


// address: 0x800453A8
// line start: 3023
// line end:   3047
void SpawnRock__Fv() {
	// register: 3
	register int i;
	// register: 17
	register int ii;
	// register: 5
	register int ostand;
	// register: 5
	register int xx;
	// register: 4
	register unsigned char done;
}


// address: 0x80045554
// line start: 3056
// line end:   3088
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x8004570C
// line start: 3095
// line end:   3099
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80045760
// line start: 3109
// line end:   3124
void ItemDoppel__Fv() {
	// register: 4
	register int idoppelx;
	// register: 3
	// size: 0x6C
	register struct ItemStruct *i;
}


// address: 0x80045820
// line start: 3141
// line end:   3216
void ProcessItems__Fv() {
	// register: 19
	register int i;
	// register: 5
	register int ii;
	// register: 20
	register int numitemslist;
	// register: 4
	register int count;
	{
		{
			{
				// register: 3
				register int j;
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
}


// address: 0x80045AC4
// line start: 3223
// line end:   3228
void FreeItemGFX__Fv() {
}


// address: 0x80045ACC
// line start: 3247
// line end:   3272
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


// address: 0x80045C74
// line start: 3278
// line end:   3291
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 2
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x80045D70
// line start: 3296
// line end:   3320
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 5
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80045E64
// line start: 3324
// line end:   3337
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x6C
	register struct ItemStruct *pi;
}


// address: 0x80045F28
// line start: 3342
// line end:   3355
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80045F90
// line start: 3359
// line end:   3379
void DoRecharge__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
	// register: 16
	// size: 0x6C
	register struct ItemStruct *pi;
	{
		{
			// register: 2
			register int r;
		}
	}
}


// address: 0x800460B4
// line start: 3484
// line end:   3599
void PrintItemOil__Fc(char IDidx) {
	// register: 3
	register int StrVal;
}


// address: 0x800461B0
// line start: 3605
// line end:   3820
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80046854
// line start: 3905
// line end:   3959
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80046AB4
// line start: 3966
// line end:   4055
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
	{
		{
			{
				{
					// address: 0xFFFFFFC0
					// size: 0x28
					auto char tsrt[40];
				}
			}
		}
	}
}


// address: 0x80046F18
// line start: 4061
// line end:   4137
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
	{
		{
			{
				{
					// address: 0xFFFFFFC0
					// size: 0x28
					auto char tsrt[40];
				}
			}
		}
	}
}


// address: 0x80047284
// line start: 4144
// line end:   4200
void CastScroll__Fii(int pnum, int Spell) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
	{
		{
			// register: 6
			register int dx;
			// register: 7
			register int dy;
		}
	}
}


// address: 0x800474D4
// line start: 4207
// line end:   4405
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 16
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80047AF0
// line start: 4415
// line end:   4420
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80047B84
// line start: 4439
// line end:   4463
unsigned char PremiumItemOk__Fi(int i) {
	// register: 3
	register unsigned char rv;
}


// address: 0x80047C00
// line start: 4469
// line end:   4488
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80047D08
// line start: 4496
// line end:   4536
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct ItemStruct holditem;
}


// address: 0x80047FFC
// line start: 4545
// line end:   4564
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x8004839C
// line start: 4577
// line end:   4592
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80048578
// line start: 4623
// line end:   4627
void SpawnStoreGold__Fv() {
}


// address: 0x80048648
// line start: 4676
// line end:   4687
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x8004892C
// line start: 4699
// line end:   4707
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80048990
// line start: 4726
// line end:   4748
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80048B20
// line start: 4756
// line end:   4777
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80048C9C
// line start: 4785
// line end:   4806
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80048E18
// line start: 4945
// line end:   4986
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x80048F88
// line start: 5140
// line end:   5327
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 17
	register int SufIdx;
	// address: 0xFFFFFEE8
	// size: 0x40
	auto char PreStr[64];
	// address: 0xFFFFFF28
	// size: 0x40
	auto char ItemStr[64];
	// address: 0xFFFFFF68
	// size: 0x40
	auto char SufStr[64];
	// address: 0xFFFFFFA8
	// size: 0x40
	auto char ltstr[64];
}


// address: 0x800493F8
// line start: 5332
// line end:   5348
unsigned char SmithItemOk__Fi(int i) {
	// register: 3
	register unsigned char rv;
}


// address: 0x8004945C
// line start: 5355
// line end:   5375
int RndSmithItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 18
	register int i;
}


// address: 0x80049568
// line start: 5381
// line end:   5402
unsigned char WitchItemOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x800495F8
// line start: 5407
// line end:   5478
int RndWitchItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 16
	register int i;
	// register: 20
	register int pi;
	{
		{
			{
				{
					// register: 4
					register int is;
				}
			}
		}
	}
}


// address: 0x800497A8
// line start: 5484
// line end:   5489
void BubbleSwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF90
	// size: 0x6C
	auto struct ItemStruct h;
}


// address: 0x800498B0
// line start: 5494
// line end:   5509
void SortWitch__Fv() {
	// register: 4
	register int j;
	// register: 17
	register int k;
	// register: 5
	register unsigned char sorted;
}


// address: 0x80049A40
// line start: 5515
// line end:   5539
int RndBoyItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80049B64
// line start: 5545
// line end:   5575
unsigned char HealerItemOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80049D18
// line start: 5591
// line end:   5640
int RndHealerItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80049E18
// line start: 5646
// line end:   5659
void RecreatePremiumItem__Fiiii(int ii, int idx, int plvl, int iseed) {
	// register: 17
	register int itype;
}


// address: 0x80049EF4
// line start: 5664
// line end:   5689
void RecreateWitchItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	{
		{
			// register: 19
			register int itype;
			// register: 17
			register int iblvl;
		}
	}
}


// address: 0x8004A060
// line start: 5695
// line end:   5706
void RecreateSmithItem__Fiiii(int ii, int idx, int lvl, int iseed) {
}


// address: 0x8004A110
// line start: 5715
// line end:   5737
void RecreateHealerItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	{
		{
		}
	}
}


// address: 0x8004A1E4
// line start: 5742
// line end:   5756
void RecreateBoyItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	// register: 17
	register int itype;
}


// address: 0x8004A2BC
// line start: 5761
// line end:   5772
void RecreateTownItem__FiiUsii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue) {
}


// address: 0x8004A348
// line start: 5777
// line end:   5812
void SpawnSmith__Fi(int lvl) {
	// register: 16
	register int i;
	// register: 19
	register int nsi;
	// address: 0xFFFFFF68
	// size: 0x6C
	auto struct ItemStruct holditem;
}


// address: 0x8004A678
// line start: 5818
// line end:   5883
void SpawnWitch__Fi(int lvl) {
	// register: 17
	register int itype;
	// register: 16
	register int iblvl;
	// register: 18
	register int i;
	// register: 21
	register int nsi;
	// address: 0xFFFFFF68
	// size: 0x6C
	auto struct ItemStruct holditem;
}


// address: 0x8004AC70
// line start: 5887
// line end:   5937
void SpawnHealer__Fi(int lvl) {
	// register: 4
	register int i;
	// register: 17
	register int nsi;
	// register: 16
	register int srnd;
	// address: 0xFFFFFF70
	// size: 0x6C
	auto struct ItemStruct holditem;
}


// address: 0x8004B214
// line start: 5941
// line end:   5975
void SpawnBoy__Fi(int lvl) {
	// register: 16
	register int itype;
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct ItemStruct holditem;
}


// address: 0x8004B518
// line start: 5979
// line end:   5996
void SortSmith__Fv() {
	// register: 4
	register int j;
	// register: 17
	register int k;
	// register: 5
	register unsigned char sorted;
}


// address: 0x8004B69C
// line start: 6001
// line end:   6015
void SortHealer__Fv() {
	// register: 4
	register int j;
	// register: 17
	register int k;
	// register: 5
	register unsigned char sorted;
}


// address: 0x8004B82C
// line start: 6021
// line end:   6112
void RecreateItem__FiiUsiii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue, int PlrCreate) {
	// register: 21
	register int OldFePlayerNo;
	// register: 3
	register int uper;
	// register: 9
	register unsigned char onlygood;
	// register: 10
	register unsigned char uavail;
	// register: 11
	register unsigned char pregen;
}


// address: 0x8004BA70
// line start: 328
// line end:   343
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x8004BAD8
// line start: 390
// line end:   412
void set_light_bands__Fv() {
	// register: 3
	register int v;
	// register: 5
	register int y;
	// register: 4
	register unsigned char *l;
}


// address: 0x8004BB48
// line start: 416
// line end:   423
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x8004BBB4
// line start: 427
// line end:   438
void SetWeirdFX__Fv() {
}


// address: 0x8004BC28
// line start: 443
// line end:   826
void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum) {
	// register: 9
	register int xoff;
	// register: 10
	register int yoff;
	// register: 20
	register int x;
	// register: 30
	register int y;
	// register: 3
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
	// register: 5
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
	// register: 18
	register int weirdy;
	// register: 11
	register int cont;
}


// address: 0x8004C8FC
// line start: 833
// line end:   885
void DoUnLight__Fv() {
	// register: 9
	register int x;
	// register: 3
	register int y;
	// register: 16
	register int max_x;
	// register: 15
	register int max_y;
	// register: 13
	register int nXPos;
	// register: 14
	register int nYPos;
	// register: 7
	register unsigned char *r;
	// register: 6
	register unsigned char *g;
	// register: 5
	register unsigned char *b;
	// register: 24
	register int radius_block_x;
	// register: 25
	register int radius_block_y;
}


// address: 0x8004CB40
// line start: 892
// line end:   932
void DoUnVision__Fiiii(int nXPos, int nYPos, int nRadius, int num) {
	// register: 9
	register int i;
	// register: 3
	register int j;
	// register: 3
	register int x1;
	// register: 12
	register int y1;
	// register: 4
	register int x2;
	// register: 5
	register int y2;
	// register: 7
	register int vis_flag;
}


// address: 0x8004CC48
// line start: 939
// line end:   1046
void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible) {
	// register: 18
	register int nCrawlX;
	// register: 19
	register int nCrawlY;
	// address: 0xFFFFFFA0
	auto int nLineLen;
	// register: 6
	register int nBlockerFlag;
	// address: 0xFFFFFFA8
	auto int j;
	// register: 30
	register int k;
	// register: 3
	register int v;
	// register: 21
	register int x1adj;
	// register: 23
	register int x2adj;
	// register: 20
	register int y1adj;
	// register: 22
	register int y2adj;
	// address: 0xFFFFFFB0
	auto int vis_flag;
}


// address: 0x8004D070
// line start: 1051
// line end:   1052
void FreeLightTable__Fv() {
}


// address: 0x8004D078
// line start: 1058
// line end:   1059
void InitLightTable__Fv() {
}


// address: 0x8004D080
// line start: 1064
// line end:   1065
void MakeLightTable__Fv() {
}


// address: 0x8004D088
// line start: 1156
// line end:   1159
void InitLightMax__Fv() {
}


// address: 0x8004D0AC
// line start: 1166
// line end:   1178
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x8004D0F0
// line start: 1184
// line end:   1202
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D148
// line start: 1207
// line end:   1213
void AddUnLight__Fi(int i) {
}


// address: 0x8004D16C
// line start: 1218
// line end:   1229
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x8004D18C
// line start: 1234
// line end:   1246
void ChangeLightXY__Fiii(int i, int x, int y) {
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D1B8
// line start: 1249
// line end:   1255
void light_fix__Fi(int i) {
}


// address: 0x8004D1C0
// line start: 1265
// line end:   1278
void ChangeLightOff__Fiii(int i, int x, int y) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D1E8
// line start: 1283
// line end:   1296
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D214
// line start: 1299
// line end:   1301
void ChangeLightColour__Fii(int i, int c) {
	// register: 4
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D23C
// line start: 1316
// line end:   1380
void ProcessLightList__Fv() {
	// register: 7
	register int i;
	// register: 16
	register int j;
	// register: 4
	register unsigned char temp;
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004D354
// line start: 1390
// line end:   1417
void SavePreLighting__Fv() {
}


// address: 0x8004D35C
// line start: 1422
// line end:   1429
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x8004D3B0
// line start: 1436
// line end:   1452
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
	{
		{
			// register: 2
			// size: 0xE
			register struct LightListStruct *vl;
		}
	}
}


// address: 0x8004D424
// line start: 1475
// line end:   1488
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x8004D4D8
// line start: 1493
// line end:   1510
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 9
	register int i;
	// register: 8
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x8004D55C
// line start: 1539
// line end:   1587
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
	// register: 18
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x8004D764
// line start: 112
// line end:   115
void FreeQuestText__Fv() {
}


// address: 0x8004D76C
// line start: 119
// line end:   123
void InitQuestText__Fv() {
}


// address: 0x8004D778
// line start: 133
// line end:   221
void CalcTextSpeed__FPCc(char *Name) {
	// register: 17
	register char *ptr;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto char SpeechName[16];
	// register: 16
	register unsigned long SfxFrames;
	// register: 3
	register unsigned long TextHeight;
	{
		{
			// register: 3
			// size: 0x4
			register enum LANG_TYPE Lang;
			// address: 0xFFFFFFE0
			// size: 0x2
			auto char Prefix[2];
			// address: 0xFFFFFFE8
			// size: 0x8
			auto struct RECT Window;
		}
	}
}


// address: 0x8004D934
// line start: 240
// line end:   283
void FadeMusicTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register long MusicVolume;
}


// address: 0x8004DA80
// line start: 296
// line end:   392
void InitQTextMsg__Fi(int m) {
	{
		// register: 16
		register int i;
		{
			{
				// register: 3
				// size: 0x10
				register struct DEF_ARGS *args;
			}
		}
	}
}


// address: 0x8004DCD4
// line start: 397
// line end:   425
void DrawQTextBack__Fv() {
	{
		{
			{
				{
					// address: 0xFFFFFF98
					// size: 0x50
					auto char BookName[80];
					// address: 0xFFFFFFE8
					// size: 0x8
					auto struct RECT ClipRect;
					// register: 17
					register int oldot;
				}
			}
		}
	}
}


// address: 0x8004DE70
// line start: 439
// line end:   545
void DrawQTextTSK__FP4TASK(struct TASK *T) {
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
	// register: 18
	register char stextflagsave;
}


// address: 0x8004E158
// line start: 564
// line end:   575
int KANJI_strlen__FPc(char *str) {
	// register: 5
	register int l;
}


// address: 0x8004E198
// line start: 587
// line end:   813
void DrawQText__Fv() {
	// register: 17
	register char *p;
	// register: 30
	register char *pnl;
	// register: 21
	register char *SpacePtr;
	// register: 22
	register int ty;
	// register: 18
	register int l;
	// register: 23
	register unsigned char doneflag;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
	// register: 19
	register int LetterCount;
	// register: 20
	register int KanjiCount;
	// register: 16
	register char *t;
	// register: 16
	register int textot;
	// register: 16
	register int OldDOt;
	// address: 0xFFFFFFC8
	auto int OldOt;
	// register: 3
	register int TextYSize;
	{
		{
			{
				{
					{
						// register: 3
						register int diff;
						{
							{
								// register: 3
								register int diff;
								{
									{
										{
											// register: 3
											register int diff;
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


// address: 0x8004E744
// line start: 817
// line end:   817
void _GLOBAL__D_QBack() {
}


// address: 0x8004E76C
// line start: 817
// line end:   817
void _GLOBAL__I_QBack() {
}


// address: 0x8004E794
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc_addr_8004E794(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8004E7B4
// line start: 91
// line end:   91
void SetBorder__6Dialogi_addr_8004E7B4(struct Dialog *this, int Type) {
}


// address: 0x8004E7BC
// line start: 79
// line end:   79
void ___6Dialog_addr_8004E7BC(struct Dialog *this, int __in_chrg) {
}


// address: 0x8004E7E4
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_8004E7E4(struct Dialog *this) {
}


// address: 0x8004E864
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_8004E864() {
}


// address: 0x8004E86C
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad_addr_8004E86C(struct CPad *this) {
}


// address: 0x8004E894
// line start: 33
// line end:   35
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8004E89C
// line start: 812
// line end:   814
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8004E8A4
// line start: 264
// line end:   275
void delta_init__Fv() {
}


// address: 0x8004E8FC
// line start: 282
// line end:   303
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x8
	register struct DMonsterStr *p;
	// register: 2
	// size: 0x1258
	register struct DLevel *Dl;
}


// address: 0x8004E994
// line start: 310
// line end:   326
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x8
	register struct DMonsterStr *p;
	// register: 4
	// size: 0x1258
	register struct DLevel *Dl;
}


// address: 0x8004EA10
// line start: 367
// line end:   408
void delta_leave_sync__FUc(unsigned char bLevel) {
	// register: 20
	// size: 0x1258
	register struct DLevel *Dl;
	{
		// register: 19
		register int i;
		{
			// register: 4
			register int ii;
			// register: 16
			// size: 0x8
			register struct DMonsterStr *pD;
		}
	}
}


// address: 0x8004ED38
// line start: 414
// line end:   430
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0x1258
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x8004ED98
// line start: 437
// line end:   559
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 4
	// size: 0x1258
	register struct DLevel *Dl;
	// register: 24
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x8004EF64
// line start: 566
// line end:   628
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 9
	// size: 0x1258
	register struct DLevel *Dl;
	// register: 7
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 8
	register int i;
}


// address: 0x8004F0F0
// line start: 634
// line end:   637
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x8004F114
// line start: 643
// line end:   646
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x8004F138
// line start: 653
// line end:   724
void DeltaAddItem__Fi(int ii) {
	// register: 7
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 10
	// size: 0x18
	register struct TCmdPItem *OpD;
	// register: 4
	// size: 0x1258
	register struct DLevel *Dl;
	// register: 8
	register int i;
}


// address: 0x8004F360
// line start: 729
// line end:   745
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x8004F38C
// line start: 752
// line end:   773
int DeltaImportData__FPc(char *Src) {
	// register: 16
	register int osize;
}


// address: 0x8004F3D4
// line start: 778
// line end:   793
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8004F4D0
// line start: 868
// line end:   872
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x8004F4F8
// line start: 878
// line end:   892
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x8004F544
// line start: 898
// line end:   908
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x8004F574
// line start: 914
// line end:   923
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x8004F5AC
// line start: 929
// line end:   939
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x8004F5EC
// line start: 945
// line end:   956
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x8004F634
// line start: 962
// line end:   967
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x8004F660
// line start: 973
// line end:   979
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x8004F690
// line start: 984
// line end:   991
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x8004F6C8
// line start: 996
// line end:   1004
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x8004F73C
// line start: 1009
// line end:   1061
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004F884
// line start: 1067
// line end:   1082
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004F908
// line start: 1098
// line end:   1117
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004F968
// line start: 1124
// line end:   1131
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004F9D8
// line start: 1136
// line end:   1184
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x8004FAF4
// line start: 1190
// line end:   1204
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x8004FB98
// line start: 1210
// line end:   1215
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x8004FBC8
// line start: 1221
// line end:   1267
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x8004FCF0
// line start: 1272
// line end:   1288
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x8004FCF8
// line start: 1294
// line end:   1302
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x8004FD2C
// line start: 1337
// line end:   1340
void delta_close_portal__Fi(int pnum) {
}


// address: 0x8004FD6C
// line start: 1346
// line end:   1355
void check_update_plr__Fi(int pnum) {
}


// address: 0x8004FD74
// line start: 1366
// line end:   1373
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004FDF4
// line start: 1382
// line end:   1396
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004FE24
// line start: 1401
// line end:   1410
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004FE54
// line start: 1414
// line end:   1427
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004FE84
// line start: 1433
// line end:   1446
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004FEB4
// line start: 1452
// line end:   1458
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004FF28
// line start: 1467
// line end:   1473
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004FFB0
// line start: 1480
// line end:   1520
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x800500F0
// line start: 1530
// line end:   1578
void On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x20
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


// address: 0x800502C4
// line start: 1587
// line end:   1593
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8005034C
// line start: 1600
// line end:   1642
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80050480
// line start: 1651
// line end:   1706
void On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x20
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


// address: 0x8005064C
// line start: 1714
// line end:   1728
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050698
// line start: 1738
// line end:   1775
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80050758
// line start: 1784
// line end:   1803
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x8005085C
// line start: 1823
// line end:   1833
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x18
	register struct TCmdPItem *p;
}


// address: 0x80050978
// line start: 1840
// line end:   1848
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050A04
// line start: 1855
// line end:   1871
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050AEC
// line start: 1879
// line end:   1894
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050BC4
// line start: 1901
// line end:   1916
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050CA0
// line start: 1923
// line end:   1934
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x80050D80
// line start: 1941
// line end:   1952
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x80050E60
// line start: 1960
// line end:   1966
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050EAC
// line start: 1973
// line end:   1985
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 19
	// size: 0x4
	register struct TCmdParam1 *p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80050FE8
// line start: 1992
// line end:   2006
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800510B0
// line start: 2013
// line end:   2024
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051170
// line start: 2032
// line end:   2042
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051234
// line start: 2049
// line end:   2060
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800512F8
// line start: 2067
// line end:   2073
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800513B4
// line start: 2080
// line end:   2084
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800513EC
// line start: 2090
// line end:   2094
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051414
// line start: 2101
// line end:   2108
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8005149C
// line start: 2116
// line end:   2120
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800514CC
// line start: 2127
// line end:   2142
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800515E0
// line start: 2150
// line end:   2156
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80051694
// line start: 2163
// line end:   2169
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80051700
// line start: 2176
// line end:   2196
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


// address: 0x80051818
// line start: 2205
// line end:   2221
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80051908
// line start: 2235
// line end:   2242
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80051950
// line start: 2249
// line end:   2302
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80051A64
// line start: 2312
// line end:   2318
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051AE0
// line start: 2325
// line end:   2331
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051B5C
// line start: 2338
// line end:   2344
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051BD8
// line start: 2351
// line end:   2357
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051C54
// line start: 2363
// line end:   2368
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051CCC
// line start: 2374
// line end:   2381
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051CD4
// line start: 2387
// line end:   2390
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051CDC
// line start: 2395
// line end:   2401
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051CE4
// line start: 2406
// line end:   2411
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051D3C
// line start: 2417
// line end:   2470
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80051F44
// line start: 2476
// line end:   2480
void On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051F88
// line start: 2515
// line end:   2524
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051FE8
// line start: 2531
// line end:   2538
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80052020
// line start: 2544
// line end:   2552
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80052060
// line start: 2557
// line end:   2565
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800520A0
// line start: 2571
// line end:   2579
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800520E0
// line start: 2585
// line end:   2594
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80052120
// line start: 2599
// line end:   2606
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80052168
// line start: 2613
// line end:   2625
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


// address: 0x80052238
// line start: 2665
// line end:   2767
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8011CA80
	static unsigned char sbLastCmd;
}


// address: 0x80052658
// size: 0x1258
// line start: 2779
// line end:   2791
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x800526A0
// line start: 2796
// line end:   2804
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x800526CC
// line start: 2810
// line end:   2812
void MSG_ClearOutCompMap__Fv() {
}


// address: 0x800526F4
// line start: 2817
// line end:   2817
void _GLOBAL__D_deltaload() {
}


// address: 0x8005271C
// line start: 2817
// line end:   2817
void _GLOBAL__I_deltaload() {
}


// address: 0x8005277C
// size: 0x4
// line start: 156
// line end:   178
struct CrunchComp *__10CrunchComp(struct CrunchComp *this);

// address: 0x800527B4
// size: 0x4
// line start: 137
// line end:   178
struct PakComp *__7PakComp(struct PakComp *this);

// address: 0x800527EC
// size: 0x4
// line start: 118
// line end:   178
struct NoComp *__6NoComp(struct NoComp *this);

// address: 0x80052824
// line start: 60
// line end:   65
int GetSize__14CompressedLevs(struct CompressedLevs *this) {
}


// address: 0x80052860
// size: 0x4
// line start: 51
// line end:   178
struct CompClass *__9CompClass(struct CompClass *this);

// address: 0x80052874
// line start: 153
// line end:   154
void DoDecomp__C10CrunchCompPUcPCUcii(struct CrunchComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}


// address: 0x8005289C
// line start: 146
// line end:   149
int DoComp__C10CrunchCompPUcPCUci(struct CrunchComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}


// address: 0x800528C4
// line start: 134
// line end:   135
void DoDecomp__C7PakCompPUcPCUcii(struct PakComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}


// address: 0x800528E8
// line start: 127
// line end:   130
int DoComp__C7PakCompPUcPCUci(struct PakComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}


// address: 0x80052910
// line start: 115
// line end:   116
void DoDecomp__C6NoCompPUcPCUcii(struct NoComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}


// address: 0x8005293C
// line start: 109
// line end:   111
int DoComp__C6NoCompPUcPCUci(struct NoComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}


// address: 0x80052974
// line start: 168
// line end:   172
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x800529A0
// line start: 559
// line end:   564
int InitLevelType__Fi(int l) {
}


// address: 0x800529EC
// line start: 570
// line end:   608
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x80052B4C
// line start: 687
// line end:   693
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80052BC0
// line start: 708
// line end:   863
unsigned char NetInit__FUcPUc(unsigned char bSinglePlayer, unsigned char *pfExitProgram) {
	// address: 0xFFFFFF50
	// size: 0x80
	auto char szPlayerDescript[128];
	// register: 2
	register long time;
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


// address: 0x80052E50
// line start: 263
// line end:   277
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80052F38
// line start: 284
// line end:   302
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80053084
// line start: 309
// line end:   319
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8005310C
// line start: 358
// line end:   374
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x800531D0
// line start: 381
// line end:   391
void PostAddWeaponRack__Fi(int i) {
}


// address: 0x80053258
// line start: 400
// line end:   427
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x800532F4
// line start: 434
// line end:   475
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


// address: 0x80053510
// line start: 480
// line end:   484
void FreeObjectGFX__Fv() {
}


// address: 0x8005351C
// line start: 488
// line end:   499
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 3
	register int oy;
}


// address: 0x800535C0
// line start: 507
// line end:   541
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x80053844
// line start: 548
// line end:   554
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x800538A4
// line start: 561
// line end:   563
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x800538CC
// line start: 587
// line end:   629
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x800539DC
// line start: 635
// line end:   748
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x80053E44
// line start: 754
// line end:   791
void Obj_Light__Fii(int i, int lr) {
	// register: 22
	register int ox;
	// register: 23
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


// address: 0x80054064
// line start: 797
// line end:   849
void Obj_Circle__Fi(int i) {
	// register: 2
	register int px;
	// register: 3
	register int py;
	// register: 20
	register int ox;
	// register: 19
	register int oy;
	// register: 22
	register int v1;
	// register: 23
	register int v2;
	// address: 0xFFFFFFD0
	auto bool done;
	{
		// register: 17
		register int pnum;
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


// address: 0x800543A8
// line start: 855
// line end:   860
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8005440C
// line start: 891
// line end:   955
void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 30
	register int PhysFrame;
	// register: 20
	// size: 0x70
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


// address: 0x80054704
// line start: 960
// line end:   968
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x80054774
// line start: 977
// line end:   1002
void Obj_Door__Fi(int i) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x800548E4
// line start: 1010
// line end:   1012
void Obj_Sarc__Fi(int i) {
}


// address: 0x80054930
// line start: 1019
// line end:   1030
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x80054A40
// line start: 1037
// line end:   1078
void Obj_FlameTrap__Fi(int i) {
	// register: 16
	register int xp;
	// register: 18
	register int yp;
	// register: 19
	register int j;
}


// address: 0x80054D24
// line start: 1087
// line end:   1138
void Obj_Trap__Fi(int i) {
	// register: 19
	register int oti;
	// register: 5
	register unsigned char otrig;
	// address: 0xFFFFFFC0
	auto int sx;
	// address: 0xFFFFFFC8
	auto int sy;
	// register: 20
	register int dx;
	// register: 21
	register int dy;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 22
	register int ax;
}


// address: 0x80055068
// line start: 1147
// line end:   1178
void Obj_BCrossDamage__Fi(int i) {
	// register: 3
	register int resist;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto int damage[4];
	{
		// register: 21
		register int pnum;
	}
}


// address: 0x800552B0
// line start: 1185
// line end:   1269
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x80055528
// line start: 1279
// line end:   1302
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x80055698
// line start: 1319
// line end:   1358
void ObjSetMini__Fiii(int x, int y, int v) {
	// register: 16
	register long v2;
	// register: 17
	register long v3;
	// register: 19
	register long v4;
	// register: 22
	register int xx;
	// register: 21
	register int yy;
}


// address: 0x80055780
// line start: 1365
// line end:   1389
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x80055788
// line start: 1395
// line end:   1424
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x80055790
// line start: 1430
// line end:   1451
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x800559F4
// line start: 1458
// line end:   1465
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x80055A98
// line start: 1472
// line end:   1521
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 19
	register int dx;
	// register: 20
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x80055DF8
// line start: 1527
// line end:   1576
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 20
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x80056190
// line start: 1582
// line end:   1623
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x800564FC
// line start: 1629
// line end:   1670
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x80056868
// line start: 1676
// line end:   1715
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x80056B44
// line start: 1719
// line end:   1776
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 16
	register unsigned char dok;
}


// address: 0x80056E20
// line start: 1782
// line end:   1826
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
	// register: 23
	register int my;
}


// address: 0x800572F4
// line start: 1832
// line end:   1845
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x800573FC
// line start: 1852
// line end:   1863
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x800574F8
// line start: 1870
// line end:   1886
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x800576B0
// line start: 1895
// line end:   1905
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 8
	register int i;
	// register: 5
	register int j;
}


// address: 0x8005774C
// line start: 1913
// line end:   1931
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x800578C4
// line start: 1937
// line end:   1944
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80057A20
// line start: 1951
// line end:   1976
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


// address: 0x80057C04
// line start: 1982
// line end:   2059
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
			{
				{
					// register: 5
					register unsigned char dowarp;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x800582BC
// line start: 2065
// line end:   2136
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x8005872C
// line start: 2142
// line end:   2175
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x80058968
// line start: 2181
// line end:   2228
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x80058D28
// line start: 2234
// line end:   2273
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80058F1C
// line start: 2279
// line end:   2304
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x800590D0
// line start: 2310
// line end:   2336
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80059320
// line start: 2342
// line end:   2365
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800594F0
// line start: 2373
// line end:   2396
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800596A8
// line start: 2402
// line end:   2409
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80059804
// line start: 2416
// line end:   2423
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80059960
// line start: 2429
// line end:   2463
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


// address: 0x80059A68
// line start: 2471
// line end:   2561
void OperatePedistal__Fii(int pnum, int i) {
	// address: 0xFFFFFFE0
	auto int jstn;
	// register: 19
	register bool JustOperated;
	{
		{
			{
				{
					{
						{
							// register: 16
							register unsigned char *setp;
							{
								{
									{
										{
											// register: 17
											register unsigned char *setp;
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


// address: 0x80059F80
// line start: 2567
// line end:   2593
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


// address: 0x8005A134
// line start: 2599
// line end:   2602
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x8005A1A4
// line start: 2609
// line end:   3210
void OperateShrine__Fiii(int pnum, int i, int sType) {
	// register: 18
	register int r;
	// register: 4
	register int xx;
	// register: 5
	register int yy;
	// register: 6
	register int sc;
	// register: 17
	register int v1;
	// register: 21
	register int v2;
	// register: 22
	register int v3;
	// register: 20
	register int v4;
	// register: 16
	register unsigned long lv;
	// register: 6
	register unsigned long t;
	// register: 21
	register unsigned char done;
	{
		{
			{
				{
					// register: 3
					register int mypnum;
				}
			}
		}
	}
}


// address: 0x8005C598
// line start: 3216
// line end:   3234
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005C714
// line start: 3240
// line end:   3275
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005C92C
// line start: 3281
// line end:   3296
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005CA14
// line start: 3302
// line end:   3337
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x8005CB84
// line start: 3349
// line end:   3371
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x8005CC74
// line start: 3378
// line end:   3391
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x8005CD1C
// line start: 3398
// line end:   3412
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x8005CDC0
// line start: 3419
// line end:   3518
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


// address: 0x8005D36C
// line start: 3525
// line end:   3575
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x8005D518
// line start: 3581
// line end:   3596
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x8005D60C
// line start: 3604
// line end:   3629
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x8005D744
// line start: 3635
// line end:   3754
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x8005DB7C
// line start: 3762
// line end:   3772
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x8005DC90
// line start: 3778
// line end:   3788
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x8005DDA4
// line start: 3794
// line end:   3804
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x8005DEB8
// line start: 3810
// line end:   3902
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x8005E0C8
// line start: 3910
// line end:   3941
void BreakCrux__Fii(int pnum, int i) {
	// register: 5
	register int j;
	// register: 3
	register int ot;
	// register: 2
	register int oi;
	// register: 6
	register unsigned char mapflag;
}


// address: 0x8005E2FC
// line start: 3947
// line end:   4015
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 5
	register int oi;
}


// address: 0x8005E854
// line start: 4021
// line end:   4042
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x8005E9B8
// line start: 4050
// line end:   4061
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x8005EA34
// line start: 4069
// line end:   4093
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x8005EB4C
// line start: 4099
// line end:   4115
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


// address: 0x8005EC84
// line start: 4122
// line end:   4127
void SyncLever__Fi(int i) {
}


// address: 0x8005ED08
// line start: 4134
// line end:   4146
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x8005EE00
// line start: 4155
// line end:   4173
void SyncPedistal__Fi(int i) {
}


// address: 0x8005EE08
// line start: 4179
// line end:   4203
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005EF70
// line start: 4211
// line end:   4234
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005F09C
// line start: 4242
// line end:   4281
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x8005F1DC
// line start: 4289
// line end:   4438
void GetObjectStr__Fi(int i) {
}


// address: 0x8005F698
// line start: 4443
// line end:   4446
void AddLamp__Fiii(int x, int y, int r) {
}


// address: 0x8005F6D8
// line start: 4449
// line end:   4617
void RestoreObjectLight__Fv() {
	// register: 17
	register int i;
	// register: 2
	register int oi;
	// register: 4
	register int ox;
	// register: 5
	register int oy;
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8005F8A4
// line start: 177
// line end:   188
int GetOtPos__7CBlocksi_addr_8005F8A4(struct CBlocks *this, int LogicalY) {
	// register: 3
	register int OtPos;
}


// address: 0x8005F8E0
// line start: 253
// line end:   253
int GetNumOfFrames__7TextDatii_addr_8005F8E0(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8005F918
// size: 0x14
// line start: 284
// line end:   286
struct CCreatureHdr *GetCreature__7TextDati_addr_8005F918(struct TextDat *this, int Creature) {
}


// address: 0x8005F934
// line start: 380
// line end:   385
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x8005F960
// line start: 391
// line end:   404
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x8005FA14
// line start: 449
// line end:   489
void SetupLocalPlayer__Fv() {
}


// address: 0x8005FA24
// line start: 262
// line end:   265
unsigned char IsDplayer__Fii(int x, int y) {
}


// address: 0x8005FAB0
// line start: 282
// line end:   283
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FAF4
// line start: 287
// line end:   288
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FB08
// line start: 424
// line end:   430
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FB28
// line start: 540
// line end:   559
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FB30
// line start: 566
// line end:   577
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005FB4C
// line start: 586
// line end:   597
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FB68
// line start: 604
// line end:   685
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005FDA4
// line start: 732
// line end:   851
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x800601AC
// line start: 858
// line end:   864
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80060214
// line start: 870
// line end:   910
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80060390
// line start: 917
// line end:   981
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp) {
	// register: 19
	register int omp;
	// register: 2
	register unsigned long v;
	// register: 5
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


// address: 0x800605B4
// line start: 987
// line end:   994
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


// address: 0x80060638
// line start: 1003
// line end:   1190
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80060960
// line start: 1200
// line end:   1206
void InitMultiView__Fv() {
}


// address: 0x80060968
// line start: 1339
// line end:   1345
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80060988
// line start: 1402
// line end:   1411
void PlrClrTrans__Fii(int x, int y) {
	// register: 6
	register int i;
	// register: 7
	register int j;
}


// address: 0x80060A00
// line start: 1418
// line end:   1435
void PlrDoTrans__Fii(int x, int y) {
	// register: 16
	register int i;
	// register: 18
	register int j;
}


// address: 0x80060B18
// line start: 1441
// line end:   1445
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060B2C
// line start: 1480
// line end:   1501
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80060BB8
// line start: 1506
// line end:   1525
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060C1C
// line start: 1533
// line end:   1595
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060C54
// line start: 1603
// line end:   1625
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060C80
// line start: 1722
// line end:   1758
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x80060DC4
// line start: 1786
// line end:   1801
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80060E5C
// line start: 1807
// line end:   1849
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x80061010
// line start: 1882
// line end:   1902
void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061018
// line start: 1908
// line end:   1946
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x80061164
// line start: 1953
// line end:   1981
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x800612F8
// line start: 1987
// line end:   2024
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


// address: 0x800614C8
// line start: 2032
// line end:   2034
void StartPlayerDropItems__FP12PlayerStructi(struct PlayerStruct *ptrplr, int EarFlag) {
}


// address: 0x80061528
// line start: 2038
// line end:   2082
void TryDropPlayerItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register unsigned char diablolevel;
	{
		{
			// register: 20
			// size: 0x19E8
			register struct PlayerStruct *p;
			// register: 17
			// size: 0x6C
			register struct ItemStruct *pi;
			// register: 16
			register int i;
			{
				{
					// register: 2
					register int pdd;
				}
			}
		}
	}
}


// address: 0x80061664
// line start: 2086
// line end:   2205
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct ItemStruct ear;
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x80061860
// line start: 2213
// line end:   2247
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 21
	register long hGold;
	// register: 20
	register int i;
	{
		{
			{
				{
					{
						{
							// register: 16
							register int newgold;
						}
					}
				}
			}
		}
	}
}


// address: 0x80061970
// line start: 2254
// line end:   2280
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x80061ABC
// line start: 2286
// line end:   2288
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x80061ADC
// line start: 2294
// line end:   2319
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


// address: 0x80061DD8
// line start: 2325
// line end:   2349
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061E88
// line start: 2355
// line end:   2361
void CheckPlrDead__Fi(int pnum) {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80061EDC
// line start: 2368
// line end:   2437
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
	// register: 20
	register bool oldpause;
}


// address: 0x80062090
// line start: 2442
// line end:   2465
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062138
// line start: 2474
// line end:   2507
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
	// register: 19
	register bool oldpause;
}


// address: 0x80062250
// line start: 2513
// line end:   2514
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062258
// line start: 2542
// line end:   2562
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x80062308
// line start: 2566
// line end:   2683
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int owx;
	// register: 18
	register int owy;
}


// address: 0x80062518
// line start: 2690
// line end:   2739
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x800626DC
// line start: 2746
// line end:   2863
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


// address: 0x80062D40
// line start: 2870
// line end:   2936
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


// address: 0x800630F8
// line start: 2943
// line end:   2950
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x80063178
// line start: 2958
// line end:   3030
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int dx;
	// register: 18
	register int dy;
	// register: 5
	register int m;
	// register: 2
	register char p;
	// register: 19
	register unsigned char didhit;
	// register: 4
	register int frame;
}


// address: 0x8006350C
// line start: 3040
// line end:   3094
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8006360C
// line start: 3102
// line end:   3127
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800636E0
// line start: 3133
// line end:   3145
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063780
// line start: 3149
// line end:   3249
void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr) {
	// register: 16
	// size: 0x90
	register struct CPlayer *test;
	// register: 22
	register int OtPos;
	// register: 21
	register int ScrX;
	// register: 20
	register int ScrY;
	// register: 19
	// size: 0x70
	register struct TextDat *missdat;
	// register: 17
	// size: 0x70
	register struct TextDat *objdat;
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct POLY_FT4 *FT4a;
	// address: 0xFFFFFFD4
	// size: 0x28
	auto struct POLY_FT4 *FT4b;
	// register: 16
	register int frame;
}


// address: 0x80063C60
// line start: 3258
// line end:   3320
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006402C
// line start: 3326
// line end:   3351
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
	// register: 5
	register int a;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
}


// address: 0x80064138
// line start: 3356
// line end:   3373
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int rv;
}


// address: 0x800641CC
// line start: 3380
// line end:   3433
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int pnum;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 5
									register int vid;
									// register: 2
									// size: 0xE
									register struct LightListStruct *vl;
									{
										// register: 4
										register int i;
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


// address: 0x800643B4
// line start: 3440
// line end:   3441
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800643BC
// line start: 3448
// line end:   3761
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8006487C
// line start: 3773
// line end:   3781
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x800648E4
// line start: 3788
// line end:   3829
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


// address: 0x80064DE0
// line start: 3877
// line end:   3894
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80064E7C
// line start: 3903
// line end:   4035
void ProcessPlayers__Fv() {
	// register: 16
	register int raflag;
	// register: 18
	register int pnum;
	// register: 21
	register int tplayer;
	{
		{
			// register: 17
			// size: 0x19E8
			register struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x80065160
// line start: 4041
// line end:   4044
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80065188
// line start: 4052
// line end:   4079
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
	// register: 19
	// size: 0x8
	register struct map_info *dm;
}


// address: 0x80065360
// line start: 4086
// line end:   4138
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x80065368
// line start: 4144
// line end:   4253
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x48
	register struct SpellTarget *spl;
	// register: 16
	register unsigned char addflag;
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
	{
		{
			{
				{
					// register: 2
					register int SplLvl;
				}
			}
		}
	}
}


// address: 0x800657C8
// line start: 4320
// line end:   4344
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x800658B0
// line start: 4348
// line end:   4353
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800658E0
// line start: 4370
// line end:   4409
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065AB4
// line start: 4417
// line end:   4429
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065BD0
// line start: 4437
// line end:   4454
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065CBC
// line start: 4462
// line end:   4472
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065DA0
// line start: 4480
// line end:   4494
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065E7C
// line start: 4502
// line end:   4507
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x80065EC0
// line start: 4514
// line end:   4523
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065F9C
// line start: 4530
// line end:   4539
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x8006600C
// line start: 4546
// line end:   4555
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x800660E8
// line start: 4562
// line end:   4571
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80066154
// line start: 4578
// line end:   4581
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006615C
// line start: 4588
// line end:   4655
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x8006648C
// line start: 4658
// line end:   4658
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800664B4
// line start: 4659
// line end:   4659
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x800664F8
// line start: 4660
// line end:   4660
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8006652C
// line start: 4661
// line end:   4661
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066560
// line start: 4662
// line end:   4662
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066594
// line start: 4663
// line end:   4663
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x800665C8
// line start: 4664
// line end:   4664
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800665FC
// line start: 4665
// line end:   4665
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80066634
// line start: 4666
// line end:   4666
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80066668
// line start: 4667
// line end:   4667
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066690
// line start: 4668
// line end:   4668
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800666B8
// line start: 4669
// line end:   4669
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800666E0
// line start: 4670
// line end:   4670
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80066728
// line start: 4671
// line end:   4671
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066750
// line start: 4672
// line end:   4672
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066778
// line start: 4673
// line end:   4673
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800667AC
// line start: 4674
// line end:   4674
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800667D4
// line start: 4675
// line end:   4675
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80066818
// line start: 4676
// line end:   4676
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x8006684C
// line start: 4677
// line end:   4677
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066880
// line start: 4679
// line end:   4679
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x800668CC
// line start: 4680
// line end:   4680
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80066918
// line start: 4681
// line end:   4681
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80066964
// line start: 4682
// line end:   4682
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x800669B8
// line start: 4683
// line end:   4683
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80066A04
// line start: 4684
// line end:   4684
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80066A50
// line start: 4685
// line end:   4685
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80066AA0
// line start: 4686
// line end:   4686
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80066AEC
// line start: 4687
// line end:   4687
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80066B38
// line start: 4688
// line end:   4688
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80066B84
// line start: 4689
// line end:   4689
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80066BD0
// line start: 4690
// line end:   4690
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80066C1C
// line start: 4691
// line end:   4691
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80066C68
// line start: 4692
// line end:   4692
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80066CB8
// line start: 4693
// line end:   4693
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80066D04
// line start: 4695
// line end:   4695
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80066D54
// line start: 4697
// line end:   4697
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80066DA0
// line start: 4698
// line end:   4698
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80066DEC
// line start: 4699
// line end:   4699
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80066E38
// line start: 4700
// line end:   4700
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80066E84
// line start: 4701
// line end:   4701
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80066ED0
// line start: 4702
// line end:   4702
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80066F1C
// line start: 4703
// line end:   4703
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80066F68
// line start: 4704
// line end:   4704
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80066FB4
// line start: 4705
// line end:   4705
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80067000
// line start: 4706
// line end:   4706
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x8006704C
// line start: 4707
// line end:   4707
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80067098
// line start: 4715
// line end:   4716
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x800670CC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800670CC(struct POLY_FT4 **Prim) {
}


// address: 0x80067148
// line start: 17
// line end:   17
bool Active__11SpellTarget_addr_80067148(struct SpellTarget *this) {
}


// address: 0x80067154
// size: 0x90
// line start: 64
// line end:   66
struct CPlayer *GetPlayer__7CPlayeri_addr_80067154(int PNum) {
}


// address: 0x800671A4
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_800671A4(struct CPlayer *this) {
}


// address: 0x800671B0
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800671BC
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800671C8
// line start: 166
// line end:   173
void CheckRPortalOK__FPiT0(int *rx, int *ry) {
	// register: 6
	register int nx;
	// register: 3
	register int ny;
}


// address: 0x80067208
// line start: 185
// line end:   269
void CheckQuests__Fv() {
	// register: 20
	register int i;
	// address: 0xFFFFFFD8
	auto int rportx;
	// address: 0xFFFFFFDC
	auto int rporty;
	// register: 21
	register int omp;
	{
		{
			{
				// register: 17
				register int pl;
				{
					// register: 4
					// size: 0x19E8
					register struct PlayerStruct *player;
				}
			}
		}
	}
}


// address: 0x800676E0
// line start: 273
// line end:   300
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


// address: 0x80067884
// line start: 305
// line end:   311
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80067918
// line start: 317
// line end:   424
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
											// register: 16
											register int i;
											// register: 17
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


// address: 0x80067EE0
// line start: 458
// line end:   483
void SetReturnLvlPos__Fv() {
}


// address: 0x80067FF0
// line start: 491
// line end:   496
void GetReturnLvlPos__Fv() {
}


// address: 0x80068044
// line start: 536
// line end:   625
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80068530
// line start: 641
// line end:   683
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


// address: 0x80068784
// line start: 696
// line end:   735
void DrawQuestLog__Fv() {
	// register: 16
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
	// register: 18
	register int totlines;
}


// address: 0x8006897C
// line start: 743
// line end:   769
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068A54
// line start: 777
// line end:   803
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80068B88
// line start: 810
// line end:   837
void QuestlogUp__Fv() {
}


// address: 0x80068C20
// line start: 845
// line end:   873
void QuestlogDown__Fv() {
}


// address: 0x80068CD4
// line start: 881
// line end:   903
void RemoveQLog__Fv() {
}


// address: 0x80068D8C
// line start: 909
// line end:   928
void QuestlogEnter__Fv() {
	// register: 16
	register int q;
}


// address: 0x80068E58
// line start: 936
// line end:   938
void QuestlogESC__Fv() {
}


// address: 0x80068E80
// line start: 945
// line end:   965
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80068F00
// line start: 965
// line end:   965
void _GLOBAL__D_questlog() {
}


// address: 0x80068F28
// line start: 965
// line end:   965
void _GLOBAL__I_questlog() {
}


// address: 0x80068F50
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc_addr_80068F50(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80068F70
// line start: 94
// line end:   94
void SetBack__6Dialogi_addr_80068F70(struct Dialog *this, int Type) {
}


// address: 0x80068F78
// line start: 91
// line end:   91
void SetBorder__6Dialogi_addr_80068F78(struct Dialog *this, int Type) {
}


// address: 0x80068F80
// line start: 79
// line end:   79
void ___6Dialog_addr_80068F80(struct Dialog *this, int __in_chrg) {
}


// address: 0x80068FA8
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_80068FA8(struct Dialog *this) {
}


// address: 0x80069028
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_80069028() {
}


// address: 0x80069030
// line start: 85
// line end:   271
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x800691E4
// line start: 282
// line end:   340
void DrawAndBlit__Fv() {
}


// address: 0x800692B8
// line start: 170
// line end:   171
void FreeStoreMem__Fv() {
}


// address: 0x800692C0
// line start: 176
// line end:   180
void DrawSTextBack__Fv() {
}


// address: 0x80069330
// line start: 194
// line end:   242
void DrawStoreArrows__Fv() {
	// register: 16
	// size: 0x70
	register struct TextDat *PanelGfx;
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 17
	register int OtPos;
	// register: 5
	register int Flagy;
}


// address: 0x800694B0
// line start: 247
// line end:   376
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	// register: 16
	register int yy;
	// address: 0xFFFFFFA8
	// size: 0x20
	auto char valstr[32];
	// register: 30
	register int SpinnerY;
	// register: 19
	register unsigned char R;
	// register: 18
	register unsigned char G;
	// register: 17
	register unsigned char B;
	// address: 0x8011BCFC
	static unsigned char DaveFix;
}


// address: 0x80069958
// line start: 384
// line end:   391
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800699EC
// line start: 398
// line end:   411
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80069A84
// line start: 417
// line end:   421
void AddSLine__Fi(int y) {
}


// address: 0x80069AD4
// line start: 427
// line end:   428
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80069AFC
// line start: 433
// line end:   434
void OffsetSTextY__Fii(int y, int yo) {
}


// address: 0x80069B24
// line start: 441
// line end:   452
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80069BE0
// line start: 456
// line end:   597
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x8006A0F0
// line start: 607
// line end:   665
void StoreAutoPlace__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int w;
	// register: 19
	register int h;
	// register: 5
	register int idx;
	// register: 4
	register unsigned char done;
}


// address: 0x8006A730
// line start: 672
// line end:   686
void S_StartSmith__Fv() {
}


// address: 0x8006A8B8
// line start: 692
// line end:   718
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 16
	register char iclr;
}


// address: 0x8006AAC0
// line start: 725
// line end:   760
void S_StartSBuy__Fv() {
}


// address: 0x8006AC90
// line start: 765
// line end:   814
void S_ScrollSPBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 18
	register char iclr;
	// register: 4
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


// address: 0x8006AEF0
// line start: 820
// line end:   856
unsigned char S_StartSPBuy__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006B0B0
// line start: 862
// line end:   873
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x8006B198
// line start: 879
// line end:   950
void S_ScrollSSell__Fi(int idx) {
	// register: 20
	register int l;
	// register: 23
	register int ls;
	// register: 19
	register int v;
	// register: 16
	register char iclr;
	// register: 30
	register int Jumpy;
	{
		{
			{
				{
					// register: 18
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006B3EC
// line start: 956
// line end:   1002
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x8006B824
// line start: 1010
// line end:   1018
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006B8CC
// line start: 1023
// line end:   1044
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006BAB4
// line start: 1049
// line end:   1107
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x8006BF84
// line start: 1115
// line end:   1129
void S_StartWitch__Fv() {
}


// address: 0x8006C10C
// line start: 1134
// line end:   1147
int CheckWitchItem__Fi(int idx) {
}


// address: 0x8006C1B0
// line start: 1172
// line end:   1222
void S_ScrollWBuy__Fi(int idx) {
	// register: 18
	register int l;
	// register: 21
	register int ls;
	// register: 16
	register char iclr;
	// register: 22
	register int Jumpy;
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


// address: 0x8006C3F4
// line start: 1228
// line end:   1279
void S_StartWBuy__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006C748
// line start: 1284
// line end:   1306
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 4
	// size: 0x6C
	register struct ItemStruct *pI;
}


// address: 0x8006C894
// line start: 1312
// line end:   1375
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x8006CF0C
// line start: 1385
// line end:   1391
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x8006CF98
// line start: 1397
// line end:   1406
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006D120
// line start: 1412
// line end:   1453
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006D550
// line start: 1462
// line end:   1468
void S_StartNoMoney__Fv() {
}


// address: 0x8006D5B8
// line start: 1474
// line end:   1479
void S_StartNoRoom__Fv() {
}


// address: 0x8006D618
// line start: 1484
// line end:   1499
void S_StartNoItems__Fv() {
}


// address: 0x8006D6CC
// line start: 1506
// line end:   1583
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 17
	register char *StrPtr;
}


// address: 0x8006DA34
// line start: 1589
// line end:   1607
void S_StartBoy__Fv() {
}


// address: 0x8006DBDC
// line start: 1614
// line end:   1648
void S_StartBBoy__Fv() {
	// register: 16
	register int iclr;
	// register: 17
	register char *StrPtr;
}


// address: 0x8006DE10
// line start: 1657
// line end:   1677
void S_StartHealer__Fv() {
}


// address: 0x8006DFE4
// line start: 1683
// line end:   1710
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
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


// address: 0x8006E1CC
// line start: 1716
// line end:   1733
void S_StartHBuy__Fv() {
}


// address: 0x8006E304
// line start: 1739
// line end:   1748
void S_StartStory__Fv() {
}


// address: 0x8006E3F4
// line start: 1754
// line end:   1758
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x8006E428
// line start: 1766
// line end:   1771
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006E504
// line start: 1777
// line end:   1848
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006EFA4
// line start: 1861
// line end:   1890
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006F17C
// line start: 1896
// line end:   1930
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


// address: 0x8006F3AC
// line start: 1937
// line end:   1947
void S_StartTavern__Fv() {
}


// address: 0x8006F4A4
// line start: 1953
// line end:   1962
void S_StartBarMaid__Fv() {
}


// address: 0x8006F578
// line start: 1968
// line end:   1977
void S_StartDrunk__Fv() {
}


// address: 0x8006F64C
// line start: 1983
// line end:   2071
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x8006F9A8
// line start: 2075
// line end:   2106
void DrawStoreHelpText__Fv() {
}


// address: 0x8006FA44
// line start: 2116
// line end:   2120
void DrawSText__Fv() {
}


// address: 0x8006FA84
// line start: 2127
// line end:   2145
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006FB8C
// line start: 2151
// line end:   2224
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
	// register: 18
	register int YOfs;
}


// address: 0x8006FD94
// line start: 2230
// line end:   2304
void STextESC__Fv() {
}


// address: 0x8006FF38
// line start: 2311
// line end:   2352
void STextUp__Fv() {
}


// address: 0x800700BC
// line start: 2359
// line end:   2398
void STextDown__Fv() {
}


// address: 0x80070250
// line start: 2404
// line end:   2427
void S_SmithEnter__Fv() {
}


// address: 0x80070328
// line start: 2434
// line end:   2445
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800703A8
// line start: 2453
// line end:   2463
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80070428
// line start: 2471
// line end:   2562
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80070874
// line start: 2571
// line end:   2595
void SmithBuyItem__Fv() {
	// register: 9
	register int idx;
}


// address: 0x80070AF4
// line start: 2601
// line end:   2644
void S_SBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80070D58
// line start: 2649
// line end:   2675
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 4
	register int xx;
}


// address: 0x80070F1C
// line start: 2682
// line end:   2722
void S_SPBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
	{
		// register: 4
		register int xx;
	}
}


// address: 0x80071188
// line start: 2729
// line end:   2759
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


// address: 0x80071440
// line start: 2767
// line end:   2791
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


// address: 0x800716E0
// line start: 2796
// line end:   2857
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80071A24
// line start: 2864
// line end:   2882
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80071B34
// line start: 2889
// line end:   2907
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 4
	register int idx;
}


// address: 0x80071DA8
// line start: 2913
// line end:   2933
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80071F0C
// line start: 2940
// line end:   2966
void S_WitchEnter__Fv() {
}


// address: 0x80071FEC
// line start: 2973
// line end:   3036
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x80072270
// line start: 3041
// line end:   3087
void S_WBuyEnter__Fv() {
	// register: 8
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800724F8
// line start: 3095
// line end:   3119
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80072638
// line start: 3126
// line end:   3141
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x800727B4
// line start: 3147
// line end:   3167
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80072918
// line start: 3174
// line end:   3202
void S_BoyEnter__Fv() {
}


// address: 0x80072AB0
// line start: 3209
// line end:   3220
void BoyBuyItem__Fv() {
}


// address: 0x80072B50
// line start: 3226
// line end:   3276
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x80072E7C
// line start: 3281
// line end:   3313
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80073090
// line start: 3319
// line end:   3341
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x800733E0
// line start: 3348
// line end:   3383
void S_ConfirmEnter__Fv() {
}


// address: 0x800734FC
// line start: 3388
// line end:   3406
void S_HealerEnter__Fv() {
}


// address: 0x80073594
// line start: 3413
// line end:   3445
void S_HBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800737C8
// line start: 3453
// line end:   3467
void S_StoryEnter__Fv() {
}


// address: 0x80073864
// line start: 3474
// line end:   3494
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x800739E8
// line start: 3501
// line end:   3543
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


// address: 0x80073BE8
// line start: 3552
// line end:   3564
void S_TavernEnter__Fv() {
}


// address: 0x80073C5C
// line start: 3571
// line end:   3584
void S_BarmaidEnter__Fv() {
}


// address: 0x80073CD0
// line start: 3591
// line end:   3603
void S_DrunkEnter__Fv() {
}


// address: 0x80073D44
// line start: 3610
// line end:   3674
void STextEnter__Fv() {
}


// address: 0x80073F08
// line start: 3682
// line end:   3775
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
}


// address: 0x80073FF4
// line start: 3780
// line end:   3782
void ReleaseStoreBtn__Fv() {
}


// address: 0x80074008
// line start: 3857
// line end:   3857
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x80074030
// line start: 3857
// line end:   3857
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x80074058
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad_addr_80074058(struct CPad *this) {
}


// address: 0x80074080
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc_addr_80074080(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800740A0
// line start: 91
// line end:   91
void SetBorder__6Dialogi_addr_800740A0(struct Dialog *this, int Type) {
}


// address: 0x800740A8
// line start: 79
// line end:   79
void ___6Dialog_addr_800740A8(struct Dialog *this, int __in_chrg) {
}


// address: 0x800740D0
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_800740D0(struct Dialog *this) {
}


// address: 0x80074150
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_80074150() {
}


// address: 0x80074158
// line start: 129
// line end:   207
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x80074308
// line start: 216
// line end:   275
void T_FillSector__FPUcT0iiiib(unsigned char *P3Tiles, unsigned char *pSector, int xi, int yi, int w, int h, bool AddSec) {
	// register: 17
	register int i;
	// register: 22
	register int j;
	// register: 20
	register int xx;
	// address: 0xFFFFFFB8
	auto int yy;
	// register: 6
	register long v1;
	// register: 18
	register long v2;
	// register: 19
	register long v3;
	// register: 21
	register long v4;
	// address: 0xFFFFFFC0
	auto long ii;
	{
		{
			// register: 9
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


// address: 0x8007454C
// line start: 282
// line end:   333
void T_FillTile__FPUciii(unsigned char *P3Tiles, int xx, int yy, int t) {
	// register: 6
	register long v1;
	// register: 6
	register long v2;
	// register: 6
	register long v3;
	// register: 6
	register long v4;
}


// address: 0x8007465C
// line start: 343
// line end:   346
void TownFixupBodges__Fv() {
}


// address: 0x8007469C
// line start: 351
// line end:   437
void T_Pass3__Fv() {
	// register: 19
	register unsigned char *pSector;
	// register: 17
	register int xx;
	// register: 18
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
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80074A28
// line start: 453
// line end:   506
void CreateTown__Fi(int entry) {
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


// address: 0x80074B7C
// line start: 568
// line end:   600
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


// address: 0x80074C60
// line start: 612
// line end:   639
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


// address: 0x80074CF8
// line start: 117
// line end:   122
void InitVPTriggers__Fv() {
}


// address: 0x80074D40
// line start: 130
// line end:   138
bool FindLevTrig__Fiii(int x, int y, int l) {
}


// address: 0x80074DD8
// line start: 142
// line end:   164
void ScanMap__FPsi(short *list, int l) {
	// register: 19
	register int NoTrigs;
	{
		{
			// register: 18
			register int y;
			{
				{
					// register: 16
					register int x;
				}
			}
		}
	}
}


// address: 0x80074EE0
// line start: 176
// line end:   191
int FindBlock__Fii(int x, int y) {
	// register: 6
	// size: 0x4
	register struct BLOCK *ptr;
}


// address: 0x80074F7C
// line start: 196
// line end:   226
void ChangeBlock__Fiii(int x, int y, int bl) {
	// register: 17
	// size: 0x4
	register struct BLOCK *ptr;
	// register: 18
	register short *list;
	{
		// register: 4
		register int b;
	}
}


// address: 0x800750C0
// line start: 230
// line end:   252
void ScanBlocks__FPs(short *list) {
	// register: 19
	// size: 0x4
	register struct BLOCK *ptr;
	{
		// register: 20
		register int bl;
		{
			// register: 18
			register int y;
			{
				{
					// register: 17
					register int x;
				}
			}
		}
	}
}


// address: 0x800751C8
// line start: 258
// line end:   293
void BuildLevTrigs__Fv() {
}


// address: 0x8007535C
// line start: 323
// line end:   365
void DrawFRIG__Fv() {
}


// address: 0x8007537C
// line start: 371
// line end:   451
unsigned char ForceTownTrig__Fv() {
}


// address: 0x80075568
// line start: 456
// line end:   492
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x80075728
// line start: 499
// line end:   557
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x80075A28
// line start: 564
// line end:   619
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80075D34
// line start: 626
// line end:   693
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80076070
// line start: 699
// line end:   709
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


// address: 0x80076120
// line start: 716
// line end:   724
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x800761AC
// line start: 733
// line end:   741
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x80076238
// line start: 750
// line end:   758
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x800762C4
// line start: 769
// line end:   823
void CheckTrigForce__Fv() {
	// register: 19
	register int ocursmx;
	// register: 18
	register int ocursmy;
	{
		{
			{
				// register: 17
				register int i;
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


// address: 0x800765D0
// line start: 833
// line end:   855
void FadeGameOut__Fv() {
}


// address: 0x80076674
// line start: 863
// line end:   882
bool IsTrigger__Fii(int x, int y) {
	// register: 6
	register int i;
}


// address: 0x8007676C
// line start: 888
// line end:   891
bool CheckTrigLevel__Fi(int level) {
}


// address: 0x800767A8
// line start: 895
// line end:   1051
void CheckTriggers__Fi(int pnum) {
	// register: 5
	register int x;
	// register: 6
	register int y;
	{
		// register: 30
		register int i;
		{
			{
				{
					{
						{
							// register: 16
							register unsigned char abortflag;
							// register: 18
							register int dx;
							// register: 17
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


// address: 0x80076D34
// line start: 54
// line end:   102
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


// address: 0x80076FE8
// line start: 110
// line end:   164
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80077178
// line start: 170
// line end:   196
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80077218
// line start: 203
// line end:   245
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80077530
// line start: 250
// line end:   312
void DoResurrect__Fii(int pnum, int rid) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80077798
// line start: 320
// line end:   343
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x800779FC
// line start: 108
// line end:   109
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80077A04
// line start: 132
// line end:   136
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
	{
		// register: 16
		register int v;
	}
}


// address: 0x80077A40
// line start: 145
// line end:   163
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80077A88
// line start: 172
// line end:   201
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
	// register: 18
	register int padj;
}


// address: 0x80077B28
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80077B38
// line start: 227
// line end:   232
void music_stop__Fv() {
}


// address: 0x80077B78
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x80077BB8
// line start: 261
// line end:   276
void music_start__Fi(int nTrack) {
	{
		{
			// register: 3
			register int MusicVolume;
		}
	}
}


// address: 0x80077C58
// line start: 315
// line end:   316
unsigned char snd_playing__Fi(int SFXNo) {
}


// address: 0x80077C78
// line start: 113
// line end:   122
void ClrCursor__Fi(int num) {
}


// address: 0x80077CD4
// line start: 127
// line end:   128
void HappyMan__Fi(int n) {
}


// address: 0x80077CE4
// line start: 136
// line end:   205
void flyabout__7GamePad(struct GamePad *this) {
	// register: 16
	register int cp;
	// register: 20
	register int owx;
	// register: 21
	register int owy;
	// register: 17
	register int wx;
	// register: 18
	register int wy;
	// register: 23
	// size: 0x108
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x800780E0
// line start: 216
// line end:   220
void CloseInvChr__Fv() {
}


// address: 0x80078128
// line start: 268
// line end:   280
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x800781A8
// line start: 351
// line end:   391
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x80078264
// size: 0xD4
// line start: 404
// line end:   426
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80078318
// line start: 440
// line end:   441
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80078320
// line start: 450
// line end:   453
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80078364
// line start: 462
// line end:   465
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800783A8
// line start: 504
// line end:   564
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80078610
// line start: 574
// line end:   630
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x800787C8
// line start: 638
// line end:   657
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80078824
// line start: 665
// line end:   668
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80078860
// line start: 678
// line end:   708
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x8007894C
// line start: 716
// line end:   868
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80078D64
// line start: 884
// line end:   935
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
}


// address: 0x80078E70
// line start: 942
// line end:   985
bool CheckCentre__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x80078F68
// line start: 996
// line end:   998
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x80078F98
// line start: 1043
// line end:   1084
int CheckDirs__7GamePadiii(struct GamePad *this, int dir, int wx, int wy) {
}


// address: 0x800790A0
// line start: 1095
// line end:   1103
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x800790E0
// line start: 1108
// line end:   1120
bool newDirOk__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int x;
	// register: 6
	register int y;
	{
		{
			// register: 6
			register int wx;
			// register: 7
			register int wy;
		}
	}
}


// address: 0x80079190
// line start: 1124
// line end:   1207
int CheckDiagBodge__7GamePadi(struct GamePad *this, int dir) {
	// address: 0xFFFFFF90
	auto int x;
	// address: 0xFFFFFF98
	auto int y;
	// register: 30
	register int lnd;
	// register: 23
	register int rnd;
	// address: 0xFFFFFFA0
	auto int wx;
	// address: 0xFFFFFFA8
	auto int wy;
	// register: 19
	register char *poffset_x;
	// register: 20
	register char *poffset_y;
	// register: 22
	register bool pl;
	// register: 21
	register bool pr;
	// address: 0xFFFFFFB0
	auto bool pf;
	// address: 0xFFFFFFB8
	auto bool pll;
	// address: 0xFFFFFFC0
	auto bool prr;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80079484
// line start: 1218
// line end:   1281
int CheckIsoBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int x;
	// register: 6
	register int y;
	// register: 17
	register int newdir;
	// register: 21
	register int wx;
	// register: 22
	register int wy;
	// address: 0xFFFFFFB0
	auto int lnd;
	// address: 0xFFFFFFB8
	auto int rnd;
	// register: 18
	register char *poffset_x;
	// register: 19
	register char *poffset_y;
	{
		{
		}
	}
}


// address: 0x800797F0
// line start: 1290
// line end:   1329
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int fx;
	// register: 6
	register int fy;
	// register: 4
	// size: 0x8
	register struct map_info *dm;
	{
		{
			// register: 5
			register int wx;
			// register: 6
			register int wy;
		}
	}
}


// address: 0x80079950
// line start: 1339
// line end:   1406
void walk__7GamePadi(struct GamePad *this, int cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
	// register: 3
	// size: 0x19E8
	register struct PlayerStruct *plr2;
	{
		{
		}
	}
}


// address: 0x80079C98
// line start: 1414
// line end:   1481
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	{
		{
			{
				{
					// register: 16
					// size: 0x6C
					register struct ItemStruct *pi;
				}
			}
		}
	}
}


// address: 0x80079FD4
// line start: 1490
// line end:   1527
void show_combos__7GamePad(struct GamePad *this) {
	// register: 21
	register int y;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT crect;
	// register: 22
	// size: 0x4
	register enum TXT_JUST J;
	{
		// register: 20
		register int i;
	}
}


// address: 0x8007A260
// line start: 1554
// line end:   1908
void Handle__7GamePad(struct GamePad *this) {
	// register: 18
	register int cp;
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
											// register: 2
											register int abut;
											{
												{
													// register: 16
													register int owait;
													{
														{
															// register: 5
															register int dir;
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


// address: 0x8007A95C
// line start: 1914
// line end:   1940
void GamePadTask__FP4TASK(struct TASK *T) {
	// register: 17
	register int omp;
	// register: 18
	register int oms;
}


// address: 0x8007AA54
// size: 0xD4
// line start: 1945
// line end:   1946
struct GamePad *GetGamePad__Fi(int pnum) {
}


// address: 0x8007AA74
// line start: 1952
// line end:   2008
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 3
	// size: 0xD4
	register struct GamePad *GP1;
	// register: 8
	// size: 0xD4
	register struct GamePad *GP2;
}


// address: 0x8007AB78
// line start: 2014
// line end:   2016
void Init_GamePad__Fv() {
}


// address: 0x8007ABA8
// line start: 2021
// line end:   2075
void InitGamePadVars__Fv() {
}


// address: 0x8007AD34
// line start: 2079
// line end:   2088
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x8007ADA4
// line start: 2092
// line end:   2095
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0xD4
	register struct GamePad *GPad;
}


// address: 0x8007ADC8
// line start: 2096
// line end:   2096
void _GLOBAL__I_flyflag() {
}


// address: 0x8007AE00
// line start: 17
// line end:   17
bool Active__11SpellTarget_addr_8007AE00(struct SpellTarget *this) {
}


// address: 0x8007AE0C
// line start: 205
// line end:   205
void MoveToScrollTarget__7CBlocks_addr_8007AE0C(struct CBlocks *this) {
}


// address: 0x8007AE20
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad_addr_8007AE20(struct CPad *this) {
}


// address: 0x8007AE48
// line start: 113
// line end:   117
unsigned short GetUp__C4CPad_addr_8007AE48(struct CPad *this) {
}


// address: 0x8007AE70
// line start: 106
// line end:   110
unsigned short GetCur__C4CPad_addr_8007AE70(struct CPad *this) {
}


// address: 0x8007AE98
// line start: 66
// line end:   69
void DoGameTestStuff__Fv() {
}


// address: 0x8007AEC4
// line start: 73
// line end:   76
void DoInitGameStuff__Fv() {
}


// address: 0x8007AEF8
// line start: 63
// line end:   64
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x8007AF18
// line start: 74
// line end:   76
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x8007AF38
// line start: 94
// line end:   95
void GRL_InitGwin__Fv() {
}


// address: 0x8007AF44
// line start: 106
// line end:   110
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x8007AF54
// line start: 121
// line end:   123
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x8007AF7C
// line start: 133
// line end:   150
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8007B028
// line start: 160
// line end:   167
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x8007B070
// size: 0x4
// line start: 84
// line end:   85
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x8007B07C
// line start: 92
// line end:   162
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


// address: 0x8007B250
// line start: 171
// line end:   198
char *GetStr__Fi(int StrId) {
}


// address: 0x8007B2CC
// line start: 204
// line end:   211
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x8007B310
// line start: 222
// line end:   259
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


// address: 0x8007B428
// line start: 276
// line end:   285
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x8007B480
// line start: 294
// line end:   296
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x8007B48C
// line start: 306
// line end:   326
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x8007B56C
// line start: 334
// line end:   360
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x8007B5EC
// line start: 85
// line end:   144
void DoPortalFX__FP8POLY_FT4iiii(struct POLY_FT4 *Ft4, int R, int G, int B, int OtPos) {
	// register: 16
	register unsigned char zU;
	// register: 3
	register unsigned char *s;
	// register: 4
	register unsigned char *d;
	// register: 18
	register unsigned char *Ft4m;
	// register: 21
	register short zX0;
	// register: 22
	register short zX1;
	// register: 17
	register short zY;
	// register: 19
	register int n;
	// address: 0x800E3630
	// size: 0xE0
	static int xoffset[56];
}


// address: 0x8007B95C
// size: 0x28
// line start: 156
// line end:   221
struct POLY_FT4 *TempPrintMissile__FiiiiiiiiccUcUcUcc(int ScrX, int ScrY, int OtPos, int spell, int aframe, int direction, int anim, int sfx, int xflip, int yflip, int red, int grn, int blu, int semi) {
	// address: 0xFFFFFF90
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// register: 17
	// size: 0x70
	register struct TextDat *missdat;
	// register: 16
	register int frame;
	// register: 5
	register int tv1;
	// register: 2
	register int dw;
	// register: 3
	register int dh;
}


// address: 0x8007BD44
// line start: 225
// line end:   252
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register int anim;
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// register: 17
	// size: 0x70
	register struct TextDat *missdat;
	// register: 16
	register int frame;
}


// address: 0x8007BEE4
// line start: 258
// line end:   272
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// register: 18
	// size: 0x70
	register struct TextDat *missdat;
	// register: 17
	register int frame;
}


// address: 0x8007C000
// line start: 277
// line end:   294
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x8007C0A8
// line start: 300
// line end:   317
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x8007C160
// line start: 323
// line end:   326
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007C1C8
// line start: 330
// line end:   333
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007C2EC
// line start: 337
// line end:   339
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x8007C384
// line start: 343
// line end:   345
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x8007C41C
// line start: 349
// line end:   352
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007C488
// line start: 356
// line end:   368
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 12
	register char xflip;
	// register: 11
	register char yflip;
	// register: 3
	register int frame;
}


// address: 0x8007C538
// line start: 372
// line end:   395
void FuncFARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 11
			register char xflip;
			// register: 10
			register char yflip;
			// register: 3
			register int frame;
			// register: 8
			register int nframe;
		}
	}
}


// address: 0x8007C630
// line start: 400
// line end:   425
void FuncLARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 11
			register char xflip;
			// register: 10
			register char yflip;
			// register: 3
			register int frame;
			// register: 8
			register int nframe;
		}
	}
}


// address: 0x8007C720
// line start: 430
// line end:   444
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 9
	register char xflip;
	// register: 10
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x8007C7BC
// line start: 448
// line end:   464
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


// address: 0x8007C8E0
// line start: 468
// line end:   487
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x8007C988
// line start: 493
// line end:   494
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007C9F0
// line start: 498
// line end:   499
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CA58
// line start: 503
// line end:   524
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 21
	register unsigned char blu;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007CBE4
// line start: 528
// line end:   543
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 20
	register unsigned char red;
	// register: 21
	register unsigned char grn;
	// register: 18
	register unsigned char blu;
	// register: 2
	register unsigned long bright;
}


// address: 0x8007CD60
// line start: 547
// line end:   550
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CDCC
// line start: 554
// line end:   557
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CE2C
// line start: 561
// line end:   573
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


// address: 0x8007CF00
// line start: 578
// line end:   581
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CF6C
// line start: 585
// line end:   586
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CF74
// line start: 589
// line end:   606
void FuncFLASH__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int size;
	{
		{
			// address: 0x80118F68
			// size: 0x60
			static int xoffset[8][3];
			// register: 17
			register int id;
			// register: 18
			// size: 0x90
			register struct CPlayer *test;
			// register: 16
			// size: 0x19E8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x8007D0D4
// line start: 610
// line end:   612
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D134
// line start: 616
// line end:   617
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D13C
// line start: 620
// line end:   621
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D170
// line start: 625
// line end:   629
void FuncWEAPEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D20C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007D20C(struct POLY_FT4 **Prim) {
}


// address: 0x8007D288
// size: 0x90
// line start: 64
// line end:   66
struct CPlayer *GetPlayer__7CPlayeri_addr_8007D288(int PNum) {
}


// address: 0x8007D2D8
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_8007D2D8(struct CPlayer *this) {
}


// address: 0x8007D2E4
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_8007D2E4(struct CPlayer *this) {
}


// address: 0x8007D2F0
// line start: 233
// line end:   233
int GetNumOfFrames__7TextDat_addr_8007D2F0(struct TextDat *this) {
}


// address: 0x8007D304
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati_addr_8007D304(struct TextDat *this, int FrNum) {
}


// address: 0x8007D320
// line start: 71
// line end:   76
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007D358
// line start: 85
// line end:   100
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x8007D3D8
// line start: 109
// line end:   124
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x8007D470
// line start: 135
// line end:   151
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x8007D520
// line start: 163
// line end:   216
int ML_GetPresetMonsters__FiPiUl(int currlevel, int *typelist, unsigned long QuestsNeededMask) {
	// register: 10
	// size: 0x10
	register struct MonstList *Mlist;
	// register: 18
	register int NumOfMonsters;
	// register: 16
	register int ThisList;
	// address: 0xFFFFFFC0
	// size: 0x28
	auto int Index[10];
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


// address: 0x8007D710
// size: 0x28
// line start: 277
// line end:   304
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


// address: 0x8007D8A4
// size: 0x28
// line start: 312
// line end:   331
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


// address: 0x8007D968
// size: 0x28
// line start: 335
// line end:   350
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int AnimFrame;
	// register: 3
	register int LoadIndex;
	// register: 5
	register int Creature;
}


// address: 0x8007DA30
// line start: 384
// line end:   395
void ResetFlames__Fv() {
	{
		{
			{
				// register: 17
				register int i;
			}
		}
	}
}


// address: 0x8007DAF8
// line start: 400
// line end:   447
void PrintOBJ_FIRE__Fiii(int ScrX, int ScrY, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4a;
	// address: 0xFFFFFFD0
	// size: 0x70
	auto struct TextDat *ThisDat;
	// register: 30
	register int diff;
	// register: 22
	// size: 0x6
	register struct CINDER *C;
	{
		// register: 23
		register int i;
		{
			// register: 21
			register unsigned short fx;
			// register: 19
			register unsigned short fy;
			// register: 18
			register unsigned short fyi;
		}
	}
}


// address: 0x8007DCB0
// size: 0x28
// line start: 496
// line end:   594
struct POLY_FT4 *DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 9
	register int AnimFrame;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	// size: 0x70
	register struct TextDat *ThisDat;
	// register: 16
	// size: 0x4
	register struct DoorOff *DrOff;
	// register: 2
	register int LoadIndex;
	// register: 5
	register int Creature;
	// register: 6
	register int OpenClosed;
	// register: 8
	register int Dir;
	// register: 16
	register int Type;
}


// address: 0x8007DEEC
// line start: 605
// line end:   609
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x8007DFCC
// size: 0x28
// line start: 624
// line end:   634
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E02C
// line start: 646
// line end:   651
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x70
	register struct TextDat *ThisDat;
}


// address: 0x8007E0C0
// size: 0x28
// line start: 661
// line end:   670
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E144
// size: 0x28
// line start: 680
// line end:   689
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E1C8
// size: 0x28
// line start: 699
// line end:   711
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E254
// size: 0x28
// line start: 721
// line end:   733
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E2E0
// size: 0x28
// line start: 744
// line end:   770
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


// address: 0x8007E438
// size: 0x28
// line start: 780
// line end:   787
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007E510
// size: 0x28
// line start: 797
// line end:   804
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007E5E8
// size: 0x28
// line start: 815
// line end:   816
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E60C
// size: 0x28
// line start: 827
// line end:   856
struct POLY_FT4 *PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 19
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 18
	register int ot;
	// register: 2
	register int LoadIndex;
	// register: 5
	register int Creature;
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


// address: 0x8007E7A8
// size: 0x28
// line start: 866
// line end:   890
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


// address: 0x8007E930
// size: 0x28
// line start: 900
// line end:   901
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E954
// size: 0x28
// line start: 912
// line end:   913
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E978
// size: 0x28
// line start: 923
// line end:   924
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E99C
// size: 0x28
// line start: 936
// line end:   939
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	register int ot;
}


// address: 0x8007E9D8
// size: 0x28
// line start: 951
// line end:   954
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007EA3C
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8007EA3C(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8007EA78
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8007EA78(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8007EAA0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007EAA0(struct POLY_FT4 **Prim) {
}


// address: 0x8007EB1C
// line start: 253
// line end:   253
int GetNumOfFrames__7TextDatii_addr_8007EB1C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8007EB54
// size: 0x14
// line start: 284
// line end:   286
struct CCreatureHdr *GetCreature__7TextDati_addr_8007EB54(struct TextDat *this, int Creature) {
}


// address: 0x8007EB70
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati_addr_8007EB70(struct TextDat *this, int FrNum) {
}


// address: 0x8007EB8C
// line start: 78
// line end:   100
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x8007EB94
// line start: 105
// line end:   118
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x8007EB9C
// line start: 123
// line end:   129
void ResetPal__Fv() {
}


// address: 0x8007EBA4
// line start: 137
// line end:   144
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007EBD4
// line start: 179
// line end:   180
bool GetFadeState__Fv() {
}


// address: 0x8007EBE0
// line start: 200
// line end:   224
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 6
	register unsigned char bright1;
	// register: 3
	register unsigned char bright2;
}


// address: 0x8007ECFC
// line start: 232
// line end:   255
void SmearScreen__Fv() {
}


// address: 0x8007ED04
// line start: 258
// line end:   267
void DrawFadedScreen__Fv() {
	// register: 16
	// size: 0x70
	register struct TextDat *ThisDat;
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *GT4a;
}


// address: 0x8007ED8C
// line start: 287
// line end:   304
void BlackPalette__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007EE88
// line start: 311
// line end:   339
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007EF18
// line start: 346
// line end:   353
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x8007EF70
// line start: 361
// line end:   396
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007F020
// line start: 403
// line end:   413
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x8007F074
// line start: 171
// line end:   171
int GetMaxOtPos__7CBlocks_addr_8007F074() {
}


// address: 0x8007F07C
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x8007F0A4
// line start: 139
// line end:   163
void M_ClearSquares__Fi(int i) {
	// register: 7
	register int mx;
	// register: 10
	register int my;
	// register: 11
	register int mt;
	// register: 4
	register int mt2;
	{
		// register: 6
		register int y;
		{
			{
				// register: 5
				register int x;
			}
		}
	}
}


// address: 0x8007F1E4
// line start: 168
// line end:   173
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x8007F244
// line start: 178
// line end:   190
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8007F298
// line start: 209
// line end:   221
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x8007F300
// line start: 225
// line end:   275
void M_Enemy__Fi(int i) {
	// register: 18
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 5
	register int closest;
	// register: 19
	register int _mx;
	// register: 20
	register int _my;
	// register: 16
	register int _menemy;
	// register: 21
	// size: 0x19E8
	register struct PlayerStruct *plr1;
	// register: 23
	// size: 0x19E8
	register struct PlayerStruct *plr2;
	{
		{
			{
				{
					// register: 2
					// size: 0x19E8
					register struct PlayerStruct *enemy;
					// register: 17
					register int y;
					{
						{
							// register: 17
							register int x1;
							// register: 19
							register int y1;
							// register: 16
							register int x2;
							// register: 3
							register int y2;
						}
					}
				}
			}
		}
	}
}


// address: 0x8007F518
// line start: 370
// line end:   379
void ClearMVars__Fi(int i) {
}


// address: 0x8007F594
// line start: 383
// line end:   508
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	{
		{
			// register: 6
			register int slvl;
		}
	}
}


// address: 0x8007FB2C
// line start: 513
// line end:   521
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x8007FBCC
// line start: 526
// line end:   555
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 5
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x8007FD3C
// line start: 559
// line end:   578
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x8007FE4C
// line start: 582
// line end:   590
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x8007FEEC
// line start: 594
// line end:   640
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


// address: 0x800800DC
// line start: 644
// line end:   661
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x800801C4
// line start: 665
// line end:   694
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


// address: 0x80080418
// line start: 699
// line end:   731
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x800806CC
// line start: 739
// line end:   744
int encode_enemy__Fi(int m) {
}


// address: 0x8008072C
// line start: 158
// line end:   236
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
	// register: 7
	register unsigned char AMLWallFlag;
	// register: 8
	register unsigned char AMRWallFlag;
}


// address: 0x80080800
// line start: 242
// line end:   315
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


// address: 0x80080C50
// line start: 151
// line end:   183
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 2
	register int mi;
}


// address: 0x80080D38
// line start: 189
// line end:   219
void SyncPortals__Fv() {
	{
		// register: 17
		register int i;
		{
			{
				{
					{
						{
							{
								// register: 6
								register int x;
								{
									{
										// register: 4
										register int y;
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


// address: 0x80080E8C
// line start: 236
// line end:   245
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x80080F18
// line start: 253
// line end:   255
void DeactivatePortal__Fi(int i) {
}


// address: 0x80080F38
// line start: 262
// line end:   266
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x80080F70
// line start: 272
// line end:   279
void DelMis__Fii(int mi, int i) {
}


// address: 0x80080FD0
// line start: 285
// line end:   300
void RemovePortalMissile__Fi(int id) {
	// register: 17
	register int i;
	// register: 18
	register int mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
}


// address: 0x8008112C
// line start: 306
// line end:   307
void SetCurrentPortal__Fi(int p) {
}


// address: 0x80081138
// line start: 312
// line end:   340
void GetPortalLevel__Fv() {
}


// address: 0x8008129C
// line start: 346
// line end:   359
void GetPortalLvlPos__Fv() {
}


// address: 0x80081350
// size: 0x170
// line start: 60
// line end:   63
struct CompLevelMaps *__13CompLevelMapsRC9CompClass(struct CompLevelMaps *this, struct CompClass *NewCompObj) {
}


// address: 0x800813BC
// line start: 71
// line end:   72
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x8008144C
// line start: 80
// line end:   83
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x8008147C
// line start: 91
// line end:   93
void InitAllMaps__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x800814D0
// size: 0x1258
// line start: 101
// line end:   111
struct DLevel *GetMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x8008154C
// line start: 119
// line end:   128
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Dl) {
}


// address: 0x800815EC
// line start: 152
// line end:   168
void ImportData__13CompLevelMapsP14CompressedLevs(struct CompLevelMaps *this, struct CompressedLevs *Levs) {
	{
		// register: 18
		register int f;
		{
		}
	}
}


// address: 0x80081698
// line start: 176
// line end:   191
int ExportData__13CompLevelMapsPUc(struct CompLevelMaps *this, unsigned char *U8Dest) {
	// register: 17
	register unsigned char *BinPtr;
	{
		// register: 19
		register int f;
	}
}


// address: 0x80081744
// line start: 199
// line end:   219
void MakeSureMapXDecomped__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		// register: 17
		register int f;
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x800817F0
// line start: 229
// line end:   240
void Init__4AMap(struct AMap *this) {
	{
		{
		}
	}
}


// address: 0x8008185C
// line start: 248
// line end:   257
int WriteCompressed__4AMapPUcRC9CompClass(struct AMap *this, unsigned char *Dest, struct CompClass *CompObj) {
	// register: 16
	register unsigned char *Data;
}


// address: 0x800818D0
// line start: 265
// line end:   285
void SetCompData__4AMapPCUci(struct AMap *this, unsigned char *Data, int NewSize) {
	// register: 17
	register long NewHnd;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x800819C0
// size: 0x1258
// line start: 293
// line end:   331
struct DLevel *GetMap__4AMap(struct AMap *this) {
	// register: 16
	// size: 0x1258
	register struct DLevel *NewCurrLevel;
	{
		{
			// register: 17
			register long NewHnd;
		}
	}
}


// address: 0x80081AE0
// line start: 339
// line end:   353
void ReleaseMap__4AMapP6DLevel(struct AMap *this, struct DLevel *Dl) {
}


// address: 0x80081B70
// line start: 361
// line end:   410
void CompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj) {
	// register: 18
	register long NewHnd;
	// register: 17
	register unsigned char *Dest;
	// register: 17
	// size: 0x1258
	register struct DLevel *Dlev;
	// register: 2
	register long SplitHnd;
}


// address: 0x80081D34
// line start: 418
// line end:   451
void DecompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj) {
	// register: 18
	register long NewHnd;
	// register: 16
	register unsigned char *Dest;
	// register: 16
	register unsigned char *Src;
}


// address: 0x80081E68
// line start: 129
// line end:   129
void CheckMapNum__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x80081E9C
// line start: 86
// line end:   86
bool IsCompressed__4AMap(struct AMap *this) {
}


// address: 0x80081EA8
// line start: 80
// line end:   80
void ___4AMap(struct AMap *this, int __in_chrg) {
}


// address: 0x80081EF0
// size: 0x10
// line start: 75
// line end:   77
struct AMap *__4AMap(struct AMap *this) {
}


// address: 0x80081F24
// line start: 83
// line end:   84
bool IS_GameOver__Fv() {
}


// address: 0x80081F4C
// line start: 94
// line end:   98
void GO_DoGameOver__Fv() {
}


// address: 0x80081F94
// line start: 116
// line end:   211
void GameOverTask__FP4TASK(struct TASK *T) {
	// register: 19
	register bool TimeOut;
	// register: 17
	register int TimeOutTime;
	// register: 18
	register int lasttick;
	{
		{
			{
				// register: 4
				// size: 0xEC
				register struct CPad *Pad;
				{
					{
						// register: 16
						register int ntick;
						{
							// register: 16
							register int f;
						}
					}
				}
			}
		}
	}
}


// address: 0x80082198
// line start: 220
// line end:   242
void PrintGameOver__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct Dialog PBack;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
	// register: 16
	register int otpos;
	// register: 18
	register int oldDotpos;
	// register: 16
	register int oldTotpos;
}


// address: 0x800822D8
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad_addr_800822D8(struct CPad *this) {
}


// address: 0x80082300
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc_addr_80082300(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80082320
// line start: 94
// line end:   94
void SetBack__6Dialogi_addr_80082320(struct Dialog *this, int Type) {
}


// address: 0x80082328
// line start: 91
// line end:   91
void SetBorder__6Dialogi_addr_80082328(struct Dialog *this, int Type) {
}


// address: 0x80082330
// line start: 79
// line end:   79
void ___6Dialog_addr_80082330(struct Dialog *this, int __in_chrg) {
}


// address: 0x80082358
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_80082358(struct Dialog *this) {
}


// address: 0x800823D8
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_800823D8() {
}


// address: 0x800823E0
// line start: 171
// line end:   171
int GetMaxOtPos__7CBlocks_addr_800823E0() {
}


// address: 0x800823E8
// line start: 230
// line end:   236
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x8008242C
// line start: 241
// line end:   242
char *VER_GetVerString__Fv() {
}


// address: 0x8008243C
// line start: 285
// line end:   286
int CharPair2Num__FPc(char *Str) {
}


// address: 0x80082464
// line start: 52
// line end:   74
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x80082518
// line start: 64
// line end:   66
void gamemenu_off__Fv() {
}


// address: 0x80082520
// line start: 82
// line end:   92
void DPIECE_ERROR__Fv() {
}


// address: 0x80082528
// line start: 98
// line end:   101
void AllocdPiece__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80082580
// line start: 105
// line end:   108
void FreedPiece__Fv() {
}


// address: 0x800825C4
// line start: 113
// line end:   144
void ConvertdPiece__Fv() {
	{
		// register: 17
		register int y;
		{
			{
				// register: 16
				register int x;
				{
					// register: 18
					register short dp;
				}
			}
		}
	}
}


// address: 0x8008278C
// line start: 151
// line end:   154
short GetDPiece__Fii(int x, int y) {
}


// address: 0x80082814
// line start: 158
// line end:   161
void SetDPiece__Fiis(int x, int y, short v) {
}


// address: 0x800828A8
// line start: 168
// line end:   170
void SetdDead__FiiUc(int x, int y, unsigned char v) {
}


// address: 0x800828E8
// line start: 174
// line end:   175
unsigned char GetdDead__Fii(int x, int y) {
}


// address: 0x80082910
// line start: 182
// line end:   184
void SetSOLID__Fii(int x, int y) {
}


// address: 0x8008299C
// line start: 188
// line end:   190
void ClearSOLID__Fii(int x, int y) {
}


// address: 0x80082A28
// line start: 194
// line end:   198
bool GetSOLID__Fii(int x, int y) {
}


// address: 0x80082A70
// line start: 207
// line end:   209
void SetMISSILE__Fii(int x, int y) {
}


// address: 0x80082AFC
// line start: 213
// line end:   215
void ClearMISSILE__Fii(int x, int y) {
}


// address: 0x80082B88
// line start: 219
// line end:   221
bool GetMISSILE__Fii(int x, int y) {
}


// address: 0x80082BB8
// line start: 230
// line end:   232
void SetBLOCK__Fii(int x, int y) {
}


// address: 0x80082C44
// line start: 236
// line end:   238
void ClearBLOCK__Fii(int x, int y) {
}


// address: 0x80082CD0
// line start: 242
// line end:   244
bool GetBLOCK__Fii(int x, int y) {
}


// address: 0x80082D00
// line start: 253
// line end:   255
void SetTRAP__Fii(int x, int y) {
}


// address: 0x80082D8C
// line start: 259
// line end:   261
void ClearTRAP__Fii(int x, int y) {
}


// address: 0x80082E18
// line start: 265
// line end:   267
bool GetTRAP__Fii(int x, int y) {
}


// address: 0x8001FEFC
// line start: 88
// line end:   91
void DoEpi(struct TASK *T);

// address: 0x8001FF4C
// line start: 99
// line end:   102
void DoPro(struct TASK *T);

// address: 0x8001FF9C
// line start: 115
// line end:   129
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x80020010
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


// address: 0x800201F8
// line start: 218
// line end:   277
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x800203B8
// line start: 287
// line end:   313
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x80020494
// line start: 321
// line end:   330
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8002051C
// line start: 338
// line end:   340
void TSK_Die();

// address: 0x80020548
// line start: 350
// line end:   357
void TSK_Kill(struct TASK *T);

// address: 0x80020598
// size: 0x5C
// line start: 371
// line end:   372
struct TASK *TSK_GetFirstActive();

// address: 0x800205A8
// line start: 385
// line end:   395
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x80020624
// line start: 408
// line end:   418
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8002066C
// line start: 430
// line end:   440
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x800206B0
// size: 0x5C
// line start: 454
// line end:   455
struct TASK *TSK_GetCurrentTask();

// address: 0x800206C0
// line start: 467
// line end:   468
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x800206D8
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


// address: 0x80020730
// line start: 512
// line end:   514
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x80020748
// line start: 525
// line end:   526
void TSK_ClearExecFilter();

// address: 0x8002076C
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


// address: 0x8002086C
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


// address: 0x800208E4
// line start: 619
// line end:   620
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x800208F8
// line start: 630
// line end:   631
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8002090C
// line start: 642
// line end:   643
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x80020920
// line start: 653
// line end:   654
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x80020934
// line start: 665
// line end:   666
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x80020948
// line start: 677
// line end:   678
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8002095C
// line start: 689
// line end:   696
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800209A8
// line start: 707
// line end:   713
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800209C8
// line start: 722
// line end:   734
void LoTskKill(struct TASK *T) {
}


// address: 0x80020A38
// line start: 744
// line end:   748
void ExecuteTask(struct TASK *T);

// address: 0x80020A88
// line start: 756
// line end:   762
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020AA0
// line start: 765
// line end:   771
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020AB8
// line start: 775
// line end:   781
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020AD0
// line start: 784
// line end:   790
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020AE8
// line start: 793
// line end:   795
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x80020B00
// line start: 799
// line end:   802
void TSK_ClearEpiProFilter();

// address: 0x80020B34
// line start: 810
// line end:   811
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x80020B44
// line start: 819
// line end:   826
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x80020B5C
// line start: 833
// line end:   838
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x80020B84
// line start: 841
// line end:   845
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x80020BB0
// line start: 848
// line end:   857
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x80020BEC
// line start: 32
// line end:   33
void TICK_InitModule();

// address: 0x80020C0C
// line start: 41
// line end:   42
void TICK_Set(unsigned long Val);

// address: 0x80020C1C
// line start: 49
// line end:   50
unsigned long TICK_Get();

// address: 0x80020C2C
// line start: 58
// line end:   59
void TICK_Update();

// address: 0x80020C4C
// line start: 66
// line end:   67
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x80020C78
// line start: 71
// line end:   72
char *TICK_GetDateString();

// address: 0x80020C88
// line start: 76
// line end:   77
char *TICK_GetTimeString();

// address: 0x80020C98
// line start: 55
// line end:   57
unsigned char GU_InitModule();

// address: 0x80020CC4
// line start: 65
// line end:   70
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x80020CF4
// line start: 76
// line end:   95
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x80020D84
// line start: 103
// line end:   104
long GU_GetSRnd();

// address: 0x80020DA4
// line start: 114
// line end:   115
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x80020DE0
// line start: 126
// line end:   128
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x80020E04
// line start: 31
// line end:   39
void main();

// address: 0x80020E54
// line start: 53
// line end:   60
unsigned char DBG_OpenModule();

// address: 0x80020E5C
// line start: 72
// line end:   79
void DBG_PollHost();

// address: 0x80020E64
// line start: 88
// line end:   92
void DBG_Halt();

// address: 0x80020E6C
// line start: 108
// line end:   126
void DBG_SendMessage(char *e);

// address: 0x80020E84
// line start: 135
// line end:   136
void DBG_SetMessageHandler(void (*Func)());

// address: 0x80020E94
// line start: 146
// line end:   160
void DBG_Error(char *Text, char *File, int Line);

// address: 0x80020EC8
// line start: 166
// line end:   167
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x80020ED8
// line start: 177
// line end:   181
void SendPsyqString(char *e);

// address: 0x80020EE0
// line start: 190
// line end:   191
void DBG_SetPollRoutine(void (*Func)());

// address: 0x80020EF0
// line start: 52
// line end:   53
unsigned long GTIMSYS_GetTimer();

// address: 0x80020F14
// line start: 57
// line end:   58
void GTIMSYS_ResetTimer();

// address: 0x80020F38
// line start: 63
// line end:   91
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8002116C
// size: 0x8
// line start: 74
// line end:   75
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8002117C
// line start: 89
// line end:   91
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x800211B8
// line start: 110
// line end:   115
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x800211C8
// line start: 130
// line end:   135
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x800211E0
// line start: 147
// line end:   151
unsigned char GSYS_InitMachine();

// address: 0x80021234
// line start: 170
// line end:   184
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x80021268
// line start: 195
// line end:   199
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x800212D4
// line start: 175
// line end:   176
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x800212E4
// line start: 195
// line end:   247
long GAL_SplitBlock(long CurBlock, unsigned long Size) {
	// register: 19
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *SplitBlock;
}


// address: 0x80021404
// line start: 255
// line end:   277
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x800214BC
// line start: 290
// line end:   360
unsigned char GAL_AddMemType(struct MEM_INIT_INFO *M) {
	// register: 4
	// size: 0x28
	register struct MEM_INIT_INFO *P;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR *FreeMemHdr;
	// register: 5
	register unsigned long Addr1;
	// register: 3
	register unsigned long Addr2;
}


// address: 0x800215DC
// line start: 375
// line end:   452
long GAL_Alloc(unsigned long Size, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *Block;
	// register: 18
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 19
	register unsigned long FullSize;
	// register: 20
	// size: 0x1C
	register struct MEM_HDR *(*FRoute)();
	// register: 23
	register unsigned char High;
	{
	}
}


// address: 0x80021774
// line start: 466
// line end:   488
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
}


// address: 0x800217DC
// line start: 501
// line end:   532
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
}


// address: 0x80021860
// line start: 544
// line end:   583
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
}


// address: 0x80021908
// line start: 596
// line end:   620
unsigned long GAL_GetFreeMem(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR *Block;
	}
}


// address: 0x8002197C
// line start: 634
// line end:   658
unsigned long GAL_GetUsedMem(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR *Block;
	}
}


// address: 0x800219F0
// line start: 673
// line end:   699
unsigned long GAL_LargestFreeBlock(unsigned long Type) {
	// register: 5
	register unsigned long Largest;
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *Index;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *MI;
}


// address: 0x80021A6C
// line start: 711
// line end:   717
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80021A8C
// line start: 731
// line end:   738
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80021AD8
// line start: 753
// line end:   766
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x80021B10
// line start: 780
// line end:   790
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x80021B40
// line start: 803
// line end:   804
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80021B70
// size: 0x1C
// line start: 818
// line end:   843
struct MEM_HDR *FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *Index;
}


// address: 0x80021BC8
// size: 0x1C
// line start: 855
// line end:   888
struct MEM_HDR *FindHighestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *Index;
	// register: 7
	register void *Highest;
}


// address: 0x80021C30
// size: 0x1C
// line start: 899
// line end:   934
struct MEM_HDR *FindLowestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *Index;
	// register: 7
	register unsigned long Lowest;
}


// address: 0x80021C98
// size: 0x28
// line start: 946
// line end:   967
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x80021CD4
// line start: 980
// line end:   1033
void MergeToEmptyList(struct MEM_INIT_INFO *MI, struct MEM_HDR *M) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *Index;
	// register: 18
	// size: 0x1C
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


// address: 0x80021DA8
// line start: 1055
// line end:   1085
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021E84
// line start: 1109
// line end:   1196
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x8002201C
// size: 0x1C
// line start: 1212
// line end:   1239
struct MEM_HDR *FindBlockInTheseBounds(struct MEM_HDR *Head, void *Addr, unsigned long Size) {
	// register: 4
	// size: 0x1C
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


// address: 0x80022088
// size: 0x1C
// line start: 1251
// line end:   1268
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *RetBlock;
}


// address: 0x80022110
// line start: 1281
// line end:   1283
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x80022150
// line start: 1295
// line end:   1315
void GAL_IterateEmptyMem(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x1C
		register struct MEM_HDR *Block;
	}
}


// address: 0x800221D4
// line start: 1325
// line end:   1345
void GAL_IterateUsedMem(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x1C
		register struct MEM_HDR *Block;
	}
}


// address: 0x80022270
// line start: 1356
// line end:   1360
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x800222E0
// line start: 1380
// line end:   1394
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80022334
// line start: 1408
// line end:   1424
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80022388
// line start: 1438
// line end:   1455
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x8002240C
// line start: 1468
// line end:   1473
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80022468
// line start: 1488
// line end:   1540
unsigned char GAL_CheckMem(unsigned long Type) {
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
	// register: 18
	register unsigned long TotalMem;
}


// address: 0x80022564
// line start: 1555
// line end:   1580
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80022610
// line start: 1593
// line end:   1608
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80022668
// line start: 1620
// line end:   1622
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80022698
// size: 0x4
// line start: 1635
// line end:   1636
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x800226A8
// line start: 1647
// line end:   1648
char *GAL_GetLastErrorText();

// address: 0x800226D0
// line start: 1660
// line end:   1687
int GAL_HowManyEmptyRegions(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x1C
		register struct MEM_HDR *mh;
	}
}


// address: 0x80022738
// line start: 1697
// line end:   1722
int GAL_HowManyUsedRegions(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x1C
		register struct MEM_HDR *mh;
	}
}


// address: 0x800227A0
// line start: 1731
// line end:   1732
void GAL_SetTimeStamp(int Time);

// address: 0x800227B0
// line start: 1742
// line end:   1743
void GAL_IncTimeStamp();

// address: 0x800227D0
// line start: 1752
// line end:   1753
int GAL_GetTimeStamp();

// address: 0x800227E0
// line start: 1769
// line end:   1780
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80022830
// line start: 1800
// line end:   1805
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80022880
// line start: 1820
// line end:   1837
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x8002292C
// line start: 1848
// line end:   1859
long GAL_GetSize(long hnd) {
}


// address: 0x80022988
// line start: 1873
// line end:   1965
unsigned char GazDefragMem(unsigned long MemType) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct MEM_HDR *LockedBlocks;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct MEM_REG Reg;
	{
		// register: 5
		// size: 0x1C
		register struct MEM_HDR *NewEmptyBlock;
		// address: 0xFFFFFFE4
		// size: 0x1C
		auto struct MEM_HDR *ListOfBlocksInRegion;
		// register: 18
		register unsigned long ShuffledSize;
		// register: 16
		register int GapSize;
	}
}


// address: 0x80022AF0
// line start: 1978
// line end:   2002
void PutBlocksInRegionIntoList(struct MEM_REG *Reg, struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *ThisBlock;
	{
		// register: 17
		// size: 0x1C
		register struct MEM_HDR *NextBlock;
		// address: 0xFFFFFFE0
		// size: 0x8
		auto struct MEM_REG MemReg;
	}
}


// address: 0x80022B94
// line start: 2015
// line end:   2021
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80022BC8
// line start: 2034
// line end:   2044
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x1C
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x80022C34
// line start: 2062
// line end:   2097
unsigned char GetRegion(struct MEM_REG *Reg, struct MEM_HDR *LockedBlocks, struct MEM_INIT_INFO *M) {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *FirstBlock;
	// register: 2
	// size: 0x1C
	register struct MEM_HDR *SecondBlock;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct MEM_REG NewReg;
}


// address: 0x80022D2C
// size: 0x1C
// line start: 2136
// line end:   2155
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x80022D68
// line start: 2169
// line end:   2198
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *ThisBlock;
}


// address: 0x80022DF8
// line start: 2210
// line end:   2229
void PutAllLockedBlocksOntoList(struct MEM_HDR **ToHead, struct MEM_HDR **FromHead) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *CurHdr;
	{
		// register: 17
		// size: 0x1C
		register struct MEM_HDR *NextCurHdr;
	}
}


// address: 0x80022E74
// line start: 2242
// line end:   2292
void SortMemHdrListByAddr(struct MEM_HDR **Head) {
	// register: 7
	register unsigned char DidASwap;
	// register: 5
	// size: 0x1C
	register struct MEM_HDR *CurHdr;
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR *OldPrev;
	}
}


// address: 0x80022F28
// line start: 2303
// line end:   2326
void GraftMemHdrList(struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *OldFirst;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR *LastHdr;
	}
}


// address: 0x80022F84
// line start: 2337
// line end:   2342
void GAL_MemDump(unsigned long Type);

// address: 0x80022FF8
// line start: 2356
// line end:   2357
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80023008
// line start: 2370
// line end:   2384
int CountFreeBlocks() {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x80023034
// line start: 2396
// line end:   2408
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x8002307C
// line start: 2417
// line end:   2418
int GAL_GetNumFreeHeaders();

// address: 0x8002308C
// line start: 2422
// line end:   2423
unsigned long GAL_GetLastTypeAlloced();

// address: 0x8002309C
// line start: 2433
// line end:   2440
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x800230B4
// line start: 2449
// line end:   2461
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80023108
// line start: 2464
// line end:   2465
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x80023118
// line start: 2477
// line end:   2489
unsigned char GAL_SortUsedRegionsByAddress(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x8002316C
// line start: 2492
// line end:   2493
unsigned char SortAddr(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x8002317C
// line start: 2507
// line end:   2556
void SortMemHdrList(struct MEM_HDR **Head, unsigned char (*CompFunc)()) {
	// register: 18
	register unsigned char DidASwap;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *CurHdr;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x1C
		register struct MEM_HDR *OldPrev;
	}
}


// address: 0x80025538
// line start: 157
// line end:   167
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80025584
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
	// address: 0x800256D8
	bool rflag;
	// address: 0x80025A40
	bool nosign;
	// address: 0x80025AEC
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


