#include "types.h"

// address: 0x80114B24
extern int NumOfMonsterListLevels;

// address: 0x800A49E4
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x80114820
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x80114824
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x80114828
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x80114830
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x80114834
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x80114838
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x8011483C
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x80114840
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x80114844
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x80114848
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x8011484C
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x80114850
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x80114854
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x80114858
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x8011485C
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x80114860
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x80114864
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x8011486C
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x80114870
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x80114878
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x8011487C
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x80114880
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x80114884
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x80114888
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x8011488C
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x80114890
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x80114894
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x80114898
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x801148A0
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x801148A4
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x801148A8
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x801148AC
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x801148B0
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x801148B4
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x801148B8
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x801148BC
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x801148C0
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x801148C4
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x801148C8
// size: 0x3
static unsigned char NumsLEV8M8A[3];

// address: 0x801148CC
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x801148D0
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x801148D4
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x801148D8
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x801148DC
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x801148E0
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x801148E4
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x801148E8
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x801148EC
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x801148F0
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x801148F4
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x801148F8
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x801148FC
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x80114900
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x80114904
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x80114908
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x8011490C
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x80114910
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x80114914
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x80114918
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x8011491C
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x80114920
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x80114924
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x80114928
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x8011492C
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x80114930
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x80114934
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x80114938
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x8011493C
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x80114940
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x80114944
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x80114948
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x8011494C
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x80114950
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x80114954
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x80114958
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8011495C
// size: 0x2
static unsigned char NumsLEV16M16D[2];

// address: 0x800A4524
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A4554
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A45B4
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A45F4
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A4664
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A46D4
// size: 0x50
static struct MonstList ChoiceListLEV6[5];

// address: 0x800A4724
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A4774
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A47D4
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A4814
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800A4864
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A48B4
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A48F4
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A4944
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A49A4
// size: 0x30
static struct MonstList ChoiceListLEV15[3];

// address: 0x800A49D4
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x80116354
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800A4A64
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x80114B34
extern int ArgsSoFar;

// address: 0x80114B38
extern unsigned long *ThisOt;

// address: 0x80114B3C
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x80116358
static long hndPrimBuffers;

// address: 0x8011635C
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x80116360
static unsigned char BufferDepth;

// address: 0x80116361
static unsigned char WorkRamId;

// address: 0x80116362
static unsigned char ScrNum;

// address: 0x80116364
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x80116368
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x8011636C
static unsigned char BufferNum;

// address: 0x80114B40
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x8011636D
static unsigned char LastBuffer;

// address: 0x80116370
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x80116374
static int ThisOtSize;

// address: 0x80114B44
// size: 0x8
static struct RECT ScrRect;

// address: 0x80116378
static int VidWait;

// address: 0x801167C8
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8011637C
static void (*VbFunc)();

// address: 0x80116380
static unsigned long VidTick;

// address: 0x80116384
static int VXOff;

// address: 0x80116388
static int VYOff;

// address: 0x80114B58
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x80114B5C
extern int LastFmem;

// address: 0x80114B4C
extern unsigned int GSYS_MemStart;

// address: 0x80114B50
extern unsigned int GSYS_MemEnd;

// address: 0x800A4DAC
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A4DD4
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x80114B54
extern int LowestFmem;

// address: 0x80114B6C
extern int FileSYS;

// address: 0x8011638C
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x80116390
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x80114B86
extern short DavesPad;

// address: 0x80114B88
extern short DavesPadDeb;

// address: 0x800A4DFC
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x801168A8
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A56A0
// size: 0x474
extern struct TextDat *AllDats[285];

// address: 0x80114BD8
extern int TpW;

// address: 0x80114BDC
extern int TpH;

// address: 0x80114BE0
extern int TpXDest;

// address: 0x80114BE4
extern int TpYDest;

// address: 0x80114BE8
// size: 0x8
extern struct RECT R;

// address: 0x800A5B14
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800A5B48
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A4E30
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x80114BFC
static bool ChunkGot;

// address: 0x800A5B70
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800A5B80
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A5B90
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x80114C10
extern unsigned long BL_NoLumpFiles;

// address: 0x80114C14
extern unsigned long BL_NoStreamFiles;

// address: 0x80114C18
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x80114C1C
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x80114C20
extern unsigned char FileLoaded;

// address: 0x80114C50
extern int NoTAllocs;

// address: 0x800A5CBC
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x8011639C
static bool CanPause;

// address: 0x801163A0
static bool Paused;

// address: 0x801163A4
// size: 0x8
static struct RECT PRect;

// address: 0x801168D0
// size: 0x10
static struct Dialog PBack;

// address: 0x800A5F24
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800A5F48
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800A5F6C
// size: 0x708
extern unsigned char demo_buffer[1800];

// address: 0x80114C7C
extern int demo_pad_time;

// address: 0x80114C80
extern int demo_pad_count;

// address: 0x800A5E4C
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800A5EB8
// size: 0x6C
extern struct CPad Pad1;

// address: 0x80114C84
extern unsigned long demo_finish;

// address: 0x80114C88
extern int cac_pad;

// address: 0x80114CA4
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x80114CA8
extern int CharFrm;

// address: 0x80114C95
extern unsigned char WHITER;

// address: 0x80114C96
extern unsigned char WHITEG;

// address: 0x80114C97
extern unsigned char WHITEB;

// address: 0x80114C98
extern unsigned char BLUER;

// address: 0x80114C99
extern unsigned char BLUEG;

// address: 0x80114C9A
extern unsigned char BLUEB;

// address: 0x80114C9B
extern unsigned char REDR;

// address: 0x80114C9C
extern unsigned char REDG;

// address: 0x80114C9D
extern unsigned char REDB;

// address: 0x80114C9E
extern unsigned char GOLDR;

// address: 0x80114C9F
extern unsigned char GOLDG;

// address: 0x80114CA0
extern unsigned char GOLDB;

// address: 0x800A6674
// size: 0x218
extern struct CFont MediumFont;

// address: 0x800A688C
// size: 0x218
extern struct CFont LargeFont;

// address: 0x800A6AA4
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800A6B58
// size: 0x10
extern struct FontTab LFont;

// address: 0x800A6B68
// size: 0x136
extern struct FontItem MFontTab[155];

// address: 0x800A6CA0
// size: 0x10
extern struct FontTab MFont;

// address: 0x80114CBD
extern unsigned char DialogRed;

// address: 0x80114CBE
extern unsigned char DialogGreen;

// address: 0x80114CBF
extern unsigned char DialogBlue;

// address: 0x80114CC0
extern unsigned char DialogTRed;

// address: 0x80114CC1
extern unsigned char DialogTGreen;

// address: 0x80114CC2
extern unsigned char DialogTBlue;

// address: 0x80114CC4
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x80114CC8
extern int DialogBackGfx;

// address: 0x80114CCC
extern int DialogBackW;

// address: 0x80114CD0
extern int DialogBackH;

// address: 0x80114CD4
extern int DialogBorderGfx;

// address: 0x80114CD8
extern int DialogBorderTLW;

// address: 0x80114CDC
extern int DialogBorderTLH;

// address: 0x80114CE0
extern int DialogBorderTRW;

// address: 0x80114CE4
extern int DialogBorderTRH;

// address: 0x80114CE8
extern int DialogBorderBLW;

// address: 0x80114CEC
extern int DialogBorderBLH;

// address: 0x80114CF0
extern int DialogBorderBRW;

// address: 0x80114CF4
extern int DialogBorderBRH;

// address: 0x80114CF8
extern int DialogBorderTW;

// address: 0x80114CFC
extern int DialogBorderTH;

// address: 0x80114D00
extern int DialogBorderBW;

// address: 0x80114D04
extern int DialogBorderBH;

// address: 0x80114D08
extern int DialogBorderLW;

// address: 0x80114D0C
extern int DialogBorderLH;

// address: 0x80114D10
extern int DialogBorderRW;

// address: 0x80114D14
extern int DialogBorderRH;

// address: 0x80114D18
extern int DialogBevelGfx;

// address: 0x80114D1C
extern int DialogBevelCW;

// address: 0x80114D20
extern int DialogBevelCH;

// address: 0x80114D24
extern int DialogBevelLRW;

// address: 0x80114D28
extern int DialogBevelLRH;

// address: 0x80114D2C
extern int DialogBevelUDW;

// address: 0x80114D30
extern int DialogBevelUDH;

// address: 0x80114D34
extern int MY_DialogOTpos;

// address: 0x801163AC
static unsigned char DialogGBack;

// address: 0x801163AD
static char GShadeX;

// address: 0x801163AE
static char GShadeY;

// address: 0x801163B4
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800A6CF0
// size: 0x70
extern int Cxy[28];

// address: 0x80114CB7
extern unsigned char BORDERR;

// address: 0x80114CB8
extern unsigned char BORDERG;

// address: 0x80114CB9
extern unsigned char BORDERB;

// address: 0x80114CBA
extern unsigned char BACKR;

// address: 0x80114CBB
extern unsigned char BACKG;

// address: 0x80114CBC
extern unsigned char BACKB;

// address: 0x800A6CB0
// size: 0x40
static char GShadeTab[64];

// address: 0x80114CB5
static char GShadePX;

// address: 0x80114CB6
static char GShadePY;

// address: 0x80114D41
extern unsigned char PlayDemoFlag;

// address: 0x801168E0
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x80116910
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x801163BC
static int blockr;

// address: 0x801163C0
static int blockg;

// address: 0x801163C4
static int blockb;

// address: 0x801163C8
static int InfraFlag;

// address: 0x80114D55
extern unsigned char P1ObjSelCount;

// address: 0x80114D56
extern unsigned char P2ObjSelCount;

// address: 0x80114D57
extern unsigned char P12ObjSelCount;

// address: 0x80114D58
extern unsigned char P1ItemSelCount;

// address: 0x80114D59
extern unsigned char P2ItemSelCount;

// address: 0x80114D5A
extern unsigned char P12ItemSelCount;

// address: 0x80114D5B
extern unsigned char P1MonstSelCount;

// address: 0x80114D5C
extern unsigned char P2MonstSelCount;

// address: 0x80114D5D
extern unsigned char P12MonstSelCount;

// address: 0x80114D5E
static unsigned short P1ObjSelCol;

// address: 0x80114D60
static unsigned short P2ObjSelCol;

// address: 0x80114D62
static unsigned short P12ObjSelCol;

// address: 0x80114D64
static unsigned short P1ItemSelCol;

// address: 0x80114D66
static unsigned short P2ItemSelCol;

// address: 0x80114D68
static unsigned short P12ItemSelCol;

// address: 0x80114D6A
static unsigned short P1MonstSelCol;

// address: 0x80114D6C
static unsigned short P2MonstSelCol;

// address: 0x80114D6E
static unsigned short P12MonstSelCol;

// address: 0x80114D70
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x8010A718
// size: 0x40
static short SinTab[32];

// address: 0x800A6D60
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x80114D8C
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x8010A7A4
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x80116940
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x80116950
// size: 0x10
static struct Overlay PregameOver;

// address: 0x80116960
// size: 0x10
static struct Overlay GameOver;

// address: 0x80116970
// size: 0x10
static struct Overlay FmvOver;

// address: 0x801163CC
static int OWorldX;

// address: 0x801163D0
static int OWorldY;

// address: 0x801163D4
static int WWorldX;

// address: 0x801163D8
static int WWorldY;

// address: 0x8010A820
// size: 0x20
static short TxyAdd[16];

// address: 0x80114DB0
extern int GXAdj2;

// address: 0x801163DC
static int TimePerFrame;

// address: 0x801163E0
static int CpuStart;

// address: 0x801163E4
static int CpuTime;

// address: 0x801163E8
static int DrawTime;

// address: 0x801163EC
static int DrawStart;

// address: 0x801163F0
static int LastCpuTime;

// address: 0x801163F4
static int LastDrawTime;

// address: 0x801163F8
static int DrawArea;

// address: 0x80114DB8
extern bool ProfOn;

// address: 0x800A6D74
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x8010A97C
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800A6D88
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800A6DDC
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800A6E30
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800A6E84
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800A6ED8
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x80114DE0
extern int hof;

// address: 0x80114DE4
extern int mof;

// address: 0x800A6FA0
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x80114E18
extern unsigned long Time;

// address: 0x800A70A0
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x80114DF4
extern unsigned long *STR_Buffer;

// address: 0x80114DF8
extern char NoActiveStreams;

// address: 0x80114DFC
static bool STRInit;

// address: 0x80114E3C
extern char SFXNotPlayed;

// address: 0x80114E3D
extern char SFXNotInBank;

// address: 0x80116980
// size: 0x108
static char spu_management[264];

// address: 0x80116A90
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x80116400
static unsigned short NoSfx;

// address: 0x80114E28
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x80114E2C
static long OffsetHandle;

// address: 0x80114E30
static int BankBase;

// address: 0x80114E34
static unsigned char SPU_Done;

// address: 0x8010AD44
// size: 0x70
static unsigned short SFXRemapTab[56];

// address: 0x80114E38
static int NoSNDRemaps;

// address: 0x800A70E0
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x8010ADE8
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x80114E90
extern int demo_level;

// address: 0x80114E94
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x80114E98
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x80114E9C
// size: 0x5C
extern struct TASK *tonys;

// address: 0x80114E68
extern int demo_load;

// address: 0x80114E6C
extern int demo_record_load;

// address: 0x80114E70
extern int level_record;

// address: 0x80114E64
extern int moo_moo;

// address: 0x80114E74
// size: 0x5
extern char demolevel[5];

// address: 0x80114E7C
extern int demo_which;

// address: 0x80114E80
extern unsigned char demo_flash;

// address: 0x80114E84
extern int tonys_Task;

// address: 0x80114FF8
extern bool DoShowPanel;

// address: 0x80114FFC
extern bool DoDrawBg;

// address: 0x80116404
static bool GlueFinished;

// address: 0x80116408
static bool DoHomingScroll;

// address: 0x8011640C
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x80116410
static int CurrentMonsterList;

// address: 0x80114EA9
extern char started_grtask;

// address: 0x800A72CC
// size: 0x288
extern struct PInf PlayerInfo[81];

// address: 0x80115000
// size: 0x4
static char ArmourChar[4];

// address: 0x8010AEDC
// size: 0xA
static char WepChar[10];

// address: 0x80115004
// size: 0x4
static char CharChar[4];

// address: 0x80116414
static char ctrl_select_line;

// address: 0x80116415
static char ctrl_select_side;

// address: 0x80116416
static char ckeyheld;

// address: 0x80116418
static int old_options_pad;

// address: 0x8011641C
// size: 0x8
static struct RECT CtrlRect;

// address: 0x80115018
extern unsigned char ctrlflag;

// address: 0x800A75FC
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800A7554
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x80115014
static int toppos;

// address: 0x80116AA8
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800A772C
// size: 0x98
static int controller_defaults[2][19];

// address: 0x80115084
extern int gr_scrxoff;

// address: 0x80115088
extern int gr_scryoff;

// address: 0x80115090
extern unsigned short water_clut;

// address: 0x80115094
extern char visible_level;

// address: 0x80115081
extern char last_type;

// address: 0x80115096
extern char daylight;

// address: 0x80115092
extern char cow_in_sight;

// address: 0x80115093
extern char inn_in_sight;

// address: 0x8011508C
extern unsigned int water_count;

// address: 0x80115095
extern unsigned char lastrnd;

// address: 0x80115098
static int call_clock;

