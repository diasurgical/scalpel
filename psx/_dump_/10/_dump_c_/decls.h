#include "types.h"

// address: 0x801165B0
extern int NumOfMonsterListLevels;

// address: 0x800A3808
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x801162C0
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x801162C4
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x801162C8
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x801162D0
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x801162D4
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x801162D8
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x801162DC
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x801162E0
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x801162E4
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x801162E8
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x801162EC
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x801162F0
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x801162F4
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x801162F8
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x801162FC
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x80116300
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x80116304
// size: 0x4
static unsigned char NumsLEV4M4QB[4];

// address: 0x80116308
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x8011630C
// size: 0x4
static unsigned char NumsLEV4M4QC[4];

// address: 0x80116310
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x80116314
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x80116318
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x8011631C
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x80116320
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x80116324
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x80116328
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x8011632C
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x80116330
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x80116338
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x8011633C
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x80116340
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x80116344
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x80116348
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x8011634C
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x80116350
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x80116354
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x80116358
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x8011635C
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x80116360
// size: 0x3
static unsigned char NumsLEV8M8A[3];

// address: 0x80116364
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x80116368
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8011636C
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x80116370
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x80116374
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x80116378
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x8011637C
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x80116380
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x80116384
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x80116388
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x8011638C
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x80116390
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x80116394
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x80116398
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x8011639C
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x801163A0
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x801163A4
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x801163A8
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x801163AC
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x801163B0
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x801163B4
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x801163B8
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x801163BC
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x801163C0
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x801163C4
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x801163C8
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x801163CC
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x801163D0
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x801163D4
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x801163D8
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x801163DC
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x801163E0
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x801163E4
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x801163E8
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x801163EC
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x801163F0
// size: 0x1
static unsigned char NumsLEV16M16D[1];

// address: 0x800A3358
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A3388
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A33E8
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A3428
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A3498
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A3508
// size: 0x50
static struct MonstList ChoiceListLEV6[5];

// address: 0x800A3558
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A35A8
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A3608
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A3648
// size: 0x40
static struct MonstList ChoiceListLEV10[4];

// address: 0x800A3688
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A36D8
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A3718
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A3768
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A37C8
// size: 0x30
static struct MonstList ChoiceListLEV15[3];

// address: 0x800A37F8
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x80117B48
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x801165C0
extern int time_in_frames;

// address: 0x800A3888
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x801165C4
extern int ArgsSoFar;

// address: 0x801165C8
extern unsigned long *ThisOt;

// address: 0x801165CC
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x80117B4C
static long hndPrimBuffers;

// address: 0x80117B50
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x80117B54
static unsigned char BufferDepth;

// address: 0x80117B55
static unsigned char WorkRamId;

// address: 0x80117B56
static unsigned char ScrNum;

// address: 0x80117B58
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x80117B5C
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x80117B60
static unsigned char BufferNum;

// address: 0x801165D0
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x80117B61
static unsigned char LastBuffer;

// address: 0x80117B64
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x80117B68
static int ThisOtSize;

// address: 0x801165D4
// size: 0x8
static struct RECT ScrRect;

// address: 0x80117B6C
static int VidWait;

// address: 0x80117FF8
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x80117B70
static void (*VbFunc)();

// address: 0x80117B74
static unsigned long VidTick;

// address: 0x80117B78
static int VXOff;

// address: 0x80117B7C
static int VYOff;

// address: 0x801165E8
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x801165EC
extern int LastFmem;

// address: 0x801165DC
extern unsigned int GSYS_MemStart;

// address: 0x801165E0
extern unsigned int GSYS_MemEnd;

// address: 0x800A3BD0
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A3BF8
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x801165E4
extern int LowestFmem;

// address: 0x801165FC
extern int FileSYS;

// address: 0x80117B80
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x80117B84
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x80116616
extern short DavesPad;

// address: 0x80116618
extern short DavesPadDeb;

// address: 0x800A3C20
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x801180D8
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A44C4
// size: 0x470
extern struct TextDat *AllDats[284];

// address: 0x80116668
extern int TpW;

// address: 0x8011666C
extern int TpH;

// address: 0x80116670
extern int TpXDest;

// address: 0x80116674
extern int TpYDest;

// address: 0x80116678
// size: 0x8
extern struct RECT R;

// address: 0x800A4934
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800A4968
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A3C54
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x8011668C
static bool ChunkGot;

// address: 0x800A4990
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800A49A0
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A49B0
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x801166A0
extern unsigned long BL_NoLumpFiles;

// address: 0x801166A4
extern unsigned long BL_NoStreamFiles;

// address: 0x801166A8
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x801166AC
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x801166B0
extern unsigned char FileLoaded;

// address: 0x801166E0
extern int NoTAllocs;

// address: 0x800A4ADC
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x80117B90
static bool CanPause;

// address: 0x80117B94
static bool Paused;

// address: 0x80117B98
// size: 0x8
static struct RECT PRect;

// address: 0x80118100
// size: 0x10
static struct Dialog PBack;

// address: 0x800A4D44
// size: 0x22
extern char RawPadData0[34];

// address: 0x800A4D68
// size: 0x22
extern char RawPadData1[34];

// address: 0x800A4D8C
// size: 0x708
extern unsigned char demo_buffer[1800];

// address: 0x8011670C
extern int demo_pad_time;

// address: 0x80116710
extern int demo_pad_count;

// address: 0x800A4C6C
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800A4CD8
// size: 0x6C
extern struct CPad Pad1;

// address: 0x80116714
extern unsigned long demo_finish;

// address: 0x80116718
extern int cac_pad;

// address: 0x80116734
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x80116738
extern int CharFrm;

// address: 0x80116725
extern unsigned char WHITER;

// address: 0x80116726
extern unsigned char WHITEG;

// address: 0x80116727
extern unsigned char WHITEB;

// address: 0x80116728
extern unsigned char BLUER;

// address: 0x80116729
extern unsigned char BLUEG;

// address: 0x8011672A
extern unsigned char BLUEB;

// address: 0x8011672B
extern unsigned char REDR;

// address: 0x8011672C
extern unsigned char REDG;

// address: 0x8011672D
extern unsigned char REDB;

// address: 0x8011672E
extern unsigned char GOLDR;

// address: 0x8011672F
extern unsigned char GOLDG;

// address: 0x80116730
extern unsigned char GOLDB;

// address: 0x800A5494
// size: 0x218
extern struct CFont MediumFont;

// address: 0x800A56AC
// size: 0x218
extern struct CFont LargeFont;

// address: 0x800A58C4
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800A5978
// size: 0x10
extern struct FontTab LFont;

// address: 0x800A5988
// size: 0x12E
extern struct FontItem MFontTab[151];

// address: 0x800A5AB8
// size: 0x10
extern struct FontTab MFont;

// address: 0x8011674D
extern unsigned char DialogRed;

// address: 0x8011674E
extern unsigned char DialogGreen;

// address: 0x8011674F
extern unsigned char DialogBlue;

// address: 0x80116750
extern unsigned char DialogTRed;

// address: 0x80116751
extern unsigned char DialogTGreen;

// address: 0x80116752
extern unsigned char DialogTBlue;

// address: 0x80116754
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x80116758
extern int DialogBackGfx;

// address: 0x8011675C
extern int DialogBackW;

// address: 0x80116760
extern int DialogBackH;

// address: 0x80116764
extern int DialogBorderGfx;

// address: 0x80116768
extern int DialogBorderTLW;

// address: 0x8011676C
extern int DialogBorderTLH;

// address: 0x80116770
extern int DialogBorderTRW;

// address: 0x80116774
extern int DialogBorderTRH;

// address: 0x80116778
extern int DialogBorderBLW;

// address: 0x8011677C
extern int DialogBorderBLH;

// address: 0x80116780
extern int DialogBorderBRW;

// address: 0x80116784
extern int DialogBorderBRH;

// address: 0x80116788
extern int DialogBorderTW;

// address: 0x8011678C
extern int DialogBorderTH;

// address: 0x80116790
extern int DialogBorderBW;

// address: 0x80116794
extern int DialogBorderBH;

// address: 0x80116798
extern int DialogBorderLW;

// address: 0x8011679C
extern int DialogBorderLH;

// address: 0x801167A0
extern int DialogBorderRW;

// address: 0x801167A4
extern int DialogBorderRH;

// address: 0x801167A8
extern int DialogBevelGfx;

// address: 0x801167AC
extern int DialogBevelCW;

// address: 0x801167B0
extern int DialogBevelCH;

// address: 0x801167B4
extern int DialogBevelLRW;

// address: 0x801167B8
extern int DialogBevelLRH;

// address: 0x801167BC
extern int DialogBevelUDW;

// address: 0x801167C0
extern int DialogBevelUDH;

// address: 0x801167C4
extern int MY_DialogOTpos;

// address: 0x80117BA0
static unsigned char DialogGBack;

// address: 0x80117BA1
static char GShadeX;

// address: 0x80117BA2
static char GShadeY;

// address: 0x80117BA8
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800A5B08
// size: 0x70
extern int Cxy[28];

// address: 0x80116747
extern unsigned char BORDERR;

// address: 0x80116748
extern unsigned char BORDERG;

// address: 0x80116749
extern unsigned char BORDERB;

// address: 0x8011674A
extern unsigned char BACKR;

// address: 0x8011674B
extern unsigned char BACKG;

// address: 0x8011674C
extern unsigned char BACKB;

// address: 0x800A5AC8
// size: 0x40
static char GShadeTab[64];

// address: 0x80116745
static char GShadePX;

// address: 0x80116746
static char GShadePY;

// address: 0x801167D1
extern unsigned char PlayDemoFlag;

// address: 0x80118110
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x80118140
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x80117BB0
static int blockr;

// address: 0x80117BB4
static int blockg;

// address: 0x80117BB8
static int blockb;

// address: 0x80117BBC
static int InfraFlag;

// address: 0x801167DD
extern unsigned char P1ObjSelCount;

// address: 0x801167DE
extern unsigned char P2ObjSelCount;

// address: 0x801167DF
extern unsigned char P12ObjSelCount;

// address: 0x801167E0
extern unsigned char P1ItemSelCount;

// address: 0x801167E1
extern unsigned char P2ItemSelCount;

// address: 0x801167E2
extern unsigned char P12ItemSelCount;

// address: 0x801167E3
extern unsigned char P1MonstSelCount;

// address: 0x801167E4
extern unsigned char P2MonstSelCount;

// address: 0x801167E5
extern unsigned char P12MonstSelCount;

// address: 0x801167E6
static unsigned short P1ObjSelCol;

// address: 0x801167E8
static unsigned short P2ObjSelCol;

// address: 0x801167EA
static unsigned short P12ObjSelCol;

// address: 0x801167EC
static unsigned short P1ItemSelCol;

// address: 0x801167EE
static unsigned short P2ItemSelCol;

// address: 0x801167F0
static unsigned short P12ItemSelCol;

// address: 0x801167F2
static unsigned short P1MonstSelCol;

// address: 0x801167F4
static unsigned short P2MonstSelCol;

// address: 0x801167F6
static unsigned short P12MonstSelCol;

// address: 0x801167F8
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x8010C704
// size: 0x40
static short SinTab[32];

// address: 0x800A5B78
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x80116814
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x8010C790
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x80118170
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x80118180
// size: 0x10
static struct Overlay PregameOver;

// address: 0x80118190
// size: 0x10
static struct Overlay GameOver;

// address: 0x801181A0
// size: 0x10
static struct Overlay FmvOver;

// address: 0x80117BC0
static int OWorldX;

// address: 0x80117BC4
static int OWorldY;

// address: 0x80117BC8
static int WWorldX;

// address: 0x80117BCC
static int WWorldY;

// address: 0x8010C80C
// size: 0x20
static short TxyAdd[16];

// address: 0x80116838
extern int GXAdj2;

// address: 0x80117BD0
static int TimePerFrame;

// address: 0x80117BD4
static int CpuStart;

// address: 0x80117BD8
static int CpuTime;

// address: 0x80117BDC
static int DrawTime;

// address: 0x80117BE0
static int DrawStart;

// address: 0x80117BE4
static int LastCpuTime;

// address: 0x80117BE8
static int LastDrawTime;

// address: 0x80117BEC
static int DrawArea;

// address: 0x80116840
extern bool ProfOn;

// address: 0x800A5B8C
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x8010C950
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800A5BA0
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800A5BF4
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800A5C48
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800A5C9C
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800A5CF0
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x80116868
extern int hof;

// address: 0x8011686C
extern int mof;

// address: 0x800A5DB8
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x801168A0
extern unsigned long Time;

// address: 0x800A5EB8
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x8011687C
extern unsigned long *STR_Buffer;

// address: 0x80116880
extern char NoActiveStreams;

// address: 0x80116884
static bool STRInit;

// address: 0x801168C4
extern char SFXNotPlayed;

// address: 0x801168C5
extern char SFXNotInBank;

// address: 0x801181B0
// size: 0x108
static char spu_management[264];

// address: 0x801182C0
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x80117BF4
static unsigned short NoSfx;

// address: 0x801168B0
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x801168B4
static long OffsetHandle;

// address: 0x801168B8
static int BankBase;

// address: 0x801168BC
static unsigned char SPU_Done;

// address: 0x8010CD14
// size: 0xB0
static int SFXRemapTab[44];

// address: 0x801168C0
static int NoSNDRemaps;

// address: 0x800A5EF8
// size: 0x18C
extern struct PalCollection ThePals;

// address: 0x8010CDF8
// size: 0x40
static struct InitPos InitialPositions[16];

// address: 0x8011690C
extern int demo_level;

// address: 0x80116910
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x80116914
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x80116918
// size: 0x5C
extern struct TASK *tonys;

// address: 0x801168F0
extern int demo_load;

// address: 0x801168F4
extern int demo_record_load;

// address: 0x801168F8
extern int level_record;

// address: 0x801168EC
extern int moo_moo;

// address: 0x801168FC
extern unsigned char demo_flash;

// address: 0x80116900
extern int tonys_Task;

// address: 0x80116A74
extern bool DoShowPanel;

// address: 0x80116A78
extern bool DoDrawBg;

// address: 0x80117BF8
static bool GlueFinished;

// address: 0x80117BFC
static bool DoHomingScroll;

// address: 0x80117C00
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x80117C04
static int CurrentMonsterList;

// address: 0x80116925
extern char started_grtask;

// address: 0x800A6084
// size: 0x288
extern struct PInf PlayerInfo[81];

// address: 0x80116A7C
// size: 0x4
static char ArmourChar[4];

// address: 0x8010CEDC
// size: 0xA
static char WepChar[10];

// address: 0x80116A80
// size: 0x4
static char CharChar[4];

// address: 0x80117C08
static char ctrl_select_line;

// address: 0x80117C09
static char ctrl_select_side;

// address: 0x80117C0A
static char ckeyheld;

// address: 0x80117C0C
static int old_options_pad;

// address: 0x80117C10
// size: 0x8
static struct RECT CtrlRect;

// address: 0x80116A94
extern unsigned char ctrlflag;

// address: 0x800A63B4
// size: 0x140
extern struct KEY_ASSIGNS txt_actions[20];

// address: 0x800A630C
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x80116A90
extern int CtrlBorder;

// address: 0x801182D8
// size: 0x78
static struct CScreen CtrlScreen;

// address: 0x80118358
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800A64F4
// size: 0xA0
static int controller_defaults[2][20];

// address: 0x80116AF8
extern int gr_scrxoff;

// address: 0x80116AFC
extern int gr_scryoff;

// address: 0x80116B04
extern unsigned short water_clut;

// address: 0x80116B08
extern char visible_level;

// address: 0x80116AF5
extern char last_type;

// address: 0x80116B0A
extern char daylight;

// address: 0x80116B06
extern char cow_in_sight;

// address: 0x80116B07
extern char inn_in_sight;

// address: 0x80116B00
extern unsigned int water_count;

// address: 0x80116B09
extern unsigned char lastrnd;

// address: 0x80116B0C
static int call_clock;

// address: 0x80116B1C
extern int TitleAnimCount;

// address: 0x8010CFA4
// size: 0x37
static unsigned char light_tile[55];

// address: 0x80116B80
extern int p1scrnx;

// address: 0x80116B84
extern int p1scrny;

// address: 0x80116B88
extern int p1wrldx;

// address: 0x80116B8C
extern int p1wrldy;

// address: 0x80116B90
extern int p2scrnx;

// address: 0x80116B94
extern int p2scrny;

// address: 0x80116B98
extern int p2wrldx;

// address: 0x80116B9C
extern int p2wrldy;

// address: 0x80117C18
static int p1spiny1;

// address: 0x80117C1C
static int p1spiny2;

// address: 0x80117C20
static int p1scale;

// address: 0x80117C24
static int p1apocaflag;

// address: 0x80117C28
static int p1apocaxpos;

// address: 0x80117C2C
static int p1apocaypos;

// address: 0x80117C30
static int p2spiny1;

// address: 0x80117C34
static int p2spiny2;

// address: 0x80117C38
static int p2scale;

// address: 0x80117C3C
static int p2apocaflag;

// address: 0x80117C40
static int p2apocaxpos;

// address: 0x80117C44
static int p2apocaypos;

// address: 0x80118368
// size: 0x240
static struct Particle PartArray[16];

// address: 0x80117C48
static int partOtPos;

// address: 0x80116B38
extern int p1teleflag;

// address: 0x80116B3C
extern int p1phaseflag;

// address: 0x80116B40
extern int p1inviscount;

// address: 0x80116B44
extern int p2teleflag;

// address: 0x80116B48
extern int p2phaseflag;

// address: 0x80116B4C
extern int p2inviscount;

// address: 0x80116B50
extern int SetParticle;

// address: 0x80116B54
static int p1partexecnum;

// address: 0x80116B58
static int p2partexecnum;

