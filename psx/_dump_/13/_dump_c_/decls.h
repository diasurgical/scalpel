#include "types.h"

// address: 0x80113464
extern int NumOfMonsterListLevels;

// address: 0x800A3A64
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x80113160
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x80113164
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x80113168
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x80113170
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x80113174
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x80113178
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x8011317C
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x80113180
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x80113184
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x80113188
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x8011318C
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x80113190
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x80113194
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x80113198
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x8011319C
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x801131A0
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x801131A4
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x801131AC
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x801131B0
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x801131B8
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x801131BC
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x801131C0
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x801131C4
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x801131C8
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x801131CC
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x801131D0
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x801131D4
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x801131D8
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x801131E0
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x801131E4
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x801131E8
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x801131EC
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x801131F0
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x801131F4
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x801131F8
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x801131FC
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x80113200
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x80113204
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x80113208
// size: 0x3
static unsigned char NumsLEV8M8A[3];

// address: 0x8011320C
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x80113210
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x80113214
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x80113218
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x8011321C
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x80113220
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x80113224
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x80113228
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x8011322C
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x80113230
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x80113234
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x80113238
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x8011323C
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x80113240
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x80113244
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x80113248
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x8011324C
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x80113250
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x80113254
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x80113258
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x8011325C
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x80113260
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x80113264
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x80113268
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x8011326C
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x80113270
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x80113274
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x80113278
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x8011327C
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x80113280
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x80113284
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x80113288
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x8011328C
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x80113290
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x80113294
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x80113298
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8011329C
// size: 0x2
static unsigned char NumsLEV16M16D[2];

// address: 0x800A35A4
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A35D4
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A3634
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A3674
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A36E4
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A3754
// size: 0x50
static struct MonstList ChoiceListLEV6[5];

// address: 0x800A37A4
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A37F4
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A3854
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A3894
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800A38E4
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A3934
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A3974
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A39C4
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A3A24
// size: 0x30
static struct MonstList ChoiceListLEV15[3];

// address: 0x800A3A54
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x80114BA4
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800A3AE4
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x80113474
extern int ArgsSoFar;

// address: 0x80113478
extern unsigned long *ThisOt;

// address: 0x8011347C
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x80114BA8
static long hndPrimBuffers;

// address: 0x80114BAC
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x80114BB0
static unsigned char BufferDepth;

// address: 0x80114BB1
static unsigned char WorkRamId;

// address: 0x80114BB2
static unsigned char ScrNum;

// address: 0x80114BB4
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x80114BB8
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x80114BBC
static unsigned char BufferNum;

// address: 0x80113480
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x80114BBD
static unsigned char LastBuffer;

// address: 0x80114BC0
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x80114BC4
static int ThisOtSize;

// address: 0x80113484
// size: 0x8
static struct RECT ScrRect;

// address: 0x80114BC8
static int VidWait;

// address: 0x80115030
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x80114BCC
static void (*VbFunc)();

// address: 0x80114BD0
static unsigned long VidTick;

// address: 0x80114BD4
static int VXOff;

// address: 0x80114BD8
static int VYOff;

// address: 0x80113498
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x8011349C
extern int LastFmem;

// address: 0x8011348C
extern unsigned int GSYS_MemStart;

// address: 0x80113490
extern unsigned int GSYS_MemEnd;

// address: 0x800A3E2C
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A3E54
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x80113494
extern int LowestFmem;

// address: 0x801134AC
extern int FileSYS;

// address: 0x80114BDC
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x80114BE0
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x801134C6
extern short DavesPad;

// address: 0x801134C8
extern short DavesPadDeb;

// address: 0x800A3E7C
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x80115110
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A4720
// size: 0x474
extern struct TextDat *AllDats[285];

// address: 0x80113518
extern int TpW;

// address: 0x8011351C
extern int TpH;

// address: 0x80113520
extern int TpXDest;

// address: 0x80113524
extern int TpYDest;

// address: 0x80113528
// size: 0x8
extern struct RECT R;

// address: 0x800A4B94
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800A4BC8
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A3EB0
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x8011353C
static bool ChunkGot;

// address: 0x800A4BF0
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800A4C00
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A4C10
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x80113550
extern unsigned long BL_NoLumpFiles;

// address: 0x80113554
extern unsigned long BL_NoStreamFiles;

// address: 0x80113558
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x8011355C
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x80113560
extern unsigned char FileLoaded;

// address: 0x80113590
extern int NoTAllocs;

// address: 0x800A4D3C
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x80114BEC
static bool CanPause;

// address: 0x80114BF0
static bool Paused;

// address: 0x80114BF4
// size: 0x8
static struct RECT PRect;

// address: 0x80115138
// size: 0x10
static struct Dialog PBack;

// address: 0x800A4FA4
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800A4FC8
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800A4FEC
// size: 0x708
extern unsigned char demo_buffer[1800];

// address: 0x801135BC
extern int demo_pad_time;

// address: 0x801135C0
extern int demo_pad_count;

// address: 0x800A4ECC
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800A4F38
// size: 0x6C
extern struct CPad Pad1;

// address: 0x801135C4
extern unsigned long demo_finish;

// address: 0x801135C8
extern int cac_pad;

// address: 0x801135E4
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x801135E8
extern int CharFrm;

// address: 0x801135D5
extern unsigned char WHITER;

// address: 0x801135D6
extern unsigned char WHITEG;

// address: 0x801135D7
extern unsigned char WHITEB;

// address: 0x801135D8
extern unsigned char BLUER;

// address: 0x801135D9
extern unsigned char BLUEG;

// address: 0x801135DA
extern unsigned char BLUEB;

// address: 0x801135DB
extern unsigned char REDR;

// address: 0x801135DC
extern unsigned char REDG;

// address: 0x801135DD
extern unsigned char REDB;

// address: 0x801135DE
extern unsigned char GOLDR;

// address: 0x801135DF
extern unsigned char GOLDG;

// address: 0x801135E0
extern unsigned char GOLDB;

// address: 0x800A56F4
// size: 0x218
extern struct CFont MediumFont;

// address: 0x800A590C
// size: 0x218
extern struct CFont LargeFont;

// address: 0x800A5B24
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800A5BD8
// size: 0x10
extern struct FontTab LFont;

// address: 0x800A5BE8
// size: 0x136
extern struct FontItem MFontTab[155];

// address: 0x800A5D20
// size: 0x10
extern struct FontTab MFont;

// address: 0x801135FD
extern unsigned char DialogRed;

// address: 0x801135FE
extern unsigned char DialogGreen;

// address: 0x801135FF
extern unsigned char DialogBlue;

// address: 0x80113600
extern unsigned char DialogTRed;

// address: 0x80113601
extern unsigned char DialogTGreen;

// address: 0x80113602
extern unsigned char DialogTBlue;

// address: 0x80113604
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x80113608
extern int DialogBackGfx;

// address: 0x8011360C
extern int DialogBackW;

// address: 0x80113610
extern int DialogBackH;

// address: 0x80113614
extern int DialogBorderGfx;

// address: 0x80113618
extern int DialogBorderTLW;

// address: 0x8011361C
extern int DialogBorderTLH;

// address: 0x80113620
extern int DialogBorderTRW;

// address: 0x80113624
extern int DialogBorderTRH;

// address: 0x80113628
extern int DialogBorderBLW;

// address: 0x8011362C
extern int DialogBorderBLH;

// address: 0x80113630
extern int DialogBorderBRW;

// address: 0x80113634
extern int DialogBorderBRH;

// address: 0x80113638
extern int DialogBorderTW;

// address: 0x8011363C
extern int DialogBorderTH;

// address: 0x80113640
extern int DialogBorderBW;

// address: 0x80113644
extern int DialogBorderBH;

// address: 0x80113648
extern int DialogBorderLW;

// address: 0x8011364C
extern int DialogBorderLH;

// address: 0x80113650
extern int DialogBorderRW;

// address: 0x80113654
extern int DialogBorderRH;

// address: 0x80113658
extern int DialogBevelGfx;

// address: 0x8011365C
extern int DialogBevelCW;

// address: 0x80113660
extern int DialogBevelCH;

// address: 0x80113664
extern int DialogBevelLRW;

// address: 0x80113668
extern int DialogBevelLRH;

// address: 0x8011366C
extern int DialogBevelUDW;

// address: 0x80113670
extern int DialogBevelUDH;

// address: 0x80113674
extern int MY_DialogOTpos;

// address: 0x80114BFC
static unsigned char DialogGBack;

// address: 0x80114BFD
static char GShadeX;

// address: 0x80114BFE
static char GShadeY;

// address: 0x80114C04
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800A5D70
// size: 0x70
extern int Cxy[28];

// address: 0x801135F7
extern unsigned char BORDERR;

// address: 0x801135F8
extern unsigned char BORDERG;

// address: 0x801135F9
extern unsigned char BORDERB;

// address: 0x801135FA
extern unsigned char BACKR;

// address: 0x801135FB
extern unsigned char BACKG;

// address: 0x801135FC
extern unsigned char BACKB;

// address: 0x800A5D30
// size: 0x40
static char GShadeTab[64];

// address: 0x801135F5
static char GShadePX;

// address: 0x801135F6
static char GShadePY;

// address: 0x80113681
extern unsigned char PlayDemoFlag;

// address: 0x80115148
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x80115178
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x80114C0C
static int blockr;

// address: 0x80114C10
static int blockg;

// address: 0x80114C14
static int blockb;

// address: 0x80114C18
static int InfraFlag;

// address: 0x80113695
extern unsigned char P1ObjSelCount;

// address: 0x80113696
extern unsigned char P2ObjSelCount;

// address: 0x80113697
extern unsigned char P12ObjSelCount;

// address: 0x80113698
extern unsigned char P1ItemSelCount;

// address: 0x80113699
extern unsigned char P2ItemSelCount;

// address: 0x8011369A
extern unsigned char P12ItemSelCount;

// address: 0x8011369B
extern unsigned char P1MonstSelCount;

// address: 0x8011369C
extern unsigned char P2MonstSelCount;

// address: 0x8011369D
extern unsigned char P12MonstSelCount;

// address: 0x8011369E
static unsigned short P1ObjSelCol;

// address: 0x801136A0
static unsigned short P2ObjSelCol;

// address: 0x801136A2
static unsigned short P12ObjSelCol;

// address: 0x801136A4
static unsigned short P1ItemSelCol;

// address: 0x801136A6
static unsigned short P2ItemSelCol;

// address: 0x801136A8
static unsigned short P12ItemSelCol;

// address: 0x801136AA
static unsigned short P1MonstSelCol;

// address: 0x801136AC
static unsigned short P2MonstSelCol;

// address: 0x801136AE
static unsigned short P12MonstSelCol;

// address: 0x801136B0
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x8010968C
// size: 0x40
static short SinTab[32];

// address: 0x800A5DE0
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x801136CC
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x80109718
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x801151A8
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x801151B8
// size: 0x10
static struct Overlay PregameOver;

// address: 0x801151C8
// size: 0x10
static struct Overlay GameOver;

// address: 0x801151D8
// size: 0x10
static struct Overlay FmvOver;

// address: 0x80114C1C
static int OWorldX;

// address: 0x80114C20
static int OWorldY;

// address: 0x80114C24
static int WWorldX;

// address: 0x80114C28
static int WWorldY;

// address: 0x80109794
// size: 0x20
static short TxyAdd[16];

// address: 0x801136F0
extern int GXAdj2;

// address: 0x80114C2C
static int TimePerFrame;

// address: 0x80114C30
static int CpuStart;

// address: 0x80114C34
static int CpuTime;

// address: 0x80114C38
static int DrawTime;

// address: 0x80114C3C
static int DrawStart;

// address: 0x80114C40
static int LastCpuTime;

// address: 0x80114C44
static int LastDrawTime;

// address: 0x80114C48
static int DrawArea;

// address: 0x801136F8
extern bool ProfOn;

// address: 0x800A5DF4
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x801098F0
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800A5E08
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800A5E5C
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800A5EB0
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800A5F04
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800A5F58
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x80113720
extern int hof;

// address: 0x80113724
extern int mof;

// address: 0x800A6020
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x80113758
extern unsigned long Time;

// address: 0x800A6120
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x80113734
extern unsigned long *STR_Buffer;

// address: 0x80113738
extern char NoActiveStreams;

// address: 0x8011373C
static bool STRInit;

// address: 0x8011377C
extern char SFXNotPlayed;

// address: 0x8011377D
extern char SFXNotInBank;

// address: 0x801151E8
// size: 0x108
static char spu_management[264];

// address: 0x801152F8
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x80114C50
static unsigned short NoSfx;

// address: 0x80113768
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x8011376C
static long OffsetHandle;

// address: 0x80113770
static int BankBase;

// address: 0x80113774
static unsigned char SPU_Done;

// address: 0x80109CB8
// size: 0x70
static unsigned short SFXRemapTab[56];

// address: 0x80113778
static int NoSNDRemaps;

// address: 0x800A6160
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x80109D5C
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x801137D0
extern int demo_level;

// address: 0x801137D4
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x801137D8
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x801137DC
// size: 0x5C
extern struct TASK *tonys;

// address: 0x801137A8
extern int demo_load;

// address: 0x801137AC
extern int demo_record_load;

// address: 0x801137B0
extern int level_record;

// address: 0x801137A4
extern int moo_moo;

// address: 0x801137B4
// size: 0x5
extern char demolevel[5];

// address: 0x801137BC
extern int demo_which;

// address: 0x801137C0
extern unsigned char demo_flash;

// address: 0x801137C4
extern int tonys_Task;

// address: 0x80113938
extern bool DoShowPanel;

// address: 0x8011393C
extern bool DoDrawBg;

// address: 0x80114C54
static bool GlueFinished;

// address: 0x80114C58
static bool DoHomingScroll;

// address: 0x80114C5C
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x80114C60
static int CurrentMonsterList;

// address: 0x801137E9
extern char started_grtask;

// address: 0x800A634C
// size: 0x288
extern struct PInf PlayerInfo[81];

// address: 0x80113940
// size: 0x4
static char ArmourChar[4];

// address: 0x80109E50
// size: 0xA
static char WepChar[10];

// address: 0x80113944
// size: 0x4
static char CharChar[4];

// address: 0x80114C64
static char ctrl_select_line;

// address: 0x80114C65
static char ctrl_select_side;

// address: 0x80114C66
static char ckeyheld;

// address: 0x80114C68
static int old_options_pad;

// address: 0x80114C6C
// size: 0x8
static struct RECT CtrlRect;

// address: 0x80113958
extern unsigned char ctrlflag;

// address: 0x800A667C
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800A65D4
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x80113954
static int toppos;

// address: 0x80115310
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800A67AC
// size: 0x98
static int controller_defaults[2][19];

// address: 0x801139C4
extern int gr_scrxoff;

// address: 0x801139C8
extern int gr_scryoff;

// address: 0x801139D0
extern unsigned short water_clut;

// address: 0x801139D4
extern char visible_level;

// address: 0x801139C1
extern char last_type;

// address: 0x801139D6
extern char daylight;

// address: 0x801139D2
extern char cow_in_sight;

// address: 0x801139D3
extern char inn_in_sight;

// address: 0x801139CC
extern unsigned int water_count;

// address: 0x801139D5
extern unsigned char lastrnd;

// address: 0x801139D8
static int call_clock;

// address: 0x801139E8
extern int TitleAnimCount;

// address: 0x801139EC
static int flametick;

// address: 0x80109F10
// size: 0x37
static unsigned char light_tile[55];

// address: 0x80113A50
extern int p1scrnx;

// address: 0x80113A54
extern int p1scrny;

// address: 0x80113A58
extern int p1wrldx;

// address: 0x80113A5C
extern int p1wrldy;

// address: 0x80113A60
extern int p2scrnx;

// address: 0x80113A64
extern int p2scrny;

// address: 0x80113A68
extern int p2wrldx;

// address: 0x80113A6C
extern int p2wrldy;

// address: 0x80114C74
static int p1spiny1;

// address: 0x80114C78
static int p1spiny2;

// address: 0x80114C7C
static int p1scale;

// address: 0x80114C80
static int p1apocaflag;

// address: 0x80114C84
static int p1apocaxpos;

// address: 0x80114C88
static int p1apocaypos;

// address: 0x80114C8C
static int p2spiny1;

// address: 0x80114C90
static int p2spiny2;

// address: 0x80114C94
static int p2scale;

// address: 0x80114C98
static int p2apocaflag;

// address: 0x80114C9C
static int p2apocaxpos;

// address: 0x80114CA0
static int p2apocaypos;

// address: 0x80115320
// size: 0x240
static struct Particle PartArray[16];

// address: 0x80114CA4
static int partOtPos;

// address: 0x80113A08
extern int p1teleflag;

// address: 0x80113A0C
extern int p1phaseflag;

// address: 0x80113A10
extern int p1inviscount;

// address: 0x80113A14
extern int p2teleflag;

