#include "types.h"

// address: 0x8011C058
extern int NumOfMonsterListLevels;

// address: 0x800ABBF4
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x8011BD3C
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x8011BD40
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x8011BD44
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x8011BD4C
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x8011BD50
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x8011BD54
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x8011BD58
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x8011BD5C
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x8011BD60
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x8011BD64
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x8011BD68
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x8011BD6C
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x8011BD70
// size: 0x4
static unsigned char NumsLEV3M3QA[4];

// address: 0x8011BD74
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x8011BD78
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x8011BD7C
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x8011BD80
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x8011BD84
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x8011BD88
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x8011BD90
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x8011BD98
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x8011BD9C
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x8011BDA0
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x8011BDA4
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x8011BDA8
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x8011BDAC
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x8011BDB0
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x8011BDB4
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x8011BDBC
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x8011BDC0
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x8011BDC4
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x8011BDC8
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x8011BDCC
// size: 0x3
static unsigned char NumsLEV6M6QA[3];

// address: 0x8011BDD0
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x8011BDD4
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x8011BDD8
// size: 0x4
static unsigned char NumsLEV7M7C[4];

// address: 0x8011BDDC
// size: 0x3
static unsigned char NumsLEV7M7D[3];

// address: 0x8011BDE0
// size: 0x3
static unsigned char NumsLEV7M7E[3];

// address: 0x8011BDE4
// size: 0x2
static unsigned char NumsLEV8M8A[2];

// address: 0x8011BDE8
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x8011BDEC
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8011BDF0
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x8011BDF4
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x8011BDF8
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x8011BDFC
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x8011BE00
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x8011BE04
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x8011BE08
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x8011BE0C
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x8011BE10
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x8011BE14
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x8011BE18
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x8011BE1C
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x8011BE20
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x8011BE24
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x8011BE28
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x8011BE2C
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x8011BE30
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x8011BE34
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x8011BE38
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x8011BE3C
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x8011BE40
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x8011BE44
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x8011BE48
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x8011BE4C
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x8011BE50
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x8011BE54
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x8011BE58
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x8011BE5C
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x8011BE60
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x8011BE64
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x8011BE68
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x8011BE6C
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x8011BE70
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x8011BE74
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8011BE78
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8011BE7C
// size: 0x2
static unsigned char NumsLEV15M15QA[2];

// address: 0x8011BE80
// size: 0x3
static unsigned char NumsLEV16M16D[3];

// address: 0x800AB714
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800AB744
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800AB7A4
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800AB7E4
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800AB854
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800AB8C4
// size: 0x60
static struct MonstList ChoiceListLEV6[6];

// address: 0x800AB924
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800AB974
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800AB9D4
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800ABA14
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800ABA64
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800ABAB4
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800ABAF4
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800ABB44
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800ABBA4
// size: 0x40
static struct MonstList ChoiceListLEV15[4];

// address: 0x800ABBE4
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x8011D910
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800ABC74
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x8011C068
extern int ArgsSoFar;

// address: 0x8011C078
extern unsigned long *ThisOt;

// address: 0x8011C07C
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x8011D914
static long hndPrimBuffers;

// address: 0x8011D918
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x8011D91C
static unsigned char BufferDepth;

// address: 0x8011D91D
static unsigned char WorkRamId;

// address: 0x8011D91E
static unsigned char ScrNum;

// address: 0x8011D920
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x8011D924
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x8011D928
static unsigned char BufferNum;

// address: 0x8011C080
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x8011D929
static unsigned char LastBuffer;

// address: 0x8011D92C
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x8011D930
static int ThisOtSize;

// address: 0x8011C084
// size: 0x8
static struct RECT ScrRect;

// address: 0x8011D934
static int VidWait;

// address: 0x8011DDB0
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8011D938
static void (*VbFunc)();

// address: 0x8011D93C
static unsigned long VidTick;

// address: 0x8011D940
static int VXOff;

// address: 0x8011D944
static int VYOff;

// address: 0x8011C098
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x8011C09C
extern int LastFmem;

// address: 0x8011C08C
extern unsigned int GSYS_MemStart;

// address: 0x8011C090
extern unsigned int GSYS_MemEnd;

// address: 0x800ABFBC
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800ABFE4
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x8011C094
extern int LowestFmem;

// address: 0x8011C0AC
extern int FileSYS;

// address: 0x8011D948
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x8011D94C
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x8011C0C6
extern short DavesPad;

// address: 0x8011C0C8
extern short DavesPadDeb;

// address: 0x800AC00C
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x8011DE90
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800AC8B0
// size: 0x5BC
extern struct TextDat *AllDats[367];

// address: 0x8011C118
extern int TpW;

// address: 0x8011C11C
extern int TpH;

// address: 0x8011C120
extern int TpXDest;

// address: 0x8011C124
extern int TpYDest;

// address: 0x800ACE6C
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800ACEA0
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800AC040
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x8011C134
static bool ChunkGot;

// address: 0x800ACEC8
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800ACED8
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800ACEE8
// size: 0x190
extern unsigned char EAC_DirectoryCache[400];

// address: 0x8011C148
extern unsigned long BL_NoLumpFiles;

// address: 0x8011C14C
extern unsigned long BL_NoStreamFiles;

// address: 0x8011C150
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x8011C154
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x8011C158
extern unsigned char FileLoaded;

// address: 0x8011C17C
extern int NoTAllocs;

// address: 0x800AD078
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x8011D958
static bool CanPause;

// address: 0x8011D95C
static bool Paused;

// address: 0x8011D960
static char InActivePad;

// address: 0x8011DEB8
// size: 0x10
static struct Dialog PBack;

// address: 0x800AD2E0
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800AD304
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800AD328
// size: 0x384
extern unsigned char demo_buffer[900];

// address: 0x8011C198
extern int demo_pad_time;

// address: 0x8011C19C
extern int demo_pad_count;

// address: 0x800AD208
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800AD274
// size: 0x6C
extern struct CPad Pad1;

// address: 0x8011C1A0
extern unsigned long demo_finish;

// address: 0x8011C1A4
extern int cac_pad;

// address: 0x8011C1C4
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x8011C1C8
extern int CharFrm;

// address: 0x8011C1B1
extern unsigned char WHITER;

// address: 0x8011C1B2
extern unsigned char WHITEG;

// address: 0x8011C1B3
extern unsigned char WHITEB;

// address: 0x8011C1B4
extern unsigned char BLUER;

// address: 0x8011C1B5
extern unsigned char BLUEG;

// address: 0x8011C1B6
extern unsigned char BLUEB;

// address: 0x8011C1B7
extern unsigned char REDR;

// address: 0x8011C1B8
extern unsigned char REDG;

// address: 0x8011C1B9
extern unsigned char REDB;

// address: 0x8011C1BA
extern unsigned char GOLDR;

// address: 0x8011C1BB
extern unsigned char GOLDG;

// address: 0x8011C1BC
extern unsigned char GOLDB;

// address: 0x800AD6AC
// size: 0x21C
extern struct CFont MediumFont;

// address: 0x800AD8C8
// size: 0x21C
extern struct CFont LargeFont;

// address: 0x8011C1C0
extern bool buttoncol;

// address: 0x800ADAE4
// size: 0x168
extern struct FontItem LFontTab[90];

// address: 0x800ADC4C
// size: 0x10
extern struct FontTab LFont;

// address: 0x800ADC5C
// size: 0x26C
extern struct FontItem MFontTab[155];

// address: 0x800ADEC8
// size: 0x10
extern struct FontTab MFont;

// address: 0x8011C1DD
extern unsigned char DialogRed;

// address: 0x8011C1DE
extern unsigned char DialogGreen;

// address: 0x8011C1DF
extern unsigned char DialogBlue;

// address: 0x8011C1E0
extern unsigned char DialogTRed;

// address: 0x8011C1E1
extern unsigned char DialogTGreen;

// address: 0x8011C1E2
extern unsigned char DialogTBlue;

// address: 0x8011C1E4
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x8011C1E8
extern int DialogBackGfx;

// address: 0x8011C1EC
extern int DialogBackW;

// address: 0x8011C1F0
extern int DialogBackH;

// address: 0x8011C1F4
extern int DialogBorderGfx;

// address: 0x8011C1F8
extern int DialogBorderTLW;

// address: 0x8011C1FC
extern int DialogBorderTLH;

// address: 0x8011C200
extern int DialogBorderTRW;

// address: 0x8011C204
extern int DialogBorderTRH;

// address: 0x8011C208
extern int DialogBorderBLW;

// address: 0x8011C20C
extern int DialogBorderBLH;

// address: 0x8011C210
extern int DialogBorderBRW;

// address: 0x8011C214
extern int DialogBorderBRH;

// address: 0x8011C218
extern int DialogBorderTW;

// address: 0x8011C21C
extern int DialogBorderTH;

// address: 0x8011C220
extern int DialogBorderBW;

// address: 0x8011C224
extern int DialogBorderBH;

// address: 0x8011C228
extern int DialogBorderLW;

// address: 0x8011C22C
extern int DialogBorderLH;

// address: 0x8011C230
extern int DialogBorderRW;

// address: 0x8011C234
extern int DialogBorderRH;

// address: 0x8011C238
extern int DialogBevelGfx;

// address: 0x8011C23C
extern int DialogBevelCW;

// address: 0x8011C240
extern int DialogBevelCH;

// address: 0x8011C244
extern int DialogBevelLRW;

// address: 0x8011C248
extern int DialogBevelLRH;

// address: 0x8011C24C
extern int DialogBevelUDW;

// address: 0x8011C250
extern int DialogBevelUDH;

// address: 0x8011C254
extern int MY_DialogOTpos;

// address: 0x8011D964
static unsigned char DialogGBack;

// address: 0x8011D965
static char GShadeX;

// address: 0x8011D966
static char GShadeY;

// address: 0x8011D96C
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800ADF18
// size: 0x70
extern int Cxy[28];

// address: 0x8011C1D7
extern unsigned char BORDERR;

// address: 0x8011C1D8
extern unsigned char BORDERG;

// address: 0x8011C1D9
extern unsigned char BORDERB;

// address: 0x8011C1DA
extern unsigned char BACKR;

// address: 0x8011C1DB
extern unsigned char BACKG;

// address: 0x8011C1DC
extern unsigned char BACKB;

// address: 0x800ADED8
// size: 0x40
static char GShadeTab[64];

// address: 0x8011C1D5
static char GShadePX;

// address: 0x8011C1D6
static char GShadePY;

// address: 0x8011C261
extern unsigned char PlayDemoFlag;

// address: 0x8011DEC8
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x8011DEF8
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x8011D974
static int blockr;

// address: 0x8011D978
static int blockg;

// address: 0x8011D97C
static int blockb;

// address: 0x8011D980
static int InfraFlag;

// address: 0x8011D984
static unsigned char blank_bit;

// address: 0x8011C275
extern unsigned char P1ObjSelCount;

// address: 0x8011C276
extern unsigned char P2ObjSelCount;

// address: 0x8011C277
extern unsigned char P12ObjSelCount;

// address: 0x8011C278
extern unsigned char P1ItemSelCount;

// address: 0x8011C279
extern unsigned char P2ItemSelCount;

// address: 0x8011C27A
extern unsigned char P12ItemSelCount;

// address: 0x8011C27B
extern unsigned char P1MonstSelCount;

// address: 0x8011C27C
extern unsigned char P2MonstSelCount;

// address: 0x8011C27D
extern unsigned char P12MonstSelCount;

// address: 0x8011C27E
static unsigned short P1ObjSelCol;

// address: 0x8011C280
static unsigned short P2ObjSelCol;

// address: 0x8011C282
static unsigned short P12ObjSelCol;

// address: 0x8011C284
static unsigned short P1ItemSelCol;

// address: 0x8011C286
static unsigned short P2ItemSelCol;

// address: 0x8011C288
static unsigned short P12ItemSelCol;

// address: 0x8011C28A
static unsigned short P1MonstSelCol;

// address: 0x8011C28C
static unsigned short P2MonstSelCol;

// address: 0x8011C28E
static unsigned short P12MonstSelCol;

// address: 0x8011C290
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x800ADF88
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x8011C2AC
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x8011197C
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x8011DF28
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x8011DF38
// size: 0x10
static struct Overlay PregameOver;

// address: 0x8011DF48
// size: 0x10
static struct Overlay GameOver;

// address: 0x8011DF58
// size: 0x10
static struct Overlay FmvOver;

// address: 0x8011D988
static int OWorldX;

// address: 0x8011D98C
static int OWorldY;

// address: 0x8011D990
static int WWorldX;

// address: 0x8011D994
static int WWorldY;

// address: 0x801119F8
// size: 0x20
static short TxyAdd[16];

// address: 0x8011C2D0
extern int GXAdj2;

// address: 0x8011D998
static int TimePerFrame;

// address: 0x8011D99C
static int CpuStart;

// address: 0x8011D9A0
static int CpuTime;

// address: 0x8011D9A4
static int DrawTime;

// address: 0x8011D9A8
static int DrawStart;

// address: 0x8011D9AC
static int LastCpuTime;

// address: 0x8011D9B0
static int LastDrawTime;

// address: 0x8011D9B4
static int DrawArea;

// address: 0x8011C2D8
extern bool ProfOn;

// address: 0x800ADF9C
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x80111B54
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x8011C2F4
static int CutScreen;

// address: 0x800ADFB0
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800AE004
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800AE058
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800AE0AC
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800AE100
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x8011C304
extern int hof;

// address: 0x8011C308
extern int mof;

// address: 0x800AE1C8
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x800AE2C8
// size: 0x12000
extern unsigned long STR_Buffer[18432];

// address: 0x8011C33C
extern unsigned long Time;

// address: 0x8011C340
extern bool CDWAIT;

// address: 0x800C02C8
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x800C0308
// size: 0x80
extern struct SFXHDR STRSave;

// address: 0x8011D9B8
static bool SavePause;

// address: 0x8011C315
extern char NoActiveStreams;

// address: 0x8011C318
static bool STRInit;

// address: 0x8011C31C
static int frame_rate;

// address: 0x8011C320
static unsigned char CDAngle;

// address: 0x8011C360
extern char SFXNotPlayed;

// address: 0x8011C361
extern char SFXNotInBank;

// address: 0x8011DF68
// size: 0x108
static char spu_management[264];

// address: 0x8011E078
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x8011D9C0
static unsigned short NoSfx;

// address: 0x8011E098
// size: 0x30
static unsigned short CHStatus[24];

// address: 0x8011C350
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x8011C354
static long OffsetHandle;

// address: 0x8011C358
static int BankBase;

// address: 0x80111F54
// size: 0x78
static unsigned short SFXRemapTab[60];

// address: 0x8011C35C
static int NoSNDRemaps;

// address: 0x800C0388
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x80112000
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x8011C3A4
extern int demo_level;

// address: 0x8011E0C8
// size: 0x20
static int buff[8];

// address: 0x8011C3A8
extern int old_val;

// address: 0x8011C3AC
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x8011C3B0
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x8011C3B4
// size: 0x5C
extern struct TASK *tonys;

// address: 0x8011C38C
extern int demo_load;

// address: 0x8011C390
extern int demo_record_load;

// address: 0x8011C394
extern int level_record;

// address: 0x8011C398
extern char demo_fade_finished;

// address: 0x8011C39B
extern unsigned char demo_which;

// address: 0x800C05B4
// size: 0x14
extern unsigned long demolevel[5];

// address: 0x8011C399
extern unsigned char quest_cheat_num;

// address: 0x8011C39A
extern unsigned char cheat_quest_flag;

// address: 0x8011C388
extern int moo_moo;

// address: 0x800C0574
// size: 0x40
extern unsigned long quest_seed[16];

// address: 0x8011C39C
extern unsigned char demo_flash;

// address: 0x8011C3A0
extern int tonys_Task;

// address: 0x8011C510
extern bool DoShowPanel;

// address: 0x8011C514
extern bool DoDrawBg;

// address: 0x8011D9C4
static bool GlueFinished;

// address: 0x8011D9C8
static bool DoHomingScroll;

// address: 0x8011D9CC
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x8011D9D0
static int CurrentMonsterList;

// address: 0x800C05C8
// size: 0x3CC
extern struct PInf PlayerInfo[81];

// address: 0x8011C518
// size: 0x4
static char ArmourChar[4];

// address: 0x801120F4
// size: 0xA
static char WepChar[10];

// address: 0x8011C51C
// size: 0x4
static char CharChar[4];

// address: 0x8011D9D4
static char ctrl_select_line;

// address: 0x8011D9D5
static char ctrl_select_side;

// address: 0x8011D9D6
static char ckeyheld;

// address: 0x8011D9DC
// size: 0x8
static struct RECT CtrlRect;

// address: 0x8011C530
extern unsigned char ctrlflag;

// address: 0x800C0A3C
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800C0994
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x8011C52C
static int toppos;

// address: 0x8011E0E8
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800C0B6C
// size: 0x98
static int controller_defaults[2][19];

// address: 0x8011C59C
extern int gr_scrxoff;

// address: 0x8011C5A0
extern int gr_scryoff;

// address: 0x8011C5A8
extern unsigned short water_clut;

// address: 0x8011C5AB
extern char visible_level;

// address: 0x8011C599
extern char last_type;

// address: 0x8011C5AD
extern char daylight;

// address: 0x8011C5AA
extern char cow_in_sight;

// address: 0x8011C5A4
extern unsigned int water_count;

// address: 0x8011C5AC
extern unsigned char lastrnd;

// address: 0x8011C5B0
static int call_clock;

// address: 0x8011C5C0
extern int TitleAnimCount;

// address: 0x8011C5C4
static int flametick;

// address: 0x800C0C04
// size: 0x18
static int ypos[6];

// address: 0x800C0C1C
// size: 0x18
static int frmlist[6];

// address: 0x800C0C34
// size: 0x18
static int xoff[6];

// address: 0x8011C5C8
static int startx;

// address: 0x8011C5CC
extern bool jaffflag;

// address: 0x800C0C6C
// size: 0x90
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x8011E0F8
// size: 0x240
static struct Particle PartArray[16];

// address: 0x8011D9E4
static int partOtPos;

// address: 0x8011C5EC
extern int SetParticle;

// address: 0x8011C5F0
static int p1partexecnum;

// address: 0x8011C5F4
static int p2partexecnum;

// address: 0x800C0C4C
// size: 0x20
static int JumpArray[8];

// address: 0x8011C5F8
static int partjumpflag;

// address: 0x8011C5FC
static int partglowflag;

// address: 0x8011C600
static int partcolour;

// address: 0x8011C604
static bool anyfuckingmenus;

// address: 0x800C0CFC
// size: 0x30
extern struct Spell_Target SplTarget[2];

// address: 0x8011C625
extern unsigned char select_flag;

// address: 0x8011D9E8
// size: 0x8
static struct RECT SelectRect;

// address: 0x8011D9F0
static char item_select;

// address: 0x8011C628
// size: 0x2
extern char QSpell[2];

// address: 0x8011C62C
// size: 0x2
extern char _spltotype[2];

// address: 0x8011C630
// size: 0x8
extern bool force_attack[2];

// address: 0x8011C618
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x8011E338
// size: 0x10
static struct Dialog SelectBack;

// address: 0x8011C61C
// size: 0x4
extern char mana_order[4];

// address: 0x8011C620
// size: 0x4
extern char health_order[4];

// address: 0x8011C624
extern unsigned char birdcheck;

// address: 0x8011E348
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x8011D9F4
static unsigned short progress;

// address: 0x80112284
// size: 0x16
static unsigned short Level2CutScreen[11];

// address: 0x8011E370
// size: 0x78
static struct CScreen Scr;

// address: 0x8011C650
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x8011C654
static bool GameLoading;

// address: 0x8011E3F0
// size: 0x10
static struct Dialog LBack;

// address: 0x800C0D2C
// size: 0x80
extern unsigned char block_buf[128];

// address: 0x8011C670
extern unsigned int card_ev0;

// address: 0x8011C674
extern unsigned int card_ev1;

// address: 0x8011C678
extern unsigned int card_ev2;

// address: 0x8011C67C
extern unsigned int card_ev3;

// address: 0x8011C680
extern unsigned int card_ev10;

// address: 0x8011C684
extern unsigned int card_ev11;

// address: 0x8011C688
extern unsigned int card_ev12;

// address: 0x8011C68C
extern unsigned int card_ev13;

// address: 0x8011C690
// size: 0x8
extern int card_dirty[2];

// address: 0x8011C698
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8011D9F8
static int card_event;

// address: 0x8011C66C
extern void (*mem_card_event_handler)();

// address: 0x8011C664
extern bool MemCardActive;

// address: 0x8011C668
static int never_hooked_events;

// address: 0x8011C6F4
extern unsigned long MasterVol;

// address: 0x8011C6F8
extern unsigned long MusicVol;

// address: 0x8011C6FC
extern unsigned long SoundVol;

// address: 0x8011C700
extern unsigned long VideoVol;

// address: 0x8011C704
extern unsigned long SpeechVol;

// address: 0x8011D9FC
// size: 0x6C
static struct TextDat *Slider;

// address: 0x8011DA00
static int sw;

// address: 0x8011DA04
static int sx;

// address: 0x8011DA08
static int sy;

// address: 0x8011DA0C
static unsigned char Adjust;

// address: 0x8011DA0D
static unsigned char qspin;

// address: 0x8011DA0E
static unsigned char lqspin;

// address: 0x8011DA10
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x8011DA14
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8011DA18
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x8011C708
extern int save_blocks;

// address: 0x8011C70C
extern char *Savefilename;

// address: 0x8011C710
extern int ReturnMenu;

// address: 0x8011DA1C
// size: 0x8
static struct RECT ORect;

// address: 0x8011DA24
// size: 0x8
static char *McState[2];

// address: 0x8011C714
extern int they_pressed;

// address: 0x8011DA2C
// size: 0x8
static unsigned char Seed[8];

// address: 0x8011C6C8
extern bool optionsflag;

// address: 0x8011C6BC
extern int cmenu;

// address: 0x8011C6D4
extern int options_pad;

// address: 0x8011C6C4
extern bool allspellsflag;

// address: 0x800C189C
// size: 0x80
extern short Circle[64];

// address: 0x8011C6A8
extern bool goldcheat;

// address: 0x8011C6D8
extern int OptionsSeed;

// address: 0x8011C6DC
extern bool OptionsSetSeed;

// address: 0x8011C6AC
extern unsigned char Qfromoptions;

// address: 0x8011C6B0
static int Spacing;

// address: 0x8011C6B4
static int cs;

// address: 0x8011C6B8
static int lastcs;

// address: 0x8011C6C0
static bool MemcardOverlay;

// address: 0x8011C6CC
extern int saveflag;

// address: 0x8011C6D0
extern int loadflag;

// address: 0x8011C6E0
extern bool PadFrig;

// address: 0x800C0DAC
// size: 0xD8
extern struct OMENUITEM MainMenu[9];

// address: 0x800C0E84
// size: 0x108
extern struct OMENUITEM GameMenu[11];

// address: 0x800C0F8C
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800C101C
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800C10C4
// size: 0x90
extern struct OMENUITEM LangMenu[6];

// address: 0x800C1154
// size: 0x60
extern struct OMENUITEM QuitMenu[4];

// address: 0x800C11B4
// size: 0x60
extern struct OMENUITEM AreYouSureMenu[4];

// address: 0x800C1214
// size: 0xA8
extern struct OMENUITEM MemcardMenu[7];

// address: 0x800C12BC
// size: 0x60
extern struct OMENUITEM MemcardLoadGameMenu[4];

// address: 0x800C131C
// size: 0x60
extern struct OMENUITEM MemcardSaveGameMenu[4];

// address: 0x800C137C
// size: 0x60
extern struct OMENUITEM MemcardSaveOptionsMenu[4];

// address: 0x800C13DC
// size: 0x60
extern struct OMENUITEM MemcardLoadOptionsMenu[4];

// address: 0x800C143C
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800C149C
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800C1544
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800C15EC
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800C164C
// size: 0xF0
extern struct OMENUITEM CheatMenu[10];

// address: 0x800C173C
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800C176C
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x800C17B4
// size: 0x48
extern struct OMENUITEM SeedMenu[3];

// address: 0x800C17FC
// size: 0xA0
extern struct OMENULIST MenuList[20];

// address: 0x8011C6E4
static bool debounce;

// address: 0x8011C6E8
static unsigned char KeyPos;

// address: 0x800C191C
// size: 0x14
static unsigned short KeyTab[10];

// address: 0x8011C6EC
static int SeedPos;

// address: 0x800C1930
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x8011DA34
// size: 0x8
static int last_seenx[2];

// address: 0x8011DA3C
// size: 0x8
static int last_seeny[2];

// address: 0x8011C721
extern char hop_height;

// address: 0x8011C724
// size: 0x8
static struct Perch perches[4];

// address: 0x800C1AB0
// size: 0x40
extern struct FMVDAT FmvTab[8];

// address: 0x8011C764
extern int indsize;

// address: 0x8011C744
static unsigned char *kanjbuff;

// address: 0x8011C748
// size: 0x4
static struct kindexS *kindex;

// address: 0x8011C74C
static long hndKanjBuff;

// address: 0x8011C750
static long hndKanjIndex;

// address: 0x8011DA44
// size: 0x8
static struct RECT HelpRect;

// address: 0x8011DA4C
static unsigned char HelpTop;

// address: 0x8011E400
// size: 0x10
static struct Dialog HelpBack;

// address: 0x8011C774
static bool helpflag;

// address: 0x800C1AF0
// size: 0x108
static struct HelpStruct HelpList[33];

// address: 0x8011C7C8
extern int FeBackX;

// address: 0x8011C7CC
extern int FeBackY;

// address: 0x8011C7D0
extern int FeBackW;

// address: 0x8011C7D4
extern int FeBackH;

// address: 0x8011C7D8
extern unsigned char FeFlag;

// address: 0x800C20F8
// size: 0x780
extern struct FeStruct FeBuffer[80];

// address: 0x8011C7DC
extern int FePlayerNo;

// address: 0x8011DA50
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x8011C7E0
extern int FeBufferCount;

// address: 0x8011C7E4
extern int FeNoOfPlayers;

// address: 0x8011C7E8
extern unsigned char FeNoOfPads;

// address: 0x8011C7EC
// size: 0x8
extern int FeChrClass[2];

// address: 0x800C2878
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x8011C7F4
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x8011C7F8
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x8011C7FC
extern unsigned long FeCount;

// address: 0x8011C800
extern int fileselect;

// address: 0x8011C804
extern int BookMenu;

// address: 0x8011C808
extern int FeAttractMode;

// address: 0x8011C80C
extern int FMVPress;

// address: 0x8011C790
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x8011C7A8
extern bool JustQuitQText;

// address: 0x8011C798
// size: 0x8
extern bool LoadedChar[2];

// address: 0x8011C794
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x8011C7A0
extern unsigned char FeIsAVirgin;