// address: 0x800A6594
// size: 0x20
static int JumpArray[8];

// address: 0x80116B5C
static int partjumpflag;

// address: 0x80116B60
static int partglowflag;

// address: 0x80116B64
static int partcolour;

// address: 0x80116B68
static int healflag;

// address: 0x80116B6C
static int healtime;

// address: 0x80116B70
static int healplyr;

// address: 0x800A65B4
// size: 0x38
extern struct Spell_Target SplTarget[2];

// address: 0x80116BB9
extern unsigned char select_flag;

// address: 0x80117C4C
// size: 0x8
static struct RECT SelectRect;

// address: 0x80117C54
static char item_select;

// address: 0x80116BBC
// size: 0x2
extern char QSpell[2];

// address: 0x80116BC0
// size: 0x2
extern char _spltotype[2];

// address: 0x80116BAC
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x801185A8
// size: 0x10
static struct Dialog SelectBack;

// address: 0x80116BB0
// size: 0x4
extern char mana_order[4];

// address: 0x80116BB4
// size: 0x4
extern char health_order[4];

// address: 0x80116BB8
extern unsigned char birdcheck;

// address: 0x801185B8
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x80117C58
static unsigned short progress;

// address: 0x8010D0A0
// size: 0x28
static unsigned short Level2CutScreen[20];

// address: 0x80116BDC
static char *CutString;

// address: 0x801185E0
// size: 0x78
static struct CScreen Scr;

// address: 0x80116BE0
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x80116BE4
static bool GameLoading;

// address: 0x80118660
// size: 0x10
static struct Dialog LBack;

// address: 0x80116BF4
extern unsigned int card_ev0;

// address: 0x80116BF8
extern unsigned int card_ev1;

// address: 0x80116BFC
extern unsigned int card_ev2;

// address: 0x80116C00
extern unsigned int card_ev3;

// address: 0x80116C04
extern unsigned int card_ev10;

// address: 0x80116C08
extern unsigned int card_ev11;

// address: 0x80116C0C
extern unsigned int card_ev12;

// address: 0x80116C10
extern unsigned int card_ev13;

// address: 0x80116C14
// size: 0x8
extern int card_dirty[2];

// address: 0x80116C1C
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x80116C20
extern int card_event;

// address: 0x80116BF0
extern void (*mem_card_event_handler)();

// address: 0x80116BE8
extern bool MemCardActive;

// address: 0x80116BEC
extern int never_hooked_events;

// address: 0x80117C5C
static unsigned long MasterVol;

// address: 0x80117C60
static unsigned long MusicVol;

// address: 0x80117C64
static unsigned long SoundVol;

// address: 0x80117C68
static unsigned long VideoVol;

// address: 0x80117C6C
static unsigned long SpeechVol;

// address: 0x80117C70
// size: 0x6C
static struct TextDat *Slider;

// address: 0x80117C74
static int sw;

// address: 0x80117C78
static int sx;

// address: 0x80117C7C
static int sy;

// address: 0x80117C80
static unsigned char Adjust;

// address: 0x80117C81
static unsigned char qspin;

// address: 0x80117C82
static unsigned char lqspin;

// address: 0x80117C84
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x80117C88
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x80117C8C
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x80116CCC
extern int ReturnMenu;

// address: 0x80117C94
// size: 0x8
static struct RECT ORect;

// address: 0x80116C48
extern bool optionsflag;

// address: 0x80116C3C
extern int cmenu;

// address: 0x80116C50
extern int options_pad;

// address: 0x80116C54
extern char *PrevTxt;

// address: 0x80116C44
extern bool allspellsflag;

// address: 0x800A6DD8
// size: 0x80
extern short Circle[64];

// address: 0x80116C30
static int Spacing;

// address: 0x80116C34
static int cs;

// address: 0x80116C38
static int lastcs;

// address: 0x80116C40
static bool MemcardOverlay;

// address: 0x80116C4C
extern int saveflag;

// address: 0x80117C9C
// size: 0x8
static char *McState[2];

// address: 0x80116C58
extern char *BlankEntry;

// address: 0x800A65EC
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800A6694
// size: 0xD8
extern struct OMENUITEM GameMenu[9];

// address: 0x800A676C
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800A67FC
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800A68A4
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800A694C
// size: 0x60
extern struct OMENUITEM MemcardMenu[4];

// address: 0x800A69AC
// size: 0x90
extern struct OMENUITEM MemcardGameMenu[6];

// address: 0x800A6A3C
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800A6A9C
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800A6B44
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800A6BEC
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800A6C4C
// size: 0xC0
extern struct OMENUITEM CheatMenu[8];

// address: 0x800A6D0C
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800A6D3C
// size: 0x9C
extern struct OMENULIST MenuList[13];

// address: 0x80116CB0
static bool debounce;

// address: 0x80116CB4
static bool pu;

// address: 0x80116CB8
static bool pd;

// address: 0x80116CBC
static bool pl;

// address: 0x80116CC0
static bool pr;

// address: 0x80116CC4
static unsigned char uc;

// address: 0x80116CC5
static unsigned char dc;

// address: 0x80116CC6
static unsigned char lc;

// address: 0x80116CC7
static unsigned char rc;

// address: 0x80116CC8
static char centrestep;

// address: 0x800A6E58
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x80116CD9
extern char hop_height;

// address: 0x80116CDC
// size: 0x8
static struct Perch perches[4];

// address: 0x800A6FD8
// size: 0xE0
extern struct StrInfo FmvTab[7];

// address: 0x80116D18
extern int FeBackX;

// address: 0x80116D1C
extern int FeBackY;

// address: 0x80116D20
extern int FeBackW;

// address: 0x80116D24
extern int FeBackH;

// address: 0x80116D28
extern unsigned char FeFlag;

// address: 0x800A7858
// size: 0x3C0
extern struct FeStruct FeBuffer[40];

// address: 0x80117CA4
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x80116D2C
extern int FeBufferCount;

// address: 0x80116D30
extern int FeNoOfPlayers;

// address: 0x80116D34
extern int FePlayerNo;

// address: 0x80116D38
// size: 0x8
extern int FeChrClass[2];

// address: 0x800A7C18
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x80116D40
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x80116D44
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x80116D48
extern unsigned long FeCount;

// address: 0x80116D4C
extern int fileselect;

// address: 0x80116D50
extern int BookMenu;

// address: 0x80116D54
extern int FeAttractMode;

// address: 0x80116D58
extern int FMVPress;

// address: 0x80116CF0
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x80116CF4
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x80116CF8
extern unsigned char FeIsAVirgin;

// address: 0x80116CFC
extern int FeMenuDelay;

// address: 0x800A70B8
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800A70D4
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800A70F0
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800A710C
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800A7128
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800A7144
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800A7160
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800A717C
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800A7198
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800A71B4
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800A71D0
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800A71EC
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800A7208
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800A7224
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x80116D00
extern char *LoadErrorText;

// address: 0x800A7240
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800A72B8
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800A7300
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800A7378
// size: 0x2E8
extern struct FeMenuTable FeNameEngMenuTable[31];

// address: 0x800A7660
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800A76A8
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800A7708
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800A7768
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800A77E0
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x80116D0C
extern unsigned long AttractTitleDelay;

// address: 0x80116D10
extern unsigned long AttractMainDelay;

// address: 0x80116D14
extern int FMVEndPad;

// address: 0x80116D8C
extern int InCredits;

// address: 0x80116D90
extern int CreditTitleNo;

// address: 0x80116D94
extern int CreditSubTitleNo;

// address: 0x80116DA8
// size: 0x8
extern int card_status[2];

// address: 0x80116DB0
// size: 0x8
extern int card_usable[2];

// address: 0x80116DB8
// size: 0x8
extern int card_files[2];

// address: 0x80116DC0
// size: 0x8
extern int card_changed[2];

// address: 0x80116E38
extern char *AlertTxt;

// address: 0x80116E3C
extern int current_card;

// address: 0x80116E40
extern int LoadType;

// address: 0x80116E44
extern int McMenuPos;

// address: 0x80116E48
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x80116DF4
extern char *OText3;

// address: 0x80116E34
extern bool fileinfoflag;

// address: 0x80116E10
extern char *DiabloGameFile;

// address: 0x80116DD8
extern char *Text3;

// address: 0x80116DF0
extern char *OText2;

// address: 0x80116DF8
extern char *OText4;

// address: 0x80116DFC
extern char *OText5;

// address: 0x80116E00
extern char *OText7;

// address: 0x80116E04
extern char *OText8;

// address: 0x80116E08
extern char *SaveError;

// address: 0x80116DD4
extern char *Text1;

// address: 0x80116DDC
extern char *Text5;

// address: 0x80116DE0
extern char *Text6;

// address: 0x80116DE4
extern char *Text7;

// address: 0x80116DE8
extern char *Text8;

// address: 0x80116DEC
extern char *Text9;

// address: 0x80116E0C
extern char *ContText;

// address: 0x80116E2C
// size: 0x8
extern char *McState_addr_80116E2C[2];

// address: 0x80117CA8
static int t1;

// address: 0x80117CAC
static int t2;

// address: 0x80118670
// size: 0xB8
static struct DRAWENV draw[2];

// address: 0x80118730
// size: 0x74
static struct DecEnv dec;

// address: 0x80117CB0
static unsigned long oldHeapbase;

// address: 0x80117CB4
// size: 0x4
static struct SndVolume oldVolume;

// address: 0x80117CB8
static char *ringName;

// address: 0x80116E78
// size: 0x14
extern struct STRHDR *ringSH;

// address: 0x80116E7C
// size: 0x98
extern struct cdstreamstruct *FMVStream;

// address: 0x80117CBC
static unsigned short *DCTTab;

// address: 0x80116E56
static short firstFrame;

// address: 0x80116E58
static short numSkipped;

// address: 0x80116E5A
static short prevFrameNum;

// address: 0x80116E5C
static unsigned short maxRunLevel;

// address: 0x80116E60
static unsigned long *ringBuf;

// address: 0x80116E64
static int ringcount;

// address: 0x80116E68
static int ringpos;

// address: 0x80116E6C
static int ringsec;

// address: 0x80116E70
static int ringHnd;

// address: 0x80116E74
static bool SecGot;

// address: 0x80116F1C
extern unsigned char *pStatusPanel;

// address: 0x80116F20
extern unsigned char *pGBoxBuff;

// address: 0x80116F24
extern unsigned char dropGoldFlag;

// address: 0x80116F28
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800A8210
// size: 0x200
extern char _infostr[256][2];

// address: 0x80116F2C
// size: 0x2
extern char _infoclr[2];

// address: 0x800A8410
// size: 0x100
extern char tempstr[256];

// address: 0x80116F2E
extern unsigned char drawhpflag;

// address: 0x80116F2F
extern unsigned char drawmanaflag;

// address: 0x80116F30
extern unsigned char chrflag;

// address: 0x80116F31
extern unsigned char drawbtnflag;

// address: 0x80116F32
extern unsigned char panbtndown;

// address: 0x80116F33
extern unsigned char panelflag;

// address: 0x80116F34
extern unsigned char chrbtndown;

// address: 0x80116F35
extern unsigned char lvlbtndown;

// address: 0x80116F36
extern unsigned char sbookflag;

// address: 0x80116F37
extern unsigned char talkflag;

// address: 0x80116F38
extern int dropGoldValue;

// address: 0x80116F3C
extern int initialDropGoldValue;

// address: 0x80116F40
extern int initialDropGoldIndex;

// address: 0x80116F44
extern unsigned char *pPanelButtons;

// address: 0x80116F48
extern unsigned char *pPanelText;

// address: 0x80116F4C
extern unsigned char *pManaBuff;

// address: 0x80116F50
extern unsigned char *pLifeBuff;

// address: 0x80116F54
extern unsigned char *pChrPanel;

// address: 0x80116F58
extern unsigned char *pChrButtons;

// address: 0x80116F5C
extern unsigned char *pSpellCels;

// address: 0x801187A8
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x80118BA8
// size: 0x40
static int _pstrjust[8][2];

// address: 0x80117CC0
// size: 0x8
static int _pnumlines[2];

// address: 0x80116F60
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x80116F64
// size: 0x8
extern struct RECT CSRect;

// address: 0x80117CD0
// size: 0x8
static int _pSpell[2];

// address: 0x80117CD8
// size: 0x8
static int _pSplType[2];

// address: 0x80117CE0
// size: 0x8
static unsigned char panbtn[8];

// address: 0x80116F6C
extern int numpanbtns;

// address: 0x80116F70
extern unsigned char *pDurIcons;

// address: 0x80116F74
extern unsigned char drawdurflag;

// address: 0x80117CE8
// size: 0x4
static unsigned char chrbtn[4];

// address: 0x80116F75
extern unsigned char chrbtnactive;

// address: 0x80116F78
extern unsigned char *pSpellBkCel;

// address: 0x80116F7C
extern unsigned char *pSBkBtnCel;

// address: 0x80116F80
extern unsigned char *pSBkIconCels;

// address: 0x80116F84
extern int sbooktab;

// address: 0x80116F88
extern int cur_spel;

// address: 0x80117CEC
static long talkofs;

// address: 0x80118BF8
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x80117CF0
static unsigned char sgbTalkSavePos;

// address: 0x80117CF1
static unsigned char sgbNextTalkSave;

// address: 0x80117CF2
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x80117CF4
static unsigned char *pTalkPanel;

// address: 0x80117CF8
static unsigned char *pMultiBtns;

// address: 0x80117CFC
static unsigned char *pTalkBtns;

// address: 0x80117D00
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x8010D6F4
// size: 0x100
extern unsigned char gbFontTransTbl[256];

// address: 0x8010D634
// size: 0x44
extern unsigned char fontkern[68];

// address: 0x800A7C44
// size: 0x25
extern char SpellITbl[37];

// address: 0x80116E89
extern unsigned char DrawLevelUpFlag;

// address: 0x80116EB0
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x80116EAC
extern unsigned char spspelstate;

// address: 0x80116EEC
extern bool initchr;

// address: 0x80116E8C
static int SPLICONNO;

// address: 0x80116E90
static int SPLICONY;

// address: 0x80117CC8
static int SPLICONRIGHT;

// address: 0x80116E94
static int scx;

// address: 0x80116E98
static int scy;

// address: 0x80116E9C
static int scx1;

// address: 0x80116EA0
static int scy1;

// address: 0x80116EA4
static int scx2;

// address: 0x80116EA8
static int scy2;

// address: 0x80116EB8
extern char SpellCol;

// address: 0x800A7C30
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800A7C6C
// size: 0xA0
extern int PanBtnPos[5][8];

// address: 0x800A7D0C
// size: 0x20
extern char *PanBtnHotKey[8];

// address: 0x800A7D2C
// size: 0x20
extern unsigned long PanBtnStr[8];

// address: 0x800A7D4C
// size: 0x64
extern int SpellPages[5][5];

// address: 0x80116EDC
static int lus;

// address: 0x80116EE0
static int CsNo;

// address: 0x80116EE4
static char plusanim;

// address: 0x80118BE8
// size: 0x10
static struct Dialog CSBack;

// address: 0x80116EE8
static int CS_XOFF;

// address: 0x800A7DB0
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x80116EF0
extern int NoCSEntries;

// address: 0x80116EF4
static int SPALOFF;

// address: 0x80116EF8
static int paloffset1;

// address: 0x80116EFC
static int paloffset2;

// address: 0x80116F00
static int paloffset3;

// address: 0x80116F04
static int paloffset4;

// address: 0x80116F08
static int pinc1;

// address: 0x80116F0C
static int pinc2;

// address: 0x80116F10
static int pinc3;

// address: 0x80116F14
static int pinc4;

// address: 0x80116F9C
// size: 0x8
extern int _pcurs[2];

// address: 0x80116FA4
extern int cursW;

// address: 0x80116FA8
extern int cursH;

// address: 0x80116FAC
extern int icursW;

// address: 0x80116FB0
extern int icursH;

// address: 0x80116FB4
extern int icursW28;

// address: 0x80116FB8
extern int icursH28;

// address: 0x80116FBC
extern int cursmx;

// address: 0x80116FC0
extern int cursmy;

// address: 0x80116FC4
// size: 0x8
extern int _pcursmonst[2];

// address: 0x80116FCC
// size: 0x2
extern char _pcursobj[2];

// address: 0x80116FD0
// size: 0x2
extern char _pcursitem[2];

// address: 0x80116FD4
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x80116FD8
// size: 0x2
extern char _pcursplr[2];

// address: 0x80116F98
extern int sel_data;

// address: 0x800A8510
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x80116FDC
extern int spurtndx;

// address: 0x80116FE0
extern int stonendx;

// address: 0x80116FE4
extern unsigned char *pSquareCel;

// address: 0x80117024
extern unsigned long ghInst;

// address: 0x80117028
extern unsigned char svgamode;

// address: 0x8011702C
extern int MouseX;

// address: 0x80117030
extern int MouseY;

// address: 0x80117034
extern long gv1;

// address: 0x80117038
extern long gv2;

// address: 0x8011703C
extern long gv3;

// address: 0x80117040
extern long gv4;

// address: 0x80117044
extern long gv5;

// address: 0x80117048
extern unsigned char gbProcessPlayers;

// address: 0x800A8684
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800A86AC
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800A86F0
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x80117049
extern unsigned char gbDoEnding;

// address: 0x8011704A
extern unsigned char gbRunGame;

// address: 0x8011704B
extern unsigned char gbRunGameResult;

// address: 0x8011704C
extern unsigned char gbGameLoopStartup;

// address: 0x80118C48
// size: 0x44
static int glEndSeed[17];

// address: 0x80118C98
// size: 0x44
static int glMid1Seed[17];

// address: 0x80118CE8
// size: 0x44
static int glMid2Seed[17];

// address: 0x80118D38
// size: 0x44
static int glMid3Seed[17];