// address: 0x80113A18
extern int p2phaseflag;

// address: 0x80113A1C
extern int p2inviscount;

// address: 0x80113A20
extern int SetParticle;

// address: 0x80113A24
static int p1partexecnum;

// address: 0x80113A28
static int p2partexecnum;

// address: 0x800A6844
// size: 0x20
static int JumpArray[8];

// address: 0x80113A2C
static int partjumpflag;

// address: 0x80113A30
static int partglowflag;

// address: 0x80113A34
static int partcolour;

// address: 0x80113A38
static int healflag;

// address: 0x80113A3C
static int healtime;

// address: 0x80113A40
static int healplyr;

// address: 0x800A6864
// size: 0x48
extern struct Spell_Target SplTarget[2];

// address: 0x80113A89
extern unsigned char select_flag;

// address: 0x80114CA8
// size: 0x8
static struct RECT SelectRect;

// address: 0x80114CB0
static char item_select;

// address: 0x80113A8C
// size: 0x2
extern char QSpell[2];

// address: 0x80113A90
// size: 0x2
extern char _spltotype[2];

// address: 0x80113A7C
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x80115560
// size: 0x10
static struct Dialog SelectBack;

// address: 0x80113A80
// size: 0x4
extern char mana_order[4];

// address: 0x80113A84
// size: 0x4
extern char health_order[4];

// address: 0x80113A88
extern unsigned char birdcheck;

// address: 0x80115570
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x80114CB4
static unsigned short progress;

// address: 0x8010A00C
// size: 0x28
static unsigned short Level2CutScreen[20];

// address: 0x80113AAC
static char *CutString;

// address: 0x80115598
// size: 0x78
static struct CScreen Scr;

// address: 0x80113AB0
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x80113AB4
static bool GameLoading;

// address: 0x80115618
// size: 0x10
static struct Dialog LBack;

// address: 0x80113AC4
extern unsigned int card_ev0;

// address: 0x80113AC8
extern unsigned int card_ev1;

// address: 0x80113ACC
extern unsigned int card_ev2;

// address: 0x80113AD0
extern unsigned int card_ev3;

// address: 0x80113AD4
extern unsigned int card_ev10;

// address: 0x80113AD8
extern unsigned int card_ev11;

// address: 0x80113ADC
extern unsigned int card_ev12;

// address: 0x80113AE0
extern unsigned int card_ev13;

// address: 0x80113AE4
// size: 0x8
extern int card_dirty[2];

// address: 0x80113AEC
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x80113AF0
extern int card_event;

// address: 0x80113AC0
extern void (*mem_card_event_handler)();

// address: 0x80113AB8
extern bool MemCardActive;

// address: 0x80113ABC
extern int never_hooked_events;

// address: 0x80113B4C
extern unsigned long MasterVol;

// address: 0x80113B50
extern unsigned long MusicVol;

// address: 0x80113B54
extern unsigned long SoundVol;

// address: 0x80113B58
extern unsigned long VideoVol;

// address: 0x80113B5C
extern unsigned long SpeechVol;

// address: 0x80114CB8
// size: 0x6C
static struct TextDat *Slider;

// address: 0x80114CBC
static int sw;

// address: 0x80114CC0
static int sx;

// address: 0x80114CC4
static int sy;

// address: 0x80114CC8
static unsigned char Adjust;

// address: 0x80114CC9
static unsigned char qspin;

// address: 0x80114CCA
static unsigned char lqspin;

// address: 0x80114CCC
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x80114CD0
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x80114CD4
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x80113B60
extern int ReturnMenu;

// address: 0x80114CD8
// size: 0x8
static struct RECT ORect;

// address: 0x80114CE0
// size: 0x8
static char *McState[2];

// address: 0x80113B18
extern bool optionsflag;

// address: 0x80113B0C
extern int cmenu;

// address: 0x80113B20
extern int options_pad;

// address: 0x80113B2C
extern char *PrevTxt;

// address: 0x80113B14
extern bool allspellsflag;

// address: 0x800A70CC
// size: 0x80
extern short Circle[64];

// address: 0x80113B00
static int Spacing;

// address: 0x80113B04
static int cs;

// address: 0x80113B08
static int lastcs;

// address: 0x80113B10
static bool MemcardOverlay;

// address: 0x80113B1C
extern int saveflag;

// address: 0x800A68AC
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800A6954
// size: 0xD8
extern struct OMENUITEM GameMenu[9];

// address: 0x800A6A2C
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800A6ABC
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800A6B64
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800A6C0C
// size: 0x60
extern struct OMENUITEM MemcardMenu[4];

// address: 0x800A6C6C
// size: 0x90
extern struct OMENUITEM MemcardGameMenu[6];

// address: 0x800A6CFC
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800A6D5C
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800A6E04
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800A6EAC
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800A6F0C
// size: 0xD8
extern struct OMENUITEM CheatMenu[9];

// address: 0x800A6FE4
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800A7014
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x800A705C
// size: 0x70
extern struct OMENULIST MenuList[14];

// address: 0x80113B30
extern bool debounce;

// address: 0x80113B34
static bool pu;

// address: 0x80113B38
static bool pd;

// address: 0x80113B3C
static bool pl;

// address: 0x80113B40
static bool pr;

// address: 0x80113B44
static unsigned char uc;

// address: 0x80113B45
static unsigned char dc;

// address: 0x80113B46
static unsigned char lc;

// address: 0x80113B47
static unsigned char rc;

// address: 0x80113B48
static char centrestep;

// address: 0x800A714C
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x80113B6D
extern char hop_height;

// address: 0x80113B70
// size: 0x8
static struct Perch perches[4];

// address: 0x800A72CC
// size: 0x1C
static char *FmvTab[7];

// address: 0x80113B84
static int CurMons;

// address: 0x80113B88
static int Frame;

// address: 0x80113B8C
static int Action;

// address: 0x80113B90
static int Dir;

// address: 0x80113C04
extern int FeBackX;

// address: 0x80113C08
extern int FeBackY;

// address: 0x80113C0C
extern int FeBackW;

// address: 0x80113C10
extern int FeBackH;

// address: 0x80113C14
extern unsigned char FeFlag;

// address: 0x800A7A88
// size: 0x3C0
extern struct FeStruct FeBuffer[40];

// address: 0x80113C18
extern int FePlayerNo;

// address: 0x80114CE8
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x80113C1C
extern int FeBufferCount;

// address: 0x80113C20
extern int FeNoOfPlayers;

// address: 0x80113C24
// size: 0x8
extern int FeChrClass[2];

// address: 0x800A7E48
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x80113C2C
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x80113C30
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x80113C34
extern unsigned long FeCount;

// address: 0x80113C38
extern int fileselect;

// address: 0x80113C3C
extern int BookMenu;

// address: 0x80113C40
extern int FeAttractMode;

// address: 0x80113C44
extern int FMVPress;

// address: 0x80113BD4
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x80113BDC
// size: 0x8
extern bool LoadedChar[2];

// address: 0x80113BD8
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x80113BE4
extern unsigned char FeIsAVirgin;

// address: 0x80113BE8
extern int FeMenuDelay;

// address: 0x800A72E8
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800A7304
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800A7320
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800A733C
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800A7358
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800A7374
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800A7390
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800A73AC
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800A73C8
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800A73E4
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800A7400
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800A741C
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800A7438
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800A7454
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x80113BEC
static int fadeval;

// address: 0x800A7470
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800A74E8
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800A7530
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800A75A8
// size: 0x2E8
extern struct FeMenuTable FeNameEngMenuTable[31];

// address: 0x800A7890
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800A78D8
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800A7938
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800A7998
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800A7A10
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x80113BF8
extern unsigned long AttractTitleDelay;

// address: 0x80113BFC
extern unsigned long AttractMainDelay;

// address: 0x80113C00
extern int FMVEndPad;

// address: 0x80113C78
extern int InCredits;

// address: 0x80113C7C
extern int CreditTitleNo;

// address: 0x80113C80
extern int CreditSubTitleNo;

// address: 0x80113C94
// size: 0x8
extern int card_status[2];

// address: 0x80113C9C
// size: 0x8
extern int card_usable[2];

// address: 0x80113CA4
// size: 0x8
extern int card_files[2];

// address: 0x80113CAC
// size: 0x8
extern int card_changed[2];

// address: 0x80113CEC
extern int AlertTxt;

// address: 0x80113CF0
extern int current_card;

// address: 0x80113CF4
extern int LoadType;

// address: 0x80113CF8
extern int McMenuPos;

// address: 0x80113CFC
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x80113CE8
extern bool fileinfoflag;

// address: 0x80113CC0
extern char *DiabloGameFile;

// address: 0x80113CE0
// size: 0x8
extern char *McState_addr_80113CE0[2];

// address: 0x80113DD4
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x80113DDC
extern int mdec_audio_sec;

// address: 0x80113DE0
extern int mdec_audio_offs;

// address: 0x80113DE4
extern int mdec_audio_playing;

// address: 0x80113DE8
extern int mdec_audio_rate_shift;

// address: 0x80113DEC
// size: 0x8
extern char *vlcbuf[2];

// address: 0x80113DF4
extern int slice_size;

// address: 0x80113DF8
// size: 0x8
extern struct RECT slice;

// address: 0x80113E00
extern int slice_inc;

// address: 0x80113E04
extern int area_pw;

// address: 0x80113E08
extern int area_ph;

// address: 0x80113E0C
// size: 0x8
extern int tmdc_pol_dirty[2];

// address: 0x80113E14
// size: 0x8
extern int num_pol[2];

// address: 0x80113E1C
extern int mdec_cx;

// address: 0x80113E20
extern int mdec_cy;

// address: 0x80113E24
extern int mdec_w;

// address: 0x80113E28
extern int mdec_h;

// address: 0x80113E2C
// size: 0x8
extern int mdec_pw[2];

// address: 0x80113E34
// size: 0x8
extern int mdec_ph[2];

// address: 0x80113E3C
extern int move_x;

// address: 0x80113E40
extern int move_y;

// address: 0x80113E44
extern int move_scale;

// address: 0x80113E48
extern int stream_frames;

// address: 0x80113E4C
extern int last_stream_frame;

// address: 0x80113E50
extern int mdec_framecount;

// address: 0x80113E54
extern int mdec_speed;

// address: 0x80113E58
extern int mdec_stream_starting;

// address: 0x80113E5C
extern int mdec_last_frame;

// address: 0x80113E60
extern int mdec_sectors_per_frame;

// address: 0x80113E64
extern unsigned short *vlctab;

// address: 0x80113E68
extern unsigned char *mdc_buftop;

// address: 0x80113E6C
extern unsigned char *mdc_bufstart;

// address: 0x80113E70
extern int mdc_bufleft;

// address: 0x80113E74
extern int mdc_buftotal;

// address: 0x80113E78
extern int time_in_frames;

// address: 0x80113E7C
extern int stream_chunksize;

// address: 0x80113E80
extern int stream_bufsize;

// address: 0x80113E84
extern int stream_subsec;

// address: 0x80113E88
extern int stream_secnum;

// address: 0x80113E8C
extern int stream_last_sector;

// address: 0x80113E90
extern int stream_startsec;

// address: 0x80113E94
extern int stream_opened;

// address: 0x80113E98
extern int stream_last_chunk;

// address: 0x80113E9C
extern int stream_got_chunks;

// address: 0x80113EA0
extern int last_sector;

// address: 0x80113EA4
extern int cdstream_resetsec;

// address: 0x80113EA8
extern int last_handler_event;

// address: 0x80113D0C
extern unsigned char *map_buf;

// address: 0x80113D10
extern unsigned char *vlc_tab;

// address: 0x80113D14
extern unsigned char *vlc_buf;

// address: 0x80113D18
extern unsigned char *img_buf;

// address: 0x80113D1C
extern int vbuf;

// address: 0x80113D20
extern int last_fn;

// address: 0x80113D24
extern int last_mdc;

// address: 0x80113D28
extern int slnum;

// address: 0x80113D2C
extern int slices_to_do;

// address: 0x80113D30
extern int mbuf;

// address: 0x80113D34
extern int mfn;

// address: 0x80113D38
extern int last_move_mbuf;

// address: 0x80113D3C
extern int move_request;

// address: 0x80113D40
extern int mdec_scale;

// address: 0x80113D44
extern int do_brightness;

// address: 0x80113D48
extern int frame_decoded;

// address: 0x80113D4C
extern int mdec_streaming;

// address: 0x80113D50
extern int mdec_stream_size;

// address: 0x80113D54
extern int first_stream_frame;

// address: 0x80113D58
extern int stream_frames_played;

// address: 0x80113D5C
extern int num_mdcs;

// address: 0x80113D60
extern int mdec_head;

// address: 0x80113D64
extern int mdec_tail;

// address: 0x80113D68
extern int mdec_waiting_tail;

// address: 0x80113D6C
extern int mdecs_queued;

// address: 0x80113D70
extern int mdecs_waiting;

// address: 0x80113D74
extern int sfx_volume;

// address: 0x80113D78
extern int stream_chunks_in;

// address: 0x80113D7C
extern int stream_chunks_total;

// address: 0x80113D80
extern int stream_in;

// address: 0x80113D84
extern int stream_out;

// address: 0x80113D88
extern int stream_stalled;

// address: 0x80113D8C
extern int stream_ending;

// address: 0x80113D90
extern int stream_open;

// address: 0x80113D94
extern int stream_handler_installed;

// address: 0x80113D98
extern int stream_chunks_borrowed;

// address: 0x80113D9C
extern int _get_count;

// address: 0x80113DA0
extern int _discard_count;

// address: 0x80113DA4
// size: 0x5C
extern struct TASK *CDTask;

// address: 0x80113DA8
// size: 0x98
static struct cdstreamstruct *CDStream;

// address: 0x80113DAC
extern int cdready_calls;

// address: 0x80113DB0
extern int cdready_errors;

// address: 0x80113DB4
extern int cdready_out_of_sync;

// address: 0x80113DB8
extern int cdstream_resetting;

// address: 0x80113DBC
extern int sector_dma;

// address: 0x80113DC0
extern int sector_dma_in;

// address: 0x80113DC4
extern unsigned long *chkaddr;

// address: 0x80113DC8
// size: 0x8
extern struct chunkhdrstruct *chunk;

// address: 0x80113DCC
extern int first_handler_event;

// address: 0x80113DD0
extern int myrate;

// address: 0x80113F48
extern unsigned char *pStatusPanel;

// address: 0x80113F4C
extern unsigned char *pGBoxBuff;

// address: 0x80113F50
extern unsigned char dropGoldFlag;

// address: 0x80113F54
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800A8440
// size: 0x200
extern char _infostr[256][2];

// address: 0x80113F58
// size: 0x2
extern char _infoclr[2];

// address: 0x800A8640
// size: 0x100
extern char tempstr[256];

// address: 0x80113F5A
extern unsigned char drawhpflag;

// address: 0x80113F5B
extern unsigned char drawmanaflag;

// address: 0x80113F5C
extern unsigned char chrflag;

// address: 0x80113F5D
extern unsigned char drawbtnflag;

// address: 0x80113F5E
extern unsigned char panbtndown;

// address: 0x80113F5F
extern unsigned char panelflag;

// address: 0x80113F60
extern unsigned char chrbtndown;

// address: 0x80113F61
extern unsigned char lvlbtndown;

// address: 0x80113F62
extern unsigned char sbookflag;

// address: 0x80113F63
extern unsigned char talkflag;

// address: 0x80113F64
extern int dropGoldValue;

// address: 0x80113F68
extern int initialDropGoldValue;

// address: 0x80113F6C
extern int initialDropGoldIndex;

// address: 0x80113F70
extern unsigned char *pPanelButtons;

// address: 0x80113F74
extern unsigned char *pPanelText;

// address: 0x80113F78
extern unsigned char *pManaBuff;

// address: 0x80113F7C
extern unsigned char *pLifeBuff;

// address: 0x80113F80
extern unsigned char *pChrPanel;

// address: 0x80113F84
extern unsigned char *pChrButtons;

// address: 0x80113F88
extern unsigned char *pSpellCels;

// address: 0x80115668
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x80115A68
// size: 0x40
static int _pstrjust[8][2];

// address: 0x80114CF8
// size: 0x8
static int _pnumlines[2];

// address: 0x80113F8C
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x80113F90
// size: 0x8
extern struct RECT CSRect;

// address: 0x80114D08
// size: 0x8
static int _pSpell[2];

// address: 0x80114D10
// size: 0x8
static int _pSplType[2];

// address: 0x80114D18
// size: 0x8
static unsigned char panbtn[8];

// address: 0x80113F98
extern int numpanbtns;

// address: 0x80113F9C
extern unsigned char *pDurIcons;

// address: 0x80113FA0
extern unsigned char drawdurflag;

// address: 0x80114D20
// size: 0x4
static unsigned char chrbtn[4];

