#include "types.h"

// address: 0x8012C234
extern int NumOfMonsterListLevels;

// address: 0x800A9270
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x8012BF18
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x8012BF1C
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x8012BF20
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x8012BF28
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x8012BF2C
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x8012BF30
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x8012BF34
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x8012BF38
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x8012BF3C
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x8012BF40
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x8012BF44
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x8012BF48
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x8012BF4C
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x8012BF50
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x8012BF54
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x8012BF58
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x8012BF5C
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x8012BF64
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x8012BF68
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x8012BF70
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x8012BF74
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x8012BF78
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x8012BF7C
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x8012BF80
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x8012BF84
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x8012BF88
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x8012BF8C
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x8012BF90
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x8012BF98
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x8012BF9C
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x8012BFA0
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x8012BFA4
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x8012BFA8
// size: 0x3
static unsigned char NumsLEV6M6QA[3];

// address: 0x8012BFAC
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x8012BFB0
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x8012BFB4
// size: 0x4
static unsigned char NumsLEV7M7C[4];

// address: 0x8012BFB8
// size: 0x3
static unsigned char NumsLEV7M7D[3];

// address: 0x8012BFBC
// size: 0x3
static unsigned char NumsLEV7M7E[3];

// address: 0x8012BFC0
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x8012BFC4
// size: 0x2
static unsigned char NumsLEV8M8A[2];

// address: 0x8012BFC8
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x8012BFCC
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8012BFD0
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x8012BFD4
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x8012BFD8
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x8012BFDC
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x8012BFE0
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x8012BFE4
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x8012BFE8
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x8012BFEC
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x8012BFF0
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x8012BFF4
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x8012BFF8
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x8012BFFC
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x8012C000
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x8012C004
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x8012C008
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x8012C00C
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x8012C010
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x8012C014
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x8012C018
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x8012C01C
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x8012C020
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x8012C024
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x8012C028
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x8012C02C
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x8012C030
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x8012C034
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x8012C038
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x8012C03C
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x8012C040
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x8012C044
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x8012C048
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x8012C04C
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x8012C050
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8012C054
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8012C058
// size: 0x2
static unsigned char NumsLEV15M15QA[2];

// address: 0x8012C05C
// size: 0x3
static unsigned char NumsLEV16M16D[3];

// address: 0x800A8D90
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A8DC0
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A8E20
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A8E60
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A8ED0
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A8F40
// size: 0x60
static struct MonstList ChoiceListLEV6[6];

// address: 0x800A8FA0
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A8FF0
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A9050
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A9090
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800A90E0
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A9130
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A9170
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A91C0
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A9220
// size: 0x40
static struct MonstList ChoiceListLEV15[4];

// address: 0x800A9260
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x8012DAF4
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800A92F0
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x8012C244
extern int ArgsSoFar;

// address: 0x8012C254
extern unsigned long *ThisOt;

// address: 0x8012C258
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x8012DAF8
static long hndPrimBuffers;

// address: 0x8012DAFC
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x8012DB00
static unsigned char BufferDepth;

// address: 0x8012DB01
static unsigned char WorkRamId;

// address: 0x8012DB02
static unsigned char ScrNum;

// address: 0x8012DB04
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x8012DB08
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x8012DB0C
static unsigned char BufferNum;

// address: 0x8012C25C
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x8012DB0D
static unsigned char LastBuffer;

// address: 0x8012DB10
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x8012DB14
static int ThisOtSize;

// address: 0x8012C260
// size: 0x8
static struct RECT ScrRect;

// address: 0x8012DB18
static int VidWait;

// address: 0x8012DF80
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8012DB1C
static void (*VbFunc)();

// address: 0x8012DB20
static unsigned long VidTick;

// address: 0x8012DB24
static int VXOff;

// address: 0x8012DB28
static int VYOff;

// address: 0x8012C274
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x8012C278
extern int LastFmem;

// address: 0x8012C268
extern unsigned int GSYS_MemStart;

// address: 0x8012C26C
extern unsigned int GSYS_MemEnd;

// address: 0x800A9638
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A9660
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x8012C270
extern int LowestFmem;

// address: 0x8012C288
extern int FileSYS;

// address: 0x8012DB2C
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x8012DB30
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x8012C2A2
extern short DavesPad;

// address: 0x8012C2A4
extern short DavesPadDeb;

// address: 0x800A9688
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x8012E060
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A9F2C
// size: 0x5C0
extern struct TextDat *AllDats[368];

// address: 0x8012C2F4
extern int TpW;

// address: 0x8012C2F8
extern int TpH;

// address: 0x8012C2FC
extern int TpXDest;

// address: 0x8012C300
extern int TpYDest;

// address: 0x8012C304
// size: 0x8
extern struct RECT R;

// address: 0x800AA4EC
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800AA520
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A96BC
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x8012C318
static bool ChunkGot;

// address: 0x800AA548
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800AA558
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800AA568
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x8012C32C
extern unsigned long BL_NoLumpFiles;

// address: 0x8012C330
extern unsigned long BL_NoStreamFiles;

// address: 0x8012C334
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x8012C338
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x8012C33C
extern unsigned char FileLoaded;

// address: 0x8012C360
extern int NoTAllocs;

// address: 0x800AA694
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x8012DB3C
static bool CanPause;

// address: 0x8012DB40
static bool Paused;

// address: 0x8012E088
// size: 0x10
static struct Dialog PBack;

// address: 0x800AA8FC
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800AA920
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800AA944
// size: 0x384
extern unsigned char demo_buffer[900];

// address: 0x8012C37C
extern int demo_pad_time;

// address: 0x8012C380
extern int demo_pad_count;

// address: 0x800AA824
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800AA890
// size: 0x6C
extern struct CPad Pad1;

// address: 0x8012C384
extern unsigned long demo_finish;

// address: 0x8012C388
extern int cac_pad;

// address: 0x8012C3A8
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x8012C3AC
extern int CharFrm;

// address: 0x8012C395
extern unsigned char WHITER;

// address: 0x8012C396
extern unsigned char WHITEG;

// address: 0x8012C397
extern unsigned char WHITEB;

// address: 0x8012C398
extern unsigned char BLUER;

// address: 0x8012C399
extern unsigned char BLUEG;

// address: 0x8012C39A
extern unsigned char BLUEB;

// address: 0x8012C39B
extern unsigned char REDR;

// address: 0x8012C39C
extern unsigned char REDG;

// address: 0x8012C39D
extern unsigned char REDB;

// address: 0x8012C39E
extern unsigned char GOLDR;

// address: 0x8012C39F
extern unsigned char GOLDG;

// address: 0x8012C3A0
extern unsigned char GOLDB;

// address: 0x800AACC8
// size: 0x21C
extern struct CFont MediumFont;

// address: 0x800AAEE4
// size: 0x21C
extern struct CFont LargeFont;

// address: 0x8012C3A4
extern bool buttoncol;

// address: 0x800AB100
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800AB1B4
// size: 0x10
extern struct FontTab LFont;

// address: 0x800AB1C4
// size: 0x136
extern struct FontItem MFontTab[155];

// address: 0x800AB2FC
// size: 0x10
extern struct FontTab MFont;

// address: 0x8012C3C1
extern unsigned char DialogRed;

// address: 0x8012C3C2
extern unsigned char DialogGreen;

// address: 0x8012C3C3
extern unsigned char DialogBlue;

// address: 0x8012C3C4
extern unsigned char DialogTRed;

// address: 0x8012C3C5
extern unsigned char DialogTGreen;

// address: 0x8012C3C6
extern unsigned char DialogTBlue;

// address: 0x8012C3C8
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x8012C3CC
extern int DialogBackGfx;

// address: 0x8012C3D0
extern int DialogBackW;

// address: 0x8012C3D4
extern int DialogBackH;

// address: 0x8012C3D8
extern int DialogBorderGfx;

// address: 0x8012C3DC
extern int DialogBorderTLW;

// address: 0x8012C3E0
extern int DialogBorderTLH;

// address: 0x8012C3E4
extern int DialogBorderTRW;

// address: 0x8012C3E8
extern int DialogBorderTRH;

// address: 0x8012C3EC
extern int DialogBorderBLW;

// address: 0x8012C3F0
extern int DialogBorderBLH;

// address: 0x8012C3F4
extern int DialogBorderBRW;

// address: 0x8012C3F8
extern int DialogBorderBRH;

// address: 0x8012C3FC
extern int DialogBorderTW;

// address: 0x8012C400
extern int DialogBorderTH;

// address: 0x8012C404
extern int DialogBorderBW;

// address: 0x8012C408
extern int DialogBorderBH;

// address: 0x8012C40C
extern int DialogBorderLW;

// address: 0x8012C410
extern int DialogBorderLH;

// address: 0x8012C414
extern int DialogBorderRW;

// address: 0x8012C418
extern int DialogBorderRH;

// address: 0x8012C41C
extern int DialogBevelGfx;

// address: 0x8012C420
extern int DialogBevelCW;

// address: 0x8012C424
extern int DialogBevelCH;

// address: 0x8012C428
extern int DialogBevelLRW;

// address: 0x8012C42C
extern int DialogBevelLRH;

// address: 0x8012C430
extern int DialogBevelUDW;

// address: 0x8012C434
extern int DialogBevelUDH;

// address: 0x8012C438
extern int MY_DialogOTpos;

// address: 0x8012DB44
static unsigned char DialogGBack;

// address: 0x8012DB45
static char GShadeX;

// address: 0x8012DB46
static char GShadeY;

// address: 0x8012DB4C
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800AB34C
// size: 0x70
extern int Cxy[28];

// address: 0x8012C3BB
extern unsigned char BORDERR;

// address: 0x8012C3BC
extern unsigned char BORDERG;

// address: 0x8012C3BD
extern unsigned char BORDERB;

// address: 0x8012C3BE
extern unsigned char BACKR;

// address: 0x8012C3BF
extern unsigned char BACKG;

// address: 0x8012C3C0
extern unsigned char BACKB;

// address: 0x800AB30C
// size: 0x40
static char GShadeTab[64];

// address: 0x8012C3B9
static char GShadePX;

// address: 0x8012C3BA
static char GShadePY;

// address: 0x8012C445
extern unsigned char PlayDemoFlag;

// address: 0x8012E098
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x8012E0C8
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x8012DB54
static int blockr;

// address: 0x8012DB58
static int blockg;

// address: 0x8012DB5C
static int blockb;

// address: 0x8012DB60
static int InfraFlag;

// address: 0x8012DB64
static unsigned char blank_bit;

// address: 0x8012C459
extern unsigned char P1ObjSelCount;

// address: 0x8012C45A
extern unsigned char P2ObjSelCount;

// address: 0x8012C45B
extern unsigned char P12ObjSelCount;

// address: 0x8012C45C
extern unsigned char P1ItemSelCount;

// address: 0x8012C45D
extern unsigned char P2ItemSelCount;

// address: 0x8012C45E
extern unsigned char P12ItemSelCount;

// address: 0x8012C45F
extern unsigned char P1MonstSelCount;

// address: 0x8012C460
extern unsigned char P2MonstSelCount;

// address: 0x8012C461
extern unsigned char P12MonstSelCount;

// address: 0x8012C462
static unsigned short P1ObjSelCol;

// address: 0x8012C464
static unsigned short P2ObjSelCol;

// address: 0x8012C466
static unsigned short P12ObjSelCol;

// address: 0x8012C468
static unsigned short P1ItemSelCol;

// address: 0x8012C46A
static unsigned short P2ItemSelCol;

// address: 0x8012C46C
static unsigned short P12ItemSelCol;

// address: 0x8012C46E
static unsigned short P1MonstSelCol;

// address: 0x8012C470
static unsigned short P2MonstSelCol;

// address: 0x8012C472
static unsigned short P12MonstSelCol;

// address: 0x8012C474
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x800AB3BC
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x8012C490
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x80121C04
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x8012E0F8
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x8012E108
// size: 0x10
static struct Overlay PregameOver;

// address: 0x8012E118
// size: 0x10
static struct Overlay GameOver;

// address: 0x8012E128
// size: 0x10
static struct Overlay FmvOver;

// address: 0x8012DB68
static int OWorldX;

// address: 0x8012DB6C
static int OWorldY;

// address: 0x8012DB70
static int WWorldX;

// address: 0x8012DB74
static int WWorldY;

// address: 0x80121C80
// size: 0x20
static short TxyAdd[16];

// address: 0x8012C4B4
extern int GXAdj2;

// address: 0x8012DB78
static int TimePerFrame;

// address: 0x8012DB7C
static int CpuStart;

// address: 0x8012DB80
static int CpuTime;

// address: 0x8012DB84
static int DrawTime;

// address: 0x8012DB88
static int DrawStart;

// address: 0x8012DB8C
static int LastCpuTime;

// address: 0x8012DB90
static int LastDrawTime;

// address: 0x8012DB94
static int DrawArea;

// address: 0x8012C4BC
extern bool ProfOn;

// address: 0x800AB3D0
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x80121DDC
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800AB3E4
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800AB438
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800AB48C
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800AB4E0
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800AB534
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x8012C4E4
extern int hof;

// address: 0x8012C4E8
extern int mof;

// address: 0x800AB5FC
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x800AB6FC
// size: 0x12000
extern unsigned long STR_Buffer[18432];

// address: 0x8012C51C
extern unsigned long Time;

// address: 0x8012C520
extern bool CDWAIT;

// address: 0x800BD6FC
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x800BD73C
// size: 0x80
extern struct SFXHDR STRSave;

// address: 0x8012DB98
static bool SavePause;

// address: 0x8012C4F5
extern char NoActiveStreams;

// address: 0x8012C4F8
static bool STRInit;

// address: 0x8012C4FC
static int frame_rate;

// address: 0x8012C500
static unsigned char CDAngle;

// address: 0x8012C544
extern char SFXNotPlayed;

// address: 0x8012C545
extern char SFXNotInBank;

// address: 0x8012E138
// size: 0x108
static char spu_management[264];

// address: 0x8012E248
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x8012DBA0
static unsigned short NoSfx;

// address: 0x8012E268
// size: 0x30
static unsigned short CHStatus[24];

// address: 0x8012C530
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x8012C534
static long OffsetHandle;

// address: 0x8012C538
static int BankBase;

// address: 0x8012C53C
static unsigned char SPU_Done;

// address: 0x80122184
// size: 0x74
static unsigned short SFXRemapTab[58];

// address: 0x8012C540
static int NoSNDRemaps;

// address: 0x800BD7BC
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x8012222C
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x8012C588
extern int demo_level;

// address: 0x8012E298
// size: 0x20
static int buff[8];

// address: 0x8012C58C
extern int old_val;

// address: 0x8012C590
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x8012C594
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x8012C598
// size: 0x5C
extern struct TASK *tonys;

// address: 0x8012C570
extern int demo_load;

// address: 0x8012C574
extern int demo_record_load;

// address: 0x8012C578
extern int level_record;

// address: 0x8012C57C
extern char demo_fade_finished;

// address: 0x8012C57F
extern unsigned char demo_which;

// address: 0x800BD9E8
// size: 0x14
extern unsigned long demolevel[5];

// address: 0x8012C57D
extern unsigned char quest_cheat_num;

// address: 0x8012C57E
extern unsigned char cheat_quest_flag;

// address: 0x8012C56C
extern int moo_moo;

// address: 0x800BD9A8
// size: 0x40
extern unsigned long quest_seed[16];

// address: 0x8012C580
extern unsigned char demo_flash;

// address: 0x8012C584
extern int tonys_Task;

// address: 0x8012C6F4
extern bool DoShowPanel;

// address: 0x8012C6F8
extern bool DoDrawBg;

// address: 0x8012DBA4
static bool GlueFinished;

// address: 0x8012DBA8
static bool DoHomingScroll;

// address: 0x8012DBAC
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x8012DBB0
static int CurrentMonsterList;

// address: 0x8012C5A5
extern char started_grtask;

// address: 0x800BD9FC
// size: 0x3CC
extern struct PInf PlayerInfo[81];

// address: 0x8012C6FC
// size: 0x4
static char ArmourChar[4];

// address: 0x80122320
// size: 0xA
static char WepChar[10];

// address: 0x8012C700
// size: 0x4
static char CharChar[4];

// address: 0x8012DBB4
static char ctrl_select_line;

// address: 0x8012DBB5
static char ctrl_select_side;

// address: 0x8012DBB6
static char ckeyheld;

// address: 0x8012DBBC
// size: 0x8
static struct RECT CtrlRect;

// address: 0x8012C714
extern unsigned char ctrlflag;

// address: 0x800BDE70
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800BDDC8
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x8012C710
static int toppos;

// address: 0x8012E2B8
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800BDFA0
// size: 0x98
static int controller_defaults[2][19];

// address: 0x8012C780
extern int gr_scrxoff;

// address: 0x8012C784
extern int gr_scryoff;

// address: 0x8012C78C
extern unsigned short water_clut;

// address: 0x8012C78F
extern char visible_level;

// address: 0x8012C77D
extern char last_type;

// address: 0x8012C791
extern char daylight;

// address: 0x8012C78E
extern char cow_in_sight;

// address: 0x8012C788
extern unsigned int water_count;

// address: 0x8012C790
extern unsigned char lastrnd;

// address: 0x8012C794
static int call_clock;

// address: 0x8012C7A4
extern int TitleAnimCount;

// address: 0x8012C7A8
static int flametick;

// address: 0x800BE038
// size: 0x18
static int ypos[6];

// address: 0x800BE050
// size: 0x18
static int frmlist[6];

// address: 0x800BE068
// size: 0x18
static int xoff[6];

// address: 0x8012C7AC
static int startx;

// address: 0x8012C7B0
extern bool hellomumflag;

// address: 0x800BE0A0
// size: 0x90
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x8012E2C8
// size: 0x240
static struct Particle PartArray[16];

// address: 0x8012DBC4
static int partOtPos;

// address: 0x8012C7D0
extern int SetParticle;

// address: 0x8012C7D4
static int p1partexecnum;

// address: 0x8012C7D8
static int p2partexecnum;

// address: 0x800BE080
// size: 0x20
static int JumpArray[8];

// address: 0x8012C7DC
static int partjumpflag;

// address: 0x8012C7E0
static int partglowflag;

// address: 0x8012C7E4
static int partcolour;

// address: 0x8012C7E8
static bool anyfuckingmenus;

// address: 0x800BE130
// size: 0x30
extern struct Spell_Target SplTarget[2];

// address: 0x8012C809
extern unsigned char select_flag;

// address: 0x8012DBC8
// size: 0x8
static struct RECT SelectRect;

// address: 0x8012DBD0
static char item_select;

// address: 0x8012C80C
// size: 0x2
extern char QSpell[2];

