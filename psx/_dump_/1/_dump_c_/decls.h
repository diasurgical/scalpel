#include "types.h"

// address: 0x80116458
extern int NumOfMonsterListLevels;

// address: 0x800A375C
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x80116174
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x80116178
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x8011617C
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x80116184
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x80116188
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x8011618C
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x80116190
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x80116194
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x80116198
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x8011619C
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x801161A0
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x801161A4
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x801161A8
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x801161AC
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x801161B0
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x801161B4
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x801161B8
// size: 0x4
static unsigned char NumsLEV4M4QB[4];

// address: 0x801161BC
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x801161C0
// size: 0x4
static unsigned char NumsLEV4M4QC[4];

// address: 0x801161C4
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x801161C8
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x801161CC
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x801161D0
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x801161D4
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x801161D8
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x801161DC
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x801161E0
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x801161E8
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x801161EC
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x801161F0
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x801161F4
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x801161F8
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x801161FC
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x80116200
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x80116204
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x80116208
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x8011620C
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x80116210
// size: 0x3
static unsigned char NumsLEV8M8A[3];

// address: 0x80116214
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x80116218
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8011621C
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x80116220
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x80116224
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x80116228
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x8011622C
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x80116230
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x80116234
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x80116238
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x8011623C
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x80116240
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x80116244
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x80116248
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x8011624C
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x80116250
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x80116254
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x80116258
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x8011625C
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x80116260
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x80116264
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x80116268
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x8011626C
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x80116270
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x80116274
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x80116278
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x8011627C
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x80116280
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x80116284
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x80116288
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x8011628C
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x80116290
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x80116294
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x80116298
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8011629C
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x801162A0
// size: 0x1
static unsigned char NumsLEV16M16D[1];

// address: 0x800A32BC
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A32EC
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A334C
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A338C
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A33FC
// size: 0x60
static struct MonstList ChoiceListLEV5[6];

// address: 0x800A345C
// size: 0x50
static struct MonstList ChoiceListLEV6[5];

// address: 0x800A34AC
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A34FC
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A355C
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A359C
// size: 0x40
static struct MonstList ChoiceListLEV10[4];

// address: 0x800A35DC
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A362C
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A366C
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A36BC
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A371C
// size: 0x30
static struct MonstList ChoiceListLEV15[3];

// address: 0x800A374C
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x80117A20
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x80116468
extern int time_in_frames;

// address: 0x800A37DC
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x8011646C
extern int ArgsSoFar;

// address: 0x80116470
extern unsigned long *ThisOt;

// address: 0x80116474
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x80117A24
static long hndPrimBuffers;

// address: 0x80117A28
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x80117A2C
static unsigned char BufferDepth;

// address: 0x80117A2D
static unsigned char WorkRamId;

// address: 0x80117A2E
static unsigned char ScrNum;

// address: 0x80117A30
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x80117A34
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x80117A38
static unsigned char BufferNum;

// address: 0x80116478
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x80117A39
static unsigned char LastBuffer;

// address: 0x80117A3C
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x80117A40
static int ThisOtSize;

// address: 0x8011647C
// size: 0x8
static struct RECT ScrRect;

// address: 0x80117A44
static int VidWait;

// address: 0x80117ED0
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x80117A48
static void (*VbFunc)();

// address: 0x80117A4C
static unsigned long VidTick;

// address: 0x80117A50
static int VXOff;

// address: 0x80117A54
static int VYOff;

// address: 0x80116490
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x80116494
extern int LastFmem;

// address: 0x80116484
extern unsigned int GSYS_MemStart;

// address: 0x80116488
extern unsigned int GSYS_MemEnd;

// address: 0x800A3B24
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A3B4C
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x8011648C
extern int LowestFmem;

// address: 0x801164A4
extern int FileSYS;

// address: 0x80117A58
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x80117A5C
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x801164BE
extern short DavesPad;

// address: 0x801164C0
extern short DavesPadDeb;

// address: 0x800A3B74
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x80117FB0
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A4418
// size: 0x46C
extern struct TextDat *AllDats[283];

// address: 0x80116510
extern int TpW;

// address: 0x80116514
extern int TpH;

// address: 0x80116518
extern int TpXDest;

// address: 0x8011651C
extern int TpYDest;

// address: 0x80116520
// size: 0x8
extern struct RECT R;

// address: 0x800A4884
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800A48B8
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A3BA8
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x80116534
static bool ChunkGot;

// address: 0x800A48E0
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800A48F0
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A4900
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x80116548
extern unsigned long BL_NoLumpFiles;

// address: 0x8011654C
extern unsigned long BL_NoStreamFiles;

// address: 0x80116550
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x80116554
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x80116558
extern unsigned char FileLoaded;

// address: 0x80116588
extern int NoTAllocs;

// address: 0x800A4A2C
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x80117A68
static bool CanPause;

// address: 0x80117A6C
static bool Paused;

// address: 0x80117A70
// size: 0x8
static struct RECT PRect;

// address: 0x80117FD8
// size: 0x10
static struct Dialog PBack;

// address: 0x800A4C94
// size: 0x22
extern char RawPadData0[34];

// address: 0x800A4CB8
// size: 0x22
extern char RawPadData1[34];

// address: 0x800A4CDC
// size: 0x708
extern unsigned char demo_buffer[1800];

// address: 0x801165B4
extern int demo_pad_time;

// address: 0x801165B8
extern int demo_pad_count;

// address: 0x800A4BBC
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800A4C28
// size: 0x6C
extern struct CPad Pad1;

// address: 0x801165BC
extern unsigned long demo_finish;

// address: 0x801165C0
extern int cac_pad;

// address: 0x801165DC
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x801165E0
extern int CharFrm;

// address: 0x801165CD
extern unsigned char WHITER;

// address: 0x801165CE
extern unsigned char WHITEG;

// address: 0x801165CF
extern unsigned char WHITEB;

// address: 0x801165D0
extern unsigned char BLUER;

// address: 0x801165D1
extern unsigned char BLUEG;

// address: 0x801165D2
extern unsigned char BLUEB;

// address: 0x801165D3
extern unsigned char REDR;

// address: 0x801165D4
extern unsigned char REDG;

// address: 0x801165D5
extern unsigned char REDB;

// address: 0x801165D6
extern unsigned char GOLDR;

// address: 0x801165D7
extern unsigned char GOLDG;

// address: 0x801165D8
extern unsigned char GOLDB;

// address: 0x800A53E4
// size: 0x218
extern struct CFont MediumFont;

// address: 0x800A55FC
// size: 0x218
extern struct CFont LargeFont;

// address: 0x800A5814
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800A58C8
// size: 0x10
extern struct FontTab LFont;

// address: 0x800A58D8
// size: 0x12E
extern struct FontItem MFontTab[151];

// address: 0x800A5A08
// size: 0x10
extern struct FontTab MFont;

// address: 0x801165F5
extern unsigned char DialogRed;

// address: 0x801165F6
extern unsigned char DialogGreen;

// address: 0x801165F7
extern unsigned char DialogBlue;

// address: 0x801165F8
extern unsigned char DialogTRed;

// address: 0x801165F9
extern unsigned char DialogTGreen;

// address: 0x801165FA
extern unsigned char DialogTBlue;

// address: 0x801165FC
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x80116600
extern int DialogBackGfx;

// address: 0x80116604
extern int DialogBackW;

// address: 0x80116608
extern int DialogBackH;

// address: 0x8011660C
extern int DialogBorderGfx;

// address: 0x80116610
extern int DialogBorderTLW;

// address: 0x80116614
extern int DialogBorderTLH;

// address: 0x80116618
extern int DialogBorderTRW;

// address: 0x8011661C
extern int DialogBorderTRH;

// address: 0x80116620
extern int DialogBorderBLW;

// address: 0x80116624
extern int DialogBorderBLH;

// address: 0x80116628
extern int DialogBorderBRW;

// address: 0x8011662C
extern int DialogBorderBRH;

// address: 0x80116630
extern int DialogBorderTW;

// address: 0x80116634
extern int DialogBorderTH;

// address: 0x80116638
extern int DialogBorderBW;

// address: 0x8011663C
extern int DialogBorderBH;

// address: 0x80116640
extern int DialogBorderLW;

// address: 0x80116644
extern int DialogBorderLH;

// address: 0x80116648
extern int DialogBorderRW;

// address: 0x8011664C
extern int DialogBorderRH;

// address: 0x80116650
extern int DialogBevelGfx;

// address: 0x80116654
extern int DialogBevelCW;

// address: 0x80116658
extern int DialogBevelCH;

// address: 0x8011665C
extern int DialogBevelLRW;

// address: 0x80116660
extern int DialogBevelLRH;

// address: 0x80116664
extern int DialogBevelUDW;

// address: 0x80116668
extern int DialogBevelUDH;

// address: 0x8011666C
extern int MY_DialogOTpos;

// address: 0x80117A78
static unsigned char DialogGBack;

// address: 0x80117A79
static char GShadeX;

// address: 0x80117A7A
static char GShadeY;

// address: 0x80117A80
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800A5A58
// size: 0x70
extern int Cxy[28];

// address: 0x801165EF
extern unsigned char BORDERR;

// address: 0x801165F0
extern unsigned char BORDERG;

// address: 0x801165F1
extern unsigned char BORDERB;

// address: 0x801165F2
extern unsigned char BACKR;

// address: 0x801165F3
extern unsigned char BACKG;

// address: 0x801165F4
extern unsigned char BACKB;

// address: 0x800A5A18
// size: 0x40
static char GShadeTab[64];

// address: 0x801165ED
static char GShadePX;

// address: 0x801165EE
static char GShadePY;

// address: 0x80116679
extern unsigned char PlayDemoFlag;

// address: 0x80117FE8
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x80118018
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x80117A88
static int blockr;

// address: 0x80117A8C
static int blockg;

// address: 0x80117A90
static int blockb;

// address: 0x80117A94
static int InfraFlag;

// address: 0x80116685
extern unsigned char P1ObjSelCount;

// address: 0x80116686
extern unsigned char P2ObjSelCount;

// address: 0x80116687
extern unsigned char P12ObjSelCount;

// address: 0x80116688
extern unsigned char P1ItemSelCount;

// address: 0x80116689
extern unsigned char P2ItemSelCount;

// address: 0x8011668A
extern unsigned char P12ItemSelCount;

// address: 0x8011668B
extern unsigned char P1MonstSelCount;

// address: 0x8011668C
extern unsigned char P2MonstSelCount;

// address: 0x8011668D
extern unsigned char P12MonstSelCount;

// address: 0x8011668E
static unsigned short P1ObjSelCol;

// address: 0x80116690
static unsigned short P2ObjSelCol;

// address: 0x80116692
static unsigned short P12ObjSelCol;

// address: 0x80116694
static unsigned short P1ItemSelCol;

// address: 0x80116696
static unsigned short P2ItemSelCol;

// address: 0x80116698
static unsigned short P12ItemSelCol;

// address: 0x8011669A
static unsigned short P1MonstSelCol;

// address: 0x8011669C
static unsigned short P2MonstSelCol;

// address: 0x8011669E
static unsigned short P12MonstSelCol;

// address: 0x801166A0
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x8010C5FC
// size: 0x40
static short SinTab[32];

// address: 0x800A5AC8
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x801166BC
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x8010C688
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x80118048
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x80118058
// size: 0x10
static struct Overlay PregameOver;

// address: 0x80118068
// size: 0x10
static struct Overlay GameOver;

// address: 0x80118078
// size: 0x10
static struct Overlay FmvOver;

// address: 0x80117A98
static int OWorldX;

// address: 0x80117A9C
static int OWorldY;

// address: 0x80117AA0
static int WWorldX;

// address: 0x80117AA4
static int WWorldY;

// address: 0x8010C704
// size: 0x20
static short TxyAdd[16];

// address: 0x801166E0
extern int GXAdj2;

// address: 0x80117AA8
static int TimePerFrame;

// address: 0x80117AAC
static int CpuStart;

// address: 0x80117AB0
static int CpuTime;

// address: 0x80117AB4
static int DrawTime;

// address: 0x80117AB8
static int DrawStart;

// address: 0x80117ABC
static int LastCpuTime;

// address: 0x80117AC0
static int LastDrawTime;

// address: 0x80117AC4
static int DrawArea;

// address: 0x801166E8
extern bool ProfOn;

// address: 0x800A5ADC
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x8010C848
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800A5AF0
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800A5B44
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800A5B98
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800A5BEC
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800A5C40
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x80116710
extern int hof;

// address: 0x80116714
extern int mof;

// address: 0x800A5D08
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x80116748
extern unsigned long Time;

// address: 0x800A5E08
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x80116724
extern unsigned long *STR_Buffer;

// address: 0x80116728
extern char NoActiveStreams;

// address: 0x8011672C
static bool STRInit;

// address: 0x8011676C
extern char SFXNotPlayed;

// address: 0x8011676D
extern char SFXNotInBank;

// address: 0x80118088
// size: 0x108
static char spu_management[264];

// address: 0x80118198
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x80117ACC
static unsigned short NoSfx;

// address: 0x80116758
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x8011675C
static long OffsetHandle;

// address: 0x80116760
static int BankBase;

// address: 0x80116764
static unsigned char SPU_Done;

// address: 0x8010CC00
// size: 0xB0
static int SFXRemapTab[44];

// address: 0x80116768
static int NoSNDRemaps;

// address: 0x800A5E48
// size: 0x18C
extern struct PalCollection ThePals;

// address: 0x8010CCE4
// size: 0x40
static struct InitPos InitialPositions[16];

// address: 0x801167B4
extern int demo_level;

// address: 0x801167B8
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x801167BC
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x801167C0
// size: 0x5C
extern struct TASK *tonys;

// address: 0x80116798
extern int demo_load;

// address: 0x8011679C
extern int demo_record_load;

// address: 0x801167A0
extern int level_record;

// address: 0x80116794
extern int moo_moo;

// address: 0x801167A4
extern unsigned char demo_flash;

// address: 0x801167A8
extern int tonys_Task;

// address: 0x8011691C
extern bool DoShowPanel;

// address: 0x80116920
extern bool DoDrawBg;

// address: 0x80117AD0
static bool GlueFinished;

// address: 0x80117AD4
static bool DoHomingScroll;

// address: 0x80117AD8
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x80117ADC
static int CurrentMonsterList;

// address: 0x801167CD
extern char started_grtask;

// address: 0x800A5FD4
// size: 0x288
extern struct PInf PlayerInfo[81];

// address: 0x80116924
// size: 0x4
static char ArmourChar[4];

// address: 0x8010CDC8
// size: 0xA
static char WepChar[10];

// address: 0x80116928
// size: 0x4
static char CharChar[4];

// address: 0x80117AE0
static char ctrl_select_line;

// address: 0x80117AE1
static char ctrl_select_side;

// address: 0x80117AE2
static char ckeyheld;

// address: 0x80117AE4
static int old_options_pad;

// address: 0x80117AE8
// size: 0x8
static struct RECT CtrlRect;

// address: 0x8011693C
extern unsigned char ctrlflag;

// address: 0x800A6304
// size: 0x140
extern struct KEY_ASSIGNS txt_actions[20];

// address: 0x800A625C
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x80116938
extern int CtrlBorder;

// address: 0x801181B0
// size: 0x78
static struct CScreen CtrlScreen;

// address: 0x80118230
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800A6444
// size: 0xA0
static int controller_defaults[2][20];

// address: 0x801169A0
extern int gr_scrxoff;

// address: 0x801169A4
extern int gr_scryoff;

// address: 0x801169AC
extern unsigned short water_clut;

// address: 0x801169B0
extern char visible_level;

// address: 0x8011699D
extern char last_type;

// address: 0x801169B2
extern char daylight;

// address: 0x801169AE
extern char cow_in_sight;

// address: 0x801169AF
extern char inn_in_sight;

// address: 0x801169A8
extern unsigned int water_count;

// address: 0x801169B1
extern unsigned char lastrnd;

// address: 0x801169B4
static int call_clock;

// address: 0x801169C4
extern int TitleAnimCount;

// address: 0x8010CE90
// size: 0x37
static unsigned char light_tile[55];