// address: 0x80113FA1
extern unsigned char chrbtnactive;

// address: 0x80113FA4
extern unsigned char *pSpellBkCel;

// address: 0x80113FA8
extern unsigned char *pSBkBtnCel;

// address: 0x80113FAC
extern unsigned char *pSBkIconCels;

// address: 0x80113FB0
extern int sbooktab;

// address: 0x80113FB4
extern int cur_spel;

// address: 0x80114D24
static long talkofs;

// address: 0x80115AB8
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x80114D28
static unsigned char sgbTalkSavePos;

// address: 0x80114D29
static unsigned char sgbNextTalkSave;

// address: 0x80114D2A
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x80114D2C
static unsigned char *pTalkPanel;

// address: 0x80114D30
static unsigned char *pMultiBtns;

// address: 0x80114D34
static unsigned char *pTalkBtns;

// address: 0x80114D38
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x8010A3A4
// size: 0x100
extern unsigned char gbFontTransTbl[256];

// address: 0x8010A2E4
// size: 0x44
extern unsigned char fontkern[68];

// address: 0x800A7E74
// size: 0x25
extern char SpellITbl[37];

// address: 0x80113EB5
extern unsigned char DrawLevelUpFlag;

// address: 0x80113EDC
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x80113ED8
extern unsigned char spspelstate;

// address: 0x80113F18
extern bool initchr;

// address: 0x80113EB8
static int SPLICONNO;

// address: 0x80113EBC
static int SPLICONY;

// address: 0x80114D00
static int SPLICONRIGHT;

// address: 0x80113EC0
static int scx;

// address: 0x80113EC4
static int scy;

// address: 0x80113EC8
static int scx1;

// address: 0x80113ECC
static int scy1;

// address: 0x80113ED0
static int scx2;

// address: 0x80113ED4
static int scy2;

// address: 0x80113EE4
extern char SpellCol;

// address: 0x800A7E60
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800A7E9C
// size: 0xA0
extern int PanBtnPos[5][8];

// address: 0x800A7F3C
// size: 0x20
extern char *PanBtnHotKey[8];

// address: 0x800A7F5C
// size: 0x20
extern unsigned long PanBtnStr[8];

// address: 0x800A7F7C
// size: 0x64
extern int SpellPages[5][5];

// address: 0x80113F08
static int lus;

// address: 0x80113F0C
static int CsNo;

// address: 0x80113F10
static char plusanim;

// address: 0x80115AA8
// size: 0x10
static struct Dialog CSBack;

// address: 0x80113F14
static int CS_XOFF;

// address: 0x800A7FE0
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x80113F1C
extern int NoCSEntries;

// address: 0x80113F20
static int SPALOFF;

// address: 0x80113F24
static int paloffset1;

// address: 0x80113F28
static int paloffset2;

// address: 0x80113F2C
static int paloffset3;

// address: 0x80113F30
static int paloffset4;

// address: 0x80113F34
static int pinc1;

// address: 0x80113F38
static int pinc2;

// address: 0x80113F3C
static int pinc3;

// address: 0x80113F40
static int pinc4;

// address: 0x80113FC8
// size: 0x8
extern int _pcurs[2];

// address: 0x80113FD0
extern int cursW;

// address: 0x80113FD4
extern int cursH;

// address: 0x80113FD8
extern int icursW;

// address: 0x80113FDC
extern int icursH;

// address: 0x80113FE0
extern int icursW28;

// address: 0x80113FE4
extern int icursH28;

// address: 0x80113FE8
extern int cursmx;

// address: 0x80113FEC
extern int cursmy;

// address: 0x80113FF0
// size: 0x8
extern int _pcursmonst[2];

// address: 0x80113FF8
// size: 0x2
extern char _pcursobj[2];

// address: 0x80113FFC
// size: 0x2
extern char _pcursitem[2];

// address: 0x80114000
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x80114004
// size: 0x2
extern char _pcursplr[2];

// address: 0x80113FC4
extern int sel_data;

// address: 0x800A8740
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x80114008
extern int spurtndx;

// address: 0x8011400C
extern int stonendx;

// address: 0x80114010
extern unsigned char *pSquareCel;

// address: 0x80114050
extern unsigned long ghInst;

// address: 0x80114054
extern unsigned char svgamode;

// address: 0x80114058
extern int MouseX;

// address: 0x8011405C
extern int MouseY;

// address: 0x80114060
extern long gv1;

// address: 0x80114064
extern long gv2;

// address: 0x80114068
extern long gv3;

// address: 0x8011406C
extern long gv4;

// address: 0x80114070
extern long gv5;

// address: 0x80114074
extern unsigned char gbProcessPlayers;

// address: 0x800A88B4
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800A88DC
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800A8920
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x80114075
extern unsigned char gbDoEnding;

// address: 0x80114076
extern unsigned char gbRunGame;

// address: 0x80114077
extern unsigned char gbRunGameResult;

// address: 0x80114078
extern unsigned char gbGameLoopStartup;

// address: 0x80115B08
// size: 0x44
static int glEndSeed[17];

// address: 0x80115B58
// size: 0x44
static int glMid1Seed[17];

// address: 0x80115BA8
// size: 0x44
static int glMid2Seed[17];

// address: 0x80115BF8
// size: 0x44
static int glMid3Seed[17];

// address: 0x80114D3C
static long *sg_previousFilter;

// address: 0x800A8964
// size: 0x30
extern int CreateEnv[12];

// address: 0x8011407C
extern int Passedlvldir;

// address: 0x80114080
extern unsigned char *TempStack;

// address: 0x80114020
extern unsigned long ghMainWnd;

// address: 0x80114024
extern unsigned char fullscreen;

// address: 0x80114028
extern int force_redraw;

// address: 0x8011403C
extern unsigned char PauseMode;

// address: 0x8011403D
extern unsigned char FriendlyMode;

// address: 0x8011402D
extern unsigned char visiondebug;

// address: 0x8011402F
extern unsigned char light4flag;

// address: 0x80114030
extern unsigned char leveldebug;

// address: 0x80114031
extern unsigned char monstdebug;

// address: 0x80114038
extern int debugmonsttypes;

// address: 0x8011402C
static unsigned char cineflag;

// address: 0x8011402E
extern unsigned char scrollflag;

// address: 0x80114032
extern unsigned char trigdebug;

// address: 0x80114034
extern int setseed;

// address: 0x80114040
static int sgnTimeoutCurs;

// address: 0x80114044
extern unsigned char sgbMouseDown;

// address: 0x800A9030
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x80114098
extern int numtowners;

// address: 0x8011409C
extern unsigned char storeflag;

// address: 0x8011409D
extern unsigned char boyloadflag;

// address: 0x8011409E
extern unsigned char bannerflag;

// address: 0x801140A0
extern unsigned char *pCowCels;

// address: 0x80114D40
static unsigned long sgdwCowClicks;

// address: 0x80114D44
static int sgnCowMsg;

// address: 0x800A8D70
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x80114090
extern unsigned long CowPlaying;

// address: 0x800A8994
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800A8D0C
// size: 0xC
extern int TownCowX[3];

// address: 0x800A8D18
// size: 0xC
extern int TownCowY[3];

// address: 0x800A8D24
// size: 0xC
extern int TownCowDir[3];

// address: 0x800A8D30
// size: 0x20
extern int cowoffx[8];

// address: 0x800A8D50
// size: 0x20
extern int cowoffy[8];

// address: 0x801140B8
extern int sfxdelay;

// address: 0x801140BC
extern int sfxdnum;

// address: 0x801140B0
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800A9E30
// size: 0xF4C
extern struct TSFX sgSFX[979];

// address: 0x801140B4
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x801140C0
extern long orgseed;

// address: 0x80114D48
static long sglGameSeed;

// address: 0x801140C4
extern int SeedCount;

// address: 0x80114D4C
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x80114D50
static int sgnWidth;

// address: 0x801140D2
extern char msgflag;

// address: 0x801140D3
extern char msgdelay;

// address: 0x800AAE2C
// size: 0x50
extern char msgtable[80];

// address: 0x800AAD7C
// size: 0xB0
extern int MsgStrings[44];

// address: 0x801140D1
extern char msgcnt;

// address: 0x80114D54
static unsigned long sgdwProgress;

// address: 0x80114D58
static unsigned long sgdwXY;

// address: 0x800AAE7C
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x8010A7C4
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x8010BB64
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x8010C884
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x8010D784
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800AB090
// size: 0x4A00
extern struct ItemStruct item[128];

// address: 0x800AFA90
// size: 0x7F
extern char itemactive[127];

// address: 0x800AFB10
// size: 0x7F
extern char itemavail[127];

// address: 0x800AFB90
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8011410C
extern unsigned char uitemflag;

// address: 0x80114D5C
static int tem;

// address: 0x80115C40
// size: 0x94
static struct ItemStruct curruitem;

// address: 0x80115CE0
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x80114110
extern int ScrollType;

// address: 0x800AFC10
// size: 0x40
extern char ItemStr[64];

// address: 0x800AFC50
// size: 0x40
extern char SufStr[64];

// address: 0x801140EC
extern long numitems;

// address: 0x801140F0
extern int gnNumGetRecords;

// address: 0x800AAFEC
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800AAF1C
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x8010F5C8
// size: 0x46
static short Item2Frm[35];

// address: 0x800AAFC8
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x801140F4
extern int *ItemAnimSnds;

// address: 0x801140F8
extern int idoppely;

// address: 0x801140FC
extern int ScrollFlag;

// address: 0x800AB078
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800B0A3C
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800B0B7C
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x80114124
extern int numlights;

// address: 0x80114128
extern char lightmax;

// address: 0x800B0BA4
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x8011412C
extern int numvision;

// address: 0x80114130
extern unsigned char dovision;

// address: 0x80114134
extern int visionid;

// address: 0x80114D60
static int disp_mask;

// address: 0x80114D64
static int weird;

// address: 0x80114D68
static int disp_tab_r;

// address: 0x80114D6C
static int dispy_r;

// address: 0x80114D70
static int disp_tab_g;

// address: 0x80114D74
static int dispy_g;

// address: 0x80114D78
static int disp_tab_b;

// address: 0x80114D7C
static int dispy_b;

// address: 0x80114D80
static int radius;

// address: 0x80114D84
static int bright;

// address: 0x80115CF0
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x80114114
extern int lightflag;

// address: 0x800B0750
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800B0A04
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800AFC90
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x80114118
extern int restore_r;

// address: 0x8011411C
extern int restore_g;

// address: 0x80114120
extern int restore_b;

// address: 0x800B0A1C
// size: 0x10
extern char radius_tab[16];

// address: 0x800B0A2C
// size: 0x10
extern char bright_tab[16];

// address: 0x80114156
extern unsigned char qtextflag;

// address: 0x80114158
extern int qtextSpd;

// address: 0x80114D88
static unsigned char *pMedTextCels;

// address: 0x80114D8C
static unsigned char *pTextBoxCels;

// address: 0x80114D90
static char *qtextptr;

// address: 0x80114D94
static int qtexty;

// address: 0x80114D98
static unsigned long qtextDelay;

// address: 0x80114D9C
static unsigned long sgLastScroll;

// address: 0x80114DA0
static unsigned long scrolltexty;

// address: 0x80114DA4
static long sglMusicVolumeSave;

// address: 0x80114144
static bool qtbodge;

// address: 0x800B0D64
// size: 0x10
extern struct Dialog QBack;

// address: 0x80114155
static unsigned char CDFlip;

// address: 0x800B0D74
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800B14E4
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800B13D4
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800B15D0
// size: 0x13D4C
extern struct DLevel sgLevels[21];

// address: 0x800C531C
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x80115D70
// size: 0x20
static struct DJunk sgJunk;

// address: 0x80114DA9
static unsigned char sgbRecvCmd;

// address: 0x80114DAC
static unsigned long sgdwRecvOffset;

// address: 0x80114DB0
static unsigned char sgbDeltaChunks;

// address: 0x80114DB1
static unsigned char sgbDeltaChanged;

// address: 0x80114DB4
static unsigned long sgdwOwnerWait;

// address: 0x80114DB8
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x80114DBC
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x80114DC0
static int sgnCurrMegaPlayer;

// address: 0x80114171
extern unsigned char deltaload;

// address: 0x80114172
extern unsigned char gbBufferMsgs;

// address: 0x80114174
extern unsigned long dwRecCount;

// address: 0x80114178
extern bool LevelOut;

// address: 0x8011418E
extern unsigned char gbMaxPlayers;

// address: 0x8011418F
extern unsigned char gbActivePlayers;

// address: 0x80114190
extern unsigned char gbGameDestroyed;

// address: 0x80114191
extern unsigned char gbDeltaSender;

// address: 0x80114192
extern unsigned char gbSelectProvider;

// address: 0x80114193
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x80114DC4
static unsigned char sgbSentThisCycle;

// address: 0x80114DC8
static unsigned long sgdwGameLoops;

// address: 0x80114DCC
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x80114DD0
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x80114DD4
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x80114DDC
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x80114DE4
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x80114DEC
static unsigned char sgbTimeout;

// address: 0x80114DF0
static long sglTimeoutStart;

// address: 0x80114188
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x8011418D
static unsigned char sgbNetInited;

// address: 0x800C6384
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800C6548
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x8010FC90
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800C6D28
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x801141B4
extern long numobjects;

// address: 0x800C82FC
// size: 0x7F
extern char objectactive[127];

// address: 0x800C837C
// size: 0x7F
extern char objectavail[127];

// address: 0x801141B8
extern unsigned char InitObjFlag;

// address: 0x801141BC
extern int trapid;

// address: 0x800C83FC
// size: 0x28
extern char ObjFileList[40];

// address: 0x801141C0
extern int trapdir;

// address: 0x801141C4
extern int leverid;

// address: 0x801141AC
extern int numobjfiles;

// address: 0x800C6C40
// size: 0x20
extern int bxadd[8];

// address: 0x800C6C60
// size: 0x20
extern int byadd[8];

// address: 0x800C6CE8
// size: 0x1A
extern char shrineavail[26];

// address: 0x800C6C80
// size: 0x68
extern int shrinestrs[26];

// address: 0x800C6D04
// size: 0x24
extern int StoryBookName[9];

// address: 0x801141B0
extern int myscale;

// address: 0x801141D8
extern unsigned char gbValidSaveFile;

// address: 0x801141D4
extern bool DoLoadedChar;

// address: 0x800C861C
// size: 0x4590
extern struct PlayerStruct plr[2];

// address: 0x801141F8
extern int myplr;

// address: 0x801141FC
extern int deathdelay;

// address: 0x80114200
extern unsigned char deathflag;

// address: 0x80114201
extern char light_rad;

// address: 0x801141F0
// size: 0x5
extern char light_level[5];

// address: 0x800C8514
// size: 0x30
extern int MaxStats[4][3];

// address: 0x801141E8
static int PlrStructSize;

// address: 0x801141EC
static int ItemStructSize;

// address: 0x800C8424
// size: 0x24
extern int plrxoff[9];

// address: 0x800C8448
// size: 0x24
extern int plryoff[9];

// address: 0x800C846C
// size: 0x24
extern int plrxoff2[9];

// address: 0x800C8490
// size: 0x24
extern int plryoff2[9];

// address: 0x800C84B4
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800C84D8
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800C84E4
// size: 0xC
extern int MagicTbl[3];

// address: 0x800C84F0
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800C84FC
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800C8508
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800C8544
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800CCCE4
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x80114240
extern unsigned char *pQLogCel;

// address: 0x80114244
extern int ReturnLvlX;

// address: 0x80114248
extern int ReturnLvlY;

// address: 0x8011424C
extern int ReturnLvl;

// address: 0x80114250
extern int ReturnLvlT;

// address: 0x80114254
extern unsigned char rporttest;

// address: 0x80114258
extern int qline;

// address: 0x8011425C
extern int numqlines;

// address: 0x80114260
extern int qtopline;

// address: 0x80115D90
// size: 0x40
static int qlist[16];

// address: 0x80114DF4
// size: 0x8
static struct RECT QSRect;

// address: 0x8011420D
extern unsigned char questlog;

// address: 0x800CCBAC
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x80114210
extern int ALLQUESTS;

// address: 0x800CCCC0
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800CCCCC
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800CCCD8
// size: 0xC
extern int QuestGroup3[3];

// address: 0x80114224
// size: 0x8
extern int QuestGroup4[2];

// address: 0x8011423C
extern bool WaterDone;

// address: 0x80114214
// size: 0x7
static char questxoff[7];

// address: 0x8011421C
// size: 0x7
static char questyoff[7];

// address: 0x800CCCAC
// size: 0x14
extern int questtrigstr[5];

// address: 0x8011422C
static int QS_PX;

// address: 0x80114230
static int QS_PY;

// address: 0x80114234
static int QS_PW;

// address: 0x80114238
static int QS_PH;

// address: 0x80115DD0
// size: 0x10
static struct Dialog QSBack;