// address: 0x8012C810
// size: 0x2
extern char _spltotype[2];

// address: 0x8012C814
// size: 0x8
extern bool force_attack[2];

// address: 0x8012C7FC
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x8012E508
// size: 0x10
static struct Dialog SelectBack;

// address: 0x8012C800
// size: 0x4
extern char mana_order[4];

// address: 0x8012C804
// size: 0x4
extern char health_order[4];

// address: 0x8012C808
extern unsigned char birdcheck;

// address: 0x8012E518
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x8012DBD4
static unsigned short progress;

// address: 0x801224AC
// size: 0x2A
static unsigned short Level2CutScreen[21];

// address: 0x8012E540
// size: 0x78
static struct CScreen Scr;

// address: 0x8012C834
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x8012C838
static bool GameLoading;

// address: 0x8012E5C0
// size: 0x10
static struct Dialog LBack;

// address: 0x8012C854
extern unsigned int card_ev0;

// address: 0x8012C858
extern unsigned int card_ev1;

// address: 0x8012C85C
extern unsigned int card_ev2;

// address: 0x8012C860
extern unsigned int card_ev3;

// address: 0x8012C864
extern unsigned int card_ev10;

// address: 0x8012C868
extern unsigned int card_ev11;

// address: 0x8012C86C
extern unsigned int card_ev12;

// address: 0x8012C870
extern unsigned int card_ev13;

// address: 0x8012C874
// size: 0x8
extern int card_dirty[2];

// address: 0x8012C87C
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8012DBD8
static int card_event;

// address: 0x8012C850
extern void (*mem_card_event_handler)();

// address: 0x8012C848
extern bool MemCardActive;

// address: 0x8012C84C
static int never_hooked_events;

// address: 0x8012C8D4
extern unsigned long MasterVol;

// address: 0x8012C8D8
extern unsigned long MusicVol;

// address: 0x8012C8DC
extern unsigned long SoundVol;

// address: 0x8012C8E0
extern unsigned long VideoVol;

// address: 0x8012C8E4
extern unsigned long SpeechVol;

// address: 0x8012DBDC
// size: 0x6C
static struct TextDat *Slider;

// address: 0x8012DBE0
static int sw;

// address: 0x8012DBE4
static int sx;

// address: 0x8012DBE8
static int sy;

// address: 0x8012DBEC
static unsigned char Adjust;

// address: 0x8012DBED
static unsigned char qspin;

// address: 0x8012DBEE
static unsigned char lqspin;

// address: 0x8012DBF0
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x8012DBF4
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8012DBF8
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x8012C8E8
extern int save_blocks;

// address: 0x8012C8EC
extern char *Savefilename;

// address: 0x8012C8F0
extern int ReturnMenu;

// address: 0x8012DBFC
// size: 0x8
static struct RECT ORect;

// address: 0x8012DC04
// size: 0x8
static char *McState[2];

// address: 0x8012C8F4
extern int they_pressed;

// address: 0x8012DC0C
// size: 0x8
static unsigned char Seed[8];

// address: 0x8012C8AC
extern bool optionsflag;

// address: 0x8012C8A0
extern int cmenu;

// address: 0x8012C8B8
extern int options_pad;

// address: 0x8012C8A8
extern bool allspellsflag;

// address: 0x800BEBD0
// size: 0x80
extern short Circle[64];

// address: 0x8012C88C
extern bool goldcheat;

// address: 0x8012C8BC
extern int OptionsSeed;

// address: 0x8012C8C0
extern bool OptionsSetSeed;

// address: 0x8012C890
extern unsigned char Qfromoptions;

// address: 0x8012C894
static int Spacing;

// address: 0x8012C898
static int cs;

// address: 0x8012C89C
static int lastcs;

// address: 0x8012C8A4
static bool MemcardOverlay;

// address: 0x8012C8B0
extern int saveflag;

// address: 0x8012C8B4
extern int loadflag;

// address: 0x800BE160
// size: 0xC0
extern struct OMENUITEM MainMenu[8];

// address: 0x800BE220
// size: 0xF0
extern struct OMENUITEM GameMenu[10];

// address: 0x800BE310
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800BE3A0
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800BE448
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800BE4F0
// size: 0x60
extern struct OMENUITEM QuitMenu[4];

// address: 0x800BE550
// size: 0xA8
extern struct OMENUITEM MemcardMenu[7];

// address: 0x800BE5F8
// size: 0x60
extern struct OMENUITEM MemcardLoadGameMenu[4];

// address: 0x800BE658
// size: 0x60
extern struct OMENUITEM MemcardSaveGameMenu[4];

// address: 0x800BE6B8
// size: 0x60
extern struct OMENUITEM MemcardSaveOptionsMenu[4];

// address: 0x800BE718
// size: 0x60
extern struct OMENUITEM MemcardLoadOptionsMenu[4];

// address: 0x800BE778
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800BE7D8
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800BE880
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800BE928
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800BE988
// size: 0xF0
extern struct OMENUITEM CheatMenu[10];

// address: 0x800BEA78
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800BEAA8
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x800BEAF0
// size: 0x48
extern struct OMENUITEM SeedMenu[3];

// address: 0x800BEB38
// size: 0x98
extern struct OMENULIST MenuList[19];

// address: 0x8012C8C4
static bool debounce;

// address: 0x8012C8C8
static unsigned char KeyPos;

// address: 0x800BEC50
// size: 0x14
static unsigned short KeyTab[10];

// address: 0x8012C8CC
static int SeedPos;

// address: 0x800BEC64
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x8012DC14
// size: 0x8
static int last_seenx[2];

// address: 0x8012DC1C
// size: 0x8
static int last_seeny[2];

// address: 0x8012C901
extern char hop_height;

// address: 0x8012C904
// size: 0x8
static struct Perch perches[4];

// address: 0x800BEDE4
// size: 0x40
extern struct FMVDAT FmvTab[8];

// address: 0x8012C918
static int CurMons;

// address: 0x8012C91C
static int Frame;

// address: 0x8012C920
static int Action;

// address: 0x8012C924
static int Dir;

// address: 0x8012C988
extern int indsize;

// address: 0x8012C968
static unsigned char *kanjbuff;

// address: 0x8012C96C
// size: 0x4
static struct kindexS *kindex;

// address: 0x8012C970
static long hndKanjBuff;

// address: 0x8012C974
static long hndKanjIndex;

// address: 0x8012C9CC
extern int FeBackX;

// address: 0x8012C9D0
extern int FeBackY;

// address: 0x8012C9D4
extern int FeBackW;

// address: 0x8012C9D8
extern int FeBackH;

// address: 0x8012C9DC
extern unsigned char FeFlag;

// address: 0x800BF324
// size: 0x780
extern struct FeStruct FeBuffer[80];

// address: 0x8012C9E0
extern int FePlayerNo;

// address: 0x8012DC24
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x8012C9E4
extern int FeBufferCount;

// address: 0x8012C9E8
extern int FeNoOfPlayers;

// address: 0x8012C9EC
// size: 0x8
extern int FeChrClass[2];

// address: 0x800BFAA4
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x8012C9F4
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x8012C9F8
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x8012C9FC
extern unsigned long FeCount;

// address: 0x8012CA00
extern int fileselect;

// address: 0x8012CA04
extern int BookMenu;

// address: 0x8012CA08
extern int FeAttractMode;

// address: 0x8012CA0C
extern int FMVPress;

// address: 0x8012C998
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x8012C9A0
// size: 0x8
extern bool LoadedChar[2];

// address: 0x8012C99C
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x8012C9A8
extern unsigned char FeIsAVirgin;

// address: 0x8012C9AC
extern int FeMenuDelay;

// address: 0x800BEE24
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800BEE40
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800BEE5C
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800BEE78
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800BEE94
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800BEEB0
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800BEECC
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800BEEE8
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800BEF04
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800BEF20
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800BEF3C
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800BEF58
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800BEF74
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800BEF90
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x8012C9B0
static int fadeval;

// address: 0x800BEFAC
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800BF024
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800BF06C
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800BF0E4
// size: 0x46
extern unsigned char FeNameEngMenuTable[70];

// address: 0x800BF12C
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800BF174
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800BF1D4
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800BF234
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800BF2AC
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x8012C9BC
static bool DrawBackOn;

// address: 0x8012C9C0
extern unsigned long AttractTitleDelay;

// address: 0x8012C9C4
extern unsigned long AttractMainDelay;

// address: 0x8012C9C8
extern int FMVEndPad;

// address: 0x8012CA40
extern int InCredits;

// address: 0x8012CA44
extern int CreditTitleNo;

// address: 0x8012CA48
extern int CreditSubTitleNo;

// address: 0x8012CA5C
// size: 0x8
extern int card_status[2];

// address: 0x8012CA64
// size: 0x8
extern int card_usable[2];

// address: 0x8012CA6C
// size: 0x8
extern int card_files[2];

// address: 0x8012CA74
// size: 0x8
extern int card_changed[2];

// address: 0x8012CAB8
extern int AlertTxt;

// address: 0x8012CABC
extern int current_card;

// address: 0x8012CAC0
extern int LoadType;

// address: 0x8012CAC4
extern int McMenuPos;

// address: 0x8012CAC8
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x8012CAB4
extern bool fileinfoflag;

// address: 0x8012CA88
extern char *DiabloGameFile;

// address: 0x8012CA8C
extern char *DiabloOptionFile;

// address: 0x8012CAAC
// size: 0x8
extern char *McState_addr_8012CAAC[2];

// address: 0x8012CBA0
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x8012CBA8
extern int mdec_audio_sec;

// address: 0x8012CBAC
extern int mdec_audio_offs;

// address: 0x8012CBB0
extern int mdec_audio_playing;

// address: 0x8012CBB4
extern int mdec_audio_rate_shift;

// address: 0x8012CBB8
// size: 0x8
extern char *vlcbuf[2];

// address: 0x8012CBC0
extern int slice_size;

// address: 0x8012CBC4
// size: 0x8
extern struct RECT slice;

// address: 0x8012CBCC
extern int slice_inc;

// address: 0x8012CBD0
extern int area_pw;

// address: 0x8012CBD4
extern int area_ph;

// address: 0x8012CBD8
// size: 0x2
extern char tmdc_pol_dirty[2];

// address: 0x8012CBDC
// size: 0x8
extern int num_pol[2];

// address: 0x8012CBE4
extern int mdec_cx;

// address: 0x8012CBE8
extern int mdec_cy;

// address: 0x8012CBEC
extern int mdec_w;

// address: 0x8012CBF0
extern int mdec_h;

// address: 0x8012CBF4
// size: 0x8
extern int mdec_pw[2];

// address: 0x8012CBFC
// size: 0x8
extern int mdec_ph[2];

// address: 0x8012CC04
extern int move_x;

// address: 0x8012CC08
extern int move_y;

// address: 0x8012CC0C
extern int move_scale;

// address: 0x8012CC10
extern int stream_frames;

// address: 0x8012CC14
extern int last_stream_frame;

// address: 0x8012CC18
extern int mdec_framecount;

// address: 0x8012CC1C
extern int mdec_speed;

// address: 0x8012CC20
extern int mdec_stream_starting;

// address: 0x8012CC24
extern int mdec_last_frame;

// address: 0x8012CC28
extern int mdec_sectors_per_frame;

// address: 0x8012CC2C
extern unsigned short *vlctab;

// address: 0x8012CC30
extern unsigned char *mdc_buftop;

// address: 0x8012CC34
extern unsigned char *mdc_bufstart;

// address: 0x8012CC38
extern int mdc_bufleft;

// address: 0x8012CC3C
extern int mdc_buftotal;

// address: 0x8012CC40
extern int ordertab_length;

// address: 0x8012CC44
extern int time_in_frames;

// address: 0x8012CC48
extern int stream_chunksize;

// address: 0x8012CC4C
extern int stream_bufsize;

// address: 0x8012CC50
extern int stream_subsec;

// address: 0x8012CC54
extern int stream_secnum;

// address: 0x8012CC58
extern int stream_last_sector;

// address: 0x8012CC5C
extern int stream_startsec;

// address: 0x8012CC60
extern int stream_opened;

// address: 0x8012CC64
extern int stream_last_chunk;

// address: 0x8012CC68
extern int stream_got_chunks;

// address: 0x8012CC6C
extern int last_sector;

// address: 0x8012CC70
extern int cdstream_resetsec;

// address: 0x8012CC74
extern int last_handler_event;

// address: 0x8012CB40
extern bool user_start;

// address: 0x8012CAD8
extern unsigned char *vlc_tab;

// address: 0x8012CADC
extern unsigned char *vlc_buf;

// address: 0x8012CAE0
extern unsigned char *img_buf;

// address: 0x8012CAE4
extern int vbuf;

// address: 0x8012CAE8
extern int last_fn;

// address: 0x8012CAEC
extern int last_mdc;

// address: 0x8012CAF0
extern int slnum;

// address: 0x8012CAF4
extern int slices_to_do;

// address: 0x8012CAF8
extern int mbuf;

// address: 0x8012CAFC
extern int mfn;

// address: 0x8012CB00
extern int last_move_mbuf;

// address: 0x8012CB04
extern int move_request;

// address: 0x8012CB08
extern int mdec_scale;

// address: 0x8012CB0C
extern int do_brightness;

// address: 0x8012CB10
extern int frame_decoded;

// address: 0x8012CB14
extern int mdec_streaming;

// address: 0x8012CB18
extern int mdec_stream_size;

// address: 0x8012CB1C
extern int first_stream_frame;

// address: 0x8012CB20
extern int stream_frames_played;

// address: 0x8012CB24
extern int num_mdcs;

// address: 0x8012CB28
extern int mdec_head;

// address: 0x8012CB2C
extern int mdec_tail;

// address: 0x8012CB30
extern int mdec_waiting_tail;

// address: 0x8012CB34
extern int mdecs_queued;

// address: 0x8012CB38
extern int mdecs_waiting;

// address: 0x8012CB3C
extern int sfx_volume;

// address: 0x8012CB44
static unsigned char DiabEnd;

// address: 0x8012CB48
extern int stream_chunks_in;

// address: 0x8012CB4C
extern int stream_chunks_total;

// address: 0x8012CB50
extern int stream_in;

// address: 0x8012CB54
extern int stream_out;

// address: 0x8012CB58
extern int stream_stalled;

// address: 0x8012CB5C
extern int stream_ending;

// address: 0x8012CB60
extern int stream_open;

// address: 0x8012CB64
extern int stream_handler_installed;

// address: 0x8012CB68
extern int stream_chunks_borrowed;

// address: 0x8012CB6C
extern int _get_count;

// address: 0x8012CB70
extern int _discard_count;

// address: 0x8012CB74
// size: 0x5C
extern struct TASK *CDTask;

// address: 0x8012CB78
// size: 0x98
static struct cdstreamstruct *CDStream;

// address: 0x8012CB7C
extern int cdready_calls;

// address: 0x8012CB80
extern int cdready_errors;

// address: 0x8012CB84
extern int cdready_out_of_sync;

// address: 0x8012CB88
extern int cdstream_resetting;

// address: 0x8012CB8C
extern int sector_dma;

// address: 0x8012CB90
extern int sector_dma_in;

// address: 0x8012CB94
extern unsigned long *chkaddr;

// address: 0x8012CB98
// size: 0x8
extern struct chunkhdrstruct *chunk;

// address: 0x8012CB9C
extern int first_handler_event;

// address: 0x8012CCF4
extern unsigned char *pStatusPanel;

// address: 0x8012CCF8
extern unsigned char *pGBoxBuff;

// address: 0x8012CCFC
extern unsigned char dropGoldFlag;

// address: 0x8012CD00
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800BFFBC
// size: 0x200
extern char _infostr[256][2];

// address: 0x8012CD04
// size: 0x2
extern char _infoclr[2];

// address: 0x800C01BC
// size: 0x100
extern char tempstr[256];

// address: 0x8012CD06
extern unsigned char drawhpflag;

// address: 0x8012CD07
extern unsigned char drawmanaflag;

// address: 0x8012CD08
extern unsigned char chrflag;

// address: 0x8012CD09
extern unsigned char drawbtnflag;

// address: 0x8012CD0A
extern unsigned char panbtndown;

// address: 0x8012CD0B
extern unsigned char panelflag;

// address: 0x8012CD0C
extern unsigned char chrbtndown;

// address: 0x8012CD0D
extern unsigned char lvlbtndown;

// address: 0x8012CD0E
extern unsigned char sbookflag;

// address: 0x8012CD0F
extern unsigned char talkflag;

// address: 0x8012CD10
extern int dropGoldValue;

// address: 0x8012CD14
extern int initialDropGoldValue;

// address: 0x8012CD18
extern int initialDropGoldIndex;

// address: 0x8012CD1C
extern unsigned char *pPanelButtons;

// address: 0x8012CD20
extern unsigned char *pPanelText;

// address: 0x8012CD24
extern unsigned char *pManaBuff;

// address: 0x8012CD28
extern unsigned char *pLifeBuff;

// address: 0x8012CD2C
extern unsigned char *pChrPanel;

// address: 0x8012CD30
extern unsigned char *pChrButtons;

// address: 0x8012CD34
extern unsigned char *pSpellCels;

// address: 0x8012E610
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x8012EA10
// size: 0x40
static int _pstrjust[8][2];

// address: 0x8012DC34
// size: 0x8
static int _pnumlines[2];

// address: 0x8012CD38
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x8012CD3C
// size: 0x8
extern struct RECT CSRect;

// address: 0x8012DC44
// size: 0x8
static int _pSpell[2];

// address: 0x8012DC4C
// size: 0x8
static int _pSplType[2];

// address: 0x8012CD44
extern int numpanbtns;

// address: 0x8012CD48
extern unsigned char *pDurIcons;

// address: 0x8012CD4C
extern unsigned char drawdurflag;

// address: 0x8012DC54
// size: 0x8
static unsigned char chrbtn[4][2];

// address: 0x8012CD4D
extern unsigned char chrbtnactive;

// address: 0x8012CD50
extern unsigned char *pSpellBkCel;

// address: 0x8012CD54
extern unsigned char *pSBkBtnCel;

// address: 0x8012CD58
extern unsigned char *pSBkIconCels;

// address: 0x8012CD5C
extern int sbooktab;

// address: 0x8012CD60
extern int cur_spel;

// address: 0x8012DC5C
static long talkofs;

// address: 0x8012EA60
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x8012DC60
static unsigned char sgbTalkSavePos;

// address: 0x8012DC61
static unsigned char sgbNextTalkSave;

// address: 0x8012DC62
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x8012DC64
static unsigned char *pTalkPanel;

// address: 0x8012DC68
static unsigned char *pMultiBtns;

// address: 0x8012DC6C
static unsigned char *pTalkBtns;