// address: 0x80116A28
extern int p1scrnx;

// address: 0x80116A2C
extern int p1scrny;

// address: 0x80116A30
extern int p1wrldx;

// address: 0x80116A34
extern int p1wrldy;

// address: 0x80116A38
extern int p2scrnx;

// address: 0x80116A3C
extern int p2scrny;

// address: 0x80116A40
extern int p2wrldx;

// address: 0x80116A44
extern int p2wrldy;

// address: 0x80117AF0
static int p1spiny1;

// address: 0x80117AF4
static int p1spiny2;

// address: 0x80117AF8
static int p1scale;

// address: 0x80117AFC
static int p1apocaflag;

// address: 0x80117B00
static int p1apocaxpos;

// address: 0x80117B04
static int p1apocaypos;

// address: 0x80117B08
static int p2spiny1;

// address: 0x80117B0C
static int p2spiny2;

// address: 0x80117B10
static int p2scale;

// address: 0x80117B14
static int p2apocaflag;

// address: 0x80117B18
static int p2apocaxpos;

// address: 0x80117B1C
static int p2apocaypos;

// address: 0x80118240
// size: 0x240
static struct Particle PartArray[16];

// address: 0x80117B20
static int partOtPos;

// address: 0x801169E0
extern int p1teleflag;

// address: 0x801169E4
extern int p1phaseflag;

// address: 0x801169E8
extern int p1inviscount;

// address: 0x801169EC
extern int p2teleflag;

// address: 0x801169F0
extern int p2phaseflag;

// address: 0x801169F4
extern int p2inviscount;

// address: 0x801169F8
extern int SetParticle;

// address: 0x801169FC
static int p1partexecnum;

// address: 0x80116A00
static int p2partexecnum;

// address: 0x800A64E4
// size: 0x20
static int JumpArray[8];

// address: 0x80116A04
static int partjumpflag;

// address: 0x80116A08
static int partglowflag;

// address: 0x80116A0C
static int partcolour;

// address: 0x80116A10
static int healflag;

// address: 0x80116A14
static int healtime;

// address: 0x80116A18
static int healplyr;

// address: 0x80116A81
extern unsigned char select_flag;

// address: 0x80117B24
// size: 0x8
static struct RECT SelectRect;

// address: 0x80117B2C
static char item_select;

// address: 0x800A6504
// size: 0xC
extern short _psplxpos[3][2];

// address: 0x800A6510
// size: 0xC
extern short _psplypos[3][2];

// address: 0x80116A84
// size: 0x2
extern char _psplpos[2];

// address: 0x80116A88
// size: 0x2
extern char spl_maxrad[2];

// address: 0x80116A8C
// size: 0x8
extern int splangle[2];

// address: 0x80116A54
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x80116A58
// size: 0x2
extern unsigned char _pSplTargetX[2];

// address: 0x80116A5C
// size: 0x2
extern unsigned char _pSplTargetY[2];

// address: 0x80116A60
// size: 0x2
extern unsigned char _pTargetSpell[2];

// address: 0x80118480
// size: 0x10
static struct Dialog SelectBack;

// address: 0x80116A64
// size: 0x8
static int _pspotid[2];

// address: 0x80116A6C
// size: 0x8
extern int QSpell[2];

// address: 0x80116A74
// size: 0x2
extern char _spltotype[2];

// address: 0x80116A78
// size: 0x4
extern char mana_order[4];

// address: 0x80116A7C
// size: 0x4
extern char health_order[4];

// address: 0x80116A80
extern unsigned char birdcheck;

// address: 0x80118490
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x80117B30
static unsigned short progress;

// address: 0x8010CF8C
// size: 0x28
static unsigned short Level2CutScreen[20];

// address: 0x80116AAC
static char *CutString;

// address: 0x801184B8
// size: 0x78
static struct CScreen Scr;

// address: 0x80116AB0
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x80116AB4
static bool GameLoading;

// address: 0x80118538
// size: 0x10
static struct Dialog LBack;

// address: 0x80116AC4
extern unsigned int card_ev0;

// address: 0x80116AC8
extern unsigned int card_ev1;

// address: 0x80116ACC
extern unsigned int card_ev2;

// address: 0x80116AD0
extern unsigned int card_ev3;

// address: 0x80116AD4
extern unsigned int card_ev10;

// address: 0x80116AD8
extern unsigned int card_ev11;

// address: 0x80116ADC
extern unsigned int card_ev12;

// address: 0x80116AE0
extern unsigned int card_ev13;

// address: 0x80116AE4
// size: 0x8
extern int card_dirty[2];

// address: 0x80116AEC
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x80116AF0
extern int card_event;

// address: 0x80116AC0
extern void (*mem_card_event_handler)();

// address: 0x80116AB8
extern bool MemCardActive;

// address: 0x80116ABC
extern int never_hooked_events;

// address: 0x80117B34
static unsigned long MasterVol;

// address: 0x80117B38
static unsigned long MusicVol;

// address: 0x80117B3C
static unsigned long SoundVol;

// address: 0x80117B40
static unsigned long VideoVol;

// address: 0x80117B44
static unsigned long SpeechVol;

// address: 0x80117B48
// size: 0x6C
static struct TextDat *Slider;

// address: 0x80117B4C
static int sw;

// address: 0x80117B50
static int sx;

// address: 0x80117B54
static int sy;

// address: 0x80117B58
static unsigned char Adjust;

// address: 0x80117B59
static unsigned char qspin;

// address: 0x80117B5A
static unsigned char lqspin;

// address: 0x80117B5C
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x80117B60
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x80117B64
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x80116B9C
extern int ReturnMenu;

// address: 0x80117B6C
// size: 0x8
static struct RECT ORect;

// address: 0x80116B18
extern bool optionsflag;

// address: 0x80116B0C
extern int cmenu;

// address: 0x80116B20
extern int options_pad;

// address: 0x80116B24
extern char *PrevTxt;

// address: 0x80116B14
extern bool allspellsflag;

// address: 0x800A6CF0
// size: 0x80
extern short Circle[64];

// address: 0x80116B00
static int Spacing;

// address: 0x80116B04
static int cs;

// address: 0x80116B08
static int lastcs;

// address: 0x80116B10
static bool MemcardOverlay;

// address: 0x80116B1C
extern int saveflag;

// address: 0x80117B74
// size: 0x8
static char *McState[2];

// address: 0x80116B28
extern char *BlankEntry;

// address: 0x800A651C
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800A65C4
// size: 0xC0
extern struct OMENUITEM GameMenu[8];

// address: 0x800A6684
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800A6714
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800A67BC
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800A6864
// size: 0x60
extern struct OMENUITEM MemcardMenu[4];

// address: 0x800A68C4
// size: 0x90
extern struct OMENUITEM MemcardGameMenu[6];

// address: 0x800A6954
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800A69B4
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800A6A5C
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800A6B04
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800A6B64
// size: 0xC0
extern struct OMENUITEM CheatMenu[8];

// address: 0x800A6C24
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800A6C54
// size: 0x9C
extern struct OMENULIST MenuList[13];

// address: 0x80116B80
static bool debounce;

// address: 0x80116B84
static bool pu;

// address: 0x80116B88
static bool pd;

// address: 0x80116B8C
static bool pl;

// address: 0x80116B90
static bool pr;

// address: 0x80116B94
static unsigned char uc;

// address: 0x80116B95
static unsigned char dc;

// address: 0x80116B96
static unsigned char lc;

// address: 0x80116B97
static unsigned char rc;

// address: 0x80116B98
static char centrestep;

// address: 0x800A6D70
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x80116BA9
extern char hop_height;

// address: 0x80116BAC
// size: 0x8
static struct Perch perches[4];

// address: 0x800A6EF0
// size: 0xE0
extern struct StrInfo FmvTab[7];

// address: 0x80116BE8
extern int FeBackX;

// address: 0x80116BEC
extern int FeBackY;

// address: 0x80116BF0
extern int FeBackW;

// address: 0x80116BF4
extern int FeBackH;

// address: 0x80116BF8
extern unsigned char FeFlag;

// address: 0x800A7770
// size: 0x3C0
extern struct FeStruct FeBuffer[40];

// address: 0x80117B7C
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x80116BFC
extern int FeBufferCount;

// address: 0x80116C00
extern int FeNoOfPlayers;

// address: 0x80116C04
extern int FePlayerNo;

// address: 0x80116C08
// size: 0x8
extern int FeChrClass[2];

// address: 0x800A7B30
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x80116C10
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x80116C14
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x80116C18
extern unsigned long FeCount;

// address: 0x80116C1C
extern int fileselect;

// address: 0x80116C20
extern int BookMenu;

// address: 0x80116C24
extern int FeAttractMode;

// address: 0x80116C28
extern int FMVPress;

// address: 0x80116BC0
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x80116BC4
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x80116BC8
extern unsigned char FeIsAVirgin;

// address: 0x80116BCC
extern int FeMenuDelay;

// address: 0x800A6FD0
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800A6FEC
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800A7008
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800A7024
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800A7040
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800A705C
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800A7078
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800A7094
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800A70B0
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800A70CC
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800A70E8
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800A7104
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800A7120
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800A713C
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x80116BD0
extern char *LoadErrorText;

// address: 0x800A7158
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800A71D0
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800A7218
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800A7290
// size: 0x2E8
extern struct FeMenuTable FeNameEngMenuTable[31];

// address: 0x800A7578
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800A75C0
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800A7620
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800A7680
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800A76F8
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x80116BDC
extern unsigned long AttractTitleDelay;

// address: 0x80116BE0
extern unsigned long AttractMainDelay;

// address: 0x80116BE4
extern int FMVEndPad;

// address: 0x80116C5C
extern int InCredits;

// address: 0x80116C60
extern int CreditTitleNo;

// address: 0x80116C64
extern int CreditSubTitleNo;

// address: 0x80116C78
// size: 0x8
extern int card_status[2];

// address: 0x80116C80
// size: 0x8
extern int card_usable[2];

// address: 0x80116C88
// size: 0x8
extern int card_files[2];

// address: 0x80116C90
// size: 0x8
extern int card_changed[2];

// address: 0x80116D08
extern char *AlertTxt;

// address: 0x80116D0C
extern int current_card;

// address: 0x80116D10
extern int LoadType;

// address: 0x80116D14
extern int McMenuPos;

// address: 0x80116D18
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x80116CC4
extern char *OText3;

// address: 0x80116D04
extern bool fileinfoflag;

// address: 0x80116CE0
extern char *DiabloGameFile;

// address: 0x80116CA8
extern char *Text3;

// address: 0x80116CC0
extern char *OText2;

// address: 0x80116CC8
extern char *OText4;

// address: 0x80116CCC
extern char *OText5;

// address: 0x80116CD0
extern char *OText7;

// address: 0x80116CD4
extern char *OText8;

// address: 0x80116CD8
extern char *SaveError;

// address: 0x80116CA4
extern char *Text1;

// address: 0x80116CAC
extern char *Text5;

// address: 0x80116CB0
extern char *Text6;

// address: 0x80116CB4
extern char *Text7;

// address: 0x80116CB8
extern char *Text8;

// address: 0x80116CBC
extern char *Text9;

// address: 0x80116CDC
extern char *ContText;

// address: 0x80116CFC
// size: 0x8
extern char *McState_addr_80116CFC[2];

// address: 0x80117B80
static int t1;

// address: 0x80117B84
static int t2;

// address: 0x80118548
// size: 0xB8
static struct DRAWENV draw[2];

// address: 0x80118608
// size: 0x74
static struct DecEnv dec;

// address: 0x80117B88
static unsigned long oldHeapbase;

// address: 0x80117B8C
// size: 0x4
static struct SndVolume oldVolume;

// address: 0x80117B90
static char *ringName;

// address: 0x80116D48
// size: 0x14
extern struct STRHDR *ringSH;

// address: 0x80116D4C
// size: 0x98
extern struct cdstreamstruct *FMVStream;

// address: 0x80117B94
static unsigned short *DCTTab;

// address: 0x80116D26
static short firstFrame;

// address: 0x80116D28
static short numSkipped;

// address: 0x80116D2A
static short prevFrameNum;

// address: 0x80116D2C
static unsigned short maxRunLevel;

// address: 0x80116D30
static unsigned long *ringBuf;

// address: 0x80116D34
static int ringcount;

// address: 0x80116D38
static int ringpos;

// address: 0x80116D3C
static int ringsec;

// address: 0x80116D40
static int ringHnd;

// address: 0x80116D44
static bool SecGot;

// address: 0x80116DEC
extern unsigned char *pStatusPanel;

// address: 0x80116DF0
extern unsigned char *pGBoxBuff;

// address: 0x80116DF4
extern unsigned char dropGoldFlag;

// address: 0x80116DF8
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800A8128
// size: 0x200
extern char _infostr[256][2];

// address: 0x80116DFC
// size: 0x2
extern char _infoclr[2];

// address: 0x800A8328
// size: 0x100
extern char tempstr[256];

// address: 0x80116DFE
extern unsigned char drawhpflag;

// address: 0x80116DFF
extern unsigned char drawmanaflag;

// address: 0x80116E00
extern unsigned char chrflag;

// address: 0x80116E01
extern unsigned char drawbtnflag;

// address: 0x80116E02
extern unsigned char panbtndown;

// address: 0x80116E03
extern unsigned char panelflag;

// address: 0x80116E04
extern unsigned char chrbtndown;

// address: 0x80116E05
extern unsigned char lvlbtndown;

// address: 0x80116E06
extern unsigned char sbookflag;

// address: 0x80116E07
extern unsigned char talkflag;

// address: 0x80116E08
extern int dropGoldValue;

// address: 0x80116E0C
extern int initialDropGoldValue;

// address: 0x80116E10
extern int initialDropGoldIndex;

// address: 0x80116E14
extern unsigned char *pPanelButtons;

// address: 0x80116E18
extern unsigned char *pPanelText;

// address: 0x80116E1C
extern unsigned char *pManaBuff;

// address: 0x80116E20
extern unsigned char *pLifeBuff;

// address: 0x80116E24
extern unsigned char *pChrPanel;

// address: 0x80116E28
extern unsigned char *pChrButtons;

// address: 0x80116E2C
extern unsigned char *pSpellCels;

// address: 0x80118680
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x80118A80
// size: 0x40
static int _pstrjust[8][2];

// address: 0x80117B98
// size: 0x8
static int _pnumlines[2];

// address: 0x80116E30
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x80116E34
// size: 0x8
extern struct RECT CSRect;

// address: 0x80117BA8
// size: 0x8
static int _pSpell[2];

// address: 0x80117BB0
// size: 0x8
static int _pSplType[2];

// address: 0x80117BB8
// size: 0x8
static unsigned char panbtn[8];

// address: 0x80116E3C
extern int numpanbtns;

// address: 0x80116E40
extern unsigned char *pDurIcons;

// address: 0x80116E44
extern unsigned char drawdurflag;

// address: 0x80117BC0
// size: 0x4
static unsigned char chrbtn[4];

// address: 0x80116E45
extern unsigned char chrbtnactive;

// address: 0x80116E48
extern unsigned char *pSpellBkCel;

// address: 0x80116E4C
extern unsigned char *pSBkBtnCel;

// address: 0x80116E50
extern unsigned char *pSBkIconCels;

// address: 0x80116E54
extern int sbooktab;

// address: 0x80116E58
extern int cur_spel;

// address: 0x80117BC4
static long talkofs;

// address: 0x80118AD0
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x80117BC8
static unsigned char sgbTalkSavePos;

// address: 0x80117BC9
static unsigned char sgbNextTalkSave;

// address: 0x80117BCA
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x80117BCC
static unsigned char *pTalkPanel;

// address: 0x80117BD0
static unsigned char *pMultiBtns;

// address: 0x80117BD4
static unsigned char *pTalkBtns;

// address: 0x80117BD8
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x8010D5A0
// size: 0x100
extern unsigned char gbFontTransTbl[256];

// address: 0x8010D4E0
// size: 0x44
extern unsigned char fontkern[68];

// address: 0x800A7B5C
// size: 0x25
extern char SpellITbl[37];

// address: 0x80116D59
extern unsigned char DrawLevelUpFlag;

