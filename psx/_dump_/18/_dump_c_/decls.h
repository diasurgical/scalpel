#include "types.h"

// address: 0x80116AD8
extern int NumOfMonsterListLevels;

// address: 0x800A63F4
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x801167D4
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x801167D8
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x801167DC
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x801167E4
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x801167E8
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x801167EC
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x801167F0
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x801167F4
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x801167F8
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x801167FC
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x80116800
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x80116804
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x80116808
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x8011680C
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x80116810
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x80116814
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x80116818
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x80116820
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x80116824
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x8011682C
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x80116830
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x80116834
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x80116838
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x8011683C
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x80116840
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x80116844
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x80116848
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x8011684C
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x80116854
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x80116858
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x8011685C
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x80116860
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x80116864
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x80116868
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x8011686C
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x80116870
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x80116874
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x80116878
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x8011687C
// size: 0x3
static unsigned char NumsLEV8M8A[3];

// address: 0x80116880
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x80116884
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x80116888
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x8011688C
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x80116890
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x80116894
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x80116898
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x8011689C
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x801168A0
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x801168A4
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x801168A8
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x801168AC
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x801168B0
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x801168B4
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x801168B8
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x801168BC
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x801168C0
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x801168C4
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x801168C8
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x801168CC
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x801168D0
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x801168D4
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x801168D8
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x801168DC
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x801168E0
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x801168E4
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x801168E8
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x801168EC
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x801168F0
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x801168F4
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x801168F8
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x801168FC
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x80116900
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x80116904
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x80116908
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8011690C
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x80116910
// size: 0x2
static unsigned char NumsLEV16M16D[2];

// address: 0x800A5F34
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A5F64
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A5FC4
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A6004
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A6074
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A60E4
// size: 0x50
static struct MonstList ChoiceListLEV6[5];

// address: 0x800A6134
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A6184
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A61E4
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A6224
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800A6274
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A62C4
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A6304
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A6354
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A63B4
// size: 0x30
static struct MonstList ChoiceListLEV15[3];

// address: 0x800A63E4
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x80118198
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800A6474
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x80116AE8
extern int ArgsSoFar;

// address: 0x80116AEC
extern unsigned long *ThisOt;

// address: 0x80116AF0
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x8011819C
static long hndPrimBuffers;

// address: 0x801181A0
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x801181A4
static unsigned char BufferDepth;

// address: 0x801181A5
static unsigned char WorkRamId;

// address: 0x801181A6
static unsigned char ScrNum;

// address: 0x801181A8
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x801181AC
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x801181B0
static unsigned char BufferNum;

// address: 0x80116AF4
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x801181B1
static unsigned char LastBuffer;

// address: 0x801181B4
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x801181B8
static int ThisOtSize;

// address: 0x80116AF8
// size: 0x8
static struct RECT ScrRect;

// address: 0x801181BC
static int VidWait;

// address: 0x80118600
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x801181C0
static void (*VbFunc)();

// address: 0x801181C4
static unsigned long VidTick;

// address: 0x801181C8
static int VXOff;

// address: 0x801181CC
static int VYOff;

// address: 0x80116B0C
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x80116B10
extern int LastFmem;

// address: 0x80116B00
extern unsigned int GSYS_MemStart;

// address: 0x80116B04
extern unsigned int GSYS_MemEnd;

// address: 0x800A67BC
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A67E4
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x80116B08
extern int LowestFmem;

// address: 0x80116B20
extern int FileSYS;

// address: 0x801181D0
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x801181D4
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x80116B3A
extern short DavesPad;

// address: 0x80116B3C
extern short DavesPadDeb;

// address: 0x800A680C
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x801186E0
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A70B0
// size: 0x474
extern struct TextDat *AllDats[285];

// address: 0x80116B8C
extern int TpW;

// address: 0x80116B90
extern int TpH;

// address: 0x80116B94
extern int TpXDest;

// address: 0x80116B98
extern int TpYDest;

// address: 0x80116B9C
// size: 0x8
extern struct RECT R;

// address: 0x800A7524
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800A7558
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A6840
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x80116BB0
static bool ChunkGot;

// address: 0x800A7580
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800A7590
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A75A0
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x80116BC4
extern unsigned long BL_NoLumpFiles;

// address: 0x80116BC8
extern unsigned long BL_NoStreamFiles;

// address: 0x80116BCC
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x80116BD0
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x80116BD4
extern unsigned char FileLoaded;

// address: 0x80116C04
extern int NoTAllocs;

// address: 0x800A76CC
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x801181E0
static bool CanPause;

// address: 0x801181E4
static bool Paused;

// address: 0x801181E8
// size: 0x8
static struct RECT PRect;

// address: 0x80118708
// size: 0x10
static struct Dialog PBack;

// address: 0x800A7934
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800A7958
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800A797C
// size: 0x708
extern unsigned char demo_buffer[1800];

// address: 0x80116C30
extern int demo_pad_time;

// address: 0x80116C34
extern int demo_pad_count;

// address: 0x800A785C
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800A78C8
// size: 0x6C
extern struct CPad Pad1;

// address: 0x80116C38
extern unsigned long demo_finish;

// address: 0x80116C3C
extern int cac_pad;

// address: 0x80116C58
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x80116C5C
extern int CharFrm;

// address: 0x80116C49
extern unsigned char WHITER;

// address: 0x80116C4A
extern unsigned char WHITEG;

// address: 0x80116C4B
extern unsigned char WHITEB;

// address: 0x80116C4C
extern unsigned char BLUER;

// address: 0x80116C4D
extern unsigned char BLUEG;

// address: 0x80116C4E
extern unsigned char BLUEB;

// address: 0x80116C4F
extern unsigned char REDR;

// address: 0x80116C50
extern unsigned char REDG;

// address: 0x80116C51
extern unsigned char REDB;

// address: 0x80116C52
extern unsigned char GOLDR;

// address: 0x80116C53
extern unsigned char GOLDG;

// address: 0x80116C54
extern unsigned char GOLDB;

// address: 0x800A8084
// size: 0x218
extern struct CFont MediumFont;

// address: 0x800A829C
// size: 0x218
extern struct CFont LargeFont;

// address: 0x800A84B4
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800A8568
// size: 0x10
extern struct FontTab LFont;

// address: 0x800A8578
// size: 0x136
extern struct FontItem MFontTab[155];

// address: 0x800A86B0
// size: 0x10
extern struct FontTab MFont;

// address: 0x80116C71
extern unsigned char DialogRed;

// address: 0x80116C72
extern unsigned char DialogGreen;

// address: 0x80116C73
extern unsigned char DialogBlue;

// address: 0x80116C74
extern unsigned char DialogTRed;

// address: 0x80116C75
extern unsigned char DialogTGreen;

// address: 0x80116C76
extern unsigned char DialogTBlue;

// address: 0x80116C78
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x80116C7C
extern int DialogBackGfx;

// address: 0x80116C80
extern int DialogBackW;

// address: 0x80116C84
extern int DialogBackH;

// address: 0x80116C88
extern int DialogBorderGfx;

// address: 0x80116C8C
extern int DialogBorderTLW;

// address: 0x80116C90
extern int DialogBorderTLH;

// address: 0x80116C94
extern int DialogBorderTRW;

// address: 0x80116C98
extern int DialogBorderTRH;

// address: 0x80116C9C
extern int DialogBorderBLW;

// address: 0x80116CA0
extern int DialogBorderBLH;

// address: 0x80116CA4
extern int DialogBorderBRW;

// address: 0x80116CA8
extern int DialogBorderBRH;

// address: 0x80116CAC
extern int DialogBorderTW;

// address: 0x80116CB0
extern int DialogBorderTH;

// address: 0x80116CB4
extern int DialogBorderBW;

// address: 0x80116CB8
extern int DialogBorderBH;

// address: 0x80116CBC
extern int DialogBorderLW;

// address: 0x80116CC0
extern int DialogBorderLH;

// address: 0x80116CC4
extern int DialogBorderRW;

// address: 0x80116CC8
extern int DialogBorderRH;

// address: 0x80116CCC
extern int DialogBevelGfx;

// address: 0x80116CD0
extern int DialogBevelCW;

// address: 0x80116CD4
extern int DialogBevelCH;

// address: 0x80116CD8
extern int DialogBevelLRW;

// address: 0x80116CDC
extern int DialogBevelLRH;

// address: 0x80116CE0
extern int DialogBevelUDW;

// address: 0x80116CE4
extern int DialogBevelUDH;

// address: 0x80116CE8
extern int MY_DialogOTpos;

// address: 0x801181F0
static unsigned char DialogGBack;

// address: 0x801181F1
static char GShadeX;

// address: 0x801181F2
static char GShadeY;

// address: 0x801181F8
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800A8700
// size: 0x70
extern int Cxy[28];

// address: 0x80116C6B
extern unsigned char BORDERR;

// address: 0x80116C6C
extern unsigned char BORDERG;

// address: 0x80116C6D
extern unsigned char BORDERB;

// address: 0x80116C6E
extern unsigned char BACKR;

// address: 0x80116C6F
extern unsigned char BACKG;

// address: 0x80116C70
extern unsigned char BACKB;

// address: 0x800A86C0
// size: 0x40
static char GShadeTab[64];

// address: 0x80116C69
static char GShadePX;

// address: 0x80116C6A
static char GShadePY;

// address: 0x80116CF5
extern unsigned char PlayDemoFlag;

// address: 0x80118718
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x80118748
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x80118200
static int blockr;

// address: 0x80118204
static int blockg;

// address: 0x80118208
static int blockb;

// address: 0x8011820C
static int InfraFlag;

// address: 0x80116D09
extern unsigned char P1ObjSelCount;

// address: 0x80116D0A
extern unsigned char P2ObjSelCount;

// address: 0x80116D0B
extern unsigned char P12ObjSelCount;

// address: 0x80116D0C
extern unsigned char P1ItemSelCount;

// address: 0x80116D0D
extern unsigned char P2ItemSelCount;

// address: 0x80116D0E
extern unsigned char P12ItemSelCount;

// address: 0x80116D0F
extern unsigned char P1MonstSelCount;

// address: 0x80116D10
extern unsigned char P2MonstSelCount;

// address: 0x80116D11
extern unsigned char P12MonstSelCount;

// address: 0x80116D12
static unsigned short P1ObjSelCol;

// address: 0x80116D14
static unsigned short P2ObjSelCol;

// address: 0x80116D16
static unsigned short P12ObjSelCol;

// address: 0x80116D18
static unsigned short P1ItemSelCol;

// address: 0x80116D1A
static unsigned short P2ItemSelCol;

// address: 0x80116D1C
static unsigned short P12ItemSelCol;

// address: 0x80116D1E
static unsigned short P1MonstSelCol;

// address: 0x80116D20
static unsigned short P2MonstSelCol;

// address: 0x80116D22
static unsigned short P12MonstSelCol;

// address: 0x80116D24
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x8010C6B8
// size: 0x40
static short SinTab[32];

// address: 0x800A8770
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x80116D40
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x8010C744
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x80118778
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x80118788
// size: 0x10
static struct Overlay PregameOver;

// address: 0x80118798
// size: 0x10
static struct Overlay GameOver;

// address: 0x801187A8
// size: 0x10
static struct Overlay FmvOver;

// address: 0x80118210
static int OWorldX;

// address: 0x80118214
static int OWorldY;

// address: 0x80118218
static int WWorldX;

// address: 0x8011821C
static int WWorldY;

// address: 0x8010C7C0
// size: 0x20
static short TxyAdd[16];

// address: 0x80116D64
extern int GXAdj2;

// address: 0x80118220
static int TimePerFrame;

// address: 0x80118224
static int CpuStart;

// address: 0x80118228
static int CpuTime;

// address: 0x8011822C
static int DrawTime;

// address: 0x80118230
static int DrawStart;

// address: 0x80118234
static int LastCpuTime;

// address: 0x80118238
static int LastDrawTime;

// address: 0x8011823C
static int DrawArea;

// address: 0x80116D6C
extern bool ProfOn;

// address: 0x800A8784
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x8010C91C
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800A8798
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800A87EC
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800A8840
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800A8894
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800A88E8
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x80116D94
extern int hof;

// address: 0x80116D98
extern int mof;

// address: 0x800A89B0
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x80116DCC
extern unsigned long Time;

// address: 0x800A8AB0
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x80116DA8
extern unsigned long *STR_Buffer;

// address: 0x80116DAC
extern char NoActiveStreams;

// address: 0x80116DB0
static bool STRInit;

// address: 0x80116DF0
extern char SFXNotPlayed;

// address: 0x80116DF1
extern char SFXNotInBank;

// address: 0x801187B8
// size: 0x108
static char spu_management[264];

// address: 0x801188C8
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x80118244
static unsigned short NoSfx;

// address: 0x80116DDC
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x80116DE0
static long OffsetHandle;

// address: 0x80116DE4
static int BankBase;

// address: 0x80116DE8
static unsigned char SPU_Done;

// address: 0x8010CCB4
// size: 0x70
static unsigned short SFXRemapTab[56];

// address: 0x80116DEC
static int NoSNDRemaps;

// address: 0x800A8AF0
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x8010CD58
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x80116E48
extern int demo_level;

// address: 0x80116E4C
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x80116E50
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x80116E54
// size: 0x5C
extern struct TASK *tonys;

// address: 0x80116E1C
extern int demo_load;

// address: 0x80116E20
extern int demo_record_load;

// address: 0x80116E24
extern int level_record;

// address: 0x80116E28
extern char demo_fade_finished;

// address: 0x80116E18
extern int moo_moo;

// address: 0x80116E2C
// size: 0x5
extern char demolevel[5];

// address: 0x80116E34
extern int demo_which;

// address: 0x80116E38
extern unsigned char demo_flash;

// address: 0x80116E3C
extern int tonys_Task;

// address: 0x80116FB0
extern bool DoShowPanel;

// address: 0x80116FB4
extern bool DoDrawBg;

// address: 0x80118248
static bool GlueFinished;

// address: 0x8011824C
static bool DoHomingScroll;

// address: 0x80118250
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x80118254
static int CurrentMonsterList;

// address: 0x80116E61
extern char started_grtask;

// address: 0x800A8CDC
// size: 0x288
extern struct PInf PlayerInfo[81];

// address: 0x80116FB8
// size: 0x4
static char ArmourChar[4];

// address: 0x8010CE4C
// size: 0xA
static char WepChar[10];

// address: 0x80116FBC
// size: 0x4
static char CharChar[4];

// address: 0x80118258
static char ctrl_select_line;

// address: 0x80118259
static char ctrl_select_side;

// address: 0x8011825A
static char ckeyheld;

// address: 0x8011825C
static int old_options_pad;

// address: 0x80118260
// size: 0x8
static struct RECT CtrlRect;

// address: 0x80116FD0
extern unsigned char ctrlflag;

// address: 0x800A900C
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800A8F64
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x80116FCC
static int toppos;

// address: 0x801188E0
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800A913C
// size: 0x98
static int controller_defaults[2][19];

// address: 0x8011703C
extern int gr_scrxoff;

// address: 0x80117040
extern int gr_scryoff;

// address: 0x80117048
extern unsigned short water_clut;

// address: 0x8011704C
extern char visible_level;

// address: 0x80117039
extern char last_type;

// address: 0x8011704E
extern char daylight;

// address: 0x8011704A
extern char cow_in_sight;

// address: 0x8011704B
extern char inn_in_sight;

// address: 0x80117044
extern unsigned int water_count;

// address: 0x8011704D
extern unsigned char lastrnd;

// address: 0x80117050
static int call_clock;

// address: 0x80117060
extern int TitleAnimCount;

// address: 0x80117064
static int flametick;

// address: 0x8010CF0C
// size: 0x37
static unsigned char light_tile[55];

// address: 0x800A91F4
// size: 0xA0
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x801188F0
// size: 0x240
static struct Particle PartArray[16];

// address: 0x80118268
static int partOtPos;

// address: 0x80117080
extern int SetParticle;

// address: 0x80117084
static int p1partexecnum;

// address: 0x80117088
static int p2partexecnum;

// address: 0x800A91D4
// size: 0x20
static int JumpArray[8];

// address: 0x8011708C
static int partjumpflag;

// address: 0x80117090
static int partglowflag;

// address: 0x80117094
static int partcolour;

// address: 0x800A9294
// size: 0x48
extern struct Spell_Target SplTarget[2];

// address: 0x801170B5
extern unsigned char select_flag;

// address: 0x8011826C
// size: 0x8
static struct RECT SelectRect;

// address: 0x80118274
static char item_select;

// address: 0x801170B8
// size: 0x2
extern char QSpell[2];

// address: 0x801170BC
// size: 0x2
extern char _spltotype[2];

// address: 0x801170C0
// size: 0x8
extern bool force_attack[2];

// address: 0x801170A8
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x80118B30
// size: 0x10
static struct Dialog SelectBack;

// address: 0x801170AC
// size: 0x4
extern char mana_order[4];

// address: 0x801170B0
// size: 0x4
extern char health_order[4];

// address: 0x801170B4
extern unsigned char birdcheck;

// address: 0x80118B40
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x80118278
static unsigned short progress;

// address: 0x8010D008
// size: 0x28
static unsigned short Level2CutScreen[20];

// address: 0x801170E0
static char *CutString;

// address: 0x80118B68
// size: 0x78
static struct CScreen Scr;

// address: 0x801170E4
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x801170E8
static bool GameLoading;

// address: 0x80118BE8
// size: 0x10
static struct Dialog LBack;

// address: 0x801170F8
extern unsigned int card_ev0;

// address: 0x801170FC
extern unsigned int card_ev1;

// address: 0x80117100
extern unsigned int card_ev2;

// address: 0x80117104
extern unsigned int card_ev3;

// address: 0x80117108
extern unsigned int card_ev10;

// address: 0x8011710C
extern unsigned int card_ev11;

// address: 0x80117110
extern unsigned int card_ev12;

// address: 0x80117114
extern unsigned int card_ev13;

// address: 0x80117118
// size: 0x8
extern int card_dirty[2];

// address: 0x80117120
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8011827C
static int card_event;

// address: 0x801170F4
extern void (*mem_card_event_handler)();

// address: 0x801170EC
extern bool MemCardActive;

// address: 0x801170F0
static int never_hooked_events;

// address: 0x80117164
extern unsigned long MasterVol;

// address: 0x80117168
extern unsigned long MusicVol;

// address: 0x8011716C
extern unsigned long SoundVol;

// address: 0x80117170
extern unsigned long VideoVol;

// address: 0x80117174
extern unsigned long SpeechVol;

// address: 0x80118280
// size: 0x6C
static struct TextDat *Slider;

// address: 0x80118284
static int sw;

// address: 0x80118288
static int sx;

// address: 0x8011828C
static int sy;

// address: 0x80118290
static unsigned char Adjust;

// address: 0x80118291
static unsigned char qspin;

// address: 0x80118292
static unsigned char lqspin;

// address: 0x80118294
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x80118298
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8011829C
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x80117178
extern int ReturnMenu;

// address: 0x801182A0
// size: 0x8
static struct RECT ORect;

// address: 0x801182A8
// size: 0x8
static char *McState[2];

// address: 0x80117148
extern bool optionsflag;

// address: 0x8011713C
extern int cmenu;

// address: 0x80117150
extern int options_pad;

// address: 0x8011715C
extern char *PrevTxt;

// address: 0x80117144
extern bool allspellsflag;

// address: 0x800A9AFC
// size: 0x80
extern short Circle[64];

// address: 0x80117130
static int Spacing;

// address: 0x80117134
static int cs;

// address: 0x80117138
static int lastcs;

// address: 0x80117140
static bool MemcardOverlay;

// address: 0x8011714C
extern int saveflag;

// address: 0x800A92DC
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800A9384
// size: 0xD8
extern struct OMENUITEM GameMenu[9];

// address: 0x800A945C
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800A94EC
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800A9594
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800A963C
// size: 0x60
extern struct OMENUITEM MemcardMenu[4];

// address: 0x800A969C
// size: 0x90
extern struct OMENUITEM MemcardGameMenu[6];

// address: 0x800A972C
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800A978C
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800A9834
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800A98DC
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800A993C
// size: 0xD8
extern struct OMENUITEM CheatMenu[9];

// address: 0x800A9A14
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800A9A44
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x800A9A8C
// size: 0x70
extern struct OMENULIST MenuList[14];

// address: 0x80117160
static bool debounce;

// address: 0x800A9B7C
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x80117185
extern char hop_height;

// address: 0x80117188
// size: 0x8
static struct Perch perches[4];

// address: 0x800A9CFC
// size: 0x10
static char *FmvTab[4];

// address: 0x8011719C
static int CurMons;

// address: 0x801171A0
static int Frame;

// address: 0x801171A4
static int Action;

// address: 0x801171A8
static int Dir;

// address: 0x80118BF8
// size: 0x7472
static unsigned char kanjbuff[29810];

// address: 0x80120078
// size: 0x54B0
static struct kindexS kindex[5420];

// address: 0x80117238
extern int FeBackX;

// address: 0x8011723C
extern int FeBackY;

// address: 0x80117240
extern int FeBackW;

// address: 0x80117244
extern int FeBackH;

// address: 0x80117248
extern unsigned char FeFlag;

// address: 0x800AA4AC
// size: 0x3C0
extern struct FeStruct FeBuffer[40];

// address: 0x8011724C
extern int FePlayerNo;

// address: 0x801182B0
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x80117250
extern int FeBufferCount;

// address: 0x80117254
extern int FeNoOfPlayers;

// address: 0x80117258
// size: 0x8
extern int FeChrClass[2];

// address: 0x800AA86C
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x80117260
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x80117264
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x80117268
extern unsigned long FeCount;

// address: 0x8011726C
extern int fileselect;

// address: 0x80117270
extern int BookMenu;

// address: 0x80117274
extern int FeAttractMode;

// address: 0x80117278
extern int FMVPress;

// address: 0x80117208
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x80117210
// size: 0x8
extern bool LoadedChar[2];

// address: 0x8011720C
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x80117218
extern unsigned char FeIsAVirgin;

// address: 0x8011721C
extern int FeMenuDelay;

// address: 0x800A9D0C
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800A9D28
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800A9D44
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800A9D60
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800A9D7C
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800A9D98
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800A9DB4
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800A9DD0
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800A9DEC
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800A9E08
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800A9E24
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800A9E40
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800A9E5C
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800A9E78
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x80117220
static int fadeval;