// address: 0x8012DC70
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x800BFAD0
// size: 0x25
extern char SpellITbl[37];

// address: 0x8012CC81
extern unsigned char DrawLevelUpFlag;

// address: 0x8012CCA8
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x8012CCA4
extern unsigned char spspelstate;

// address: 0x8012CCC4
extern bool initchr;

// address: 0x8012CC84
static int SPLICONNO;

// address: 0x8012CC88
static int SPLICONY;

// address: 0x8012DC3C
static int SPLICONRIGHT;

// address: 0x8012CC8C
static int scx;

// address: 0x8012CC90
static int scy;

// address: 0x8012CC94
static int scx1;

// address: 0x8012CC98
static int scy1;

// address: 0x8012CC9C
static int scx2;

// address: 0x8012CCA0
static int scy2;

// address: 0x8012CCB0
extern char SpellCol;

// address: 0x800BFABC
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800BFAF8
// size: 0x64
extern int SpellPages[5][5];

// address: 0x8012CCB4
static int lus;

// address: 0x8012CCB8
static int CsNo;

// address: 0x8012CCBC
static char plusanim;

// address: 0x8012EA50
// size: 0x10
static struct Dialog CSBack;

// address: 0x8012CCC0
static int CS_XOFF;

// address: 0x800BFB5C
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x8012CCC8
extern int NoCSEntries;

// address: 0x8012CCCC
static int SPALOFF;

// address: 0x8012CCD0
static int paloffset1;

// address: 0x8012CCD4
static int paloffset2;

// address: 0x8012CCD8
static int paloffset3;

// address: 0x8012CCDC
static int paloffset4;

// address: 0x8012CCE0
static int pinc1;

// address: 0x8012CCE4
static int pinc2;

// address: 0x8012CCE8
static int pinc3;

// address: 0x8012CCEC
static int pinc4;

// address: 0x8012CD74
// size: 0x8
extern int _pcurs[2];

// address: 0x8012CD7C
extern int cursW;

// address: 0x8012CD80
extern int cursH;

// address: 0x8012CD84
extern int icursW;

// address: 0x8012CD88
extern int icursH;

// address: 0x8012CD8C
extern int icursW28;

// address: 0x8012CD90
extern int icursH28;

// address: 0x8012CD94
extern int cursmx;

// address: 0x8012CD98
extern int cursmy;

// address: 0x8012CD9C
// size: 0x8
extern int _pcursmonst[2];

// address: 0x8012CDA4
// size: 0x2
extern char _pcursobj[2];

// address: 0x8012CDA8
// size: 0x2
extern char _pcursitem[2];

// address: 0x8012CDAC
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x8012CDB0
// size: 0x2
extern char _pcursplr[2];

// address: 0x8012CD70
extern int sel_data;

// address: 0x800C02BC
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x8012CDB4
extern int spurtndx;

// address: 0x8012CDB8
extern int stonendx;

// address: 0x8012CDBC
extern unsigned char *pSquareCel;

// address: 0x8012CDFC
extern unsigned long ghInst;

// address: 0x8012CE00
extern unsigned char svgamode;

// address: 0x8012CE04
extern int MouseX;

// address: 0x8012CE08
extern int MouseY;

// address: 0x8012CE0C
extern long gv1;

// address: 0x8012CE10
extern long gv2;

// address: 0x8012CE14
extern long gv3;

// address: 0x8012CE18
extern long gv4;

// address: 0x8012CE1C
extern long gv5;

// address: 0x8012CE20
extern unsigned char gbProcessPlayers;

// address: 0x800C0430
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800C0458
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800C049C
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x8012CE21
extern unsigned char gbDoEnding;

// address: 0x8012CE22
extern unsigned char gbRunGame;

// address: 0x8012CE23
extern unsigned char gbRunGameResult;

// address: 0x8012CE24
extern unsigned char gbGameLoopStartup;

// address: 0x8012EAB0
// size: 0x44
static int glEndSeed[17];

// address: 0x8012EB00
// size: 0x44
static int glMid1Seed[17];

// address: 0x8012EB50
// size: 0x44
static int glMid2Seed[17];

// address: 0x8012EBA0
// size: 0x44
static int glMid3Seed[17];

// address: 0x8012DC74
static long *sg_previousFilter;

// address: 0x800C04E0
// size: 0x30
extern int CreateEnv[12];

// address: 0x8012CE28
extern int Passedlvldir;

// address: 0x8012CE2C
extern unsigned char *TempStack;

// address: 0x8012CDCC
extern unsigned long ghMainWnd;

// address: 0x8012CDD0
extern unsigned char fullscreen;

// address: 0x8012CDD4
extern int force_redraw;

// address: 0x8012CDE8
extern unsigned char PauseMode;

// address: 0x8012CDE9
extern unsigned char FriendlyMode;

// address: 0x8012CDD9
extern unsigned char visiondebug;

// address: 0x8012CDDB
extern unsigned char light4flag;

// address: 0x8012CDDC
extern unsigned char leveldebug;

// address: 0x8012CDDD
extern unsigned char monstdebug;

// address: 0x8012CDE4
extern int debugmonsttypes;

// address: 0x8012CDD8
static unsigned char cineflag;

// address: 0x8012CDDA
extern unsigned char scrollflag;

// address: 0x8012CDDE
extern unsigned char trigdebug;

// address: 0x8012CDE0
extern int setseed;

// address: 0x8012CDEC
static int sgnTimeoutCurs;

// address: 0x8012CDF0
extern unsigned char sgbMouseDown;

// address: 0x800C0BAC
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x8012CE44
extern int numtowners;

// address: 0x8012CE48
extern unsigned char storeflag;

// address: 0x8012CE49
extern unsigned char boyloadflag;

// address: 0x8012CE4A
extern unsigned char bannerflag;

// address: 0x8012CE4C
extern unsigned char *pCowCels;

// address: 0x8012DC78
static unsigned long sgdwCowClicks;

// address: 0x8012DC7C
static int sgnCowMsg;

// address: 0x800C08EC
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x8012CE3C
extern unsigned long CowPlaying;

// address: 0x800C0510
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800C0888
// size: 0xC
extern int TownCowX[3];

// address: 0x800C0894
// size: 0xC
extern int TownCowY[3];

// address: 0x800C08A0
// size: 0xC
extern int TownCowDir[3];

// address: 0x800C08AC
// size: 0x20
extern int cowoffx[8];

// address: 0x800C08CC
// size: 0x20
extern int cowoffy[8];

// address: 0x8012CE64
extern int sfxdelay;

// address: 0x8012CE68
extern int sfxdnum;

// address: 0x8012CE5C
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800C19AC
// size: 0xF78
extern struct TSFX sgSFX[990];

// address: 0x8012CE60
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x8012CE6C
extern long orgseed;

// address: 0x8012DC80
static long sglGameSeed;

// address: 0x8012CE70
extern int SeedCount;

// address: 0x8012DC84
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8012DC88
static int sgnWidth;

// address: 0x8012CE7E
extern char msgflag;

// address: 0x8012CE7F
extern char msgdelay;

// address: 0x800C29D4
// size: 0x50
extern char msgtable[80];

// address: 0x800C2924
// size: 0xB0
extern int MsgStrings[44];

// address: 0x8012CE7D
extern char msgcnt;

// address: 0x8012DC8C
static unsigned long sgdwProgress;

// address: 0x8012DC90
static unsigned long sgdwXY;

// address: 0x800C2A24
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x80122C10
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x80123FB0
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x80124CD0
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x80125BD0
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800C2C38
// size: 0x4C00
extern struct ItemStruct item[128];

// address: 0x800C7838
// size: 0x7F
extern char itemactive[127];

// address: 0x800C78B8
// size: 0x7F
extern char itemavail[127];

// address: 0x800C7938
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8012CEB8
extern unsigned char uitemflag;

// address: 0x8012DC94
static int tem;

// address: 0x8012EBE8
// size: 0x98
static struct ItemStruct curruitem;

// address: 0x8012EC88
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x8012CEBC
extern int ScrollType;

// address: 0x800C79B8
// size: 0x40
extern char ItemStr[64];

// address: 0x800C79F8
// size: 0x40
extern char SufStr[64];

// address: 0x8012CE98
extern long numitems;

// address: 0x8012CE9C
extern int gnNumGetRecords;

// address: 0x800C2B94
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800C2AC4
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x801279F8
// size: 0x40
extern short SinTab[32];

// address: 0x80127A38
// size: 0x46
static short Item2Frm[35];

// address: 0x800C2B70
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x8012CEA0
extern int *ItemAnimSnds;

// address: 0x8012CEA4
extern int idoppely;

// address: 0x8012CEA8
extern int ScrollFlag;

// address: 0x800C2C20
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800C87E4
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800C8924
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x8012CED0
extern int numlights;

// address: 0x8012CED4
extern char lightmax;

// address: 0x800C894C
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x8012CED8
extern int numvision;

// address: 0x8012CEDC
extern unsigned char dovision;

// address: 0x8012CEE0
extern int visionid;

// address: 0x8012DC98
static int disp_mask;

// address: 0x8012DC9C
static int weird;

// address: 0x8012DCA0
static int disp_tab_r;

// address: 0x8012DCA4
static int dispy_r;

// address: 0x8012DCA8
static int disp_tab_g;

// address: 0x8012DCAC
static int dispy_g;

// address: 0x8012DCB0
static int disp_tab_b;

// address: 0x8012DCB4
static int dispy_b;

// address: 0x8012DCB8
static int radius;

// address: 0x8012DCBC
static int bright;

// address: 0x8012EC98
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x8012CEC0
extern int lightflag;

// address: 0x800C84F8
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800C87AC
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800C7A38
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x8012CEC4
extern int restore_r;

// address: 0x8012CEC8
extern int restore_g;

// address: 0x8012CECC
extern int restore_b;

// address: 0x800C87C4
// size: 0x10
static char radius_tab[16];

// address: 0x800C87D4
// size: 0x10
static char bright_tab[16];

// address: 0x8012CF01
extern unsigned char qtextflag;

// address: 0x8012CF04
extern int qtextSpd;

// address: 0x8012DCC0
static unsigned char *pMedTextCels;

// address: 0x8012DCC4
static unsigned char *pTextBoxCels;

// address: 0x8012DCC8
static char *qtextptr;

// address: 0x8012DCCC
static int qtexty;

// address: 0x8012DCD0
static unsigned long qtextDelay;

// address: 0x8012DCD4
static unsigned long sgLastScroll;

// address: 0x8012DCD8
static unsigned long scrolltexty;

// address: 0x8012DCDC
static long sglMusicVolumeSave;

// address: 0x8012CEF0
static bool qtbodge;

// address: 0x800C8B0C
// size: 0x10
extern struct Dialog QBack;

// address: 0x800C8B1C
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800C928C
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800C917C
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800C9378
// size: 0x13D4C
extern struct DLevel sgLevels[21];

// address: 0x800DD0C4
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x8012ED18
// size: 0x16
static struct DJunk sgJunk;

// address: 0x8012DCE1
static unsigned char sgbRecvCmd;

// address: 0x8012DCE4
static unsigned long sgdwRecvOffset;

// address: 0x8012DCE8
static unsigned char sgbDeltaChunks;

// address: 0x8012DCE9
static unsigned char sgbDeltaChanged;

// address: 0x8012DCEC
static unsigned long sgdwOwnerWait;

// address: 0x8012DCF0
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x8012DCF4
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8012DCF8
static int sgnCurrMegaPlayer;

// address: 0x8012CF1D
extern unsigned char deltaload;

// address: 0x8012CF1E
extern unsigned char gbBufferMsgs;

// address: 0x8012CF20
extern unsigned long dwRecCount;

// address: 0x8012CF24
extern bool LevelOut;

// address: 0x8012CF3A
extern unsigned char gbMaxPlayers;

// address: 0x8012CF3B
extern unsigned char gbActivePlayers;

// address: 0x8012CF3C
extern unsigned char gbGameDestroyed;

// address: 0x8012CF3D
extern unsigned char gbDeltaSender;

// address: 0x8012CF3E
extern unsigned char gbSelectProvider;

// address: 0x8012CF3F
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x8012DCFC
static unsigned char sgbSentThisCycle;

// address: 0x8012DD00
static unsigned long sgdwGameLoops;

// address: 0x8012DD04
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x8012DD08
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x8012DD0C
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x8012DD14
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x8012DD1C
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x8012DD24
static unsigned char sgbTimeout;

// address: 0x8012DD28
static long sglTimeoutStart;

// address: 0x8012CF34
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x8012CF39
static unsigned char sgbNetInited;

// address: 0x800DE12C
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800DE2F0
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80128150
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800DEAD0
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x8012CF60
extern long numobjects;

// address: 0x800E00A4
// size: 0x7F
extern char objectactive[127];

// address: 0x800E0124
// size: 0x7F
extern char objectavail[127];

// address: 0x8012CF64
extern unsigned char InitObjFlag;

// address: 0x8012CF68
extern int trapid;

// address: 0x800E01A4
// size: 0x28
extern char ObjFileList[40];

// address: 0x8012CF6C
extern int trapdir;

// address: 0x8012CF70
extern int leverid;

// address: 0x8012CF58
extern int numobjfiles;

// address: 0x800DE9E8
// size: 0x20
extern int bxadd[8];

// address: 0x800DEA08
// size: 0x20
extern int byadd[8];

// address: 0x800DEA90
// size: 0x1A
extern char shrineavail[26];

// address: 0x800DEA28
// size: 0x68
extern int shrinestrs[26];

// address: 0x800DEAAC
// size: 0x24
extern int StoryBookName[9];

// address: 0x8012CF5C
extern int myscale;

// address: 0x8012CF84
extern unsigned char gbValidSaveFile;

// address: 0x8012CF80
extern bool DoLoadedChar;

// address: 0x800E03C4
// size: 0x4750
extern struct PlayerStruct plr[2];

// address: 0x8012CFA4
extern int myplr;

// address: 0x8012CFA8
extern int deathdelay;

// address: 0x8012CFAC
extern unsigned char deathflag;

// address: 0x8012CFAD
extern char light_rad;

// address: 0x8012CF9C
// size: 0x5
extern char light_level[5];

// address: 0x800E02BC
// size: 0x30
extern int MaxStats[4][3];

// address: 0x8012CF94
static int PlrStructSize;

// address: 0x8012CF98
static int ItemStructSize;

// address: 0x800E01CC
// size: 0x24
extern int plrxoff[9];

// address: 0x800E01F0
// size: 0x24
extern int plryoff[9];

// address: 0x800E0214
// size: 0x24
extern int plrxoff2[9];

// address: 0x800E0238
// size: 0x24
extern int plryoff2[9];

// address: 0x800E025C
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800E0280
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800E028C
// size: 0xC
extern int MagicTbl[3];

// address: 0x800E0298
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800E02A4
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800E02B0
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800E02EC
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800E4C4C
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x8012CFEC
extern unsigned char *pQLogCel;

// address: 0x8012CFF0
extern int ReturnLvlX;

// address: 0x8012CFF4
extern int ReturnLvlY;

// address: 0x8012CFF8
extern int ReturnLvl;

// address: 0x8012CFFC
extern int ReturnLvlT;

// address: 0x8012D000
extern unsigned char rporttest;

// address: 0x8012D004
extern int qline;

// address: 0x8012D008
extern int numqlines;

// address: 0x8012D00C
extern int qtopline;

// address: 0x8012ED30
// size: 0x40
static int qlist[16];

// address: 0x8012DD2C
// size: 0x8
static struct RECT QSRect;

// address: 0x8012CFB9
extern unsigned char questlog;

// address: 0x800E4B14
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x8012CFBC
extern int ALLQUESTS;

// address: 0x800E4C28
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800E4C34
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800E4C40
// size: 0xC
extern int QuestGroup3[3];

// address: 0x8012CFD0
// size: 0x8
extern int QuestGroup4[2];

// address: 0x8012CFE8
extern bool WaterDone;

// address: 0x8012CFC0
// size: 0x7
static char questxoff[7];

// address: 0x8012CFC8
// size: 0x7
static char questyoff[7];

// address: 0x800E4C14
// size: 0x14
extern int questtrigstr[5];

// address: 0x8012CFD8
static int QS_PX;

// address: 0x8012CFDC
static int QS_PY;

// address: 0x8012CFE0
static int QS_PW;

// address: 0x8012CFE4
static int QS_PH;

// address: 0x8012ED70
// size: 0x10
static struct Dialog QSBack;

// address: 0x800E4D8C
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x8012D047
extern char stextflag;

// address: 0x800E5634
// size: 0xBE0
extern struct ItemStruct smithitem[20];

// address: 0x800E6214
// size: 0x390
extern struct ItemStruct premiumitem[6];

// address: 0x8012D048
extern int numpremium;

// address: 0x8012D04C
extern int premiumlevel;

// address: 0x800E65A4
// size: 0xBE0
extern struct ItemStruct witchitem[20];

// address: 0x800E7184
// size: 0x98
extern struct ItemStruct boyitem;

// address: 0x8012D050
extern int boylevel;

// address: 0x800E721C
// size: 0x98
extern struct ItemStruct golditem;

// address: 0x800E72B4
// size: 0xBE0
extern struct ItemStruct healitem[20];

// address: 0x8012D054
extern char stextsize;

// address: 0x8012D055
extern unsigned char stextscrl;

// address: 0x8012DD34
static int stextsel;

// address: 0x8012DD38
static int stextlhold;

// address: 0x8012DD3C
static int stextshold;

// address: 0x8012DD40
static int stextvhold;

// address: 0x8012DD44
static int stextsval;

// address: 0x8012DD48
static int stextsmax;

// address: 0x8012DD4C
static int stextup;

// address: 0x8012DD50
static int stextdown;

// address: 0x8012DD54
static char stextscrlubtn;

// address: 0x8012DD55
static char stextscrldbtn;

// address: 0x8012DD56
static char SItemListFlag;

// address: 0x8012ED80
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800E7E94
// size: 0x1C80
extern struct ItemStruct storehold[48];

// address: 0x800E9B14
// size: 0x30
extern char storehidx[48];

// address: 0x8012DD58
static int storenumh;

// address: 0x8012DD5C
static int gossipstart;

// address: 0x8012DD60
static int gossipend;

// address: 0x8012DD64
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x8012DD6C
static int talker;

// address: 0x8012D034
extern unsigned char *pSTextBoxCels;

// address: 0x8012D038
extern unsigned char *pSTextSlidCels;

// address: 0x8012D03C
extern int *SStringY;

// address: 0x800E5510
// size: 0x10
extern struct Dialog SBack;

// address: 0x800E5520
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800E5570
// size: 0x50
extern int SStringYBuy0[20];