// address: 0x80116D80
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x80116D7C
extern unsigned char spspelstate;

// address: 0x80116DBC
extern bool initchr;

// address: 0x80116D5C
static int SPLICONNO;

// address: 0x80116D60
static int SPLICONY;

// address: 0x80117BA0
static int SPLICONRIGHT;

// address: 0x80116D64
static int scx;

// address: 0x80116D68
static int scy;

// address: 0x80116D6C
static int scx1;

// address: 0x80116D70
static int scy1;

// address: 0x80116D74
static int scx2;

// address: 0x80116D78
static int scy2;

// address: 0x80116D88
extern char SpellCol;

// address: 0x800A7B48
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800A7B84
// size: 0xA0
extern int PanBtnPos[5][8];

// address: 0x800A7C24
// size: 0x20
extern char *PanBtnHotKey[8];

// address: 0x800A7C44
// size: 0x20
extern unsigned long PanBtnStr[8];

// address: 0x800A7C64
// size: 0x64
extern int SpellPages[5][5];

// address: 0x80116DAC
static int lus;

// address: 0x80116DB0
static int CsNo;

// address: 0x80116DB4
static char plusanim;

// address: 0x80118AC0
// size: 0x10
static struct Dialog CSBack;

// address: 0x80116DB8
static int CS_XOFF;

// address: 0x800A7CC8
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x80116DC0
extern int NoCSEntries;

// address: 0x80116DC4
static int SPALOFF;

// address: 0x80116DC8
static int paloffset1;

// address: 0x80116DCC
static int paloffset2;

// address: 0x80116DD0
static int paloffset3;

// address: 0x80116DD4
static int paloffset4;

// address: 0x80116DD8
static int pinc1;

// address: 0x80116DDC
static int pinc2;

// address: 0x80116DE0
static int pinc3;

// address: 0x80116DE4
static int pinc4;

// address: 0x80116E6C
// size: 0x8
extern int _pcurs[2];

// address: 0x80116E74
extern int cursW;

// address: 0x80116E78
extern int cursH;

// address: 0x80116E7C
extern int icursW;

// address: 0x80116E80
extern int icursH;

// address: 0x80116E84
extern int icursW28;

// address: 0x80116E88
extern int icursH28;

// address: 0x80116E8C
extern int cursmx;

// address: 0x80116E90
extern int cursmy;

// address: 0x80116E94
// size: 0x8
extern int _pcursmonst[2];

// address: 0x80116E9C
// size: 0x2
extern char _pcursobj[2];

// address: 0x80116EA0
// size: 0x2
extern char _pcursitem[2];

// address: 0x80116EA4
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x80116EA8
// size: 0x2
extern char _pcursplr[2];

// address: 0x80116E68
extern int sel_data;

// address: 0x800A8428
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x80116EAC
extern int spurtndx;

// address: 0x80116EB0
extern int stonendx;

// address: 0x80116EB4
extern unsigned char *pSquareCel;

// address: 0x80116EF4
extern unsigned long ghInst;

// address: 0x80116EF8
extern unsigned char svgamode;

// address: 0x80116EFC
extern int MouseX;

// address: 0x80116F00
extern int MouseY;

// address: 0x80116F04
extern long gv1;

// address: 0x80116F08
extern long gv2;

// address: 0x80116F0C
extern long gv3;

// address: 0x80116F10
extern long gv4;

// address: 0x80116F14
extern long gv5;

// address: 0x80116F18
extern unsigned char gbProcessPlayers;

// address: 0x800A859C
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800A85C4
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800A8608
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x80116F19
extern unsigned char gbDoEnding;

// address: 0x80116F1A
extern unsigned char gbRunGame;

// address: 0x80116F1B
extern unsigned char gbRunGameResult;

// address: 0x80116F1C
extern unsigned char gbGameLoopStartup;

// address: 0x80118B20
// size: 0x44
static int glEndSeed[17];

// address: 0x80118B70
// size: 0x44
static int glMid1Seed[17];

// address: 0x80118BC0
// size: 0x44
static int glMid2Seed[17];

// address: 0x80118C10
// size: 0x44
static int glMid3Seed[17];

// address: 0x80117BDC
static long *sg_previousFilter;

// address: 0x800A864C
// size: 0x30
extern int CreateEnv[12];

// address: 0x80116F20
extern int Passedlvldir;

// address: 0x80116F24
extern unsigned char *TempStack;

// address: 0x80116EC4
extern unsigned long ghMainWnd;

// address: 0x80116EC8
extern unsigned char fullscreen;

// address: 0x80116ECC
extern int force_redraw;

// address: 0x80116EE0
extern unsigned char PauseMode;

// address: 0x80116EE1
extern unsigned char FriendlyMode;

// address: 0x80116ED1
extern unsigned char visiondebug;

// address: 0x80116ED3
extern unsigned char light4flag;

// address: 0x80116ED4
extern unsigned char leveldebug;

// address: 0x80116ED5
extern unsigned char monstdebug;

// address: 0x80116EDC
extern int debugmonsttypes;

// address: 0x80116ED0
static unsigned char cineflag;

// address: 0x80116ED2
extern unsigned char scrollflag;

// address: 0x80116ED6
extern unsigned char trigdebug;

// address: 0x80116ED8
extern int setseed;

// address: 0x80116EE4
static int sgnTimeoutCurs;

// address: 0x80116EE8
extern unsigned char sgbMouseDown;

// address: 0x800A8D18
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x80116F3C
extern int numtowners;

// address: 0x80116F40
extern unsigned char storeflag;

// address: 0x80116F41
extern unsigned char boyloadflag;

// address: 0x80116F42
extern unsigned char bannerflag;

// address: 0x80116F44
extern unsigned char *pCowCels;

// address: 0x80117BE0
static unsigned long sgdwCowClicks;

// address: 0x80117BE4
static int sgnCowMsg;

// address: 0x800A8A58
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x80116F34
extern unsigned long CowPlaying;

// address: 0x800A867C
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800A89F4
// size: 0xC
extern int TownCowX[3];

// address: 0x800A8A00
// size: 0xC
extern int TownCowY[3];

// address: 0x800A8A0C
// size: 0xC
extern int TownCowDir[3];

// address: 0x800A8A18
// size: 0x20
extern int cowoffx[8];

// address: 0x800A8A38
// size: 0x20
extern int cowoffy[8];

// address: 0x80116F5C
extern int sfxdelay;

// address: 0x80116F60
extern int sfxdnum;

// address: 0x80116F54
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800A9B18
// size: 0xF4C
extern struct TSFX sgSFX[979];

// address: 0x80116F58
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x80116F64
extern long orgseed;

// address: 0x80117BE8
static long sglGameSeed;

// address: 0x80116F68
extern int SeedCount;

// address: 0x80117BEC
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x80117BF0
static int sgnWidth;

// address: 0x80116F76
extern char msgflag;

// address: 0x80116F77
extern char msgdelay;

// address: 0x800AAB14
// size: 0x50
extern char msgtable[80];

// address: 0x800AAA64
// size: 0xB0
extern int MsgStrings[44];

// address: 0x80116F75
extern char msgcnt;

// address: 0x80117BF4
static unsigned long sgdwProgress;

// address: 0x80117BF8
static unsigned long sgdwXY;

// address: 0x800AAB64
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x8010D9BC
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x8010ED5C
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x8010FA7C
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x8011097C
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800AAD78
// size: 0x4A00
extern struct ItemStruct item[128];

// address: 0x800AF778
// size: 0x7F
extern char itemactive[127];

// address: 0x800AF7F8
// size: 0x7F
extern char itemavail[127];

// address: 0x800AF878
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x80116FB8
extern unsigned char uitemflag;

// address: 0x80117BFC
static int tem;

// address: 0x80118C58
// size: 0x94
static struct ItemStruct curruitem;

// address: 0x80118CF8
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x80116FBC
extern int ScrollType;

// address: 0x800AF8F8
// size: 0x80
extern char ItemStr[128];

// address: 0x80116F90
extern long numitems;

// address: 0x80116F94
extern int gnNumGetRecords;

// address: 0x800AACD4
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800AAC04
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x801127C0
// size: 0x46
static short Item2Frm[35];

// address: 0x800AACB0
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x80116F98
extern int *ItemAnimSnds;

// address: 0x80116F9C
extern int idoppely;

// address: 0x80116FA0
extern int ScrollFlag;

// address: 0x800AAD60
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800B0724
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800B0864
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x80116FD0
extern int numlights;

// address: 0x80116FD4
extern char lightmax;

// address: 0x800B088C
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x80116FD8
extern int numvision;

// address: 0x80116FDC
extern unsigned char dovision;

// address: 0x80116FE0
extern int visionid;

// address: 0x80117C00
static int disp_mask;

// address: 0x80117C04
static int weird;

// address: 0x80117C08
static int disp_tab_r;

// address: 0x80117C0C
static int dispy_r;

// address: 0x80117C10
static int disp_tab_g;

// address: 0x80117C14
static int dispy_g;

// address: 0x80117C18
static int disp_tab_b;

// address: 0x80117C1C
static int dispy_b;

// address: 0x80117C20
static int radius;

// address: 0x80117C24
static int bright;

// address: 0x80118D08
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x80116FC0
extern int lightflag;

// address: 0x800B0438
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800B06EC
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800AF978
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x80116FC4
extern int restore_r;

// address: 0x80116FC8
extern int restore_g;

// address: 0x80116FCC
extern int restore_b;

// address: 0x800B0704
// size: 0x10
extern char radius_tab[16];

// address: 0x800B0714
// size: 0x10
extern char bright_tab[16];

// address: 0x80117002
extern unsigned char qtextflag;

// address: 0x80117004
extern int qtextSpd;

// address: 0x80117C28
static unsigned char *pMedTextCels;

// address: 0x80117C2C
static unsigned char *pTextBoxCels;

// address: 0x80117C30
static char *qtextptr;

// address: 0x80117C34
static int qtexty;

// address: 0x80117C38
static unsigned long qtextDelay;

// address: 0x80117C3C
static unsigned long sgLastScroll;

// address: 0x80117C40
static unsigned long scrolltexty;

// address: 0x80117C44
static long sglMusicVolumeSave;

// address: 0x80116FF0
static bool qtbodge;

// address: 0x800B0A4C
// size: 0x10
extern struct Dialog QBack;

// address: 0x80117001
static unsigned char CDFlip;

// address: 0x800B0A5C
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800B11CC
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800B10BC
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800B12B8
// size: 0x17248
extern struct DLevel sgLevels[17];

// address: 0x800C8500
// size: 0xD48
extern struct LocalLevel sgLocals[17];

// address: 0x80118D88
// size: 0x20
static struct DJunk sgJunk;

// address: 0x80117C49
static unsigned char sgbRecvCmd;

// address: 0x80117C4C
static unsigned long sgdwRecvOffset;

// address: 0x80117C50
static unsigned char sgbDeltaChunks;

// address: 0x80117C51
static unsigned char sgbDeltaChanged;

// address: 0x80117C54
static unsigned long sgdwOwnerWait;

// address: 0x80117C58
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x80117C5C
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x80117C60
static int sgnCurrMegaPlayer;

// address: 0x8011701D
extern unsigned char deltaload;

// address: 0x8011701E
extern unsigned char gbBufferMsgs;

// address: 0x80117020
extern unsigned long dwRecCount;

// address: 0x80117036
extern unsigned char gbMaxPlayers;

// address: 0x80117037
extern unsigned char gbActivePlayers;

// address: 0x80117038
extern unsigned char gbGameDestroyed;

// address: 0x80117039
extern unsigned char gbDeltaSender;

// address: 0x8011703A
extern unsigned char gbSelectProvider;

// address: 0x8011703B
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x80117C64
static unsigned char sgbSentThisCycle;

// address: 0x80117C68
static unsigned long sgdwGameLoops;

// address: 0x80117C6C
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x80117C70
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x80117C74
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x80117C7C
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x80117C84
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x80117C8C
static unsigned char sgbTimeout;

// address: 0x80117C90
static long sglTimeoutStart;

// address: 0x80117030
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x80117035
static unsigned char sgbNetInited;

// address: 0x800C9248
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800C940C
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80112E88
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800C9BEC
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x8011705C
extern long numobjects;

// address: 0x800CB1C0
// size: 0x7F
extern char objectactive[127];

// address: 0x800CB240
// size: 0x7F
extern char objectavail[127];

// address: 0x80117060
extern unsigned char InitObjFlag;

// address: 0x80117064
extern int trapid;

// address: 0x800CB2C0
// size: 0x28
extern char ObjFileList[40];

// address: 0x80117068
extern int trapdir;

// address: 0x8011706C
extern int leverid;

// address: 0x80117054
extern int numobjfiles;

// address: 0x800C9B04
// size: 0x20
extern int bxadd[8];

// address: 0x800C9B24
// size: 0x20
extern int byadd[8];

// address: 0x800C9BAC
// size: 0x1A
extern char shrineavail[26];

// address: 0x800C9B44
// size: 0x68
extern int shrinestrs[26];

// address: 0x800C9BC8
// size: 0x24
extern int StoryBookName[9];

// address: 0x80117058
extern int myscale;

// address: 0x80117080
extern unsigned char gbValidSaveFile;

// address: 0x8011707C
extern bool DoLoadedChar;

// address: 0x800CB4E0
// size: 0x45A0
extern struct PlayerStruct plr[2];

// address: 0x801170A0
extern int myplr;

// address: 0x801170A4
extern int deathdelay;

// address: 0x801170A8
extern unsigned char deathflag;

// address: 0x801170A9
extern char light_rad;

// address: 0x80117098
// size: 0x5
extern char light_level[5];

// address: 0x800CB3D8
// size: 0x30
extern int MaxStats[4][3];

// address: 0x80117090
static int PlrStructSize;

// address: 0x80117094
static int ItemStructSize;

// address: 0x800CB2E8
// size: 0x24
extern int plrxoff[9];

// address: 0x800CB30C
// size: 0x24
extern int plryoff[9];

// address: 0x800CB330
// size: 0x24
extern int plrxoff2[9];

// address: 0x800CB354
// size: 0x24
extern int plryoff2[9];

// address: 0x800CB378
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800CB39C
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800CB3A8
// size: 0xC
extern int MagicTbl[3];

// address: 0x800CB3B4
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800CB3C0
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800CB3CC
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800CB408
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800CFBB8
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x801170E4
extern unsigned char *pQLogCel;

// address: 0x801170E8
extern int ReturnLvlX;

// address: 0x801170EC
extern int ReturnLvlY;

// address: 0x801170F0
extern int ReturnLvl;

// address: 0x801170F4
extern int ReturnLvlT;

// address: 0x801170F8
extern int qfade;

// address: 0x801170FC
extern unsigned char rporttest;

// address: 0x80117100
extern int qline;

// address: 0x80117104
extern int numqlines;

// address: 0x80117108
extern int qtopline;

// address: 0x80118DA8
// size: 0x40
static int qlist[16];

// address: 0x80117C94
// size: 0x8
static struct RECT QSRect;

// address: 0x801170B5
extern unsigned char questlog;

// address: 0x800CFA80
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x801170B8
extern int ALLQUESTS;

// address: 0x800CFB94
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800CFBA0
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800CFBAC
// size: 0xC
extern int QuestGroup3[3];

// address: 0x801170CC
// size: 0x8
extern int QuestGroup4[2];

// address: 0x801170BC
// size: 0x7
static char questxoff[7];

// address: 0x801170C4
// size: 0x7
static char questyoff[7];

// address: 0x800CFB80
// size: 0x14
extern int questtrigstr[5];

// address: 0x801170D4
static int QS_PX;

// address: 0x801170D8
static int QS_PY;

// address: 0x801170DC
static int QS_PW;

// address: 0x801170E0
static int QS_PH;

// address: 0x80118DE8
// size: 0x10
static struct Dialog QSBack;

// address: 0x800CFCF8
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x80117147
extern char stextflag;

// address: 0x800D0550
// size: 0xB90
extern struct ItemStruct smithitem[20];

// address: 0x800D10E0
// size: 0x378
extern struct ItemStruct premiumitem[6];

// address: 0x80117148
extern int numpremium;