// address: 0x80117D04
static long *sg_previousFilter;

// address: 0x800A8734
// size: 0x30
extern int CreateEnv[12];

// address: 0x80117050
extern int Passedlvldir;

// address: 0x80117054
extern unsigned char *TempStack;

// address: 0x80116FF4
extern unsigned long ghMainWnd;

// address: 0x80116FF8
extern unsigned char fullscreen;

// address: 0x80116FFC
extern int force_redraw;

// address: 0x80117010
extern unsigned char PauseMode;

// address: 0x80117011
extern unsigned char FriendlyMode;

// address: 0x80117001
extern unsigned char visiondebug;

// address: 0x80117003
extern unsigned char light4flag;

// address: 0x80117004
extern unsigned char leveldebug;

// address: 0x80117005
extern unsigned char monstdebug;

// address: 0x8011700C
extern int debugmonsttypes;

// address: 0x80117000
static unsigned char cineflag;

// address: 0x80117002
extern unsigned char scrollflag;

// address: 0x80117006
extern unsigned char trigdebug;

// address: 0x80117008
extern int setseed;

// address: 0x80117014
static int sgnTimeoutCurs;

// address: 0x80117018
extern unsigned char sgbMouseDown;

// address: 0x800A8E00
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x8011706C
extern int numtowners;

// address: 0x80117070
extern unsigned char storeflag;

// address: 0x80117071
extern unsigned char boyloadflag;

// address: 0x80117072
extern unsigned char bannerflag;

// address: 0x80117074
extern unsigned char *pCowCels;

// address: 0x80117D08
static unsigned long sgdwCowClicks;

// address: 0x80117D0C
static int sgnCowMsg;

// address: 0x800A8B40
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x80117064
extern unsigned long CowPlaying;

// address: 0x800A8764
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800A8ADC
// size: 0xC
extern int TownCowX[3];

// address: 0x800A8AE8
// size: 0xC
extern int TownCowY[3];

// address: 0x800A8AF4
// size: 0xC
extern int TownCowDir[3];

// address: 0x800A8B00
// size: 0x20
extern int cowoffx[8];

// address: 0x800A8B20
// size: 0x20
extern int cowoffy[8];

// address: 0x8011708C
extern int sfxdelay;

// address: 0x80117090
extern int sfxdnum;

// address: 0x80117084
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800A9C00
// size: 0xF4C
extern struct TSFX sgSFX[979];

// address: 0x80117088
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x80117094
extern long orgseed;

// address: 0x80117D10
static long sglGameSeed;

// address: 0x80117098
extern int SeedCount;

// address: 0x80117D14
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x80117D18
static int sgnWidth;

// address: 0x801170A6
extern char msgflag;

// address: 0x801170A7
extern char msgdelay;

// address: 0x800AABFC
// size: 0x50
extern char msgtable[80];

// address: 0x800AAB4C
// size: 0xB0
extern int MsgStrings[44];

// address: 0x801170A5
extern char msgcnt;

// address: 0x80117D1C
static unsigned long sgdwProgress;

// address: 0x80117D20
static unsigned long sgdwXY;

// address: 0x800AAC4C
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x8010DB14
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x8010EEB4
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x8010FBD4
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x80110AD4
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800AAE60
// size: 0x4A00
extern struct ItemStruct item[128];

// address: 0x800AF860
// size: 0x7F
extern char itemactive[127];

// address: 0x800AF8E0
// size: 0x7F
extern char itemavail[127];

// address: 0x800AF960
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x801170E8
extern unsigned char uitemflag;

// address: 0x80117D24
static int tem;

// address: 0x80118D80
// size: 0x94
static struct ItemStruct curruitem;

// address: 0x80118E20
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x801170EC
extern int ScrollType;

// address: 0x800AF9E0
// size: 0x80
extern char ItemStr[128];

// address: 0x801170C0
extern long numitems;

// address: 0x801170C4
extern int gnNumGetRecords;

// address: 0x800AADBC
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800AACEC
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x80112918
// size: 0x46
static short Item2Frm[35];

// address: 0x800AAD98
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x801170C8
extern int *ItemAnimSnds;

// address: 0x801170CC
extern int idoppely;

// address: 0x801170D0
extern int ScrollFlag;

// address: 0x800AAE48
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800B080C
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800B094C
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x80117100
extern int numlights;

// address: 0x80117104
extern char lightmax;

// address: 0x800B0974
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x80117108
extern int numvision;

// address: 0x8011710C
extern unsigned char dovision;

// address: 0x80117110
extern int visionid;

// address: 0x80117D28
static int disp_mask;

// address: 0x80117D2C
static int weird;

// address: 0x80117D30
static int disp_tab_r;

// address: 0x80117D34
static int dispy_r;

// address: 0x80117D38
static int disp_tab_g;

// address: 0x80117D3C
static int dispy_g;

// address: 0x80117D40
static int disp_tab_b;

// address: 0x80117D44
static int dispy_b;

// address: 0x80117D48
static int radius;

// address: 0x80117D4C
static int bright;

// address: 0x80118E30
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x801170F0
extern int lightflag;

// address: 0x800B0520
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800B07D4
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800AFA60
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x801170F4
extern int restore_r;

// address: 0x801170F8
extern int restore_g;

// address: 0x801170FC
extern int restore_b;

// address: 0x800B07EC
// size: 0x10
extern char radius_tab[16];

// address: 0x800B07FC
// size: 0x10
extern char bright_tab[16];

// address: 0x80117132
extern unsigned char qtextflag;

// address: 0x80117134
extern int qtextSpd;

// address: 0x80117D50
static unsigned char *pMedTextCels;

// address: 0x80117D54
static unsigned char *pTextBoxCels;

// address: 0x80117D58
static char *qtextptr;

// address: 0x80117D5C
static int qtexty;

// address: 0x80117D60
static unsigned long qtextDelay;

// address: 0x80117D64
static unsigned long sgLastScroll;

// address: 0x80117D68
static unsigned long scrolltexty;

// address: 0x80117D6C
static long sglMusicVolumeSave;

// address: 0x80117120
static bool qtbodge;

// address: 0x800B0B34
// size: 0x10
extern struct Dialog QBack;

// address: 0x80117131
static unsigned char CDFlip;

// address: 0x800B0B44
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800B12B4
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800B11A4
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800B13A0
// size: 0x17248
extern struct DLevel sgLevels[17];

// address: 0x800C85E8
// size: 0xD48
extern struct LocalLevel sgLocals[17];

// address: 0x80118EB0
// size: 0x20
static struct DJunk sgJunk;

// address: 0x80117D71
static unsigned char sgbRecvCmd;

// address: 0x80117D74
static unsigned long sgdwRecvOffset;

// address: 0x80117D78
static unsigned char sgbDeltaChunks;

// address: 0x80117D79
static unsigned char sgbDeltaChanged;

// address: 0x80117D7C
static unsigned long sgdwOwnerWait;

// address: 0x80117D80
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x80117D84
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x80117D88
static int sgnCurrMegaPlayer;

// address: 0x8011714D
extern unsigned char deltaload;

// address: 0x8011714E
extern unsigned char gbBufferMsgs;

// address: 0x80117150
extern unsigned long dwRecCount;

// address: 0x80117166
extern unsigned char gbMaxPlayers;

// address: 0x80117167
extern unsigned char gbActivePlayers;

// address: 0x80117168
extern unsigned char gbGameDestroyed;

// address: 0x80117169
extern unsigned char gbDeltaSender;

// address: 0x8011716A
extern unsigned char gbSelectProvider;

// address: 0x8011716B
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x80117D8C
static unsigned char sgbSentThisCycle;

// address: 0x80117D90
static unsigned long sgdwGameLoops;

// address: 0x80117D94
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x80117D98
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x80117D9C
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x80117DA4
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x80117DAC
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x80117DB4
static unsigned char sgbTimeout;

// address: 0x80117DB8
static long sglTimeoutStart;

// address: 0x80117160
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x80117165
static unsigned char sgbNetInited;

// address: 0x800C9330
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800C94F4
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80112FE0
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800C9CD4
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x8011718C
extern long numobjects;

// address: 0x800CB2A8
// size: 0x7F
extern char objectactive[127];

// address: 0x800CB328
// size: 0x7F
extern char objectavail[127];

// address: 0x80117190
extern unsigned char InitObjFlag;

// address: 0x80117194
extern int trapid;

// address: 0x800CB3A8
// size: 0x28
extern char ObjFileList[40];

// address: 0x80117198
extern int trapdir;

// address: 0x8011719C
extern int leverid;

// address: 0x80117184
extern int numobjfiles;

// address: 0x800C9BEC
// size: 0x20
extern int bxadd[8];

// address: 0x800C9C0C
// size: 0x20
extern int byadd[8];

// address: 0x800C9C94
// size: 0x1A
extern char shrineavail[26];

// address: 0x800C9C2C
// size: 0x68
extern int shrinestrs[26];

// address: 0x800C9CB0
// size: 0x24
extern int StoryBookName[9];

// address: 0x80117188
extern int myscale;

// address: 0x801171B0
extern unsigned char gbValidSaveFile;

// address: 0x801171AC
extern bool DoLoadedChar;

// address: 0x800CB5C8
// size: 0x45A0
extern struct PlayerStruct plr[2];

// address: 0x801171D0
extern int myplr;

// address: 0x801171D4
extern int deathdelay;

// address: 0x801171D8
extern unsigned char deathflag;

// address: 0x801171D9
extern char light_rad;

// address: 0x801171C8
// size: 0x5
extern char light_level[5];

// address: 0x800CB4C0
// size: 0x30
extern int MaxStats[4][3];

// address: 0x801171C0
static int PlrStructSize;

// address: 0x801171C4
static int ItemStructSize;

// address: 0x800CB3D0
// size: 0x24
extern int plrxoff[9];

// address: 0x800CB3F4
// size: 0x24
extern int plryoff[9];

// address: 0x800CB418
// size: 0x24
extern int plrxoff2[9];

// address: 0x800CB43C
// size: 0x24
extern int plryoff2[9];

// address: 0x800CB460
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800CB484
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800CB490
// size: 0xC
extern int MagicTbl[3];

// address: 0x800CB49C
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800CB4A8
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800CB4B4
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800CB4F0
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800CFCA0
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x80117214
extern unsigned char *pQLogCel;

// address: 0x80117218
extern int ReturnLvlX;

// address: 0x8011721C
extern int ReturnLvlY;

// address: 0x80117220
extern int ReturnLvl;

// address: 0x80117224
extern int ReturnLvlT;

// address: 0x80117228
extern int qfade;

// address: 0x8011722C
extern unsigned char rporttest;

// address: 0x80117230
extern int qline;

// address: 0x80117234
extern int numqlines;

// address: 0x80117238
extern int qtopline;

// address: 0x80118ED0
// size: 0x40
static int qlist[16];

// address: 0x80117DBC
// size: 0x8
static struct RECT QSRect;

// address: 0x801171E5
extern unsigned char questlog;

// address: 0x800CFB68
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x801171E8
extern int ALLQUESTS;

// address: 0x800CFC7C
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800CFC88
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800CFC94
// size: 0xC
extern int QuestGroup3[3];

// address: 0x801171FC
// size: 0x8
extern int QuestGroup4[2];

// address: 0x801171EC
// size: 0x7
static char questxoff[7];

// address: 0x801171F4
// size: 0x7
static char questyoff[7];

// address: 0x800CFC68
// size: 0x14
extern int questtrigstr[5];

// address: 0x80117204
static int QS_PX;

// address: 0x80117208
static int QS_PY;

// address: 0x8011720C
static int QS_PW;

// address: 0x80117210
static int QS_PH;

// address: 0x80118F10
// size: 0x10
static struct Dialog QSBack;

// address: 0x800CFDE0
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x80117277
extern char stextflag;

// address: 0x800D0638
// size: 0xB90
extern struct ItemStruct smithitem[20];

// address: 0x800D11C8
// size: 0x378
extern struct ItemStruct premiumitem[6];

// address: 0x80117278
extern int numpremium;

// address: 0x8011727C
extern int premiumlevel;

// address: 0x800D1540
// size: 0xB90
extern struct ItemStruct witchitem[20];

// address: 0x800D20D0
// size: 0x94
extern struct ItemStruct boyitem;

// address: 0x80117280
extern int boylevel;

// address: 0x800D2164
// size: 0x94
extern struct ItemStruct golditem;

// address: 0x800D21F8
// size: 0xB90
extern struct ItemStruct healitem[20];

// address: 0x80117284
extern char stextsize;

// address: 0x80117285
extern unsigned char stextscrl;

// address: 0x80117DC4
static int stextsel;

// address: 0x80117DC8
static int stextlhold;

// address: 0x80117DCC
static int stextshold;

// address: 0x80117DD0
static int stextvhold;

// address: 0x80117DD4
static int stextsval;

// address: 0x80117DD8
static int stextsmax;

// address: 0x80117DDC
static int stextup;

// address: 0x80117DE0
static int stextdown;

// address: 0x80117DE4
static char stextscrlubtn;

// address: 0x80117DE5
static char stextscrldbtn;

// address: 0x80117DE6
static char SItemListFlag;

// address: 0x80118F20
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800D2D88
// size: 0x1BC0
extern struct ItemStruct storehold[48];

// address: 0x800D4948
// size: 0x30
extern char storehidx[48];

// address: 0x80117DE8
static int storenumh;

// address: 0x80117DEC
static int gossipstart;

// address: 0x80117DF0
static int gossipend;

// address: 0x80117DF4
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x80117DFC
static int talker;

// address: 0x80117260
extern unsigned char *pSTextBoxCels;

// address: 0x80117264
extern unsigned char *pSTextSlidCels;

// address: 0x80117268
extern int *SStringY;

// address: 0x800D0564
// size: 0x10
extern struct Dialog SBack;

// address: 0x800D0574
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800D05C4
// size: 0x50
extern int SStringYBuy[20];

// address: 0x800D0614
// size: 0x24
extern int talkname[9];

// address: 0x80117276
extern unsigned char InStoreFlag;

// address: 0x80114068
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x80117294
extern unsigned long gdwAllTextEntries;

// address: 0x80117E00
static unsigned char *P3Tiles;

// address: 0x801172A4
extern int tile;

// address: 0x801172B4
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800D4BB0
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x801172B8
extern int numtrigs;

// address: 0x801172BC
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x801172C0
extern int TWarpFrom;

// address: 0x800D4978
// size: 0x2C
extern int TownDownList[11];

// address: 0x800D49A4
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800D49D8
// size: 0x30
extern int L1UpList[12];

// address: 0x800D4A08
// size: 0x28
extern int L1DownList[10];

// address: 0x800D4A30
// size: 0xC
extern int L2UpList[3];

// address: 0x800D4A3C
// size: 0x14
extern int L2DownList[5];

// address: 0x800D4A50
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800D4A5C
// size: 0x3C
extern int L3UpList[15];

// address: 0x800D4A98
// size: 0x24
extern int L3DownList[9];

// address: 0x800D4ABC
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800D4AF4
// size: 0x10
extern int L4UpList[4];

// address: 0x800D4B04
// size: 0x18
extern int L4DownList[6];

// address: 0x800D4B1C
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800D4B2C
// size: 0x84
extern int L4PentaList[33];

// address: 0x80114DF8
// size: 0xA
static char cursoff[10];

// address: 0x801172DA
extern unsigned char gbMusicOn;

// address: 0x801172DB
extern unsigned char gbSoundOn;

// address: 0x801172D9
extern unsigned char gbSndInited;

// address: 0x801172E0
extern long sglMasterVolume;

// address: 0x801172E4
extern long sglMusicVolume;

// address: 0x801172E8
extern long sglSoundVolume;

// address: 0x801172EC
extern long sglSpeechVolume;

// address: 0x801172DC
extern unsigned char gbDupSounds;

// address: 0x801172F0
static int sgnMusicTrack;

// address: 0x801172F4
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x80114EA4
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x80117318
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800D4C00
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x80117320
// size: 0x2
extern char _pfind_index[2];

// address: 0x80117324
// size: 0x2
extern char _pfindx[2];

// address: 0x80117328
// size: 0x2
extern char _pfindy[2];

// address: 0x8011732A
extern unsigned char automapmoved;

// address: 0x8011730C
extern unsigned char flyflag;

// address: 0x80117304
// size: 0x8
extern char (*pad_styles[2])();

// address: 0x8011730D
extern char speed_type;

// address: 0x8011730E
extern char sel_speed;

// address: 0x80117E04
static unsigned long (*CurrentProc)();

// address: 0x80115030
// size: 0x58
static struct MESSAGE_STR AllMsgs[11];

// address: 0x80117358
extern int NumOfStrings;

// address: 0x8011732C
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x80117330
extern long hndText;

// address: 0x80117334
extern char **TextPtr;

// address: 0x80117338
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x80117368
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x8011736C
extern int CharFade;

// address: 0x80117370
extern int rotateness;

// address: 0x80117374
extern int spiralling_shape;

// address: 0x80117378
extern int down;

// address: 0x800D4C50
// size: 0x10
extern char MlTab[16];

// address: 0x800D4C60
// size: 0x10
extern char QlTab[16];

// address: 0x800D4C70
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x80117394
extern int MyXoff1;

// address: 0x80117398
extern int MyYoff1;

// address: 0x8011739C
extern int MyXoff2;

// address: 0x801173A0
extern int MyYoff2;

// address: 0x801173B0
extern bool iscflag;

// address: 0x801173BD
static unsigned char sgbFadedIn;

// address: 0x801173BE
static unsigned char screenbright;

// address: 0x801173C0
static int faderate;

// address: 0x801173C4
static bool fading;

// address: 0x801173E0
// size: 0x8
static unsigned char AmShiftTab[8];

// address: 0x80117E08
static unsigned char *tbuff;