// address: 0x800E55C0
// size: 0x50
extern int SStringYBuy1[20];

// address: 0x800E5610
// size: 0x24
extern int talkname[9];

// address: 0x8012D046
extern unsigned char InStoreFlag;

// address: 0x8012949C
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x8012D064
extern unsigned long gdwAllTextEntries;

// address: 0x8012DD70
static unsigned char *P3Tiles;

// address: 0x8012D074
extern int tile;

// address: 0x8012D084
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800E9D7C
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x8012D088
extern int numtrigs;

// address: 0x8012D08C
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x8012D090
extern int TWarpFrom;

// address: 0x800E9B44
// size: 0x2C
extern int TownDownList[11];

// address: 0x800E9B70
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800E9BA4
// size: 0x30
extern int L1UpList[12];

// address: 0x800E9BD4
// size: 0x28
extern int L1DownList[10];

// address: 0x800E9BFC
// size: 0xC
extern int L2UpList[3];

// address: 0x800E9C08
// size: 0x14
extern int L2DownList[5];

// address: 0x800E9C1C
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800E9C28
// size: 0x3C
extern int L3UpList[15];

// address: 0x800E9C64
// size: 0x24
extern int L3DownList[9];

// address: 0x800E9C88
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800E9CC0
// size: 0x10
extern int L4UpList[4];

// address: 0x800E9CD0
// size: 0x18
extern int L4DownList[6];

// address: 0x800E9CE8
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800E9CF8
// size: 0x84
extern int L4PentaList[33];

// address: 0x8012A22C
// size: 0xA
static char cursoff[10];

// address: 0x8012D0A9
extern unsigned char gbSndInited;

// address: 0x8012D0AC
extern long sglMasterVolume;

// address: 0x8012D0B0
extern long sglMusicVolume;

// address: 0x8012D0B4
extern long sglSoundVolume;

// address: 0x8012D0B8
extern long sglSpeechVolume;

// address: 0x8012D0BC
extern int sgnMusicTrack;

// address: 0x8012D0AA
extern unsigned char gbDupSounds;

// address: 0x8012D0C0
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x8012A2D8
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x8012D0D8
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800E9DCC
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x8012D0E0
// size: 0x2
extern char _pfind_index[2];

// address: 0x8012D0E4
// size: 0x2
extern char _pfindx[2];

// address: 0x8012D0E8
// size: 0x2
extern char _pfindy[2];

// address: 0x8012D0EA
extern unsigned char automapmoved;

// address: 0x8012DD74
// size: 0x94
static struct GamePad *_GP0;

// address: 0x8012DD78
// size: 0x94
static struct GamePad *_GP1;

// address: 0x8012D0CD
extern unsigned char flyflag;

// address: 0x8012D0CE
static char seen_combo;

// address: 0x8012DD7C
static unsigned long (*CurrentProc)();

// address: 0x8012A46C
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x8012D124
extern int NumOfStrings;

// address: 0x8012D0F8
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x8012D0FC
extern long hndText;

// address: 0x8012D100
extern char **TextPtr;

// address: 0x8012D104
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x8012D134
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x8012D138
extern int CharFade;

// address: 0x8012D13C
extern int rotateness;

// address: 0x8012D140
extern int spiralling_shape;

// address: 0x8012D144
extern int down;

// address: 0x800E9E1C
// size: 0x10
extern char MlTab[16];

// address: 0x800E9E2C
// size: 0x10
extern char QlTab[16];

// address: 0x800E9E3C
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x8012D160
extern int MyXoff1;

// address: 0x8012D164
extern int MyYoff1;

// address: 0x8012D168
extern int MyXoff2;

// address: 0x8012D16C
extern int MyYoff2;

// address: 0x8012D17C
extern bool iscflag;

// address: 0x8012D189
static unsigned char sgbFadedIn;

// address: 0x8012D18A
static unsigned char screenbright;

// address: 0x8012D18C
static int faderate;

// address: 0x8012D190
static bool fading;

// address: 0x8012D19C
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x8012D194
extern int st;

// address: 0x8012D198
extern int mode;

// address: 0x800E9FC4
// size: 0x18
extern struct PortalStruct portal[2];

// address: 0x8012D1CE
extern char portalindex;

// address: 0x8012D1C8
// size: 0x2
static char WarpDropX[2];

// address: 0x8012D1CC
// size: 0x2
static char WarpDropY[2];

// address: 0x800E9FDC
// size: 0x78
extern char MyVerString[120];

// address: 0x8012D340
extern int Year;

// address: 0x8012D344
extern int Day;

// address: 0x8012DD80
static unsigned char *tbuff;

// address: 0x800EA054
// size: 0x300
extern unsigned char IconBuffer[768];

// address: 0x8012DD84
static unsigned char HR1;

// address: 0x8012DD85
static unsigned char HR2;

// address: 0x8012DD86
static unsigned char HR3;

// address: 0x8012DD87
static unsigned char VR1;

// address: 0x8012DD88
static unsigned char VR2;

// address: 0x8012DD89
static unsigned char VR3;

// address: 0x8012D3B4
// size: 0x18
extern struct NODE *pHallList;

// address: 0x8012D3B8
extern int nRoomCnt;

// address: 0x8012D3BC
extern int nSx1;

// address: 0x8012D3C0
extern int nSy1;

// address: 0x8012D3C4
extern int nSx2;

// address: 0x8012D3C8
extern int nSy2;

// address: 0x8012D36C
extern int Area_Min;

// address: 0x8012D370
extern int Room_Max;

// address: 0x8012D374
extern int Room_Min;

// address: 0x8012D378
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x8012D380
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x8012D388
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x8012D390
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x8012D398
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x8012D39C
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x8012D3A0
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x8012D3A4
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x8012D3A8
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x8012D3AC
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x8012D3B0
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x8012DD8C
static int abyssx;

// address: 0x8012DD90
static unsigned char lavapool;

// address: 0x8012D454
extern int lockoutcnt;

// address: 0x8012D3D8
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x8012D3E0
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x8012D3E8
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x8012D3F0
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x8012D3F8
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x8012D400
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x8012D408
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x8012D410
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x8012D418
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x8012D420
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x8012D428
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x8012D430
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x8012D438
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x8012D440
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x8012D444
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x8012D448
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x8012D44C
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x8012D450
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x8012D458
extern int diabquad1x;

// address: 0x8012D45C
extern int diabquad2x;

// address: 0x8012D460
extern int diabquad3x;

// address: 0x8012D464
extern int diabquad4x;

// address: 0x8012D468
extern int diabquad1y;

// address: 0x8012D46C
extern int diabquad2y;

// address: 0x8012D470
extern int diabquad3y;

// address: 0x8012D474
extern int diabquad4y;

// address: 0x8012D478
extern int SP4x1;

// address: 0x8012D47C
extern int SP4y1;

// address: 0x8012D480
extern int SP4x2;

// address: 0x8012D484
extern int SP4y2;

// address: 0x8012D488
extern int l4holdx;

// address: 0x8012D48C
extern int l4holdy;

// address: 0x8012DD94
static unsigned char *lpSetPiece1;

// address: 0x8012DD98
static unsigned char *lpSetPiece2;

// address: 0x8012DD9C
static unsigned char *lpSetPiece3;

// address: 0x8012DDA0
static unsigned char *lpSetPiece4;

// address: 0x8012D49C
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x8012D4A4
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800EA354
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800EA368
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800EA384
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8012D4AC
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800EA398
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x8012D5A0
static bool DoUiForChooseMonster;

// address: 0x800EA3BC
// size: 0x88
static char *MgToText[34];

// address: 0x800EA444
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800EB644
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800EBC84
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x8012D5B8
extern int setpc_x;

// address: 0x8012D5BC
extern int setpc_y;

// address: 0x8012D5C0
extern int setpc_w;

// address: 0x8012D5C4
extern int setpc_h;

// address: 0x8012D5C8
extern unsigned char setloadflag;

// address: 0x8012D5CC
extern unsigned char *pMegaTiles;

// address: 0x800EC2C4
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800ECAC8
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800ED2CC
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800EDAD0
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800EE2D4
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x8012D5D0
extern int dminx;

// address: 0x8012D5D4
extern int dminy;

// address: 0x8012D5D8
extern int dmaxx;

// address: 0x8012D5DC
extern int dmaxy;

// address: 0x8012D5E0
extern int gnDifficulty;

// address: 0x8012D5E4
extern unsigned char currlevel;

// address: 0x8012D5E5
extern unsigned char leveltype;

// address: 0x8012D5E6
extern unsigned char setlevel;

// address: 0x8012D5E7
extern unsigned char setlvlnum;

// address: 0x8012D5E8
extern unsigned char setlvltype;

// address: 0x8012D5EC
extern int ViewX;

// address: 0x8012D5F0
extern int ViewY;

// address: 0x8012D5F4
extern int ViewDX;

// address: 0x8012D5F8
extern int ViewDY;

// address: 0x8012D5FC
extern int ViewBX;

// address: 0x8012D600
extern int ViewBY;

// address: 0x800EEAD8
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x8012D604
extern int LvlViewX;

// address: 0x8012D608
extern int LvlViewY;

// address: 0x8012D60C
extern int btmbx;

// address: 0x8012D610
extern int btmby;

// address: 0x8012D614
extern int btmdx;

// address: 0x8012D618
extern int btmdy;

// address: 0x8012D61C
extern int MicroTileLen;

// address: 0x8012D620
extern char TransVal;

// address: 0x800EEAEC
// size: 0x20
extern bool TransList[8];

// address: 0x8012D624
extern int themeCount;

// address: 0x800EEB0C
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x80110DCC
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x80111930
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x80112494
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x80112FF8
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x8012D5B0
extern unsigned char *pSetPiece;

// address: 0x8012D5B4
extern int DungSize;

// address: 0x801131C4
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x8012D664
extern int numthemes;

// address: 0x8012D668
extern int zharlib;

// address: 0x8012D66C
extern unsigned char armorFlag;

// address: 0x8012D66D
extern unsigned char bCrossFlag;

// address: 0x8012D66E
extern unsigned char weaponFlag;

// address: 0x8012D670
extern int themex;

// address: 0x8012D674
extern int themey;

// address: 0x8012D678
extern int themeVar1;

// address: 0x8012D67C
extern unsigned char bFountainFlag;

// address: 0x8012D67D
extern unsigned char cauldronFlag;

// address: 0x8012D67E
extern unsigned char mFountainFlag;

// address: 0x8012D67F
extern unsigned char pFountainFlag;

// address: 0x8012D680
extern unsigned char tFountainFlag;

// address: 0x8012D681
extern unsigned char treasureFlag;

// address: 0x8012D684
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x801130A4
// size: 0x10
extern int ThemeGood[4];

// address: 0x801130B4
// size: 0x64
extern int trm5x[25];

// address: 0x80113118
// size: 0x64
extern int trm5y[25];

// address: 0x8011317C
// size: 0x24
extern int trm3x[9];

// address: 0x801131A0
// size: 0x24
extern int trm3y[9];

// address: 0x80113354
// size: 0x24
extern int StoryText[3][3];

// address: 0x8012D768
extern int nummissiles;

// address: 0x80113400
// size: 0x1F4
extern int missileactive[125];

// address: 0x801135F4
// size: 0x1F4
extern int missileavail[125];

// address: 0x8012D76C
extern unsigned char MissilePreFlag;

// address: 0x801137E8
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x8012D76D
extern unsigned char ManashieldFlag;

// address: 0x8012D76E
extern unsigned char ManashieldFlag2;

// address: 0x80113378
// size: 0x20
extern int XDirAdd[8];

// address: 0x80113398
// size: 0x20
extern int YDirAdd[8];

// address: 0x8012D735
extern unsigned char fadetor;

// address: 0x8012D736
extern unsigned char fadetog;

// address: 0x8012D737
extern unsigned char fadetob;

// address: 0x801133B8
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x801133C8
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x80116098
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x8012D7D0
extern long nummonsters;

// address: 0x8011B818
// size: 0x190
extern short monstactive[200];

// address: 0x8011B9A8
// size: 0x190
extern short monstkills[200];

// address: 0x8011BB38
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x8012D7D4
extern long monstimgtot;

// address: 0x8012D7D8
extern char totalmonsters;

// address: 0x8012D7DC
extern int uniquetrans;

// address: 0x8012DDA4
static unsigned char sgbSaveSoundOn;

// address: 0x8012D7A0
// size: 0x8
extern char offset_x[8];

// address: 0x8012D7A8
// size: 0x8
extern char offset_y[8];

// address: 0x8012D788
// size: 0x8
extern char left[8];

// address: 0x8012D790
// size: 0x8
extern char right[8];

// address: 0x8012D798
// size: 0x8
extern char opposite[8];

// address: 0x8012D77C
extern int nummtypes;

// address: 0x8012D780
// size: 0x7
extern char animletter[7];

// address: 0x80115EF8
// size: 0x120
extern int MWVel[3][24];

// address: 0x8012D7B0
// size: 0x4
extern char rnd5[4];

// address: 0x8012D7B4
// size: 0x4
extern char rnd10[4];

// address: 0x8012D7B8
// size: 0x4
extern char rnd20[4];

// address: 0x8012D7BC
// size: 0x4
extern char rnd60[4];

// address: 0x80116018
// size: 0x80
extern void (*AiProc[32])();

// address: 0x8011C010
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x8011DA50
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x8011DAD0
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x8011DB40
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x8011BDF8
// size: 0x218
extern int TransPals[134];

// address: 0x8011BCF8
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x8012D814
extern unsigned char invflag;

// address: 0x8012D815
extern unsigned char drawsbarflag;

// address: 0x8012D818
extern int InvBackY;

// address: 0x8012D81C
extern int InvCursPos;

// address: 0x8011EAE8
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x8012D820
extern int InvBackAY;

// address: 0x8012D824
extern int InvSel;

// address: 0x8012D828
extern int ItemW;

// address: 0x8012D82C
extern int ItemH;

// address: 0x8012D830
extern int ItemNo;

// address: 0x8012D834
// size: 0x8
extern struct RECT BRect;

// address: 0x8012D7FC
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x8012D800
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x8012D7F8
extern int InvPageNo;

// address: 0x8011E470
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8011E498
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x8011E6E0
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x8011E980
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x8011EA34
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x8012D80C
static bool InvOn;

// address: 0x8012D810
static unsigned long sgdwLastTime;

// address: 0x8012D86B
extern unsigned char automapflag;

// address: 0x8011EB4C
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x8011EC14
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8012D86C
extern unsigned char AMLWallFlag;

// address: 0x8012D86D
extern unsigned char AMRWallFlag;

// address: 0x8012D86E
extern unsigned char AMLLWallFlag;

// address: 0x8012D86F
extern unsigned char AMLRWallFlag;

// address: 0x8012D870
extern unsigned char AMDirtFlag;

// address: 0x8012D871
extern unsigned char AMColumnFlag;

// address: 0x8012D872
extern unsigned char AMStairFlag;

// address: 0x8012D873
extern unsigned char AMLDoorFlag;

// address: 0x8012D874
extern unsigned char AMLGrateFlag;

// address: 0x8012D875
extern unsigned char AMLArchFlag;

// address: 0x8012D876
extern unsigned char AMRDoorFlag;

// address: 0x8012D877
extern unsigned char AMRGrateFlag;

// address: 0x8012D878
extern unsigned char AMRArchFlag;

// address: 0x8012D87C
extern int AutoMapX;

// address: 0x8012D880
extern int AutoMapY;

// address: 0x8012D884
extern int AutoMapXOfs;

// address: 0x8012D888
extern int AutoMapYOfs;

// address: 0x8012D88C
extern int AMPlayerX;

// address: 0x8012D890
extern int AMPlayerY;

// address: 0x8012D848
extern int AutoMapScale;

// address: 0x8012D84C
extern unsigned char AutoMapPlayerR;

// address: 0x8012D84D
extern unsigned char AutoMapPlayerG;

// address: 0x8012D84E
extern unsigned char AutoMapPlayerB;

// address: 0x8012D84F
extern unsigned char AutoMapWallR;

// address: 0x8012D850
extern unsigned char AutoMapWallG;

// address: 0x8012D851
extern unsigned char AutoMapWallB;

// address: 0x8012D852
extern unsigned char AutoMapDoorR;

// address: 0x8012D853
extern unsigned char AutoMapDoorG;

// address: 0x8012D854
extern unsigned char AutoMapDoorB;

// address: 0x8012D855
extern unsigned char AutoMapColumnR;

// address: 0x8012D856
extern unsigned char AutoMapColumnG;

// address: 0x8012D857
extern unsigned char AutoMapColumnB;

// address: 0x8012D858
extern unsigned char AutoMapArchR;

// address: 0x8012D859
extern unsigned char AutoMapArchG;

// address: 0x8012D85A
extern unsigned char AutoMapArchB;

// address: 0x8012D85B
extern unsigned char AutoMapStairR;

// address: 0x8012D85C
extern unsigned char AutoMapStairG;

// address: 0x8012D85D
extern unsigned char AutoMapStairB;

// address: 0x8011EB34
// size: 0x18
static int SetLevelName[6];

// address: 0x8012DF00
extern unsigned long GazTick;

// address: 0x80134870
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A8064
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x8012DF28
extern void (*PollFunc)();

// address: 0x8012DF0C
extern void (*MsgFunc)();

// address: 0x8012DF58
extern void (*ErrorFunc)();

// address: 0x8012DE2C
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x8012DE30
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x8012DE34
// size: 0x5C
static struct TASK *T;

// address: 0x8012DE38
static unsigned long MemTypeForTasker;

// address: 0x801320A0
// size: 0x30
static int SchEnv[12];

// address: 0x8012DE3C
static unsigned long ExecId;

// address: 0x8012DE40
static unsigned long ExecMask;

// address: 0x8012DE44
static int TasksActive;

// address: 0x8012DE48
static void (*EpiFunc)();

// address: 0x8012DE4C
static void (*ProFunc)();

// address: 0x8012DE50
static unsigned long EpiProId;

// address: 0x8012DE54
static unsigned long EpiProMask;

// address: 0x8012DE58
static void (*DoTasksPrologue)();

// address: 0x8012DE5C
static void (*DoTasksEpilogue)();

// address: 0x8012DE60
static void (*StackFloodCallback)();

// address: 0x8012DE64
static unsigned char ExtraStackProtection;

// address: 0x8012DE68
static int ExtraStackSizeLongs;

// address: 0x8012DF14
extern void *LastPtr;

// address: 0x800A809C
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8012DE6C
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x801320D0
// size: 0x1180
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x8012DE70
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x8012DE74
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x8012DE78
static int TimeStamp;

// address: 0x8012DE7C
static unsigned char FullErrorChecking;