// address: 0x801150A8
extern int TitleAnimCount;

// address: 0x801150AC
static int flametick;

// address: 0x8010AF9C
// size: 0x37
static unsigned char light_tile[55];

// address: 0x800A77E4
// size: 0xA0
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x80116AB8
// size: 0x240
static struct Particle PartArray[16];

// address: 0x80116424
static int partOtPos;

// address: 0x801150C8
extern int SetParticle;

// address: 0x801150CC
static int p1partexecnum;

// address: 0x801150D0
static int p2partexecnum;

// address: 0x800A77C4
// size: 0x20
static int JumpArray[8];

// address: 0x801150D4
static int partjumpflag;

// address: 0x801150D8
static int partglowflag;

// address: 0x801150DC
static int partcolour;

// address: 0x800A7884
// size: 0x48
extern struct Spell_Target SplTarget[2];

// address: 0x801150FD
extern unsigned char select_flag;

// address: 0x80116428
// size: 0x8
static struct RECT SelectRect;

// address: 0x80116430
static char item_select;

// address: 0x80115100
// size: 0x2
extern char QSpell[2];

// address: 0x80115104
// size: 0x2
extern char _spltotype[2];

// address: 0x801150F0
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x80116CF8
// size: 0x10
static struct Dialog SelectBack;

// address: 0x801150F4
// size: 0x4
extern char mana_order[4];

// address: 0x801150F8
// size: 0x4
extern char health_order[4];

// address: 0x801150FC
extern unsigned char birdcheck;

// address: 0x80116D08
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x80116434
static unsigned short progress;

// address: 0x8010B098
// size: 0x28
static unsigned short Level2CutScreen[20];

// address: 0x80115120
static char *CutString;

// address: 0x80116D30
// size: 0x78
static struct CScreen Scr;

// address: 0x80115124
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x80115128
static bool GameLoading;

// address: 0x80116DB0
// size: 0x10
static struct Dialog LBack;

// address: 0x80115138
extern unsigned int card_ev0;

// address: 0x8011513C
extern unsigned int card_ev1;

// address: 0x80115140
extern unsigned int card_ev2;

// address: 0x80115144
extern unsigned int card_ev3;

// address: 0x80115148
extern unsigned int card_ev10;

// address: 0x8011514C
extern unsigned int card_ev11;

// address: 0x80115150
extern unsigned int card_ev12;

// address: 0x80115154
extern unsigned int card_ev13;

// address: 0x80115158
// size: 0x8
extern int card_dirty[2];

// address: 0x80115160
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x80116438
static int card_event;

// address: 0x80115134
extern void (*mem_card_event_handler)();

// address: 0x8011512C
extern bool MemCardActive;

// address: 0x80115130
static int never_hooked_events;

// address: 0x801151A4
extern unsigned long MasterVol;

// address: 0x801151A8
extern unsigned long MusicVol;

// address: 0x801151AC
extern unsigned long SoundVol;

// address: 0x801151B0
extern unsigned long VideoVol;

// address: 0x801151B4
extern unsigned long SpeechVol;

// address: 0x8011643C
// size: 0x6C
static struct TextDat *Slider;

// address: 0x80116440
static int sw;

// address: 0x80116444
static int sx;

// address: 0x80116448
static int sy;

// address: 0x8011644C
static unsigned char Adjust;

// address: 0x8011644D
static unsigned char qspin;

// address: 0x8011644E
static unsigned char lqspin;

// address: 0x80116450
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x80116454
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x80116458
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x801151B8
extern int ReturnMenu;

// address: 0x8011645C
// size: 0x8
static struct RECT ORect;

// address: 0x80116464
// size: 0x8
static char *McState[2];

// address: 0x80115188
extern bool optionsflag;

// address: 0x8011517C
extern int cmenu;

// address: 0x80115190
extern int options_pad;

// address: 0x8011519C
extern char *PrevTxt;

// address: 0x80115184
extern bool allspellsflag;

// address: 0x800A80EC
// size: 0x80
extern short Circle[64];

// address: 0x80115170
static int Spacing;

// address: 0x80115174
static int cs;

// address: 0x80115178
static int lastcs;

// address: 0x80115180
static bool MemcardOverlay;

// address: 0x8011518C
extern int saveflag;

// address: 0x800A78CC
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800A7974
// size: 0xD8
extern struct OMENUITEM GameMenu[9];

// address: 0x800A7A4C
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800A7ADC
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800A7B84
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800A7C2C
// size: 0x60
extern struct OMENUITEM MemcardMenu[4];

// address: 0x800A7C8C
// size: 0x90
extern struct OMENUITEM MemcardGameMenu[6];

// address: 0x800A7D1C
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800A7D7C
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800A7E24
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800A7ECC
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800A7F2C
// size: 0xD8
extern struct OMENUITEM CheatMenu[9];

// address: 0x800A8004
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800A8034
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x800A807C
// size: 0x70
extern struct OMENULIST MenuList[14];

// address: 0x801151A0
static bool debounce;

// address: 0x800A816C
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x801151C5
extern char hop_height;

// address: 0x801151C8
// size: 0x8
static struct Perch perches[4];

// address: 0x800A82EC
// size: 0x10
static char *FmvTab[4];

// address: 0x801151DC
static int CurMons;

// address: 0x801151E0
static int Frame;

// address: 0x801151E4
static int Action;

// address: 0x801151E8
static int Dir;

// address: 0x8011525C
extern int FeBackX;

// address: 0x80115260
extern int FeBackY;

// address: 0x80115264
extern int FeBackW;

// address: 0x80115268
extern int FeBackH;

// address: 0x8011526C
extern unsigned char FeFlag;

// address: 0x800A8A9C
// size: 0x3C0
extern struct FeStruct FeBuffer[40];

// address: 0x80115270
extern int FePlayerNo;

// address: 0x8011646C
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x80115274
extern int FeBufferCount;

// address: 0x80115278
extern int FeNoOfPlayers;

// address: 0x8011527C
// size: 0x8
extern int FeChrClass[2];

// address: 0x800A8E5C
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x80115284
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x80115288
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x8011528C
extern unsigned long FeCount;

// address: 0x80115290
extern int fileselect;

// address: 0x80115294
extern int BookMenu;

// address: 0x80115298
extern int FeAttractMode;

// address: 0x8011529C
extern int FMVPress;

// address: 0x8011522C
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x80115234
// size: 0x8
extern bool LoadedChar[2];

// address: 0x80115230
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x8011523C
extern unsigned char FeIsAVirgin;

// address: 0x80115240
extern int FeMenuDelay;

// address: 0x800A82FC
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800A8318
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800A8334
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800A8350
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800A836C
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800A8388
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800A83A4
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800A83C0
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800A83DC
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800A83F8
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800A8414
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800A8430
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800A844C
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800A8468
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x80115244
static int fadeval;

// address: 0x800A8484
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800A84FC
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800A8544
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800A85BC
// size: 0x2E8
extern struct FeMenuTable FeNameEngMenuTable[31];

// address: 0x800A88A4
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800A88EC
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800A894C
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800A89AC
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800A8A24
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x80115250
extern unsigned long AttractTitleDelay;

// address: 0x80115254
extern unsigned long AttractMainDelay;

// address: 0x80115258
extern int FMVEndPad;

// address: 0x801152D0
extern int InCredits;

// address: 0x801152D4
extern int CreditTitleNo;

// address: 0x801152D8
extern int CreditSubTitleNo;

// address: 0x801152EC
// size: 0x8
extern int card_status[2];

// address: 0x801152F4
// size: 0x8
extern int card_usable[2];

// address: 0x801152FC
// size: 0x8
extern int card_files[2];

// address: 0x80115304
// size: 0x8
extern int card_changed[2];

// address: 0x80115344
extern int AlertTxt;

// address: 0x80115348
extern int current_card;

// address: 0x8011534C
extern int LoadType;

// address: 0x80115350
extern int McMenuPos;

// address: 0x80115354
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x80115340
extern bool fileinfoflag;

// address: 0x80115318
extern char *DiabloGameFile;

// address: 0x80115338
// size: 0x8
extern char *McState_addr_80115338[2];

// address: 0x80115424
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x8011542C
extern int mdec_audio_sec;

// address: 0x80115430
extern int mdec_audio_offs;

// address: 0x80115434
extern int mdec_audio_playing;

// address: 0x80115438
extern int mdec_audio_rate_shift;

// address: 0x8011543C
// size: 0x8
extern char *vlcbuf[2];

// address: 0x80115444
extern int slice_size;

// address: 0x80115448
// size: 0x8
extern struct RECT slice;

// address: 0x80115450
extern int slice_inc;

// address: 0x80115454
extern int area_pw;

// address: 0x80115458
extern int area_ph;

// address: 0x8011545C
// size: 0x8
extern int tmdc_pol_dirty[2];

// address: 0x80115464
// size: 0x8
extern int num_pol[2];

// address: 0x8011546C
extern int mdec_cx;

// address: 0x80115470
extern int mdec_cy;

// address: 0x80115474
extern int mdec_w;

// address: 0x80115478
extern int mdec_h;

// address: 0x8011547C
// size: 0x8
extern int mdec_pw[2];

// address: 0x80115484
// size: 0x8
extern int mdec_ph[2];

// address: 0x8011548C
extern int move_x;

// address: 0x80115490
extern int move_y;

// address: 0x80115494
extern int move_scale;

// address: 0x80115498
extern int stream_frames;

// address: 0x8011549C
extern int last_stream_frame;

// address: 0x801154A0
extern int mdec_framecount;

// address: 0x801154A4
extern int mdec_speed;

// address: 0x801154A8
extern int mdec_stream_starting;

// address: 0x801154AC
extern int mdec_last_frame;

// address: 0x801154B0
extern int mdec_sectors_per_frame;

// address: 0x801154B4
extern unsigned short *vlctab;

// address: 0x801154B8
extern unsigned char *mdc_buftop;

// address: 0x801154BC
extern unsigned char *mdc_bufstart;

// address: 0x801154C0
extern int mdc_bufleft;

// address: 0x801154C4
extern int mdc_buftotal;

// address: 0x801154C8
extern int time_in_frames;

// address: 0x801154CC
extern int stream_chunksize;

// address: 0x801154D0
extern int stream_bufsize;

// address: 0x801154D4
extern int stream_subsec;

// address: 0x801154D8
extern int stream_secnum;

// address: 0x801154DC
extern int stream_last_sector;

// address: 0x801154E0
extern int stream_startsec;

// address: 0x801154E4
extern int stream_opened;

// address: 0x801154E8
extern int stream_last_chunk;

// address: 0x801154EC
extern int stream_got_chunks;

// address: 0x801154F0
extern int last_sector;

// address: 0x801154F4
extern int cdstream_resetsec;

// address: 0x801154F8
extern int last_handler_event;

// address: 0x80115364
extern unsigned char *map_buf;

// address: 0x80115368
extern unsigned char *vlc_tab;

// address: 0x8011536C
extern unsigned char *vlc_buf;

// address: 0x80115370
extern int vbuf;

// address: 0x80115374
extern int last_fn;

// address: 0x80115378
extern int last_mdc;

// address: 0x8011537C
extern int slnum;

// address: 0x80115380
extern int slices_to_do;

// address: 0x80115384
extern int mbuf;

// address: 0x80115388
extern int mfn;

// address: 0x8011538C
extern int last_move_mbuf;

// address: 0x80115390
extern int move_request;

// address: 0x80115394
extern int mdec_scale;

// address: 0x80115398
extern int do_brightness;

// address: 0x8011539C
extern int frame_decoded;

// address: 0x801153A0
extern int mdec_streaming;

// address: 0x801153A4
extern int mdec_stream_size;

// address: 0x801153A8
extern int first_stream_frame;

// address: 0x801153AC
extern int stream_frames_played;

// address: 0x801153B0
extern int num_mdcs;

// address: 0x801153B4
extern int mdec_head;

// address: 0x801153B8
extern int mdec_tail;

// address: 0x801153BC
extern int mdec_waiting_tail;

// address: 0x801153C0
extern int mdecs_queued;

// address: 0x801153C4
extern int mdecs_waiting;

// address: 0x801153C8
extern int sfx_volume;

// address: 0x801153CC
extern int stream_chunks_in;

// address: 0x801153D0
extern int stream_chunks_total;

// address: 0x801153D4
extern int stream_in;

// address: 0x801153D8
extern int stream_out;

// address: 0x801153DC
extern int stream_stalled;

// address: 0x801153E0
extern int stream_ending;

// address: 0x801153E4
extern int stream_open;

// address: 0x801153E8
extern int stream_handler_installed;

// address: 0x801153EC
extern int stream_chunks_borrowed;

// address: 0x801153F0
extern int _get_count;

// address: 0x801153F4
extern int _discard_count;

// address: 0x801153F8
// size: 0x5C
extern struct TASK *CDTask;

// address: 0x801153FC
// size: 0x98
static struct cdstreamstruct *CDStream;

// address: 0x80115400
extern int cdready_calls;

// address: 0x80115404
extern int cdready_errors;

// address: 0x80115408
extern int cdready_out_of_sync;

// address: 0x8011540C
extern int cdstream_resetting;

// address: 0x80115410
extern int sector_dma;

// address: 0x80115414
extern int sector_dma_in;

// address: 0x80115418
extern unsigned long *chkaddr;

// address: 0x8011541C
// size: 0x8
extern struct chunkhdrstruct *chunk;

// address: 0x80115420
extern int first_handler_event;

// address: 0x80115598
extern unsigned char *pStatusPanel;

// address: 0x8011559C
extern unsigned char *pGBoxBuff;

// address: 0x801155A0
extern unsigned char dropGoldFlag;

// address: 0x801155A4
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800A9454
// size: 0x200
extern char _infostr[256][2];

// address: 0x801155A8
// size: 0x2
extern char _infoclr[2];

// address: 0x800A9654
// size: 0x100
extern char tempstr[256];

// address: 0x801155AA
extern unsigned char drawhpflag;

// address: 0x801155AB
extern unsigned char drawmanaflag;

// address: 0x801155AC
extern unsigned char chrflag;

// address: 0x801155AD
extern unsigned char drawbtnflag;

// address: 0x801155AE
extern unsigned char panbtndown;

// address: 0x801155AF
extern unsigned char panelflag;

// address: 0x801155B0
extern unsigned char chrbtndown;

// address: 0x801155B1
extern unsigned char lvlbtndown;

// address: 0x801155B2
extern unsigned char sbookflag;

// address: 0x801155B3
extern unsigned char talkflag;

// address: 0x801155B4
extern int dropGoldValue;

// address: 0x801155B8
extern int initialDropGoldValue;

// address: 0x801155BC
extern int initialDropGoldIndex;

// address: 0x801155C0
extern unsigned char *pPanelButtons;

// address: 0x801155C4
extern unsigned char *pPanelText;

// address: 0x801155C8
extern unsigned char *pManaBuff;

// address: 0x801155CC
extern unsigned char *pLifeBuff;

// address: 0x801155D0
extern unsigned char *pChrPanel;

// address: 0x801155D4
extern unsigned char *pChrButtons;

// address: 0x801155D8
extern unsigned char *pSpellCels;

// address: 0x80116E00
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x80117200
// size: 0x40
static int _pstrjust[8][2];

// address: 0x8011647C
// size: 0x8
static int _pnumlines[2];

// address: 0x801155DC
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x801155E0
// size: 0x8
extern struct RECT CSRect;