// address: 0x80117E0C
static unsigned char HR1;

// address: 0x80117E0D
static unsigned char HR2;

// address: 0x80117E0E
static unsigned char HR3;

// address: 0x80117E0F
static unsigned char VR1;

// address: 0x80117E10
static unsigned char VR2;

// address: 0x80117E11
static unsigned char VR3;

// address: 0x80117454
// size: 0x18
extern struct NODE *pHallList;

// address: 0x80117458
extern int nRoomCnt;

// address: 0x8011745C
extern int nSx1;

// address: 0x80117460
extern int nSy1;

// address: 0x80117464
extern int nSx2;

// address: 0x80117468
extern int nSy2;

// address: 0x8011740C
extern int Area_Min;

// address: 0x80117410
extern int Room_Max;

// address: 0x80117414
extern int Room_Min;

// address: 0x80117418
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x80117420
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x80117428
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x80117430
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x80117438
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x8011743C
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x80117440
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x80117444
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x80117448
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x8011744C
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x80117450
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x80117E14
static int abyssx;

// address: 0x80117E18
static unsigned char lavapool;

// address: 0x801174F4
extern int lockoutcnt;

// address: 0x80117478
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x80117480
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x80117488
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x80117490
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x80117498
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x801174A0
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x801174A8
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x801174B0
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x801174B8
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x801174C0
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x801174C8
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x801174D0
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x801174D8
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x801174E0
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x801174E4
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x801174E8
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x801174EC
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x801174F0
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x801174F8
extern int diabquad1x;

// address: 0x801174FC
extern int diabquad2x;

// address: 0x80117500
extern int diabquad3x;

// address: 0x80117504
extern int diabquad4x;

// address: 0x80117508
extern int diabquad1y;

// address: 0x8011750C
extern int diabquad2y;

// address: 0x80117510
extern int diabquad3y;

// address: 0x80117514
extern int diabquad4y;

// address: 0x80117518
extern int SP4x1;

// address: 0x8011751C
extern int SP4y1;

// address: 0x80117520
extern int SP4x2;

// address: 0x80117524
extern int SP4y2;

// address: 0x80117528
extern int l4holdx;

// address: 0x8011752C
extern int l4holdy;

// address: 0x8011753C
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x80117544
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800D4DF8
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800D4E0C
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800D4E28
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8011754C
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800D4E3C
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x80117638
static bool DoUiForChooseMonster;

// address: 0x800D4E60
// size: 0x88
static char *MgToText[34];

// address: 0x800D4EE8
// size: 0x24
extern int StoryText[3][3];

// address: 0x800D4F0C
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800D610C
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800D674C
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x8011765C
extern int setpc_x;

// address: 0x80117660
extern int setpc_y;

// address: 0x80117664
extern int setpc_w;

// address: 0x80117668
extern int setpc_h;

// address: 0x8011766C
extern unsigned char setloadflag;

// address: 0x80117670
extern unsigned char *pMegaTiles;

// address: 0x800D6D8C
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800D7590
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800D7D94
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800D8598
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800D8D9C
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x80117674
extern int dminx;

// address: 0x80117678
extern int dminy;

// address: 0x8011767C
extern int dmaxx;

// address: 0x80117680
extern int dmaxy;

// address: 0x80117684
extern int gnDifficulty;

// address: 0x80117688
extern unsigned char currlevel;

// address: 0x80117689
extern unsigned char leveltype;

// address: 0x8011768A
extern unsigned char setlevel;

// address: 0x8011768B
extern unsigned char setlvlnum;

// address: 0x8011768C
extern unsigned char setlvltype;

// address: 0x80117690
extern int ViewX;

// address: 0x80117694
extern int ViewY;

// address: 0x80117698
extern int ViewDX;

// address: 0x8011769C
extern int ViewDY;

// address: 0x801176A0
extern int ViewBX;

// address: 0x801176A4
extern int ViewBY;

// address: 0x800D95A0
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x801176A8
extern int LvlViewX;

// address: 0x801176AC
extern int LvlViewY;

// address: 0x801176B0
extern int btmbx;

// address: 0x801176B4
extern int btmby;

// address: 0x801176B8
extern int btmdx;

// address: 0x801176BC
extern int btmdy;

// address: 0x801176C0
extern int MicroTileLen;

// address: 0x801176C4
extern char TransVal;

// address: 0x800D95B4
// size: 0x20
extern bool TransList[8];

// address: 0x801176C8
extern int themeCount;

// address: 0x800D95D4
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x800FB894
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x800FC3F8
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x800FCF5C
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x800FDAC0
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x80117654
extern unsigned char *pSetPiece;

// address: 0x80117658
extern int DungSize;

// address: 0x800FDC8C
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x80117708
extern int numthemes;

// address: 0x8011770C
extern int zharlib;

// address: 0x80117710
extern unsigned char armorFlag;

// address: 0x80117711
extern unsigned char bCrossFlag;

// address: 0x80117712
extern unsigned char weaponFlag;

// address: 0x80117714
extern int themex;

// address: 0x80117718
extern int themey;

// address: 0x8011771C
extern int themeVar1;

// address: 0x80117720
extern unsigned char bFountainFlag;

// address: 0x80117721
extern unsigned char cauldronFlag;

// address: 0x80117722
extern unsigned char mFountainFlag;

// address: 0x80117723
extern unsigned char pFountainFlag;

// address: 0x80117724
extern unsigned char tFountainFlag;

// address: 0x80117725
extern unsigned char treasureFlag;

// address: 0x80117728
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x800FDB6C
// size: 0x10
extern int ThemeGood[4];

// address: 0x800FDB7C
// size: 0x64
extern int trm5x[25];

// address: 0x800FDBE0
// size: 0x64
extern int trm5y[25];

// address: 0x800FDC44
// size: 0x24
extern int trm3x[9];

// address: 0x800FDC68
// size: 0x24
extern int trm3y[9];

// address: 0x801177E0
extern int nummissiles;

// address: 0x800FDEA4
// size: 0x1F4
extern int missileactive[125];

// address: 0x800FE098
// size: 0x1F4
extern int missileavail[125];

// address: 0x801177E4
extern unsigned char MissilePreFlag;

// address: 0x800FE28C
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x801177E5
extern unsigned char ManashieldFlag;

// address: 0x801177E6
extern unsigned char ManashieldFlag2;

// address: 0x800FDE1C
// size: 0x20
extern int XDirAdd[8];

// address: 0x800FDE3C
// size: 0x20
extern int YDirAdd[8];

// address: 0x801177CD
extern unsigned char fadetor;

// address: 0x801177CE
extern unsigned char fadetog;

// address: 0x801177CF
extern unsigned char fadetob;

// address: 0x800FDE5C
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x800FDE6C
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x80100B3C
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x80117844
extern long nummonsters;

// address: 0x801062BC
// size: 0x190
extern short monstactive[200];

// address: 0x8010644C
// size: 0x190
extern short monstkills[200];

// address: 0x801065DC
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x80117848
extern long monstimgtot;

// address: 0x8011784C
extern char totalmonsters;

// address: 0x80117850
extern int uniquetrans;

// address: 0x80117E1C
static unsigned char sgbSaveSoundOn;

// address: 0x80117818
// size: 0x8
extern char offset_x[8];

// address: 0x80117820
// size: 0x8
extern char offset_y[8];

// address: 0x80117800
// size: 0x8
extern char left[8];

// address: 0x80117808
// size: 0x8
extern char right[8];

// address: 0x80117810
// size: 0x8
extern char opposite[8];

// address: 0x801177F4
extern int nummtypes;

// address: 0x801177F8
// size: 0x7
extern char animletter[7];

// address: 0x8010099C
// size: 0x120
extern int MWVel[3][24];

// address: 0x80117828
// size: 0x4
extern char rnd5[4];

// address: 0x8011782C
// size: 0x4
extern char rnd10[4];

// address: 0x80117830
// size: 0x4
extern char rnd20[4];

// address: 0x80117834
// size: 0x4
extern char rnd60[4];

// address: 0x80100ABC
// size: 0x80
extern void (*AiProc[32])();

// address: 0x80106AB4
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x801084F4
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x80108574
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x801085E4
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x8010689C
// size: 0x218
extern int TransPals[134];

// address: 0x8010679C
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x80108F34
// size: 0x60
extern struct PortalStruct portal[4];

// address: 0x8011786C
extern int portalindex;

// address: 0x80108F14
// size: 0x10
extern int WarpDropX[4];

// address: 0x80108F24
// size: 0x10
extern int WarpDropY[4];

// address: 0x8011788C
extern unsigned char invflag;

// address: 0x8011788D
extern unsigned char drawsbarflag;

// address: 0x80117890
extern int InvBackY;

// address: 0x80117894
extern int InvCursPos;

// address: 0x80109614
// size: 0x94
extern struct ItemStruct InvSpareSlot;

// address: 0x801096A8
// size: 0x4A
extern unsigned char InvSlotTable[74];

// address: 0x80117898
extern int InvBackAY;

// address: 0x8011789C
extern int InvSel;

// address: 0x801178A0
extern int ItemW;

// address: 0x801178A4
extern int ItemH;

// address: 0x801178A8
extern int ItemNo;

// address: 0x801178AC
extern unsigned char InvSpareFlag;

// address: 0x801178B0
// size: 0x8
extern struct RECT BRect;

// address: 0x8011787C
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x80117880
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x80108F94
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x80108FBC
// size: 0x250
extern struct InvXY InvRect[74];

// address: 0x8010920C
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x801094AC
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x80109560
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x80117884
static unsigned long sgdwLastTime;

// address: 0x80117888
extern int InvSpareSel;

// address: 0x801178C1
extern unsigned char automapflag;

// address: 0x801096F4
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x801097BC
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x801178C2
extern unsigned char AMLWallFlag;

// address: 0x801178C3
extern unsigned char AMRWallFlag;

// address: 0x801178C4
extern unsigned char AMLLWallFlag;

// address: 0x801178C5
extern unsigned char AMLRWallFlag;

// address: 0x801178C6
extern unsigned char AMDirtFlag;

// address: 0x801178C7
extern unsigned char AMColumnFlag;

// address: 0x801178C8
extern unsigned char AMStairFlag;

// address: 0x801178C9
extern unsigned char AMLDoorFlag;

// address: 0x801178CA
extern unsigned char AMLGrateFlag;

// address: 0x801178CB
extern unsigned char AMLArchFlag;

// address: 0x801178CC
extern unsigned char AMRDoorFlag;

// address: 0x801178CD
extern unsigned char AMRGrateFlag;

// address: 0x801178CE
extern unsigned char AMRArchFlag;

// address: 0x801178D0
extern int AutoMapX;

// address: 0x801178D4
extern int AutoMapY;

// address: 0x801178D8
extern int AutoMapXOfs;

// address: 0x801178DC
extern int AutoMapYOfs;

// address: 0x801178E0
extern int AMPlayerX;

// address: 0x801178E4
extern int AMPlayerY;

// address: 0x80117F78
extern unsigned long GazTick;

// address: 0x8011E2C8
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A262C
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x80117FA0
extern void (*PollFunc)();

// address: 0x80117F84
extern void (*MsgFunc)();

// address: 0x80117FD0
extern void (*ErrorFunc)();

// address: 0x80117EA4
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x8011C260
// size: 0xA00
static struct MEM_HDR MemHdrBlocks[80];

// address: 0x80117EA8
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x80117EAC
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x80117EB0
static int TimeStamp;

// address: 0x80117EB4
static unsigned char FullErrorChecking;

// address: 0x80117EB8
static unsigned long LastAttemptedAlloc;

// address: 0x80117EBC
static unsigned long LastDeallocedBlock;

// address: 0x80117EC0
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x80117EC4
static int NumOfFreeHdrs;

// address: 0x80117EC8
static unsigned long LastTypeAlloced;

// address: 0x80117ECC
static void (*AllocFilter)();

// address: 0x800A2664
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A268C
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80117ED0
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x80117ED4
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x80117ED8
// size: 0x5C
static struct TASK *T;

// address: 0x80117EDC
static unsigned long MemTypeForTasker;

// address: 0x8011CC60
// size: 0x30
static int SchEnv[12];

// address: 0x80117EE0
static unsigned long ExecId;

// address: 0x80117EE4
static unsigned long ExecMask;

// address: 0x80117EE8
static int TasksActive;

// address: 0x80117EEC
static void (*EpiFunc)();

// address: 0x80117EF0
static void (*ProFunc)();

// address: 0x80117EF4
static unsigned long EpiProId;

// address: 0x80117EF8
static unsigned long EpiProMask;

// address: 0x80117EFC
static void (*DoTasksPrologue)();

// address: 0x80117F00
static void (*DoTasksEpilogue)();

// address: 0x80117F04
static void (*StackFloodCallback)();

// address: 0x80117F08
static unsigned char ExtraStackProtection;

// address: 0x80117F0C
static int ExtraStackSizeLongs;

// address: 0x80117F8C
extern void *LastPtr;

// address: 0x800A26B4
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8011CC90
// size: 0x1380
static char buf[4992];

// address: 0x800A26BC
// size: 0x7
static char NULL_REP[7];

// address: 0x80079AEC
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x80079B08
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x80079B14
void Remove96__Fv() {
}


// address: 0x80079B4C
void AppMain() {
}


// address: 0x80079BF4
void MAIN_RestartGameTask__Fv() {
}


// address: 0x80079C20
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x80079CB8
void MAIN_MainLoop__Fv() {
}


// address: 0x80079D0C
void CheckMaxArgs__Fv() {
}


// address: 0x80079D40
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x80079D4C
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


// address: 0x80079EC0
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x80079F74
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007A014
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A0B0
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A150
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


// address: 0x8007A26C
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007A348
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007A470
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007A4AC
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007A6B4
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007A6F0
unsigned char ClearedYet__Fv() {
}


// address: 0x8007A6FC
void PrimDrawSycnCallBack() {
}


// address: 0x8007A71C
void SendDispEnv__Fv() {
}


// address: 0x8007A740
// size: 0x18
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007A758
// size: 0x28
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007A770
// size: 0x34
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007A788
// size: 0x24
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007A7A0
// size: 0x14
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007A7B8
// size: 0xC
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007A7D0
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007A8E4
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007A94C
void VID_AfterDisplay__Fv() {
}


// address: 0x8007A96C
void VID_ScrOn__Fv() {
}


// address: 0x8007A994
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007A9EC
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007A9F8
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007AA04
void VID_DispEnvSend() {
}


// address: 0x8007AA40
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007AA50
int VID_GetXOff__Fv() {
}


// address: 0x8007AA5C
int VID_GetYOff__Fv() {
}


// address: 0x8007AA68
void VID_SetDBuffer__Fb(bool DBuf) {
}


// address: 0x8007ABDC
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007ABE4
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007AC04
int GetTpY__FUs_addr_8007AC04(unsigned short tpage) {
}


// address: 0x8007AC20
int GetTpX__FUs_addr_8007AC20(unsigned short tpage) {
}


// address: 0x8007AC2C
// size: 0x14
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007AC38
// size: 0x14
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007AC44
void SortOutFileSystem__Fv() {
}


// address: 0x8007AD80
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007ADA0
void Spanker__Fv() {
}


// address: 0x8007ADE0
void GaryLiddon__Fv() {
}


// address: 0x8007ADE8
void ReadPad__Fi(int NoDeb) {
	// register: 2
	register int New;
}


// address: 0x8007AE48
void DummyPoll__Fv() {
}


// address: 0x8007AE50
void DaveOwens__Fv() {
}


// address: 0x8007AE78
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007AEA0
int GetTpY__FUs_addr_8007AEA0(unsigned short tpage) {
}


// address: 0x8007AEBC
int GetTpX__FUs_addr_8007AEBC(unsigned short tpage) {
}


// address: 0x8007AEC8
void TimSwann__Fv() {
}


// address: 0x8007AED0
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007AED8
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007AF0C
void leighbird__Fv() {
}


// address: 0x8007AF34
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007AF84
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007AFD8
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007B140
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B1A4
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B1C4
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007B2A4
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007B368
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007B3CC
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007B4A8
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


// address: 0x8007B5BC
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007B664
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007B6BC
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007B714
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007B728
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007B764
// size: 0x14
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007B7CC
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007B824
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007B868
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007B92C
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007B9E4
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007BAB8
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


// address: 0x8007BCC8
// size: 0x4
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007BCE0
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007BD0C
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007BD88
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007BDF4
// size: 0x14
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007BE30
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007BE88
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007BEC8
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007BF88
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007C03C
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007C0E4
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


// address: 0x8007C2F0
// size: 0x6C
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007C330
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007C378
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


// address: 0x8007C56C
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80117B88
	static int TpX;
	// address: 0x80117B8C
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


// address: 0x8007C63C
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007C6F4
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007C750
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007C7C0
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


// address: 0x8007C8EC
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


// address: 0x8007C9E8
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


// address: 0x8007CDF0
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


// address: 0x8007D05C
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


// address: 0x8007D1BC
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


// address: 0x8007D2B8
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


// address: 0x8007D514
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


// address: 0x8007D594
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


// address: 0x8007D758
// size: 0x28
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007D8AC
// size: 0x34
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007DA00
// size: 0x28
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007DAE4
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007DC38
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


// address: 0x8007DD78
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x8007DE74
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007DEA0
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007DFE8
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


// address: 0x8007E108
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x8007E15C
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


// address: 0x8007E224
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8007E278
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x8007E2D0
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


// address: 0x8007E3F4
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


// address: 0x8007E4C8
// size: 0x4
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x8007E518
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x8007E540
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x8007E5E8
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


// address: 0x8007E6A8
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x8007E6EC
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


// address: 0x8007E77C
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8007E7EC
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


// address: 0x8007E858
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007E8A8
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007E8D0
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


// address: 0x8007E96C
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x8007E9D4
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