// address: 0x8012DE80
static unsigned long LastAttemptedAlloc;

// address: 0x8012DE84
static unsigned long LastDeallocedBlock;

// address: 0x8012DE88
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x8012DE8C
static int NumOfFreeHdrs;

// address: 0x8012DE90
static unsigned long LastTypeAlloced;

// address: 0x8012DE94
static void (*AllocFilter)();

// address: 0x800A80A4
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A80CC
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80133250
// size: 0x1380
static char buf[4992];

// address: 0x800A80F4
// size: 0x7
static char NULL_REP[7];

// address: 0x8007BC48
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007BC64
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007BC70
void Remove96__Fv() {
}


// address: 0x8007BCA8
void AppMain() {
}


// address: 0x8007BD48
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007BD74
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007BE5C
void MAIN_MainLoop__Fv() {
}


// address: 0x8007BEA4
void CheckMaxArgs__Fv() {
}


// address: 0x8007BED8
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007BEE4
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


// address: 0x8007C058
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007C10C
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007C1AC
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007C248
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007C2E8
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


// address: 0x8007C404
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007C4E0
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007C608
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007C614
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007C650
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007C864
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007C870
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007C8AC
unsigned char ClearedYet__Fv() {
}


// address: 0x8007C8B8
void PrimDrawSycnCallBack() {
}


// address: 0x8007C8D8
void SendDispEnv__Fv() {
}


// address: 0x8007C8FC
// size: 0x18
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007C914
// size: 0x28
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007C92C
// size: 0x34
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007C944
// size: 0x24
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007C95C
// size: 0x14
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007C974
// size: 0xC
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007C98C
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007CAA0
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007CB08
void VID_AfterDisplay__Fv() {
}


// address: 0x8007CB28
void VID_ScrOn__Fv() {
}


// address: 0x8007CB50
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007CBA8
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007CBB4
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007CBC0
void VID_DispEnvSend() {
}


// address: 0x8007CBFC
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007CC0C
int VID_GetXOff__Fv() {
}


// address: 0x8007CC18
int VID_GetYOff__Fv() {
}


// address: 0x8007CC24
void VID_SetDBuffer__Fb(bool DBuf) {
	{
		{
		}
	}
}


// address: 0x8007CD94
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007CD9C
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007CDBC
int GetTpY__FUs_addr_8007CDBC(unsigned short tpage) {
}


// address: 0x8007CDD8
int GetTpX__FUs_addr_8007CDD8(unsigned short tpage) {
}


// address: 0x8007CDE4
// size: 0x14
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007CDF0
// size: 0x14
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007CDFC
void SortOutFileSystem__Fv() {
}


// address: 0x8007CF38
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007CF58
void Spanker__Fv() {
}


// address: 0x8007CF98
void GaryLiddon__Fv() {
}


// address: 0x8007CFA0
void ReadPad__Fi(int NoDeb) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 17
	// size: 0x6C
	register struct CPad *Pad0;
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


// address: 0x8007D15C
void DummyPoll__Fv() {
}


// address: 0x8007D164
void DaveOwens__Fv() {
}


// address: 0x8007D18C
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x8007D1B4
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007D1DC
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8007D1E8
int GetTpY__FUs_addr_8007D1E8(unsigned short tpage) {
}


// address: 0x8007D204
int GetTpX__FUs_addr_8007D204(unsigned short tpage) {
}


// address: 0x8007D210
void TimSwann__Fv() {
}


// address: 0x8007D218
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007D220
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007D254
void leighbird__Fv() {
}


// address: 0x8007D27C
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007D2CC
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007D320
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007D488
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007D4EC
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007D50C
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007D5EC
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007D6B0
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007D714
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007D7F0
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


// address: 0x8007D904
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007D9AC
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007DA04
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007DA5C
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007DA70
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007DAAC
// size: 0x14
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007DB14
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007DB6C
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007DBB0
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DC74
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007DD2C
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DE00
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


// address: 0x8007E010
// size: 0x4
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007E028
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007E054
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007E0D0
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007E13C
// size: 0x14
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007E178
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007E1D0
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007E210
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007E2D0
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007E384
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007E42C
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


// address: 0x8007E638
// size: 0x6C
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007E678
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007E6C0
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


// address: 0x8007E8B4
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012DB34
	static int TpX;
	// address: 0x8012DB38
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


// address: 0x8007E984
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007EA3C
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007EA98
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007EB08
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


// address: 0x8007EC34
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


// address: 0x8007ED30
// size: 0x28
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


// address: 0x8007F138
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


// address: 0x8007F3A4
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


// address: 0x8007F504
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


// address: 0x8007F600
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


// address: 0x8007F85C
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


// address: 0x8007F8DC
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


// address: 0x8007FAA0
// size: 0x28
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007FBF4
// size: 0x34
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007FD48
// size: 0x28
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007FE2C
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007FF80
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


// address: 0x800800C0
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x800801BC
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x800801E8
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x80080330
// size: 0x6C
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


// address: 0x80080450
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x800804A4
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


// address: 0x8008056C
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x800805C0
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x80080618
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


// address: 0x8008073C
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


// address: 0x80080810
// size: 0x4
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x80080860
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x80080888
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x80080930
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


// address: 0x800809F0
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x80080A34
// size: 0xE
struct CCreatureAction *GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80080AC4
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80080B34
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


// address: 0x80080BA0
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080BF0
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080C18
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


// address: 0x80080CB4
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x80080D1C
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


// address: 0x80080DF0
// size: 0x78
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x80080E24
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


// address: 0x800810C4
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x800810E8
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x800813C8
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80081440
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


// address: 0x8008159C
void _GLOBAL__D_DatPool() {
}


// address: 0x800815F4
void _GLOBAL__I_DatPool() {
}


// address: 0x80081648
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x800816C4
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x80081740
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x800817BC
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x800817E4
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x8008180C
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x80081818
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x80081824
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008189C
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x800818B0
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x800818BC
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x800818D0
// size: 0x8
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x800818EC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80081908
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80081914
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8008193C
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80081964
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x80081978
// size: 0x14
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x800819BC
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80081A14
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80081A38
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80081ABC
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80081AE0
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80081BC0
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x80081BD0
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


// address: 0x80081D1C
bool LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 30
	register unsigned char *Dest;
	// address: 0xFFFFFFB8
	auto int OrigSize;
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


// address: 0x80081FF8
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


// address: 0x80082158
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x80082244
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


// address: 0x80082370
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


// address: 0x800824E4
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


// address: 0x8008260C
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


// address: 0x800828EC
// size: 0x14
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


