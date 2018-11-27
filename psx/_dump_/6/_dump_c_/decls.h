#include "types.h"

// address: 0x80116D94
extern int NumOfMonsterListLevels;

// address: 0x800A4008
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x80116AB0
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x80116AB4
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x80116AB8
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x80116AC0
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x80116AC4
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x80116AC8
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x80116ACC
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x80116AD0
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x80116AD4
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x80116AD8
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x80116ADC
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x80116AE0
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x80116AE4
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x80116AE8
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x80116AEC
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x80116AF0
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x80116AF4
// size: 0x4
static unsigned char NumsLEV4M4QB[4];

// address: 0x80116AF8
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x80116AFC
// size: 0x4
static unsigned char NumsLEV4M4QC[4];

// address: 0x80116B00
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x80116B04
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x80116B08
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x80116B0C
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x80116B10
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x80116B14
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x80116B18
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x80116B1C
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x80116B24
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x80116B28
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x80116B2C
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x80116B30
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x80116B34
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x80116B38
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x80116B3C
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x80116B40
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x80116B44
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x80116B48
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x80116B4C
// size: 0x3
static unsigned char NumsLEV8M8A[3];

// address: 0x80116B50
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x80116B54
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x80116B58
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x80116B5C
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x80116B60
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x80116B64
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x80116B68
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x80116B6C
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x80116B70
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x80116B74
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x80116B78
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x80116B7C
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x80116B80
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x80116B84
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x80116B88
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x80116B8C
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x80116B90
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x80116B94
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x80116B98
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x80116B9C
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x80116BA0
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x80116BA4
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x80116BA8
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x80116BAC
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x80116BB0
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x80116BB4
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x80116BB8
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x80116BBC
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x80116BC0
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x80116BC4
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x80116BC8
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x80116BCC
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x80116BD0
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x80116BD4
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x80116BD8
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x80116BDC
// size: 0x1
static unsigned char NumsLEV16M16D[1];

// address: 0x800A3B68
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A3B98
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A3BF8
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A3C38
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A3CA8
// size: 0x60
static struct MonstList ChoiceListLEV5[6];

// address: 0x800A3D08
// size: 0x50
static struct MonstList ChoiceListLEV6[5];

// address: 0x800A3D58
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A3DA8
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A3E08
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A3E48
// size: 0x40
static struct MonstList ChoiceListLEV10[4];

// address: 0x800A3E88
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A3ED8
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A3F18
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A3F68
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A3FC8
// size: 0x30
static struct MonstList ChoiceListLEV15[3];

// address: 0x800A3FF8
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x8011835C
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x80116DA4
extern int time_in_frames;

// address: 0x800A4088
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x80116DA8
extern int ArgsSoFar;

// address: 0x80116DAC
extern unsigned long *ThisOt;

// address: 0x80116DB0
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x80118360
static long hndPrimBuffers;

// address: 0x80118364
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x80118368
static unsigned char BufferDepth;

// address: 0x80118369
static unsigned char WorkRamId;

// address: 0x8011836A
static unsigned char ScrNum;

// address: 0x8011836C
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x80118370
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x80118374
static unsigned char BufferNum;

// address: 0x80116DB4
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x80118375
static unsigned char LastBuffer;

// address: 0x80118378
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x8011837C
static int ThisOtSize;

// address: 0x80116DB8
// size: 0x8
static struct RECT ScrRect;

// address: 0x80118380
static int VidWait;

// address: 0x80118810
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x80118384
static void (*VbFunc)();

// address: 0x80118388
static unsigned long VidTick;

// address: 0x8011838C
static int VXOff;

// address: 0x80118390
static int VYOff;

// address: 0x80116DCC
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x80116DD0
extern int LastFmem;

// address: 0x80116DC0
extern unsigned int GSYS_MemStart;

// address: 0x80116DC4
extern unsigned int GSYS_MemEnd;

// address: 0x800A43D0
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A43F8
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x80116DC8
extern int LowestFmem;

// address: 0x80116DE0
extern int FileSYS;

// address: 0x80118394
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x80118398
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x80116DFA
extern short DavesPad;

// address: 0x80116DFC
extern short DavesPadDeb;

// address: 0x800A4420
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x801188F0
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A4CC4
// size: 0x46C
extern struct TextDat *AllDats[283];

// address: 0x80116E4C
extern int TpW;

// address: 0x80116E50
extern int TpH;

// address: 0x80116E54
extern int TpXDest;

// address: 0x80116E58
extern int TpYDest;

// address: 0x80116E5C
// size: 0x8
extern struct RECT R;

// address: 0x800A5130
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800A5164
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A4454
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x80116E70
static bool ChunkGot;

// address: 0x800A518C
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800A519C
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A51AC
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x80116E84
extern unsigned long BL_NoLumpFiles;

// address: 0x80116E88
extern unsigned long BL_NoStreamFiles;

// address: 0x80116E8C
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x80116E90
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x80116E94
extern unsigned char FileLoaded;

// address: 0x80116EC4
extern int NoTAllocs;

// address: 0x800A52D8
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x801183A4
static bool CanPause;

// address: 0x801183A8
static bool Paused;

// address: 0x801183AC
// size: 0x8
static struct RECT PRect;

// address: 0x80118918
// size: 0x10
static struct Dialog PBack;

// address: 0x800A5540
// size: 0x22
extern char RawPadData0[34];

// address: 0x800A5564
// size: 0x22
extern char RawPadData1[34];

// address: 0x800A5588
// size: 0x708
extern unsigned char demo_buffer[1800];

// address: 0x80116EF0
extern int demo_pad_time;

// address: 0x80116EF4
extern int demo_pad_count;

// address: 0x800A5468
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800A54D4
// size: 0x6C
extern struct CPad Pad1;

// address: 0x80116EF8
extern unsigned long demo_finish;

// address: 0x80116EFC
extern int cac_pad;

// address: 0x80116F18
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x80116F1C
extern int CharFrm;

// address: 0x80116F09
extern unsigned char WHITER;

// address: 0x80116F0A
extern unsigned char WHITEG;

// address: 0x80116F0B
extern unsigned char WHITEB;

// address: 0x80116F0C
extern unsigned char BLUER;

// address: 0x80116F0D
extern unsigned char BLUEG;

// address: 0x80116F0E
extern unsigned char BLUEB;

// address: 0x80116F0F
extern unsigned char REDR;

// address: 0x80116F10
extern unsigned char REDG;

// address: 0x80116F11
extern unsigned char REDB;

// address: 0x80116F12
extern unsigned char GOLDR;

// address: 0x80116F13
extern unsigned char GOLDG;

// address: 0x80116F14
extern unsigned char GOLDB;

// address: 0x800A5C90
// size: 0x218
extern struct CFont MediumFont;

// address: 0x800A5EA8
// size: 0x218
extern struct CFont LargeFont;

// address: 0x800A60C0
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800A6174
// size: 0x10
extern struct FontTab LFont;

// address: 0x800A6184
// size: 0x12E
extern struct FontItem MFontTab[151];

// address: 0x800A62B4
// size: 0x10
extern struct FontTab MFont;

// address: 0x80116F31
extern unsigned char DialogRed;

// address: 0x80116F32
extern unsigned char DialogGreen;

// address: 0x80116F33
extern unsigned char DialogBlue;

// address: 0x80116F34
extern unsigned char DialogTRed;

// address: 0x80116F35
extern unsigned char DialogTGreen;

// address: 0x80116F36
extern unsigned char DialogTBlue;

// address: 0x80116F38
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x80116F3C
extern int DialogBackGfx;

// address: 0x80116F40
extern int DialogBackW;

// address: 0x80116F44
extern int DialogBackH;

// address: 0x80116F48
extern int DialogBorderGfx;

// address: 0x80116F4C
extern int DialogBorderTLW;

// address: 0x80116F50
extern int DialogBorderTLH;

// address: 0x80116F54
extern int DialogBorderTRW;

// address: 0x80116F58
extern int DialogBorderTRH;

// address: 0x80116F5C
extern int DialogBorderBLW;

// address: 0x80116F60
extern int DialogBorderBLH;

// address: 0x80116F64
extern int DialogBorderBRW;

// address: 0x80116F68
extern int DialogBorderBRH;

// address: 0x80116F6C
extern int DialogBorderTW;

// address: 0x80116F70
extern int DialogBorderTH;

// address: 0x80116F74
extern int DialogBorderBW;

// address: 0x80116F78
extern int DialogBorderBH;

// address: 0x80116F7C
extern int DialogBorderLW;

// address: 0x80116F80
extern int DialogBorderLH;

// address: 0x80116F84
extern int DialogBorderRW;

// address: 0x80116F88
extern int DialogBorderRH;

// address: 0x80116F8C
extern int DialogBevelGfx;

// address: 0x80116F90
extern int DialogBevelCW;

// address: 0x80116F94
extern int DialogBevelCH;

// address: 0x80116F98
extern int DialogBevelLRW;

// address: 0x80116F9C
extern int DialogBevelLRH;

// address: 0x80116FA0
extern int DialogBevelUDW;

// address: 0x80116FA4
extern int DialogBevelUDH;

// address: 0x80116FA8
extern int MY_DialogOTpos;

// address: 0x801183B4
static unsigned char DialogGBack;

// address: 0x801183B5
static char GShadeX;

// address: 0x801183B6
static char GShadeY;

// address: 0x801183BC
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800A6304
// size: 0x70
extern int Cxy[28];

// address: 0x80116F2B
extern unsigned char BORDERR;

// address: 0x80116F2C
extern unsigned char BORDERG;

// address: 0x80116F2D
extern unsigned char BORDERB;

// address: 0x80116F2E
extern unsigned char BACKR;

// address: 0x80116F2F
extern unsigned char BACKG;

// address: 0x80116F30
extern unsigned char BACKB;

// address: 0x800A62C4
// size: 0x40
static char GShadeTab[64];

// address: 0x80116F29
static char GShadePX;

// address: 0x80116F2A
static char GShadePY;

// address: 0x80116FB5
extern unsigned char PlayDemoFlag;

// address: 0x80118928
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x80118958
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x801183C4
static int blockr;

// address: 0x801183C8
static int blockg;

// address: 0x801183CC
static int blockb;

// address: 0x801183D0
static int InfraFlag;

// address: 0x80116FC1
extern unsigned char P1ObjSelCount;

// address: 0x80116FC2
extern unsigned char P2ObjSelCount;

// address: 0x80116FC3
extern unsigned char P12ObjSelCount;

// address: 0x80116FC4
extern unsigned char P1ItemSelCount;

// address: 0x80116FC5
extern unsigned char P2ItemSelCount;

// address: 0x80116FC6
extern unsigned char P12ItemSelCount;

// address: 0x80116FC7
extern unsigned char P1MonstSelCount;

// address: 0x80116FC8
extern unsigned char P2MonstSelCount;

// address: 0x80116FC9
extern unsigned char P12MonstSelCount;

// address: 0x80116FCA
static unsigned short P1ObjSelCol;

// address: 0x80116FCC
static unsigned short P2ObjSelCol;

// address: 0x80116FCE
static unsigned short P12ObjSelCol;

// address: 0x80116FD0
static unsigned short P1ItemSelCol;

// address: 0x80116FD2
static unsigned short P2ItemSelCol;

// address: 0x80116FD4
static unsigned short P12ItemSelCol;

// address: 0x80116FD6
static unsigned short P1MonstSelCol;

// address: 0x80116FD8
static unsigned short P2MonstSelCol;

// address: 0x80116FDA
static unsigned short P12MonstSelCol;

// address: 0x80116FDC
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x8010CEE0
// size: 0x40
static short SinTab[32];

// address: 0x800A6374
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x80116FF8
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x8010CF6C
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x80118988
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x80118998
// size: 0x10
static struct Overlay PregameOver;

// address: 0x801189A8
// size: 0x10
static struct Overlay GameOver;

// address: 0x801189B8
// size: 0x10
static struct Overlay FmvOver;

// address: 0x801183D4
static int OWorldX;

// address: 0x801183D8
static int OWorldY;

// address: 0x801183DC
static int WWorldX;

// address: 0x801183E0
static int WWorldY;

// address: 0x8010CFE8
// size: 0x20
static short TxyAdd[16];

// address: 0x8011701C
extern int GXAdj2;

// address: 0x801183E4
static int TimePerFrame;

// address: 0x801183E8
static int CpuStart;

// address: 0x801183EC
static int CpuTime;

// address: 0x801183F0
static int DrawTime;

// address: 0x801183F4
static int DrawStart;

// address: 0x801183F8
static int LastCpuTime;

// address: 0x801183FC
static int LastDrawTime;

// address: 0x80118400
static int DrawArea;

// address: 0x80117024
extern bool ProfOn;

// address: 0x800A6388
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x8010D12C
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800A639C
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800A63F0
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800A6444
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800A6498
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800A64EC
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x8011704C
extern int hof;

// address: 0x80117050
extern int mof;

// address: 0x800A65B4
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x80117084
extern unsigned long Time;

// address: 0x800A66B4
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x80117060
extern unsigned long *STR_Buffer;

// address: 0x80117064
extern char NoActiveStreams;

// address: 0x80117068
static bool STRInit;

// address: 0x801170A8
extern char SFXNotPlayed;

// address: 0x801170A9
extern char SFXNotInBank;

// address: 0x801189C8
// size: 0x108
static char spu_management[264];

// address: 0x80118AD8
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x80118408
static unsigned short NoSfx;

// address: 0x80117094
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x80117098
static long OffsetHandle;

// address: 0x8011709C
static int BankBase;

// address: 0x801170A0
static unsigned char SPU_Done;

// address: 0x8010D4E4
// size: 0xB0
static int SFXRemapTab[44];

// address: 0x801170A4
static int NoSNDRemaps;

// address: 0x800A66F4
// size: 0x18C
extern struct PalCollection ThePals;

// address: 0x8010D5C8
// size: 0x40
static struct InitPos InitialPositions[16];

// address: 0x801170F0
extern int demo_level;

// address: 0x801170F4
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x801170F8
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x801170FC
// size: 0x5C
extern struct TASK *tonys;

// address: 0x801170D4
extern int demo_load;

// address: 0x801170D8
extern int demo_record_load;

// address: 0x801170DC
extern int level_record;

// address: 0x801170D0
extern int moo_moo;

// address: 0x801170E0
extern unsigned char demo_flash;

// address: 0x801170E4
extern int tonys_Task;

// address: 0x80117258
extern bool DoShowPanel;

// address: 0x8011725C
extern bool DoDrawBg;

// address: 0x8011840C
static bool GlueFinished;

// address: 0x80118410
static bool DoHomingScroll;

// address: 0x80118414
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x80118418
static int CurrentMonsterList;

// address: 0x80117109
extern char started_grtask;

// address: 0x800A6880
// size: 0x288
extern struct PInf PlayerInfo[81];

// address: 0x80117260
// size: 0x4
static char ArmourChar[4];

// address: 0x8010D6AC
// size: 0xA
static char WepChar[10];

// address: 0x80117264
// size: 0x4
static char CharChar[4];

// address: 0x8011841C
static char ctrl_select_line;

// address: 0x8011841D
static char ctrl_select_side;

// address: 0x8011841E
static char ckeyheld;

// address: 0x80118420
static int old_options_pad;

// address: 0x80118424
// size: 0x8
static struct RECT CtrlRect;

// address: 0x80117278
extern unsigned char ctrlflag;

// address: 0x800A6BB0
// size: 0x140
extern struct KEY_ASSIGNS txt_actions[20];

// address: 0x800A6B08
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x80117274
extern int CtrlBorder;

// address: 0x80118AF0
// size: 0x78
static struct CScreen CtrlScreen;

// address: 0x80118B70
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800A6CF0
// size: 0xA0
static int controller_defaults[2][20];

// address: 0x801172DC
extern int gr_scrxoff;

// address: 0x801172E0
extern int gr_scryoff;

// address: 0x801172E8
extern unsigned short water_clut;

// address: 0x801172EC
extern char visible_level;

// address: 0x801172D9
extern char last_type;

// address: 0x801172EE
extern char daylight;

// address: 0x801172EA
extern char cow_in_sight;

// address: 0x801172EB
extern char inn_in_sight;

// address: 0x801172E4
extern unsigned int water_count;

// address: 0x801172ED
extern unsigned char lastrnd;

// address: 0x801172F0
static int call_clock;

// address: 0x80117300
extern int TitleAnimCount;

// address: 0x8010D774
// size: 0x37
static unsigned char light_tile[55];

// address: 0x80117364
extern int p1scrnx;

// address: 0x80117368
extern int p1scrny;

// address: 0x8011736C
extern int p1wrldx;

// address: 0x80117370
extern int p1wrldy;

// address: 0x80117374
extern int p2scrnx;

// address: 0x80117378
extern int p2scrny;

// address: 0x8011737C
extern int p2wrldx;

// address: 0x80117380
extern int p2wrldy;

// address: 0x8011842C
static int p1spiny1;

// address: 0x80118430
static int p1spiny2;

// address: 0x80118434
static int p1scale;

// address: 0x80118438
static int p1apocaflag;

// address: 0x8011843C
static int p1apocaxpos;

// address: 0x80118440
static int p1apocaypos;

// address: 0x80118444
static int p2spiny1;

// address: 0x80118448
static int p2spiny2;

// address: 0x8011844C
static int p2scale;

// address: 0x80118450
static int p2apocaflag;

// address: 0x80118454
static int p2apocaxpos;

// address: 0x80118458
static int p2apocaypos;

// address: 0x80118B80
// size: 0x240
static struct Particle PartArray[16];

// address: 0x8011845C
static int partOtPos;

// address: 0x8011731C
extern int p1teleflag;

// address: 0x80117320
extern int p1phaseflag;

// address: 0x80117324
extern int p1inviscount;

// address: 0x80117328
extern int p2teleflag;

// address: 0x8011732C
extern int p2phaseflag;

// address: 0x80117330
extern int p2inviscount;

// address: 0x80117334
extern int SetParticle;

// address: 0x80117338
static int p1partexecnum;

// address: 0x8011733C
static int p2partexecnum;

// address: 0x800A6D90
// size: 0x20
static int JumpArray[8];

// address: 0x80117340
static int partjumpflag;

// address: 0x80117344
static int partglowflag;

// address: 0x80117348
static int partcolour;

// address: 0x8011734C
static int healflag;

// address: 0x80117350
static int healtime;

// address: 0x80117354
static int healplyr;

// address: 0x801173BD
extern unsigned char select_flag;

// address: 0x80118460
// size: 0x8
static struct RECT SelectRect;

// address: 0x80118468
static char item_select;

// address: 0x800A6DB0
// size: 0xC
extern short _psplxpos[3][2];

// address: 0x800A6DBC
// size: 0xC
extern short _psplypos[3][2];

// address: 0x801173C0
// size: 0x2
extern char _psplpos[2];

// address: 0x801173C4
// size: 0x2
extern char spl_maxrad[2];

// address: 0x801173C8
// size: 0x8
extern int splangle[2];

// address: 0x80117390
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x80117394
// size: 0x2
extern unsigned char _pSplTargetX[2];

// address: 0x80117398
// size: 0x2
extern unsigned char _pSplTargetY[2];

// address: 0x8011739C
// size: 0x2
extern unsigned char _pTargetSpell[2];

// address: 0x80118DC0
// size: 0x10
static struct Dialog SelectBack;

// address: 0x801173A0
// size: 0x8
static int _pspotid[2];

// address: 0x801173A8
// size: 0x8
extern int QSpell[2];

// address: 0x801173B0
// size: 0x2
extern char _spltotype[2];

// address: 0x801173B4
// size: 0x4
extern char mana_order[4];

// address: 0x801173B8
// size: 0x4
extern char health_order[4];

// address: 0x801173BC
extern unsigned char birdcheck;

// address: 0x80118DD0
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x8011846C
static unsigned short progress;

// address: 0x8010D870
// size: 0x28
static unsigned short Level2CutScreen[20];

// address: 0x801173E8
static char *CutString;

// address: 0x80118DF8
// size: 0x78
static struct CScreen Scr;

// address: 0x801173EC
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x801173F0
static bool GameLoading;

// address: 0x80118E78
// size: 0x10
static struct Dialog LBack;

// address: 0x80117400
extern unsigned int card_ev0;

// address: 0x80117404
extern unsigned int card_ev1;

// address: 0x80117408
extern unsigned int card_ev2;

// address: 0x8011740C
extern unsigned int card_ev3;

// address: 0x80117410
extern unsigned int card_ev10;

// address: 0x80117414
extern unsigned int card_ev11;

// address: 0x80117418
extern unsigned int card_ev12;

// address: 0x8011741C
extern unsigned int card_ev13;

// address: 0x80117420
// size: 0x8
extern int card_dirty[2];

// address: 0x80117428
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8011742C
extern int card_event;

// address: 0x801173FC
extern void (*mem_card_event_handler)();

// address: 0x801173F4
extern bool MemCardActive;

// address: 0x801173F8
extern int never_hooked_events;

// address: 0x80118470
static unsigned long MasterVol;

// address: 0x80118474
static unsigned long MusicVol;

// address: 0x80118478
static unsigned long SoundVol;

// address: 0x8011847C
static unsigned long VideoVol;

// address: 0x80118480
static unsigned long SpeechVol;

// address: 0x80118484
// size: 0x6C
static struct TextDat *Slider;

// address: 0x80118488
static int sw;

// address: 0x8011848C
static int sx;

// address: 0x80118490
static int sy;

// address: 0x80118494
static unsigned char Adjust;

// address: 0x80118495
static unsigned char qspin;

// address: 0x80118496
static unsigned char lqspin;

// address: 0x80118498
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x8011849C
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x801184A0
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x801174D8
extern int ReturnMenu;

// address: 0x801184A8
// size: 0x8
static struct RECT ORect;

// address: 0x80117454
extern bool optionsflag;

// address: 0x80117448
extern int cmenu;

// address: 0x8011745C
extern int options_pad;

// address: 0x80117460
extern char *PrevTxt;

// address: 0x80117450
extern bool allspellsflag;

// address: 0x800A75B4
// size: 0x80
extern short Circle[64];

// address: 0x8011743C
static int Spacing;

// address: 0x80117440
static int cs;

// address: 0x80117444
static int lastcs;

// address: 0x8011744C
static bool MemcardOverlay;

// address: 0x80117458
extern int saveflag;

// address: 0x801184B0
// size: 0x8
static char *McState[2];

// address: 0x80117464
extern char *BlankEntry;

// address: 0x800A6DC8
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800A6E70
// size: 0xD8
extern struct OMENUITEM GameMenu[9];

// address: 0x800A6F48
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800A6FD8
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800A7080
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800A7128
// size: 0x60
extern struct OMENUITEM MemcardMenu[4];