// address: 0x800CCE24
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x8011429F
extern char stextflag;

// address: 0x800CD67C
// size: 0xB90
extern struct ItemStruct smithitem[20];

// address: 0x800CE20C
// size: 0x378
extern struct ItemStruct premiumitem[6];

// address: 0x801142A0
extern int numpremium;

// address: 0x801142A4
extern int premiumlevel;

// address: 0x800CE584
// size: 0xB90
extern struct ItemStruct witchitem[20];

// address: 0x800CF114
// size: 0x94
extern struct ItemStruct boyitem;

// address: 0x801142A8
extern int boylevel;

// address: 0x800CF1A8
// size: 0x94
extern struct ItemStruct golditem;

// address: 0x800CF23C
// size: 0xB90
extern struct ItemStruct healitem[20];

// address: 0x801142AC
extern char stextsize;

// address: 0x801142AD
extern unsigned char stextscrl;

// address: 0x80114DFC
static int stextsel;

// address: 0x80114E00
static int stextlhold;

// address: 0x80114E04
static int stextshold;

// address: 0x80114E08
static int stextvhold;

// address: 0x80114E0C
static int stextsval;

// address: 0x80114E10
static int stextsmax;

// address: 0x80114E14
static int stextup;

// address: 0x80114E18
static int stextdown;

// address: 0x80114E1C
static char stextscrlubtn;

// address: 0x80114E1D
static char stextscrldbtn;

// address: 0x80114E1E
static char SItemListFlag;

// address: 0x80115DE0
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800CFDCC
// size: 0x1BC0
extern struct ItemStruct storehold[48];

// address: 0x800D198C
// size: 0x30
extern char storehidx[48];

// address: 0x80114E20
static int storenumh;

// address: 0x80114E24
static int gossipstart;

// address: 0x80114E28
static int gossipend;

// address: 0x80114E2C
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x80114E34
static int talker;

// address: 0x80114288
extern unsigned char *pSTextBoxCels;

// address: 0x8011428C
extern unsigned char *pSTextSlidCels;

// address: 0x80114290
extern int *SStringY;

// address: 0x800CD5A8
// size: 0x10
extern struct Dialog SBack;

// address: 0x800CD5B8
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800CD608
// size: 0x50
extern int SStringYBuy[20];

// address: 0x800CD658
// size: 0x24
extern int talkname[9];

// address: 0x8011429E
extern unsigned char InStoreFlag;

// address: 0x80110E74
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x801142BC
extern unsigned long gdwAllTextEntries;

// address: 0x80114E38
static unsigned char *P3Tiles;

// address: 0x801142CC
extern int tile;

// address: 0x801142DC
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800D1BF4
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x801142E0
extern int numtrigs;

// address: 0x801142E4
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x801142E8
extern int TWarpFrom;

// address: 0x800D19BC
// size: 0x2C
extern int TownDownList[11];

// address: 0x800D19E8
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800D1A1C
// size: 0x30
extern int L1UpList[12];

// address: 0x800D1A4C
// size: 0x28
extern int L1DownList[10];

// address: 0x800D1A74
// size: 0xC
extern int L2UpList[3];

// address: 0x800D1A80
// size: 0x14
extern int L2DownList[5];

// address: 0x800D1A94
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800D1AA0
// size: 0x3C
extern int L3UpList[15];

// address: 0x800D1ADC
// size: 0x24
extern int L3DownList[9];

// address: 0x800D1B00
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800D1B38
// size: 0x10
extern int L4UpList[4];

// address: 0x800D1B48
// size: 0x18
extern int L4DownList[6];

// address: 0x800D1B60
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800D1B70
// size: 0x84
extern int L4PentaList[33];

// address: 0x80111C04
// size: 0xA
static char cursoff[10];

// address: 0x80114302
extern unsigned char gbMusicOn;

// address: 0x80114303
extern unsigned char gbSoundOn;

// address: 0x80114301
extern unsigned char gbSndInited;

// address: 0x80114308
extern long sglMasterVolume;

// address: 0x8011430C
extern long sglMusicVolume;

// address: 0x80114310
extern long sglSoundVolume;

// address: 0x80114314
extern long sglSpeechVolume;

// address: 0x80114304
extern unsigned char gbDupSounds;

// address: 0x80114318
static int sgnMusicTrack;

// address: 0x8011431C
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x80111CB0
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x80114340
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800D1C44
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x80114348
// size: 0x2
extern char _pfind_index[2];

// address: 0x8011434C
// size: 0x2
extern char _pfindx[2];

// address: 0x80114350
// size: 0x2
extern char _pfindy[2];

// address: 0x80114352
extern unsigned char automapmoved;

// address: 0x80114334
extern unsigned char flyflag;

// address: 0x8011432C
// size: 0x8
extern char (*pad_styles[2])();

// address: 0x80114335
extern char speed_type;

// address: 0x80114336
extern char sel_speed;

// address: 0x80114E3C
static unsigned long (*CurrentProc)();

// address: 0x80111E4C
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x80114380
extern int NumOfStrings;

// address: 0x80114354
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x80114358
extern long hndText;

// address: 0x8011435C
extern char **TextPtr;

// address: 0x80114360
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x80114390
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x80114394
extern int CharFade;

// address: 0x80114398
extern int rotateness;

// address: 0x8011439C
extern int spiralling_shape;

// address: 0x801143A0
extern int down;

// address: 0x800D1C94
// size: 0x10
extern char MlTab[16];

// address: 0x800D1CA4
// size: 0x10
extern char QlTab[16];

// address: 0x800D1CB4
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x801143BC
extern int MyXoff1;

// address: 0x801143C0
extern int MyYoff1;

// address: 0x801143C4
extern int MyXoff2;

// address: 0x801143C8
extern int MyYoff2;

// address: 0x801143D8
extern bool iscflag;

// address: 0x801143E5
static unsigned char sgbFadedIn;

// address: 0x801143E6
static unsigned char screenbright;

// address: 0x801143E8
static int faderate;

// address: 0x801143EC
static bool fading;

// address: 0x801143F8
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x801143F0
extern int st;

// address: 0x801143F4
extern int mode;

// address: 0x80114418
// size: 0x8
static unsigned char AmShiftTab[8];

// address: 0x80114E40
static unsigned char *tbuff;

// address: 0x80114E44
static unsigned char HR1;

// address: 0x80114E45
static unsigned char HR2;

// address: 0x80114E46
static unsigned char HR3;

// address: 0x80114E47
static unsigned char VR1;

// address: 0x80114E48
static unsigned char VR2;

// address: 0x80114E49
static unsigned char VR3;

// address: 0x801144B0
// size: 0x18
extern struct NODE *pHallList;

// address: 0x801144B4
extern int nRoomCnt;

// address: 0x801144B8
extern int nSx1;

// address: 0x801144BC
extern int nSy1;

// address: 0x801144C0
extern int nSx2;

// address: 0x801144C4
extern int nSy2;

// address: 0x80114468
extern int Area_Min;

// address: 0x8011446C
extern int Room_Max;

// address: 0x80114470
extern int Room_Min;

// address: 0x80114474
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x8011447C
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x80114484
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x8011448C
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x80114494
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x80114498
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x8011449C
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x801144A0
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x801144A4
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x801144A8
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x801144AC
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x80114E4C
static int abyssx;

// address: 0x80114E50
static unsigned char lavapool;

// address: 0x80114550
extern int lockoutcnt;

// address: 0x801144D4
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x801144DC
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x801144E4
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x801144EC
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x801144F4
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x801144FC
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x80114504
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x8011450C
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x80114514
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x8011451C
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x80114524
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x8011452C
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x80114534
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x8011453C
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x80114540
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x80114544
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x80114548
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x8011454C
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x80114554
extern int diabquad1x;

// address: 0x80114558
extern int diabquad2x;

// address: 0x8011455C
extern int diabquad3x;

// address: 0x80114560
extern int diabquad4x;

// address: 0x80114564
extern int diabquad1y;

// address: 0x80114568
extern int diabquad2y;

// address: 0x8011456C
extern int diabquad3y;

// address: 0x80114570
extern int diabquad4y;

// address: 0x80114574
extern int SP4x1;

// address: 0x80114578
extern int SP4y1;

// address: 0x8011457C
extern int SP4x2;

// address: 0x80114580
extern int SP4y2;

// address: 0x80114584
extern int l4holdx;

// address: 0x80114588
extern int l4holdy;

// address: 0x80114598
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x801145A0
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800D1E3C
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800D1E50
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800D1E6C
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x801145A8
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800D1E80
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x80114694
static bool DoUiForChooseMonster;

// address: 0x800D1EA4
// size: 0x88
static char *MgToText[34];

// address: 0x800D1F2C
// size: 0x24
extern int StoryText[3][3];

// address: 0x800D1F50
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800D3150
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800D3790
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x801146B8
extern int setpc_x;

// address: 0x801146BC
extern int setpc_y;

// address: 0x801146C0
extern int setpc_w;

// address: 0x801146C4
extern int setpc_h;

// address: 0x801146C8
extern unsigned char setloadflag;

// address: 0x801146CC
extern unsigned char *pMegaTiles;

// address: 0x800D3DD0
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800D45D4
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800D4DD8
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800D55DC
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800D5DE0
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x801146D0
extern int dminx;

// address: 0x801146D4
extern int dminy;

// address: 0x801146D8
extern int dmaxx;

// address: 0x801146DC
extern int dmaxy;

// address: 0x801146E0
extern int gnDifficulty;

// address: 0x801146E4
extern unsigned char currlevel;

// address: 0x801146E5
extern unsigned char leveltype;

// address: 0x801146E6
extern unsigned char setlevel;

// address: 0x801146E7
extern unsigned char setlvlnum;

// address: 0x801146E8
extern unsigned char setlvltype;

// address: 0x801146EC
extern int ViewX;

// address: 0x801146F0
extern int ViewY;

// address: 0x801146F4
extern int ViewDX;

// address: 0x801146F8
extern int ViewDY;

// address: 0x801146FC
extern int ViewBX;

// address: 0x80114700
extern int ViewBY;

// address: 0x800D65E4
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x80114704
extern int LvlViewX;

// address: 0x80114708
extern int LvlViewY;

// address: 0x8011470C
extern int btmbx;

// address: 0x80114710
extern int btmby;

// address: 0x80114714
extern int btmdx;

// address: 0x80114718
extern int btmdy;

// address: 0x8011471C
extern int MicroTileLen;

// address: 0x80114720
extern char TransVal;

// address: 0x800D65F8
// size: 0x20
extern bool TransList[8];

// address: 0x80114724
extern int themeCount;

// address: 0x800D6618
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x800F88D8
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x800F943C
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x800F9FA0
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x800FAB04
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x801146B0
extern unsigned char *pSetPiece;

// address: 0x801146B4
extern int DungSize;

// address: 0x800FACD0
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x80114764
extern int numthemes;

// address: 0x80114768
extern int zharlib;

// address: 0x8011476C
extern unsigned char armorFlag;

// address: 0x8011476D
extern unsigned char bCrossFlag;

// address: 0x8011476E
extern unsigned char weaponFlag;

// address: 0x80114770
extern int themex;

// address: 0x80114774
extern int themey;

// address: 0x80114778
extern int themeVar1;

// address: 0x8011477C
extern unsigned char bFountainFlag;

// address: 0x8011477D
extern unsigned char cauldronFlag;

// address: 0x8011477E
extern unsigned char mFountainFlag;

// address: 0x8011477F
extern unsigned char pFountainFlag;

// address: 0x80114780
extern unsigned char tFountainFlag;

// address: 0x80114781
extern unsigned char treasureFlag;

// address: 0x80114784
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x800FABB0
// size: 0x10
extern int ThemeGood[4];

// address: 0x800FABC0
// size: 0x64
extern int trm5x[25];

// address: 0x800FAC24
// size: 0x64
extern int trm5y[25];

// address: 0x800FAC88
// size: 0x24
extern int trm3x[9];

// address: 0x800FACAC
// size: 0x24
extern int trm3y[9];

// address: 0x8011483C
extern int nummissiles;

// address: 0x800FAEE8
// size: 0x1F4
extern int missileactive[125];

// address: 0x800FB0DC
// size: 0x1F4
extern int missileavail[125];

// address: 0x80114840
extern unsigned char MissilePreFlag;

// address: 0x800FB2D0
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x80114841
extern unsigned char ManashieldFlag;

// address: 0x80114842
extern unsigned char ManashieldFlag2;

// address: 0x800FAE60
// size: 0x20
extern int XDirAdd[8];

// address: 0x800FAE80
// size: 0x20
extern int YDirAdd[8];

// address: 0x80114829
extern unsigned char fadetor;

// address: 0x8011482A
extern unsigned char fadetog;

// address: 0x8011482B
extern unsigned char fadetob;

// address: 0x800FAEA0
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x800FAEB0
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x800FDB80
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x801148A0
extern long nummonsters;

// address: 0x80103300
// size: 0x190
extern short monstactive[200];

// address: 0x80103490
// size: 0x190
extern short monstkills[200];

// address: 0x80103620
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x801148A4
extern long monstimgtot;

// address: 0x801148A8
extern char totalmonsters;

// address: 0x801148AC
extern int uniquetrans;

// address: 0x80114E54
static unsigned char sgbSaveSoundOn;

// address: 0x80114874
// size: 0x8
extern char offset_x[8];

// address: 0x8011487C
// size: 0x8
extern char offset_y[8];

// address: 0x8011485C
// size: 0x8
extern char left[8];

// address: 0x80114864
// size: 0x8
extern char right[8];

// address: 0x8011486C
// size: 0x8
extern char opposite[8];

// address: 0x80114850
extern int nummtypes;

// address: 0x80114854
// size: 0x7
extern char animletter[7];

// address: 0x800FD9E0
// size: 0x120
extern int MWVel[3][24];

// address: 0x80114884
// size: 0x4
extern char rnd5[4];

// address: 0x80114888
// size: 0x4
extern char rnd10[4];

// address: 0x8011488C
// size: 0x4
extern char rnd20[4];

// address: 0x80114890
// size: 0x4
extern char rnd60[4];

// address: 0x800FDB00
// size: 0x80
extern void (*AiProc[32])();

// address: 0x80103AF8
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x80105538
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x801055B8
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x80105628
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x801038E0
// size: 0x218
extern int TransPals[134];

// address: 0x801037E0
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x80105F78
// size: 0x60
extern struct PortalStruct portal[4];

// address: 0x801148C8
extern int portalindex;

// address: 0x80105F58
// size: 0x10
extern int WarpDropX[4];

// address: 0x80105F68
// size: 0x10
extern int WarpDropY[4];

// address: 0x801148E8
extern unsigned char invflag;

// address: 0x801148E9
extern unsigned char drawsbarflag;

// address: 0x801148EC
extern int InvBackY;

// address: 0x801148F0
extern int InvCursPos;

// address: 0x80106650
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x801148F4
extern int InvBackAY;

// address: 0x801148F8
extern int InvSel;

// address: 0x801148FC
extern int ItemW;

// address: 0x80114900
extern int ItemH;

// address: 0x80114904
extern int ItemNo;

// address: 0x80114908
// size: 0x8
extern struct RECT BRect;

// address: 0x801148DC
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x801148E0
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x801148D8
extern int InvPageNo;

// address: 0x80105FD8
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x80106000
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x80106248
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x801064E8
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x8010659C
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x801148E4
static unsigned long sgdwLastTime;

// address: 0x8011491C
extern unsigned char automapflag;

// address: 0x8010669C
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x80106764
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8011491D
extern unsigned char AMLWallFlag;

// address: 0x8011491E
extern unsigned char AMRWallFlag;

// address: 0x8011491F
extern unsigned char AMLLWallFlag;

// address: 0x80114920
extern unsigned char AMLRWallFlag;

// address: 0x80114921
extern unsigned char AMDirtFlag;

// address: 0x80114922
extern unsigned char AMColumnFlag;

// address: 0x80114923
extern unsigned char AMStairFlag;

// address: 0x80114924
extern unsigned char AMLDoorFlag;

// address: 0x80114925
extern unsigned char AMLGrateFlag;

// address: 0x80114926
extern unsigned char AMLArchFlag;

// address: 0x80114927
extern unsigned char AMRDoorFlag;

// address: 0x80114928
extern unsigned char AMRGrateFlag;

// address: 0x80114929
extern unsigned char AMRArchFlag;

// address: 0x8011492C
extern int AutoMapX;

// address: 0x80114930
extern int AutoMapY;

// address: 0x80114934
extern int AutoMapXOfs;

// address: 0x80114938
extern int AutoMapYOfs;

// address: 0x8011493C
extern int AMPlayerX;

// address: 0x80114940
extern int AMPlayerY;

// address: 0x80114919
extern unsigned char AutoMapPlayerR;

// address: 0x8011491A
extern unsigned char AutoMapPlayerG;