// address: 0x8011648C
// size: 0x8
static int _pSpell[2];

// address: 0x80116494
// size: 0x8
static int _pSplType[2];

// address: 0x8011649C
// size: 0x8
static unsigned char panbtn[8];

// address: 0x801155E8
extern int numpanbtns;

// address: 0x801155EC
extern unsigned char *pDurIcons;

// address: 0x801155F0
extern unsigned char drawdurflag;

// address: 0x801164A4
// size: 0x4
static unsigned char chrbtn[4];

// address: 0x801155F1
extern unsigned char chrbtnactive;

// address: 0x801155F4
extern unsigned char *pSpellBkCel;

// address: 0x801155F8
extern unsigned char *pSBkBtnCel;

// address: 0x801155FC
extern unsigned char *pSBkIconCels;

// address: 0x80115600
extern int sbooktab;

// address: 0x80115604
extern int cur_spel;

// address: 0x801164A8
static long talkofs;

// address: 0x80117250
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x801164AC
static unsigned char sgbTalkSavePos;

// address: 0x801164AD
static unsigned char sgbNextTalkSave;

// address: 0x801164AE
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x801164B0
static unsigned char *pTalkPanel;

// address: 0x801164B4
static unsigned char *pMultiBtns;

// address: 0x801164B8
static unsigned char *pTalkBtns;

// address: 0x801164BC
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x8010B408
// size: 0x100
extern unsigned char gbFontTransTbl[256];

// address: 0x8010B348
// size: 0x44
extern unsigned char fontkern[68];

// address: 0x800A8E88
// size: 0x25
extern char SpellITbl[37];

// address: 0x80115505
extern unsigned char DrawLevelUpFlag;

// address: 0x8011552C
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x80115528
extern unsigned char spspelstate;

// address: 0x80115568
extern bool initchr;

// address: 0x80115508
static int SPLICONNO;

// address: 0x8011550C
static int SPLICONY;

// address: 0x80116484
static int SPLICONRIGHT;

// address: 0x80115510
static int scx;

// address: 0x80115514
static int scy;

// address: 0x80115518
static int scx1;

// address: 0x8011551C
static int scy1;

// address: 0x80115520
static int scx2;

// address: 0x80115524
static int scy2;

// address: 0x80115534
extern char SpellCol;

// address: 0x800A8E74
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800A8EB0
// size: 0xA0
extern int PanBtnPos[5][8];

// address: 0x800A8F50
// size: 0x20
extern char *PanBtnHotKey[8];

// address: 0x800A8F70
// size: 0x20
extern unsigned long PanBtnStr[8];

// address: 0x800A8F90
// size: 0x64
extern int SpellPages[5][5];

// address: 0x80115558
static int lus;

// address: 0x8011555C
static int CsNo;

// address: 0x80115560
static char plusanim;

// address: 0x80117240
// size: 0x10
static struct Dialog CSBack;

// address: 0x80115564
static int CS_XOFF;

// address: 0x800A8FF4
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x8011556C
extern int NoCSEntries;

// address: 0x80115570
static int SPALOFF;

// address: 0x80115574
static int paloffset1;

// address: 0x80115578
static int paloffset2;

// address: 0x8011557C
static int paloffset3;

// address: 0x80115580
static int paloffset4;

// address: 0x80115584
static int pinc1;

// address: 0x80115588
static int pinc2;

// address: 0x8011558C
static int pinc3;

// address: 0x80115590
static int pinc4;

// address: 0x80115618
// size: 0x8
extern int _pcurs[2];

// address: 0x80115620
extern int cursW;

// address: 0x80115624
extern int cursH;

// address: 0x80115628
extern int icursW;

// address: 0x8011562C
extern int icursH;

// address: 0x80115630
extern int icursW28;

// address: 0x80115634
extern int icursH28;

// address: 0x80115638
extern int cursmx;

// address: 0x8011563C
extern int cursmy;

// address: 0x80115640
// size: 0x8
extern int _pcursmonst[2];

// address: 0x80115648
// size: 0x2
extern char _pcursobj[2];

// address: 0x8011564C
// size: 0x2
extern char _pcursitem[2];

// address: 0x80115650
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x80115654
// size: 0x2
extern char _pcursplr[2];

// address: 0x80115614
extern int sel_data;

// address: 0x800A9754
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x80115658
extern int spurtndx;

// address: 0x8011565C
extern int stonendx;

// address: 0x80115660
extern unsigned char *pSquareCel;

// address: 0x801156A0
extern unsigned long ghInst;

// address: 0x801156A4
extern unsigned char svgamode;

// address: 0x801156A8
extern int MouseX;

// address: 0x801156AC
extern int MouseY;

// address: 0x801156B0
extern long gv1;

// address: 0x801156B4
extern long gv2;

// address: 0x801156B8
extern long gv3;

// address: 0x801156BC
extern long gv4;

// address: 0x801156C0
extern long gv5;

// address: 0x801156C4
extern unsigned char gbProcessPlayers;

// address: 0x800A98C8
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800A98F0
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800A9934
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x801156C5
extern unsigned char gbDoEnding;

// address: 0x801156C6
extern unsigned char gbRunGame;

// address: 0x801156C7
extern unsigned char gbRunGameResult;

// address: 0x801156C8
extern unsigned char gbGameLoopStartup;

// address: 0x801172A0
// size: 0x44
static int glEndSeed[17];

// address: 0x801172F0
// size: 0x44
static int glMid1Seed[17];

// address: 0x80117340
// size: 0x44
static int glMid2Seed[17];

// address: 0x80117390
// size: 0x44
static int glMid3Seed[17];

// address: 0x801164C0
static long *sg_previousFilter;

// address: 0x800A9978
// size: 0x30
extern int CreateEnv[12];

// address: 0x801156CC
extern int Passedlvldir;

// address: 0x801156D0
extern unsigned char *TempStack;

// address: 0x80115670
extern unsigned long ghMainWnd;

// address: 0x80115674
extern unsigned char fullscreen;

// address: 0x80115678
extern int force_redraw;

// address: 0x8011568C
extern unsigned char PauseMode;

// address: 0x8011568D
extern unsigned char FriendlyMode;

// address: 0x8011567D
extern unsigned char visiondebug;

// address: 0x8011567F
extern unsigned char light4flag;

// address: 0x80115680
extern unsigned char leveldebug;

// address: 0x80115681
extern unsigned char monstdebug;

// address: 0x80115688
extern int debugmonsttypes;

// address: 0x8011567C
static unsigned char cineflag;

// address: 0x8011567E
extern unsigned char scrollflag;

// address: 0x80115682
extern unsigned char trigdebug;

// address: 0x80115684
extern int setseed;

// address: 0x80115690
static int sgnTimeoutCurs;

// address: 0x80115694
extern unsigned char sgbMouseDown;

// address: 0x800AA044
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x801156E8
extern int numtowners;

// address: 0x801156EC
extern unsigned char storeflag;

// address: 0x801156ED
extern unsigned char boyloadflag;

// address: 0x801156EE
extern unsigned char bannerflag;

// address: 0x801156F0
extern unsigned char *pCowCels;

// address: 0x801164C4
static unsigned long sgdwCowClicks;

// address: 0x801164C8
static int sgnCowMsg;

// address: 0x800A9D84
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x801156E0
extern unsigned long CowPlaying;

// address: 0x800A99A8
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800A9D20
// size: 0xC
extern int TownCowX[3];

// address: 0x800A9D2C
// size: 0xC
extern int TownCowY[3];

// address: 0x800A9D38
// size: 0xC
extern int TownCowDir[3];

// address: 0x800A9D44
// size: 0x20
extern int cowoffx[8];

// address: 0x800A9D64
// size: 0x20
extern int cowoffy[8];

// address: 0x80115708
extern int sfxdelay;

// address: 0x8011570C
extern int sfxdnum;

// address: 0x80115700
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800AAE44
// size: 0xF4C
extern struct TSFX sgSFX[979];

// address: 0x80115704
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x80115710
extern long orgseed;

// address: 0x801164CC
static long sglGameSeed;

// address: 0x80115714
extern int SeedCount;

// address: 0x801164D0
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x801164D4
static int sgnWidth;

// address: 0x80115722
extern char msgflag;

// address: 0x80115723
extern char msgdelay;

// address: 0x800ABE40
// size: 0x50
extern char msgtable[80];

// address: 0x800ABD90
// size: 0xB0
extern int MsgStrings[44];

// address: 0x80115721
extern char msgcnt;

// address: 0x801164D8
static unsigned long sgdwProgress;

// address: 0x801164DC
static unsigned long sgdwXY;

// address: 0x800ABE90
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x8010B840
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x8010CBE0
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x8010D900
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x8010E800
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800AC0A4
// size: 0x4A00
extern struct ItemStruct item[128];

// address: 0x800B0AA4
// size: 0x7F
extern char itemactive[127];

// address: 0x800B0B24
// size: 0x7F
extern char itemavail[127];

// address: 0x800B0BA4
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8011575C
extern unsigned char uitemflag;

// address: 0x801164E0
static int tem;

// address: 0x801173D8
// size: 0x94
static struct ItemStruct curruitem;

// address: 0x80117478
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x80115760
extern int ScrollType;

// address: 0x800B0C24
// size: 0x40
extern char ItemStr[64];

// address: 0x800B0C64
// size: 0x40
extern char SufStr[64];

// address: 0x8011573C
extern long numitems;

// address: 0x80115740
extern int gnNumGetRecords;

// address: 0x800AC000
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800ABF30
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x80110644
// size: 0x46
static short Item2Frm[35];

// address: 0x800ABFDC
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x80115744
extern int *ItemAnimSnds;

// address: 0x80115748
extern int idoppely;

// address: 0x8011574C
extern int ScrollFlag;

// address: 0x800AC08C
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800B1A50
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800B1B90
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x80115774
extern int numlights;

// address: 0x80115778
extern char lightmax;

// address: 0x800B1BB8
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x8011577C
extern int numvision;

// address: 0x80115780
extern unsigned char dovision;

// address: 0x80115784
extern int visionid;

// address: 0x801164E4
static int disp_mask;

// address: 0x801164E8
static int weird;

// address: 0x801164EC
static int disp_tab_r;

// address: 0x801164F0
static int dispy_r;

// address: 0x801164F4
static int disp_tab_g;

// address: 0x801164F8
static int dispy_g;

// address: 0x801164FC
static int disp_tab_b;

// address: 0x80116500
static int dispy_b;

// address: 0x80116504
static int radius;

// address: 0x80116508
static int bright;

// address: 0x80117488
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x80115764
extern int lightflag;

// address: 0x800B1764
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800B1A18
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800B0CA4
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x80115768
extern int restore_r;

// address: 0x8011576C
extern int restore_g;

// address: 0x80115770
extern int restore_b;

// address: 0x800B1A30
// size: 0x10
extern char radius_tab[16];

// address: 0x800B1A40
// size: 0x10
extern char bright_tab[16];

// address: 0x801157A6
extern unsigned char qtextflag;

// address: 0x801157A8
extern int qtextSpd;

// address: 0x8011650C
static unsigned char *pMedTextCels;

// address: 0x80116510
static unsigned char *pTextBoxCels;

// address: 0x80116514
static char *qtextptr;

// address: 0x80116518
static int qtexty;

// address: 0x8011651C
static unsigned long qtextDelay;

// address: 0x80116520
static unsigned long sgLastScroll;

// address: 0x80116524
static unsigned long scrolltexty;

// address: 0x80116528
static long sglMusicVolumeSave;

// address: 0x80115794
static bool qtbodge;

// address: 0x800B1D78
// size: 0x10
extern struct Dialog QBack;

// address: 0x801157A5
static unsigned char CDFlip;

// address: 0x800B1D88
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800B24F8
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800B23E8
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800B25E4
// size: 0x13D4C
extern struct DLevel sgLevels[21];

// address: 0x800C6330
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x80117508
// size: 0x20
static struct DJunk sgJunk;

// address: 0x8011652D
static unsigned char sgbRecvCmd;

// address: 0x80116530
static unsigned long sgdwRecvOffset;

// address: 0x80116534
static unsigned char sgbDeltaChunks;

// address: 0x80116535
static unsigned char sgbDeltaChanged;

// address: 0x80116538
static unsigned long sgdwOwnerWait;

// address: 0x8011653C
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x80116540
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x80116544
static int sgnCurrMegaPlayer;

// address: 0x801157C1
extern unsigned char deltaload;

// address: 0x801157C2
extern unsigned char gbBufferMsgs;

// address: 0x801157C4
extern unsigned long dwRecCount;

// address: 0x801157C8
extern bool LevelOut;

// address: 0x801157DE
extern unsigned char gbMaxPlayers;

// address: 0x801157DF
extern unsigned char gbActivePlayers;

// address: 0x801157E0
extern unsigned char gbGameDestroyed;

// address: 0x801157E1
extern unsigned char gbDeltaSender;

// address: 0x801157E2
extern unsigned char gbSelectProvider;

// address: 0x801157E3
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x80116548
static unsigned char sgbSentThisCycle;

// address: 0x8011654C
static unsigned long sgdwGameLoops;

// address: 0x80116550
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x80116554
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x80116558
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x80116560
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x80116568
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x80116570
static unsigned char sgbTimeout;

// address: 0x80116574
static long sglTimeoutStart;

// address: 0x801157D8
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x801157DD
static unsigned char sgbNetInited;

// address: 0x800C7398
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800C755C
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80110D0C
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800C7D3C
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x80115804
extern long numobjects;

// address: 0x800C9310
// size: 0x7F
extern char objectactive[127];

// address: 0x800C9390
// size: 0x7F
extern char objectavail[127];

// address: 0x80115808
extern unsigned char InitObjFlag;

// address: 0x8011580C
extern int trapid;

// address: 0x800C9410
// size: 0x28
extern char ObjFileList[40];

// address: 0x80115810
extern int trapdir;

// address: 0x80115814
extern int leverid;

// address: 0x801157FC
extern int numobjfiles;

// address: 0x800C7C54
// size: 0x20
extern int bxadd[8];

// address: 0x800C7C74
// size: 0x20
extern int byadd[8];

// address: 0x800C7CFC
// size: 0x1A
extern char shrineavail[26];

// address: 0x800C7C94
// size: 0x68
extern int shrinestrs[26];

// address: 0x800C7D18
// size: 0x24
extern int StoryBookName[9];

// address: 0x80115800
extern int myscale;

// address: 0x80115828
extern unsigned char gbValidSaveFile;

// address: 0x80115824
extern bool DoLoadedChar;

// address: 0x800C9630
// size: 0x4590
extern struct PlayerStruct plr[2];

// address: 0x80115848
extern int myplr;

// address: 0x8011584C
extern int deathdelay;

// address: 0x80115850
extern unsigned char deathflag;

// address: 0x80115851
extern char light_rad;

// address: 0x80115840
// size: 0x5
extern char light_level[5];

// address: 0x800C9528
// size: 0x30
extern int MaxStats[4][3];

// address: 0x80115838
static int PlrStructSize;

// address: 0x8011583C
static int ItemStructSize;

// address: 0x800C9438
// size: 0x24
extern int plrxoff[9];

// address: 0x800C945C
// size: 0x24
extern int plryoff[9];

// address: 0x800C9480
// size: 0x24
extern int plrxoff2[9];

// address: 0x800C94A4
// size: 0x24
extern int plryoff2[9];