// address: 0x800A7188
// size: 0x90
extern struct OMENUITEM MemcardGameMenu[6];

// address: 0x800A7218
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800A7278
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800A7320
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800A73C8
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800A7428
// size: 0xC0
extern struct OMENUITEM CheatMenu[8];

// address: 0x800A74E8
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800A7518
// size: 0x9C
extern struct OMENULIST MenuList[13];

// address: 0x801174BC
static bool debounce;

// address: 0x801174C0
static bool pu;

// address: 0x801174C4
static bool pd;

// address: 0x801174C8
static bool pl;

// address: 0x801174CC
static bool pr;

// address: 0x801174D0
static unsigned char uc;

// address: 0x801174D1
static unsigned char dc;

// address: 0x801174D2
static unsigned char lc;

// address: 0x801174D3
static unsigned char rc;

// address: 0x801174D4
static char centrestep;

// address: 0x800A7634
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x801174E5
extern char hop_height;

// address: 0x801174E8
// size: 0x8
static struct Perch perches[4];

// address: 0x800A77B4
// size: 0xE0
extern struct StrInfo FmvTab[7];

// address: 0x80117524
extern int FeBackX;

// address: 0x80117528
extern int FeBackY;

// address: 0x8011752C
extern int FeBackW;

// address: 0x80117530
extern int FeBackH;

// address: 0x80117534
extern unsigned char FeFlag;

// address: 0x800A8034
// size: 0x3C0
extern struct FeStruct FeBuffer[40];

// address: 0x801184B8
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x80117538
extern int FeBufferCount;

// address: 0x8011753C
extern int FeNoOfPlayers;

// address: 0x80117540
extern int FePlayerNo;

// address: 0x80117544
// size: 0x8
extern int FeChrClass[2];

// address: 0x800A83F4
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x8011754C
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x80117550
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x80117554
extern unsigned long FeCount;

// address: 0x80117558
extern int fileselect;

// address: 0x8011755C
extern int BookMenu;

// address: 0x80117560
extern int FeAttractMode;

// address: 0x80117564
extern int FMVPress;

// address: 0x801174FC
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x80117500
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x80117504
extern unsigned char FeIsAVirgin;

// address: 0x80117508
extern int FeMenuDelay;

// address: 0x800A7894
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800A78B0
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800A78CC
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800A78E8
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800A7904
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800A7920
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800A793C
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800A7958
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800A7974
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800A7990
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800A79AC
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800A79C8
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800A79E4
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800A7A00
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x8011750C
extern char *LoadErrorText;

// address: 0x800A7A1C
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800A7A94
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800A7ADC
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800A7B54
// size: 0x2E8
extern struct FeMenuTable FeNameEngMenuTable[31];

// address: 0x800A7E3C
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800A7E84
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800A7EE4
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800A7F44
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800A7FBC
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x80117518
extern unsigned long AttractTitleDelay;

// address: 0x8011751C
extern unsigned long AttractMainDelay;

// address: 0x80117520
extern int FMVEndPad;

// address: 0x80117598
extern int InCredits;

// address: 0x8011759C
extern int CreditTitleNo;

// address: 0x801175A0
extern int CreditSubTitleNo;

// address: 0x801175B4
// size: 0x8
extern int card_status[2];

// address: 0x801175BC
// size: 0x8
extern int card_usable[2];

// address: 0x801175C4
// size: 0x8
extern int card_files[2];

// address: 0x801175CC
// size: 0x8
extern int card_changed[2];

// address: 0x80117644
extern char *AlertTxt;

// address: 0x80117648
extern int current_card;

// address: 0x8011764C
extern int LoadType;

// address: 0x80117650
extern int McMenuPos;

// address: 0x80117654
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x80117600
extern char *OText3;

// address: 0x80117640
extern bool fileinfoflag;

// address: 0x8011761C
extern char *DiabloGameFile;

// address: 0x801175E4
extern char *Text3;

// address: 0x801175FC
extern char *OText2;

// address: 0x80117604
extern char *OText4;

// address: 0x80117608
extern char *OText5;

// address: 0x8011760C
extern char *OText7;

// address: 0x80117610
extern char *OText8;

// address: 0x80117614
extern char *SaveError;

// address: 0x801175E0
extern char *Text1;

// address: 0x801175E8
extern char *Text5;

// address: 0x801175EC
extern char *Text6;

// address: 0x801175F0
extern char *Text7;

// address: 0x801175F4
extern char *Text8;

// address: 0x801175F8
extern char *Text9;

// address: 0x80117618
extern char *ContText;

// address: 0x80117638
// size: 0x8
extern char *McState_addr_80117638[2];

// address: 0x801184BC
static int t1;

// address: 0x801184C0
static int t2;

// address: 0x80118E88
// size: 0xB8
static struct DRAWENV draw[2];

// address: 0x80118F48
// size: 0x74
static struct DecEnv dec;

// address: 0x801184C4
static unsigned long oldHeapbase;

// address: 0x801184C8
// size: 0x4
static struct SndVolume oldVolume;

// address: 0x801184CC
static char *ringName;

// address: 0x80117684
// size: 0x14
extern struct STRHDR *ringSH;

// address: 0x80117688
// size: 0x98
extern struct cdstreamstruct *FMVStream;

// address: 0x801184D0
static unsigned short *DCTTab;

// address: 0x80117662
static short firstFrame;

// address: 0x80117664
static short numSkipped;

// address: 0x80117666
static short prevFrameNum;

// address: 0x80117668
static unsigned short maxRunLevel;

// address: 0x8011766C
static unsigned long *ringBuf;

// address: 0x80117670
static int ringcount;

// address: 0x80117674
static int ringpos;

// address: 0x80117678
static int ringsec;

// address: 0x8011767C
static int ringHnd;

// address: 0x80117680
static bool SecGot;

// address: 0x80117728
extern unsigned char *pStatusPanel;

// address: 0x8011772C
extern unsigned char *pGBoxBuff;

// address: 0x80117730
extern unsigned char dropGoldFlag;

// address: 0x80117734
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800A89EC
// size: 0x200
extern char _infostr[256][2];

// address: 0x80117738
// size: 0x2
extern char _infoclr[2];

// address: 0x800A8BEC
// size: 0x100
extern char tempstr[256];

// address: 0x8011773A
extern unsigned char drawhpflag;

// address: 0x8011773B
extern unsigned char drawmanaflag;

// address: 0x8011773C
extern unsigned char chrflag;

// address: 0x8011773D
extern unsigned char drawbtnflag;

// address: 0x8011773E
extern unsigned char panbtndown;

// address: 0x8011773F
extern unsigned char panelflag;

// address: 0x80117740
extern unsigned char chrbtndown;

// address: 0x80117741
extern unsigned char lvlbtndown;

// address: 0x80117742
extern unsigned char sbookflag;

// address: 0x80117743
extern unsigned char talkflag;

// address: 0x80117744
extern int dropGoldValue;

// address: 0x80117748
extern int initialDropGoldValue;

// address: 0x8011774C
extern int initialDropGoldIndex;

// address: 0x80117750
extern unsigned char *pPanelButtons;

// address: 0x80117754
extern unsigned char *pPanelText;

// address: 0x80117758
extern unsigned char *pManaBuff;

// address: 0x8011775C
extern unsigned char *pLifeBuff;

// address: 0x80117760
extern unsigned char *pChrPanel;

// address: 0x80117764
extern unsigned char *pChrButtons;

// address: 0x80117768
extern unsigned char *pSpellCels;

// address: 0x80118FC0
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x801193C0
// size: 0x40
static int _pstrjust[8][2];

// address: 0x801184D4
// size: 0x8
static int _pnumlines[2];

// address: 0x8011776C
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x80117770
// size: 0x8
extern struct RECT CSRect;

// address: 0x801184E4
// size: 0x8
static int _pSpell[2];

// address: 0x801184EC
// size: 0x8
static int _pSplType[2];

// address: 0x801184F4
// size: 0x8
static unsigned char panbtn[8];

// address: 0x80117778
extern int numpanbtns;

// address: 0x8011777C
extern unsigned char *pDurIcons;

// address: 0x80117780
extern unsigned char drawdurflag;

// address: 0x801184FC
// size: 0x4
static unsigned char chrbtn[4];

// address: 0x80117781
extern unsigned char chrbtnactive;

// address: 0x80117784
extern unsigned char *pSpellBkCel;

// address: 0x80117788
extern unsigned char *pSBkBtnCel;

// address: 0x8011778C
extern unsigned char *pSBkIconCels;

// address: 0x80117790
extern int sbooktab;

// address: 0x80117794
extern int cur_spel;

// address: 0x80118500
static long talkofs;

// address: 0x80119410
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x80118504
static unsigned char sgbTalkSavePos;

// address: 0x80118505
static unsigned char sgbNextTalkSave;

// address: 0x80118506
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x80118508
static unsigned char *pTalkPanel;

// address: 0x8011850C
static unsigned char *pMultiBtns;

// address: 0x80118510
static unsigned char *pTalkBtns;

// address: 0x80118514
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x8010DEC4
// size: 0x100
extern unsigned char gbFontTransTbl[256];

// address: 0x8010DE04
// size: 0x44
extern unsigned char fontkern[68];

// address: 0x800A8420
// size: 0x25
extern char SpellITbl[37];

// address: 0x80117695
extern unsigned char DrawLevelUpFlag;

// address: 0x801176BC
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x801176B8
extern unsigned char spspelstate;

// address: 0x801176F8
extern bool initchr;

// address: 0x80117698
static int SPLICONNO;

// address: 0x8011769C
static int SPLICONY;

// address: 0x801184DC
static int SPLICONRIGHT;

// address: 0x801176A0
static int scx;

// address: 0x801176A4
static int scy;

// address: 0x801176A8
static int scx1;

// address: 0x801176AC
static int scy1;

// address: 0x801176B0
static int scx2;

// address: 0x801176B4
static int scy2;

// address: 0x801176C4
extern char SpellCol;

// address: 0x800A840C
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800A8448
// size: 0xA0
extern int PanBtnPos[5][8];

// address: 0x800A84E8
// size: 0x20
extern char *PanBtnHotKey[8];

// address: 0x800A8508
// size: 0x20
extern unsigned long PanBtnStr[8];

// address: 0x800A8528
// size: 0x64
extern int SpellPages[5][5];

// address: 0x801176E8
static int lus;

// address: 0x801176EC
static int CsNo;

// address: 0x801176F0
static char plusanim;

// address: 0x80119400
// size: 0x10
static struct Dialog CSBack;

// address: 0x801176F4
static int CS_XOFF;

// address: 0x800A858C
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x801176FC
extern int NoCSEntries;

// address: 0x80117700
static int SPALOFF;

// address: 0x80117704
static int paloffset1;

// address: 0x80117708
static int paloffset2;

// address: 0x8011770C
static int paloffset3;

// address: 0x80117710
static int paloffset4;

// address: 0x80117714
static int pinc1;

// address: 0x80117718
static int pinc2;

// address: 0x8011771C
static int pinc3;

// address: 0x80117720
static int pinc4;

// address: 0x801177A8
// size: 0x8
extern int _pcurs[2];

// address: 0x801177B0
extern int cursW;

// address: 0x801177B4
extern int cursH;

// address: 0x801177B8
extern int icursW;

// address: 0x801177BC
extern int icursH;

// address: 0x801177C0
extern int icursW28;

// address: 0x801177C4
extern int icursH28;

// address: 0x801177C8
extern int cursmx;

// address: 0x801177CC
extern int cursmy;

// address: 0x801177D0
// size: 0x8
extern int _pcursmonst[2];

// address: 0x801177D8
// size: 0x2
extern char _pcursobj[2];

// address: 0x801177DC
// size: 0x2
extern char _pcursitem[2];

// address: 0x801177E0
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x801177E4
// size: 0x2
extern char _pcursplr[2];

// address: 0x801177A4
extern int sel_data;

// address: 0x800A8CEC
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x801177E8
extern int spurtndx;

// address: 0x801177EC
extern int stonendx;

// address: 0x801177F0
extern unsigned char *pSquareCel;

// address: 0x80117830
extern unsigned long ghInst;

// address: 0x80117834
extern unsigned char svgamode;

// address: 0x80117838
extern int MouseX;

// address: 0x8011783C
extern int MouseY;

// address: 0x80117840
extern long gv1;

// address: 0x80117844
extern long gv2;

// address: 0x80117848
extern long gv3;

// address: 0x8011784C
extern long gv4;

// address: 0x80117850
extern long gv5;

// address: 0x80117854
extern unsigned char gbProcessPlayers;

// address: 0x800A8E60
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800A8E88
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800A8ECC
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x80117855
extern unsigned char gbDoEnding;

// address: 0x80117856
extern unsigned char gbRunGame;

// address: 0x80117857
extern unsigned char gbRunGameResult;

// address: 0x80117858
extern unsigned char gbGameLoopStartup;

// address: 0x80119460
// size: 0x44
static int glEndSeed[17];

// address: 0x801194B0
// size: 0x44
static int glMid1Seed[17];

// address: 0x80119500
// size: 0x44
static int glMid2Seed[17];

// address: 0x80119550
// size: 0x44
static int glMid3Seed[17];

// address: 0x80118518
static long *sg_previousFilter;

// address: 0x800A8F10
// size: 0x30
extern int CreateEnv[12];

// address: 0x8011785C
extern int Passedlvldir;

// address: 0x80117860
extern unsigned char *TempStack;

// address: 0x80117800
extern unsigned long ghMainWnd;

// address: 0x80117804
extern unsigned char fullscreen;

// address: 0x80117808
extern int force_redraw;

// address: 0x8011781C
extern unsigned char PauseMode;

// address: 0x8011781D
extern unsigned char FriendlyMode;

// address: 0x8011780D
extern unsigned char visiondebug;

// address: 0x8011780F
extern unsigned char light4flag;

// address: 0x80117810
extern unsigned char leveldebug;

// address: 0x80117811
extern unsigned char monstdebug;

// address: 0x80117818
extern int debugmonsttypes;

// address: 0x8011780C
static unsigned char cineflag;

// address: 0x8011780E
extern unsigned char scrollflag;

// address: 0x80117812
extern unsigned char trigdebug;

// address: 0x80117814
extern int setseed;

// address: 0x80117820
static int sgnTimeoutCurs;

// address: 0x80117824
extern unsigned char sgbMouseDown;

// address: 0x800A95DC
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x80117878
extern int numtowners;

// address: 0x8011787C
extern unsigned char storeflag;

// address: 0x8011787D
extern unsigned char boyloadflag;

// address: 0x8011787E
extern unsigned char bannerflag;

// address: 0x80117880
extern unsigned char *pCowCels;

// address: 0x8011851C
static unsigned long sgdwCowClicks;

// address: 0x80118520
static int sgnCowMsg;

// address: 0x800A931C
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x80117870
extern unsigned long CowPlaying;

// address: 0x800A8F40
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800A92B8
// size: 0xC
extern int TownCowX[3];

// address: 0x800A92C4
// size: 0xC
extern int TownCowY[3];

// address: 0x800A92D0
// size: 0xC
extern int TownCowDir[3];

// address: 0x800A92DC
// size: 0x20
extern int cowoffx[8];

// address: 0x800A92FC
// size: 0x20
extern int cowoffy[8];

// address: 0x80117898
extern int sfxdelay;

// address: 0x8011789C
extern int sfxdnum;

// address: 0x80117890
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800AA3DC
// size: 0xF4C
extern struct TSFX sgSFX[979];

// address: 0x80117894
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x801178A0
extern long orgseed;

// address: 0x80118524
static long sglGameSeed;

// address: 0x801178A4
extern int SeedCount;

// address: 0x80118528
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8011852C
static int sgnWidth;

// address: 0x801178B2
extern char msgflag;

// address: 0x801178B3
extern char msgdelay;

// address: 0x800AB3D8
// size: 0x50
extern char msgtable[80];

// address: 0x800AB328
// size: 0xB0
extern int MsgStrings[44];

// address: 0x801178B1
extern char msgcnt;

// address: 0x80118530
static unsigned long sgdwProgress;

// address: 0x80118534
static unsigned long sgdwXY;

// address: 0x800AB428
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x8010E2E0
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x8010F680
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x801103A0
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x801112A0
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800AB63C
// size: 0x4A00
extern struct ItemStruct item[128];

// address: 0x800B003C
// size: 0x7F
extern char itemactive[127];

// address: 0x800B00BC
// size: 0x7F
extern char itemavail[127];

// address: 0x800B013C
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x801178F4
extern unsigned char uitemflag;

// address: 0x80118538
static int tem;

// address: 0x80119598
// size: 0x94
static struct ItemStruct curruitem;

// address: 0x80119638
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x801178F8
extern int ScrollType;

// address: 0x800B01BC
// size: 0x80
extern char ItemStr[128];

// address: 0x801178CC
extern long numitems;

// address: 0x801178D0
extern int gnNumGetRecords;

// address: 0x800AB598
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800AB4C8
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x801130E4
// size: 0x46
static short Item2Frm[35];

// address: 0x800AB574
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x801178D4
extern int *ItemAnimSnds;

// address: 0x801178D8
extern int idoppely;

// address: 0x801178DC
extern int ScrollFlag;

// address: 0x800AB624
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800B0FE8
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800B1128
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x8011790C
extern int numlights;

// address: 0x80117910
extern char lightmax;

// address: 0x800B1150
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x80117914
extern int numvision;

// address: 0x80117918
extern unsigned char dovision;

// address: 0x8011791C
extern int visionid;

// address: 0x8011853C
static int disp_mask;

// address: 0x80118540
static int weird;

// address: 0x80118544
static int disp_tab_r;

// address: 0x80118548
static int dispy_r;

// address: 0x8011854C
static int disp_tab_g;

// address: 0x80118550
static int dispy_g;

// address: 0x80118554
static int disp_tab_b;

// address: 0x80118558
static int dispy_b;

// address: 0x8011855C
static int radius;

// address: 0x80118560
static int bright;

// address: 0x80119648
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x801178FC
extern int lightflag;

// address: 0x800B0CFC
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800B0FB0
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800B023C
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x80117900
extern int restore_r;

// address: 0x80117904
extern int restore_g;

// address: 0x80117908
extern int restore_b;

// address: 0x800B0FC8
// size: 0x10
extern char radius_tab[16];

// address: 0x800B0FD8
// size: 0x10
extern char bright_tab[16];

// address: 0x8011793E
extern unsigned char qtextflag;

// address: 0x80117940
extern int qtextSpd;

// address: 0x80118564
static unsigned char *pMedTextCels;

// address: 0x80118568
static unsigned char *pTextBoxCels;

// address: 0x8011856C
static char *qtextptr;

// address: 0x80118570
static int qtexty;

// address: 0x80118574
static unsigned long qtextDelay;

// address: 0x80118578
static unsigned long sgLastScroll;

// address: 0x8011857C
static unsigned long scrolltexty;

// address: 0x80118580
static long sglMusicVolumeSave;

// address: 0x8011792C
static bool qtbodge;

// address: 0x800B1310
// size: 0x10
extern struct Dialog QBack;

// address: 0x8011793D
static unsigned char CDFlip;

// address: 0x800B1320
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800B1A90
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800B1980
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800B1B7C
// size: 0x17248
extern struct DLevel sgLevels[17];

// address: 0x800C8DC4
// size: 0xD48
extern struct LocalLevel sgLocals[17];

// address: 0x801196C8
// size: 0x20
static struct DJunk sgJunk;

// address: 0x80118585
static unsigned char sgbRecvCmd;

// address: 0x80118588
static unsigned long sgdwRecvOffset;

// address: 0x8011858C
static unsigned char sgbDeltaChunks;

// address: 0x8011858D
static unsigned char sgbDeltaChanged;

// address: 0x80118590
static unsigned long sgdwOwnerWait;

// address: 0x80118594
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x80118598
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8011859C
static int sgnCurrMegaPlayer;

// address: 0x80117959
extern unsigned char deltaload;

// address: 0x8011795A
extern unsigned char gbBufferMsgs;

// address: 0x8011795C
extern unsigned long dwRecCount;

// address: 0x80117972
extern unsigned char gbMaxPlayers;

// address: 0x80117973
extern unsigned char gbActivePlayers;

// address: 0x80117974
extern unsigned char gbGameDestroyed;

// address: 0x80117975
extern unsigned char gbDeltaSender;

// address: 0x80117976
extern unsigned char gbSelectProvider;

// address: 0x80117977
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x801185A0
static unsigned char sgbSentThisCycle;

// address: 0x801185A4
static unsigned long sgdwGameLoops;

// address: 0x801185A8
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x801185AC
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x801185B0
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x801185B8
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x801185C0
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x801185C8
static unsigned char sgbTimeout;

// address: 0x801185CC
static long sglTimeoutStart;

// address: 0x8011796C
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x80117971
static unsigned char sgbNetInited;

// address: 0x800C9B0C
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800C9CD0
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x801137AC
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800CA4B0
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x80117998
extern long numobjects;

// address: 0x800CBA84
// size: 0x7F
extern char objectactive[127];

// address: 0x800CBB04
// size: 0x7F
extern char objectavail[127];

// address: 0x8011799C
extern unsigned char InitObjFlag;

// address: 0x801179A0
extern int trapid;

// address: 0x800CBB84
// size: 0x28
extern char ObjFileList[40];

// address: 0x801179A4
extern int trapdir;

// address: 0x801179A8
extern int leverid;

// address: 0x80117990
extern int numobjfiles;

// address: 0x800CA3C8
// size: 0x20
extern int bxadd[8];

// address: 0x800CA3E8
// size: 0x20
extern int byadd[8];

// address: 0x800CA470
// size: 0x1A
extern char shrineavail[26];

// address: 0x800CA408
// size: 0x68
extern int shrinestrs[26];

// address: 0x800CA48C
// size: 0x24
extern int StoryBookName[9];

// address: 0x80117994
extern int myscale;

// address: 0x801179BC
extern unsigned char gbValidSaveFile;

// address: 0x801179B8
extern bool DoLoadedChar;

// address: 0x800CBDA4
// size: 0x45A0
extern struct PlayerStruct plr[2];

// address: 0x801179DC
extern int myplr;

// address: 0x801179E0
extern int deathdelay;

// address: 0x801179E4
extern unsigned char deathflag;

// address: 0x801179E5
extern char light_rad;

// address: 0x801179D4
// size: 0x5
extern char light_level[5];

// address: 0x800CBC9C
// size: 0x30
extern int MaxStats[4][3];

// address: 0x801179CC
static int PlrStructSize;

// address: 0x801179D0
static int ItemStructSize;

// address: 0x800CBBAC
// size: 0x24
extern int plrxoff[9];

// address: 0x800CBBD0
// size: 0x24
extern int plryoff[9];