// address: 0x8011C7A4
extern int FeMenuDelay;

// address: 0x800C1BF8
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800C1C14
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800C1C30
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800C1C4C
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800C1C68
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800C1C84
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800C1CA0
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800C1CBC
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800C1CD8
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800C1CF4
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800C1D10
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800C1D2C
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800C1D48
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800C1D64
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x8011C7AC
static int fadeval;

// address: 0x800C1D80
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800C1DF8
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800C1E40
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800C1EB8
// size: 0x46
extern unsigned char FeNameEngMenuTable[70];

// address: 0x800C1F00
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800C1F48
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800C1FA8
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800C2008
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800C2080
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x8011C7B8
static bool DrawBackOn;

// address: 0x8011C7BC
extern unsigned long AttractTitleDelay;

// address: 0x8011C7C0
extern unsigned long AttractMainDelay;

// address: 0x8011C7C4
extern int FMVEndPad;

// address: 0x8011C840
extern int InCredits;

// address: 0x8011C844
extern int CreditTitleNo;

// address: 0x8011C848
extern int CreditSubTitleNo;

// address: 0x8011C85C
// size: 0x8
extern int card_status[2];

// address: 0x8011C864
// size: 0x8
extern int card_usable[2];

// address: 0x8011C86C
// size: 0x8
extern int card_files[2];

// address: 0x8011C874
// size: 0x8
extern int card_changed[2];

// address: 0x8011C8B8
extern int AlertTxt;

// address: 0x8011C8BC
extern int current_card;

// address: 0x8011C8C0
extern bool DoLoadedGame;

// address: 0x8011C8C4
extern int LoadType;

// address: 0x8011C8C8
extern int McMenuPos;

// address: 0x8011C8CC
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x8011C8B4
extern bool fileinfoflag;

// address: 0x8011C888
extern char *DiabloGameFile;

// address: 0x8011C88C
extern char *DiabloOptionFile;

// address: 0x8011C8AC
// size: 0x8
extern char *McState_addr_8011C8AC[2];

// address: 0x8011C9A4
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x8011C9AC
extern int mdec_audio_sec;

// address: 0x8011C9B0
extern int mdec_audio_offs;

// address: 0x8011C9B4
extern int mdec_audio_playing;

// address: 0x8011C9B8
extern int mdec_audio_rate_shift;

// address: 0x8011C9BC
// size: 0x8
extern char *vlcbuf[2];

// address: 0x8011C9C4
extern int slice_size;

// address: 0x8011C9C8
// size: 0x8
extern struct RECT slice;

// address: 0x8011C9D0
extern int slice_inc;

// address: 0x8011C9D4
extern int area_pw;

// address: 0x8011C9D8
extern int area_ph;

// address: 0x8011C9DC
// size: 0x2
extern char tmdc_pol_dirty[2];

// address: 0x8011C9E0
// size: 0x8
extern int num_pol[2];

// address: 0x8011C9E8
extern int mdec_cx;

// address: 0x8011C9EC
extern int mdec_cy;

// address: 0x8011C9F0
extern int mdec_w;

// address: 0x8011C9F4
extern int mdec_h;

// address: 0x8011C9F8
// size: 0x8
extern int mdec_pw[2];

// address: 0x8011CA00
// size: 0x8
extern int mdec_ph[2];

// address: 0x8011CA08
extern int move_x;

// address: 0x8011CA0C
extern int move_y;

// address: 0x8011CA10
extern int move_scale;

// address: 0x8011CA14
extern int stream_frames;

// address: 0x8011CA18
extern int last_stream_frame;

// address: 0x8011CA1C
extern int mdec_framecount;

// address: 0x8011CA20
extern int mdec_speed;

// address: 0x8011CA24
extern int mdec_stream_starting;

// address: 0x8011CA28
extern int mdec_last_frame;

// address: 0x8011CA2C
extern int mdec_sectors_per_frame;

// address: 0x8011CA30
extern unsigned short *vlctab;

// address: 0x8011CA34
extern unsigned char *mdc_buftop;

// address: 0x8011CA38
extern unsigned char *mdc_bufstart;

// address: 0x8011CA3C
extern int mdc_bufleft;

// address: 0x8011CA40
extern int mdc_buftotal;

// address: 0x8011CA44
extern int ordertab_length;

// address: 0x8011CA48
extern int time_in_frames;

// address: 0x8011CA4C
extern int stream_chunksize;

// address: 0x8011CA50
extern int stream_bufsize;

// address: 0x8011CA54
extern int stream_subsec;

// address: 0x8011CA58
extern int stream_secnum;

// address: 0x8011CA5C
extern int stream_last_sector;

// address: 0x8011CA60
extern int stream_startsec;

// address: 0x8011CA64
extern int stream_opened;

// address: 0x8011CA68
extern int stream_last_chunk;

// address: 0x8011CA6C
extern int stream_got_chunks;

// address: 0x8011CA70
extern int last_sector;

// address: 0x8011CA74
extern int cdstream_resetsec;

// address: 0x8011CA78
extern int last_handler_event;

// address: 0x8011C944
extern bool user_start;

// address: 0x8011C8DC
extern unsigned char *vlc_tab;

// address: 0x8011C8E0
extern unsigned char *vlc_buf;

// address: 0x8011C8E4
extern unsigned char *img_buf;

// address: 0x8011C8E8
extern int vbuf;

// address: 0x8011C8EC
extern int last_fn;

// address: 0x8011C8F0
extern int last_mdc;

// address: 0x8011C8F4
extern int slnum;

// address: 0x8011C8F8
extern int slices_to_do;

// address: 0x8011C8FC
extern int mbuf;

// address: 0x8011C900
extern int mfn;

// address: 0x8011C904
extern int last_move_mbuf;

// address: 0x8011C908
extern int move_request;

// address: 0x8011C90C
extern int mdec_scale;

// address: 0x8011C910
extern int do_brightness;

// address: 0x8011C914
extern int frame_decoded;

// address: 0x8011C918
extern int mdec_streaming;

// address: 0x8011C91C
extern int mdec_stream_size;

// address: 0x8011C920
extern int first_stream_frame;

// address: 0x8011C924
extern int stream_frames_played;

// address: 0x8011C928
extern int num_mdcs;

// address: 0x8011C92C
extern int mdec_head;

// address: 0x8011C930
extern int mdec_tail;

// address: 0x8011C934
extern int mdec_waiting_tail;

// address: 0x8011C938
extern int mdecs_queued;

// address: 0x8011C93C
extern int mdecs_waiting;

// address: 0x8011C940
extern int sfx_volume;

// address: 0x8011C948
static unsigned char DiabEnd;

// address: 0x8011C94C
static char *FMVName;

// address: 0x8011C950
// size: 0x4
extern int (*stream_buf)[504];

// address: 0x8011C954
// size: 0x20
extern struct strheader *stream_bufh;

// address: 0x8011C958
extern int stream_chunks_in;

// address: 0x8011C95C
extern int stream_chunks_total;

// address: 0x8011C960
extern int stream_in;

// address: 0x8011C964
extern int stream_out;

// address: 0x8011C968
extern int stream_stalled;

// address: 0x8011C96C
extern int stream_ending;

// address: 0x8011C970
extern int stream_open;

// address: 0x8011C974
extern int stream_handler_installed;

// address: 0x8011C978
extern int stream_chunks_borrowed;

// address: 0x8011C97C
extern int _get_count;

// address: 0x8011C980
extern int _discard_count;

// address: 0x8011C984
extern void (*old_cdready_handler)();

// address: 0x8011C988
extern int cdready_calls;

// address: 0x8011C98C
extern int cdready_errors;

// address: 0x8011C990
extern int cdready_out_of_sync;

// address: 0x8011C994
extern int cdstream_resetting;

// address: 0x8011C998
extern int sector_dma;

// address: 0x8011C99C
extern int sector_dma_in;

// address: 0x8011C9A0
extern int first_handler_event;

// address: 0x8011CAF8
extern unsigned char *pStatusPanel;

// address: 0x8011CAFC
extern unsigned char *pGBoxBuff;

// address: 0x8011CB00
extern unsigned char dropGoldFlag;

// address: 0x8011CB04
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800C2D90
// size: 0x200
extern char _infostr[256][2];

// address: 0x8011CB08
// size: 0x2
extern char _infoclr[2];

// address: 0x800C2F90
// size: 0x100
extern char tempstr[256];

// address: 0x8011CB0A
extern unsigned char drawhpflag;

// address: 0x8011CB0B
extern unsigned char drawmanaflag;

// address: 0x8011CB0C
extern unsigned char chrflag;

// address: 0x8011CB0D
extern unsigned char drawbtnflag;

// address: 0x8011CB0E
extern unsigned char panbtndown;

// address: 0x8011CB0F
extern unsigned char panelflag;

// address: 0x8011CB10
extern unsigned char chrbtndown;

// address: 0x8011CB11
extern unsigned char lvlbtndown;

// address: 0x8011CB12
extern unsigned char sbookflag;

// address: 0x8011CB13
extern unsigned char talkflag;

// address: 0x8011CB14
extern int dropGoldValue;

// address: 0x8011CB18
extern int initialDropGoldValue;

// address: 0x8011CB1C
extern int initialDropGoldIndex;

// address: 0x8011CB20
extern unsigned char *pPanelButtons;

// address: 0x8011CB24
extern unsigned char *pPanelText;

// address: 0x8011CB28
extern unsigned char *pManaBuff;

// address: 0x8011CB2C
extern unsigned char *pLifeBuff;

// address: 0x8011CB30
extern unsigned char *pChrPanel;

// address: 0x8011CB34
extern unsigned char *pChrButtons;

// address: 0x8011CB38
extern unsigned char *pSpellCels;

// address: 0x8011E460
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x8011E860
// size: 0x40
static int _pstrjust[8][2];

// address: 0x8011DA60
// size: 0x8
static int _pnumlines[2];

// address: 0x8011CB3C
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x8011CB40
// size: 0x8
extern struct RECT CSRect;

// address: 0x8011DA70
// size: 0x8
static int _pSpell[2];

// address: 0x8011DA78
// size: 0x8
static int _pSplType[2];

// address: 0x8011CB48
extern int numpanbtns;

// address: 0x8011CB4C
extern unsigned char *pDurIcons;

// address: 0x8011CB50
extern unsigned char drawdurflag;

// address: 0x8011DA80
// size: 0x8
static unsigned char chrbtn[4][2];

// address: 0x8011CB51
extern unsigned char chrbtnactive;

// address: 0x8011CB54
extern unsigned char *pSpellBkCel;

// address: 0x8011CB58
extern unsigned char *pSBkBtnCel;

// address: 0x8011CB5C
extern unsigned char *pSBkIconCels;

// address: 0x8011CB60
extern int sbooktab;

// address: 0x8011CB64
extern int cur_spel;

// address: 0x8011DA88
static long talkofs;

// address: 0x8011E8B0
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x8011DA8C
static unsigned char sgbTalkSavePos;

// address: 0x8011DA8D
static unsigned char sgbNextTalkSave;

// address: 0x8011DA8E
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x8011DA90
static unsigned char *pTalkPanel;

// address: 0x8011DA94
static unsigned char *pMultiBtns;

// address: 0x8011DA98
static unsigned char *pTalkBtns;

// address: 0x8011DA9C
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x800C28A4
// size: 0x25
extern char SpellITbl[37];

// address: 0x8011CA85
extern unsigned char DrawLevelUpFlag;

// address: 0x8011CAAC
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x8011CAA8
extern unsigned char spspelstate;

// address: 0x8011CAC8
extern bool initchr;

// address: 0x8011CA88
static int SPLICONNO;

// address: 0x8011CA8C
static int SPLICONY;

// address: 0x8011DA68
static int SPLICONRIGHT;

// address: 0x8011CA90
static int scx;

// address: 0x8011CA94
static int scy;

// address: 0x8011CA98
static int scx1;

// address: 0x8011CA9C
static int scy1;

// address: 0x8011CAA0
static int scx2;

// address: 0x8011CAA4
static int scy2;

// address: 0x8011CAB4
extern char SpellCol;

// address: 0x800C2890
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800C28CC
// size: 0x64
extern int SpellPages[5][5];

// address: 0x8011CAB8
static int lus;

// address: 0x8011CABC
static int CsNo;

// address: 0x8011CAC0
static char plusanim;

// address: 0x8011E8A0
// size: 0x10
static struct Dialog CSBack;

// address: 0x8011CAC4
static int CS_XOFF;

// address: 0x800C2930
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x8011CACC
extern int NoCSEntries;

// address: 0x8011CAD0
static int SPALOFF;

// address: 0x8011CAD4
static int paloffset1;

// address: 0x8011CAD8
static int paloffset2;

// address: 0x8011CADC
static int paloffset3;

// address: 0x8011CAE0
static int paloffset4;

// address: 0x8011CAE4
static int pinc1;

// address: 0x8011CAE8
static int pinc2;

// address: 0x8011CAEC
static int pinc3;

// address: 0x8011CAF0
static int pinc4;

// address: 0x8011CB78
// size: 0x8
extern int _pcurs[2];

// address: 0x8011CB80
extern int cursW;

// address: 0x8011CB84
extern int cursH;

// address: 0x8011CB88
extern int icursW;

// address: 0x8011CB8C
extern int icursH;

// address: 0x8011CB90
extern int icursW28;

// address: 0x8011CB94
extern int icursH28;

// address: 0x8011CB98
extern int cursmx;

// address: 0x8011CB9C
extern int cursmy;

// address: 0x8011CBA0
// size: 0x8
extern int _pcursmonst[2];

// address: 0x8011CBA8
// size: 0x2
extern char _pcursobj[2];

// address: 0x8011CBAC
// size: 0x2
extern char _pcursitem[2];

// address: 0x8011CBB0
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x8011CBB4
// size: 0x2
extern char _pcursplr[2];

// address: 0x8011CB74
extern int sel_data;

// address: 0x800C3090
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x8011CBB8
extern int spurtndx;

// address: 0x8011CBBC
extern int stonendx;

// address: 0x8011CBC0
extern unsigned char *pSquareCel;

// address: 0x8011CC20
extern unsigned long ghInst;

// address: 0x8011CC24
extern unsigned char svgamode;

// address: 0x8011CC28
extern int MouseX;

// address: 0x8011CC2C
extern int MouseY;

// address: 0x8011CC30
extern long gv1;

// address: 0x8011CC34
extern long gv2;

// address: 0x8011CC38
extern long gv3;

// address: 0x8011CC3C
extern long gv4;

// address: 0x8011CC40
extern long gv5;

// address: 0x8011CC44
extern unsigned char gbProcessPlayers;

// address: 0x800C3204
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800C322C
// size: 0xAB0
extern unsigned char pMegaTiles[2736];

// address: 0x800C3CDC
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800C3D20
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x8011CC45
extern unsigned char gbDoEnding;

// address: 0x8011CC46
extern unsigned char gbRunGame;

// address: 0x8011CC47
extern unsigned char gbRunGameResult;

// address: 0x8011CC48
extern unsigned char gbGameLoopStartup;

// address: 0x8011E900
// size: 0x44
static int glEndSeed[17];

// address: 0x8011E950
// size: 0x44
static int glMid1Seed[17];

// address: 0x8011E9A0
// size: 0x44
static int glMid2Seed[17];

// address: 0x8011E9F0
// size: 0x44
static int glMid3Seed[17];

// address: 0x8011DAA0
static long *sg_previousFilter;

// address: 0x800C3D64
// size: 0x30
extern int CreateEnv[12];

// address: 0x8011CC4C
extern int Passedlvldir;

// address: 0x8011CC50
extern unsigned char *TempStack;

// address: 0x8011CBD0
extern unsigned long ghMainWnd;

// address: 0x8011CBD4
extern unsigned char fullscreen;

// address: 0x8011CBD8
extern int force_redraw;

// address: 0x8011CBEC
extern unsigned char PauseMode;

// address: 0x8011CBED
extern unsigned char FriendlyMode;

// address: 0x8011CBDD
extern unsigned char visiondebug;

// address: 0x8011CBDF
extern unsigned char light4flag;

// address: 0x8011CBE0
extern unsigned char leveldebug;

// address: 0x8011CBE1
extern unsigned char monstdebug;

// address: 0x8011CBE8
extern int debugmonsttypes;

// address: 0x8011CBDC
static unsigned char cineflag;

// address: 0x8011CBDE
extern unsigned char scrollflag;

// address: 0x8011CBE2
extern unsigned char trigdebug;

// address: 0x8011CBE4
extern int setseed;

// address: 0x8011CBF0
static int sgnTimeoutCurs;

// address: 0x8011CBF4
extern unsigned char sgbMouseDown;

// address: 0x800C4430
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x8011CC68
extern int numtowners;

// address: 0x8011CC6C
extern unsigned char storeflag;

// address: 0x8011CC6D
extern unsigned char boyloadflag;

// address: 0x8011CC6E
extern unsigned char bannerflag;

// address: 0x8011CC70
extern unsigned char *pCowCels;

// address: 0x8011DAA4
static unsigned long sgdwCowClicks;

// address: 0x8011DAA8
static int sgnCowMsg;

// address: 0x800C4170
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x8011CC60
extern unsigned long CowPlaying;

// address: 0x800C3D94
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800C410C
// size: 0xC
extern int TownCowX[3];

// address: 0x800C4118
// size: 0xC
extern int TownCowY[3];

// address: 0x800C4124
// size: 0xC
extern int TownCowDir[3];

// address: 0x800C4130
// size: 0x20
extern int cowoffx[8];

// address: 0x800C4150
// size: 0x20
extern int cowoffy[8];

// address: 0x8011CC88
extern int sfxdelay;

// address: 0x8011CC8C
extern int sfxdnum;

// address: 0x8011CC80
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800C5230
// size: 0xF78
extern struct TSFX sgSFX[990];

// address: 0x8011CC84
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x8011CC90
extern long orgseed;

// address: 0x8011DAAC
static long sglGameSeed;

// address: 0x8011CC94
extern int SeedCount;

// address: 0x8011DAB0
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8011DAB4
static int sgnWidth;

// address: 0x8011CCA2
extern char msgflag;

// address: 0x8011CCA3
extern char msgdelay;

// address: 0x800C6258
// size: 0x50
extern char msgtable[80];

// address: 0x800C61A8
// size: 0xB0
extern int MsgStrings[44];

// address: 0x8011CCA1
extern char msgcnt;

// address: 0x8011DAB8
static unsigned long sgdwProgress;

// address: 0x8011DABC
static unsigned long sgdwXY;

// address: 0x800C62A8
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x80112964
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x80113D04
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x80114A24
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x80115924
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800C64BC
// size: 0x4C00
extern struct ItemStruct item[128];

// address: 0x800CB0BC
// size: 0x7F
extern char itemactive[127];

// address: 0x800CB13C
// size: 0x7F
extern char itemavail[127];

// address: 0x800CB1BC
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8011CCDC
extern unsigned char uitemflag;

// address: 0x8011DAC0
static int tem;

// address: 0x8011EA38
// size: 0x98
static struct ItemStruct curruitem;

// address: 0x8011EAD8
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x8011CCE0
extern int ScrollType;

// address: 0x800CB23C
// size: 0x40
extern char ItemStr[64];

// address: 0x800CB27C
// size: 0x40
extern char SufStr[64];

// address: 0x8011CCBC
extern long numitems;

// address: 0x8011CCC0
extern int gnNumGetRecords;

// address: 0x800C6418
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800C6348
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x8011774C
// size: 0x40
extern short SinTab[32];

// address: 0x8011778C
// size: 0x46
static short Item2Frm[35];

// address: 0x800C63F4
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x8011CCC4
extern int *ItemAnimSnds;

// address: 0x8011CCC8
extern int idoppely;

// address: 0x8011CCCC
extern int ScrollFlag;

// address: 0x800C64A4
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800CC068
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800CC1A8
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x8011CD00
extern int numlights;

// address: 0x8011CD04
extern char lightmax;

// address: 0x800CC1D0
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x8011CD08
extern int numvision;

// address: 0x8011CD0C
extern unsigned char dovision;

// address: 0x8011CD10
extern int visionid;

// address: 0x8011DAC4
static int disp_mask;

// address: 0x8011DAC8
static int weird;

// address: 0x8011DACC
static int disp_tab_r;

// address: 0x8011DAD0
static int dispy_r;

// address: 0x8011DAD4
static int disp_tab_g;

// address: 0x8011DAD8
static int dispy_g;

// address: 0x8011DADC
static int disp_tab_b;

// address: 0x8011DAE0
static int dispy_b;

// address: 0x8011DAE4
static int radius;

// address: 0x8011DAE8
static int bright;

// address: 0x8011EAE8
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x8011CCF0
extern int lightflag;

// address: 0x800CBD7C
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800CC030
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800CB2BC
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x8011CCF4
extern int restore_r;

// address: 0x8011CCF8
extern int restore_g;

// address: 0x8011CCFC
extern int restore_b;

// address: 0x800CC048
// size: 0x10
static char radius_tab[16];

// address: 0x800CC058
// size: 0x10
static char bright_tab[16];

// address: 0x8011CD31
extern unsigned char qtextflag;

// address: 0x8011CD34
extern int qtextSpd;

// address: 0x8011DAEC
static unsigned char *pMedTextCels;

// address: 0x8011DAF0
static unsigned char *pTextBoxCels;

// address: 0x8011DAF4
static char *qtextptr;

// address: 0x8011DAF8
static int qtexty;

// address: 0x8011DAFC
static unsigned long qtextDelay;

// address: 0x8011DB00
static unsigned long sgLastScroll;

// address: 0x8011DB04
static unsigned long scrolltexty;

// address: 0x8011DB08
static long sglMusicVolumeSave;

// address: 0x800CC3A0
// size: 0x50
extern char BookName[80];

// address: 0x800CC3F0
// size: 0x50
extern char MtPrevText[80];

// address: 0x8011CD20
static bool qtbodge;

// address: 0x800CC390
// size: 0x10
extern struct Dialog QBack;

// address: 0x800CC440
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800CCBB0
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800CCAA0
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800CCDFC
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x8011EB68
// size: 0x16
static struct DJunk sgJunk;

// address: 0x8011DB0D
static unsigned char sgbRecvCmd;

// address: 0x8011DB10
static unsigned long sgdwRecvOffset;

// address: 0x8011DB14
static unsigned char sgbDeltaChunks;

// address: 0x8011DB15
static unsigned char sgbDeltaChanged;

// address: 0x8011DB18
static unsigned long sgdwOwnerWait;

// address: 0x8011DB1C
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x8011DB20
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8011DB24
static int sgnCurrMegaPlayer;

// address: 0x8011CD4D
extern unsigned char deltaload;

// address: 0x8011CD4E
extern unsigned char gbBufferMsgs;

// address: 0x8011CD50
// size: 0x4
extern struct NoComp CompNoComp;

// address: 0x8011CD54
// size: 0x4
extern struct PakComp CompPakComp;

// address: 0x8011CD58
// size: 0x4
extern struct CrunchComp CompCrunchComp;

// address: 0x800CCC9C
// size: 0x160
extern struct CompLevelMaps GameMaps;

// address: 0x8011CD5C
extern unsigned long dwRecCount;

// address: 0x8011CD72
extern unsigned char gbMaxPlayers;

// address: 0x8011CD73
extern unsigned char gbActivePlayers;

// address: 0x8011CD74
extern unsigned char gbGameDestroyed;

// address: 0x8011CD75
extern unsigned char gbDeltaSender;

// address: 0x8011CD76
extern unsigned char gbSelectProvider;

// address: 0x8011CD77
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x8011DB28
static unsigned char sgbSentThisCycle;

// address: 0x8011DB2C
static unsigned long sgdwGameLoops;

// address: 0x8011DB30
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x8011DB34
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x8011DB38
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x8011DB40
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x8011DB48
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x8011DB50
static unsigned char sgbTimeout;

// address: 0x8011DB54
static long sglTimeoutStart;

// address: 0x8011CD6C
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x8011CD71
static unsigned char sgbNetInited;

// address: 0x800CDE64
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800CE028
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80117F4C
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800CE808
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x8011CD98
extern long numobjects;

// address: 0x800CFDDC
// size: 0x7F
extern char objectactive[127];

// address: 0x800CFE5C
// size: 0x7F
extern char objectavail[127];

// address: 0x8011CD9C
extern unsigned char InitObjFlag;

// address: 0x8011CDA0
extern int trapid;

// address: 0x800CFEDC
// size: 0x28
extern char ObjFileList[40];

// address: 0x8011CDA4
extern int trapdir;

// address: 0x8011CDA8
extern int leverid;

// address: 0x8011CD90
extern int numobjfiles;

// address: 0x800CE720
// size: 0x20
extern int bxadd[8];

// address: 0x800CE740
// size: 0x20
extern int byadd[8];

// address: 0x800CE7C8
// size: 0x1A
extern char shrineavail[26];

// address: 0x800CE760
// size: 0x68
extern int shrinestrs[26];

// address: 0x800CE7E4
// size: 0x24
extern int StoryBookName[9];

// address: 0x8011CD94
extern int myscale;

// address: 0x8011CDBC
extern unsigned char gbValidSaveFile;

// address: 0x8011CDB8
extern bool DoLoadedChar;

// address: 0x800D00FC
// size: 0x4750
extern struct PlayerStruct plr[2];

// address: 0x8011CDDC
extern int myplr;

// address: 0x8011CDE0
extern int deathdelay;

// address: 0x8011CDE4
extern unsigned char deathflag;

// address: 0x8011CDE5
extern char light_rad;

// address: 0x8011CDD4
// size: 0x5
extern char light_level[5];

// address: 0x800CFFF4
// size: 0x30
extern int MaxStats[4][3];

// address: 0x8011CDCC
static int PlrStructSize;

// address: 0x8011CDD0
static int ItemStructSize;

// address: 0x800CFF04
// size: 0x24
extern int plrxoff[9];

// address: 0x800CFF28
// size: 0x24
extern int plryoff[9];

// address: 0x800CFF4C
// size: 0x24
extern int plrxoff2[9];

// address: 0x800CFF70
// size: 0x24
extern int plryoff2[9];

// address: 0x800CFF94
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800CFFB8
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800CFFC4
// size: 0xC
extern int MagicTbl[3];

// address: 0x800CFFD0
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800CFFDC
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800CFFE8
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800D0024
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800D4984
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x8011CE14
extern unsigned char *pQLogCel;

// address: 0x8011CE18
extern int ReturnLvlX;

// address: 0x8011CE1C
extern int ReturnLvlY;

// address: 0x8011CE20
extern int ReturnLvl;

// address: 0x8011CE24
extern int ReturnLvlT;

// address: 0x8011CE28
extern unsigned char rporttest;

// address: 0x8011CE2C
extern int qline;

// address: 0x8011CE30
extern int numqlines;

// address: 0x8011CE34
extern int qtopline;