// address: 0x8011714C
extern int premiumlevel;

// address: 0x800D1458
// size: 0xB90
extern struct ItemStruct witchitem[20];

// address: 0x800D1FE8
// size: 0x94
extern struct ItemStruct boyitem;

// address: 0x80117150
extern int boylevel;

// address: 0x800D207C
// size: 0x94
extern struct ItemStruct golditem;

// address: 0x800D2110
// size: 0xB90
extern struct ItemStruct healitem[20];

// address: 0x80117154
extern char stextsize;

// address: 0x80117155
extern unsigned char stextscrl;

// address: 0x80117C9C
static int stextsel;

// address: 0x80117CA0
static int stextlhold;

// address: 0x80117CA4
static int stextshold;

// address: 0x80117CA8
static int stextvhold;

// address: 0x80117CAC
static int stextsval;

// address: 0x80117CB0
static int stextsmax;

// address: 0x80117CB4
static int stextup;

// address: 0x80117CB8
static int stextdown;

// address: 0x80117CBC
static char stextscrlubtn;

// address: 0x80117CBD
static char stextscrldbtn;

// address: 0x80117CBE
static char SItemListFlag;

// address: 0x80118DF8
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800D2CA0
// size: 0x1BC0
extern struct ItemStruct storehold[48];

// address: 0x800D4860
// size: 0x30
extern char storehidx[48];

// address: 0x80117CC0
static int storenumh;

// address: 0x80117CC4
static int gossipstart;

// address: 0x80117CC8
static int gossipend;

// address: 0x80117CCC
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x80117CD4
static int talker;

// address: 0x80117130
extern unsigned char *pSTextBoxCels;

// address: 0x80117134
extern unsigned char *pSTextSlidCels;

// address: 0x80117138
extern int *SStringY;

// address: 0x800D047C
// size: 0x10
extern struct Dialog SBack;

// address: 0x800D048C
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800D04DC
// size: 0x50
extern int SStringYBuy[20];

// address: 0x800D052C
// size: 0x24
extern int talkname[9];

// address: 0x80117146
extern unsigned char InStoreFlag;

// address: 0x80113F10
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x80117164
extern unsigned long gdwAllTextEntries;

// address: 0x80117CD8
static unsigned char *P3Tiles;

// address: 0x80117174
extern int tile;

// address: 0x80117184
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800D4AC8
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x80117188
extern int numtrigs;

// address: 0x8011718C
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x80117190
extern int TWarpFrom;

// address: 0x800D4890
// size: 0x2C
extern int TownDownList[11];

// address: 0x800D48BC
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800D48F0
// size: 0x30
extern int L1UpList[12];

// address: 0x800D4920
// size: 0x28
extern int L1DownList[10];

// address: 0x800D4948
// size: 0xC
extern int L2UpList[3];

// address: 0x800D4954
// size: 0x14
extern int L2DownList[5];

// address: 0x800D4968
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800D4974
// size: 0x3C
extern int L3UpList[15];

// address: 0x800D49B0
// size: 0x24
extern int L3DownList[9];

// address: 0x800D49D4
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800D4A0C
// size: 0x10
extern int L4UpList[4];

// address: 0x800D4A1C
// size: 0x18
extern int L4DownList[6];

// address: 0x800D4A34
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800D4A44
// size: 0x84
extern int L4PentaList[33];

// address: 0x80114CA0
// size: 0xA
static char cursoff[10];

// address: 0x801171AA
extern unsigned char gbMusicOn;

// address: 0x801171AB
extern unsigned char gbSoundOn;

// address: 0x801171A9
extern unsigned char gbSndInited;

// address: 0x801171B0
extern long sglMasterVolume;

// address: 0x801171B4
extern long sglMusicVolume;

// address: 0x801171B8
extern long sglSoundVolume;

// address: 0x801171BC
extern long sglSpeechVolume;

// address: 0x801171AC
extern unsigned char gbDupSounds;

// address: 0x801171C0
static int sgnMusicTrack;

// address: 0x801171C4
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x80114D3C
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x801171E8
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800D4B18
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x801171F0
// size: 0x2
extern char _pfind_index[2];

// address: 0x801171F4
// size: 0x2
extern char _pfindx[2];

// address: 0x801171F8
// size: 0x2
extern char _pfindy[2];

// address: 0x801171FA
extern unsigned char automapmoved;

// address: 0x801171DC
extern unsigned char flyflag;

// address: 0x801171D4
// size: 0x8
extern char (*pad_styles[2])();

// address: 0x801171DD
extern char speed_type;

// address: 0x801171DE
extern char sel_speed;

// address: 0x80117CDC
static unsigned long (*CurrentProc)();

// address: 0x80114EB8
// size: 0x50
static struct MESSAGE_STR AllMsgs[10];

// address: 0x80117228
extern int NumOfStrings;

// address: 0x801171FC
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x80117200
extern long hndText;

// address: 0x80117204
extern char **TextPtr;

// address: 0x80117208
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x80117238
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x8011723C
extern int CharFade;

// address: 0x80117240
extern int rotateness;

// address: 0x80117244
extern int spiralling_shape;

// address: 0x80117248
extern int down;

// address: 0x800D4B68
// size: 0x10
extern char MlTab[16];

// address: 0x800D4B78
// size: 0x10
extern char QlTab[16];

// address: 0x800D4B88
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x80117264
extern int MyXoff1;

// address: 0x80117268
extern int MyYoff1;

// address: 0x8011726C
extern int MyXoff2;

// address: 0x80117270
extern int MyYoff2;

// address: 0x80117280
extern bool iscflag;

// address: 0x8011728D
static unsigned char sgbFadedIn;

// address: 0x8011728E
static unsigned char screenbright;

// address: 0x80117290
static int faderate;

// address: 0x80117294
static bool fading;

// address: 0x801172B0
// size: 0x8
static unsigned char AmShiftTab[8];

// address: 0x80117CE0
static unsigned char *tbuff;

// address: 0x80117CE4
static unsigned char HR1;

// address: 0x80117CE5
static unsigned char HR2;

// address: 0x80117CE6
static unsigned char HR3;

// address: 0x80117CE7
static unsigned char VR1;

// address: 0x80117CE8
static unsigned char VR2;

// address: 0x80117CE9
static unsigned char VR3;

// address: 0x80117324
// size: 0x18
extern struct NODE *pHallList;

// address: 0x80117328
extern int nRoomCnt;

// address: 0x8011732C
extern int nSx1;

// address: 0x80117330
extern int nSy1;

// address: 0x80117334
extern int nSx2;

// address: 0x80117338
extern int nSy2;

// address: 0x801172DC
extern int Area_Min;

// address: 0x801172E0
extern int Room_Max;

// address: 0x801172E4
extern int Room_Min;

// address: 0x801172E8
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x801172F0
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x801172F8
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x80117300
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x80117308
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x8011730C
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x80117310
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x80117314
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x80117318
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x8011731C
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x80117320
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x80117CEC
static int abyssx;

// address: 0x80117CF0
static unsigned char lavapool;

// address: 0x801173C4
extern int lockoutcnt;

// address: 0x80117348
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x80117350
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x80117358
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x80117360
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x80117368
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x80117370
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x80117378
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x80117380
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x80117388
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x80117390
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x80117398
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x801173A0
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x801173A8
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x801173B0
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x801173B4
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x801173B8
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x801173BC
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x801173C0
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x801173C8
extern int diabquad1x;

// address: 0x801173CC
extern int diabquad2x;

// address: 0x801173D0
extern int diabquad3x;

// address: 0x801173D4
extern int diabquad4x;

// address: 0x801173D8
extern int diabquad1y;

// address: 0x801173DC
extern int diabquad2y;

// address: 0x801173E0
extern int diabquad3y;

// address: 0x801173E4
extern int diabquad4y;

// address: 0x801173E8
extern int SP4x1;

// address: 0x801173EC
extern int SP4y1;

// address: 0x801173F0
extern int SP4x2;

// address: 0x801173F4
extern int SP4y2;

// address: 0x801173F8
extern int l4holdx;

// address: 0x801173FC
extern int l4holdy;

// address: 0x8011740C
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x80117414
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800D4D10
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800D4D24
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800D4D40
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8011741C
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800D4D54
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x80117510
static bool DoUiForChooseMonster;

// address: 0x800D4D78
// size: 0x88
static char *MgToText[34];

// address: 0x800D4E00
// size: 0x24
extern int StoryText[3][3];

// address: 0x800D4E24
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800D6024
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800D6664
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x80117534
extern int setpc_x;

// address: 0x80117538
extern int setpc_y;

// address: 0x8011753C
extern int setpc_w;

// address: 0x80117540
extern int setpc_h;

// address: 0x80117544
extern unsigned char setloadflag;

// address: 0x80117548
extern unsigned char *pMegaTiles;

// address: 0x800D6CA4
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800D74A8
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800D7CAC
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800D84B0
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800D8CB4
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x8011754C
extern int dminx;

// address: 0x80117550
extern int dminy;

// address: 0x80117554
extern int dmaxx;

// address: 0x80117558
extern int dmaxy;

// address: 0x8011755C
extern int gnDifficulty;

// address: 0x80117560
extern unsigned char currlevel;

// address: 0x80117561
extern unsigned char leveltype;

// address: 0x80117562
extern unsigned char setlevel;

// address: 0x80117563
extern unsigned char setlvlnum;

// address: 0x80117564
extern unsigned char setlvltype;

// address: 0x80117568
extern int ViewX;

// address: 0x8011756C
extern int ViewY;

// address: 0x80117570
extern int ViewDX;

// address: 0x80117574
extern int ViewDY;

// address: 0x80117578
extern int ViewBX;

// address: 0x8011757C
extern int ViewBY;

// address: 0x800D94B8
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x80117580
extern int LvlViewX;

// address: 0x80117584
extern int LvlViewY;

// address: 0x80117588
extern int btmbx;

// address: 0x8011758C
extern int btmby;

// address: 0x80117590
extern int btmdx;

// address: 0x80117594
extern int btmdy;

// address: 0x80117598
extern int MicroTileLen;

// address: 0x8011759C
extern char TransVal;

// address: 0x800D94CC
// size: 0x20
extern bool TransList[8];

// address: 0x801175A0
extern int themeCount;

// address: 0x800D94EC
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x800FB7AC
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x800FC310
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x800FCE74
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x800FD9D8
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x8011752C
extern unsigned char *pSetPiece;

// address: 0x80117530
extern int DungSize;

// address: 0x800FDBA4
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x801175E0
extern int numthemes;

// address: 0x801175E4
extern int zharlib;

// address: 0x801175E8
extern unsigned char armorFlag;

// address: 0x801175E9
extern unsigned char bCrossFlag;

// address: 0x801175EA
extern unsigned char weaponFlag;

// address: 0x801175EC
extern int themex;

// address: 0x801175F0
extern int themey;

// address: 0x801175F4
extern int themeVar1;

// address: 0x801175F8
extern unsigned char bFountainFlag;

// address: 0x801175F9
extern unsigned char cauldronFlag;

// address: 0x801175FA
extern unsigned char mFountainFlag;

// address: 0x801175FB
extern unsigned char pFountainFlag;

// address: 0x801175FC
extern unsigned char tFountainFlag;

// address: 0x801175FD
extern unsigned char treasureFlag;

// address: 0x80117600
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x800FDA84
// size: 0x10
extern int ThemeGood[4];

// address: 0x800FDA94
// size: 0x64
extern int trm5x[25];

// address: 0x800FDAF8
// size: 0x64
extern int trm5y[25];

// address: 0x800FDB5C
// size: 0x24
extern int trm3x[9];

// address: 0x800FDB80
// size: 0x24
extern int trm3y[9];

// address: 0x801176B8
extern int nummissiles;

// address: 0x800FDDBC
// size: 0x1F4
extern int missileactive[125];

// address: 0x800FDFB0
// size: 0x1F4
extern int missileavail[125];

// address: 0x801176BC
extern unsigned char MissilePreFlag;

// address: 0x800FE1A4
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x801176BD
extern unsigned char ManashieldFlag;

// address: 0x801176BE
extern unsigned char ManashieldFlag2;

// address: 0x800FDD34
// size: 0x20
extern int XDirAdd[8];

// address: 0x800FDD54
// size: 0x20
extern int YDirAdd[8];

// address: 0x801176A5
extern unsigned char fadetor;

// address: 0x801176A6
extern unsigned char fadetog;

// address: 0x801176A7
extern unsigned char fadetob;

// address: 0x800FDD74
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x800FDD84
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x80100A54
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x8011771C
extern long nummonsters;

// address: 0x801061D4
// size: 0x190
extern short monstactive[200];

// address: 0x80106364
// size: 0x190
extern short monstkills[200];

// address: 0x801064F4
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x80117720
extern long monstimgtot;

// address: 0x80117724
extern char totalmonsters;

// address: 0x80117728
extern int uniquetrans;

// address: 0x80117CF4
static unsigned char sgbSaveSoundOn;

// address: 0x801176F0
// size: 0x8
extern char offset_x[8];

// address: 0x801176F8
// size: 0x8
extern char offset_y[8];

// address: 0x801176D8
// size: 0x8
extern char left[8];

// address: 0x801176E0
// size: 0x8
extern char right[8];

// address: 0x801176E8
// size: 0x8
extern char opposite[8];

// address: 0x801176CC
extern int nummtypes;

// address: 0x801176D0
// size: 0x7
extern char animletter[7];

// address: 0x801008B4
// size: 0x120
extern int MWVel[3][24];

// address: 0x80117700
// size: 0x4
extern char rnd5[4];

// address: 0x80117704
// size: 0x4
extern char rnd10[4];

// address: 0x80117708
// size: 0x4
extern char rnd20[4];

// address: 0x8011770C
// size: 0x4
extern char rnd60[4];

// address: 0x801009D4
// size: 0x80
extern void (*AiProc[32])();

// address: 0x801069CC
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x8010840C
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x8010848C
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x801084FC
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x801067B4
// size: 0x218
extern int TransPals[134];

// address: 0x801066B4
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x80108E4C
// size: 0x60
extern struct PortalStruct portal[4];

// address: 0x80117744
extern int portalindex;

// address: 0x80108E2C
// size: 0x10
extern int WarpDropX[4];

// address: 0x80108E3C
// size: 0x10
extern int WarpDropY[4];

// address: 0x80117764
extern unsigned char invflag;

// address: 0x80117765
extern unsigned char drawsbarflag;

// address: 0x80117768
extern int InvBackY;

// address: 0x8011776C
extern int InvCursPos;

// address: 0x8010952C
// size: 0x94
extern struct ItemStruct InvSpareSlot;

// address: 0x801095C0
// size: 0x4A
extern unsigned char InvSlotTable[74];

// address: 0x80117770
extern int InvBackAY;

// address: 0x80117774
extern int InvSel;

// address: 0x80117778
extern int ItemW;

// address: 0x8011777C
extern int ItemH;

// address: 0x80117780
extern int ItemNo;

// address: 0x80117784
extern unsigned char InvSpareFlag;

// address: 0x80117788
// size: 0x8
extern struct RECT BRect;

// address: 0x80117754
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x80117758
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x80108EAC
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x80108ED4
// size: 0x250
extern struct InvXY InvRect[74];

// address: 0x80109124
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x801093C4
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x80109478
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x8011775C
static unsigned long sgdwLastTime;

// address: 0x80117760
extern int InvSpareSel;

// address: 0x80117799
extern unsigned char automapflag;

// address: 0x8010960C
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x801096D4
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8011779A
extern unsigned char AMLWallFlag;

// address: 0x8011779B
extern unsigned char AMRWallFlag;

// address: 0x8011779C
extern unsigned char AMLLWallFlag;

// address: 0x8011779D
extern unsigned char AMLRWallFlag;

// address: 0x8011779E
extern unsigned char AMDirtFlag;

// address: 0x8011779F
extern unsigned char AMColumnFlag;

// address: 0x801177A0
extern unsigned char AMStairFlag;

// address: 0x801177A1
extern unsigned char AMLDoorFlag;

// address: 0x801177A2
extern unsigned char AMLGrateFlag;

// address: 0x801177A3
extern unsigned char AMLArchFlag;