// address: 0x8011491B
extern unsigned char AutoMapPlayerB;

// address: 0x80114FB0
extern unsigned long GazTick;

// address: 0x8011B8D0
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A2878
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x80114FD8
extern void (*PollFunc)();

// address: 0x80114FBC
extern void (*MsgFunc)();

// address: 0x80115008
extern void (*ErrorFunc)();

// address: 0x80114EDC
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x80114EE0
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x80114EE4
// size: 0x5C
static struct TASK *T;

// address: 0x80114EE8
static unsigned long MemTypeForTasker;

// address: 0x80119100
// size: 0x30
static int SchEnv[12];

// address: 0x80114EEC
static unsigned long ExecId;

// address: 0x80114EF0
static unsigned long ExecMask;

// address: 0x80114EF4
static int TasksActive;

// address: 0x80114EF8
static void (*EpiFunc)();

// address: 0x80114EFC
static void (*ProFunc)();

// address: 0x80114F00
static unsigned long EpiProId;

// address: 0x80114F04
static unsigned long EpiProMask;

// address: 0x80114F08
static void (*DoTasksPrologue)();

// address: 0x80114F0C
static void (*DoTasksEpilogue)();

// address: 0x80114F10
static void (*StackFloodCallback)();

// address: 0x80114F14
static unsigned char ExtraStackProtection;

// address: 0x80114F18
static int ExtraStackSizeLongs;

// address: 0x80114FC4
extern void *LastPtr;

// address: 0x800A28B0
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x80114F1C
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x80119130
// size: 0x1180
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x80114F20
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x80114F24
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x80114F28
static int TimeStamp;

// address: 0x80114F2C
static unsigned char FullErrorChecking;

// address: 0x80114F30
static unsigned long LastAttemptedAlloc;

// address: 0x80114F34
static unsigned long LastDeallocedBlock;

// address: 0x80114F38
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x80114F3C
static int NumOfFreeHdrs;

// address: 0x80114F40
static unsigned long LastTypeAlloced;

// address: 0x80114F44
static void (*AllocFilter)();

// address: 0x800A28B8
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A28E0
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x8011A2B0
// size: 0x1380
static char buf[4992];

// address: 0x800A2908
// size: 0x7
static char NULL_REP[7];

// address: 0x80079514
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x80079530
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007953C
void Remove96__Fv() {
}


// address: 0x80079574
void AppMain() {
}


// address: 0x8007960C
void MAIN_RestartGameTask__Fv() {
}


// address: 0x80079638
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x800796F8
void MAIN_MainLoop__Fv() {
}


// address: 0x80079740
void CheckMaxArgs__Fv() {
}


// address: 0x80079774
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x80079780
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


// address: 0x800798F4
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x800799A8
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x80079A48
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x80079AE4
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x80079B84
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


// address: 0x80079CA0
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x80079D7C
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x80079EA4
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x80079EB0
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x80079EEC
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007A0F4
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007A100
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007A13C
unsigned char ClearedYet__Fv() {
}


// address: 0x8007A148
void PrimDrawSycnCallBack() {
}


// address: 0x8007A168
void SendDispEnv__Fv() {
}


// address: 0x8007A18C
// size: 0x18
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007A1A4
// size: 0x28
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007A1BC
// size: 0x34
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007A1D4
// size: 0x24
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007A1EC
// size: 0x14
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007A204
// size: 0xC
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007A21C
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007A330
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007A398
void VID_AfterDisplay__Fv() {
}


// address: 0x8007A3B8
void VID_ScrOn__Fv() {
}


// address: 0x8007A3E0
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007A438
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007A444
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007A450
void VID_DispEnvSend() {
}


// address: 0x8007A48C
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007A49C
int VID_GetXOff__Fv() {
}


// address: 0x8007A4A8
int VID_GetYOff__Fv() {
}


// address: 0x8007A4B4
void VID_SetDBuffer__Fb(bool DBuf) {
}


// address: 0x8007A5D0
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007A5D8
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007A5F8
int GetTpY__FUs_addr_8007A5F8(unsigned short tpage) {
}


// address: 0x8007A614
int GetTpX__FUs_addr_8007A614(unsigned short tpage) {
}


// address: 0x8007A620
// size: 0x14
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007A62C
// size: 0x14
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007A638
void SortOutFileSystem__Fv() {
}


// address: 0x8007A774
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007A794
void Spanker__Fv() {
}


// address: 0x8007A7D4
void GaryLiddon__Fv() {
}


// address: 0x8007A7DC
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
}


// address: 0x8007A8A0
void DummyPoll__Fv() {
}


// address: 0x8007A8A8
void DaveOwens__Fv() {
}


// address: 0x8007A8D0
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007A8F8
int GetTpY__FUs_addr_8007A8F8(unsigned short tpage) {
}


// address: 0x8007A914
int GetTpX__FUs_addr_8007A914(unsigned short tpage) {
}


// address: 0x8007A920
void TimSwann__Fv() {
}


// address: 0x8007A928
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007A930
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007A964
void leighbird__Fv() {
}


// address: 0x8007A98C
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007A9DC
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007AA30
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007AB98
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007ABFC
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007AC1C
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007ACFC
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007ADC0
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007AE24
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007AF00
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


// address: 0x8007B014
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007B0BC
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007B114
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007B16C
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007B180
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007B1BC
// size: 0x14
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007B224
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007B27C
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007B2C0
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007B384
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007B43C
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007B510
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


// address: 0x8007B720
// size: 0x4
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007B738
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007B764
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007B7E0
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007B84C
// size: 0x14
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007B888
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007B8E0
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007B920
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007B9E0
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007BA94
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007BB3C
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


// address: 0x8007BD48
// size: 0x6C
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007BD88
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007BDD0
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


// address: 0x8007BFC4
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80114BE4
	static int TpX;
	// address: 0x80114BE8
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


// address: 0x8007C094
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007C14C
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007C1A8
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007C218
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


// address: 0x8007C344
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


// address: 0x8007C440
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


// address: 0x8007C848
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


// address: 0x8007CAB4
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


// address: 0x8007CC14
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


// address: 0x8007CD10
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


// address: 0x8007CF6C
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


// address: 0x8007CFEC
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


// address: 0x8007D1B0
// size: 0x28
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007D304
// size: 0x34
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007D458
// size: 0x28
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007D53C
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007D690
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


// address: 0x8007D7D0
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x8007D8CC
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007D8F8
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007DA40
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


// address: 0x8007DB60
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x8007DBB4
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


// address: 0x8007DC7C
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8007DCD0
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x8007DD28
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


// address: 0x8007DE4C
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


// address: 0x8007DF20
// size: 0x4
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x8007DF70
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x8007DF98
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x8007E040
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


// address: 0x8007E100
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x8007E144
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


// address: 0x8007E1D4
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8007E244
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


// address: 0x8007E2B0
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007E300
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007E328
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


// address: 0x8007E3C4
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x8007E42C
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


// address: 0x8007E500
// size: 0x78
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x8007E534
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


// address: 0x8007E7B0
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x8007E7D4
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007EAB4
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x8007EB2C
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


// address: 0x8007EC88
void _GLOBAL__D_DatPool() {
}


// address: 0x8007ECE0
void _GLOBAL__I_DatPool() {
}


// address: 0x8007ED34
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x8007EDB0
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x8007EE2C
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8007EEA8
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x8007EED0
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x8007EEF8
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x8007EF04
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x8007EF10
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8007EF88
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x8007EF9C
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8007EFA8
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x8007EFBC
// size: 0x8
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x8007EFD8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8007EFF4
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F000
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F028
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F050
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x8007F064
// size: 0x14
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x8007F0A8
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x8007F100
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007F124
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007F14C
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007F170
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007F250
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x8007F260
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


// address: 0x8007F3AC
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


// address: 0x8007F608
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x8007F6F4
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


// address: 0x8007F820
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


// address: 0x8007F98C
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


// address: 0x8007FC44
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


// address: 0x8007FD44
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


// address: 0x8007FEE0
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x8007FF04
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x8007FF38
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80080020
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x8008002C
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x80080098
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


// address: 0x80080190
// size: 0x14
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x800801BC
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x800801F4
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


// address: 0x8008030C
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


// address: 0x800803E0
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x80080504
void Tfree__FPv(void *Addr) {
}


// address: 0x800805B4
void InitTmalloc__Fv() {
}


// address: 0x800805DC
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80080630
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x8008067C
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


// address: 0x80080770
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x8008079C
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


// address: 0x800809C0
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


// address: 0x80080CC0
int DoQuitMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 19
	register int RetVal;
	// register: 18
	register bool Done;
	// register: 16
	register int Menu;
	{
		// register: 3
		register unsigned short PadVal;
	}
}


// address: 0x80080DBC
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


// address: 0x80080EA4
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80080EB4
bool PA_GetPauseOk__Fv() {
}


// address: 0x80080EC0
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80081010
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081018
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081118
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081120
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081128
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081228
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081230
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081238
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x8008131C
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081324
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x8008134C
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80081374
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x8008139C
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800813E0
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80081414
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80081428
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80081448
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081450
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081458
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80081480
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x800814DC
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x80081504
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x8008152C
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x80081538
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x80081650
void PAD_Handler__Fv() {
	// register: 16
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 17
	register unsigned char fin;
}


// address: 0x80081808
// size: 0x6C
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x800818A4
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x800819DC
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80081B38
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80081C5C
void _GLOBAL__I_Pad0() {
}


// address: 0x80081C94
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x80081C9C
unsigned char CheckActive__4CPad_addr_80081C9C(struct CPad *this) {
}


// address: 0x80081CA8
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x80081CB0
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x80081CB8
// size: 0x6C
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80081CEC
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80081D10
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


// address: 0x80081DAC
void InitPrinty__Fv() {
}


// address: 0x80081E34
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80081E3C
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80081FBC
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


// address: 0x80082354
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x800823BC
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80082420
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8008242C
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80082450
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80082470
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80082488
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x800824E0
void Init__5CFont(struct CFont *this) {
}


// address: 0x80082514
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80082514(struct TextDat *this, int FrNum) {
}


// address: 0x80082530
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80082568
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


// address: 0x80082EE0
// size: 0x24
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80083018
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


// address: 0x800832BC
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


// address: 0x800833F4
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x8008364C
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


// address: 0x8008480C
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


// address: 0x80084A24
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80084A24(struct TextDat *this, int PalNum) {
}


// address: 0x80084A40
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80084A40(struct TextDat *this, int FrNum) {
}


// address: 0x80084A5C
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80084B5C
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80084BF8
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x80084C38
void CycleSelCols__Fv() {
}


// address: 0x80084DC8
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


// address: 0x80084E3C
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80084E90
// size: 0xE0
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x80084FE4
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008501C
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x800850E4
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x8008516C
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x800851D4
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x8008523C
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x80085298
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x800852E8
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80085634
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x800856E0
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x800857B4
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


// address: 0x800858BC
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


// address: 0x800859F8
// size: 0xC
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x80085A70
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x80085A98
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x80085AC0
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80085AD8
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
		// register: 8
		register int ThisYPos;
		// address: 0xFFFFFF78
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


// address: 0x80086FD8
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


// address: 0x80087148
void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// register: 30
	register int nMonster;
	// register: 20
	register int bItem;
	// register: 2
	register int bObject;
	// register: 21
	register int bFlags;
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
													// register: 16
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


// address: 0x80087E60
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


// address: 0x80088520
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


// address: 0x80088690
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x800886A4
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x800886B8
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008877C
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x800887E4
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x80088884
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x80088958
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x800889D8
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800889E0
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800889F4
// size: 0xE0
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x80088A00
void PRIM_GetPrim__FPP8POLY_FT4_addr_80088A00(struct POLY_FT4 **Prim) {
}


// address: 0x80088A7C
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80088AC4
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80088B00
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80088B48
void PRIM_GetPrim__FPP8POLY_GT4_addr_80088B48(struct POLY_GT4 **Prim) {
}


// address: 0x80088BC4
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x80088C40
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


// address: 0x80088C68
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x80088C84
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80088CAC
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80088CD4
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088CF8
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088D1C
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088D44
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088D50
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x80088DE8
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x80088E78
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80088EB0
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80088EB0(struct TextDat *this, int Creature) {
}


// address: 0x80088F28
int GetNumOfCreatures__7TextDat_addr_80088F28(struct TextDat *this) {
}


// address: 0x80088F3C
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_80088F3C(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80088F48
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80088F48(struct TextDat *this, int PalNum) {
}


// address: 0x80088F64
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80088F64(struct TextDat *this, int FrNum) {
}


// address: 0x80088F80
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x80088FAC
void OVR_LoadPregame__Fv() {
}


// address: 0x80088FD4
void OVR_LoadFrontend__Fv() {
}


// address: 0x80088FFC
void OVR_LoadGame__Fv() {
}


// address: 0x80089024
void OVR_LoadFmv__Fv() {
}


// address: 0x8008904C
void OVR_LoadMemcard__Fv() {
}


// address: 0x80089078
void ClearOutOverlays__Fv() {
}


// address: 0x800890D0
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x80089194
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x80089204
// size: 0x4
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x80089210
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x80089264
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x800893D4
// size: 0x4
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x800893E0
void StevesDummyPoll__Fv() {
}


// address: 0x800893E8
void Lambo__Fv() {
}


// address: 0x800893F0
// size: 0x84
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x800894D4
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008952C
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x80089588
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


// address: 0x800896D4
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


// address: 0x80089B00
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x80089B80
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
										// register: 21
										register int Frame;
										{
											{
												// register: 17
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
				}
			}
		}
	}
}


// address: 0x8008A0C0
void SetpNscrnxy__7CPlayeriiii(struct CPlayer *this, int x, int y, int px, int py) {
}


// address: 0x8008A128
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008A1A4
// size: 0x4
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008A20C
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008A214
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008A21C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008A21C(struct POLY_FT4 **Prim) {
}