// address: 0x8011EB80
// size: 0x40
static int qlist[16];

// address: 0x8011DB58
// size: 0x8
static struct RECT QSRect;

// address: 0x8011CDF1
extern unsigned char questlog;

// address: 0x800D484C
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x8011CDF4
extern int ALLQUESTS;

// address: 0x800D4960
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800D496C
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800D4978
// size: 0xC
extern int QuestGroup3[3];

// address: 0x8011CDF8
// size: 0x8
extern int QuestGroup4[2];

// address: 0x8011CE10
extern bool WaterDone;

// address: 0x800D494C
// size: 0x14
extern int questtrigstr[5];

// address: 0x8011CE00
static int QS_PX;

// address: 0x8011CE04
static int QS_PY;

// address: 0x8011CE08
static int QS_PW;

// address: 0x8011CE0C
static int QS_PH;

// address: 0x8011EBC0
// size: 0x10
static struct Dialog QSBack;

// address: 0x800D4AC4
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x8011CE6F
extern char stextflag;

// address: 0x800D536C
// size: 0xBE0
extern struct ItemStruct smithitem[20];

// address: 0x800D5F4C
// size: 0x390
extern struct ItemStruct premiumitem[6];

// address: 0x8011CE70
extern int numpremium;

// address: 0x8011CE74
extern int premiumlevel;

// address: 0x800D62DC
// size: 0xBE0
extern struct ItemStruct witchitem[20];

// address: 0x800D6EBC
// size: 0x98
extern struct ItemStruct boyitem;

// address: 0x8011CE78
extern int boylevel;

// address: 0x800D6F54
// size: 0x98
extern struct ItemStruct golditem;

// address: 0x800D6FEC
// size: 0xBE0
extern struct ItemStruct healitem[20];

// address: 0x8011CE7C
extern char stextsize;

// address: 0x8011CE7D
extern unsigned char stextscrl;

// address: 0x8011DB60
static int stextsel;

// address: 0x8011DB64
static int stextlhold;

// address: 0x8011DB68
static int stextshold;

// address: 0x8011DB6C
static int stextvhold;

// address: 0x8011DB70
static int stextsval;

// address: 0x8011DB74
static int stextsmax;

// address: 0x8011DB78
static int stextup;

// address: 0x8011DB7C
static int stextdown;

// address: 0x8011DB80
static char stextscrlubtn;

// address: 0x8011DB81
static char stextscrldbtn;

// address: 0x8011DB82
static char SItemListFlag;

// address: 0x8011EBD0
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800D7BCC
// size: 0x1C80
extern struct ItemStruct storehold[48];

// address: 0x800D984C
// size: 0x30
extern char storehidx[48];

// address: 0x8011DB84
static int storenumh;

// address: 0x8011DB88
static int gossipstart;

// address: 0x8011DB8C
static int gossipend;

// address: 0x8011DB90
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x8011DB98
static int talker;

// address: 0x8011CE5C
extern unsigned char *pSTextBoxCels;

// address: 0x8011CE60
extern unsigned char *pSTextSlidCels;

// address: 0x8011CE64
extern int *SStringY;

// address: 0x800D5248
// size: 0x10
extern struct Dialog SBack;

// address: 0x800D5258
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800D52A8
// size: 0x50
extern int SStringYBuy0[20];

// address: 0x800D52F8
// size: 0x50
extern int SStringYBuy1[20];

// address: 0x800D5348
// size: 0x24
extern int talkname[9];

// address: 0x8011CE6E
extern unsigned char InStoreFlag;

// address: 0x80119298
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x8011CE8C
extern unsigned long gdwAllTextEntries;

// address: 0x8011DB9C
static unsigned char *P3Tiles;

// address: 0x8011CE9C
extern int tile;

// address: 0x8011CEAC
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800D9AB4
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x8011CEB0
extern int numtrigs;

// address: 0x8011CEB4
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x8011CEB8
extern int TWarpFrom;

// address: 0x800D987C
// size: 0x2C
extern int TownDownList[11];

// address: 0x800D98A8
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800D98DC
// size: 0x30
extern int L1UpList[12];

// address: 0x800D990C
// size: 0x28
extern int L1DownList[10];

// address: 0x800D9934
// size: 0xC
extern int L2UpList[3];

// address: 0x800D9940
// size: 0x14
extern int L2DownList[5];

// address: 0x800D9954
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800D9960
// size: 0x3C
extern int L3UpList[15];

// address: 0x800D999C
// size: 0x24
extern int L3DownList[9];

// address: 0x800D99C0
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800D99F8
// size: 0x10
extern int L4UpList[4];

// address: 0x800D9A08
// size: 0x18
extern int L4DownList[6];

// address: 0x800D9A20
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800D9A30
// size: 0x84
extern int L4PentaList[33];

// address: 0x8011CED1
extern unsigned char gbSndInited;

// address: 0x8011CED4
extern long sglMasterVolume;

// address: 0x8011CED8
extern long sglMusicVolume;

// address: 0x8011CEDC
extern long sglSoundVolume;

// address: 0x8011CEE0
extern long sglSpeechVolume;

// address: 0x8011CEE4
extern int sgnMusicTrack;

// address: 0x8011CED2
extern unsigned char gbDupSounds;

// address: 0x8011CEE8
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x8011A07C
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x8011CEF8
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800D9B04
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x8011CF00
// size: 0x2
extern char _pfind_index[2];

// address: 0x8011CF04
// size: 0x2
extern char _pfindx[2];

// address: 0x8011CF08
// size: 0x2
extern char _pfindy[2];

// address: 0x8011CF0A
extern unsigned char automapmoved;

// address: 0x8011CEF5
extern unsigned char flyflag;

// address: 0x8011CEF6
static char seen_combo;

// address: 0x8011F8F0
// size: 0x94
static struct GamePad GPad1;

// address: 0x8011F990
// size: 0x94
static struct GamePad GPad2;

// address: 0x8011DBA0
static unsigned long (*CurrentProc)();

// address: 0x8011A218
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x8011CF44
extern int NumOfStrings;

// address: 0x8011CF18
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x8011CF1C
extern long hndText;

// address: 0x8011CF20
extern char **TextPtr;

// address: 0x8011CF24
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x8011CF54
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x8011CF58
extern int CharFade;

// address: 0x8011CF5C
extern int rotateness;

// address: 0x8011CF60
extern int spiralling_shape;

// address: 0x8011CF64
extern int down;

// address: 0x800D9B54
// size: 0x10
extern char MlTab[16];

// address: 0x800D9B64
// size: 0x10
extern char QlTab[16];

// address: 0x800D9B74
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x8011CF80
extern int MyXoff1;

// address: 0x8011CF84
extern int MyYoff1;

// address: 0x8011CF88
extern int MyXoff2;

// address: 0x8011CF8C
extern int MyYoff2;

// address: 0x8011CF9C
extern bool iscflag;

// address: 0x8011CFA9
static unsigned char sgbFadedIn;

// address: 0x8011CFAA
static unsigned char screenbright;

// address: 0x8011CFAC
static int faderate;

// address: 0x8011CFB0
static bool fading;

// address: 0x8011CFBC
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x8011CFB4
extern int st;

// address: 0x8011CFB8
extern int mode;

// address: 0x800D9CFC
// size: 0x18
extern struct PortalStruct portal[2];

// address: 0x8011CFEE
extern char portalindex;

// address: 0x8011CFE8
// size: 0x2
static char WarpDropX[2];

// address: 0x8011CFEC
// size: 0x2
static char WarpDropY[2];

// address: 0x800D9D14
// size: 0x78
extern char MyVerString[120];

// address: 0x8011D154
extern int Year;

// address: 0x8011D158
extern int Day;

// address: 0x8011DBA4
static unsigned char *tbuff;

// address: 0x800D9D8C
// size: 0x300
extern unsigned char IconBuffer[768];

// address: 0x8011DBA8
static unsigned char HR1;

// address: 0x8011DBA9
static unsigned char HR2;

// address: 0x8011DBAA
static unsigned char HR3;

// address: 0x8011DBAB
static unsigned char VR1;

// address: 0x8011DBAC
static unsigned char VR2;

// address: 0x8011DBAD
static unsigned char VR3;

// address: 0x8011D1D4
// size: 0x18
extern struct NODE *pHallList;

// address: 0x8011D1D8
extern int nRoomCnt;

// address: 0x8011D1DC
extern int nSx1;

// address: 0x8011D1E0
extern int nSy1;

// address: 0x8011D1E4
extern int nSx2;

// address: 0x8011D1E8
extern int nSy2;

// address: 0x8011D18C
extern int Area_Min;

// address: 0x8011D190
extern int Room_Max;

// address: 0x8011D194
extern int Room_Min;

// address: 0x8011D198
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x8011D1A0
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x8011D1A8
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x8011D1B0
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x8011D1B8
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x8011D1BC
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x8011D1C0
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x8011D1C4
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x8011D1C8
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x8011D1CC
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x8011D1D0
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x8011DBB0
static int abyssx;

// address: 0x8011DBB4
static unsigned char lavapool;

// address: 0x8011D274
extern int lockoutcnt;

// address: 0x8011D1F8
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x8011D200
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x8011D208
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x8011D210
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x8011D218
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x8011D220
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x8011D228
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x8011D230
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x8011D238
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x8011D240
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x8011D248
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x8011D250
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x8011D258
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x8011D260
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x8011D264
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x8011D268
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x8011D26C
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x8011D270
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x8011D278
extern int diabquad1x;

// address: 0x8011D27C
extern int diabquad2x;

// address: 0x8011D280
extern int diabquad3x;

// address: 0x8011D284
extern int diabquad4x;

// address: 0x8011D288
extern int diabquad1y;

// address: 0x8011D28C
extern int diabquad2y;

// address: 0x8011D290
extern int diabquad3y;

// address: 0x8011D294
extern int diabquad4y;

// address: 0x8011D298
extern int SP4x1;

// address: 0x8011D29C
extern int SP4y1;

// address: 0x8011D2A0
extern int SP4x2;

// address: 0x8011D2A4
extern int SP4y2;

// address: 0x8011D2A8
extern int l4holdx;

// address: 0x8011D2AC
extern int l4holdy;

// address: 0x8011DBB8
static unsigned char *lpSetPiece1;

// address: 0x8011DBBC
static unsigned char *lpSetPiece2;

// address: 0x8011DBC0
static unsigned char *lpSetPiece3;

// address: 0x8011DBC4
static unsigned char *lpSetPiece4;

// address: 0x8011DBC8
static unsigned char *lppSetPiece2;

// address: 0x8011DBCC
static unsigned char *lppSetPiece3;

// address: 0x8011DBD0
static unsigned char *lppSetPiece4;

// address: 0x8011D2BC
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x8011D2C4
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800DA08C
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800DA0A0
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800DA0BC
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8011D2CC
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800DA0D0
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x8011D3C0
static bool DoUiForChooseMonster;

// address: 0x800DA0F4
// size: 0x88
static char *MgToText[34];

// address: 0x800DA17C
// size: 0x24
extern int StoryText[3][3];

// address: 0x800DA1A0
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800DB3A0
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800DB9E0
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x8011D3E4
extern int setpc_x;

// address: 0x8011D3E8
extern int setpc_y;

// address: 0x8011D3EC
extern int setpc_w;

// address: 0x8011D3F0
extern int setpc_h;

// address: 0x8011D3F4
extern unsigned char setloadflag;

// address: 0x800DC020
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800DC824
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800DD028
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800DD82C
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800DE030
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x8011D3F8
extern int dminx;

// address: 0x8011D3FC
extern int dminy;

// address: 0x8011D400
extern int dmaxx;

// address: 0x8011D404
extern int dmaxy;

// address: 0x8011D408
extern int gnDifficulty;

// address: 0x8011D40C
extern unsigned char currlevel;

// address: 0x8011D40D
extern unsigned char leveltype;

// address: 0x8011D40E
extern unsigned char setlevel;

// address: 0x8011D40F
extern unsigned char setlvlnum;

// address: 0x8011D410
extern unsigned char setlvltype;

// address: 0x8011D414
extern int ViewX;

// address: 0x8011D418
extern int ViewY;

// address: 0x8011D41C
extern int ViewDX;

// address: 0x8011D420
extern int ViewDY;

// address: 0x8011D424
extern int ViewBX;

// address: 0x8011D428
extern int ViewBY;

// address: 0x800DE834
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x8011D42C
extern int LvlViewX;

// address: 0x8011D430
extern int LvlViewY;

// address: 0x8011D434
extern int btmbx;

// address: 0x8011D438
extern int btmby;

// address: 0x8011D43C
extern int btmdx;

// address: 0x8011D440
extern int btmdy;

// address: 0x8011D444
extern int MicroTileLen;

// address: 0x8011D448
extern char TransVal;

// address: 0x800DE848
// size: 0x20
extern bool TransList[8];

// address: 0x8011D44C
extern int themeCount;

// address: 0x800DE868
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x80100B28
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x8010168C
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x801021F0
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x80102D54
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x8011D3DC
extern unsigned char *pSetPiece;

// address: 0x8011D3E0
extern int DungSize;

// address: 0x80102F20
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x8011D48C
extern int numthemes;

// address: 0x8011D490
extern int zharlib;

// address: 0x8011D494
extern unsigned char armorFlag;

// address: 0x8011D495
extern unsigned char bCrossFlag;

// address: 0x8011D496
extern unsigned char weaponFlag;

// address: 0x8011D498
extern int themex;

// address: 0x8011D49C
extern int themey;

// address: 0x8011D4A0
extern int themeVar1;

// address: 0x8011D4A4
extern unsigned char bFountainFlag;

// address: 0x8011D4A5
extern unsigned char cauldronFlag;

// address: 0x8011D4A6
extern unsigned char mFountainFlag;

// address: 0x8011D4A7
extern unsigned char pFountainFlag;

// address: 0x8011D4A8
extern unsigned char tFountainFlag;

// address: 0x8011D4A9
extern unsigned char treasureFlag;

// address: 0x8011D4AC
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x80102E00
// size: 0x10
extern int ThemeGood[4];

// address: 0x80102E10
// size: 0x64
extern int trm5x[25];

// address: 0x80102E74
// size: 0x64
extern int trm5y[25];

// address: 0x80102ED8
// size: 0x24
extern int trm3x[9];

// address: 0x80102EFC
// size: 0x24
extern int trm3y[9];

// address: 0x8011D584
extern int nummissiles;

// address: 0x80103138
// size: 0x1F4
extern int missileactive[125];

// address: 0x8010332C
// size: 0x1F4
extern int missileavail[125];

// address: 0x8011D588
extern unsigned char MissilePreFlag;

// address: 0x80103520
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x8011D589
extern unsigned char ManashieldFlag;

// address: 0x8011D58A
extern unsigned char ManashieldFlag2;

// address: 0x801030B0
// size: 0x20
extern int XDirAdd[8];

// address: 0x801030D0
// size: 0x20
extern int YDirAdd[8];

// address: 0x8011D551
extern unsigned char fadetor;

// address: 0x8011D552
extern unsigned char fadetog;

// address: 0x8011D553
extern unsigned char fadetob;

// address: 0x801030F0
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x80103100
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x80105DD0
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x8011D5EC
extern long nummonsters;

// address: 0x8010B550
// size: 0x190
extern short monstactive[200];

// address: 0x8010B6E0
// size: 0x190
extern short monstkills[200];

// address: 0x8010B870
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x8011D5F0
extern long monstimgtot;

// address: 0x8011D5F4
extern char totalmonsters;

// address: 0x8011D5F8
extern int uniquetrans;

// address: 0x8011DBD4
static unsigned char sgbSaveSoundOn;

// address: 0x8011D5BC
// size: 0x8
extern char offset_x[8];

// address: 0x8011D5C4
// size: 0x8
extern char offset_y[8];

// address: 0x8011D5A4
// size: 0x8
extern char left[8];

// address: 0x8011D5AC
// size: 0x8
extern char right[8];

// address: 0x8011D5B4
// size: 0x8
extern char opposite[8];

// address: 0x8011D598
extern int nummtypes;

// address: 0x8011D59C
// size: 0x7
extern char animletter[7];

// address: 0x80105C30
// size: 0x120
extern int MWVel[3][24];

// address: 0x8011D5CC
// size: 0x4
extern char rnd5[4];

// address: 0x8011D5D0
// size: 0x4
extern char rnd10[4];

// address: 0x8011D5D4
// size: 0x4
extern char rnd20[4];

// address: 0x8011D5D8
// size: 0x4
extern char rnd60[4];

// address: 0x80105D50
// size: 0x80
extern void (*AiProc[32])();

// address: 0x8010BD48
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x8010D788
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x8010D808
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x8010D878
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x8010BA30
// size: 0x218
extern int TransPals[134];

// address: 0x8010BC48
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x8011D630
extern unsigned char invflag;

// address: 0x8011D631
extern unsigned char drawsbarflag;

// address: 0x8011D634
extern int InvBackY;

// address: 0x8011D638
extern int InvCursPos;

// address: 0x8010E820
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x8011D63C
extern int InvBackAY;

// address: 0x8011D640
extern int InvSel;

// address: 0x8011D644
extern int ItemW;

// address: 0x8011D648
extern int ItemH;

// address: 0x8011D64C
extern int ItemNo;

// address: 0x8011D650
// size: 0x8
extern struct RECT BRect;

// address: 0x8011D618
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x8011D61C
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x8011D614
extern int InvPageNo;

// address: 0x8010E1A8
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8010E1D0
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x8010E418
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x8010E6B8
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x8010E76C
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x8011D628
static bool InvOn;

// address: 0x8011D62C
static unsigned long sgdwLastTime;

// address: 0x8011D687
extern unsigned char automapflag;

// address: 0x8010E884
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x8010E94C
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8011D688
extern unsigned char AMLWallFlag;

// address: 0x8011D689
extern unsigned char AMRWallFlag;

// address: 0x8011D68A
extern unsigned char AMLLWallFlag;

// address: 0x8011D68B
extern unsigned char AMLRWallFlag;

// address: 0x8011D68C
extern unsigned char AMDirtFlag;

// address: 0x8011D68D
extern unsigned char AMColumnFlag;

// address: 0x8011D68E
extern unsigned char AMStairFlag;

// address: 0x8011D68F
extern unsigned char AMLDoorFlag;

// address: 0x8011D690
extern unsigned char AMLGrateFlag;

// address: 0x8011D691
extern unsigned char AMLArchFlag;

// address: 0x8011D692
extern unsigned char AMRDoorFlag;

// address: 0x8011D693
extern unsigned char AMRGrateFlag;

// address: 0x8011D694
extern unsigned char AMRArchFlag;

// address: 0x8011D698
extern int AutoMapX;

// address: 0x8011D69C
extern int AutoMapY;

// address: 0x8011D6A0
extern int AutoMapXOfs;

// address: 0x8011D6A4
extern int AutoMapYOfs;

// address: 0x8011D6A8
extern int AMPlayerX;

// address: 0x8011D6AC
extern int AMPlayerY;

// address: 0x8011D664
extern int AutoMapScale;

// address: 0x8011D668
extern unsigned char AutoMapPlayerR;

// address: 0x8011D669
extern unsigned char AutoMapPlayerG;

// address: 0x8011D66A
extern unsigned char AutoMapPlayerB;

// address: 0x8011D66B
extern unsigned char AutoMapWallR;

// address: 0x8011D66C
extern unsigned char AutoMapWallG;

// address: 0x8011D66D
extern unsigned char AutoMapWallB;

// address: 0x8011D66E
extern unsigned char AutoMapDoorR;

// address: 0x8011D66F
extern unsigned char AutoMapDoorG;

// address: 0x8011D670
extern unsigned char AutoMapDoorB;

// address: 0x8011D671
extern unsigned char AutoMapColumnR;

// address: 0x8011D672
extern unsigned char AutoMapColumnG;

// address: 0x8011D673
extern unsigned char AutoMapColumnB;

// address: 0x8011D674
extern unsigned char AutoMapArchR;

// address: 0x8011D675
extern unsigned char AutoMapArchG;

// address: 0x8011D676
extern unsigned char AutoMapArchB;

// address: 0x8011D677
extern unsigned char AutoMapStairR;

// address: 0x8011D678
extern unsigned char AutoMapStairG;

// address: 0x8011D679
extern unsigned char AutoMapStairB;

// address: 0x8010E86C
// size: 0x18
static int SetLevelName[6];

// address: 0x8011DD30
extern unsigned long GazTick;

// address: 0x80124600
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800AA9E8
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x8011DC5C
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x8011DC60
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x8011DC64
// size: 0x5C
static struct TASK *T;

// address: 0x8011DC68
static unsigned long MemTypeForTasker;

// address: 0x80122048
// size: 0x30
static int SchEnv[12];

// address: 0x8011DC6C
static unsigned long ExecId;

// address: 0x8011DC70
static unsigned long ExecMask;

// address: 0x8011DC74
static int TasksActive;

// address: 0x8011DC78
static void (*EpiFunc)();

// address: 0x8011DC7C
static void (*ProFunc)();

// address: 0x8011DC80
static unsigned long EpiProId;

// address: 0x8011DC84
static unsigned long EpiProMask;

// address: 0x8011DC88
static void (*DoTasksPrologue)();

// address: 0x8011DC8C
static void (*DoTasksEpilogue)();

// address: 0x8011DC90
static void (*StackFloodCallback)();

// address: 0x8011DC94
static unsigned char ExtraStackProtection;

// address: 0x8011DC98
static int ExtraStackSizeLongs;

// address: 0x8011DD44
extern void *LastPtr;

// address: 0x800AAA20
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8011DC9C
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x80122078
// size: 0xF50
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x8011DCA0
// size: 0x1C
static struct MEM_HDR *FreeBlocks;

// address: 0x8011DCA4
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x8011DCA8
static int TimeStamp;

// address: 0x8011DCAC
static unsigned char FullErrorChecking;

// address: 0x8011DCB0
static unsigned long LastAttemptedAlloc;

// address: 0x8011DCB4
static unsigned long LastDeallocedBlock;

// address: 0x8011DCB8
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x8011DCBC
static int NumOfFreeHdrs;

// address: 0x8011DCC0
static unsigned long LastTypeAlloced;

// address: 0x8011DCC4
static void (*AllocFilter)();

// address: 0x800AAA28
// size: 0x28
extern char *GalErrors[10];

// address: 0x800AAA50
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x8011DD58
extern void (*PollFunc)();

// address: 0x8011DD3C
extern void (*MsgFunc)();

// address: 0x8011DD88
extern void (*ErrorFunc)();

// address: 0x80122FC8
// size: 0x1380
static char buf[4992];

// address: 0x800AAA78
// size: 0x7
static char NULL_REP[7];

// address: 0x8007DBFC
// line start: 177
// line end:   178
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007DC18
// line start: 182
// line end:   183
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007DC24
// line start: 114
// line end:   123
void Remove96__Fv() {
}


// address: 0x8007DC5C
// line start: 133
// line end:   212
void AppMain() {
}


// address: 0x8007DD04
// line start: 220
// line end:   221
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007DD30
// line start: 284
// line end:   336
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007DE24
// line start: 350
// line end:   362
void MAIN_MainLoop__Fv() {
}


// address: 0x8007DE6C
// line start: 76
// line end:   80
void CheckMaxArgs__Fv() {
}


// address: 0x8007DEA0
// line start: 96
// line end:   98
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007DEAC
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


// address: 0x8007E020
// line start: 159
// line end:   178
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007E0D4
// line start: 220
// line end:   239
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007E174
// line start: 249
// line end:   266
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007E210
// line start: 276
// line end:   287
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007E2B0
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


// address: 0x8007E3CC
// line start: 188
// line end:   206
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007E4A8
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


// address: 0x8007E5D0
// line start: 249
// line end:   250
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007E5DC
// line start: 258
// line end:   267
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007E618
// line start: 280
// line end:   346
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007E82C
// line start: 370
// line end:   371
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007E838
// line start: 379
// line end:   381
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007E874
// line start: 385
// line end:   386
unsigned char ClearedYet__Fv() {
}


// address: 0x8007E880
// line start: 394
// line end:   398
void PrimDrawSycnCallBack() {
}


// address: 0x8007E8A0
// line start: 408
// line end:   409
void SendDispEnv__Fv() {
}


// address: 0x8007E8C4
// size: 0x18
// line start: 458
// line end:   462
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007E8DC
// size: 0x28
// line start: 466
// line end:   470
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007E8F4
// size: 0x34
// line start: 474
// line end:   478
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007E90C
// size: 0x24
// line start: 483
// line end:   487
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007E924
// size: 0x14
// line start: 491
// line end:   495
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007E93C
// size: 0xC
// line start: 508
// line end:   512
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007E954
// line start: 516
// line end:   545
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007EA68
// line start: 551
// line end:   562
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007EAD0
// line start: 136
// line end:   137
void VID_AfterDisplay__Fv() {
}


// address: 0x8007EAF0
// line start: 191
// line end:   193
void VID_ScrOn__Fv() {
}


// address: 0x8007EB18
// line start: 212
// line end:   218
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007EB70
// line start: 222
// line end:   223
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007EB7C
// line start: 227
// line end:   228
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007EB88
// line start: 233
// line end:   239
void VID_DispEnvSend() {
}


// address: 0x8007EBC4
// line start: 245
// line end:   247
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007EBD4
// line start: 251
// line end:   252
int VID_GetXOff__Fv() {
}


// address: 0x8007EBE0
// line start: 256
// line end:   257
int VID_GetYOff__Fv() {
}


// address: 0x8007EBEC
// line start: 261
// line end:   301
void VID_SetDBuffer__Fb(bool DBuf) {
	{
		{
		}
	}
}


// address: 0x8007ED5C
// line start: 96
// line end:   116
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007ED64
// line start: 148
// line end:   149
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007ED84
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007ED84(unsigned short tpage) {
}


// address: 0x8007EDA0
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007EDA0(unsigned short tpage) {
}


// address: 0x8007EDAC
// size: 0x14
// line start: 168
// line end:   169
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007EDB8
// size: 0x14
// line start: 178
// line end:   179
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007EDC4
// line start: 187
// line end:   247
void SortOutFileSystem__Fv() {
}


// address: 0x8007EF00
// line start: 111
// line end:   113
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007EF20
// line start: 117
// line end:   125
void Spanker__Fv() {
}


// address: 0x8007EF60
// line start: 250
// line end:   251
void GaryLiddon__Fv() {
}