// address: 0x800CBBF4
// size: 0x24
extern int plrxoff2[9];

// address: 0x800CBC18
// size: 0x24
extern int plryoff2[9];

// address: 0x800CBC3C
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800CBC60
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800CBC6C
// size: 0xC
extern int MagicTbl[3];

// address: 0x800CBC78
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800CBC84
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800CBC90
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800CBCCC
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800D047C
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x80117A20
extern unsigned char *pQLogCel;

// address: 0x80117A24
extern int ReturnLvlX;

// address: 0x80117A28
extern int ReturnLvlY;

// address: 0x80117A2C
extern int ReturnLvl;

// address: 0x80117A30
extern int ReturnLvlT;

// address: 0x80117A34
extern int qfade;

// address: 0x80117A38
extern unsigned char rporttest;

// address: 0x80117A3C
extern int qline;

// address: 0x80117A40
extern int numqlines;

// address: 0x80117A44
extern int qtopline;

// address: 0x801196E8
// size: 0x40
static int qlist[16];

// address: 0x801185D0
// size: 0x8
static struct RECT QSRect;

// address: 0x801179F1
extern unsigned char questlog;

// address: 0x800D0344
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x801179F4
extern int ALLQUESTS;

// address: 0x800D0458
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800D0464
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800D0470
// size: 0xC
extern int QuestGroup3[3];

// address: 0x80117A08
// size: 0x8
extern int QuestGroup4[2];

// address: 0x801179F8
// size: 0x7
static char questxoff[7];

// address: 0x80117A00
// size: 0x7
static char questyoff[7];

// address: 0x800D0444
// size: 0x14
extern int questtrigstr[5];

// address: 0x80117A10
static int QS_PX;

// address: 0x80117A14
static int QS_PY;

// address: 0x80117A18
static int QS_PW;

// address: 0x80117A1C
static int QS_PH;

// address: 0x80119728
// size: 0x10
static struct Dialog QSBack;

// address: 0x800D05BC
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x80117A83
extern char stextflag;

// address: 0x800D0E14
// size: 0xB90
extern struct ItemStruct smithitem[20];

// address: 0x800D19A4
// size: 0x378
extern struct ItemStruct premiumitem[6];

// address: 0x80117A84
extern int numpremium;

// address: 0x80117A88
extern int premiumlevel;

// address: 0x800D1D1C
// size: 0xB90
extern struct ItemStruct witchitem[20];

// address: 0x800D28AC
// size: 0x94
extern struct ItemStruct boyitem;

// address: 0x80117A8C
extern int boylevel;

// address: 0x800D2940
// size: 0x94
extern struct ItemStruct golditem;

// address: 0x800D29D4
// size: 0xB90
extern struct ItemStruct healitem[20];

// address: 0x80117A90
extern char stextsize;

// address: 0x80117A91
extern unsigned char stextscrl;

// address: 0x801185D8
static int stextsel;

// address: 0x801185DC
static int stextlhold;

// address: 0x801185E0
static int stextshold;

// address: 0x801185E4
static int stextvhold;

// address: 0x801185E8
static int stextsval;

// address: 0x801185EC
static int stextsmax;

// address: 0x801185F0
static int stextup;

// address: 0x801185F4
static int stextdown;

// address: 0x801185F8
static char stextscrlubtn;

// address: 0x801185F9
static char stextscrldbtn;

// address: 0x801185FA
static char SItemListFlag;

// address: 0x80119738
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800D3564
// size: 0x1BC0
extern struct ItemStruct storehold[48];

// address: 0x800D5124
// size: 0x30
extern char storehidx[48];

// address: 0x801185FC
static int storenumh;

// address: 0x80118600
static int gossipstart;

// address: 0x80118604
static int gossipend;

// address: 0x80118608
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x80118610
static int talker;

// address: 0x80117A6C
extern unsigned char *pSTextBoxCels;

// address: 0x80117A70
extern unsigned char *pSTextSlidCels;

// address: 0x80117A74
extern int *SStringY;

// address: 0x800D0D40
// size: 0x10
extern struct Dialog SBack;

// address: 0x800D0D50
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800D0DA0
// size: 0x50
extern int SStringYBuy[20];

// address: 0x800D0DF0
// size: 0x24
extern int talkname[9];

// address: 0x80117A82
extern unsigned char InStoreFlag;

// address: 0x80114834
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x80117AA0
extern unsigned long gdwAllTextEntries;

// address: 0x80118614
static unsigned char *P3Tiles;

// address: 0x80117AB0
extern int tile;

// address: 0x80117AC0
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800D538C
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x80117AC4
extern int numtrigs;

// address: 0x80117AC8
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x80117ACC
extern int TWarpFrom;

// address: 0x800D5154
// size: 0x2C
extern int TownDownList[11];

// address: 0x800D5180
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800D51B4
// size: 0x30
extern int L1UpList[12];

// address: 0x800D51E4
// size: 0x28
extern int L1DownList[10];

// address: 0x800D520C
// size: 0xC
extern int L2UpList[3];

// address: 0x800D5218
// size: 0x14
extern int L2DownList[5];

// address: 0x800D522C
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800D5238
// size: 0x3C
extern int L3UpList[15];

// address: 0x800D5274
// size: 0x24
extern int L3DownList[9];

// address: 0x800D5298
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800D52D0
// size: 0x10
extern int L4UpList[4];

// address: 0x800D52E0
// size: 0x18
extern int L4DownList[6];

// address: 0x800D52F8
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800D5308
// size: 0x84
extern int L4PentaList[33];

// address: 0x801155C4
// size: 0xA
static char cursoff[10];

// address: 0x80117AE6
extern unsigned char gbMusicOn;

// address: 0x80117AE7
extern unsigned char gbSoundOn;

// address: 0x80117AE5
extern unsigned char gbSndInited;

// address: 0x80117AEC
extern long sglMasterVolume;

// address: 0x80117AF0
extern long sglMusicVolume;

// address: 0x80117AF4
extern long sglSoundVolume;

// address: 0x80117AF8
extern long sglSpeechVolume;

// address: 0x80117AE8
extern unsigned char gbDupSounds;

// address: 0x80117AFC
static int sgnMusicTrack;

// address: 0x80117B00
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x80115660
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x80117B24
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800D53DC
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x80117B2C
// size: 0x2
extern char _pfind_index[2];

// address: 0x80117B30
// size: 0x2
extern char _pfindx[2];

// address: 0x80117B34
// size: 0x2
extern char _pfindy[2];

// address: 0x80117B36
extern unsigned char automapmoved;

// address: 0x80117B18
extern unsigned char flyflag;

// address: 0x80117B10
// size: 0x8
extern char (*pad_styles[2])();

// address: 0x80117B19
extern char speed_type;

// address: 0x80117B1A
extern char sel_speed;

// address: 0x80118618
static unsigned long (*CurrentProc)();

// address: 0x801157EC
// size: 0x58
static struct MESSAGE_STR AllMsgs[11];

// address: 0x80117B64
extern int NumOfStrings;

// address: 0x80117B38
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x80117B3C
extern long hndText;

// address: 0x80117B40
extern char **TextPtr;

// address: 0x80117B44
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x80117B74
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x80117B78
extern int CharFade;

// address: 0x80117B7C
extern int rotateness;

// address: 0x80117B80
extern int spiralling_shape;

// address: 0x80117B84
extern int down;

// address: 0x800D542C
// size: 0x10
extern char MlTab[16];

// address: 0x800D543C
// size: 0x10
extern char QlTab[16];

// address: 0x800D544C
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x80117BA0
extern int MyXoff1;

// address: 0x80117BA4
extern int MyYoff1;

// address: 0x80117BA8
extern int MyXoff2;

// address: 0x80117BAC
extern int MyYoff2;

// address: 0x80117BBC
extern bool iscflag;

// address: 0x80117BC9
static unsigned char sgbFadedIn;

// address: 0x80117BCA
static unsigned char screenbright;

// address: 0x80117BCC
static int faderate;

// address: 0x80117BD0
static bool fading;

// address: 0x80117BEC
// size: 0x8
static unsigned char AmShiftTab[8];

// address: 0x8011861C
static unsigned char *tbuff;

// address: 0x80118620
static unsigned char HR1;

// address: 0x80118621
static unsigned char HR2;

// address: 0x80118622
static unsigned char HR3;

// address: 0x80118623
static unsigned char VR1;

// address: 0x80118624
static unsigned char VR2;

// address: 0x80118625
static unsigned char VR3;

// address: 0x80117C60
// size: 0x18
extern struct NODE *pHallList;

// address: 0x80117C64
extern int nRoomCnt;

// address: 0x80117C68
extern int nSx1;

// address: 0x80117C6C
extern int nSy1;

// address: 0x80117C70
extern int nSx2;

// address: 0x80117C74
extern int nSy2;

// address: 0x80117C18
extern int Area_Min;

// address: 0x80117C1C
extern int Room_Max;

// address: 0x80117C20
extern int Room_Min;

// address: 0x80117C24
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x80117C2C
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x80117C34
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x80117C3C
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x80117C44
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x80117C48
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x80117C4C
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x80117C50
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x80117C54
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x80117C58
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x80117C5C
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x80118628
static int abyssx;

// address: 0x8011862C
static unsigned char lavapool;

// address: 0x80117D00
extern int lockoutcnt;

// address: 0x80117C84
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x80117C8C
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x80117C94
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x80117C9C
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x80117CA4
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x80117CAC
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x80117CB4
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x80117CBC
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x80117CC4
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x80117CCC
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x80117CD4
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x80117CDC
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x80117CE4
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x80117CEC
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x80117CF0
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x80117CF4
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x80117CF8
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x80117CFC
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x80117D04
extern int diabquad1x;

// address: 0x80117D08
extern int diabquad2x;

// address: 0x80117D0C
extern int diabquad3x;

// address: 0x80117D10
extern int diabquad4x;

// address: 0x80117D14
extern int diabquad1y;

// address: 0x80117D18
extern int diabquad2y;

// address: 0x80117D1C
extern int diabquad3y;

// address: 0x80117D20
extern int diabquad4y;

// address: 0x80117D24
extern int SP4x1;

// address: 0x80117D28
extern int SP4y1;

// address: 0x80117D2C
extern int SP4x2;

// address: 0x80117D30
extern int SP4y2;

// address: 0x80117D34
extern int l4holdx;

// address: 0x80117D38
extern int l4holdy;

// address: 0x80117D48
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x80117D50
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800D55D4
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800D55E8
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800D5604
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x80117D58
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800D5618
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x80117E4C
static bool DoUiForChooseMonster;

// address: 0x800D563C
// size: 0x88
static char *MgToText[34];

// address: 0x800D56C4
// size: 0x24
extern int StoryText[3][3];

// address: 0x800D56E8
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800D68E8
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800D6F28
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x80117E70
extern int setpc_x;

// address: 0x80117E74
extern int setpc_y;

// address: 0x80117E78
extern int setpc_w;

// address: 0x80117E7C
extern int setpc_h;

// address: 0x80117E80
extern unsigned char setloadflag;

// address: 0x80117E84
extern unsigned char *pMegaTiles;

// address: 0x800D7568
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800D7D6C
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800D8570
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800D8D74
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800D9578
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x80117E88
extern int dminx;

// address: 0x80117E8C
extern int dminy;

// address: 0x80117E90
extern int dmaxx;

// address: 0x80117E94
extern int dmaxy;

// address: 0x80117E98
extern int gnDifficulty;

// address: 0x80117E9C
extern unsigned char currlevel;

// address: 0x80117E9D
extern unsigned char leveltype;

// address: 0x80117E9E
extern unsigned char setlevel;

// address: 0x80117E9F
extern unsigned char setlvlnum;

// address: 0x80117EA0
extern unsigned char setlvltype;

// address: 0x80117EA4
extern int ViewX;

// address: 0x80117EA8
extern int ViewY;

// address: 0x80117EAC
extern int ViewDX;

// address: 0x80117EB0
extern int ViewDY;

// address: 0x80117EB4
extern int ViewBX;

// address: 0x80117EB8
extern int ViewBY;

// address: 0x800D9D7C
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x80117EBC
extern int LvlViewX;

// address: 0x80117EC0
extern int LvlViewY;

// address: 0x80117EC4
extern int btmbx;

// address: 0x80117EC8
extern int btmby;

// address: 0x80117ECC
extern int btmdx;

// address: 0x80117ED0
extern int btmdy;

// address: 0x80117ED4
extern int MicroTileLen;

// address: 0x80117ED8
extern char TransVal;

// address: 0x800D9D90
// size: 0x20
extern bool TransList[8];

// address: 0x80117EDC
extern int themeCount;

// address: 0x800D9DB0
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x800FC070
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x800FCBD4
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x800FD738
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x800FE29C
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x80117E68
extern unsigned char *pSetPiece;

// address: 0x80117E6C
extern int DungSize;

// address: 0x800FE468
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x80117F1C
extern int numthemes;

// address: 0x80117F20
extern int zharlib;

// address: 0x80117F24
extern unsigned char armorFlag;

// address: 0x80117F25
extern unsigned char bCrossFlag;

// address: 0x80117F26
extern unsigned char weaponFlag;

// address: 0x80117F28
extern int themex;

// address: 0x80117F2C
extern int themey;

// address: 0x80117F30
extern int themeVar1;

// address: 0x80117F34
extern unsigned char bFountainFlag;

// address: 0x80117F35
extern unsigned char cauldronFlag;

// address: 0x80117F36
extern unsigned char mFountainFlag;

// address: 0x80117F37
extern unsigned char pFountainFlag;

// address: 0x80117F38
extern unsigned char tFountainFlag;

// address: 0x80117F39
extern unsigned char treasureFlag;

// address: 0x80117F3C
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x800FE348
// size: 0x10
extern int ThemeGood[4];

// address: 0x800FE358
// size: 0x64
extern int trm5x[25];

// address: 0x800FE3BC
// size: 0x64
extern int trm5y[25];

// address: 0x800FE420
// size: 0x24
extern int trm3x[9];

// address: 0x800FE444
// size: 0x24
extern int trm3y[9];

// address: 0x80117FF4
extern int nummissiles;

// address: 0x800FE680
// size: 0x1F4
extern int missileactive[125];

// address: 0x800FE874
// size: 0x1F4
extern int missileavail[125];

// address: 0x80117FF8
extern unsigned char MissilePreFlag;

// address: 0x800FEA68
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x80117FF9
extern unsigned char ManashieldFlag;

// address: 0x80117FFA
extern unsigned char ManashieldFlag2;

// address: 0x800FE5F8
// size: 0x20
extern int XDirAdd[8];

// address: 0x800FE618
// size: 0x20
extern int YDirAdd[8];

// address: 0x80117FE1
extern unsigned char fadetor;

// address: 0x80117FE2
extern unsigned char fadetog;

// address: 0x80117FE3
extern unsigned char fadetob;

// address: 0x800FE638
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x800FE648
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x80101318
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x80118058
extern long nummonsters;

// address: 0x80106A98
// size: 0x190
extern short monstactive[200];

// address: 0x80106C28
// size: 0x190
extern short monstkills[200];

// address: 0x80106DB8
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x8011805C
extern long monstimgtot;

// address: 0x80118060
extern char totalmonsters;

// address: 0x80118064
extern int uniquetrans;

// address: 0x80118630
static unsigned char sgbSaveSoundOn;

// address: 0x8011802C
// size: 0x8
extern char offset_x[8];

// address: 0x80118034
// size: 0x8
extern char offset_y[8];

// address: 0x80118014
// size: 0x8
extern char left[8];

// address: 0x8011801C
// size: 0x8
extern char right[8];

// address: 0x80118024
// size: 0x8
extern char opposite[8];

// address: 0x80118008
extern int nummtypes;

// address: 0x8011800C
// size: 0x7
extern char animletter[7];

// address: 0x80101178
// size: 0x120
extern int MWVel[3][24];

// address: 0x8011803C
// size: 0x4
extern char rnd5[4];

// address: 0x80118040
// size: 0x4
extern char rnd10[4];

// address: 0x80118044
// size: 0x4
extern char rnd20[4];

// address: 0x80118048
// size: 0x4
extern char rnd60[4];

// address: 0x80101298
// size: 0x80
extern void (*AiProc[32])();

// address: 0x80107290
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x80108CD0
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x80108D50
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x80108DC0
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x80107078
// size: 0x218
extern int TransPals[134];

// address: 0x80106F78
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x80109710
// size: 0x60
extern struct PortalStruct portal[4];

// address: 0x80118080
extern int portalindex;

// address: 0x801096F0
// size: 0x10
extern int WarpDropX[4];

// address: 0x80109700
// size: 0x10
extern int WarpDropY[4];

// address: 0x801180A0
extern unsigned char invflag;

// address: 0x801180A1
extern unsigned char drawsbarflag;

// address: 0x801180A4
extern int InvBackY;

// address: 0x801180A8
extern int InvCursPos;

// address: 0x80109DF0
// size: 0x94
extern struct ItemStruct InvSpareSlot;

// address: 0x80109E84
// size: 0x4A
extern unsigned char InvSlotTable[74];

// address: 0x801180AC
extern int InvBackAY;

// address: 0x801180B0
extern int InvSel;

// address: 0x801180B4
extern int ItemW;

// address: 0x801180B8
extern int ItemH;

// address: 0x801180BC
extern int ItemNo;

// address: 0x801180C0
extern unsigned char InvSpareFlag;

// address: 0x801180C4
// size: 0x8
extern struct RECT BRect;

// address: 0x80118090
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x80118094
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x80109770
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x80109798
// size: 0x250
extern struct InvXY InvRect[74];

// address: 0x801099E8
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x80109C88
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x80109D3C
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x80118098
static unsigned long sgdwLastTime;

// address: 0x8011809C
extern int InvSpareSel;

// address: 0x801180D5
extern unsigned char automapflag;

// address: 0x80109ED0
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x80109F98
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x801180D6
extern unsigned char AMLWallFlag;

// address: 0x801180D7
extern unsigned char AMRWallFlag;

// address: 0x801180D8
extern unsigned char AMLLWallFlag;

// address: 0x801180D9
extern unsigned char AMLRWallFlag;

// address: 0x801180DA
extern unsigned char AMDirtFlag;

// address: 0x801180DB
extern unsigned char AMColumnFlag;

// address: 0x801180DC
extern unsigned char AMStairFlag;

// address: 0x801180DD
extern unsigned char AMLDoorFlag;

// address: 0x801180DE
extern unsigned char AMLGrateFlag;

// address: 0x801180DF
extern unsigned char AMLArchFlag;

// address: 0x801180E0
extern unsigned char AMRDoorFlag;

// address: 0x801180E1
extern unsigned char AMRGrateFlag;

// address: 0x801180E2
extern unsigned char AMRArchFlag;

// address: 0x801180E4
extern int AutoMapX;

// address: 0x801180E8
extern int AutoMapY;

// address: 0x801180EC
extern int AutoMapXOfs;

// address: 0x801180F0
extern int AutoMapYOfs;

// address: 0x801180F4
extern int AMPlayerX;

// address: 0x801180F8
extern int AMPlayerY;

// address: 0x8011878C
extern unsigned long GazTick;

// address: 0x8011EAE0
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A2E3C
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x801187B4
extern void (*PollFunc)();

// address: 0x80118798
extern void (*MsgFunc)();

// address: 0x801187E4
extern void (*ErrorFunc)();

// address: 0x801186B8
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x8011CA78
// size: 0xA00
static struct MEM_HDR MemHdrBlocks[80];

// address: 0x801186BC
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x801186C0
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x801186C4
static int TimeStamp;

// address: 0x801186C8
static unsigned char FullErrorChecking;

// address: 0x801186CC
static unsigned long LastAttemptedAlloc;

// address: 0x801186D0
static unsigned long LastDeallocedBlock;

// address: 0x801186D4
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x801186D8
static int NumOfFreeHdrs;

// address: 0x801186DC
static unsigned long LastTypeAlloced;

// address: 0x801186E0
static void (*AllocFilter)();

// address: 0x800A2E74
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A2E9C
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x801186E4
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x801186E8
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x801186EC
// size: 0x5C
static struct TASK *T;

// address: 0x801186F0
static unsigned long MemTypeForTasker;

// address: 0x8011D478
// size: 0x30
static int SchEnv[12];

// address: 0x801186F4
static unsigned long ExecId;

// address: 0x801186F8
static unsigned long ExecMask;

// address: 0x801186FC
static int TasksActive;

// address: 0x80118700
static void (*EpiFunc)();

// address: 0x80118704
static void (*ProFunc)();

// address: 0x80118708
static unsigned long EpiProId;

// address: 0x8011870C
static unsigned long EpiProMask;

// address: 0x80118710
static void (*DoTasksPrologue)();

// address: 0x80118714
static void (*DoTasksEpilogue)();

// address: 0x80118718
static void (*StackFloodCallback)();

// address: 0x8011871C
static unsigned char ExtraStackProtection;

// address: 0x80118720
static int ExtraStackSizeLongs;

// address: 0x801187A0
extern void *LastPtr;

// address: 0x800A2EC4
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8011D4A8
// size: 0x1380
static char buf[4992];

// address: 0x800A2ECC
// size: 0x7
static char NULL_REP[7];

// address: 0x8007A2C4
// line start: 177
// line end:   178
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007A2E0
// line start: 182
// line end:   183
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007A2EC
// line start: 110
// line end:   119
void Remove96__Fv() {
}


// address: 0x8007A324
// line start: 129
// line end:   200
void AppMain() {
}


// address: 0x8007A3CC
// line start: 208
// line end:   209
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007A3F8
// line start: 217
// line end:   241
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007A490
// line start: 254
// line end:   269
void MAIN_MainLoop__Fv() {
}


// address: 0x8007A4E4
// line start: 76
// line end:   80
void CheckMaxArgs__Fv() {
}


// address: 0x8007A518
// line start: 96
// line end:   98
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007A524
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


// address: 0x8007A698
// line start: 159
// line end:   178
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A74C
// line start: 220
// line end:   239
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007A7EC
// line start: 249
// line end:   266
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A888
// line start: 276
// line end:   287
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A928
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


// address: 0x8007AA44
// line start: 186
// line end:   204
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007AB20
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


// address: 0x8007AC48
// line start: 245
// line end:   254
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007AC84
// line start: 267
// line end:   330
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007AE8C
// line start: 365
// line end:   367
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007AEC8
// line start: 371
// line end:   372
unsigned char ClearedYet__Fv() {
}


// address: 0x8007AED4
// line start: 380
// line end:   384
void PrimDrawSycnCallBack() {
}


// address: 0x8007AEF4
// line start: 394
// line end:   395
void SendDispEnv__Fv() {
}