// address: 0x8008A298
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008A298(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008A2D4
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008A2D4(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008A2FC
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008A310
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008A328
int GetNumOfFrames__7TextDatii_addr_8008A328(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008A360
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008A384
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008A384(struct TextDat *this, int Creature) {
}


// address: 0x8008A3FC
int GetNumOfCreatures__7TextDat_addr_8008A3FC(struct TextDat *this) {
}


// address: 0x8008A410
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008A410(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008A41C
void PROF_Open__Fv() {
}


// address: 0x8008A45C
bool PROF_State__Fv() {
}


// address: 0x8008A468
void PROF_On__Fv() {
}


// address: 0x8008A478
void PROF_Off__Fv() {
}


// address: 0x8008A484
void PROF_CpuEnd__Fv() {
}


// address: 0x8008A4B4
void PROF_CpuStart__Fv() {
}


// address: 0x8008A4D8
void PROF_DrawStart__Fv() {
}


// address: 0x8008A4FC
void PROF_DrawEnd__Fv() {
}


// address: 0x8008A52C
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


// address: 0x8008A720
void PROF_Restart__Fv() {
}


// address: 0x8008A740
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008A800
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008A8B0
void GoBackLevel__Fv() {
}


// address: 0x8008A928
void GoWarpLevel__Fv() {
}


// address: 0x8008A960
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008A9FC
void GoLoadGame__Fv() {
}


// address: 0x8008AA84
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008AB20
void GoNewLevel__Fv() {
}


// address: 0x8008AB74
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008AC0C
void GoForwardLevel__Fv() {
}


// address: 0x8008AC64
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008ACFC
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008AD4C
void PostNewGame__Fv() {
}


// address: 0x8008AD84
void LevelToLevelInit__Fv() {
}


// address: 0x8008ADDC
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008AE20
// size: 0x10
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008AE78
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


// address: 0x8008B2EC
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


// address: 0x8008B770
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


// address: 0x8008B8D0
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008B91C
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008BCD8
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008BDCC
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008BED0
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008BED0(struct TextDat *this, int PalNum) {
}


// address: 0x8008BEEC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008BEEC(struct TextDat *this, int FrNum) {
}


// address: 0x8008BF08
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008BF1C
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008BF5C
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


// address: 0x8008BFE8
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


// address: 0x8008C0B0
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


// address: 0x8008C1E8
// size: 0x80
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008C324
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008C37C
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008C488
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008C4D8
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008C528
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008C594
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008C6A0
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008C7C0
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008C888
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008CA64
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


// address: 0x8008CD5C
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


// address: 0x8008D188
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


// address: 0x8008D298
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x8008D368
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8008D3D4
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8008D44C
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80114C4C
	static int DestAddr;
}


// address: 0x8008D4C4
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8008D5F8
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008D64C
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8008D670
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008D6D4
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


// address: 0x8008D888
void AS_CallBack0__Fi(int handle) {
}


// address: 0x8008D89C
void AS_CallBack1__Fi(int handle) {
}


// address: 0x8008D8B0
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x8008D98C
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8008DA2C
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008DA38
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8008DA64
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x8008DB84
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x8008DBB8
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8008DC48
// size: 0x18
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008DD24
// size: 0x18
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008DDA4
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x8008DE44
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008DED8
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


// address: 0x8008DF4C
void SCR_Handler__Fv() {
}


// address: 0x8008DF74
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8008DF7C
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008DFB8
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008E01C
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E074
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E0CC
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008E0E0
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x8008E10C
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x8008E114
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8008E11C
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x8008E128
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008E160
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8008E16C
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008E18C
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008E1D8
void stub__FPcPv_addr_8008E1D8(char *e, void *argptr) {
}


// address: 0x8008E1E0
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8008E214
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008E29C
void print_demo_task__FP4TASK(struct TASK *T) {
}


// address: 0x8008E3CC
void TonysDummyPoll__Fv() {
}


// address: 0x8008E3F0
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8008E450
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8008E4B0
void set_pad_record_play__Fi(int level) {
}


// address: 0x8008E528
void demo_game_task__FP4TASK(struct TASK *T) {
}


// address: 0x8008E560
void start_demo__Fv() {
}


// address: 0x8008E5DC
void tony__Fv() {
}


// address: 0x8008E614
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8008E620
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8008E62C
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008E680
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008E6D4
void GLUE_PreTown__Fv() {
}


// address: 0x8008E738
void GLUE_PreDun__Fv() {
}


// address: 0x8008E784
bool GLUE_Finished__Fv() {
}


// address: 0x8008E790
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8008E79C
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8008E820
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008E830
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008E840
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008E850
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8008E928
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


// address: 0x8008EE14
// size: 0x8
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x8008EE9C
// size: 0x8
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8008EEF8
// size: 0x8
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8008EF28
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x8008EF68
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x8008EFBC
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x8008F068
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008F074
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x8008F07C
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008F090
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8008F108
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x8008F140
void RemoveCtrlScreen__Fv() {
}


// address: 0x8008F190
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


// address: 0x8008F7A0
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008F7E0
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008F820
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


// address: 0x8008F974
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x8008F9BC
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x8008FD24
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	// register: 22
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 2
	register int i;
	// address: 0xFFFFFFC0
	auto unsigned char r;
	// address: 0xFFFFFFC8
	auto unsigned char g;
	// address: 0xFFFFFFD0
	auto unsigned char b;
	// register: 4
	register int str;
	// register: 5
	register int len;
	{
		{
			// register: 4
			register int x1;
			// register: 23
			register int x2;
		}
	}
}


// address: 0x80090234
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 22
	register int pnum;
	{
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
}


// address: 0x80090790
void _GLOBAL__D_ctrlflag() {
}


// address: 0x800907B8
void _GLOBAL__I_ctrlflag() {
}


// address: 0x800907E0
unsigned short GetDown__C4CPad_addr_800907E0(struct CPad *this) {
}


// address: 0x80090808
unsigned short GetCur__C4CPad_addr_80090808(struct CPad *this) {
}


// address: 0x80090830
void SetRGB__6DialogUcUcUc_addr_80090830(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80090850
void SetBorder__6Dialogi_addr_80090850(struct Dialog *this, int Type) {
}


// address: 0x80090858
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80090864
void ___6Dialog_addr_80090864(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009088C
// size: 0x10
struct Dialog *__6Dialog_addr_8009088C(struct Dialog *this) {
}


// address: 0x800908E8
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80090934
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x80090AB4
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


// address: 0x80090BF8
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	register int diff;
}


// address: 0x80090E48
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80090E9C
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


// address: 0x80091100
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x800912E8
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


// address: 0x800914B0
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800914B0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800914EC
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_800914EC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80091514
void PRIM_GetPrim__FPP8POLY_FT4_addr_80091514(struct POLY_FT4 **Prim) {
}


// address: 0x80091590
int GetNumOfActions__7TextDati_addr_80091590(struct TextDat *this, int Creature) {
}


// address: 0x800915B4
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_800915B4(struct TextDat *this, int Creature) {
}


// address: 0x8009162C
int GetNumOfCreatures__7TextDat_addr_8009162C(struct TextDat *this) {
}


// address: 0x80091640
void DaveLDummyPoll__Fv() {
}


// address: 0x80091648
void DaveL__Fv() {
}


// address: 0x80091670
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
	// address: 0x80113A44
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


// address: 0x80091950
void mteleportfx__Fv() {
	// register: 2
	register int br;
}


// address: 0x80091C28
void invistimer__Fv() {
}


// address: 0x80091CF8
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


// address: 0x80091D80
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


// address: 0x80091F70
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


// address: 0x800920A4
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


// address: 0x80092274
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80092414
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x800924F8
void doparticlejump__Fv() {
}


// address: 0x80092538
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x800926A0
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


// address: 0x80092A98
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


// address: 0x80092D40
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x80092F64
void healFX__Fv() {
}


// address: 0x80092FF8
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x800930B8
void HealStart__Fi(int plr) {
}


// address: 0x800930D4
void HealotherStart__Fi(int plr) {
}


// address: 0x800930F4
void TeleStart__Fi(int plr) {
}


// address: 0x8009313C
void PhaseStart__Fi(int plr) {
}


// address: 0x8009316C
void InvisStart__Fi(int plr) {
}


// address: 0x8009319C
void PhaseEnd__Fi(int plr) {
}


// address: 0x800931C4
void ApocaStart__Fi(int plr) {
}


// address: 0x800932EC
void doapocaFX__Fv() {
	// address: 0x80113A48
	static int scale1;
	// address: 0x80113A4C
	static int scale2;
}


// address: 0x80093520
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80093584
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x80093600
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x8009367C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009367C(struct POLY_FT4 **Prim) {
}


// address: 0x800936F8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800936F8(struct TextDat *this, int FrNum) {
}


// address: 0x80093714
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


// address: 0x80093918
void show_spell_dir__Fi(int pnum) {
	// register: 21
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 22
	register int ScrXOff;
	// register: 19
	register int ScrYOff;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	register int cp;
	// register: 18
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 30
	register int otx;
	// register: 23
	register int oty;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFC0
	// size: 0xE0
	auto struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80093D14
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80093D88
void select_belt_item__Fi(int pnum) {
}


// address: 0x80093D90
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80093DF0
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80093F1C
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094050
void pad_func_up__Fi(int pnum) {
}


// address: 0x8009407C
void pad_func_down__Fi(int pnum) {
}


// address: 0x800940A8
void pad_func_left__Fi(int pnum) {
}


// address: 0x800940B0
void pad_func_right__Fi(int pnum) {
}


// address: 0x800940B8
void pad_func_select__Fi(int pnum) {
}


// address: 0x800941A8
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80094568
void pad_func_Action__Fi(int pnum) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80094888
void InitTargetCursor__Fi(int pnum) {
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800949D0
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80094A60
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 16
	register int sp;
	// register: 20
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 4
	// size: 0x6C
	register struct CPad *pad;
	// register: 19
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


// address: 0x8009505C
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80095150
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x8009528C
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800953AC
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800954C4
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80095570
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x8009563C
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80095754
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x800957C8
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x80095998
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800959C0
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800959E8
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


// address: 0x80095B20
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80095C2C
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x22C8
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


// address: 0x800964E8
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


// address: 0x800965C4
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x800966D0
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80096A84
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 3
	// size: 0x22C8
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


// address: 0x80096CD0
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x80096F04
void _GLOBAL__D_gplayer() {
}


// address: 0x80096F2C
void _GLOBAL__I_gplayer() {
}


// address: 0x80096F54
void SetRGB__6DialogUcUcUc_addr_80096F54(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80096F74
void SetBack__6Dialogi_addr_80096F74(struct Dialog *this, int Type) {
}


// address: 0x80096F7C
void SetBorder__6Dialogi_addr_80096F7C(struct Dialog *this, int Type) {
}


// address: 0x80096F84
void ___6Dialog_addr_80096F84(struct Dialog *this, int __in_chrg) {
}


// address: 0x80096FAC
// size: 0x10
struct Dialog *__6Dialog_addr_80096FAC(struct Dialog *this) {
}


// address: 0x80097008
void MoveToScrollTarget__7CBlocks_addr_80097008(struct CBlocks *this) {
}


// address: 0x8009701C
unsigned short GetDown__C4CPad_addr_8009701C(struct CPad *this) {
}


// address: 0x80097044
unsigned short GetCur__C4CPad_addr_80097044(struct CPad *this) {
}


// address: 0x8009706C
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x800970E8
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80097140
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8009719C
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800971D4
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009720C
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009726C
bool IsGameLoading__Fv() {
}


// address: 0x80097278
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


// address: 0x800976D0
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x80097780
void TakeDownCutScreen__Fv() {
}


// address: 0x800977C8
void FinishProgress__Fv() {
}


// address: 0x80097810
void PRIM_GetPrim__FPP7POLY_G4_addr_80097810(struct POLY_G4 **Prim) {
}


// address: 0x8009788C
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x800978C4
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x800978FC
void SetRGB__6DialogUcUcUc_addr_800978FC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009791C
void SetBack__6Dialogi_addr_8009791C(struct Dialog *this, int Type) {
}


// address: 0x80097924
void SetBorder__6Dialogi_addr_80097924(struct Dialog *this, int Type) {
}


// address: 0x8009792C
void ___6Dialog_addr_8009792C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80097954
// size: 0x10
struct Dialog *__6Dialog_addr_80097954(struct Dialog *this) {
}


// address: 0x800979B0
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x800979D0
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x80097BEC
void memcard_event__Fii(int evt, int side) {
}


// address: 0x80097BF8
void init_card__Fi(int card_number) {
}


// address: 0x80097C2C
int ping_card__Fi(int card_number) {
}


// address: 0x80097CC0
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x80097CF8
void MemcardON__Fv() {
}


// address: 0x80097D54
void MemcardOFF__Fv() {
}


// address: 0x80097DA4
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x80097E88
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


// address: 0x80098388
void DrawMenu__Fi(int MenuNo) {
	// address: 0xFFFFFF80
	// size: 0x8
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
	// register: 17
	register int mptrx;
	// register: 16
	register int mptry;
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
									// register: 3
									register int fi;
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


// address: 0x80098EB8
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


// address: 0x80099550
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
	// register: 4
	register int save_blocks;
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
				}
			}
		}
	}
}


// address: 0x80099BF4
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


// address: 0x8009A204
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


// address: 0x8009A758
void CalcVolumes__Fv() {
}


// address: 0x8009A898
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


// address: 0x8009A9A0
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009AB48
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 17
	register int old_pad;
	// register: 18
	// size: 0x6C
	register struct CPad *P;
	{
		{
			{
				// register: 3
				register int x;
			}
		}
	}
}


// address: 0x8009B138
void ToggleOptions__Fv() {
}


// address: 0x8009B1D8
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


// address: 0x8009B4D0
void PRIM_GetPrim__FPP7POLY_G4_addr_8009B4D0(struct POLY_G4 **Prim) {
}


// address: 0x8009B54C
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009B574
unsigned short GetDown__C4CPad_addr_8009B574(struct CPad *this) {
}


// address: 0x8009B59C
unsigned short GetUp__C4CPad_addr_8009B59C(struct CPad *this) {
}


// address: 0x8009B5C4
unsigned short GetCur__C4CPad_addr_8009B5C4(struct CPad *this) {
}


// address: 0x8009B5EC
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8009B5F4
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009B5FC
void SetRGB__6DialogUcUcUc_addr_8009B5FC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009B61C
void SetBack__6Dialogi_addr_8009B61C(struct Dialog *this, int Type) {
}


// address: 0x8009B624
void SetBorder__6Dialogi_addr_8009B624(struct Dialog *this, int Type) {
}


// address: 0x8009B62C
int SetOTpos__6Dialogi_addr_8009B62C(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8009B638
void ___6Dialog_addr_8009B638(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009B660
// size: 0x10
struct Dialog *__6Dialog_addr_8009B660(struct Dialog *this) {
}


// address: 0x8009B6BC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009B6BC(struct TextDat *this, int FrNum) {
}


// address: 0x8009B6D8
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009B730
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x8009B90C
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009B988
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 2
	register int type;
	// register: 4
	register int i;
}


// address: 0x8009BA68
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009BABC
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009BC24
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009BD28
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009BD64
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009BDE8
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009BE94
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009BF38
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


// address: 0x8009BFDC
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


// address: 0x8009C288
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C294
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C2E4
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009C3D0
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


// address: 0x8009C500
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009C5D8
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009C730
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x8009C7CC
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x8009C8FC
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x8009CA00
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


// address: 0x8009CC0C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009CC0C(struct POLY_FT4 **Prim) {
}