// address: 0x800829EC
// size: 0x14
struct STRHDR *BL_FindStreamFile__FPcc(char *Name, char LumpID) {
	// register: 18
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


// address: 0x80082BB8
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80082BDC
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80082C10
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80082CF8
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80082D04
void BL_WaitForAsyncFinish__Fv() {
}


// address: 0x80082D50
void BL_AsyncLoadCallBack__Fi(int handle) {
}


// address: 0x80082D80
long BL_LoadFileAsync__FPcc(char *Name, char LumpID) {
	// register: 17
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int Size;
	// register: 16
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x80082EF8
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80082FC0
// size: 0x14
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80082FEC
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80083024
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


// address: 0x800830F8
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x8008321C
void Tfree__FPv(void *Addr) {
}


// address: 0x800832CC
void InitTmalloc__Fv() {
}


// address: 0x800832F4
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80083348
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80083394
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


// address: 0x80083480
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x800834AC
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


// address: 0x8008372C
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


// address: 0x80083A44
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


// address: 0x80083B64
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


// address: 0x80083C68
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80083C78
bool PA_GetPauseOk__Fv() {
}


// address: 0x80083C84
void MY_PausePrint__17CTempPauseMessageiPciP4RECT(struct CTempPauseMessage *this, int s, char *Txt, int Menu, struct RECT *PRect) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80083DD0
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083DD8
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083EF4
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80083EFC
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083F04
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80084020
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80084028
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084030
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x8008415C
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084164
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x8008418C
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x800841B4
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x800841DC
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084220
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80084254
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80084268
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80084288
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80084290
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80084298
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x800842C0
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8008431C
unsigned short GetDown__C4CPad_addr_8008431C(struct CPad *this) {
}


// address: 0x80084344
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x8008436C
unsigned char CheckActive__4CPad_addr_8008436C(struct CPad *this) {
}


// address: 0x80084378
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x80084490
void PAD_Handler__Fv() {
	// register: 20
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 16
	register unsigned char fin;
}


// address: 0x80084658
// size: 0x6C
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x800846F4
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x8008482C
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80084988
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80084AAC
void _GLOBAL__I_Pad0() {
}


// address: 0x80084AE4
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x80084AEC
unsigned char CheckActive__4CPad_addr_80084AEC(struct CPad *this) {
}


// address: 0x80084AF8
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x80084B00
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x80084B08
// size: 0x6C
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80084B3C
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80084B60
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


// address: 0x80084BFC
void InitPrinty__Fv() {
}


// address: 0x80084C9C
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80084CA4
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80084E3C
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


// address: 0x80085468
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x8008551C
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80085580
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8008558C
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x800855B0
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x800855D0
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x800855E8
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80085640
void Init__5CFont(struct CFont *this) {
}


// address: 0x80085674
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80085674(struct TextDat *this, int FrNum) {
}


// address: 0x80085690
unsigned char TrimCol__Fs(short col) {
}


// address: 0x800856C8
// size: 0x34
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


// address: 0x80086040
// size: 0x24
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80086178
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


// address: 0x8008641C
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


// address: 0x80086554
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x800867AC
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


// address: 0x8008796C
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


// address: 0x80087B84
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80087B84(struct TextDat *this, int PalNum) {
}


// address: 0x80087BA0
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80087BA0(struct TextDat *this, int FrNum) {
}


// address: 0x80087BBC
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80087D0C
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80087DD8
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x80087E18
void CycleSelCols__Fv() {
}


// address: 0x80087FD0
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


// address: 0x80088044
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80088098
// size: 0xE0
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x800881EC
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088224
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x800882EC
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80088374
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x800883DC
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80088444
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x800884A0
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x800884F0
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x8008883C
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x800888E8
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x800889BC
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


// address: 0x80088AC4
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


// address: 0x80088C00
// size: 0xC
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x80088C78
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088CA0
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x80088CC8
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80088CE0
void PrintMap__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF00
	auto int XPos;
	// address: 0xFFFFFF08
	auto int YPos;
	// address: 0xFFFFFF10
	auto int xx;
	// address: 0xFFFFFF18
	auto int block_trans;
	// address: 0xFFFFFF20
	auto unsigned short nlval1;
	// address: 0xFFFFFF28
	auto int BlankBlock;
	// register: 16
	register int XPix;
	// register: 17
	register int YPix;
	// address: 0xFFFFFF30
	auto int CLeft;
	// address: 0xFFFFFF38
	auto int CRight;
	// address: 0xFFFFFF40
	auto int CTop;
	// address: 0xFFFFFF48
	auto int CBottom;
	{
		// address: 0xFFFFFF50
		auto int ThisY;
		// address: 0xFFFFFF58
		auto int OtPos;
		// address: 0xFFFFFF60
		auto int ThisXPos;
		// register: 30
		register int ThisYPos;
		// address: 0xFFFFFF68
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
			// address: 0xFFFFFF70
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
												// address: 0xFFFFFF78
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
														// register: 11
														register int NumOfParts;
														{
															// register: 10
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
																// address: 0xFFFFFEE8
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
																						// register: 8
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
																								// address: 0xFFFFFEEC
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


// address: 0x8008A1D0
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


// address: 0x8008A340
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
																						// register: 2
																						register int invisiflag;
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


// address: 0x8008B0A8
void PrintSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// address: 0xFFFFFFC8
	auto int Monster;
	// register: 20
	register int bItem;
	// address: 0xFFFFFFD0
	auto int bFlags;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 18
			// size: 0x98
			register struct ItemStruct *pItem;
			{
				{
					// register: 22
					// size: 0xC
					register struct FRAME_HDR *Fr;
					// register: 17
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
														// register: 20
														register int Creature;
														// register: 18
														register int mi;
														// address: 0xFFFFFFB0
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


// address: 0x8008B7D4
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


// address: 0x8008B944
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B958
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B96C
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008BA30
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 7
	register int XDiff;
	// register: 4
	register int YDiff;
	// register: 6
	register int divnum;
}


// address: 0x8008BAB0
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008BB50
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008BC24
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008BCA4
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008BCAC
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008BCC0
// size: 0xE0
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008BCCC
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008BCCC(struct POLY_FT4 **Prim) {
}


// address: 0x8008BD48
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008BD90
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008BDCC
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008BE14
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008BE14(struct POLY_GT4 **Prim) {
}


// address: 0x8008BE90
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x8008BF0C
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


// address: 0x8008BF34
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008BF50
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008BF78
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008BFA0
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BFC4
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BFE8
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008C010
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008C01C
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008C0B4
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8008C144
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008C17C
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008C17C(struct TextDat *this, int Creature) {
}


// address: 0x8008C1F4
int GetNumOfCreatures__7TextDat_addr_8008C1F4(struct TextDat *this) {
}


// address: 0x8008C208
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008C208(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008C214
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008C214(struct TextDat *this, int PalNum) {
}


// address: 0x8008C230
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008C230(struct TextDat *this, int FrNum) {
}


// address: 0x8008C24C
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008C278
void OVR_LoadPregame__Fv() {
}


// address: 0x8008C2A0
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008C2C8
void OVR_LoadGame__Fv() {
}


// address: 0x8008C2F0
void OVR_LoadFmv__Fv() {
}


// address: 0x8008C318
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008C344
void ClearOutOverlays__Fv() {
}


// address: 0x8008C39C
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008C460
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008C4D0
// size: 0x4
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x8008C4DC
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x8008C530
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008C6A0
// size: 0x4
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x8008C6AC
void StevesDummyPoll__Fv() {
}


// address: 0x8008C6B4
void Lambo__Fv() {
}


// address: 0x8008C6BC
// size: 0x84
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008C7A0
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008C7F8
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008C854
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


// address: 0x8008C9A0
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


// address: 0x8008CDCC
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008CE4C
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


// address: 0x8008D340
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008D3BC
// size: 0x4
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008D438
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008D440
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008D448
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008D448(struct POLY_FT4 **Prim) {
}


// address: 0x8008D4C4
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008D4C4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008D500
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008D500(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008D528
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008D53C
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008D554
int GetNumOfFrames__7TextDatii_addr_8008D554(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008D58C
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008D5B0
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008D5B0(struct TextDat *this, int Creature) {
}


// address: 0x8008D628
int GetNumOfCreatures__7TextDat_addr_8008D628(struct TextDat *this) {
}


// address: 0x8008D63C
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008D63C(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008D648
void PROF_Open__Fv() {
}


// address: 0x8008D688
bool PROF_State__Fv() {
}


// address: 0x8008D694
void PROF_On__Fv() {
}


// address: 0x8008D6A4
void PROF_Off__Fv() {
}


// address: 0x8008D6B0
void PROF_CpuEnd__Fv() {
}


// address: 0x8008D6E0
void PROF_CpuStart__Fv() {
}


// address: 0x8008D704
void PROF_DrawStart__Fv() {
}


// address: 0x8008D728
void PROF_DrawEnd__Fv() {
}


// address: 0x8008D758
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


// address: 0x8008D94C
void PROF_Restart__Fv() {
}


// address: 0x8008D96C
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008DA2C
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008DADC
void GoBackLevel__Fv() {
}


// address: 0x8008DB54
void GoWarpLevel__Fv() {
}


// address: 0x8008DB8C
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DC28
void GoLoadGame__Fv() {
}


// address: 0x8008DC84
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DD20
void GoNewLevel__Fv() {
}


// address: 0x8008DD74
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DE0C
void GoForwardLevel__Fv() {
}


// address: 0x8008DE64
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DEFC
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DF4C
void PostNewGame__Fv() {
}


// address: 0x8008DF84
void LevelToLevelInit__Fv() {
}


// address: 0x8008DFCC
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008E010
// size: 0x10
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008E068
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


// address: 0x8008E4E8
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


// address: 0x8008E96C
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


// address: 0x8008EB0C
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008EB58
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008EF14
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008F008
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008F10C
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008F10C(struct TextDat *this, int PalNum) {
}


// address: 0x8008F128
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008F128(struct TextDat *this, int FrNum) {
}


// address: 0x8008F144
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat *CDGfxData;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8008F1FC
void InitCDWaitIcon__Fv() {
}


// address: 0x8008F230
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008F244
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008F28C
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


// address: 0x8008F2E0
void STR_Init__Fv() {
	{
		{
			// register: 3
			register long vm;
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


// address: 0x8008F400
// size: 0x80
struct SFXHDR *STR_InitStream__Fv() {
	// register: 18
	// size: 0x80
	register struct SFXHDR *sfh;
	{
		// register: 17
		register int s;
	}
}


// address: 0x8008F538
// size: 0x80
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008F674
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F6CC
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008F7D8
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F828
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F878
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F8E4
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008F9F0
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008FB9C
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008FC64
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008FE40
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


// address: 0x80090140
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


// address: 0x80090574
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


// address: 0x8009067C
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


// address: 0x80090708
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
		{
			// register: 3
			register int i;
		}
	}
}


// address: 0x80090814
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x80090880
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x800908F8
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012DB9C
	static int DestAddr;
}


// address: 0x80090970
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x80090AA4
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090AF8
void SND_StopSnd__Fi(int voice) {
}


// address: 0x80090B1C
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80090B58
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090BBC
int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj) {
	// address: 0xFFFFFF98
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 19
	register int Offset;
	// register: 3
	register int sfxnum;
	// register: 17
	register int voice;
}


// address: 0x80090D78
void AS_CallBack0__Fi(int handle) {
}


// address: 0x80090D8C
void AS_CallBack1__Fi(int handle) {
}


// address: 0x80090DA0
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80090E7C
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x80090F1C
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80090F28
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x80090F54
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x80091074
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x800910A8
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x80091138
// size: 0x18
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80091214
// size: 0x18
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80091294
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x80091334
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x800913C8
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


// address: 0x8009143C
void SCR_Handler__Fv() {
}


// address: 0x80091464
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8009146C
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x800914A8
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8009150C
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80091564
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x800915BC
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x800915D0
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x800915FC
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x80091604
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8009160C
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x80091618
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80091650
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8009165C
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8009167C
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x800916C8
void stub__FPcPv_addr_800916C8(char *e, void *argptr) {
}


// address: 0x800916D0
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x80091704
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009178C
void SetAmbientLight__Fv() {
}


// address: 0x80091810
void print_demo_task__FP4TASK(struct TASK *T) {
	{
		{
			// register: 3
			register int x;
		}
	}
}


// address: 0x80091A1C
void TonysDummyPoll__Fv() {
}


// address: 0x80091A40
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x80091AA0
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x80091B00
void set_pad_record_play__Fi(int level) {
}


// address: 0x80091B74
void start_demo__Fv() {
}


// address: 0x80091C10
void SetQuest__Fv() {
}


// address: 0x80091C38
int CurrCheatStr__Fv() {
}


// address: 0x80091C58
void tony__Fv() {
}


// address: 0x80091C90
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x80091C9C
int GLUE_GetMonsterList__Fv() {
}


// address: 0x80091CA8
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091CFC
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091D50
void GLUE_PreTown__Fv() {
}


// address: 0x80091DB4
void GLUE_PreDun__Fv() {
}


// address: 0x80091E00
bool GLUE_Finished__Fv() {
}


// address: 0x80091E0C
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80091E18
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x80091E9C
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091EAC
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091EBC
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091ECC
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x80091FA4
void BgTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// register: 18
	register bool IsTown;
	// register: 16
	register int TextId;
	// register: 17
	register int Level;
	// register: 19
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


// address: 0x800924C0
// size: 0xC
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80092558
// size: 0xC
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x800925B4
// size: 0xC
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x800925E4
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf *Inf;
}


// address: 0x80092644
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x800926C4
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80092770
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x8009277C
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x80092784
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80092798
void SetDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80092870
void RestoreDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 3
		register int i;
	}
}


// address: 0x80092900
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80092978
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x800929B0
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


// address: 0x80092A14
bool RemoveCtrlScreen__Fv() {
}


// address: 0x80092A7C
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x80092B34
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80092B74
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80092BB4
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


// address: 0x80092D08
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x80092D50
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x800931E8
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


// address: 0x800936E4
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 20
	register int pnum;
	{
		{
			// register: 17
			register int lena;
			// register: 2
			register int len;
			{
				{
					// register: 20
					register int oldDot;
					// register: 19
					register int OldPrintOT;
					// register: 18
					register bool oldbuttoncol;
				}
			}
		}
	}
}


// address: 0x80093BA0
void _GLOBAL__D_ctrlflag() {
}


// address: 0x80093BC8
void _GLOBAL__I_ctrlflag() {
}


// address: 0x80093BF0
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x80093C18
unsigned short GetDown__C4CPad_addr_80093C18(struct CPad *this) {
}


// address: 0x80093C40
unsigned short GetUp__C4CPad_addr_80093C40(struct CPad *this) {
}


// address: 0x80093C68
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x80093C70
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x80093C78
void SetRGB__6DialogUcUcUc_addr_80093C78(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80093C98
void SetBorder__6Dialogi_addr_80093C98(struct Dialog *this, int Type) {
}


// address: 0x80093CA0
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80093CAC
void ___6Dialog_addr_80093CAC(struct Dialog *this, int __in_chrg) {
}


// address: 0x80093CD4
// size: 0x10
struct Dialog *__6Dialog_addr_80093CD4(struct Dialog *this) {
}


// address: 0x80093D30
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80093D7C
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x80093EBC
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


// address: 0x80094000
void ReInitDFL__Fv() {
	// register: 5
	register int *yp;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80094038
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	register int diff;
	// register: 17
	register int x;
	// register: 7
	register int y;
	// register: 16
	register int p;
	// register: 18
	register int *yp;
	// register: 20
	register int *frm;
	// register: 19
	register int *xp;
	// register: 22
	register char *s;
	{
		{
			{
				// register: 21
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


// address: 0x800943DC
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80094430
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


// address: 0x80094694
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x8009486C
void nightgfx__FibiP8POLY_GT4i(int BlockBase, bool water, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x800948F8
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800948F8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80094934
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80094934(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8009495C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009495C(struct POLY_FT4 **Prim) {
}


// address: 0x800949D8
int GetNumOfActions__7TextDati_addr_800949D8(struct TextDat *this, int Creature) {
}


// address: 0x800949FC
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_800949FC(struct TextDat *this, int Creature) {
}


// address: 0x80094A74
int GetNumOfCreatures__7TextDat_addr_80094A74(struct TextDat *this) {
}


// address: 0x80094A88
void DaveLDummyPoll__Fv() {
}


// address: 0x80094A90
void DaveL__Fv() {
}


// address: 0x80094AB8
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
	// address: 0x8012C7EC
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


// address: 0x80094DA4
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


// address: 0x800950A4
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x8009517C
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


// address: 0x80095204
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


// address: 0x800953F4
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


// address: 0x80095528
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


// address: 0x800956F8
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x800958A8
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x8009599C
void doparticlejump__Fv() {
}


// address: 0x800959DC
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80095B44
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


// address: 0x80095F5C
void ParticleBlob__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80095FF4
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x800960B4
void Teleportfx__Fiiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart, int OtPos) {
	// register: 30
	// size: 0x6C
	register struct TextDat *Dat;
	// address: 0xFFFFFF70
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
	// register: 21
	register int h;
	// register: 18
	register int x;
	// register: 19
	register int y;
	// address: 0xFFFFFF98
	auto int f;
	// address: 0xFFFFFFA0
	auto int n;
	// register: 17
	register int randu;
	// register: 20
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


// address: 0x800963A8
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x800965D0
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009666C
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80096790
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


// address: 0x800968CC
void HealStart__Fi(int plr) {
}


// address: 0x80096900
void HealotherStart__Fi(int plr) {
}


// address: 0x80096938
void TeleStart__Fi(int plr) {
}


// address: 0x80096994
void PhaseStart__Fi(int plr) {
}


// address: 0x800969C8
void PhaseEnd__Fi(int plr) {
}


// address: 0x800969F4
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT R;
	// register: 22
	// size: 0xE0
	register struct CBlocks *TheBlocks;
	// register: 21
	register int ScrXOff;
	// register: 20
	register int ScrYOff;
	// register: 17
	register int OtPos;
}


// address: 0x80096BD0
void ApocaStart__Fi(int plr) {
}


// address: 0x80096C28
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80096CC4
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x80096D40
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80096DBC
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096DBC(struct POLY_FT4 **Prim) {
}


// address: 0x80096E38
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80096E88
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80096E94
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80096E94(struct TextDat *this, int FrNum) {
}


// address: 0x80096EB0
void DrawArrow__Fii(int x1, int y1) {
	// register: 22
	// size: 0x18
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


// address: 0x800970B4
void show_spell_dir__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 20
	// size: 0x18
	register struct Spell_Target *spl;
	// address: 0xFFFFFFB8
	auto int otx;
	// register: 30
	register int oty;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT R;
	// register: 16
	register int cp;
	// address: 0xFFFFFFC0
	// size: 0xE0
	auto struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x8009754C
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x800975C0
void select_belt_item__Fi(int pnum) {
}


// address: 0x800975C8
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097630
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097760
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097898
void pad_func_up__Fi(int pnum) {
}


// address: 0x800978C4
void pad_func_down__Fi(int pnum) {
}


// address: 0x800978F0
void pad_func_left__Fi(int pnum) {
}


// address: 0x800978F8
void pad_func_right__Fi(int pnum) {
}


// address: 0x80097900
void pad_func_select__Fi(int pnum) {
}


// address: 0x800979BC
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80097E48
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


// address: 0x80098194
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
	{
		// register: 8
		register int i;
	}
}


// address: 0x8009829C
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x8009832C
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 18
	register int sp;
	// register: 16
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 5
	// size: 0x6C
	register struct CPad *pad;
	// register: 20
	register unsigned char DoTarget;
}


// address: 0x80098714
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x800987D4
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x800988DC
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800989D4
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x80098AC0
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80098B44
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80098BDC
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80098C98
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80098D14
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


// address: 0x80098EDC
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80098F04
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80098F2C
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


// address: 0x8009906C
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80099178
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// address: 0xFFFFFF58
	// size: 0x1E
	auto char str[30];
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	register int cp;
	// address: 0xFFFFFF78
	auto int list_size;
	// address: 0xFFFFFF80
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


// address: 0x800999F8
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


// address: 0x80099AD4
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80099BE0
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80099FA0
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 17
	register int dir;
	// register: 21
	register int front_range;
	{
		{
			// register: 18
			register int i;
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
	}
}


// address: 0x8009A278
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8009A49C
void _GLOBAL__D_gplayer() {
}


// address: 0x8009A4C4
void _GLOBAL__I_gplayer() {
}


// address: 0x8009A4EC
void SetRGB__6DialogUcUcUc_addr_8009A4EC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009A50C
void SetBack__6Dialogi_addr_8009A50C(struct Dialog *this, int Type) {
}


// address: 0x8009A514
void SetBorder__6Dialogi_addr_8009A514(struct Dialog *this, int Type) {
}


// address: 0x8009A51C
void ___6Dialog_addr_8009A51C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009A544
// size: 0x10
struct Dialog *__6Dialog_addr_8009A544(struct Dialog *this) {
}


// address: 0x8009A5A0
unsigned short GetTick__C4CPad_addr_8009A5A0(struct CPad *this) {
}


// address: 0x8009A5C8
unsigned short GetDown__C4CPad_addr_8009A5C8(struct CPad *this) {
}


// address: 0x8009A5F0
unsigned short GetCur__C4CPad_addr_8009A5F0(struct CPad *this) {
}


// address: 0x8009A618
void SetPadTickMask__4CPadUs_addr_8009A618(struct CPad *this, unsigned short mask) {
}


// address: 0x8009A620
void SetPadTick__4CPadUs_addr_8009A620(struct CPad *this, unsigned short tick) {
}


// address: 0x8009A628
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009A6A4
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009A6FC
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8009A758
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009A790
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009A7C8
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009A828
bool IsGameLoading__Fv() {
}


// address: 0x8009A834
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


// address: 0x8009ACA8
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x8009AD68
void TakeDownCutScreen__Fv() {
}


// address: 0x8009ADF4
void FinishProgress__Fv() {
}


// address: 0x8009AE58
void PRIM_GetPrim__FPP7POLY_G4_addr_8009AE58(struct POLY_G4 **Prim) {
}


// address: 0x8009AED4
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009AF0C
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x8009AF44
void SetRGB__6DialogUcUcUc_addr_8009AF44(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009AF64
void SetBack__6Dialogi_addr_8009AF64(struct Dialog *this, int Type) {
}


// address: 0x8009AF6C
void SetBorder__6Dialogi_addr_8009AF6C(struct Dialog *this, int Type) {
}


// address: 0x8009AF74
void ___6Dialog_addr_8009AF74(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009AF9C
// size: 0x10
struct Dialog *__6Dialog_addr_8009AF9C(struct Dialog *this) {
}


// address: 0x8009AFF8
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8009B018
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x8009B234
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009B23C
void init_card__Fi(int card_number) {
}


// address: 0x8009B270
int ping_card__Fi(int card_number) {
}


// address: 0x8009B304
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009B33C
void MemcardON__Fv() {
}


// address: 0x8009B3AC
void MemcardOFF__Fv() {
}


// address: 0x8009B3FC
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
}


// address: 0x8009B490
void PrintSelectBack__FbT0(bool S, bool B) {
	// register: 17
	register int len;
}


// address: 0x8009B610
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009B6F4
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


// address: 0x8009BBBC
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
							// register: 19
							register int len;
							// register: 20
							register int cx;
							// register: 21
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


// address: 0x8009C850
int who_pressed__Fi(int pval) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad1;
}


// address: 0x8009C8D8
void ShowCharacterFiles__Fv() {
	// register: 16
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
					// register: 19
					register int r;
					// register: 18
					register int g;
					// register: 17
					register int b;
					// register: 7
					register char *FileLabel;
				}
			}
		}
	}
}


// address: 0x8009CF98
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


// address: 0x8009D674
void UnBounce__Fv() {
}


// address: 0x8009D680
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


// address: 0x8009DE04
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


// address: 0x8009E238
void CalcVolumes__Fv() {
}


// address: 0x8009E370
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


// address: 0x8009E478
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009E620
void SeedPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	// address: 0xFFFFFFE8
	// size: 0x2
	auto char temp[2];
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009E8A4
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 19
	register int OldOptionsSeed;
	// register: 16
	register int old_pad;
	// register: 18
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


// address: 0x8009F0BC
void ToggleOptions__Fv() {
}


// address: 0x8009F164
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


// address: 0x8009F470
void ActivateMemcard__Fv() {
}


// address: 0x8009F4F4
void ShowGameFiles__FPc(char *filename) {
	// register: 22
	register int yoff;
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 6
					register int FileNo;
				}
			}
		}
	}
}


// address: 0x8009F660
void PRIM_GetPrim__FPP7POLY_G4_addr_8009F660(struct POLY_G4 **Prim) {
}


// address: 0x8009F6DC
unsigned short GetTick__C4CPad_addr_8009F6DC(struct CPad *this) {
}


// address: 0x8009F704
unsigned short GetDown__C4CPad_addr_8009F704(struct CPad *this) {
}


// address: 0x8009F72C
unsigned short GetUp__C4CPad_addr_8009F72C(struct CPad *this) {
}


// address: 0x8009F754
void SetPadTickMask__4CPadUs_addr_8009F754(struct CPad *this, unsigned short mask) {
}


// address: 0x8009F75C
void SetPadTick__4CPadUs_addr_8009F75C(struct CPad *this, unsigned short tick) {
}


// address: 0x8009F764
void SetRGB__6DialogUcUcUc_addr_8009F764(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009F784
void SetBack__6Dialogi_addr_8009F784(struct Dialog *this, int Type) {
}


// address: 0x8009F78C
void SetBorder__6Dialogi_addr_8009F78C(struct Dialog *this, int Type) {
}


// address: 0x8009F794
int SetOTpos__6Dialogi_addr_8009F794(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8009F7A0
void ___6Dialog_addr_8009F7A0(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009F7C8
// size: 0x10
struct Dialog *__6Dialog_addr_8009F7C8(struct Dialog *this) {
}


// address: 0x8009F824
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009F824(struct TextDat *this, int FrNum) {
}


// address: 0x8009F840
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009F898
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x8009F9DC
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009FA58
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


// address: 0x8009FBE4
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009FC38
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009FDA0
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FEA4
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FF10
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FF94
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A0040
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


// address: 0x800A0150
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A01FC
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


// address: 0x800A02A0
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


// address: 0x800A054C
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A05A4
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A0610
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x800A06FC
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


// address: 0x800A082C
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x800A0904
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x800A0A5C
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x800A0AF8
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x800A0C28
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x800A0D34
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


// address: 0x800A0F40
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0F40(struct POLY_FT4 **Prim) {
}


// address: 0x800A0FBC
short PlayFMV__FPcii(char *str, int w, int h) {
	// register: 16
	register short RetVal;
	// register: 19
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x800A107C
void play_movie(char *pszMovie) {
	{
		{
			{
			}
		}
	}
}


// address: 0x800A1138
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


// address: 0x800A15D4
unsigned short GetDown__C4CPad_addr_800A15D4(struct CPad *this) {
}


// address: 0x800A15FC
int GetNumOfFrames__7TextDatii_addr_800A15FC(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A1634
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_800A1634(struct TextDat *this, int Creature) {
}


// address: 0x800A16AC
int GetNumOfCreatures__7TextDat_addr_800A16AC(struct TextDat *this) {
}


// address: 0x800A16C0
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800A16C0(struct TextDat *this, int FrNum) {
}


// address: 0x800A16DC
void LoadKanjiFont__FPc(char *name) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A17CC
void LoadKanjiIndex__FPc(char *name) {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A18DC
void FreeKanji__Fv() {
}


// address: 0x800A1964
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto char tmp[40];
	// register: 16
	register char *bname;
}


// address: 0x800A1A38
unsigned short *getb__FUs(unsigned short n) {
	// register: 4
	// size: 0x4
	register struct kindexS *ii;
	// register: 3
	register int i;
	// register: 16
	register int off;
}


// address: 0x800A1AA8
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


// address: 0x800A1B78
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


// address: 0x800A1CE4
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A1CE4(struct POLY_FT4 **Prim) {
}


// address: 0x800A1D60
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


// address: 0x800A1E48
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


// address: 0x800A2088
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


// address: 0x800A2128
void fputc__5blockUc(struct block *this, unsigned char Val) {
}


// address: 0x8002E8A0
unsigned char TrimCol__Fs_addr_8002E8A0(short col) {
}


// address: 0x8002E8D8
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


// address: 0x8002F3F8
void SetSpellTrans__Fc(char t) {
}


// address: 0x8002F404
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8002F4A0
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


// address: 0x8002F544
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8002F5F8
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


// address: 0x800301BC
void SetSpell__Fi(int pnum) {
}


// address: 0x80030290
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80030340
void ClearPanel__Fv() {
}


// address: 0x80030370
void InitPanelStr__Fv() {
}


// address: 0x80030390
void InitControlPan__Fv() {
	// register: 3
	register int i;
}


// address: 0x800305B0
void DrawCtrlPan__Fv() {
}


// address: 0x800305DC
void DoAutoMap__Fv() {
}


// address: 0x80030650
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


// address: 0x80030D70
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


// address: 0x80030E80
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


// address: 0x80030F9C
void PrintInfo__Fv() {
	// register: 20
	register int nOffset1;
	// register: 22
	register int w;
	// register: 18
	register int nlines;
	{
		{
			{
				// register: 16
				register int i;
				{
					// register: 17
					register int i;
				}
			}
		}
	}
}


// address: 0x80031258
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


// address: 0x8003190C
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


// address: 0x80031E5C
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80031F04
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


// address: 0x8003206C
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x80032148
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


// address: 0x80032240
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


// address: 0x80033518
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


// address: 0x80033974
void DrawChrTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
}


// address: 0x80033A58
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80033AEC
void CheckChrBtns__Fv() {
	// register: 16
	register int pc;
}


// address: 0x80033E58
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80033EDC
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80033FC4
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x8003405C
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80034274
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


// address: 0x80034C2C
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


// address: 0x80034E60
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80034E94
void _GLOBAL__D_DrawLevelUpFlag() {
}


// address: 0x80034EBC
void _GLOBAL__I_DrawLevelUpFlag() {
}


// address: 0x80034EF8
unsigned short GetTick__C4CPad_addr_80034EF8(struct CPad *this) {
}


// address: 0x80034F20
unsigned short GetDown__C4CPad_addr_80034F20(struct CPad *this) {
}


// address: 0x80034F48
void SetPadTickMask__4CPadUs_addr_80034F48(struct CPad *this, unsigned short mask) {
}


// address: 0x80034F50
void SetPadTick__4CPadUs_addr_80034F50(struct CPad *this, unsigned short tick) {
}


// address: 0x80034F58
void SetRGB__6DialogUcUcUc_addr_80034F58(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80034F78
void SetBack__6Dialogi_addr_80034F78(struct Dialog *this, int Type) {
}


// address: 0x80034F80
void SetBorder__6Dialogi_addr_80034F80(struct Dialog *this, int Type) {
}


// address: 0x80034F88
void ___6Dialog_addr_80034F88(struct Dialog *this, int __in_chrg) {
}


// address: 0x80034FB0
// size: 0x10
struct Dialog *__6Dialog_addr_80034FB0(struct Dialog *this) {
}


// address: 0x8003500C
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8003500C(struct TextDat *this, int PalNum) {
}


// address: 0x80035028
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80035028(struct TextDat *this, int FrNum) {
}


// address: 0x80035044
void InitCursor__Fv() {
}


// address: 0x8003504C
void FreeCursor__Fv() {
}


// address: 0x80035054
void SetICursor__Fi(int i) {
}


// address: 0x800350B0
void SetCursor__Fi(int i) {
}


// address: 0x80035114
void NewCursor__Fi(int i) {
}


// address: 0x80035134
void InitLevelCursor__Fv() {
}


// address: 0x80035194
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


// address: 0x800353EC
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


// address: 0x80035614
void CheckCursMove__Fv() {
}


// address: 0x8003561C
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


// address: 0x80035818
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x80035860
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x800358B0
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x8003590C
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035980
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035A44
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035C2C
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035D9C
unsigned char TryIconCurs__Fv() {
}


// address: 0x80036178
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036180
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036230
void LoadLvlGFX__Fv() {
}


// address: 0x800362CC
void LoadAllGFX__Fv() {
}


// address: 0x800362EC
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800363E4
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x8003656C
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


// address: 0x80036648
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


// address: 0x80036FE8
void game_logic__Fv() {
}


// address: 0x800370F4
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x8003719C
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x800371D4
void alloc_plr__Fv() {
}


// address: 0x800371DC
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x800371E4
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037204
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037224
void app_fatal(char *pszFile) {
}


// address: 0x80037254
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x8003727C
void DoMemCardFromInGame__Fv() {
}


// address: 0x800372A4
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800372F8
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037318
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037360
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800374C0
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80037578
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800376A4
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800377D8
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037908
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A38
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037B68
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CA0
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037DD0
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F00
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038030
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


// address: 0x800382F4
void InitTowners__Fv() {
}


// address: 0x80038380
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


// address: 0x80038424
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038554
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038588
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800385BC
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800386A4
void TownHealer__Fv() {
}


// address: 0x800386CC
void TownStory__Fv() {
}


// address: 0x800386F4
void TownDrunk__Fv() {
}


// address: 0x8003871C
void TownBoy__Fv() {
}


// address: 0x80038744
void TownWitch__Fv() {
}


// address: 0x8003876C
void TownBarMaid__Fv() {
}


// address: 0x80038794
void TownCow__Fv() {
}


// address: 0x800387BC
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


// address: 0x80038A0C
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038AE0
void CowSFX__Fi(int pnum) {
	// address: 0x80122B0C
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012CE40
	static int snLastCowSFX;
}


// address: 0x80038BFC
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038C3C
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


// address: 0x8003A064
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003A06C
void stream_stop__Fv() {
}


// address: 0x8003A0C0
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003A1B0
void stream_update__Fv() {
}


// address: 0x8003A1B8
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003A1D4
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003A22C
void FreeMonsterSnd__Fv() {
}


// address: 0x8003A234
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A338
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A434
void PlayEffect__Fii(int i, int mode) {
	// register: 3
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003A578
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A610
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A650
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A6A4
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


// address: 0x8003A73C
void sound_update__Fv() {
}


// address: 0x8003A770
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A7B4
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003A85C
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003A900
void SetRndSeed__Fl(long s) {
}


// address: 0x8003A910
long GetRndSeed__Fv() {
}


// address: 0x8003A958
long random__Fil(int idx, long v) {
}


// address: 0x8003A9C4
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003AA10
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003AA60
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003AA68
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003AA70
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003AA78
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003AB0C
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003AB38
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFEE8
	// size: 0x100
	auto char tempstr[256];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x8003AC44
void interface_msg_pump__Fv() {
}


// address: 0x8003AC4C
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


// address: 0x8003B184
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003B1BC
void InitItemGFX__Fv() {
}


// address: 0x8003B1E8
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003B2B0
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


// address: 0x8003B4C8
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003B6A0
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


// address: 0x8003C150
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003C4D0
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003C56C
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


// address: 0x8003C6CC
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003C718
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


// address: 0x8003C7F8
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003CA8C
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003CB50
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003CC68
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CC94
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


// address: 0x8003CE10
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003CE18
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CE48
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003D284
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003D55C
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


// address: 0x8003D788
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


// address: 0x8003D8F0
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


// address: 0x8003D9B8
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003DA70
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003DCD8
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


// address: 0x8003DEC8
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


// address: 0x8003E17C
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003E6C8
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003E700
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003E774
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8003FEA0
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


// address: 0x80040308
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80040404
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x8004050C
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x80040750
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


// address: 0x80040990
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80040B04
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


// address: 0x80040C04
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


// address: 0x80040DB4
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x8004105C
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80041194
void ItemRndDur__Fi(int ii) {
}


// address: 0x80041224
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80041530
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x80041778
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x800418A8
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800419F0
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x80041AC8
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x80041B88
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041CCC
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80041EB8
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


// address: 0x80042124
void SpawnRock__Fv() {
	// register: 3
	register int i;
	// register: 17
	register int ii;
	// register: 5
	register int ostand;
	// register: 4
	register int xx;
	// register: 2
	register int yy;
	// register: 4
	register unsigned char done;
}


// address: 0x800422F8
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x800424B0
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80042504
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x800425CC
void ProcessItems__Fv() {
	// register: 19
	register int i;
	// register: 2
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


// address: 0x8004274C
void FreeItemGFX__Fv() {
}


// address: 0x80042754
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


// address: 0x800428FC
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x800429EC
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80042ABC
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80042B80
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80042BF0
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


// address: 0x80042CF0
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80042DE4
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x800434A0
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x800434A8
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043634
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800439A4
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043CB4
void CastScroll__Fii(int pnum, int Spell) {
}


// address: 0x80043CCC
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
}


// address: 0x800442E4
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80044378
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x800443F4
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x800444FC
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct holditem;
}


// address: 0x8004471C
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x80044960
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80044AB0
void SpawnStoreGold__Fv() {
}


// address: 0x80044B34
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80044CD4
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80044D38
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80044EC8
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045044
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x800451C0
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x80045334
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 16
	register int PreIdx;
	// register: 3
	register int SufIdx;
}


// address: 0x80045534
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x8004559C
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 4
	register int y;
	// register: 5
	register int c;
	// register: 3
	register unsigned char *mt;
}


// address: 0x80045618
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x80045684
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


// address: 0x80046334
void DoUnLight__Fv() {
	// register: 9
	register int x;
	// register: 3
	register int y;
	// register: 16
	register int max_x;
	// register: 14
	register int max_y;
	// register: 13
	register int radius_block;
	// register: 12
	register int nXPos;
	// register: 11
	register int nYPos;
	// register: 7
	register unsigned char *r;
	// register: 6
	register unsigned char *g;
	// register: 5
	register unsigned char *b;
}


// address: 0x8004657C
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


// address: 0x80046640
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


// address: 0x80046B50
void FreeLightTable__Fv() {
}


// address: 0x80046B58
void InitLightTable__Fv() {
}


// address: 0x80046B60
void MakeLightTable__Fv() {
}


// address: 0x80046B68
void InitLightMax__Fv() {
}


// address: 0x80046B8C
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80046BD0
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046C3C
void AddUnLight__Fi(int i) {
}


// address: 0x80046C6C
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80046C98
void ChangeLightXY__Fiii(int i, int x, int y) {
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046CD4
void light_fix__Fi(int i) {
}


// address: 0x80046CDC
void ChangeLightOff__Fiii(int i, int x, int y) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046D10
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046D48
void ChangeLightColour__Fii(int i, int c) {
	// register: 4
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046D70
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


// address: 0x80046E94
void SavePreLighting__Fv() {
}


// address: 0x80046E9C
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80046EEC
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 9
	register int vid;
	{
		{
			// register: 3
			// size: 0xE
			register struct LightListStruct *vl;
		}
	}
}


// address: 0x80046F68
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x8004701C
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 9
	register int i;
	// register: 8
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x8004709C
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
	// register: 18
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x8004729C
void FreeQuestText__Fv() {
}


// address: 0x800472A4
void InitQuestText__Fv() {
}


// address: 0x800472B0
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


// address: 0x80047404
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x800475AC
void DrawQTextBack__Fv() {
}


// address: 0x8004761C
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80047704
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


// address: 0x80047A70
void _GLOBAL__D_QBack() {
}


// address: 0x80047A98
void _GLOBAL__I_QBack() {
}


// address: 0x80047AC0
void SetRGB__6DialogUcUcUc_addr_80047AC0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80047AE0
void SetBorder__6Dialogi_addr_80047AE0(struct Dialog *this, int Type) {
}


// address: 0x80047AE8
void ___6Dialog_addr_80047AE8(struct Dialog *this, int __in_chrg) {
}


// address: 0x80047B10
// size: 0x10
struct Dialog *__6Dialog_addr_80047B10(struct Dialog *this) {
}


// address: 0x80047B6C
int GetCharWidth__5CFontc_addr_80047B6C(struct CFont *this, char ch) {
}


// address: 0x80047BC4
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80047BC4(struct TextDat *this, int FrNum) {
}


// address: 0x80047BE0
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80047BE8
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80047BF0
void delta_init__Fv() {
}


// address: 0x80047C50
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047CEC
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047D70
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x80047E00
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


// address: 0x8004812C
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x8004818C
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


// address: 0x80048350
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


// address: 0x800484D8
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x800484FC
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x80048520
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


// address: 0x80048734
int DeltaExportData__FPc(char *Dst) {
	// register: 16
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x800487DC
int DeltaImportData__FPc(char *Src) {
	// register: 16
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80048888
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80048984
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x800489AC
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x800489F8
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x80048A28
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80048A60
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80048AA0
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x80048AE8
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x80048B14
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80048B44
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80048B7C
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80048BF0
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048D24
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048DA0
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048DF8
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048E60
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048F68
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x8004900C
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x8004903C
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80049150
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80049158
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x8004918C
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x800491E8
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80049228
void check_update_plr__Fi(int pnum) {
}


// address: 0x80049230
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800492B0
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800492E0
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049310
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049340
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049370
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800493E4
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004946C
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x800495AC
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


// address: 0x8004977C
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049804
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049938
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


// address: 0x80049B00
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049B4C
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80049C64
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80049D64
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049DBC
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049E48
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049F30
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A008
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A0E4
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004A1C4
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004A2A4
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A2F0
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 19
	// size: 0x4
	register struct TCmdParam1 *p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8004A424
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A4EC
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A5AC
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A670
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A734
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A77C
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A7B4
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A7DC
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A864
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A894
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A978
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A9E4
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AA50
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


// address: 0x8004AB68
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AC54
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AC9C
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AE58
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AED4
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AF50
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFCC
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B048
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B0C0
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B0C8
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B0D0
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B0D8
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B130
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B3A8
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


// address: 0x8004B538
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B588
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5D0
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B610
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B650
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B690
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B6D0
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B718
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


// address: 0x8004B7F4
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012DCE0
	static unsigned char sbLastCmd;
}


// address: 0x8004BC14
// size: 0xF1C
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004BCA4
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x8004BCDC
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004BD08
int InitLevelType__Fi(int l) {
}


// address: 0x8004BD54
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004BEE4
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004BF58
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


// address: 0x8004C1C0
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C2F8
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C444
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004C4CC
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004C50C
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004C5B0
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004C640
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


// address: 0x8004C85C
void FreeObjectGFX__Fv() {
}


// address: 0x8004C868
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004C920
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004CBA4
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004CC04
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004CC2C
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CD38
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CE44
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


// address: 0x8004D054
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


// address: 0x8004D390
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004D3F4
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


// address: 0x8004D6D0
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004D740
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004D8D4
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004D920
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004DA44
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004DD14
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


// address: 0x8004E064
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004E2F4
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004E5D0
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004E608
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


// address: 0x8004E6DC
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E6E4
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E6EC
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004E96C
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004EA10
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004EDB4
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F18C
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F524
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F8BC
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FBC4
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FECC
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


// address: 0x800503C8
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050500
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050614
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x800507CC
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80050878
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x800509FC
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80050B58
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


// address: 0x80050D44
void OperateBook__Fii(int pnum, int i) {
	// register: 21
	register int v1;
	// register: 20
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


// address: 0x8005126C
void OperateBookLever__Fii(int pnum, int i) {
	// register: 20
	register int x;
	// register: 19
	register int y;
	// register: 16
	register int tren;
}


// address: 0x800517FC
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x80051A3C
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x80051E0C
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80051FD8
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x8005218C
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800523E0
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800525B0
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052768
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800528C4
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052A20
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


// address: 0x80052B28
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
						}
					}
				}
			}
		}
	}
}