// address: 0x8007EAA8
// size: 0x78
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x8007EADC
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


// address: 0x8007ED58
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x8007ED7C
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007F05C
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x8007F0D4
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


// address: 0x8007F230
void _GLOBAL__D_DatPool() {
}


// address: 0x8007F288
void _GLOBAL__I_DatPool() {
}


// address: 0x8007F2DC
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x8007F358
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x8007F3D4
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8007F450
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F478
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F4A0
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F4AC
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F4B8
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8007F530
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x8007F544
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8007F550
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x8007F564
// size: 0x8
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x8007F580
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8007F59C
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F5A8
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F5D0
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F5F8
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x8007F60C
// size: 0x14
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x8007F650
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x8007F6A8
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007F6CC
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007F6F4
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007F718
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007F7F8
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x8007F808
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


// address: 0x8007F954
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
		// register: 19
		register unsigned char *ptr;
		{
			// register: 17
			register int i;
		}
	}
}


// address: 0x8007FBB4
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x8007FCA0
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


// address: 0x8007FDCC
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


// address: 0x8007FF38
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


// address: 0x800801F0
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


// address: 0x800802F0
// size: 0x14
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


// address: 0x8008048C
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x800804B0
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x800804E4
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x800805CC
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x800805D8
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x80080644
bool BL_LoadFileAsync__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 17
	// size: 0x14
	register struct STRHDR *sh;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x8008073C
// size: 0x14
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80080768
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x800807A0
long BL_LoadFile__FPcUl(char *Name, unsigned long RamId) {
	// address: 0xFFFFFFB8
	// size: 0x32
	auto char FileToLoad[50];
	// register: 16
	register int MemSize;
	// register: 16
	register long MyHnd;
	// register: 17
	register unsigned char *LoadAddr;
}


// address: 0x800808B8
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


// address: 0x8008098C
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x80080AB0
void Tfree__FPv(void *Addr) {
}


// address: 0x80080B60
void InitTmalloc__Fv() {
}


// address: 0x80080B88
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80080BDC
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80080C28
int GetPausePad__Fv() {
	// register: 17
	register bool Done;
	// register: 18
	register int PadVal;
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


// address: 0x80080CB8
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80080CE4
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


// address: 0x80080EC0
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


// address: 0x800811B4
bool DoQuitMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 19
	register bool RetVal;
	// register: 18
	register bool Done;
	// register: 16
	register int Menu;
	{
		// register: 3
		register unsigned short PadVal;
	}
}


// address: 0x8008129C
bool AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 19
	register bool RetVal;
	// register: 18
	register bool Done;
	// register: 16
	register int Menu;
	{
		// register: 3
		register unsigned short PadVal;
	}
}


// address: 0x80081384
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80081394
bool PA_GetPauseOk__Fv() {
}


// address: 0x800813A0
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x800814F0
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800814F8
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x800815F8
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081600
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081608
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081708
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081710
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081718
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800817FC
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081804
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x8008182C
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80081854
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x8008187C
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800818C0
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x800818F4
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80081908
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80081928
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081930
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081938
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80081960
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x800819BC
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x800819E4
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x80081A0C
void PAD_Handler__Fv() {
	// register: 16
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 3
	register unsigned char fin;
}


// address: 0x80081BC0
// size: 0x6C
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x80081C5C
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80081D94
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80081EF0
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80082014
void _GLOBAL__I_Pad0() {
}


// address: 0x8008204C
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x80082054
// size: 0x6C
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80082088
void Flush__4CPad(struct CPad *this) {
}


// address: 0x800820AC
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


// address: 0x80082148
void InitPrinty__Fv() {
}


// address: 0x800821D0
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x800821D8
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80082358
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	// register: 16
	register int Cx;
	// register: 22
	register int Cy;
	// address: 0xFFFFFFC0
	auto int WrapCount;
	// register: 19
	register char *EndPtr;
	// register: 20
	register char *SpacePtr;
	// register: 16
	register int SpaceW;
	// register: 21
	register int WindowW;
	// address: 0xFFFFFFC8
	auto int WindowX;
	// register: 6
	register int WindowY;
}


// address: 0x800826F0
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x80082758
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x800827BC
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x800827C8
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x800827EC
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x8008280C
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80082824
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8008287C
void Init__5CFont(struct CFont *this) {
}


// address: 0x800828B0
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800828B0(struct TextDat *this, int FrNum) {
}


// address: 0x800828CC
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80082904
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


// address: 0x8008327C
// size: 0x24
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x800833B4
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


// address: 0x80083658
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


// address: 0x80083790
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x800839E8
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


// address: 0x80084BA8
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


// address: 0x80084DC0
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80084DC0(struct TextDat *this, int PalNum) {
}


// address: 0x80084DDC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80084DDC(struct TextDat *this, int FrNum) {
}


// address: 0x80084DF8
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80084EB0
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80084F4C
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x80084F8C
void CycleSelCols__Fv() {
}


// address: 0x8008511C
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


// address: 0x80085190
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x800851E4
// size: 0xE0
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x80085338
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80085370
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x80085438
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x800854C0
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80085528
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80085590
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x800855EC
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x8008563C
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80085988
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x80085A34
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x80085B08
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


// address: 0x80085C10
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