// address: 0x800A9E94
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800A9F0C
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800A9F54
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800A9FCC
// size: 0x2E8
extern struct FeMenuTable FeNameEngMenuTable[31];

// address: 0x800AA2B4
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800AA2FC
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800AA35C
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800AA3BC
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800AA434
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x8011722C
extern unsigned long AttractTitleDelay;

// address: 0x80117230
extern unsigned long AttractMainDelay;

// address: 0x80117234
extern int FMVEndPad;

// address: 0x801172AC
extern int InCredits;

// address: 0x801172B0
extern int CreditTitleNo;

// address: 0x801172B4
extern int CreditSubTitleNo;

// address: 0x801172C8
// size: 0x8
extern int card_status[2];

// address: 0x801172D0
// size: 0x8
extern int card_usable[2];

// address: 0x801172D8
// size: 0x8
extern int card_files[2];

// address: 0x801172E0
// size: 0x8
extern int card_changed[2];

// address: 0x80117320
extern int AlertTxt;

// address: 0x80117324
extern int current_card;

// address: 0x80117328
extern int LoadType;

// address: 0x8011732C
extern int McMenuPos;

// address: 0x80117330
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x8011731C
extern bool fileinfoflag;

// address: 0x801172F4
extern char *DiabloGameFile;

// address: 0x80117314
// size: 0x8
extern char *McState_addr_80117314[2];

// address: 0x801173DC
extern unsigned char *pStatusPanel;

// address: 0x801173E0
extern unsigned char *pGBoxBuff;

// address: 0x801173E4
extern unsigned char dropGoldFlag;

// address: 0x801173E8
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800AAE64
// size: 0x200
extern char _infostr[256][2];

// address: 0x801173EC
// size: 0x2
extern char _infoclr[2];

// address: 0x800AB064
// size: 0x100
extern char tempstr[256];

// address: 0x801173EE
extern unsigned char drawhpflag;

// address: 0x801173EF
extern unsigned char drawmanaflag;

// address: 0x801173F0
extern unsigned char chrflag;

// address: 0x801173F1
extern unsigned char drawbtnflag;

// address: 0x801173F2
extern unsigned char panbtndown;

// address: 0x801173F3
extern unsigned char panelflag;

// address: 0x801173F4
extern unsigned char chrbtndown;

// address: 0x801173F5
extern unsigned char lvlbtndown;

// address: 0x801173F6
extern unsigned char sbookflag;

// address: 0x801173F7
extern unsigned char talkflag;

// address: 0x801173F8
extern int dropGoldValue;

// address: 0x801173FC
extern int initialDropGoldValue;

// address: 0x80117400
extern int initialDropGoldIndex;

// address: 0x80117404
extern unsigned char *pPanelButtons;

// address: 0x80117408
extern unsigned char *pPanelText;

// address: 0x8011740C
extern unsigned char *pManaBuff;

// address: 0x80117410
extern unsigned char *pLifeBuff;

// address: 0x80117414
extern unsigned char *pChrPanel;

// address: 0x80117418
extern unsigned char *pChrButtons;

// address: 0x8011741C
extern unsigned char *pSpellCels;

// address: 0x80125528
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x80125928
// size: 0x40
static int _pstrjust[8][2];

// address: 0x801182B4
// size: 0x8
static int _pnumlines[2];

// address: 0x80117420
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x80117424
// size: 0x8
extern struct RECT CSRect;

// address: 0x801182C4
// size: 0x8
static int _pSpell[2];

// address: 0x801182CC
// size: 0x8
static int _pSplType[2];

// address: 0x801182D4
// size: 0x8
static unsigned char panbtn[8];

// address: 0x8011742C
extern int numpanbtns;

// address: 0x80117430
extern unsigned char *pDurIcons;

// address: 0x80117434
extern unsigned char drawdurflag;

// address: 0x801182DC
// size: 0x4
static unsigned char chrbtn[4];

// address: 0x80117435
extern unsigned char chrbtnactive;

// address: 0x80117438
extern unsigned char *pSpellBkCel;

// address: 0x8011743C
extern unsigned char *pSBkBtnCel;

// address: 0x80117440
extern unsigned char *pSBkIconCels;

// address: 0x80117444
extern int sbooktab;

// address: 0x80117448
extern int cur_spel;

// address: 0x801182E0
static long talkofs;

// address: 0x80125978
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x801182E4
static unsigned char sgbTalkSavePos;

// address: 0x801182E5
static unsigned char sgbNextTalkSave;

// address: 0x801182E6
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x801182E8
static unsigned char *pTalkPanel;

// address: 0x801182EC
static unsigned char *pMultiBtns;

// address: 0x801182F0
static unsigned char *pTalkBtns;

// address: 0x801182F4
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x8010D3B0
// size: 0x100
extern unsigned char gbFontTransTbl[256];

// address: 0x8010D2F0
// size: 0x44
extern unsigned char fontkern[68];

// address: 0x800AA898
// size: 0x25
extern char SpellITbl[37];

// address: 0x80117349
extern unsigned char DrawLevelUpFlag;

// address: 0x80117370
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x8011736C
extern unsigned char spspelstate;

// address: 0x801173AC
extern bool initchr;

// address: 0x8011734C
static int SPLICONNO;

// address: 0x80117350
static int SPLICONY;

// address: 0x801182BC
static int SPLICONRIGHT;

// address: 0x80117354
static int scx;

// address: 0x80117358
static int scy;

// address: 0x8011735C
static int scx1;

// address: 0x80117360
static int scy1;

// address: 0x80117364
static int scx2;

// address: 0x80117368
static int scy2;

// address: 0x80117378
extern char SpellCol;

// address: 0x800AA884
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800AA8C0
// size: 0xA0
extern int PanBtnPos[5][8];

// address: 0x800AA960
// size: 0x20
extern char *PanBtnHotKey[8];

// address: 0x800AA980
// size: 0x20
extern unsigned long PanBtnStr[8];

// address: 0x800AA9A0
// size: 0x64
extern int SpellPages[5][5];

// address: 0x8011739C
static int lus;

// address: 0x801173A0
static int CsNo;

// address: 0x801173A4
static char plusanim;

// address: 0x80125968
// size: 0x10
static struct Dialog CSBack;

// address: 0x801173A8
static int CS_XOFF;

// address: 0x800AAA04
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x801173B0
extern int NoCSEntries;

// address: 0x801173B4
static int SPALOFF;

// address: 0x801173B8
static int paloffset1;

// address: 0x801173BC
static int paloffset2;

// address: 0x801173C0
static int paloffset3;

// address: 0x801173C4
static int paloffset4;

// address: 0x801173C8
static int pinc1;

// address: 0x801173CC
static int pinc2;

// address: 0x801173D0
static int pinc3;

// address: 0x801173D4
static int pinc4;

// address: 0x8011745C
// size: 0x8
extern int _pcurs[2];

// address: 0x80117464
extern int cursW;

// address: 0x80117468
extern int cursH;

// address: 0x8011746C
extern int icursW;

// address: 0x80117470
extern int icursH;

// address: 0x80117474
extern int icursW28;

// address: 0x80117478
extern int icursH28;

// address: 0x8011747C
extern int cursmx;

// address: 0x80117480
extern int cursmy;

// address: 0x80117484
// size: 0x8
extern int _pcursmonst[2];

// address: 0x8011748C
// size: 0x2
extern char _pcursobj[2];

// address: 0x80117490
// size: 0x2
extern char _pcursitem[2];

// address: 0x80117494
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x80117498
// size: 0x2
extern char _pcursplr[2];

// address: 0x80117458
extern int sel_data;

// address: 0x800AB164
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x8011749C
extern int spurtndx;

// address: 0x801174A0
extern int stonendx;

// address: 0x801174A4
extern unsigned char *pSquareCel;

// address: 0x801174E4
extern unsigned long ghInst;

// address: 0x801174E8
extern unsigned char svgamode;

// address: 0x801174EC
extern int MouseX;

// address: 0x801174F0
extern int MouseY;

// address: 0x801174F4
extern long gv1;

// address: 0x801174F8
extern long gv2;

// address: 0x801174FC
extern long gv3;

// address: 0x80117500
extern long gv4;

// address: 0x80117504
extern long gv5;

// address: 0x80117508
extern unsigned char gbProcessPlayers;

// address: 0x800AB2D8
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800AB300
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800AB344
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x80117509
extern unsigned char gbDoEnding;

// address: 0x8011750A
extern unsigned char gbRunGame;

// address: 0x8011750B
extern unsigned char gbRunGameResult;

// address: 0x8011750C
extern unsigned char gbGameLoopStartup;

// address: 0x801259C8
// size: 0x44
static int glEndSeed[17];

// address: 0x80125A18
// size: 0x44
static int glMid1Seed[17];

// address: 0x80125A68
// size: 0x44
static int glMid2Seed[17];

// address: 0x80125AB8
// size: 0x44
static int glMid3Seed[17];

// address: 0x801182F8
static long *sg_previousFilter;

// address: 0x800AB388
// size: 0x30
extern int CreateEnv[12];

// address: 0x80117510
extern int Passedlvldir;

// address: 0x80117514
extern unsigned char *TempStack;

// address: 0x801174B4
extern unsigned long ghMainWnd;

// address: 0x801174B8
extern unsigned char fullscreen;

// address: 0x801174BC
extern int force_redraw;

// address: 0x801174D0
extern unsigned char PauseMode;

// address: 0x801174D1
extern unsigned char FriendlyMode;

// address: 0x801174C1
extern unsigned char visiondebug;

// address: 0x801174C3
extern unsigned char light4flag;

// address: 0x801174C4
extern unsigned char leveldebug;

// address: 0x801174C5
extern unsigned char monstdebug;

// address: 0x801174CC
extern int debugmonsttypes;

// address: 0x801174C0
static unsigned char cineflag;

// address: 0x801174C2
extern unsigned char scrollflag;

// address: 0x801174C6
extern unsigned char trigdebug;

// address: 0x801174C8
extern int setseed;

// address: 0x801174D4
static int sgnTimeoutCurs;

// address: 0x801174D8
extern unsigned char sgbMouseDown;

// address: 0x800ABA54
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x8011752C
extern int numtowners;

// address: 0x80117530
extern unsigned char storeflag;

// address: 0x80117531
extern unsigned char boyloadflag;

// address: 0x80117532
extern unsigned char bannerflag;

// address: 0x80117534
extern unsigned char *pCowCels;

// address: 0x801182FC
static unsigned long sgdwCowClicks;

// address: 0x80118300
static int sgnCowMsg;

// address: 0x800AB794
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x80117524
extern unsigned long CowPlaying;

// address: 0x800AB3B8
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800AB730
// size: 0xC
extern int TownCowX[3];

// address: 0x800AB73C
// size: 0xC
extern int TownCowY[3];

// address: 0x800AB748
// size: 0xC
extern int TownCowDir[3];

// address: 0x800AB754
// size: 0x20
extern int cowoffx[8];

// address: 0x800AB774
// size: 0x20
extern int cowoffy[8];

// address: 0x8011754C
extern int sfxdelay;

// address: 0x80117550
extern int sfxdnum;

// address: 0x80117544
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800AC854
// size: 0xF4C
extern struct TSFX sgSFX[979];

// address: 0x80117548
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x80117554
extern long orgseed;

// address: 0x80118304
static long sglGameSeed;

// address: 0x80117558
extern int SeedCount;

// address: 0x80118308
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8011830C
static int sgnWidth;

// address: 0x80117566
extern char msgflag;

// address: 0x80117567
extern char msgdelay;

// address: 0x800AD850
// size: 0x50
extern char msgtable[80];

// address: 0x800AD7A0
// size: 0xB0
extern int MsgStrings[44];

// address: 0x80117565
extern char msgcnt;

// address: 0x80118310
static unsigned long sgdwProgress;

// address: 0x80118314
static unsigned long sgdwXY;

// address: 0x800AD8A0
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x8010D7E8
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x8010EB88
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x8010F8A8
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x801107A8
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800ADAB4
// size: 0x4C00
extern struct ItemStruct item[128];

// address: 0x800B26B4
// size: 0x7F
extern char itemactive[127];

// address: 0x800B2734
// size: 0x7F
extern char itemavail[127];

// address: 0x800B27B4
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x801175A0
extern unsigned char uitemflag;

// address: 0x80118318
static int tem;

// address: 0x80125B00
// size: 0x98
static struct ItemStruct curruitem;

// address: 0x80125BA0
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x801175A4
extern int ScrollType;

// address: 0x800B2834
// size: 0x40
extern char ItemStr[64];

// address: 0x800B2874
// size: 0x40
extern char SufStr[64];

// address: 0x80117580
extern long numitems;

// address: 0x80117584
extern int gnNumGetRecords;

// address: 0x800ADA10
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800AD940
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x801125EC
// size: 0x46
static short Item2Frm[35];

// address: 0x800AD9EC
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x80117588
extern int *ItemAnimSnds;

// address: 0x8011758C
extern int idoppely;

// address: 0x80117590
extern int ScrollFlag;

// address: 0x800ADA9C
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800B3660
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800B37A0
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x801175B8
extern int numlights;

// address: 0x801175BC
extern char lightmax;

// address: 0x800B37C8
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x801175C0
extern int numvision;

// address: 0x801175C4
extern unsigned char dovision;

// address: 0x801175C8
extern int visionid;

// address: 0x8011831C
static int disp_mask;

// address: 0x80118320
static int weird;

// address: 0x80118324
static int disp_tab_r;

// address: 0x80118328
static int dispy_r;

// address: 0x8011832C
static int disp_tab_g;

// address: 0x80118330
static int dispy_g;

// address: 0x80118334
static int disp_tab_b;

// address: 0x80118338
static int dispy_b;

// address: 0x8011833C
static int radius;

// address: 0x80118340
static int bright;

// address: 0x80125BB0
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x801175A8
extern int lightflag;

// address: 0x800B3374
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800B3628
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800B28B4
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x801175AC
extern int restore_r;

// address: 0x801175B0
extern int restore_g;

// address: 0x801175B4
extern int restore_b;

// address: 0x800B3640
// size: 0x10
extern char radius_tab[16];

// address: 0x800B3650
// size: 0x10
extern char bright_tab[16];

// address: 0x801175EA
extern unsigned char qtextflag;

// address: 0x801175EC
extern int qtextSpd;

// address: 0x80118344
static unsigned char *pMedTextCels;

// address: 0x80118348
static unsigned char *pTextBoxCels;

// address: 0x8011834C
static char *qtextptr;

// address: 0x80118350
static int qtexty;

// address: 0x80118354
static unsigned long qtextDelay;

// address: 0x80118358
static unsigned long sgLastScroll;

// address: 0x8011835C
static unsigned long scrolltexty;

// address: 0x80118360
static long sglMusicVolumeSave;

// address: 0x801175D8
static bool qtbodge;

// address: 0x800B3988
// size: 0x10
extern struct Dialog QBack;

// address: 0x801175E9
static unsigned char CDFlip;

// address: 0x800B3998
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800B4108
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800B3FF8
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800B41F4
// size: 0x13D4C
extern struct DLevel sgLevels[21];

// address: 0x800C7F40
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x80125C30
// size: 0x20
static struct DJunk sgJunk;

// address: 0x80118365
static unsigned char sgbRecvCmd;

// address: 0x80118368
static unsigned long sgdwRecvOffset;

// address: 0x8011836C
static unsigned char sgbDeltaChunks;

// address: 0x8011836D
static unsigned char sgbDeltaChanged;

// address: 0x80118370
static unsigned long sgdwOwnerWait;

// address: 0x80118374
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x80118378
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8011837C
static int sgnCurrMegaPlayer;

// address: 0x80117605
extern unsigned char deltaload;

// address: 0x80117606
extern unsigned char gbBufferMsgs;

// address: 0x80117608
extern unsigned long dwRecCount;

// address: 0x8011760C
extern bool LevelOut;

// address: 0x80117622
extern unsigned char gbMaxPlayers;

// address: 0x80117623
extern unsigned char gbActivePlayers;

// address: 0x80117624
extern unsigned char gbGameDestroyed;

// address: 0x80117625
extern unsigned char gbDeltaSender;

// address: 0x80117626
extern unsigned char gbSelectProvider;

// address: 0x80117627
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x80118380
static unsigned char sgbSentThisCycle;

// address: 0x80118384
static unsigned long sgdwGameLoops;

// address: 0x80118388
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x8011838C
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x80118390
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x80118398
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x801183A0
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x801183A8
static unsigned char sgbTimeout;

// address: 0x801183AC
static long sglTimeoutStart;

// address: 0x8011761C
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x80117621
static unsigned char sgbNetInited;

// address: 0x800C8FA8
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800C916C
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80112CB4
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800C994C
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x80117648
extern long numobjects;

// address: 0x800CAF20
// size: 0x7F
extern char objectactive[127];

// address: 0x800CAFA0
// size: 0x7F
extern char objectavail[127];

// address: 0x8011764C
extern unsigned char InitObjFlag;

// address: 0x80117650
extern int trapid;

// address: 0x800CB020
// size: 0x28
extern char ObjFileList[40];

// address: 0x80117654
extern int trapdir;

// address: 0x80117658
extern int leverid;

// address: 0x80117640
extern int numobjfiles;

// address: 0x800C9864
// size: 0x20
extern int bxadd[8];

// address: 0x800C9884
// size: 0x20
extern int byadd[8];

// address: 0x800C990C
// size: 0x1A
extern char shrineavail[26];

// address: 0x800C98A4
// size: 0x68
extern int shrinestrs[26];

// address: 0x800C9928
// size: 0x24
extern int StoryBookName[9];

// address: 0x80117644
extern int myscale;

// address: 0x8011766C
extern unsigned char gbValidSaveFile;

// address: 0x80117668
extern bool DoLoadedChar;

// address: 0x800CB240
// size: 0x4750
extern struct PlayerStruct plr[2];

// address: 0x8011768C
extern int myplr;

// address: 0x80117690
extern int deathdelay;

// address: 0x80117694
extern unsigned char deathflag;

// address: 0x80117695
extern char light_rad;

// address: 0x80117684
// size: 0x5
extern char light_level[5];

// address: 0x800CB138
// size: 0x30
extern int MaxStats[4][3];

// address: 0x8011767C
static int PlrStructSize;

// address: 0x80117680
static int ItemStructSize;

// address: 0x800CB048
// size: 0x24
extern int plrxoff[9];

// address: 0x800CB06C
// size: 0x24
extern int plryoff[9];

// address: 0x800CB090
// size: 0x24
extern int plrxoff2[9];

// address: 0x800CB0B4
// size: 0x24
extern int plryoff2[9];

// address: 0x800CB0D8
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800CB0FC
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800CB108
// size: 0xC
extern int MagicTbl[3];

// address: 0x800CB114
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800CB120
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800CB12C
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800CB168
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800CFAC8
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x801176D4
extern unsigned char *pQLogCel;

// address: 0x801176D8
extern int ReturnLvlX;

// address: 0x801176DC
extern int ReturnLvlY;

// address: 0x801176E0
extern int ReturnLvl;

// address: 0x801176E4
extern int ReturnLvlT;

// address: 0x801176E8
extern unsigned char rporttest;

// address: 0x801176EC
extern int qline;

// address: 0x801176F0
extern int numqlines;

// address: 0x801176F4
extern int qtopline;

// address: 0x80125C50
// size: 0x40
static int qlist[16];

// address: 0x801183B0
// size: 0x8
static struct RECT QSRect;

// address: 0x801176A1
extern unsigned char questlog;

// address: 0x800CF990
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x801176A4
extern int ALLQUESTS;

// address: 0x800CFAA4
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800CFAB0
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800CFABC
// size: 0xC
extern int QuestGroup3[3];

// address: 0x801176B8
// size: 0x8
extern int QuestGroup4[2];

// address: 0x801176D0
extern bool WaterDone;

// address: 0x801176A8
// size: 0x7
static char questxoff[7];

// address: 0x801176B0
// size: 0x7
static char questyoff[7];

// address: 0x800CFA90
// size: 0x14
extern int questtrigstr[5];

// address: 0x801176C0
static int QS_PX;

// address: 0x801176C4
static int QS_PY;

// address: 0x801176C8
static int QS_PW;

// address: 0x801176CC
static int QS_PH;

// address: 0x80125C90
// size: 0x10
static struct Dialog QSBack;

// address: 0x800CFC08
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x80117733
extern char stextflag;

// address: 0x800D0460
// size: 0xBE0
extern struct ItemStruct smithitem[20];

// address: 0x800D1040
// size: 0x390
extern struct ItemStruct premiumitem[6];

// address: 0x80117734
extern int numpremium;

// address: 0x80117738
extern int premiumlevel;

// address: 0x800D13D0
// size: 0xBE0
extern struct ItemStruct witchitem[20];

// address: 0x800D1FB0
// size: 0x98
extern struct ItemStruct boyitem;

// address: 0x8011773C
extern int boylevel;

// address: 0x800D2048
// size: 0x98
extern struct ItemStruct golditem;

// address: 0x800D20E0
// size: 0xBE0
extern struct ItemStruct healitem[20];

// address: 0x80117740
extern char stextsize;

// address: 0x80117741
extern unsigned char stextscrl;

// address: 0x801183B8
static int stextsel;

// address: 0x801183BC
static int stextlhold;

// address: 0x801183C0
static int stextshold;

// address: 0x801183C4
static int stextvhold;

// address: 0x801183C8
static int stextsval;

// address: 0x801183CC
static int stextsmax;

// address: 0x801183D0
static int stextup;

// address: 0x801183D4
static int stextdown;

// address: 0x801183D8
static char stextscrlubtn;

// address: 0x801183D9
static char stextscrldbtn;

// address: 0x801183DA
static char SItemListFlag;

// address: 0x80125CA0
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800D2CC0
// size: 0x1C80
extern struct ItemStruct storehold[48];

// address: 0x800D4940
// size: 0x30
extern char storehidx[48];

// address: 0x801183DC
static int storenumh;

// address: 0x801183E0
static int gossipstart;

// address: 0x801183E4
static int gossipend;

// address: 0x801183E8
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x801183F0
static int talker;

// address: 0x8011771C
extern unsigned char *pSTextBoxCels;

// address: 0x80117720
extern unsigned char *pSTextSlidCels;

// address: 0x80117724
extern int *SStringY;

// address: 0x800D038C
// size: 0x10
extern struct Dialog SBack;

// address: 0x800D039C
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800D03EC
// size: 0x50
extern int SStringYBuy[20];