// address: 0x801177A4
extern unsigned char AMRDoorFlag;

// address: 0x801177A5
extern unsigned char AMRGrateFlag;

// address: 0x801177A6
extern unsigned char AMRArchFlag;

// address: 0x801177A8
extern int AutoMapX;

// address: 0x801177AC
extern int AutoMapY;

// address: 0x801177B0
extern int AutoMapXOfs;

// address: 0x801177B4
extern int AutoMapYOfs;

// address: 0x801177B8
extern int AMPlayerX;

// address: 0x801177BC
extern int AMPlayerY;

// address: 0x80117E50
extern unsigned long GazTick;

// address: 0x8011E1A0
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A2590
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x80117E78
extern void (*PollFunc)();

// address: 0x80117E5C
extern void (*MsgFunc)();

// address: 0x80117EA8
extern void (*ErrorFunc)();

// address: 0x80117E64
extern void *LastPtr;

// address: 0x800A25C8
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x80117D7C
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x8011C138
// size: 0xA00
static struct MEM_HDR MemHdrBlocks[80];

// address: 0x80117D80
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x80117D84
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x80117D88
static int TimeStamp;

// address: 0x80117D8C
static unsigned char FullErrorChecking;

// address: 0x80117D90
static unsigned long LastAttemptedAlloc;

// address: 0x80117D94
static unsigned long LastDeallocedBlock;

// address: 0x80117D98
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x80117D9C
static int NumOfFreeHdrs;

// address: 0x80117DA0
static unsigned long LastTypeAlloced;

// address: 0x80117DA4
static void (*AllocFilter)();

// address: 0x800A25D0
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A25F8
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80117DA8
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x80117DAC
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x80117DB0
// size: 0x5C
static struct TASK *T;

// address: 0x80117DB4
static unsigned long MemTypeForTasker;

// address: 0x8011CB38
// size: 0x30
static int SchEnv[12];

// address: 0x80117DB8
static unsigned long ExecId;

// address: 0x80117DBC
static unsigned long ExecMask;

// address: 0x80117DC0
static int TasksActive;

// address: 0x80117DC4
static void (*EpiFunc)();

// address: 0x80117DC8
static void (*ProFunc)();

// address: 0x80117DCC
static unsigned long EpiProId;

// address: 0x80117DD0
static unsigned long EpiProMask;

// address: 0x80117DD4
static void (*DoTasksPrologue)();

// address: 0x80117DD8
static void (*DoTasksEpilogue)();

// address: 0x80117DDC
static void (*StackFloodCallback)();

// address: 0x80117DE0
static unsigned char ExtraStackProtection;

// address: 0x80117DE4
static int ExtraStackSizeLongs;

// address: 0x8011CB68
// size: 0x1380
static char buf[4992];

// address: 0x800A2620
// size: 0x7
static char NULL_REP[7];

// address: 0x8007A258
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007A274
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007A280
void Remove96__Fv() {
}


// address: 0x8007A2B8
void AppMain() {
}


// address: 0x8007A360
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007A38C
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007A424
void MAIN_MainLoop__Fv() {
}


// address: 0x8007A478
void CheckMaxArgs__Fv() {
}


// address: 0x8007A4AC
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007A4B8
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


// address: 0x8007A62C
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A6E0
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007A780
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A81C
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A8BC
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


// address: 0x8007A9D8
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007AAB4
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007ABDC
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007AC18
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007AE20
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007AE5C
unsigned char ClearedYet__Fv() {
}


// address: 0x8007AE68
void PrimDrawSycnCallBack() {
}


// address: 0x8007AE88
void SendDispEnv__Fv() {
}


// address: 0x8007AEAC
// size: 0x18
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007AEC4
// size: 0x28
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007AEDC
// size: 0x34
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007AEF4
// size: 0x24
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007AF0C
// size: 0x14
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007AF24
// size: 0xC
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007AF3C
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007B050
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007B0B8
void VID_AfterDisplay__Fv() {
}


// address: 0x8007B0D8
void VID_ScrOn__Fv() {
}


// address: 0x8007B100
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007B158
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007B164
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007B170
void VID_DispEnvSend() {
}


// address: 0x8007B1AC
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007B1BC
int VID_GetXOff__Fv() {
}


// address: 0x8007B1C8
int VID_GetYOff__Fv() {
}


// address: 0x8007B1D4
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007B1DC
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007B1FC
int GetTpY__FUs_addr_8007B1FC(unsigned short tpage) {
}


// address: 0x8007B218
int GetTpX__FUs_addr_8007B218(unsigned short tpage) {
}


// address: 0x8007B224
// size: 0x14
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007B230
// size: 0x14
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007B23C
void SortOutFileSystem__Fv() {
}


// address: 0x8007B378
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007B398
void Spanker__Fv() {
}


// address: 0x8007B3D8
void GaryLiddon__Fv() {
}


// address: 0x8007B3E0
void ReadPad__Fi(int NoDeb) {
	// register: 2
	register int New;
}


// address: 0x8007B440
void DummyPoll__Fv() {
}


// address: 0x8007B448
void DaveOwens__Fv() {
}


// address: 0x8007B470
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007B498
int GetTpY__FUs_addr_8007B498(unsigned short tpage) {
}


// address: 0x8007B4B4
int GetTpX__FUs_addr_8007B4B4(unsigned short tpage) {
}


// address: 0x8007B4C0
void TimSwann__Fv() {
}


// address: 0x8007B4C8
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007B4D0
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007B504
void leighbird__Fv() {
}


// address: 0x8007B52C
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007B57C
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007B5D0
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007B738
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B79C
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B7BC
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007B89C
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007B960
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007B9C4
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007BAA0
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


// address: 0x8007BBB4
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007BC5C
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007BCB4
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007BD0C
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007BD20
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007BD5C
// size: 0x14
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007BDC4
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007BE1C
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007BE60
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007BF24
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007BFDC
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007C0B0
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


// address: 0x8007C2C0
// size: 0x4
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007C2D8
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007C304
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007C380
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007C3EC
// size: 0x14
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007C428
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007C480
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007C4C0
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007C580
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007C634
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007C6DC
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


// address: 0x8007C8E8
// size: 0x6C
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007C928
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007C970
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


// address: 0x8007CB64
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80117A60
	static int TpX;
	// address: 0x80117A64
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


// address: 0x8007CC34
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007CCEC
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007CD48
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007CDB8
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


// address: 0x8007CEE4
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


// address: 0x8007CFE0
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


// address: 0x8007D3E8
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


// address: 0x8007D654
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


// address: 0x8007D7B4
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


// address: 0x8007D8B0
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


// address: 0x8007DB0C
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


// address: 0x8007DB8C
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


// address: 0x8007DD50
// size: 0x28
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007DEA4
// size: 0x34
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007DFF8
// size: 0x28
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007E0DC
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007E230
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


// address: 0x8007E370
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x8007E46C
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007E498
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007E5E0
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


// address: 0x8007E700
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x8007E754
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


// address: 0x8007E81C
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8007E870
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x8007E8C8
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


// address: 0x8007E9EC
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


// address: 0x8007EAC0
// size: 0x4
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x8007EB10
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x8007EB38
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x8007EBE0
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


// address: 0x8007ECA0
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x8007ECE4
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


// address: 0x8007ED74
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8007EDE4
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


// address: 0x8007EE50
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007EEA0
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007EEC8
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


// address: 0x8007EF64
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x8007EFCC
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


// address: 0x8007F0A0
// size: 0x78
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x8007F0D4
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


// address: 0x8007F28C
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x8007F2B0
void Display__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007F584
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x8007F5FC
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


// address: 0x8007F758
void _GLOBAL__D_DatPool() {
}


// address: 0x8007F7B0
void _GLOBAL__I_DatPool() {
}


// address: 0x8007F804
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x8007F880
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x8007F8FC
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8007F978
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F9A0
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F9C8
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F9D4
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F9E0
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8007FA58
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x8007FA6C
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8007FA78
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x8007FA8C
// size: 0x8
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x8007FAA8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8007FAC4
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007FAD0
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007FAF8
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007FB20
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x8007FB34
// size: 0x14
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x8007FB78
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x8007FBD0
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007FBF4
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007FC1C
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007FC40
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FD20
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x8007FD30
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


// address: 0x8007FE7C
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


// address: 0x800800DC
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x800801C8
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


// address: 0x800802F4
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


// address: 0x80080460
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


// address: 0x80080718
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


// address: 0x80080818
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


// address: 0x800809B4
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x800809D8
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80080A0C
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80080AF4
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80080B00
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x80080B6C
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


// address: 0x80080C64
// size: 0x14
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80080C90
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80080CC8
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


// address: 0x80080DE0
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


// address: 0x80080EB4
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x80080FD8
void Tfree__FPv(void *Addr) {
}


// address: 0x80081088
void InitTmalloc__Fv() {
}


// address: 0x800810B0
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80081104
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80081150
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


// address: 0x800811E0
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x8008120C
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


// address: 0x800813E8
bool DoPausedMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 18
	register bool RetVal;
	// register: 17
	register bool Done;
	{
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


// address: 0x80081554
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


// address: 0x8008163C
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


// address: 0x80081724
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80081734
bool PA_GetPauseOk__Fv() {
}


// address: 0x80081740
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80081890
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081898
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081998
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x800819A0
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800819A8
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081AA8
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081AB0
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081AB8
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081B9C
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081BA4
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80081BCC
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80081BF4
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80081C1C
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081C60
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80081C94
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80081CA8
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80081CC8
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081CD0
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081CD8
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80081D00
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80081D5C
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x80081D84
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x80081DAC
void PAD_Handler__Fv() {
	// register: 16
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 3
	register unsigned char fin;
}


// address: 0x80081F60
// size: 0x6C
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x80081FFC
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80082134
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80082290
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x800823B4
void _GLOBAL__I_Pad0() {
}


// address: 0x800823EC
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x800823F4
// size: 0x6C
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80082428
void Flush__4CPad(struct CPad *this) {
}


// address: 0x8008244C
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


// address: 0x800824E8
void InitPrinty__Fv() {
}


// address: 0x80082570
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80082578
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x800826F8
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


// address: 0x80082A90
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x80082AF8
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80082B5C
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80082B68
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80082B8C
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80082BAC
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80082BC4
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80082C1C
void Init__5CFont(struct CFont *this) {
}


// address: 0x80082C50
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80082C50(struct TextDat *this, int FrNum) {
}


// address: 0x80082C6C
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80082CA4
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


// address: 0x8008361C
// size: 0x24
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80083754
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


// address: 0x800839F8
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


// address: 0x80083B30
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80083D88
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


// address: 0x80084F48
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


// address: 0x80085160
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80085160(struct TextDat *this, int PalNum) {
}


// address: 0x8008517C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008517C(struct TextDat *this, int FrNum) {
}


// address: 0x80085198
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80085250
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x800852EC
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x8008532C
void CycleSelCols__Fv() {
}


// address: 0x800854BC
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


// address: 0x80085530
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80085584
// size: 0xE0
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x800856D8
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80085710
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x800857D8
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80085860
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x800858C8
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80085930
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x8008598C
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x800859DC
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80085D28
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x80085DD4
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x80085EA8
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


// address: 0x80085FB0
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


// address: 0x800860EC
// size: 0xC
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x80086164
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008618C
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x800861B4
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x800861CC
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


// address: 0x80087934
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


// address: 0x80087AA4
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


// address: 0x800887C0
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


// address: 0x80088E80
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


// address: 0x80088FF0
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x80089004
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x80089018
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800890DC
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x80089144
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x800891E4
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x800892B8
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x80089338
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x80089340
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x80089354
// size: 0xE0
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x80089360
void PRIM_GetPrim__FPP8POLY_FT4_addr_80089360(struct POLY_FT4 **Prim) {
}


// address: 0x800893DC
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80089424
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80089460
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x800894A8
void PRIM_GetPrim__FPP8POLY_GT4_addr_800894A8(struct POLY_GT4 **Prim) {
}


// address: 0x80089524
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x800895A0
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


// address: 0x800895C8
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x800895E4
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008960C
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80089634
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x80089658
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008967C
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x800896A4
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x800896B0
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x80089748
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x800897D8
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80089810
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80089810(struct TextDat *this, int Creature) {
}


// address: 0x80089888
int GetNumOfCreatures__7TextDat_addr_80089888(struct TextDat *this) {
}