// address: 0x8007EF68
// line start: 67
// line end:   118
void ReadPad__Fi(int NoDeb) {
	// register: 16
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


// address: 0x8007F0D8
// line start: 122
// line end:   125
void DummyPoll__Fv() {
}


// address: 0x8007F0E0
// line start: 128
// line end:   129
void DaveOwens__Fv() {
}


// address: 0x8007F108
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007F130
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8007F13C
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007F13C(unsigned short tpage) {
}


// address: 0x8007F158
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007F158(unsigned short tpage) {
}


// address: 0x8007F164
// line start: 458
// line end:   486
void TimSwann__Fv() {
}


// address: 0x8007F16C
// size: 0x14
// line start: 61
// line end:   63
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007F1BC
// line start: 70
// line end:   71
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007F210
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


// address: 0x8007F378
// line start: 112
// line end:   119
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007F3DC
// line start: 129
// line end:   131
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007F3FC
// line start: 138
// line end:   150
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007F4DC
// line start: 157
// line end:   171
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007F5A0
// line start: 180
// line end:   185
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007F604
// line start: 193
// line end:   207
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007F6E0
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


// address: 0x8007F7F4
// line start: 254
// line end:   274
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007F89C
// line start: 282
// line end:   286
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007F8F4
// line start: 295
// line end:   299
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007F94C
// line start: 308
// line end:   309
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007F960
// line start: 317
// line end:   318
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007F99C
// size: 0x14
// line start: 62
// line end:   65
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007FA04
// line start: 75
// line end:   75
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007FA5C
// line start: 85
// line end:   93
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007FAA0
// line start: 106
// line end:   118
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FB64
// line start: 125
// line end:   139
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007FC1C
// line start: 143
// line end:   160
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FCF0
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


// address: 0x8007FF00
// size: 0x4
// line start: 65
// line end:   67
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007FF18
// line start: 77
// line end:   79
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007FF44
// line start: 89
// line end:   101
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007FFC0
// line start: 111
// line end:   119
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8008002C
// size: 0x14
// line start: 65
// line end:   68
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x80080068
// line start: 78
// line end:   78
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x800800C0
// line start: 88
// line end:   96
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x80080100
// line start: 109
// line end:   121
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x800801C0
// line start: 128
// line end:   142
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x80080274
// line start: 146
// line end:   158
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8008031C
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


// address: 0x80080528
// size: 0x6C
// line start: 118
// line end:   124
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x80080568
// line start: 134
// line end:   135
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x800805B0
// line start: 145
// line end:   206
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


// address: 0x800807A4
// line start: 231
// line end:   280
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011D950
	static int TpX;
	// address: 0x8011D954
	static int TpY;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
	// register: 2
	register int Dx;
	// register: 2
	register int Dy;
}


// address: 0x8008084C
// line start: 284
// line end:   298
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x80080904
// line start: 308
// line end:   325
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x80080974
// line start: 335
// line end:   342
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x800809E4
// line start: 347
// line end:   369
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


// address: 0x80080B10
// line start: 379
// line end:   437
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


// address: 0x80080C10
// size: 0x28
// line start: 453
// line end:   590
struct POLY_FT4 *PrintMonster__7TextDatiiibi(struct TextDat *this, int Frm, int X, int Y, bool XFlip, int OtPos) {
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


// address: 0x8008101C
// line start: 596
// line end:   663
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


// address: 0x80081288
// line start: 671
// line end:   705
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


// address: 0x800813E8
// line start: 710
// line end:   768
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


// address: 0x800814E8
// line start: 772
// line end:   843
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


// address: 0x80081740
// line start: 850
// line end:   877
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


// address: 0x800817C4
// line start: 882
// line end:   940
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


// address: 0x8008198C
// size: 0x28
// line start: 954
// line end:   973
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80081AE0
// size: 0x34
// line start: 979
// line end:   998
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x80081C34
// size: 0x28
// line start: 1004
// line end:   1020
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x80081D18
// line start: 1025
// line end:   1063
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x80081E70
// line start: 1072
// line end:   1102
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


// address: 0x80081FB0
// line start: 1112
// line end:   1143
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x800820AC
// line start: 1198
// line end:   1208
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x800820D8
// line start: 1218
// line end:   1253
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x80082220
// size: 0x6C
// line start: 1264
// line end:   1284
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


// address: 0x80082340
// line start: 1294
// line end:   1298
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x80082394
// line start: 1303
// line end:   1331
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


// address: 0x80082458
// line start: 1358
// line end:   1359
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x800824AC
// line start: 1363
// line end:   1364
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x80082504
// line start: 1373
// line end:   1403
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


// address: 0x80082628
// line start: 1441
// line end:   1467
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


// address: 0x80082700
// size: 0x4
// line start: 1471
// line end:   1473
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x80082750
// line start: 1479
// line end:   1480
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x80082778
// line start: 1484
// line end:   1490
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x80082820
// line start: 1496
// line end:   1524
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


// address: 0x800828E0
// line start: 1528
// line end:   1532
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x80082924
// size: 0xE
// line start: 1536
// line end:   1544
struct CCreatureAction *GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x800829B4
// line start: 1548
// line end:   1555
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80082A24
// line start: 1560
// line end:   1571
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


// address: 0x80082A90
// line start: 1579
// line end:   1581
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80082AE0
// line start: 1594
// line end:   1595
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80082B08
// line start: 1599
// line end:   1612
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


// address: 0x80082BA4
// line start: 1617
// line end:   1626
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x80082C0C
// line start: 1658
// line end:   1700
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


// address: 0x80082CE0
// size: 0x78
// line start: 1714
// line end:   1715
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x80082D14
// line start: 1719
// line end:   1779
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


// address: 0x80082FB4
// line start: 1784
// line end:   1786
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x80082FD8
// line start: 1790
// line end:   1819
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x800832B8
// line start: 1827
// line end:   1835
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80083334
// line start: 1839
// line end:   1883
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


// address: 0x80083490
// line start: 1921
// line end:   1921
void _GLOBAL__D_DatPool() {
}


// address: 0x800834E8
// line start: 1921
// line end:   1921
void _GLOBAL__I_DatPool() {
}


// address: 0x8008353C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x800835B8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x80083634
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x800836B0
// line start: 243
// line end:   243
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x800836D8
// line start: 242
// line end:   242
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x80083700
// line start: 241
// line end:   241
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x8008370C
// line start: 240
// line end:   240
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x80083718
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80083790
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x800837A4
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x800837B0
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x800837C4
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x800837E0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x800837FC
// line start: 167
// line end:   167
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80083808
// line start: 158
// line end:   158
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80083830
// line start: 157
// line end:   157
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80083858
// line start: 66
// line end:   66
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x8008386C
// size: 0x14
// line start: 122
// line end:   125
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x800838B0
// line start: 135
// line end:   135
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80083908
// line start: 145
// line end:   155
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8008392C
// line start: 167
// line end:   199
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x800839B0
// line start: 208
// line end:   218
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x800839D4
// line start: 224
// line end:   243
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80083AB4
// line start: 260
// line end:   261
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x80083AC4
// line start: 266
// line end:   293
bool CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile) {
	// address: 0xFFFFFEB8
	// size: 0x100
	auto char SearchBuffer[256];
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


// address: 0x80083C10
// line start: 300
// line end:   372
bool LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 22
	register unsigned char *Dest;
	// address: 0xFFFFFFD0
	auto int OrigSize;
	// register: 20
	register unsigned long Pos;
	// register: 30
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
	// register: 19
	register unsigned char NoChunks;
	// register: 23
	register unsigned char Count;
	{
		// register: 17
		register int SizeToRead;
		// register: 19
		register unsigned char *ptr;
	}
}


// address: 0x80083E9C
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


// address: 0x80083FFC
// line start: 109
// line end:   138
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x800840E8
// line start: 148
// line end:   174
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


// address: 0x80084214
// line start: 184
// line end:   224
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


// address: 0x80084388
// line start: 234
// line end:   268
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


// address: 0x800844B0
// line start: 273
// line end:   340
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


// address: 0x80084790
// size: 0x14
// line start: 350
// line end:   371
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


// address: 0x80084890
// size: 0x14
// line start: 381
// line end:   425
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


// address: 0x80084A5C
// line start: 435
// line end:   437
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80084A80
// line start: 449
// line end:   455
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80084AB4
// line start: 465
// line end:   546
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80084B9C
// line start: 556
// line end:   558
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80084BA8
// line start: 565
// line end:   567
void BL_WaitForAsyncFinish__Fv() {
}


// address: 0x80084BF4
// line start: 572
// line end:   574
void BL_AsyncLoadCallBack__Fi(int handle) {
}


// address: 0x80084C24
// line start: 602
// line end:   649
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


// address: 0x80084D9C
// line start: 659
// line end:   695
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80084E64
// size: 0x14
// line start: 705
// line end:   709
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80084E90
// line start: 724
// line end:   731
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80084EC8
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


// address: 0x80084F9C
// line start: 77
// line end:   108
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x800850C0
// line start: 118
// line end:   137
void Tfree__FPv(void *Addr) {
}


// address: 0x80085170
// line start: 146
// line end:   151
void InitTmalloc__Fv() {
}


// address: 0x80085198
// line start: 161
// line end:   167
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x800851EC
// line start: 176
// line end:   188
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80085238
// line start: 199
// line end:   229
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


// address: 0x8008532C
// line start: 241
// line end:   246
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80085358
// line start: 258
// line end:   317
void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum) {
	{
		{
			{
				{
					// register: 19
					register bool oldsflag;
					// register: 18
					register bool oldpflag;
				}
			}
		}
	}
}


// address: 0x8008559C
// line start: 328
// line end:   429
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


// address: 0x800858B4
// line start: 440
// line end:   478
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


// address: 0x800859D4
// line start: 488
// line end:   519
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


// address: 0x80085AD8
// line start: 543
// line end:   546
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80085AE8
// line start: 556
// line end:   557
bool PA_GetPauseOk__Fv() {
}


// address: 0x80085AF4
// line start: 580
// line end:   600
void MY_PausePrint__17CTempPauseMessageiPciP4RECT(struct CTempPauseMessage *this, int s, char *Txt, int Menu, struct RECT *PRect) {
	// register: 6
	register int y;
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80085CC4
// line start: 603
// line end:   604
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80085CCC
// line start: 607
// line end:   620
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80085DE8
// line start: 627
// line end:   628
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80085DF0
// line start: 631
// line end:   632
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80085DF8
// line start: 635
// line end:   648
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80085F14
// line start: 655
// line end:   656
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80085F1C
// line start: 659
// line end:   660
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80085F24
// line start: 664
// line end:   670
void ShowInActive__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// register: 16
	// size: 0x6C
	register struct CPad *P;
}


// address: 0x80086004
// line start: 676
// line end:   692
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80086154
// line start: 708
// line end:   709
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x8008615C
// line start: 712
// line end:   712
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80086184
// line start: 717
// line end:   717
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x800861AC
// line start: 717
// line end:   717
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x800861D4
// size: 0xC
// line start: 112
// line end:   112
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80086218
// line start: 83
// line end:   83
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x8008624C
// size: 0x8
// line start: 82
// line end:   82
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80086260
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80086280
// line start: 98
// line end:   98
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80086288
// line start: 95
// line end:   95
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80086290
// line start: 78
// line end:   78
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x800862B8
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80086314
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x8008633C
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_8008633C(struct CPad *this) {
}


// address: 0x80086348
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


// address: 0x80086460
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


// address: 0x80086628
// size: 0x6C
// line start: 215
// line end:   226
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x800866C4
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


// address: 0x800867FC
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


// address: 0x80086958
// line start: 315
// line end:   339
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80086A7C
// line start: 343
// line end:   343
void _GLOBAL__I_Pad0() {
}


// address: 0x80086AB4
// line start: 96
// line end:   96
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x80086ABC
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_80086ABC(struct CPad *this) {
}


// address: 0x80086AC8
// line start: 88
// line end:   88
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x80086AD0
// line start: 81
// line end:   81
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x80086AD8
// size: 0x6C
// line start: 79
// line end:   79
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80086B0C
// line start: 128
// line end:   132
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80086B30
// line start: 92
// line end:   97
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


// address: 0x80086BCC
// line start: 366
// line end:   378
void InitPrinty__Fv() {
}


// address: 0x80086C6C
// line start: 383
// line end:   384
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80086C74
// line start: 391
// line end:   460
int PrintChar__5CFontUsUsUcUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80086DF8
// line start: 465
// line end:   646
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


// address: 0x80087418
// line start: 651
// line end:   666
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
	// register: 5
	register char c;
	// register: 18
	register bool jlen;
}


// address: 0x800874B4
// line start: 674
// line end:   677
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80087534
// line start: 683
// line end:   686
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80087540
// line start: 694
// line end:   704
int GetCharWidth__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x800875D0
// line start: 82
// line end:   82
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x800875F4
// line start: 79
// line end:   79
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80087614
// line start: 76
// line end:   76
int GetCharFrameNum__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x8008762C
// line start: 59
// line end:   59
void Init__5CFont(struct CFont *this) {
}


// address: 0x80087660
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80087660(struct TextDat *this, int FrNum) {
}


// address: 0x8008767C
// line start: 110
// line end:   113
unsigned char TrimCol__Fs(short col) {
}


// address: 0x800876B4
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


// address: 0x80088034
// size: 0x24
// line start: 391
// line end:   402
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x8008816C
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


// address: 0x80088410
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


// address: 0x80088548
// line start: 496
// line end:   552
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x800887CC
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


// address: 0x8008998C
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


// address: 0x80089BA4
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80089BA4(struct TextDat *this, int PalNum) {
}


// address: 0x80089BC0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80089BC0(struct TextDat *this, int FrNum) {
}


// address: 0x80089BDC
// line start: 68
// line end:   117
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80089D2C
// line start: 122
// line end:   132
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80089DF8
// line start: 230
// line end:   236
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x80089E38
// line start: 241
// line end:   270
void CycleSelCols__Fv() {
}


// address: 0x80089FF0
// line start: 278
// line end:   286
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


// address: 0x8008A064
// line start: 295
// line end:   301
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008A0B8
// size: 0xE0
// line start: 310
// line end:   364
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x8008A20C
// line start: 374
// line end:   376
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008A244
// line start: 385
// line end:   396
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x8008A30C
// line start: 406
// line end:   418
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x8008A394
// line start: 428
// line end:   435
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x8008A3FC
// line start: 444
// line end:   451
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x8008A464
// line start: 461
// line end:   466
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x8008A4C0
// line start: 476
// line end:   482
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x8008A510
// line start: 490
// line end:   525
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x8008A85C
// line start: 536
// line end:   546
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x8008A908
// line start: 557
// line end:   568
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x8008A9DC
// line start: 578
// line end:   589
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


// address: 0x8008AAE4
// line start: 599
// line end:   657
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr) {
	// register: 2
	register int H;
	// register: 2
	register int Rotated;
	// register: 8
	register int Tpage;
	// register: 4
	register int zU;
	// register: 7
	register int zV;
	// register: 3
	register int zW;
	// register: 6
	register int zH;
}


// address: 0x8008AC24
// size: 0xC
// line start: 667
// line end:   669
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x8008AC9C
// line start: 680
// line end:   681
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008ACC4
// line start: 691
// line end:   694
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x8008ACEC
// line start: 704
// line end:   706
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x8008AD04
// line start: 749
// line end:   1234
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


// address: 0x8008C1F4
// line start: 1246
// line end:   1269
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


// address: 0x8008C364
// line start: 1279
// line end:   1675
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
											// register: 19
											register int W;
											// register: 18
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
																// register: 3
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


// address: 0x8008D168
// line start: 1684
// line end:   1864
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
					// register: 19
					register int W;
					// register: 17
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


// address: 0x8008D89C
// line start: 1872
// line end:   1892
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


// address: 0x8008DA0C
// line start: 1902
// line end:   1903
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008DA20
// line start: 1913
// line end:   1914
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008DA34
// line start: 1924
// line end:   1926
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008DAF8
// line start: 1936
// line end:   1944
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 4
	register int XDiff;
	// register: 7
	register int YDiff;
	// register: 6
	register int divnum;
}


// address: 0x8008DB7C
// line start: 1954
// line end:   1964
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008DC1C
// line start: 1975
// line end:   1986
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008DCF0
// line start: 2043
// line end:   2070
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008DD70
// line start: 2082
// line end:   2083
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008DD78
// line start: 2093
// line end:   2094
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008DD8C
// size: 0xE0
// line start: 2130
// line end:   2137
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008DD98
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008DD98(struct POLY_FT4 **Prim) {
}


// address: 0x8008DE14
// line start: 103
// line end:   111
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008DE5C
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008DE98
// line start: 103
// line end:   111
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008DEE0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008DEE0(struct POLY_GT4 **Prim) {
}


// address: 0x8008DF5C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x8008DFD8
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


// address: 0x8008E000
// line start: 169
// line end:   171
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008E01C
// line start: 173
// line end:   173
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008E044
// line start: 172
// line end:   172
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008E06C
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008E090
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008E0B4
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008E0DC
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008E0E8
// line start: 64
// line end:   76
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008E180
// line start: 47
// line end:   60
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8008E210
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008E248
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008E248(struct TextDat *this, int Creature) {
}


// address: 0x8008E2C0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008E2C0(struct TextDat *this) {
}


// address: 0x8008E2D4
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008E2D4(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008E2E0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008E2E0(struct TextDat *this, int PalNum) {
}


// address: 0x8008E2FC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008E2FC(struct TextDat *this, int FrNum) {
}


// address: 0x8008E318
// line start: 119
// line end:   121
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008E344
// line start: 129
// line end:   130
void OVR_LoadPregame__Fv() {
}


// address: 0x8008E36C
// line start: 137
// line end:   138
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008E394
// line start: 146
// line end:   147
void OVR_LoadGame__Fv() {
}


// address: 0x8008E3BC
// line start: 155
// line end:   156
void OVR_LoadFmv__Fv() {
}


// address: 0x8008E3E4
// line start: 164
// line end:   165
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008E410
// line start: 174
// line end:   178
void ClearOutOverlays__Fv() {
}


// address: 0x8008E468
// line start: 187
// line end:   194
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008E52C
// line start: 203
// line end:   216
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008E59C
// size: 0x4
// line start: 225
// line end:   226
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x8008E5A8
// line start: 234
// line end:   239
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x8008E5FC
// line start: 244
// line end:   244
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008E76C
// size: 0x4
// line start: 65
// line end:   65
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x8008E778
// line start: 74
// line end:   75
void StevesDummyPoll__Fv() {
}


// address: 0x8008E780
// line start: 78
// line end:   81
void Lambo__Fv() {
}


// address: 0x8008E788
// size: 0x84
// line start: 66
// line end:   111
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008E86C
// line start: 122
// line end:   124
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008E8C4
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008E920
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


// address: 0x8008EA6C
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


// address: 0x8008EE98
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008EF18
// line start: 282
// line end:   418
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
										// register: 19
										register int Frame;
										{
											{
												// register: 3
												register int FrmNum;
												// address: 0xFFFFFFC8
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


// address: 0x8008F3F0
// line start: 429
// line end:   487
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008F46C
// size: 0x4
// line start: 492
// line end:   523
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008F4E8
// line start: 534
// line end:   535
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008F4F0
// line start: 544
// line end:   545
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008F4F8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008F4F8(struct POLY_FT4 **Prim) {
}


// address: 0x8008F574
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008F574(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008F5B0
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008F5B0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008F5D8
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008F5EC
// line start: 249
// line end:   253
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008F604
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008F604(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008F63C
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008F660
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008F660(struct TextDat *this, int Creature) {
}


// address: 0x8008F6D8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008F6D8(struct TextDat *this) {
}


// address: 0x8008F6EC
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008F6EC(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008F6F8
// line start: 87
// line end:   94
void PROF_Open__Fv() {
}


// address: 0x8008F738
// line start: 99
// line end:   100
bool PROF_State__Fv() {
}


// address: 0x8008F744
// line start: 104
// line end:   105
void PROF_On__Fv() {
}


// address: 0x8008F754
// line start: 109
// line end:   110
void PROF_Off__Fv() {
}


// address: 0x8008F760
// line start: 114
// line end:   115
void PROF_CpuEnd__Fv() {
}


// address: 0x8008F790
// line start: 119
// line end:   120
void PROF_CpuStart__Fv() {
}


// address: 0x8008F7B4
// line start: 124
// line end:   125
void PROF_DrawStart__Fv() {
}


// address: 0x8008F7D8
// line start: 129
// line end:   130
void PROF_DrawEnd__Fv() {
}


// address: 0x8008F808
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


// address: 0x8008F9FC
// line start: 179
// line end:   180
void PROF_Restart__Fv() {
}


// address: 0x8008FA1C
// line start: 155
// line end:   314
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008FD10
// line start: 325
// line end:   362
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008FDC0
// line start: 370
// line end:   377
void GoBackLevel__Fv() {
}


// address: 0x8008FE34
// line start: 381
// line end:   385
void GoWarpLevel__Fv() {
}


// address: 0x8008FE70
// line start: 391
// line end:   397
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008FF0C
// line start: 401
// line end:   414
void GoLoadGame__Fv() {
}


// address: 0x8008FF6C
// line start: 418
// line end:   424
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x80090008
// line start: 428
// line end:   437
void GoNewLevel__Fv() {
}


// address: 0x80090060
// line start: 443
// line end:   447
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x800900F8
// line start: 454
// line end:   457
void GoForwardLevel__Fv() {
}


// address: 0x8009014C
// line start: 461
// line end:   465
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x800901E4
// line start: 473
// line end:   478
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090238
// line start: 482
// line end:   486
void PostNewGame__Fv() {
}


// address: 0x80090270
// line start: 495
// line end:   502
void LevelToLevelInit__Fv() {
}


// address: 0x800902B8
// line start: 206
// line end:   220
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x800902FC
// size: 0x10
// line start: 228
// line end:   232
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x80090354
// line start: 243
// line end:   344
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 20
	register int ManaHeight;
	// address: 0xFFFFFFC8
	auto int HealthAnim;
	// address: 0xFFFFFFD0
	auto int ManaAnim;
	// register: 21
	register int BarY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 19
	register int X;
	// register: 17
	register int Y;
	// register: 16
	register int xof;
}


// address: 0x80090788
// line start: 352
// line end:   420
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


// address: 0x80090C0C
// line start: 427
// line end:   459
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


// address: 0x80090DAC
// line start: 467
// line end:   479
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x80090DF8
// line start: 496
// line end:   559
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x800911B4
// line start: 563
// line end:   582
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x800912A8
// line start: 588
// line end:   606
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x800913AC
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800913AC(struct TextDat *this, int PalNum) {
}


// address: 0x800913C8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800913C8(struct TextDat *this, int FrNum) {
}


// address: 0x800913E4
// line start: 150
// line end:   163
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat *CDGfxData;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8009149C
// line start: 169
// line end:   171
void InitCDWaitIcon__Fv() {
}


// address: 0x800914D0
// line start: 181
// line end:   198
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x800914E4
// line start: 394
// line end:   416
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x80091524
// line start: 426
// line end:   436
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


// address: 0x80091578
// line start: 442
// line end:   485
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


// address: 0x800916A0
// size: 0x80
// line start: 496
// line end:   554
struct SFXHDR *STR_InitStream__Fv() {
	// register: 18
	// size: 0x80
	register struct SFXHDR *sfh;
	{
		// register: 17
		register int s;
	}
}


// address: 0x800917D8
// size: 0x80
// line start: 564
// line end:   624
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x80091914
// line start: 634
// line end:   639
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8009196C
// line start: 664
// line end:   695
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x80091A78
// line start: 705
// line end:   709
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x80091AC8
// line start: 719
// line end:   723
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x80091B18
// line start: 733
// line end:   754
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80091B9C
// line start: 763
// line end:   805
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x80091CA8
// line start: 814
// line end:   883
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80091E54
// line start: 893
// line end:   912
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x80091F1C
// line start: 923
// line end:   1000
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x800920F8
// line start: 1012
// line end:   1137
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


// address: 0x800923F8
// line start: 1150
// line end:   1321
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


// address: 0x8009282C
// line start: 1335
// line end:   1370
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


// address: 0x80092934
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


// address: 0x800929C0
// line start: 164
// line end:   166
void SPU_OnceOnlyInit__Fv() {
}


// address: 0x800929F8
// line start: 175
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


// address: 0x80092ADC
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


// address: 0x80092B48
// line start: 248
// line end:   258
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x80092BC0
// line start: 267
// line end:   280
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011D9BC
	static int DestAddr;
}


// address: 0x80092C38
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


// address: 0x80092D6C
// line start: 398
// line end:   403
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80092DC0
// line start: 427
// line end:   429
void SND_StopSnd__Fi(int voice) {
}


// address: 0x80092DE4
// line start: 439
// line end:   446
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80092E20
// line start: 456
// line end:   461
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80092E94
// line start: 471
// line end:   539
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


// address: 0x80093050
// line start: 86
// line end:   87
void AS_CallBack0__Fi(int handle) {
}


// address: 0x80093064
// line start: 91
// line end:   92
void AS_CallBack1__Fi(int handle) {
}


// address: 0x80093078
// line start: 102
// line end:   125
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80093154
// line start: 148
// line end:   164
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x800931F4
// line start: 174
// line end:   175
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80093200
// line start: 185
// line end:   189
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8009322C
// line start: 200
// line end:   242
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x8009334C
// line start: 157
// line end:   158
void SCR_Open__Fv() {
}


// address: 0x8009337C
// line start: 170
// line end:   171
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x800933B0
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x80093440
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8009351C
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8009359C
// line start: 277
// line end:   293
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x8009363C
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x800936D0
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


// address: 0x80093744
// line start: 353
// line end:   354
void SCR_Handler__Fv() {
}


// address: 0x8009376C
// line start: 132
// line end:   132
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x80093774
// size: 0x18
// line start: 110
// line end:   116
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x800937B0
// line start: 98
// line end:   104
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80093814
// line start: 90
// line end:   93
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8009386C
// line start: 83
// line end:   86
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x800938C4
// line start: 97
// line end:   100
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x800938D8
// line start: 89
// line end:   92
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x80093904
// line start: 82
// line end:   85
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x8009390C
// line start: 79
// line end:   79
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x80093914
// line start: 78
// line end:   78
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x80093920
// line start: 73
// line end:   73
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80093958
// size: 0x18
// line start: 67
// line end:   67
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80093964
// line start: 57
// line end:   63
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80093984
// line start: 46
// line end:   53
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x800939D0
// line start: 117
// line end:   118
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x800939D8
// line start: 121
// line end:   123
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x80093A0C
// line start: 127
// line end:   135
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x80093A94
// line start: 140
// line end:   172
void SetAmbientLight__Fv() {
	// register: 10
	register int x;
	// register: 6
	register int y;
}


// address: 0x80093BA0
// line start: 177
// line end:   217
void print_demo_task__FP4TASK(struct TASK *T) {
	{
		{
			// register: 3
			register int x;
		}
	}
}


// address: 0x80093D8C
// line start: 221
// line end:   223
void TonysDummyPoll__Fv() {
}


// address: 0x80093DB0
// line start: 227
// line end:   234
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x80093E10
// line start: 238
// line end:   245
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x80093E70
// line start: 257
// line end:   268
void set_pad_record_play__Fi(int level) {
}


// address: 0x80093EE4
// line start: 273
// line end:   281
void start_demo__Fv() {
}


// address: 0x80093F80
// line start: 285
// line end:   286
void SetQuest__Fv() {
}


// address: 0x80093FA8
// line start: 290
// line end:   291
int CurrCheatStr__Fv() {
}


// address: 0x80093FC8
// line start: 295
// line end:   297
void tony__Fv() {
}


// address: 0x80094000
// line start: 233
// line end:   234
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8009400C
// line start: 244
// line end:   245
int GLUE_GetMonsterList__Fv() {
}


// address: 0x80094018
// line start: 255
// line end:   260
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8009406C
// line start: 270
// line end:   275
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800940C0
// line start: 285
// line end:   290
void GLUE_PreTown__Fv() {
}


// address: 0x80094114
// line start: 299
// line end:   300
void GLUE_PreDun__Fv() {
}


// address: 0x80094128
// line start: 320
// line end:   321
bool GLUE_Finished__Fv() {
}


// address: 0x80094134
// line start: 331
// line end:   332
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80094140
// line start: 342
// line end:   354
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x800941C4
// line start: 363
// line end:   367
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800941D4
// line start: 375
// line end:   379
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800941E4
// line start: 387
// line end:   391
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800941F4
// line start: 401
// line end:   421
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x800942CC
// line start: 432
// line end:   619
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


// address: 0x8009482C
// size: 0xC
// line start: 629
// line end:   639
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x800948C4
// size: 0xC
// line start: 644
// line end:   650
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80094920
// size: 0xC
// line start: 654
// line end:   659
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80094950
// line start: 663
// line end:   675
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf *Inf;
}