// address: 0x800D043C
// size: 0x24
extern int talkname[9];

// address: 0x80117732
extern unsigned char InStoreFlag;

// address: 0x80113EC8
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x80117750
extern unsigned long gdwAllTextEntries;

// address: 0x801183F4
static unsigned char *P3Tiles;

// address: 0x80117760
extern int tile;

// address: 0x80117770
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800D4BA8
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x80117774
extern int numtrigs;

// address: 0x80117778
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x8011777C
extern int TWarpFrom;

// address: 0x800D4970
// size: 0x2C
extern int TownDownList[11];

// address: 0x800D499C
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800D49D0
// size: 0x30
extern int L1UpList[12];

// address: 0x800D4A00
// size: 0x28
extern int L1DownList[10];

// address: 0x800D4A28
// size: 0xC
extern int L2UpList[3];

// address: 0x800D4A34
// size: 0x14
extern int L2DownList[5];

// address: 0x800D4A48
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800D4A54
// size: 0x3C
extern int L3UpList[15];

// address: 0x800D4A90
// size: 0x24
extern int L3DownList[9];

// address: 0x800D4AB4
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800D4AEC
// size: 0x10
extern int L4UpList[4];

// address: 0x800D4AFC
// size: 0x18
extern int L4DownList[6];

// address: 0x800D4B14
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800D4B24
// size: 0x84
extern int L4PentaList[33];

// address: 0x80114C58
// size: 0xA
static char cursoff[10];

// address: 0x80117796
extern unsigned char gbMusicOn;

// address: 0x80117797
extern unsigned char gbSoundOn;

// address: 0x80117795
extern unsigned char gbSndInited;

// address: 0x8011779C
extern long sglMasterVolume;

// address: 0x801177A0
extern long sglMusicVolume;

// address: 0x801177A4
extern long sglSoundVolume;

// address: 0x801177A8
extern long sglSpeechVolume;

// address: 0x80117798
extern unsigned char gbDupSounds;

// address: 0x801177AC
static int sgnMusicTrack;

// address: 0x801177B0
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x80114D04
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x801177D4
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800D4BF8
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x801177DC
// size: 0x2
extern char _pfind_index[2];

// address: 0x801177E0
// size: 0x2
extern char _pfindx[2];

// address: 0x801177E4
// size: 0x2
extern char _pfindy[2];

// address: 0x801177E6
extern unsigned char automapmoved;

// address: 0x801177C8
extern unsigned char flyflag;

// address: 0x801177C0
// size: 0x8
extern char (*pad_styles[2])();

// address: 0x801177C9
extern char speed_type;

// address: 0x801177CA
extern char sel_speed;

// address: 0x801183F8
static unsigned long (*CurrentProc)();

// address: 0x80114EA0
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x80117820
extern int NumOfStrings;

// address: 0x801177F4
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x801177F8
extern long hndText;

// address: 0x801177FC
extern char **TextPtr;

// address: 0x80117800
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x80117830
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x80117834
extern int CharFade;

// address: 0x80117838
extern int rotateness;

// address: 0x8011783C
extern int spiralling_shape;

// address: 0x80117840
extern int down;

// address: 0x800D4C48
// size: 0x10
extern char MlTab[16];

// address: 0x800D4C58
// size: 0x10
extern char QlTab[16];

// address: 0x800D4C68
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x8011785C
extern int MyXoff1;

// address: 0x80117860
extern int MyYoff1;

// address: 0x80117864
extern int MyXoff2;

// address: 0x80117868
extern int MyYoff2;

// address: 0x80117878
extern bool iscflag;

// address: 0x80117885
static unsigned char sgbFadedIn;

// address: 0x80117886
static unsigned char screenbright;

// address: 0x80117888
static int faderate;

// address: 0x8011788C
static bool fading;

// address: 0x80117898
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x80117890
extern int st;

// address: 0x80117894
extern int mode;

// address: 0x800D4E10
// size: 0x60
extern struct PortalStruct portal[4];

// address: 0x801178C4
extern int portalindex;

// address: 0x800D4DF0
// size: 0x10
extern int WarpDropX[4];

// address: 0x800D4E00
// size: 0x10
extern int WarpDropY[4];

// address: 0x800D4E70
// size: 0x78
extern char MyVerString[120];

// address: 0x80117A2C
extern int Year;

// address: 0x80117A30
extern int Day;

// address: 0x801183FC
static unsigned char *tbuff;

// address: 0x80118400
static unsigned char HR1;

// address: 0x80118401
static unsigned char HR2;

// address: 0x80118402
static unsigned char HR3;

// address: 0x80118403
static unsigned char VR1;

// address: 0x80118404
static unsigned char VR2;

// address: 0x80118405
static unsigned char VR3;

// address: 0x80117AA0
// size: 0x18
extern struct NODE *pHallList;

// address: 0x80117AA4
extern int nRoomCnt;

// address: 0x80117AA8
extern int nSx1;

// address: 0x80117AAC
extern int nSy1;

// address: 0x80117AB0
extern int nSx2;

// address: 0x80117AB4
extern int nSy2;

// address: 0x80117A58
extern int Area_Min;

// address: 0x80117A5C
extern int Room_Max;

// address: 0x80117A60
extern int Room_Min;

// address: 0x80117A64
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x80117A6C
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x80117A74
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x80117A7C
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x80117A84
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x80117A88
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x80117A8C
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x80117A90
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x80117A94
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x80117A98
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x80117A9C
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x80118408
static int abyssx;

// address: 0x8011840C
static unsigned char lavapool;

// address: 0x80117B40
extern int lockoutcnt;

// address: 0x80117AC4
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x80117ACC
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x80117AD4
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x80117ADC
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x80117AE4
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x80117AEC
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x80117AF4
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x80117AFC
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x80117B04
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x80117B0C
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x80117B14
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x80117B1C
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x80117B24
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x80117B2C
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x80117B30
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x80117B34
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x80117B38
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x80117B3C
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x80117B44
extern int diabquad1x;

// address: 0x80117B48
extern int diabquad2x;

// address: 0x80117B4C
extern int diabquad3x;

// address: 0x80117B50
extern int diabquad4x;

// address: 0x80117B54
extern int diabquad1y;

// address: 0x80117B58
extern int diabquad2y;

// address: 0x80117B5C
extern int diabquad3y;

// address: 0x80117B60
extern int diabquad4y;

// address: 0x80117B64
extern int SP4x1;

// address: 0x80117B68
extern int SP4y1;

// address: 0x80117B6C
extern int SP4x2;

// address: 0x80117B70
extern int SP4y2;

// address: 0x80117B74
extern int l4holdx;

// address: 0x80117B78
extern int l4holdy;

// address: 0x80118410
static unsigned char *lpSetPiece1;

// address: 0x80118414
static unsigned char *lpSetPiece2;

// address: 0x80118418
static unsigned char *lpSetPiece3;

// address: 0x8011841C
static unsigned char *lpSetPiece4;

// address: 0x80117B88
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x80117B90
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800D4EE8
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800D4EFC
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800D4F18
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x80117B98
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800D4F2C
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x80117C84
static bool DoUiForChooseMonster;

// address: 0x800D4F50
// size: 0x88
static char *MgToText[34];

// address: 0x800D4FD8
// size: 0x24
extern int StoryText[3][3];

// address: 0x800D4FFC
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800D61FC
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800D683C
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x80117CA8
extern int setpc_x;

// address: 0x80117CAC
extern int setpc_y;

// address: 0x80117CB0
extern int setpc_w;

// address: 0x80117CB4
extern int setpc_h;

// address: 0x80117CB8
extern unsigned char setloadflag;

// address: 0x80117CBC
extern unsigned char *pMegaTiles;

// address: 0x800D6E7C
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800D7680
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800D7E84
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800D8688
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800D8E8C
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x80117CC0
extern int dminx;

// address: 0x80117CC4
extern int dminy;

// address: 0x80117CC8
extern int dmaxx;

// address: 0x80117CCC
extern int dmaxy;

// address: 0x80117CD0
extern int gnDifficulty;

// address: 0x80117CD4
extern unsigned char currlevel;

// address: 0x80117CD5
extern unsigned char leveltype;

// address: 0x80117CD6
extern unsigned char setlevel;

// address: 0x80117CD7
extern unsigned char setlvlnum;

// address: 0x80117CD8
extern unsigned char setlvltype;

// address: 0x80117CDC
extern int ViewX;

// address: 0x80117CE0
extern int ViewY;

// address: 0x80117CE4
extern int ViewDX;

// address: 0x80117CE8
extern int ViewDY;

// address: 0x80117CEC
extern int ViewBX;

// address: 0x80117CF0
extern int ViewBY;

// address: 0x800D9690
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x80117CF4
extern int LvlViewX;

// address: 0x80117CF8
extern int LvlViewY;

// address: 0x80117CFC
extern int btmbx;

// address: 0x80117D00
extern int btmby;

// address: 0x80117D04
extern int btmdx;

// address: 0x80117D08
extern int btmdy;

// address: 0x80117D0C
extern int MicroTileLen;

// address: 0x80117D10
extern char TransVal;

// address: 0x800D96A4
// size: 0x20
extern bool TransList[8];

// address: 0x80117D14
extern int themeCount;

// address: 0x800D96C4
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x800FB984
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x800FC4E8
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x800FD04C
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x800FDBB0
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x80117CA0
extern unsigned char *pSetPiece;

// address: 0x80117CA4
extern int DungSize;

// address: 0x800FDD7C
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x80117D54
extern int numthemes;

// address: 0x80117D58
extern int zharlib;

// address: 0x80117D5C
extern unsigned char armorFlag;

// address: 0x80117D5D
extern unsigned char bCrossFlag;

// address: 0x80117D5E
extern unsigned char weaponFlag;

// address: 0x80117D60
extern int themex;

// address: 0x80117D64
extern int themey;

// address: 0x80117D68
extern int themeVar1;

// address: 0x80117D6C
extern unsigned char bFountainFlag;

// address: 0x80117D6D
extern unsigned char cauldronFlag;

// address: 0x80117D6E
extern unsigned char mFountainFlag;

// address: 0x80117D6F
extern unsigned char pFountainFlag;

// address: 0x80117D70
extern unsigned char tFountainFlag;

// address: 0x80117D71
extern unsigned char treasureFlag;

// address: 0x80117D74
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x800FDC5C
// size: 0x10
extern int ThemeGood[4];

// address: 0x800FDC6C
// size: 0x64
extern int trm5x[25];

// address: 0x800FDCD0
// size: 0x64
extern int trm5y[25];

// address: 0x800FDD34
// size: 0x24
extern int trm3x[9];

// address: 0x800FDD58
// size: 0x24
extern int trm3y[9];

// address: 0x80117E2C
extern int nummissiles;

// address: 0x800FDF94
// size: 0x1F4
extern int missileactive[125];

// address: 0x800FE188
// size: 0x1F4
extern int missileavail[125];

// address: 0x80117E30
extern unsigned char MissilePreFlag;

// address: 0x800FE37C
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x80117E31
extern unsigned char ManashieldFlag;

// address: 0x80117E32
extern unsigned char ManashieldFlag2;

// address: 0x800FDF0C
// size: 0x20
extern int XDirAdd[8];

// address: 0x800FDF2C
// size: 0x20
extern int YDirAdd[8];

// address: 0x80117E19
extern unsigned char fadetor;

// address: 0x80117E1A
extern unsigned char fadetog;

// address: 0x80117E1B
extern unsigned char fadetob;

// address: 0x800FDF4C
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x800FDF5C
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x80100C2C
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x80117E90
extern long nummonsters;

// address: 0x801063AC
// size: 0x190
extern short monstactive[200];

// address: 0x8010653C
// size: 0x190
extern short monstkills[200];

// address: 0x801066CC
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x80117E94
extern long monstimgtot;

// address: 0x80117E98
extern char totalmonsters;

// address: 0x80117E9C
extern int uniquetrans;

// address: 0x80118420
static unsigned char sgbSaveSoundOn;

// address: 0x80117E64
// size: 0x8
extern char offset_x[8];

// address: 0x80117E6C
// size: 0x8
extern char offset_y[8];

// address: 0x80117E4C
// size: 0x8
extern char left[8];

// address: 0x80117E54
// size: 0x8
extern char right[8];

// address: 0x80117E5C
// size: 0x8
extern char opposite[8];

// address: 0x80117E40
extern int nummtypes;

// address: 0x80117E44
// size: 0x7
extern char animletter[7];

// address: 0x80100A8C
// size: 0x120
extern int MWVel[3][24];

// address: 0x80117E74
// size: 0x4
extern char rnd5[4];

// address: 0x80117E78
// size: 0x4
extern char rnd10[4];

// address: 0x80117E7C
// size: 0x4
extern char rnd20[4];

// address: 0x80117E80
// size: 0x4
extern char rnd60[4];

// address: 0x80100BAC
// size: 0x80
extern void (*AiProc[32])();

// address: 0x80106BA4
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x801085E4
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x80108664
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x801086D4
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x8010698C
// size: 0x218
extern int TransPals[134];

// address: 0x8010688C
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x80117EC8
extern unsigned char invflag;

// address: 0x80117EC9
extern unsigned char drawsbarflag;

// address: 0x80117ECC
extern int InvBackY;

// address: 0x80117ED0
extern int InvCursPos;

// address: 0x8010967C
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x80117ED4
extern int InvBackAY;

// address: 0x80117ED8
extern int InvSel;

// address: 0x80117EDC
extern int ItemW;

// address: 0x80117EE0
extern int ItemH;

// address: 0x80117EE4
extern int ItemNo;

// address: 0x80117EE8
// size: 0x8
extern struct RECT BRect;

// address: 0x80117EBC
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x80117EC0
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x80117EB8
extern int InvPageNo;

// address: 0x80109004
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8010902C
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x80109274
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x80109514
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x801095C8
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x80117EC4
static unsigned long sgdwLastTime;

// address: 0x80117F12
extern unsigned char automapflag;

// address: 0x801096C8
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x80109790
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x80117F13
extern unsigned char AMLWallFlag;

// address: 0x80117F14
extern unsigned char AMRWallFlag;

// address: 0x80117F15
extern unsigned char AMLLWallFlag;

// address: 0x80117F16
extern unsigned char AMLRWallFlag;

// address: 0x80117F17
extern unsigned char AMDirtFlag;

// address: 0x80117F18
extern unsigned char AMColumnFlag;

// address: 0x80117F19
extern unsigned char AMStairFlag;

// address: 0x80117F1A
extern unsigned char AMLDoorFlag;

// address: 0x80117F1B
extern unsigned char AMLGrateFlag;

// address: 0x80117F1C
extern unsigned char AMLArchFlag;

// address: 0x80117F1D
extern unsigned char AMRDoorFlag;

// address: 0x80117F1E
extern unsigned char AMRGrateFlag;

// address: 0x80117F1F
extern unsigned char AMRArchFlag;

// address: 0x80117F20
extern int AutoMapX;

// address: 0x80117F24
extern int AutoMapY;

// address: 0x80117F28
extern int AutoMapXOfs;

// address: 0x80117F2C
extern int AutoMapYOfs;

// address: 0x80117F30
extern int AMPlayerX;

// address: 0x80117F34
extern int AMPlayerY;

// address: 0x80117EFC
extern int AutoMapScale;

// address: 0x80117F00
extern unsigned char AutoMapPlayerR;

// address: 0x80117F01
extern unsigned char AutoMapPlayerG;

// address: 0x80117F02
extern unsigned char AutoMapPlayerB;

// address: 0x80117F03
extern unsigned char AutoMapWallR;

// address: 0x80117F04
extern unsigned char AutoMapWallG;

// address: 0x80117F05
extern unsigned char AutoMapWallB;

// address: 0x80117F06
extern unsigned char AutoMapDoorR;

// address: 0x80117F07
extern unsigned char AutoMapDoorG;

// address: 0x80117F08
extern unsigned char AutoMapDoorB;

// address: 0x80117F09
extern unsigned char AutoMapColumnR;

// address: 0x80117F0A
extern unsigned char AutoMapColumnG;

// address: 0x80117F0B
extern unsigned char AutoMapColumnB;

// address: 0x80117F0C
extern unsigned char AutoMapArchR;

// address: 0x80117F0D
extern unsigned char AutoMapArchG;

// address: 0x80117F0E
extern unsigned char AutoMapArchB;

// address: 0x80117F0F
extern unsigned char AutoMapStairR;

// address: 0x80117F10
extern unsigned char AutoMapStairG;

// address: 0x80117F11
extern unsigned char AutoMapStairB;

// address: 0x8011857C
extern unsigned long GazTick;

// address: 0x8012B790
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A5208
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x801185A4
extern void (*PollFunc)();

// address: 0x80118588
extern void (*MsgFunc)();

// address: 0x801185D4
extern void (*ErrorFunc)();

// address: 0x801184A8
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x801184AC
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x801184B0
// size: 0x5C
static struct TASK *T;

// address: 0x801184B4
static unsigned long MemTypeForTasker;

// address: 0x80128FC0
// size: 0x30
static int SchEnv[12];

// address: 0x801184B8
static unsigned long ExecId;

// address: 0x801184BC
static unsigned long ExecMask;

// address: 0x801184C0
static int TasksActive;

// address: 0x801184C4
static void (*EpiFunc)();

// address: 0x801184C8
static void (*ProFunc)();

// address: 0x801184CC
static unsigned long EpiProId;

// address: 0x801184D0
static unsigned long EpiProMask;

// address: 0x801184D4
static void (*DoTasksPrologue)();

// address: 0x801184D8
static void (*DoTasksEpilogue)();

// address: 0x801184DC
static void (*StackFloodCallback)();

// address: 0x801184E0
static unsigned char ExtraStackProtection;

// address: 0x801184E4
static int ExtraStackSizeLongs;

// address: 0x80118590
extern void *LastPtr;

// address: 0x800A5240
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x801184E8
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x80128FF0
// size: 0x1180
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x801184EC
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x801184F0
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x801184F4
static int TimeStamp;

// address: 0x801184F8
static unsigned char FullErrorChecking;

// address: 0x801184FC
static unsigned long LastAttemptedAlloc;

// address: 0x80118500
static unsigned long LastDeallocedBlock;

// address: 0x80118504
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x80118508
static int NumOfFreeHdrs;

// address: 0x8011850C
static unsigned long LastTypeAlloced;

// address: 0x80118510
static void (*AllocFilter)();

// address: 0x800A5248
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A5270
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x8012A170
// size: 0x1380
static char buf[4992];

// address: 0x800A5298
// size: 0x7
static char NULL_REP[7];

// address: 0x8007B0BC
// line start: 177
// line end:   178
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B0D8
// line start: 182
// line end:   183
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007B0E4
// line start: 114
// line end:   123
void Remove96__Fv() {
}


// address: 0x8007B11C
// line start: 133
// line end:   205
void AppMain() {
}


// address: 0x8007B1BC
// line start: 213
// line end:   214
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007B1E8
// line start: 222
// line end:   257
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007B2D0
// line start: 271
// line end:   283
void MAIN_MainLoop__Fv() {
}


// address: 0x8007B318
// line start: 76
// line end:   80
void CheckMaxArgs__Fv() {
}


// address: 0x8007B34C
// line start: 96
// line end:   98
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007B358
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


// address: 0x8007B4CC
// line start: 159
// line end:   178
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007B580
// line start: 220
// line end:   239
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007B620
// line start: 249
// line end:   266
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007B6BC
// line start: 276
// line end:   287
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007B75C
// line start: 142
// line end:   179
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


// address: 0x8007B878
// line start: 186
// line end:   204
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007B954
// line start: 215
// line end:   237
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007BA7C
// line start: 247
// line end:   248
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007BA88
// line start: 256
// line end:   265
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007BAC4
// line start: 278
// line end:   341
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007BCCC
// line start: 365
// line end:   366
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007BCD8
// line start: 374
// line end:   376
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007BD14
// line start: 380
// line end:   381
unsigned char ClearedYet__Fv() {
}


// address: 0x8007BD20
// line start: 389
// line end:   393
void PrimDrawSycnCallBack() {
}


// address: 0x8007BD40
// line start: 403
// line end:   404
void SendDispEnv__Fv() {
}


// address: 0x8007BD64
// size: 0x18
// line start: 453
// line end:   457
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007BD7C
// size: 0x28
// line start: 461
// line end:   465
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007BD94
// size: 0x34
// line start: 469
// line end:   473
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007BDAC
// size: 0x24
// line start: 478
// line end:   482
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007BDC4
// size: 0x14
// line start: 486
// line end:   490
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007BDDC
// size: 0xC
// line start: 503
// line end:   507
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007BDF4
// line start: 511
// line end:   540
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007BF08
// line start: 546
// line end:   557
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007BF70
// line start: 127
// line end:   128
void VID_AfterDisplay__Fv() {
}


// address: 0x8007BF90
// line start: 182
// line end:   184
void VID_ScrOn__Fv() {
}


// address: 0x8007BFB8
// line start: 203
// line end:   209
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007C010
// line start: 213
// line end:   214
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007C01C
// line start: 218
// line end:   219
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007C028
// line start: 224
// line end:   230
void VID_DispEnvSend() {
}


// address: 0x8007C064
// line start: 236
// line end:   238
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007C074
// line start: 242
// line end:   243
int VID_GetXOff__Fv() {
}


// address: 0x8007C080
// line start: 247
// line end:   248
int VID_GetYOff__Fv() {
}


// address: 0x8007C08C
// line start: 252
// line end:   286
void VID_SetDBuffer__Fb(bool DBuf) {
}


// address: 0x8007C1A8
// line start: 96
// line end:   116
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007C1B0
// line start: 148
// line end:   149
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007C1D0
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C1D0(unsigned short tpage) {
}


// address: 0x8007C1EC
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C1EC(unsigned short tpage) {
}


// address: 0x8007C1F8
// size: 0x14
// line start: 163
// line end:   164
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007C204
// size: 0x14
// line start: 173
// line end:   174
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007C210
// line start: 182
// line end:   242
void SortOutFileSystem__Fv() {
}


// address: 0x8007C34C
// line start: 111
// line end:   113
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007C36C
// line start: 117
// line end:   125
void Spanker__Fv() {
}


// address: 0x8007C3AC
// line start: 252
// line end:   253
void GaryLiddon__Fv() {
}


// address: 0x8007C3B4
// line start: 64
// line end:   92
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


// address: 0x8007C478
// line start: 97
// line end:   100
void DummyPoll__Fv() {
}