// address: 0x8008989C
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008989C(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x800898A8
// size: 0x8
struct PAL *GetPal__7TextDati_addr_800898A8(struct TextDat *this, int PalNum) {
}


// address: 0x800898C4
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800898C4(struct TextDat *this, int FrNum) {
}


// address: 0x800898E0
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008990C
void OVR_LoadPregame__Fv() {
}


// address: 0x80089934
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008995C
void OVR_LoadGame__Fv() {
}


// address: 0x80089984
void OVR_LoadFmv__Fv() {
}


// address: 0x800899AC
void OVR_LoadMemcard__Fv() {
}


// address: 0x800899D8
void ClearOutOverlays__Fv() {
}


// address: 0x80089A30
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x80089AF4
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x80089B64
// size: 0x4
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x80089B70
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x80089BC4
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x80089D34
// size: 0x4
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x80089D40
void StevesDummyPoll__Fv() {
}


// address: 0x80089D48
void Lambo__Fv() {
}


// address: 0x80089D50
// size: 0x84
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x80089E34
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x80089E8C
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x80089EE8
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


// address: 0x8008A034
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


// address: 0x8008A460
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008A4E0
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


// address: 0x8008A930
void SetpNscrnxy__7CPlayeriiii(struct CPlayer *this, int x, int y, int px, int py) {
}


// address: 0x8008A998
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008AA14
// size: 0x4
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008AA7C
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008AA84
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008AA8C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008AA8C(struct POLY_FT4 **Prim) {
}


// address: 0x8008AB08
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008AB08(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008AB44
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008AB44(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008AB6C
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008AB80
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008AB98
int GetNumOfFrames__7TextDatii_addr_8008AB98(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008ABD0
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008ABF4
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008ABF4(struct TextDat *this, int Creature) {
}


// address: 0x8008AC6C
int GetNumOfCreatures__7TextDat_addr_8008AC6C(struct TextDat *this) {
}


// address: 0x8008AC80
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008AC80(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008AC8C
void PROF_Open__Fv() {
}


// address: 0x8008ACCC
bool PROF_State__Fv() {
}


// address: 0x8008ACD8
void PROF_On__Fv() {
}


// address: 0x8008ACE8
void PROF_Off__Fv() {
}


// address: 0x8008ACF4
void PROF_CpuEnd__Fv() {
}


// address: 0x8008AD24
void PROF_CpuStart__Fv() {
}


// address: 0x8008AD48
void PROF_DrawStart__Fv() {
}


// address: 0x8008AD6C
void PROF_DrawEnd__Fv() {
}


// address: 0x8008AD9C
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


// address: 0x8008AF90
void PROF_Restart__Fv() {
}


// address: 0x8008AFB0
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008B060
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008B100
void GoBackLevel__Fv() {
}


// address: 0x8008B178
void GoWarpLevel__Fv() {
}


// address: 0x8008B1B0
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B24C
void GoLoadGame__Fv() {
}


// address: 0x8008B2D4
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B36C
void GoForwardLevel__Fv() {
}


// address: 0x8008B3C4
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B45C
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008B4AC
void PostNewGame__Fv() {
}


// address: 0x8008B4E4
void LevelToLevelInit__Fv() {
}


// address: 0x8008B53C
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008B580
// size: 0x10
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008B5D8
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


// address: 0x8008BA4C
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


// address: 0x8008BED0
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


// address: 0x8008C030
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008C07C
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008C438
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008C52C
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008C630
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008C630(struct TextDat *this, int PalNum) {
}


// address: 0x8008C64C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008C64C(struct TextDat *this, int FrNum) {
}


// address: 0x8008C668
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008C67C
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008C6BC
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


// address: 0x8008C748
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


// address: 0x8008C810
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


// address: 0x8008C948
// size: 0x80
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008CA84
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008CADC
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008CBE8
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008CC38
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008CC88
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008CCF4
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008CE00
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008CF20
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008CFE8
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008D1C4
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


// address: 0x8008D4BC
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


// address: 0x8008D8E8
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


// address: 0x8008D9F8
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x8008DAC0
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8008DB2C
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8008DBA4
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80117AC8
	static int DestAddr;
}


// address: 0x8008DC1C
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8008DD50
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DDA4
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8008DDC8
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DE2C
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


// address: 0x8008DFE0
void AS_CallBack0__Fi(int handle) {
}


// address: 0x8008DFF4
void AS_CallBack1__Fi(int handle) {
}


// address: 0x8008E008
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x8008E0E4
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8008E184
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008E190
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8008E1BC
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x8008E2DC
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x8008E310
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8008E3A0
// size: 0x18
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E47C
// size: 0x18
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E4FC
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x8008E59C
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E630
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


// address: 0x8008E6A4
void SCR_Handler__Fv() {
}


// address: 0x8008E6CC
int GetNumOfObjs__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
}


// address: 0x8008E6D4
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008E710
void Init__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008E774
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E7CC
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E824
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008E838
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x8008E864
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x8008E86C
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8008E874
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x8008E880
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008E8B8
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8008E8C4
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008E8E4
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008E930
void stub__FPcPv_addr_8008E930(char *e, void *argptr) {
}


// address: 0x8008E938
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8008E96C
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008E9F4
void print_demo_task__FP4TASK(struct TASK *T) {
}


// address: 0x8008EB24
void TonysDummyPoll__Fv() {
}


// address: 0x8008EB2C
void load_demo_pad_data__FUl(unsigned long demo_num) {
}


// address: 0x8008EB7C
void save_demo_pad_data__FUl(unsigned long demo_num) {
}


// address: 0x8008EBCC
void set_pad_record_play__Fi(int level) {
}


// address: 0x8008EC44
void demo_game_task__FP4TASK(struct TASK *T) {
}


// address: 0x8008EC7C
void start_demo__Fv() {
}


// address: 0x8008ECD0
void tony__Fv() {
}


// address: 0x8008ED24
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8008ED30
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8008ED3C
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008ED90
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008EDE4
void GLUE_PreTown__Fv() {
}


// address: 0x8008EE48
bool GLUE_Finished__Fv() {
}


// address: 0x8008EE54
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8008EE60
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8008EEE4
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008EEF4
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008EF04
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008EF14
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8008EFEC
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


// address: 0x8008F4B4
// size: 0x8
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x8008F53C
// size: 0x8
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8008F598
// size: 0x8
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8008F5C8
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x8008F608
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x8008F65C
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x8008F708
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008F714
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x8008F71C
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008F730
char *get_action_str__Fii(int pval, int combo) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8008F7B0
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
}


// address: 0x8008F7EC
void RemoveCtrlScreen__Fv() {
}


// address: 0x8008F834
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


// address: 0x8008FE38
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008FE78
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008FEB8
unsigned char set_buttons__Fii(int cline, int n) {
	// register: 3
	register int cval;
	// register: 4
	register int i;
	// register: 19
	register int p;
}


// address: 0x80090058
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x800900A8
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x80090338
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


// address: 0x8009098C
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


// address: 0x80090D8C
void _GLOBAL__D_CtrlBorder() {
}


// address: 0x80090DC4
void _GLOBAL__I_CtrlBorder() {
}


// address: 0x80090DFC
unsigned short GetDown__C4CPad_addr_80090DFC(struct CPad *this) {
}


// address: 0x80090E24
unsigned short GetCur__C4CPad_addr_80090E24(struct CPad *this) {
}


// address: 0x80090E4C
void SetRGB__6DialogUcUcUc_addr_80090E4C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80090E6C
void SetBorder__6Dialogi_addr_80090E6C(struct Dialog *this, int Type) {
}


// address: 0x80090E74
void ___6Dialog_addr_80090E74(struct Dialog *this, int __in_chrg) {
}


// address: 0x80090E9C
// size: 0x10
struct Dialog *__6Dialog_addr_80090E9C(struct Dialog *this) {
}


// address: 0x80090EF8
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80090F18
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80090F64
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x800910F0
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


// address: 0x80091220
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8009145C
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x800914AC
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


// address: 0x80091710
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x800918BC
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


// address: 0x80091A84
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80091A84(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80091AC0
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80091AC0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80091AE8
void PRIM_GetPrim__FPP8POLY_FT4_addr_80091AE8(struct POLY_FT4 **Prim) {
}


// address: 0x80091B64
int GetNumOfActions__7TextDati_addr_80091B64(struct TextDat *this, int Creature) {
}


// address: 0x80091B88
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80091B88(struct TextDat *this, int Creature) {
}


// address: 0x80091C00
int GetNumOfCreatures__7TextDat_addr_80091C00(struct TextDat *this) {
}


// address: 0x80091C14
void DaveLDummyPoll__Fv() {
}


// address: 0x80091C1C
void DaveL__Fv() {
}


// address: 0x80091C44
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
	// address: 0x80116A1C
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


// address: 0x80091F24
void mteleportfx__Fv() {
	// register: 2
	register int br;
}


// address: 0x800921FC
void invistimer__Fv() {
}


// address: 0x800922CC
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


// address: 0x80092354
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


// address: 0x80092544
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


// address: 0x80092678
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


// address: 0x80092848
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x800929E8
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80092ACC
void doparticlejump__Fv() {
}


// address: 0x80092B0C
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80092C74
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


// address: 0x8009306C
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


// address: 0x80093314
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x80093538
void healFX__Fv() {
}


// address: 0x800935CC
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009368C
void HealStart__Fi(int plr) {
}


// address: 0x800936A8
void HealotherStart__Fi(int plr) {
}


// address: 0x800936C8
void TeleStart__Fi(int plr) {
}


// address: 0x80093710
void PhaseStart__Fi(int plr) {
}


// address: 0x80093740
void InvisStart__Fi(int plr) {
}


// address: 0x80093770
void PhaseEnd__Fi(int plr) {
}


// address: 0x80093798
void ApocaStart__Fi(int plr) {
}


// address: 0x800938C0
void doapocaFX__Fv() {
	// address: 0x80116A20
	static int scale1;
	// address: 0x80116A24
	static int scale2;
}


// address: 0x80093AF4
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80093B58
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x80093BD4
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80093C50
void PRIM_GetPrim__FPP8POLY_FT4_addr_80093C50(struct POLY_FT4 **Prim) {
}


// address: 0x80093CCC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80093CCC(struct TextDat *this, int FrNum) {
}


// address: 0x80093CE8
void DrawArrow__Fii(int x1, int y1) {
	// register: 17
	register int bright;
	{
		// register: 18
		register int i;
	}
}


// address: 0x80094130
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


// address: 0x80094524
void release_spell__Fi(int pnum) {
}


// address: 0x80094588
void select_belt_item__Fi(int pnum) {
}


// address: 0x80094590
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x800945F8
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x8009472C
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094868
void pad_func_up__Fi(int pnum) {
}


// address: 0x80094894
void pad_func_down__Fi(int pnum) {
}


// address: 0x800948C0
void pad_func_left__Fi(int pnum) {
}


// address: 0x800948C8
void pad_func_right__Fi(int pnum) {
}


// address: 0x800948D0
void pad_func_select__Fi(int pnum) {
}


// address: 0x800949C0
void pad_func_Attack__Fi(int pnum) {
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80094D30
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


// address: 0x80094FFC
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800951C8
void RemoveTargetCursor__Fi(int pnum) {
}


// address: 0x80095264
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 19
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int sp;
	// register: 16
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 4
	// size: 0x6C
	register struct CPad *pad;
	// register: 20
	register unsigned char DoTarget;
}


// address: 0x80095784
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80095878
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x800959B4
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80095AD4
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x80095BEC
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80095C98
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80095D50
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80095E68
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 7
	register int sp;
	// register: 6
	register char spt;
}


// address: 0x80095EE4
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x800960BC
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800960E4
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x8009610C
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


// address: 0x8009624C
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80096354
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


// address: 0x80096BB4
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


// address: 0x80096C90
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80096D9C
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 10
	register char co;
}


// address: 0x80097174
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


// address: 0x800973C8
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
}


// address: 0x80097610
void _GLOBAL__D_gplayer() {
}


// address: 0x80097638
void _GLOBAL__I_gplayer() {
}


// address: 0x80097660
void SetRGB__6DialogUcUcUc_addr_80097660(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80097680
void SetBack__6Dialogi_addr_80097680(struct Dialog *this, int Type) {
}


// address: 0x80097688
void SetBorder__6Dialogi_addr_80097688(struct Dialog *this, int Type) {
}


// address: 0x80097690
void ___6Dialog_addr_80097690(struct Dialog *this, int __in_chrg) {
}


// address: 0x800976B8
// size: 0x10
struct Dialog *__6Dialog_addr_800976B8(struct Dialog *this) {
}


// address: 0x80097714
unsigned short GetDown__C4CPad_addr_80097714(struct CPad *this) {
}


// address: 0x8009773C
unsigned short GetCur__C4CPad_addr_8009773C(struct CPad *this) {
}


// address: 0x80097764
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x800977E0
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80097838
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80097894
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800978CC
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80097904
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80097964
bool IsGameLoading__Fv() {
}


// address: 0x80097970
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


// address: 0x80097DC4
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x80097E74
void TakeDownCutScreen__Fv() {
}


// address: 0x80097EBC
void FinishProgress__Fv() {
}


// address: 0x80097F04
void PRIM_GetPrim__FPP7POLY_G4_addr_80097F04(struct POLY_G4 **Prim) {
}


// address: 0x80097F80
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x80097FB8
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x80097FF0
void SetRGB__6DialogUcUcUc_addr_80097FF0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80098010
void SetBack__6Dialogi_addr_80098010(struct Dialog *this, int Type) {
}


// address: 0x80098018
void SetBorder__6Dialogi_addr_80098018(struct Dialog *this, int Type) {
}


// address: 0x80098020
void ___6Dialog_addr_80098020(struct Dialog *this, int __in_chrg) {
}


// address: 0x80098048
// size: 0x10
struct Dialog *__6Dialog_addr_80098048(struct Dialog *this) {
}


// address: 0x800980A4
void ___7CScreen_addr_800980A4(struct CScreen *this, int __in_chrg);

// address: 0x800980C4
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x800982E0
void memcard_event__Fii(int evt, int side) {
}


// address: 0x800982EC
void init_card__Fi(int card_number) {
}


// address: 0x80098320
int ping_card__Fi(int card_number) {
}


// address: 0x800983B4
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x800983EC
void MemcardON__Fv() {
}


// address: 0x80098448
void MemcardOFF__Fv() {
}


// address: 0x80098498
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009857C
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


// address: 0x80098A7C
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


// address: 0x80099480
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


// address: 0x80099998
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


// address: 0x8009A010
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
							// register: 16
							register int llen;
						}
					}
				}
			}
		}
	}
}


// address: 0x8009A5E4
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


// address: 0x8009AB60
void CalcVolumes__Fv() {
}


// address: 0x8009ACA0
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


// address: 0x8009ADA8
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 16
	register int oldot;
	// register: 18
	// size: 0x6C
	register struct CPad *P;
}


// address: 0x8009B13C
void ToggleOptions__Fv() {
}


// address: 0x8009B1DC
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


// address: 0x8009B4E8
void _GLOBAL__I_cmenu() {
}


// address: 0x8009B90C
void PRIM_GetPrim__FPP7POLY_G4_addr_8009B90C(struct POLY_G4 **Prim) {
}


// address: 0x8009B988
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009B9B0
unsigned short GetDown__C4CPad_addr_8009B9B0(struct CPad *this) {
}


// address: 0x8009B9D8
unsigned short GetUp__C4CPad_addr_8009B9D8(struct CPad *this) {
}


// address: 0x8009BA00
unsigned short GetCur__C4CPad_addr_8009BA00(struct CPad *this) {
}


// address: 0x8009BA28
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8009BA30
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009BA38
void SetRGB__6DialogUcUcUc_addr_8009BA38(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009BA58
void SetBack__6Dialogi_addr_8009BA58(struct Dialog *this, int Type) {
}


// address: 0x8009BA60
void SetBorder__6Dialogi_addr_8009BA60(struct Dialog *this, int Type) {
}


// address: 0x8009BA68
void ___6Dialog_addr_8009BA68(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009BA90
// size: 0x10
struct Dialog *__6Dialog_addr_8009BA90(struct Dialog *this) {
}


// address: 0x8009BAEC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009BAEC(struct TextDat *this, int FrNum) {
}


// address: 0x8009BB08
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009BB60
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
}


// address: 0x8009BCA4
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009BD20
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 2
	register int type;
	// register: 4
	register int i;
}


// address: 0x8009BE00
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009BE54
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009BFBC
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C0C0
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C0FC
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C180
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C22C
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C2D0
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


// address: 0x8009C374
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


// address: 0x8009C620
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C62C
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C67C
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009C768
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


// address: 0x8009C898
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009C970
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009CAC8
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x8009CB64
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 18
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x8009CC58
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


// address: 0x8009CE50
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009CE50(struct POLY_FT4 **Prim) {
}


// address: 0x8009CECC
short PlayFMV(struct StrInfo *str) {
	// register: 16
	register short RetVal;
	// register: 17
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009CF64
void play_movie(char *pszMovie, unsigned char bAllowCancel) {
	// register: 16
	// size: 0x20
	register struct StrInfo *ptr;
	{
		// register: 17
		register int i;
	}
}


// address: 0x8002F644
unsigned char TrimCol__Fs_addr_8002F644(short col) {
}


// address: 0x8002F67C
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


// address: 0x80030198
void SetSpellTrans__Fc(char t) {
}


// address: 0x800301A4
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8003023C
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


// address: 0x800302B4
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80030368
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


// address: 0x800310F0
void SetSpell__Fi(int pnum) {
}


// address: 0x800311C4
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80031274
void ClearPanel__Fv() {
}


// address: 0x800312A4
void InitPanelStr__Fv() {
}


// address: 0x800312C4
void InitControlPan__Fv() {
	// register: 4
	register int i;
}


// address: 0x8003150C
void DrawCtrlPan__Fv() {
}


// address: 0x80031538
void DoAutoMap__Fv() {
}


// address: 0x800315AC
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


// address: 0x80031E70
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


// address: 0x80031F80
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


// address: 0x8003209C
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


// address: 0x800322D8
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


// address: 0x80032A48
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


// address: 0x80032F94
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x8003303C
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


// address: 0x800331A4
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x80033270
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


// address: 0x80033368
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


// address: 0x80034640
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


// address: 0x80034AE4
void DrawChrTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80034B84
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80034C18
void CheckChrBtns__Fv() {
	// register: 5
	register int pc;
}


// address: 0x80034E5C
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80034EE0
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80034FC8
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x80035060
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80035278
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


// address: 0x80035BD8
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 10
	register char st;
}


// address: 0x80035E3C
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80035E70
void _GLOBAL__D_fontkern() {
}


// address: 0x80035E98
void _GLOBAL__I_fontkern() {
}


// address: 0x80035ED4
unsigned short GetDown__C4CPad_addr_80035ED4(struct CPad *this) {
}


// address: 0x80035EFC
void SetRGB__6DialogUcUcUc_addr_80035EFC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80035F1C
void SetBack__6Dialogi_addr_80035F1C(struct Dialog *this, int Type) {
}


// address: 0x80035F24
void SetBorder__6Dialogi_addr_80035F24(struct Dialog *this, int Type) {
}


// address: 0x80035F2C
void ___6Dialog_addr_80035F2C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80035F54
// size: 0x10
struct Dialog *__6Dialog_addr_80035F54(struct Dialog *this) {
}


// address: 0x80035FB0
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80035FB0(struct TextDat *this, int PalNum) {
}


// address: 0x80035FCC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80035FCC(struct TextDat *this, int FrNum) {
}


// address: 0x80035FE8
void InitCursor__Fv() {
}


// address: 0x80035FF0
void FreeCursor__Fv() {
}


// address: 0x80035FF8
void SetICursor__Fi(int i) {
}


// address: 0x80036054
void SetCursor__Fi(int i) {
}


// address: 0x800360B8
void NewCursor__Fi(int i) {
}