// address: 0x800949B0
// line start: 687
// line end:   702
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80094A30
// size: 0x10
// line start: 715
// line end:   722
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80094ADC
// line start: 735
// line end:   746
void GLUE_StartGameExit__Fv() {
	{
	}
}


// address: 0x80094B48
// line start: 757
// line end:   758
void GLUE_Init__Fv() {
}


// address: 0x80094B78
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x80094B84
// line start: 139
// line end:   139
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x80094B8C
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80094BA0
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


// address: 0x80094C78
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


// address: 0x80094D08
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


// address: 0x80094D80
// line start: 245
// line end:   255
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x80094DB8
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


// address: 0x80094E1C
// line start: 281
// line end:   292
bool RemoveCtrlScreen__Fv() {
}


// address: 0x80094E84
// line start: 300
// line end:   318
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x80094F3C
// line start: 322
// line end:   334
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80094F7C
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


// address: 0x80094FBC
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


// address: 0x80095110
// line start: 403
// line end:   410
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x80095158
// line start: 418
// line end:   429
bool only_one_button__Fi(int p) {
	// register: 3
	register int hand;
	// register: 5
	register int count;
}


// address: 0x80095184
// line start: 436
// line end:   586
unsigned char main_ctrl_setup__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	register int lv;
}


// address: 0x80095634
// line start: 593
// line end:   706
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


// address: 0x80095B30
// line start: 710
// line end:   788
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


// address: 0x80095FEC
// line start: 788
// line end:   788
void _GLOBAL__D_ctrlflag() {
}


// address: 0x80096014
// line start: 788
// line end:   788
void _GLOBAL__I_ctrlflag() {
}


// address: 0x8009603C
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x80096064
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80096064(struct CPad *this) {
}


// address: 0x8009608C
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x800960B4
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x800960BC
// line start: 85
// line end:   85
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x800960C4
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_800960C4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800960E4
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_800960E4(struct Dialog *this, int Type) {
}


// address: 0x800960EC
// line start: 85
// line end:   88
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x800960F8
// line start: 78
// line end:   78
void ___6Dialog_addr_800960F8(struct Dialog *this, int __in_chrg) {
}


// address: 0x80096120
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_80096120(struct Dialog *this) {
}


// address: 0x8009617C
// line start: 160
// line end:   163
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x800961C8
// line start: 194
// line end:   223
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x8009631C
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