// address: 0x8009CC88
short PlayFMV__FPCc(char *str) {
	// register: 17
	register short RetVal;
	// register: 16
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009CD30
void play_movie(char *pszMovie) {
	{
		{
			{
				// register: 17
				register int i;
			}
		}
	}
}


// address: 0x8009CDC0
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


// address: 0x8009D25C
unsigned short GetDown__C4CPad_addr_8009D25C(struct CPad *this) {
}


// address: 0x8009D284
int GetNumOfFrames__7TextDatii_addr_8009D284(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8009D2BC
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8009D2BC(struct TextDat *this, int Creature) {
}


// address: 0x8009D334
int GetNumOfCreatures__7TextDat_addr_8009D334(struct TextDat *this) {
}


// address: 0x8009D348
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009D348(struct TextDat *this, int FrNum) {
}


// address: 0x8002E850
unsigned char TrimCol__Fs_addr_8002E850(short col) {
}


// address: 0x8002E888
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


// address: 0x8002F3A4
void SetSpellTrans__Fc(char t) {
}


// address: 0x8002F3B0
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8002F448
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


// address: 0x8002F4C0
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8002F574
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


// address: 0x800302A4
void SetSpell__Fi(int pnum) {
}


// address: 0x8003036C
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x8003041C
void ClearPanel__Fv() {
}


// address: 0x8003044C
void InitPanelStr__Fv() {
}


// address: 0x8003046C
void InitControlPan__Fv() {
	// register: 4
	register int i;
}


// address: 0x800306AC
void DrawCtrlPan__Fv() {
}


// address: 0x800306D8
void DoAutoMap__Fv() {
}


// address: 0x8003074C
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


// address: 0x80030FD8
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


// address: 0x800310E8
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


// address: 0x80031204
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


// address: 0x80031440
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


// address: 0x80031B7C
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


// address: 0x800320C8
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80032170
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


// address: 0x800322D8
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x800323A4
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


// address: 0x8003249C
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


// address: 0x800335FC
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


// address: 0x80033A78
void DrawChrTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80033B18
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80033BAC
void CheckChrBtns__Fv() {
	// register: 5
	register int pc;
}


// address: 0x80033DE0
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80033E64
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80033F4C
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x80033FE4
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x800341EC
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


// address: 0x80034B2C
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 10
	register char st;
}


// address: 0x80034D80
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80034DB4
void _GLOBAL__D_fontkern() {
}


// address: 0x80034DDC
void _GLOBAL__I_fontkern() {
}


// address: 0x80034E18
unsigned short GetDown__C4CPad_addr_80034E18(struct CPad *this) {
}


// address: 0x80034E40
void SetRGB__6DialogUcUcUc_addr_80034E40(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80034E60
void SetBack__6Dialogi_addr_80034E60(struct Dialog *this, int Type) {
}


// address: 0x80034E68
void SetBorder__6Dialogi_addr_80034E68(struct Dialog *this, int Type) {
}


// address: 0x80034E70
void ___6Dialog_addr_80034E70(struct Dialog *this, int __in_chrg) {
}


// address: 0x80034E98
// size: 0x10
struct Dialog *__6Dialog_addr_80034E98(struct Dialog *this) {
}


// address: 0x80034EF4
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80034EF4(struct TextDat *this, int PalNum) {
}


// address: 0x80034F10
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80034F10(struct TextDat *this, int FrNum) {
}


// address: 0x80034F2C
void InitCursor__Fv() {
}


// address: 0x80034F34
void FreeCursor__Fv() {
}


// address: 0x80034F3C
void SetICursor__Fi(int i) {
}


// address: 0x80034F98
void SetCursor__Fi(int i) {
}


// address: 0x80034FFC
void NewCursor__Fi(int i) {
}


// address: 0x8003501C
void InitLevelCursor__Fv() {
}


// address: 0x8003507C
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


// address: 0x800352CC
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


// address: 0x800354F4
void CheckCursMove__Fv() {
}


// address: 0x800354FC
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


// address: 0x800356F8
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x80035740
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035790
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800357EC
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035860
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035924
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035B08
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035C3C
unsigned char TryIconCurs__Fv() {
}


// address: 0x80035FE8
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80035FF0
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800360A0
void LoadLvlGFX__Fv() {
}


// address: 0x8003613C
void LoadAllGFX__Fv() {
}


// address: 0x8003615C
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036254
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x800363DC
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


// address: 0x800364B8
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


// address: 0x80036DD4
void game_logic__Fv() {
}


// address: 0x80036EE0
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80036F88
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80036FC0
void alloc_plr__Fv() {
}


// address: 0x80036FC8
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80036FD0
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80036FF0
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037010
void app_fatal(char *pszFile) {
}


// address: 0x80037040
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80037068
void DoMemCardFromInGame__Fv() {
}


// address: 0x80037090
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800370E4
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037104
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x8003714C
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800372AC
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80037364
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037490
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800375C4
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800376F4
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037824
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037954
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A8C
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037BBC
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CEC
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E1C
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


// address: 0x800380E0
void InitTowners__Fv() {
}


// address: 0x8003816C
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


// address: 0x80038210
void TownCtrlMsg__Fi(int i) {
	// register: 3
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038328
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x8003835C
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038390
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80038478
void TownHealer__Fv() {
}


// address: 0x800384A0
void TownStory__Fv() {
}


// address: 0x800384C8
void TownDrunk__Fv() {
}


// address: 0x800384F0
void TownBoy__Fv() {
}


// address: 0x80038518
void TownWitch__Fv() {
}


// address: 0x80038540
void TownBarMaid__Fv() {
}


// address: 0x80038568
void TownCow__Fv() {
}


// address: 0x80038590
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


// address: 0x800387E0
// size: 0x94
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800388A4
void CowSFX__Fi(int pnum) {
	// address: 0x8010A6E8
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80114094
	static int snLastCowSFX;
}


// address: 0x800389B0
void TownerTalk__Fii(int first, int t) {
}


// address: 0x800389F0
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


// address: 0x80039DE8
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x80039DF0
void stream_stop__Fv() {
}


// address: 0x80039E38
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x80039EFC
void stream_update__Fv() {
}


// address: 0x80039F04
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x80039F20
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x80039F78
void FreeMonsterSnd__Fv() {
}


// address: 0x80039F80
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A07C
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A184
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003A2A8
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A340
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A380
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A3D4
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


// address: 0x8003A46C
void sound_update__Fv() {
}


// address: 0x8003A4A0
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A4E4
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003A584
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003A628
void SetRndSeed__Fl(long s) {
}


// address: 0x8003A638
long GetRndSeed__Fv() {
}


// address: 0x8003A680
long random__Fil(int idx, long v) {
}


// address: 0x8003A6EC
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003A738
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003A788
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003A790
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003A820
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003A828
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003A8BC
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003A8E8
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFEE8
	// size: 0x100
	auto char tempstr[256];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x8003A9F4
void interface_msg_pump__Fv() {
}


// address: 0x8003A9FC
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


// address: 0x8003AEB8
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003AEF0
void InitItemGFX__Fv() {
}


// address: 0x8003AF1C
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003AFE4
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


// address: 0x8003B1FC
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003B3BC
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
	// size: 0x22C8
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


// address: 0x8003BE44
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003C19C
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003C238
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x22C8
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


// address: 0x8003C390
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003C3DC
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x22C8
	register struct PlayerStruct *p;
}


// address: 0x8003C4B4
void CalcPlrBookVals__Fi(int p) {
	// register: 17
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003C728
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003C7E4
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003C8FC
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003C928
void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct *h) {
	// register: 4
	register int i;
	// register: 2
	register int ii;
	// register: 7
	register int s;
	// register: 16
	register unsigned char doneflag;
}


// address: 0x8003CA94
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003CA9C
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CACC
void CreatePlrItems__Fi(int p) {
	// register: 4
	register int i;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8003CED8
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003D1B0
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


// address: 0x8003D3DC
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


// address: 0x8003D544
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


// address: 0x8003D60C
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003D6C4
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003D92C
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


// address: 0x8003DB1C
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


// address: 0x8003DDD0
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003E31C
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003E354
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003E3C8
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8003F9BC
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


// address: 0x8003FE24
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x8003FF20
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x8004002C
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x80040270
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


// address: 0x800404B0
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80040624
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


// address: 0x80040724
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


// address: 0x800408D4
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80040B7C
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80040C88
void ItemRndDur__Fi(int ii) {
}


// address: 0x80040D18
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80041024
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x8004126C
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x8004139C
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800414E4
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x800415BC
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x8004167C
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800417C0
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x800419AC
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


// address: 0x80041BD8
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


// address: 0x80041D98
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x80041F5C
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80041FB0
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x94
	register struct ItemStruct *i;
}


// address: 0x80042078
void ProcessItems__Fv() {
	// register: 6
	register int i;
	// register: 5
	register int ii;
}


// address: 0x800421BC
void FreeItemGFX__Fv() {
}


// address: 0x800421C4
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


// address: 0x80042354
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x80042434
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80042504
void DoRepair__Fii(int pnum, int cii) {
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x800425C0
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80042630
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x22C8
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


// address: 0x80042728
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x8004281C
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80042EC8
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x80042ED0
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x8004315C
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800434C8
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800437D8
void CastScroll__Fi(int pnum) {
}


// address: 0x800437E0
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80043DEC
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80043E78
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80043EF4
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80043FFC
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x94
	auto struct ItemStruct holditem;
}


// address: 0x80044210
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x80044444
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x8004458C
void SpawnStoreGold__Fv() {
}


// address: 0x8004460C
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x800447AC
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80044810
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x800449A0
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80044B1C
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80044C98
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x80044E0C
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80045024
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x8004508C
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 5
	register int y;
	// register: 4
	register int c;
}


// address: 0x80045100
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x8004516C
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


// address: 0x80045E1C
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


// address: 0x80046060
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


// address: 0x80046124
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


// address: 0x80046634
void FreeLightTable__Fv() {
}


// address: 0x8004663C
void InitLightTable__Fv() {
}


// address: 0x80046644
void MakeLightTable__Fv() {
}


// address: 0x8004664C
void InitLightMax__Fv() {
}


// address: 0x80046670
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x800466B4
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x80046748
void AddUnLight__Fi(int i) {
}


// address: 0x80046778
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x800467A4
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x800467DC
void light_fix__Fi(int i) {
}


// address: 0x800467E4
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x8004681C
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x80046860
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x80046890
void ProcessLightList__Fv() {
	// register: 7
	register int i;
	// register: 16
	register int j;
	// register: 4
	register unsigned char temp;
}


// address: 0x800469BC
void SavePreLighting__Fv() {
}


// address: 0x800469C4
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80046A14
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80046B18
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80046BCC
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x80046C84
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x80046EE4
void FreeQuestText__Fv() {
}


// address: 0x80046EEC
void InitQuestText__Fv() {
}


// address: 0x80046EF8
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


// address: 0x80047038
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x80047160
void DrawQTextBack__Fv() {
}


// address: 0x800471D0
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8004725C
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80047328
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


// address: 0x80047658
void _GLOBAL__D_QBack() {
}


// address: 0x80047680
void _GLOBAL__I_QBack() {
}


// address: 0x800476A8
void SetRGB__6DialogUcUcUc_addr_800476A8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800476C8
void SetBorder__6Dialogi_addr_800476C8(struct Dialog *this, int Type) {
}


// address: 0x800476D0
void ___6Dialog_addr_800476D0(struct Dialog *this, int __in_chrg) {
}


// address: 0x800476F8
// size: 0x10
struct Dialog *__6Dialog_addr_800476F8(struct Dialog *this) {
}


// address: 0x80047754
int GetCharWidth__5CFontc_addr_80047754(struct CFont *this, char ch) {
}


// address: 0x800477AC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800477AC(struct TextDat *this, int FrNum) {
}


// address: 0x800477C8
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x800477D0
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800477D8
void delta_init__Fv() {
}


// address: 0x80047838
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x800478D4
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047958
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x800479E8
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


// address: 0x80047D14
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80047D74
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


// address: 0x80047F38
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


// address: 0x800480C0
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x800480E4
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x80048108
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


// address: 0x8004831C
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x8004834C
int DeltaImportData__FPc(char *Src) {
}


// address: 0x80048380
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8004846C
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x80048494
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x800484E0
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x80048510
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80048548
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80048588
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x800485D0
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x800485FC
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x8004862C
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80048664
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x800486D8
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x8004880C
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048888
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x800488E0
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048948
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048A48
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x80048AE4
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x80048B14
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048C28
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80048C30
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80048C64
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80048CC0
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80048D00
void check_update_plr__Fi(int pnum) {
}


// address: 0x80048D08
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048DA4
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048DD4
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048E04
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048E34
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048E64
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048ED0
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048F6C
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x800490A4
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


// address: 0x8004926C
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049308
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049434
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


// address: 0x800495F4
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049688
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
	{
		{
			// register: 3
			register int ii;
		}
	}
}


// address: 0x80049820
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 3
			register int ii;
		}
	}
}


// address: 0x80049954
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
}


// address: 0x80049A5C
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049B00
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049C00
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049CF0
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049DE4
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x80049F00
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004A01C
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A07C
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
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


// address: 0x8004A1C0
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A2A0
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A378
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A454
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A530
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A5B8
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A5F0
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A658
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A6F4
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A72C
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A800
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A864
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A8C8
void On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
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


// address: 0x8004AA2C
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB28
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB70
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AD14
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004ADA4
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AE34
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AEC4
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AF50
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFDC
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFE4
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFEC
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFF4
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B044
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B2C0
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


// address: 0x8004B448
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B498
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4E0
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B520
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B560
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5A0
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5E0
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B628
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


// address: 0x8004B73C
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80114DA8
	static unsigned char sbLastCmd;
}


// address: 0x8004BB5C
// size: 0xF1C
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004BBEC
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x8004BC24
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004BC50
int InitLevelType__Fi(int l) {
}


// address: 0x8004BC9C
void SetupLocalCoords__Fv() {
	// register: 5
	register int x;
	// register: 4
	register int y;
}


// address: 0x8004BE10
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004BE84
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


// address: 0x8004C0A4
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C1DC
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C328
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004C3B0
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004C3F0
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004C494
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004C548
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


// address: 0x8004C764
void FreeObjectGFX__Fv() {
}


// address: 0x8004C770
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004C828
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004CAAC
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004CB0C
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004CB34
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CC40
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CD4C
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


