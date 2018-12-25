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
// line start: 177
// line end:   178
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007BC64
// line start: 182
// line end:   183
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007BC70
// line start: 114
// line end:   123
void Remove96__Fv() {
}


// address: 0x8007BCA8
// line start: 133
// line end:   207
void AppMain() {
}


// address: 0x8007BD48
// line start: 215
// line end:   216
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007BD74
// line start: 224
// line end:   260
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007BE5C
// line start: 274
// line end:   286
void MAIN_MainLoop__Fv() {
}


// address: 0x8007BEA4
// line start: 76
// line end:   80
void CheckMaxArgs__Fv() {
}


// address: 0x8007BED8
// line start: 96
// line end:   98
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007BEE4
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


// address: 0x8007C058
// line start: 159
// line end:   178
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007C10C
// line start: 220
// line end:   239
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007C1AC
// line start: 249
// line end:   266
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007C248
// line start: 276
// line end:   287
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007C2E8
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


// address: 0x8007C404
// line start: 188
// line end:   206
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007C4E0
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


// address: 0x8007C608
// line start: 249
// line end:   250
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007C614
// line start: 258
// line end:   267
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007C650
// line start: 280
// line end:   346
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007C864
// line start: 370
// line end:   371
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007C870
// line start: 379
// line end:   381
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007C8AC
// line start: 385
// line end:   386
unsigned char ClearedYet__Fv() {
}


// address: 0x8007C8B8
// line start: 394
// line end:   398
void PrimDrawSycnCallBack() {
}


// address: 0x8007C8D8
// line start: 408
// line end:   409
void SendDispEnv__Fv() {
}


// address: 0x8007C8FC
// size: 0x18
// line start: 458
// line end:   462
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007C914
// size: 0x28
// line start: 466
// line end:   470
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007C92C
// size: 0x34
// line start: 474
// line end:   478
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007C944
// size: 0x24
// line start: 483
// line end:   487
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007C95C
// size: 0x14
// line start: 491
// line end:   495
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007C974
// size: 0xC
// line start: 508
// line end:   512
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007C98C
// line start: 516
// line end:   545
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007CAA0
// line start: 551
// line end:   562
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007CB08
// line start: 127
// line end:   128
void VID_AfterDisplay__Fv() {
}


// address: 0x8007CB28
// line start: 182
// line end:   184
void VID_ScrOn__Fv() {
}


// address: 0x8007CB50
// line start: 203
// line end:   209
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007CBA8
// line start: 213
// line end:   214
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007CBB4
// line start: 218
// line end:   219
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007CBC0
// line start: 224
// line end:   230
void VID_DispEnvSend() {
}


// address: 0x8007CBFC
// line start: 236
// line end:   238
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007CC0C
// line start: 242
// line end:   243
int VID_GetXOff__Fv() {
}


// address: 0x8007CC18
// line start: 247
// line end:   248
int VID_GetYOff__Fv() {
}


// address: 0x8007CC24
// line start: 252
// line end:   292
void VID_SetDBuffer__Fb(bool DBuf) {
	{
		{
		}
	}
}


// address: 0x8007CD94
// line start: 96
// line end:   116
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007CD9C
// line start: 148
// line end:   149
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007CDBC
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007CDBC(unsigned short tpage) {
}


// address: 0x8007CDD8
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007CDD8(unsigned short tpage) {
}


// address: 0x8007CDE4
// size: 0x14
// line start: 163
// line end:   164
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007CDF0
// size: 0x14
// line start: 173
// line end:   174
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007CDFC
// line start: 182
// line end:   242
void SortOutFileSystem__Fv() {
}


// address: 0x8007CF38
// line start: 111
// line end:   113
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007CF58
// line start: 117
// line end:   125
void Spanker__Fv() {
}


// address: 0x8007CF98
// line start: 271
// line end:   272
void GaryLiddon__Fv() {
}


// address: 0x8007CFA0
// line start: 65
// line end:   112
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
// line start: 117
// line end:   120
void DummyPoll__Fv() {
}


// address: 0x8007D164
// line start: 123
// line end:   124
void DaveOwens__Fv() {
}


// address: 0x8007D18C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x8007D1B4
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007D1DC
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8007D1E8
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007D1E8(unsigned short tpage) {
}


// address: 0x8007D204
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007D204(unsigned short tpage) {
}


// address: 0x8007D210
// line start: 474
// line end:   502
void TimSwann__Fv() {
}


// address: 0x8007D218
// line start: 25
// line end:   26
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007D220
// line start: 30
// line end:   32
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007D254
// line start: 36
// line end:   39
void leighbird__Fv() {
}


// address: 0x8007D27C
// size: 0x14
// line start: 61
// line end:   63
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007D2CC
// line start: 70
// line end:   71
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007D320
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


// address: 0x8007D488
// line start: 112
// line end:   119
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007D4EC
// line start: 129
// line end:   131
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007D50C
// line start: 138
// line end:   150
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007D5EC
// line start: 157
// line end:   171
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007D6B0
// line start: 180
// line end:   185
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007D714
// line start: 193
// line end:   207
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007D7F0
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


// address: 0x8007D904
// line start: 254
// line end:   274
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007D9AC
// line start: 282
// line end:   286
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007DA04
// line start: 295
// line end:   299
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007DA5C
// line start: 308
// line end:   309
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007DA70
// line start: 317
// line end:   318
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007DAAC
// size: 0x14
// line start: 62
// line end:   65
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007DB14
// line start: 75
// line end:   75
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007DB6C
// line start: 85
// line end:   93
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007DBB0
// line start: 106
// line end:   118
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DC74
// line start: 125
// line end:   139
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007DD2C
// line start: 143
// line end:   160
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DE00
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


// address: 0x8007E010
// size: 0x4
// line start: 65
// line end:   67
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007E028
// line start: 77
// line end:   79
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007E054
// line start: 89
// line end:   101
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007E0D0
// line start: 111
// line end:   119
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007E13C
// size: 0x14
// line start: 65
// line end:   68
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007E178
// line start: 78
// line end:   78
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007E1D0
// line start: 88
// line end:   96
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007E210
// line start: 109
// line end:   121
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007E2D0
// line start: 128
// line end:   142
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007E384
// line start: 146
// line end:   158
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007E42C
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


// address: 0x8007E638
// size: 0x6C
// line start: 116
// line end:   122
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007E678
// line start: 132
// line end:   133
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007E6C0
// line start: 143
// line end:   204
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
// line start: 222
// line end:   250
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
// line start: 253
// line end:   277
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007EA3C
// line start: 292
// line end:   305
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007EA98
// line start: 316
// line end:   323
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007EB08
// line start: 328
// line end:   350
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
// line start: 360
// line end:   418
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
// line start: 434
// line end:   571
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
// line start: 577
// line end:   634
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
// line start: 642
// line end:   676
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
// line start: 681
// line end:   739
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
// line start: 743
// line end:   814
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
// line start: 821
// line end:   848
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
// line start: 853
// line end:   911
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
// line start: 925
// line end:   944
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007FBF4
// size: 0x34
// line start: 950
// line end:   969
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007FD48
// size: 0x28
// line start: 975
// line end:   991
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007FE2C
// line start: 996
// line end:   1034
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007FF80
// line start: 1043
// line end:   1073
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
// line start: 1083
// line end:   1107
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
// line start: 1164
// line end:   1174
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x800801E8
// line start: 1184
// line end:   1219
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x80080330
// size: 0x6C
// line start: 1230
// line end:   1250
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
// line start: 1260
// line end:   1264
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x800804A4
// line start: 1268
// line end:   1286
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
// line start: 1313
// line end:   1314
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x800805C0
// line start: 1318
// line end:   1319
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x80080618
// line start: 1328
// line end:   1358
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
// line start: 1396
// line end:   1422
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
// line start: 1426
// line end:   1428
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x80080860
// line start: 1434
// line end:   1435
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x80080888
// line start: 1439
// line end:   1445
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x80080930
// line start: 1451
// line end:   1479
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
// line start: 1483
// line end:   1487
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x80080A34
// size: 0xE
// line start: 1491
// line end:   1499
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
// line start: 1503
// line end:   1510
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
// line start: 1515
// line end:   1526
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
// line start: 1534
// line end:   1536
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080BF0
// line start: 1549
// line end:   1550
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080C18
// line start: 1554
// line end:   1567
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
// line start: 1572
// line end:   1581
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x80080D1C
// line start: 1613
// line end:   1655
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
// line start: 1669
// line end:   1670
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x80080E24
// line start: 1674
// line end:   1734
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
// line start: 1739
// line end:   1741
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x800810E8
// line start: 1745
// line end:   1774
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x800813C8
// line start: 1782
// line end:   1790
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80081440
// line start: 1794
// line end:   1838
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
// line start: 1876
// line end:   1876
void _GLOBAL__D_DatPool() {
}


// address: 0x800815F4
// line start: 1876
// line end:   1876
void _GLOBAL__I_DatPool() {
}


// address: 0x80081648
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x800816C4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x80081740
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x800817BC
// line start: 243
// line end:   243
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x800817E4
// line start: 242
// line end:   242
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x8008180C
// line start: 241
// line end:   241
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x80081818
// line start: 240
// line end:   240
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x80081824
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008189C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x800818B0
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x800818BC
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x800818D0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x800818EC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80081908
// line start: 167
// line end:   167
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80081914
// line start: 158
// line end:   158
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8008193C
// line start: 157
// line end:   157
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80081964
// line start: 66
// line end:   66
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x80081978
// size: 0x14
// line start: 122
// line end:   125
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x800819BC
// line start: 135
// line end:   135
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80081A14
// line start: 145
// line end:   155
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80081A38
// line start: 167
// line end:   199
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80081ABC
// line start: 208
// line end:   218
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80081AE0
// line start: 224
// line end:   243
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80081BC0
// line start: 260
// line end:   261
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x80081BD0
// line start: 266
// line end:   293
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
// line start: 300
// line end:   372
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
// line start: 381
// line end:   421
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


// address: 0x80082244
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


// address: 0x80082370
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


// address: 0x800824E4
// line start: 230
// line end:   264
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
// line start: 269
// line end:   336
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
// line start: 346
// line end:   367
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
// line start: 377
// line end:   421
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
// line start: 431
// line end:   433
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80082BDC
// line start: 445
// line end:   451
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80082C10
// line start: 461
// line end:   542
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80082CF8
// line start: 552
// line end:   554
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80082D04
// line start: 561
// line end:   563
void BL_WaitForAsyncFinish__Fv() {
}


// address: 0x80082D50
// line start: 568
// line end:   570
void BL_AsyncLoadCallBack__Fi(int handle) {
}


// address: 0x80082D80
// line start: 598
// line end:   645
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
// line start: 655
// line end:   691
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80082FC0
// size: 0x14
// line start: 701
// line end:   705
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80082FEC
// line start: 720
// line end:   727
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80083024
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


// address: 0x800830F8
// line start: 77
// line end:   108
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x8008321C
// line start: 118
// line end:   137
void Tfree__FPv(void *Addr) {
}


// address: 0x800832CC
// line start: 146
// line end:   151
void InitTmalloc__Fv() {
}


// address: 0x800832F4
// line start: 161
// line end:   167
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80083348
// line start: 175
// line end:   187
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80083394
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


// address: 0x80083480
// line start: 238
// line end:   243
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x800834AC
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


// address: 0x8008372C
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


// address: 0x80083A44
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


// address: 0x80083B64
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


// address: 0x80083C68
// line start: 546
// line end:   549
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80083C78
// line start: 559
// line end:   560
bool PA_GetPauseOk__Fv() {
}


// address: 0x80083C84
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


// address: 0x80083DD0
// line start: 597
// line end:   598
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083DD8
// line start: 601
// line end:   614
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083EF4
// line start: 621
// line end:   622
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80083EFC
// line start: 625
// line end:   626
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083F04
// line start: 629
// line end:   642
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80084020
// line start: 649
// line end:   650
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80084028
// line start: 653
// line end:   654
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084030
// line start: 657
// line end:   670
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x8008415C
// line start: 687
// line end:   688
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084164
// line start: 691
// line end:   691
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x8008418C
// line start: 696
// line end:   696
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x800841B4
// line start: 696
// line end:   696
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x800841DC
// size: 0xC
// line start: 112
// line end:   112
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084220
// line start: 83
// line end:   83
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80084254
// size: 0x8
// line start: 82
// line end:   82
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80084268
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80084288
// line start: 98
// line end:   98
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80084290
// line start: 95
// line end:   95
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80084298
// line start: 78
// line end:   78
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x800842C0
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8008431C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8008431C(struct CPad *this) {
}


// address: 0x80084344
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x8008436C
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_8008436C(struct CPad *this) {
}


// address: 0x80084378
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


// address: 0x80084490
// line start: 152
// line end:   201
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
// line start: 215
// line end:   226
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x800846F4
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


// address: 0x8008482C
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


// address: 0x80084988
// line start: 315
// line end:   339
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80084AAC
// line start: 343
// line end:   343
void _GLOBAL__I_Pad0() {
}


// address: 0x80084AE4
// line start: 96
// line end:   96
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x80084AEC
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_80084AEC(struct CPad *this) {
}


// address: 0x80084AF8
// line start: 88
// line end:   88
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x80084B00
// line start: 81
// line end:   81
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x80084B08
// size: 0x6C
// line start: 79
// line end:   79
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80084B3C
// line start: 128
// line end:   132
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80084B60
// line start: 90
// line end:   95
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
// line start: 361
// line end:   373
void InitPrinty__Fv() {
}