// address: 0x80096460
// line start: 78
// line end:   83
void ReInitDFL__Fv() {
	// register: 5
	register int *yp;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80096498
// line start: 88
// line end:   142
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


// address: 0x80096858
// line start: 148
// line end:   151
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x800968AC
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


// address: 0x80096B10
// line start: 148
// line end:   183
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80096CC4
// line start: 188
// line end:   217
void nightgfx__FibiP8POLY_GT4i(int BlockBase, bool water, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80096D50
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80096D50(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80096D8C
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80096D8C(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80096DB4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096DB4(struct POLY_FT4 **Prim) {
}


// address: 0x80096E30
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80096E30(struct TextDat *this, int Creature) {
}


// address: 0x80096E54
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80096E54(struct TextDat *this, int Creature) {
}


// address: 0x80096ECC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80096ECC(struct TextDat *this) {
}


// address: 0x80096EE0
// line start: 90
// line end:   91
void DaveLDummyPoll__Fv() {
}


// address: 0x80096EE8
// line start: 94
// line end:   96
void DaveL__Fv() {
}


// address: 0x80096F10
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
	// address: 0x8011C608
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


// address: 0x800971FC
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


// address: 0x800974FC
// line start: 207
// line end:   221
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x800975D4
// line start: 224
// line end:   259
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


// address: 0x80097664
// line start: 265
// line end:   298
void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos) {
	// register: 23
	// size: 0x6C
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


// address: 0x8009785C
// line start: 302
// line end:   315
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


// address: 0x80097990
// line start: 320
// line end:   341
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


// address: 0x80097B60
// line start: 346
// line end:   372
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80097D10
// line start: 376
// line end:   389
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80097E04
// line start: 394
// line end:   396
void doparticlejump__Fv() {
}


// address: 0x80097E44
// line start: 400
// line end:   419
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80097FAC
// line start: 424
// line end:   507
void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source) {
	// address: 0xFFFFFF88
	// size: 0x6C
	auto struct TextDat *Dat;
	// address: 0xFFFFFF80
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// address: 0xFFFFFF90
	// size: 0xC
	auto struct FRAME_HDR *Fr;
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
	// register: 19
	register int w;
	// register: 16
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


// address: 0x800983B4
// line start: 511
// line end:   526
void ParticleBlob__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009844C
// line start: 530
// line end:   547
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009850C
// line start: 551
// line end:   601
void Teleportfx__Fiiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart, int OtPos) {
	// address: 0xFFFFFF98
	// size: 0x6C
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


// address: 0x8009880C
// line start: 605
// line end:   620
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x80098A34
// line start: 625
// line end:   640
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80098AD0
// line start: 645
// line end:   662
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80098BF4
// line start: 666
// line end:   681
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


// address: 0x80098D30
// line start: 686
// line end:   688
void HealStart__Fi(int plr) {
}


// address: 0x80098D64
// line start: 692
// line end:   695
void HealotherStart__Fi(int plr) {
}


// address: 0x80098D9C
// line start: 699
// line end:   702
void TeleStart__Fi(int plr) {
}


// address: 0x80098DF8
// line start: 707
// line end:   709
void PhaseStart__Fi(int plr) {
}


// address: 0x80098E2C
// line start: 714
// line end:   716
void PhaseEnd__Fi(int plr) {
}


// address: 0x80098E58
// line start: 722
// line end:   745
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


// address: 0x80099034
// line start: 750
// line end:   753
void ApocaStart__Fi(int plr) {
}


// address: 0x8009908C
// line start: 758
// line end:   776
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80099128
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x800991A4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80099220
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80099220(struct POLY_FT4 **Prim) {
}


// address: 0x8009929C
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x800992EC
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800992F8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800992F8(struct TextDat *this, int FrNum) {
}


// address: 0x80099314
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


// address: 0x80099518
// line start: 125
// line end:   234
void show_spell_dir__Fi(int pnum) {
	// register: 20
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	// size: 0x18
	register struct Spell_Target *spl;
	// register: 22
	register int otx;
	// register: 21
	register int oty;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT R;
	// register: 16
	register int cp;
	// register: 23
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x8009984C
// line start: 246
// line end:   258
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x800998C0
// line start: 266
// line end:   275
void select_belt_item__Fi(int pnum) {
}


// address: 0x800998C8
// line start: 283
// line end:   292
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80099930
// line start: 299
// line end:   317
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80099A60
// line start: 323
// line end:   343
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80099B98
// line start: 352
// line end:   354
void pad_func_up__Fi(int pnum) {
}


// address: 0x80099BC4
// line start: 362
// line end:   364
void pad_func_down__Fi(int pnum) {
}


// address: 0x80099BF0
// line start: 372
// line end:   373
void pad_func_left__Fi(int pnum) {
}


// address: 0x80099BF8
// line start: 380
// line end:   381
void pad_func_right__Fi(int pnum) {
}


// address: 0x80099C00
// line start: 399
// line end:   410
void pad_func_select__Fi(int pnum) {
}


// address: 0x80099CBC
// line start: 422
// line end:   521
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 20
	register int y;
	{
		{
			{
				{
					{
						{
							// register: 21
							register int oco;
							// register: 17
							// size: 0x4
							register struct found_objects *fo;
							{
								// register: 4
								register int i;
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


// address: 0x8009A27C
// line start: 528
// line end:   577
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


// address: 0x8009A5C8
// line start: 581
// line end:   601
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


// address: 0x8009A6D0
// line start: 605
// line end:   624
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x8009A760
// line start: 631
// line end:   757
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


// address: 0x8009AB60
// line start: 764
// line end:   769
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x8009AC20
// line start: 778
// line end:   791
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x8009AD28
// line start: 796
// line end:   810
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x8009AE20
// line start: 816
// line end:   827
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x8009AF0C
// line start: 832
// line end:   836
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x8009AF90
// line start: 850
// line end:   854
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x8009B028
// line start: 885
// line end:   896
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x8009B0E4
// line start: 911
// line end:   919
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x8009B160
// line start: 942
// line end:   979
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


// address: 0x8009B328
// line start: 987
// line end:   988
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x8009B350
// line start: 998
// line end:   999
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x8009B378
// line start: 1004
// line end:   1019
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


// address: 0x8009B4B8
// line start: 1023
// line end:   1043
int sort_gold__Fi(int pnum) {
	// register: 19
	register int num_gold_items;
	// register: 17
	// size: 0x4
	register struct found_objects *fo;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009B5BC
// line start: 1047
// line end:   1185
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// address: 0xFFFFFF50
	// size: 0x1E
	auto char str[30];
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	register int cp;
	// address: 0xFFFFFF70
	auto int list_size;
	// address: 0xFFFFFF78
	auto int maxlen;
	// register: 2
	register int cgold;
	// address: 0xFFFFFF80
	// size: 0x4
	auto struct found_objects *fo;
	// register: 9
	register int R;
	// register: 8
	register int G;
	// register: 3
	register int B;
	{
		// register: 22
		register int i;
		{
			{
				{
					// register: 17
					register int len;
				}
			}
		}
	}
}


// address: 0x8009BE50
// line start: 1189
// line end:   1213
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


// address: 0x8009BF2C
// line start: 1222
// line end:   1228
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x8009C038
// line start: 1237
// line end:   1307
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x8009C3F8
// line start: 1312
// line end:   1376
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 23
	register int dir;
	// register: 30
	register int front_range;
	{
		{
			// register: 21
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


// address: 0x8009C76C
// line start: 1421
// line end:   1442
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8009C990
// line start: 1443
// line end:   1443
void _GLOBAL__D_gplayer() {
}


// address: 0x8009C9B8
// line start: 1443
// line end:   1443
void _GLOBAL__I_gplayer() {
}


// address: 0x8009C9E0
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8009C9E0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009CA00
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_8009CA00(struct Dialog *this, int Type) {
}


// address: 0x8009CA08
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8009CA08(struct Dialog *this, int Type) {
}


// address: 0x8009CA10
// line start: 78
// line end:   78
void ___6Dialog_addr_8009CA10(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009CA38
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8009CA38(struct Dialog *this) {
}


// address: 0x8009CA94
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009CA94(struct CPad *this) {
}


// address: 0x8009CABC
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009CABC(struct CPad *this) {
}


// address: 0x8009CAE4
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_8009CAE4(struct CPad *this) {
}


// address: 0x8009CB0C
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_8009CB0C(struct CPad *this, unsigned short mask) {
}


// address: 0x8009CB14
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_8009CB14(struct CPad *this, unsigned short tick) {
}


// address: 0x8009CB1C
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009CB98
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009CBF0
// line start: 102
// line end:   107
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8009CC4C
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009CC84
// line start: 130
// line end:   136
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009CCBC
// line start: 133
// line end:   138
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009CD1C
// line start: 149
// line end:   150
bool IsGameLoading__Fv() {
}


// address: 0x8009CD28
// line start: 160
// line end:   231
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


// address: 0x8009D19C
// line start: 243
// line end:   272
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x8009D25C
// line start: 282
// line end:   300
void TakeDownCutScreen__Fv() {
}


// address: 0x8009D2E8
// line start: 311
// line end:   317
void FinishProgress__Fv() {
}


// address: 0x8009D34C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009D34C(struct POLY_G4 **Prim) {
}


// address: 0x8009D3C8
// line start: 321
// line end:   321
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009D400
// line start: 321
// line end:   321
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x8009D438
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8009D438(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009D458
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_8009D458(struct Dialog *this, int Type) {
}


// address: 0x8009D460
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8009D460(struct Dialog *this, int Type) {
}


// address: 0x8009D468
// line start: 78
// line end:   78
void ___6Dialog_addr_8009D468(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009D490
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8009D490(struct Dialog *this) {
}


// address: 0x8009D4EC
// line start: 345
// line end:   114
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8009D50C
// line start: 107
// line end:   192
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}


// address: 0x8009D744
// line start: 196
// line end:   220
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009D74C
// line start: 225
// line end:   239
void init_card__Fib(int card_number, bool read_dir) {
}


// address: 0x8009D80C
// line start: 249
// line end:   262
int ping_card__Fi(int card_number) {
}


// address: 0x8009D8A0
// line start: 266
// line end:   272
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009D8D8
// line start: 277
// line end:   288
void MemcardON__Fv() {
}


// address: 0x8009D948
// line start: 294
// line end:   302
void MemcardOFF__Fv() {
}


// address: 0x8009D998
// line start: 308
// line end:   322
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
}


// address: 0x8009DA20
// line start: 326
// line end:   334
void card_removed__Fi(int card_number) {
}


// address: 0x8009DA48
// line start: 342
// line end:   350
int read_card_block__Fii(int card_number, int block) {
}


// address: 0x8009DA90
// line start: 360
// line end:   366
int test_hw_event__Fv() {
}


// address: 0x8009DB10
// line start: 647
// line end:   665
void PrintSelectBack__FbT0(bool S, bool B) {
	// register: 17
	register int len;
}


// address: 0x8009DC90
// line start: 673
// line end:   682
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009DD74
// line start: 708
// line end:   843
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


// address: 0x8009E268
// line start: 849
// line end:   1102
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


// address: 0x8009EEF8
// line start: 1109
// line end:   1118
int who_pressed__Fi(int pval) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad1;
}


// address: 0x8009EF80
// line start: 1133
// line end:   1316
void ShowCharacterFiles__Fv() {
	// register: 16
	register int j;
	// register: 21
	register int yoff;
	// register: 17
	register int move;
	// register: 6
	register int fileno;
	// register: 18
	// size: 0x6C
	register struct CPad *P;
	// register: 19
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
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


// address: 0x8009F588
// line start: 1319
// line end:   1526
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
					{
						{
							{
								{
									{
										// register: 3
										register int readstate;
										{
											{
												{
													// register: 3
													register int readstate;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009FBF0
// line start: 1550
// line end:   1788
void SoundPad__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 18
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


// address: 0x800A0428
// line start: 1796
// line end:   1910
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


// address: 0x800A08A4
// line start: 1916
// line end:   1941
void CalcVolumes__Fv() {
}


// address: 0x800A09DC
// line start: 1948
// line end:   1952
void SetLoadedVolumes__Fv() {
}


// address: 0x800A0A64
// line start: 1956
// line end:   1973
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


// address: 0x800A0B00
// line start: 1981
// line end:   1998
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x800A0CA8
// line start: 2016
// line end:   2055
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


// address: 0x800A0F2C
// line start: 2065
// line end:   2385
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 18
	register int OldOptionsSeed;
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


// address: 0x800A17EC
// line start: 2391
// line end:   2416
void ToggleOptions__Fv() {
}


// address: 0x800A18A4
// line start: 2423
// line end:   2504
void FormatPad__Fv() {
	// register: 16
	register int move;
	// register: 18
	// size: 0x6C
	register struct CPad *P;
	// register: 17
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
}


// address: 0x800A1BC4
// line start: 2507
// line end:   2519
void ActivateMemcard__Fv() {
}


// address: 0x800A1C48
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_800A1C48(struct POLY_G4 **Prim) {
}


// address: 0x800A1CC4
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_800A1CC4(struct CPad *this) {
}


// address: 0x800A1CEC
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A1CEC(struct CPad *this) {
}


// address: 0x800A1D14
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_800A1D14(struct CPad *this) {
}


// address: 0x800A1D3C
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_800A1D3C(struct CPad *this, unsigned short mask) {
}


// address: 0x800A1D44
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_800A1D44(struct CPad *this, unsigned short tick) {
}


// address: 0x800A1D4C
// line start: 128
// line end:   132
void Flush__4CPad_addr_800A1D4C(struct CPad *this) {
}


// address: 0x800A1D70
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_800A1D70(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800A1D90
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_800A1D90(struct Dialog *this, int Type) {
}


// address: 0x800A1D98
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_800A1D98(struct Dialog *this, int Type) {
}


// address: 0x800A1DA0
// line start: 78
// line end:   78
void ___6Dialog_addr_800A1DA0(struct Dialog *this, int __in_chrg) {
}


// address: 0x800A1DC8
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_800A1DC8(struct Dialog *this) {
}


// address: 0x800A1E24
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A1E24(struct TextDat *this, int FrNum) {
}


// address: 0x800A1E40
// line start: 72
// line end:   79
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x800A1E98
// line start: 88
// line end:   129
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x800A1FDC
// line start: 139
// line end:   149
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x800A2058
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


// address: 0x800A21E4
// line start: 192
// line end:   201
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x800A2238
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


// address: 0x800A23A0
// line start: 246
// line end:   266
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A24A4
// line start: 277
// line end:   284
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A2510
// line start: 293
// line end:   309
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A2594
// line start: 317
// line end:   330
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A2640
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


// address: 0x800A2750
// line start: 370
// line end:   382
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A27FC
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


// address: 0x800A28A0
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


// address: 0x800A2B4C
// line start: 484
// line end:   492
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A2BA4
// line start: 503
// line end:   510
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A2C10
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


// address: 0x800A2CFC
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


// address: 0x800A2E2C
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


// address: 0x800A2F04
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


// address: 0x800A305C
// line start: 668
// line end:   697
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 3
	register int banim;
}


// address: 0x800A30F4
// line start: 703
// line end:   723
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x800A3224
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


// address: 0x800A3330
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


// address: 0x800A353C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A353C(struct POLY_FT4 **Prim) {
}


// address: 0x800A35B8
// line start: 91
// line end:   138
short PlayFMV__FPcii(char *str, int w, int h) {
	// register: 16
	register short RetVal;
	// register: 19
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x800A368C
// line start: 143
// line end:   157
void play_movie(char *pszMovie) {
	{
		{
			{
			}
		}
	}
}


// address: 0x800A3748
// line start: 132
// line end:   224
void DisplayMonsterTypes__Fv() {
}


// address: 0x800A3750
// line start: 44
// line end:   67
void LoadKanjiFont__FPc(char *name) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A3840
// line start: 72
// line end:   97
void LoadKanjiIndex__FPc(char *name) {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A3950
// line start: 102
// line end:   120
void FreeKanji__Fv() {
}


// address: 0x800A39D8
// line start: 127
// line end:   149
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto char tmp[40];
	// register: 16
	register char *bname;
}


// address: 0x800A3AAC
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


// address: 0x800A3B1C
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


// address: 0x800A3BEC
// line start: 214
// line end:   257
int KPrintChar__FUsUsUcUcUs(unsigned short Cx, unsigned short Cy, unsigned char h, unsigned char l, int col) {
	// address: 0xFFFFFE60
	// size: 0x28
	auto struct POLY_FT4 At4;
	// register: 20
	// size: 0x28
	register struct POLY_FT4 *ft4;
	// address: 0xFFFFFE88
	// size: 0x152
	auto unsigned short buff[169];
	// register: 5
	register unsigned short kan;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT r;
}


// address: 0x800A3D18
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


// address: 0x800A3E00
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


// address: 0x800A4040
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


// address: 0x800A40E0
// line start: 55
// line end:   58
void fputc__5blockUc(struct block *this, unsigned char Val) {
}


// address: 0x800A4108
// line start: 69
// line end:   103
void HelpPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x800A4228
// line start: 109
// line end:   112
void InitHelp__Fv() {
}


// address: 0x800A426C
// line start: 116
// line end:   136
int GetControlKey__FiPb(int str, bool *iscombo) {
	// register: 6
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 7
		register int i;
	}
}


// address: 0x800A4314
// line start: 141
// line end:   179
void CheckStr__FPcT0i(char *s, char *d, int pos) {
	// register: 20
	register char c;
	// register: 17
	register int l;
}


// address: 0x800A4470
// line start: 182
// line end:   257
void DisplayHelp__Fv() {
	// register: 22
	// size: 0x8
	register struct HelpStruct *hp;
	// register: 17
	register int y;
	// register: 2
	register int l;
	{
		// register: 20
		register int i;
		{
			// register: 18
			register char *txt;
			{
				{
					// address: 0xFFFFFFD0
					auto bool combo;
					// register: 16
					register int key;
				}
			}
		}
	}
}


// address: 0x800A484C
// line start: 261
// line end:   274
void DrawHelp__Fv() {
}


// address: 0x800A48E8
// line start: 275
// line end:   275
void _GLOBAL__D_DrawHelp__Fv() {
}


// address: 0x800A4910
// line start: 275
// line end:   275
void _GLOBAL__I_DrawHelp__Fv() {
}


// address: 0x800A4938
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_800A4938(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800A4958
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_800A4958(struct Dialog *this, int Type) {
}


// address: 0x800A4960
// line start: 78
// line end:   78
void ___6Dialog_addr_800A4960(struct Dialog *this, int __in_chrg) {
}


// address: 0x800A4988
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_800A4988(struct Dialog *this) {
}


// address: 0x800A49E4
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_800A49E4(struct CPad *this) {
}


// address: 0x800A4A0C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A4A0C(struct CPad *this) {
}


// address: 0x800A4A34
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_800A4A34(struct CPad *this, unsigned short mask) {
}


// address: 0x800A4A3C
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_800A4A3C(struct CPad *this, unsigned short tick) {
}


// address: 0x8002FEEC
// line start: 520
// line end:   523
unsigned char TrimCol__Fs_addr_8002FEEC(short col) {
}


// address: 0x8002FF24
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
	// register: 20
	register int SpellW;
	// register: 19
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


// address: 0x80030A44
// line start: 709
// line end:   710
void SetSpellTrans__Fc(char t) {
}


// address: 0x80030A50
// line start: 718
// line end:   736
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x80030AF8
// line start: 741
// line end:   752
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


// address: 0x80030B9C
// line start: 758
// line end:   790
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80030C50
// line start: 816
// line end:   1114
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


// address: 0x80031814
// line start: 1120
// line end:   1132
void SetSpell__Fi(int pnum) {
}


// address: 0x800318E8
// line start: 1143
// line end:   1146
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80031998
// line start: 1153
// line end:   1155
void ClearPanel__Fv() {
}


// address: 0x800319C8
// line start: 1208
// line end:   1209
void InitPanelStr__Fv() {
}


// address: 0x800319E8
// line start: 1295
// line end:   1442
void InitControlPan__Fv() {
	// register: 3
	register int i;
}


// address: 0x80031C08
// line start: 1448
// line end:   1451
void DrawCtrlPan__Fv() {
}


// address: 0x80031C34
// line start: 1531
// line end:   1543
void DoAutoMap__Fv() {
}


// address: 0x80031CA8
// line start: 1550
// line end:   1641
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


// address: 0x800323C8
// line start: 1715
// line end:   1731
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


// address: 0x800324D8
// line start: 1753
// line end:   1781
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


// address: 0x800325F4
// line start: 1824
// line end:   1867
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


// address: 0x800328B0
// line start: 1873
// line end:   1992
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


// address: 0x80032F6C
// line start: 2045
// line end:   2157
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


// address: 0x800334BC
// line start: 2163
// line end:   2179
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80033564
// line start: 2202
// line end:   2238
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


// address: 0x800336CC
// line start: 2245
// line end:   2258
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x800337A8
// line start: 2266
// line end:   2287
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


// address: 0x800338A0
// line start: 2292
// line end:   2486
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


// address: 0x80034B78
// line start: 2491
// line end:   2588
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


// address: 0x80035018
// line start: 2642
// line end:   2663
void DrawChrTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
}


// address: 0x800350FC
// line start: 2672
// line end:   2680
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80035190
// line start: 2685
// line end:   2722
void CheckChrBtns__Fv() {
	// register: 16
	register int pc;
}


// address: 0x800354FC
// line start: 2729
// line end:   2769
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80035580
// line start: 2777
// line end:   2791
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80035668
// line start: 2797
// line end:   2817
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
	// register: 3
	register unsigned char r;
	// register: 4
	register unsigned char g;
	// register: 5
	register unsigned char b;
}


// address: 0x80035768
// line start: 2824
// line end:   2836
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80035980
// line start: 2863
// line end:   3048
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


// address: 0x80036364
// line start: 3057
// line end:   3100
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


// address: 0x80036598
// line start: 3114
// line end:   3116
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x800365CC
// line start: 3625
// line end:   3625
void _GLOBAL__D_DrawLevelUpFlag() {
}


// address: 0x800365F4
// line start: 3625
// line end:   3625
void _GLOBAL__I_DrawLevelUpFlag() {
}


// address: 0x80036630
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80036630(struct CPad *this) {
}


// address: 0x80036658
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80036658(struct CPad *this) {
}


// address: 0x80036680
// line start: 86
// line end:   86
void SetPadTickMask__4CPadUs_addr_80036680(struct CPad *this, unsigned short mask) {
}


// address: 0x80036688
// line start: 85
// line end:   85
void SetPadTick__4CPadUs_addr_80036688(struct CPad *this, unsigned short tick) {
}


// address: 0x80036690
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_80036690(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800366B0
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_800366B0(struct Dialog *this, int Type) {
}


// address: 0x800366B8
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_800366B8(struct Dialog *this, int Type) {
}


// address: 0x800366C0
// line start: 78
// line end:   78
void ___6Dialog_addr_800366C0(struct Dialog *this, int __in_chrg) {
}


// address: 0x800366E8
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_800366E8(struct Dialog *this) {
}


// address: 0x80036744
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80036744(struct TextDat *this, int PalNum) {
}


// address: 0x80036760
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80036760(struct TextDat *this, int FrNum) {
}


// address: 0x8003677C
// line start: 126
// line end:   132
void InitCursor__Fv() {
}


// address: 0x80036784
// line start: 137
// line end:   142
void FreeCursor__Fv() {
}


// address: 0x8003678C
// line start: 148
// line end:   158
void SetICursor__Fi(int i) {
}


// address: 0x800367E8
// line start: 165
// line end:   173
void SetCursor__Fi(int i) {
}


// address: 0x8003684C
// line start: 179
// line end:   180
void NewCursor__Fi(int i) {
}


// address: 0x8003686C
// line start: 186
// line end:   201
void InitLevelCursor__Fv() {
}


// address: 0x800368CC
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


// address: 0x80036B58
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


// address: 0x80036DB8
// line start: 284
// line end:   776
void CheckCursMove__Fv() {
}


// address: 0x80036DC0
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


// address: 0x80036FBC
// line start: 98
// line end:   102
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x80037004
// line start: 288
// line end:   301
void FreeGameMem__Fv() {
}


// address: 0x8003703C
// line start: 308
// line end:   324
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80037098
// line start: 329
// line end:   346
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8003710C
// line start: 362
// line end:   400
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x800371D0
// line start: 405
// line end:   489
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x800373B8
// line start: 495
// line end:   611
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80037528
// line start: 1045
// line end:   1125
unsigned char TryIconCurs__Fv() {
}


// address: 0x80037904
// line start: 2148
// line end:   2195
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x8003790C
// line start: 2202
// line end:   2362
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800379BC
// line start: 2370
// line end:   2404
void LoadLvlGFX__Fv() {
	// register: 16
	register char *LoadFile;
}


// address: 0x80037A74
// line start: 2409
// line end:   2421
void LoadMegaTiles__FPCc(char *LoadFile) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyIo;
}


// address: 0x80037B04
// line start: 2429
// line end:   2441
void LoadAllGFX__Fv() {
}


// address: 0x80037B24
// line start: 2462
// line end:   2482
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80037C1C
// line start: 2491
// line end:   2545
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80037DA4
// line start: 2549
// line end:   2574
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


// address: 0x80037E80
// line start: 2581
// line end:   2913
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


// address: 0x800387DC
// line start: 2926
// line end:   2978
void game_logic__Fv() {
}


// address: 0x800388E8
// line start: 2988
// line end:   3018
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80038990
// line start: 3026
// line end:   3081
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x800389C8
// line start: 3148
// line end:   3153
void alloc_plr__Fv() {
}


// address: 0x800389D0
// line start: 3216
// line end:   3274
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x800389D8
// line start: 3281
// line end:   3283
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x800389F8
// line start: 3288
// line end:   3290
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80038A18
// line start: 3293
// line end:   3294
void app_fatal(char *pszFile) {
}


// address: 0x80038A48
// line start: 3553
// line end:   3559
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038A70
// line start: 3563
// line end:   3569
void DoMemCardFromInGame__Fv() {
}


// address: 0x80038A98
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80038AEC
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80038B0C
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80038B54
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80038CB4
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


// address: 0x80038D6C
// line start: 181
// line end:   190
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038E98
// line start: 196
// line end:   206
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038FCC
// line start: 211
// line end:   220
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800390FC
// line start: 225
// line end:   234
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003922C
// line start: 239
// line end:   248
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003935C
// line start: 253
// line end:   263
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80039494
// line start: 268
// line end:   277
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800395C4
// line start: 283
// line end:   292
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800396F4
// line start: 297
// line end:   306
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80039824
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


// address: 0x80039AE8
// line start: 344
// line end:   358
void InitTowners__Fv() {
}


// address: 0x80039B74
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


// address: 0x80039C18
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


// address: 0x80039D48
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


// address: 0x80039D7C
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


// address: 0x80039DB0
// line start: 437
// line end:   449
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80039E98
// line start: 455
// line end:   457
void TownHealer__Fv() {
}


// address: 0x80039EC0
// line start: 464
// line end:   467
void TownStory__Fv() {
}


// address: 0x80039EE8
// line start: 474
// line end:   477
void TownDrunk__Fv() {
}


// address: 0x80039F10
// line start: 484
// line end:   487
void TownBoy__Fv() {
}


// address: 0x80039F38
// line start: 495
// line end:   498
void TownWitch__Fv() {
}


// address: 0x80039F60
// line start: 505
// line end:   507
void TownBarMaid__Fv() {
}


// address: 0x80039F88
// line start: 514
// line end:   517
void TownCow__Fv() {
}


// address: 0x80039FB0
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


// address: 0x8003A200
// size: 0x98
// line start: 581
// line end:   586
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x8003A2D4
// line start: 595
// line end:   641
void CowSFX__Fi(int pnum) {
	// address: 0x80112860
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8011CC64
	static int snLastCowSFX;
}


// address: 0x8003A3F0
// line start: 647
// line end:   654
void TownerTalk__Fii(int first, int t) {
}


// address: 0x8003A430
// line start: 661
// line end:   1074
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


// address: 0x8003B904
// line start: 77
// line end:   88
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003B90C
// line start: 96
// line end:   102
void stream_stop__Fv() {
}


// address: 0x8003B960
// line start: 115
// line end:   149
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003BA50
// line start: 155
// line end:   171
void stream_update__Fv() {
}


// address: 0x8003BA58
// line start: 177
// line end:   184
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003BA74
// line start: 191
// line end:   222
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003BACC
// line start: 228
// line end:   251
void FreeMonsterSnd__Fv() {
}


// address: 0x8003BAD4
// line start: 257
// line end:   277
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003BBD8
// line start: 284
// line end:   315
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003BCD4
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


// address: 0x8003BE18
// line start: 376
// line end:   398
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003BEB8
// line start: 413
// line end:   416
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003BEF8
// line start: 424
// line end:   434
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003BF4C
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


// address: 0x8003BFE4
// line start: 463
// line end:   473
void sound_update__Fv() {
}


// address: 0x8003C018
// line start: 481
// line end:   512
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003C05C
// line start: 518
// line end:   531
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003C104
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


// address: 0x8003C1A8
// line start: 91
// line end:   94
void SetRndSeed__Fl(long s) {
}


// address: 0x8003C1B8
// line start: 99
// line end:   104
long GetRndSeed__Fv() {
}


// address: 0x8003C200
// line start: 110
// line end:   116
long random__Fil(int idx, long v) {
}


// address: 0x8003C26C
// line start: 368
// line end:   418
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003C2B8
// line start: 429
// line end:   475
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003C308
// line start: 487
// line end:   497
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003C310
// line start: 565
// line end:   584
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003C318
// line start: 1104
// line end:   1104
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003C320
// line start: 154
// line end:   165
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003C3B4
// line start: 171
// line end:   174
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003C3E0
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


// address: 0x8003C4EC
// line start: 299
// line end:   308
void interface_msg_pump__Fv() {
}


// address: 0x8003C4F4
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


// address: 0x8003CA2C
// line start: 969
// line end:   971
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003CA64
// line start: 508
// line end:   519
void InitItemGFX__Fv() {
}


// address: 0x8003CA90
// line start: 525
// line end:   532
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003CB58
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


// address: 0x8003CD70
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


// address: 0x8003CF48
// line start: 637
// line end:   895
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


// address: 0x8003DA1C
// line start: 900
// line end:   930
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003DD9C
// line start: 939
// line end:   947
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003DE38
// line start: 951
// line end:   991
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


// address: 0x8003DF98
// line start: 997
// line end:   1001
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003DFE4
// line start: 1007
// line end:   1022
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


// address: 0x8003E0C4
// line start: 1028
// line end:   1051
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003E358
// line start: 1056
// line end:   1066
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003E41C
// line start: 1072
// line end:   1103
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003E534
// line start: 1109
// line end:   1110
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003E560
// line start: 1116
// line end:   1132
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


// address: 0x8003E6DC
// line start: 1138
// line end:   1139
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003E6E4
// line start: 1145
// line end:   1150
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003E714
// line start: 1156
// line end:   1267
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003EB50
// line start: 1274
// line end:   1303
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003EE28
// line start: 1311
// line end:   1359
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


// address: 0x8003F054
// line start: 1366
// line end:   1389
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


// address: 0x8003F1BC
// line start: 1395
// line end:   1407
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


// address: 0x8003F284
// line start: 1413
// line end:   1419
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003F33C
// line start: 1426
// line end:   1471
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003F5A4
// line start: 1478
// line end:   1538
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


// address: 0x8003F794
// line start: 1546
// line end:   1614
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


// address: 0x8003FA48
// line start: 1655
// line end:   1745
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003FF94
// line start: 1754
// line end:   1755
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003FFCC
// line start: 1762
// line end:   1765
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x80040040
// line start: 1772
// line end:   2054
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8004176C
// line start: 2062
// line end:   2160
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


// address: 0x80041BD4
// line start: 2167
// line end:   2197
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80041CD0
// line start: 2203
// line end:   2230
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80041DD8
// line start: 2239
// line end:   2275
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x8004201C
// line start: 2283
// line end:   2314
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


// address: 0x8004225C
// line start: 2322
// line end:   2345
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x800423D0
// line start: 2353
// line end:   2368
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


// address: 0x800424D0
// line start: 2375
// line end:   2409
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


// address: 0x80042680
// line start: 2416
// line end:   2438
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80042928
// line start: 2445
// line end:   2463
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80042A60
// line start: 2474
// line end:   2478
void ItemRndDur__Fi(int ii) {
}


// address: 0x80042AF0
// line start: 2485
// line end:   2523
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80042DFC
// line start: 2531
// line end:   2574
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x80043044
// line start: 2582
// line end:   2596
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x80043174
// line start: 2606
// line end:   2621
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800432BC
// line start: 2633
// line end:   2643
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x80043394
// line start: 2647
// line end:   2657
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x80043454
// line start: 2666
// line end:   2681
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80043598
// line start: 2693
// line end:   2717
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80043784
// line start: 2724
// line end:   2763
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


// address: 0x800439F8
// line start: 2770
// line end:   2795
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


// address: 0x80043BB8
// line start: 2804
// line end:   2836
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x80043D70
// line start: 2843
// line end:   2847
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80043DC4
// line start: 2857
// line end:   2872
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x80043E8C
// line start: 2887
// line end:   2934
void ProcessItems__Fv() {
	// register: 19
	register int i;
	// register: 5
	register int ii;
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


// address: 0x80044094
// line start: 2941
// line end:   2946
void FreeItemGFX__Fv() {
}


// address: 0x8004409C
// line start: 2965
// line end:   2990
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


// address: 0x80044244
// line start: 2996
// line end:   3006
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80044334
// line start: 3011
// line end:   3035
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80044404
// line start: 3039
// line end:   3052
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x800444C8
// line start: 3057
// line end:   3070
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80044538
// line start: 3074
// line end:   3092
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


// address: 0x80044638
// line start: 3197
// line end:   3321
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x8004472C
// line start: 3327
// line end:   3540
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80044DE8
// line start: 3584
// line end:   3612
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x80044DF0
// line start: 3625
// line end:   3668
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80044F7C
// line start: 3675
// line end:   3720
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800452EC
// line start: 3726
// line end:   3766
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800455FC
// line start: 3773
// line end:   3776
void CastScroll__Fii(int pnum, int Spell) {
}


// address: 0x80045614
// line start: 3784
// line end:   3974
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80045C2C
// line start: 3984
// line end:   3989
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80045CC0
// line start: 4008
// line end:   4023
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80045D3C
// line start: 4029
// line end:   4048
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80045E44
// line start: 4056
// line end:   4081
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct holditem;
}


// address: 0x80046064
// line start: 4090
// line end:   4109
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x800462A8
// line start: 4122
// line end:   4137
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x800463F8
// line start: 4168
// line end:   4172
void SpawnStoreGold__Fv() {
}


// address: 0x8004647C
// line start: 4221
// line end:   4232
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x8004661C
// line start: 4244
// line end:   4252
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80046680
// line start: 4271
// line end:   4293
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80046810
// line start: 4301
// line end:   4322
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x8004698C
// line start: 4330
// line end:   4351
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80046B08
// line start: 4490
// line end:   4531
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x80046C7C
// line start: 4685
// line end:   4789
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 16
	register int PreIdx;
	// register: 3
	register int SufIdx;
}


// address: 0x80046E7C
// line start: 319
// line end:   334
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x80046EE4
// line start: 380
// line end:   402
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 3
	register unsigned char *mt;
}


// address: 0x80046F30
// line start: 407
// line end:   414
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x80046F9C
// line start: 418
// line end:   768
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


// address: 0x80047C4C
// line start: 775
// line end:   829
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


// address: 0x80047E94
// line start: 836
// line end:   851
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


// address: 0x80047F58
// line start: 858
// line end:   962
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


// address: 0x80048468
// line start: 967
// line end:   968
void FreeLightTable__Fv() {
}


// address: 0x80048470
// line start: 974
// line end:   975
void InitLightTable__Fv() {
}


// address: 0x80048478
// line start: 980
// line end:   981
void MakeLightTable__Fv() {
}


// address: 0x80048480
// line start: 1072
// line end:   1075
void InitLightMax__Fv() {
}


// address: 0x800484A4
// line start: 1082
// line end:   1093
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x800484E8
// line start: 1099
// line end:   1117
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80048554
// line start: 1122
// line end:   1128
void AddUnLight__Fi(int i) {
}


// address: 0x80048584
// line start: 1133
// line end:   1144
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x800485B0
// line start: 1149
// line end:   1161
void ChangeLightXY__Fiii(int i, int x, int y) {
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x800485EC
// line start: 1164
// line end:   1170
void light_fix__Fi(int i) {
}


// address: 0x800485F4
// line start: 1180
// line end:   1193
void ChangeLightOff__Fiii(int i, int x, int y) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80048628
// line start: 1198
// line end:   1211
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80048660
// line start: 1214
// line end:   1216
void ChangeLightColour__Fii(int i, int c) {
	// register: 4
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80048688
// line start: 1220
// line end:   1224
int LightLevel__Fi(int radius) {
}


// address: 0x800486A0
// line start: 1230
// line end:   1297
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


// address: 0x800487C4
// line start: 1302
// line end:   1329
void SavePreLighting__Fv() {
}


// address: 0x800487CC
// line start: 1334
// line end:   1341
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x8004881C
// line start: 1348
// line end:   1364
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


// address: 0x80048898
// line start: 1387
// line end:   1400
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x8004894C
// line start: 1405
// line end:   1421
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 9
	register int i;
	// register: 8
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x800489CC
// line start: 1450
// line end:   1497
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
	// register: 18
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x80048BCC
// line start: 111
// line end:   114
void FreeQuestText__Fv() {
}


// address: 0x80048BD4
// line start: 118
// line end:   122
void InitQuestText__Fv() {
}


// address: 0x80048BE0
// line start: 130
// line end:   168
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


// address: 0x80048D30
// line start: 178
// line end:   248
void InitQTextMsg__Fi(int m) {
	// register: 4
	register int iBookName;
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x80048F88
// line start: 253
// line end:   276
void DrawQTextBack__Fv() {
	{
		{
			{
				{
					// address: 0xFFFFFFE8
					// size: 0x8
					auto struct RECT ClipRect;
				}
			}
		}
	}
}


// address: 0x80049110
// line start: 287
// line end:   342
void DrawQTextTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int quest_pad;
	{
	}
}


// address: 0x80049274
// line start: 347
// line end:   480
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
	// register: 18
	register int OldOt;
}


// address: 0x8004967C
// line start: 483
// line end:   483
void _GLOBAL__D_QBack() {
}


// address: 0x800496A4
// line start: 483
// line end:   483
void _GLOBAL__I_QBack() {
}


// address: 0x800496CC
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_800496CC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800496EC
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_800496EC(struct Dialog *this, int Type) {
}


// address: 0x800496F4
// line start: 78
// line end:   78
void ___6Dialog_addr_800496F4(struct Dialog *this, int __in_chrg) {
}


// address: 0x8004971C
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8004971C(struct Dialog *this) {
}


// address: 0x80049778
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80049778(struct CPad *this) {
}


// address: 0x800497A0
// line start: 33
// line end:   35
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x800497A8
// line start: 806
// line end:   808
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800497B0
// line start: 254
// line end:   265
void delta_init__Fv() {
}


// address: 0x80049808
// line start: 272
// line end:   293
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x800498A4
// line start: 300
// line end:   316
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80049928
// line start: 325
// line end:   347
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x800499B8
// line start: 353
// line end:   394
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


// address: 0x80049CE4
// line start: 400
// line end:   416
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80049D44
// line start: 423
// line end:   542
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


// address: 0x80049F08
// line start: 549
// line end:   610
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


// address: 0x8004A090
// line start: 616
// line end:   619
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x8004A0B4
// line start: 625
// line end:   628
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x8004A0D8
// line start: 635
// line end:   698
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


// address: 0x8004A2EC
// line start: 703
// line end:   727
int DeltaExportData__FPc(char *Dst) {
	// register: 8
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8004A384
// line start: 734
// line end:   763
int DeltaImportData__FPc(char *Src) {
	// register: 16
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8004A428
// line start: 768
// line end:   783
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8004A524
// line start: 858
// line end:   862
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x8004A54C
// line start: 868
// line end:   882
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x8004A598
// line start: 888
// line end:   898
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x8004A5C8
// line start: 904
// line end:   913
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x8004A600
// line start: 919
// line end:   929
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x8004A640
// line start: 935
// line end:   946
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x8004A688
// line start: 952
// line end:   957
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x8004A6B4
// line start: 963
// line end:   969
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x8004A6E4
// line start: 974
// line end:   981
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x8004A71C
// line start: 986
// line end:   994
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x8004A790
// line start: 999
// line end:   1045
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x8004A8C4
// line start: 1051
// line end:   1066
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x8004A940
// line start: 1082
// line end:   1101
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x8004A998
// line start: 1108
// line end:   1115
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x8004AA00
// line start: 1120
// line end:   1163
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x8004AB08
// line start: 1169
// line end:   1180
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x8004ABAC
// line start: 1186
// line end:   1191
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x8004ABDC
// line start: 1197
// line end:   1239
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x8004ACF0
// line start: 1244
// line end:   1260
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x8004ACF8
// line start: 1266
// line end:   1274
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x8004AD2C
// line start: 1289
// line end:   1300
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x8004AD88
// line start: 1306
// line end:   1309
void delta_close_portal__Fi(int pnum) {
}


// address: 0x8004ADC8
// line start: 1315
// line end:   1324
void check_update_plr__Fi(int pnum) {
}


// address: 0x8004ADD0
// line start: 1335
// line end:   1342
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AE50
// line start: 1351
// line end:   1365
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AE80
// line start: 1370
// line end:   1379
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AEB0
// line start: 1383
// line end:   1396
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AEE0
// line start: 1402
// line end:   1415
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AF10
// line start: 1421
// line end:   1427
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AF84
// line start: 1436
// line end:   1442
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B00C
// line start: 1449
// line end:   1482
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x8004B14C
// line start: 1492
// line end:   1529
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


// address: 0x8004B31C
// line start: 1538
// line end:   1544
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B3A4
// line start: 1551
// line end:   1585
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B4D8
// line start: 1594
// line end:   1637
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


// address: 0x8004B6A0
// line start: 1645
// line end:   1658
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B6EC
// line start: 1665
// line end:   1696
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x8004B804
// line start: 1705
// line end:   1720
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x8004B904
// line start: 1740
// line end:   1750
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B95C
// line start: 1757
// line end:   1765
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B9E8
// line start: 1772
// line end:   1788
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BAD0
// line start: 1796
// line end:   1811
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BBA8
// line start: 1818
// line end:   1833
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BC84
// line start: 1840
// line end:   1851
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004BD64
// line start: 1858
// line end:   1869
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004BE44
// line start: 1877
// line end:   1883
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BE90
// line start: 1890
// line end:   1902
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 19
	// size: 0x4
	register struct TCmdParam1 *p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8004BFC4
// line start: 1909
// line end:   1923
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C08C
// line start: 1930
// line end:   1941
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C14C
// line start: 1949
// line end:   1959
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C210
// line start: 1966
// line end:   1977
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C2D4
// line start: 1984
// line end:   1990
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C31C
// line start: 1997
// line end:   2001
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C354
// line start: 2007
// line end:   2011
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C37C
// line start: 2018
// line end:   2025
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C404
// line start: 2033
// line end:   2037
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C434
// line start: 2044
// line end:   2054
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C528
// line start: 2062
// line end:   2068
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C594
// line start: 2075
// line end:   2081
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C600
// line start: 2088
// line end:   2108
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


// address: 0x8004C718
// line start: 2117
// line end:   2133
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C804
// line start: 2147
// line end:   2154
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C84C
// line start: 2161
// line end:   2208
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004CA08
// line start: 2217
// line end:   2223
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004CA84
// line start: 2230
// line end:   2236
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004CB00
// line start: 2243
// line end:   2249
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004CB7C
// line start: 2256
// line end:   2262
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004CBF8
// line start: 2268
// line end:   2273
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004CC70
// line start: 2279
// line end:   2286
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004CC78
// line start: 2292
// line end:   2295
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004CC80
// line start: 2300
// line end:   2306
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004CC88
// line start: 2311
// line end:   2316
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004CCE0
// line start: 2322
// line end:   2370
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004CF58
// line start: 2378
// line end:   2410
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


// address: 0x8004D0E8
// line start: 2416
// line end:   2421
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004D138
// line start: 2427
// line end:   2434
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004D180
// line start: 2440
// line end:   2448
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004D1C0
// line start: 2453
// line end:   2461
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004D200
// line start: 2467
// line end:   2475
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004D240
// line start: 2481
// line end:   2490
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004D280
// line start: 2495
// line end:   2502
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D2C8
// line start: 2509
// line end:   2521
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


// address: 0x8004D3A4
// line start: 2561
// line end:   2663
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8011DB0C
	static unsigned char sbLastCmd;
}


// address: 0x8004D7C4
// size: 0xF1C
// line start: 2674
// line end:   2686
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004D80C
// line start: 2691
// line end:   2699
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x8004D838
// line start: 2705
// line end:   2707
void MSG_ClearOutCompMap__Fv() {
}


// address: 0x8004D860
// line start: 2712
// line end:   2712
void _GLOBAL__D_deltaload() {
}


// address: 0x8004D888
// line start: 2712
// line end:   2712
void _GLOBAL__I_deltaload() {
}


// address: 0x8004D8E8
// size: 0x4
// line start: 153
// line end:   175
struct CrunchComp *__10CrunchComp(struct CrunchComp *this);

// address: 0x8004D920
// size: 0x4
// line start: 134
// line end:   175
struct PakComp *__7PakComp(struct PakComp *this);

// address: 0x8004D958
// size: 0x4
// line start: 115
// line end:   175
struct NoComp *__6NoComp(struct NoComp *this);

// address: 0x8004D990
// line start: 60
// line end:   65
int GetSize__14CompressedLevs(struct CompressedLevs *this) {
}


// address: 0x8004D9CC
// size: 0x4
// line start: 51
// line end:   175
struct CompClass *__9CompClass(struct CompClass *this);

// address: 0x8004D9E0
// line start: 150
// line end:   151
void DoDecomp__C10CrunchCompPUcPCUcii(struct CrunchComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}


// address: 0x8004DA08
// line start: 143
// line end:   146
int DoComp__C10CrunchCompPUcPCUci(struct CrunchComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}


// address: 0x8004DA30
// line start: 131
// line end:   132
void DoDecomp__C7PakCompPUcPCUcii(struct PakComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}


// address: 0x8004DA54
// line start: 124
// line end:   127
int DoComp__C7PakCompPUcPCUci(struct PakComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}


// address: 0x8004DA7C
// line start: 112
// line end:   113
void DoDecomp__C6NoCompPUcPCUcii(struct NoComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}


// address: 0x8004DAA8
// line start: 106
// line end:   108
int DoComp__C6NoCompPUcPCUci(struct NoComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}


// address: 0x8004DAE0
// line start: 167
// line end:   171
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004DB0C
// line start: 556
// line end:   561
int InitLevelType__Fi(int l) {
}


// address: 0x8004DB58
// line start: 567
// line end:   605
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004DCE8
// line start: 684
// line end:   690
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004DD5C
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


// address: 0x8004DFB0
// line start: 256
// line end:   270
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004E0E8
// line start: 277
// line end:   295
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004E234
// line start: 302
// line end:   310
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004E2BC
// line start: 317
// line end:   319
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004E2FC
// line start: 346
// line end:   357
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004E3A0
// line start: 365
// line end:   388
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004E430
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


// address: 0x8004E64C
// line start: 556
// line end:   560
void FreeObjectGFX__Fv() {
}


// address: 0x8004E658
// line start: 564
// line end:   575
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004E710
// line start: 583
// line end:   617
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004E994
// line start: 624
// line end:   630
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004E9F4
// line start: 637
// line end:   639
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004EA1C
// line start: 663
// line end:   700
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004EB28
// line start: 708
// line end:   745
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004EC34
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


// address: 0x8004EE44
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


// address: 0x8004F180
// line start: 840
// line end:   845
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004F1E4
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


// address: 0x8004F4C0
// line start: 943
// line end:   951
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004F530
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


// address: 0x8004F6C4
// line start: 993
// line end:   995
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004F710
// line start: 1002
// line end:   1013
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004F834
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


// address: 0x8004FB04
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


// address: 0x8004FE54
// line start: 1130
// line end:   1156
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x800500E4
// line start: 1165
// line end:   1247
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x800503C0
// line start: 1255
// line end:   1256
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x800503F8
// line start: 1269
// line end:   1308
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


// address: 0x800504E0
// line start: 1315
// line end:   1339
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x800504E8
// line start: 1345
// line end:   1374
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x800504F0
// line start: 1380
// line end:   1401
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x80050770
// line start: 1408
// line end:   1415
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x80050814
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


// address: 0x80050BB8
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


// address: 0x80050F90
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


// address: 0x80051328
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


// address: 0x800516C0
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


// address: 0x800519C8
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


// address: 0x80051CD0
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


// address: 0x800521CC
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


// address: 0x80052304
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


// address: 0x80052418
// line start: 1815
// line end:   1830
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x800525D0
// line start: 1839
// line end:   1849
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x8005267C
// line start: 1857
// line end:   1873
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80052800
// line start: 1880
// line end:   1887
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x8005295C
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


// address: 0x80052B48
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


// address: 0x80053070
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


// address: 0x80053600
// line start: 2077
// line end:   2109
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x80053840
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


// address: 0x80053C10
// line start: 2162
// line end:   2189
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80053DDC
// line start: 2195
// line end:   2220
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80053F90
// line start: 2226
// line end:   2252
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800541E4
// line start: 2258
// line end:   2281
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800543B4
// line start: 2289
// line end:   2305
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005456C
// line start: 2311
// line end:   2318
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800546C8
// line start: 2325
// line end:   2332
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80054824
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


// address: 0x8005492C
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


// address: 0x80054E44
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


// address: 0x80055008
// line start: 2511
// line end:   2514
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80055078
// line start: 2521
// line end:   3075
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


// address: 0x80057648
// line start: 3081
// line end:   3092
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800577C4
// line start: 3098
// line end:   3123
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800579C8
// line start: 3129
// line end:   3137
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80057AB0
// line start: 3143
// line end:   3171
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80057C20
// line start: 3183
// line end:   3205
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80057D10
// line start: 3212
// line end:   3218
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x80057DB8
// line start: 3225
// line end:   3232
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80057E5C
// line start: 3239
// line end:   3331
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


// address: 0x80058408
// line start: 3338
// line end:   3378
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x800585B4
// line start: 3384
// line end:   3394
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x800586A4
// line start: 3402
// line end:   3427
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80058808
// line start: 3433
// line end:   3550
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80058C40
// line start: 3558
// line end:   3568
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80058D54
// line start: 3574
// line end:   3584
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80058E68
// line start: 3590
// line end:   3600
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80058F7C
// line start: 3606
// line end:   3695
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x8005917C
// line start: 3703
// line end:   3729
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


// address: 0x8005936C
// line start: 3737
// line end:   3798
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x800598C0
// line start: 3804
// line end:   3825
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80059A20
// line start: 3833
// line end:   3839
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80059A7C
// line start: 3847
// line end:   3871
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80059B94
// line start: 3877
// line end:   3893
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


// address: 0x80059CCC
// line start: 3900
// line end:   3903
void SyncLever__Fi(int i) {
}


// address: 0x80059D48
// line start: 3911
// line end:   3923
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x80059E54
// line start: 3932
// line end:   3947
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


// address: 0x80059FB0
// line start: 3955
// line end:   3979
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005A118
// line start: 3987
// line end:   4010
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005A244
// line start: 4018
// line end:   4057
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x8005A384
// line start: 4065
// line end:   4206
void GetObjectStr__Fi(int i) {
}


// address: 0x8005A7A0
// line start: 4211
// line end:   4366
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


// address: 0x8005A9BC
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8005A9BC(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8005A9F4
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8005A9F4(struct TextDat *this, int Creature) {
}


// address: 0x8005AA6C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8005AA6C(struct TextDat *this) {
}


// address: 0x8005AA80
// line start: 25
// line end:   26
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x8005AA88
// line start: 380
// line end:   385
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x8005AAB4
// line start: 391
// line end:   404
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x8005AB68
// line start: 449
// line end:   498
void SetupLocalPlayer__Fv() {
}


// address: 0x8005AB88
// line start: 273
// line end:   274
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005ABCC
// line start: 278
// line end:   279
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005ABE0
// line start: 415
// line end:   421
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AC00
// line start: 531
// line end:   550
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AC08
// line start: 557
// line end:   568
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005AC24
// line start: 577
// line end:   588
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AC40
// line start: 594
// line end:   675
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005AE7C
// line start: 722
// line end:   839
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x8005B298
// line start: 846
// line end:   852
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x8005B300
// line start: 858
// line end:   894
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8005B470
// line start: 901
// line end:   964
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


// address: 0x8005B67C
// line start: 970
// line end:   977
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


// address: 0x8005B700
// line start: 986
// line end:   1156
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


// address: 0x8005BAA0
// line start: 1166
// line end:   1172
void InitMultiView__Fv() {
}


// address: 0x8005BAA8
// line start: 1273
// line end:   1299
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFA0
	// size: 0x60
	auto struct bbssbb bodge[12];
	{
		// register: 4
		register int i;
	}
}


// address: 0x8005BB40
// line start: 1303
// line end:   1308
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x8005BBC8
// line start: 1362
// line end:   1371
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005BC5C
// line start: 1378
// line end:   1391
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005BD50
// line start: 1397
// line end:   1401
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BD64
// line start: 1436
// line end:   1457
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005BDF0
// line start: 1462
// line end:   1481
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BE54
// line start: 1489
// line end:   1547
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800D00F0
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005BE90
// line start: 1555
// line end:   1577
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BEBC
// line start: 1674
// line end:   1706
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x8005BFF4
// line start: 1732
// line end:   1747
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005C08C
// line start: 1753
// line end:   1794
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005C228
// line start: 1827
// line end:   1843
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


// address: 0x8005C348
// line start: 1850
// line end:   1883
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005C468
// line start: 1890
// line end:   1919
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005C604
// line start: 1925
// line end:   1962
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


// address: 0x8005C7CC
// line start: 1967
// line end:   2100
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


// address: 0x8005CB14
// line start: 2105
// line end:   2271
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005CF5C
// line start: 2278
// line end:   2301
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005D0A8
// line start: 2307
// line end:   2309
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005D0C8
// line start: 2315
// line end:   2340
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


// address: 0x8005D3B0
// line start: 2346
// line end:   2368
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D474
// line start: 2375
// line end:   2430
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005D5B8
// line start: 2435
// line end:   2453
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D648
// line start: 2461
// line end:   2477
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005D704
// line start: 2485
// line end:   2486
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D70C
// line start: 2514
// line end:   2531
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005D794
// line start: 2535
// line end:   2652
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005DB00
// line start: 2659
// line end:   2708
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005DCA0
// line start: 2715
// line end:   2829
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


// address: 0x8005E2D0
// line start: 2836
// line end:   2899
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


// address: 0x8005E680
// line start: 2906
// line end:   2913
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005E710
// line start: 2921
// line end:   2992
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


// address: 0x8005EA9C
// line start: 3000
// line end:   3021
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005EB9C
// line start: 3029
// line end:   3054
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EC60
// line start: 3060
// line end:   3072
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005ED00
// line start: 3076
// line end:   3240
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


// address: 0x8005FCB8
// line start: 3247
// line end:   3307
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060040
// line start: 3313
// line end:   3338
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


// address: 0x80060140
// line start: 3343
// line end:   3359
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x800601BC
// line start: 3366
// line end:   3392
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006030C
// line start: 3399
// line end:   3400
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060314
// line start: 3407
// line end:   3714
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x80060754
// line start: 3726
// line end:   3734
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x800607BC
// line start: 3741
// line end:   3780
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


// address: 0x80060CA4
// line start: 3827
// line end:   3844
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060D40
// line start: 3853
// line end:   3974
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


// address: 0x80061074
// line start: 3980
// line end:   3983
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006109C
// line start: 3991
// line end:   4016
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


// address: 0x80061244
// line start: 4023
// line end:   4075
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8006124C
// line start: 4081
// line end:   4174
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


// address: 0x8006165C
// line start: 4241
// line end:   4265
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x80061784
// line start: 4269
// line end:   4274
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800617B4
// line start: 4291
// line end:   4325
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80061950
// line start: 4332
// line end:   4344
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061A6C
// line start: 4352
// line end:   4369
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061B58
// line start: 4377
// line end:   4387
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061C3C
// line start: 4395
// line end:   4409
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061D18
// line start: 4417
// line end:   4422
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x80061D5C
// line start: 4429
// line end:   4438
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80061E38
// line start: 4445
// line end:   4454
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80061EA8
// line start: 4461
// line end:   4470
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80061F84
// line start: 4477
// line end:   4486
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80061FF0
// line start: 4493
// line end:   4496
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061FF8
// line start: 4503
// line end:   4570
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80062328
// line start: 4573
// line end:   4573
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062350
// line start: 4574
// line end:   4574
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80062394
// line start: 4575
// line end:   4575
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800623C8
// line start: 4576
// line end:   4576
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800623FC
// line start: 4577
// line end:   4577
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80062430
// line start: 4578
// line end:   4578
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80062464
// line start: 4579
// line end:   4579
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80062498
// line start: 4580
// line end:   4580
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x800624D0
// line start: 4581
// line end:   4581
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80062504
// line start: 4582
// line end:   4582
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006252C
// line start: 4583
// line end:   4583
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062554
// line start: 4584
// line end:   4584
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006257C
// line start: 4585
// line end:   4585
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x800625C4
// line start: 4586
// line end:   4586
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800625EC
// line start: 4587
// line end:   4587
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062614
// line start: 4588
// line end:   4588
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80062648
// line start: 4589
// line end:   4589
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062670
// line start: 4590
// line end:   4590
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x800626B4
// line start: 4591
// line end:   4591
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x800626E8
// line start: 4592
// line end:   4592
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006271C
// line start: 4594
// line end:   4594
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80062768
// line start: 4595
// line end:   4595
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x800627B4
// line start: 4596
// line end:   4596
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80062800
// line start: 4597
// line end:   4597
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80062854
// line start: 4598
// line end:   4598
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x800628A0
// line start: 4599
// line end:   4599
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x800628EC
// line start: 4600
// line end:   4600
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x8006293C
// line start: 4601
// line end:   4601
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80062988
// line start: 4602
// line end:   4602
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x800629D4
// line start: 4603
// line end:   4603
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80062A20
// line start: 4604
// line end:   4604
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80062A6C
// line start: 4605
// line end:   4605
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80062AB8
// line start: 4606
// line end:   4606
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80062B04
// line start: 4607
// line end:   4607
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80062B54
// line start: 4608
// line end:   4608
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80062BA0
// line start: 4610
// line end:   4610
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80062BF0
// line start: 4612
// line end:   4612
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80062C3C
// line start: 4613
// line end:   4613
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80062C88
// line start: 4614
// line end:   4614
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80062CD4
// line start: 4615
// line end:   4615
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80062D20
// line start: 4616
// line end:   4616
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80062D6C
// line start: 4617
// line end:   4617
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80062DB8
// line start: 4618
// line end:   4618
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80062E04
// line start: 4619
// line end:   4619
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80062E50
// line start: 4620
// line end:   4620
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80062E9C
// line start: 4621
// line end:   4621
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80062EE8
// line start: 4622
// line end:   4622
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80062F34
// line start: 4630
// line end:   4631
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x80062F68
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80062F68(struct POLY_FT4 **Prim) {
}


// address: 0x80062FE4
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80062FE4(int PNum) {
}


// address: 0x80063034
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80063034(struct CPlayer *this) {
}


// address: 0x80063040
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x8006304C
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80063058
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


// address: 0x800632A4
// line start: 226
// line end:   305
void CheckQuests__Fv() {
	// register: 20
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
	// register: 21
	register int omp;
	{
		{
			{
				// register: 17
				register int pl;
				{
					// register: 4
					// size: 0x23A8
					register struct PlayerStruct *player;
				}
			}
		}
	}
}


// address: 0x80063764
// line start: 309
// line end:   336
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


// address: 0x80063908
// line start: 341
// line end:   347
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x8006399C
// line start: 353
// line end:   458
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


// address: 0x80063F7C
// line start: 492
// line end:   517
void SetReturnLvlPos__Fv() {
}


// address: 0x8006408C
// line start: 525
// line end:   530
void GetReturnLvlPos__Fv() {
}


// address: 0x800640E0
// line start: 537
// line end:   559
void ResyncMPQuests__Fv() {
}


// address: 0x8006421C
// line start: 569
// line end:   658
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x8006477C
// line start: 674
// line end:   715
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


// address: 0x800649A8
// line start: 724
// line end:   754
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80064B70
// line start: 764
// line end:   785
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80064C08
// line start: 793
// line end:   814
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80064D20
// line start: 821
// line end:   839
void QuestlogUp__Fv() {
}


// address: 0x80064D74
// line start: 847
// line end:   867
void QuestlogDown__Fv() {
}


// address: 0x80064DE0
// line start: 876
// line end:   888
void RemoveQLog__Fv() {
}


// address: 0x80064E58
// line start: 893
// line end:   914
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80064F1C
// line start: 922
// line end:   924
void QuestlogESC__Fv() {
}


// address: 0x80064F44
// line start: 931
// line end:   951
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80064FC4
// line start: 998
// line end:   998
void _GLOBAL__D_questlog() {
}


// address: 0x80064FEC
// line start: 998
// line end:   998
void _GLOBAL__I_questlog() {
}


// address: 0x80065014
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x80065020
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_80065020(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80065040
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_80065040(struct Dialog *this, int Type) {
}


// address: 0x80065048
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_80065048(struct Dialog *this, int Type) {
}


// address: 0x80065050
// line start: 78
// line end:   78
void ___6Dialog_addr_80065050(struct Dialog *this, int __in_chrg) {
}


// address: 0x80065078
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_80065078(struct Dialog *this) {
}


// address: 0x800650D4
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800650D4(struct TextDat *this, int PalNum) {
}


// address: 0x800650F0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800650F0(struct TextDat *this, int FrNum) {
}


// address: 0x8006510C
// line start: 85
// line end:   304
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x800652D4
// line start: 315
// line end:   374
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x80065400
// line start: 160
// line end:   161
void FreeStoreMem__Fv() {
}


// address: 0x80065408
// line start: 169
// line end:   172
void DrawSTextBack__Fv() {
}


// address: 0x80065478
// line start: 177
// line end:   253
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
	// address: 0x8011CE68
	static unsigned char DaveFix;
}


// address: 0x8006586C
// line start: 260
// line end:   267
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80065900
// line start: 274
// line end:   287
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80065998
// line start: 293
// line end:   297
void AddSLine__Fi(int y) {
}


// address: 0x800659E8
// line start: 303
// line end:   304
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80065A10
// line start: 313
// line end:   322
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80065AC4
// line start: 327
// line end:   419
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80065F4C
// line start: 427
// line end:   485
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


// address: 0x8006656C
// line start: 492
// line end:   506
void S_StartSmith__Fv() {
}


// address: 0x800666F4
// line start: 512
// line end:   539
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800668AC
// line start: 545
// line end:   563
void S_StartSBuy__Fv() {
}


// address: 0x800669DC
// line start: 569
// line end:   610
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


// address: 0x80066BFC
// line start: 616
// line end:   646
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80066D4C
// line start: 652
// line end:   663
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80066E30
// line start: 669
// line end:   721
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


// address: 0x80067058
// line start: 727
// line end:   773
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80067488
// line start: 781
// line end:   789
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006752C
// line start: 794
// line end:   815
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006770C
// line start: 820
// line end:   878
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80067BDC
// line start: 887
// line end:   899
void S_StartWitch__Fv() {
}


// address: 0x80067D1C
// line start: 905
// line end:   942
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


// address: 0x80067EF4
// line start: 948
// line end:   968
void S_StartWBuy__Fv() {
}


// address: 0x80068020
// line start: 974
// line end:   994
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80068144
// line start: 1000
// line end:   1060
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x8006879C
// line start: 1069
// line end:   1075
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80068824
// line start: 1081
// line end:   1090
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800689A4
// line start: 1096
// line end:   1137
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80068DC4
// line start: 1146
// line end:   1152
void S_StartNoMoney__Fv() {
}


// address: 0x80068E2C
// line start: 1158
// line end:   1163
void S_StartNoRoom__Fv() {
}


// address: 0x80068E8C
// line start: 1169
// line end:   1243
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x80069204
// line start: 1249
// line end:   1267
void S_StartBoy__Fv() {
}


// address: 0x80069394
// line start: 1274
// line end:   1303
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006951C
// line start: 1311
// line end:   1331
void S_StartHealer__Fv() {
}


// address: 0x800696F0
// line start: 1337
// line end:   1359
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x8006985C
// line start: 1365
// line end:   1382
void S_StartHBuy__Fv() {
}


// address: 0x8006997C
// line start: 1388
// line end:   1397
void S_StartStory__Fv() {
}


// address: 0x80069A6C
// line start: 1403
// line end:   1407
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80069AA0
// line start: 1415
// line end:   1420
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80069B74
// line start: 1426
// line end:   1497
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006A5D4
// line start: 1506
// line end:   1530
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006A7A8
// line start: 1536
// line end:   1570
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


// address: 0x8006A9D8
// line start: 1577
// line end:   1587
void S_StartTavern__Fv() {
}


// address: 0x8006AAD0
// line start: 1593
// line end:   1602
void S_StartBarMaid__Fv() {
}


// address: 0x8006ABA4
// line start: 1608
// line end:   1617
void S_StartDrunk__Fv() {
}


// address: 0x8006AC78
// line start: 1623
// line end:   1697
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x8006AF60
// line start: 1704
// line end:   1708
void DrawSText__Fv() {
}


// address: 0x8006AFA0
// line start: 1713
// line end:   1727
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006B068
// line start: 1731
// line end:   1787
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006B214
// line start: 1795
// line end:   1862
void STextESC__Fv() {
}


// address: 0x8006B388
// line start: 1869
// line end:   1904
void STextUp__Fv() {
}


// address: 0x8006B520
// line start: 1914
// line end:   1947
void STextDown__Fv() {
}


// address: 0x8006B6D0
// line start: 1956
// line end:   1978
void S_SmithEnter__Fv() {
}


// address: 0x8006B7A4
// line start: 1985
// line end:   1996
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006B820
// line start: 2004
// line end:   2014
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006B89C
// line start: 2022
// line end:   2113
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8006BCE8
// line start: 2122
// line end:   2146
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006BEDC
// line start: 2152
// line end:   2186
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C100
// line start: 2194
// line end:   2220
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006C288
// line start: 2227
// line end:   2266
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


// address: 0x8006C4B8
// line start: 2273
// line end:   2303
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


// address: 0x8006C770
// line start: 2311
// line end:   2335
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


// address: 0x8006C9D4
// line start: 2340
// line end:   2396
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006CCC8
// line start: 2403
// line end:   2420
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006CDCC
// line start: 2427
// line end:   2445
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006D03C
// line start: 2451
// line end:   2470
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006D198
// line start: 2477
// line end:   2494
void S_WitchEnter__Fv() {
}


// address: 0x8006D248
// line start: 2501
// line end:   2534
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006D448
// line start: 2539
// line end:   2570
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006D634
// line start: 2578
// line end:   2595
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006D738
// line start: 2602
// line end:   2617
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006D8B0
// line start: 2623
// line end:   2642
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006DA0C
// line start: 2649
// line end:   2677
void S_BoyEnter__Fv() {
}


// address: 0x8006DB44
// line start: 2684
// line end:   2695
void BoyBuyItem__Fv() {
}


// address: 0x8006DBC8
// line start: 2701
// line end:   2748
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006DE6C
// line start: 2753
// line end:   2785
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006E054
// line start: 2791
// line end:   2813
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006E3A0
// line start: 2820
// line end:   2855
void S_ConfirmEnter__Fv() {
}


// address: 0x8006E4BC
// line start: 2860
// line end:   2878
void S_HealerEnter__Fv() {
}


// address: 0x8006E554
// line start: 2885
// line end:   2916
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006E760
// line start: 2924
// line end:   2937
void S_StoryEnter__Fv() {
}


// address: 0x8006E7F8
// line start: 2944
// line end:   2963
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006E974
// line start: 2970
// line end:   3012
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


// address: 0x8006EB6C
// line start: 3021
// line end:   3032
void S_TavernEnter__Fv() {
}


// address: 0x8006EBDC
// line start: 3039
// line end:   3051
void S_BarmaidEnter__Fv() {
}


// address: 0x8006EC4C
// line start: 3058
// line end:   3069
void S_DrunkEnter__Fv() {
}


// address: 0x8006ECBC
// line start: 3076
// line end:   3139
void STextEnter__Fv() {
}


// address: 0x8006EE80
// line start: 3147
// line end:   3240
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006EF6C
// line start: 3245
// line end:   3247
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006EF80
// line start: 3326
// line end:   3326
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006EFA8
// line start: 3326
// line end:   3326
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006EFD0
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8006EFD0(struct CPad *this) {
}


// address: 0x8006EFF8
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8006EFF8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006F018
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8006F018(struct Dialog *this, int Type) {
}


// address: 0x8006F020
// line start: 78
// line end:   78
void ___6Dialog_addr_8006F020(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006F048
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8006F048(struct Dialog *this) {
}


// address: 0x8006F0A4
// line start: 129
// line end:   207
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006F254
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


// address: 0x8006F44C
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


// address: 0x8006F53C
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
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8006F8F0
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


// address: 0x8006FA58
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


// address: 0x8006FB3C
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


// address: 0x8006FBD4
// line start: 76
// line end:   81
void InitVPTriggers__Fv() {
}


// address: 0x8006FC1C
// line start: 89
// line end:   130
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006FF34
// line start: 135
// line end:   163
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x800701E4
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


// address: 0x80070644
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


// address: 0x80070AC0
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


// address: 0x80070FCC
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


// address: 0x8007108C
// line start: 362
// line end:   373
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x80071180
// line start: 380
// line end:   391
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x80071274
// line start: 398
// line end:   409
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x80071368
// line start: 418
// line end:   471
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


// address: 0x80071670
// line start: 480
// line end:   501
void FadeGameOut__Fv() {
}


// address: 0x8007170C
// line start: 506
// line end:   513
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x80071770
// line start: 518
// line end:   660
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


// address: 0x80071C8C
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


// address: 0x80071F54
// line start: 101
// line end:   138
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80072098
// line start: 144
// line end:   165
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80072138
// line start: 172
// line end:   204
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x800723E4
// line start: 209
// line end:   244
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x80072698
// line start: 249
// line end:   272
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x800728FC
// line start: 106
// line end:   107
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80072904
// line start: 113
// line end:   121
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x8007296C
// line start: 128
// line end:   130
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x8007298C
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x800729EC
// line start: 167
// line end:   194
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80072A7C
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80072ACC
// line start: 227
// line end:   233
void music_stop__Fv() {
}


// address: 0x80072B10
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x80072B50
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


// address: 0x80072BD4
// line start: 284
// line end:   290
void music_hold__Fv() {
}


// address: 0x80072C34
// line start: 299
// line end:   305
void music_release__Fv() {
}


// address: 0x80072C84
// line start: 314
// line end:   315
unsigned char snd_playing__Fi(int SFXNo) {
}


// address: 0x80072CA4
// line start: 94
// line end:   101
void ClrCursor__Fi(int num) {
}


// address: 0x80072D04
// line start: 110
// line end:   173
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


// address: 0x800731C0
// line start: 184
// line end:   189
void CloseInvChr__Fv() {
}


// address: 0x80073210
// line start: 194
// line end:   197
int LeftOf__Fi(int dir) {
}


// address: 0x80073228
// line start: 201
// line end:   204
int RightOf__Fi(int dir) {
}


// address: 0x80073244
// line start: 213
// line end:   224
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800732F0
// line start: 272
// line end:   307
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x800733B4
// size: 0x94
// line start: 320
// line end:   343
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x800734A8
// line start: 352
// line end:   353
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x800734B0
// line start: 362
// line end:   365
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800734F4
// line start: 374
// line end:   377
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80073538
// line start: 418
// line end:   476
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80073798
// line start: 486
// line end:   539
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80073948
// line start: 547
// line end:   566
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x800739A4
// line start: 574
// line end:   577
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800739E0
// line start: 586
// line end:   607
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80073AA4
// line start: 615
// line end:   738
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


// address: 0x80073EB0
// line start: 748
// line end:   782
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80073FF4
// line start: 789
// line end:   832
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x800740E8
// line start: 843
// line end:   889
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80074200
// line start: 901
// line end:   909
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x80074254
// line start: 917
// line end:   1028
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


// address: 0x80074660
// line start: 1038
// line end:   1102
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80074974
// line start: 1110
// line end:   1179
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


// address: 0x80074D54
// line start: 1189
// line end:   1212
void show_combos__7GamePad(struct GamePad *this) {
	// register: 22
	register int x;
	// register: 21
	register int y;
	{
		// register: 20
		register int i;
	}
}


// address: 0x80074F20
// line start: 1296
// line end:   1536
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
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


// address: 0x800755A0
// line start: 1543
// line end:   1567
void GamePadTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x8007566C
// line start: 1573
// line end:   1629
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 3
	// size: 0x94
	register struct GamePad *GP1;
	// register: 8
	// size: 0x94
	register struct GamePad *GP2;
}


// address: 0x8007577C
// line start: 1635
// line end:   1637
void Init_GamePad__Fv() {
}


// address: 0x800757AC
// line start: 1642
// line end:   1656
void InitGamePadVars__Fv() {
}


// address: 0x8007583C
// line start: 1660
// line end:   1669
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x800758AC
// line start: 1673
// line end:   1676
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad *GPad;
}


// address: 0x800758D0
// line start: 1677
// line end:   1677
void _GLOBAL__I_flyflag() {
}


// address: 0x80075908
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80075908(struct CBlocks *this) {
}


// address: 0x8007591C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8007591C(struct CPad *this) {
}


// address: 0x80075944
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80075944(struct CPad *this) {
}


// address: 0x8007596C
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_8007596C(struct CPad *this) {
}


// address: 0x80075994
// line start: 66
// line end:   69
void DoGameTestStuff__Fv() {
}


// address: 0x800759C0
// line start: 73
// line end:   76
void DoInitGameStuff__Fv() {
}


// address: 0x800759F4
// line start: 63
// line end:   64
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80075A14
// line start: 74
// line end:   76
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80075A34
// line start: 94
// line end:   95
void GRL_InitGwin__Fv() {
}


// address: 0x80075A40
// line start: 106
// line end:   110
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x80075A50
// line start: 121
// line end:   123
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80075A78
// line start: 133
// line end:   150
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80075B24
// line start: 160
// line end:   167
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x80075B6C
// size: 0x4
// line start: 84
// line end:   85
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80075B78
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


// address: 0x80075CE4
// line start: 147
// line end:   167
char *GetStr__Fi(int StrId) {
}


// address: 0x80075D4C
// line start: 173
// line end:   176
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x80075D80
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


// address: 0x80075EE4
// line start: 234
// line end:   243
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x80075F3C
// line start: 252
// line end:   254
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80075F48
// line start: 264
// line end:   282
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80076010
// line start: 290
// line end:   316
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80076090
// line start: 122
// line end:   209
void TempPrintMissile__FiiiiiiiiccUcUcUcc(int ScrX, int ScrY, int OtPos, int spell, int aframe, int direction, int anim, int sfx, int xflip, int yflip, int red, int grn, int blu, int semi) {
	// address: 0xFFFFFF90
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// register: 17
	// size: 0x6C
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


// address: 0x80076468
// line start: 214
// line end:   227
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int anim;
}


// address: 0x80076500
// line start: 243
// line end:   251
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 4
	register int anim;
}


// address: 0x8007657C
// line start: 266
// line end:   281
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80076614
// line start: 288
// line end:   303
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800766C4
// line start: 310
// line end:   311
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80076728
// line start: 315
// line end:   318
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80076840
// line start: 322
// line end:   324
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x800768D8
// line start: 328
// line end:   330
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80076970
// line start: 334
// line end:   335
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800769D8
// line start: 339
// line end:   350
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80076A78
// line start: 354
// line end:   369
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


// address: 0x80076B58
// line start: 374
// line end:   389
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


// address: 0x80076C30
// line start: 394
// line end:   406
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80076CC0
// line start: 410
// line end:   424
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


// address: 0x80076DDC
// line start: 428
// line end:   440
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80076E78
// line start: 444
// line end:   445
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80076EE0
// line start: 449
// line end:   450
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80076F48
// line start: 454
// line end:   464
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x800770AC
// line start: 468
// line end:   477
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x800771F0
// line start: 481
// line end:   482
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077258
// line start: 486
// line end:   487
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800772B0
// line start: 491
// line end:   501
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


// address: 0x8007737C
// line start: 506
// line end:   507
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800773E0
// line start: 511
// line end:   512
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077444
// line start: 517
// line end:   592
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


// address: 0x8007796C
// line start: 597
// line end:   602
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077A14
// line start: 606
// line end:   607
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077A1C
// line start: 610
// line end:   611
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077A50
// line start: 615
// line end:   616
void FuncWEAPEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077A74
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077A74(struct POLY_FT4 **Prim) {
}


// address: 0x80077AF0
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80077AF0(int PNum) {
}


// address: 0x80077B40
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80077B40(struct CPlayer *this) {
}


// address: 0x80077B4C
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80077B4C(struct CPlayer *this) {
}


// address: 0x80077B58
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80077B58(struct CPlayer *this) {
}


// address: 0x80077B64
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80077B64(struct TextDat *this) {
}


// address: 0x80077B78
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077B78(struct TextDat *this, int FrNum) {
}


// address: 0x80077B94
// line start: 67
// line end:   72
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80077BCC
// line start: 81
// line end:   96
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80077C4C
// line start: 105
// line end:   120
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80077CE4
// line start: 131
// line end:   147
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80077D94
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


// address: 0x80077F50
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


// address: 0x800780E4
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


// address: 0x8007819C
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


// address: 0x80078428
// line start: 441
// line end:   448
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80078500
// size: 0x28
// line start: 459
// line end:   467
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80078588
// size: 0x28
// line start: 477
// line end:   478
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800785B4
// size: 0x28
// line start: 488
// line end:   489
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800785E0
// size: 0x28
// line start: 499
// line end:   500
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007860C
// size: 0x28
// line start: 510
// line end:   511
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078638
// size: 0x28
// line start: 521
// line end:   522
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078664
// size: 0x28
// line start: 532
// line end:   533
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078688
// size: 0x28
// line start: 543
// line end:   544
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800786AC
// size: 0x28
// line start: 554
// line end:   555
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800786D8
// size: 0x28
// line start: 565
// line end:   566
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078704
// size: 0x28
// line start: 576
// line end:   577
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078730
// size: 0x28
// line start: 587
// line end:   588
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007875C
// size: 0x28
// line start: 598
// line end:   599
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078788
// size: 0x28
// line start: 609
// line end:   610
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800787B4
// size: 0x28
// line start: 620
// line end:   621
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800787E0
// size: 0x28
// line start: 631
// line end:   632
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007880C
// size: 0x28
// line start: 642
// line end:   643
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078838
// size: 0x28
// line start: 653
// line end:   654
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078864
// size: 0x28
// line start: 664
// line end:   665
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078890
// size: 0x28
// line start: 675
// line end:   676
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800788BC
// size: 0x28
// line start: 686
// line end:   687
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800788E8
// size: 0x28
// line start: 697
// line end:   698
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078914
// size: 0x28
// line start: 708
// line end:   709
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078940
// size: 0x28
// line start: 719
// line end:   720
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007896C
// size: 0x28
// line start: 730
// line end:   731
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078998
// size: 0x28
// line start: 741
// line end:   742
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800789C4
// size: 0x28
// line start: 752
// line end:   753
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800789F0
// size: 0x28
// line start: 763
// line end:   764
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078A1C
// size: 0x28
// line start: 774
// line end:   775
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078A48
// size: 0x28
// line start: 785
// line end:   786
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078A74
// size: 0x28
// line start: 796
// line end:   797
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078AA0
// size: 0x28
// line start: 807
// line end:   808
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078ACC
// size: 0x28
// line start: 818
// line end:   819
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078AF8
// size: 0x28
// line start: 829
// line end:   830
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078B24
// size: 0x28
// line start: 840
// line end:   841
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078B50
// size: 0x28
// line start: 851
// line end:   852
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078B7C
// size: 0x28
// line start: 862
// line end:   863
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078BA8
// size: 0x28
// line start: 873
// line end:   874
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078BD4
// size: 0x28
// line start: 884
// line end:   885
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078C00
// size: 0x28
// line start: 895
// line end:   896
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078C2C
// line start: 906
// line end:   911
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80078CC0
// size: 0x28
// line start: 915
// line end:   921
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80078D50
// size: 0x28
// line start: 931
// line end:   937
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80078DE0
// size: 0x28
// line start: 947
// line end:   953
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80078E70
// size: 0x28
// line start: 963
// line end:   969
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80078F00
// size: 0x28
// line start: 979
// line end:   980
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078F2C
// size: 0x28
// line start: 990
// line end:   991
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078F58
// size: 0x28
// line start: 1001
// line end:   1002
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078F84
// size: 0x28
// line start: 1012
// line end:   1013
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078FB0
// size: 0x28
// line start: 1023
// line end:   1024
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078FDC
// size: 0x28
// line start: 1034
// line end:   1035
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079008
// size: 0x28
// line start: 1045
// line end:   1046
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079034
// size: 0x28
// line start: 1056
// line end:   1057
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079060
// size: 0x28
// line start: 1067
// line end:   1068
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007908C
// size: 0x28
// line start: 1078
// line end:   1079
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800790B8
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


// address: 0x80079210
// size: 0x28
// line start: 1125
// line end:   1132
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x800792DC
// size: 0x28
// line start: 1142
// line end:   1149
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x800793A8
// size: 0x28
// line start: 1159
// line end:   1160
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800793D4
// size: 0x28
// line start: 1170
// line end:   1171
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079400
// size: 0x28
// line start: 1181
// line end:   1182
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007942C
// size: 0x28
// line start: 1192
// line end:   1193
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079458
// size: 0x28
// line start: 1203
// line end:   1204
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007947C
// size: 0x28
// line start: 1214
// line end:   1215
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800794A8
// size: 0x28
// line start: 1225
// line end:   1226
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800794D4
// size: 0x28
// line start: 1236
// line end:   1237
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079500
// size: 0x28
// line start: 1247
// line end:   1248
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007952C
// size: 0x28
// line start: 1258
// line end:   1259
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079558
// size: 0x28
// line start: 1269
// line end:   1270
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079584
// size: 0x28
// line start: 1280
// line end:   1281
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800795B0
// size: 0x28
// line start: 1291
// line end:   1292
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800795DC
// size: 0x28
// line start: 1302
// line end:   1303
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079608
// size: 0x28
// line start: 1313
// line end:   1314
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079634
// size: 0x28
// line start: 1324
// line end:   1325
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079660
// size: 0x28
// line start: 1335
// line end:   1336
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007968C
// size: 0x28
// line start: 1346
// line end:   1347
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800796B8
// size: 0x28
// line start: 1357
// line end:   1358
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800796E4
// size: 0x28
// line start: 1368
// line end:   1369
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079710
// size: 0x28
// line start: 1379
// line end:   1380
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007973C
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


// address: 0x800798D0
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


// address: 0x80079A58
// size: 0x28
// line start: 1480
// line end:   1481
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079A7C
// size: 0x28
// line start: 1491
// line end:   1492
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079AA8
// size: 0x28
// line start: 1502
// line end:   1503
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079AD4
// size: 0x28
// line start: 1513
// line end:   1514
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079B00
// size: 0x28
// line start: 1524
// line end:   1525
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079B2C
// size: 0x28
// line start: 1535
// line end:   1536
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079B58
// size: 0x28
// line start: 1546
// line end:   1547
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079B84
// size: 0x28
// line start: 1557
// line end:   1558
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079BB0
// size: 0x28
// line start: 1568
// line end:   1569
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079BDC
// size: 0x28
// line start: 1579
// line end:   1580
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079C08
// size: 0x28
// line start: 1590
// line end:   1591
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079C34
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80079C34(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80079C70
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80079C70(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80079C98
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80079C98(struct POLY_FT4 **Prim) {
}


// address: 0x80079D14
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80079D14(struct CBlocks *this) {
}


// address: 0x80079D20
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80079D20(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80079D58
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80079D58(struct TextDat *this, int Creature) {
}


// address: 0x80079DD0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80079DD0(struct TextDat *this) {
}


// address: 0x80079DE4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80079DE4(struct TextDat *this, int FrNum) {
}


// address: 0x80079E00
// line start: 48
// line end:   58
void gamemenu_on__Fv() {
}


// address: 0x80079E08
// line start: 63
// line end:   65
void gamemenu_off__Fv() {
}


// address: 0x80079E10
// line start: 74
// line end:   96
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80079E18
// line start: 101
// line end:   114
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80079E20
// line start: 119
// line end:   125
void ResetPal__Fv() {
}


// address: 0x80079E28
// line start: 133
// line end:   140
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80079E58
// line start: 175
// line end:   176
bool GetFadeState__Fv() {
}


// address: 0x80079E64
// line start: 203
// line end:   227
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 6
	register unsigned char bright1;
	// register: 3
	register unsigned char bright2;
}


// address: 0x80079F80
// line start: 235
// line end:   258
void SmearScreen__Fv() {
}


// address: 0x80079F88
// line start: 261
// line end:   266
void DrawFadedScreen__Fv() {
}


// address: 0x80079FDC
// line start: 285
// line end:   297
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007A098
// line start: 304
// line end:   332
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007A128
// line start: 339
// line end:   346
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x8007A180
// line start: 354
// line end:   389
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007A230
// line start: 396
// line end:   406
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x8007A284
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x8007A2A4
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


// address: 0x8007A410
// line start: 168
// line end:   171
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x8007A44C
// line start: 176
// line end:   188
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8007A498
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x8007A4E0
// line start: 205
// line end:   217
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x8007A540
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


// address: 0x8007AAB4
// line start: 309
// line end:   318
void ClearMVars__Fi(int i) {
}


// address: 0x8007AB28
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


// address: 0x8007AF74
// line start: 434
// line end:   442
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x8007B024
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


// address: 0x8007B168
// line start: 479
// line end:   498
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x8007B260
// line start: 502
// line end:   510
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x8007B308
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


// address: 0x8007B4F8
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


// address: 0x8007B5D8
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


// address: 0x8007B854
// line start: 618
// line end:   649
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x8007BB5C
// line start: 110
// line end:   198
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x8007BE58
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


// address: 0x8007C2A8
// line start: 70
// line end:   140
int lAddMissile__Fiiici(int sx, int sy, int midir, char micaster, int id) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
	// register: 18
	register int mi;
}


// address: 0x8007C47C
// line start: 149
// line end:   178
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 3
	register int mi;
}


// address: 0x8007C5D8
// line start: 184
// line end:   198
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8007C6E0
// line start: 206
// line end:   207
void AddInTownPortal__Fi(int i) {
}


// address: 0x8007C718
// line start: 214
// line end:   222
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8007C788
// line start: 230
// line end:   232
void DeactivatePortal__Fi(int i) {
}


// address: 0x8007C7A8
// line start: 239
// line end:   243
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8007C7E0
// line start: 249
// line end:   256
void DelMis__Fii(int mi, int i) {
}


// address: 0x8007C840
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


// address: 0x8007C9BC
// line start: 283
// line end:   284
void SetCurrentPortal__Fi(int p) {
}


// address: 0x8007C9C8
// line start: 289
// line end:   315
void GetPortalLevel__Fv() {
}


// address: 0x8007CB6C
// line start: 321
// line end:   334
void GetPortalLvlPos__Fv() {
}


// address: 0x8007CC1C
// size: 0x160
// line start: 60
// line end:   63
struct CompLevelMaps *__13CompLevelMapsRC9CompClass(struct CompLevelMaps *this, struct CompClass *NewCompObj) {
}


// address: 0x8007CC88
// line start: 71
// line end:   72
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x8007CD18
// line start: 80
// line end:   83
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x8007CD48
// line start: 91
// line end:   93
void InitAllMaps__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8007CD9C
// size: 0xF1C
// line start: 101
// line end:   111
struct DLevel *GetMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x8007CE18
// line start: 119
// line end:   128
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Dl) {
}


// address: 0x8007CEB8
// line start: 136
// line end:   143
void CompressAll__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 17
		register int f;
		{
		}
	}
}


// address: 0x8007CF2C
// line start: 151
// line end:   167
void ImportData__13CompLevelMapsP14CompressedLevs(struct CompLevelMaps *this, struct CompressedLevs *Levs) {
	{
		// register: 18
		register int f;
		{
		}
	}
}


// address: 0x8007CFD8
// line start: 175
// line end:   190
int ExportData__13CompLevelMapsPUc(struct CompLevelMaps *this, unsigned char *U8Dest) {
	// register: 17
	register unsigned char *BinPtr;
	{
		// register: 19
		register int f;
	}
}


// address: 0x8007D084
// line start: 198
// line end:   218
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


// address: 0x8007D130
// line start: 228
// line end:   239
void Init__4AMap(struct AMap *this) {
	{
		{
		}
	}
}


// address: 0x8007D19C
// line start: 247
// line end:   256
int WriteCompressed__4AMapPUcRC9CompClass(struct AMap *this, unsigned char *Dest, struct CompClass *CompObj) {
	// register: 16
	register unsigned char *Data;
}


// address: 0x8007D210
// line start: 264
// line end:   284
void SetCompData__4AMapPCUci(struct AMap *this, unsigned char *Data, int NewSize) {
	// register: 17
	register long NewHnd;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007D300
// size: 0xF1C
// line start: 292
// line end:   330
struct DLevel *GetMap__4AMap(struct AMap *this) {
	// register: 16
	// size: 0xF1C
	register struct DLevel *NewCurrLevel;
	{
		{
			// register: 17
			register long NewHnd;
		}
	}
}


// address: 0x8007D420
// line start: 338
// line end:   352
void ReleaseMap__4AMapP6DLevel(struct AMap *this, struct DLevel *Dl) {
}


// address: 0x8007D4B0
// line start: 360
// line end:   404
void CompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj) {
	// register: 18
	register long NewHnd;
	// register: 17
	register unsigned char *Dest;
	// register: 17
	// size: 0xF1C
	register struct DLevel *Dlev;
	// register: 5
	register int NewMemSize;
	{
		{
		}
	}
}


// address: 0x8007D648
// line start: 412
// line end:   445
void DecompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj) {
	// register: 18
	register long NewHnd;
	// register: 16
	register unsigned char *Dest;
	// register: 16
	register unsigned char *Src;
}


// address: 0x8007D77C
// line start: 129
// line end:   129
void CheckMapNum__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x8007D7B0
// line start: 86
// line end:   86
bool IsCompressed__4AMap(struct AMap *this) {
}


// address: 0x8007D7BC
// line start: 80
// line end:   80
void ___4AMap(struct AMap *this, int __in_chrg) {
}


// address: 0x8007D804
// size: 0x10
// line start: 75
// line end:   77
struct AMap *__4AMap(struct AMap *this) {
}


// address: 0x8007D838
// line start: 73
// line end:   75
void GO_DoGameOver__Fv() {
}


// address: 0x8007D87C
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


// address: 0x8007D938
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


// address: 0x8007DA18
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc_addr_8007DA18(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8007DA38
// line start: 98
// line end:   98
void SetBack__6Dialogi_addr_8007DA38(struct Dialog *this, int Type) {
}


// address: 0x8007DA40
// line start: 95
// line end:   95
void SetBorder__6Dialogi_addr_8007DA40(struct Dialog *this, int Type) {
}


// address: 0x8007DA48
// line start: 78
// line end:   78
void ___6Dialog_addr_8007DA48(struct Dialog *this, int __in_chrg) {
}


// address: 0x8007DA70
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8007DA70(struct Dialog *this) {
}


// address: 0x8007DACC
// line start: 230
// line end:   236
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x8007DB10
// line start: 240
// line end:   241
char *VER_GetVerString__Fv() {
}


// address: 0x8007DB20
// line start: 284
// line end:   285
int CharPair2Num__FPc(char *Str) {
}


// address: 0x8007DB48
// line start: 52
// line end:   69
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x8001FCA4
// line start: 32
// line end:   33
void TICK_InitModule();

// address: 0x8001FCC4
// line start: 41
// line end:   42
void TICK_Set(unsigned long Val);

// address: 0x8001FCD4
// line start: 49
// line end:   50
unsigned long TICK_Get();

// address: 0x8001FCE4
// line start: 58
// line end:   59
void TICK_Update();

// address: 0x8001FD04
// line start: 66
// line end:   67
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001FD30
// line start: 71
// line end:   72
char *TICK_GetDateString();

// address: 0x8001FD40
// line start: 76
// line end:   77
char *TICK_GetTimeString();

// address: 0x8001FD50
// line start: 55
// line end:   57
unsigned char GU_InitModule();

// address: 0x8001FD7C
// line start: 65
// line end:   70
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001FDAC
// line start: 76
// line end:   95
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001FE3C
// line start: 103
// line end:   104
long GU_GetSRnd();

// address: 0x8001FE5C
// line start: 114
// line end:   115
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001FE98
// line start: 126
// line end:   128
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001FEBC
// line start: 31
// line end:   39
void main();

// address: 0x8001FF0C
// line start: 52
// line end:   53
unsigned long GTIMSYS_GetTimer();

// address: 0x8001FF30
// line start: 57
// line end:   58
void GTIMSYS_ResetTimer();

// address: 0x8001FF54
// line start: 63
// line end:   91
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x80020188
// line start: 88
// line end:   91
void DoEpi(struct TASK *T);

// address: 0x800201D8
// line start: 99
// line end:   102
void DoPro(struct TASK *T);

// address: 0x80020228
// line start: 115
// line end:   129
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x8002029C
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


// address: 0x80020484
// line start: 218
// line end:   277
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x80020644
// line start: 287
// line end:   313
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x80020720
// line start: 321
// line end:   330
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x800207A8
// line start: 338
// line end:   340
void TSK_Die();

// address: 0x800207D4
// line start: 350
// line end:   357
void TSK_Kill(struct TASK *T);

// address: 0x80020824
// size: 0x5C
// line start: 371
// line end:   372
struct TASK *TSK_GetFirstActive();

// address: 0x80020834
// line start: 385
// line end:   395
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x800208B0
// line start: 408
// line end:   418
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800208F8
// line start: 430
// line end:   440
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8002093C
// size: 0x5C
// line start: 454
// line end:   455
struct TASK *TSK_GetCurrentTask();

// address: 0x8002094C
// line start: 467
// line end:   468
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x80020964
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


// address: 0x800209BC
// line start: 512
// line end:   514
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x800209D4
// line start: 525
// line end:   526
void TSK_ClearExecFilter();

// address: 0x800209F8
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


// address: 0x80020AF8
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


// address: 0x80020B70
// line start: 619
// line end:   620
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x80020B84
// line start: 630
// line end:   631
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x80020B98
// line start: 642
// line end:   643
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x80020BAC
// line start: 653
// line end:   654
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x80020BC0
// line start: 665
// line end:   666
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x80020BD4
// line start: 677
// line end:   678
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x80020BE8
// line start: 689
// line end:   696
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x80020C34
// line start: 707
// line end:   713
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x80020C54
// line start: 722
// line end:   734
void LoTskKill(struct TASK *T) {
}


// address: 0x80020CC4
// line start: 744
// line end:   748
void ExecuteTask(struct TASK *T);

// address: 0x80020D14
// line start: 756
// line end:   762
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020D2C
// line start: 765
// line end:   771
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020D44
// line start: 775
// line end:   781
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020D5C
// line start: 784
// line end:   790
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020D74
// line start: 793
// line end:   795
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x80020D8C
// line start: 799
// line end:   802
void TSK_ClearEpiProFilter();

// address: 0x80020DC0
// line start: 810
// line end:   811
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x80020DD0
// line start: 819
// line end:   826
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x80020DE8
// line start: 833
// line end:   838
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x80020E10
// line start: 841
// line end:   845
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x80020E3C
// line start: 848
// line end:   857
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x80020E78
// size: 0x8
// line start: 74
// line end:   75
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x80020E88
// line start: 89
// line end:   91
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x80020EC4
// line start: 110
// line end:   115
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x80020ED4
// line start: 130
// line end:   135
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x80020EEC
// line start: 147
// line end:   151
unsigned char GSYS_InitMachine();

// address: 0x80020F40
// line start: 170
// line end:   184
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x80020F74
// line start: 195
// line end:   199
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x80020FF0
// line start: 174
// line end:   175
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x80021000
// line start: 194
// line end:   245
long GAL_SplitBlock(long CurBlock, unsigned long Size) {
	// register: 19
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR *SplitBlock;
}


// address: 0x8002113C
// line start: 253
// line end:   275
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x800211F4
// line start: 288
// line end:   358
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


// address: 0x80021314
// line start: 373
// line end:   450
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


// address: 0x800214AC
// line start: 464
// line end:   486
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
}


// address: 0x80021514
// line start: 499
// line end:   530
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
}


// address: 0x80021598
// line start: 542
// line end:   581
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x1C
	register struct MEM_HDR *MemHdr;
}


// address: 0x80021640
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
		// size: 0x1C
		register struct MEM_HDR *Block;
	}
}


// address: 0x800216B4
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
		// size: 0x1C
		register struct MEM_HDR *Block;
	}
}


// address: 0x80021728
// line start: 671
// line end:   697
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


// address: 0x800217A4
// line start: 709
// line end:   715
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x800217C4
// line start: 729
// line end:   736
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80021810
// line start: 751
// line end:   764
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x80021848
// line start: 778
// line end:   788
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x80021878
// line start: 801
// line end:   802
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x800218A8
// size: 0x1C
// line start: 816
// line end:   841
struct MEM_HDR *FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x1C
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x1C
	register struct MEM_HDR *Index;
}