// address: 0x8007C480
// line start: 103
// line end:   104
void DaveOwens__Fv() {
}


// address: 0x8007C4A8
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007C4D0
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C4D0(unsigned short tpage) {
}


// address: 0x8007C4EC
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C4EC(unsigned short tpage) {
}


// address: 0x8007C4F8
// line start: 474
// line end:   503
void TimSwann__Fv() {
}


// address: 0x8007C500
// line start: 25
// line end:   26
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007C508
// line start: 30
// line end:   32
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007C53C
// line start: 36
// line end:   39
void leighbird__Fv() {
}


// address: 0x8007C564
// size: 0x14
// line start: 61
// line end:   63
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007C5B4
// line start: 70
// line end:   71
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007C608
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


// address: 0x8007C770
// line start: 112
// line end:   119
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007C7D4
// line start: 129
// line end:   131
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007C7F4
// line start: 138
// line end:   150
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007C8D4
// line start: 157
// line end:   171
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007C998
// line start: 180
// line end:   185
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007C9FC
// line start: 193
// line end:   207
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007CAD8
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


// address: 0x8007CBEC
// line start: 254
// line end:   274
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007CC94
// line start: 282
// line end:   286
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007CCEC
// line start: 295
// line end:   299
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007CD44
// line start: 308
// line end:   309
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007CD58
// line start: 317
// line end:   318
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007CD94
// size: 0x14
// line start: 62
// line end:   65
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007CDFC
// line start: 75
// line end:   75
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007CE54
// line start: 85
// line end:   93
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007CE98
// line start: 106
// line end:   118
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007CF5C
// line start: 125
// line end:   139
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007D014
// line start: 143
// line end:   160
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D0E8
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


// address: 0x8007D2F8
// size: 0x4
// line start: 65
// line end:   67
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007D310
// line start: 77
// line end:   79
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007D33C
// line start: 89
// line end:   101
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007D3B8
// line start: 111
// line end:   119
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007D424
// size: 0x14
// line start: 65
// line end:   68
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007D460
// line start: 78
// line end:   78
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007D4B8
// line start: 88
// line end:   96
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007D4F8
// line start: 109
// line end:   121
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D5B8
// line start: 128
// line end:   142
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007D66C
// line start: 146
// line end:   158
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D714
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


// address: 0x8007D920
// size: 0x6C
// line start: 112
// line end:   118
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007D960
// line start: 128
// line end:   129
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007D9A8
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


// address: 0x8007DB9C
// line start: 215
// line end:   243
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x801181D8
	static int TpX;
	// address: 0x801181DC
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


// address: 0x8007DC6C
// line start: 246
// line end:   270
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007DD24
// line start: 285
// line end:   298
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007DD80
// line start: 309
// line end:   316
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007DDF0
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


// address: 0x8007DF1C
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


// address: 0x8007E018
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


// address: 0x8007E420
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


// address: 0x8007E68C
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


// address: 0x8007E7EC
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


// address: 0x8007E8E8
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


// address: 0x8007EB44
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


// address: 0x8007EBC4
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


// address: 0x8007ED88
// size: 0x28
// line start: 918
// line end:   937
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007EEDC
// size: 0x34
// line start: 943
// line end:   962
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007F030
// size: 0x28
// line start: 968
// line end:   984
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007F114
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


// address: 0x8007F268
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


// address: 0x8007F3A8
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


// address: 0x8007F4A4
// line start: 1157
// line end:   1167
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007F4D0
// line start: 1177
// line end:   1212
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007F618
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


// address: 0x8007F738
// line start: 1253
// line end:   1257
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x8007F78C
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


// address: 0x8007F854
// line start: 1309
// line end:   1310
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8007F8A8
// line start: 1314
// line end:   1315
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x8007F900
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


// address: 0x8007FA24
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


// address: 0x8007FAF8
// size: 0x4
// line start: 1422
// line end:   1424
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x8007FB48
// line start: 1430
// line end:   1431
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x8007FB70
// line start: 1435
// line end:   1441
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x8007FC18
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


// address: 0x8007FCD8
// line start: 1479
// line end:   1483
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x8007FD1C
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


// address: 0x8007FDAC
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


// address: 0x8007FE1C
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


// address: 0x8007FE88
// line start: 1530
// line end:   1532
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007FED8
// line start: 1545
// line end:   1546
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007FF00
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


// address: 0x8007FF9C
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


// address: 0x80080004
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


// address: 0x800800D8
// size: 0x78
// line start: 1665
// line end:   1666
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x8008010C
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


// address: 0x80080388
// line start: 1731
// line end:   1733
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x800803AC
// line start: 1737
// line end:   1766
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8008068C
// line start: 1774
// line end:   1782
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80080704
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


// address: 0x80080860
// line start: 1868
// line end:   1868
void _GLOBAL__D_DatPool() {
}


// address: 0x800808B8
// line start: 1868
// line end:   1868
void _GLOBAL__I_DatPool() {
}


// address: 0x8008090C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x80080988
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x80080A04
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80080A80
// line start: 243
// line end:   243
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x80080AA8
// line start: 242
// line end:   242
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x80080AD0
// line start: 241
// line end:   241
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x80080ADC
// line start: 240
// line end:   240
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x80080AE8
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80080B60
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x80080B74
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80080B80
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x80080B94
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x80080BB0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80080BCC
// line start: 167
// line end:   167
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080BD8
// line start: 158
// line end:   158
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080C00
// line start: 157
// line end:   157
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080C28
// line start: 66
// line end:   66
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x80080C3C
// size: 0x14
// line start: 120
// line end:   123
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x80080C80
// line start: 133
// line end:   133
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80080CD8
// line start: 143
// line end:   153
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80080CFC
// line start: 165
// line end:   187
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80080D24
// line start: 196
// line end:   206
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80080D48
// line start: 212
// line end:   231
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80080E28
// line start: 248
// line end:   249
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x80080E38
// line start: 254
// line end:   281
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


// address: 0x80080F84
// line start: 288
// line end:   358
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


// address: 0x800811E8
// line start: 105
// line end:   132
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x800812D4
// line start: 142
// line end:   168
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


// address: 0x80081400
// line start: 178
// line end:   222
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


// address: 0x8008156C
// line start: 227
// line end:   294
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


// address: 0x80081824
// size: 0x14
// line start: 304
// line end:   325
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


// address: 0x80081924
// size: 0x14
// line start: 335
// line end:   374
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


// address: 0x80081AC0
// line start: 384
// line end:   386
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80081AE4
// line start: 398
// line end:   404
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80081B18
// line start: 414
// line end:   495
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80081C00
// line start: 505
// line end:   507
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80081C0C
// line start: 512
// line end:   527
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x80081C70
// line start: 532
// line end:   561
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


// address: 0x80081D50
// size: 0x14
// line start: 571
// line end:   575
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80081D7C
// line start: 590
// line end:   597
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80081DB4
// line start: 607
// line end:   631
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


// address: 0x80081ECC
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


// address: 0x80081FA0
// line start: 77
// line end:   108
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x800820C4
// line start: 118
// line end:   137
void Tfree__FPv(void *Addr) {
}


// address: 0x80082174
// line start: 146
// line end:   151
void InitTmalloc__Fv() {
}


// address: 0x8008219C
// line start: 161
// line end:   167
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x800821F0
// line start: 175
// line end:   187
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x8008223C
// line start: 198
// line end:   224
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
					{
					}
				}
			}
		}
	}
}


// address: 0x80082314
// line start: 235
// line end:   240
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80082340
// line start: 252
// line end:   314
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


// address: 0x80082590
// line start: 325
// line end:   426
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


// address: 0x800828A8
// line start: 437
// line end:   475
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


// address: 0x800829C8
// line start: 485
// line end:   516
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


// address: 0x80082ACC
// line start: 540
// line end:   543
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80082ADC
// line start: 553
// line end:   554
bool PA_GetPauseOk__Fv() {
}


// address: 0x80082AE8
// line start: 577
// line end:   586
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80082C38
// line start: 591
// line end:   592
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80082C40
// line start: 595
// line end:   608
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80082D40
// line start: 615
// line end:   616
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80082D48
// line start: 619
// line end:   620
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80082D50
// line start: 623
// line end:   634
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80082E50
// line start: 641
// line end:   642
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80082E58
// line start: 645
// line end:   646
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80082E60
// line start: 649
// line end:   660
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80082F90
// line start: 677
// line end:   678
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80082F98
// line start: 681
// line end:   681
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80082FC0
// line start: 686
// line end:   686
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80082FE8
// line start: 686
// line end:   686
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80083010
// size: 0xC
// line start: 111
// line end:   111
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083054
// line start: 82
// line end:   82
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80083088
// size: 0x8
// line start: 81
// line end:   81
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x8008309C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800830BC
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x800830C4
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x800830CC
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x800830F4
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80083150
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x80083178
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x800831A0
// line start: 85
// line end:   85
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x800831AC
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


// address: 0x800832C4
// line start: 152
// line end:   203
void PAD_Handler__Fv() {
	// register: 16
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 17
	register unsigned char fin;
}


// address: 0x8008347C
// size: 0x6C
// line start: 217
// line end:   228
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x80083518
// line start: 240
// line end:   271
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80083650
// line start: 275
// line end:   307
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x800837AC
// line start: 317
// line end:   341
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x800838D0
// line start: 345
// line end:   345
void _GLOBAL__I_Pad0() {
}


// address: 0x80083908
// line start: 86
// line end:   86
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x80083910
// line start: 85
// line end:   85
unsigned char CheckActive__4CPad_addr_80083910(struct CPad *this) {
}


// address: 0x8008391C
// line start: 84
// line end:   84
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x80083924
// line start: 77
// line end:   77
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x8008392C
// size: 0x6C
// line start: 75
// line end:   75
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80083960
// line start: 118
// line end:   122
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80083984
// line start: 79
// line end:   84
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


// address: 0x80083A20
// line start: 350
// line end:   360
void InitPrinty__Fv() {
}


// address: 0x80083AA8
// line start: 365
// line end:   366
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80083AB0
// line start: 373
// line end:   432
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80083C30
// line start: 437
// line end:   616
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	// register: 16
	register int Cx;
	// register: 20
	register int Cy;
	// address: 0xFFFFFF78
	auto int WrapCount;
	// register: 19
	register char *EndPtr;
	// register: 21
	register char *SpacePtr;
	// register: 3
	register int CharW;
	// register: 16
	register int SpaceW;
	// address: 0xFFFFFF80
	auto int WindowW;
	// address: 0xFFFFFF88
	auto int WindowX;
	// register: 5
	register int WindowY;
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


// address: 0x80084218
// line start: 621
// line end:   637
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x800842CC
// line start: 645
// line end:   647
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80084330
// line start: 653
// line end:   656
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8008433C
// line start: 88
// line end:   88
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80084360
// line start: 85
// line end:   85
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80084380
// line start: 82
// line end:   82
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80084398
// line start: 71
// line end:   75
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x800843F0
// line start: 59
// line end:   59
void Init__5CFont(struct CFont *this) {
}


// address: 0x80084424
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80084424(struct TextDat *this, int FrNum) {
}


// address: 0x80084440
// line start: 110
// line end:   113
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80084478
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


// address: 0x80084DF0
// size: 0x24
// line start: 391
// line end:   402
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80084F28
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


// address: 0x800851CC
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


// address: 0x80085304
// line start: 496
// line end:   552
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x8008555C
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


// address: 0x8008671C
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


// address: 0x80086934
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80086934(struct TextDat *this, int PalNum) {
}


// address: 0x80086950
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80086950(struct TextDat *this, int FrNum) {
}


// address: 0x8008696C
// line start: 65
// line end:   107
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80086A6C
// line start: 112
// line end:   117
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80086B08
// line start: 234
// line end:   240
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x80086B48
// line start: 245
// line end:   274
void CycleSelCols__Fv() {
}


// address: 0x80086CD8
// line start: 282
// line end:   290
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


// address: 0x80086D4C
// line start: 299
// line end:   305
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80086DA0
// size: 0xE0
// line start: 314
// line end:   368
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x80086EF4
// line start: 378
// line end:   380
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80086F2C
// line start: 389
// line end:   400
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x80086FF4
// line start: 410
// line end:   422
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x8008707C
// line start: 432
// line end:   439
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x800870E4
// line start: 448
// line end:   455
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x8008714C
// line start: 465
// line end:   470
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x800871A8
// line start: 480
// line end:   486
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x800871F8
// line start: 494
// line end:   529
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80087544
// line start: 540
// line end:   550
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x800875F0
// line start: 561
// line end:   572
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x800876C4
// line start: 582
// line end:   593
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


// address: 0x800877CC
// line start: 603
// line end:   661
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


// address: 0x80087908
// size: 0xC
// line start: 671
// line end:   673
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x80087980
// line start: 684
// line end:   685
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x800879A8
// line start: 695
// line end:   698
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x800879D0
// line start: 708
// line end:   710
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x800879E8
// line start: 752
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
}


// address: 0x80088EF4
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


// address: 0x80089064
// line start: 1274
// line end:   1644
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


// address: 0x80089D7C
// line start: 1653
// line end:   1834
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
			// size: 0x98
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


// address: 0x8008A440
// line start: 1842
// line end:   1862
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


// address: 0x8008A5B0
// line start: 1872
// line end:   1873
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008A5C4
// line start: 1883
// line end:   1884
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008A5D8
// line start: 1894
// line end:   1896
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008A69C
// line start: 1906
// line end:   1913
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x8008A704
// line start: 1923
// line end:   1933
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008A7A4
// line start: 1944
// line end:   1955
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008A878
// line start: 2012
// line end:   2039
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008A8F8
// line start: 2051
// line end:   2052
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008A900
// line start: 2062
// line end:   2063
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008A914
// size: 0xE0
// line start: 2099
// line end:   2106
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008A920
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008A920(struct POLY_FT4 **Prim) {
}


// address: 0x8008A99C
// line start: 97
// line end:   105
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008A9E4
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008AA20
// line start: 97
// line end:   105
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008AA68
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008AA68(struct POLY_GT4 **Prim) {
}


// address: 0x8008AAE4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x8008AB60
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


// address: 0x8008AB88
// line start: 174
// line end:   176
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008ABA4
// line start: 173
// line end:   173
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008ABCC
// line start: 172
// line end:   172
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008ABF4
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008AC18
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008AC3C
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008AC64
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008AC70
// line start: 64
// line end:   76
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008AD08
// line start: 47
// line end:   60
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8008AD98
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008ADD0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008ADD0(struct TextDat *this, int Creature) {
}


// address: 0x8008AE48
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008AE48(struct TextDat *this) {
}