// address: 0x8007AF18
// size: 0x18
// line start: 444
// line end:   448
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007AF30
// size: 0x28
// line start: 452
// line end:   456
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007AF48
// size: 0x34
// line start: 460
// line end:   464
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007AF60
// size: 0x24
// line start: 469
// line end:   473
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007AF78
// size: 0x14
// line start: 477
// line end:   481
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007AF90
// size: 0xC
// line start: 494
// line end:   498
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007AFA8
// line start: 502
// line end:   531
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007B0BC
// line start: 537
// line end:   548
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007B124
// line start: 127
// line end:   128
void VID_AfterDisplay__Fv() {
}


// address: 0x8007B144
// line start: 182
// line end:   184
void VID_ScrOn__Fv() {
}


// address: 0x8007B16C
// line start: 203
// line end:   209
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007B1C4
// line start: 213
// line end:   214
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007B1D0
// line start: 218
// line end:   219
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007B1DC
// line start: 224
// line end:   230
void VID_DispEnvSend() {
}


// address: 0x8007B218
// line start: 236
// line end:   238
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007B228
// line start: 242
// line end:   243
int VID_GetXOff__Fv() {
}


// address: 0x8007B234
// line start: 247
// line end:   248
int VID_GetYOff__Fv() {
}


// address: 0x8007B240
// line start: 96
// line end:   116
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007B248
// line start: 148
// line end:   149
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007B268
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007B268(unsigned short tpage) {
}


// address: 0x8007B284
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007B284(unsigned short tpage) {
}


// address: 0x8007B290
// size: 0x14
// line start: 163
// line end:   164
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007B29C
// size: 0x14
// line start: 173
// line end:   174
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007B2A8
// line start: 182
// line end:   242
void SortOutFileSystem__Fv() {
}


// address: 0x8007B3E4
// line start: 112
// line end:   114
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007B404
// line start: 120
// line end:   128
void Spanker__Fv() {
}


// address: 0x8007B444
// line start: 239
// line end:   240
void GaryLiddon__Fv() {
}


// address: 0x8007B44C
// line start: 58
// line end:   65
void ReadPad__Fi(int NoDeb) {
	// register: 2
	register int New;
}


// address: 0x8007B4AC
// line start: 70
// line end:   73
void DummyPoll__Fv() {
}


// address: 0x8007B4B4
// line start: 76
// line end:   77
void DaveOwens__Fv() {
}


// address: 0x8007B4DC
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007B504
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007B504(unsigned short tpage) {
}


// address: 0x8007B520
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007B520(unsigned short tpage) {
}


// address: 0x8007B52C
// line start: 473
// line end:   502
void TimSwann__Fv() {
}


// address: 0x8007B534
// line start: 24
// line end:   25
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007B53C
// line start: 29
// line end:   31
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007B570
// line start: 35
// line end:   38
void leighbird__Fv() {
}


// address: 0x8007B598
// size: 0x14
// line start: 61
// line end:   63
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007B5E8
// line start: 70
// line end:   71
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007B63C
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


// address: 0x8007B7A4
// line start: 112
// line end:   119
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B808
// line start: 129
// line end:   131
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B828
// line start: 138
// line end:   150
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007B908
// line start: 157
// line end:   171
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007B9CC
// line start: 180
// line end:   185
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007BA30
// line start: 193
// line end:   207
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007BB0C
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


// address: 0x8007BC20
// line start: 254
// line end:   274
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007BCC8
// line start: 282
// line end:   286
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007BD20
// line start: 295
// line end:   299
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007BD78
// line start: 308
// line end:   309
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007BD8C
// line start: 317
// line end:   318
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007BDC8
// size: 0x14
// line start: 62
// line end:   65
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007BE30
// line start: 75
// line end:   75
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007BE88
// line start: 85
// line end:   93
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007BECC
// line start: 106
// line end:   118
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007BF90
// line start: 125
// line end:   139
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007C048
// line start: 143
// line end:   160
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007C11C
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


// address: 0x8007C32C
// size: 0x4
// line start: 65
// line end:   67
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007C344
// line start: 77
// line end:   79
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007C370
// line start: 89
// line end:   101
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007C3EC
// line start: 111
// line end:   119
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007C458
// size: 0x14
// line start: 65
// line end:   68
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007C494
// line start: 78
// line end:   78
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007C4EC
// line start: 88
// line end:   96
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007C52C
// line start: 109
// line end:   121
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007C5EC
// line start: 128
// line end:   142
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007C6A0
// line start: 146
// line end:   158
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007C748
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


// address: 0x8007C954
// size: 0x6C
// line start: 112
// line end:   118
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007C994
// line start: 128
// line end:   129
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007C9DC
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


// address: 0x8007CBD0
// line start: 215
// line end:   243
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011839C
	static int TpX;
	// address: 0x801183A0
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


// address: 0x8007CCA0
// line start: 246
// line end:   270
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007CD58
// line start: 285
// line end:   298
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007CDB4
// line start: 309
// line end:   316
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007CE24
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


// address: 0x8007CF50
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


// address: 0x8007D04C
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


// address: 0x8007D454
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


// address: 0x8007D6C0
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


// address: 0x8007D820
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


// address: 0x8007D91C
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


// address: 0x8007DB78
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


// address: 0x8007DBF8
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


// address: 0x8007DDBC
// size: 0x28
// line start: 918
// line end:   937
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007DF10
// size: 0x34
// line start: 943
// line end:   962
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007E064
// size: 0x28
// line start: 968
// line end:   984
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007E148
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


// address: 0x8007E29C
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


// address: 0x8007E3DC
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


// address: 0x8007E4D8
// line start: 1157
// line end:   1167
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007E504
// line start: 1177
// line end:   1212
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007E64C
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


// address: 0x8007E76C
// line start: 1253
// line end:   1257
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x8007E7C0
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


// address: 0x8007E888
// line start: 1309
// line end:   1310
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8007E8DC
// line start: 1314
// line end:   1315
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x8007E934
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


// address: 0x8007EA58
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


// address: 0x8007EB2C
// size: 0x4
// line start: 1422
// line end:   1424
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x8007EB7C
// line start: 1430
// line end:   1431
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x8007EBA4
// line start: 1435
// line end:   1441
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x8007EC4C
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


// address: 0x8007ED0C
// line start: 1479
// line end:   1483
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x8007ED50
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


// address: 0x8007EDE0
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


// address: 0x8007EE50
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


// address: 0x8007EEBC
// line start: 1530
// line end:   1532
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007EF0C
// line start: 1545
// line end:   1546
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007EF34
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


// address: 0x8007EFD0
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


// address: 0x8007F038
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


// address: 0x8007F10C
// size: 0x78
// line start: 1665
// line end:   1666
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x8007F140
// line start: 1670
// line end:   1707
void Load__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	{
		{
			// register: 17
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// address: 0xFFFFFFD8
			// size: 0x8
			auto struct RECT R;
		}
	}
}


// address: 0x8007F2F8
// line start: 1712
// line end:   1714
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x8007F31C
// line start: 1718
// line end:   1747
void Display__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007F5F0
// line start: 1755
// line end:   1763
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x8007F668
// line start: 1767
// line end:   1811
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


// address: 0x8007F7C4
// line start: 1849
// line end:   1849
void _GLOBAL__D_DatPool() {
}


// address: 0x8007F81C
// line start: 1849
// line end:   1849
void _GLOBAL__I_DatPool() {
}


// address: 0x8007F870
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x8007F8EC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x8007F968
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8007F9E4
// line start: 243
// line end:   243
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x8007FA0C
// line start: 242
// line end:   242
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x8007FA34
// line start: 241
// line end:   241
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x8007FA40
// line start: 240
// line end:   240
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x8007FA4C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8007FAC4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x8007FAD8
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8007FAE4
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x8007FAF8
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x8007FB14
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8007FB30
// line start: 167
// line end:   167
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007FB3C
// line start: 158
// line end:   158
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007FB64
// line start: 157
// line end:   157
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007FB8C
// line start: 66
// line end:   66
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x8007FBA0
// size: 0x14
// line start: 120
// line end:   123
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x8007FBE4
// line start: 133
// line end:   133
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x8007FC3C
// line start: 143
// line end:   153
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007FC60
// line start: 165
// line end:   187
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007FC88
// line start: 196
// line end:   206
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007FCAC
// line start: 212
// line end:   231
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FD8C
// line start: 248
// line end:   249
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x8007FD9C
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


// address: 0x8007FEE8
// line start: 288
// line end:   362
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


// address: 0x80080148
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


// address: 0x80080234
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


// address: 0x80080360
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


// address: 0x800804CC
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


// address: 0x80080784
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


// address: 0x80080884
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


// address: 0x80080A20
// line start: 384
// line end:   386
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80080A44
// line start: 398
// line end:   404
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80080A78
// line start: 414
// line end:   495
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80080B60
// line start: 505
// line end:   507
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80080B6C
// line start: 512
// line end:   529
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x80080BD8
// line start: 534
// line end:   568
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


// address: 0x80080CD0
// size: 0x14
// line start: 578
// line end:   582
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80080CFC
// line start: 597
// line end:   604
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80080D34
// line start: 614
// line end:   638
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


// address: 0x80080E4C
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


// address: 0x80080F20
// line start: 77
// line end:   108
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x80081044
// line start: 118
// line end:   137
void Tfree__FPv(void *Addr) {
}


// address: 0x800810F4
// line start: 146
// line end:   151
void InitTmalloc__Fv() {
}


// address: 0x8008111C
// line start: 161
// line end:   167
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80081170
// line start: 168
// line end:   180
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x800811BC
// line start: 191
// line end:   211
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


// address: 0x8008124C
// line start: 222
// line end:   224
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80081278
// line start: 236
// line end:   283
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


// address: 0x80081454
// line start: 294
// line end:   393
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


// address: 0x80081748
// line start: 404
// line end:   431
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


// address: 0x80081830
// line start: 441
// line end:   468
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


// address: 0x80081918
// line start: 492
// line end:   495
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80081928
// line start: 505
// line end:   506
bool PA_GetPauseOk__Fv() {
}


// address: 0x80081934
// line start: 529
// line end:   538
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80081A84
// line start: 543
// line end:   544
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081A8C
// line start: 547
// line end:   558
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081B8C
// line start: 565
// line end:   566
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081B94
// line start: 569
// line end:   570
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081B9C
// line start: 573
// line end:   584
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081C9C
// line start: 591
// line end:   592
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081CA4
// line start: 595
// line end:   596
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081CAC
// line start: 599
// line end:   608
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081D90
// line start: 612
// line end:   613
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081D98
// line start: 616
// line end:   616
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80081DC0
// line start: 621
// line end:   621
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80081DE8
// line start: 621
// line end:   621
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80081E10
// size: 0xC
// line start: 103
// line end:   103
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081E54
// line start: 74
// line end:   74
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80081E88
// size: 0x8
// line start: 73
// line end:   73
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80081E9C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80081EBC
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081EC4
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081ECC
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80081EF4
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80081F50
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x80081F78
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x80081FA0
// line start: 109
// line end:   158
void PAD_Handler__Fv() {
	// register: 16
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 3
	register unsigned char fin;
}


// address: 0x80082154
// size: 0x6C
// line start: 168
// line end:   178
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x800821F0
// line start: 190
// line end:   221
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80082328
// line start: 225
// line end:   257
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80082484
// line start: 267
// line end:   291
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x800825A8
// line start: 295
// line end:   295
void _GLOBAL__I_Pad0() {
}


// address: 0x800825E0
// line start: 77
// line end:   77
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x800825E8
// size: 0x6C
// line start: 75
// line end:   75
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x8008261C
// line start: 113
// line end:   117
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80082640
// line start: 78
// line end:   83
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


// address: 0x800826DC
// line start: 343
// line end:   353
void InitPrinty__Fv() {
}


// address: 0x80082764
// line start: 358
// line end:   359
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x8008276C
// line start: 366
// line end:   425
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x800828EC
// line start: 430
// line end:   539
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


// address: 0x80082C84
// line start: 544
// line end:   552
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x80082CEC
// line start: 560
// line end:   562
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80082D50
// line start: 568
// line end:   571
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80082D5C
// line start: 88
// line end:   88
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80082D80
// line start: 85
// line end:   85
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80082DA0
// line start: 82
// line end:   82
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80082DB8
// line start: 71
// line end:   75
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80082E10
// line start: 59
// line end:   59
void Init__5CFont(struct CFont *this) {
}


// address: 0x80082E44
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80082E44(struct TextDat *this, int FrNum) {
}


// address: 0x80082E60
// line start: 110
// line end:   113
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80082E98
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


// address: 0x80083810
// size: 0x24
// line start: 391
// line end:   402
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80083948
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


// address: 0x80083BEC
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


// address: 0x80083D24
// line start: 496
// line end:   552
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80083F7C
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


// address: 0x8008513C
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


// address: 0x80085354
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80085354(struct TextDat *this, int PalNum) {
}


// address: 0x80085370
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80085370(struct TextDat *this, int FrNum) {
}


// address: 0x8008538C
// line start: 65
// line end:   92
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80085444
// line start: 97
// line end:   102
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x800854E0
// line start: 234
// line end:   240
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x80085520
// line start: 245
// line end:   274
void CycleSelCols__Fv() {
}


// address: 0x800856B0
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


// address: 0x80085724
// line start: 299
// line end:   305
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80085778
// size: 0xE0
// line start: 314
// line end:   368
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x800858CC
// line start: 378
// line end:   380
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80085904
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


// address: 0x800859CC
// line start: 410
// line end:   422
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80085A54
// line start: 432
// line end:   439
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80085ABC
// line start: 448
// line end:   455
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80085B24
// line start: 465
// line end:   470
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x80085B80
// line start: 480
// line end:   486
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x80085BD0
// line start: 494
// line end:   529
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80085F1C
// line start: 540
// line end:   550
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x80085FC8
// line start: 561
// line end:   572
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x8008609C
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


// address: 0x800861A4
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


// address: 0x800862E0
// size: 0xC
// line start: 671
// line end:   673
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x80086358
// line start: 684
// line end:   685
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x80086380
// line start: 695
// line end:   698
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x800863A8
// line start: 708
// line end:   710
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x800863C0
// line start: 752
// line end:   1249
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


// address: 0x80087B28
// line start: 1261
// line end:   1284
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


// address: 0x80087C98
// line start: 1294
// line end:   1659
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


// address: 0x800889B4
// line start: 1668
// line end:   1849
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


// address: 0x80089074
// line start: 1857
// line end:   1877
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


// address: 0x800891E4
// line start: 1887
// line end:   1888
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x800891F8
// line start: 1898
// line end:   1899
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008920C
// line start: 1909
// line end:   1911
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800892D0
// line start: 1921
// line end:   1928
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x80089338
// line start: 1938
// line end:   1948
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x800893D8
// line start: 1959
// line end:   1970
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x800894AC
// line start: 2027
// line end:   2054
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008952C
// line start: 2066
// line end:   2067
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x80089534
// line start: 2077
// line end:   2078
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x80089548
// size: 0xE0
// line start: 2114
// line end:   2121
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x80089554
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80089554(struct POLY_FT4 **Prim) {
}


// address: 0x800895D0
// line start: 97
// line end:   105
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80089618
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80089654
// line start: 97
// line end:   105
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008969C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008969C(struct POLY_GT4 **Prim) {
}


// address: 0x80089718
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x80089794
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


// address: 0x800897BC
// line start: 174
// line end:   176
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x800897D8
// line start: 167
// line end:   167
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80089800
// line start: 166
// line end:   166
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80089828
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008984C
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x80089870
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x80089898
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x800898A4
// line start: 64
// line end:   76
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008993C
// line start: 47
// line end:   60
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x800899CC
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80089A04
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80089A04(struct TextDat *this, int Creature) {
}


// address: 0x80089A7C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80089A7C(struct TextDat *this) {
}


// address: 0x80089A90
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_80089A90(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80089A9C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80089A9C(struct TextDat *this, int PalNum) {
}


// address: 0x80089AB8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80089AB8(struct TextDat *this, int FrNum) {
}


// address: 0x80089AD4
// line start: 119
// line end:   121
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x80089B00
// line start: 129
// line end:   130
void OVR_LoadPregame__Fv() {
}


// address: 0x80089B28
// line start: 137
// line end:   138
void OVR_LoadFrontend__Fv() {
}


// address: 0x80089B50
// line start: 146
// line end:   147
void OVR_LoadGame__Fv() {
}


// address: 0x80089B78
// line start: 155
// line end:   156
void OVR_LoadFmv__Fv() {
}


// address: 0x80089BA0
// line start: 164
// line end:   165
void OVR_LoadMemcard__Fv() {
}


// address: 0x80089BCC
// line start: 174
// line end:   178
void ClearOutOverlays__Fv() {
}


// address: 0x80089C24
// line start: 187
// line end:   194
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x80089CE8
// line start: 203
// line end:   216
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x80089D58
// size: 0x4
// line start: 225
// line end:   226
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x80089D64
// line start: 234
// line end:   239
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x80089DB8
// line start: 244
// line end:   244
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x80089F28
// size: 0x4
// line start: 65
// line end:   65
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x80089F34
// line start: 74
// line end:   75
void StevesDummyPoll__Fv() {
}


// address: 0x80089F3C
// line start: 78
// line end:   81
void Lambo__Fv() {
}


// address: 0x80089F44
// size: 0x84
// line start: 66
// line end:   111
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008A028
// line start: 122
// line end:   124
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008A080
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008A0DC
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


// address: 0x8008A228
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


// address: 0x8008A654
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008A6D4
// line start: 282
// line end:   389
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


// address: 0x8008AB24
// line start: 398
// line end:   411
void SetpNscrnxy__7CPlayeriiii(struct CPlayer *this, int x, int y, int px, int py) {
}


// address: 0x8008AB8C
// line start: 423
// line end:   481
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008AC08
// size: 0x4
// line start: 486
// line end:   516
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008AC70
// line start: 527
// line end:   528
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008AC78
// line start: 537
// line end:   538
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008AC80
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008AC80(struct POLY_FT4 **Prim) {
}


// address: 0x8008ACFC
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008ACFC(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008AD38
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008AD38(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008AD60
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008AD74
// line start: 249
// line end:   253
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008AD8C
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008AD8C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008ADC4
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008ADE8
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008ADE8(struct TextDat *this, int Creature) {
}


// address: 0x8008AE60
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008AE60(struct TextDat *this) {
}


// address: 0x8008AE74
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008AE74(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008AE80
// line start: 87
// line end:   94
void PROF_Open__Fv() {
}


// address: 0x8008AEC0
// line start: 99
// line end:   100
bool PROF_State__Fv() {
}


// address: 0x8008AECC
// line start: 104
// line end:   105
void PROF_On__Fv() {
}


// address: 0x8008AEDC
// line start: 109
// line end:   110
void PROF_Off__Fv() {
}


// address: 0x8008AEE8
// line start: 114
// line end:   115
void PROF_CpuEnd__Fv() {
}


// address: 0x8008AF18
// line start: 119
// line end:   120
void PROF_CpuStart__Fv() {
}


// address: 0x8008AF3C
// line start: 124
// line end:   125
void PROF_DrawStart__Fv() {
}


// address: 0x8008AF60
// line start: 129
// line end:   130
void PROF_DrawEnd__Fv() {
}


// address: 0x8008AF90
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


// address: 0x8008B184
// line start: 179
// line end:   180
void PROF_Restart__Fv() {
}


// address: 0x8008B1A4
// line start: 178
// line end:   212
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008B254
// line start: 223
// line end:   256
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008B2F4
// line start: 264
// line end:   271
void GoBackLevel__Fv() {
}


// address: 0x8008B36C
// line start: 275
// line end:   279
void GoWarpLevel__Fv() {
}


// address: 0x8008B3A4
// line start: 285
// line end:   291
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B440
// line start: 295
// line end:   310
void GoLoadGame__Fv() {
}


// address: 0x8008B4C8
// line start: 316
// line end:   320
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B560
// line start: 327
// line end:   330
void GoForwardLevel__Fv() {
}


// address: 0x8008B5B8
// line start: 334
// line end:   338
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B650
// line start: 346
// line end:   351
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008B6A0
// line start: 355
// line end:   359
void PostNewGame__Fv() {
}


// address: 0x8008B6D8
// line start: 368
// line end:   379
void LevelToLevelInit__Fv() {
}


// address: 0x8008B730
// line start: 204
// line end:   218
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008B774
// size: 0x10
// line start: 226
// line end:   230
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008B7CC
// line start: 241
// line end:   334
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


// address: 0x8008BC40
// line start: 341
// line end:   409
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


// address: 0x8008C0C4
// line start: 416
// line end:   444
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


// address: 0x8008C224
// line start: 452
// line end:   464
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008C270
// line start: 481
// line end:   544
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008C62C
// line start: 548
// line end:   567
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008C720
// line start: 573
// line end:   591
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008C824
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008C824(struct TextDat *this, int PalNum) {
}


// address: 0x8008C840
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008C840(struct TextDat *this, int FrNum) {
}


// address: 0x8008C85C
// line start: 132
// line end:   149
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008C870
// line start: 345
// line end:   363
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008C8B0
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


// address: 0x8008C93C
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


// address: 0x8008CA04
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


// address: 0x8008CB3C
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


// address: 0x8008CC78
// line start: 566
// line end:   571
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008CCD0
// line start: 596
// line end:   627
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008CDDC
// line start: 637
// line end:   641
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008CE2C
// line start: 651
// line end:   655
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008CE7C
// line start: 665
// line end:   683
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008CEE8
// line start: 692
// line end:   734
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008CFF4
// line start: 743
// line end:   797
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008D114
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


// address: 0x8008D1DC
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


// address: 0x8008D3B8
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


// address: 0x8008D6B0
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


// address: 0x8008DADC
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


// address: 0x8008DBEC
// line start: 176
// line end:   212
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x8008DCB4
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


// address: 0x8008DD20
// line start: 248
// line end:   258
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8008DD98
// line start: 267
// line end:   280
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80118404
	static int DestAddr;
}


// address: 0x8008DE10
// line start: 284
// line end:   323
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8008DF44
// line start: 389
// line end:   394
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DF98
// line start: 418
// line end:   420
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8008DFBC
// line start: 430
// line end:   435
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008E020
// line start: 445
// line end:   508
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


// address: 0x8008E1D4
// line start: 85
// line end:   86
void AS_CallBack0__Fi(int handle) {
}


// address: 0x8008E1E8
// line start: 90
// line end:   91
void AS_CallBack1__Fi(int handle) {
}


// address: 0x8008E1FC
// line start: 101
// line end:   124
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x8008E2D8
// line start: 147
// line end:   163
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8008E378
// line start: 173
// line end:   174
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008E384
// line start: 184
// line end:   188
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8008E3B0
// line start: 199
// line end:   241
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x8008E4D0
// line start: 170
// line end:   171
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x8008E504
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8008E594
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E670
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E6F0
// line start: 277
// line end:   293
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x8008E790
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E824
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


// address: 0x8008E898
// line start: 353
// line end:   354
void SCR_Handler__Fv() {
}


// address: 0x8008E8C0
// line start: 132
// line end:   132
int GetNumOfObjs__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
}


// address: 0x8008E8C8
// size: 0x18
// line start: 110
// line end:   116
struct PalEntry *GetObj__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008E904
// line start: 98
// line end:   104
void Init__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008E968
// line start: 90
// line end:   93
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E9C0
// line start: 83
// line end:   86
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x8008EA18
// line start: 97
// line end:   100
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008EA2C
// line start: 89
// line end:   92
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x8008EA58
// line start: 82
// line end:   85
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x8008EA60
// line start: 79
// line end:   79
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8008EA68
// line start: 78
// line end:   78
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x8008EA74
// line start: 73
// line end:   73
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008EAAC
// size: 0x18
// line start: 67
// line end:   67
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8008EAB8
// line start: 57
// line end:   63
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008EAD8
// line start: 46
// line end:   53
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008EB24
// line start: 73
// line end:   74
void stub__FPcPv_addr_8008EB24(char *e, void *argptr) {
}


// address: 0x8008EB2C
// line start: 77
// line end:   79
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8008EB60
// line start: 91
// line end:   101
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008EBE8
// line start: 107
// line end:   133
void print_demo_task__FP4TASK(struct TASK *T) {
}


// address: 0x8008ED18
// line start: 136
// line end:   136
void TonysDummyPoll__Fv() {
}


// address: 0x8008ED20
// line start: 139
// line end:   145
void load_demo_pad_data__FUl(unsigned long demo_num) {
}


// address: 0x8008ED70
// line start: 149
// line end:   155
void save_demo_pad_data__FUl(unsigned long demo_num) {
}


// address: 0x8008EDC0
// line start: 167
// line end:   180
void set_pad_record_play__Fi(int level) {
}


// address: 0x8008EE38
// line start: 185
// line end:   197
void demo_game_task__FP4TASK(struct TASK *T) {
}


// address: 0x8008EE70
// line start: 200
// line end:   233
void start_demo__Fv() {
}


// address: 0x8008EEC4
// line start: 237
// line end:   244
void tony__Fv() {
}


// address: 0x8008EF18
// line start: 220
// line end:   221
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8008EF24
// line start: 231
// line end:   232
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8008EF30
// line start: 242
// line end:   247
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008EF84
// line start: 257
// line end:   262
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008EFD8
// line start: 272
// line end:   279
void GLUE_PreTown__Fv() {
}


// address: 0x8008F03C
// line start: 305
// line end:   306
bool GLUE_Finished__Fv() {
}


// address: 0x8008F048
// line start: 316
// line end:   317
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8008F054
// line start: 327
// line end:   339
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8008F0D8
// line start: 348
// line end:   352
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008F0E8
// line start: 360
// line end:   364
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008F0F8
// line start: 372
// line end:   376
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008F108
// line start: 386
// line end:   406
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8008F1E0
// line start: 417
// line end:   572
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


// address: 0x8008F6A8
// size: 0x8
// line start: 582
// line end:   592
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x8008F730
// size: 0x8
// line start: 597
// line end:   603
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8008F78C
// size: 0x8
// line start: 607
// line end:   612
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8008F7BC
// line start: 616
// line end:   622
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x8008F7FC
// line start: 632
// line end:   638
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x8008F850
// size: 0x10
// line start: 649
// line end:   656
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x8008F8FC
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008F908
// line start: 139
// line end:   139
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x8008F910
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008F924
// line start: 108
// line end:   122
char *get_action_str__Fii(int pval, int combo) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8008F9A4
// line start: 152
// line end:   158
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
}