// address: 0x80021900
// size: 0x1C
// line start: 853
// line end:   886
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


// address: 0x80021968
// size: 0x1C
// line start: 897
// line end:   932
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


// address: 0x800219D0
// size: 0x28
// line start: 944
// line end:   965
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x80021A0C
// line start: 978
// line end:   1031
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


// address: 0x80021AE0
// line start: 1053
// line end:   1083
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021BBC
// line start: 1107
// line end:   1194
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x80021D54
// size: 0x1C
// line start: 1210
// line end:   1237
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


// address: 0x80021DC0
// size: 0x1C
// line start: 1249
// line end:   1266
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *RetBlock;
}


// address: 0x80021E48
// line start: 1279
// line end:   1281
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x80021E88
// line start: 1293
// line end:   1313
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


// address: 0x80021F0C
// line start: 1323
// line end:   1343
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


// address: 0x80021FA8
// line start: 1354
// line end:   1358
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80022018
// line start: 1378
// line end:   1392
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x8002206C
// line start: 1406
// line end:   1422
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x800220C0
// line start: 1436
// line end:   1453
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80022144
// line start: 1466
// line end:   1471
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x800221A0
// line start: 1486
// line end:   1538
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


// address: 0x8002229C
// line start: 1553
// line end:   1578
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80022348
// line start: 1591
// line end:   1606
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x800223A0
// line start: 1618
// line end:   1620
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x800223D0
// size: 0x4
// line start: 1633
// line end:   1634
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x800223E0
// line start: 1645
// line end:   1646
char *GAL_GetLastErrorText();