// address: 0x80053040
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


// address: 0x80053204
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80053274
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


// address: 0x80055850
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800559CC
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055BD0
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055CB8
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80055E28
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80055F18
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x80055FC0
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80056074
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


// address: 0x80056620
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x800567CC
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x800568BC
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80056A20
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80056E58
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056F6C
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057080
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057194
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80057394
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


// address: 0x80057584
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80057AD8
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057C38
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80057C94
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80057DAC
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


// address: 0x80057EE4
void SyncLever__Fi(int i) {
}


// address: 0x80057F60
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x8005806C
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


// address: 0x800581C8
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058330
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005845C
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x8005859C
void GetObjectStr__Fi(int i) {
}


// address: 0x800589B8
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


// address: 0x80058BD4
int GetNumOfFrames__7TextDatii_addr_80058BD4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058C0C
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80058C0C(struct TextDat *this, int Creature) {
}


// address: 0x80058C84
int GetNumOfCreatures__7TextDat_addr_80058C84(struct TextDat *this) {
}


// address: 0x80058C98
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80058CA0
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058CCC
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x80058D80
void SetupLocalPlayer__Fv() {
}


// address: 0x80058DA0
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058DE4
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058DF8
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E18
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E20
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058E3C
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E60
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005909C
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x800594B8
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80059520
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80059690
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


// address: 0x8005989C
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


// address: 0x80059920
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


// address: 0x80059CC0
void InitMultiView__Fv() {
}


// address: 0x80059CC8
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFA0
	// size: 0x60
	auto struct bbssbb bodge[12];
	{
		// register: 4
		register int i;
	}
}


// address: 0x80059D60
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059DE8
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059E7C
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059F70
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059F84
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A010
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A074
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800E03B8
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A0B0
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A0DC
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x8005A214
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A2AC
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A448
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


// address: 0x8005A568
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A688
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A824
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


// address: 0x8005A9EC
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


// address: 0x8005ACF4
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B13C
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 6
	register int i;
	// register: 5
	register int mx;
	// register: 4
	register int pnum;
}


// address: 0x8005B294
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B2B4
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


// address: 0x8005B59C
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B660
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B7A4
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B834
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005B8F0
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B8F8
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005B980
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BCEC
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BE8C
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


// address: 0x8005C4BC
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


// address: 0x8005C86C
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C8FC
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


// address: 0x8005CC88
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CD88
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CE48
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CEE8
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


// address: 0x8005DEAC
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E1EC
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


// address: 0x8005E2E8
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E364
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E4A4
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E4AC
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E8EC
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E954
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


// address: 0x8005EE3C
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EED8
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


// address: 0x8005F20C
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F234
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


// address: 0x8005F3DC
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F3E4
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x18
	register struct Spell_Target *spl;
	// register: 5
	register unsigned char addflag;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
}


// address: 0x8005F7F4
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x8005F91C
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F94C
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FAE8
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FC04
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FCF0
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FDD4
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FEB0
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005FEF4
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FFD0
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060040
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8006011C
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060188
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060190
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800604C0
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800604E8
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x8006052C
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060560
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060594
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800605C8
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x800605FC
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060630
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80060668
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8006069C
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606C4
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606EC
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060714
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x8006075C
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060784
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800607AC
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800607E0
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060808
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x8006084C
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80060880
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800608B4
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80060900
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x8006094C
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060998
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x800609EC
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060A38
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80060A84
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80060AD4
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060B20
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060B6C
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060BB8
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060C04
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060C50
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060C9C
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060CEC
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060D38
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060D88
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060DD4
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060E20
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060E6C
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060EB8
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80060F04
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80060F50
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80060F9C
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80060FE8
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80061034
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80061080
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x800610CC
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x80061100
void PRIM_GetPrim__FPP8POLY_FT4_addr_80061100(struct POLY_FT4 **Prim) {
}


// address: 0x8006117C
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri_addr_8006117C(int PNum) {
}


// address: 0x800611CC
int GetLastOtPos__C7CPlayer_addr_800611CC(struct CPlayer *this) {
}


// address: 0x800611D8
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800611E4
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800611F0
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


// address: 0x80061440
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x800618FC
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


// address: 0x80061AA0
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061B34
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


// address: 0x80062114
void SetReturnLvlPos__Fv() {
}


// address: 0x80062224
void GetReturnLvlPos__Fv() {
}


// address: 0x80062278
void ResyncMPQuests__Fv() {
}


// address: 0x800623B4
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80062914
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


// address: 0x80062B40
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062D08
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062DA0
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062EB8
void QuestlogUp__Fv() {
}


// address: 0x80062F08
void QuestlogDown__Fv() {
}


// address: 0x80062F70
void RemoveQLog__Fv() {
}


// address: 0x80062FE8
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x800630AC
void QuestlogESC__Fv() {
}


// address: 0x800630D4
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80063154
void _GLOBAL__D_questlog() {
}


// address: 0x8006317C
void _GLOBAL__I_questlog() {
}


// address: 0x800631A4
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x800631B0
void SetRGB__6DialogUcUcUc_addr_800631B0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800631D0
void SetBack__6Dialogi_addr_800631D0(struct Dialog *this, int Type) {
}


// address: 0x800631D8
void SetBorder__6Dialogi_addr_800631D8(struct Dialog *this, int Type) {
}


// address: 0x800631E0
void ___6Dialog_addr_800631E0(struct Dialog *this, int __in_chrg) {
}


// address: 0x80063208
// size: 0x10
struct Dialog *__6Dialog_addr_80063208(struct Dialog *this) {
}


// address: 0x80063264
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80063264(struct TextDat *this, int PalNum) {
}


// address: 0x80063280
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80063280(struct TextDat *this, int FrNum) {
}


// address: 0x8006329C
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x80063464
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x8006355C
void FreeStoreMem__Fv() {
}