// address: 0x800360D8
void InitLevelCursor__Fv() {
}


// address: 0x80036138
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


// address: 0x80036390
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


// address: 0x800365B8
void CheckCursMove__Fv() {
}


// address: 0x800365C0
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


// address: 0x800367BC
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x80036804
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80036854
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800368B0
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80036924
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x800369E8
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80036B74
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80036CA8
unsigned char TryIconCurs__Fv() {
}


// address: 0x80037084
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x8003708C
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80037128
void LoadLvlGFX__Fv() {
}


// address: 0x800371C4
void LoadAllGFX__Fv() {
}


// address: 0x800371E4
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800372DC
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80037464
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


// address: 0x80037540
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


// address: 0x80037E7C
void game_logic__Fv() {
}


// address: 0x80037F88
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80038030
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80038068
void alloc_plr__Fv() {
}


// address: 0x80038070
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80038078
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80038098
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x800380B8
void app_fatal(char *pszFile) {
}


// address: 0x800380E8
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038110
void DoMemCardFromInGame__Fv() {
}


// address: 0x80038138
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003818C
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800381AC
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x800381F4
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80038354
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x8003840C
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038538
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003866C
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003879C
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800388CC
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800389FC
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038B34
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038C64
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038D94
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038EC4
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


// address: 0x80039188
void InitTowners__Fv() {
}


// address: 0x80039214
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


// address: 0x800392B8
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x800393D8
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x8003940C
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80039440
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80039528
void TownHealer__Fv() {
}


// address: 0x80039550
void TownStory__Fv() {
}


// address: 0x80039578
void TownDrunk__Fv() {
}


// address: 0x800395A0
void TownBoy__Fv() {
}


// address: 0x800395C8
void TownWitch__Fv() {
}


// address: 0x800395F0
void TownBarMaid__Fv() {
}


// address: 0x80039618
void TownCow__Fv() {
}


// address: 0x80039640
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


// address: 0x80039890
// size: 0x94
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80039964
void CowSFX__Fi(int pnum) {
	// address: 0x8010D8E4
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80116F38
	static int snLastCowSFX;
}


// address: 0x80039A80
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80039AC0
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


// address: 0x8003AEE8
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003AEF0
void stream_stop__Fv() {
}


// address: 0x8003AF38
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003AFFC
void stream_update__Fv() {
}


// address: 0x8003B004
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003B020
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003B078
void FreeMonsterSnd__Fv() {
}


// address: 0x8003B080
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003B184
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003B294
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003B3C0
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003B458
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003B498
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003B4EC
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


// address: 0x8003B584
void sound_update__Fv() {
}


// address: 0x8003B5B8
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003B5FC
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003B6A4
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003B748
void SetRndSeed__Fl(long s) {
}


// address: 0x8003B758
long GetRndSeed__Fv() {
}


// address: 0x8003B7A0
long random__Fil(int idx, long v) {
}


// address: 0x8003B80C
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003B858
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003B8A8
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003B8B0
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003B940
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003B948
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003B9DC
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003BA08
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFEE8
	// size: 0x100
	auto char tempstr[256];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x8003BB14
void interface_msg_pump__Fv() {
}


// address: 0x8003BB1C
void ShowProgress__FUi(unsigned int uMsg) {
	// register: 17
	register unsigned long (*saveProc)();
	{
		{
		}
	}
}


// address: 0x8003BF74
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003BFAC
void InitItemGFX__Fv() {
}


// address: 0x8003BFD8
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003C0A0
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


// address: 0x8003C2B8
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003C478
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


// address: 0x8003CF28
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003D2A8
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003D344
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


// address: 0x8003D4A4
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003D4F0
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


// address: 0x8003D5D0
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003D864
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003D928
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003DA40
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003DA6C
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


// address: 0x8003DBE8
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003DBF0
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003DC20
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8003E058
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003E330
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


// address: 0x8003E55C
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


// address: 0x8003E6C4
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


// address: 0x8003E78C
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003E844
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003EAAC
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


// address: 0x8003EC9C
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


// address: 0x8003EF50
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003F49C
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003F4D4
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003F548
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x80040B54
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


// address: 0x80040FBC
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x800410B8
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x800411CC
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x80041410
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


// address: 0x80041650
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x800417C4
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


// address: 0x800418C4
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


// address: 0x80041A74
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80041D1C
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80041E28
void ItemRndDur__Fi(int ii) {
}


// address: 0x80041EB8
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x800421C4
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x8004240C
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x8004253C
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80042684
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x8004275C
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x8004281C
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80042960
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80042B4C
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


// address: 0x80042D78
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


// address: 0x80042F38
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x800430FC
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80043150
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x94
	register struct ItemStruct *i;
}


// address: 0x80043218
void ProcessItems__Fv() {
	// register: 6
	register int i;
	// register: 5
	register int ii;
}


// address: 0x8004335C
void FreeItemGFX__Fv() {
}


// address: 0x80043364
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


// address: 0x800434EC
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x800435DC
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x800436AC
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x80043770
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x800437E0
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


// address: 0x800438E0
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x800439D4
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80044080
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x8004430C
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80044678
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80044988
void CastScroll__Fi(int pnum) {
}


// address: 0x80044990
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *ptrplr;
}


// address: 0x80044FA4
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80045038
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x800450B4
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x800451BC
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x94
	auto struct ItemStruct holditem;
}


// address: 0x800453D0
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x80045604
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80045754
void SpawnStoreGold__Fv() {
}


// address: 0x800457D4
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80045974
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x800459D8
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80045B68
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045CE4
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045E60
char *MakeItemStr__FP10ItemStructUs(struct ItemStruct *ItemPtr, unsigned short ItemNo) {
	// register: 6
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80046060
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x800460C8
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 5
	register int y;
	// register: 4
	register int c;
}


// address: 0x8004613C
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x800461A8
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


// address: 0x80046E58
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


// address: 0x8004709C
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


// address: 0x80047160
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


// address: 0x80047670
void FreeLightTable__Fv() {
}


// address: 0x80047678
void InitLightTable__Fv() {
}


// address: 0x80047680
void MakeLightTable__Fv() {
}


// address: 0x80047688
void InitLightMax__Fv() {
}


// address: 0x800476AC
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x800476F0
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x80047784
void AddUnLight__Fi(int i) {
}


// address: 0x800477B4
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x800477E0
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80047818
void light_fix__Fi(int i) {
}


// address: 0x80047820
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80047858
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x8004789C
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x800478CC
void ProcessLightList__Fv() {
	// register: 7
	register int i;
	// register: 16
	register int j;
	// register: 4
	register unsigned char temp;
}


// address: 0x800479F8
void SavePreLighting__Fv() {
}


// address: 0x80047A00
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80047A50
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80047B54
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80047C08
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x80047CC0
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x80047F20
void FreeQuestText__Fv() {
}


// address: 0x80047F28
void InitQuestText__Fv() {
}


// address: 0x80047F34
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


// address: 0x80048074
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x8004819C
void DrawQTextBack__Fv() {
}


// address: 0x8004820C
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80048298
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80048364
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


// address: 0x80048694
void _GLOBAL__D_QBack() {
}


// address: 0x800486BC
void _GLOBAL__I_QBack() {
}


// address: 0x800486E4
void SetRGB__6DialogUcUcUc_addr_800486E4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80048704
void SetBorder__6Dialogi_addr_80048704(struct Dialog *this, int Type) {
}


// address: 0x8004870C
void ___6Dialog_addr_8004870C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80048734
// size: 0x10
struct Dialog *__6Dialog_addr_80048734(struct Dialog *this) {
}


// address: 0x80048790
int GetCharWidth__5CFontc_addr_80048790(struct CFont *this, char ch) {
}


// address: 0x800487E8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800487E8(struct TextDat *this, int FrNum) {
}


// address: 0x80048804
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8004880C
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80048814
void delta_init__Fv() {
}


// address: 0x80048874
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 2
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x800488E4
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 4
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x80048944
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 3
	// size: 0xC
	register struct DMonsterStr *pD;
}


// address: 0x800489BC
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


// address: 0x80048C14
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80048C54
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 24
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x80048E18
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 8
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 9
	register int i;
}


// address: 0x80048F80
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x80048FA4
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x80048FC8
void DeltaAddItem__Fi(int ii) {
	// register: 5
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 8
	register int i;
}


// address: 0x80049208
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x80049238
int DeltaImportData__FPc(char *Src) {
}


// address: 0x8004926C
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80049314
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x8004933C
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdGolem cmd;
}


// address: 0x80049388
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x800493B8
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x800493F0
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80049430
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x80049478
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x800494A4
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x800494D4
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x8004950C
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80049580
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x800496B4
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80049738
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80049798
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80049808
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x80049910
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x800499B4
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x800499E4
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x80049AF8
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80049B00
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80049B34
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80049B90
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80049BD0
void check_update_plr__Fi(int pnum) {
}


// address: 0x80049BD8
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


// address: 0x80049C90
unsigned long On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049CC0
unsigned long On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049CF0
unsigned long On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049D20
unsigned long On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049D50
unsigned long On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049DC4
unsigned long On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049E6C
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


// address: 0x80049FB0
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


// address: 0x8004A188
unsigned long On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A230
unsigned long On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004A368
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


// address: 0x8004A538
unsigned long On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004A5D8
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


// address: 0x8004A764
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


// address: 0x8004A8A8
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


// address: 0x8004A9C8
unsigned long On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AA78
unsigned long On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB84
unsigned long On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AC80
unsigned long On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AD80
unsigned long On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004AEB0
unsigned long On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004AFE0
unsigned long On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B04C
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


// address: 0x8004B1A8
unsigned long On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B294
unsigned long On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B378
unsigned long On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B460
unsigned long On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B548
unsigned long On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B5D8
unsigned long On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B614
unsigned long On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B684
unsigned long On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B72C
unsigned long On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B764
unsigned long On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B850
unsigned long On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B8BC
unsigned long On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B928
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


// address: 0x8004BA9C
unsigned long On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BBA4
unsigned long On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BBEC
unsigned long On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BDB4
unsigned long On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004BE50
unsigned long On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004BEEC
unsigned long On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004BF88
unsigned long On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C020
unsigned long On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0B8
unsigned long On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0C0
unsigned long On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0C8
unsigned long On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C0D0
unsigned long On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C128
unsigned long On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004C3C0
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


// address: 0x8004C554
unsigned long On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C5A8
unsigned long On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C5F4
unsigned long On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C634
unsigned long On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C674
unsigned long On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C6B4
unsigned long On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C6F4
unsigned long On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004C73C
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


// address: 0x8004C860
unsigned long On_CHEAT_EXPERIENCE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C868
unsigned long On_CHEAT_SPELL_LEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C870
unsigned long On_DEBUG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C878
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80117C48
	static unsigned char sbLastCmd;
}


// address: 0x8004CCCC
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004CCF8
int InitLevelType__Fi(int l) {
}


// address: 0x8004CD44
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004CED4
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004CF48
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


// address: 0x8004D170
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


// address: 0x8004D38C
void FreeObjectGFX__Fv() {
}


// address: 0x8004D398
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004D450
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004D6D4
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004D734
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004D75C
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004D868
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


// address: 0x8004DA78
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


// address: 0x8004DD9C
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004DE00
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


// address: 0x8004E0DC
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004E14C
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004E2E0
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004E32C
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004E43C
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004E70C
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


// address: 0x8004EA5C
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004ECEC
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004EF8C
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004EFC4
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


// address: 0x8004F098
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004F0A0
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004F0A8
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004F328
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004F3CC
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F770
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FB48
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FEE0
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80050278
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80050580
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80050888
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


// address: 0x80050D84
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050F3C
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x800510AC
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80051208
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


// address: 0x800513F4
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


// address: 0x800518E8
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x80051C90
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x80051E68
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x80052238
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x800523FC
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80052594
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800527E8
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800529B8
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052B70
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052CCC
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052E28
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


// address: 0x80052F30
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


// address: 0x800531E8
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


// address: 0x800533AC
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x8005341C
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


// address: 0x800559E0
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055B5C
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055D2C
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055E14
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80055F84
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80056074
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x8005611C
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x800561D0
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


// address: 0x8005677C
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x80056928
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80056A18
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80056AF8
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80056F30
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057044
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057158
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x8005726C
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x8005744C
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


// address: 0x8005763C
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80057B90
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057CF0
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80057D4C
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80057E64
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


// address: 0x80057F9C
void SyncLever__Fi(int i) {
}


// address: 0x80058018
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x80058110
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


// address: 0x8005826C
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x800583D4
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058500
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x80058640
void GetObjectStr__Fi(int i) {
}


// address: 0x80058A5C
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


// address: 0x80058CB0
int GetNumOfFrames__7TextDatii_addr_80058CB0(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058CE8
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80058CE8(struct TextDat *this, int Creature) {
}


// address: 0x80058D60
int GetNumOfCreatures__7TextDat_addr_80058D60(struct TextDat *this) {
}


// address: 0x80058D74
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80058D7C
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058DA8
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x80058E5C
void SetupLocalPlayer__Fv() {
}


// address: 0x80058E7C
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058EC0
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058ED4
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058EF4
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058EFC
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058F18
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F3C
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x80059178
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80059594
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x800595FC
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8005976C
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


// address: 0x80059978
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


// address: 0x800599FC
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


// address: 0x80059DE4
void InitMultiView__Fv() {
}


// address: 0x80059E40
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059E84
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059F18
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005A00C
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A020
void FixPlayerLocation__FP12PlayerStructi(struct PlayerStruct *ptrplr, int bDir) {
}


// address: 0x8005A084
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A110
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A174
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800CB4D4
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A1B0
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A1DC
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
}


// address: 0x8005A278
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A328
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A4E0
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


// address: 0x8005A600
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
	// register: 16
	register int pd;
}


// address: 0x8005A730
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A8C8
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


// address: 0x8005AA8C
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


// address: 0x8005AE40
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B288
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005B3CC
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B3EC
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


// address: 0x8005B6D4
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B790
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B8D4
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B964
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005BA20
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BA28
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005BAB0
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BE1C
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BFBC
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


// address: 0x8005C5EC
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


// address: 0x8005C99C
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005CA2C
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


// address: 0x8005CDB8
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CEB8
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CF78
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D018
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


// address: 0x8005DF88
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E2F8
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


// address: 0x8005E3F4
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E470
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E584
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E58C
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E9A4
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005EA0C
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


// address: 0x8005EEE8
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EF84
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


// address: 0x8005F3B8
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F3E0
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
}


// address: 0x8005F5F4
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F604
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


// address: 0x8005FC70
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005FDAC
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FDDC
void CheckStats__Fi(int p) {
	// register: 7
	register int c;
	// register: 6
	register int i;
}


// address: 0x80060014
void ModifyPlrStr__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80060194
void ModifyPlrMag__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x800602F4
void ModifyPlrDex__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80060424
void ModifyPlrVit__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x8006056C
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x800605B0
void SetPlrStr__Fii(int p, int v) {
}


// address: 0x800606CC
void SetPlrMag__Fii(int p, int v) {
}


// address: 0x80060750
void SetPlrDex__Fii(int p, int v) {
}


// address: 0x8006086C
void SetPlrVit__Fii(int p, int v) {
}


// address: 0x800608EC
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800608F4
void PlayDungMsgs__Fv() {
}


// address: 0x80060E8C
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060EB4
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80060EF8
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060F2C
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060F60
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060F94
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80060FC8
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060FFC
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80061034
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80061068
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061090
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800610B8
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800610E0
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80061128
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061150
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061178
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800611AC
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800611D4
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800611FC
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80061240
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80061274
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800612A8
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x800612F4
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80061340
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x8006138C
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x800613E0
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x8006142C
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80061478
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x800614C8
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80061514
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80061560
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x800615AC
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x800615F8
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80061644
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80061690
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x800616E0
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x8006172C
void FixPlayerLocation__Fii(int pnum, int bDir) {
}


// address: 0x80061778
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x800617C8
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80061814
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80061860
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x800618AC
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x800618F8
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80061944
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80061990
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x800619DC
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80061A28
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80061A74
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80061AC0
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80061B0C
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x80061B40
void PRIM_GetPrim__FPP8POLY_FT4_addr_80061B40(struct POLY_FT4 **Prim) {
}