// address: 0x80022408
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
		// size: 0x1C
		register struct MEM_HDR *mh;
	}
}


// address: 0x80022470
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
		// size: 0x1C
		register struct MEM_HDR *mh;
	}
}


// address: 0x800224D8
// line start: 1729
// line end:   1730
void GAL_SetTimeStamp(int Time);

// address: 0x800224E8
// line start: 1740
// line end:   1741
void GAL_IncTimeStamp();

// address: 0x80022508
// line start: 1750
// line end:   1751
int GAL_GetTimeStamp();

// address: 0x80022518
// line start: 1767
// line end:   1778
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80022568
// line start: 1798
// line end:   1803
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x800225B8
// line start: 1818
// line end:   1835
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x80022664
// line start: 1846
// line end:   1857
long GAL_GetSize(long hnd) {
}


// address: 0x800226C0
// line start: 1871
// line end:   1963
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


// address: 0x80022828
// line start: 1976
// line end:   2000
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


// address: 0x800228CC
// line start: 2013
// line end:   2019
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80022900
// line start: 2032
// line end:   2042
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x1C
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x8002296C
// line start: 2060
// line end:   2095
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


// address: 0x80022A64
// size: 0x1C
// line start: 2134
// line end:   2153
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x80022AA0
// line start: 2167
// line end:   2196
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x1C
	register struct MEM_HDR *ThisBlock;
}


// address: 0x80022B30
// line start: 2208
// line end:   2227
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


// address: 0x80022BAC
// line start: 2240
// line end:   2290
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


// address: 0x80022C60
// line start: 2301
// line end:   2324
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


// address: 0x80022CBC
// line start: 2335
// line end:   2340
void GAL_MemDump(unsigned long Type);

// address: 0x80022D30
// line start: 2354
// line end:   2355
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80022D40
// line start: 2368
// line end:   2382
int CountFreeBlocks() {
	// register: 3
	// size: 0x1C
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x80022D6C
// line start: 2394
// line end:   2406
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x80022DB4
// line start: 2415
// line end:   2416
int GAL_GetNumFreeHeaders();

// address: 0x80022DC4
// line start: 2420
// line end:   2421
unsigned long GAL_GetLastTypeAlloced();

// address: 0x80022DD4
// line start: 2431
// line end:   2438
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x80022DEC
// line start: 2447
// line end:   2459
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80022E40
// line start: 2462
// line end:   2463
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x80022E50
// line start: 2476
// line end:   2525
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


// address: 0x80022F40
// line start: 53
// line end:   60
unsigned char DBG_OpenModule();

// address: 0x80022F48
// line start: 72
// line end:   79
void DBG_PollHost();

// address: 0x80022F50
// line start: 88
// line end:   92
void DBG_Halt();

// address: 0x80022F58
// line start: 108
// line end:   126
void DBG_SendMessage(char *e);

// address: 0x80022F70
// line start: 135
// line end:   136
void DBG_SetMessageHandler(void (*Func)());

// address: 0x80022F80
// line start: 146
// line end:   160
void DBG_Error(char *Text, char *File, int Line);

// address: 0x80022FB4
// line start: 166
// line end:   167
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x80022FC4
// line start: 177
// line end:   181
void SendPsyqString(char *e);

// address: 0x80022FCC
// line start: 190
// line end:   191
void DBG_SetPollRoutine(void (*Func)());

// address: 0x800252A8
// line start: 157
// line end:   167
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x800252F4
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
	// address: 0x80025448
	bool rflag;
	// address: 0x800257B0
	bool nosign;
	// address: 0x8002585C
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