// address: 0x8008F9E0
// line start: 164
// line end:   168
void RemoveCtrlScreen__Fv() {
}


// address: 0x8008FA28
// line start: 173
// line end:   285
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


// address: 0x8009002C
// line start: 303
// line end:   312
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009006C
// line start: 316
// line end:   326
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800900AC
// line start: 330
// line end:   376
unsigned char set_buttons__Fii(int cline, int n) {
	// register: 3
	register int cval;
	// register: 4
	register int i;
	// register: 19
	register int p;
}


// address: 0x8009024C
// line start: 380
// line end:   385
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x8009029C
// line start: 391
// line end:   488
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x8009052C
// line start: 495
// line end:   615
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


// address: 0x80090B80
// line start: 620
// line end:   710
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


// address: 0x80090F80
// line start: 761
// line end:   761
void _GLOBAL__D_CtrlBorder() {
}


// address: 0x80090FB8
// line start: 761
// line end:   761
void _GLOBAL__I_CtrlBorder() {
}


// address: 0x80090FF0
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80090FF0(struct CPad *this) {
}


// address: 0x80091018
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80091018(struct CPad *this) {
}


// address: 0x80091040
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80091040(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80091060
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80091060(struct Dialog *this, int Type) {
}


// address: 0x80091068
// line start: 77
// line end:   77
void ___6Dialog_addr_80091068(struct Dialog *this, int __in_chrg) {
}


// address: 0x80091090
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80091090(struct Dialog *this) {
}


// address: 0x800910EC
// line start: 345
// line end:   56
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8009110C
// line start: 160
// line end:   163
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80091158
// line start: 194
// line end:   223
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x800912E4
// line start: 233
// line end:   260
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


// address: 0x80091414
// line start: 46
// line end:   75
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80091650
// line start: 81
// line end:   84
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x800916A0
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


// address: 0x80091904
// line start: 147
// line end:   202
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80091AB0
// line start: 205
// line end:   230
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


// address: 0x80091C78
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80091C78(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80091CB4
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80091CB4(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80091CDC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80091CDC(struct POLY_FT4 **Prim) {
}


// address: 0x80091D58
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80091D58(struct TextDat *this, int Creature) {
}


// address: 0x80091D7C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80091D7C(struct TextDat *this, int Creature) {
}


// address: 0x80091DF4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80091DF4(struct TextDat *this) {
}


// address: 0x80091E08
// line start: 103
// line end:   104
void DaveLDummyPoll__Fv() {
}


// address: 0x80091E10
// line start: 107
// line end:   109
void DaveL__Fv() {
}


// address: 0x80091E38
// line start: 120
// line end:   180
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
	// address: 0x80117358
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


// address: 0x80092118
// line start: 184
// line end:   221
void mteleportfx__Fv() {
	// register: 2
	register int br;
}


// address: 0x800923F0
// line start: 228
// line end:   245
void invistimer__Fv() {
}


// address: 0x800924C0
// line start: 248
// line end:   283
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


// address: 0x80092548
// line start: 289
// line end:   320
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


// address: 0x80092738
// line start: 325
// line end:   338
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


// address: 0x8009286C
// line start: 343
// line end:   364
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


// address: 0x80092A3C
// line start: 369
// line end:   392
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80092BDC
// line start: 396
// line end:   406
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80092CC0
// line start: 411
// line end:   413
void doparticlejump__Fv() {
}


// address: 0x80092D00
// line start: 417
// line end:   436
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80092E68
// line start: 441
// line end:   523
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


// address: 0x80093260
// line start: 528
// line end:   576
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


// address: 0x80093508
// line start: 581
// line end:   596
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x8009372C
// line start: 601
// line end:   613
void healFX__Fv() {
}


// address: 0x800937C0
// line start: 618
// line end:   635
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80093880
// line start: 639
// line end:   642
void HealStart__Fi(int plr) {
}


// address: 0x8009389C
// line start: 646
// line end:   649
void HealotherStart__Fi(int plr) {
}


// address: 0x800938BC
// line start: 653
// line end:   664
void TeleStart__Fi(int plr) {
}


// address: 0x80093904
// line start: 670
// line end:   679
void PhaseStart__Fi(int plr) {
}


// address: 0x80093934
// line start: 685
// line end:   694
void InvisStart__Fi(int plr) {
}


// address: 0x80093964
// line start: 700
// line end:   709
void PhaseEnd__Fi(int plr) {
}


// address: 0x8009398C
// line start: 715
// line end:   734
void ApocaStart__Fi(int plr) {
}


// address: 0x80093AB4
// line start: 740
// line end:   777
void doapocaFX__Fv() {
	// address: 0x8011735C
	static int scale1;
	// address: 0x80117360
	static int scale2;
}


// address: 0x80093CE8
// line start: 783
// line end:   803
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80093D4C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x80093DC8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80093E44
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80093E44(struct POLY_FT4 **Prim) {
}


// address: 0x80093EC0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80093EC0(struct TextDat *this, int FrNum) {
}


// address: 0x80093EDC
// line start: 92
// line end:   132
void DrawArrow__Fii(int x1, int y1) {
	// register: 17
	register int bright;
	{
		// register: 18
		register int i;
	}
}


// address: 0x80094324
// line start: 140
// line end:   219
void show_spell_dir__Fi(int pnum) {
	// register: 30
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 22
	register int ScrXOff;
	// register: 21
	register int ScrYOff;
	// register: 16
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int cp;
	// register: 20
	register int otx;
	// register: 19
	register int oty;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT R;
	// register: 23
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80094718
// line start: 233
// line end:   281
void release_spell__Fi(int pnum) {
}


// address: 0x8009477C
// line start: 289
// line end:   298
void select_belt_item__Fi(int pnum) {
}


// address: 0x80094784
// line start: 306
// line end:   315
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x800947EC
// line start: 322
// line end:   340
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094920
// line start: 346
// line end:   366
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094A5C
// line start: 375
// line end:   377
void pad_func_up__Fi(int pnum) {
}


// address: 0x80094A88
// line start: 385
// line end:   387
void pad_func_down__Fi(int pnum) {
}


// address: 0x80094AB4
// line start: 395
// line end:   396
void pad_func_left__Fi(int pnum) {
}


// address: 0x80094ABC
// line start: 403
// line end:   404
void pad_func_right__Fi(int pnum) {
}


// address: 0x80094AC4
// line start: 422
// line end:   435
void pad_func_select__Fi(int pnum) {
}


// address: 0x80094BB4
// line start: 445
// line end:   507
void pad_func_Attack__Fi(int pnum) {
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80094F24
// line start: 514
// line end:   559
void pad_func_Action__Fi(int pnum) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x800951F0
// line start: 563
// line end:   585
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800953BC
// line start: 589
// line end:   605
void RemoveTargetCursor__Fi(int pnum) {
}


// address: 0x80095458
// line start: 612
// line end:   768
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 17
	register int sp;
	// register: 19
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 4
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


// address: 0x80095B24
// line start: 775
// line end:   782
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80095C18
// line start: 794
// line end:   807
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80095D54
// line start: 830
// line end:   842
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80095E74
// line start: 847
// line end:   858
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x80095F8C
// line start: 863
// line end:   867
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80096038
// line start: 881
// line end:   902
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x800960F0
// line start: 941
// line end:   952
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80096208
// line start: 978
// line end:   988
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 7
	register int sp;
	// register: 6
	register char spt;
}


// address: 0x80096284
// line start: 1016
// line end:   1052
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x8009645C
// line start: 1060
// line end:   1061
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80096484
// line start: 1071
// line end:   1072
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800964AC
// line start: 1077
// line end:   1092
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


// address: 0x800965EC
// line start: 1096
// line end:   1123
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x800966F4
// line start: 1127
// line end:   1259
void DrawObjSelector__Fi(int pnum) {
	// register: 19
	// size: 0x22D0
	register struct PlayerStruct *player;
	// address: 0xFFFFFF48
	// size: 0x1E
	auto char str[30];
	// register: 18
	// size: 0x6C
	register struct CPad *Pad;
	// address: 0xFFFFFF68
	auto int list_size;
	// address: 0xFFFFFF70
	auto int maxlen;
	// register: 2
	register int cgold;
	{
		// register: 21
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


// address: 0x80096F54
// line start: 1263
// line end:   1287
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


// address: 0x80097030
// line start: 1296
// line end:   1302
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x8009713C
// line start: 1311
// line end:   1381
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 10
	register char co;
}


// address: 0x80097514
// line start: 1386
// line end:   1440
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


// address: 0x80097768
// line start: 1485
// line end:   1508
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
}


// address: 0x800979B0
// line start: 1509
// line end:   1509
void _GLOBAL__D_gplayer() {
}


// address: 0x800979D8
// line start: 1509
// line end:   1509
void _GLOBAL__I_gplayer() {
}


// address: 0x80097A00
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80097A00(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80097A20
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_80097A20(struct Dialog *this, int Type) {
}


// address: 0x80097A28
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80097A28(struct Dialog *this, int Type) {
}


// address: 0x80097A30
// line start: 77
// line end:   77
void ___6Dialog_addr_80097A30(struct Dialog *this, int __in_chrg) {
}


// address: 0x80097A58
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80097A58(struct Dialog *this) {
}


// address: 0x80097AB4
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80097AB4(struct CBlocks *this) {
}


// address: 0x80097AC8
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80097AC8(struct CPad *this) {
}


// address: 0x80097AF0
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80097AF0(struct CPad *this) {
}


// address: 0x80097B18
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80097B94
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80097BEC
// line start: 102
// line end:   107
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80097C48
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80097C80
// line start: 130
// line end:   136
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80097CB8
// line start: 139
// line end:   144
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80097D18
// line start: 155
// line end:   156
bool IsGameLoading__Fv() {
}


// address: 0x80097D24
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


// address: 0x80098178
// line start: 247
// line end:   273
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x80098228
// line start: 283
// line end:   290
void TakeDownCutScreen__Fv() {
}


// address: 0x80098270
// line start: 301
// line end:   305
void FinishProgress__Fv() {
}


// address: 0x800982B8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_800982B8(struct POLY_G4 **Prim) {
}


// address: 0x80098334
// line start: 310
// line end:   310
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009836C
// line start: 310
// line end:   310
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x800983A4
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_800983A4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800983C4
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_800983C4(struct Dialog *this, int Type) {
}


// address: 0x800983CC
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_800983CC(struct Dialog *this, int Type) {
}


// address: 0x800983D4
// line start: 77
// line end:   77
void ___6Dialog_addr_800983D4(struct Dialog *this, int __in_chrg) {
}


// address: 0x800983FC
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_800983FC(struct Dialog *this) {
}


// address: 0x80098458
// line start: 345
// line end:   120
void ___7CScreen_addr_80098458(struct CScreen *this, int __in_chrg);

// address: 0x80098478
// line start: 103
// line end:   220
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x80098694
// line start: 224
// line end:   248
void memcard_event__Fii(int evt, int side) {
}


// address: 0x800986A0
// line start: 253
// line end:   257
void init_card__Fi(int card_number) {
}


// address: 0x800986D4
// line start: 262
// line end:   275
int ping_card__Fi(int card_number) {
}


// address: 0x80098768
// line start: 279
// line end:   285
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x800987A0
// line start: 291
// line end:   301
void MemcardON__Fv() {
}


// address: 0x800987FC
// line start: 307
// line end:   315
void MemcardOFF__Fv() {
}


// address: 0x8009884C
// line start: 546
// line end:   555
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x80098930
// line start: 574
// line end:   707
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


// address: 0x80098E30
// line start: 713
// line end:   892
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


// address: 0x8009988C
// line start: 898
// line end:   1042
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


// address: 0x80099DA4
// line start: 1045
// line end:   1244
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


// address: 0x8009A41C
// line start: 1251
// line end:   1419
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


// address: 0x8009AA4C
// line start: 1435
// line end:   1570
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


// address: 0x8009AFC8
// line start: 1576
// line end:   1601
void CalcVolumes__Fv() {
}


// address: 0x8009B108
// line start: 1608
// line end:   1628
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


// address: 0x8009B210
// line start: 1636
// line end:   1653
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009B3B8
// line start: 1661
// line end:   1898
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


// address: 0x8009B9E8
// line start: 1904
// line end:   1925
void ToggleOptions__Fv() {
}


// address: 0x8009BA88
// line start: 1932
// line end:   2006
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


// address: 0x8009BD94
// line start: 2006
// line end:   2006
void _GLOBAL__I_cmenu() {
}


// address: 0x8009C1B8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009C1B8(struct POLY_G4 **Prim) {
}


// address: 0x8009C234
// line start: 106
// line end:   110
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009C25C
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8009C25C(struct CPad *this) {
}


// address: 0x8009C284
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_8009C284(struct CPad *this) {
}


// address: 0x8009C2AC
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_8009C2AC(struct CPad *this) {
}


// address: 0x8009C2D4
// line start: 82
// line end:   82
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8009C2DC
// line start: 81
// line end:   81
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009C2E4
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8009C2E4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009C304
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8009C304(struct Dialog *this, int Type) {
}


// address: 0x8009C30C
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8009C30C(struct Dialog *this, int Type) {
}


// address: 0x8009C314
// line start: 77
// line end:   77
void ___6Dialog_addr_8009C314(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009C33C
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8009C33C(struct Dialog *this) {
}


// address: 0x8009C398
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009C398(struct TextDat *this, int FrNum) {
}


// address: 0x8009C3B4
// line start: 72
// line end:   79
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009C40C
// line start: 88
// line end:   114
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
}


// address: 0x8009C550
// line start: 124
// line end:   134
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009C5CC
// line start: 143
// line end:   161
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 2
	register int type;
	// register: 4
	register int i;
}


// address: 0x8009C6AC
// line start: 170
// line end:   179
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009C700
// line start: 188
// line end:   215
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009C868
// line start: 224
// line end:   244
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C96C
// line start: 255
// line end:   257
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C9A8
// line start: 266
// line end:   282
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009CA2C
// line start: 290
// line end:   303
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009CAD8
// line start: 311
// line end:   321
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009CB7C
// line start: 331
// line end:   354
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


// address: 0x8009CC20
// line start: 362
// line end:   414
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


// address: 0x8009CECC
// line start: 424
// line end:   425
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009CED8
// line start: 434
// line end:   438
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009CF28
// line start: 447
// line end:   464
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009D014
// line start: 472
// line end:   491
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


// address: 0x8009D144
// line start: 515
// line end:   534
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009D21C
// line start: 546
// line end:   587
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009D374
// line start: 595
// line end:   624
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x8009D410
// line start: 630
// line end:   643
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 18
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x8009D504
// line start: 684
// line end:   746
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


// address: 0x8009D6FC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009D6FC(struct POLY_FT4 **Prim) {
}


// address: 0x8009D778
// line start: 145
// line end:   173
short PlayFMV(struct StrInfo *str) {
	// register: 16
	register short RetVal;
	// register: 17
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009D810
// line start: 178
// line end:   191
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
// line start: 520
// line end:   523
unsigned char TrimCol__Fs_addr_8002F660(short col) {
}


// address: 0x8002F698
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


// address: 0x800301B4
// line start: 709
// line end:   710
void SetSpellTrans__Fc(char t) {
}


// address: 0x800301C0
// line start: 718
// line end:   735
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x80030258
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


// address: 0x800302D0
// line start: 757
// line end:   789
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80030384
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


// address: 0x8003110C
// line start: 1108
// line end:   1120
void SetSpell__Fi(int pnum) {
}


// address: 0x800311E0
// line start: 1131
// line end:   1134
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80031290
// line start: 1141
// line end:   1143
void ClearPanel__Fv() {
}


// address: 0x800312C0
// line start: 1196
// line end:   1197
void InitPanelStr__Fv() {
}


// address: 0x800312E0
// line start: 1283
// line end:   1430
void InitControlPan__Fv() {
	// register: 4
	register int i;
}


// address: 0x80031528
// line start: 1436
// line end:   1439
void DrawCtrlPan__Fv() {
}


// address: 0x80031554
// line start: 1519
// line end:   1531
void DoAutoMap__Fv() {
}


// address: 0x800315C8
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


// address: 0x80031E8C
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


// address: 0x80031F9C
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


// address: 0x800320B8
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


// address: 0x800322F4
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


// address: 0x80032FB0
// line start: 2131
// line end:   2147
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80033058
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


// address: 0x800331C0
// line start: 2213
// line end:   2224
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x8003328C
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


// address: 0x80033384
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


// address: 0x8003465C
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


// address: 0x80034B00
// line start: 2594
// line end:   2610
void DrawChrTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80034BA0
// line start: 2619
// line end:   2627
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80034C34
// line start: 2632
// line end:   2687
void CheckChrBtns__Fv() {
	// register: 5
	register int pc;
}


// address: 0x80034E78
// line start: 2694
// line end:   2734
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80034EFC
// line start: 2742
// line end:   2756
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80034FE4
// line start: 2762
// line end:   2769
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x8003507C
// line start: 2776
// line end:   2788
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80035294
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


// address: 0x80035BF4
// line start: 3002
// line end:   3038
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 10
	register char st;
}


// address: 0x80035E58
// line start: 3051
// line end:   3053
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80035E8C
// line start: 3559
// line end:   3559
void _GLOBAL__D_fontkern() {
}


// address: 0x80035EB4
// line start: 3559
// line end:   3559
void _GLOBAL__I_fontkern() {
}


// address: 0x80035EF0
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80035EF0(struct CPad *this) {
}


// address: 0x80035F18
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80035F18(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80035F38
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_80035F38(struct Dialog *this, int Type) {
}


// address: 0x80035F40
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80035F40(struct Dialog *this, int Type) {
}


// address: 0x80035F48
// line start: 77
// line end:   77
void ___6Dialog_addr_80035F48(struct Dialog *this, int __in_chrg) {
}


// address: 0x80035F70
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80035F70(struct Dialog *this) {
}


// address: 0x80035FCC
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80035FCC(struct TextDat *this, int PalNum) {
}


// address: 0x80035FE8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80035FE8(struct TextDat *this, int FrNum) {
}


// address: 0x80036004
// line start: 126
// line end:   132
void InitCursor__Fv() {
}


// address: 0x8003600C
// line start: 137
// line end:   142
void FreeCursor__Fv() {
}


// address: 0x80036014
// line start: 148
// line end:   158
void SetICursor__Fi(int i) {
}


// address: 0x80036070
// line start: 165
// line end:   173
void SetCursor__Fi(int i) {
}


// address: 0x800360D4
// line start: 179
// line end:   180
void NewCursor__Fi(int i) {
}


// address: 0x800360F4
// line start: 186
// line end:   201
void InitLevelCursor__Fv() {
}


// address: 0x80036154
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


// address: 0x800363AC
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


// address: 0x800365D4
// line start: 264
// line end:   756
void CheckCursMove__Fv() {
}


// address: 0x800365DC
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