// address: 0x80085D4C
// size: 0xC
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x80085DC4
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x80085DEC
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x80085E14
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80085E2C
void PrintMap__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF10
	auto int XPos;
	// address: 0xFFFFFF18
	auto int YPos;
	// address: 0xFFFFFF20
	auto int xx;
	// address: 0xFFFFFF28
	auto int block_trans;
	// address: 0xFFFFFF30
	auto unsigned short nlval1;
	// address: 0xFFFFFF38
	auto int BlankBlock;
	// register: 16
	register int XPix;
	// register: 17
	register int YPix;
	// address: 0xFFFFFF40
	auto int CLeft;
	// address: 0xFFFFFF48
	auto int CRight;
	// address: 0xFFFFFF50
	auto int CTop;
	// address: 0xFFFFFF58
	auto int CBottom;
	{
		// address: 0xFFFFFF60
		auto int ThisY;
		// address: 0xFFFFFF68
		auto int OtPos;
		// address: 0xFFFFFF70
		auto int ThisXPos;
		// register: 30
		register int ThisYPos;
		// address: 0xFFFFFF78
		auto int Height;
		{
			// register: 22
			// size: 0x8
			register struct CPart *Parts;
			// register: 5
			// size: 0xC
			register struct CBlock *MyBlock;
			// register: 16
			register int BlockNum;
			// address: 0xFFFFFF80
			auto bool Hi;
			{
				{
					// register: 7
					register int bx;
					// register: 3
					register int by;
					{
						{
							{
								{
									{
										{
											{
												// register: 10
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
														// register: 12
														register int NumOfParts;
														{
															// register: 11
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
																// address: 0xFFFFFEF8
																// size: 0x34
																auto struct POLY_GT4 *DestGt4;
																{
																	{
																		// register: 17
																		// size: 0x10
																		register struct LittleGt4 *ThisGt4;
																		{
																			{
																				{
																					// address: 0xFFFFFF88
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
																								// register: 23
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
																									// address: 0xFFFFFEFC
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
}


// address: 0x80087594
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


// address: 0x80087704
void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// register: 30
	register int nMonster;
	// register: 20
	register int bItem;
	// register: 2
	register int bObject;
	// register: 21
	register int bFlags;
	// address: 0xFFFFFFB8
	auto int bDead;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *ShadFt4;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			// size: 0x6C
			register struct TextDat *ObjDat;
			{
				{
					// register: 17
					register int ObjIndex;
					// register: 19
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
													// register: 17
													// size: 0x94
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


// address: 0x80088420
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
			// register: 17
			// size: 0x94
			register struct ItemStruct *pItem;
			{
				{
					// register: 2
					// size: 0xC
					register struct FRAME_HDR *Fr;
					// register: 19
					register int W;
					// register: 21
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


// address: 0x80088AE0
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


// address: 0x80088C50
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x80088C64
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x80088C78
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x80088D3C
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x80088DA4
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x80088E44
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x80088F18
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x80088F98
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x80088FA0
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x80088FB4
// size: 0xE0
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x80088FC0
void PRIM_GetPrim__FPP8POLY_FT4_addr_80088FC0(struct POLY_FT4 **Prim) {
}


// address: 0x8008903C
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80089084
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800890C0
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80089108
void PRIM_GetPrim__FPP8POLY_GT4_addr_80089108(struct POLY_GT4 **Prim) {
}


// address: 0x80089184
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x80089200
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


// address: 0x80089228
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x80089244
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008926C
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80089294
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x800892B8
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x800892DC
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x80089304
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x80089310
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x800893A8
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x80089438
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80089470
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80089470(struct TextDat *this, int Creature) {
}


// address: 0x800894E8
int GetNumOfCreatures__7TextDat_addr_800894E8(struct TextDat *this) {
}


// address: 0x800894FC
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_800894FC(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80089508
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80089508(struct TextDat *this, int PalNum) {
}


// address: 0x80089524
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80089524(struct TextDat *this, int FrNum) {
}


// address: 0x80089540
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008956C
void OVR_LoadPregame__Fv() {
}


// address: 0x80089594
void OVR_LoadFrontend__Fv() {
}


// address: 0x800895BC
void OVR_LoadGame__Fv() {
}


// address: 0x800895E4
void OVR_LoadFmv__Fv() {
}


// address: 0x8008960C
void OVR_LoadMemcard__Fv() {
}


// address: 0x80089638
void ClearOutOverlays__Fv() {
}


// address: 0x80089690
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x80089754
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x800897C4
// size: 0x4
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x800897D0
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x80089824
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x80089994
// size: 0x4
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x800899A0
void StevesDummyPoll__Fv() {
}


// address: 0x800899A8
void Lambo__Fv() {
}


// address: 0x800899B0
// size: 0x84
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x80089A94
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x80089AEC
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x80089B48
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


// address: 0x80089C94
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


// address: 0x8008A0C0
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008A140
void Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// address: 0xFFFFFFD0
	auto int ScrXOff;
	// register: 30
	register int ScrYOff;
	// register: 17
	register int Action;
	// register: 22
	register int WorldX;
	// register: 20
	register int WorldY;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	{
		{
			{
				{
					// register: 21
					register int Frame;
					{
						{
							// register: 16
							register int FrmNum;
							// address: 0xFFFFFFC0
							// size: 0x8
							auto struct RECT R;
							// register: 20
							register int pOtPos;
							// register: 17
							register int PhaseFlag;
							// register: 16
							register int TeleFlag;
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


// address: 0x8008A590
void SetpNscrnxy__7CPlayeriiii(struct CPlayer *this, int x, int y, int px, int py) {
}


// address: 0x8008A5F8
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008A674
// size: 0x4
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008A6DC
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008A6E4
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008A6EC
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008A6EC(struct POLY_FT4 **Prim) {
}


// address: 0x8008A768
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008A768(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008A7A4
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008A7A4(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008A7CC
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008A7E0
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008A7F8
int GetNumOfFrames__7TextDatii_addr_8008A7F8(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008A830
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008A854
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008A854(struct TextDat *this, int Creature) {
}


// address: 0x8008A8CC
int GetNumOfCreatures__7TextDat_addr_8008A8CC(struct TextDat *this) {
}


// address: 0x8008A8E0
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008A8E0(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008A8EC
void PROF_Open__Fv() {
}


// address: 0x8008A92C
bool PROF_State__Fv() {
}


// address: 0x8008A938
void PROF_On__Fv() {
}


// address: 0x8008A948
void PROF_Off__Fv() {
}


// address: 0x8008A954
void PROF_CpuEnd__Fv() {
}


// address: 0x8008A984
void PROF_CpuStart__Fv() {
}


// address: 0x8008A9A8
void PROF_DrawStart__Fv() {
}


// address: 0x8008A9CC
void PROF_DrawEnd__Fv() {
}


// address: 0x8008A9FC
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


// address: 0x8008ABF0
void PROF_Restart__Fv() {
}


// address: 0x8008AC10
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008ACC0
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008AD60
void GoBackLevel__Fv() {
}


// address: 0x8008ADD8
void GoWarpLevel__Fv() {
}


// address: 0x8008AE10
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008AEAC
void GoLoadGame__Fv() {
}


// address: 0x8008AF34
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008AFCC
void GoForwardLevel__Fv() {
}


// address: 0x8008B024
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B0BC
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008B10C
void PostNewGame__Fv() {
}


// address: 0x8008B144
void LevelToLevelInit__Fv() {
}


// address: 0x8008B19C
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008B1E0
// size: 0x10
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008B238
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 22
	register int ManaHeight;
	// address: 0xFFFFFFC0
	auto int HealthAnim;
	// address: 0xFFFFFFC8
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


// address: 0x8008B6AC
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


// address: 0x8008BB30
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 19
	register int X;
	// register: 17
	register int Y;
	// register: 2
	register int Anim;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 6
	register int SpellNo;
	// address: 0xFFFFFFA0
	// size: 0x40
	auto int YT[16];
}


// address: 0x8008BC90
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008BCDC
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008C098
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008C18C
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008C290
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008C290(struct TextDat *this, int PalNum) {
}


// address: 0x8008C2AC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008C2AC(struct TextDat *this, int FrNum) {
}


// address: 0x8008C2C8
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008C2DC
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008C31C
void STR_AllocBuffer__Fv() {
	{
		{
			{
				// register: 4
				register int i;
			}
		}
	}
}


// address: 0x8008C3A8
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


// address: 0x8008C470
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


// address: 0x8008C5A8
// size: 0x80
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008C6E4
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008C73C
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008C848
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008C898
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008C8E8
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008C954
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008CA60
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008CB80
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008CC48
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008CE24
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


// address: 0x8008D11C
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


// address: 0x8008D548
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


// address: 0x8008D658
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x8008D720
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8008D78C
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8008D804
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80117BF0
	static int DestAddr;
}


// address: 0x8008D87C
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8008D9B0
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DA04
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8008DA28
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DA8C
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


// address: 0x8008DC40
void AS_CallBack0__Fi(int handle) {
}


// address: 0x8008DC54
void AS_CallBack1__Fi(int handle) {
}


// address: 0x8008DC68
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x8008DD44
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8008DDE4
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008DDF0
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8008DE1C
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x8008DF3C
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x8008DF70
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8008E000
// size: 0x18
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E0DC
// size: 0x18
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E15C
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x8008E1FC
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E290
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


// address: 0x8008E304
void SCR_Handler__Fv() {
}


// address: 0x8008E32C
int GetNumOfObjs__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
}


// address: 0x8008E334
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008E370
void Init__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008E3D4
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E42C
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E484
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008E498
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x8008E4C4
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x8008E4CC
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8008E4D4
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x8008E4E0
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008E518
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8008E524
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008E544
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008E590
void stub__FPcPv_addr_8008E590(char *e, void *argptr) {
}


// address: 0x8008E598
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8008E5CC
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008E654
void print_demo_task__FP4TASK(struct TASK *T) {
}


// address: 0x8008E784
void TonysDummyPoll__Fv() {
}


// address: 0x8008E78C
void load_demo_pad_data__FUl(unsigned long demo_num) {
}


// address: 0x8008E7DC
void save_demo_pad_data__FUl(unsigned long demo_num) {
}


// address: 0x8008E82C
void set_pad_record_play__Fi(int level) {
}


// address: 0x8008E8A4
void demo_game_task__FP4TASK(struct TASK *T) {
}


// address: 0x8008E8DC
void start_demo__Fv() {
}


// address: 0x8008E930
void tony__Fv() {
}


// address: 0x8008E984
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8008E990
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8008E99C
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008E9F0
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008EA44
void GLUE_PreTown__Fv() {
}


// address: 0x8008EAA8
bool GLUE_Finished__Fv() {
}


// address: 0x8008EAB4
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8008EAC0
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8008EB44
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008EB54
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008EB64
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008EB74
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8008EC4C
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


// address: 0x8008F114
// size: 0x8
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x8008F19C
// size: 0x8
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8008F1F8
// size: 0x8
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8008F228
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x8008F268
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x8008F2BC
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x8008F368
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008F374
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x8008F37C
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008F390
char *get_action_str__Fii(int pval, int combo) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8008F410
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
}


// address: 0x8008F44C
void RemoveCtrlScreen__Fv() {
}


// address: 0x8008F494
unsigned char Init_ctrl_pos__Fv() {
	// register: 22
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	register char *pstr1;
	// register: 20
	register char *pstr2;
	// register: 23
	register int xp;
	{
		{
			{
				{
					{
						{
							// register: 16
							register int len;
							{
								// register: 16
								register int len;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008FA98
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008FAD8
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008FB18
unsigned char set_buttons__Fii(int cline, int n) {
	// register: 3
	register int cval;
	// register: 4
	register int i;
	// register: 19
	register int p;
}


// address: 0x8008FCB8
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x8008FD08
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x8008FF98
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	// register: 6
	register int i;
	// address: 0xFFFFFFC0
	auto unsigned char r;
	// address: 0xFFFFFFC8
	auto unsigned char g;
	// address: 0xFFFFFFD0
	auto unsigned char b;
	// register: 4
	register int str;
	// register: 18
	register int len;
	{
		{
			// register: 4
			register int x1;
			// register: 30
			register int x2;
		}
	}
}


// address: 0x800905EC
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int pnum;
	{
		{
		}
	}
}


// address: 0x800909EC
void _GLOBAL__D_CtrlBorder() {
}


// address: 0x80090A24
void _GLOBAL__I_CtrlBorder() {
}


// address: 0x80090A5C
unsigned short GetDown__C4CPad_addr_80090A5C(struct CPad *this) {
}


// address: 0x80090A84
unsigned short GetCur__C4CPad_addr_80090A84(struct CPad *this) {
}


// address: 0x80090AAC
void SetRGB__6DialogUcUcUc_addr_80090AAC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80090ACC
void SetBorder__6Dialogi_addr_80090ACC(struct Dialog *this, int Type) {
}


// address: 0x80090AD4
void ___6Dialog_addr_80090AD4(struct Dialog *this, int __in_chrg) {
}


// address: 0x80090AFC
// size: 0x10
struct Dialog *__6Dialog_addr_80090AFC(struct Dialog *this) {
}


// address: 0x80090B58
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80090B78
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80090BC4
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x80090D50
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


// address: 0x80090E80
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800910BC
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80091110
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


// address: 0x80091374
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80091544
void nightgfx__FibiP8POLY_GT4i(int BlockBase, bool water, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
	{
		{
			{
				{
					{
						{
							// register: 9
							register unsigned char grn;
							// register: 8
							register int subtle;
						}
					}
				}
			}
		}
	}
}


// address: 0x8009170C
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8009170C(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80091748
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80091748(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80091770
void PRIM_GetPrim__FPP8POLY_FT4_addr_80091770(struct POLY_FT4 **Prim) {
}


// address: 0x800917EC
int GetNumOfActions__7TextDati_addr_800917EC(struct TextDat *this, int Creature) {
}


// address: 0x80091810
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80091810(struct TextDat *this, int Creature) {
}


// address: 0x80091888
int GetNumOfCreatures__7TextDat_addr_80091888(struct TextDat *this) {
}


// address: 0x8009189C
void DaveLDummyPoll__Fv() {
}


// address: 0x800918A4
void DaveL__Fv() {
}


// address: 0x800918CC
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
	// address: 0x80116B74
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


// address: 0x80091BAC
void mteleportfx__Fv() {
	// register: 2
	register int br;
}


// address: 0x80091E84
void invistimer__Fv() {
}


// address: 0x80091F54
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


// address: 0x80091FDC
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


// address: 0x800921CC
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


// address: 0x80092300
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


// address: 0x800924D0
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80092670
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80092754
void doparticlejump__Fv() {
}


// address: 0x80092794
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x800928FC
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


// address: 0x80092CF4
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


// address: 0x80092F9C
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x800931C0
void healFX__Fv() {
}


// address: 0x80093254
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80093314
void HealStart__Fi(int plr) {
}


// address: 0x80093330
void HealotherStart__Fi(int plr) {
}


// address: 0x80093350
void TeleStart__Fi(int plr) {
}


// address: 0x80093398
void PhaseStart__Fi(int plr) {
}


// address: 0x800933C8
void InvisStart__Fi(int plr) {
}


// address: 0x800933F8
void PhaseEnd__Fi(int plr) {
}


// address: 0x80093420
void ApocaStart__Fi(int plr) {
}


// address: 0x80093548
void doapocaFX__Fv() {
	// address: 0x80116B78
	static int scale1;
	// address: 0x80116B7C
	static int scale2;
}


// address: 0x8009377C
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x800937E0
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x8009385C
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x800938D8
void PRIM_GetPrim__FPP8POLY_FT4_addr_800938D8(struct POLY_FT4 **Prim) {
}


// address: 0x80093954
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80093954(struct TextDat *this, int FrNum) {
}


// address: 0x80093970
void DrawArrow__Fii(int x1, int y1) {
	// register: 19
	register int bright;
	// register: 18
	// size: 0x1C
	register struct Spell_Target *spl;
	// register: 23
	register char r;
	// register: 22
	register char b;
	{
		// register: 20
		register int i;
	}
}


// address: 0x80093BB0
void show_spell_dir__Fi(int pnum) {
	// address: 0xFFFFFFD0
	// size: 0x22D0
	auto struct PlayerStruct *player;
	// register: 23
	register int ScrXOff;
	// register: 22
	register int ScrYOff;
	// register: 16
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int cp;
	// register: 17
	// size: 0x1C
	register struct Spell_Target *spl;
	// register: 21
	register int otx;
	// register: 20
	register int oty;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct RECT R;
	// register: 30
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80093F08
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x1C
	register struct Spell_Target *spl;
}


// address: 0x80093F7C
void select_belt_item__Fi(int pnum) {
}


// address: 0x80093F84
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80093FEC
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094120
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x8009425C
void pad_func_up__Fi(int pnum) {
}


// address: 0x80094288
void pad_func_down__Fi(int pnum) {
}


// address: 0x800942B4
void pad_func_left__Fi(int pnum) {
}


// address: 0x800942BC
void pad_func_right__Fi(int pnum) {
}


// address: 0x800942C4
void pad_func_select__Fi(int pnum) {
}


// address: 0x800943B4
void pad_func_Attack__Fi(int pnum) {
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80094724
void pad_func_Action__Fi(int pnum) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80094A34
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x1C
	register struct Spell_Target *spl;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80094B8C
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x1C
	register struct Spell_Target *spl;
}


// address: 0x80094C10
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 19
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 17
	register int sp;
	// register: 20
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 22
	register int omp;
	// register: 4
	// size: 0x6C
	register struct CPad *pad;
	// register: 21
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


// address: 0x80095324
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80095418
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80095554
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80095674
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x8009578C
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80095838
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80095904
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80095A1C
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80095A98
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x80095C70
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80095C98
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80095CC0
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


// address: 0x80095E00
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80095F08
void DrawObjSelector__Fi(int pnum) {
	// register: 22
	// size: 0x22D0
	register struct PlayerStruct *player;
	// address: 0xFFFFFF48
	// size: 0x1E
	auto char str[30];
	// register: 19
	// size: 0x6C
	register struct CPad *Pad;
	// address: 0xFFFFFF68
	auto int list_size;
	// address: 0xFFFFFF70
	auto int maxlen;
	// register: 2
	register int cgold;
	{
		// register: 20
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


// address: 0x8009673C
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


// address: 0x80096818
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80096924
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 10
	register char co;
}


// address: 0x80096CFC
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 2
	// size: 0x22D0
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


// address: 0x80096F50
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x8009718C
void _GLOBAL__D_gplayer() {
}


// address: 0x800971B4
void _GLOBAL__I_gplayer() {
}


// address: 0x800971DC
void SetRGB__6DialogUcUcUc_addr_800971DC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800971FC
void SetBack__6Dialogi_addr_800971FC(struct Dialog *this, int Type) {
}


// address: 0x80097204
void SetBorder__6Dialogi_addr_80097204(struct Dialog *this, int Type) {
}


// address: 0x8009720C
void ___6Dialog_addr_8009720C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80097234
// size: 0x10
struct Dialog *__6Dialog_addr_80097234(struct Dialog *this) {
}


// address: 0x80097290
void MoveToScrollTarget__7CBlocks_addr_80097290(struct CBlocks *this) {
}


// address: 0x800972A4
unsigned short GetDown__C4CPad_addr_800972A4(struct CPad *this) {
}


// address: 0x800972CC
unsigned short GetCur__C4CPad_addr_800972CC(struct CPad *this) {
}


// address: 0x800972F4
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80097370
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x800973C8
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80097424
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009745C
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80097494
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800974F4
bool IsGameLoading__Fv() {
}


// address: 0x80097500
void PutUpCutScreenTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// address: 0xFFFFFFD0
	auto int lev;
	// address: 0xFFFFFFC8
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 16
	register unsigned char barr;
	// register: 21
	register unsigned char barg;
	// register: 17
	register unsigned short prog;
}


// address: 0x80097958
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x80097A08
void TakeDownCutScreen__Fv() {
}


// address: 0x80097A50
void FinishProgress__Fv() {
}


// address: 0x80097A98
void PRIM_GetPrim__FPP7POLY_G4_addr_80097A98(struct POLY_G4 **Prim) {
}


// address: 0x80097B14
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x80097B4C
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x80097B84
void SetRGB__6DialogUcUcUc_addr_80097B84(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80097BA4
void SetBack__6Dialogi_addr_80097BA4(struct Dialog *this, int Type) {
}


// address: 0x80097BAC
void SetBorder__6Dialogi_addr_80097BAC(struct Dialog *this, int Type) {
}


// address: 0x80097BB4
void ___6Dialog_addr_80097BB4(struct Dialog *this, int __in_chrg) {
}


// address: 0x80097BDC
// size: 0x10
struct Dialog *__6Dialog_addr_80097BDC(struct Dialog *this) {
}


// address: 0x80097C38
void ___7CScreen_addr_80097C38(struct CScreen *this, int __in_chrg);

// address: 0x80097C58
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x80097E74
void memcard_event__Fii(int evt, int side) {
}


// address: 0x80097E80
void init_card__Fi(int card_number) {
}


// address: 0x80097EB4
int ping_card__Fi(int card_number) {
}


// address: 0x80097F48
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x80097F80
void MemcardON__Fv() {
}


// address: 0x80097FDC
void MemcardOFF__Fv() {
}


// address: 0x8009802C
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x80098110
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
	// register: 4
	register int yr1;
	// register: 5
	register int xr2;
	// register: 7
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


// address: 0x80098610
void DrawMenu__Fi(int MenuNo) {
	// address: 0xFFFFFF80
	// size: 0xC
	auto struct OMENULIST *mptr;
	// address: 0xFFFFFF88
	// size: 0x18
	auto struct OMENUITEM *iptr;
	// address: 0xFFFFFF90
	auto int sh;
	// address: 0xFFFFFF68
	// size: 0x24
	auto struct POLY_G4 *G4;
	// address: 0xFFFFFF98
	auto int yoff;
	// register: 18
	register int len;
	// address: 0xFFFFFFA0
	auto unsigned char r;
	// address: 0xFFFFFFA8
	auto unsigned char g;
	// address: 0xFFFFFFB0
	auto unsigned char b;
	// address: 0xFFFFFFB8
	auto int mx;
	// address: 0xFFFFFFC0
	auto int my;
	{
		// register: 30
		register int i;
		{
			{
				{
					// register: 20
					register int sxp;
					// register: 22
					register int syp;
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
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009906C
void ShowCharacterFiles__Fv() {
	// register: 17
	register int j;
	// register: 22
	register int yoff;
	// register: 17
	register int move;
	// register: 16
	register int fileno;
	// register: 19
	// size: 0x6C
	register struct CPad *P;
	// register: 20
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
}


// address: 0x80099584
void MemcardPad__Fv() {
	// register: 21
	// size: 0x6C
	register struct CPad *P;
	// register: 18
	register int move;
	// register: 3
	register int FileNo;
	// register: 23
	register int yoff;
	// register: 22
	// size: 0x18
	register struct OMENUITEM *iptr;
	{
		{
			// register: 5
			register int lcs;
			{
				{
					{
						// register: 17
						register int i;
						{
							{
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
										// register: 16
										register int H;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80099BFC
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


// address: 0x8009A22C
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
		}
	}
}


// address: 0x8009A7A8
void CalcVolumes__Fv() {
}


// address: 0x8009A8E8
void GetVolumes__Fv() {
	{
		// register: 9
		register int i;
		{
			// register: 5
			// size: 0xC
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


// address: 0x8009A9F0
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009AB98
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 17
	register int old_pad;
	// register: 16
	register int oldot;
	// register: 19
	// size: 0x6C
	register struct CPad *P;
	{
		{
			{
				// register: 4
				register int x;
			}
		}
	}
}


// address: 0x8009B1C8
void ToggleOptions__Fv() {
}


// address: 0x8009B268
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


// address: 0x8009B574
void _GLOBAL__I_cmenu() {
}


// address: 0x8009B998
void PRIM_GetPrim__FPP7POLY_G4_addr_8009B998(struct POLY_G4 **Prim) {
}


// address: 0x8009BA14
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009BA3C
unsigned short GetDown__C4CPad_addr_8009BA3C(struct CPad *this) {
}


// address: 0x8009BA64
unsigned short GetUp__C4CPad_addr_8009BA64(struct CPad *this) {
}


// address: 0x8009BA8C
unsigned short GetCur__C4CPad_addr_8009BA8C(struct CPad *this) {
}


// address: 0x8009BAB4
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8009BABC
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009BAC4
void SetRGB__6DialogUcUcUc_addr_8009BAC4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009BAE4
void SetBack__6Dialogi_addr_8009BAE4(struct Dialog *this, int Type) {
}


// address: 0x8009BAEC
void SetBorder__6Dialogi_addr_8009BAEC(struct Dialog *this, int Type) {
}


// address: 0x8009BAF4
void ___6Dialog_addr_8009BAF4(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009BB1C
// size: 0x10
struct Dialog *__6Dialog_addr_8009BB1C(struct Dialog *this) {
}


// address: 0x8009BB78
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009BB78(struct TextDat *this, int FrNum) {
}


// address: 0x8009BB94
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009BBEC
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
}


// address: 0x8009BD30
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009BDAC
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 2
	register int type;
	// register: 4
	register int i;
}


// address: 0x8009BE8C
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009BEE0
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009C048
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C14C
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C188
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C20C
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C2B8
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C35C
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


// address: 0x8009C400
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


// address: 0x8009C6AC
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C6B8
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C708
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009C7F4
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


// address: 0x8009C924
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009C9FC
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009CB54
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x8009CBF0
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 18
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x8009CCE4
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


// address: 0x8009CEDC
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009CEDC(struct POLY_FT4 **Prim) {
}


// address: 0x8009CF58
short PlayFMV(struct StrInfo *str) {
	// register: 16
	register short RetVal;
	// register: 17
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009CFF0
void play_movie(char *pszMovie, unsigned char bAllowCancel) {
	// register: 16
	// size: 0x20
	register struct StrInfo *ptr;
	{
		// register: 17
		register int i;
	}
}


// address: 0x8002F660
unsigned char TrimCol__Fs_addr_8002F660(short col) {
}


// address: 0x8002F698
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


// address: 0x800301B4
void SetSpellTrans__Fc(char t) {
}


// address: 0x800301C0
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x80030258
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


// address: 0x800302D0
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80030384
void DrawSpellList__Fv() {
	// register: 17
	register int x;
	// register: 19
	register int y;
	// register: 20
	register int i;
	// register: 18
	register int j;
	// register: 4
	register int t;
	// register: 22
	register unsigned long mask;
	// address: 0xFFFFFFB8
	auto unsigned long spl;
	// register: 5
	register int s;
	// register: 16
	register int c;
	// register: 21
	register int v;
	// address: 0xFFFFFFC0
	auto int NoSpells;
	// register: 6
	register unsigned char trans;
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


// address: 0x8003110C
void SetSpell__Fi(int pnum) {
}


// address: 0x800311E0
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80031290
void ClearPanel__Fv() {
}


// address: 0x800312C0
void InitPanelStr__Fv() {
}


// address: 0x800312E0
void InitControlPan__Fv() {
	// register: 4
	register int i;
}


// address: 0x80031528
void DrawCtrlPan__Fv() {
}


// address: 0x80031554
void DoAutoMap__Fv() {
}


// address: 0x800315C8
void CheckPanelInfo__Fv() {
	// register: 18
	register int i;
	// register: 6
	register int x2;
	// register: 7
	register int y2;
	// register: 20
	// size: 0x4
	register int (*_pSpell)[1];
	// register: 16
	register int c;
	// register: 5
	register int s;
	// register: 16
	register int v;
	// address: 0xFFFFFFC0
	auto int pnum;
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


// address: 0x80031E8C
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


// address: 0x80031F9C
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


// address: 0x800320B8
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


// address: 0x800322F4
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
										// register: 16
										// size: 0x94
										register struct ItemStruct *pi;
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
}


// address: 0x80032A64
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


// address: 0x80032FB0
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80033058
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


// address: 0x800331C0
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x8003328C
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


// address: 0x80033384
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


// address: 0x8003465C
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


// address: 0x80034B00
void DrawChrTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80034BA0
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80034C34
void CheckChrBtns__Fv() {
	// register: 5
	register int pc;
}


// address: 0x80034E78
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80034EFC
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80034FE4
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x8003507C
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80035294
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


// address: 0x80035BF4
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 10
	register char st;
}


// address: 0x80035E58
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80035E8C
void _GLOBAL__D_fontkern() {
}


// address: 0x80035EB4
void _GLOBAL__I_fontkern() {
}


// address: 0x80035EF0
unsigned short GetDown__C4CPad_addr_80035EF0(struct CPad *this) {
}


// address: 0x80035F18
void SetRGB__6DialogUcUcUc_addr_80035F18(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80035F38
void SetBack__6Dialogi_addr_80035F38(struct Dialog *this, int Type) {
}


// address: 0x80035F40
void SetBorder__6Dialogi_addr_80035F40(struct Dialog *this, int Type) {
}


// address: 0x80035F48
void ___6Dialog_addr_80035F48(struct Dialog *this, int __in_chrg) {
}


// address: 0x80035F70
// size: 0x10
struct Dialog *__6Dialog_addr_80035F70(struct Dialog *this) {
}


// address: 0x80035FCC
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80035FCC(struct TextDat *this, int PalNum) {
}


// address: 0x80035FE8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80035FE8(struct TextDat *this, int FrNum) {
}


// address: 0x80036004
void InitCursor__Fv() {
}


// address: 0x8003600C
void FreeCursor__Fv() {
}


// address: 0x80036014
void SetICursor__Fi(int i) {
}


// address: 0x80036070
void SetCursor__Fi(int i) {
}


// address: 0x800360D4
void NewCursor__Fi(int i) {
}


// address: 0x800360F4
void InitLevelCursor__Fv() {
}


// address: 0x80036154
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


// address: 0x800363AC
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


// address: 0x800365D4
void CheckCursMove__Fv() {
}


// address: 0x800365DC
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


// address: 0x800367D8
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x80036820
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80036870
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800368CC
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80036940
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80036A04
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80036B90
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80036CC4
unsigned char TryIconCurs__Fv() {
}


// address: 0x800370A0
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800370A8
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80037158
void LoadLvlGFX__Fv() {
}


// address: 0x800371F4
void LoadAllGFX__Fv() {
}


// address: 0x80037214
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x8003730C
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80037494
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


// address: 0x80037570
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


// address: 0x80037EA4
void game_logic__Fv() {
}


// address: 0x80037FB0
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80038058
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80038090
void alloc_plr__Fv() {
}


// address: 0x80038098
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x800380A0
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x800380C0
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x800380E0
void app_fatal(char *pszFile) {
}


// address: 0x80038110
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038138
void DoMemCardFromInGame__Fv() {
}


// address: 0x80038160
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800381B4
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800381D4
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x8003821C
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003837C
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80038434
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038560
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038694
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800387C4
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800388F4
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038A24
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038B5C
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038C8C
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038DBC
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038EEC
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


// address: 0x800391B0
void InitTowners__Fv() {
}


// address: 0x8003923C
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


// address: 0x800392E0
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80039400
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80039434
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80039468
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80039550
void TownHealer__Fv() {
}


// address: 0x80039578
void TownStory__Fv() {
}


// address: 0x800395A0
void TownDrunk__Fv() {
}


// address: 0x800395C8
void TownBoy__Fv() {
}


// address: 0x800395F0
void TownWitch__Fv() {
}


// address: 0x80039618
void TownBarMaid__Fv() {
}


// address: 0x80039640
void TownCow__Fv() {
}


// address: 0x80039668
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


// address: 0x800398B8
// size: 0x94
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x8003998C
void CowSFX__Fi(int pnum) {
	// address: 0x8010DA38
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80117068
	static int snLastCowSFX;
}


// address: 0x80039AA8
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80039AE8
void TalkToTowner__Fii(int p, int t) {
	// address: 0xFFFFFFE0
	auto int i;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 17
	// size: 0x94
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


// address: 0x8003AF10
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003AF18
void stream_stop__Fv() {
}


// address: 0x8003AF60
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003B024
void stream_update__Fv() {
}


// address: 0x8003B02C
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003B048
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003B0A0
void FreeMonsterSnd__Fv() {
}


// address: 0x8003B0A8
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003B1AC
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003B2BC
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003B3E8
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003B480
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003B4C0
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003B514
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


// address: 0x8003B5AC
void sound_update__Fv() {
}


// address: 0x8003B5E0
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003B624
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003B6CC
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003B770
void SetRndSeed__Fl(long s) {
}


// address: 0x8003B780
long GetRndSeed__Fv() {
}


// address: 0x8003B7C8
long random__Fil(int idx, long v) {
}


// address: 0x8003B834
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003B880
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003B8D0
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003B8D8
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003B968
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003B970
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003BA04
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003BA30
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFEE8
	// size: 0x100
	auto char tempstr[256];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x8003BB3C
void interface_msg_pump__Fv() {
}


// address: 0x8003BB44
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


// address: 0x8003C030
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003C068
void InitItemGFX__Fv() {
}


// address: 0x8003C094
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003C15C
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


// address: 0x8003C374
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003C534
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
	// size: 0x22D0
	register struct PlayerStruct *ptrplr;
	{
		{
			// register: 5
			// size: 0x94
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


// address: 0x8003CFE4
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003D364
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003D400
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x22D0
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


// address: 0x8003D560
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003D5AC
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x22D0
	register struct PlayerStruct *p;
}


// address: 0x8003D68C
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003D920
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003D9E4
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003DAFC
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003DB28
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


// address: 0x8003DCA4
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003DCAC
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003DCDC
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8003E114
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003E3EC
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


// address: 0x8003E618
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


// address: 0x8003E780
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


// address: 0x8003E848
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003E900
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003EB68
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


// address: 0x8003ED58
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


// address: 0x8003F00C
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003F558
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003F590
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003F604
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x80040C10
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


// address: 0x80041078
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80041174
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80041288
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x800414CC
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


// address: 0x8004170C
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80041880
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


// address: 0x80041980
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


// address: 0x80041B30
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80041DD8
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80041EE4
void ItemRndDur__Fi(int ii) {
}


// address: 0x80041F74
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80042280
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x800424C8
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x800425F8
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80042740
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x80042818
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x800428D8
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80042A1C
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80042C08
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


// address: 0x80042E34
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


// address: 0x80042FF4
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x800431B8
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x8004320C
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x94
	register struct ItemStruct *i;
}


// address: 0x800432D4
void ProcessItems__Fv() {
	// register: 6
	register int i;
	// register: 5
	register int ii;
}


// address: 0x80043418
void FreeItemGFX__Fv() {
}


// address: 0x80043420
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


// address: 0x800435A8
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x80043698
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80043768
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8004382C
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x8004389C
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 16
	// size: 0x94
	register struct ItemStruct *pi;
	{
		{
			// register: 2
			register int r;
		}
	}
}


// address: 0x8004399C
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80043A90
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x8004413C
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800443C8
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80044734
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80044A44
void CastScroll__Fi(int pnum) {
}


// address: 0x80044A4C
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *ptrplr;
}


// address: 0x80045060
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x800450F4
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80045170
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80045278
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x94
	auto struct ItemStruct holditem;
}


// address: 0x8004548C
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x800456C0
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80045810
void SpawnStoreGold__Fv() {
}


// address: 0x80045890
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80045A30
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80045A94
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80045C24
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045DA0
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045F1C
char *MakeItemStr__FP10ItemStructUs(struct ItemStruct *ItemPtr, unsigned short ItemNo) {
	// register: 6
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x8004611C
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x80046184
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 5
	register int y;
	// register: 4
	register int c;
}


// address: 0x800461F8
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x80046264
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


// address: 0x80046F14
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


// address: 0x80047158
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


// address: 0x8004721C
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


// address: 0x8004772C
void FreeLightTable__Fv() {
}


// address: 0x80047734
void InitLightTable__Fv() {
}


// address: 0x8004773C
void MakeLightTable__Fv() {
}


// address: 0x80047744
void InitLightMax__Fv() {
}


// address: 0x80047768
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x800477AC
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x80047840
void AddUnLight__Fi(int i) {
}


// address: 0x80047870
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x8004789C
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x800478D4
void light_fix__Fi(int i) {
}


// address: 0x800478DC
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80047914
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x80047958
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x80047988
void ProcessLightList__Fv() {
	// register: 7
	register int i;
	// register: 16
	register int j;
	// register: 4
	register unsigned char temp;
}


// address: 0x80047AB4
void SavePreLighting__Fv() {
}


// address: 0x80047ABC
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80047B0C
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80047C10
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80047CC4
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x80047D7C
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x80047FDC
void FreeQuestText__Fv() {
}


// address: 0x80047FE4
void InitQuestText__Fv() {
}


// address: 0x80047FF0
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


// address: 0x80048130
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x80048258
void DrawQTextBack__Fv() {
}


// address: 0x800482C8
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80048354
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80048420
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
	// register: 23
	register int ty;
	// register: 19
	register int l;
	// register: 17
	register int i;
	// register: 30
	register unsigned char doneflag;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
	// register: 20
	register int LetterCount;
}


// address: 0x80048750
void _GLOBAL__D_QBack() {
}


// address: 0x80048778
void _GLOBAL__I_QBack() {
}


// address: 0x800487A0
void SetRGB__6DialogUcUcUc_addr_800487A0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800487C0
void SetBorder__6Dialogi_addr_800487C0(struct Dialog *this, int Type) {
}


// address: 0x800487C8
void ___6Dialog_addr_800487C8(struct Dialog *this, int __in_chrg) {
}


// address: 0x800487F0
// size: 0x10
struct Dialog *__6Dialog_addr_800487F0(struct Dialog *this) {
}


// address: 0x8004884C
int GetCharWidth__5CFontc_addr_8004884C(struct CFont *this, char ch) {
}


// address: 0x800488A4
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800488A4(struct TextDat *this, int FrNum) {
}


// address: 0x800488C0
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x800488C8
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800488D0
void delta_init__Fv() {
}


// address: 0x80048930
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 2
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x800489A0
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 4
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x80048A00
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 3
	// size: 0xC
	register struct DMonsterStr *pD;
}


// address: 0x80048A78
void delta_leave_sync__FUc(unsigned char bLevel) {
	{
		// register: 19
		register int i;
		{
			// register: 4
			register int ii;
			// register: 16
			// size: 0xC
			register struct DMonsterStr *pD;
		}
	}
}


// address: 0x80048CD0
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80048D10
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 24
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x80048ED4
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 8
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 9
	register int i;
}


// address: 0x8004903C
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x80049060
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x80049084
void DeltaAddItem__Fi(int ii) {
	// register: 5
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 8
	register int i;
}


// address: 0x800492C4
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x800492F4
int DeltaImportData__FPc(char *Src) {
}


// address: 0x80049328
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800493D0
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x800493F8
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdGolem cmd;
}


// address: 0x80049444
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x80049474
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x800494AC
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x800494EC
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x80049534
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x80049560
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80049590
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x800495C8
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x8004963C
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80049770
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x800497F4
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80049854
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x800498C4
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x800499CC
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x80049A70
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x80049AA0
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x80049BB4
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80049BBC
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80049BF0
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80049C4C
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80049C8C
void check_update_plr__Fi(int pnum) {
}


// address: 0x80049C94
unsigned long On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80049D4C
unsigned long On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049D7C
unsigned long On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049DAC
unsigned long On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049DDC
unsigned long On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049E0C
unsigned long On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049E80
unsigned long On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049F28
unsigned long On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				// register: 18
				register int ii;
			}
		}
	}
}


// address: 0x8004A06C
unsigned long On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
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
}


// address: 0x8004A244
unsigned long On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A2EC
unsigned long On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004A424
unsigned long On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
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
}


// address: 0x8004A5F4
unsigned long On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004A694
unsigned long On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		// register: 17
		// size: 0x18
		register struct TCmdPItem *p;
		{
			{
				// register: 3
				register int ii;
			}
		}
	}
}


// address: 0x8004A820
unsigned long On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				// register: 3
				register int ii;
			}
		}
	}
}


// address: 0x8004A964
unsigned long On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		// register: 16
		// size: 0x18
		register struct TCmdPItem *p;
		{
			{
			}
		}
	}
}


// address: 0x8004AA84
unsigned long On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB34
unsigned long On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AC40
unsigned long On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AD3C
unsigned long On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AE3C
unsigned long On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004AF6C
unsigned long On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004B09C
unsigned long On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B108
unsigned long On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 19
			// size: 0x4
			register struct TCmdParam1 *p;
			// register: 16
			register int dx;
			// register: 2
			register int dy;
		}
	}
}


// address: 0x8004B264
unsigned long On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B350
unsigned long On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B434
unsigned long On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B51C
unsigned long On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B604
unsigned long On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B694
unsigned long On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B6D0
unsigned long On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B740
unsigned long On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B7E8
unsigned long On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B820
unsigned long On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B90C
unsigned long On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B978
unsigned long On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B9E4
unsigned long On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				{
					{
						// register: 6
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
	}
}


// address: 0x8004BB58
unsigned long On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BC60
unsigned long On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BCA8
unsigned long On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BE70
unsigned long On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004BF0C
unsigned long On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004BFA8
unsigned long On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C044
unsigned long On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0DC
unsigned long On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C174
unsigned long On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C17C
unsigned long On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C184
unsigned long On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C18C
unsigned long On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C1E4
unsigned long On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004C47C
unsigned long On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
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
}


// address: 0x8004C610
unsigned long On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C664
unsigned long On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C6B0
unsigned long On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C6F0
unsigned long On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C730
unsigned long On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C770
unsigned long On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C7B0
unsigned long On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004C7F8
unsigned long On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
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
}


// address: 0x8004C91C
unsigned long On_CHEAT_EXPERIENCE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C924
unsigned long On_CHEAT_SPELL_LEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C92C
unsigned long On_DEBUG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C934
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80117D70
	static unsigned char sbLastCmd;
}


// address: 0x8004CD88
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004CDB4
int InitLevelType__Fi(int l) {
}


// address: 0x8004CE00
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004CF90
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004D004
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


// address: 0x8004D22C
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


// address: 0x8004D448
void FreeObjectGFX__Fv() {
}


// address: 0x8004D454
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004D50C
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004D790
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004D7F0
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004D818
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004D924
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


// address: 0x8004DB34
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


// address: 0x8004DE58
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004DEBC
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


// address: 0x8004E198
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004E208
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004E39C
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004E3E8
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004E4F8
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004E7C8
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


// address: 0x8004EB18
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004EDA8
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004F048
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004F080
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


// address: 0x8004F154
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004F15C
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004F164
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004F3E4
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004F488
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F82C
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FC04
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FF9C
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80050334
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8005063C
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80050944
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


// address: 0x80050E40
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050FF8
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80051168
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800512C4
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


// address: 0x800514B0
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


// address: 0x800519A4
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x80051D4C
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x80051F24
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x800522F4
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x800524B8
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80052650
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800528A4
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x80052A74
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052C2C
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052D88
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052EE4
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


// address: 0x80052FEC
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


// address: 0x800532A4
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


// address: 0x80053468
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x800534D8
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


// address: 0x80055A9C
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055C18
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055DE8
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055ED0
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80056040
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80056130
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x800561D8
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x8005628C
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


// address: 0x80056838
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x800569E4
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80056AD4
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80056BB4
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80056FEC
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057100
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057214
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057328
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80057508
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


// address: 0x800576F8
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80057C4C
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057DAC
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80057E08
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80057F20
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


// address: 0x80058058
void SyncLever__Fi(int i) {
}


// address: 0x800580D4
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x800581CC
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


// address: 0x80058328
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058490
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x800585BC
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x800586FC
void GetObjectStr__Fi(int i) {
}


// address: 0x80058B18
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


// address: 0x80058D6C
int GetNumOfFrames__7TextDatii_addr_80058D6C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058DA4
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80058DA4(struct TextDat *this, int Creature) {
}


// address: 0x80058E1C
int GetNumOfCreatures__7TextDat_addr_80058E1C(struct TextDat *this) {
}


// address: 0x80058E30
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80058E38
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058E64
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x80058F18
void SetupLocalPlayer__Fv() {
}


// address: 0x80058F38
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F7C
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F90
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FB0
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FB8
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058FD4
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FF8
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x80059234
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80059650
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x800596B8
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80059828
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


// address: 0x80059A34
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


// address: 0x80059AB8
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


// address: 0x80059E84
void InitMultiView__Fv() {
}


// address: 0x80059EE0
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059F24
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059FB8
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005A0AC
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A0C0
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A14C
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A1B0
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800CB5BC
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A1EC
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A218
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
}


// address: 0x8005A2A0
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A338
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A4D4
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


// address: 0x8005A5F4
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A714
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A8AC
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


// address: 0x8005AA70
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
	// address: 0xFFFFFF48
	// size: 0x94
	auto struct ItemStruct ear;
	// register: 16
	register int i;
	// register: 19
	// size: 0x22D0
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


// address: 0x8005AE18
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B260
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005B3A4
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B3C4
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


// address: 0x8005B6AC
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B768
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B8AC
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B93C
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005B9F8
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BA00
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005BA88
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BDF4
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BF94
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


// address: 0x8005C5C4
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


// address: 0x8005C974
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005CA04
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


// address: 0x8005CD90
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CE90
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CF50
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CFF0
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


// address: 0x8005DF60
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E2D0
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8005E3CC
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E448
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E55C
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E564
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E97C
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E9E4
void ValidatePlayer__Fv() {
	// register: 5
	register int i;
	// register: 7
	register int gt;
	// register: 2
	register int pc;
	// register: 10
	register unsigned long msk;
	// register: 14
	register unsigned long b;
}


// address: 0x8005EEC0
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EF5C
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
			// size: 0x22D0
			register struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x8005F290
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F2B8
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


// address: 0x8005F460
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F468
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x1C
	register struct Spell_Target *spl;
	// register: 7
	register unsigned char addflag;
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
}


// address: 0x8005F874
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005F9B0
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F9E0
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x8005FB7C
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FC98
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FD84
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FE68
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FF44
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005FF88
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x80060064
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x800600D4
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x800601B0
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x8006021C
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060224
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x80060554
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006057C
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x800605C0
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800605F4
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060628
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006065C
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80060690
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800606C4
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x800606FC
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060730
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060758
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060780
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800607A8
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x800607F0
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060818
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060840
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060874
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006089C
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800608C4
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80060908
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x8006093C
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060970
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x800609BC
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80060A08
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060A54
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80060AA8
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060AF4
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80060B40
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80060B90
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060BDC
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060C28
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060C74
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060CC0
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060D0C
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060D58
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060DA8
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060DF4
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060E44
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060E90
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060EDC
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060F28
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060F74
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80060FC0
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x8006100C
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80061058
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x800610A4
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x800610F0
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x8006113C
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80061188
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x800611BC
void PRIM_GetPrim__FPP8POLY_FT4_addr_800611BC(struct POLY_FT4 **Prim) {
}


// address: 0x80061238
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80061288
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80061294
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800612A0
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800612AC
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


// address: 0x800614FC
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x800619B4
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


// address: 0x80061B58
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061BEC
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


// address: 0x800621CC
void SetReturnLvlPos__Fv() {
}


// address: 0x800622DC
void GetReturnLvlPos__Fv() {
}


// address: 0x80062330
void ResyncMPQuests__Fv() {
}


// address: 0x8006246C
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x800629CC
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


// address: 0x80062BF8
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062E30
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062EB0
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062FC0
void QuestlogUp__Fv() {
}


// address: 0x80063018
void QuestlogDown__Fv() {
}


// address: 0x80063080
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x8006313C
void QuestlogESC__Fv() {
}


// address: 0x8006317C
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x800631FC
void _GLOBAL__D_questlog() {
}


// address: 0x80063224
void _GLOBAL__I_questlog() {
}


// address: 0x8006324C
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x80063258
void SetRGB__6DialogUcUcUc_addr_80063258(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80063278
void SetBack__6Dialogi_addr_80063278(struct Dialog *this, int Type) {
}


// address: 0x80063280
void SetBorder__6Dialogi_addr_80063280(struct Dialog *this, int Type) {
}


// address: 0x80063288
void ___6Dialog_addr_80063288(struct Dialog *this, int __in_chrg) {
}


// address: 0x800632B0
// size: 0x10
struct Dialog *__6Dialog_addr_800632B0(struct Dialog *this) {
}


// address: 0x8006330C
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8006330C(struct TextDat *this, int PalNum) {
}


// address: 0x80063328
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80063328(struct TextDat *this, int FrNum) {
}


// address: 0x80063344
void DrawView__Fii(int StartX, int StartY) {
	{
		{
			// address: 0xFFFFFFF0
			// size: 0x4
			auto char levno[4];
			// register: 2
			register int len;
		}
	}
}


// address: 0x800635B0
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x800636A8
void FreeStoreMem__Fv() {
}


// address: 0x800636B0
void DrawSTextBack__Fv() {
}


// address: 0x80063720
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	// register: 21
	register int xx;
	// register: 19
	register int yy;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto char valstr[32];
	// address: 0xFFFFFFD0
	auto int SpinnerY;
	// register: 20
	register unsigned char R;
	// register: 18
	register unsigned char G;
	// register: 17
	register unsigned char B;
	// address: 0x8011726C
	static unsigned char DaveFix;
}


// address: 0x80063AB0
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063B44
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063BDC
void AddSLine__Fi(int y) {
}


// address: 0x80063C2C
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063C54
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063D08
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x8006414C
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


// address: 0x80064768
void S_StartSmith__Fv() {
}


// address: 0x800648F0
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064A9C
void S_StartSBuy__Fv() {
}


// address: 0x80064BCC
void S_ScrollSPBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80064D94
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064EE4
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064FCC
void S_ScrollSSell__Fi(int idx) {
	// register: 17
	register int l;
	// register: 21
	register int ls;
	// register: 5
	register int v;
	// register: 18
	register char iclr;
}


// address: 0x800651B8
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800655E0
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80065688
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065864
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065D30
void S_StartWitch__Fv() {
}


// address: 0x80065E70
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x8006601C
void S_StartWBuy__Fv() {
}


// address: 0x80066144
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80066268
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800668B4
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x80066940
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066ABC
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066ED0
void S_StartNoMoney__Fv() {
}


// address: 0x80066F38
void S_StartNoRoom__Fv() {
}


// address: 0x80066F98
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x800672CC
void S_StartBoy__Fv() {
}


// address: 0x8006745C
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x800675A8
void S_StartHealer__Fv() {
}


// address: 0x8006777C
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800678DC
void S_StartHBuy__Fv() {
}


// address: 0x800679FC
void S_StartStory__Fv() {
}


// address: 0x80067AEC
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067B20
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067BF0
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006862C
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x800687BC
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


// address: 0x800689EC
void S_StartTavern__Fv() {
}


// address: 0x80068AE4
void S_StartBarMaid__Fv() {
}


// address: 0x80068BB8
void S_StartDrunk__Fv() {
}


// address: 0x80068C8C
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068F74
void DrawSText__Fv() {
}


// address: 0x80068FB4
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006907C
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069228
void STextESC__Fv() {
}


// address: 0x800693D8
void STextUp__Fv() {
}


// address: 0x80069560
void STextDown__Fv() {
}


// address: 0x800696F8
void S_SmithEnter__Fv() {
}


// address: 0x800697CC
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006984C
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800698CC
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069D18
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069EFC
void S_SBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A0F8
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A278
void S_SPBuyEnter__Fv() {
	// register: 6
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
	{
		// register: 5
		register int xx;
	}
}


// address: 0x8006A4BC
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


// address: 0x8006A78C
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


// address: 0x8006A9F0
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006ACD8
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006ADCC
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B034
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B180
void S_WitchEnter__Fv() {
}


// address: 0x8006B230
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B424
void S_WBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B620
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006B714
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B884
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B9D0
void S_BoyEnter__Fv() {
}


// address: 0x8006BB08
void BoyBuyItem__Fv() {
}


// address: 0x8006BB8C
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BE18
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C014
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C35C
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C478
void S_HealerEnter__Fv() {
}


// address: 0x8006C510
void S_HBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C72C
void S_StoryEnter__Fv() {
}


// address: 0x8006C7C4
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C930
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


// address: 0x8006CB28
void S_TavernEnter__Fv() {
}


// address: 0x8006CB98
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CC08
void S_DrunkEnter__Fv() {
}


// address: 0x8006CC78
void STextEnter__Fv() {
}


// address: 0x8006CE88
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CFA0
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CFB4
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CFDC
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006D004
unsigned short GetDown__C4CPad_addr_8006D004(struct CPad *this) {
}


// address: 0x8006D02C
void SetRGB__6DialogUcUcUc_addr_8006D02C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006D04C
void SetBorder__6Dialogi_addr_8006D04C(struct Dialog *this, int Type) {
}


// address: 0x8006D054
void ___6Dialog_addr_8006D054(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006D07C
// size: 0x10
struct Dialog *__6Dialog_addr_8006D07C(struct Dialog *this) {
}


// address: 0x8006D0D8
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006D24C
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


// address: 0x8006D444
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


// address: 0x8006D534
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


// address: 0x8006D930
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


// address: 0x8006DA98
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


// address: 0x8006DB7C
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


// address: 0x8006DC14
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006DF2C
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006E1DC
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x8006E63C
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006EAB8
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006EFC4
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


// address: 0x8006F084
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006F178
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006F26C
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006F360
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


// address: 0x8006F67C
void FadeGameOut__Fv() {
}


// address: 0x8006F718
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
							// register: 18
							register char m;
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


// address: 0x8006FC44
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


// address: 0x8006FF0C
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80070050
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x800700F0
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80070354
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x80070608
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8007086C
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070874
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x800708DC
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x800708FC
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x8007096C
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80070A08
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070A70
void music_stop__Fv() {
}


// address: 0x80070ABC
void music_fade__Fv() {
}


// address: 0x80070AFC
void music_start__Fi(int nTrack) {
}


// address: 0x80070B80
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


// address: 0x8007103C
void CloseInvChr__Fv() {
}


// address: 0x800710A4
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x80071150
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x800711C0
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071230
// size: 0x90
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80071370
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071390
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800713D4
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071418
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 17
	register int i;
}


// address: 0x80071584
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
	// register: 20
	register int oc;
}


// address: 0x8007164C
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x800716A8
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800716E4
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80071768
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80071B34
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80071BE0
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071CF8
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80071D3C
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 16
	register int lnd;
	// register: 17
	register int rnd;
	// register: 22
	register int newdir;
}


// address: 0x80072040
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072300
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x800724FC
void show_combos__7GamePad(struct GamePad *this) {
	// register: 21
	register int x;
	// register: 19
	register int y;
	// register: 6
	register int p;
	{
		// register: 18
		register int i;
	}
}


// address: 0x80072674
void Handle__7GamePad(struct GamePad *this) {
	{
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
													// register: 17
													register int cp;
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
}


// address: 0x80072C24
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEC8
	// size: 0x90
	auto struct GamePad GPad1;
	// address: 0xFFFFFF58
	// size: 0x90
	auto struct GamePad GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80072E1C
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80072ECC
void Init_GamePad__Fv() {
}


// address: 0x80072EFC
void InitGamePadVars__Fv() {
}


// address: 0x80072F74
void MoveToScrollTarget__7CBlocks_addr_80072F74(struct CBlocks *this) {
}


// address: 0x80072F88
unsigned short GetDown__C4CPad_addr_80072F88(struct CPad *this) {
}


// address: 0x80072FB0
unsigned short GetUp__C4CPad_addr_80072FB0(struct CPad *this) {
}


// address: 0x80072FD8
unsigned short GetCur__C4CPad_addr_80072FD8(struct CPad *this) {
}


// address: 0x80073000
void DoGameTestStuff__Fv() {
}


// address: 0x8007302C
void DoInitGameStuff__Fv() {
}


// address: 0x80073060
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073080
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x800730A0
void GRL_InitGwin__Fv() {
}


// address: 0x800730AC
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x800730BC
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x800730E4
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80073188
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x800731D0
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x800731DC
void LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
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


// address: 0x800732E0
char *GetStr__Fi(int StrId) {
}


// address: 0x80073348
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


// address: 0x8007344C
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800734A4
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800734B0
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x800735B8
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80073638
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


// address: 0x80073B70
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80073CF0
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80073E50
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80073EE8
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80073F98
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073FFC
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074114
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x800741AC
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074244
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800742AC
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 3
	register int frame;
}


// address: 0x80074340
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


// address: 0x80074420
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


// address: 0x800744F8
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074588
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


// address: 0x800746A4
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074740
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800747A8
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074810
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80074944
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80074A88
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074AF0
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074B48
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


// address: 0x80074C14
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074C78
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074C80
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


// address: 0x800751A8
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075250
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075258
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007528C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007528C(struct POLY_FT4 **Prim) {
}


// address: 0x80075308
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri_addr_80075308(int PNum) {
}


// address: 0x80075358
int GetLastOtPos__C7CPlayer_addr_80075358(struct CPlayer *this) {
}


// address: 0x80075364
int GetLastScrY__C7CPlayer_addr_80075364(struct CPlayer *this) {
}


// address: 0x80075370
int GetLastScrX__C7CPlayer_addr_80075370(struct CPlayer *this) {
}


// address: 0x8007537C
int GetNumOfFrames__7TextDat_addr_8007537C(struct TextDat *this) {
}


// address: 0x80075390
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80075390(struct TextDat *this, int FrNum) {
}


// address: 0x800753AC
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800753E4
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80075464
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x800754FC
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x800755AC
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


// address: 0x80075768
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


// address: 0x800758FC
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


// address: 0x800759B4
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


// address: 0x80075C48
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80075D20
// size: 0x28
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80075DA8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075DD4
// size: 0x28
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075E00
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075E2C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075E58
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075E84
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075EA8
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075ECC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075EF8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075F24
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075F50
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075F7C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075FA8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075FD4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076000
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007602C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076058
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076084
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800760B0
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800760DC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076108
// size: 0x28
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076134
// size: 0x28
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076160
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007618C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800761B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800761E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076210
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007623C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076268
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076294
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800762C0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800762EC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076318
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076344
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076370
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007639C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763C8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763F4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076420
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007644C
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x800764E0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076570
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076600
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076690
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076720
// size: 0x28
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007674C
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076778
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767A4
// size: 0x28
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767D0
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767FC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076828
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076854
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076880
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768AC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768D8
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


// address: 0x80076A30
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80076AFC
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80076BC8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BF4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C20
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C4C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C78
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C9C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CC8
// size: 0x28
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CF4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D20
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D4C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D78
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DA4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DD0
// size: 0x28
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DFC
// size: 0x28
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E28
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E54
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E80
// size: 0x28
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EAC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076ED8
// size: 0x28
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F04
// size: 0x28
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F30
// size: 0x28
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F5C
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


// address: 0x800770F0
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007711C
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077140
// size: 0x28
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007716C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077198
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800771C4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800771F0
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007721C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077248
// size: 0x28
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077274
// size: 0x28
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772A0
// size: 0x28
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772CC
// size: 0x28
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772F8
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800772F8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80077334
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077334(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8007735C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007735C(struct POLY_FT4 **Prim) {
}


// address: 0x800773D8
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks_addr_800773D8(struct CBlocks *this) {
}


// address: 0x800773E4
int GetNumOfFrames__7TextDatii_addr_800773E4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8007741C
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8007741C(struct TextDat *this, int Creature) {
}


// address: 0x80077494
int GetNumOfCreatures__7TextDat_addr_80077494(struct TextDat *this) {
}


// address: 0x800774A8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800774A8(struct TextDat *this, int FrNum) {
}


// address: 0x800774C4
void gamemenu_on__Fv() {
}


// address: 0x800774CC
void gamemenu_off__Fv() {
}


// address: 0x800774D4
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x800774DC
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x800774E4
void ResetPal__Fv() {
}


// address: 0x800774EC
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007751C
bool GetFadeState__Fv() {
}


// address: 0x80077528
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x8007762C
void DrawFadedScreen__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007776C
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077828
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x800778AC
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077904
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x8007799C
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x800779F0
void PRIM_GetPrim__FPP8POLY_FT4_addr_800779F0(struct POLY_FT4 **Prim) {
}


// address: 0x80077A6C
void M_CheckEFlag__Fi(int i) {
}


// address: 0x80077A8C
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


// address: 0x80077BF8
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x80077C34
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80077C80
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x80077CC8
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80077D28
void M_Enemy__Fi(int i) {
	// address: 0xFFFFFFA8
	auto int j;
	// register: 19
	register int mi;
	// register: 19
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
	// register: 22
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
			// register: 21
			register int _my;
		}
	}
}


// address: 0x800782E8
void ClearMVars__Fi(int i) {
}


// address: 0x8007835C
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x800787A8
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80078858
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x8007899C
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80078A94
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x80078B3C
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


// address: 0x80078D2C
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80078E0C
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


// address: 0x80079088
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80079390
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x8007969C
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


// address: 0x8001F458
void TICK_InitModule();

// address: 0x8001F478
void TICK_Set(unsigned long Val);

// address: 0x8001F488
unsigned long TICK_Get();

// address: 0x8001F498
void TICK_Update();

// address: 0x8001F4B8
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001F4E4
char *TICK_GetDateString();

// address: 0x8001F4F4
char *TICK_GetTimeString();

// address: 0x8001F504
unsigned char GU_InitModule();

// address: 0x8001F530
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001F560
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001F5F0
long GU_GetSRnd();

// address: 0x8001F610
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001F64C
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001F670
void main();

// address: 0x8001F6C0
unsigned char DBG_OpenModule();

// address: 0x8001F6C8
void DBG_PollHost();

// address: 0x8001F6D0
void DBG_Halt();

// address: 0x8001F6D8
void DBG_SendMessage(char *e);

// address: 0x8001F6F0
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001F700
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001F72C
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001F73C
void SendPsyqString(char *e);

// address: 0x8001F744
void DBG_SetPollRoutine(void (*Func)());

// address: 0x8001F754
unsigned long GTIMSYS_GetTimer();

// address: 0x8001F778
void GTIMSYS_ResetTimer();

// address: 0x8001F79C
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8001F9D0
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001F9E0
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


// address: 0x8001FB14
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FBCC
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


// address: 0x8001FCEC
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


// address: 0x8001FE84
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FEE4
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FF60
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020000
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


// address: 0x80020074
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


// address: 0x800200E8
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


// address: 0x80020164
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80020184
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x800201D0
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x80020200
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x80020230
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80020260
// size: 0x20
struct MEM_HDR *FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
}


// address: 0x800202B8
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


// address: 0x80020320
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


// address: 0x80020388
// size: 0x28
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x800203C4
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


// address: 0x80020498
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020574
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x8002070C
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


// address: 0x80020778
// size: 0x20
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x80020800
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x80020840
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


// address: 0x800208C4
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


// address: 0x80020960
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x800209C8
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020A1C
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020A70
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020AF4
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020B50
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


// address: 0x80020C4C
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020CF8
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020D50
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020D80
// size: 0x4
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020D90
char *GAL_GetLastErrorText();

// address: 0x80020DB8
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


// address: 0x80020E20
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


// address: 0x80020E88
void GAL_SetTimeStamp(int Time);

// address: 0x80020E98
void GAL_IncTimeStamp();

// address: 0x80020EB8
int GAL_GetTimeStamp();

// address: 0x80020EC8
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80020F18
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80020F68
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x80021014
long GAL_GetSize(long hnd) {
}


// address: 0x80021068
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


// address: 0x800211D0
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


// address: 0x80021274
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x800212A8
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x80021314
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


// address: 0x8002140C
// size: 0x20
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x80021448
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
}


// address: 0x800214D8
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


// address: 0x80021554
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


// address: 0x80021608
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


// address: 0x80021664
void GAL_MemDump(unsigned long Type);

// address: 0x800216D8
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x800216E8
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x80021714
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x8002175C
int GAL_GetNumFreeHeaders();

// address: 0x8002176C
unsigned long GAL_GetLastTypeAlloced();

// address: 0x8002177C
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x80021794
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x800217E8
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x800217F8
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


// address: 0x800218E8
void DoEpi(struct TASK *T);

// address: 0x80021938
void DoPro(struct TASK *T);

// address: 0x80021988
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x800219FC
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


// address: 0x80021BE4
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x80021DA4
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x80021E80
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x80021F08
void TSK_Die();

// address: 0x80021F34
void TSK_Kill(struct TASK *T);

// address: 0x80021F84
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x80021F94
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x80022010
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80022058
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8002209C
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x800220AC
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x800220C4
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x8002211C
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x80022134
void TSK_ClearExecFilter();

// address: 0x80022158
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


// address: 0x80022258
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


// address: 0x800222D0
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x800222E4
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x800222F8
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8002230C
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x80022320
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x80022334
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x80022348
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x80022394
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800223B4
void LoTskKill(struct TASK *T) {
}


// address: 0x80022424
void ExecuteTask(struct TASK *T);

// address: 0x80022474
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8002248C
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800224A4
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800224BC
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800224D4
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x800224EC
void TSK_ClearEpiProFilter();

// address: 0x80022520
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x80022530
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x80022548
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x80022570
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8002259C
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x800225D8
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x800225E8
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x80022624
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x80022634
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8002264C
unsigned char GSYS_InitMachine();

// address: 0x800226A0
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x800226D4
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x80024A1C
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80024A68
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
	// address: 0x80024BBC
	bool rflag;
	// address: 0x80024F24
	bool nosign;
	// address: 0x80024FD0
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