// address: 0x80061BBC
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80061C0C
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80061C18
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80061C24
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80061C30
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


// address: 0x80061E80
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x80062338
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


// address: 0x800624DC
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80062570
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


// address: 0x80062B50
void SetReturnLvlPos__Fv() {
}


// address: 0x80062C60
void GetReturnLvlPos__Fv() {
}


// address: 0x80062CB4
void ResyncMPQuests__Fv() {
}


// address: 0x80062DF0
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80063350
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


// address: 0x8006357C
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x800637B4
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80063834
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80063944
void QuestlogUp__Fv() {
}


// address: 0x8006399C
void QuestlogDown__Fv() {
}


// address: 0x80063A04
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80063AC0
void QuestlogESC__Fv() {
}


// address: 0x80063B00
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80063B80
void _GLOBAL__D_questlog() {
}


// address: 0x80063BA8
void _GLOBAL__I_questlog() {
}


// address: 0x80063BD0
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x80063BDC
void SetRGB__6DialogUcUcUc_addr_80063BDC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80063BFC
void SetBack__6Dialogi_addr_80063BFC(struct Dialog *this, int Type) {
}


// address: 0x80063C04
void SetBorder__6Dialogi_addr_80063C04(struct Dialog *this, int Type) {
}


// address: 0x80063C0C
void ___6Dialog_addr_80063C0C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80063C34
// size: 0x10
struct Dialog *__6Dialog_addr_80063C34(struct Dialog *this) {
}


// address: 0x80063C90
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80063C90(struct TextDat *this, int PalNum) {
}


// address: 0x80063CAC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80063CAC(struct TextDat *this, int FrNum) {
}


// address: 0x80063CC8
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


// address: 0x80063F34
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x8006402C
void FreeStoreMem__Fv() {
}


// address: 0x80064034
void DrawSTextBack__Fv() {
}


// address: 0x800640A4
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
	// address: 0x8011713C
	static unsigned char DaveFix;
}


// address: 0x80064434
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800644C8
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80064560
void AddSLine__Fi(int y) {
}


// address: 0x800645B0
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800645D8
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x8006468C
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x80064AD0
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


// address: 0x800650EC
void S_StartSmith__Fv() {
}


// address: 0x80065274
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80065420
void S_StartSBuy__Fv() {
}


// address: 0x80065550
void S_ScrollSPBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80065718
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80065868
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80065950
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


// address: 0x80065B3C
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065F64
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006600C
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800661E8
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x800666B4
void S_StartWitch__Fv() {
}


// address: 0x800667F4
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800669A0
void S_StartWBuy__Fv() {
}


// address: 0x80066AC8
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80066BEC
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80067238
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x800672C4
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067440
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80067854
void S_StartNoMoney__Fv() {
}


// address: 0x800678BC
void S_StartNoRoom__Fv() {
}


// address: 0x8006791C
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80067C50
void S_StartBoy__Fv() {
}


// address: 0x80067DE0
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80067F2C
void S_StartHealer__Fv() {
}


// address: 0x80068100
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80068260
void S_StartHBuy__Fv() {
}


// address: 0x80068380
void S_StartStory__Fv() {
}


// address: 0x80068470
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x800684A4
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80068574
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068FB0
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x80069140
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


// address: 0x80069370
void S_StartTavern__Fv() {
}


// address: 0x80069468
void S_StartBarMaid__Fv() {
}


// address: 0x8006953C
void S_StartDrunk__Fv() {
}


// address: 0x80069610
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800698F8
void DrawSText__Fv() {
}


// address: 0x80069938
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80069A00
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069BAC
void STextESC__Fv() {
}


// address: 0x80069D5C
void STextUp__Fv() {
}


// address: 0x80069EE4
void STextDown__Fv() {
}


// address: 0x8006A07C
void S_SmithEnter__Fv() {
}


// address: 0x8006A150
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006A1D0
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006A250
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8006A69C
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006A880
void S_SBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006AA7C
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006ABFC
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


// address: 0x8006AE40
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


// address: 0x8006B110
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


// address: 0x8006B374
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006B65C
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006B750
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B9B8
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BB04
void S_WitchEnter__Fv() {
}


// address: 0x8006BBB4
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BDA8
void S_WBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BFA4
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006C098
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006C208
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C354
void S_BoyEnter__Fv() {
}


// address: 0x8006C48C
void BoyBuyItem__Fv() {
}


// address: 0x8006C510
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006C79C
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C998
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006CCE0
void S_ConfirmEnter__Fv() {
}


// address: 0x8006CDFC
void S_HealerEnter__Fv() {
}


// address: 0x8006CE94
void S_HBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006D0B0
void S_StoryEnter__Fv() {
}


// address: 0x8006D148
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006D2B4
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


// address: 0x8006D4AC
void S_TavernEnter__Fv() {
}


// address: 0x8006D51C
void S_BarmaidEnter__Fv() {
}


// address: 0x8006D58C
void S_DrunkEnter__Fv() {
}


// address: 0x8006D5FC
void STextEnter__Fv() {
}


// address: 0x8006D80C
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D924
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D938
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D960
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006D988
unsigned short GetDown__C4CPad_addr_8006D988(struct CPad *this) {
}


// address: 0x8006D9B0
void SetRGB__6DialogUcUcUc_addr_8006D9B0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006D9D0
void SetBorder__6Dialogi_addr_8006D9D0(struct Dialog *this, int Type) {
}


// address: 0x8006D9D8
void ___6Dialog_addr_8006D9D8(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006DA00
// size: 0x10
struct Dialog *__6Dialog_addr_8006DA00(struct Dialog *this) {
}


// address: 0x8006DA5C
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006DBD0
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


// address: 0x8006DDC8
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


// address: 0x8006DEB8
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


// address: 0x8006E278
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


// address: 0x8006E3E0
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


// address: 0x8006E4C4
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


// address: 0x8006E55C
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006E874
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006EB24
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x8006EF84
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006F400
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006F90C
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


// address: 0x8006F9CC
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006FAC0
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006FBB4
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006FCA8
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


// address: 0x8006FFC4
void FadeGameOut__Fv() {
}


// address: 0x80070060
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


// address: 0x800705A4
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


// address: 0x8007086C
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x800709B0
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80070A50
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80070CB4
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x80070F68
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x800711CC
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x800711D4
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x8007123C
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x8007125C
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x800712CC
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80071368
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x800713D0
void music_stop__Fv() {
}


// address: 0x8007141C
void music_fade__Fv() {
}


// address: 0x8007145C
void music_start__Fi(int nTrack) {
}


// address: 0x800714E0
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


// address: 0x8007199C
void CloseInvChr__Fv() {
}


// address: 0x80071A04
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
}


// address: 0x80071AD8
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071B48
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071BB8
// size: 0x90
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80071CE8
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071D08
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071D4C
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071D90
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 17
	register int i;
}


// address: 0x80071EFC
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071FC4
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80072020
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x8007205C
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x800720E0
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x800724AC
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80072558
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80072670
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x800726B4
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


// address: 0x800729B8
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072C8C
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80072E7C
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


// address: 0x80072FF4
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


// address: 0x80073584
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


// address: 0x8007377C
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8007382C
void Init_GamePad__Fv() {
}


// address: 0x8007385C
void InitGamePadVars__Fv() {
}


// address: 0x800738D4
void MoveToScrollTarget__7CBlocks_addr_800738D4(struct CBlocks *this) {
}


// address: 0x800738E8
unsigned short GetDown__C4CPad_addr_800738E8(struct CPad *this) {
}


// address: 0x80073910
unsigned short GetUp__C4CPad_addr_80073910(struct CPad *this) {
}


// address: 0x80073938
unsigned short GetCur__C4CPad_addr_80073938(struct CPad *this) {
}


// address: 0x80073960
void DoGameTestStuff__Fv() {
}


// address: 0x8007398C
void DoInitGameStuff__Fv() {
}


// address: 0x800739C0
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x800739E0
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073A00
void GRL_InitGwin__Fv() {
}


// address: 0x80073A0C
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x80073A1C
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80073A44
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80073AE8
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x80073B30
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80073B3C
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


// address: 0x80073C40
char *GetStr__Fi(int StrId) {
}


// address: 0x80073CA8
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


// address: 0x80073DAC
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x80073E04
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80073E10
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80073F18
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80073F98
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


// address: 0x800744D0
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80074650
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x800747B0
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074848
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800748F8
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007495C
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074A74
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074B0C
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074BA4
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074C0C
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 3
	register int frame;
}


// address: 0x80074CA0
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


// address: 0x80074D80
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


// address: 0x80074E58
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074EE8
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


// address: 0x80075004
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x800750A0
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075108
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075170
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x800752A4
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x800753E8
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075450
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800754A8
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


// address: 0x80075574
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800755D8
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800755E0
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


// address: 0x80075B08
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075BB0
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075BB8
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075BEC
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075BEC(struct POLY_FT4 **Prim) {
}


// address: 0x80075C68
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri_addr_80075C68(int PNum) {
}


// address: 0x80075CB8
int GetLastOtPos__C7CPlayer_addr_80075CB8(struct CPlayer *this) {
}


// address: 0x80075CC4
int GetLastScrY__C7CPlayer_addr_80075CC4(struct CPlayer *this) {
}


// address: 0x80075CD0
int GetLastScrX__C7CPlayer_addr_80075CD0(struct CPlayer *this) {
}


// address: 0x80075CDC
int GetNumOfFrames__7TextDat_addr_80075CDC(struct TextDat *this) {
}


// address: 0x80075CF0
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80075CF0(struct TextDat *this, int FrNum) {
}


// address: 0x80075D0C
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80075D44
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80075DC4
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80075E5C
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80075F0C
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


// address: 0x800760C8
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


// address: 0x8007625C
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


// address: 0x80076314
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


// address: 0x800765A8
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80076680
// size: 0x28
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076708
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076734
// size: 0x28
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076760
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007678C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076808
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007682C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076858
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076884
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768B0
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768DC
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076908
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076934
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076960
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007698C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A10
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A3C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A68
// size: 0x28
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A94
// size: 0x28
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AC0
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AEC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B18
// size: 0x28
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B44
// size: 0x28
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B70
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B9C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BC8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BF4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C20
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C4C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C78
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CA4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CD0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CFC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D28
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D54
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D80
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DAC
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80076E40
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076ED0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076F60
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076FF0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80077080
// size: 0x28
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800770AC
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800770D8
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077104
// size: 0x28
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077130
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007715C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077188
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800771B4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800771E0
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007720C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077238
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


// address: 0x80077390
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007745C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80077528
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077554
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077580
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775AC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775D8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775FC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077628
// size: 0x28
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077654
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077680
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800776AC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800776D8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077704
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077730
// size: 0x28
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007775C
// size: 0x28
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077788
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800777B4
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800777E0
// size: 0x28
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007780C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077838
// size: 0x28
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077864
// size: 0x28
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077890
// size: 0x28
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800778BC
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


// address: 0x80077A50
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A7C
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077AA0
// size: 0x28
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077ACC
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077AF8
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B24
// size: 0x28
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B50
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B7C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077BA8
// size: 0x28
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077BD4
// size: 0x28
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077C00
// size: 0x28
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077C2C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077C58
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077C58(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80077C94
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077C94(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80077CBC
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077CBC(struct POLY_FT4 **Prim) {
}


// address: 0x80077D38
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077D38(struct CBlocks *this) {
}


// address: 0x80077D44
int GetNumOfFrames__7TextDatii_addr_80077D44(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077D7C
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80077D7C(struct TextDat *this, int Creature) {
}


// address: 0x80077DF4
int GetNumOfCreatures__7TextDat_addr_80077DF4(struct TextDat *this) {
}


// address: 0x80077E08
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80077E08(struct TextDat *this, int FrNum) {
}


// address: 0x80077E24
void gamemenu_on__Fv() {
}


// address: 0x80077E2C
void gamemenu_off__Fv() {
}


// address: 0x80077E34
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077E3C
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077E44
void ResetPal__Fv() {
}


// address: 0x80077E4C
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077E7C
bool GetFadeState__Fv() {
}


// address: 0x80077E88
void DrawFadedScreen__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077F54
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80078010
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078094
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x800780EC
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078184
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x800781D8
void M_CheckEFlag__Fi(int i) {
}


// address: 0x800781F8
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


// address: 0x80078364
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x800783A0
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x800783EC
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x80078434
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80078494
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


// address: 0x80078A54
void ClearMVars__Fi(int i) {
}


// address: 0x80078AC8
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x80078F14
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80078FC4
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x80079108
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80079200
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x800792A8
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


// address: 0x80079498
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80079578
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


// address: 0x800797F4
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80079AFC
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x80079E08
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
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F9E0
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001FA1C
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001FA2C
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001FA44
unsigned char GSYS_InitMachine();

// address: 0x8001FA7C
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001FAB0
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FB2C
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001FB3C
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


// address: 0x8001FC70
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FD28
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


// address: 0x8001FE48
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


// address: 0x8001FFE0
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020040
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x800200BC
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8002015C
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


// address: 0x800201D0
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


// address: 0x80020244
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


// address: 0x800202C0
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x800202E0
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x8002032C
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x8002035C
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x8002038C
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x800203BC
// size: 0x20
struct MEM_HDR *FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
}


// address: 0x80020414
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


// address: 0x8002047C
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


// address: 0x800204E4
// size: 0x28
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x80020520
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


// address: 0x800205F4
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x800206D0
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x80020868
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


// address: 0x800208D4
// size: 0x20
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x8002095C
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x8002099C
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


// address: 0x80020A20
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


// address: 0x80020ABC
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020B24
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020B78
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020BCC
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020C50
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020CAC
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


// address: 0x80020DA8
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020E54
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020EAC
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020EDC
// size: 0x4
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020EEC
char *GAL_GetLastErrorText();

// address: 0x80020F14
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


// address: 0x80020F7C
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


// address: 0x80020FE4
void GAL_SetTimeStamp(int Time);

// address: 0x80020FF4
void GAL_IncTimeStamp();

// address: 0x80021014
int GAL_GetTimeStamp();

// address: 0x80021024
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80021074
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x800210C4
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x80021170
long GAL_GetSize(long hnd) {
}


// address: 0x800211C4
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


// address: 0x8002132C
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


// address: 0x800213D0
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80021404
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x80021470
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


// address: 0x80021568
// size: 0x20
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x800215A4
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
}


// address: 0x80021634
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


// address: 0x800216B0
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


// address: 0x80021764
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


// address: 0x800217C0
void GAL_MemDump(unsigned long Type);

// address: 0x80021834
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80021844
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x80021870
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x800218B8
int GAL_GetNumFreeHeaders();

// address: 0x800218C8
unsigned long GAL_GetLastTypeAlloced();

// address: 0x800218D8
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x800218F0
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021944
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x80021954
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


// address: 0x80021A44
void DoEpi(struct TASK *T);

// address: 0x80021A94
void DoPro(struct TASK *T);

// address: 0x80021AE4
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x80021B58
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


// address: 0x80021D40
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x80021F00
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x80021FDC
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x80022064
void TSK_Die();

// address: 0x80022090
void TSK_Kill(struct TASK *T);

// address: 0x800220E0
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x800220F0
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8002216C
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800221B4
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x800221F8
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x80022208
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x80022220
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x80022278
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x80022290
void TSK_ClearExecFilter();

// address: 0x800222B4
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


// address: 0x800223B4
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


// address: 0x8002242C
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x80022440
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x80022454
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x80022468
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8002247C
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x80022490
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x800224A4
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800224F0
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x80022510
void LoTskKill(struct TASK *T) {
}


// address: 0x80022580
void ExecuteTask(struct TASK *T);

// address: 0x800225D0
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800225E8
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80022600
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80022618
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80022630
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x80022648
void TSK_ClearEpiProFilter();

// address: 0x8002267C
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8002268C
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x800226A4
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x800226CC
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x800226F8
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x80024A00
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80024A4C
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
	// address: 0x80024BA0
	bool rflag;
	// address: 0x80024F08
	bool nosign;
	// address: 0x80024FB4
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