// address: 0x800367D8
// line start: 98
// line end:   102
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x80036820
// line start: 282
// line end:   295
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80036870
// line start: 302
// line end:   318
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800368CC
// line start: 323
// line end:   340
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80036940
// line start: 356
// line end:   394
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80036A04
// line start: 399
// line end:   467
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80036B90
// line start: 473
// line end:   582
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80036CC4
// line start: 1012
// line end:   1092
unsigned char TryIconCurs__Fv() {
}


// address: 0x800370A0
// line start: 2115
// line end:   2162
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800370A8
// line start: 2169
// line end:   2329
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80037158
// line start: 2336
// line end:   2403
void LoadLvlGFX__Fv() {
}


// address: 0x800371F4
// line start: 2411
// line end:   2423
void LoadAllGFX__Fv() {
}


// address: 0x80037214
// line start: 2444
// line end:   2464
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x8003730C
// line start: 2473
// line end:   2527
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80037494
// line start: 2531
// line end:   2556
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
// line start: 2563
// line end:   2884
void LoadGameLevel__FUci(unsigned char firstflag, int lvldir) {
	// register: 17
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


// address: 0x80037EAC
// line start: 2897
// line end:   2949
void game_logic__Fv() {
}


// address: 0x80037FB8
// line start: 2959
// line end:   2989
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80038060
// line start: 2997
// line end:   3052
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80038098
// line start: 3119
// line end:   3124
void alloc_plr__Fv() {
}


// address: 0x800380A0
// line start: 3187
// line end:   3245
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x800380A8
// line start: 3252
// line end:   3254
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x800380C8
// line start: 3259
// line end:   3261
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x800380E8
// line start: 3264
// line end:   3265
void app_fatal(char *pszFile) {
}


// address: 0x80038118
// line start: 3524
// line end:   3530
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038140
// line start: 3534
// line end:   3540
void DoMemCardFromInGame__Fv() {
}


// address: 0x80038168
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800381BC
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800381DC
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80038224
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80038384
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


// address: 0x8003843C
// line start: 181
// line end:   190
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038568
// line start: 196
// line end:   206
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003869C
// line start: 211
// line end:   220
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800387CC
// line start: 225
// line end:   234
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800388FC
// line start: 239
// line end:   248
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038A2C
// line start: 253
// line end:   263
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038B64
// line start: 268
// line end:   277
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038C94
// line start: 283
// line end:   292
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038DC4
// line start: 297
// line end:   306
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038EF4
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


// address: 0x800391B8
// line start: 344
// line end:   358
void InitTowners__Fv() {
}


// address: 0x80039244
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


// address: 0x800392E8
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


// address: 0x80039408
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


// address: 0x8003943C
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


// address: 0x80039470
// line start: 435
// line end:   447
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80039558
// line start: 453
// line end:   455
void TownHealer__Fv() {
}


// address: 0x80039580
// line start: 462
// line end:   465
void TownStory__Fv() {
}


// address: 0x800395A8
// line start: 472
// line end:   475
void TownDrunk__Fv() {
}


// address: 0x800395D0
// line start: 482
// line end:   485
void TownBoy__Fv() {
}


// address: 0x800395F8
// line start: 493
// line end:   496
void TownWitch__Fv() {
}


// address: 0x80039620
// line start: 503
// line end:   505
void TownBarMaid__Fv() {
}


// address: 0x80039648
// line start: 512
// line end:   515
void TownCow__Fv() {
}


// address: 0x80039670
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


// address: 0x800398C0
// size: 0x94
// line start: 579
// line end:   584
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80039994
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x8010E208
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80117874
	static int snLastCowSFX;
}


// address: 0x80039AB0
// line start: 645
// line end:   652
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80039AF0
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


// address: 0x8003AF18
// line start: 77
// line end:   88
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003AF20
// line start: 96
// line end:   103
void stream_stop__Fv() {
}


// address: 0x8003AF68
// line start: 116
// line end:   143
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003B02C
// line start: 149
// line end:   165
void stream_update__Fv() {
}


// address: 0x8003B034
// line start: 171
// line end:   178
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003B050
// line start: 185
// line end:   216
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003B0A8
// line start: 222
// line end:   245
void FreeMonsterSnd__Fv() {
}


// address: 0x8003B0B0
// line start: 251
// line end:   271
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003B1B4
// line start: 278
// line end:   309
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003B2C4
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


// address: 0x8003B3F0
// line start: 370
// line end:   392
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003B488
// line start: 407
// line end:   410
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003B4C8
// line start: 418
// line end:   428
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003B51C
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


// address: 0x8003B5B4
// line start: 457
// line end:   467
void sound_update__Fv() {
}


// address: 0x8003B5E8
// line start: 475
// line end:   506
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003B62C
// line start: 512
// line end:   525
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003B6D4
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


// address: 0x8003B778
// line start: 91
// line end:   94
void SetRndSeed__Fl(long s) {
}


// address: 0x8003B788
// line start: 99
// line end:   104
long GetRndSeed__Fv() {
}


// address: 0x8003B7D0
// line start: 110
// line end:   116
long random__Fil(int idx, long v) {
}


// address: 0x8003B83C
// line start: 368
// line end:   418
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003B888
// line start: 429
// line end:   475
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003B8D8
// line start: 487
// line end:   497
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003B8E0
// line start: 565
// line end:   580
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003B970
// line start: 1104
// line end:   1104
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003B978
// line start: 154
// line end:   165
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003BA0C
// line start: 171
// line end:   174
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003BA38
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


// address: 0x8003BB44
// line start: 297
// line end:   306
void interface_msg_pump__Fv() {
}


// address: 0x8003BB4C
// line start: 331
// line end:   562
void ShowProgress__FUi(unsigned int uMsg) {
	// register: 17
	register unsigned long (*saveProc)();
	{
		{
		}
	}
}


// address: 0x8003BFA4
// line start: 969
// line end:   971
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003BFDC
// line start: 508
// line end:   519
void InitItemGFX__Fv() {
}


// address: 0x8003C008
// line start: 525
// line end:   532
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003C0D0
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


// address: 0x8003C2E8
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


// address: 0x8003C4A8
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


// address: 0x8003CF58
// line start: 895
// line end:   925
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003D2D8
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


// address: 0x8003D374
// line start: 946
// line end:   986
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


// address: 0x8003D4D4
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003D520
// line start: 1002
// line end:   1017
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


// address: 0x8003D600
// line start: 1023
// line end:   1046
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003D894
// line start: 1051
// line end:   1061
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003D958
// line start: 1067
// line end:   1098
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003DA70
// line start: 1104
// line end:   1105
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003DA9C
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


// address: 0x8003DC18
// line start: 1133
// line end:   1134
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003DC20
// line start: 1140
// line end:   1145
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003DC50
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8003E088
// line start: 1269
// line end:   1298
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003E360
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


// address: 0x8003E58C
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


// address: 0x8003E6F4
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


// address: 0x8003E7BC
// line start: 1408
// line end:   1414
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003E874
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


// address: 0x8003EADC
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


// address: 0x8003ECCC
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


// address: 0x8003EF80
// line start: 1650
// line end:   1740
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003F4CC
// line start: 1749
// line end:   1750
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003F504
// line start: 1757
// line end:   1760
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003F578
// line start: 1767
// line end:   2048
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x80040B84
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


// address: 0x80040FEC
// line start: 2161
// line end:   2191
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x800410E8
// line start: 2197
// line end:   2224
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x800411FC
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


// address: 0x80041440
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


// address: 0x80041680
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


// address: 0x800417F4
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


// address: 0x800418F4
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


// address: 0x80041AA4
// line start: 2410
// line end:   2432
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80041D4C
// line start: 2439
// line end:   2452
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80041E58
// line start: 2462
// line end:   2466
void ItemRndDur__Fi(int ii) {
}


// address: 0x80041EE8
// line start: 2473
// line end:   2511
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x800421F4
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


// address: 0x8004243C
// line start: 2570
// line end:   2584
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x8004256C
// line start: 2594
// line end:   2609
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800426B4
// line start: 2621
// line end:   2631
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x8004278C
// line start: 2635
// line end:   2645
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x8004284C
// line start: 2654
// line end:   2669
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80042990
// line start: 2681
// line end:   2705
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80042B7C
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


// address: 0x80042DA8
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


// address: 0x80042F68
// line start: 2787
// line end:   2819
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x8004312C
// line start: 2826
// line end:   2830
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80043180
// line start: 2840
// line end:   2855
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x94
	register struct ItemStruct *i;
}


// address: 0x80043248
// line start: 2861
// line end:   2900
void ProcessItems__Fv() {
	// register: 6
	register int i;
	// register: 5
	register int ii;
}


// address: 0x8004338C
// line start: 2907
// line end:   2912
void FreeItemGFX__Fv() {
}


// address: 0x80043394
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


// address: 0x8004351C
// line start: 2961
// line end:   2971
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8004360C
// line start: 2976
// line end:   3000
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x800436DC
// line start: 3004
// line end:   3017
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x800437A0
// line start: 3022
// line end:   3035
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80043810
// line start: 3039
// line end:   3057
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


// address: 0x80043910
// line start: 3162
// line end:   3286
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80043A04
// line start: 3292
// line end:   3501
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x800440B0
// line start: 3585
// line end:   3623
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x8004433C
// line start: 3630
// line end:   3675
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800446A8
// line start: 3681
// line end:   3721
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800449B8
// line start: 3727
// line end:   3729
void CastScroll__Fi(int pnum) {
}


// address: 0x800449C0
// line start: 3736
// line end:   3926
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *ptrplr;
}


// address: 0x80044FD4
// line start: 3935
// line end:   3940
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80045068
// line start: 3959
// line end:   3974
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x800450E4
// line start: 3980
// line end:   3999
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x800451EC
// line start: 4007
// line end:   4032
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x94
	auto struct ItemStruct holditem;
}


// address: 0x80045400
// line start: 4041
// line end:   4060
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x80045634
// line start: 4073
// line end:   4088
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80045784
// line start: 4119
// line end:   4123
void SpawnStoreGold__Fv() {
}


// address: 0x80045804
// line start: 4172
// line end:   4183
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x800459A4
// line start: 4195
// line end:   4203
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80045A08
// line start: 4222
// line end:   4244
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80045B98
// line start: 4252
// line end:   4273
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045D14
// line start: 4281
// line end:   4302
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045E90
// line start: 4624
// line end:   4713
char *MakeItemStr__FP10ItemStructUs(struct ItemStruct *ItemPtr, unsigned short ItemNo) {
	// register: 6
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80046090
// line start: 319
// line end:   334
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x800460F8
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


// address: 0x8004616C
// line start: 404
// line end:   411
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x800461D8
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


// address: 0x80046E88
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


// address: 0x800470CC
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


// address: 0x80047190
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


// address: 0x800476A0
// line start: 957
// line end:   958
void FreeLightTable__Fv() {
}


// address: 0x800476A8
// line start: 964
// line end:   965
void InitLightTable__Fv() {
}


// address: 0x800476B0
// line start: 970
// line end:   971
void MakeLightTable__Fv() {
}


// address: 0x800476B8
// line start: 1062
// line end:   1065
void InitLightMax__Fv() {
}


// address: 0x800476DC
// line start: 1072
// line end:   1083
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80047720
// line start: 1089
// line end:   1105
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x800477B4
// line start: 1110
// line end:   1116
void AddUnLight__Fi(int i) {
}


// address: 0x800477E4
// line start: 1121
// line end:   1131
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80047810
// line start: 1136
// line end:   1147
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80047848
// line start: 1150
// line end:   1156
void light_fix__Fi(int i) {
}


// address: 0x80047850
// line start: 1166
// line end:   1178
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80047888
// line start: 1183
// line end:   1195
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x800478CC
// line start: 1198
// line end:   1199
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x800478FC
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


// address: 0x80047A28
// line start: 1271
// line end:   1298
void SavePreLighting__Fv() {
}


// address: 0x80047A30
// line start: 1303
// line end:   1310
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80047A80
// line start: 1317
// line end:   1333
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80047B84
// line start: 1356
// line end:   1369
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80047C38
// line start: 1374
// line end:   1388
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x80047CF0
// line start: 1417
// line end:   1446
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x80047F50
// line start: 108
// line end:   111
void FreeQuestText__Fv() {
}


// address: 0x80047F58
// line start: 115
// line end:   119
void InitQuestText__Fv() {
}


// address: 0x80047F64
// line start: 127
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


// address: 0x800480A4
// line start: 177
// line end:   205
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x800481CC
// line start: 210
// line end:   216
void DrawQTextBack__Fv() {
}


// address: 0x8004823C
// line start: 224
// line end:   232
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800482C8
// line start: 239
// line end:   259
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80048394
// line start: 265
// line end:   355
void DrawQText__Fv() {
	// register: 18
	register char *p;
	// address: 0xFFFFFFC0
	auto char *pnl;
	// address: 0xFFFFFF38
	// size: 0x80
	auto char tempstr[128];
	// register: 21
	register int ty;
	// register: 19
	register int l;
	// register: 17
	register int i;
	// register: 22
	register unsigned char doneflag;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
}


// address: 0x800486C4
// line start: 359
// line end:   359
void _GLOBAL__D_QBack() {
}


// address: 0x800486EC
// line start: 359
// line end:   359
void _GLOBAL__I_QBack() {
}


// address: 0x80048714
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80048714(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80048734
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80048734(struct Dialog *this, int Type) {
}


// address: 0x8004873C
// line start: 77
// line end:   77
void ___6Dialog_addr_8004873C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80048764
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80048764(struct Dialog *this) {
}


// address: 0x800487C0
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_800487C0(struct CFont *this, char ch) {
}


// address: 0x80048818
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80048818(struct TextDat *this, int FrNum) {
}


// address: 0x80048834
// line start: 33
// line end:   35
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8004883C
// line start: 806
// line end:   808
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80048844
// line start: 166
// line end:   171
void delta_init__Fv() {
}


// address: 0x800488A4
// line start: 177
// line end:   189
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 2
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x80048914
// line start: 195
// line end:   202
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 4
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x80048974
// line start: 230
// line end:   244
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 3
	// size: 0xC
	register struct DMonsterStr *pD;
}


// address: 0x800489EC
// line start: 249
// line end:   279
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


// address: 0x80048C44
// line start: 284
// line end:   291
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80048C84
// line start: 297
// line end:   390
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 24
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x80048E48
// line start: 396
// line end:   437
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 8
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 9
	register int i;
}


// address: 0x80048FB0
// line start: 443
// line end:   446
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x80048FD4
// line start: 452
// line end:   455
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x80048FF8
// line start: 461
// line end:   504
void DeltaAddItem__Fi(int ii) {
	// register: 5
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 8
	register int i;
}


// address: 0x80049238
// line start: 509
// line end:   516
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x80049268
// line start: 522
// line end:   529
int DeltaImportData__FPc(char *Src) {
}


// address: 0x8004929C
// line start: 534
// line end:   544
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80049344
// line start: 619
// line end:   623
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x8004936C
// line start: 629
// line end:   643
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdGolem cmd;
}


// address: 0x800493B8
// line start: 649
// line end:   659
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x800493E8
// line start: 665
// line end:   674
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80049420
// line start: 680
// line end:   690
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80049460
// line start: 696
// line end:   707
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x800494A8
// line start: 713
// line end:   718
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x800494D4
// line start: 724
// line end:   730
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80049504
// line start: 735
// line end:   742
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x8004953C
// line start: 747
// line end:   755
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x800495B0
// line start: 760
// line end:   806
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x800496E4
// line start: 812
// line end:   827
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80049768
// line start: 843
// line end:   862
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x800497C8
// line start: 869
// line end:   876
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80049838
// line start: 881
// line end:   924
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x80049940
// line start: 930
// line end:   941
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x800499E4
// line start: 947
// line end:   952
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x80049A14
// line start: 958
// line end:   1000
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x80049B28
// line start: 1005
// line end:   1021
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80049B30
// line start: 1027
// line end:   1035
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80049B64
// line start: 1050
// line end:   1061
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80049BC0
// line start: 1067
// line end:   1070
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80049C00
// line start: 1076
// line end:   1085
void check_update_plr__Fi(int pnum) {
}


// address: 0x80049C08
// line start: 1095
// line end:   1109
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


// address: 0x80049CC0
// line start: 1116
// line end:   1138
unsigned long On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049CF0
// line start: 1143
// line end:   1159
unsigned long On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049D20
// line start: 1164
// line end:   1188
unsigned long On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049D50
// line start: 1194
// line end:   1218
unsigned long On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049D80
// line start: 1224
// line end:   1254
unsigned long On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049DF4
// line start: 1261
// line end:   1279
unsigned long On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049E9C
// line start: 1284
// line end:   1337
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


// address: 0x80049FE0
// line start: 1343
// line end:   1425
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


// address: 0x8004A1B8
// line start: 1431
// line end:   1447
unsigned long On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A260
// line start: 1452
// line end:   1500
unsigned long On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004A398
// line start: 1505
// line end:   1594
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


// address: 0x8004A568
// line start: 1599
// line end:   1623
unsigned long On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004A608
// line start: 1629
// line end:   1688
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


// address: 0x8004A794
// line start: 1697
// line end:   1752
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


// address: 0x8004A8D8
// line start: 1758
// line end:   1788
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


// address: 0x8004A9F8
// line start: 1816
// line end:   1834
unsigned long On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AAA8
// line start: 1860
// line end:   1894
unsigned long On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ABB4
// line start: 1900
// line end:   1932
unsigned long On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ACB0
// line start: 1937
// line end:   1970
unsigned long On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ADB0
// line start: 1975
// line end:   1995
unsigned long On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004AEE0
// line start: 2000
// line end:   2021
unsigned long On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004B010
// line start: 2027
// line end:   2044
unsigned long On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B07C
// line start: 2049
// line end:   2070
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


// address: 0x8004B1D8
// line start: 2138
// line end:   2170
unsigned long On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B2C4
// line start: 2175
// line end:   2210
unsigned long On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B3A8
// line start: 2216
// line end:   2249
unsigned long On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B490
// line start: 2254
// line end:   2287
unsigned long On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B578
// line start: 2292
// line end:   2309
unsigned long On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B608
// line start: 2314
// line end:   2331
unsigned long On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B644
// line start: 2336
// line end:   2350
unsigned long On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B6B4
// line start: 2355
// line end:   2373
unsigned long On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B75C
// line start: 2379
// line end:   2394
unsigned long On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B794
// line start: 2399
// line end:   2421
unsigned long On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B880
// line start: 2426
// line end:   2440
unsigned long On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B8EC
// line start: 2445
// line end:   2459
unsigned long On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B958
// line start: 2464
// line end:   2486
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


// address: 0x8004BACC
// line start: 2491
// line end:   2518
unsigned long On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BBD4
// line start: 2523
// line end:   2541
unsigned long On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BC1C
// line start: 2547
// line end:   2597
unsigned long On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BDE4
// line start: 2602
// line end:   2616
unsigned long On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004BE80
// line start: 2621
// line end:   2635
unsigned long On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004BF1C
// line start: 2641
// line end:   2655
unsigned long On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004BFB8
// line start: 2660
// line end:   2674
unsigned long On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C050
// line start: 2679
// line end:   2693
unsigned long On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0E8
// line start: 2698
// line end:   2713
unsigned long On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0F0
// line start: 2719
// line end:   2731
unsigned long On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0F8
// line start: 2736
// line end:   2750
unsigned long On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C100
// line start: 2755
// line end:   2770
unsigned long On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C158
// line start: 2775
// line end:   2834
unsigned long On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004C3F0
// line start: 2838
// line end:   2873
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


// address: 0x8004C584
// line start: 2878
// line end:   2891
unsigned long On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C5D8
// line start: 2896
// line end:   2911
unsigned long On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C624
// line start: 2916
// line end:   2934
unsigned long On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C664
// line start: 2939
// line end:   2957
unsigned long On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C6A4
// line start: 2963
// line end:   2983
unsigned long On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C6E4
// line start: 2989
// line end:   3008
unsigned long On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C724
// line start: 3026
// line end:   3042
unsigned long On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004C76C
// line start: 3048
// line end:   3067
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


// address: 0x8004C890
// line start: 3073
// line end:   3090
unsigned long On_CHEAT_EXPERIENCE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C898
// line start: 3095
// line end:   3109
unsigned long On_CHEAT_SPELL_LEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C8A0
// line start: 3114
// line end:   3115
unsigned long On_DEBUG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C8A8
// line start: 3121
// line end:   3211
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80118584
	static unsigned char sbLastCmd;
}


// address: 0x8004CCFC
// line start: 165
// line end:   169
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004CD28
// line start: 554
// line end:   559
int InitLevelType__Fi(int l) {
}


// address: 0x8004CD74
// line start: 565
// line end:   603
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004CF04
// line start: 682
// line end:   688
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004CF78
// line start: 703
// line end:   903
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


// address: 0x8004D1A0
// line start: 253
// line end:   294
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


// address: 0x8004D3BC
// line start: 299
// line end:   303
void FreeObjectGFX__Fv() {
}


// address: 0x8004D3C8
// line start: 307
// line end:   318
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004D480
// line start: 326
// line end:   360
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004D704
// line start: 367
// line end:   373
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004D764
// line start: 380
// line end:   382
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004D78C
// line start: 406
// line end:   443
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004D898
// line start: 451
// line end:   479
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


// address: 0x8004DAA8
// line start: 485
// line end:   528
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


// address: 0x8004DDCC
// line start: 535
// line end:   540
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004DE30
// line start: 571
// line end:   633
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


// address: 0x8004E10C
// line start: 638
// line end:   646
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004E17C
// line start: 655
// line end:   673
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004E310
// line start: 681
// line end:   683
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004E35C
// line start: 690
// line end:   701
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004E46C
// line start: 708
// line end:   749
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004E73C
// line start: 758
// line end:   809
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


// address: 0x8004EA8C
// line start: 818
// line end:   844
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004ED1C
// line start: 853
// line end:   935
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004EFBC
// line start: 943
// line end:   944
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004EFF4
// line start: 957
// line end:   996
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


// address: 0x8004F0C8
// line start: 1003
// line end:   1027
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004F0D0
// line start: 1033
// line end:   1062
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004F0D8
// line start: 1068
// line end:   1089
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004F358
// line start: 1096
// line end:   1103
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004F3FC
// line start: 1110
// line end:   1157
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F7A0
// line start: 1163
// line end:   1211
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FB78
// line start: 1217
// line end:   1258
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FF10
// line start: 1264
// line end:   1305
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x800502A8
// line start: 1311
// line end:   1350
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x800505B0
// line start: 1354
// line end:   1411
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x800508B8
// line start: 1417
// line end:   1461
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


// address: 0x80050DB4
// line start: 1467
// line end:   1482
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050F6C
// line start: 1490
// line end:   1504
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x800510DC
// line start: 1511
// line end:   1518
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80051238
// line start: 1525
// line end:   1550
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