// address: 0x80063564
void DrawSTextBack__Fv() {
}


// address: 0x800635D4
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
	// address: 0x8012D040
	static unsigned char DaveFix;
}


// address: 0x800639AC
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063A40
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063AD8
void AddSLine__Fi(int y) {
}


// address: 0x80063B28
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063B50
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063C04
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x8006408C
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


// address: 0x800646AC
void S_StartSmith__Fv() {
}


// address: 0x80064834
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800649EC
void S_StartSBuy__Fv() {
}


// address: 0x80064B1C
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


// address: 0x80064D3C
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064E8C
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064F70
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


// address: 0x80065198
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800655C8
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006566C
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006584C
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065D1C
void S_StartWitch__Fv() {
}


// address: 0x80065E5C
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


// address: 0x80066034
void S_StartWBuy__Fv() {
}


// address: 0x80066160
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80066284
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800668DC
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80066964
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066AE4
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066F04
void S_StartNoMoney__Fv() {
}


// address: 0x80066F6C
void S_StartNoRoom__Fv() {
}


// address: 0x80066FCC
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x80067344
void S_StartBoy__Fv() {
}


// address: 0x800674D4
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006765C
void S_StartHealer__Fv() {
}


// address: 0x80067830
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x8006799C
void S_StartHBuy__Fv() {
}


// address: 0x80067ABC
void S_StartStory__Fv() {
}


// address: 0x80067BAC
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067BE0
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067CB4
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068714
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x800688E8
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


// address: 0x80068B18
void S_StartTavern__Fv() {
}


// address: 0x80068C10
void S_StartBarMaid__Fv() {
}


// address: 0x80068CE4
void S_StartDrunk__Fv() {
}


// address: 0x80068DB8
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800690A0
void DrawSText__Fv() {
}


// address: 0x800690E0
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800691A8
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069354
void STextESC__Fv() {
}


// address: 0x800694C8
void STextUp__Fv() {
}


// address: 0x80069660
void STextDown__Fv() {
}


// address: 0x80069810
void S_SmithEnter__Fv() {
}


// address: 0x800698E4
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069960
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800699DC
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069E28
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006A01C
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A240
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A3C8
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


// address: 0x8006A5F8
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


// address: 0x8006A8B0
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


// address: 0x8006AB14
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AE08
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AF0C
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B17C
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B2D8
void S_WitchEnter__Fv() {
}


// address: 0x8006B388
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B588
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B774
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B878
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B9F0
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BB4C
void S_BoyEnter__Fv() {
}


// address: 0x8006BC84
void BoyBuyItem__Fv() {
}


// address: 0x8006BD08
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BFAC
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C194
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C4E0
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C5FC
void S_HealerEnter__Fv() {
}


// address: 0x8006C694
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C8A0
void S_StoryEnter__Fv() {
}


// address: 0x8006C938
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006CAB4
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


// address: 0x8006CCAC
void S_TavernEnter__Fv() {
}


// address: 0x8006CD1C
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CD8C
void S_DrunkEnter__Fv() {
}


// address: 0x8006CDFC
void STextEnter__Fv() {
}


// address: 0x8006D008
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D138
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D14C
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D174
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006D19C
unsigned short GetDown__C4CPad_addr_8006D19C(struct CPad *this) {
}


// address: 0x8006D1C4
void SetRGB__6DialogUcUcUc_addr_8006D1C4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006D1E4
void SetBorder__6Dialogi_addr_8006D1E4(struct Dialog *this, int Type) {
}


// address: 0x8006D1EC
void ___6Dialog_addr_8006D1EC(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006D214
// size: 0x10
struct Dialog *__6Dialog_addr_8006D214(struct Dialog *this) {
}


// address: 0x8006D270
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006D420
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


// address: 0x8006D618
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


// address: 0x8006D708
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


// address: 0x8006DAC8
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


// address: 0x8006DC30
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


// address: 0x8006DD14
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


// address: 0x8006DDAC
void InitVPTriggers__Fv() {
}


// address: 0x8006DDF4
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006E10C
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006E3BC
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x8006E81C
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006EC98
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006F1A4
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


// address: 0x8006F264
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006F358
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006F44C
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006F540
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


// address: 0x8006F85C
void FadeGameOut__Fv() {
}


// address: 0x8006F8F8
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x8006F95C
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


// address: 0x8006FE78
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


// address: 0x80070140
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80070284
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80070324
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x800705D0
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x80070884
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80070AE8
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070AF0
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x80070B58
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80070B78
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070BD8
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80070C68
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070CB8
void music_stop__Fv() {
}


// address: 0x80070CFC
void music_fade__Fv() {
}


// address: 0x80070D3C
void music_start__Fi(int nTrack) {
	{
		{
			// register: 2
			register int MusicVolume;
		}
	}
}


// address: 0x80070DC0
void music_hold__Fv() {
}


// address: 0x80070E20
void music_release__Fv() {
}


// address: 0x80070E70
unsigned char snd_playing__Fi(int SFXNo) {
}


// address: 0x80070E90
void ClrCursor__Fi(int num) {
}


// address: 0x80070EE0
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


// address: 0x8007139C
void CloseInvChr__Fv() {
}


// address: 0x800713EC
int LeftOf__Fi(int dir) {
}


// address: 0x80071404
int RightOf__Fi(int dir) {
}


// address: 0x80071420
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800714CC
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071590
// size: 0x94
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80071684
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x8007168C
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800716D0
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071714
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80071974
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071B24
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80071B80
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80071BBC
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80071C80
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


// address: 0x8007208C
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x800721D0
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x800722C4
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x800723DC
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x80072430
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 20
	register int x;
	// register: 21
	register int y;
	// register: 16
	register int lnd;
	// register: 18
	register int rnd;
	// register: 22
	register int newdir;
	// register: 18
	register int fx;
	// register: 16
	register int fy;
}


// address: 0x8007283C
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072B54
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


// address: 0x80072EF4
void show_combos__7GamePad(struct GamePad *this) {
	// register: 23
	register int x;
	// register: 21
	register int y;
	{
		// register: 19
		register int i;
	}
}


// address: 0x800730CC
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


// address: 0x80073750
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEC0
	// size: 0x94
	auto struct GamePad GPad1;
	// address: 0xFFFFFF58
	// size: 0x94
	auto struct GamePad GPad2;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80073834
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 4
	// size: 0x94
	register struct GamePad *GPad1;
	// register: 8
	// size: 0x94
	register struct GamePad *GPad2;
}


// address: 0x80073918
void Init_GamePad__Fv() {
}


// address: 0x80073948
void InitGamePadVars__Fv() {
}


// address: 0x800739D8
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x80073A48
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad *GPad;
}


// address: 0x80073A70
void MoveToScrollTarget__7CBlocks_addr_80073A70(struct CBlocks *this) {
}


// address: 0x80073A84
unsigned short GetDown__C4CPad_addr_80073A84(struct CPad *this) {
}


// address: 0x80073AAC
unsigned short GetUp__C4CPad_addr_80073AAC(struct CPad *this) {
}


// address: 0x80073AD4
unsigned short GetCur__C4CPad_addr_80073AD4(struct CPad *this) {
}


// address: 0x80073AFC
void DoGameTestStuff__Fv() {
}


// address: 0x80073B28
void DoInitGameStuff__Fv() {
}


// address: 0x80073B5C
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073B7C
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073B9C
void GRL_InitGwin__Fv() {
}


// address: 0x80073BA8
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x80073BB8
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80073BE0
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80073C8C
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x80073CD4
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80073CE0
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


// address: 0x80073E4C
char *GetStr__Fi(int StrId) {
}


// address: 0x80073EB4
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x80073EE8
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


// address: 0x8007404C
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800740A4
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800740B0
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80074178
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x800741F8
void TempPrintMissile__FiiiiiiiiccUcUcUcc(int ScrX, int ScrY, int OtPos, int spell, int aframe, int direction, int anim, int sfx, int xflip, int yflip, int red, int grn, int blu, int semi) {
	// address: 0xFFFFFFB0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// address: 0xFFFFFFB4
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
				}
			}
		}
	}
}


// address: 0x80074630
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x800747B0
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80074910
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800749A8
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074A58
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074ABC
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074BD4
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074C6C
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074D04
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074D6C
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074E0C
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


// address: 0x80074EEC
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


// address: 0x80074FC4
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80075054
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


// address: 0x80075170
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x8007520C
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075274
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800752DC
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80075440
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80075584
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800755EC
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075644
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


// address: 0x80075710
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075774
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007577C
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


// address: 0x80075CA4
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075D4C
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075D54
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075D88
void FuncWEAPEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075DAC
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075DAC(struct POLY_FT4 **Prim) {
}


// address: 0x80075E28
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri_addr_80075E28(int PNum) {
}


// address: 0x80075E78
int GetLastOtPos__C7CPlayer_addr_80075E78(struct CPlayer *this) {
}


// address: 0x80075E84
int GetLastScrY__C7CPlayer_addr_80075E84(struct CPlayer *this) {
}


// address: 0x80075E90
int GetLastScrX__C7CPlayer_addr_80075E90(struct CPlayer *this) {
}


// address: 0x80075E9C
int GetNumOfFrames__7TextDat_addr_80075E9C(struct TextDat *this) {
}


// address: 0x80075EB0
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80075EB0(struct TextDat *this, int FrNum) {
}


// address: 0x80075ECC
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80075F04
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80075F84
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x8007601C
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x800760CC
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


// address: 0x80076288
// size: 0x28
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


// address: 0x8007641C
// size: 0x28
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


// address: 0x800764D4
// size: 0x28
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


// address: 0x80076768
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80076840
// size: 0x28
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800768C8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768F4
// size: 0x28
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076920
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007694C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076978
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769A4
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769C8
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769EC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A18
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A44
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A70
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A9C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AC8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AF4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B20
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B4C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B78
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BA4
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BD0
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BFC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C28
// size: 0x28
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C54
// size: 0x28
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C80
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CAC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CD8
// size: 0x28
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D04
// size: 0x28
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D30
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D5C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D88
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DB4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DE0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E0C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E38
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E64
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E90
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EBC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EE8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F14
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F40
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F6C
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80077000
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80077090
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80077120
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800771B0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80077240
// size: 0x28
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007726C
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077298
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772C4
// size: 0x28
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772F0
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007731C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077348
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077374
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773A0
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773CC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773F8
// size: 0x28
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


// address: 0x80077550
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007761C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x800776E8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077714
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077740
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007776C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077798
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800777BC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800777E8
// size: 0x28
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077814
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077840
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007786C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077898
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800778C4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800778F0
// size: 0x28
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007791C
// size: 0x28
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077948
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077974
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779A0
// size: 0x28
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779CC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779F8
// size: 0x28
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A24
// size: 0x28
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A50
// size: 0x28
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A7C
// size: 0x28
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


// address: 0x80077C10
// size: 0x28
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


// address: 0x80077D98
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077DBC
// size: 0x28
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077DE8
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077E14
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077E40
// size: 0x28
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077E6C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077E98
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077EC4
// size: 0x28
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077EF0
// size: 0x28
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077F1C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077F48
// size: 0x28
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077F74
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077F74(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80077FB0
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077FB0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80077FD8
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077FD8(struct POLY_FT4 **Prim) {
}


// address: 0x80078054
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks_addr_80078054(struct CBlocks *this) {
}


// address: 0x80078060
int GetNumOfFrames__7TextDatii_addr_80078060(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80078098
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80078098(struct TextDat *this, int Creature) {
}


// address: 0x80078110
int GetNumOfCreatures__7TextDat_addr_80078110(struct TextDat *this) {
}


// address: 0x80078124
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80078124(struct TextDat *this, int FrNum) {
}


// address: 0x80078140
void gamemenu_on__Fv() {
}


// address: 0x80078148
void gamemenu_off__Fv() {
}


// address: 0x80078150
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80078158
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80078160
void ResetPal__Fv() {
}


// address: 0x80078168
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80078198
bool GetFadeState__Fv() {
}


// address: 0x800781A4
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright1;
	// register: 8
	register unsigned char bright2;
}


// address: 0x800782A4
void SmearScreen__Fv() {
}


// address: 0x800782AC
void DrawFadedScreen__Fv() {
}


// address: 0x80078300
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800783BC
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007844C
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x800784A4
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078554
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x800785A8
void M_CheckEFlag__Fi(int i) {
}


// address: 0x800785C8
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


// address: 0x80078734
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x80078770
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x800787BC
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x80078804
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80078864
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


// address: 0x80078DD8
void ClearMVars__Fi(int i) {
}


// address: 0x80078E4C
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x80079298
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80079348
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x8007948C
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80079584
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x8007962C
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


// address: 0x8007981C
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x800798FC
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


// address: 0x80079B78
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80079E80
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x8007A17C
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


// address: 0x8007A5CC
int lAddMissile__Fiiici(int sx, int sy, int midir, char micaster, int id) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
	// register: 18
	register int mi;
}


// address: 0x8007A7A0
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 3
	register int mi;
}


// address: 0x8007A8E8
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8007A9F0
void AddInTownPortal__Fi(int i) {
}


// address: 0x8007AA28
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8007AA98
void DeactivatePortal__Fi(int i) {
}


// address: 0x8007AAB8
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8007AAF0
void DelMis__Fii(int mi, int i) {
}


// address: 0x8007AB50
void RemovePortalMissile__Fi(int id) {
	// register: 17
	register int i;
	// register: 18
	register int mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
}


// address: 0x8007ACCC
void SetCurrentPortal__Fi(int p) {
}


// address: 0x8007ACD8
void GetPortalLevel__Fv() {
}


// address: 0x8007AE7C
void GetPortalLvlPos__Fv() {
}


// address: 0x8007AF2C
// size: 0xB8
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x8007AF58
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x8007AF80
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007AFB0
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


// address: 0x8007B054
void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x8007B0BC
// size: 0xF1C
struct DLevel *UseMap__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007B190
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Map) {
}


// address: 0x8007B200
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007B274
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


// address: 0x8007B488
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


// address: 0x8007B628
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


// address: 0x8007B788
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


// address: 0x8007B8C8
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x8007B900
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x8007B938
void GO_DoGameOver__Fv() {
}


// address: 0x8007B97C
void GameOverTask__FP4TASK(struct TASK *T) {
	// register: 17
	register bool OldPause;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8007BA38
void PrintGameOver__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct Dialog PBack;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x8007BB18
void SetRGB__6DialogUcUcUc_addr_8007BB18(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8007BB38
void SetBack__6Dialogi_addr_8007BB38(struct Dialog *this, int Type) {
}


// address: 0x8007BB40
void SetBorder__6Dialogi_addr_8007BB40(struct Dialog *this, int Type) {
}


// address: 0x8007BB48
void ___6Dialog_addr_8007BB48(struct Dialog *this, int __in_chrg) {
}


// address: 0x8007BB70
// size: 0x10
struct Dialog *__6Dialog_addr_8007BB70(struct Dialog *this) {
}


// address: 0x8007BBCC
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x8007BC10
char *VER_GetVerString__Fv() {
}


// address: 0x8007BC20
int CharPair2Num__FPc(char *Str) {
}


// address: 0x8001E698
void TICK_InitModule();

// address: 0x8001E6B8
void TICK_Set(unsigned long Val);

// address: 0x8001E6C8
unsigned long TICK_Get();

// address: 0x8001E6D8
void TICK_Update();

// address: 0x8001E6F8
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001E724
char *TICK_GetDateString();

// address: 0x8001E734
char *TICK_GetTimeString();

// address: 0x8001E744
unsigned char GU_InitModule();

// address: 0x8001E770
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E7A0
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E830
long GU_GetSRnd();

// address: 0x8001E850
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E88C
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001E8B0
void main();

// address: 0x8001E900
unsigned char DBG_OpenModule();

// address: 0x8001E908
void DBG_PollHost();

// address: 0x8001E910
void DBG_Halt();

// address: 0x8001E918
void DBG_SendMessage(char *e);

// address: 0x8001E930
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E940
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E96C
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E97C
void SendPsyqString(char *e);

// address: 0x8001E984
void DBG_SetPollRoutine(void (*Func)());

// address: 0x8001E994
unsigned long GTIMSYS_GetTimer();

// address: 0x8001E9B8
void GTIMSYS_ResetTimer();

// address: 0x8001E9DC
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8001EC10
void DoEpi(struct TASK *T);

// address: 0x8001EC60
void DoPro(struct TASK *T);

// address: 0x8001ECB0
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x8001ED24
// size: 0x5C
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
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F0CC
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x8001F1A8
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8001F230
void TSK_Die();

// address: 0x8001F25C
void TSK_Kill(struct TASK *T);

// address: 0x8001F2AC
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x8001F2BC
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8001F338
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8001F380
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8001F3C4
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x8001F3D4
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x8001F3EC
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x8001F444
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F45C
void TSK_ClearExecFilter();

// address: 0x8001F480
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
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x8001F60C
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8001F620
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8001F634
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8001F648
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x8001F65C
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8001F670
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6BC
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6DC
void LoTskKill(struct TASK *T) {
}


// address: 0x8001F74C
void ExecuteTask(struct TASK *T);

// address: 0x8001F79C
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7B4
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7CC
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7E4
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7FC
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F814
void TSK_ClearEpiProFilter();

// address: 0x8001F848
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8001F858
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x8001F870
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x8001F898
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8001F8C4
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x8001F900
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F910
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001F94C
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F95C
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F974
unsigned char GSYS_InitMachine();

// address: 0x8001F9C8
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001F9FC
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FA78
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001FA88
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
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FC74
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
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FF8C
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020008
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x800200A8
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
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x8002022C
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80020278
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x800202A8
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x800202D8
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80020308
// size: 0x20
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
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x8002046C
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
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x8002061C
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x800207B4
// size: 0x20
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
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x800208A8
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x800208E8
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
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020A70
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020AC4
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020B18
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020B9C
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020BF8
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
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020DA0
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020DF8
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020E28
// size: 0x4
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020E38
char *GAL_GetLastErrorText();

// address: 0x80020E60
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
void GAL_SetTimeStamp(int Time);

// address: 0x80020F40
void GAL_IncTimeStamp();

// address: 0x80020F60
int GAL_GetTimeStamp();

// address: 0x80020F70
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80020FC0
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80021010
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x800210BC
long GAL_GetSize(long hnd) {
}


// address: 0x80021110
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
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80021350
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x800213BC
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
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x800214F0
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
void GAL_MemDump(unsigned long Type);

// address: 0x80021780
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80021790
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x800217BC
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x80021804
int GAL_GetNumFreeHeaders();

// address: 0x80021814
unsigned long GAL_GetLastTypeAlloced();

// address: 0x80021824
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x8002183C
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021890
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x800218A0
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
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80023CA8
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