// address: 0x8008AE5C
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008AE5C(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008AE68
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008AE68(struct TextDat *this, int PalNum) {
}


// address: 0x8008AE84
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008AE84(struct TextDat *this, int FrNum) {
}


// address: 0x8008AEA0
// line start: 119
// line end:   121
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008AECC
// line start: 129
// line end:   130
void OVR_LoadPregame__Fv() {
}


// address: 0x8008AEF4
// line start: 137
// line end:   138
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008AF1C
// line start: 146
// line end:   147
void OVR_LoadGame__Fv() {
}


// address: 0x8008AF44
// line start: 155
// line end:   156
void OVR_LoadFmv__Fv() {
}


// address: 0x8008AF6C
// line start: 164
// line end:   165
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008AF98
// line start: 174
// line end:   178
void ClearOutOverlays__Fv() {
}


// address: 0x8008AFF0
// line start: 187
// line end:   194
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008B0B4
// line start: 203
// line end:   216
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008B124
// size: 0x4
// line start: 225
// line end:   226
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x8008B130
// line start: 234
// line end:   239
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x8008B184
// line start: 244
// line end:   244
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008B2F4
// size: 0x4
// line start: 65
// line end:   65
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x8008B300
// line start: 74
// line end:   75
void StevesDummyPoll__Fv() {
}


// address: 0x8008B308
// line start: 78
// line end:   81
void Lambo__Fv() {
}


// address: 0x8008B310
// size: 0x84
// line start: 66
// line end:   111
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008B3F4
// line start: 122
// line end:   124
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008B44C
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008B4A8
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


// address: 0x8008B5F4
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


// address: 0x8008BA20
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008BAA0
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


// address: 0x8008BF94
// line start: 426
// line end:   484
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008C010
// size: 0x4
// line start: 489
// line end:   520
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008C08C
// line start: 531
// line end:   532
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008C094
// line start: 541
// line end:   542
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008C09C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008C09C(struct POLY_FT4 **Prim) {
}


// address: 0x8008C118
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008C118(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008C154
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008C154(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008C17C
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008C190
// line start: 249
// line end:   253
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008C1A8
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008C1A8(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008C1E0
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008C204
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008C204(struct TextDat *this, int Creature) {
}


// address: 0x8008C27C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008C27C(struct TextDat *this) {
}


// address: 0x8008C290
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008C290(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008C29C
// line start: 87
// line end:   94
void PROF_Open__Fv() {
}


// address: 0x8008C2DC
// line start: 99
// line end:   100
bool PROF_State__Fv() {
}


// address: 0x8008C2E8
// line start: 104
// line end:   105
void PROF_On__Fv() {
}


// address: 0x8008C2F8
// line start: 109
// line end:   110
void PROF_Off__Fv() {
}


// address: 0x8008C304
// line start: 114
// line end:   115
void PROF_CpuEnd__Fv() {
}


// address: 0x8008C334
// line start: 119
// line end:   120
void PROF_CpuStart__Fv() {
}


// address: 0x8008C358
// line start: 124
// line end:   125
void PROF_DrawStart__Fv() {
}


// address: 0x8008C37C
// line start: 129
// line end:   130
void PROF_DrawEnd__Fv() {
}


// address: 0x8008C3AC
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


// address: 0x8008C5A0
// line start: 179
// line end:   180
void PROF_Restart__Fv() {
}


// address: 0x8008C5C0
// line start: 179
// line end:   217
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008C680
// line start: 228
// line end:   265
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008C730
// line start: 273
// line end:   280
void GoBackLevel__Fv() {
}


// address: 0x8008C7A8
// line start: 284
// line end:   288
void GoWarpLevel__Fv() {
}


// address: 0x8008C7E0
// line start: 294
// line end:   300
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008C87C
// line start: 304
// line end:   319
void GoLoadGame__Fv() {
}


// address: 0x8008C904
// line start: 323
// line end:   329
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008C9A0
// line start: 333
// line end:   344
void GoNewLevel__Fv() {
}


// address: 0x8008C9F4
// line start: 351
// line end:   355
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008CA8C
// line start: 362
// line end:   365
void GoForwardLevel__Fv() {
}


// address: 0x8008CAE4
// line start: 369
// line end:   373
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008CB7C
// line start: 381
// line end:   386
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008CBCC
// line start: 390
// line end:   394
void PostNewGame__Fv() {
}


// address: 0x8008CC04
// line start: 403
// line end:   414
void LevelToLevelInit__Fv() {
}


// address: 0x8008CC5C
// line start: 204
// line end:   218
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008CCA0
// size: 0x10
// line start: 226
// line end:   230
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008CCF8
// line start: 241
// line end:   338
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


// address: 0x8008D178
// line start: 346
// line end:   414
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


// address: 0x8008D5FC
// line start: 421
// line end:   449
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 21
	register int X;
	// register: 19
	register int Y;
	// register: 2
	register int Anim;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 3
	register int SpellNo;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto char YT[16];
}


// address: 0x8008D768
// line start: 457
// line end:   469
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008D7B4
// line start: 486
// line end:   549
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008DB70
// line start: 553
// line end:   572
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008DC64
// line start: 578
// line end:   596
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008DD68
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008DD68(struct TextDat *this, int PalNum) {
}


// address: 0x8008DD84
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008DD84(struct TextDat *this, int FrNum) {
}


// address: 0x8008DDA0
// line start: 132
// line end:   149
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008DDB4
// line start: 345
// line end:   363
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008DDF4
// line start: 374
// line end:   384
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


// address: 0x8008DE80
// line start: 390
// line end:   417
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


// address: 0x8008DF48
// size: 0x80
// line start: 428
// line end:   486
struct SFXHDR *STR_InitStream__Fv() {
	// register: 18
	// size: 0x80
	register struct SFXHDR *sfh;
	{
		// register: 17
		register int s;
	}
}


// address: 0x8008E080
// size: 0x80
// line start: 496
// line end:   556
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008E1BC
// line start: 566
// line end:   571
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008E214
// line start: 596
// line end:   627
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008E320
// line start: 637
// line end:   641
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008E370
// line start: 651
// line end:   655
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008E3C0
// line start: 665
// line end:   683
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008E42C
// line start: 692
// line end:   734
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008E538
// line start: 743
// line end:   797
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008E658
// line start: 807
// line end:   826
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008E720
// line start: 837
// line end:   914
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008E8FC
// line start: 926
// line end:   1047
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


// address: 0x8008EBF4
// line start: 1060
// line end:   1227
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


// address: 0x8008F020
// line start: 1241
// line end:   1276
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


// address: 0x8008F130
// line start: 140
// line end:   177
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x8008F200
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


// address: 0x8008F26C
// line start: 213
// line end:   223
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8008F2E4
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80118240
	static int DestAddr;
}


// address: 0x8008F35C
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


// address: 0x8008F490
// line start: 355
// line end:   360
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008F4E4
// line start: 384
// line end:   386
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8008F508
// line start: 396
// line end:   401
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008F56C
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


// address: 0x8008F720
// line start: 86
// line end:   87
void AS_CallBack0__Fi(int handle) {
}


// address: 0x8008F734
// line start: 91
// line end:   92
void AS_CallBack1__Fi(int handle) {
}


// address: 0x8008F748
// line start: 102
// line end:   125
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x8008F824
// line start: 148
// line end:   164
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8008F8C4
// line start: 174
// line end:   175
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F8D0
// line start: 185
// line end:   189
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8008F8FC
// line start: 200
// line end:   242
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x8008FA1C
// line start: 170
// line end:   171
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x8008FA50
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8008FAE0
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008FBBC
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008FC3C
// line start: 277
// line end:   293
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x8008FCDC
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008FD70
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


// address: 0x8008FDE4
// line start: 353
// line end:   354
void SCR_Handler__Fv() {
}


// address: 0x8008FE0C
// line start: 132
// line end:   132
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8008FE14
// size: 0x18
// line start: 110
// line end:   116
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008FE50
// line start: 98
// line end:   104
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008FEB4
// line start: 90
// line end:   93
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008FF0C
// line start: 83
// line end:   86
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008FF64
// line start: 97
// line end:   100
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008FF78
// line start: 89
// line end:   92
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x8008FFA4
// line start: 82
// line end:   85
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x8008FFAC
// line start: 79
// line end:   79
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8008FFB4
// line start: 78
// line end:   78
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x8008FFC0
// line start: 73
// line end:   73
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008FFF8
// size: 0x18
// line start: 67
// line end:   67
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80090004
// line start: 57
// line end:   63
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090024
// line start: 46
// line end:   53
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090070
// line start: 76
// line end:   77
void stub__FPcPv_addr_80090070(char *e, void *argptr) {
}


// address: 0x80090078
// line start: 80
// line end:   82
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x800900AC
// line start: 86
// line end:   94
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x80090134
// line start: 99
// line end:   124
void print_demo_task__FP4TASK(struct TASK *T) {
}


// address: 0x8009026C
// line start: 128
// line end:   130
void TonysDummyPoll__Fv() {
}


// address: 0x80090290
// line start: 134
// line end:   141
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800902F0
// line start: 145
// line end:   152
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x80090350
// line start: 164
// line end:   176
void set_pad_record_play__Fi(int level) {
}


// address: 0x800903CC
// line start: 181
// line end:   193
void demo_game_task__FP4TASK(struct TASK *T) {
}


// address: 0x80090404
// line start: 196
// line end:   203
void start_demo__Fv() {
}


// address: 0x80090480
// line start: 207
// line end:   209
void tony__Fv() {
}


// address: 0x800904B8
// line start: 221
// line end:   222
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x800904C4
// line start: 232
// line end:   233
int GLUE_GetMonsterList__Fv() {
}


// address: 0x800904D0
// line start: 243
// line end:   248
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80090524
// line start: 258
// line end:   263
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80090578
// line start: 273
// line end:   280
void GLUE_PreTown__Fv() {
}


// address: 0x800905DC
// line start: 289
// line end:   295
void GLUE_PreDun__Fv() {
}


// address: 0x80090628
// line start: 315
// line end:   316
bool GLUE_Finished__Fv() {
}


// address: 0x80090634
// line start: 326
// line end:   327
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80090640
// line start: 337
// line end:   349
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x800906C4
// line start: 358
// line end:   362
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800906D4
// line start: 370
// line end:   374
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800906E4
// line start: 382
// line end:   386
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800906F4
// line start: 396
// line end:   416
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x800907CC
// line start: 427
// line end:   585
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


// address: 0x80090CB8
// size: 0x8
// line start: 595
// line end:   605
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x80090D40
// size: 0x8
// line start: 610
// line end:   616
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80090D9C
// size: 0x8
// line start: 620
// line end:   625
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80090DCC
// line start: 629
// line end:   635
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x80090E0C
// line start: 645
// line end:   651
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80090E60
// size: 0x10
// line start: 662
// line end:   669
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80090F0C
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x80090F18
// line start: 139
// line end:   139
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x80090F20
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80090F34
// line start: 164
// line end:   181
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80090FAC
// line start: 210
// line end:   220
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x80090FE4
// line start: 226
// line end:   231
void RemoveCtrlScreen__Fv() {
}


// address: 0x80091034
// line start: 236
// line end:   333
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


// address: 0x80091644
// line start: 337
// line end:   349
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80091684
// line start: 353
// line end:   366
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800916C4
// line start: 370
// line end:   414
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


// address: 0x80091818
// line start: 418
// line end:   425
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x80091860
// line start: 432
// line end:   532
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x80091BC8
// line start: 539
// line end:   644
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


// address: 0x800920D8
// line start: 647
// line end:   719
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


// address: 0x8009263C
// line start: 719
// line end:   719
void _GLOBAL__D_ctrlflag() {
}


// address: 0x80092664
// line start: 719
// line end:   719
void _GLOBAL__I_ctrlflag() {
}


// address: 0x8009268C
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009268C(struct CPad *this) {
}


// address: 0x800926B4
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_800926B4(struct CPad *this) {
}


// address: 0x800926DC
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_800926DC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800926FC
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_800926FC(struct Dialog *this, int Type) {
}


// address: 0x80092704
// line start: 84
// line end:   87
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80092710
// line start: 77
// line end:   77
void ___6Dialog_addr_80092710(struct Dialog *this, int __in_chrg) {
}


// address: 0x80092738
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80092738(struct Dialog *this) {
}


// address: 0x80092794
// line start: 160
// line end:   163
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x800927E0
// line start: 194
// line end:   223
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x80092960
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


// address: 0x80092AA4
// line start: 50
// line end:   82
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	register int diff;
}


// address: 0x80092CF4
// line start: 88
// line end:   91
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80092D48
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


// address: 0x80092FAC
// line start: 148
// line end:   183
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80093194
// line start: 188
// line end:   213
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


// address: 0x8009335C
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8009335C(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80093398
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80093398(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x800933C0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800933C0(struct POLY_FT4 **Prim) {
}


// address: 0x8009343C
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_8009343C(struct TextDat *this, int Creature) {
}


// address: 0x80093460
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80093460(struct TextDat *this, int Creature) {
}


// address: 0x800934D8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800934D8(struct TextDat *this) {
}


// address: 0x800934EC
// line start: 83
// line end:   84
void DaveLDummyPoll__Fv() {
}


// address: 0x800934F4
// line start: 87
// line end:   89
void DaveL__Fv() {
}


// address: 0x8009351C
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
	// address: 0x80117098
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


// address: 0x800937FC
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


// address: 0x80093AD8
// line start: 195
// line end:   209
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x80093BA4
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


// address: 0x80093C2C
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


// address: 0x80093E1C
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


// address: 0x80093F50
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


// address: 0x80094120
// line start: 333
// line end:   356
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x800942C0
// line start: 360
// line end:   370
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x800943A4
// line start: 375
// line end:   377
void doparticlejump__Fv() {
}


// address: 0x800943E4
// line start: 381
// line end:   400
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x8009454C
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


// address: 0x80094944
// line start: 492
// line end:   509
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80094A04
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


// address: 0x80094CAC
// line start: 566
// line end:   581
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x80094ED0
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


// address: 0x80094FF4
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


// address: 0x8009510C
// line start: 625
// line end:   627
void HealStart__Fi(int plr) {
}


// address: 0x80095140
// line start: 631
// line end:   634
void HealotherStart__Fi(int plr) {
}


// address: 0x80095178
// line start: 638
// line end:   641
void TeleStart__Fi(int plr) {
}


// address: 0x800951D4
// line start: 646
// line end:   648
void PhaseStart__Fi(int plr) {
}


// address: 0x80095208
// line start: 653
// line end:   655
void InvisStart__Fi(int plr) {
}


// address: 0x8009523C
// line start: 660
// line end:   662
void PhaseEnd__Fi(int plr) {
}


// address: 0x80095268
// line start: 668
// line end:   692
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80095414
// line start: 697
// line end:   704
void ApocUpdate__11SPELLFX_DAT(struct SPELLFX_DAT *this) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x80095480
// line start: 708
// line end:   711
void ApocaStart__Fi(int plr) {
}


// address: 0x800954E4
// line start: 716
// line end:   736
void doapocaFX__Fv() {
	// register: 17
	register int plr;
}


// address: 0x800956C4
// line start: 741
// line end:   761
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80095728
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x800957A4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80095820
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80095820(struct POLY_FT4 **Prim) {
}


// address: 0x8009589C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009589C(struct TextDat *this, int FrNum) {
}


// address: 0x800958B8
// line start: 95
// line end:   122
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


// address: 0x80095ABC
// line start: 130
// line end:   227
void show_spell_dir__Fi(int pnum) {
	// register: 21
	// size: 0x23A8
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


// address: 0x80095EC0
// line start: 241
// line end:   290
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80095F34
// line start: 298
// line end:   307
void select_belt_item__Fi(int pnum) {
}


// address: 0x80095F3C
// line start: 315
// line end:   324
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80095FA4
// line start: 331
// line end:   349
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800960D4
// line start: 355
// line end:   375
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x8009620C
// line start: 384
// line end:   386
void pad_func_up__Fi(int pnum) {
}


// address: 0x80096238
// line start: 394
// line end:   396
void pad_func_down__Fi(int pnum) {
}


// address: 0x80096264
// line start: 404
// line end:   405
void pad_func_left__Fi(int pnum) {
}


// address: 0x8009626C
// line start: 412
// line end:   413
void pad_func_right__Fi(int pnum) {
}


// address: 0x80096274
// line start: 431
// line end:   444
void pad_func_select__Fi(int pnum) {
}


// address: 0x80096364
// line start: 456
// line end:   531
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80096748
// line start: 538
// line end:   589
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


// address: 0x80096A70
// line start: 593
// line end:   616
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


// address: 0x80096BC0
// line start: 620
// line end:   639
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80096C50
// line start: 646
// line end:   802
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 17
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


// address: 0x8009727C
// line start: 809
// line end:   816
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80097370
// line start: 828
// line end:   841
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x800974AC
// line start: 864
// line end:   876
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800975CC
// line start: 881
// line end:   892
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800976E4
// line start: 897
// line end:   901
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80097790
// line start: 915
// line end:   937
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x8009785C
// line start: 975
// line end:   986
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80097974
// line start: 1012
// line end:   1022
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x800979F0
// line start: 1050
// line end:   1086
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x80097BC8
// line start: 1094
// line end:   1095
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80097BF0
// line start: 1105
// line end:   1106
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80097C18
// line start: 1111
// line end:   1126
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


// address: 0x80097D58
// line start: 1130
// line end:   1157
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80097E64
// line start: 1161
// line end:   1303
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


// address: 0x80098728
// line start: 1307
// line end:   1331
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


// address: 0x80098804
// line start: 1340
// line end:   1346
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80098910
// line start: 1355
// line end:   1425
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80098CD0
// line start: 1430
// line end:   1484
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


// address: 0x80098F24
// line start: 1529
// line end:   1554
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80099160
// line start: 1555
// line end:   1555
void _GLOBAL__D_gplayer() {
}


// address: 0x80099188
// line start: 1555
// line end:   1555
void _GLOBAL__I_gplayer() {
}


// address: 0x800991B0
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_800991B0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800991D0
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_800991D0(struct Dialog *this, int Type) {
}


// address: 0x800991D8
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_800991D8(struct Dialog *this, int Type) {
}


// address: 0x800991E0
// line start: 77
// line end:   77
void ___6Dialog_addr_800991E0(struct Dialog *this, int __in_chrg) {
}


// address: 0x80099208
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80099208(struct Dialog *this) {
}


// address: 0x80099264
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80099264(struct CBlocks *this) {
}


// address: 0x80099278
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80099278(struct CPad *this) {
}


// address: 0x800992A0
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_800992A0(struct CPad *this) {
}


// address: 0x800992C8
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80099344
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009939C
// line start: 102
// line end:   107
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x800993F8
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80099430
// line start: 130
// line end:   136
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80099468
// line start: 139
// line end:   144
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800994C8
// line start: 155
// line end:   156
bool IsGameLoading__Fv() {
}


// address: 0x800994D4
// line start: 166
// line end:   235
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


// address: 0x8009992C
// line start: 247
// line end:   273
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x800999DC
// line start: 283
// line end:   290
void TakeDownCutScreen__Fv() {
}


// address: 0x80099A24
// line start: 301
// line end:   305
void FinishProgress__Fv() {
}


// address: 0x80099A6C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_80099A6C(struct POLY_G4 **Prim) {
}


// address: 0x80099AE8
// line start: 310
// line end:   310
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x80099B20
// line start: 310
// line end:   310
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x80099B58
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80099B58(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80099B78
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_80099B78(struct Dialog *this, int Type) {
}


// address: 0x80099B80
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80099B80(struct Dialog *this, int Type) {
}


// address: 0x80099B88
// line start: 77
// line end:   77
void ___6Dialog_addr_80099B88(struct Dialog *this, int __in_chrg) {
}


// address: 0x80099BB0
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80099BB0(struct Dialog *this) {
}


// address: 0x80099C0C
// line start: 345
// line end:   120
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80099C2C
// line start: 104
// line end:   184
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x80099E48
// line start: 188
// line end:   212
void memcard_event__Fii(int evt, int side) {
}


// address: 0x80099E50
// line start: 217
// line end:   221
void init_card__Fi(int card_number) {
}


// address: 0x80099E84
// line start: 226
// line end:   239
int ping_card__Fi(int card_number) {
}


// address: 0x80099F18
// line start: 243
// line end:   249
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x80099F50
// line start: 254
// line end:   265
void MemcardON__Fv() {
}


// address: 0x80099FC0
// line start: 271
// line end:   279
void MemcardOFF__Fv() {
}


// address: 0x8009A010
// line start: 524
// line end:   533
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009A0F4
// line start: 549
// line end:   672
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


// address: 0x8009A5BC
// line start: 678
// line end:   876
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


// address: 0x8009B0E0
// line start: 882
// line end:   1098
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


// address: 0x8009B778
// line start: 1101
// line end:   1317
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


// address: 0x8009BE1C
// line start: 1324
// line end:   1492
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


// address: 0x8009C42C
// line start: 1500
// line end:   1603
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


// address: 0x8009C850
// line start: 1609
// line end:   1634
void CalcVolumes__Fv() {
}


// address: 0x8009C990
// line start: 1642
// line end:   1662
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


// address: 0x8009CA98
// line start: 1670
// line end:   1687
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009CC40
// line start: 1704
// line end:   1955
void DrawOptions__FP4TASK(struct TASK *T) {
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
			}
		}
	}
}


// address: 0x8009D290
// line start: 1961
// line end:   1982
void ToggleOptions__Fv() {
}


// address: 0x8009D330
// line start: 1989
// line end:   2065
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


// address: 0x8009D628
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009D628(struct POLY_G4 **Prim) {
}


// address: 0x8009D6A4
// line start: 111
// line end:   115
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009D6CC
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009D6CC(struct CPad *this) {
}


// address: 0x8009D6F4
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_8009D6F4(struct CPad *this) {
}


// address: 0x8009D71C
// line start: 82
// line end:   82
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8009D724
// line start: 81
// line end:   81
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009D72C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8009D72C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009D74C
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8009D74C(struct Dialog *this, int Type) {
}


// address: 0x8009D754
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8009D754(struct Dialog *this, int Type) {
}


// address: 0x8009D75C
// line start: 84
// line end:   87
int SetOTpos__6Dialogi_addr_8009D75C(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8009D768
// line start: 77
// line end:   77
void ___6Dialog_addr_8009D768(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009D790
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8009D790(struct Dialog *this) {
}


// address: 0x8009D7EC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009D7EC(struct TextDat *this, int FrNum) {
}


// address: 0x8009D808
// line start: 72
// line end:   79
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009D860
// line start: 88
// line end:   129
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x8009DA3C
// line start: 139
// line end:   149
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009DAB8
// line start: 158
// line end:   176
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 2
	register int type;
	// register: 4
	register int i;
}


// address: 0x8009DB98
// line start: 185
// line end:   194
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009DBEC
// line start: 203
// line end:   230
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009DD54
// line start: 239
// line end:   259
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009DE58
// line start: 270
// line end:   272
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009DE94
// line start: 281
// line end:   297
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009DF18
// line start: 305
// line end:   318
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009DFC4
// line start: 326
// line end:   336
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009E068
// line start: 346
// line end:   369
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


// address: 0x8009E10C
// line start: 377
// line end:   429
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


// address: 0x8009E3B8
// line start: 439
// line end:   440
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009E3C4
// line start: 449
// line end:   453
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009E414
// line start: 462
// line end:   479
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009E500
// line start: 487
// line end:   506
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


// address: 0x8009E630
// line start: 530
// line end:   549
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009E708
// line start: 561
// line end:   602
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009E860
// line start: 610
// line end:   639
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x8009E8FC
// line start: 645
// line end:   665
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x8009EA2C
// line start: 670
// line end:   684
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x8009EB30
// line start: 725
// line end:   787
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


// address: 0x8009ED3C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009ED3C(struct POLY_FT4 **Prim) {
}


// address: 0x8009EDB8
// line start: 82
// line end:   114
short PlayFMV__FPCc(char *str) {
	// register: 16
	register short RetVal;
	// register: 17
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009EE60
// line start: 119
// line end:   133
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


// address: 0x8009EEF0
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


// address: 0x8009F38C
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009F38C(struct CPad *this) {
}


// address: 0x8009F3B4
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8009F3B4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8009F3EC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8009F3EC(struct TextDat *this, int Creature) {
}


// address: 0x8009F464
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8009F464(struct TextDat *this) {
}


// address: 0x8009F478
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009F478(struct TextDat *this, int FrNum) {
}


// address: 0x8009F494
// line start: 34
// line end:   36
void LoadKanjiFont__Fv() {
}


// address: 0x8009F4D0
// line start: 40
// line end:   42
void LoadKanjiIndex__Fv() {
}


// address: 0x8009F50C
// line start: 49
// line end:   67
unsigned short *getb__FUs(unsigned short n) {
	// register: 3
	// size: 0x4
	register struct kindexS *ii;
	// register: 4
	register int i;
	// register: 16
	register int off;
}


// address: 0x8009F580
// line start: 78
// line end:   102
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


// address: 0x8009F65C
// line start: 110
// line end:   144
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


// address: 0x8009F7A8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009F7A8(struct POLY_FT4 **Prim) {
}


// address: 0x8002E850
// line start: 520
// line end:   523
unsigned char TrimCol__Fs_addr_8002E850(short col) {
}


// address: 0x8002E888
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


// address: 0x8002F3A4
// line start: 709
// line end:   710
void SetSpellTrans__Fc(char t) {
}


// address: 0x8002F3B0
// line start: 718
// line end:   735
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8002F448
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


// address: 0x8002F4C0
// line start: 757
// line end:   789
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8002F574
// line start: 815
// line end:   1099
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


// address: 0x800302FC
// line start: 1108
// line end:   1120
void SetSpell__Fi(int pnum) {
}


// address: 0x800303D0
// line start: 1131
// line end:   1134
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80030480
// line start: 1141
// line end:   1143
void ClearPanel__Fv() {
}


// address: 0x800304B0
// line start: 1196
// line end:   1197
void InitPanelStr__Fv() {
}


// address: 0x800304D0
// line start: 1283
// line end:   1430
void InitControlPan__Fv() {
	// register: 4
	register int i;
}


// address: 0x80030718
// line start: 1436
// line end:   1439
void DrawCtrlPan__Fv() {
}


// address: 0x80030744
// line start: 1519
// line end:   1531
void DoAutoMap__Fv() {
}


// address: 0x800307B8
// line start: 1538
// line end:   1629
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


// address: 0x8003107C
// line start: 1703
// line end:   1719
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


// address: 0x8003118C
// line start: 1741
// line end:   1769
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


// address: 0x800312A8
// line start: 1812
// line end:   1848
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


// address: 0x800314E4
// line start: 1854
// line end:   1974
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
										// size: 0x98
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


// address: 0x80031C60
// line start: 2027
// line end:   2125
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


// address: 0x800321AC
// line start: 2131
// line end:   2147
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80032254
// line start: 2170
// line end:   2206
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


// address: 0x800323BC
// line start: 2213
// line end:   2224
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x80032488
// line start: 2232
// line end:   2253
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


// address: 0x80032580
// line start: 2258
// line end:   2451
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


// address: 0x80033858
// line start: 2456
// line end:   2540
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


// address: 0x80033CFC
// line start: 2594
// line end:   2610
void DrawChrTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80033D9C
// line start: 2619
// line end:   2627
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80033E30
// line start: 2632
// line end:   2687
void CheckChrBtns__Fv() {
	// register: 5
	register int pc;
}


// address: 0x80034074
// line start: 2694
// line end:   2734
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x800340F8
// line start: 2742
// line end:   2756
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800341E0
// line start: 2762
// line end:   2769
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x80034278
// line start: 2776
// line end:   2788
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80034490
// line start: 2812
// line end:   2993
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


// address: 0x80034DF0
// line start: 3002
// line end:   3038
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 10
	register char st;
}


// address: 0x80035054
// line start: 3051
// line end:   3053
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80035088
// line start: 3559
// line end:   3559
void _GLOBAL__D_fontkern() {
}


// address: 0x800350B0
// line start: 3559
// line end:   3559
void _GLOBAL__I_fontkern() {
}


// address: 0x800350EC
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_800350EC(struct CPad *this) {
}


// address: 0x80035114
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80035114(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80035134
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_80035134(struct Dialog *this, int Type) {
}


// address: 0x8003513C
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8003513C(struct Dialog *this, int Type) {
}


// address: 0x80035144
// line start: 77
// line end:   77
void ___6Dialog_addr_80035144(struct Dialog *this, int __in_chrg) {
}


// address: 0x8003516C
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8003516C(struct Dialog *this) {
}


// address: 0x800351C8
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800351C8(struct TextDat *this, int PalNum) {
}


// address: 0x800351E4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800351E4(struct TextDat *this, int FrNum) {
}


// address: 0x80035200
// line start: 126
// line end:   132
void InitCursor__Fv() {
}


// address: 0x80035208
// line start: 137
// line end:   142
void FreeCursor__Fv() {
}


// address: 0x80035210
// line start: 148
// line end:   158
void SetICursor__Fi(int i) {
}


// address: 0x8003526C
// line start: 165
// line end:   173
void SetCursor__Fi(int i) {
}


// address: 0x800352D0
// line start: 179
// line end:   180
void NewCursor__Fi(int i) {
}


// address: 0x800352F0
// line start: 186
// line end:   201
void InitLevelCursor__Fv() {
}


// address: 0x80035350
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


// address: 0x800355A8
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


// address: 0x800357D0
// line start: 264
// line end:   756
void CheckCursMove__Fv() {
}


// address: 0x800357D8
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


// address: 0x800359D4
// line start: 98
// line end:   102
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x80035A1C
// line start: 284
// line end:   297
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035A6C
// line start: 304
// line end:   320
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80035AC8
// line start: 325
// line end:   342
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035B3C
// line start: 358
// line end:   396
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035C00
// line start: 401
// line end:   478
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035DE4
// line start: 484
// line end:   600
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035F54
// line start: 1034
// line end:   1114
unsigned char TryIconCurs__Fv() {
}


// address: 0x80036330
// line start: 2137
// line end:   2184
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036338
// line start: 2191
// line end:   2351
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800363E8
// line start: 2358
// line end:   2425
void LoadLvlGFX__Fv() {
}