// address: 0x800C94C8
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800C94EC
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800C94F8
// size: 0xC
extern int MagicTbl[3];

// address: 0x800C9504
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800C9510
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800C951C
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800C9558
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800CDCF8
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x80115890
extern unsigned char *pQLogCel;

// address: 0x80115894
extern int ReturnLvlX;

// address: 0x80115898
extern int ReturnLvlY;

// address: 0x8011589C
extern int ReturnLvl;

// address: 0x801158A0
extern int ReturnLvlT;

// address: 0x801158A4
extern unsigned char rporttest;

// address: 0x801158A8
extern int qline;

// address: 0x801158AC
extern int numqlines;

// address: 0x801158B0
extern int qtopline;

// address: 0x80117528
// size: 0x40
static int qlist[16];

// address: 0x80116578
// size: 0x8
static struct RECT QSRect;

// address: 0x8011585D
extern unsigned char questlog;

// address: 0x800CDBC0
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x80115860
extern int ALLQUESTS;

// address: 0x800CDCD4
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800CDCE0
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800CDCEC
// size: 0xC
extern int QuestGroup3[3];

// address: 0x80115874
// size: 0x8
extern int QuestGroup4[2];

// address: 0x8011588C
extern bool WaterDone;

// address: 0x80115864
// size: 0x7
static char questxoff[7];

// address: 0x8011586C
// size: 0x7
static char questyoff[7];

// address: 0x800CDCC0
// size: 0x14
extern int questtrigstr[5];

// address: 0x8011587C
static int QS_PX;

// address: 0x80115880
static int QS_PY;

// address: 0x80115884
static int QS_PW;

// address: 0x80115888
static int QS_PH;

// address: 0x80117568
// size: 0x10
static struct Dialog QSBack;

// address: 0x800CDE38
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x801158EF
extern char stextflag;

// address: 0x800CE690
// size: 0xB90
extern struct ItemStruct smithitem[20];

// address: 0x800CF220
// size: 0x378
extern struct ItemStruct premiumitem[6];

// address: 0x801158F0
extern int numpremium;

// address: 0x801158F4
extern int premiumlevel;

// address: 0x800CF598
// size: 0xB90
extern struct ItemStruct witchitem[20];

// address: 0x800D0128
// size: 0x94
extern struct ItemStruct boyitem;

// address: 0x801158F8
extern int boylevel;

// address: 0x800D01BC
// size: 0x94
extern struct ItemStruct golditem;

// address: 0x800D0250
// size: 0xB90
extern struct ItemStruct healitem[20];

// address: 0x801158FC
extern char stextsize;

// address: 0x801158FD
extern unsigned char stextscrl;

// address: 0x80116580
static int stextsel;

// address: 0x80116584
static int stextlhold;

// address: 0x80116588
static int stextshold;

// address: 0x8011658C
static int stextvhold;

// address: 0x80116590
static int stextsval;

// address: 0x80116594
static int stextsmax;

// address: 0x80116598
static int stextup;

// address: 0x8011659C
static int stextdown;

// address: 0x801165A0
static char stextscrlubtn;

// address: 0x801165A1
static char stextscrldbtn;

// address: 0x801165A2
static char SItemListFlag;

// address: 0x80117578
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800D0DE0
// size: 0x1BC0
extern struct ItemStruct storehold[48];

// address: 0x800D29A0
// size: 0x30
extern char storehidx[48];

// address: 0x801165A4
static int storenumh;

// address: 0x801165A8
static int gossipstart;

// address: 0x801165AC
static int gossipend;

// address: 0x801165B0
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x801165B8
static int talker;

// address: 0x801158D8
extern unsigned char *pSTextBoxCels;

// address: 0x801158DC
extern unsigned char *pSTextSlidCels;

// address: 0x801158E0
extern int *SStringY;

// address: 0x800CE5BC
// size: 0x10
extern struct Dialog SBack;

// address: 0x800CE5CC
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800CE61C
// size: 0x50
extern int SStringYBuy[20];

// address: 0x800CE66C
// size: 0x24
extern int talkname[9];

// address: 0x801158EE
extern unsigned char InStoreFlag;

// address: 0x80111F20
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x8011590C
extern unsigned long gdwAllTextEntries;

// address: 0x801165BC
static unsigned char *P3Tiles;

// address: 0x8011591C
extern int tile;

// address: 0x8011592C
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800D2C08
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x80115930
extern int numtrigs;

// address: 0x80115934
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x80115938
extern int TWarpFrom;

// address: 0x800D29D0
// size: 0x2C
extern int TownDownList[11];

// address: 0x800D29FC
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800D2A30
// size: 0x30
extern int L1UpList[12];

// address: 0x800D2A60
// size: 0x28
extern int L1DownList[10];

// address: 0x800D2A88
// size: 0xC
extern int L2UpList[3];

// address: 0x800D2A94
// size: 0x14
extern int L2DownList[5];

// address: 0x800D2AA8
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800D2AB4
// size: 0x3C
extern int L3UpList[15];

// address: 0x800D2AF0
// size: 0x24
extern int L3DownList[9];

// address: 0x800D2B14
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800D2B4C
// size: 0x10
extern int L4UpList[4];

// address: 0x800D2B5C
// size: 0x18
extern int L4DownList[6];

// address: 0x800D2B74
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800D2B84
// size: 0x84
extern int L4PentaList[33];

// address: 0x80112CB0
// size: 0xA
static char cursoff[10];

// address: 0x80115952
extern unsigned char gbMusicOn;

// address: 0x80115953
extern unsigned char gbSoundOn;

// address: 0x80115951
extern unsigned char gbSndInited;

// address: 0x80115958
extern long sglMasterVolume;

// address: 0x8011595C
extern long sglMusicVolume;

// address: 0x80115960
extern long sglSoundVolume;

// address: 0x80115964
extern long sglSpeechVolume;

// address: 0x80115954
extern unsigned char gbDupSounds;

// address: 0x80115968
static int sgnMusicTrack;

// address: 0x8011596C
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x80112D5C
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x80115990
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800D2C58
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x80115998
// size: 0x2
extern char _pfind_index[2];

// address: 0x8011599C
// size: 0x2
extern char _pfindx[2];

// address: 0x801159A0
// size: 0x2
extern char _pfindy[2];

// address: 0x801159A2
extern unsigned char automapmoved;

// address: 0x80115984
extern unsigned char flyflag;

// address: 0x8011597C
// size: 0x8
extern char (*pad_styles[2])();

// address: 0x80115985
extern char speed_type;

// address: 0x80115986
extern char sel_speed;

// address: 0x801165C0
static unsigned long (*CurrentProc)();

// address: 0x80112EF8
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x801159DC
extern int NumOfStrings;

// address: 0x801159B0
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x801159B4
extern long hndText;

// address: 0x801159B8
extern char **TextPtr;

// address: 0x801159BC
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x801159EC
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x801159F0
extern int CharFade;

// address: 0x801159F4
extern int rotateness;

// address: 0x801159F8
extern int spiralling_shape;

// address: 0x801159FC
extern int down;

// address: 0x800D2CA8
// size: 0x10
extern char MlTab[16];

// address: 0x800D2CB8
// size: 0x10
extern char QlTab[16];

// address: 0x800D2CC8
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x80115A18
extern int MyXoff1;

// address: 0x80115A1C
extern int MyYoff1;

// address: 0x80115A20
extern int MyXoff2;

// address: 0x80115A24
extern int MyYoff2;

// address: 0x80115A34
extern bool iscflag;

// address: 0x80115A41
static unsigned char sgbFadedIn;

// address: 0x80115A42
static unsigned char screenbright;

// address: 0x80115A44
static int faderate;

// address: 0x80115A48
static bool fading;

// address: 0x80115A54
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x80115A4C
extern int st;

// address: 0x80115A50
extern int mode;

// address: 0x800D2E70
// size: 0x60
extern struct PortalStruct portal[4];

// address: 0x80115A80
extern int portalindex;

// address: 0x800D2E50
// size: 0x10
extern int WarpDropX[4];

// address: 0x800D2E60
// size: 0x10
extern int WarpDropY[4];

// address: 0x800D2ED0
// size: 0x78
extern char MyVerString[120];

// address: 0x80115BE8
extern int Year;

// address: 0x80115BEC
extern int Day;

// address: 0x801165C4
static unsigned char *tbuff;

// address: 0x801165C8
static unsigned char HR1;

// address: 0x801165C9
static unsigned char HR2;

// address: 0x801165CA
static unsigned char HR3;

// address: 0x801165CB
static unsigned char VR1;

// address: 0x801165CC
static unsigned char VR2;

// address: 0x801165CD
static unsigned char VR3;

// address: 0x80115C5C
// size: 0x18
extern struct NODE *pHallList;

// address: 0x80115C60
extern int nRoomCnt;

// address: 0x80115C64
extern int nSx1;

// address: 0x80115C68
extern int nSy1;

// address: 0x80115C6C
extern int nSx2;

// address: 0x80115C70
extern int nSy2;

// address: 0x80115C14
extern int Area_Min;

// address: 0x80115C18
extern int Room_Max;

// address: 0x80115C1C
extern int Room_Min;

// address: 0x80115C20
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x80115C28
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x80115C30
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x80115C38
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x80115C40
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x80115C44
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x80115C48
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x80115C4C
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x80115C50
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x80115C54
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x80115C58
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x801165D0
static int abyssx;

// address: 0x801165D4
static unsigned char lavapool;

// address: 0x80115CFC
extern int lockoutcnt;

// address: 0x80115C80
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x80115C88
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x80115C90
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x80115C98
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x80115CA0
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x80115CA8
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x80115CB0
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x80115CB8
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x80115CC0
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x80115CC8
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x80115CD0
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x80115CD8
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x80115CE0
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x80115CE8
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x80115CEC
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x80115CF0
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x80115CF4
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x80115CF8
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x80115D00
extern int diabquad1x;

// address: 0x80115D04
extern int diabquad2x;

// address: 0x80115D08
extern int diabquad3x;

// address: 0x80115D0C
extern int diabquad4x;

// address: 0x80115D10
extern int diabquad1y;

// address: 0x80115D14
extern int diabquad2y;

// address: 0x80115D18
extern int diabquad3y;

// address: 0x80115D1C
extern int diabquad4y;

// address: 0x80115D20
extern int SP4x1;

// address: 0x80115D24
extern int SP4y1;

// address: 0x80115D28
extern int SP4x2;

// address: 0x80115D2C
extern int SP4y2;

// address: 0x80115D30
extern int l4holdx;

// address: 0x80115D34
extern int l4holdy;

// address: 0x801165D8
static unsigned char *lpSetPiece1;

// address: 0x801165DC
static unsigned char *lpSetPiece2;

// address: 0x801165E0
static unsigned char *lpSetPiece3;

// address: 0x801165E4
static unsigned char *lpSetPiece4;

// address: 0x80115D44
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x80115D4C
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800D2F48
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800D2F5C
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800D2F78
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x80115D54
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800D2F8C
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x80115E40
static bool DoUiForChooseMonster;

// address: 0x800D2FB0
// size: 0x88
static char *MgToText[34];

// address: 0x800D3038
// size: 0x24
extern int StoryText[3][3];

// address: 0x800D305C
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800D425C
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800D489C
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x80115E64
extern int setpc_x;

// address: 0x80115E68
extern int setpc_y;

// address: 0x80115E6C
extern int setpc_w;

// address: 0x80115E70
extern int setpc_h;

// address: 0x80115E74
extern unsigned char setloadflag;

// address: 0x80115E78
extern unsigned char *pMegaTiles;

// address: 0x800D4EDC
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800D56E0
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800D5EE4
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800D66E8
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800D6EEC
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x80115E7C
extern int dminx;

// address: 0x80115E80
extern int dminy;

// address: 0x80115E84
extern int dmaxx;

// address: 0x80115E88
extern int dmaxy;

// address: 0x80115E8C
extern int gnDifficulty;

// address: 0x80115E90
extern unsigned char currlevel;

// address: 0x80115E91
extern unsigned char leveltype;

// address: 0x80115E92
extern unsigned char setlevel;

// address: 0x80115E93
extern unsigned char setlvlnum;

// address: 0x80115E94
extern unsigned char setlvltype;

// address: 0x80115E98
extern int ViewX;

// address: 0x80115E9C
extern int ViewY;

// address: 0x80115EA0
extern int ViewDX;

// address: 0x80115EA4
extern int ViewDY;

// address: 0x80115EA8
extern int ViewBX;

// address: 0x80115EAC
extern int ViewBY;

// address: 0x800D76F0
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x80115EB0
extern int LvlViewX;

// address: 0x80115EB4
extern int LvlViewY;

// address: 0x80115EB8
extern int btmbx;

// address: 0x80115EBC
extern int btmby;

// address: 0x80115EC0
extern int btmdx;

// address: 0x80115EC4
extern int btmdy;

// address: 0x80115EC8
extern int MicroTileLen;

// address: 0x80115ECC
extern char TransVal;

// address: 0x800D7704
// size: 0x20
extern bool TransList[8];

// address: 0x80115ED0
extern int themeCount;

// address: 0x800D7724
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x800F99E4
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x800FA548
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x800FB0AC
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x800FBC10
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x80115E5C
extern unsigned char *pSetPiece;

// address: 0x80115E60
extern int DungSize;

// address: 0x800FBDDC
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x80115F10
extern int numthemes;

// address: 0x80115F14
extern int zharlib;

// address: 0x80115F18
extern unsigned char armorFlag;

// address: 0x80115F19
extern unsigned char bCrossFlag;

// address: 0x80115F1A
extern unsigned char weaponFlag;

// address: 0x80115F1C
extern int themex;

// address: 0x80115F20
extern int themey;

// address: 0x80115F24
extern int themeVar1;

// address: 0x80115F28
extern unsigned char bFountainFlag;

// address: 0x80115F29
extern unsigned char cauldronFlag;

// address: 0x80115F2A
extern unsigned char mFountainFlag;

// address: 0x80115F2B
extern unsigned char pFountainFlag;

// address: 0x80115F2C
extern unsigned char tFountainFlag;

// address: 0x80115F2D
extern unsigned char treasureFlag;

// address: 0x80115F30
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x800FBCBC
// size: 0x10
extern int ThemeGood[4];

// address: 0x800FBCCC
// size: 0x64
extern int trm5x[25];

// address: 0x800FBD30
// size: 0x64
extern int trm5y[25];

// address: 0x800FBD94
// size: 0x24
extern int trm3x[9];

// address: 0x800FBDB8
// size: 0x24
extern int trm3y[9];

// address: 0x80115FE8
extern int nummissiles;

// address: 0x800FBFF4
// size: 0x1F4
extern int missileactive[125];

// address: 0x800FC1E8
// size: 0x1F4
extern int missileavail[125];

// address: 0x80115FEC
extern unsigned char MissilePreFlag;

// address: 0x800FC3DC
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x80115FED
extern unsigned char ManashieldFlag;

// address: 0x80115FEE
extern unsigned char ManashieldFlag2;

// address: 0x800FBF6C
// size: 0x20
extern int XDirAdd[8];

// address: 0x800FBF8C
// size: 0x20
extern int YDirAdd[8];

// address: 0x80115FD5
extern unsigned char fadetor;

// address: 0x80115FD6
extern unsigned char fadetog;

// address: 0x80115FD7
extern unsigned char fadetob;

// address: 0x800FBFAC
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x800FBFBC
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x800FEC8C
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x8011604C
extern long nummonsters;