// address: 0x80084C9C
// line start: 378
// line end:   379
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80084CA4
// line start: 386
// line end:   450
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80084E3C
// line start: 455
// line end:   636
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
// line start: 641
// line end:   657
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x8008551C
// line start: 665
// line end:   667
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80085580
// line start: 673
// line end:   676
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8008558C
// line start: 91
// line end:   91
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x800855B0
// line start: 88
// line end:   88
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x800855D0
// line start: 85
// line end:   85
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x800855E8
// line start: 71
// line end:   78
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80085640
// line start: 59
// line end:   59
void Init__5CFont(struct CFont *this) {
}


// address: 0x80085674
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80085674(struct TextDat *this, int FrNum) {
}


// address: 0x80085690
// line start: 110
// line end:   113
unsigned char TrimCol__Fs(short col) {
}


// address: 0x800856C8
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


// address: 0x80086040
// size: 0x24
// line start: 391
// line end:   402
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80086178
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


// address: 0x8008641C
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


// address: 0x80086554
// line start: 496
// line end:   552
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x800867AC
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


// address: 0x8008796C
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


// address: 0x80087B84
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80087B84(struct TextDat *this, int PalNum) {
}


// address: 0x80087BA0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80087BA0(struct TextDat *this, int FrNum) {
}


// address: 0x80087BBC
// line start: 67
// line end:   109
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80087D0C
// line start: 114
// line end:   124
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80087DD8
// line start: 226
// line end:   232
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x80087E18
// line start: 237
// line end:   266
void CycleSelCols__Fv() {
}


// address: 0x80087FD0
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


// address: 0x80088044
// line start: 291
// line end:   297
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80088098
// size: 0xE0
// line start: 306
// line end:   360
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x800881EC
// line start: 370
// line end:   372
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088224
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


// address: 0x800882EC
// line start: 402
// line end:   414
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80088374
// line start: 424
// line end:   431
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x800883DC
// line start: 440
// line end:   447
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80088444
// line start: 457
// line end:   462
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x800884A0
// line start: 472
// line end:   478
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x800884F0
// line start: 486
// line end:   521
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x8008883C
// line start: 532
// line end:   542
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x800888E8
// line start: 553
// line end:   564
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x800889BC
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


// address: 0x80088AC4
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


// address: 0x80088C00
// size: 0xC
// line start: 663
// line end:   665
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x80088C78
// line start: 676
// line end:   677
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088CA0
// line start: 687
// line end:   690
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x80088CC8
// line start: 700
// line end:   702
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80088CE0
// line start: 745
// line end:   1230
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
// line start: 1242
// line end:   1265
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
// line start: 1275
// line end:   1653
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
// line start: 1662
// line end:   1840
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
// line start: 1848
// line end:   1868
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
// line start: 1878
// line end:   1879
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B958
// line start: 1889
// line end:   1890
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B96C
// line start: 1900
// line end:   1902
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008BA30
// line start: 1912
// line end:   1920
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 7
	register int XDiff;
	// register: 4
	register int YDiff;
	// register: 6
	register int divnum;
}


// address: 0x8008BAB0
// line start: 1930
// line end:   1940
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008BB50
// line start: 1951
// line end:   1962
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008BC24
// line start: 2019
// line end:   2046
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008BCA4
// line start: 2058
// line end:   2059
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008BCAC
// line start: 2069
// line end:   2070
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008BCC0
// size: 0xE0
// line start: 2106
// line end:   2113
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008BCCC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008BCCC(struct POLY_FT4 **Prim) {
}


// address: 0x8008BD48
// line start: 100
// line end:   108
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008BD90
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008BDCC
// line start: 100
// line end:   108
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008BE14
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008BE14(struct POLY_GT4 **Prim) {
}


// address: 0x8008BE90
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x8008BF0C
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


// address: 0x8008BF34
// line start: 166
// line end:   168
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008BF50
// line start: 173
// line end:   173
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008BF78
// line start: 172
// line end:   172
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008BFA0
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BFC4
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BFE8
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008C010
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008C01C
// line start: 64
// line end:   76
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008C0B4
// line start: 47
// line end:   60
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8008C144
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008C17C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008C17C(struct TextDat *this, int Creature) {
}


// address: 0x8008C1F4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008C1F4(struct TextDat *this) {
}