// address: 0x80051424
// line start: 1556
// line end:   1614
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


// address: 0x80051918
// line start: 1620
// line end:   1665
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x80051CC0
// line start: 1671
// line end:   1695
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x80051E98
// line start: 1701
// line end:   1742
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x80052268
// line start: 1748
// line end:   1774
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x8005242C
// line start: 1780
// line end:   1803
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x800525C4
// line start: 1809
// line end:   1835
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052818
// line start: 1841
// line end:   1864
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800529E8
// line start: 1872
// line end:   1888
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052BA0
// line start: 1894
// line end:   1901
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052CFC
// line start: 1908
// line end:   1915
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052E58
// line start: 1921
// line end:   1955
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


// address: 0x80052F60
// line start: 1960
// line end:   1994
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


// address: 0x80053218
// line start: 2003
// line end:   2029
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


// address: 0x800533DC
// line start: 2035
// line end:   2038
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x8005344C
// line start: 2045
// line end:   2598
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


// address: 0x80055A10
// line start: 2604
// line end:   2615
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055B8C
// line start: 2621
// line end:   2642
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055D5C
// line start: 2648
// line end:   2656
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055E44
// line start: 2662
// line end:   2690
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80055FB4
// line start: 2702
// line end:   2724
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x800560A4
// line start: 2731
// line end:   2737
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x8005614C
// line start: 2744
// line end:   2751
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80056200
// line start: 2758
// line end:   2850
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


// address: 0x800567AC
// line start: 2857
// line end:   2897
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x80056958
// line start: 2903
// line end:   2913
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80056A48
// line start: 2919
// line end:   2932
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80056B28
// line start: 2938
// line end:   3055
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80056F60
// line start: 3063
// line end:   3073
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057074
// line start: 3079
// line end:   3089
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057188
// line start: 3095
// line end:   3105
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x8005729C
// line start: 3111
// line end:   3194
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x8005747C
// line start: 3202
// line end:   3228
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


// address: 0x8005766C
// line start: 3236
// line end:   3297
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80057BC0
// line start: 3303
// line end:   3324
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057D20
// line start: 3332
// line end:   3338
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80057D7C
// line start: 3346
// line end:   3370
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80057E94
// line start: 3376
// line end:   3392
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


// address: 0x80057FCC
// line start: 3399
// line end:   3402
void SyncLever__Fi(int i) {
}


// address: 0x80058048
// line start: 3410
// line end:   3420
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x80058140
// line start: 3429
// line end:   3444
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


// address: 0x8005829C
// line start: 3452
// line end:   3476
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058404
// line start: 3484
// line end:   3507
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058530
// line start: 3515
// line end:   3554
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x80058670
// line start: 3562
// line end:   3698
void GetObjectStr__Fi(int i) {
}


// address: 0x80058A8C
// line start: 3703
// line end:   3858
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


// address: 0x80058CE0
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058CE0(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058D18
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058D18(struct TextDat *this, int Creature) {
}


// address: 0x80058D90
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058D90(struct TextDat *this) {
}


// address: 0x80058DA4
// line start: 25
// line end:   26
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80058DAC
// line start: 381
// line end:   386
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058DD8
// line start: 392
// line end:   405
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x80058E8C
// line start: 450
// line end:   499
void SetupLocalPlayer__Fv() {
}


// address: 0x80058EAC
// line start: 269
// line end:   270
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058EF0
// line start: 274
// line end:   275
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F04
// line start: 411
// line end:   417
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F24
// line start: 527
// line end:   546
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F2C
// line start: 553
// line end:   564
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058F48
// line start: 573
// line end:   584
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F6C
// line start: 590
// line end:   671
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x800591A8
// line start: 718
// line end:   835
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x800595C4
// line start: 842
// line end:   848
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x8005962C
// line start: 854
// line end:   890
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8005979C
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


// address: 0x800599A8
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


// address: 0x80059A2C
// line start: 982
// line end:   1151
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


// address: 0x80059E14
// line start: 1161
// line end:   1165
void InitMultiView__Fv() {
}


// address: 0x80059E70
// line start: 1266
// line end:   1267
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059EB4
// line start: 1321
// line end:   1330
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059F48
// line start: 1337
// line end:   1350
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005A03C
// line start: 1356
// line end:   1360
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A050
// line start: 1366
// line end:   1386
void FixPlayerLocation__FP12PlayerStructi(struct PlayerStruct *ptrplr, int bDir) {
}


// address: 0x8005A0B4
// line start: 1394
// line end:   1413
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A140
// line start: 1418
// line end:   1437
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A1A4
// line start: 1445
// line end:   1503
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800CBD98
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A1E0
// line start: 1511
// line end:   1533
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A20C
// line start: 1630
// line end:   1645
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
}


// address: 0x8005A2A8
// line start: 1671
// line end:   1686
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A358
// line start: 1692
// line end:   1733
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A510
// line start: 1766
// line end:   1782
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


// address: 0x8005A630
// line start: 1789
// line end:   1822
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
	// register: 16
	register int pd;
}


// address: 0x8005A760
// line start: 1829
// line end:   1858
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A8F8
// line start: 1864
// line end:   1901
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


// address: 0x8005AABC
// line start: 1907
// line end:   2021
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


// address: 0x8005AE70
// line start: 2026
// line end:   2192
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B2B8
// line start: 2199
// line end:   2221
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005B3FC
// line start: 2227
// line end:   2229
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B41C
// line start: 2235
// line end:   2260
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


// address: 0x8005B704
// line start: 2266
// line end:   2286
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B7C0
// line start: 2293
// line end:   2347
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B904
// line start: 2352
// line end:   2370
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B994
// line start: 2378
// line end:   2394
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005BA50
// line start: 2402
// line end:   2403
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BA58
// line start: 2431
// line end:   2448
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005BAE0
// line start: 2452
// line end:   2571
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BE4C
// line start: 2578
// line end:   2627
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BFEC
// line start: 2634
// line end:   2748
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


// address: 0x8005C61C
// line start: 2755
// line end:   2818
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


// address: 0x8005C9CC
// line start: 2825
// line end:   2832
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005CA5C
// line start: 2840
// line end:   2911
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


// address: 0x8005CDE8
// line start: 2919
// line end:   2940
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CEE8
// line start: 2948
// line end:   2973
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CFA8
// line start: 2979
// line end:   2991
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D048
// line start: 2995
// line end:   3148
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


// address: 0x8005DFB8
// line start: 3155
// line end:   3216
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E328
// line start: 3222
// line end:   3247
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


// address: 0x8005E424
// line start: 3252
// line end:   3268
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E4A0
// line start: 3275
// line end:   3297
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E5B4
// line start: 3304
// line end:   3305
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E5BC
// line start: 3312
// line end:   3615
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E9D4
// line start: 3627
// line end:   3635
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005EA3C
// line start: 3642
// line end:   3680
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


// address: 0x8005EF18
// line start: 3727
// line end:   3744
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EFB4
// line start: 3753
// line end:   3879
void ProcessPlayers__Fv() {
	// register: 16
	register int raflag;
	// register: 19
	register int pnum;
	// register: 23
	register int tplayer;
	{
		{
			{
				// register: 17
				// size: 0x22D0
				register struct PlayerStruct *ptrplr;
			}
		}
	}
}


// address: 0x8005F3E8
// line start: 3885
// line end:   3888
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F410
// line start: 3896
// line end:   3920
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
}


// address: 0x8005F624
// line start: 3927
// line end:   3977
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F634
// line start: 3983
// line end:   4075
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 16
	register int pnum;
	// register: 5
	register unsigned char addflag;
	// register: 4
	register int rspell;
}


// address: 0x8005FCA0
// line start: 4142
// line end:   4166
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005FDDC
// line start: 4170
// line end:   4175
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FE0C
// line start: 4192
// line end:   4226
void CheckStats__Fi(int p) {
	// register: 7
	register int c;
	// register: 6
	register int i;
}


// address: 0x80060044
// line start: 4233
// line end:   4244
void ModifyPlrStr__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x800601C4
// line start: 4252
// line end:   4268
void ModifyPlrMag__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80060324
// line start: 4276
// line end:   4285
void ModifyPlrDex__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80060454
// line start: 4293
// line end:   4306
void ModifyPlrVit__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x8006059C
// line start: 4314
// line end:   4319
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x800605E0
// line start: 4326
// line end:   4334
void SetPlrStr__Fii(int p, int v) {
}


// address: 0x800606FC
// line start: 4341
// line end:   4349
void SetPlrMag__Fii(int p, int v) {
}


// address: 0x80060780
// line start: 4356
// line end:   4364
void SetPlrDex__Fii(int p, int v) {
}


// address: 0x8006089C
// line start: 4371
// line end:   4379
void SetPlrVit__Fii(int p, int v) {
}


// address: 0x8006091C
// line start: 4386
// line end:   4389
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060924
// line start: 4396
// line end:   4462
void PlayDungMsgs__Fv() {
}


// address: 0x80060EBC
// line start: 4465
// line end:   4465
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060EE4
// line start: 4466
// line end:   4466
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80060F28
// line start: 4467
// line end:   4467
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060F5C
// line start: 4468
// line end:   4468
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060F90
// line start: 4469
// line end:   4469
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060FC4
// line start: 4470
// line end:   4470
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80060FF8
// line start: 4471
// line end:   4471
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006102C
// line start: 4472
// line end:   4472
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80061064
// line start: 4473
// line end:   4473
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80061098
// line start: 4474
// line end:   4474
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800610C0
// line start: 4475
// line end:   4475
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800610E8
// line start: 4476
// line end:   4476
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061110
// line start: 4477
// line end:   4477
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80061158
// line start: 4478
// line end:   4478
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061180
// line start: 4479
// line end:   4479
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800611A8
// line start: 4480
// line end:   4480
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800611DC
// line start: 4481
// line end:   4481
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061204
// line start: 4482
// line end:   4482
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006122C
// line start: 4483
// line end:   4483
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80061270
// line start: 4484
// line end:   4484
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x800612A4
// line start: 4485
// line end:   4485
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800612D8
// line start: 4487
// line end:   4487
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80061324
// line start: 4488
// line end:   4488
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80061370
// line start: 4489
// line end:   4489
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x800613BC
// line start: 4490
// line end:   4490
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80061410
// line start: 4491
// line end:   4491
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x8006145C
// line start: 4492
// line end:   4492
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x800614A8
// line start: 4493
// line end:   4493
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x800614F8
// line start: 4494
// line end:   4494
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80061544
// line start: 4495
// line end:   4495
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80061590
// line start: 4496
// line end:   4496
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x800615DC
// line start: 4497
// line end:   4497
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80061628
// line start: 4498
// line end:   4498
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80061674
// line start: 4499
// line end:   4499
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x800616C0
// line start: 4500
// line end:   4500
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80061710
// line start: 4501
// line end:   4501
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x8006175C
// line start: 4502
// line end:   4502
void FixPlayerLocation__Fii(int pnum, int bDir) {
}


// address: 0x800617A8
// line start: 4503
// line end:   4503
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x800617F8
// line start: 4505
// line end:   4505
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80061844
// line start: 4506
// line end:   4506
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80061890
// line start: 4507
// line end:   4507
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x800618DC
// line start: 4508
// line end:   4508
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80061928
// line start: 4509
// line end:   4509
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80061974
// line start: 4510
// line end:   4510
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x800619C0
// line start: 4511
// line end:   4511
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80061A0C
// line start: 4512
// line end:   4512
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80061A58
// line start: 4513
// line end:   4513
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80061AA4
// line start: 4514
// line end:   4514
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80061AF0
// line start: 4515
// line end:   4515
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80061B3C
// line start: 4523
// line end:   4524
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x80061B70
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80061B70(struct POLY_FT4 **Prim) {
}


// address: 0x80061BEC
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80061C3C
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80061C48
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80061C54
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80061C60
// line start: 157
// line end:   217
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


// address: 0x80061EB0
// line start: 224
// line end:   288
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x80062368
// line start: 292
// line end:   319
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


// address: 0x8006250C
// line start: 324
// line end:   330
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x800625A0
// line start: 336
// line end:   434
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


// address: 0x80062B80
// line start: 468
// line end:   493
void SetReturnLvlPos__Fv() {
}


// address: 0x80062C90
// line start: 501
// line end:   506
void GetReturnLvlPos__Fv() {
}


// address: 0x80062CE4
// line start: 513
// line end:   535
void ResyncMPQuests__Fv() {
}


// address: 0x80062E20
// line start: 545
// line end:   634
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80063380
// line start: 650
// line end:   691
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


// address: 0x800635AC
// line start: 700
// line end:   728
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x800637E4
// line start: 733
// line end:   750
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80063864
// line start: 758
// line end:   778
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80063974
// line start: 785
// line end:   793
void QuestlogUp__Fv() {
}


// address: 0x800639CC
// line start: 801
// line end:   808
void QuestlogDown__Fv() {
}


// address: 0x80063A34
// line start: 816
// line end:   833
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80063AF0
// line start: 841
// line end:   846
void QuestlogESC__Fv() {
}


// address: 0x80063B30
// line start: 853
// line end:   873
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80063BB0
// line start: 920
// line end:   920
void _GLOBAL__D_questlog() {
}


// address: 0x80063BD8
// line start: 920
// line end:   920
void _GLOBAL__I_questlog() {
}


// address: 0x80063C00
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x80063C0C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80063C0C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80063C2C
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_80063C2C(struct Dialog *this, int Type) {
}


// address: 0x80063C34
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80063C34(struct Dialog *this, int Type) {
}


// address: 0x80063C3C
// line start: 77
// line end:   77
void ___6Dialog_addr_80063C3C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80063C64
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80063C64(struct Dialog *this) {
}


// address: 0x80063CC0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80063CC0(struct TextDat *this, int PalNum) {
}


// address: 0x80063CDC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80063CDC(struct TextDat *this, int FrNum) {
}


// address: 0x80063CF8
// line start: 85
// line end:   315
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


// address: 0x80063F64
// line start: 326
// line end:   384
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x8006405C
// line start: 150
// line end:   151
void FreeStoreMem__Fv() {
}


// address: 0x80064064
// line start: 159
// line end:   162
void DrawSTextBack__Fv() {
}


// address: 0x800640D4
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
	// address: 0x80117A78
	static unsigned char DaveFix;
}


// address: 0x80064464
// line start: 241
// line end:   248
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800644F8
// line start: 255
// line end:   268
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80064590
// line start: 274
// line end:   278
void AddSLine__Fi(int y) {
}


// address: 0x800645E0
// line start: 284
// line end:   285
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80064608
// line start: 294
// line end:   303
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x800646BC
// line start: 308
// line end:   383
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x80064B00
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


// address: 0x8006511C
// line start: 456
// line end:   470
void S_StartSmith__Fv() {
}


// address: 0x800652A4
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


// address: 0x80065450
// line start: 509
// line end:   527
void S_StartSBuy__Fv() {
}


// address: 0x80065580
// line start: 533
// line end:   592
void S_ScrollSPBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80065748
// line start: 598
// line end:   628
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80065898
// line start: 634
// line end:   645
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80065980
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


// address: 0x80065B6C
// line start: 693
// line end:   739
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065F94
// line start: 747
// line end:   755
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006603C
// line start: 760
// line end:   781
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80066218
// line start: 786
// line end:   844
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x800666E4
// line start: 853
// line end:   865
void S_StartWitch__Fv() {
}


// address: 0x80066824
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


// address: 0x800669D0
// line start: 906
// line end:   926
void S_StartWBuy__Fv() {
}


// address: 0x80066AF8
// line start: 932
// line end:   952
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80066C1C
// line start: 958
// line end:   1018
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80067268
// line start: 1027
// line end:   1033
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x800672F4
// line start: 1039
// line end:   1048
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067470
// line start: 1054
// line end:   1095
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80067884
// line start: 1104
// line end:   1110
void S_StartNoMoney__Fv() {
}


// address: 0x800678EC
// line start: 1116
// line end:   1121
void S_StartNoRoom__Fv() {
}


// address: 0x8006794C
// line start: 1127
// line end:   1184
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80067C80
// line start: 1190
// line end:   1208
void S_StartBoy__Fv() {
}


// address: 0x80067E10
// line start: 1215
// line end:   1239
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80067F5C
// line start: 1247
// line end:   1267
void S_StartHealer__Fv() {
}


// address: 0x80068130
// line start: 1273
// line end:   1295
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80068290
// line start: 1301
// line end:   1318
void S_StartHBuy__Fv() {
}


// address: 0x800683B0
// line start: 1324
// line end:   1333
void S_StartStory__Fv() {
}


// address: 0x800684A0
// line start: 1339
// line end:   1343
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x800684D4
// line start: 1351
// line end:   1356
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800685A4
// line start: 1362
// line end:   1433
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068FE0
// line start: 1442
// line end:   1459
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x80069170
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


// address: 0x800693A0
// line start: 1506
// line end:   1516
void S_StartTavern__Fv() {
}


// address: 0x80069498
// line start: 1522
// line end:   1531
void S_StartBarMaid__Fv() {
}


// address: 0x8006956C
// line start: 1537
// line end:   1546
void S_StartDrunk__Fv() {
}


// address: 0x80069640
// line start: 1552
// line end:   1624
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80069928
// line start: 1631
// line end:   1635
void DrawSText__Fv() {
}


// address: 0x80069968
// line start: 1640
// line end:   1654
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80069A30
// line start: 1658
// line end:   1711
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069BDC
// line start: 1719
// line end:   1783
void STextESC__Fv() {
}


// address: 0x80069D8C
// line start: 1788
// line end:   1822
void STextUp__Fv() {
}


// address: 0x80069F14
// line start: 1832
// line end:   1864
void STextDown__Fv() {
}


// address: 0x8006A0AC
// line start: 1876
// line end:   1898
void S_SmithEnter__Fv() {
}


// address: 0x8006A180
// line start: 1905
// line end:   1916
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006A200
// line start: 1924
// line end:   1934
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006A280
// line start: 1942
// line end:   2033
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8006A6CC
// line start: 2042
// line end:   2065
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006A8B0
// line start: 2071
// line end:   2100
void S_SBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006AAAC
// line start: 2108
// line end:   2133
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006AC2C
// line start: 2140
// line end:   2177
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


// address: 0x8006AE70
// line start: 2184
// line end:   2213
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


// address: 0x8006B140
// line start: 2222
// line end:   2246
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


// address: 0x8006B3A4
// line start: 2252
// line end:   2307
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006B68C
// line start: 2314
// line end:   2330
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006B780
// line start: 2337
// line end:   2354
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B9E8
// line start: 2360
// line end:   2378
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BB34
// line start: 2385
// line end:   2402
void S_WitchEnter__Fv() {
}


// address: 0x8006BBE4
// line start: 2409
// line end:   2441
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BDD8
// line start: 2446
// line end:   2475
void S_WBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BFD4
// line start: 2483
// line end:   2499
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006C0C8
// line start: 2506
// line end:   2520
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006C238
// line start: 2526
// line end:   2544
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C384
// line start: 2551
// line end:   2579
void S_BoyEnter__Fv() {
}


// address: 0x8006C4BC
// line start: 2586
// line end:   2597
void BoyBuyItem__Fv() {
}


// address: 0x8006C540
// line start: 2603
// line end:   2648
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006C7CC
// line start: 2653
// line end:   2687
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C9C8
// line start: 2693
// line end:   2715
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006CD10
// line start: 2722
// line end:   2757
void S_ConfirmEnter__Fv() {
}


// address: 0x8006CE2C
// line start: 2762
// line end:   2780
void S_HealerEnter__Fv() {
}


// address: 0x8006CEC4
// line start: 2787
// line end:   2816
void S_HBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006D0E0
// line start: 2824
// line end:   2837
void S_StoryEnter__Fv() {
}


// address: 0x8006D178
// line start: 2844
// line end:   2862
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006D2E4
// line start: 2869
// line end:   2911
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


// address: 0x8006D4DC
// line start: 2920
// line end:   2931
void S_TavernEnter__Fv() {
}


// address: 0x8006D54C
// line start: 2938
// line end:   2950
void S_BarmaidEnter__Fv() {
}


// address: 0x8006D5BC
// line start: 2957
// line end:   2968
void S_DrunkEnter__Fv() {
}


// address: 0x8006D62C
// line start: 2975
// line end:   3037
void STextEnter__Fv() {
}


// address: 0x8006D83C
// line start: 3042
// line end:   3124
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D954
// line start: 3129
// line end:   3131
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D968
// line start: 3210
// line end:   3210
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D990
// line start: 3210
// line end:   3210
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006D9B8
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8006D9B8(struct CPad *this) {
}


// address: 0x8006D9E0
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8006D9E0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006DA00
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8006DA00(struct Dialog *this, int Type) {
}