// address: 0x8010440C
// size: 0x190
extern short monstactive[200];

// address: 0x8010459C
// size: 0x190
extern short monstkills[200];

// address: 0x8010472C
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x80116050
extern long monstimgtot;

// address: 0x80116054
extern char totalmonsters;

// address: 0x80116058
extern int uniquetrans;

// address: 0x801165E8
static unsigned char sgbSaveSoundOn;

// address: 0x80116020
// size: 0x8
extern char offset_x[8];

// address: 0x80116028
// size: 0x8
extern char offset_y[8];

// address: 0x80116008
// size: 0x8
extern char left[8];

// address: 0x80116010
// size: 0x8
extern char right[8];

// address: 0x80116018
// size: 0x8
extern char opposite[8];

// address: 0x80115FFC
extern int nummtypes;

// address: 0x80116000
// size: 0x7
extern char animletter[7];

// address: 0x800FEAEC
// size: 0x120
extern int MWVel[3][24];

// address: 0x80116030
// size: 0x4
extern char rnd5[4];

// address: 0x80116034
// size: 0x4
extern char rnd10[4];

// address: 0x80116038
// size: 0x4
extern char rnd20[4];

// address: 0x8011603C
// size: 0x4
extern char rnd60[4];

// address: 0x800FEC0C
// size: 0x80
extern void (*AiProc[32])();

// address: 0x80104C04
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x80106644
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x801066C4
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x80106734
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x801049EC
// size: 0x218
extern int TransPals[134];

// address: 0x801048EC
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x80116084
extern unsigned char invflag;

// address: 0x80116085
extern unsigned char drawsbarflag;

// address: 0x80116088
extern int InvBackY;

// address: 0x8011608C
extern int InvCursPos;

// address: 0x801076DC
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x80116090
extern int InvBackAY;

// address: 0x80116094
extern int InvSel;

// address: 0x80116098
extern int ItemW;

// address: 0x8011609C
extern int ItemH;

// address: 0x801160A0
extern int ItemNo;

// address: 0x801160A4
// size: 0x8
extern struct RECT BRect;

// address: 0x80116078
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x8011607C
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x80116074
extern int InvPageNo;

// address: 0x80107064
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8010708C
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x801072D4
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x80107574
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x80107628
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x80116080
static unsigned long sgdwLastTime;

// address: 0x801160CE
extern unsigned char automapflag;

// address: 0x80107728
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x801077F0
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x801160CF
extern unsigned char AMLWallFlag;

// address: 0x801160D0
extern unsigned char AMRWallFlag;

// address: 0x801160D1
extern unsigned char AMLLWallFlag;

// address: 0x801160D2
extern unsigned char AMLRWallFlag;

// address: 0x801160D3
extern unsigned char AMDirtFlag;

// address: 0x801160D4
extern unsigned char AMColumnFlag;

// address: 0x801160D5
extern unsigned char AMStairFlag;

// address: 0x801160D6
extern unsigned char AMLDoorFlag;

// address: 0x801160D7
extern unsigned char AMLGrateFlag;

// address: 0x801160D8
extern unsigned char AMLArchFlag;

// address: 0x801160D9
extern unsigned char AMRDoorFlag;

// address: 0x801160DA
extern unsigned char AMRGrateFlag;

// address: 0x801160DB
extern unsigned char AMRArchFlag;

// address: 0x801160DC
extern int AutoMapX;

// address: 0x801160E0
extern int AutoMapY;

// address: 0x801160E4
extern int AutoMapXOfs;

// address: 0x801160E8
extern int AutoMapYOfs;

// address: 0x801160EC
extern int AMPlayerX;

// address: 0x801160F0
extern int AMPlayerY;

// address: 0x801160B8
extern int AutoMapScale;

// address: 0x801160BC
extern unsigned char AutoMapPlayerR;

// address: 0x801160BD
extern unsigned char AutoMapPlayerG;

// address: 0x801160BE
extern unsigned char AutoMapPlayerB;

// address: 0x801160BF
extern unsigned char AutoMapWallR;

// address: 0x801160C0
extern unsigned char AutoMapWallG;

// address: 0x801160C1
extern unsigned char AutoMapWallB;

// address: 0x801160C2
extern unsigned char AutoMapDoorR;

// address: 0x801160C3
extern unsigned char AutoMapDoorG;

// address: 0x801160C4
extern unsigned char AutoMapDoorB;

// address: 0x801160C5
extern unsigned char AutoMapColumnR;

// address: 0x801160C6
extern unsigned char AutoMapColumnG;

// address: 0x801160C7
extern unsigned char AutoMapColumnB;

// address: 0x801160C8
extern unsigned char AutoMapArchR;

// address: 0x801160C9
extern unsigned char AutoMapArchG;

// address: 0x801160CA
extern unsigned char AutoMapArchB;

// address: 0x801160CB
extern unsigned char AutoMapStairR;

// address: 0x801160CC
extern unsigned char AutoMapStairG;

// address: 0x801160CD
extern unsigned char AutoMapStairB;

// address: 0x80116744
extern unsigned long GazTick;

// address: 0x8011D068
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A37F8
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x8011676C
extern void (*PollFunc)();

// address: 0x80116750
extern void (*MsgFunc)();

// address: 0x8011679C
extern void (*ErrorFunc)();

// address: 0x80116670
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x80116674
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x80116678
// size: 0x5C
static struct TASK *T;

// address: 0x8011667C
static unsigned long MemTypeForTasker;

// address: 0x8011A898
// size: 0x30
static int SchEnv[12];

// address: 0x80116680
static unsigned long ExecId;

// address: 0x80116684
static unsigned long ExecMask;

// address: 0x80116688
static int TasksActive;

// address: 0x8011668C
static void (*EpiFunc)();

// address: 0x80116690
static void (*ProFunc)();

// address: 0x80116694
static unsigned long EpiProId;

// address: 0x80116698
static unsigned long EpiProMask;

// address: 0x8011669C
static void (*DoTasksPrologue)();

// address: 0x801166A0
static void (*DoTasksEpilogue)();

// address: 0x801166A4
static void (*StackFloodCallback)();

// address: 0x801166A8
static unsigned char ExtraStackProtection;

// address: 0x801166AC
static int ExtraStackSizeLongs;

// address: 0x80116758
extern void *LastPtr;

// address: 0x800A3830
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x801166B0
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x8011A8C8
// size: 0x1180
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x801166B4
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x801166B8
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x801166BC
static int TimeStamp;

// address: 0x801166C0
static unsigned char FullErrorChecking;

// address: 0x801166C4
static unsigned long LastAttemptedAlloc;

// address: 0x801166C8
static unsigned long LastDeallocedBlock;

// address: 0x801166CC
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x801166D0
static int NumOfFreeHdrs;

// address: 0x801166D4
static unsigned long LastTypeAlloced;

// address: 0x801166D8
static void (*AllocFilter)();

// address: 0x800A3838
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A3860
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x8011BA48
// size: 0x1380
static char buf[4992];

// address: 0x800A3888
// size: 0x7
static char NULL_REP[7];

// address: 0x80079E14
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x80079E30
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x80079E3C
void Remove96__Fv() {
}


// address: 0x80079E74
void AppMain() {
}


// address: 0x80079F14
void MAIN_RestartGameTask__Fv() {
}


// address: 0x80079F40
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007A028
void MAIN_MainLoop__Fv() {
}


// address: 0x8007A070
void CheckMaxArgs__Fv() {
}


// address: 0x8007A0A4
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007A0B0
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


// address: 0x8007A224
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A2D8
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007A378
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A414
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A4B4
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


// address: 0x8007A5D0
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007A6AC
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007A7D4
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007A7E0
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007A81C
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007AA24
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007AA30
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007AA6C
unsigned char ClearedYet__Fv() {
}


// address: 0x8007AA78
void PrimDrawSycnCallBack() {
}


// address: 0x8007AA98
void SendDispEnv__Fv() {
}


// address: 0x8007AABC
// size: 0x18
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007AAD4
// size: 0x28
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007AAEC
// size: 0x34
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007AB04
// size: 0x24
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007AB1C
// size: 0x14
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007AB34
// size: 0xC
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007AB4C
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007AC60
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007ACC8
void VID_AfterDisplay__Fv() {
}


// address: 0x8007ACE8
void VID_ScrOn__Fv() {
}


// address: 0x8007AD10
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007AD68
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007AD74
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007AD80
void VID_DispEnvSend() {
}


// address: 0x8007ADBC
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007ADCC
int VID_GetXOff__Fv() {
}


// address: 0x8007ADD8
int VID_GetYOff__Fv() {
}


// address: 0x8007ADE4
void VID_SetDBuffer__Fb(bool DBuf) {
}


// address: 0x8007AF00
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007AF08
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007AF28
int GetTpY__FUs_addr_8007AF28(unsigned short tpage) {
}


// address: 0x8007AF44
int GetTpX__FUs_addr_8007AF44(unsigned short tpage) {
}


// address: 0x8007AF50
// size: 0x14
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007AF5C
// size: 0x14
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007AF68
void SortOutFileSystem__Fv() {
}


// address: 0x8007B0A4
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007B0C4
void Spanker__Fv() {
}


// address: 0x8007B104
void GaryLiddon__Fv() {
}


// address: 0x8007B10C
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


// address: 0x8007B1D0
void DummyPoll__Fv() {
}


// address: 0x8007B1D8
void DaveOwens__Fv() {
}


// address: 0x8007B200
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007B228
int GetTpY__FUs_addr_8007B228(unsigned short tpage) {
}


// address: 0x8007B244
int GetTpX__FUs_addr_8007B244(unsigned short tpage) {
}


// address: 0x8007B250
void TimSwann__Fv() {
}


// address: 0x8007B258
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007B260
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007B294
void leighbird__Fv() {
}


// address: 0x8007B2BC
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007B30C
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007B360
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007B4C8
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B52C
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B54C
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007B62C
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007B6F0
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007B754
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007B830
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


// address: 0x8007B944
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007B9EC
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007BA44
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007BA9C
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007BAB0
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007BAEC
// size: 0x14
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007BB54
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007BBAC
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007BBF0
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007BCB4
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007BD6C
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007BE40
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


// address: 0x8007C050
// size: 0x4
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007C068
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007C094
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007C110
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007C17C
// size: 0x14
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007C1B8
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007C210
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007C250
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007C310
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007C3C4
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007C46C
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


// address: 0x8007C678
// size: 0x6C
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007C6B8
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007C700
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


// address: 0x8007C8F4
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80116394
	static int TpX;
	// address: 0x80116398
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


// address: 0x8007C9C4
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007CA7C
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007CAD8
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007CB48
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


// address: 0x8007CC74
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


// address: 0x8007CD70
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


// address: 0x8007D178
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


// address: 0x8007D3E4
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


// address: 0x8007D544
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


// address: 0x8007D640
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


// address: 0x8007D89C
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


// address: 0x8007D91C
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


// address: 0x8007DAE0
// size: 0x28
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007DC34
// size: 0x34
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007DD88
// size: 0x28
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007DE6C
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007DFC0
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


// address: 0x8007E100
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x8007E1FC
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007E228
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007E370
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


// address: 0x8007E490
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x8007E4E4
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


// address: 0x8007E5AC
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8007E600
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x8007E658
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


// address: 0x8007E77C
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


// address: 0x8007E850
// size: 0x4
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x8007E8A0
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x8007E8C8
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x8007E970
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


// address: 0x8007EA30
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x8007EA74
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


// address: 0x8007EB04
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8007EB74
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


// address: 0x8007EBE0
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007EC30
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007EC58
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


// address: 0x8007ECF4
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x8007ED5C
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


// address: 0x8007EE30
// size: 0x78
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x8007EE64
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


// address: 0x8007F0E0
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x8007F104
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007F3E4
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x8007F45C
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


// address: 0x8007F5B8
void _GLOBAL__D_DatPool() {
}


// address: 0x8007F610
void _GLOBAL__I_DatPool() {
}


// address: 0x8007F664
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x8007F6E0
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x8007F75C
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8007F7D8
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F800
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F828
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F834
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F840
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8007F8B8
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x8007F8CC
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8007F8D8
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x8007F8EC
// size: 0x8
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x8007F908
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8007F924
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F930
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F958
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F980
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x8007F994
// size: 0x14
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x8007F9D8
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x8007FA30
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007FA54
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007FA7C
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007FAA0
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FB80
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x8007FB90
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


// address: 0x8007FCDC
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


// address: 0x8007FF40
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x8008002C
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


// address: 0x80080158
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


// address: 0x800802C4
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


// address: 0x8008057C
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


// address: 0x8008067C
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


// address: 0x80080818
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x8008083C
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80080870
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80080958
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80080964
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x800809C8
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


// address: 0x80080AA8
// size: 0x14
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80080AD4
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80080B0C
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


// address: 0x80080C24
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


// address: 0x80080CF8
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x80080E1C
void Tfree__FPv(void *Addr) {
}


// address: 0x80080ECC
void InitTmalloc__Fv() {
}


// address: 0x80080EF4
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80080F48
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80080F94
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


// address: 0x8008106C
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80081098
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


// address: 0x800812E0
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


// address: 0x800815F0
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


// address: 0x80081710
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


// address: 0x80081814
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80081824
bool PA_GetPauseOk__Fv() {
}


// address: 0x80081830
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80081980
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081988
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081A88
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081A90
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081A98
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081B98
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081BA0
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081BA8
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081CD8
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081CE0
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80081D08
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80081D30
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80081D58
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081D9C
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80081DD0
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80081DE4
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80081E04
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081E0C
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081E14
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80081E3C
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80081E98
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x80081EC0
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x80081EE8
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x80081EF4
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x8008200C
void PAD_Handler__Fv() {
	// register: 16
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 17
	register unsigned char fin;
}


// address: 0x800821C4
// size: 0x6C
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x80082260
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80082398
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x800824F4
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80082618
void _GLOBAL__I_Pad0() {
}


// address: 0x80082650
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x80082658
unsigned char CheckActive__4CPad_addr_80082658(struct CPad *this) {
}


// address: 0x80082664
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x8008266C
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x80082674
// size: 0x6C
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x800826A8
void Flush__4CPad(struct CPad *this) {
}


// address: 0x800826CC
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


// address: 0x80082768
void InitPrinty__Fv() {
}


// address: 0x800827F0
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x800827F8
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80082978
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


// address: 0x80082D10
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x80082D78
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80082DDC
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80082DE8
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80082E0C
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80082E2C
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80082E44
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80082E9C
void Init__5CFont(struct CFont *this) {
}


// address: 0x80082ED0
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80082ED0(struct TextDat *this, int FrNum) {
}


// address: 0x80082EEC
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80082F24
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


// address: 0x8008389C
// size: 0x24
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x800839D4
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


// address: 0x80083C78
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


// address: 0x80083DB0
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80084008
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


// address: 0x800851C8
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


// address: 0x800853E0
// size: 0x8
struct PAL *GetPal__7TextDati_addr_800853E0(struct TextDat *this, int PalNum) {
}


// address: 0x800853FC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800853FC(struct TextDat *this, int FrNum) {
}


// address: 0x80085418
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80085518
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x800855B4
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x800855F4
void CycleSelCols__Fv() {
}


// address: 0x80085784
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


// address: 0x800857F8
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008584C
// size: 0xE0
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x800859A0
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x800859D8
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x80085AA0
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80085B28
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80085B90
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80085BF8
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x80085C54
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x80085CA4
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80085FF0
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x8008609C
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x80086170
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