// address: 0x8008C208
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008C208(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008C214
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008C214(struct TextDat *this, int PalNum) {
}


// address: 0x8008C230
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008C230(struct TextDat *this, int FrNum) {
}


// address: 0x8008C24C
// line start: 119
// line end:   121
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008C278
// line start: 129
// line end:   130
void OVR_LoadPregame__Fv() {
}


// address: 0x8008C2A0
// line start: 137
// line end:   138
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008C2C8
// line start: 146
// line end:   147
void OVR_LoadGame__Fv() {
}


// address: 0x8008C2F0
// line start: 155
// line end:   156
void OVR_LoadFmv__Fv() {
}


// address: 0x8008C318
// line start: 164
// line end:   165
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008C344
// line start: 174
// line end:   178
void ClearOutOverlays__Fv() {
}


// address: 0x8008C39C
// line start: 187
// line end:   194
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008C460
// line start: 203
// line end:   216
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008C4D0
// size: 0x4
// line start: 225
// line end:   226
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x8008C4DC
// line start: 234
// line end:   239
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x8008C530
// line start: 244
// line end:   244
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008C6A0
// size: 0x4
// line start: 65
// line end:   65
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x8008C6AC
// line start: 74
// line end:   75
void StevesDummyPoll__Fv() {
}


// address: 0x8008C6B4
// line start: 78
// line end:   81
void Lambo__Fv() {
}


// address: 0x8008C6BC
// size: 0x84
// line start: 66
// line end:   111
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008C7A0
// line start: 122
// line end:   124
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008C7F8
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008C854
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


// address: 0x8008C9A0
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


// address: 0x8008CDCC
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008CE4C
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


// address: 0x8008D340
// line start: 426
// line end:   484
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008D3BC
// size: 0x4
// line start: 489
// line end:   520
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008D438
// line start: 531
// line end:   532
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008D440
// line start: 541
// line end:   542
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008D448
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008D448(struct POLY_FT4 **Prim) {
}


// address: 0x8008D4C4
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008D4C4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008D500
// line start: 75
// line end:   80
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
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008D53C
// line start: 249
// line end:   253
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008D554
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008D554(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008D58C
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008D5B0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008D5B0(struct TextDat *this, int Creature) {
}


// address: 0x8008D628
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008D628(struct TextDat *this) {
}


// address: 0x8008D63C
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008D63C(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008D648
// line start: 87
// line end:   94
void PROF_Open__Fv() {
}


// address: 0x8008D688
// line start: 99
// line end:   100
bool PROF_State__Fv() {
}


// address: 0x8008D694
// line start: 104
// line end:   105
void PROF_On__Fv() {
}


// address: 0x8008D6A4
// line start: 109
// line end:   110
void PROF_Off__Fv() {
}


// address: 0x8008D6B0
// line start: 114
// line end:   115
void PROF_CpuEnd__Fv() {
}


// address: 0x8008D6E0
// line start: 119
// line end:   120
void PROF_CpuStart__Fv() {
}


// address: 0x8008D704
// line start: 124
// line end:   125
void PROF_DrawStart__Fv() {
}


// address: 0x8008D728
// line start: 129
// line end:   130
void PROF_DrawEnd__Fv() {
}


// address: 0x8008D758
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


// address: 0x8008D94C
// line start: 179
// line end:   180
void PROF_Restart__Fv() {
}


// address: 0x8008D96C
// line start: 180
// line end:   218
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008DA2C
// line start: 229
// line end:   266
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008DADC
// line start: 274
// line end:   281
void GoBackLevel__Fv() {
}


// address: 0x8008DB54
// line start: 285
// line end:   289
void GoWarpLevel__Fv() {
}


// address: 0x8008DB8C
// line start: 295
// line end:   301
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DC28
// line start: 305
// line end:   314
void GoLoadGame__Fv() {
}


// address: 0x8008DC84
// line start: 318
// line end:   324
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DD20
// line start: 328
// line end:   337
void GoNewLevel__Fv() {
}


// address: 0x8008DD74
// line start: 343
// line end:   347
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DE0C
// line start: 354
// line end:   357
void GoForwardLevel__Fv() {
}


// address: 0x8008DE64
// line start: 361
// line end:   365
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DEFC
// line start: 373
// line end:   378
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DF4C
// line start: 382
// line end:   386
void PostNewGame__Fv() {
}


// address: 0x8008DF84
// line start: 395
// line end:   402
void LevelToLevelInit__Fv() {
}


// address: 0x8008DFCC
// line start: 205
// line end:   219
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008E010
// size: 0x10
// line start: 227
// line end:   231
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008E068
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


// address: 0x8008E4E8
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


// address: 0x8008E96C
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


// address: 0x8008EB0C
// line start: 462
// line end:   474
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008EB58
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


// address: 0x8008EF14
// line start: 558
// line end:   577
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008F008
// line start: 583
// line end:   601
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008F10C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008F10C(struct TextDat *this, int PalNum) {
}


// address: 0x8008F128
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008F128(struct TextDat *this, int FrNum) {
}


// address: 0x8008F144
// line start: 151
// line end:   164
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat *CDGfxData;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8008F1FC
// line start: 170
// line end:   172
void InitCDWaitIcon__Fv() {
}


// address: 0x8008F230
// line start: 182
// line end:   199
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008F244
// line start: 395
// line end:   418
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008F28C
// line start: 428
// line end:   438
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
// line start: 444
// line end:   486
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
// line start: 497
// line end:   555
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
// line start: 565
// line end:   625
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008F674
// line start: 635
// line end:   640
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F6CC
// line start: 665
// line end:   696
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008F7D8
// line start: 706
// line end:   710
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F828
// line start: 720
// line end:   724
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F878
// line start: 734
// line end:   752
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F8E4
// line start: 761
// line end:   803
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008F9F0
// line start: 812
// line end:   881
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008FB9C
// line start: 891
// line end:   910
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008FC64
// line start: 921
// line end:   998
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008FE40
// line start: 1010
// line end:   1135
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
// line start: 1148
// line end:   1319
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
// line start: 1333
// line end:   1368
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
// line start: 149
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


// address: 0x80090708
// line start: 170
// line end:   212
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
// line start: 225
// line end:   238
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
// line start: 248
// line end:   258
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x800908F8
// line start: 267
// line end:   280
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012DB9C
	static int DestAddr;
}


// address: 0x80090970
// line start: 285
// line end:   324
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x80090AA4
// line start: 390
// line end:   395
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090AF8
// line start: 419
// line end:   421
void SND_StopSnd__Fi(int voice) {
}


// address: 0x80090B1C
// line start: 431
// line end:   438
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80090B58
// line start: 448
// line end:   453
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090BBC
// line start: 463
// line end:   531
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
// line start: 86
// line end:   87
void AS_CallBack0__Fi(int handle) {
}


// address: 0x80090D8C
// line start: 91
// line end:   92
void AS_CallBack1__Fi(int handle) {
}


// address: 0x80090DA0
// line start: 102
// line end:   125
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80090E7C
// line start: 148
// line end:   164
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x80090F1C
// line start: 174
// line end:   175
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80090F28
// line start: 185
// line end:   189
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x80090F54
// line start: 200
// line end:   242
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x80091074
// line start: 170
// line end:   171
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x800910A8
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x80091138
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80091214
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80091294
// line start: 277
// line end:   293
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x80091334
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x800913C8
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


// address: 0x8009143C
// line start: 353
// line end:   354
void SCR_Handler__Fv() {
}


// address: 0x80091464
// line start: 132
// line end:   132
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8009146C
// size: 0x18
// line start: 110
// line end:   116
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x800914A8
// line start: 98
// line end:   104
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8009150C
// line start: 90
// line end:   93
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80091564
// line start: 83
// line end:   86
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x800915BC
// line start: 97
// line end:   100
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x800915D0
// line start: 89
// line end:   92
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x800915FC
// line start: 82
// line end:   85
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x80091604
// line start: 79
// line end:   79
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8009160C
// line start: 78
// line end:   78
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x80091618
// line start: 73
// line end:   73
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80091650
// size: 0x18
// line start: 67
// line end:   67
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8009165C
// line start: 57
// line end:   63
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8009167C
// line start: 46
// line end:   53
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x800916C8
// line start: 117
// line end:   118
void stub__FPcPv_addr_800916C8(char *e, void *argptr) {
}


// address: 0x800916D0
// line start: 121
// line end:   123
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x80091704
// line start: 127
// line end:   135
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009178C
// line start: 140
// line end:   160
void SetAmbientLight__Fv() {
}


// address: 0x80091810
// line start: 177
// line end:   219
void print_demo_task__FP4TASK(struct TASK *T) {
	{
		{
			// register: 3
			register int x;
		}
	}
}


// address: 0x80091A1C
// line start: 223
// line end:   225
void TonysDummyPoll__Fv() {
}


// address: 0x80091A40
// line start: 229
// line end:   236
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x80091AA0
// line start: 240
// line end:   247
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x80091B00
// line start: 259
// line end:   270
void set_pad_record_play__Fi(int level) {
}


// address: 0x80091B74
// line start: 275
// line end:   283
void start_demo__Fv() {
}


// address: 0x80091C10
// line start: 287
// line end:   288
void SetQuest__Fv() {
}


// address: 0x80091C38
// line start: 292
// line end:   293
int CurrCheatStr__Fv() {
}


// address: 0x80091C58
// line start: 297
// line end:   299
void tony__Fv() {
}


// address: 0x80091C90
// line start: 229
// line end:   230
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x80091C9C
// line start: 240
// line end:   241
int GLUE_GetMonsterList__Fv() {
}


// address: 0x80091CA8
// line start: 251
// line end:   256
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091CFC
// line start: 266
// line end:   271
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091D50
// line start: 281
// line end:   288
void GLUE_PreTown__Fv() {
}


// address: 0x80091DB4
// line start: 297
// line end:   303
void GLUE_PreDun__Fv() {
}


// address: 0x80091E00
// line start: 323
// line end:   324
bool GLUE_Finished__Fv() {
}


// address: 0x80091E0C
// line start: 334
// line end:   335
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80091E18
// line start: 345
// line end:   357
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x80091E9C
// line start: 366
// line end:   370
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091EAC
// line start: 378
// line end:   382
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091EBC
// line start: 390
// line end:   394
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091ECC
// line start: 404
// line end:   424
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x80091FA4
// line start: 435
// line end:   617
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
// line start: 627
// line end:   637
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80092558
// size: 0xC
// line start: 642
// line end:   648
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x800925B4
// size: 0xC
// line start: 652
// line end:   657
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x800925E4
// line start: 661
// line end:   673
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf *Inf;
}


// address: 0x80092644
// line start: 685
// line end:   700
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x800926C4
// size: 0x10
// line start: 713
// line end:   720
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80092770
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x8009277C
// line start: 139
// line end:   139
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x80092784
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80092798
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


// address: 0x80092870
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


// address: 0x80092900
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


// address: 0x80092978
// line start: 245
// line end:   255
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x800929B0
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


// address: 0x80092A14
// line start: 281
// line end:   292
bool RemoveCtrlScreen__Fv() {
}


// address: 0x80092A7C
// line start: 300
// line end:   318
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x80092B34
// line start: 322
// line end:   334
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80092B74
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


// address: 0x80092BB4
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


// address: 0x80092D08
// line start: 403
// line end:   410
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x80092D50
// line start: 417
// line end:   566
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x800931E8
// line start: 573
// line end:   686
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
// line start: 690
// line end:   768
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
// line start: 768
// line end:   768
void _GLOBAL__D_ctrlflag() {
}


// address: 0x80093BC8
// line start: 768
// line end:   768
void _GLOBAL__I_ctrlflag() {
}


// address: 0x80093BF0
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x80093C18
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80093C18(struct CPad *this) {
}


// address: 0x80093C40
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80093C40(struct CPad *this) {
}


// address: 0x80093C68
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x80093C70
// line start: 85
// line end:   85
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x80093C78
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_80093C78(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80093C98
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_80093C98(struct Dialog *this, int Type) {
}


// address: 0x80093CA0
// line start: 85
// line end:   88
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80093CAC
// line start: 78
// line end:   78
void ___6Dialog_addr_80093CAC(struct Dialog *this, int __in_chrg) {
}


// address: 0x80093CD4
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_80093CD4(struct Dialog *this) {
}


// address: 0x80093D30
// line start: 160
// line end:   163
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80093D7C
// line start: 194
// line end:   223
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x80093EBC
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


// address: 0x80094000
// line start: 77
// line end:   82
void ReInitDFL__Fv() {
	// register: 5
	register int *yp;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80094038
// line start: 87
// line end:   141
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
// line start: 147
// line end:   150
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80094430
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


// address: 0x80094694
// line start: 148
// line end:   183
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x8009486C
// line start: 188
// line end:   217
void nightgfx__FibiP8POLY_GT4i(int BlockBase, bool water, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x800948F8
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800948F8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80094934
// line start: 75
// line end:   80
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
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009495C(struct POLY_FT4 **Prim) {
}


// address: 0x800949D8
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_800949D8(struct TextDat *this, int Creature) {
}


// address: 0x800949FC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800949FC(struct TextDat *this, int Creature) {
}


// address: 0x80094A74
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80094A74(struct TextDat *this) {
}


// address: 0x80094A88
// line start: 90
// line end:   91
void DaveLDummyPoll__Fv() {
}


// address: 0x80094A90
// line start: 94
// line end:   96
void DaveL__Fv() {
}


// address: 0x80094AB8
// line start: 107
// line end:   167
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
// line start: 171
// line end:   202
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
// line start: 207
// line end:   221
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x8009517C
// line start: 224
// line end:   259
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
// line start: 265
// line end:   296
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
// line start: 301
// line end:   314
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
// line start: 319
// line end:   340
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
// line start: 345
// line end:   371
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x800958A8
// line start: 375
// line end:   388
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x8009599C
// line start: 393
// line end:   395
void doparticlejump__Fv() {
}


// address: 0x800959DC
// line start: 399
// line end:   418
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80095B44
// line start: 423
// line end:   505
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
// line start: 510
// line end:   525
void ParticleBlob__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80095FF4
// line start: 529
// line end:   546
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x800960B4
// line start: 550
// line end:   599
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
// line start: 604
// line end:   619
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x800965D0
// line start: 624
// line end:   639
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009666C
// line start: 644
// line end:   661
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
// line start: 665
// line end:   680
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
// line start: 685
// line end:   687
void HealStart__Fi(int plr) {
}


// address: 0x80096900
// line start: 691
// line end:   694
void HealotherStart__Fi(int plr) {
}


// address: 0x80096938
// line start: 698
// line end:   701
void TeleStart__Fi(int plr) {
}


// address: 0x80096994
// line start: 706
// line end:   708
void PhaseStart__Fi(int plr) {
}


// address: 0x800969C8
// line start: 713
// line end:   715
void PhaseEnd__Fi(int plr) {
}


// address: 0x800969F4
// line start: 721
// line end:   744
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
// line start: 749
// line end:   752
void ApocaStart__Fi(int plr) {
}


// address: 0x80096C28
// line start: 757
// line end:   775
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80096CC4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x80096D40
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80096DBC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096DBC(struct POLY_FT4 **Prim) {
}


// address: 0x80096E38
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80096E88
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80096E94
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80096E94(struct TextDat *this, int FrNum) {
}


// address: 0x80096EB0
// line start: 90
// line end:   117
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
// line start: 125
// line end:   234
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
// line start: 246
// line end:   258
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x800975C0
// line start: 266
// line end:   275
void select_belt_item__Fi(int pnum) {
}


// address: 0x800975C8
// line start: 283
// line end:   292
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097630
// line start: 299
// line end:   317
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097760
// line start: 323
// line end:   343
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097898
// line start: 352
// line end:   354
void pad_func_up__Fi(int pnum) {
}


// address: 0x800978C4
// line start: 362
// line end:   364
void pad_func_down__Fi(int pnum) {
}


// address: 0x800978F0
// line start: 372
// line end:   373
void pad_func_left__Fi(int pnum) {
}


// address: 0x800978F8
// line start: 380
// line end:   381
void pad_func_right__Fi(int pnum) {
}


// address: 0x80097900
// line start: 399
// line end:   410
void pad_func_select__Fi(int pnum) {
}


// address: 0x800979BC
// line start: 422
// line end:   495
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
// line start: 502
// line end:   551
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
// line start: 555
// line end:   575
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
// line start: 579
// line end:   598
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x8009832C
// line start: 605
// line end:   728
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
// line start: 735
// line end:   740
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x800987D4
// line start: 749
// line end:   762
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x800988DC
// line start: 767
// line end:   781
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800989D4
// line start: 787
// line end:   798
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x80098AC0
// line start: 803
// line end:   807
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80098B44
// line start: 821
// line end:   825
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80098BDC
// line start: 856
// line end:   867
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80098C98
// line start: 882
// line end:   890
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
// line start: 913
// line end:   950
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
// line start: 958
// line end:   959
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80098F04
// line start: 969
// line end:   970
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80098F2C
// line start: 975
// line end:   990
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
// line start: 994
// line end:   1012
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80099178
// line start: 1016
// line end:   1157
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
// line start: 1161
// line end:   1185
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
// line start: 1194
// line end:   1200
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80099BE0
// line start: 1209
// line end:   1279
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80099FA0
// line start: 1284
// line end:   1341
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
// line start: 1386
// line end:   1411
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8009A49C
// line start: 1412
// line end:   1412
void _GLOBAL__D_gplayer() {
}


// address: 0x8009A4C4
// line start: 1412
// line end:   1412
void _GLOBAL__I_gplayer() {
}


// address: 0x8009A4EC
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8009A4EC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009A50C
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_8009A50C(struct Dialog *this, int Type) {
}


// address: 0x8009A514
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8009A514(struct Dialog *this, int Type) {
}


// address: 0x8009A51C
// line start: 78
// line end:   78
void ___6Dialog_addr_8009A51C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009A544
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8009A544(struct Dialog *this) {
}


// address: 0x8009A5A0
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009A5A0(struct CPad *this) {
}


// address: 0x8009A5C8
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009A5C8(struct CPad *this) {
}


// address: 0x8009A5F0
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_8009A5F0(struct CPad *this) {
}


// address: 0x8009A618
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_8009A618(struct CPad *this, unsigned short mask) {
}


// address: 0x8009A620
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_8009A620(struct CPad *this, unsigned short tick) {
}


// address: 0x8009A628
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009A6A4
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009A6FC
// line start: 102
// line end:   107
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8009A758
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009A790
// line start: 130
// line end:   136
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009A7C8
// line start: 142
// line end:   147
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009A828
// line start: 158
// line end:   159
bool IsGameLoading__Fv() {
}


// address: 0x8009A834
// line start: 169
// line end:   245
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
// line start: 257
// line end:   286
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x8009AD68
// line start: 296
// line end:   314
void TakeDownCutScreen__Fv() {
}


// address: 0x8009ADF4
// line start: 325
// line end:   331
void FinishProgress__Fv() {
}


// address: 0x8009AE58
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009AE58(struct POLY_G4 **Prim) {
}


// address: 0x8009AED4
// line start: 335
// line end:   335
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009AF0C
// line start: 335
// line end:   335
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x8009AF44
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8009AF44(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009AF64
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_8009AF64(struct Dialog *this, int Type) {
}


// address: 0x8009AF6C
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8009AF6C(struct Dialog *this, int Type) {
}


// address: 0x8009AF74
// line start: 78
// line end:   78
void ___6Dialog_addr_8009AF74(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009AF9C
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8009AF9C(struct Dialog *this) {
}


// address: 0x8009AFF8
// line start: 345
// line end:   123
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8009B018
// line start: 105
// line end:   185
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x8009B234
// line start: 189
// line end:   213
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009B23C
// line start: 218
// line end:   222
void init_card__Fi(int card_number) {
}


// address: 0x8009B270
// line start: 227
// line end:   240
int ping_card__Fi(int card_number) {
}


// address: 0x8009B304
// line start: 244
// line end:   250
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009B33C
// line start: 255
// line end:   266
void MemcardON__Fv() {
}


// address: 0x8009B3AC
// line start: 272
// line end:   280
void MemcardOFF__Fv() {
}


// address: 0x8009B3FC
// line start: 286
// line end:   304
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
}


// address: 0x8009B490
// line start: 625
// line end:   642
void PrintSelectBack__FbT0(bool S, bool B) {
	// register: 17
	register int len;
}


// address: 0x8009B610
// line start: 650
// line end:   659
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009B6F4
// line start: 675
// line end:   798
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
// line start: 804
// line end:   1048
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
// line start: 1052
// line end:   1061
int who_pressed__Fi(int pval) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad1;
}


// address: 0x8009C8D8
// line start: 1076
// line end:   1284
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
// line start: 1287
// line end:   1509
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
// line start: 1515
// line end:   1515
void UnBounce__Fv() {
}


// address: 0x8009D680
// line start: 1534
// line end:   1765
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
// line start: 1773
// line end:   1876
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
// line start: 1882
// line end:   1907
void CalcVolumes__Fv() {
}


// address: 0x8009E370
// line start: 1914
// line end:   1935
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
// line start: 1943
// line end:   1960
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009E620
// line start: 1978
// line end:   2017
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
// line start: 2027
// line end:   2323
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
// line start: 2329
// line end:   2353
void ToggleOptions__Fv() {
}


// address: 0x8009F164
// line start: 2360
// line end:   2440
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
// line start: 2443
// line end:   2455
void ActivateMemcard__Fv() {
}


// address: 0x8009F4F4
// line start: 2460
// line end:   2484
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
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009F660(struct POLY_G4 **Prim) {
}


// address: 0x8009F6DC
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009F6DC(struct CPad *this) {
}


// address: 0x8009F704
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009F704(struct CPad *this) {
}


// address: 0x8009F72C
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_8009F72C(struct CPad *this) {
}


// address: 0x8009F754
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_8009F754(struct CPad *this, unsigned short mask) {
}


// address: 0x8009F75C
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_8009F75C(struct CPad *this, unsigned short tick) {
}


// address: 0x8009F764
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8009F764(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009F784
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_8009F784(struct Dialog *this, int Type) {
}


// address: 0x8009F78C
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8009F78C(struct Dialog *this, int Type) {
}


// address: 0x8009F794
// line start: 85
// line end:   88
int SetOTpos__6Dialogi_addr_8009F794(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8009F7A0
// line start: 78
// line end:   78
void ___6Dialog_addr_8009F7A0(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009F7C8
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8009F7C8(struct Dialog *this) {
}


// address: 0x8009F824
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009F824(struct TextDat *this, int FrNum) {
}


// address: 0x8009F840
// line start: 72
// line end:   79
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009F898
// line start: 88
// line end:   129
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x8009F9DC
// line start: 139
// line end:   149
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009FA58
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


// address: 0x8009FBE4
// line start: 192
// line end:   201
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009FC38
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


// address: 0x8009FDA0
// line start: 246
// line end:   266
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FEA4
// line start: 277
// line end:   284
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FF10
// line start: 293
// line end:   309
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FF94
// line start: 317
// line end:   330
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A0040
// line start: 335
// line end:   362
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
// line start: 370
// line end:   382
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A01FC
// line start: 391
// line end:   414
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
// line start: 422
// line end:   474
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
// line start: 484
// line end:   492
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A05A4
// line start: 503
// line end:   510
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A0610
// line start: 520
// line end:   537
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
// line start: 545
// line end:   564
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
// line start: 588
// line end:   607
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
// line start: 619
// line end:   660
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
// line start: 668
// line end:   697
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x800A0AF8
// line start: 703
// line end:   723
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x800A0C28
// line start: 728
// line end:   747
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x800A0D34
// line start: 786
// line end:   848
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
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0F40(struct POLY_FT4 **Prim) {
}


// address: 0x800A0FBC
// line start: 90
// line end:   134
short PlayFMV__FPcii(char *str, int w, int h) {
	// register: 16
	register short RetVal;
	// register: 19
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x800A107C
// line start: 139
// line end:   153
void play_movie(char *pszMovie) {
	{
		{
			{
			}
		}
	}
}


// address: 0x800A1138
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


// address: 0x800A15D4
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A15D4(struct CPad *this) {
}


// address: 0x800A15FC
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800A15FC(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A1634
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800A1634(struct TextDat *this, int Creature) {
}


// address: 0x800A16AC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800A16AC(struct TextDat *this) {
}


// address: 0x800A16C0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A16C0(struct TextDat *this, int FrNum) {
}


// address: 0x800A16DC
// line start: 44
// line end:   67
void LoadKanjiFont__FPc(char *name) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A17CC
// line start: 72
// line end:   97
void LoadKanjiIndex__FPc(char *name) {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A18DC
// line start: 102
// line end:   120
void FreeKanji__Fv() {
}


// address: 0x800A1964
// line start: 127
// line end:   149
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto char tmp[40];
	// register: 16
	register char *bname;
}


// address: 0x800A1A38
// line start: 155
// line end:   173
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
// line start: 184
// line end:   206
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
// line start: 214
// line end:   255
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
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A1CE4(struct POLY_FT4 **Prim) {
}


// address: 0x800A1D60
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


// address: 0x800A1E48
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


// address: 0x800A2088
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


// address: 0x800A2128
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


// address: 0x8002F3F8
// line start: 709
// line end:   710
void SetSpellTrans__Fc(char t) {
}


// address: 0x8002F404
// line start: 718
// line end:   735
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8002F4A0
// line start: 740
// line end:   751
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
// line start: 757
// line end:   789
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8002F5F8
// line start: 815
// line end:   1113
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
// line start: 1119
// line end:   1131
void SetSpell__Fi(int pnum) {
}


// address: 0x80030290
// line start: 1142
// line end:   1145
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80030340
// line start: 1152
// line end:   1154
void ClearPanel__Fv() {
}


// address: 0x80030370
// line start: 1207
// line end:   1208
void InitPanelStr__Fv() {
}


// address: 0x80030390
// line start: 1294
// line end:   1441
void InitControlPan__Fv() {
	// register: 3
	register int i;
}


// address: 0x800305B0
// line start: 1447
// line end:   1450
void DrawCtrlPan__Fv() {
}


// address: 0x800305DC
// line start: 1530
// line end:   1542
void DoAutoMap__Fv() {
}


// address: 0x80030650
// line start: 1549
// line end:   1640
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
// line start: 1714
// line end:   1730
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
// line start: 1752
// line end:   1780
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
// line start: 1823
// line end:   1866
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
// line start: 1872
// line end:   1991
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
// line start: 2044
// line end:   2156
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
// line start: 2162
// line end:   2178
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80031F04
// line start: 2201
// line end:   2237
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
// line start: 2244
// line end:   2257
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x80032148
// line start: 2265
// line end:   2286
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
// line start: 2291
// line end:   2485
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
// line start: 2490
// line end:   2583
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
// line start: 2637
// line end:   2658
void DrawChrTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
}


// address: 0x80033A58
// line start: 2667
// line end:   2675
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80033AEC
// line start: 2680
// line end:   2717
void CheckChrBtns__Fv() {
	// register: 16
	register int pc;
}


// address: 0x80033E58
// line start: 2724
// line end:   2764
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80033EDC
// line start: 2772
// line end:   2786
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80033FC4
// line start: 2792
// line end:   2799
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x8003405C
// line start: 2806
// line end:   2818
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80034274
// line start: 2845
// line end:   3030
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
// line start: 3039
// line end:   3082
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
// line start: 3096
// line end:   3098
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80034E94
// line start: 3607
// line end:   3607
void _GLOBAL__D_DrawLevelUpFlag() {
}


// address: 0x80034EBC
// line start: 3607
// line end:   3607
void _GLOBAL__I_DrawLevelUpFlag() {
}


// address: 0x80034EF8
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80034EF8(struct CPad *this) {
}


// address: 0x80034F20
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80034F20(struct CPad *this) {
}


// address: 0x80034F48
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_80034F48(struct CPad *this, unsigned short mask) {
}


// address: 0x80034F50
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_80034F50(struct CPad *this, unsigned short tick) {
}


// address: 0x80034F58
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_80034F58(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80034F78
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_80034F78(struct Dialog *this, int Type) {
}


// address: 0x80034F80
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_80034F80(struct Dialog *this, int Type) {
}


// address: 0x80034F88
// line start: 78
// line end:   78
void ___6Dialog_addr_80034F88(struct Dialog *this, int __in_chrg) {
}


// address: 0x80034FB0
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_80034FB0(struct Dialog *this) {
}


// address: 0x8003500C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8003500C(struct TextDat *this, int PalNum) {
}


// address: 0x80035028
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80035028(struct TextDat *this, int FrNum) {
}


// address: 0x80035044
// line start: 126
// line end:   132
void InitCursor__Fv() {
}


// address: 0x8003504C
// line start: 137
// line end:   142
void FreeCursor__Fv() {
}


// address: 0x80035054
// line start: 148
// line end:   158
void SetICursor__Fi(int i) {
}


// address: 0x800350B0
// line start: 165
// line end:   173
void SetCursor__Fi(int i) {
}


// address: 0x80035114
// line start: 179
// line end:   180
void NewCursor__Fi(int i) {
}


// address: 0x80035134
// line start: 186
// line end:   201
void InitLevelCursor__Fv() {
}


// address: 0x80035194
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


// address: 0x800353EC
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


// address: 0x80035614
// line start: 264
// line end:   756
void CheckCursMove__Fv() {
}


// address: 0x8003561C
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


// address: 0x80035818
// line start: 98
// line end:   102
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x80035860
// line start: 284
// line end:   297
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x800358B0
// line start: 304
// line end:   320
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x8003590C
// line start: 325
// line end:   342
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035980
// line start: 358
// line end:   396
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035A44
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


// address: 0x80035C2C
// line start: 491
// line end:   607
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035D9C
// line start: 1041
// line end:   1121
unsigned char TryIconCurs__Fv() {
}


// address: 0x80036178
// line start: 2144
// line end:   2191
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036180
// line start: 2198
// line end:   2358
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036230
// line start: 2365
// line end:   2432
void LoadLvlGFX__Fv() {
}


// address: 0x800362CC
// line start: 2440
// line end:   2452
void LoadAllGFX__Fv() {
}


// address: 0x800362EC
// line start: 2473
// line end:   2493
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800363E4
// line start: 2502
// line end:   2556
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x8003656C
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


// address: 0x80036648
// line start: 2592
// line end:   2928
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
// line start: 2941
// line end:   2993
void game_logic__Fv() {
}


// address: 0x800370F4
// line start: 3003
// line end:   3033
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x8003719C
// line start: 3041
// line end:   3096
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x800371D4
// line start: 3163
// line end:   3168
void alloc_plr__Fv() {
}


// address: 0x800371DC
// line start: 3231
// line end:   3289
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x800371E4
// line start: 3296
// line end:   3298
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037204
// line start: 3303
// line end:   3305
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037224
// line start: 3308
// line end:   3309
void app_fatal(char *pszFile) {
}


// address: 0x80037254
// line start: 3568
// line end:   3574
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x8003727C
// line start: 3578
// line end:   3584
void DoMemCardFromInGame__Fv() {
}


// address: 0x800372A4
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800372F8
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037318
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037360
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800374C0
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


// address: 0x80037578
// line start: 181
// line end:   190
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800376A4
// line start: 196
// line end:   206
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800377D8
// line start: 211
// line end:   220
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037908
// line start: 225
// line end:   234
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A38
// line start: 239
// line end:   248
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037B68
// line start: 253
// line end:   263
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CA0
// line start: 268
// line end:   277
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037DD0
// line start: 283
// line end:   292
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F00
// line start: 297
// line end:   306
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038030
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


// address: 0x800382F4
// line start: 344
// line end:   358
void InitTowners__Fv() {
}


// address: 0x80038380
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


// address: 0x80038424
// line start: 384
// line end:   397
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038554
// line start: 406
// line end:   414
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038588
// line start: 422
// line end:   429
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800385BC
// line start: 437
// line end:   449
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800386A4
// line start: 455
// line end:   457
void TownHealer__Fv() {
}


// address: 0x800386CC
// line start: 464
// line end:   467
void TownStory__Fv() {
}


// address: 0x800386F4
// line start: 474
// line end:   477
void TownDrunk__Fv() {
}


// address: 0x8003871C
// line start: 484
// line end:   487
void TownBoy__Fv() {
}


// address: 0x80038744
// line start: 495
// line end:   498
void TownWitch__Fv() {
}


// address: 0x8003876C
// line start: 505
// line end:   507
void TownBarMaid__Fv() {
}


// address: 0x80038794
// line start: 514
// line end:   517
void TownCow__Fv() {
}


// address: 0x800387BC
// line start: 524
// line end:   575
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
// line start: 581
// line end:   586
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038AE0
// line start: 595
// line end:   641
void CowSFX__Fi(int pnum) {
	// address: 0x80122B0C
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012CE40
	static int snLastCowSFX;
}


// address: 0x80038BFC
// line start: 647
// line end:   654
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038C3C
// line start: 661
// line end:   1057
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
// line start: 77
// line end:   88
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003A06C
// line start: 96
// line end:   102
void stream_stop__Fv() {
}


// address: 0x8003A0C0
// line start: 115
// line end:   149
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003A1B0
// line start: 155
// line end:   171
void stream_update__Fv() {
}


// address: 0x8003A1B8
// line start: 177
// line end:   184
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003A1D4
// line start: 191
// line end:   222
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003A22C
// line start: 228
// line end:   251
void FreeMonsterSnd__Fv() {
}


// address: 0x8003A234
// line start: 257
// line end:   277
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A338
// line start: 284
// line end:   315
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A434
// line start: 324
// line end:   369
void PlayEffect__Fii(int i, int mode) {
	// register: 3
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003A578
// line start: 376
// line end:   398
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A610
// line start: 413
// line end:   416
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A650
// line start: 424
// line end:   434
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A6A4
// line start: 441
// line end:   456
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
// line start: 463
// line end:   473
void sound_update__Fv() {
}


// address: 0x8003A770
// line start: 481
// line end:   512
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A7B4
// line start: 518
// line end:   531
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003A85C
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


// address: 0x8003A900
// line start: 91
// line end:   94
void SetRndSeed__Fl(long s) {
}


// address: 0x8003A910
// line start: 99
// line end:   104
long GetRndSeed__Fv() {
}


// address: 0x8003A958
// line start: 110
// line end:   116
long random__Fil(int idx, long v) {
}


// address: 0x8003A9C4
// line start: 368
// line end:   418
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003AA10
// line start: 429
// line end:   475
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003AA60
// line start: 487
// line end:   497
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003AA68
// line start: 565
// line end:   584
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003AA70
// line start: 1104
// line end:   1104
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003AA78
// line start: 154
// line end:   165
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003AB0C
// line start: 171
// line end:   174
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003AB38
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


// address: 0x8003AC44
// line start: 299
// line end:   308
void interface_msg_pump__Fv() {
}


// address: 0x8003AC4C
// line start: 333
// line end:   571
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
// line start: 969
// line end:   971
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003B1BC
// line start: 508
// line end:   519
void InitItemGFX__Fv() {
}


// address: 0x8003B1E8
// line start: 525
// line end:   532
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003B2B0
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


// address: 0x8003B4C8
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


// address: 0x8003B6A0
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


// address: 0x8003C150
// line start: 895
// line end:   925
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003C4D0
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


// address: 0x8003C56C
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


// address: 0x8003C6CC
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003C718
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


// address: 0x8003C7F8
// line start: 1023
// line end:   1046
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003CA8C
// line start: 1051
// line end:   1061
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003CB50
// line start: 1067
// line end:   1098
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003CC68
// line start: 1104
// line end:   1105
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CC94
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


// address: 0x8003CE10
// line start: 1133
// line end:   1134
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003CE18
// line start: 1140
// line end:   1145
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CE48
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003D284
// line start: 1269
// line end:   1298
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003D55C
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


// address: 0x8003D788
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


// address: 0x8003D8F0
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


// address: 0x8003D9B8
// line start: 1408
// line end:   1414
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003DA70
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


// address: 0x8003DCD8
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


// address: 0x8003DEC8
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


// address: 0x8003E17C
// line start: 1650
// line end:   1740
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003E6C8
// line start: 1749
// line end:   1750
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003E700
// line start: 1757
// line end:   1760
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003E774
// line start: 1767
// line end:   2049
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8003FEA0
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


// address: 0x80040308
// line start: 2162
// line end:   2192
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80040404
// line start: 2198
// line end:   2225
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x8004050C
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


// address: 0x80040750
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


// address: 0x80040990
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


// address: 0x80040B04
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


// address: 0x80040C04
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


// address: 0x80040DB4
// line start: 2411
// line end:   2433
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x8004105C
// line start: 2440
// line end:   2458
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80041194
// line start: 2469
// line end:   2473
void ItemRndDur__Fi(int ii) {
}


// address: 0x80041224
// line start: 2480
// line end:   2518
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80041530
// line start: 2526
// line end:   2569
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x80041778
// line start: 2577
// line end:   2591
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x800418A8
// line start: 2601
// line end:   2616
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800419F0
// line start: 2628
// line end:   2638
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x80041AC8
// line start: 2642
// line end:   2652
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x80041B88
// line start: 2661
// line end:   2676
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041CCC
// line start: 2688
// line end:   2712
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80041EB8
// line start: 2719
// line end:   2758
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
// line start: 2765
// line end:   2791
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
// line start: 2799
// line end:   2831
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x800424B0
// line start: 2838
// line end:   2842
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80042504
// line start: 2852
// line end:   2867
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x800425CC
// line start: 2882
// line end:   2932
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
// line start: 2939
// line end:   2944
void FreeItemGFX__Fv() {
}


// address: 0x80042754
// line start: 2963
// line end:   2988
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
// line start: 2994
// line end:   3004
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x800429EC
// line start: 3009
// line end:   3033
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80042ABC
// line start: 3037
// line end:   3050
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80042B80
// line start: 3055
// line end:   3068
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80042BF0
// line start: 3072
// line end:   3090
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
// line start: 3195
// line end:   3319
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80042DE4
// line start: 3325
// line end:   3538
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x800434A0
// line start: 3582
// line end:   3610
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x800434A8
// line start: 3623
// line end:   3666
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043634
// line start: 3673
// line end:   3718
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800439A4
// line start: 3724
// line end:   3764
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043CB4
// line start: 3771
// line end:   3774
void CastScroll__Fii(int pnum, int Spell) {
}


// address: 0x80043CCC
// line start: 3782
// line end:   3972
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
// line start: 3982
// line end:   3987
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80044378
// line start: 4006
// line end:   4021
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x800443F4
// line start: 4027
// line end:   4046
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
// line start: 4054
// line end:   4079
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
// line start: 4088
// line end:   4107
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x80044960
// line start: 4120
// line end:   4135
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80044AB0
// line start: 4166
// line end:   4170
void SpawnStoreGold__Fv() {
}


// address: 0x80044B34
// line start: 4219
// line end:   4230
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80044CD4
// line start: 4242
// line end:   4250
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80044D38
// line start: 4269
// line end:   4291
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80044EC8
// line start: 4299
// line end:   4320
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045044
// line start: 4328
// line end:   4349
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x800451C0
// line start: 4488
// line end:   4529
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x80045334
// line start: 4683
// line end:   4787
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 16
	register int PreIdx;
	// register: 3
	register int SufIdx;
}


// address: 0x80045534
// line start: 319
// line end:   334
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x8004559C
// line start: 380
// line end:   405
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
// line start: 410
// line end:   417
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x80045684
// line start: 421
// line end:   771
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
// line start: 777
// line end:   831
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
// line start: 838
// line end:   853
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
// line start: 860
// line end:   964
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
// line start: 969
// line end:   970
void FreeLightTable__Fv() {
}


// address: 0x80046B58
// line start: 976
// line end:   977
void InitLightTable__Fv() {
}


// address: 0x80046B60
// line start: 982
// line end:   983
void MakeLightTable__Fv() {
}


// address: 0x80046B68
// line start: 1074
// line end:   1077
void InitLightMax__Fv() {
}


// address: 0x80046B8C
// line start: 1084
// line end:   1095
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80046BD0
// line start: 1101
// line end:   1119
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046C3C
// line start: 1124
// line end:   1130
void AddUnLight__Fi(int i) {
}


// address: 0x80046C6C
// line start: 1135
// line end:   1146
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80046C98
// line start: 1151
// line end:   1163
void ChangeLightXY__Fiii(int i, int x, int y) {
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046CD4
// line start: 1166
// line end:   1172
void light_fix__Fi(int i) {
}


// address: 0x80046CDC
// line start: 1182
// line end:   1195
void ChangeLightOff__Fiii(int i, int x, int y) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046D10
// line start: 1200
// line end:   1213
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046D48
// line start: 1216
// line end:   1218
void ChangeLightColour__Fii(int i, int c) {
	// register: 4
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046D70
// line start: 1224
// line end:   1291
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
// line start: 1296
// line end:   1323
void SavePreLighting__Fv() {
}


// address: 0x80046E9C
// line start: 1328
// line end:   1335
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80046EEC
// line start: 1342
// line end:   1358
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
// line start: 1381
// line end:   1394
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x8004701C
// line start: 1399
// line end:   1415
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 9
	register int i;
	// register: 8
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x8004709C
// line start: 1444
// line end:   1491
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
// line start: 110
// line end:   113
void FreeQuestText__Fv() {
}


// address: 0x800472A4
// line start: 117
// line end:   121
void InitQuestText__Fv() {
}


// address: 0x800472B0
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


// address: 0x80047404
// line start: 176
// line end:   225
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x800475AC
// line start: 230
// line end:   236
void DrawQTextBack__Fv() {
}


// address: 0x8004761C
// line start: 246
// line end:   286
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80047704
// line start: 291
// line end:   408
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
// line start: 411
// line end:   411
void _GLOBAL__D_QBack() {
}


// address: 0x80047A98
// line start: 411
// line end:   411
void _GLOBAL__I_QBack() {
}


// address: 0x80047AC0
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_80047AC0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80047AE0
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_80047AE0(struct Dialog *this, int Type) {
}


// address: 0x80047AE8
// line start: 78
// line end:   78
void ___6Dialog_addr_80047AE8(struct Dialog *this, int __in_chrg) {
}


// address: 0x80047B10
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_80047B10(struct Dialog *this) {
}


// address: 0x80047B6C
// line start: 71
// line end:   78
int GetCharWidth__5CFontc_addr_80047B6C(struct CFont *this, char ch) {
}


// address: 0x80047BC4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047BC4(struct TextDat *this, int FrNum) {
}


// address: 0x80047BE0
// line start: 33
// line end:   35
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80047BE8
// line start: 806
// line end:   808
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80047BF0
// line start: 188
// line end:   202
void delta_init__Fv() {
}


// address: 0x80047C50
// line start: 209
// line end:   230
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047CEC
// line start: 237
// line end:   253
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047D70
// line start: 262
// line end:   284
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x80047E00
// line start: 290
// line end:   331
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
// line start: 337
// line end:   353
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x8004818C
// line start: 360
// line end:   479
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
// line start: 486
// line end:   547
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
// line start: 553
// line end:   556
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x800484FC
// line start: 562
// line end:   565
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x80048520
// line start: 572
// line end:   635
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
// line start: 640
// line end:   657
int DeltaExportData__FPc(char *Dst) {
	// register: 16
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x800487DC
// line start: 668
// line end:   685
int DeltaImportData__FPc(char *Src) {
	// register: 16
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80048888
// line start: 697
// line end:   712
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80048984
// line start: 787
// line end:   791
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x800489AC
// line start: 797
// line end:   811
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x800489F8
// line start: 817
// line end:   827
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x80048A28
// line start: 833
// line end:   842
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80048A60
// line start: 848
// line end:   858
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80048AA0
// line start: 864
// line end:   875
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x80048AE8
// line start: 881
// line end:   886
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x80048B14
// line start: 892
// line end:   898
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80048B44
// line start: 903
// line end:   910
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80048B7C
// line start: 915
// line end:   923
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80048BF0
// line start: 928
// line end:   974
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048D24
// line start: 980
// line end:   995
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048DA0
// line start: 1011
// line end:   1030
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048DF8
// line start: 1037
// line end:   1044
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048E60
// line start: 1049
// line end:   1092
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048F68
// line start: 1098
// line end:   1109
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x8004900C
// line start: 1115
// line end:   1120
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x8004903C
// line start: 1126
// line end:   1168
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80049150
// line start: 1173
// line end:   1189
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80049158
// line start: 1195
// line end:   1203
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x8004918C
// line start: 1218
// line end:   1229
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x800491E8
// line start: 1235
// line end:   1238
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80049228
// line start: 1244
// line end:   1253
void check_update_plr__Fi(int pnum) {
}


// address: 0x80049230
// line start: 1264
// line end:   1271
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800492B0
// line start: 1280
// line end:   1294
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800492E0
// line start: 1299
// line end:   1308
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049310
// line start: 1312
// line end:   1325
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049340
// line start: 1331
// line end:   1344
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049370
// line start: 1350
// line end:   1356
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800493E4
// line start: 1365
// line end:   1371
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004946C
// line start: 1378
// line end:   1411
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x800495AC
// line start: 1421
// line end:   1458
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
// line start: 1467
// line end:   1473
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049804
// line start: 1480
// line end:   1514
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049938
// line start: 1523
// line end:   1566
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
// line start: 1574
// line end:   1587
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049B4C
// line start: 1594
// line end:   1625
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80049C64
// line start: 1634
// line end:   1649
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80049D64
// line start: 1669
// line end:   1679
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049DBC
// line start: 1686
// line end:   1694
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049E48
// line start: 1701
// line end:   1717
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049F30
// line start: 1725
// line end:   1740
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A008
// line start: 1747
// line end:   1762
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A0E4
// line start: 1769
// line end:   1780
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004A1C4
// line start: 1787
// line end:   1798
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004A2A4
// line start: 1806
// line end:   1812
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A2F0
// line start: 1819
// line end:   1831
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
// line start: 1838
// line end:   1852
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A4EC
// line start: 1859
// line end:   1870
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A5AC
// line start: 1878
// line end:   1888
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A670
// line start: 1895
// line end:   1906
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A734
// line start: 1913
// line end:   1919
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A77C
// line start: 1926
// line end:   1930
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A7B4
// line start: 1936
// line end:   1940
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A7DC
// line start: 1947
// line end:   1954
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A864
// line start: 1962
// line end:   1966
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A894
// line start: 1973
// line end:   1982
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A978
// line start: 1990
// line end:   1996
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A9E4
// line start: 2003
// line end:   2009
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AA50
// line start: 2016
// line end:   2036
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
// line start: 2045
// line end:   2061
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AC54
// line start: 2075
// line end:   2082
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AC9C
// line start: 2089
// line end:   2136
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AE58
// line start: 2145
// line end:   2151
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AED4
// line start: 2158
// line end:   2164
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AF50
// line start: 2171
// line end:   2177
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFCC
// line start: 2184
// line end:   2190
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B048
// line start: 2196
// line end:   2201
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B0C0
// line start: 2207
// line end:   2214
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B0C8
// line start: 2220
// line end:   2223
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B0D0
// line start: 2228
// line end:   2234
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B0D8
// line start: 2239
// line end:   2244
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B130
// line start: 2250
// line end:   2298
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B3A8
// line start: 2306
// line end:   2338
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
// line start: 2344
// line end:   2349
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B588
// line start: 2355
// line end:   2362
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5D0
// line start: 2368
// line end:   2376
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B610
// line start: 2381
// line end:   2389
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B650
// line start: 2395
// line end:   2403
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B690
// line start: 2409
// line end:   2418
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B6D0
// line start: 2423
// line end:   2430
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B718
// line start: 2437
// line end:   2449
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
// line start: 2489
// line end:   2591
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012DCE0
	static unsigned char sbLastCmd;
}


// address: 0x8004BC14
// size: 0xF1C
// line start: 2602
// line end:   2612
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004BCA4
// line start: 2619
// line end:   2623
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x8004BCDC
// line start: 167
// line end:   171
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004BD08
// line start: 556
// line end:   561
int InitLevelType__Fi(int l) {
}


// address: 0x8004BD54
// line start: 567
// line end:   605
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004BEE4
// line start: 684
// line end:   690
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004BF58
// line start: 705
// line end:   838
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
// line start: 256
// line end:   270
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C2F8
// line start: 277
// line end:   295
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C444
// line start: 302
// line end:   310
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004C4CC
// line start: 317
// line end:   319
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004C50C
// line start: 346
// line end:   357
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004C5B0
// line start: 365
// line end:   388
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004C640
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


// address: 0x8004C85C
// line start: 556
// line end:   560
void FreeObjectGFX__Fv() {
}


// address: 0x8004C868
// line start: 564
// line end:   575
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004C920
// line start: 583
// line end:   617
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004CBA4
// line start: 624
// line end:   630
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004CC04
// line start: 637
// line end:   639
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004CC2C
// line start: 663
// line end:   700
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CD38
// line start: 708
// line end:   745
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CE44
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


// address: 0x8004D054
// line start: 787
// line end:   833
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
// line start: 840
// line end:   845
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004D3F4
// line start: 876
// line end:   938
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
// line start: 943
// line end:   951
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004D740
// line start: 960
// line end:   985
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004D8D4
// line start: 993
// line end:   995
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004D920
// line start: 1002
// line end:   1013
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004DA44
// line start: 1020
// line end:   1061
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004DD14
// line start: 1070
// line end:   1121
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
// line start: 1130
// line end:   1156
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004E2F4
// line start: 1165
// line end:   1247
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004E5D0
// line start: 1255
// line end:   1256
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004E608
// line start: 1269
// line end:   1308
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
// line start: 1315
// line end:   1339
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E6E4
// line start: 1345
// line end:   1374
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E6EC
// line start: 1380
// line end:   1401
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004E96C
// line start: 1408
// line end:   1415
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004EA10
// line start: 1422
// line end:   1469
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004EDB4
// line start: 1475
// line end:   1523
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F18C
// line start: 1529
// line end:   1570
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F524
// line start: 1576
// line end:   1617
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F8BC
// line start: 1623
// line end:   1662
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FBC4
// line start: 1666
// line end:   1723
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FECC
// line start: 1729
// line end:   1773
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
// line start: 1779
// line end:   1791
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050500
// line start: 1798
// line end:   1808
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050614
// line start: 1815
// line end:   1830
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x800507CC
// line start: 1839
// line end:   1849
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80050878
// line start: 1857
// line end:   1873
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x800509FC
// line start: 1880
// line end:   1887
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80050B58
// line start: 1894
// line end:   1919
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
// line start: 1925
// line end:   1984
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
// line start: 1990
// line end:   2071
void OperateBookLever__Fii(int pnum, int i) {
	// register: 20
	register int x;
	// register: 19
	register int y;
	// register: 16
	register int tren;
}


// address: 0x800517FC
// line start: 2077
// line end:   2109
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x80051A3C
// line start: 2115
// line end:   2156
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x80051E0C
// line start: 2162
// line end:   2189
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80051FD8
// line start: 2195
// line end:   2220
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x8005218C
// line start: 2226
// line end:   2252
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800523E0
// line start: 2258
// line end:   2281
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800525B0
// line start: 2289
// line end:   2305
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052768
// line start: 2311
// line end:   2318
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800528C4
// line start: 2325
// line end:   2332
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052A20
// line start: 2338
// line end:   2372
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
// line start: 2380
// line end:   2473
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
// line start: 2479
// line end:   2505
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
// line start: 2511
// line end:   2514
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80053274
// line start: 2521
// line end:   3074
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
// line start: 3080
// line end:   3091
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800559CC
// line start: 3097
// line end:   3122
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055BD0
// line start: 3128
// line end:   3136
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055CB8
// line start: 3142
// line end:   3170
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80055E28
// line start: 3182
// line end:   3204
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80055F18
// line start: 3211
// line end:   3217
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x80055FC0
// line start: 3224
// line end:   3231
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80056074
// line start: 3238
// line end:   3330
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
// line start: 3337
// line end:   3377
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x800567CC
// line start: 3383
// line end:   3393
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x800568BC
// line start: 3401
// line end:   3426
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80056A20
// line start: 3432
// line end:   3549
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80056E58
// line start: 3557
// line end:   3567
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056F6C
// line start: 3573
// line end:   3583
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057080
// line start: 3589
// line end:   3599
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057194
// line start: 3605
// line end:   3694
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80057394
// line start: 3702
// line end:   3728
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
// line start: 3736
// line end:   3797
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80057AD8
// line start: 3803
// line end:   3824
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057C38
// line start: 3832
// line end:   3838
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80057C94
// line start: 3846
// line end:   3870
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80057DAC
// line start: 3876
// line end:   3892
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
// line start: 3899
// line end:   3902
void SyncLever__Fi(int i) {
}


// address: 0x80057F60
// line start: 3910
// line end:   3922
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x8005806C
// line start: 3931
// line end:   3946
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
// line start: 3954
// line end:   3978
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058330
// line start: 3986
// line end:   4009
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005845C
// line start: 4017
// line end:   4056
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x8005859C
// line start: 4064
// line end:   4205
void GetObjectStr__Fi(int i) {
}


// address: 0x800589B8
// line start: 4210
// line end:   4365
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
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058BD4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058C0C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058C0C(struct TextDat *this, int Creature) {
}


// address: 0x80058C84
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058C84(struct TextDat *this) {
}


// address: 0x80058C98
// line start: 25
// line end:   26
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80058CA0
// line start: 380
// line end:   385
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058CCC
// line start: 391
// line end:   404
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x80058D80
// line start: 449
// line end:   498
void SetupLocalPlayer__Fv() {
}


// address: 0x80058DA0
// line start: 271
// line end:   272
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058DE4
// line start: 276
// line end:   277
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058DF8
// line start: 413
// line end:   419
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E18
// line start: 529
// line end:   548
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E20
// line start: 555
// line end:   566
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058E3C
// line start: 575
// line end:   586
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E60
// line start: 592
// line end:   673
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005909C
// line start: 720
// line end:   837
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x800594B8
// line start: 844
// line end:   850
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80059520
// line start: 856
// line end:   892
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80059690
// line start: 899
// line end:   962
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
// line start: 968
// line end:   975
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
// line start: 984
// line end:   1154
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
// line start: 1164
// line end:   1170
void InitMultiView__Fv() {
}


// address: 0x80059CC8
// line start: 1271
// line end:   1297
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
// line start: 1301
// line end:   1306
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059DE8
// line start: 1360
// line end:   1369
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059E7C
// line start: 1376
// line end:   1389
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059F70
// line start: 1395
// line end:   1399
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059F84
// line start: 1434
// line end:   1455
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A010
// line start: 1460
// line end:   1479
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A074
// line start: 1487
// line end:   1545
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
// line start: 1553
// line end:   1575
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A0DC
// line start: 1672
// line end:   1704
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x8005A214
// line start: 1730
// line end:   1745
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A2AC
// line start: 1751
// line end:   1792
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A448
// line start: 1825
// line end:   1841
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
// line start: 1848
// line end:   1881
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A688
// line start: 1888
// line end:   1917
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A824
// line start: 1923
// line end:   1960
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
// line start: 1965
// line end:   2090
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
// line start: 2095
// line end:   2261
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B13C
// line start: 2268
// line end:   2293
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 6
	register int i;
	// register: 5
	register int mx;
	// register: 4
	register int pnum;
}


// address: 0x8005B294
// line start: 2299
// line end:   2301
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B2B4
// line start: 2307
// line end:   2332
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
// line start: 2338
// line end:   2360
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B660
// line start: 2367
// line end:   2422
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B7A4
// line start: 2427
// line end:   2445
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B834
// line start: 2453
// line end:   2469
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005B8F0
// line start: 2477
// line end:   2478
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B8F8
// line start: 2506
// line end:   2523
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005B980
// line start: 2527
// line end:   2644
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BCEC
// line start: 2651
// line end:   2700
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BE8C
// line start: 2707
// line end:   2821
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
// line start: 2828
// line end:   2891
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
// line start: 2898
// line end:   2905
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C8FC
// line start: 2913
// line end:   2984
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
// line start: 2992
// line end:   3013
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CD88
// line start: 3021
// line end:   3046
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CE48
// line start: 3052
// line end:   3064
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CEE8
// line start: 3068
// line end:   3232
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
// line start: 3239
// line end:   3297
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E1EC
// line start: 3303
// line end:   3328
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
// line start: 3333
// line end:   3349
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E364
// line start: 3356
// line end:   3381
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E4A4
// line start: 3388
// line end:   3389
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E4AC
// line start: 3396
// line end:   3703
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E8EC
// line start: 3715
// line end:   3723
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E954
// line start: 3730
// line end:   3769
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
// line start: 3816
// line end:   3833
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EED8
// line start: 3842
// line end:   3963
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
// line start: 3969
// line end:   3972
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F234
// line start: 3980
// line end:   4005
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
// line start: 4012
// line end:   4064
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F3E4
// line start: 4070
// line end:   4163
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
// line start: 4230
// line end:   4254
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x8005F91C
// line start: 4258
// line end:   4263
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F94C
// line start: 4280
// line end:   4314
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
// line start: 4321
// line end:   4333
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FC04
// line start: 4341
// line end:   4358
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FCF0
// line start: 4366
// line end:   4376
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FDD4
// line start: 4384
// line end:   4398
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FEB0
// line start: 4406
// line end:   4411
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005FEF4
// line start: 4418
// line end:   4427
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FFD0
// line start: 4434
// line end:   4443
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060040
// line start: 4450
// line end:   4459
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8006011C
// line start: 4466
// line end:   4475
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060188
// line start: 4482
// line end:   4485
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060190
// line start: 4492
// line end:   4559
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800604C0
// line start: 4562
// line end:   4562
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800604E8
// line start: 4563
// line end:   4563
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x8006052C
// line start: 4564
// line end:   4564
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060560
// line start: 4565
// line end:   4565
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060594
// line start: 4566
// line end:   4566
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800605C8
// line start: 4567
// line end:   4567
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x800605FC
// line start: 4568
// line end:   4568
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060630
// line start: 4569
// line end:   4569
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80060668
// line start: 4570
// line end:   4570
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8006069C
// line start: 4571
// line end:   4571
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606C4
// line start: 4572
// line end:   4572
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606EC
// line start: 4573
// line end:   4573
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060714
// line start: 4574
// line end:   4574
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x8006075C
// line start: 4575
// line end:   4575
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060784
// line start: 4576
// line end:   4576
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800607AC
// line start: 4577
// line end:   4577
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800607E0
// line start: 4578
// line end:   4578
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060808
// line start: 4579
// line end:   4579
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x8006084C
// line start: 4580
// line end:   4580
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80060880
// line start: 4581
// line end:   4581
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800608B4
// line start: 4583
// line end:   4583
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80060900
// line start: 4584
// line end:   4584
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x8006094C
// line start: 4585
// line end:   4585
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060998
// line start: 4586
// line end:   4586
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x800609EC
// line start: 4587
// line end:   4587
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060A38
// line start: 4588
// line end:   4588
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80060A84
// line start: 4589
// line end:   4589
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80060AD4
// line start: 4590
// line end:   4590
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060B20
// line start: 4591
// line end:   4591
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060B6C
// line start: 4592
// line end:   4592
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060BB8
// line start: 4593
// line end:   4593
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060C04
// line start: 4594
// line end:   4594
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060C50
// line start: 4595
// line end:   4595
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060C9C
// line start: 4596
// line end:   4596
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060CEC
// line start: 4597
// line end:   4597
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060D38
// line start: 4599
// line end:   4599
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060D88
// line start: 4601
// line end:   4601
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060DD4
// line start: 4602
// line end:   4602
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060E20
// line start: 4603
// line end:   4603
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060E6C
// line start: 4604
// line end:   4604
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060EB8
// line start: 4605
// line end:   4605
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80060F04
// line start: 4606
// line end:   4606
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80060F50
// line start: 4607
// line end:   4607
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80060F9C
// line start: 4608
// line end:   4608
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80060FE8
// line start: 4609
// line end:   4609
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80061034
// line start: 4610
// line end:   4610
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80061080
// line start: 4611
// line end:   4611
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x800610CC
// line start: 4619
// line end:   4620
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x80061100
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80061100(struct POLY_FT4 **Prim) {
}


// address: 0x8006117C
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_8006117C(int PNum) {
}


// address: 0x800611CC
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_800611CC(struct CPlayer *this) {
}


// address: 0x800611D8
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800611E4
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800611F0
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


// address: 0x80061440
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


// address: 0x800618FC
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


// address: 0x80061AA0
// line start: 327
// line end:   333
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061B34
// line start: 339
// line end:   444
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
// line start: 478
// line end:   503
void SetReturnLvlPos__Fv() {
}


// address: 0x80062224
// line start: 511
// line end:   516
void GetReturnLvlPos__Fv() {
}


// address: 0x80062278
// line start: 523
// line end:   545
void ResyncMPQuests__Fv() {
}


// address: 0x800623B4
// line start: 555
// line end:   644
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80062914
// line start: 660
// line end:   701
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
// line start: 710
// line end:   740
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062D08
// line start: 750
// line end:   771
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062DA0
// line start: 779
// line end:   800
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062EB8
// line start: 807
// line end:   825
void QuestlogUp__Fv() {
}


// address: 0x80062F08
// line start: 833
// line end:   853
void QuestlogDown__Fv() {
}


// address: 0x80062F70
// line start: 862
// line end:   874
void RemoveQLog__Fv() {
}


// address: 0x80062FE8
// line start: 879
// line end:   900
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x800630AC
// line start: 908
// line end:   910
void QuestlogESC__Fv() {
}


// address: 0x800630D4
// line start: 917
// line end:   937
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80063154
// line start: 984
// line end:   984
void _GLOBAL__D_questlog() {
}


// address: 0x8006317C
// line start: 984
// line end:   984
void _GLOBAL__I_questlog() {
}


// address: 0x800631A4
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x800631B0
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_800631B0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800631D0
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_800631D0(struct Dialog *this, int Type) {
}


// address: 0x800631D8
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_800631D8(struct Dialog *this, int Type) {
}


// address: 0x800631E0
// line start: 78
// line end:   78
void ___6Dialog_addr_800631E0(struct Dialog *this, int __in_chrg) {
}


// address: 0x80063208
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_80063208(struct Dialog *this) {
}


// address: 0x80063264
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80063264(struct TextDat *this, int PalNum) {
}


// address: 0x80063280
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80063280(struct TextDat *this, int FrNum) {
}


// address: 0x8006329C
// line start: 85
// line end:   304
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x80063464
// line start: 315
// line end:   373
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x8006355C
// line start: 160
// line end:   161
void FreeStoreMem__Fv() {
}


// address: 0x80063564
// line start: 169
// line end:   172
void DrawSTextBack__Fv() {
}


// address: 0x800635D4
// line start: 177
// line end:   252
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
// line start: 259
// line end:   266
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063A40
// line start: 273
// line end:   286
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063AD8
// line start: 292
// line end:   296
void AddSLine__Fi(int y) {
}


// address: 0x80063B28
// line start: 302
// line end:   303
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063B50
// line start: 312
// line end:   321
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063C04
// line start: 326
// line end:   418
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x8006408C
// line start: 426
// line end:   484
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
// line start: 491
// line end:   505
void S_StartSmith__Fv() {
}


// address: 0x80064834
// line start: 511
// line end:   538
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800649EC
// line start: 544
// line end:   562
void S_StartSBuy__Fv() {
}


// address: 0x80064B1C
// line start: 568
// line end:   609
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
// line start: 615
// line end:   645
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064E8C
// line start: 651
// line end:   662
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064F70
// line start: 668
// line end:   720
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
// line start: 726
// line end:   772
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800655C8
// line start: 780
// line end:   788
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006566C
// line start: 793
// line end:   814
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006584C
// line start: 819
// line end:   877
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065D1C
// line start: 886
// line end:   898
void S_StartWitch__Fv() {
}


// address: 0x80065E5C
// line start: 904
// line end:   941
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
// line start: 947
// line end:   967
void S_StartWBuy__Fv() {
}


// address: 0x80066160
// line start: 973
// line end:   993
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80066284
// line start: 999
// line end:   1059
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800668DC
// line start: 1068
// line end:   1074
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80066964
// line start: 1080
// line end:   1089
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066AE4
// line start: 1095
// line end:   1136
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066F04
// line start: 1145
// line end:   1151
void S_StartNoMoney__Fv() {
}


// address: 0x80066F6C
// line start: 1157
// line end:   1162
void S_StartNoRoom__Fv() {
}


// address: 0x80066FCC
// line start: 1168
// line end:   1242
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x80067344
// line start: 1248
// line end:   1266
void S_StartBoy__Fv() {
}


// address: 0x800674D4
// line start: 1273
// line end:   1302
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006765C
// line start: 1310
// line end:   1330
void S_StartHealer__Fv() {
}


// address: 0x80067830
// line start: 1336
// line end:   1358
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x8006799C
// line start: 1364
// line end:   1381
void S_StartHBuy__Fv() {
}


// address: 0x80067ABC
// line start: 1387
// line end:   1396
void S_StartStory__Fv() {
}


// address: 0x80067BAC
// line start: 1402
// line end:   1406
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067BE0
// line start: 1414
// line end:   1419
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067CB4
// line start: 1425
// line end:   1496
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068714
// line start: 1505
// line end:   1529
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x800688E8
// line start: 1535
// line end:   1569
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
// line start: 1576
// line end:   1586
void S_StartTavern__Fv() {
}


// address: 0x80068C10
// line start: 1592
// line end:   1601
void S_StartBarMaid__Fv() {
}


// address: 0x80068CE4
// line start: 1607
// line end:   1616
void S_StartDrunk__Fv() {
}


// address: 0x80068DB8
// line start: 1622
// line end:   1696
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800690A0
// line start: 1703
// line end:   1707
void DrawSText__Fv() {
}


// address: 0x800690E0
// line start: 1712
// line end:   1726
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800691A8
// line start: 1730
// line end:   1786
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069354
// line start: 1794
// line end:   1861
void STextESC__Fv() {
}


// address: 0x800694C8
// line start: 1868
// line end:   1903
void STextUp__Fv() {
}


// address: 0x80069660
// line start: 1913
// line end:   1946
void STextDown__Fv() {
}


// address: 0x80069810
// line start: 1955
// line end:   1977
void S_SmithEnter__Fv() {
}


// address: 0x800698E4
// line start: 1984
// line end:   1995
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069960
// line start: 2003
// line end:   2013
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800699DC
// line start: 2021
// line end:   2112
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069E28
// line start: 2121
// line end:   2145
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006A01C
// line start: 2151
// line end:   2185
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A240
// line start: 2193
// line end:   2219
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A3C8
// line start: 2226
// line end:   2265
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
// line start: 2272
// line end:   2302
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
// line start: 2310
// line end:   2334
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
// line start: 2339
// line end:   2395
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AE08
// line start: 2402
// line end:   2419
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AF0C
// line start: 2426
// line end:   2444
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B17C
// line start: 2450
// line end:   2469
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B2D8
// line start: 2476
// line end:   2493
void S_WitchEnter__Fv() {
}


// address: 0x8006B388
// line start: 2500
// line end:   2533
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B588
// line start: 2538
// line end:   2569
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B774
// line start: 2577
// line end:   2594
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B878
// line start: 2601
// line end:   2616
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B9F0
// line start: 2622
// line end:   2641
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BB4C
// line start: 2648
// line end:   2676
void S_BoyEnter__Fv() {
}


// address: 0x8006BC84
// line start: 2683
// line end:   2694
void BoyBuyItem__Fv() {
}


// address: 0x8006BD08
// line start: 2700
// line end:   2747
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BFAC
// line start: 2752
// line end:   2784
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C194
// line start: 2790
// line end:   2812
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C4E0
// line start: 2819
// line end:   2854
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C5FC
// line start: 2859
// line end:   2877
void S_HealerEnter__Fv() {
}


// address: 0x8006C694
// line start: 2884
// line end:   2915
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C8A0
// line start: 2923
// line end:   2936
void S_StoryEnter__Fv() {
}


// address: 0x8006C938
// line start: 2943
// line end:   2962
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006CAB4
// line start: 2969
// line end:   3011
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
// line start: 3020
// line end:   3031
void S_TavernEnter__Fv() {
}


// address: 0x8006CD1C
// line start: 3038
// line end:   3050
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CD8C
// line start: 3057
// line end:   3068
void S_DrunkEnter__Fv() {
}


// address: 0x8006CDFC
// line start: 3075
// line end:   3140
void STextEnter__Fv() {
}


// address: 0x8006D008
// line start: 3145
// line end:   3238
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D138
// line start: 3243
// line end:   3245
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D14C
// line start: 3324
// line end:   3324
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D174
// line start: 3324
// line end:   3324
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006D19C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8006D19C(struct CPad *this) {
}


// address: 0x8006D1C4
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8006D1C4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006D1E4
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8006D1E4(struct Dialog *this, int Type) {
}


// address: 0x8006D1EC
// line start: 78
// line end:   78
void ___6Dialog_addr_8006D1EC(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006D214
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8006D214(struct Dialog *this) {
}


// address: 0x8006D270
// line start: 129
// line end:   207
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006D420
// line start: 216
// line end:   269
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
// line start: 276
// line end:   323
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
// line start: 330
// line end:   406
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
// line start: 415
// line end:   468
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
// line start: 530
// line end:   562
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
// line start: 574
// line end:   601
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
// line start: 76
// line end:   81
void InitVPTriggers__Fv() {
}


// address: 0x8006DDF4
// line start: 89
// line end:   130
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006E10C
// line start: 135
// line end:   163
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006E3BC
// line start: 170
// line end:   219
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x8006E81C
// line start: 226
// line end:   273
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006EC98
// line start: 280
// line end:   339
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006F1A4
// line start: 345
// line end:   355
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
// line start: 362
// line end:   373
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006F358
// line start: 380
// line end:   391
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006F44C
// line start: 398
// line end:   409
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006F540
// line start: 427
// line end:   479
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
// line start: 489
// line end:   510
void FadeGameOut__Fv() {
}


// address: 0x8006F8F8
// line start: 515
// line end:   522
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x8006F95C
// line start: 527
// line end:   669
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


// address: 0x80070140
// line start: 101
// line end:   138
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80070284
// line start: 144
// line end:   165
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80070324
// line start: 172
// line end:   204
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x800705D0
// line start: 209
// line end:   244
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x80070884
// line start: 249
// line end:   272
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80070AE8
// line start: 106
// line end:   107
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070AF0
// line start: 113
// line end:   121
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x80070B58
// line start: 128
// line end:   130
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80070B78
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070BD8
// line start: 167
// line end:   194
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80070C68
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070CB8
// line start: 227
// line end:   233
void music_stop__Fv() {
}


// address: 0x80070CFC
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x80070D3C
// line start: 261
// line end:   275
void music_start__Fi(int nTrack) {
	{
		{
			// register: 2
			register int MusicVolume;
		}
	}
}


// address: 0x80070DC0
// line start: 284
// line end:   290
void music_hold__Fv() {
}


// address: 0x80070E20
// line start: 299
// line end:   305
void music_release__Fv() {
}


// address: 0x80070E70
// line start: 314
// line end:   315
unsigned char snd_playing__Fi(int SFXNo) {
}


// address: 0x80070E90
// line start: 94
// line end:   99
void ClrCursor__Fi(int num) {
}


// address: 0x80070EE0
// line start: 108
// line end:   171
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
// line start: 182
// line end:   187
void CloseInvChr__Fv() {
}


// address: 0x800713EC
// line start: 192
// line end:   195
int LeftOf__Fi(int dir) {
}


// address: 0x80071404
// line start: 199
// line end:   202
int RightOf__Fi(int dir) {
}


// address: 0x80071420
// line start: 211
// line end:   222
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
// line start: 270
// line end:   305
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071590
// size: 0x94
// line start: 318
// line end:   341
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80071684
// line start: 350
// line end:   351
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x8007168C
// line start: 360
// line end:   363
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800716D0
// line start: 372
// line end:   375
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071714
// line start: 416
// line end:   474
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80071974
// line start: 484
// line end:   537
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071B24
// line start: 545
// line end:   564
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80071B80
// line start: 572
// line end:   575
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80071BBC
// line start: 584
// line end:   605
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80071C80
// line start: 613
// line end:   736
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
// line start: 746
// line end:   780
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x800721D0
// line start: 787
// line end:   830
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x800722C4
// line start: 841
// line end:   887
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x800723DC
// line start: 899
// line end:   907
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x80072430
// line start: 915
// line end:   1025
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
// line start: 1035
// line end:   1099
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072B54
// line start: 1107
// line end:   1171
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
// line start: 1181
// line end:   1203
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
// line start: 1271
// line end:   1506
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
// line start: 1511
// line end:   1540
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
// line start: 1546
// line end:   1602
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 4
	// size: 0x94
	register struct GamePad *GPad1;
	// register: 8
	// size: 0x94
	register struct GamePad *GPad2;
}


// address: 0x80073918
// line start: 1608
// line end:   1610
void Init_GamePad__Fv() {
}


// address: 0x80073948
// line start: 1615
// line end:   1629
void InitGamePadVars__Fv() {
}


// address: 0x800739D8
// line start: 1633
// line end:   1642
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x80073A48
// line start: 1646
// line end:   1649
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad *GPad;
}


// address: 0x80073A70
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80073A70(struct CBlocks *this) {
}


// address: 0x80073A84
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80073A84(struct CPad *this) {
}


// address: 0x80073AAC
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80073AAC(struct CPad *this) {
}


// address: 0x80073AD4
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_80073AD4(struct CPad *this) {
}


// address: 0x80073AFC
// line start: 66
// line end:   69
void DoGameTestStuff__Fv() {
}


// address: 0x80073B28
// line start: 73
// line end:   76
void DoInitGameStuff__Fv() {
}


// address: 0x80073B5C
// line start: 63
// line end:   64
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073B7C
// line start: 74
// line end:   76
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073B9C
// line start: 94
// line end:   95
void GRL_InitGwin__Fv() {
}


// address: 0x80073BA8
// line start: 106
// line end:   110
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x80073BB8
// line start: 121
// line end:   123
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80073BE0
// line start: 133
// line end:   150
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80073C8C
// line start: 160
// line end:   167
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x80073CD4
// size: 0x4
// line start: 84
// line end:   85
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80073CE0
// line start: 92
// line end:   137
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
// line start: 147
// line end:   167
char *GetStr__Fi(int StrId) {
}


// address: 0x80073EB4
// line start: 173
// line end:   176
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x80073EE8
// line start: 187
// line end:   222
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
// line start: 234
// line end:   243
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800740A4
// line start: 252
// line end:   254
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800740B0
// line start: 264
// line end:   282
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80074178
// line start: 290
// line end:   316
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x800741F8
// line start: 97
// line end:   175
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
// line start: 180
// line end:   204
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
// line start: 208
// line end:   226
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
// line start: 230
// line end:   245
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800749A8
// line start: 252
// line end:   267
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074A58
// line start: 274
// line end:   275
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074ABC
// line start: 279
// line end:   282
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074BD4
// line start: 286
// line end:   288
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074C6C
// line start: 292
// line end:   294
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074D04
// line start: 298
// line end:   299
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074D6C
// line start: 303
// line end:   314
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074E0C
// line start: 318
// line end:   333
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
// line start: 338
// line end:   353
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
// line start: 358
// line end:   370
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80075054
// line start: 374
// line end:   388
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
// line start: 392
// line end:   404
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x8007520C
// line start: 408
// line end:   409
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075274
// line start: 413
// line end:   414
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800752DC
// line start: 418
// line end:   428
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80075440
// line start: 432
// line end:   441
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80075584
// line start: 445
// line end:   446
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800755EC
// line start: 450
// line end:   451
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075644
// line start: 455
// line end:   465
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
// line start: 470
// line end:   471
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075774
// line start: 475
// line end:   477
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007577C
// line start: 480
// line end:   555
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
// line start: 560
// line end:   565
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075D4C
// line start: 569
// line end:   570
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075D54
// line start: 573
// line end:   574
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075D88
// line start: 578
// line end:   579
void FuncWEAPEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075DAC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075DAC(struct POLY_FT4 **Prim) {
}


// address: 0x80075E28
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075E28(int PNum) {
}


// address: 0x80075E78
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075E78(struct CPlayer *this) {
}


// address: 0x80075E84
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80075E84(struct CPlayer *this) {
}


// address: 0x80075E90
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075E90(struct CPlayer *this) {
}


// address: 0x80075E9C
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075E9C(struct TextDat *this) {
}


// address: 0x80075EB0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80075EB0(struct TextDat *this, int FrNum) {
}


// address: 0x80075ECC
// line start: 67
// line end:   72
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80075F04
// line start: 81
// line end:   96
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80075F84
// line start: 105
// line end:   120
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x8007601C
// line start: 131
// line end:   147
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x800760CC
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


// address: 0x80076288
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


// address: 0x8007641C
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


// address: 0x800764D4
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


// address: 0x80076768
// line start: 441
// line end:   448
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80076840
// size: 0x28
// line start: 459
// line end:   467
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800768C8
// size: 0x28
// line start: 477
// line end:   478
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768F4
// size: 0x28
// line start: 488
// line end:   489
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076920
// size: 0x28
// line start: 499
// line end:   500
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007694C
// size: 0x28
// line start: 510
// line end:   511
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076978
// size: 0x28
// line start: 521
// line end:   522
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769A4
// size: 0x28
// line start: 532
// line end:   533
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769C8
// size: 0x28
// line start: 543
// line end:   544
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769EC
// size: 0x28
// line start: 554
// line end:   555
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A18
// size: 0x28
// line start: 565
// line end:   566
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A44
// size: 0x28
// line start: 576
// line end:   577
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A70
// size: 0x28
// line start: 587
// line end:   588
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A9C
// size: 0x28
// line start: 598
// line end:   599
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AC8
// size: 0x28
// line start: 609
// line end:   610
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AF4
// size: 0x28
// line start: 620
// line end:   621
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B20
// size: 0x28
// line start: 631
// line end:   632
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B4C
// size: 0x28
// line start: 642
// line end:   643
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B78
// size: 0x28
// line start: 653
// line end:   654
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BA4
// size: 0x28
// line start: 664
// line end:   665
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BD0
// size: 0x28
// line start: 675
// line end:   676
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BFC
// size: 0x28
// line start: 686
// line end:   687
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C28
// size: 0x28
// line start: 697
// line end:   698
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C54
// size: 0x28
// line start: 708
// line end:   709
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C80
// size: 0x28
// line start: 719
// line end:   720
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CAC
// size: 0x28
// line start: 730
// line end:   731
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CD8
// size: 0x28
// line start: 741
// line end:   742
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D04
// size: 0x28
// line start: 752
// line end:   753
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D30
// size: 0x28
// line start: 763
// line end:   764
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D5C
// size: 0x28
// line start: 774
// line end:   775
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D88
// size: 0x28
// line start: 785
// line end:   786
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DB4
// size: 0x28
// line start: 796
// line end:   797
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DE0
// size: 0x28
// line start: 807
// line end:   808
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E0C
// size: 0x28
// line start: 818
// line end:   819
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E38
// size: 0x28
// line start: 829
// line end:   830
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E64
// size: 0x28
// line start: 840
// line end:   841
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E90
// size: 0x28
// line start: 851
// line end:   852
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EBC
// size: 0x28
// line start: 862
// line end:   863
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EE8
// size: 0x28
// line start: 873
// line end:   874
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F14
// size: 0x28
// line start: 884
// line end:   885
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F40
// size: 0x28
// line start: 895
// line end:   896
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F6C
// line start: 906
// line end:   911
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80077000
// size: 0x28
// line start: 915
// line end:   921
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80077090
// size: 0x28
// line start: 931
// line end:   937
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80077120
// size: 0x28
// line start: 947
// line end:   953
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800771B0
// size: 0x28
// line start: 963
// line end:   969
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80077240
// size: 0x28
// line start: 979
// line end:   980
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007726C
// size: 0x28
// line start: 990
// line end:   991
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077298
// size: 0x28
// line start: 1001
// line end:   1002
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772C4
// size: 0x28
// line start: 1012
// line end:   1013
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772F0
// size: 0x28
// line start: 1023
// line end:   1024
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007731C
// size: 0x28
// line start: 1034
// line end:   1035
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077348
// size: 0x28
// line start: 1045
// line end:   1046
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077374
// size: 0x28
// line start: 1056
// line end:   1057
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773A0
// size: 0x28
// line start: 1067
// line end:   1068
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773CC
// size: 0x28
// line start: 1078
// line end:   1079
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773F8
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


// address: 0x80077550
// size: 0x28
// line start: 1125
// line end:   1132
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007761C
// size: 0x28
// line start: 1142
// line end:   1149
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x800776E8
// size: 0x28
// line start: 1159
// line end:   1160
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077714
// size: 0x28
// line start: 1170
// line end:   1171
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077740
// size: 0x28
// line start: 1181
// line end:   1182
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007776C
// size: 0x28
// line start: 1192
// line end:   1193
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077798
// size: 0x28
// line start: 1203
// line end:   1204
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800777BC
// size: 0x28
// line start: 1214
// line end:   1215
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800777E8
// size: 0x28
// line start: 1225
// line end:   1226
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077814
// size: 0x28
// line start: 1236
// line end:   1237
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077840
// size: 0x28
// line start: 1247
// line end:   1248
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007786C
// size: 0x28
// line start: 1258
// line end:   1259
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077898
// size: 0x28
// line start: 1269
// line end:   1270
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800778C4
// size: 0x28
// line start: 1280
// line end:   1281
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800778F0
// size: 0x28
// line start: 1291
// line end:   1292
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007791C
// size: 0x28
// line start: 1302
// line end:   1303
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077948
// size: 0x28
// line start: 1313
// line end:   1314
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077974
// size: 0x28
// line start: 1324
// line end:   1325
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779A0
// size: 0x28
// line start: 1335
// line end:   1336
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779CC
// size: 0x28
// line start: 1346
// line end:   1347
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779F8
// size: 0x28
// line start: 1357
// line end:   1358
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A24
// size: 0x28
// line start: 1368
// line end:   1369
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A50
// size: 0x28
// line start: 1379
// line end:   1380
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A7C
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


// address: 0x80077C10
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


// address: 0x80077D98
// size: 0x28
// line start: 1480
// line end:   1481
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077DBC
// size: 0x28
// line start: 1491
// line end:   1492
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077DE8
// size: 0x28
// line start: 1502
// line end:   1503
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077E14
// size: 0x28
// line start: 1513
// line end:   1514
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077E40
// size: 0x28
// line start: 1524
// line end:   1525
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077E6C
// size: 0x28
// line start: 1535
// line end:   1536
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077E98
// size: 0x28
// line start: 1546
// line end:   1547
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077EC4
// size: 0x28
// line start: 1557
// line end:   1558
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077EF0
// size: 0x28
// line start: 1568
// line end:   1569
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077F1C
// size: 0x28
// line start: 1579
// line end:   1580
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077F48
// size: 0x28
// line start: 1590
// line end:   1591
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077F74
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077F74(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80077FB0
// line start: 75
// line end:   80
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
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077FD8(struct POLY_FT4 **Prim) {
}


// address: 0x80078054
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80078054(struct CBlocks *this) {
}


// address: 0x80078060
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80078060(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80078098
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80078098(struct TextDat *this, int Creature) {
}


// address: 0x80078110
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80078110(struct TextDat *this) {
}


// address: 0x80078124
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80078124(struct TextDat *this, int FrNum) {
}


// address: 0x80078140
// line start: 48
// line end:   58
void gamemenu_on__Fv() {
}


// address: 0x80078148
// line start: 63
// line end:   65
void gamemenu_off__Fv() {
}


// address: 0x80078150
// line start: 74
// line end:   96
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80078158
// line start: 101
// line end:   114
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80078160
// line start: 119
// line end:   125
void ResetPal__Fv() {
}


// address: 0x80078168
// line start: 133
// line end:   140
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80078198
// line start: 175
// line end:   176
bool GetFadeState__Fv() {
}


// address: 0x800781A4
// line start: 203
// line end:   227
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright1;
	// register: 8
	register unsigned char bright2;
}


// address: 0x800782A4
// line start: 235
// line end:   258
void SmearScreen__Fv() {
}


// address: 0x800782AC
// line start: 261
// line end:   266
void DrawFadedScreen__Fv() {
}


// address: 0x80078300
// line start: 285
// line end:   297
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800783BC
// line start: 304
// line end:   332
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007844C
// line start: 339
// line end:   346
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x800784A4
// line start: 354
// line end:   389
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078554
// line start: 396
// line end:   406
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x800785A8
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x800785C8
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


// address: 0x80078734
// line start: 168
// line end:   171
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x80078770
// line start: 176
// line end:   188
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x800787BC
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x80078804
// line start: 205
// line end:   217
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80078864
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


// address: 0x80078DD8
// line start: 309
// line end:   318
void ClearMVars__Fi(int i) {
}


// address: 0x80078E4C
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


// address: 0x80079298
// line start: 434
// line end:   442
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80079348
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


// address: 0x8007948C
// line start: 479
// line end:   498
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80079584
// line start: 502
// line end:   510
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x8007962C
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


// address: 0x8007981C
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


// address: 0x800798FC
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


// address: 0x80079B78
// line start: 618
// line end:   649
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80079E80
// line start: 110
// line end:   198
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x8007A17C
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


// address: 0x8007A5CC
// line start: 70
// line end:   140
int lAddMissile__Fiiici(int sx, int sy, int midir, char micaster, int id) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
	// register: 18
	register int mi;
}


// address: 0x8007A7A0
// line start: 149
// line end:   178
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 3
	register int mi;
}


// address: 0x8007A8E8
// line start: 184
// line end:   198
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8007A9F0
// line start: 206
// line end:   207
void AddInTownPortal__Fi(int i) {
}


// address: 0x8007AA28
// line start: 214
// line end:   222
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8007AA98
// line start: 230
// line end:   232
void DeactivatePortal__Fi(int i) {
}


// address: 0x8007AAB8
// line start: 239
// line end:   243
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8007AAF0
// line start: 249
// line end:   256
void DelMis__Fii(int mi, int i) {
}


// address: 0x8007AB50
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


// address: 0x8007ACCC
// line start: 283
// line end:   284
void SetCurrentPortal__Fi(int p) {
}


// address: 0x8007ACD8
// line start: 289
// line end:   315
void GetPortalLevel__Fv() {
}


// address: 0x8007AE7C
// line start: 321
// line end:   334
void GetPortalLvlPos__Fv() {
}


// address: 0x8007AF2C
// size: 0xB8
// line start: 61
// line end:   62
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x8007AF58
// line start: 70
// line end:   70
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x8007AF80
// line start: 78
// line end:   84
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007AFB0
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


// address: 0x8007B054
// line start: 117
// line end:   123
void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x8007B0BC
// size: 0xF1C
// line start: 132
// line end:   152
struct DLevel *UseMap__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007B190
// line start: 160
// line end:   171
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Map) {
}


// address: 0x8007B200
// line start: 179
// line end:   185
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007B274
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


// address: 0x8007B488
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


// address: 0x8007B628
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


// address: 0x8007B788
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


// address: 0x8007B8C8
// line start: 408
// line end:   414
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x8007B900
// line start: 418
// line end:   420
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x8007B938
// line start: 73
// line end:   75
void GO_DoGameOver__Fv() {
}


// address: 0x8007B97C
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


// address: 0x8007BA38
// line start: 126
// line end:   141
void PrintGameOver__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct Dialog PBack;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x8007BB18
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8007BB18(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8007BB38
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_8007BB38(struct Dialog *this, int Type) {
}


// address: 0x8007BB40
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8007BB40(struct Dialog *this, int Type) {
}


// address: 0x8007BB48
// line start: 78
// line end:   78
void ___6Dialog_addr_8007BB48(struct Dialog *this, int __in_chrg) {
}


// address: 0x8007BB70
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8007BB70(struct Dialog *this) {
}


// address: 0x8007BBCC
// line start: 230
// line end:   236
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x8007BC10
// line start: 240
// line end:   241
char *VER_GetVerString__Fv() {
}


// address: 0x8007BC20
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