// address: 0x8006DA08
// line start: 77
// line end:   77
void ___6Dialog_addr_8006DA08(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006DA30
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8006DA30(struct Dialog *this) {
}


// address: 0x8006DA8C
// line start: 129
// line end:   202
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006DC00
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


// address: 0x8006DDF8
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


// address: 0x8006DEE8
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


// address: 0x8006E2E4
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


// address: 0x8006E44C
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


// address: 0x8006E530
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


// address: 0x8006E5C8
// line start: 76
// line end:   117
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006E8E0
// line start: 122
// line end:   150
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006EB90
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


// address: 0x8006EFF0
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


// address: 0x8006F46C
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


// address: 0x8006F978
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


// address: 0x8006FA38
// line start: 349
// line end:   360
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006FB2C
// line start: 367
// line end:   378
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006FC20
// line start: 385
// line end:   396
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006FD14
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


// address: 0x80070030
// line start: 476
// line end:   497
void FadeGameOut__Fv() {
}


// address: 0x800700CC
// line start: 501
// line end:   640
void CheckTriggers__Fi(int pnum) {
	// register: 17
	register int x;
	// register: 16
	register int y;
	{
		// register: 22
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


// address: 0x80070610
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


// address: 0x800708D8
// line start: 100
// line end:   137
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80070A1C
// line start: 143
// line end:   164
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80070ABC
// line start: 171
// line end:   194
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80070D20
// line start: 201
// line end:   236
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x80070FD4
// line start: 241
// line end:   264
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80071238
// line start: 106
// line end:   107
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80071240
// line start: 113
// line end:   121
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x800712A8
// line start: 128
// line end:   130
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x800712C8
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80071338
// line start: 167
// line end:   195
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x800713D4
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x8007143C
// line start: 227
// line end:   234
void music_stop__Fv() {
}


// address: 0x80071488
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x800714C8
// line start: 260
// line end:   273
void music_start__Fi(int nTrack) {
}


// address: 0x8007154C
// line start: 90
// line end:   153
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


// address: 0x80071A08
// line start: 164
// line end:   172
void CloseInvChr__Fv() {
}


// address: 0x80071A70
// line start: 181
// line end:   191
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
}


// address: 0x80071B44
// line start: 200
// line end:   231
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071BB4
// line start: 240
// line end:   270
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071C24
// size: 0x90
// line start: 283
// line end:   310
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80071D54
// line start: 319
// line end:   320
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071D74
// line start: 329
// line end:   332
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071DB8
// line start: 341
// line end:   344
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071DFC
// line start: 353
// line end:   393
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 17
	register int i;
}


// address: 0x80071F68
// line start: 403
// line end:   431
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80072030
// line start: 439
// line end:   458
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x8007208C
// line start: 466
// line end:   469
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800720C8
// line start: 478
// line end:   506
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x8007214C
// line start: 514
// line end:   625
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80072518
// line start: 635
// line end:   658
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x800725C4
// line start: 669
// line end:   715
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x800726DC
// line start: 726
// line end:   735
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80072720
// line start: 743
// line end:   819
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


// address: 0x80072A24
// line start: 829
// line end:   890
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072CF8
// line start: 898
// line end:   937
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80072EE8
// line start: 945
// line end:   966
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


// address: 0x80073060
// line start: 1033
// line end:   1299
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


// address: 0x800735F0
// line start: 1304
// line end:   1392
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


// address: 0x800737E8
// line start: 1398
// line end:   1415
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80073898
// line start: 1427
// line end:   1428
void Init_GamePad__Fv() {
}


// address: 0x800738C8
// line start: 1433
// line end:   1444
void InitGamePadVars__Fv() {
}


// address: 0x80073940
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80073940(struct CBlocks *this) {
}


// address: 0x80073954
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80073954(struct CPad *this) {
}


// address: 0x8007397C
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_8007397C(struct CPad *this) {
}


// address: 0x800739A4
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_800739A4(struct CPad *this) {
}


// address: 0x800739CC
// line start: 66
// line end:   69
void DoGameTestStuff__Fv() {
}


// address: 0x800739F8
// line start: 73
// line end:   76
void DoInitGameStuff__Fv() {
}


// address: 0x80073A2C
// line start: 63
// line end:   64
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073A4C
// line start: 74
// line end:   76
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073A6C
// line start: 93
// line end:   94
void GRL_InitGwin__Fv() {
}


// address: 0x80073A78
// line start: 105
// line end:   109
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x80073A88
// line start: 120
// line end:   122
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80073AB0
// line start: 132
// line end:   148
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80073B54
// line start: 158
// line end:   165
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x80073B9C
// size: 0x4
// line start: 79
// line end:   80
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80073BA8
// line start: 87
// line end:   123
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


// address: 0x80073CAC
// line start: 132
// line end:   152
char *GetStr__Fi(int StrId) {
}


// address: 0x80073D14
// line start: 162
// line end:   188
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


// address: 0x80073E18
// line start: 200
// line end:   209
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x80073E70
// line start: 218
// line end:   220
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80073E7C
// line start: 230
// line end:   246
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80073F84
// line start: 254
// line end:   280
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80074004
// line start: 96
// line end:   150
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


// address: 0x8007453C
// line start: 155
// line end:   169
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x800746BC
// line start: 173
// line end:   186
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x8007481C
// line start: 190
// line end:   205
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800748B4
// line start: 212
// line end:   227
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074964
// line start: 234
// line end:   235
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800749C8
// line start: 239
// line end:   242
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074AE0
// line start: 246
// line end:   248
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074B78
// line start: 252
// line end:   254
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074C10
// line start: 258
// line end:   259
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074C78
// line start: 263
// line end:   274
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 3
	register int frame;
}


// address: 0x80074D0C
// line start: 278
// line end:   293
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


// address: 0x80074DEC
// line start: 298
// line end:   313
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


// address: 0x80074EC4
// line start: 318
// line end:   330
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074F54
// line start: 334
// line end:   348
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


// address: 0x80075070
// line start: 352
// line end:   364
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x8007510C
// line start: 368
// line end:   369
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075174
// line start: 373
// line end:   374
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800751DC
// line start: 378
// line end:   387
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80075310
// line start: 391
// line end:   400
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80075454
// line start: 404
// line end:   405
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800754BC
// line start: 409
// line end:   410
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075514
// line start: 414
// line end:   424
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


// address: 0x800755E0
// line start: 429
// line end:   430
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075644
// line start: 434
// line end:   436
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007564C
// line start: 439
// line end:   514
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


// address: 0x80075B74
// line start: 519
// line end:   524
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075C1C
// line start: 528
// line end:   529
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075C24
// line start: 532
// line end:   533
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075C58
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075C58(struct POLY_FT4 **Prim) {
}


// address: 0x80075CD4
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075CD4(int PNum) {
}


// address: 0x80075D24
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075D24(struct CPlayer *this) {
}


// address: 0x80075D30
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80075D30(struct CPlayer *this) {
}


// address: 0x80075D3C
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075D3C(struct CPlayer *this) {
}


// address: 0x80075D48
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075D48(struct TextDat *this) {
}


// address: 0x80075D5C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80075D5C(struct TextDat *this, int FrNum) {
}


// address: 0x80075D78
// line start: 67
// line end:   72
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80075DB0
// line start: 81
// line end:   96
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80075E30
// line start: 105
// line end:   120
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80075EC8
// line start: 131
// line end:   147
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80075F78
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


// address: 0x80076134
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


// address: 0x800762C8
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


// address: 0x80076380
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


// address: 0x80076614
// line start: 441
// line end:   448
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x800766EC
// size: 0x28
// line start: 459
// line end:   467
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076774
// size: 0x28
// line start: 477
// line end:   478
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767A0
// size: 0x28
// line start: 488
// line end:   489
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767CC
// size: 0x28
// line start: 499
// line end:   500
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767F8
// size: 0x28
// line start: 510
// line end:   511
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076824
// size: 0x28
// line start: 521
// line end:   522
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076850
// size: 0x28
// line start: 532
// line end:   533
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076874
// size: 0x28
// line start: 543
// line end:   544
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076898
// size: 0x28
// line start: 554
// line end:   555
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768C4
// size: 0x28
// line start: 565
// line end:   566
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768F0
// size: 0x28
// line start: 576
// line end:   577
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007691C
// size: 0x28
// line start: 587
// line end:   588
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076948
// size: 0x28
// line start: 598
// line end:   599
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076974
// size: 0x28
// line start: 609
// line end:   610
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769A0
// size: 0x28
// line start: 620
// line end:   621
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769CC
// size: 0x28
// line start: 631
// line end:   632
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769F8
// size: 0x28
// line start: 642
// line end:   643
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A24
// size: 0x28
// line start: 653
// line end:   654
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A50
// size: 0x28
// line start: 664
// line end:   665
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A7C
// size: 0x28
// line start: 675
// line end:   676
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AA8
// size: 0x28
// line start: 686
// line end:   687
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AD4
// size: 0x28
// line start: 697
// line end:   698
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B00
// size: 0x28
// line start: 708
// line end:   709
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B2C
// size: 0x28
// line start: 719
// line end:   720
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B58
// size: 0x28
// line start: 730
// line end:   731
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B84
// size: 0x28
// line start: 741
// line end:   742
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BB0
// size: 0x28
// line start: 752
// line end:   753
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BDC
// size: 0x28
// line start: 763
// line end:   764
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C08
// size: 0x28
// line start: 774
// line end:   775
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C34
// size: 0x28
// line start: 785
// line end:   786
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C60
// size: 0x28
// line start: 796
// line end:   797
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C8C
// size: 0x28
// line start: 807
// line end:   808
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CB8
// size: 0x28
// line start: 818
// line end:   819
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CE4
// size: 0x28
// line start: 829
// line end:   830
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D10
// size: 0x28
// line start: 840
// line end:   841
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D3C
// size: 0x28
// line start: 851
// line end:   852
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D68
// size: 0x28
// line start: 862
// line end:   863
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D94
// size: 0x28
// line start: 873
// line end:   874
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DC0
// size: 0x28
// line start: 884
// line end:   885
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DEC
// size: 0x28
// line start: 895
// line end:   896
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E18
// line start: 906
// line end:   911
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80076EAC
// size: 0x28
// line start: 915
// line end:   921
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076F3C
// size: 0x28
// line start: 931
// line end:   937
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076FCC
// size: 0x28
// line start: 947
// line end:   953
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8007705C
// size: 0x28
// line start: 963
// line end:   969
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800770EC
// size: 0x28
// line start: 979
// line end:   980
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077118
// size: 0x28
// line start: 990
// line end:   991
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077144
// size: 0x28
// line start: 1001
// line end:   1002
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077170
// size: 0x28
// line start: 1012
// line end:   1013
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007719C
// size: 0x28
// line start: 1023
// line end:   1024
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800771C8
// size: 0x28
// line start: 1034
// line end:   1035
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800771F4
// size: 0x28
// line start: 1045
// line end:   1046
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077220
// size: 0x28
// line start: 1056
// line end:   1057
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007724C
// size: 0x28
// line start: 1067
// line end:   1068
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077278
// size: 0x28
// line start: 1078
// line end:   1079
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772A4
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


// address: 0x800773FC
// size: 0x28
// line start: 1125
// line end:   1132
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x800774C8
// size: 0x28
// line start: 1142
// line end:   1149
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80077594
// size: 0x28
// line start: 1159
// line end:   1160
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775C0
// size: 0x28
// line start: 1170
// line end:   1171
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775EC
// size: 0x28
// line start: 1181
// line end:   1182
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077618
// size: 0x28
// line start: 1192
// line end:   1193
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077644
// size: 0x28
// line start: 1203
// line end:   1204
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077668
// size: 0x28
// line start: 1214
// line end:   1215
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077694
// size: 0x28
// line start: 1225
// line end:   1226
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800776C0
// size: 0x28
// line start: 1236
// line end:   1237
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800776EC
// size: 0x28
// line start: 1247
// line end:   1248
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077718
// size: 0x28
// line start: 1258
// line end:   1259
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077744
// size: 0x28
// line start: 1269
// line end:   1270
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077770
// size: 0x28
// line start: 1280
// line end:   1281
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007779C
// size: 0x28
// line start: 1291
// line end:   1292
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800777C8
// size: 0x28
// line start: 1302
// line end:   1303
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800777F4
// size: 0x28
// line start: 1313
// line end:   1314
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077820
// size: 0x28
// line start: 1324
// line end:   1325
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007784C
// size: 0x28
// line start: 1335
// line end:   1336
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077878
// size: 0x28
// line start: 1346
// line end:   1347
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800778A4
// size: 0x28
// line start: 1357
// line end:   1358
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800778D0
// size: 0x28
// line start: 1368
// line end:   1369
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800778FC
// size: 0x28
// line start: 1379
// line end:   1380
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077928
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


// address: 0x80077ABC
// size: 0x28
// line start: 1446
// line end:   1447
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077AE8
// size: 0x28
// line start: 1457
// line end:   1458
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B0C
// size: 0x28
// line start: 1468
// line end:   1469
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B38
// size: 0x28
// line start: 1479
// line end:   1480
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B64
// size: 0x28
// line start: 1490
// line end:   1491
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B90
// size: 0x28
// line start: 1501
// line end:   1502
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077BBC
// size: 0x28
// line start: 1512
// line end:   1513
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077BE8
// size: 0x28
// line start: 1523
// line end:   1524
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077C14
// size: 0x28
// line start: 1534
// line end:   1535
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077C40
// size: 0x28
// line start: 1545
// line end:   1546
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077C6C
// size: 0x28
// line start: 1556
// line end:   1557
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077C98
// size: 0x28
// line start: 1567
// line end:   1568
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077CC4
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077CC4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80077D00
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077D00(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80077D28
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077D28(struct POLY_FT4 **Prim) {
}


// address: 0x80077DA4
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077DA4(struct CBlocks *this) {
}


// address: 0x80077DB0
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80077DB0(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077DE8
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80077DE8(struct TextDat *this, int Creature) {
}


// address: 0x80077E60
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077E60(struct TextDat *this) {
}


// address: 0x80077E74
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077E74(struct TextDat *this, int FrNum) {
}


// address: 0x80077E90
// line start: 48
// line end:   58
void gamemenu_on__Fv() {
}


// address: 0x80077E98
// line start: 63
// line end:   65
void gamemenu_off__Fv() {
}


// address: 0x80077EA0
// line start: 73
// line end:   95
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077EA8
// line start: 100
// line end:   113
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077EB0
// line start: 118
// line end:   124
void ResetPal__Fv() {
}


// address: 0x80077EB8
// line start: 132
// line end:   139
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077EE8
// line start: 174
// line end:   175
bool GetFadeState__Fv() {
}


// address: 0x80077EF4
// line start: 186
// line end:   198
void DrawFadedScreen__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077FC0
// line start: 203
// line end:   215
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007807C
// line start: 222
// line end:   245
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078100
// line start: 252
// line end:   259
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80078158
// line start: 267
// line end:   293
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x800781F0
// line start: 300
// line end:   307
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x80078244
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x80078264
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


// address: 0x800783D0
// line start: 168
// line end:   171
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x8007840C
// line start: 176
// line end:   188
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80078458
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x800784A0
// line start: 205
// line end:   217
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80078500
// line start: 221
// line end:   306
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


// address: 0x80078AC0
// line start: 311
// line end:   320
void ClearMVars__Fi(int i) {
}


// address: 0x80078B34
// line start: 324
// line end:   431
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x80078F80
// line start: 436
// line end:   444
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80079030
// line start: 449
// line end:   477
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x80079174
// line start: 481
// line end:   500
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x8007926C
// line start: 504
// line end:   512
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x80079314
// line start: 516
// line end:   561
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


// address: 0x80079504
// line start: 565
// line end:   582
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x800795E4
// line start: 586
// line end:   615
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


// address: 0x80079860
// line start: 620
// line end:   651
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80079B68
// line start: 108
// line end:   200
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x80079E74
// line start: 205
// line end:   278
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
// line start: 32
// line end:   33
void TICK_InitModule();

// address: 0x8001F478
// line start: 41
// line end:   42
void TICK_Set(unsigned long Val);

// address: 0x8001F488
// line start: 49
// line end:   50
unsigned long TICK_Get();

// address: 0x8001F498
// line start: 58
// line end:   59
void TICK_Update();

// address: 0x8001F4B8
// line start: 66
// line end:   67
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001F4E4
// line start: 71
// line end:   72
char *TICK_GetDateString();

// address: 0x8001F4F4
// line start: 76
// line end:   77
char *TICK_GetTimeString();

// address: 0x8001F504
// line start: 55
// line end:   57
unsigned char GU_InitModule();

// address: 0x8001F530
// line start: 65
// line end:   70
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001F560
// line start: 76
// line end:   95
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001F5F0
// line start: 103
// line end:   104
long GU_GetSRnd();

// address: 0x8001F610
// line start: 114
// line end:   115
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001F64C
// line start: 126
// line end:   128
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001F670
// line start: 31
// line end:   39
void main();

// address: 0x8001F6C0
// line start: 53
// line end:   60
unsigned char DBG_OpenModule();

// address: 0x8001F6C8
// line start: 72
// line end:   79
void DBG_PollHost();

// address: 0x8001F6D0
// line start: 88
// line end:   92
void DBG_Halt();

// address: 0x8001F6D8
// line start: 108
// line end:   126
void DBG_SendMessage(char *e);

// address: 0x8001F6F0
// line start: 135
// line end:   136
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001F700
// line start: 146
// line end:   158
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001F72C
// line start: 164
// line end:   165
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001F73C
// line start: 175
// line end:   179
void SendPsyqString(char *e);

// address: 0x8001F744
// line start: 188
// line end:   189
void DBG_SetPollRoutine(void (*Func)());

// address: 0x8001F754
// line start: 52
// line end:   53
unsigned long GTIMSYS_GetTimer();

// address: 0x8001F778
// line start: 57
// line end:   58
void GTIMSYS_ResetTimer();

// address: 0x8001F79C
// line start: 63
// line end:   91
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8001F9D0
// line start: 170
// line end:   171
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001F9E0
// line start: 190
// line end:   241
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
// line start: 249
// line end:   271
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FBCC
// line start: 284
// line end:   354
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
// line start: 369
// line end:   446
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
// line start: 460
// line end:   482
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FEE4
// line start: 495
// line end:   526
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FF60
// line start: 538
// line end:   577
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020000
// line start: 590
// line end:   614
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
// line start: 628
// line end:   652
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
// line start: 667
// line end:   693
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
// line start: 705
// line end:   711
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80020184
// line start: 725
// line end:   732
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x800201D0
// line start: 747
// line end:   760
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x80020200
// line start: 774
// line end:   784
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x80020230
// line start: 797
// line end:   798
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80020260
// size: 0x20
// line start: 812
// line end:   837
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
// line start: 849
// line end:   882
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
// line start: 893
// line end:   928
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
// line start: 940
// line end:   961
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x800203C4
// line start: 974
// line end:   1027
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
// line start: 1049
// line end:   1079
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020574
// line start: 1103
// line end:   1190
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x8002070C
// size: 0x20
// line start: 1206
// line end:   1233
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
// line start: 1245
// line end:   1262
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x80020800
// line start: 1275
// line end:   1277
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x80020840
// line start: 1289
// line end:   1309
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
// line start: 1319
// line end:   1339
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
// line start: 1350
// line end:   1354
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x800209C8
// line start: 1374
// line end:   1388
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020A1C
// line start: 1402
// line end:   1418
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020A70
// line start: 1432
// line end:   1449
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020AF4
// line start: 1462
// line end:   1467
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020B50
// line start: 1482
// line end:   1534
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
// line start: 1549
// line end:   1574
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020CF8
// line start: 1587
// line end:   1602
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020D50
// line start: 1614
// line end:   1616
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020D80
// size: 0x4
// line start: 1629
// line end:   1630
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020D90
// line start: 1641
// line end:   1642
char *GAL_GetLastErrorText();

// address: 0x80020DB8
// line start: 1654
// line end:   1681
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
// line start: 1691
// line end:   1716
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
// line start: 1725
// line end:   1726
void GAL_SetTimeStamp(int Time);

// address: 0x80020E98
// line start: 1736
// line end:   1737
void GAL_IncTimeStamp();

// address: 0x80020EB8
// line start: 1746
// line end:   1747
int GAL_GetTimeStamp();

// address: 0x80020EC8
// line start: 1763
// line end:   1774
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80020F18
// line start: 1794
// line end:   1799
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80020F68
// line start: 1814
// line end:   1831
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x80021014
// line start: 1842
// line end:   1853
long GAL_GetSize(long hnd) {
}


// address: 0x80021068
// line start: 1867
// line end:   1959
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
// line start: 1972
// line end:   1996
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
// line start: 2009
// line end:   2015
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x800212A8
// line start: 2028
// line end:   2038
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x80021314
// line start: 2056
// line end:   2091
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
// line start: 2130
// line end:   2149
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x80021448
// line start: 2163
// line end:   2192
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
// line start: 2204
// line end:   2223
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
// line start: 2236
// line end:   2286
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
// line start: 2297
// line end:   2320
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
// line start: 2331
// line end:   2336
void GAL_MemDump(unsigned long Type);

// address: 0x800216D8
// line start: 2350
// line end:   2351
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x800216E8
// line start: 2364
// line end:   2378
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x80021714
// line start: 2390
// line end:   2402
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x8002175C
// line start: 2411
// line end:   2412
int GAL_GetNumFreeHeaders();

// address: 0x8002176C
// line start: 2416
// line end:   2417
unsigned long GAL_GetLastTypeAlloced();

// address: 0x8002177C
// line start: 2427
// line end:   2434
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x80021794
// line start: 2443
// line end:   2455
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x800217E8
// line start: 2458
// line end:   2459
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x800217F8
// line start: 2472
// line end:   2521
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
// line start: 88
// line end:   91
void DoEpi(struct TASK *T);

// address: 0x80021938
// line start: 99
// line end:   102
void DoPro(struct TASK *T);

// address: 0x80021988
// line start: 115
// line end:   129
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x800219FC
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


// address: 0x80021BE4
// line start: 218
// line end:   277
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x80021DA4
// line start: 287
// line end:   313
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x80021E80
// line start: 321
// line end:   330
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x80021F08
// line start: 338
// line end:   340
void TSK_Die();

// address: 0x80021F34
// line start: 350
// line end:   357
void TSK_Kill(struct TASK *T);

// address: 0x80021F84
// size: 0x5C
// line start: 371
// line end:   372
struct TASK *TSK_GetFirstActive();

// address: 0x80021F94
// line start: 385
// line end:   395
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x80022010
// line start: 408
// line end:   418
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80022058
// line start: 430
// line end:   440
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8002209C
// size: 0x5C
// line start: 454
// line end:   455
struct TASK *TSK_GetCurrentTask();

// address: 0x800220AC
// line start: 467
// line end:   468
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x800220C4
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


// address: 0x8002211C
// line start: 512
// line end:   514
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x80022134
// line start: 525
// line end:   526
void TSK_ClearExecFilter();

// address: 0x80022158
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


// address: 0x80022258
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


// address: 0x800222D0
// line start: 619
// line end:   620
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x800222E4
// line start: 630
// line end:   631
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x800222F8
// line start: 642
// line end:   643
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8002230C
// line start: 653
// line end:   654
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x80022320
// line start: 665
// line end:   666
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x80022334
// line start: 677
// line end:   678
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x80022348
// line start: 689
// line end:   696
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x80022394
// line start: 707
// line end:   713
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800223B4
// line start: 722
// line end:   734
void LoTskKill(struct TASK *T) {
}


// address: 0x80022424
// line start: 744
// line end:   748
void ExecuteTask(struct TASK *T);

// address: 0x80022474
// line start: 756
// line end:   762
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8002248C
// line start: 765
// line end:   771
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800224A4
// line start: 775
// line end:   781
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800224BC
// line start: 784
// line end:   790
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800224D4
// line start: 793
// line end:   795
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x800224EC
// line start: 799
// line end:   802
void TSK_ClearEpiProFilter();

// address: 0x80022520
// line start: 810
// line end:   811
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x80022530
// line start: 819
// line end:   826
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x80022548
// line start: 833
// line end:   838
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x80022570
// line start: 841
// line end:   845
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8002259C
// line start: 848
// line end:   857
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x800225D8
// size: 0x8
// line start: 74
// line end:   75
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x800225E8
// line start: 89
// line end:   91
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x80022624
// line start: 110
// line end:   115
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x80022634
// line start: 130
// line end:   135
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8002264C
// line start: 147
// line end:   151
unsigned char GSYS_InitMachine();

// address: 0x800226A0
// line start: 170
// line end:   184
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x800226D4
// line start: 195
// line end:   199
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x80024A1C
// line start: 157
// line end:   167
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80024A68
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