// address: 0x8004CF5C
void Obj_Circle__Fi(int i) {
	// register: 2
	register int px;
	// register: 3
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


// address: 0x8004D270
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004D2D4
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


// address: 0x8004D5B0
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004D620
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004D7B4
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004D800
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004D910
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004DBE0
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


// address: 0x8004DF30
void Obj_BCrossDamage__Fi(int i) {
	// register: 3
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004E1B0
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004E450
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004E488
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


// address: 0x8004E55C
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E564
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E56C
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004E7EC
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004E890
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004EC34
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F00C
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F3A4
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F73C
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FA44
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FD4C
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


// address: 0x80050248
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050380
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050494
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x8005064C
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x800506F8
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050868
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800509BC
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


// address: 0x80050BA8
void OperateBook__Fii(int pnum, int i) {
	// register: 20
	register int v1;
	// register: 18
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


// address: 0x8005107C
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x80051424
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x800515F4
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x800519B4
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80051B70
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80051D00
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80051F34
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x80052104
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800522BC
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052410
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052564
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


// address: 0x8005266C
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


// address: 0x80052924
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


// address: 0x80052AE0
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80052B50
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


// address: 0x80054FAC
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055128
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800552F8
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800553E0
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80055550
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80055640
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x800556E8
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x8005579C
unsigned char OperateFountains__Fii(int pnum, int i) {
	// register: 21
	register int ii;
	// register: 18
	register unsigned char rv;
	{
		{
			{
				{
					// register: 16
					register int rndVal;
					// register: 18
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


// address: 0x80055D30
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x80055EDC
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80055FCC
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x800560AC
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x800564E4
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x800565F8
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x8005670C
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056820
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80056A00
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


// address: 0x80056BF0
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80057144
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x8005729C
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x800572F8
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80057410
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


// address: 0x80057548
void SyncLever__Fi(int i) {
}


// address: 0x800575C4
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x800576BC
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


// address: 0x80057818
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80057980
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80057AAC
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x80057BEC
void GetObjectStr__Fi(int i) {
}


// address: 0x80058000
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


// address: 0x8005823C
int GetNumOfFrames__7TextDatii_addr_8005823C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058274
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80058274(struct TextDat *this, int Creature) {
}


// address: 0x800582EC
int GetNumOfCreatures__7TextDat_addr_800582EC(struct TextDat *this) {
}


// address: 0x80058300
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80058308
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058334
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x800583E8
void SetupLocalPlayer__Fv() {
}


// address: 0x80058408
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058444
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058458
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058478
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058480
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005849C
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800584C0
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x800586FC
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80058B18
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80058B80
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80058CF0
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


// address: 0x80058EFC
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


// address: 0x80058F80
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


// address: 0x8005934C
void InitMultiView__Fv() {
}


// address: 0x800593A0
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x800593E4
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059478
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005956C
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059580
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005960C
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059670
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800C8610
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x800596AC
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800596D8
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x80059810
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x800598A8
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x80059A44
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


// address: 0x80059B64
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x80059C84
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x80059E1C
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


// address: 0x80059FE0
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
	// size: 0x22C8
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


// address: 0x8005A364
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005A7AC
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005A8F0
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005A910
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


// address: 0x8005ABF8
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005ACB4
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005ADF0
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AE80
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005AF3C
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AF44
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005AFCC
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005B338
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005B4D8
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


// address: 0x8005BB08
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


// address: 0x8005BEA8
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005BF38
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


// address: 0x8005C2C4
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005C3C4
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C484
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C524
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


// address: 0x8005D494
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D804
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8005D900
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005D97C
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DABC
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DAC4
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005DED4
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005DF34
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


// address: 0x8005E3B0
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E44C
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
			// size: 0x22C8
			register struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x8005E778
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E7A0
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


// address: 0x8005E940
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005E948
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 5
	register unsigned char addflag;
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
}


// address: 0x8005ED50
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005EE8C
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EEBC
void CheckStats__Fi(int p) {
	// register: 5
	register int c;
	// register: 6
	register int i;
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F050
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F164
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F248
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F324
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F3F8
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005F43C
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F510
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F578
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F64C
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F6B0
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F6B8
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F9E0
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FA08
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x8005FA4C
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005FA80
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FAB4
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FAE8
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x8005FB1C
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FB50
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x8005FB88
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005FBBC
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FBE4
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FC0C
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FC34
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x8005FC7C
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FCA4
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FCCC
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005FD00
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FD28
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FD50
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x8005FD94
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x8005FDC8
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FDFC
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x8005FE40
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x8005FE84
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x8005FEC8
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x8005FF14
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x8005FF58
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x8005FF9C
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005FFE4
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060028
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x8006006C
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x800600B0
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x800600F4
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060138
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x8006017C
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x800601C4
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060208
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060250
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060294
void CheckNewPath__Fi(int pnum) {
}


// address: 0x800602D8
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x8006031C
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060360
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x800603A4
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x800603E8
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x8006042C
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80060470
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x800604B4
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x800604F8
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x8006053C
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x80060570
void PRIM_GetPrim__FPP8POLY_FT4_addr_80060570(struct POLY_FT4 **Prim) {
}


// address: 0x800605EC
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x8006063C
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80060648
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80060654
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80060660
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


// address: 0x800608B0
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x80060D54
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


// address: 0x80060EF8
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80060F8C
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


// address: 0x80061534
void SetReturnLvlPos__Fv() {
}


// address: 0x80061644
void GetReturnLvlPos__Fv() {
}


// address: 0x80061698
void ResyncMPQuests__Fv() {
}


// address: 0x800617D4
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80061D34
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


// address: 0x80061F60
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062198
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062218
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062328
void QuestlogUp__Fv() {
}


// address: 0x80062380
void QuestlogDown__Fv() {
}


// address: 0x800623E8
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x800624A4
void QuestlogESC__Fv() {
}


// address: 0x800624E4
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80062564
void _GLOBAL__D_questlog() {
}


// address: 0x8006258C
void _GLOBAL__I_questlog() {
}


// address: 0x800625B4
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x800625C0
void SetRGB__6DialogUcUcUc_addr_800625C0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800625E0
void SetBack__6Dialogi_addr_800625E0(struct Dialog *this, int Type) {
}


// address: 0x800625E8
void SetBorder__6Dialogi_addr_800625E8(struct Dialog *this, int Type) {
}


// address: 0x800625F0
void ___6Dialog_addr_800625F0(struct Dialog *this, int __in_chrg) {
}


// address: 0x80062618
// size: 0x10
struct Dialog *__6Dialog_addr_80062618(struct Dialog *this) {
}


// address: 0x80062674
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80062674(struct TextDat *this, int PalNum) {
}


// address: 0x80062690
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80062690(struct TextDat *this, int FrNum) {
}


// address: 0x800626AC
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x80062850
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x80062948
void FreeStoreMem__Fv() {
}


// address: 0x80062950
void DrawSTextBack__Fv() {
}


// address: 0x800629C0
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
	// address: 0x80114294
	static unsigned char DaveFix;
}


// address: 0x80062D50
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80062DE4
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80062E7C
void AddSLine__Fi(int y) {
}


// address: 0x80062ECC
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80062EF4
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80062FA8
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x800633EC
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


// address: 0x800639F0
void S_StartSmith__Fv() {
}


// address: 0x80063B78
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80063D30
void S_StartSBuy__Fv() {
}


// address: 0x80063E58
void S_ScrollSPBuy__Fi(int idx) {
	// register: 18
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x8006402C
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064174
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064254
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


// address: 0x80064454
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x8006484C
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800648EC
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80064AC8
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80064F44
void S_StartWitch__Fv() {
}


// address: 0x80065084
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x8006523C
void S_StartWBuy__Fv() {
}


// address: 0x8006535C
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80065470
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80065A7C
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80065B00
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80065C7C
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066058
void S_StartNoMoney__Fv() {
}


// address: 0x800660C0
void S_StartNoRoom__Fv() {
}


// address: 0x80066120
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 4
	register unsigned char idprint;
}


// address: 0x80066438
void S_StartBoy__Fv() {
}


// address: 0x800665C8
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x8006671C
void S_StartHealer__Fv() {
}


// address: 0x800668E0
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80066A4C
void S_StartHBuy__Fv() {
}


// address: 0x80066B64
void S_StartStory__Fv() {
}


// address: 0x80066C54
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80066C88
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066D58
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x800676EC
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x80067870
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


// address: 0x80067AA0
void S_StartTavern__Fv() {
}


// address: 0x80067B98
void S_StartBarMaid__Fv() {
}


// address: 0x80067C6C
void S_StartDrunk__Fv() {
}


// address: 0x80067D40
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068028
void DrawSText__Fv() {
}


// address: 0x80068068
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068130
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x800682DC
void STextESC__Fv() {
}


// address: 0x80068468
void STextUp__Fv() {
}


// address: 0x800685F0
void STextDown__Fv() {
}


// address: 0x80068788
void S_SmithEnter__Fv() {
}


// address: 0x8006885C
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800688D4
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006894C
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80068D50
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80068F24
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800690EC
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069254
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


// address: 0x80069464
unsigned char StoreGoldFit__Fi(int idx) {
	// register: 18
	register int sz;
	// register: 16
	register int numsqrs;
	// register: 5
	register int i;
	// register: 17
	register long cost;
}


// address: 0x800696FC
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


// address: 0x80069944
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80069C14
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x80069D00
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 3
	register int idx;
}


// address: 0x80069F38
void S_SRepairEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A074
void S_WitchEnter__Fv() {
}


// address: 0x8006A124
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006A308
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A4D0
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A5BC
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006A714
void S_WRechargeEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A850
void S_BoyEnter__Fv() {
}


// address: 0x8006A980
void BoyBuyItem__Fv() {
}


// address: 0x8006A9FC
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006AC70
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006AE34
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006B12C
void S_ConfirmEnter__Fv() {
}


// address: 0x8006B248
void S_HealerEnter__Fv() {
}


// address: 0x8006B2E0
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B4C8
void S_StoryEnter__Fv() {
}


// address: 0x8006B560
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B6BC
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


// address: 0x8006B8B4
void S_TavernEnter__Fv() {
}


// address: 0x8006B924
void S_BarmaidEnter__Fv() {
}


// address: 0x8006B994
void S_DrunkEnter__Fv() {
}


// address: 0x8006BA04
void STextEnter__Fv() {
}


// address: 0x8006BC04
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006BD08
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006BD1C
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006BD44
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006BD6C
unsigned short GetDown__C4CPad_addr_8006BD6C(struct CPad *this) {
}


// address: 0x8006BD94
void SetRGB__6DialogUcUcUc_addr_8006BD94(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006BDB4
void SetBorder__6Dialogi_addr_8006BDB4(struct Dialog *this, int Type) {
}


// address: 0x8006BDBC
void ___6Dialog_addr_8006BDBC(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006BDE4
// size: 0x10
struct Dialog *__6Dialog_addr_8006BDE4(struct Dialog *this) {
}


// address: 0x8006BE40
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006BFB4
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


// address: 0x8006C1AC
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


// address: 0x8006C29C
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


// address: 0x8006C678
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


// address: 0x8006C7E0
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


// address: 0x8006C8C4
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


// address: 0x8006C95C
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006CC74
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006CF24
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x8006D384
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006D800
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006DD0C
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


// address: 0x8006DDCC
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006DEC0
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006DFB4
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006E0A8
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


// address: 0x8006E3C4
void FadeGameOut__Fv() {
}


// address: 0x8006E460
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x8006E4C4
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


// address: 0x8006E9E8
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


// address: 0x8006EC88
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x8006EDB4
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x8006EE4C
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x8006F0A8
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x8006F344
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8006F588
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x8006F590
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x8006F5F8
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x8006F618
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x8006F688
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x8006F724
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x8006F78C
void music_stop__Fv() {
}


// address: 0x8006F7D8
void music_fade__Fv() {
}


// address: 0x8006F818
void music_start__Fi(int nTrack) {
}


// address: 0x8006F89C
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


// address: 0x8006FD24
void CloseInvChr__Fv() {
}


// address: 0x8006FD8C
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8006FE30
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x8006FEA0
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x8006FF10
// size: 0x9C
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x8007003C
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x8007007C
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800700C0
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80070104
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80070374
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80070534
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80070590
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800705CC
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x8007066C
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80070A50
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80070B24
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80070C3C
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80070C80
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


// address: 0x80070FE4
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x800712B4
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 17
	register int x;
	// register: 18
	register int y;
}


// address: 0x800714DC
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


// address: 0x80071690
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
	register int cp;
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


// address: 0x80071D2C
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEA8
	// size: 0x9C
	auto struct GamePad GPad1;
	// address: 0xFFFFFF48
	// size: 0x9C
	auto struct GamePad GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80071F24
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80071FD4
void Init_GamePad__Fv() {
}


// address: 0x80072004
void InitGamePadVars__Fv() {
}


// address: 0x8007207C
void MoveToScrollTarget__7CBlocks_addr_8007207C(struct CBlocks *this) {
}


// address: 0x80072090
unsigned short GetDown__C4CPad_addr_80072090(struct CPad *this) {
}


// address: 0x800720B8
unsigned short GetUp__C4CPad_addr_800720B8(struct CPad *this) {
}


// address: 0x800720E0
unsigned short GetCur__C4CPad_addr_800720E0(struct CPad *this) {
}


// address: 0x80072108
void DoGameTestStuff__Fv() {
}


// address: 0x80072134
void DoInitGameStuff__Fv() {
}


// address: 0x80072168
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80072188
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x800721A8
void GRL_InitGwin__Fv() {
}


// address: 0x800721B4
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x800721C4
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x800721EC
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80072290
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x800722D8
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x800722E4
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


// address: 0x800723E8
char *GetStr__Fi(int StrId) {
}


// address: 0x80072450
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


// address: 0x80072554
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800725AC
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800725B8
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x800726C0
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80072740
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


// address: 0x80072C78
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80072DF8
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80072F58
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80072FF0
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800730A0
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073104
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007321C
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x800732B4
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x8007334C
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800733B4
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 3
	register int frame;
}


// address: 0x80073448
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


// address: 0x80073528
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


// address: 0x80073600
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80073690
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


// address: 0x800737AC
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80073848
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800738B0
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073918
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80073A4C
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80073B90
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073BF8
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073C50
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


// address: 0x80073D1C
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073D80
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073D88
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


// address: 0x800742B0
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074350
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074358
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007438C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007438C(struct POLY_FT4 **Prim) {
}


// address: 0x80074408
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri_addr_80074408(int PNum) {
}


// address: 0x80074458
int GetLastOtPos__C7CPlayer_addr_80074458(struct CPlayer *this) {
}


// address: 0x80074464
int GetLastScrY__C7CPlayer_addr_80074464(struct CPlayer *this) {
}


// address: 0x80074470
int GetLastScrX__C7CPlayer_addr_80074470(struct CPlayer *this) {
}


// address: 0x8007447C
int GetNumOfFrames__7TextDat_addr_8007447C(struct TextDat *this) {
}


// address: 0x80074490
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80074490(struct TextDat *this, int FrNum) {
}


// address: 0x800744AC
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800744E4
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80074564
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x800745FC
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x800746AC
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


// address: 0x80074868
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


// address: 0x800749FC
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


// address: 0x80074AB4
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


// address: 0x80074D48
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80074E20
// size: 0x28
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80074EA8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074ED4
// size: 0x28
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074F00
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074F2C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074F58
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074F84
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074FA8
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074FCC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074FF8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075024
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075050
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007507C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800750A8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800750D4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075100
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007512C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075158
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075184
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800751B0
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800751DC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075208
// size: 0x28
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075234
// size: 0x28
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075260
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007528C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800752B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800752E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075310
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007533C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075368
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075394
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800753C0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800753EC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075418
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075444
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075470
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007549C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800754C8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800754F4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075520
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007554C
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x800755E0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80075670
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80075700
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80075790
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80075820
// size: 0x28
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007584C
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075878
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800758A4
// size: 0x28
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800758D0
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800758FC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075928
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075954
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075980
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800759AC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800759D8
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


// address: 0x80075B30
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80075BFC
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80075CC8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075CF4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075D20
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075D4C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075D78
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075D9C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075DC8
// size: 0x28
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075DF4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075E20
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075E4C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075E78
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075EA4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075ED0
// size: 0x28
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075EFC
// size: 0x28
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075F28
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075F54
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075F80
// size: 0x28
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075FAC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075FD8
// size: 0x28
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076004
// size: 0x28
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076030
// size: 0x28
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007605C
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


// address: 0x800761F0
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007621C
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076240
// size: 0x28
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007626C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076298
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800762C4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800762F0
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007631C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076348
// size: 0x28
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076374
// size: 0x28
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763A0
// size: 0x28
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763CC
// size: 0x28
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763F8
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800763F8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80076434
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80076434(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8007645C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007645C(struct POLY_FT4 **Prim) {
}


// address: 0x800764D8
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks_addr_800764D8(struct CBlocks *this) {
}


// address: 0x800764E4
int GetNumOfFrames__7TextDatii_addr_800764E4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8007651C
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8007651C(struct TextDat *this, int Creature) {
}


// address: 0x80076594
int GetNumOfCreatures__7TextDat_addr_80076594(struct TextDat *this) {
}


// address: 0x800765A8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800765A8(struct TextDat *this, int FrNum) {
}


// address: 0x800765C4
void gamemenu_on__Fv() {
}


// address: 0x800765CC
void gamemenu_off__Fv() {
}


// address: 0x800765D4
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x800765DC
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x800765E4
void ResetPal__Fv() {
}


// address: 0x800765EC
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007661C
bool GetFadeState__Fv() {
}


// address: 0x80076628
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x8007672C
void SmearScreen__Fv() {
}


// address: 0x80076734
void DrawFadedScreen__Fv() {
}


// address: 0x80076788
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80076844
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 17
	register int i;
	// register: 16
	register int lasttick;
	{
		// register: 16
		register int diff;
	}
}


// address: 0x80076900
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80076958
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 17
	register int i;
	// register: 16
	register int lasttick;
	{
		// register: 16
		register int diff;
	}
}


// address: 0x80076A34
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x80076A88
void M_CheckEFlag__Fi(int i) {
}


// address: 0x80076AA8
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


// address: 0x80076C14
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x80076C50
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80076C9C
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x80076CE4
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80076D44
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


// address: 0x80077304
void ClearMVars__Fi(int i) {
}


// address: 0x80077378
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x800777C4
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80077874
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x800779B8
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80077AB0
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x80077B58
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


// address: 0x80077D48
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80077E28
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


// address: 0x800780A4
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x800783AC
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x800786B8
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


// address: 0x80078B08
// size: 0xB8
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x80078B34
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x80078B5C
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80078B8C
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


// address: 0x80078C30
void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x80078C98
// size: 0xF1C
struct DLevel *UseMap__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x80078D6C
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Map) {
}


// address: 0x80078DDC
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x80078E50
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


// address: 0x80079064
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


// address: 0x80079204
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


// address: 0x80079364
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


// address: 0x800794A4
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x800794DC
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x8001E648
void TICK_InitModule();

// address: 0x8001E668
void TICK_Set(unsigned long Val);

// address: 0x8001E678
unsigned long TICK_Get();

// address: 0x8001E688
void TICK_Update();

// address: 0x8001E6A8
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001E6D4
char *TICK_GetDateString();

// address: 0x8001E6E4
char *TICK_GetTimeString();

// address: 0x8001E6F4
unsigned char GU_InitModule();

// address: 0x8001E720
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E750
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E7E0
long GU_GetSRnd();

// address: 0x8001E800
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E83C
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001E860
void main();

// address: 0x8001E8B0
unsigned char DBG_OpenModule();

// address: 0x8001E8B8
void DBG_PollHost();

// address: 0x8001E8C0
void DBG_Halt();

// address: 0x8001E8C8
void DBG_SendMessage(char *e);

// address: 0x8001E8E0
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E8F0
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E91C
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E92C
void SendPsyqString(char *e);

// address: 0x8001E934
void DBG_SetPollRoutine(void (*Func)());

// address: 0x8001E944
unsigned long GTIMSYS_GetTimer();

// address: 0x8001E968
void GTIMSYS_ResetTimer();

// address: 0x8001E98C
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8001EBC0
void DoEpi(struct TASK *T);

// address: 0x8001EC10
void DoPro(struct TASK *T);

// address: 0x8001EC60
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x8001ECD4
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


// address: 0x8001EEBC
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F07C
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x8001F158
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8001F1E0
void TSK_Die();

// address: 0x8001F20C
void TSK_Kill(struct TASK *T);

// address: 0x8001F25C
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x8001F26C
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8001F2E8
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8001F330
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8001F374
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x8001F384
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x8001F39C
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x8001F3F4
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F40C
void TSK_ClearExecFilter();

// address: 0x8001F430
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


// address: 0x8001F530
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


// address: 0x8001F5A8
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x8001F5BC
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8001F5D0
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8001F5E4
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8001F5F8
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x8001F60C
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8001F620
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F66C
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F68C
void LoTskKill(struct TASK *T) {
}


// address: 0x8001F6FC
void ExecuteTask(struct TASK *T);

// address: 0x8001F74C
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F764
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F77C
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F794
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7AC
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F7C4
void TSK_ClearEpiProFilter();

// address: 0x8001F7F8
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8001F808
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x8001F820
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x8001F848
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8001F874
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x8001F8B0
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F8C0
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001F8FC
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F90C
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F924
unsigned char GSYS_InitMachine();

// address: 0x8001F978
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001F9AC
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FA28
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001FA38
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


// address: 0x8001FB6C
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FC24
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


// address: 0x8001FD44
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


// address: 0x8001FEDC
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FF3C
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FFB8
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020058
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


// address: 0x800200CC
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


// address: 0x80020140
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


// address: 0x800201BC
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x800201DC
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80020228
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x80020258
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x80020288
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x800202B8
// size: 0x20
struct MEM_HDR *FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
}


// address: 0x80020310
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


// address: 0x80020378
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


// address: 0x800203E0
// size: 0x28
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x8002041C
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


// address: 0x800204F0
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x800205CC
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x80020764
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


// address: 0x800207D0
// size: 0x20
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x80020858
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x80020898
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


// address: 0x8002091C
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


// address: 0x800209B8
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020A20
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020A74
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020AC8
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020B4C
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020BA8
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


// address: 0x80020CA4
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020D50
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020DA8
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020DD8
// size: 0x4
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020DE8
char *GAL_GetLastErrorText();

// address: 0x80020E10
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


// address: 0x80020E78
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


// address: 0x80020EE0
void GAL_SetTimeStamp(int Time);

// address: 0x80020EF0
void GAL_IncTimeStamp();

// address: 0x80020F10
int GAL_GetTimeStamp();

// address: 0x80020F20
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80020F70
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80020FC0
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x8002106C
long GAL_GetSize(long hnd) {
}


// address: 0x800210C0
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


// address: 0x80021228
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


// address: 0x800212CC
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80021300
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x8002136C
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


// address: 0x80021464
// size: 0x20
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x800214A0
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
}


// address: 0x80021530
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


// address: 0x800215AC
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


// address: 0x80021660
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


// address: 0x800216BC
void GAL_MemDump(unsigned long Type);

// address: 0x80021730
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80021740
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x8002176C
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x800217B4
int GAL_GetNumFreeHeaders();

// address: 0x800217C4
unsigned long GAL_GetLastTypeAlloced();

// address: 0x800217D4
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x800217EC
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021840
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x80021850
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


// address: 0x80023C0C
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80023C58
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
	// address: 0x80023DAC
	bool rflag;
	// address: 0x80024114
	bool nosign;
	// address: 0x800241C0
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