// address: 0x80036484
// line start: 2433
// line end:   2445
void LoadAllGFX__Fv() {
}


// address: 0x800364A4
// line start: 2466
// line end:   2486
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x8003659C
// line start: 2495
// line end:   2549
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80036724
// line start: 2553
// line end:   2578
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


// address: 0x80036800
// line start: 2585
// line end:   2906
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


// address: 0x80037134
// line start: 2919
// line end:   2971
void game_logic__Fv() {
}


// address: 0x80037240
// line start: 2981
// line end:   3011
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x800372E8
// line start: 3019
// line end:   3074
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80037320
// line start: 3141
// line end:   3146
void alloc_plr__Fv() {
}


// address: 0x80037328
// line start: 3209
// line end:   3267
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80037330
// line start: 3274
// line end:   3276
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037350
// line start: 3281
// line end:   3283
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037370
// line start: 3286
// line end:   3287
void app_fatal(char *pszFile) {
}


// address: 0x800373A0
// line start: 3546
// line end:   3552
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800373C8
// line start: 3556
// line end:   3562
void DoMemCardFromInGame__Fv() {
}


// address: 0x800373F0
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037444
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037464
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x800374AC
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003760C
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


// address: 0x800376C4
// line start: 181
// line end:   190
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800377F0
// line start: 196
// line end:   206
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037924
// line start: 211
// line end:   220
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A54
// line start: 225
// line end:   234
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037B84
// line start: 239
// line end:   248
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CB4
// line start: 253
// line end:   263
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037DEC
// line start: 268
// line end:   277
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F1C
// line start: 283
// line end:   292
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003804C
// line start: 297
// line end:   306
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003817C
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


// address: 0x80038440
// line start: 344
// line end:   358
void InitTowners__Fv() {
}


// address: 0x800384CC
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


// address: 0x80038570
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


// address: 0x80038690
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


// address: 0x800386C4
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


// address: 0x800386F8
// line start: 435
// line end:   447
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800387E0
// line start: 453
// line end:   455
void TownHealer__Fv() {
}


// address: 0x80038808
// line start: 462
// line end:   465
void TownStory__Fv() {
}


// address: 0x80038830
// line start: 472
// line end:   475
void TownDrunk__Fv() {
}


// address: 0x80038858
// line start: 482
// line end:   485
void TownBoy__Fv() {
}


// address: 0x80038880
// line start: 493
// line end:   496
void TownWitch__Fv() {
}


// address: 0x800388A8
// line start: 503
// line end:   505
void TownBarMaid__Fv() {
}


// address: 0x800388D0
// line start: 512
// line end:   515
void TownCow__Fv() {
}


// address: 0x800388F8
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


// address: 0x80038B48
// size: 0x98
// line start: 579
// line end:   584
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038C1C
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x8010D70C
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80117528
	static int snLastCowSFX;
}


// address: 0x80038D38
// line start: 645
// line end:   652
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038D78
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


// address: 0x8003A1A0
// line start: 77
// line end:   88
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003A1A8
// line start: 96
// line end:   103
void stream_stop__Fv() {
}


// address: 0x8003A1F0
// line start: 116
// line end:   143
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003A2B4
// line start: 149
// line end:   165
void stream_update__Fv() {
}


// address: 0x8003A2BC
// line start: 171
// line end:   178
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003A2D8
// line start: 185
// line end:   216
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003A330
// line start: 222
// line end:   245
void FreeMonsterSnd__Fv() {
}


// address: 0x8003A338
// line start: 251
// line end:   271
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A43C
// line start: 278
// line end:   309
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A54C
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


// address: 0x8003A678
// line start: 370
// line end:   392
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A710
// line start: 407
// line end:   410
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A750
// line start: 418
// line end:   428
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A7A4
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


// address: 0x8003A83C
// line start: 457
// line end:   467
void sound_update__Fv() {
}


// address: 0x8003A870
// line start: 475
// line end:   506
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A8B4
// line start: 512
// line end:   525
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003A95C
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


// address: 0x8003AA00
// line start: 91
// line end:   94
void SetRndSeed__Fl(long s) {
}


// address: 0x8003AA10
// line start: 99
// line end:   104
long GetRndSeed__Fv() {
}


// address: 0x8003AA58
// line start: 110
// line end:   116
long random__Fil(int idx, long v) {
}


// address: 0x8003AAC4
// line start: 368
// line end:   418
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003AB10
// line start: 429
// line end:   475
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003AB60
// line start: 487
// line end:   497
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003AB68
// line start: 565
// line end:   580
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003ABF8
// line start: 1104
// line end:   1104
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003AC00
// line start: 154
// line end:   165
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003AC94
// line start: 171
// line end:   174
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003ACC0
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


// address: 0x8003ADCC
// line start: 297
// line end:   306
void interface_msg_pump__Fv() {
}


// address: 0x8003ADD4
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


// address: 0x8003B2C0
// line start: 969
// line end:   971
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003B2F8
// line start: 508
// line end:   519
void InitItemGFX__Fv() {
}


// address: 0x8003B324
// line start: 525
// line end:   532
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003B3EC
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


// address: 0x8003B604
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


// address: 0x8003B7C8
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


// address: 0x8003C278
// line start: 895
// line end:   925
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003C5F8
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


// address: 0x8003C694
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


// address: 0x8003C7F4
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003C840
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


// address: 0x8003C920
// line start: 1023
// line end:   1046
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003CBB4
// line start: 1051
// line end:   1061
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003CC78
// line start: 1067
// line end:   1098
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003CD90
// line start: 1104
// line end:   1105
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CDBC
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


// address: 0x8003CF38
// line start: 1133
// line end:   1134
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003CF40
// line start: 1140
// line end:   1145
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CF70
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003D3AC
// line start: 1269
// line end:   1298
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003D684
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


// address: 0x8003D8B0
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


// address: 0x8003DA18
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


// address: 0x8003DAE0
// line start: 1408
// line end:   1414
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003DB98
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


// address: 0x8003DE00
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


// address: 0x8003DFF0
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


// address: 0x8003E2A4
// line start: 1650
// line end:   1740
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003E7F0
// line start: 1749
// line end:   1750
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003E828
// line start: 1757
// line end:   1760
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003E89C
// line start: 1767
// line end:   2048
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8003FFC8
// line start: 2056
// line end:   2154
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


// address: 0x80040430
// line start: 2161
// line end:   2191
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x8004052C
// line start: 2197
// line end:   2224
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80040640
// line start: 2233
// line end:   2269
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x80040884
// line start: 2277
// line end:   2308
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


// address: 0x80040AC4
// line start: 2316
// line end:   2339
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80040C38
// line start: 2347
// line end:   2362
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


// address: 0x80040D38
// line start: 2369
// line end:   2403
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


// address: 0x80040EE8
// line start: 2410
// line end:   2432
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80041190
// line start: 2439
// line end:   2452
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x8004129C
// line start: 2462
// line end:   2466
void ItemRndDur__Fi(int ii) {
}


// address: 0x8004132C
// line start: 2473
// line end:   2511
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80041638
// line start: 2519
// line end:   2562
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x80041880
// line start: 2570
// line end:   2584
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x800419B0
// line start: 2594
// line end:   2609
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041AF8
// line start: 2621
// line end:   2631
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x80041BD0
// line start: 2635
// line end:   2645
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x80041C90
// line start: 2654
// line end:   2669
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041DD4
// line start: 2681
// line end:   2705
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80041FC0
// line start: 2712
// line end:   2747
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


// address: 0x800421EC
// line start: 2754
// line end:   2779
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


// address: 0x800423AC
// line start: 2787
// line end:   2819
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x80042570
// line start: 2826
// line end:   2830
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x800425C4
// line start: 2840
// line end:   2855
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x8004268C
// line start: 2861
// line end:   2900
void ProcessItems__Fv() {
	// register: 6
	register int i;
	// register: 5
	register int ii;
}


// address: 0x800427D0
// line start: 2907
// line end:   2912
void FreeItemGFX__Fv() {
}


// address: 0x800427D8
// line start: 2931
// line end:   2955
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


// address: 0x80042968
// line start: 2961
// line end:   2971
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80042A58
// line start: 2976
// line end:   3000
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80042B28
// line start: 3004
// line end:   3017
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80042BEC
// line start: 3022
// line end:   3035
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80042C5C
// line start: 3039
// line end:   3057
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


// address: 0x80042D5C
// line start: 3162
// line end:   3286
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80042E50
// line start: 3292
// line end:   3504
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80043504
// line start: 3548
// line end:   3576
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x8004350C
// line start: 3589
// line end:   3627
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043798
// line start: 3634
// line end:   3679
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043B08
// line start: 3685
// line end:   3725
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043E18
// line start: 3731
// line end:   3733
void CastScroll__Fi(int pnum) {
}


// address: 0x80043E20
// line start: 3740
// line end:   3930
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80044434
// line start: 3939
// line end:   3944
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x800444C8
// line start: 3963
// line end:   3978
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80044544
// line start: 3984
// line end:   4003
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x8004464C
// line start: 4011
// line end:   4036
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct holditem;
}


// address: 0x8004486C
// line start: 4045
// line end:   4064
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x80044AB0
// line start: 4077
// line end:   4092
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80044C00
// line start: 4123
// line end:   4127
void SpawnStoreGold__Fv() {
}


// address: 0x80044C84
// line start: 4176
// line end:   4187
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80044E24
// line start: 4199
// line end:   4207
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80044E88
// line start: 4226
// line end:   4248
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80045018
// line start: 4256
// line end:   4277
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045194
// line start: 4285
// line end:   4306
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045310
// line start: 4445
// line end:   4486
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x80045484
// line start: 4640
// line end:   4738
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x8004561C
// line start: 319
// line end:   334
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x80045684
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


// address: 0x800456F8
// line start: 404
// line end:   411
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x80045764
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


// address: 0x80046414
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


// address: 0x80046658
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


// address: 0x8004671C
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


// address: 0x80046C2C
// line start: 957
// line end:   958
void FreeLightTable__Fv() {
}


// address: 0x80046C34
// line start: 964
// line end:   965
void InitLightTable__Fv() {
}


// address: 0x80046C3C
// line start: 970
// line end:   971
void MakeLightTable__Fv() {
}


// address: 0x80046C44
// line start: 1062
// line end:   1065
void InitLightMax__Fv() {
}


// address: 0x80046C68
// line start: 1072
// line end:   1083
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80046CAC
// line start: 1089
// line end:   1105
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x80046D40
// line start: 1110
// line end:   1116
void AddUnLight__Fi(int i) {
}


// address: 0x80046D70
// line start: 1121
// line end:   1131
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80046D9C
// line start: 1136
// line end:   1147
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80046DD4
// line start: 1150
// line end:   1156
void light_fix__Fi(int i) {
}


// address: 0x80046DDC
// line start: 1166
// line end:   1178
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80046E14
// line start: 1183
// line end:   1195
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x80046E58
// line start: 1198
// line end:   1199
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x80046E88
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


// address: 0x80046FB4
// line start: 1271
// line end:   1298
void SavePreLighting__Fv() {
}


// address: 0x80046FBC
// line start: 1303
// line end:   1310
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x8004700C
// line start: 1317
// line end:   1333
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80047110
// line start: 1356
// line end:   1369
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x800471C4
// line start: 1374
// line end:   1388
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x8004727C
// line start: 1417
// line end:   1446
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x800474DC
// line start: 108
// line end:   111
void FreeQuestText__Fv() {
}


// address: 0x800474E4
// line start: 115
// line end:   119
void InitQuestText__Fv() {
}


// address: 0x800474F0
// line start: 127
// line end:   164
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


// address: 0x80047630
// line start: 173
// line end:   210
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x80047730
// line start: 215
// line end:   221
void DrawQTextBack__Fv() {
}


// address: 0x800477A0
// line start: 229
// line end:   237
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8004782C
// line start: 244
// line end:   257
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800478B8
// line start: 271
// line end:   379
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


// address: 0x80047BF0
// line start: 382
// line end:   382
void _GLOBAL__D_QBack() {
}


// address: 0x80047C18
// line start: 382
// line end:   382
void _GLOBAL__I_QBack() {
}


// address: 0x80047C40
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80047C40(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80047C60
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80047C60(struct Dialog *this, int Type) {
}


// address: 0x80047C68
// line start: 77
// line end:   77
void ___6Dialog_addr_80047C68(struct Dialog *this, int __in_chrg) {
}


// address: 0x80047C90
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80047C90(struct Dialog *this) {
}


// address: 0x80047CEC
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_80047CEC(struct CFont *this, char ch) {
}


// address: 0x80047D44
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047D44(struct TextDat *this, int FrNum) {
}


// address: 0x80047D60
// line start: 33
// line end:   35
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80047D68
// line start: 806
// line end:   808
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80047D70
// line start: 171
// line end:   176
void delta_init__Fv() {
}


// address: 0x80047DD0
// line start: 183
// line end:   204
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047E6C
// line start: 211
// line end:   227
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047EF0
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


// address: 0x80047F80
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


// address: 0x800482AC
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


// address: 0x8004830C
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


// address: 0x800484D0
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


// address: 0x80048658
// line start: 553
// line end:   556
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x8004867C
// line start: 562
// line end:   565
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x800486A0
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


// address: 0x800488B4
// line start: 640
// line end:   647
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x800488E4
// line start: 653
// line end:   660
int DeltaImportData__FPc(char *Src) {
}


// address: 0x80048918
// line start: 665
// line end:   680
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80048A14
// line start: 755
// line end:   759
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x80048A3C
// line start: 765
// line end:   779
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x80048A88
// line start: 785
// line end:   795
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x80048AB8
// line start: 801
// line end:   810
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80048AF0
// line start: 816
// line end:   826
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80048B30
// line start: 832
// line end:   843
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x80048B78
// line start: 849
// line end:   854
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x80048BA4
// line start: 860
// line end:   866
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80048BD4
// line start: 871
// line end:   878
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80048C0C
// line start: 883
// line end:   891
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80048C80
// line start: 896
// line end:   942
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048DB4
// line start: 948
// line end:   963
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048E30
// line start: 979
// line end:   998
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048E88
// line start: 1005
// line end:   1012
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048EF0
// line start: 1017
// line end:   1060
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048FF8
// line start: 1066
// line end:   1077
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x8004909C
// line start: 1083
// line end:   1088
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x800490CC
// line start: 1094
// line end:   1136
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x800491E0
// line start: 1141
// line end:   1157
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x800491E8
// line start: 1163
// line end:   1171
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x8004921C
// line start: 1186
// line end:   1197
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80049278
// line start: 1203
// line end:   1206
void delta_close_portal__Fi(int pnum) {
}


// address: 0x800492B8
// line start: 1212
// line end:   1221
void check_update_plr__Fi(int pnum) {
}


// address: 0x800492C0
// line start: 1232
// line end:   1239
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049364
// line start: 1248
// line end:   1262
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049394
// line start: 1267
// line end:   1276
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800493C4
// line start: 1280
// line end:   1293
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800493F4
// line start: 1299
// line end:   1312
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049424
// line start: 1318
// line end:   1324
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049498
// line start: 1333
// line end:   1339
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004953C
// line start: 1346
// line end:   1379
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x8004967C
// line start: 1389
// line end:   1426
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


// address: 0x8004984C
// line start: 1435
// line end:   1441
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x800498F0
// line start: 1448
// line end:   1482
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049A24
// line start: 1491
// line end:   1534
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


// address: 0x80049BEC
// line start: 1542
// line end:   1555
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049C88
// line start: 1562
// line end:   1593
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


// address: 0x80049E38
// line start: 1602
// line end:   1628
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 3
			register int ii;
		}
	}
}


// address: 0x80049F74
// line start: 1637
// line end:   1647
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
}


// address: 0x8004A08C
// line start: 1654
// line end:   1662
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A138
// line start: 1669
// line end:   1685
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A240
// line start: 1693
// line end:   1708
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A338
// line start: 1715
// line end:   1730
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A434
// line start: 1737
// line end:   1748
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004A55C
// line start: 1755
// line end:   1766
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004A684
// line start: 1774
// line end:   1780
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A6EC
// line start: 1787
// line end:   1799
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


// address: 0x8004A840
// line start: 1806
// line end:   1820
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A928
// line start: 1827
// line end:   1838
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AA08
// line start: 1846
// line end:   1856
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AAEC
// line start: 1863
// line end:   1874
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ABD0
// line start: 1881
// line end:   1887
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AC5C
// line start: 1894
// line end:   1898
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AC94
// line start: 1904
// line end:   1908
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AD04
// line start: 1915
// line end:   1922
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ADA8
// line start: 1930
// line end:   1934
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ADE0
// line start: 1941
// line end:   1950
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AEC4
// line start: 1958
// line end:   1964
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AF30
// line start: 1971
// line end:   1977
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AF9C
// line start: 1984
// line end:   2004
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


// address: 0x8004B10C
// line start: 2013
// line end:   2033
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B210
// line start: 2043
// line end:   2050
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B258
// line start: 2057
// line end:   2104
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B414
// line start: 2113
// line end:   2119
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4AC
// line start: 2126
// line end:   2132
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B544
// line start: 2139
// line end:   2145
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5DC
// line start: 2152
// line end:   2158
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B670
// line start: 2164
// line end:   2169
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B704
// line start: 2175
// line end:   2182
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B70C
// line start: 2188
// line end:   2191
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B714
// line start: 2196
// line end:   2202
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B71C
// line start: 2207
// line end:   2212
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B774
// line start: 2218
// line end:   2266
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BA08
// line start: 2274
// line end:   2306
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


// address: 0x8004BB98
// line start: 2312
// line end:   2317
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BBE8
// line start: 2323
// line end:   2330
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BC30
// line start: 2336
// line end:   2344
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BC70
// line start: 2349
// line end:   2357
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BCB0
// line start: 2363
// line end:   2371
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BCF0
// line start: 2377
// line end:   2386
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BD30
// line start: 2391
// line end:   2398
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BD78
// line start: 2405
// line end:   2417
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


// address: 0x8004BE94
// line start: 2457
// line end:   2559
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80118364
	static unsigned char sbLastCmd;
}


// address: 0x8004C2B4
// size: 0xF1C
// line start: 2568
// line end:   2576
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004C344
// line start: 2580
// line end:   2582
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x8004C37C
// line start: 165
// line end:   169
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004C3A8
// line start: 554
// line end:   559
int InitLevelType__Fi(int l) {
}


// address: 0x8004C3F4
// line start: 565
// line end:   603
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004C584
// line start: 682
// line end:   688
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004C5F8
// line start: 703
// line end:   811
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


// address: 0x8004C820
// line start: 256
// line end:   270
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C958
// line start: 277
// line end:   295
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004CAA4
// line start: 302
// line end:   310
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004CB2C
// line start: 317
// line end:   319
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004CB6C
// line start: 346
// line end:   357
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004CC10
// line start: 365
// line end:   388
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004CCC4
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


// address: 0x8004CEE0
// line start: 556
// line end:   560
void FreeObjectGFX__Fv() {
}


// address: 0x8004CEEC
// line start: 564
// line end:   575
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004CFA4
// line start: 583
// line end:   617
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004D228
// line start: 624
// line end:   630
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004D288
// line start: 637
// line end:   639
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004D2B0
// line start: 663
// line end:   700
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004D3BC
// line start: 708
// line end:   745
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004D4C8
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


// address: 0x8004D6D8
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


// address: 0x8004D9FC
// line start: 837
// line end:   842
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004DA60
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


// address: 0x8004DD3C
// line start: 940
// line end:   948
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004DDAC
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


// address: 0x8004DF40
// line start: 990
// line end:   992
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004DF8C
// line start: 999
// line end:   1010
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004E09C
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


// address: 0x8004E36C
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


// address: 0x8004E6BC
// line start: 1127
// line end:   1153
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004E94C
// line start: 1162
// line end:   1244
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004EBEC
// line start: 1252
// line end:   1253
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004EC24
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


// address: 0x8004ECF8
// line start: 1312
// line end:   1336
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004ED00
// line start: 1342
// line end:   1371
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004ED08
// line start: 1377
// line end:   1398
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004EF88
// line start: 1405
// line end:   1412
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004F02C
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


// address: 0x8004F3D0
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


// address: 0x8004F7A8
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


// address: 0x8004FB40
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


// address: 0x8004FED8
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


// address: 0x800501E0
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


// address: 0x800504E8
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


// address: 0x800509E4
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


// address: 0x80050B1C
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


// address: 0x80050C30
// line start: 1812
// line end:   1827
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050DE8
// line start: 1836
// line end:   1846
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80050E94
// line start: 1854
// line end:   1868
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80051004
// line start: 1875
// line end:   1882
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80051160
// line start: 1889
// line end:   1914
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


// address: 0x8005134C
// line start: 1920
// line end:   1978
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


// address: 0x80051840
// line start: 1984
// line end:   2029
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x80051BE8
// line start: 2035
// line end:   2059
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x80051DC0
// line start: 2065
// line end:   2106
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x80052190
// line start: 2112
// line end:   2138
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80052354
// line start: 2144
// line end:   2167
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x800524EC
// line start: 2173
// line end:   2199
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052740
// line start: 2205
// line end:   2228
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x80052910
// line start: 2236
// line end:   2252
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052AC8
// line start: 2258
// line end:   2265
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052C24
// line start: 2272
// line end:   2279
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052D80
// line start: 2285
// line end:   2319
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


// address: 0x80052E88
// line start: 2327
// line end:   2361
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


// address: 0x80053140
// line start: 2370
// line end:   2396
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


// address: 0x80053304
// line start: 2402
// line end:   2405
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80053374
// line start: 2412
// line end:   2965
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


// address: 0x80055950
// line start: 2971
// line end:   2982
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055ACC
// line start: 2988
// line end:   3009
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055C9C
// line start: 3015
// line end:   3023
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055D84
// line start: 3029
// line end:   3057
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80055EF4
// line start: 3069
// line end:   3091
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80055FE4
// line start: 3098
// line end:   3104
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x8005608C
// line start: 3111
// line end:   3118
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80056140
// line start: 3125
// line end:   3217
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


// address: 0x800566EC
// line start: 3224
// line end:   3264
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x80056898
// line start: 3270
// line end:   3280
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80056988
// line start: 3286
// line end:   3299
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80056A68
// line start: 3305
// line end:   3422
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80056EA0
// line start: 3430
// line end:   3440
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056FB4
// line start: 3446
// line end:   3456
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x800570C8
// line start: 3462
// line end:   3472
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x800571DC
// line start: 3478
// line end:   3561
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x800573BC
// line start: 3569
// line end:   3595
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