// address: 0x80086278
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


// address: 0x800863B4
// size: 0xC
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x8008642C
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x80086454
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x8008647C
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80086494
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


// address: 0x8008799C
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


// address: 0x80087B0C
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


// address: 0x80088824
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


// address: 0x80088EE8
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


// address: 0x80089058
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008906C
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x80089080
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x80089144
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x800891AC
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008924C
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x80089320
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x800893A0
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800893A8
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800893BC
// size: 0xE0
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x800893C8
void PRIM_GetPrim__FPP8POLY_FT4_addr_800893C8(struct POLY_FT4 **Prim) {
}


// address: 0x80089444
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008948C
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800894C8
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80089510
void PRIM_GetPrim__FPP8POLY_GT4_addr_80089510(struct POLY_GT4 **Prim) {
}


// address: 0x8008958C
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x80089608
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


// address: 0x80089630
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008964C
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80089674
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008969C
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x800896C0
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x800896E4
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008970C
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x80089718
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x800897B0
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x80089840
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80089878
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80089878(struct TextDat *this, int Creature) {
}


// address: 0x800898F0
int GetNumOfCreatures__7TextDat_addr_800898F0(struct TextDat *this) {
}


// address: 0x80089904
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_80089904(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80089910
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80089910(struct TextDat *this, int PalNum) {
}


// address: 0x8008992C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008992C(struct TextDat *this, int FrNum) {
}


// address: 0x80089948
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x80089974
void OVR_LoadPregame__Fv() {
}


// address: 0x8008999C
void OVR_LoadFrontend__Fv() {
}


// address: 0x800899C4
void OVR_LoadGame__Fv() {
}


// address: 0x800899EC
void OVR_LoadFmv__Fv() {
}


// address: 0x80089A14
void OVR_LoadMemcard__Fv() {
}


// address: 0x80089A40
void ClearOutOverlays__Fv() {
}


// address: 0x80089A98
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x80089B5C
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x80089BCC
// size: 0x4
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x80089BD8
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x80089C2C
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x80089D9C
// size: 0x4
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x80089DA8
void StevesDummyPoll__Fv() {
}


// address: 0x80089DB0
void Lambo__Fv() {
}


// address: 0x80089DB8
// size: 0x84
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x80089E9C
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x80089EF4
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x80089F50
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


// address: 0x8008A09C
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


// address: 0x8008A4C8
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008A548
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


// address: 0x8008AA3C
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008AAB8
// size: 0x4
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008AB34
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008AB3C
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008AB44
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008AB44(struct POLY_FT4 **Prim) {
}