// address: 0x800575AC
// line start: 3603
// line end:   3664
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80057B00
// line start: 3670
// line end:   3691
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057C60
// line start: 3699
// line end:   3705
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80057CBC
// line start: 3713
// line end:   3737
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80057DD4
// line start: 3743
// line end:   3759
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


// address: 0x80057F0C
// line start: 3766
// line end:   3769
void SyncLever__Fi(int i) {
}


// address: 0x80057F88
// line start: 3777
// line end:   3787
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x80058080
// line start: 3796
// line end:   3811
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


// address: 0x800581DC
// line start: 3819
// line end:   3843
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058344
// line start: 3851
// line end:   3874
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058470
// line start: 3882
// line end:   3921
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x800585B0
// line start: 3929
// line end:   4070
void GetObjectStr__Fi(int i) {
}


// address: 0x800589CC
// line start: 4075
// line end:   4230
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


// address: 0x80058C20
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058C20(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058C58
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058C58(struct TextDat *this, int Creature) {
}


// address: 0x80058CD0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058CD0(struct TextDat *this) {
}


// address: 0x80058CE4
// line start: 25
// line end:   26
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80058CEC
// line start: 381
// line end:   386
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058D18
// line start: 392
// line end:   405
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x80058DCC
// line start: 450
// line end:   499
void SetupLocalPlayer__Fv() {
}


// address: 0x80058DEC
// line start: 270
// line end:   271
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E30
// line start: 275
// line end:   276
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E44
// line start: 412
// line end:   418
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E64
// line start: 528
// line end:   547
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E6C
// line start: 554
// line end:   565
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058E88
// line start: 574
// line end:   585
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058EAC
// line start: 591
// line end:   672
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x800590E8
// line start: 719
// line end:   836
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80059504
// line start: 843
// line end:   849
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x8005956C
// line start: 855
// line end:   891
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x800596DC
// line start: 898
// line end:   961
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


// address: 0x800598E8
// line start: 967
// line end:   974
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


// address: 0x8005996C
// line start: 983
// line end:   1153
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


// address: 0x80059D38
// line start: 1163
// line end:   1167
void InitMultiView__Fv() {
}


// address: 0x80059D94
// line start: 1269
// line end:   1289
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFD0
	// size: 0x30
	auto struct bbssbb bodge[6];
	{
		// register: 4
		register int i;
	}
}


// address: 0x80059E2C
// line start: 1293
// line end:   1298
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059EB4
// line start: 1352
// line end:   1361
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059F48
// line start: 1368
// line end:   1381
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005A03C
// line start: 1387
// line end:   1391
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A050
// line start: 1426
// line end:   1445
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A0DC
// line start: 1450
// line end:   1469
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A140
// line start: 1477
// line end:   1535
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800CB234
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A17C
// line start: 1543
// line end:   1565
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A1A8
// line start: 1662
// line end:   1694
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x8005A2E0
// line start: 1720
// line end:   1735
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A378
// line start: 1741
// line end:   1782
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A514
// line start: 1815
// line end:   1831
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


// address: 0x8005A634
// line start: 1838
// line end:   1871
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A754
// line start: 1878
// line end:   1907
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A8F0
// line start: 1913
// line end:   1950
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


// address: 0x8005AAB8
// line start: 1956
// line end:   2066
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
	// address: 0xFFFFFF48
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


// address: 0x8005AE3C
// line start: 2071
// line end:   2237
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B284
// line start: 2244
// line end:   2266
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005B3C8
// line start: 2272
// line end:   2274
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B3E8
// line start: 2280
// line end:   2305
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


// address: 0x8005B6D0
// line start: 2311
// line end:   2331
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B78C
// line start: 2338
// line end:   2392
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B8D0
// line start: 2397
// line end:   2415
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B960
// line start: 2423
// line end:   2439
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005BA1C
// line start: 2447
// line end:   2448
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BA24
// line start: 2476
// line end:   2493
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005BAAC
// line start: 2497
// line end:   2614
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BE18
// line start: 2621
// line end:   2670
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BFB8
// line start: 2677
// line end:   2791
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


// address: 0x8005C5E8
// line start: 2798
// line end:   2861
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


// address: 0x8005C998
// line start: 2868
// line end:   2875
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005CA28
// line start: 2883
// line end:   2954
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


// address: 0x8005CDB4
// line start: 2962
// line end:   2983
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CEB4
// line start: 2991
// line end:   3016
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CF74
// line start: 3022
// line end:   3034
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D014
// line start: 3038
// line end:   3202
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


// address: 0x8005DFD8
// line start: 3209
// line end:   3270
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E348
// line start: 3276
// line end:   3301
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


// address: 0x8005E444
// line start: 3306
// line end:   3322
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E4C0
// line start: 3329
// line end:   3354
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E600
// line start: 3361
// line end:   3362
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E608
// line start: 3369
// line end:   3672
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005EA20
// line start: 3684
// line end:   3692
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005EA88
// line start: 3699
// line end:   3737
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


// address: 0x8005EF64
// line start: 3784
// line end:   3801
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F000
// line start: 3810
// line end:   3931
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


// address: 0x8005F334
// line start: 3937
// line end:   3940
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F35C
// line start: 3948
// line end:   3973
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


// address: 0x8005F504
// line start: 3980
// line end:   4032
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F50C
// line start: 4038
// line end:   4129
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


// address: 0x8005F914
// line start: 4196
// line end:   4220
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005FA50
// line start: 4224
// line end:   4229
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FA80
// line start: 4246
// line end:   4280
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FC1C
// line start: 4287
// line end:   4299
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FD38
// line start: 4307
// line end:   4324
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FE24
// line start: 4332
// line end:   4342
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FF08
// line start: 4350
// line end:   4364
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FFE4
// line start: 4372
// line end:   4377
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x80060028
// line start: 4384
// line end:   4393
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060104
// line start: 4400
// line end:   4409
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060174
// line start: 4416
// line end:   4425
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060250
// line start: 4432
// line end:   4441
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800602BC
// line start: 4448
// line end:   4451
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800602C4
// line start: 4458
// line end:   4525
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800605F4
// line start: 4528
// line end:   4528
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006061C
// line start: 4529
// line end:   4529
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80060660
// line start: 4530
// line end:   4530
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060694
// line start: 4531
// line end:   4531
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800606C8
// line start: 4532
// line end:   4532
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800606FC
// line start: 4533
// line end:   4533
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80060730
// line start: 4534
// line end:   4534
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060764
// line start: 4535
// line end:   4535
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x8006079C
// line start: 4536
// line end:   4536
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800607D0
// line start: 4537
// line end:   4537
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800607F8
// line start: 4538
// line end:   4538
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060820
// line start: 4539
// line end:   4539
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060848
// line start: 4540
// line end:   4540
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80060890
// line start: 4541
// line end:   4541
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800608B8
// line start: 4542
// line end:   4542
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800608E0
// line start: 4543
// line end:   4543
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060914
// line start: 4544
// line end:   4544
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006093C
// line start: 4545
// line end:   4545
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060964
// line start: 4546
// line end:   4546
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x800609A8
// line start: 4547
// line end:   4547
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x800609DC
// line start: 4548
// line end:   4548
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060A10
// line start: 4550
// line end:   4550
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80060A5C
// line start: 4551
// line end:   4551
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80060AA8
// line start: 4552
// line end:   4552
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060AF4
// line start: 4553
// line end:   4553
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80060B48
// line start: 4554
// line end:   4554
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060B94
// line start: 4555
// line end:   4555
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80060BE0
// line start: 4556
// line end:   4556
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80060C30
// line start: 4557
// line end:   4557
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060C7C
// line start: 4558
// line end:   4558
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060CC8
// line start: 4559
// line end:   4559
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060D14
// line start: 4560
// line end:   4560
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060D60
// line start: 4561
// line end:   4561
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060DAC
// line start: 4562
// line end:   4562
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060DF8
// line start: 4563
// line end:   4563
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060E48
// line start: 4564
// line end:   4564
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060E94
// line start: 4566
// line end:   4566
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060EE4
// line start: 4568
// line end:   4568
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060F30
// line start: 4569
// line end:   4569
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060F7C
// line start: 4570
// line end:   4570
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060FC8
// line start: 4571
// line end:   4571
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80061014
// line start: 4572
// line end:   4572
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80061060
// line start: 4573
// line end:   4573
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x800610AC
// line start: 4574
// line end:   4574
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x800610F8
// line start: 4575
// line end:   4575
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80061144
// line start: 4576
// line end:   4576
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80061190
// line start: 4577
// line end:   4577
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x800611DC
// line start: 4578
// line end:   4578
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80061228
// line start: 4586
// line end:   4587
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x8006125C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8006125C(struct POLY_FT4 **Prim) {
}


// address: 0x800612D8
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80061328
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80061334
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80061340
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x8006134C
// line start: 159
// line end:   219
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


// address: 0x8006159C
// line start: 225
// line end:   290
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x80061A58
// line start: 294
// line end:   321
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


// address: 0x80061BFC
// line start: 326
// line end:   332
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061C90
// line start: 338
// line end:   436
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


// address: 0x80062270
// line start: 470
// line end:   495
void SetReturnLvlPos__Fv() {
}


// address: 0x80062380
// line start: 503
// line end:   508
void GetReturnLvlPos__Fv() {
}


// address: 0x800623D4
// line start: 515
// line end:   537
void ResyncMPQuests__Fv() {
}


// address: 0x80062510
// line start: 547
// line end:   636
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80062A70
// line start: 652
// line end:   693
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


// address: 0x80062C9C
// line start: 702
// line end:   730
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062ED4
// line start: 735
// line end:   753
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062F54
// line start: 761
// line end:   781
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80063064
// line start: 788
// line end:   796
void QuestlogUp__Fv() {
}


// address: 0x800630BC
// line start: 804
// line end:   811
void QuestlogDown__Fv() {
}


// address: 0x80063124
// line start: 819
// line end:   836
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x800631E0
// line start: 844
// line end:   849
void QuestlogESC__Fv() {
}


// address: 0x80063220
// line start: 856
// line end:   876
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x800632A0
// line start: 923
// line end:   923
void _GLOBAL__D_questlog() {
}


// address: 0x800632C8
// line start: 923
// line end:   923
void _GLOBAL__I_questlog() {
}


// address: 0x800632F0
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x800632FC
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_800632FC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006331C
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8006331C(struct Dialog *this, int Type) {
}


// address: 0x80063324
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80063324(struct Dialog *this, int Type) {
}


// address: 0x8006332C
// line start: 77
// line end:   77
void ___6Dialog_addr_8006332C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80063354
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80063354(struct Dialog *this) {
}


// address: 0x800633B0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800633B0(struct TextDat *this, int PalNum) {
}


// address: 0x800633CC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800633CC(struct TextDat *this, int FrNum) {
}


// address: 0x800633E8
// line start: 85
// line end:   304
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006358C
// line start: 315
// line end:   373
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x80063684
// line start: 150
// line end:   151
void FreeStoreMem__Fv() {
}


// address: 0x8006368C
// line start: 159
// line end:   162
void DrawSTextBack__Fv() {
}


// address: 0x800636FC
// line start: 167
// line end:   234
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
	// address: 0x80117728
	static unsigned char DaveFix;
}


// address: 0x80063A8C
// line start: 241
// line end:   248
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063B20
// line start: 255
// line end:   268
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063BB8
// line start: 274
// line end:   278
void AddSLine__Fi(int y) {
}


// address: 0x80063C08
// line start: 284
// line end:   285
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063C30
// line start: 294
// line end:   303
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063CE4
// line start: 308
// line end:   383
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x80064128
// line start: 391
// line end:   449
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


// address: 0x80064748
// line start: 456
// line end:   470
void S_StartSmith__Fv() {
}


// address: 0x800648D0
// line start: 476
// line end:   503
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064A88
// line start: 509
// line end:   527
void S_StartSBuy__Fv() {
}


// address: 0x80064BB8
// line start: 533
// line end:   592
void S_ScrollSPBuy__Fi(int idx) {
	// register: 18
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80064D8C
// line start: 598
// line end:   628
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064EDC
// line start: 634
// line end:   645
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064FC0
// line start: 651
// line end:   687
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


// address: 0x800651C0
// line start: 693
// line end:   739
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800655EC
// line start: 747
// line end:   755
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80065690
// line start: 760
// line end:   781
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065870
// line start: 786
// line end:   844
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065D3C
// line start: 853
// line end:   865
void S_StartWitch__Fv() {
}


// address: 0x80065E7C
// line start: 871
// line end:   900
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80066034
// line start: 906
// line end:   926
void S_StartWBuy__Fv() {
}


// address: 0x8006615C
// line start: 932
// line end:   952
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80066280
// line start: 958
// line end:   1018
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800668D4
// line start: 1027
// line end:   1033
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x8006695C
// line start: 1039
// line end:   1048
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066ADC
// line start: 1054
// line end:   1095
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066EF8
// line start: 1104
// line end:   1110
void S_StartNoMoney__Fv() {
}


// address: 0x80066F60
// line start: 1116
// line end:   1121
void S_StartNoRoom__Fv() {
}


// address: 0x80066FC0
// line start: 1127
// line end:   1184
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80067300
// line start: 1190
// line end:   1208
void S_StartBoy__Fv() {
}


// address: 0x80067490
// line start: 1215
// line end:   1239
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x800675EC
// line start: 1247
// line end:   1267
void S_StartHealer__Fv() {
}


// address: 0x800677C0
// line start: 1273
// line end:   1295
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x8006792C
// line start: 1301
// line end:   1318
void S_StartHBuy__Fv() {
}


// address: 0x80067A4C
// line start: 1324
// line end:   1333
void S_StartStory__Fv() {
}


// address: 0x80067B3C
// line start: 1339
// line end:   1343
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067B70
// line start: 1351
// line end:   1356
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067C44
// line start: 1362
// line end:   1433
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x800686A0
// line start: 1442
// line end:   1459
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x8006883C
// line start: 1465
// line end:   1499
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


// address: 0x80068A6C
// line start: 1506
// line end:   1516
void S_StartTavern__Fv() {
}


// address: 0x80068B64
// line start: 1522
// line end:   1531
void S_StartBarMaid__Fv() {
}


// address: 0x80068C38
// line start: 1537
// line end:   1546
void S_StartDrunk__Fv() {
}


// address: 0x80068D0C
// line start: 1552
// line end:   1624
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068FF4
// line start: 1631
// line end:   1635
void DrawSText__Fv() {
}


// address: 0x80069034
// line start: 1640
// line end:   1654
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800690FC
// line start: 1658
// line end:   1711
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x800692A8
// line start: 1719
// line end:   1783
void STextESC__Fv() {
}


// address: 0x80069434
// line start: 1788
// line end:   1822
void STextUp__Fv() {
}


// address: 0x800695BC
// line start: 1832
// line end:   1864
void STextDown__Fv() {
}


// address: 0x80069754
// line start: 1876
// line end:   1898
void S_SmithEnter__Fv() {
}


// address: 0x80069828
// line start: 1905
// line end:   1916
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800698A4
// line start: 1924
// line end:   1934
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069920
// line start: 1942
// line end:   2033
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069D6C
// line start: 2042
// line end:   2065
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069F54
// line start: 2071
// line end:   2101
void S_SBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A130
// line start: 2109
// line end:   2134
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A2B0
// line start: 2141
// line end:   2179
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


// address: 0x8006A4D4
// line start: 2186
// line end:   2216
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
// line start: 2225
// line end:   2249
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
// line start: 2255
// line end:   2310
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006ACDC
// line start: 2317
// line end:   2333
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006ADD4
// line start: 2340
// line end:   2357
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B038
// line start: 2363
// line end:   2381
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B188
// line start: 2388
// line end:   2405
void S_WitchEnter__Fv() {
}


// address: 0x8006B238
// line start: 2412
// line end:   2444
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B430
// line start: 2449
// line end:   2479
void S_WBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B60C
// line start: 2487
// line end:   2503
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006B704
// line start: 2510
// line end:   2524
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B870
// line start: 2530
// line end:   2548
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B9C0
// line start: 2555
// line end:   2583
void S_BoyEnter__Fv() {
}


// address: 0x8006BAF8
// line start: 2590
// line end:   2601
void BoyBuyItem__Fv() {
}


// address: 0x8006BB7C
// line start: 2607
// line end:   2652
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BE0C
// line start: 2657
// line end:   2692
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BFE4
// line start: 2698
// line end:   2720
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C328
// line start: 2727
// line end:   2762
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C444
// line start: 2767
// line end:   2785
void S_HealerEnter__Fv() {
}


// address: 0x8006C4DC
// line start: 2792
// line end:   2822
void S_HBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C6D8
// line start: 2830
// line end:   2843
void S_StoryEnter__Fv() {
}


// address: 0x8006C770
// line start: 2850
// line end:   2868
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C8E0
// line start: 2875
// line end:   2917
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


// address: 0x8006CAD8
// line start: 2926
// line end:   2937
void S_TavernEnter__Fv() {
}


// address: 0x8006CB48
// line start: 2944
// line end:   2956
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CBB8
// line start: 2963
// line end:   2974
void S_DrunkEnter__Fv() {
}


// address: 0x8006CC28
// line start: 2981
// line end:   3043
void STextEnter__Fv() {
}


// address: 0x8006CE28
// line start: 3048
// line end:   3130
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CF2C
// line start: 3135
// line end:   3137
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CF40
// line start: 3216
// line end:   3216
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CF68
// line start: 3216
// line end:   3216
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006CF90
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8006CF90(struct CPad *this) {
}


// address: 0x8006CFB8
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8006CFB8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006CFD8
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8006CFD8(struct Dialog *this, int Type) {
}


// address: 0x8006CFE0
// line start: 77
// line end:   77
void ___6Dialog_addr_8006CFE0(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006D008
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8006D008(struct Dialog *this) {
}


// address: 0x8006D064
// line start: 129
// line end:   202
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006D1D8
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


// address: 0x8006D3D0
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


// address: 0x8006D4C0
// line start: 326
// line end:   404
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


// address: 0x8006D8BC
// line start: 413
// line end:   466
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


// address: 0x8006DA24
// line start: 528
// line end:   560
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


// address: 0x8006DB08
// line start: 572
// line end:   599
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


// address: 0x8006DBA0
// line start: 76
// line end:   117
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006DEB8
// line start: 122
// line end:   150
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006E168
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


// address: 0x8006E5C8
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


// address: 0x8006EA44
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


// address: 0x8006EF50
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


// address: 0x8006F010
// line start: 349
// line end:   360
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006F104
// line start: 367
// line end:   378
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006F1F8
// line start: 385
// line end:   396
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006F2EC
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


// address: 0x8006F608
// line start: 476
// line end:   497
void FadeGameOut__Fv() {
}


// address: 0x8006F6A4
// line start: 502
// line end:   509
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x8006F708
// line start: 513
// line end:   652
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


// address: 0x8006FC34
// line start: 44
// line end:   93
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


// address: 0x8006FEFC
// line start: 100
// line end:   137
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80070040
// line start: 143
// line end:   164
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x800700E0
// line start: 171
// line end:   194
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80070344
// line start: 201
// line end:   236
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x800705F8
// line start: 241
// line end:   264
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8007085C
// line start: 106
// line end:   107
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070864
// line start: 113
// line end:   121
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x800708CC
// line start: 128
// line end:   130
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x800708EC
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x8007095C
// line start: 167
// line end:   195
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x800709F8
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070A60
// line start: 227
// line end:   234
void music_stop__Fv() {
}


// address: 0x80070AAC
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x80070AEC
// line start: 260
// line end:   273
void music_start__Fi(int nTrack) {
}


// address: 0x80070B70
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


// address: 0x8007102C
// line start: 171
// line end:   179
void CloseInvChr__Fv() {
}


// address: 0x80071094
// line start: 188
// line end:   199
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80071140
// line start: 208
// line end:   239
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x800711B0
// line start: 248
// line end:   278
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071220
// size: 0x9C
// line start: 291
// line end:   318
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80071350
// line start: 327
// line end:   329
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071390
// line start: 338
// line end:   341
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800713D4
// line start: 350
// line end:   353
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071418
// line start: 394
// line end:   452
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80071688
// line start: 462
// line end:   515
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071848
// line start: 523
// line end:   542
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x800718A4
// line start: 550
// line end:   553
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800718E0
// line start: 562
// line end:   590
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80071980
// line start: 598
// line end:   710
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80071D64
// line start: 720
// line end:   749
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80071E38
// line start: 760
// line end:   806
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071F50
// line start: 817
// line end:   826
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80071F94
// line start: 834
// line end:   925
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


// address: 0x80072288
// line start: 935
// line end:   996
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072558
// line start: 1004
// line end:   1047
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 17
	register int x;
	// register: 18
	register int y;
}


// address: 0x80072780
// line start: 1055
// line end:   1074
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


// address: 0x80072934
// line start: 1195
// line end:   1505
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


// address: 0x80073040
// line start: 1510
// line end:   1602
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


// address: 0x80073238
// line start: 1608
// line end:   1625
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x800732E8
// line start: 1637
// line end:   1638
void Init_GamePad__Fv() {
}


// address: 0x80073318
// line start: 1643
// line end:   1656
void InitGamePadVars__Fv() {
}


// address: 0x800733A0
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_800733A0(struct CBlocks *this) {
}


// address: 0x800733B4
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_800733B4(struct CPad *this) {
}


// address: 0x800733DC
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_800733DC(struct CPad *this) {
}


// address: 0x80073404
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_80073404(struct CPad *this) {
}


// address: 0x8007342C
// line start: 66
// line end:   69
void DoGameTestStuff__Fv() {
}


// address: 0x80073458
// line start: 73
// line end:   76
void DoInitGameStuff__Fv() {
}


// address: 0x8007348C
// line start: 63
// line end:   64
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x800734AC
// line start: 74
// line end:   76
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x800734CC
// line start: 94
// line end:   95
void GRL_InitGwin__Fv() {
}


// address: 0x800734D8
// line start: 106
// line end:   110
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x800734E8
// line start: 121
// line end:   123
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80073510
// line start: 133
// line end:   149
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x800735B4
// line start: 159
// line end:   166
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x800735FC
// size: 0x4
// line start: 82
// line end:   83
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80073608
// line start: 90
// line end:   148
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
				{
					{
						// register: 4
						register int f;
					}
				}
			}
		}
	}
}


// address: 0x800737E0
// line start: 158
// line end:   178
char *GetStr__Fi(int StrId) {
}


// address: 0x80073848
// line start: 188
// line end:   214
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


// address: 0x8007394C
// line start: 226
// line end:   235
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800739A4
// line start: 244
// line end:   246
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800739B0
// line start: 256
// line end:   274
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80073AD0
// line start: 282
// line end:   308
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80073B50
// line start: 96
// line end:   165
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


// address: 0x80074088
// line start: 170
// line end:   194
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80074208
// line start: 198
// line end:   216
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80074368
// line start: 220
// line end:   235
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074400
// line start: 242
// line end:   257
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800744B0
// line start: 264
// line end:   265
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074514
// line start: 269
// line end:   272
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007462C
// line start: 276
// line end:   278
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x800746C4
// line start: 282
// line end:   284
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x8007475C
// line start: 288
// line end:   289
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800747C4
// line start: 293
// line end:   304
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 3
	register int frame;
}


// address: 0x80074858
// line start: 308
// line end:   323
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


// address: 0x80074938
// line start: 328
// line end:   343
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


// address: 0x80074A10
// line start: 348
// line end:   360
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074AA0
// line start: 364
// line end:   378
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


// address: 0x80074BBC
// line start: 382
// line end:   394
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074C58
// line start: 398
// line end:   399
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074CC0
// line start: 403
// line end:   404
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074D28
// line start: 408
// line end:   417
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80074E5C
// line start: 421
// line end:   430
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80074FA0
// line start: 434
// line end:   435
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075008
// line start: 439
// line end:   440
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075060
// line start: 444
// line end:   454
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


// address: 0x8007512C
// line start: 459
// line end:   460
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075190
// line start: 464
// line end:   466
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075198
// line start: 469
// line end:   544
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


// address: 0x800756C0
// line start: 549
// line end:   554
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075768
// line start: 558
// line end:   559
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075770
// line start: 562
// line end:   563
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800757A4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800757A4(struct POLY_FT4 **Prim) {
}


// address: 0x80075820
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075820(int PNum) {
}


// address: 0x80075870
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075870(struct CPlayer *this) {
}


// address: 0x8007587C
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_8007587C(struct CPlayer *this) {
}


// address: 0x80075888
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075888(struct CPlayer *this) {
}


// address: 0x80075894
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075894(struct TextDat *this) {
}


// address: 0x800758A8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800758A8(struct TextDat *this, int FrNum) {
}


// address: 0x800758C4
// line start: 67
// line end:   72
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800758FC
// line start: 81
// line end:   96
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x8007597C
// line start: 105
// line end:   120
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80075A14
// line start: 131
// line end:   147
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80075AC4
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


// address: 0x80075C80
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


// address: 0x80075E14
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


// address: 0x80075ECC
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


// address: 0x80076160
// line start: 441
// line end:   448
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80076238
// size: 0x28
// line start: 459
// line end:   467
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800762C0
// size: 0x28
// line start: 477
// line end:   478
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800762EC
// size: 0x28
// line start: 488
// line end:   489
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076318
// size: 0x28
// line start: 499
// line end:   500
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076344
// size: 0x28
// line start: 510
// line end:   511
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076370
// size: 0x28
// line start: 521
// line end:   522
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007639C
// size: 0x28
// line start: 532
// line end:   533
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763C0
// size: 0x28
// line start: 543
// line end:   544
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763E4
// size: 0x28
// line start: 554
// line end:   555
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076410
// size: 0x28
// line start: 565
// line end:   566
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007643C
// size: 0x28
// line start: 576
// line end:   577
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076468
// size: 0x28
// line start: 587
// line end:   588
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076494
// size: 0x28
// line start: 598
// line end:   599
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764C0
// size: 0x28
// line start: 609
// line end:   610
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764EC
// size: 0x28
// line start: 620
// line end:   621
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076518
// size: 0x28
// line start: 631
// line end:   632
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076544
// size: 0x28
// line start: 642
// line end:   643
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076570
// size: 0x28
// line start: 653
// line end:   654
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007659C
// size: 0x28
// line start: 664
// line end:   665
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765C8
// size: 0x28
// line start: 675
// line end:   676
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765F4
// size: 0x28
// line start: 686
// line end:   687
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076620
// size: 0x28
// line start: 697
// line end:   698
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007664C
// size: 0x28
// line start: 708
// line end:   709
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076678
// size: 0x28
// line start: 719
// line end:   720
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800766A4
// size: 0x28
// line start: 730
// line end:   731
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800766D0
// size: 0x28
// line start: 741
// line end:   742
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800766FC
// size: 0x28
// line start: 752
// line end:   753
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076728
// size: 0x28
// line start: 763
// line end:   764
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076754
// size: 0x28
// line start: 774
// line end:   775
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076780
// size: 0x28
// line start: 785
// line end:   786
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767AC
// size: 0x28
// line start: 796
// line end:   797
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767D8
// size: 0x28
// line start: 807
// line end:   808
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076804
// size: 0x28
// line start: 818
// line end:   819
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076830
// size: 0x28
// line start: 829
// line end:   830
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007685C
// size: 0x28
// line start: 840
// line end:   841
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076888
// size: 0x28
// line start: 851
// line end:   852
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768B4
// size: 0x28
// line start: 862
// line end:   863
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768E0
// size: 0x28
// line start: 873
// line end:   874
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007690C
// size: 0x28
// line start: 884
// line end:   885
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076938
// size: 0x28
// line start: 895
// line end:   896
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076964
// line start: 906
// line end:   911
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x800769F8
// size: 0x28
// line start: 915
// line end:   921
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076A88
// size: 0x28
// line start: 931
// line end:   937
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076B18
// size: 0x28
// line start: 947
// line end:   953
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076BA8
// size: 0x28
// line start: 963
// line end:   969
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076C38
// size: 0x28
// line start: 979
// line end:   980
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C64
// size: 0x28
// line start: 990
// line end:   991
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C90
// size: 0x28
// line start: 1001
// line end:   1002
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CBC
// size: 0x28
// line start: 1012
// line end:   1013
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CE8
// size: 0x28
// line start: 1023
// line end:   1024
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D14
// size: 0x28
// line start: 1034
// line end:   1035
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D40
// size: 0x28
// line start: 1045
// line end:   1046
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D6C
// size: 0x28
// line start: 1056
// line end:   1057
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D98
// size: 0x28
// line start: 1067
// line end:   1068
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DC4
// size: 0x28
// line start: 1078
// line end:   1079
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DF0
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


// address: 0x80076F48
// size: 0x28
// line start: 1125
// line end:   1132
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80077014
// size: 0x28
// line start: 1142
// line end:   1149
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x800770E0
// size: 0x28
// line start: 1159
// line end:   1160
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007710C
// size: 0x28
// line start: 1170
// line end:   1171
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077138
// size: 0x28
// line start: 1181
// line end:   1182
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077164
// size: 0x28
// line start: 1192
// line end:   1193
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077190
// size: 0x28
// line start: 1203
// line end:   1204
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800771B4
// size: 0x28
// line start: 1214
// line end:   1215
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800771E0
// size: 0x28
// line start: 1225
// line end:   1226
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007720C
// size: 0x28
// line start: 1236
// line end:   1237
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077238
// size: 0x28
// line start: 1247
// line end:   1248
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077264
// size: 0x28
// line start: 1258
// line end:   1259
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077290
// size: 0x28
// line start: 1269
// line end:   1270
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772BC
// size: 0x28
// line start: 1280
// line end:   1281
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772E8
// size: 0x28
// line start: 1291
// line end:   1292
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077314
// size: 0x28
// line start: 1302
// line end:   1303
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077340
// size: 0x28
// line start: 1313
// line end:   1314
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007736C
// size: 0x28
// line start: 1324
// line end:   1325
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077398
// size: 0x28
// line start: 1335
// line end:   1336
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773C4
// size: 0x28
// line start: 1346
// line end:   1347
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773F0
// size: 0x28
// line start: 1357
// line end:   1358
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007741C
// size: 0x28
// line start: 1368
// line end:   1369
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077448
// size: 0x28
// line start: 1379
// line end:   1380
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077474
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


// address: 0x80077608
// size: 0x28
// line start: 1446
// line end:   1447
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077634
// size: 0x28
// line start: 1457
// line end:   1458
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077658
// size: 0x28
// line start: 1468
// line end:   1469
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077684
// size: 0x28
// line start: 1479
// line end:   1480
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800776B0
// size: 0x28
// line start: 1490
// line end:   1491
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800776DC
// size: 0x28
// line start: 1501
// line end:   1502
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077708
// size: 0x28
// line start: 1512
// line end:   1513
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077734
// size: 0x28
// line start: 1523
// line end:   1524
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077760
// size: 0x28
// line start: 1534
// line end:   1535
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007778C
// size: 0x28
// line start: 1545
// line end:   1546
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800777B8
// size: 0x28
// line start: 1556
// line end:   1557
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800777E4
// size: 0x28
// line start: 1567
// line end:   1568
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077810
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077810(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8007784C
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8007784C(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80077874
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077874(struct POLY_FT4 **Prim) {
}


// address: 0x800778F0
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_800778F0(struct CBlocks *this) {
}


// address: 0x800778FC
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800778FC(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077934
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80077934(struct TextDat *this, int Creature) {
}


// address: 0x800779AC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800779AC(struct TextDat *this) {
}


// address: 0x800779C0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800779C0(struct TextDat *this, int FrNum) {
}


// address: 0x800779DC
// line start: 48
// line end:   58
void gamemenu_on__Fv() {
}


// address: 0x800779E4
// line start: 63
// line end:   65
void gamemenu_off__Fv() {
}


// address: 0x800779EC
// line start: 74
// line end:   96
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x800779F4
// line start: 101
// line end:   114
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x800779FC
// line start: 119
// line end:   125
void ResetPal__Fv() {
}


// address: 0x80077A04
// line start: 133
// line end:   140
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077A34
// line start: 175
// line end:   176
bool GetFadeState__Fv() {
}


// address: 0x80077A40
// line start: 203
// line end:   227
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x80077B44
// line start: 235
// line end:   258
void SmearScreen__Fv() {
}


// address: 0x80077B4C
// line start: 261
// line end:   266
void DrawFadedScreen__Fv() {
}


// address: 0x80077BA0
// line start: 285
// line end:   297
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077C5C
// line start: 304
// line end:   332
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


// address: 0x80077D18
// line start: 339
// line end:   346
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077D70
// line start: 354
// line end:   389
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


// address: 0x80077E4C
// line start: 396
// line end:   406
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x80077EA0
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x80077EC0
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


// address: 0x8007802C
// line start: 168
// line end:   171
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x80078068
// line start: 176
// line end:   188
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x800780B4
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x800780FC
// line start: 205
// line end:   217
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x8007815C
// line start: 221
// line end:   305
void M_Enemy__Fi(int i) {
	// address: 0xFFFFFFA8
	auto int j;
	// register: 19
	register int mi;
	// register: 21
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


// address: 0x80078704
// line start: 310
// line end:   319
void ClearMVars__Fi(int i) {
}


// address: 0x80078778
// line start: 323
// line end:   430
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x80078BC4
// line start: 435
// line end:   443
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80078C74
// line start: 448
// line end:   476
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x80078DB8
// line start: 480
// line end:   499
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80078EB0
// line start: 503
// line end:   511
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x80078F58
// line start: 515
// line end:   560
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


// address: 0x80079148
// line start: 564
// line end:   581
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80079228
// line start: 585
// line end:   614
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


// address: 0x800794A4
// line start: 619
// line end:   650
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x800797AC
// line start: 110
// line end:   198
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x80079AA8
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


// address: 0x80079EF8
// line start: 70
// line end:   92
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 2
	register int mi;
}


// address: 0x8007A000
// line start: 98
// line end:   112
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8007A108
// line start: 120
// line end:   121
void AddInTownPortal__Fi(int i) {
}


// address: 0x8007A144
// line start: 128
// line end:   136
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8007A1B4
// line start: 144
// line end:   146
void DeactivatePortal__Fi(int i) {
}


// address: 0x8007A1D4
// line start: 153
// line end:   157
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8007A20C
// line start: 164
// line end:   176
void RemovePortalMissile__Fi(int id) {
	// register: 16
	register int i;
	// register: 17
	register int mi;
}


// address: 0x8007A3A8
// line start: 182
// line end:   183
void SetCurrentPortal__Fi(int p) {
}


// address: 0x8007A3B4
// line start: 188
// line end:   214
void GetPortalLevel__Fv() {
}


// address: 0x8007A580
// line start: 220
// line end:   233
void GetPortalLvlPos__Fv() {
}


// address: 0x8007A634
// size: 0xB8
// line start: 59
// line end:   60
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x8007A660
// line start: 68
// line end:   68
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x8007A688
// line start: 76
// line end:   82
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007A6B8
// line start: 90
// line end:   106
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


// address: 0x8007A75C
// line start: 115
// line end:   121
void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x8007A7C4
// size: 0xF1C
// line start: 130
// line end:   150
struct DLevel *UseMap__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007A898
// line start: 158
// line end:   169
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Map) {
}


// address: 0x8007A908
// line start: 177
// line end:   183
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007A97C
// line start: 193
// line end:   248
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


// address: 0x8007AB90
// line start: 256
// line end:   300
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


// address: 0x8007AD30
// line start: 308
// line end:   354
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


// address: 0x8007AE90
// line start: 362
// line end:   399
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


// address: 0x8007AFD0
// line start: 406
// line end:   408
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x8007B008
// line start: 412
// line end:   414
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x8007B040
// line start: 230
// line end:   236
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x8007B084
// line start: 240
// line end:   241
char *VER_GetVerString__Fv() {
}


// address: 0x8007B094
// line start: 284
// line end:   285
int CharPair2Num__FPc(char *Str) {
}


// address: 0x8001E648
// line start: 32
// line end:   33
void TICK_InitModule();

// address: 0x8001E668
// line start: 41
// line end:   42
void TICK_Set(unsigned long Val);

// address: 0x8001E678
// line start: 49
// line end:   50
unsigned long TICK_Get();

// address: 0x8001E688
// line start: 58
// line end:   59
void TICK_Update();

// address: 0x8001E6A8
// line start: 66
// line end:   67
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001E6D4
// line start: 71
// line end:   72
char *TICK_GetDateString();

// address: 0x8001E6E4
// line start: 76
// line end:   77
char *TICK_GetTimeString();

// address: 0x8001E6F4
// line start: 55
// line end:   57
unsigned char GU_InitModule();

// address: 0x8001E720
// line start: 65
// line end:   70
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E750
// line start: 76
// line end:   95
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E7E0
// line start: 103
// line end:   104
long GU_GetSRnd();

// address: 0x8001E800
// line start: 114
// line end:   115
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E83C
// line start: 126
// line end:   128
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001E860
// line start: 31
// line end:   39
void main();

// address: 0x8001E8B0
// line start: 53
// line end:   60
unsigned char DBG_OpenModule();

// address: 0x8001E8B8
// line start: 72
// line end:   79
void DBG_PollHost();

// address: 0x8001E8C0
// line start: 88
// line end:   92
void DBG_Halt();

// address: 0x8001E8C8
// line start: 108
// line end:   126
void DBG_SendMessage(char *e);

// address: 0x8001E8E0
// line start: 135
// line end:   136
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E8F0
// line start: 146
// line end:   158
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E91C
// line start: 164
// line end:   165
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E92C
// line start: 175
// line end:   179
void SendPsyqString(char *e);

// address: 0x8001E934
// line start: 188
// line end:   189
void DBG_SetPollRoutine(void (*Func)());

// address: 0x8001E944
// line start: 52
// line end:   53
unsigned long GTIMSYS_GetTimer();

// address: 0x8001E968
// line start: 57
// line end:   58
void GTIMSYS_ResetTimer();

// address: 0x8001E98C
// line start: 63
// line end:   91
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8001EBC0
// line start: 88
// line end:   91
void DoEpi(struct TASK *T);

// address: 0x8001EC10
// line start: 99
// line end:   102
void DoPro(struct TASK *T);

// address: 0x8001EC60
// line start: 115
// line end:   129
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x8001ECD4
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


// address: 0x8001EEBC
// line start: 218
// line end:   277
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F07C
// line start: 287
// line end:   313
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x8001F158
// line start: 321
// line end:   330
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8001F1E0
// line start: 338
// line end:   340
void TSK_Die();

// address: 0x8001F20C
// line start: 350
// line end:   357
void TSK_Kill(struct TASK *T);

// address: 0x8001F25C
// size: 0x5C
// line start: 371
// line end:   372
struct TASK *TSK_GetFirstActive();

// address: 0x8001F26C
// line start: 385
// line end:   395
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8001F2E8
// line start: 408
// line end:   418
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8001F330
// line start: 430
// line end:   440
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8001F374
// size: 0x5C
// line start: 454
// line end:   455
struct TASK *TSK_GetCurrentTask();

// address: 0x8001F384
// line start: 467
// line end:   468
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x8001F39C
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


// address: 0x8001F3F4
// line start: 512
// line end:   514
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F40C
// line start: 525
// line end:   526
void TSK_ClearExecFilter();

// address: 0x8001F430
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


// address: 0x8001F530
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


// address: 0x8001F5A8
// line start: 619
// line end:   620
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x8001F5BC
// line start: 630
// line end:   631
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8001F5D0
// line start: 642
// line end:   643
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8001F5E4
// line start: 653
// line end:   654
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8001F5F8
// line start: 665
// line end:   666
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x8001F60C
// line start: 677
// line end:   678
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8001F620
// line start: 689
// line end:   696
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F66C
// line start: 707
// line end:   713
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F68C
// line start: 722
// line end:   734
void LoTskKill(struct TASK *T) {
}


// address: 0x8001F6FC
// line start: 744
// line end:   748
void ExecuteTask(struct TASK *T);

// address: 0x8001F74C
// line start: 756
// line end:   762
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F764
// line start: 765
// line end:   771
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F77C
// line start: 775
// line end:   781
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F794
// line start: 784
// line end:   790
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7AC
// line start: 793
// line end:   795
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F7C4
// line start: 799
// line end:   802
void TSK_ClearEpiProFilter();

// address: 0x8001F7F8
// line start: 810
// line end:   811
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8001F808
// line start: 819
// line end:   826
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x8001F820
// line start: 833
// line end:   838
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x8001F848
// line start: 841
// line end:   845
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8001F874
// line start: 848
// line end:   857
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x8001F8B0
// size: 0x8
// line start: 74
// line end:   75
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F8C0
// line start: 89
// line end:   91
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001F8FC
// line start: 110
// line end:   115
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F90C
// line start: 130
// line end:   135
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F924
// line start: 147
// line end:   151
unsigned char GSYS_InitMachine();

// address: 0x8001F978
// line start: 170
// line end:   184
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001F9AC
// line start: 195
// line end:   199
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FA28
// line start: 174
// line end:   175
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001FA38
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


// address: 0x8001FB6C
// line start: 253
// line end:   275
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FC24
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


// address: 0x8001FD44
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


// address: 0x8001FEDC
// line start: 464
// line end:   486
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FF3C
// line start: 499
// line end:   530
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FFB8
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


// address: 0x80020058
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


// address: 0x800200CC
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


// address: 0x80020140
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


// address: 0x800201BC
// line start: 709
// line end:   715
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x800201DC
// line start: 729
// line end:   736
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80020228
// line start: 751
// line end:   764
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x80020258
// line start: 778
// line end:   788
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x80020288
// line start: 801
// line end:   802
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x800202B8
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


// address: 0x80020310
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


// address: 0x80020378
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


// address: 0x800203E0
// size: 0x28
// line start: 944
// line end:   965
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x8002041C
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


// address: 0x800204F0
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


// address: 0x800205CC
// line start: 1107
// line end:   1194
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x80020764
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


// address: 0x800207D0
// size: 0x20
// line start: 1249
// line end:   1266
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x80020858
// line start: 1279
// line end:   1281
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x80020898
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


// address: 0x8002091C
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


// address: 0x800209B8
// line start: 1354
// line end:   1358
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020A20
// line start: 1378
// line end:   1392
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020A74
// line start: 1406
// line end:   1422
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020AC8
// line start: 1436
// line end:   1453
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020B4C
// line start: 1466
// line end:   1471
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020BA8
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


// address: 0x80020CA4
// line start: 1553
// line end:   1578
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020D50
// line start: 1591
// line end:   1606
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020DA8
// line start: 1618
// line end:   1620
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020DD8
// size: 0x4
// line start: 1633
// line end:   1634
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020DE8
// line start: 1645
// line end:   1646
char *GAL_GetLastErrorText();

// address: 0x80020E10
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


// address: 0x80020E78
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


// address: 0x80020EE0
// line start: 1729
// line end:   1730
void GAL_SetTimeStamp(int Time);

// address: 0x80020EF0
// line start: 1740
// line end:   1741
void GAL_IncTimeStamp();

// address: 0x80020F10
// line start: 1750
// line end:   1751
int GAL_GetTimeStamp();

// address: 0x80020F20
// line start: 1767
// line end:   1778
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80020F70
// line start: 1798
// line end:   1803
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80020FC0
// line start: 1818
// line end:   1835
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x8002106C
// line start: 1846
// line end:   1857
long GAL_GetSize(long hnd) {
}


// address: 0x800210C0
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


// address: 0x80021228
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


// address: 0x800212CC
// line start: 2013
// line end:   2019
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80021300
// line start: 2032
// line end:   2042
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x8002136C
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


// address: 0x80021464
// size: 0x20
// line start: 2134
// line end:   2153
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x800214A0
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


// address: 0x80021530
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


// address: 0x800215AC
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


// address: 0x80021660
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


// address: 0x800216BC
// line start: 2335
// line end:   2340
void GAL_MemDump(unsigned long Type);

// address: 0x80021730
// line start: 2354
// line end:   2355
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80021740
// line start: 2368
// line end:   2382
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x8002176C
// line start: 2394
// line end:   2406
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x800217B4
// line start: 2415
// line end:   2416
int GAL_GetNumFreeHeaders();

// address: 0x800217C4
// line start: 2420
// line end:   2421
unsigned long GAL_GetLastTypeAlloced();

// address: 0x800217D4
// line start: 2431
// line end:   2438
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x800217EC
// line start: 2447
// line end:   2459
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021840
// line start: 2462
// line end:   2463
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x80021850
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


// address: 0x80023C0C
// line start: 157
// line end:   167
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80023C58
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