// address: 0x8008ABC0
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008ABC0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008ABFC
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008ABFC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008AC24
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008AC38
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008AC50
int GetNumOfFrames__7TextDatii_addr_8008AC50(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008AC88
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008ACAC
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008ACAC(struct TextDat *this, int Creature) {
}


// address: 0x8008AD24
int GetNumOfCreatures__7TextDat_addr_8008AD24(struct TextDat *this) {
}


// address: 0x8008AD38
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008AD38(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008AD44
void PROF_Open__Fv() {
}


// address: 0x8008AD84
bool PROF_State__Fv() {
}


// address: 0x8008AD90
void PROF_On__Fv() {
}


// address: 0x8008ADA0
void PROF_Off__Fv() {
}


// address: 0x8008ADAC
void PROF_CpuEnd__Fv() {
}


// address: 0x8008ADDC
void PROF_CpuStart__Fv() {
}


// address: 0x8008AE00
void PROF_DrawStart__Fv() {
}


// address: 0x8008AE24
void PROF_DrawEnd__Fv() {
}


// address: 0x8008AE54
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


// address: 0x8008B048
void PROF_Restart__Fv() {
}


// address: 0x8008B068
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008B128
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008B1D8
void GoBackLevel__Fv() {
}


// address: 0x8008B250
void GoWarpLevel__Fv() {
}


// address: 0x8008B288
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B324
void GoLoadGame__Fv() {
}


// address: 0x8008B3AC
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B448
void GoNewLevel__Fv() {
}


// address: 0x8008B49C
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B534
void GoForwardLevel__Fv() {
}


// address: 0x8008B58C
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B624
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008B674
void PostNewGame__Fv() {
}


// address: 0x8008B6AC
void LevelToLevelInit__Fv() {
}


// address: 0x8008B704
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008B748
// size: 0x10
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008B7A0
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


// address: 0x8008BC14
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


// address: 0x8008C098
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


// address: 0x8008C1F8
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008C244
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008C600
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008C6F4
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008C7F8
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008C7F8(struct TextDat *this, int PalNum) {
}


// address: 0x8008C814
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008C814(struct TextDat *this, int FrNum) {
}


// address: 0x8008C830
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008C844
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008C884
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


// address: 0x8008C910
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


// address: 0x8008C9D8
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


// address: 0x8008CB10
// size: 0x80
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008CC4C
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008CCA4
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008CDB0
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008CE00
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008CE50
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008CEBC
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008CFC8
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008D0E8
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008D1B0
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008D38C
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


// address: 0x8008D684
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


// address: 0x8008DAB0
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


// address: 0x8008DBC0
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x8008DC90
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8008DCFC
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8008DD74
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x801163FC
	static int DestAddr;
}


// address: 0x8008DDEC
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8008DF20
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DF74
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8008DF98
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DFFC
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


// address: 0x8008E1B0
void AS_CallBack0__Fi(int handle) {
}


// address: 0x8008E1C4
void AS_CallBack1__Fi(int handle) {
}


// address: 0x8008E1D8
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x8008E2B4
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8008E354
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008E360
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8008E38C
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x8008E4AC
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x8008E4E0
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8008E570
// size: 0x18
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E64C
// size: 0x18
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E6CC
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x8008E76C
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E800
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


// address: 0x8008E874
void SCR_Handler__Fv() {
}


// address: 0x8008E89C
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8008E8A4
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008E8E0
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008E944
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E99C
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E9F4
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008EA08
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x8008EA34
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x8008EA3C
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8008EA44
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x8008EA50
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008EA88
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8008EA94
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008EAB4
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008EB00
void stub__FPcPv_addr_8008EB00(char *e, void *argptr) {
}


// address: 0x8008EB08
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8008EB3C
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008EBC4
void print_demo_task__FP4TASK(struct TASK *T) {
}


// address: 0x8008ECF4
void TonysDummyPoll__Fv() {
}


// address: 0x8008ED18
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8008ED78
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8008EDD8
void set_pad_record_play__Fi(int level) {
}


// address: 0x8008EE50
void demo_game_task__FP4TASK(struct TASK *T) {
}


// address: 0x8008EE88
void start_demo__Fv() {
}


// address: 0x8008EF04
void tony__Fv() {
}


// address: 0x8008EF3C
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8008EF48
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8008EF54
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008EFA8
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008EFFC
void GLUE_PreTown__Fv() {
}


// address: 0x8008F060
void GLUE_PreDun__Fv() {
}


// address: 0x8008F0AC
bool GLUE_Finished__Fv() {
}


// address: 0x8008F0B8
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8008F0C4
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8008F148
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008F158
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008F168
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008F178
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8008F250
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


// address: 0x8008F73C
// size: 0x8
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x8008F7C4
// size: 0x8
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8008F820
// size: 0x8
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8008F850
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x8008F890
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x8008F8E4
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x8008F990
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008F99C
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x8008F9A4
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008F9B8
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8008FA30
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x8008FA68
void RemoveCtrlScreen__Fv() {
}


// address: 0x8008FAB8
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


// address: 0x800900C8
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80090108
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80090148
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


// address: 0x8009029C
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x800902E4
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x8009064C
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


// address: 0x80090B5C
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


// address: 0x800910B8
void _GLOBAL__D_ctrlflag() {
}


// address: 0x800910E0
void _GLOBAL__I_ctrlflag() {
}


// address: 0x80091108
unsigned short GetDown__C4CPad_addr_80091108(struct CPad *this) {
}


// address: 0x80091130
unsigned short GetCur__C4CPad_addr_80091130(struct CPad *this) {
}


// address: 0x80091158
void SetRGB__6DialogUcUcUc_addr_80091158(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80091178
void SetBorder__6Dialogi_addr_80091178(struct Dialog *this, int Type) {
}


// address: 0x80091180
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8009118C
void ___6Dialog_addr_8009118C(struct Dialog *this, int __in_chrg) {
}


// address: 0x800911B4
// size: 0x10
struct Dialog *__6Dialog_addr_800911B4(struct Dialog *this) {
}


// address: 0x80091210
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x8009125C
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x800913DC
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


// address: 0x80091520
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	register int diff;
}


// address: 0x80091770
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x800917C4
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


// address: 0x80091A28
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80091C10
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


// address: 0x80091DD8
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80091DD8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80091E14
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80091E14(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80091E3C
void PRIM_GetPrim__FPP8POLY_FT4_addr_80091E3C(struct POLY_FT4 **Prim) {
}


// address: 0x80091EB8
int GetNumOfActions__7TextDati_addr_80091EB8(struct TextDat *this, int Creature) {
}


// address: 0x80091EDC
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80091EDC(struct TextDat *this, int Creature) {
}


// address: 0x80091F54
int GetNumOfCreatures__7TextDat_addr_80091F54(struct TextDat *this) {
}


// address: 0x80091F68
void DaveLDummyPoll__Fv() {
}


// address: 0x80091F70
void DaveL__Fv() {
}


// address: 0x80091F98
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
	// address: 0x801150E0
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


// address: 0x80092278
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


// address: 0x80092554
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x80092620
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


// address: 0x800926A8
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


// address: 0x80092898
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


// address: 0x800929CC
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


// address: 0x80092B9C
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80092D3C
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80092E20
void doparticlejump__Fv() {
}


// address: 0x80092E60
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80092FC8
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


// address: 0x800933C0
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80093480
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


// address: 0x80093728
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x8009394C
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80093A70
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


// address: 0x80093B88
void HealStart__Fi(int plr) {
}


// address: 0x80093BBC
void HealotherStart__Fi(int plr) {
}


// address: 0x80093BF4
void TeleStart__Fi(int plr) {
}


// address: 0x80093C50
void PhaseStart__Fi(int plr) {
}


// address: 0x80093C84
void InvisStart__Fi(int plr) {
}


// address: 0x80093CB8
void PhaseEnd__Fi(int plr) {
}


// address: 0x80093CE4
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80093E90
void ApocUpdate__11SPELLFX_DAT(struct SPELLFX_DAT *this) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x80093EFC
void ApocaStart__Fi(int plr) {
}


// address: 0x80093F50
void doapocaFX__Fv() {
	// register: 17
	register int plr;
}


// address: 0x80094130
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80094194
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x80094210
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x8009428C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009428C(struct POLY_FT4 **Prim) {
}


// address: 0x80094308
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80094308(struct TextDat *this, int FrNum) {
}


// address: 0x80094324
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


// address: 0x80094528
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


// address: 0x80094924
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80094998
void select_belt_item__Fi(int pnum) {
}


// address: 0x800949A0
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094A00
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094B2C
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094C60
void pad_func_up__Fi(int pnum) {
}


// address: 0x80094C8C
void pad_func_down__Fi(int pnum) {
}


// address: 0x80094CB8
void pad_func_left__Fi(int pnum) {
}


// address: 0x80094CC0
void pad_func_right__Fi(int pnum) {
}


// address: 0x80094CC8
void pad_func_select__Fi(int pnum) {
}


// address: 0x80094DB8
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80095178
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


// address: 0x80095498
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


// address: 0x800955E0
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80095670
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


// address: 0x80095C6C
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80095D60
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80095E9C
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80095FBC
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800960D4
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80096180
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x8009624C
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80096364
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x800963D8
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x800965A8
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800965D0
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800965F8
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


// address: 0x80096730
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009683C
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


// address: 0x800970F8
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


// address: 0x800971D4
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x800972E0
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80097694
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


// address: 0x800978E0
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x80097B14
void _GLOBAL__D_gplayer() {
}


// address: 0x80097B3C
void _GLOBAL__I_gplayer() {
}


// address: 0x80097B64
void SetRGB__6DialogUcUcUc_addr_80097B64(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80097B84
void SetBack__6Dialogi_addr_80097B84(struct Dialog *this, int Type) {
}


// address: 0x80097B8C
void SetBorder__6Dialogi_addr_80097B8C(struct Dialog *this, int Type) {
}


// address: 0x80097B94
void ___6Dialog_addr_80097B94(struct Dialog *this, int __in_chrg) {
}


// address: 0x80097BBC
// size: 0x10
struct Dialog *__6Dialog_addr_80097BBC(struct Dialog *this) {
}


// address: 0x80097C18
void MoveToScrollTarget__7CBlocks_addr_80097C18(struct CBlocks *this) {
}


// address: 0x80097C2C
unsigned short GetDown__C4CPad_addr_80097C2C(struct CPad *this) {
}


// address: 0x80097C54
unsigned short GetCur__C4CPad_addr_80097C54(struct CPad *this) {
}


// address: 0x80097C7C
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80097CF8
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80097D50
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80097DAC
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80097DE4
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80097E1C
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80097E7C
bool IsGameLoading__Fv() {
}


// address: 0x80097E88
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


// address: 0x800982E0
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x80098390
void TakeDownCutScreen__Fv() {
}


// address: 0x800983D8
void FinishProgress__Fv() {
}


// address: 0x80098420
void PRIM_GetPrim__FPP7POLY_G4_addr_80098420(struct POLY_G4 **Prim) {
}


// address: 0x8009849C
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x800984D4
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x8009850C
void SetRGB__6DialogUcUcUc_addr_8009850C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009852C
void SetBack__6Dialogi_addr_8009852C(struct Dialog *this, int Type) {
}


// address: 0x80098534
void SetBorder__6Dialogi_addr_80098534(struct Dialog *this, int Type) {
}


// address: 0x8009853C
void ___6Dialog_addr_8009853C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80098564
// size: 0x10
struct Dialog *__6Dialog_addr_80098564(struct Dialog *this) {
}


// address: 0x800985C0
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x800985E0
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x800987FC
void memcard_event__Fii(int evt, int side) {
}


// address: 0x80098804
void init_card__Fi(int card_number) {
}


// address: 0x80098838
int ping_card__Fi(int card_number) {
}


// address: 0x800988CC
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x80098904
void MemcardON__Fv() {
}


// address: 0x80098970
void MemcardOFF__Fv() {
}


// address: 0x800989C0
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x80098AA4
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


// address: 0x80098F6C
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


// address: 0x80099A9C
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


// address: 0x8009A134
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


// address: 0x8009A7D8
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


// address: 0x8009ADE8
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


// address: 0x8009B20C
void CalcVolumes__Fv() {
}


// address: 0x8009B34C
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


// address: 0x8009B454
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009B5FC
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


// address: 0x8009BC0C
void ToggleOptions__Fv() {
}


// address: 0x8009BCAC
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


// address: 0x8009BFA4
void PRIM_GetPrim__FPP7POLY_G4_addr_8009BFA4(struct POLY_G4 **Prim) {
}


// address: 0x8009C020
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009C048
unsigned short GetDown__C4CPad_addr_8009C048(struct CPad *this) {
}


// address: 0x8009C070
unsigned short GetUp__C4CPad_addr_8009C070(struct CPad *this) {
}


// address: 0x8009C098
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8009C0A0
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009C0A8
void SetRGB__6DialogUcUcUc_addr_8009C0A8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009C0C8
void SetBack__6Dialogi_addr_8009C0C8(struct Dialog *this, int Type) {
}


// address: 0x8009C0D0
void SetBorder__6Dialogi_addr_8009C0D0(struct Dialog *this, int Type) {
}


// address: 0x8009C0D8
int SetOTpos__6Dialogi_addr_8009C0D8(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8009C0E4
void ___6Dialog_addr_8009C0E4(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009C10C
// size: 0x10
struct Dialog *__6Dialog_addr_8009C10C(struct Dialog *this) {
}


// address: 0x8009C168
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009C168(struct TextDat *this, int FrNum) {
}


// address: 0x8009C184
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009C1DC
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x8009C3B8
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009C434
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 2
	register int type;
	// register: 4
	register int i;
}


// address: 0x8009C514
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009C568
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009C6D0
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C7D4
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C810
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C894
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C940
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C9E4
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


// address: 0x8009CA88
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


// address: 0x8009CD34
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009CD40
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009CD90
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009CE7C
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


// address: 0x8009CFAC
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009D084
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009D1DC
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x8009D278
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x8009D3A8
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x8009D4AC
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


// address: 0x8009D6B8
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009D6B8(struct POLY_FT4 **Prim) {
}


// address: 0x8009D734
short PlayFMV__FPCc(char *str) {
	// register: 16
	register short RetVal;
	// register: 17
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009D7DC
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


// address: 0x8009D86C
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


// address: 0x8009DD08
unsigned short GetDown__C4CPad_addr_8009DD08(struct CPad *this) {
}


// address: 0x8009DD30
int GetNumOfFrames__7TextDatii_addr_8009DD30(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8009DD68
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8009DD68(struct TextDat *this, int Creature) {
}


// address: 0x8009DDE0
int GetNumOfCreatures__7TextDat_addr_8009DDE0(struct TextDat *this) {
}


// address: 0x8009DDF4
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009DDF4(struct TextDat *this, int FrNum) {
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


// address: 0x80035C78
unsigned char TryIconCurs__Fv() {
}


// address: 0x80036024
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x8003602C
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800360DC
void LoadLvlGFX__Fv() {
}


// address: 0x80036178
void LoadAllGFX__Fv() {
}


// address: 0x80036198
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036290
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80036418
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


// address: 0x800364F4
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


// address: 0x80036E10
void game_logic__Fv() {
}


// address: 0x80036F1C
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80036FC4
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80036FFC
void alloc_plr__Fv() {
}


// address: 0x80037004
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x8003700C
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x8003702C
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x8003704C
void app_fatal(char *pszFile) {
}


// address: 0x8003707C
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800370A4
void DoMemCardFromInGame__Fv() {
}


// address: 0x800370CC
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037120
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037140
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037188
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800372E8
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x800373A0
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800374CC
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037600
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037730
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037860
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037990
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037AC8
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037BF8
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037D28
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E58
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


// address: 0x8003811C
void InitTowners__Fv() {
}


// address: 0x800381A8
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


// address: 0x8003824C
void TownCtrlMsg__Fi(int i) {
	// register: 3
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038364
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038398
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800383CC
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800384B4
void TownHealer__Fv() {
}


// address: 0x800384DC
void TownStory__Fv() {
}


// address: 0x80038504
void TownDrunk__Fv() {
}


// address: 0x8003852C
void TownBoy__Fv() {
}


// address: 0x80038554
void TownWitch__Fv() {
}


// address: 0x8003857C
void TownBarMaid__Fv() {
}


// address: 0x800385A4
void TownCow__Fv() {
}


// address: 0x800385CC
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


// address: 0x8003881C
// size: 0x94
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800388E0
void CowSFX__Fi(int pnum) {
	// address: 0x8010B764
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x801156E4
	static int snLastCowSFX;
}


// address: 0x800389EC
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038A2C
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


// address: 0x80039E24
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x80039E2C
void stream_stop__Fv() {
}


// address: 0x80039E74
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x80039F38
void stream_update__Fv() {
}


// address: 0x80039F40
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x80039F5C
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x80039FB4
void FreeMonsterSnd__Fv() {
}


// address: 0x80039FBC
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A0B8
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A1C0
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003A2E4
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A37C
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A3BC
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A410
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


// address: 0x8003A4A8
void sound_update__Fv() {
}


// address: 0x8003A4DC
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A520
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003A5C0
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003A664
void SetRndSeed__Fl(long s) {
}


// address: 0x8003A674
long GetRndSeed__Fv() {
}


// address: 0x8003A6BC
long random__Fil(int idx, long v) {
}


// address: 0x8003A728
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003A774
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003A7C4
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003A7CC
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003A85C
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003A864
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003A8F8
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003A924
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFEE8
	// size: 0x100
	auto char tempstr[256];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x8003AA30
void interface_msg_pump__Fv() {
}


// address: 0x8003AA38
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


// address: 0x8003AEF4
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003AF2C
void InitItemGFX__Fv() {
}


// address: 0x8003AF58
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003B020
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


// address: 0x8003B238
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003B3F8
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


// address: 0x8003BE80
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003C1D8
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003C274
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


// address: 0x8003C3CC
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003C418
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


// address: 0x8003C4F0
void CalcPlrBookVals__Fi(int p) {
	// register: 17
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003C764
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003C820
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003C938
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003C964
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


// address: 0x8003CAD0
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003CAD8
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CB08
void CreatePlrItems__Fi(int p) {
	// register: 4
	register int i;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8003CF14
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003D1EC
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


// address: 0x8003D418
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


// address: 0x8003D580
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


// address: 0x8003D648
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003D700
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003D968
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


// address: 0x8003DB58
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


// address: 0x8003DE0C
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003E358
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003E390
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003E404
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8003F9F8
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


// address: 0x8003FE60
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x8003FF5C
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80040068
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x800402AC
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


// address: 0x800404EC
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80040660
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


// address: 0x80040760
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


// address: 0x80040910
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80040BB8
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80040CC4
void ItemRndDur__Fi(int ii) {
}


// address: 0x80040D54
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80041060
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x800412A8
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x800413D8
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041520
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x800415F8
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x800416B8
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800417FC
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x800419E8
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


// address: 0x80041C14
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


// address: 0x80041DD4
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x80041F98
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80041FEC
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x94
	register struct ItemStruct *i;
}


// address: 0x800420B4
void ProcessItems__Fv() {
	// register: 6
	register int i;
	// register: 5
	register int ii;
}


// address: 0x800421F8
void FreeItemGFX__Fv() {
}


// address: 0x80042200
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


// address: 0x80042390
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x80042470
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80042540
void DoRepair__Fii(int pnum, int cii) {
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x800425FC
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x8004266C
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


// address: 0x80042764
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80042858
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80042F04
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x80042F0C
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043198
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043504
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043814
void CastScroll__Fi(int pnum) {
}


// address: 0x8004381C
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80043E28
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80043EB4
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80043F30
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80044038
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x94
	auto struct ItemStruct holditem;
}


// address: 0x8004424C
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x80044480
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x800445C8
void SpawnStoreGold__Fv() {
}


// address: 0x80044648
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x800447E8
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x8004484C
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x800449DC
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80044B58
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80044CD4
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x80044E48
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80045060
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x800450C8
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 5
	register int y;
	// register: 4
	register int c;
}


// address: 0x8004513C
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x800451A8
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


// address: 0x80045E58
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


// address: 0x8004609C
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


// address: 0x80046160
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


// address: 0x80046670
void FreeLightTable__Fv() {
}


// address: 0x80046678
void InitLightTable__Fv() {
}


// address: 0x80046680
void MakeLightTable__Fv() {
}


// address: 0x80046688
void InitLightMax__Fv() {
}


// address: 0x800466AC
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x800466F0
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x80046784
void AddUnLight__Fi(int i) {
}


// address: 0x800467B4
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x800467E0
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80046818
void light_fix__Fi(int i) {
}


// address: 0x80046820
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80046858
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x8004689C
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x800468CC
void ProcessLightList__Fv() {
	// register: 7
	register int i;
	// register: 16
	register int j;
	// register: 4
	register unsigned char temp;
}


// address: 0x800469F8
void SavePreLighting__Fv() {
}


// address: 0x80046A00
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80046A50
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80046B54
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80046C08
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x80046CC0
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x80046F20
void FreeQuestText__Fv() {
}


// address: 0x80046F28
void InitQuestText__Fv() {
}


// address: 0x80046F34
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


// address: 0x80047074
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x80047174
void DrawQTextBack__Fv() {
}


// address: 0x800471E4
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80047270
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800472FC
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


// address: 0x80047634
void _GLOBAL__D_QBack() {
}


// address: 0x8004765C
void _GLOBAL__I_QBack() {
}


// address: 0x80047684
void SetRGB__6DialogUcUcUc_addr_80047684(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800476A4
void SetBorder__6Dialogi_addr_800476A4(struct Dialog *this, int Type) {
}


// address: 0x800476AC
void ___6Dialog_addr_800476AC(struct Dialog *this, int __in_chrg) {
}


// address: 0x800476D4
// size: 0x10
struct Dialog *__6Dialog_addr_800476D4(struct Dialog *this) {
}


// address: 0x80047730
int GetCharWidth__5CFontc_addr_80047730(struct CFont *this, char ch) {
}


// address: 0x80047788
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80047788(struct TextDat *this, int FrNum) {
}


// address: 0x800477A4
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x800477AC
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800477B4
void delta_init__Fv() {
}


// address: 0x80047814
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x800478B0
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047934
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x800479C4
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


// address: 0x80047CF0
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80047D50
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


// address: 0x80047F14
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


// address: 0x8004809C
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x800480C0
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x800480E4
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


// address: 0x800482F8
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x80048328
int DeltaImportData__FPc(char *Src) {
}


// address: 0x8004835C
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80048448
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x80048470
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x800484BC
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x800484EC
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80048524
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80048564
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x800485AC
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x800485D8
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80048608
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80048640
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x800486B4
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x800487E8
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048864
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x800488BC
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048924
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048A24
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x80048AC0
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x80048AF0
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048C04
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80048C0C
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80048C40
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80048C9C
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80048CDC
void check_update_plr__Fi(int pnum) {
}


// address: 0x80048CE4
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048D80
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048DB0
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048DE0
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048E10
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048E40
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048EAC
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048F48
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x80049080
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


// address: 0x80049248
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x800492E4
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049410
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


// address: 0x800495D0
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049664
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


// address: 0x800497FC
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 3
			register int ii;
		}
	}
}


// address: 0x80049930
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
}


// address: 0x80049A38
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049ADC
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049BDC
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049CCC
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049DC0
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x80049EDC
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x80049FF8
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A058
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


// address: 0x8004A19C
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A27C
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A354
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A430
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A50C
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A594
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A5CC
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A634
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A6D0
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A708
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A7DC
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A840
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A8A4
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


// address: 0x8004AA08
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB04
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB4C
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004ACF0
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AD80
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AE10
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AEA0
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AF2C
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFB8
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFC0
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFC8
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFD0
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B020
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B29C
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


// address: 0x8004B424
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B474
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4BC
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4FC
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B53C
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B57C
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5BC
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B604
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


// address: 0x8004B718
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8011652C
	static unsigned char sbLastCmd;
}


// address: 0x8004BB38
// size: 0xF1C
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004BBC8
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x8004BC00
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004BC2C
int InitLevelType__Fi(int l) {
}


// address: 0x8004BC78
void SetupLocalCoords__Fv() {
	// register: 5
	register int x;
	// register: 4
	register int y;
}


// address: 0x8004BDEC
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004BE60
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


// address: 0x8004C080
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C1B8
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C304
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004C38C
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004C3CC
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004C470
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004C524
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


// address: 0x8004C740
void FreeObjectGFX__Fv() {
}


// address: 0x8004C74C
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004C804
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004CA88
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004CAE8
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004CB10
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CC1C
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CD28
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


// address: 0x8004CF38
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


// address: 0x8004D24C
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004D2B0
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


// address: 0x8004D58C
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004D5FC
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004D790
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004D7DC
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004D8EC
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004DBBC
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


// address: 0x8004DF0C
void Obj_BCrossDamage__Fi(int i) {
	// register: 3
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004E18C
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004E42C
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004E464
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


// address: 0x8004E538
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E540
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E548
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004E7C8
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004E86C
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004EC10
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004EFE8
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F380
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F718
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FA20
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FD28
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


// address: 0x80050224
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8005035C
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050470
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050628
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x800506D4
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050844
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80050998
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


// address: 0x80050B84
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


// address: 0x80051058
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x80051400
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x800515D0
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x80051990
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80051B4C
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80051CDC
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80051F10
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800520E0
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052298
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800523EC
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052540
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


// address: 0x80052648
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


// address: 0x80052900
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


// address: 0x80052ABC
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80052B2C
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


// address: 0x80054F88
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055104
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800552D4
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800553BC
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x8005552C
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x8005561C
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x800556C4
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80055778
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


// address: 0x80055D0C
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x80055EB8
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80055FA8
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80056088
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x800564C0
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x800565D4
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x800566E8
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x800567FC
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x800569DC
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


// address: 0x80056BCC
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80057120
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057278
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x800572D4
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x800573EC
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


// address: 0x80057524
void SyncLever__Fi(int i) {
}


// address: 0x800575A0
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x80057698
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


// address: 0x800577F4
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005795C
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80057A88
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x80057BC8
void GetObjectStr__Fi(int i) {
}


// address: 0x80057FDC
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


// address: 0x80058218
int GetNumOfFrames__7TextDatii_addr_80058218(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058250
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80058250(struct TextDat *this, int Creature) {
}


// address: 0x800582C8
int GetNumOfCreatures__7TextDat_addr_800582C8(struct TextDat *this) {
}


// address: 0x800582DC
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x800582E4
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058310
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x800583C4
void SetupLocalPlayer__Fv() {
}


// address: 0x800583E4
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058420
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058434
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058454
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005845C
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058478
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005849C
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x800586D8
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80058AF4
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80058B5C
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80058CCC
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


// address: 0x80058ED8
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


// address: 0x80058F5C
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


// address: 0x80059328
void InitMultiView__Fv() {
}


// address: 0x8005937C
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFD0
	// size: 0x30
	auto struct bbssbb bodge[6];
	{
		// register: 4
		register int i;
	}
}


// address: 0x80059414
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x8005949C
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059530
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059624
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059638
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x800596C4
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059728
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800C9624
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80059764
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059790
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x800598C8
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80059960
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x80059AFC
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


// address: 0x80059C1C
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x80059D3C
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x80059ED4
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


// address: 0x8005A098
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


// address: 0x8005A41C
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005A864
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005A9A8
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005A9C8
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


// address: 0x8005ACB0
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AD6C
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005AEA8
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AF38
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005AFF4
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AFFC
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005B084
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005B3F0
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005B590
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


// address: 0x8005BBC0
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


// address: 0x8005BF60
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005BFF0
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


// address: 0x8005C37C
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005C47C
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C53C
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C5DC
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


// address: 0x8005D5A0
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D910
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


// address: 0x8005DA0C
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005DA88
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DBC8
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DBD0
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005DFE0
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E040
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


// address: 0x8005E4BC
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E558
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


// address: 0x8005E884
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E8AC
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


// address: 0x8005EA4C
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005EA54
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


// address: 0x8005EE5C
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005EF98
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EFC8
void CheckStats__Fi(int p) {
	// register: 5
	register int c;
	// register: 6
	register int i;
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F15C
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F270
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F354
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F430
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F504
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005F548
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F61C
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F684
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F758
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F7BC
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F7C4
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005FAEC
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FB14
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x8005FB58
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005FB8C
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FBC0
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FBF4
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x8005FC28
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FC5C
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x8005FC94
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005FCC8
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FCF0
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FD18
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FD40
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x8005FD88
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FDB0
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FDD8
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005FE0C
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FE34
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FE5C
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x8005FEA0
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x8005FED4
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FF08
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x8005FF4C
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x8005FF90
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x8005FFD4
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80060020
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060064
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x800600A8
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x800600F0
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060134
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060178
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x800601BC
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060200
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060244
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060288
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x800602D0
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060314
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x8006035C
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x800603A0
void CheckNewPath__Fi(int pnum) {
}


// address: 0x800603E4
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060428
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x8006046C
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x800604B0
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x800604F4
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80060538
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x8006057C
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x800605C0
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80060604
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80060648
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x8006067C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8006067C(struct POLY_FT4 **Prim) {
}


// address: 0x800606F8
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80060748
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80060754
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80060760
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x8006076C
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


// address: 0x800609BC
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x80060E60
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


// address: 0x80061004
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061098
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


// address: 0x80061640
void SetReturnLvlPos__Fv() {
}


// address: 0x80061750
void GetReturnLvlPos__Fv() {
}


// address: 0x800617A4
void ResyncMPQuests__Fv() {
}


// address: 0x800618E0
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80061E40
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


// address: 0x8006206C
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x800622A4
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062324
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062434
void QuestlogUp__Fv() {
}


// address: 0x8006248C
void QuestlogDown__Fv() {
}


// address: 0x800624F4
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x800625B0
void QuestlogESC__Fv() {
}


// address: 0x800625F0
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80062670
void _GLOBAL__D_questlog() {
}


// address: 0x80062698
void _GLOBAL__I_questlog() {
}


// address: 0x800626C0
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x800626CC
void SetRGB__6DialogUcUcUc_addr_800626CC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800626EC
void SetBack__6Dialogi_addr_800626EC(struct Dialog *this, int Type) {
}


// address: 0x800626F4
void SetBorder__6Dialogi_addr_800626F4(struct Dialog *this, int Type) {
}


// address: 0x800626FC
void ___6Dialog_addr_800626FC(struct Dialog *this, int __in_chrg) {
}


// address: 0x80062724
// size: 0x10
struct Dialog *__6Dialog_addr_80062724(struct Dialog *this) {
}


// address: 0x80062780
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80062780(struct TextDat *this, int PalNum) {
}


// address: 0x8006279C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8006279C(struct TextDat *this, int FrNum) {
}


// address: 0x800627B8
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006295C
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x80062A54
void FreeStoreMem__Fv() {
}


// address: 0x80062A5C
void DrawSTextBack__Fv() {
}


// address: 0x80062ACC
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
	// address: 0x801158E4
	static unsigned char DaveFix;
}


// address: 0x80062E5C
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80062EF0
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80062F88
void AddSLine__Fi(int y) {
}


// address: 0x80062FD8
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063000
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x800630B4
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x800634F8
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


// address: 0x80063AFC
void S_StartSmith__Fv() {
}


// address: 0x80063C84
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80063E3C
void S_StartSBuy__Fv() {
}


// address: 0x80063F64
void S_ScrollSPBuy__Fi(int idx) {
	// register: 18
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80064138
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064280
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064360
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


// address: 0x80064560
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80064958
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800649F8
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80064BD4
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065050
void S_StartWitch__Fv() {
}


// address: 0x80065190
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80065348
void S_StartWBuy__Fv() {
}


// address: 0x80065468
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x8006557C
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80065B88
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80065C0C
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80065D88
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066164
void S_StartNoMoney__Fv() {
}


// address: 0x800661CC
void S_StartNoRoom__Fv() {
}


// address: 0x8006622C
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 4
	register unsigned char idprint;
}


// address: 0x80066544
void S_StartBoy__Fv() {
}


// address: 0x800666D4
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80066828
void S_StartHealer__Fv() {
}


// address: 0x800669EC
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80066B58
void S_StartHBuy__Fv() {
}


// address: 0x80066C70
void S_StartStory__Fv() {
}


// address: 0x80066D60
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80066D94
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066E64
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x800677F8
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x8006797C
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


// address: 0x80067BAC
void S_StartTavern__Fv() {
}


// address: 0x80067CA4
void S_StartBarMaid__Fv() {
}


// address: 0x80067D78
void S_StartDrunk__Fv() {
}


// address: 0x80067E4C
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068134
void DrawSText__Fv() {
}


// address: 0x80068174
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006823C
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x800683E8
void STextESC__Fv() {
}


// address: 0x80068574
void STextUp__Fv() {
}


// address: 0x800686FC
void STextDown__Fv() {
}


// address: 0x80068894
void S_SmithEnter__Fv() {
}


// address: 0x80068968
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800689E0
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80068A58
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80068E5C
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069030
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800691F8
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069360
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


// address: 0x80069570
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


// address: 0x80069808
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


// address: 0x80069A50
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80069D20
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x80069E0C
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006A044
void S_SRepairEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A180
void S_WitchEnter__Fv() {
}


// address: 0x8006A230
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006A414
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A5DC
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A6C8
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006A820
void S_WRechargeEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A95C
void S_BoyEnter__Fv() {
}


// address: 0x8006AA8C
void BoyBuyItem__Fv() {
}


// address: 0x8006AB08
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006AD7C
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006AF40
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006B238
void S_ConfirmEnter__Fv() {
}


// address: 0x8006B354
void S_HealerEnter__Fv() {
}


// address: 0x8006B3EC
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B5D4
void S_StoryEnter__Fv() {
}


// address: 0x8006B66C
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B7C8
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


// address: 0x8006B9C0
void S_TavernEnter__Fv() {
}


// address: 0x8006BA30
void S_BarmaidEnter__Fv() {
}


// address: 0x8006BAA0
void S_DrunkEnter__Fv() {
}


// address: 0x8006BB10
void STextEnter__Fv() {
}


// address: 0x8006BD10
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006BE14
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006BE28
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006BE50
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006BE78
unsigned short GetDown__C4CPad_addr_8006BE78(struct CPad *this) {
}


// address: 0x8006BEA0
void SetRGB__6DialogUcUcUc_addr_8006BEA0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006BEC0
void SetBorder__6Dialogi_addr_8006BEC0(struct Dialog *this, int Type) {
}


// address: 0x8006BEC8
void ___6Dialog_addr_8006BEC8(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006BEF0
// size: 0x10
struct Dialog *__6Dialog_addr_8006BEF0(struct Dialog *this) {
}


// address: 0x8006BF4C
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006C0C0
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


// address: 0x8006C2B8
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


// address: 0x8006C3A8
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


// address: 0x8006C784
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


// address: 0x8006C8EC
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


// address: 0x8006C9D0
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


// address: 0x8006CA68
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006CD80
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006D030
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x8006D490
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006D90C
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006DE18
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


// address: 0x8006DED8
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006DFCC
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006E0C0
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006E1B4
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


// address: 0x8006E4D0
void FadeGameOut__Fv() {
}


// address: 0x8006E56C
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x8006E5D0
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


// address: 0x8006EAF4
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


// address: 0x8006ED94
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x8006EEC0
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x8006EF58
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x8006F1B4
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x8006F450
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8006F694
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x8006F69C
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x8006F704
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x8006F724
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x8006F794
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x8006F830
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x8006F898
void music_stop__Fv() {
}


// address: 0x8006F8E4
void music_fade__Fv() {
}


// address: 0x8006F924
void music_start__Fi(int nTrack) {
}


// address: 0x8006F9A8
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


// address: 0x8006FE30
void CloseInvChr__Fv() {
}


// address: 0x8006FE98
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8006FF3C
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x8006FFAC
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x8007001C
// size: 0x9C
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80070148
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80070188
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800701CC
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80070210
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80070480
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80070640
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x8007069C
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800706D8
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80070778
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80070B5C
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80070C30
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80070D48
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80070D8C
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


// address: 0x80071080
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80071350
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 17
	register int x;
	// register: 18
	register int y;
}


// address: 0x80071578
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


// address: 0x8007172C
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


// address: 0x80071DC8
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


// address: 0x80071FC0
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80072070
void Init_GamePad__Fv() {
}


// address: 0x800720A0
void InitGamePadVars__Fv() {
}


// address: 0x80072118
void MoveToScrollTarget__7CBlocks_addr_80072118(struct CBlocks *this) {
}


// address: 0x8007212C
unsigned short GetDown__C4CPad_addr_8007212C(struct CPad *this) {
}


// address: 0x80072154
unsigned short GetUp__C4CPad_addr_80072154(struct CPad *this) {
}


// address: 0x8007217C
unsigned short GetCur__C4CPad_addr_8007217C(struct CPad *this) {
}


// address: 0x800721A4
void DoGameTestStuff__Fv() {
}


// address: 0x800721D0
void DoInitGameStuff__Fv() {
}


// address: 0x80072204
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80072224
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80072244
void GRL_InitGwin__Fv() {
}


// address: 0x80072250
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x80072260
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80072288
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8007232C
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x80072374
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80072380
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


// address: 0x80072558
char *GetStr__Fi(int StrId) {
}


// address: 0x800725C0
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


// address: 0x800726C4
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x8007271C
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80072728
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80072848
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x800728C8
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


// address: 0x80072E00
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80072F80
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x800730E0
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80073178
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80073228
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007328C
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800733A4
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x8007343C
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x800734D4
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007353C
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 3
	register int frame;
}


// address: 0x800735D0
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


// address: 0x800736B0
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


// address: 0x80073788
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80073818
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


// address: 0x80073934
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x800739D0
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073A38
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073AA0
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80073BD4
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80073D18
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073D80
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073DD8
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


// address: 0x80073EA4
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073F08
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073F10
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


// address: 0x80074438
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800744D8
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800744E0
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074514
void PRIM_GetPrim__FPP8POLY_FT4_addr_80074514(struct POLY_FT4 **Prim) {
}


// address: 0x80074590
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri_addr_80074590(int PNum) {
}


// address: 0x800745E0
int GetLastOtPos__C7CPlayer_addr_800745E0(struct CPlayer *this) {
}


// address: 0x800745EC
int GetLastScrY__C7CPlayer_addr_800745EC(struct CPlayer *this) {
}


// address: 0x800745F8
int GetLastScrX__C7CPlayer_addr_800745F8(struct CPlayer *this) {
}


// address: 0x80074604
int GetNumOfFrames__7TextDat_addr_80074604(struct TextDat *this) {
}


// address: 0x80074618
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80074618(struct TextDat *this, int FrNum) {
}


// address: 0x80074634
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007466C
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x800746EC
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80074784
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80074834
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


// address: 0x800749F0
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


// address: 0x80074B84
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


// address: 0x80074C3C
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


// address: 0x80074ED0
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80074FA8
// size: 0x28
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80075030
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007505C
// size: 0x28
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075088
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800750B4
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800750E0
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007510C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075130
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075154
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075180
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800751AC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800751D8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075204
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075230
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007525C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075288
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800752B4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800752E0
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007530C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075338
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075364
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075390
// size: 0x28
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800753BC
// size: 0x28
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800753E8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075414
// size: 0x28
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075440
// size: 0x28
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007546C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075498
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800754C4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800754F0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007551C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075548
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075574
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800755A0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800755CC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800755F8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075624
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075650
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007567C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800756A8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800756D4
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80075768
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800757F8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80075888
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80075918
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800759A8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800759D4
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075A00
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075A2C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075A58
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075A84
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075AB0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075ADC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075B08
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075B34
// size: 0x28
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075B60
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


// address: 0x80075CB8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80075D84
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80075E50
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075E7C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075EA8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075ED4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075F00
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075F24
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075F50
// size: 0x28
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075F7C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075FA8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075FD4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076000
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007602C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076058
// size: 0x28
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076084
// size: 0x28
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800760B0
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800760DC
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076108
// size: 0x28
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076134
// size: 0x28
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076160
// size: 0x28
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007618C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800761B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800761E4
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


// address: 0x80076378
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763A4
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763C8
// size: 0x28
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763F4
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076420
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007644C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076478
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764A4
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764D0
// size: 0x28
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764FC
// size: 0x28
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076528
// size: 0x28
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076554
// size: 0x28
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076580
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80076580(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800765BC
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_800765BC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x800765E4
void PRIM_GetPrim__FPP8POLY_FT4_addr_800765E4(struct POLY_FT4 **Prim) {
}


// address: 0x80076660
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks_addr_80076660(struct CBlocks *this) {
}


// address: 0x8007666C
int GetNumOfFrames__7TextDatii_addr_8007666C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800766A4
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_800766A4(struct TextDat *this, int Creature) {
}


// address: 0x8007671C
int GetNumOfCreatures__7TextDat_addr_8007671C(struct TextDat *this) {
}


// address: 0x80076730
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80076730(struct TextDat *this, int FrNum) {
}


// address: 0x8007674C
void gamemenu_on__Fv() {
}


// address: 0x80076754
void gamemenu_off__Fv() {
}


// address: 0x8007675C
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80076764
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x8007676C
void ResetPal__Fv() {
}


// address: 0x80076774
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x800767A4
bool GetFadeState__Fv() {
}


// address: 0x800767B0
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x800768B4
void SmearScreen__Fv() {
}


// address: 0x800768BC
void DrawFadedScreen__Fv() {
}


// address: 0x80076910
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800769CC
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


// address: 0x80076A88
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80076AE0
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


// address: 0x80076BBC
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x80076C10
void M_CheckEFlag__Fi(int i) {
}


// address: 0x80076C30
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


// address: 0x80076D9C
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x80076DD8
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80076E24
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x80076E6C
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80076ECC
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


// address: 0x80077474
void ClearMVars__Fi(int i) {
}


// address: 0x800774E8
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x80077934
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x800779E4
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x80077B28
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80077C20
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x80077CC8
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


// address: 0x80077EB8
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80077F98
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


// address: 0x80078214
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x8007851C
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x80078818
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


// address: 0x80078C68
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 2
	register int mi;
}


// address: 0x80078D70
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80078E78
void AddInTownPortal__Fi(int i) {
}


// address: 0x80078EB4
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x80078F24
void DeactivatePortal__Fi(int i) {
}


// address: 0x80078F44
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x80078F7C
void RemovePortalMissile__Fi(int id) {
	// register: 16
	register int i;
	// register: 17
	register int mi;
}


// address: 0x80079118
void SetCurrentPortal__Fi(int p) {
}


// address: 0x80079124
void GetPortalLevel__Fv() {
}


// address: 0x800792D8
void GetPortalLvlPos__Fv() {
}


// address: 0x8007938C
// size: 0xB8
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x800793B8
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x800793E0
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80079410
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


// address: 0x800794B4
void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x8007951C
// size: 0xF1C
struct DLevel *UseMap__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x800795F0
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Map) {
}


// address: 0x80079660
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x800796D4
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


// address: 0x800798E8
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


// address: 0x80079A88
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


// address: 0x80079BE8
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


// address: 0x80079D28
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x80079D60
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x80079D98
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x80079DDC
char *VER_GetVerString__Fv() {
}


// address: 0x80079DEC
int CharPair2Num__FPc(char *Str) {
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


