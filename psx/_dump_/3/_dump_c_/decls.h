#include "types.h"

// address: 0x80120028
extern int NumOfMonsterListLevels;

// address: 0x800A6B40
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x8011FD50
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x8011FD54
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x8011FD58
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x8011FD60
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x8011FD64
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x8011FD68
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x8011FD6C
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x8011FD70
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x8011FD74
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x8011FD78
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x8011FD7C
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x8011FD80
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x8011FD84
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x8011FD88
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x8011FD8C
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x8011FD90
// size: 0x4
static unsigned char NumsLEV4M4QB[4];

// address: 0x8011FD94
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x8011FD98
// size: 0x4
static unsigned char NumsLEV4M4QC[4];

// address: 0x8011FD9C
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x8011FDA0
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x8011FDA4
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x8011FDA8
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x8011FDAC
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x8011FDB0
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x8011FDB4
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x8011FDB8
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x8011FDC0
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x8011FDC4
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x8011FDC8
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x8011FDCC
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x8011FDD0
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x8011FDD4
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x8011FDD8
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x8011FDDC
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x8011FDE0
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x8011FDE4
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x8011FDE8
// size: 0x3
static unsigned char NumsLEV8M8A[3];

// address: 0x8011FDEC
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x8011FDF0
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8011FDF4
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x8011FDF8
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x8011FDFC
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x8011FE00
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x8011FE04
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x8011FE08
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x8011FE0C
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x8011FE10
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x8011FE14
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x8011FE18
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x8011FE1C
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x8011FE20
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x8011FE24
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x8011FE28
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x8011FE2C
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x8011FE30
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x8011FE34
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x8011FE38
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x8011FE3C
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x8011FE40
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x8011FE44
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x8011FE48
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x8011FE4C
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x8011FE50
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x8011FE54
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x8011FE58
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x8011FE5C
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x8011FE60
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x8011FE64
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x8011FE68
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x8011FE6C
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x8011FE70
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8011FE74
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8011FE78
// size: 0x1
static unsigned char NumsLEV16M16D[1];

// address: 0x800A66B0
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A66E0
// size: 0x50
static struct MonstList ChoiceListLEV2[5];

// address: 0x800A6730
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A6770
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A67E0
// size: 0x60
static struct MonstList ChoiceListLEV5[6];

// address: 0x800A6840
// size: 0x50
static struct MonstList ChoiceListLEV6[5];

// address: 0x800A6890
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A68E0
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A6940
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A6980
// size: 0x40
static struct MonstList ChoiceListLEV10[4];

// address: 0x800A69C0
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A6A10
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A6A50
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A6AA0
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A6B00
// size: 0x30
static struct MonstList ChoiceListLEV15[3];

// address: 0x800A6B30
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x801216E0
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x80120038
extern int time_in_frames;

// address: 0x800A6BC0
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x8012003C
extern int ArgsSoFar;

// address: 0x80120040
extern unsigned long *ThisOt;

// address: 0x80120044
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x801216E4
static long hndPrimBuffers;

// address: 0x801216E8
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x801216EC
static unsigned char BufferDepth;

// address: 0x801216ED
static unsigned char WorkRamId;

// address: 0x801216EE
static unsigned char ScrNum;

// address: 0x801216F0
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x801216F4
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x801216F8
static unsigned char BufferNum;

// address: 0x80120048
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x801216F9
static unsigned char LastBuffer;

// address: 0x801216FC
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x80121700
static int ThisOtSize;

// address: 0x8012004C
// size: 0x8
static struct RECT ScrRect;

// address: 0x80121704
static int VidWait;

// address: 0x80121B98
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x80121708
static void (*VbFunc)();

// address: 0x8012170C
static unsigned long VidTick;

// address: 0x80121710
static int VXOff;

// address: 0x80121714
static int VYOff;

// address: 0x80120060
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x80120064
extern int LastFmem;

// address: 0x80120054
extern unsigned int GSYS_MemStart;

// address: 0x80120058
extern unsigned int GSYS_MemEnd;

// address: 0x800A6F08
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A6F30
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x8012005C
extern int LowestFmem;

// address: 0x80120074
extern int FileSYS;

// address: 0x80121718
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x8012171C
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x8012008E
extern short DavesPad;

// address: 0x80120090
extern short DavesPadDeb;

// address: 0x800A6F58
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x80121C78
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x801200E0
extern int TpW;

// address: 0x801200E4
extern int TpH;

// address: 0x801200E8
extern int TpXDest;

// address: 0x801200EC
extern int TpYDest;

// address: 0x801200F0
// size: 0x8
extern struct RECT R;

// address: 0x800AE21C
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800AE250
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A6F8C
// size: 0x7290
extern struct TextDat AllDats[282];

// address: 0x80120104
static bool ChunkGot;

// address: 0x800AE278
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800AE288
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800AE298
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x80120118
extern unsigned long BL_NoLumpFiles;

// address: 0x8012011C
extern unsigned long BL_NoStreamFiles;

// address: 0x80120120
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x80120124
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x80120128
extern unsigned char FileLoaded;

// address: 0x80120158
extern int NoTAllocs;

// address: 0x800AE3C4
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x80121728
static bool CanPause;

// address: 0x8012172C
static bool Paused;

// address: 0x80121730
// size: 0x8
static struct RECT PRect;

// address: 0x80121CA0
// size: 0x10
static struct Dialog PBack;

// address: 0x800AE62C
// size: 0x22
extern char RawPadData0[34];

// address: 0x800AE650
// size: 0x22
extern char RawPadData1[34];

// address: 0x800AE674
// size: 0x708
extern unsigned char demo_buffer[1800];

// address: 0x80120184
extern int demo_pad_time;

// address: 0x80120188
extern int demo_pad_count;

// address: 0x800AE554
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800AE5C0
// size: 0x6C
extern struct CPad Pad1;

// address: 0x8012018C
extern unsigned long demo_finish;

// address: 0x80120190
extern int cac_pad;

// address: 0x801201AC
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x801201B0
// size: 0x34
extern struct POLY_GT4 *CharGt4;

// address: 0x801201B4
extern int CharFrm;

// address: 0x8012019D
extern unsigned char WHITER;

// address: 0x8012019E
extern unsigned char WHITEG;

// address: 0x8012019F
extern unsigned char WHITEB;

// address: 0x801201A0
extern unsigned char BLUER;

// address: 0x801201A1
extern unsigned char BLUEG;

// address: 0x801201A2
extern unsigned char BLUEB;

// address: 0x801201A3
extern unsigned char REDR;

// address: 0x801201A4
extern unsigned char REDG;

// address: 0x801201A5
extern unsigned char REDB;

// address: 0x801201A6
extern unsigned char GOLDR;

// address: 0x801201A7
extern unsigned char GOLDG;

// address: 0x801201A8
extern unsigned char GOLDB;

// address: 0x800AED7C
// size: 0x218
extern struct CFont MediumFont;

// address: 0x800AEF94
// size: 0x218
extern struct CFont LargeFont;

// address: 0x800AF1AC
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800AF260
// size: 0x10
extern struct FontTab LFont;

// address: 0x800AF270
// size: 0x12E
extern struct FontItem MFontTab[151];

// address: 0x800AF3A0
// size: 0x10
extern struct FontTab MFont;

// address: 0x801201C9
extern unsigned char DialogRed;

// address: 0x801201CA
extern unsigned char DialogGreen;

// address: 0x801201CB
extern unsigned char DialogBlue;

// address: 0x801201CC
extern unsigned char DialogTRed;

// address: 0x801201CD
extern unsigned char DialogTGreen;

// address: 0x801201CE
extern unsigned char DialogTBlue;

// address: 0x801201D0
// size: 0x68
extern struct TextDat *DialogTData;

// address: 0x801201D4
extern int DialogBackGfx;

// address: 0x801201D8
extern int DialogBackW;

// address: 0x801201DC
extern int DialogBackH;

// address: 0x801201E0
extern int DialogBorderGfx;

// address: 0x801201E4
extern int DialogBorderTLW;

// address: 0x801201E8
extern int DialogBorderTLH;

// address: 0x801201EC
extern int DialogBorderTRW;

// address: 0x801201F0
extern int DialogBorderTRH;

// address: 0x801201F4
extern int DialogBorderBLW;

// address: 0x801201F8
extern int DialogBorderBLH;

// address: 0x801201FC
extern int DialogBorderBRW;

// address: 0x80120200
extern int DialogBorderBRH;

// address: 0x80120204
extern int DialogBorderTW;

// address: 0x80120208
extern int DialogBorderTH;

// address: 0x8012020C
extern int DialogBorderBW;

// address: 0x80120210
extern int DialogBorderBH;

// address: 0x80120214
extern int DialogBorderLW;

// address: 0x80120218
extern int DialogBorderLH;

// address: 0x8012021C
extern int DialogBorderRW;

// address: 0x80120220
extern int DialogBorderRH;

// address: 0x80120224
extern int DialogBevelGfx;

// address: 0x80120228
extern int DialogBevelCW;

// address: 0x8012022C
extern int DialogBevelCH;

// address: 0x80120230
extern int DialogBevelLRW;

// address: 0x80120234
extern int DialogBevelLRH;

// address: 0x80120238
extern int DialogBevelUDW;

// address: 0x8012023C
extern int DialogBevelUDH;

// address: 0x80120240
extern int MY_DialogOTpos;

// address: 0x80121738
static unsigned char DialogGBack;

// address: 0x80121739
static char GShadeX;

// address: 0x8012173A
static char GShadeY;

// address: 0x80121740
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800AF3F0
// size: 0x70
extern int Cxy[28];

// address: 0x801201C3
extern unsigned char BORDERR;

// address: 0x801201C4
extern unsigned char BORDERG;

// address: 0x801201C5
extern unsigned char BORDERB;

// address: 0x801201C6
extern unsigned char BACKR;

// address: 0x801201C7
extern unsigned char BACKG;

// address: 0x801201C8
extern unsigned char BACKB;

// address: 0x800AF3B0
// size: 0x40
static char GShadeTab[64];

// address: 0x801201C1
static char GShadePX;

// address: 0x801201C2
static char GShadePY;

// address: 0x8012024D
extern unsigned char PlayDemoFlag;

// address: 0x80121CB0
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x80121CE0
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x80121748
static int blockr;

// address: 0x8012174C
static int blockg;

// address: 0x80121750
static int blockb;

// address: 0x80121754
static int InfraFlag;

// address: 0x80120259
extern unsigned char P1ObjSelCount;

// address: 0x8012025A
extern unsigned char P2ObjSelCount;

// address: 0x8012025B
extern unsigned char P12ObjSelCount;

// address: 0x8012025C
extern unsigned char P1ItemSelCount;

// address: 0x8012025D
extern unsigned char P2ItemSelCount;

// address: 0x8012025E
extern unsigned char P12ItemSelCount;

// address: 0x8012025F
extern unsigned char P1MonstSelCount;

// address: 0x80120260
extern unsigned char P2MonstSelCount;

// address: 0x80120261
extern unsigned char P12MonstSelCount;

// address: 0x80120262
static unsigned short P1ObjSelCol;

// address: 0x80120264
static unsigned short P2ObjSelCol;

// address: 0x80120266
static unsigned short P12ObjSelCol;

// address: 0x80120268
static unsigned short P1ItemSelCol;

// address: 0x8012026A
static unsigned short P2ItemSelCol;

// address: 0x8012026C
static unsigned short P12ItemSelCol;

// address: 0x8012026E
static unsigned short P1MonstSelCol;

// address: 0x80120270
static unsigned short P2MonstSelCol;

// address: 0x80120272
static unsigned short P12MonstSelCol;

// address: 0x80120274
// size: 0xDC
extern struct CBlocks *CurrentBlocks;

// address: 0x80115E40
// size: 0x40
static short SinTab[32];

// address: 0x800AF460
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x80120288
extern int mypaloff;

// address: 0x80115ECC
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x80121D10
// size: 0xC
static struct Overlay FrontEndOver;

// address: 0x80121D20
// size: 0xC
static struct Overlay PregameOver;

// address: 0x80121D30
// size: 0xC
static struct Overlay GameOver;

// address: 0x80121758
static int OWorldX;

// address: 0x8012175C
static int OWorldY;

// address: 0x80121760
static int WWorldX;

// address: 0x80121764
static int WWorldY;

// address: 0x80115F48
// size: 0x20
static short TxyAdd[16];

// address: 0x801202AC
extern int GXAdj2;

// address: 0x80121768
static int TimePerFrame;

// address: 0x8012176C
static int CpuStart;

// address: 0x80121770
static int CpuTime;

// address: 0x80121774
static int DrawTime;

// address: 0x80121778
static int DrawStart;

// address: 0x8012177C
static int LastCpuTime;

// address: 0x80121780
static int LastDrawTime;

// address: 0x80121784
static int DrawArea;

// address: 0x801202B4
extern bool ProfOn;

// address: 0x800AF474
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x8011608C
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800AF488
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800AF4DC
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800AF530
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800AF584
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800AF5D8
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x801202DC
extern int hof;

// address: 0x801202E0
extern int mof;

// address: 0x800AF6A0
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x80120314
extern unsigned long Time;

// address: 0x800AF7A0
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x801202F0
extern unsigned long *STR_Buffer;

// address: 0x801202F4
extern char NoActiveStreams;

// address: 0x801202F8
static bool STRInit;

// address: 0x80120338
extern char SFXNotPlayed;

// address: 0x80120339
extern char SFXNotInBank;

// address: 0x80121D40
// size: 0x108
static char spu_management[264];

// address: 0x80121E50
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x8012178C
static unsigned short NoSfx;

// address: 0x80120324
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x80120328
static long OffsetHandle;

// address: 0x8012032C
static int BankBase;

// address: 0x80120330
static unsigned char SPU_Done;

// address: 0x80116450
// size: 0xB0
static int SFXRemapTab[44];

// address: 0x80120334
static int NoSNDRemaps;

// address: 0x800AF7E0
// size: 0x18C
extern struct PalCollection ThePals;

// address: 0x80116534
// size: 0x40
static struct InitPos InitialPositions[16];

// address: 0x80120380
extern int demo_level;

// address: 0x80120384
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x80120388
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x8012038C
// size: 0x5C
extern struct TASK *tonys;

// address: 0x80120364
extern int demo_load;

// address: 0x80120368
extern int demo_record_load;

// address: 0x8012036C
extern int level_record;

// address: 0x80120360
extern int moo_moo;

// address: 0x80120370
extern unsigned char demo_flash;

// address: 0x80120374
extern int tonys_Task;

// address: 0x801204E8
extern bool DoShowPanel;

// address: 0x801204EC
extern bool DoDrawBg;

// address: 0x80121790
static bool GlueFinished;

// address: 0x80121794
static bool DoHomingScroll;

// address: 0x80121798
// size: 0x68
static struct TextDat *TownerGfx;

// address: 0x8012179C
static int CurrentMonsterList;

// address: 0x80120399
extern char started_grtask;

// address: 0x800AF96C
// size: 0x288
extern struct PInf PlayerInfo[81];

// address: 0x801204F0
// size: 0x4
static char ArmourChar[4];

// address: 0x80116618
// size: 0xA
static char WepChar[10];

// address: 0x801204F4
// size: 0x4
static char CharChar[4];

// address: 0x801217A0
static char ctrl_select_line;

// address: 0x801217A1
static char ctrl_select_side;

// address: 0x801217A2
static char ckeyheld;

// address: 0x801217A4
static int old_options_pad;

// address: 0x801217A8
// size: 0x8
static struct RECT CtrlRect;

// address: 0x80120508
extern unsigned char ctrlflag;

// address: 0x800AFC9C
// size: 0x140
extern struct KEY_ASSIGNS txt_actions[20];

// address: 0x800AFBF4
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x80120504
extern int CtrlBorder;

// address: 0x80121E68
// size: 0x74
static struct CScreen CtrlScreen;

// address: 0x80121EE8
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800AFDDC
// size: 0xA0
static int controller_defaults[2][20];

// address: 0x8012056C
extern int gr_scrxoff;

// address: 0x80120570
extern int gr_scryoff;

// address: 0x80120578
extern unsigned short water_clut;

// address: 0x8012057C
extern char visible_level;

// address: 0x80120569
extern char last_type;

// address: 0x8012057E
extern char daylight;

// address: 0x8012057A
extern char cow_in_sight;

// address: 0x8012057B
extern char inn_in_sight;

// address: 0x80120574
extern unsigned int water_count;

// address: 0x8012057D
extern unsigned char lastrnd;

// address: 0x80120580
static int call_clock;

// address: 0x80120590
extern int TitleAnimCount;

// address: 0x801166E0
// size: 0x37
static unsigned char light_tile[55];

// address: 0x801205F4
extern int p1scrnx;

// address: 0x801205F8
extern int p1scrny;

// address: 0x801205FC
extern int p1wrldx;

// address: 0x80120600
extern int p1wrldy;

// address: 0x80120604
extern int p2scrnx;

// address: 0x80120608
extern int p2scrny;

// address: 0x8012060C
extern int p2wrldx;

// address: 0x80120610
extern int p2wrldy;

// address: 0x801217B0
static int p1spiny1;

// address: 0x801217B4
static int p1spiny2;

// address: 0x801217B8
static int p1scale;

// address: 0x801217BC
static int p1apocaflag;

// address: 0x801217C0
static int p1apocaxpos;

// address: 0x801217C4
static int p1apocaypos;

// address: 0x801217C8
static int p2spiny1;

// address: 0x801217CC
static int p2spiny2;

// address: 0x801217D0
static int p2scale;

// address: 0x801217D4
static int p2apocaflag;

// address: 0x801217D8
static int p2apocaxpos;

// address: 0x801217DC
static int p2apocaypos;

// address: 0x80121EF8
// size: 0x240
static struct Particle PartArray[16];

// address: 0x801217E0
static int partOtPos;

// address: 0x801205AC
extern int p1teleflag;

// address: 0x801205B0
extern int p1phaseflag;

// address: 0x801205B4
extern int p1inviscount;

// address: 0x801205B8
extern int p2teleflag;

// address: 0x801205BC
extern int p2phaseflag;

// address: 0x801205C0
extern int p2inviscount;

// address: 0x801205C4
extern int SetParticle;

// address: 0x801205C8
static int p1partexecnum;

// address: 0x801205CC
static int p2partexecnum;

// address: 0x800AFE7C
// size: 0x20
static int JumpArray[8];

// address: 0x801205D0
static int partjumpflag;

// address: 0x801205D4
static int partglowflag;

// address: 0x801205D8
static int partcolour;

// address: 0x801205DC
static int healflag;

// address: 0x801205E0
static int healtime;

// address: 0x801205E4
static int healplyr;

// address: 0x8012064D
extern unsigned char select_flag;

// address: 0x801217E4
// size: 0x8
static struct RECT SelectRect;

// address: 0x801217EC
static char item_select;

// address: 0x800AFE9C
// size: 0xC
extern short _psplxpos[3][2];

// address: 0x800AFEA8
// size: 0xC
extern short _psplypos[3][2];

// address: 0x80120650
// size: 0x2
extern char _psplpos[2];

// address: 0x80120654
// size: 0x2
extern char spl_maxrad[2];

// address: 0x80120658
// size: 0x8
extern int splangle[2];

// address: 0x80120620
// size: 0x80
extern struct CPlayer *gplayer;

// address: 0x80120624
// size: 0x2
extern unsigned char _pSplTargetX[2];

// address: 0x80120628
// size: 0x2
extern unsigned char _pSplTargetY[2];

// address: 0x8012062C
// size: 0x2
extern unsigned char _pTargetSpell[2];

// address: 0x80122138
// size: 0x10
static struct Dialog SelectBack;

// address: 0x80120630
// size: 0x8
static int _pspotid[2];

// address: 0x80120638
// size: 0x8
extern int QSpell[2];

// address: 0x80120640
// size: 0x2
extern char _spltotype[2];

// address: 0x80120644
// size: 0x4
extern char mana_order[4];

// address: 0x80120648
// size: 0x4
extern char health_order[4];

// address: 0x8012064C
extern unsigned char birdcheck;

// address: 0x80122148
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x801217F0
static unsigned short progress;

// address: 0x801167F0
// size: 0x28
static unsigned short Level2CutScreen[20];

// address: 0x80120678
static char *CutString;

// address: 0x80122170
// size: 0x74
static struct CScreen Scr;

// address: 0x8012067C
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x80120680
static bool GameLoading;

// address: 0x801221F0
// size: 0x10
static struct Dialog LBack;

// address: 0x80120690
extern unsigned int card_ev0;

// address: 0x80120694
extern unsigned int card_ev1;

// address: 0x80120698
extern unsigned int card_ev2;

// address: 0x8012069C
extern unsigned int card_ev3;

// address: 0x801206A0
extern unsigned int card_ev10;

// address: 0x801206A4
extern unsigned int card_ev11;

// address: 0x801206A8
extern unsigned int card_ev12;

// address: 0x801206AC
extern unsigned int card_ev13;

// address: 0x801206B0
// size: 0x8
extern int card_dirty[2];

// address: 0x801206B8
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x801206BC
extern int card_event;

// address: 0x8012068C
extern void (*mem_card_event_handler)();

// address: 0x80120684
extern bool MemCardActive;

// address: 0x80120688
extern int never_hooked_events;

// address: 0x801217F4
static unsigned long MasterVol;

// address: 0x801217F8
static unsigned long MusicVol;

// address: 0x801217FC
static unsigned long SoundVol;

// address: 0x80121800
static unsigned long VideoVol;

// address: 0x80121804
static unsigned long SpeechVol;

// address: 0x80121808
// size: 0x68
static struct TextDat *Slider;

// address: 0x8012180C
static int sw;

// address: 0x80121810
static int sx;

// address: 0x80121814
static int sy;

// address: 0x80121818
static unsigned char Adjust;

// address: 0x80121819
static unsigned char qspin;

// address: 0x8012181A
static unsigned char lqspin;

// address: 0x8012181C
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x80121820
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x80121824
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x80120768
extern int ReturnMenu;

// address: 0x8012182C
// size: 0x8
static struct RECT ORect;

// address: 0x801206E4
extern bool optionsflag;

// address: 0x801206D8
extern int cmenu;

// address: 0x801206EC
extern int options_pad;

// address: 0x801206F0
extern char *PrevTxt;

// address: 0x801206E0
extern bool allspellsflag;

// address: 0x800B0580
// size: 0x80
extern short Circle[64];

// address: 0x801206CC
static int Spacing;

// address: 0x801206D0
static int cs;

// address: 0x801206D4
static int lastcs;

// address: 0x801206DC
static bool MemcardOverlay;

// address: 0x801206E8
extern int saveflag;

// address: 0x80121834
// size: 0x8
static char *McState[2];

// address: 0x801206F4
extern char *BlankEntry;

// address: 0x800AFEB4
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800AFF5C
// size: 0xC0
extern struct OMENUITEM GameMenu[8];

// address: 0x800B001C
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800B00AC
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800B0154
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800B01FC
// size: 0x60
extern struct OMENUITEM MemcardMenu[4];

// address: 0x800B025C
// size: 0x90
extern struct OMENUITEM MemcardGameMenu[6];

// address: 0x800B02EC
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800B034C
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800B03F4
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800B049C
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800B04FC
// size: 0x84
extern struct OMENULIST MenuList[11];

// address: 0x8012074C
static bool debounce;

// address: 0x80120750
static bool pu;

// address: 0x80120754
static bool pd;

// address: 0x80120758
static bool pl;

// address: 0x8012075C
static bool pr;

// address: 0x80120760
static unsigned char uc;

// address: 0x80120761
static unsigned char dc;

// address: 0x80120762
static unsigned char lc;

// address: 0x80120763
static unsigned char rc;

// address: 0x80120764
static char centrestep;

// address: 0x800B0600
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x80120775
extern char hop_height;

// address: 0x80120778
// size: 0x8
static struct Perch perches[4];

// address: 0x80120870
extern int FeBackX;

// address: 0x80120874
extern int FeBackY;

// address: 0x80120878
extern int FeBackW;

// address: 0x8012087C
extern int FeBackH;

// address: 0x80120880
extern unsigned char FeFlag;

// address: 0x800B09E8
// size: 0x3C0
extern struct FeStruct FeBuffer[40];

// address: 0x8012183C
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x80120884
extern int FeBufferCount;

// address: 0x80120888
extern int FeNoOfPlayers;

// address: 0x8012088C
extern int FePlayerNo;

// address: 0x80120890
// size: 0x8
extern int FeChrClass[2];

// address: 0x800B0DA8
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x80120898
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x8012089C
extern int FeBackScreen;

// address: 0x801208A0
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x801208A4
extern unsigned long FeCount;

// address: 0x801208A8
extern int fileselect;

// address: 0x801208AC
extern int BookMenu;

// address: 0x801208B0
extern int FeAttractMode;

// address: 0x801208B4
extern int FMVPress;

// address: 0x8012078C
// size: 0x68
extern struct TextDat *FeTData;

// address: 0x800B0780
// size: 0x20
extern struct StrInfo LogoFmv;

// address: 0x800B07A0
// size: 0x20
extern struct StrInfo EndFmv;

// address: 0x800B07C0
// size: 0x20
extern struct StrInfo IntroFmv;

// address: 0x800B07E0
// size: 0x20
extern struct StrInfo LazFmv;

// address: 0x800B0800
// size: 0x20
extern struct StrInfo Vic1Fmv;

// address: 0x800B0820
// size: 0x20
extern struct StrInfo Vic2Fmv;

// address: 0x800B0840
// size: 0x20
extern struct StrInfo Vic3Fmv;

// address: 0x80120790
// size: 0x68
extern struct TextDat *FlameTData;

// address: 0x80120794
extern unsigned char FeIsAVirgin;

// address: 0x80120798
extern int FeMenuDelay;

// address: 0x800B0860
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800B087C
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800B0898
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800B08B4
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800B08D0
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800B08EC
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800B0908
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800B0924
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800B0940
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800B095C
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800B0978
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800B0994
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800B09B0
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800B09CC
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x8012079C
extern char *LoadErrorText;

// address: 0x80120864
extern unsigned long AttractTitleDelay;

// address: 0x80120868
extern unsigned long AttractMainDelay;

// address: 0x8012086C
extern int FMVEndPad;

// address: 0x801208E8
extern int InCredits;

// address: 0x801208EC
extern int CreditTitleNo;

// address: 0x801208F0
extern int CreditSubTitleNo;

// address: 0x80121840
static int t1;

// address: 0x80121844
static int t2;

// address: 0x80122200
// size: 0xB8
static struct DRAWENV draw[2];

// address: 0x801222C0
// size: 0x74
static struct DecEnv dec;

// address: 0x80121848
static unsigned long oldHeapbase;

// address: 0x8012184C
// size: 0x4
static struct SndVolume oldVolume;

// address: 0x80121850
static char *ringName;

// address: 0x80120920
// size: 0x14
extern struct STRHDR *ringSH;

// address: 0x80120924
// size: 0x98
extern struct cdstreamstruct *FMVStream;

// address: 0x80121854
static unsigned short *DCTTab;

// address: 0x801208FE
static short firstFrame;

// address: 0x80120900
static short numSkipped;

// address: 0x80120902
static short prevFrameNum;

// address: 0x80120904
static unsigned short maxRunLevel;

// address: 0x80120908
static unsigned long *ringBuf;

// address: 0x8012090C
static int ringcount;

// address: 0x80120910
static int ringpos;

// address: 0x80120914
static int ringsec;

// address: 0x80120918
static int ringHnd;

// address: 0x8012091C
static bool SecGot;

// address: 0x80120938
// size: 0x8
extern int card_status[2];

// address: 0x80120940
// size: 0x8
extern int card_usable[2];

// address: 0x80120948
// size: 0x8
extern int card_files[2];

// address: 0x80120950
// size: 0x8
extern int card_changed[2];

// address: 0x801209C8
extern char *AlertTxt;

// address: 0x801209CC
extern int current_card;

// address: 0x801209D0
extern int LoadType;

// address: 0x801209D4
extern int McMenuPos;

// address: 0x801209D8
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x80120984
extern char *OText3;

// address: 0x801209C4
extern bool fileinfoflag;

// address: 0x801209A0
extern char *DiabloGameFile;

// address: 0x80120968
extern char *Text3;

// address: 0x80120980
extern char *OText2;

// address: 0x80120988
extern char *OText4;

// address: 0x8012098C
extern char *OText5;

// address: 0x80120990
extern char *OText7;

// address: 0x80120994
extern char *OText8;

// address: 0x80120998
extern char *SaveError;

// address: 0x80120964
extern char *Text1;

// address: 0x8012096C
extern char *Text5;

// address: 0x80120970
extern char *Text6;

// address: 0x80120974
extern char *Text7;

// address: 0x80120978
extern char *Text8;

// address: 0x8012097C
extern char *Text9;

// address: 0x8012099C
extern char *ContText;

// address: 0x801209BC
// size: 0x8
extern char *McState_addr_801209BC[2];

// address: 0x80120A78
extern unsigned char *pStatusPanel;

// address: 0x80120A7C
extern unsigned char *pGBoxBuff;

// address: 0x80120A80
extern unsigned char dropGoldFlag;

// address: 0x80120A84
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800B13A0
// size: 0x200
extern char _infostr[256][2];

// address: 0x80120A88
// size: 0x2
extern char _infoclr[2];

// address: 0x800B15A0
// size: 0x100
extern char tempstr[256];

// address: 0x80120A8A
extern unsigned char drawhpflag;

// address: 0x80120A8B
extern unsigned char drawmanaflag;

// address: 0x80120A8C
extern unsigned char chrflag;

// address: 0x80120A8D
extern unsigned char drawbtnflag;

// address: 0x80120A8E
extern unsigned char panbtndown;

// address: 0x80120A8F
extern unsigned char panelflag;

// address: 0x80120A90
extern unsigned char chrbtndown;

// address: 0x80120A91
extern unsigned char lvlbtndown;

// address: 0x80120A92
extern unsigned char sbookflag;

// address: 0x80120A93
extern unsigned char talkflag;

// address: 0x80120A94
extern int dropGoldValue;

// address: 0x80120A98
extern int initialDropGoldValue;

// address: 0x80120A9C
extern int initialDropGoldIndex;

// address: 0x80120AA0
extern unsigned char *pPanelButtons;

// address: 0x80120AA4
extern unsigned char *pPanelText;

// address: 0x80120AA8
extern unsigned char *pManaBuff;

// address: 0x80120AAC
extern unsigned char *pLifeBuff;

// address: 0x80120AB0
extern unsigned char *pChrPanel;

// address: 0x80120AB4
extern unsigned char *pChrButtons;

// address: 0x80120AB8
extern unsigned char *pSpellCels;

// address: 0x80122338
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x80122738
// size: 0x40
static int _pstrjust[8][2];

// address: 0x80121858
// size: 0x8
static int _pnumlines[2];

// address: 0x80120ABC
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x80120AC0
// size: 0x8
extern struct RECT CSRect;

// address: 0x80121868
// size: 0x8
static int _pSpell[2];

// address: 0x80121870
// size: 0x8
static int _pSplType[2];

// address: 0x80121878
// size: 0x8
static unsigned char panbtn[8];

// address: 0x80120AC8
extern int numpanbtns;

// address: 0x80120ACC
extern unsigned char *pDurIcons;

// address: 0x80120AD0
extern unsigned char drawdurflag;

// address: 0x80121880
// size: 0x4
static unsigned char chrbtn[4];

// address: 0x80120AD1
extern unsigned char chrbtnactive;

// address: 0x80120AD4
extern unsigned char *pSpellBkCel;

// address: 0x80120AD8
extern unsigned char *pSBkBtnCel;

// address: 0x80120ADC
extern unsigned char *pSBkIconCels;

// address: 0x80120AE0
extern int sbooktab;

// address: 0x80120AE4
extern int cur_spel;

// address: 0x80121884
static long talkofs;

// address: 0x80122788
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x80121888
static unsigned char sgbTalkSavePos;

// address: 0x80121889
static unsigned char sgbNextTalkSave;

// address: 0x8012188A
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x8012188C
static unsigned char *pTalkPanel;

// address: 0x80121890
static unsigned char *pMultiBtns;

// address: 0x80121894
static unsigned char *pTalkBtns;

// address: 0x80121898
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x80116F68
// size: 0x100
extern unsigned char gbFontTransTbl[256];

// address: 0x80116EA8
// size: 0x44
extern unsigned char fontkern[68];

// address: 0x800B0DD4
// size: 0x25
extern char SpellITbl[37];

// address: 0x801209E5
extern unsigned char DrawLevelUpFlag;

// address: 0x80120A0C
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x80120A08
extern unsigned char spspelstate;

// address: 0x80120A48
extern bool initchr;

// address: 0x801209E8
static int SPLICONNO;

// address: 0x801209EC
static int SPLICONY;

// address: 0x80121860
static int SPLICONRIGHT;

// address: 0x801209F0
static int scx;

// address: 0x801209F4
static int scy;

// address: 0x801209F8
static int scx1;

// address: 0x801209FC
static int scy1;

// address: 0x80120A00
static int scx2;

// address: 0x80120A04
static int scy2;

// address: 0x80120A14
extern char SpellCol;

// address: 0x800B0DC0
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800B0DFC
// size: 0xA0
extern int PanBtnPos[5][8];

// address: 0x800B0E9C
// size: 0x20
extern char *PanBtnHotKey[8];

// address: 0x800B0EBC
// size: 0x20
extern unsigned long PanBtnStr[8];

// address: 0x800B0EDC
// size: 0x64
extern int SpellPages[5][5];

// address: 0x80120A38
static int lus;

// address: 0x80120A3C
static int CsNo;

// address: 0x80120A40
static char plusanim;

// address: 0x80122778
// size: 0x10
static struct Dialog CSBack;

// address: 0x80120A44
static int CS_XOFF;

// address: 0x800B0F40
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x80120A4C
extern int NoCSEntries;

// address: 0x80120A50
static int SPALOFF;

// address: 0x80120A54
static int paloffset1;

// address: 0x80120A58
static int paloffset2;

// address: 0x80120A5C
static int paloffset3;

// address: 0x80120A60
static int paloffset4;

// address: 0x80120A64
static int pinc1;

// address: 0x80120A68
static int pinc2;

// address: 0x80120A6C
static int pinc3;

// address: 0x80120A70
static int pinc4;

// address: 0x80120AF8
// size: 0x8
extern int _pcurs[2];

// address: 0x80120B00
extern int cursW;

// address: 0x80120B04
extern int cursH;

// address: 0x80120B08
extern int icursW;

// address: 0x80120B0C
extern int icursH;

// address: 0x80120B10
extern int icursW28;

// address: 0x80120B14
extern int icursH28;

// address: 0x80120B18
extern int cursmx;

// address: 0x80120B1C
extern int cursmy;

// address: 0x80120B20
// size: 0x8
extern int _pcursmonst[2];

// address: 0x80120B28
// size: 0x2
extern char _pcursobj[2];

// address: 0x80120B2C
// size: 0x2
extern char _pcursitem[2];

// address: 0x80120B30
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x80120B34
// size: 0x2
extern char _pcursplr[2];

// address: 0x80120AF4
extern int sel_data;

// address: 0x800B16A0
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x80120B38
extern int spurtndx;

// address: 0x80120B3C
extern int stonendx;

// address: 0x80120B40
extern unsigned char *pSquareCel;

// address: 0x80120B88
extern unsigned long ghInst;

// address: 0x80120B8C
extern unsigned char svgamode;

// address: 0x80120B90
extern int MouseX;

// address: 0x80120B94
extern int MouseY;

// address: 0x80120B98
extern long gv1;

// address: 0x80120B9C
extern long gv2;

// address: 0x80120BA0
extern long gv3;

// address: 0x80120BA4
extern long gv4;

// address: 0x80120BA8
extern long gv5;

// address: 0x80120BAC
extern unsigned char gbProcessPlayers;

// address: 0x800B1814
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800B183C
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800B1880
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x80120BAD
extern unsigned char gbDoEnding;

// address: 0x80120BAE
extern unsigned char gbRunGame;

// address: 0x80120BAF
extern unsigned char gbRunGameResult;

// address: 0x80120BB0
extern unsigned char gbGameLoopStartup;

// address: 0x801227D8
// size: 0x44
static int glEndSeed[17];

// address: 0x80122828
// size: 0x44
static int glMid1Seed[17];

// address: 0x80122878
// size: 0x44
static int glMid2Seed[17];

// address: 0x801228C8
// size: 0x44
static int glMid3Seed[17];

// address: 0x8012189C
static long *sg_previousFilter;

// address: 0x800B18C4
// size: 0x30
extern int CreateEnv[12];

// address: 0x80120BB4
extern int Passedlvldir;

// address: 0x80120BB8
extern unsigned char *TempStack;

// address: 0x80120B50
extern unsigned long ghMainWnd;

// address: 0x80120B54
extern unsigned char fullscreen;

// address: 0x80120B58
extern int force_redraw;

// address: 0x80120B6C
extern unsigned char PauseMode;

// address: 0x80120B6D
extern unsigned char FriendlyMode;

// address: 0x80120B5D
extern unsigned char visiondebug;

// address: 0x80120B5F
extern unsigned char light4flag;

// address: 0x80120B60
extern unsigned char leveldebug;

// address: 0x80120B61
extern unsigned char monstdebug;

// address: 0x80120B68
extern int debugmonsttypes;

// address: 0x80120B5C
static unsigned char cineflag;

// address: 0x80120B5E
extern unsigned char scrollflag;

// address: 0x80120B62
extern unsigned char trigdebug;

// address: 0x80120B64
extern int setseed;

// address: 0x80120B70
static int sgnTimeoutCurs;

// address: 0x80120B74
extern unsigned char sgbMouseDown;

// address: 0x800B1F90
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x80120BD0
extern int numtowners;

// address: 0x80120BD4
extern unsigned char storeflag;

// address: 0x80120BD5
extern unsigned char boyloadflag;

// address: 0x80120BD6
extern unsigned char bannerflag;

// address: 0x80120BD8
extern unsigned char *pCowCels;

// address: 0x801218A0
static unsigned long sgdwCowClicks;

// address: 0x801218A4
static int sgnCowMsg;

// address: 0x800B1CD0
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x80120BC8
extern unsigned long CowPlaying;

// address: 0x800B18F4
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800B1C6C
// size: 0xC
extern int TownCowX[3];

// address: 0x800B1C78
// size: 0xC
extern int TownCowY[3];

// address: 0x800B1C84
// size: 0xC
extern int TownCowDir[3];

// address: 0x800B1C90
// size: 0x20
extern int cowoffx[8];

// address: 0x800B1CB0
// size: 0x20
extern int cowoffy[8];

// address: 0x80120BDC
extern unsigned char *gpBuffer;

// address: 0x80120BF8
extern int sfxdelay;

// address: 0x80120BFC
extern int sfxdnum;

// address: 0x80120BEC
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800B2D90
// size: 0xF4C
extern struct TSFX sgSFX[979];

// address: 0x80120BF0
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x80120C00
extern long orgseed;

// address: 0x801218A8
static long sglGameSeed;

// address: 0x80120C04
extern int SeedCount;

// address: 0x801218AC
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x801218B0
static int sgnWidth;

// address: 0x80120C12
extern char msgflag;

// address: 0x80120C13
extern char msgdelay;

// address: 0x800B3D8C
// size: 0x50
extern char msgtable[80];

// address: 0x800B3CDC
// size: 0xB0
extern int MsgStrings[44];

// address: 0x80120C11
extern char msgcnt;

// address: 0x801218B4
static unsigned long sgdwProgress;

// address: 0x801218B8
static unsigned long sgdwXY;

// address: 0x800B3DDC
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x801173D4
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x80118774
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x80119494
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x8011A394
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800B3FF0
// size: 0x4A00
extern struct ItemStruct item[128];

// address: 0x800B89F0
// size: 0x7F
extern char itemactive[127];

// address: 0x800B8A70
// size: 0x7F
extern char itemavail[127];

// address: 0x800B8AF0
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x80120C54
extern unsigned char uitemflag;

// address: 0x801218BC
static int tem;

// address: 0x80122910
// size: 0x94
static struct ItemStruct curruitem;

// address: 0x801229B0
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x80120C58
extern int ScrollType;

// address: 0x800B8B70
// size: 0x80
extern char ItemStr[128];

// address: 0x80120C2C
extern long numitems;

// address: 0x80120C30
extern int gnNumGetRecords;

// address: 0x800B3F4C
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800B3E7C
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x8011C1D8
// size: 0x46
static short Item2Frm[35];

// address: 0x800B3F28
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x80120C34
extern int *ItemAnimSnds;

// address: 0x80120C38
extern int idoppely;

// address: 0x80120C3C
extern int ScrollFlag;

// address: 0x800B3FD8
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800B999C
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800B9ADC
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x80120C6C
extern int numlights;

// address: 0x80120C70
extern char lightmax;

// address: 0x800B9B04
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x80120C74
extern int numvision;

// address: 0x80120C78
extern unsigned char dovision;

// address: 0x80120C7C
extern int visionid;

// address: 0x801218C0
static int disp_mask;

// address: 0x801218C4
static int weird;

// address: 0x801218C8
static int disp_tab_r;

// address: 0x801218CC
static int dispy_r;

// address: 0x801218D0
static int disp_tab_g;

// address: 0x801218D4
static int dispy_g;

// address: 0x801218D8
static int disp_tab_b;

// address: 0x801218DC
static int dispy_b;

// address: 0x801218E0
static int radius;

// address: 0x801218E4
static int bright;

// address: 0x801229C0
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x80120C5C
extern int lightflag;

// address: 0x800B96B0
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800B9964
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800B8BF0
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x80120C60
extern int restore_r;

// address: 0x80120C64
extern int restore_g;

// address: 0x80120C68
extern int restore_b;

// address: 0x800B997C
// size: 0x10
extern char radius_tab[16];

// address: 0x800B998C
// size: 0x10
extern char bright_tab[16];

// address: 0x800B9CC4
// size: 0x10
extern char gszHero[16];

// address: 0x80120C9E
extern unsigned char qtextflag;

// address: 0x80120CA0
extern int qtextSpd;

// address: 0x801218E8
static unsigned char *pMedTextCels;

// address: 0x801218EC
static unsigned char *pTextBoxCels;

// address: 0x801218F0
static char *qtextptr;

// address: 0x801218F4
static int qtexty;

// address: 0x801218F8
static unsigned long qtextDelay;

// address: 0x801218FC
static unsigned long sgLastScroll;

// address: 0x80121900
static unsigned long scrolltexty;

// address: 0x80121904
static long sglMusicVolumeSave;

// address: 0x80120C8C
static bool qtbodge;

// address: 0x800B9CD4
// size: 0x10
extern struct Dialog QBack;

// address: 0x80120C9D
static unsigned char CDFlip;

// address: 0x800B9CE4
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800BA454
// size: 0x66D
extern struct MisFileData misfiledata[47];

// address: 0x800BA344
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800BAAC4
// size: 0x17248
extern struct DLevel sgLevels[17];

// address: 0x800D1D0C
// size: 0xD48
extern struct LocalLevel sgLocals[17];

// address: 0x80122A40
// size: 0x20
static struct DJunk sgJunk;

// address: 0x80121909
static unsigned char sgbRecvCmd;

// address: 0x8012190C
static unsigned long sgdwRecvOffset;

// address: 0x80121910
static unsigned char sgbDeltaChunks;

// address: 0x80121911
static unsigned char sgbDeltaChanged;

// address: 0x80121914
static unsigned long sgdwOwnerWait;

// address: 0x80121918
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x8012191C
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x80121920
static int sgnCurrMegaPlayer;

// address: 0x80120CB9
extern unsigned char deltaload;

// address: 0x80120CBA
extern unsigned char gbBufferMsgs;

// address: 0x80120CBC
extern unsigned long dwRecCount;

// address: 0x80120CD2
extern unsigned char gbMaxPlayers;

// address: 0x80120CD3
extern unsigned char gbActivePlayers;

// address: 0x80120CD4
extern unsigned char gbGameDestroyed;

// address: 0x80120CD5
extern unsigned char gbDeltaSender;

// address: 0x80120CD6
extern unsigned char gbSelectProvider;

// address: 0x80120CD7
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x80121924
static unsigned char sgbSentThisCycle;

// address: 0x80121928
static unsigned long sgdwGameLoops;

// address: 0x8012192C
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x80121930
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x80121934
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x8012193C
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x80121944
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x8012194C
// size: 0x2
static unsigned char sgbGameJoiner[2];

// address: 0x8012194E
static unsigned char sgbTimeout;

// address: 0x80121950
static long sglTimeoutStart;

// address: 0x80122A60
// size: 0x1004
static struct TBuffer sgLoPriBuf;

// address: 0x80123A70
// size: 0x1004
static struct TBuffer sgHiPriBuf;

// address: 0x80120CCC
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x80120CD1
static unsigned char sgbNetInited;

// address: 0x800D2A54
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800D2C18
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x8011C8E4
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800D33F8
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x80120CF8
extern long numobjects;

// address: 0x800D49CC
// size: 0x7F
extern char objectactive[127];

// address: 0x800D4A4C
// size: 0x7F
extern char objectavail[127];

// address: 0x80120CFC
extern unsigned char InitObjFlag;

// address: 0x80120D00
extern int trapid;

// address: 0x800D4ACC
// size: 0x28
extern char ObjFileList[40];

// address: 0x80120D04
extern int trapdir;

// address: 0x80120D08
extern int leverid;

// address: 0x80120CF0
extern int numobjfiles;

// address: 0x800D3310
// size: 0x20
extern int bxadd[8];

// address: 0x800D3330
// size: 0x20
extern int byadd[8];

// address: 0x800D33B8
// size: 0x1A
extern char shrineavail[26];

// address: 0x800D3350
// size: 0x68
extern int shrinestrs[26];

// address: 0x800D33D4
// size: 0x24
extern int StoryBookName[9];

// address: 0x80120CF4
extern int myscale;

// address: 0x80120D1C
extern unsigned char gbValidSaveFile;

// address: 0x80120D18
extern bool DoLoadedChar;

// address: 0x800D4CEC
// size: 0x45A0
extern struct PlayerStruct plr[2];

// address: 0x80120D3C
extern int myplr;

// address: 0x80120D40
extern int deathdelay;

// address: 0x80120D44
extern unsigned char deathflag;

// address: 0x80120D45
extern char light_rad;

// address: 0x80120D34
// size: 0x5
extern char light_level[5];

// address: 0x800D4BE4
// size: 0x30
extern int MaxStats[4][3];

// address: 0x80120D2C
static int PlrStructSize;

// address: 0x80120D30
static int ItemStructSize;

// address: 0x800D4AF4
// size: 0x24
extern int plrxoff[9];

// address: 0x800D4B18
// size: 0x24
extern int plryoff[9];

// address: 0x800D4B3C
// size: 0x24
extern int plrxoff2[9];

// address: 0x800D4B60
// size: 0x24
extern int plryoff2[9];

// address: 0x800D4B84
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800D4BA8
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800D4BB4
// size: 0xC
extern int MagicTbl[3];

// address: 0x800D4BC0
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800D4BCC
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800D4BD8
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800D4C14
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800D93C4
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x80120D80
extern unsigned char *pQLogCel;

// address: 0x80120D84
extern int ReturnLvlX;

// address: 0x80120D88
extern int ReturnLvlY;

// address: 0x80120D8C
extern int ReturnLvl;

// address: 0x80120D90
extern int ReturnLvlT;

// address: 0x80120D94
extern int qfade;

// address: 0x80120D98
extern unsigned char rporttest;

// address: 0x80120D9C
extern int qline;

// address: 0x80120DA0
extern int numqlines;

// address: 0x80120DA4
extern int qtopline;

// address: 0x80124A78
// size: 0x40
static int qlist[16];

// address: 0x80121954
// size: 0x8
static struct RECT QSRect;

// address: 0x80120D51
extern unsigned char questlog;

// address: 0x800D928C
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x80120D54
extern int ALLQUESTS;

// address: 0x800D93A0
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800D93AC
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800D93B8
// size: 0xC
extern int QuestGroup3[3];

// address: 0x80120D68
// size: 0x8
extern int QuestGroup4[2];

// address: 0x80120D58
// size: 0x7
static char questxoff[7];

// address: 0x80120D60
// size: 0x7
static char questyoff[7];

// address: 0x800D938C
// size: 0x14
extern int questtrigstr[5];

// address: 0x80120D70
static int QS_PX;

// address: 0x80120D74
static int QS_PY;

// address: 0x80120D78
static int QS_PW;

// address: 0x80120D7C
static int QS_PH;

// address: 0x80124AB8
// size: 0x10
static struct Dialog QSBack;

// address: 0x800D9504
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x80120DE3
extern char stextflag;

// address: 0x800D9D5C
// size: 0xB90
extern struct ItemStruct smithitem[20];

// address: 0x800DA8EC
// size: 0x378
extern struct ItemStruct premiumitem[6];

// address: 0x80120DE4
extern int numpremium;

// address: 0x80120DE8
extern int premiumlevel;

// address: 0x800DAC64
// size: 0xB90
extern struct ItemStruct witchitem[20];

// address: 0x800DB7F4
// size: 0x94
extern struct ItemStruct boyitem;

// address: 0x80120DEC
extern int boylevel;

// address: 0x800DB888
// size: 0x94
extern struct ItemStruct golditem;

// address: 0x800DB91C
// size: 0xB90
extern struct ItemStruct healitem[20];

// address: 0x80120DF0
extern char stextsize;

// address: 0x80120DF1
extern unsigned char stextscrl;

// address: 0x8012195C
static int stextsel;

// address: 0x80121960
static int stextlhold;

// address: 0x80121964
static int stextshold;

// address: 0x80121968
static int stextvhold;

// address: 0x8012196C
static int stextsval;

// address: 0x80121970
static int stextsmax;

// address: 0x80121974
static int stextup;

// address: 0x80121978
static int stextdown;

// address: 0x8012197C
static char stextscrlubtn;

// address: 0x8012197D
static char stextscrldbtn;

// address: 0x8012197E
static char SItemListFlag;

// address: 0x80124AC8
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800DC4AC
// size: 0x1BC0
extern struct ItemStruct storehold[48];

// address: 0x800DE06C
// size: 0x30
extern char storehidx[48];

// address: 0x80121980
static int storenumh;

// address: 0x80121984
static int gossipstart;

// address: 0x80121988
static int gossipend;

// address: 0x8012198C
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x80121994
static int talker;

// address: 0x80120DCC
extern unsigned char *pSTextBoxCels;

// address: 0x80120DD0
extern unsigned char *pSTextSlidCels;

// address: 0x80120DD4
extern int *SStringY;

// address: 0x800D9C88
// size: 0x10
extern struct Dialog SBack;

// address: 0x800D9C98
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800D9CE8
// size: 0x50
extern int SStringYBuy[20];

// address: 0x800D9D38
// size: 0x24
extern int talkname[9];

// address: 0x80120DE2
extern unsigned char InStoreFlag;

// address: 0x80121998
static int sgnMonsters;

// address: 0x801257E8
// size: 0x190
static unsigned short sgwLRU[200];

// address: 0x8012199C
static int sgnLRUScan;

// address: 0x80120E00
static int sgnSyncItem;

// address: 0x80120E04
static int sgnSyncObj;

// address: 0x80120E08
static int sgnSyncPInv;

// address: 0x8011D9A8
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x80120E18
extern unsigned long gdwAllTextEntries;

// address: 0x801219A0
static unsigned char *P3Tiles;

// address: 0x80120E28
extern int tile;

// address: 0x80120E38
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800DE2D4
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x80120E3C
extern int numtrigs;

// address: 0x80120E40
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x80120E44
extern int TWarpFrom;

// address: 0x800DE09C
// size: 0x2C
extern int TownDownList[11];

// address: 0x800DE0C8
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800DE0FC
// size: 0x30
extern int L1UpList[12];

// address: 0x800DE12C
// size: 0x28
extern int L1DownList[10];

// address: 0x800DE154
// size: 0xC
extern int L2UpList[3];

// address: 0x800DE160
// size: 0x14
extern int L2DownList[5];

// address: 0x800DE174
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800DE180
// size: 0x3C
extern int L3UpList[15];

// address: 0x800DE1BC
// size: 0x24
extern int L3DownList[9];

// address: 0x800DE1E0
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800DE218
// size: 0x10
extern int L4UpList[4];

// address: 0x800DE228
// size: 0x18
extern int L4DownList[6];

// address: 0x800DE240
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800DE250
// size: 0x84
extern int L4PentaList[33];

// address: 0x8011E760
// size: 0xA
static char cursoff[10];

// address: 0x80120E5E
extern unsigned char gbMusicOn;

// address: 0x80120E5F
extern unsigned char gbSoundOn;

// address: 0x80120E5D
extern unsigned char gbSndInited;

// address: 0x80120E64
extern long sglMasterVolume;

// address: 0x80120E68
extern long sglMusicVolume;

// address: 0x80120E6C
extern long sglSoundVolume;

// address: 0x80120E70
extern long sglSpeechVolume;

// address: 0x80120E60
extern unsigned char gbDupSounds;

// address: 0x80120E74
static int sgnMusicTrack;

// address: 0x80120E78
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x8011E820
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x80120EA0
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800DE324
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x80120EA8
// size: 0x2
extern char _pfind_index[2];

// address: 0x80120EAC
// size: 0x2
extern char _pfindx[2];

// address: 0x80120EB0
// size: 0x2
extern char _pfindy[2];

// address: 0x80120EB2
extern unsigned char automapmoved;

// address: 0x80120E90
extern unsigned char flyflag;

// address: 0x80120E88
// size: 0x8
extern char (*pad_styles[2])();

// address: 0x80120E91
extern char speed_type;

// address: 0x80120E92
extern char sel_speed;

// address: 0x80120E9C
extern int whatmon;

// address: 0x801219A4
static unsigned long (*CurrentProc)();

// address: 0x8011E9B4
// size: 0x58
static struct MESSAGE_STR AllMsgs[11];

// address: 0x80120EE0
extern int NumOfStrings;

// address: 0x80120EB4
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x80120EB8
extern long hndText;

// address: 0x80120EBC
extern char **TextPtr;

// address: 0x80120EC0
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x80120EF0
// size: 0x68
extern struct TextDat *MissDat;

// address: 0x80120EF4
extern int CharFade;

// address: 0x80120EF8
extern int rotateness;

// address: 0x80120EFC
extern int spiralling_shape;

// address: 0x80120F00
extern int down;

// address: 0x800DE374
// size: 0x10
extern char MlTab[16];

// address: 0x800DE384
// size: 0x10
extern char QlTab[16];

// address: 0x800DE394
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x80120F1C
extern int MyXoff1;

// address: 0x80120F20
extern int MyYoff1;

// address: 0x80120F24
extern int MyXoff2;

// address: 0x80120F28
extern int MyYoff2;

// address: 0x80120F38
extern bool iscflag;

// address: 0x80120F45
static unsigned char sgbFadedIn;

// address: 0x80120F46
static unsigned char screenbright;

// address: 0x80120F48
static int faderate;

// address: 0x80120F4C
static bool fading;

// address: 0x80120F68
// size: 0x8
static unsigned char AmShiftTab[8];

// address: 0x801219A8
static unsigned char *tbuff;

// address: 0x801219AC
static unsigned char HR1;

// address: 0x801219AD
static unsigned char HR2;

// address: 0x801219AE
static unsigned char HR3;

// address: 0x801219AF
static unsigned char VR1;

// address: 0x801219B0
static unsigned char VR2;

// address: 0x801219B1
static unsigned char VR3;

// address: 0x80120FDC
// size: 0x18
extern struct NODE *pHallList;

// address: 0x80120FE0
extern int nRoomCnt;

// address: 0x80120FE4
extern int nSx1;

// address: 0x80120FE8
extern int nSy1;

// address: 0x80120FEC
extern int nSx2;

// address: 0x80120FF0
extern int nSy2;

// address: 0x80120F94
extern int Area_Min;

// address: 0x80120F98
extern int Room_Max;

// address: 0x80120F9C
extern int Room_Min;

// address: 0x80120FA0
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x80120FA8
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x80120FB0
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x80120FB8
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x80120FC0
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x80120FC4
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x80120FC8
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x80120FCC
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x80120FD0
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x80120FD4
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x80120FD8
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x801219B4
static int abyssx;

// address: 0x801219B8
static unsigned char lavapool;

// address: 0x8012107C
extern int lockoutcnt;

// address: 0x80121000
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x80121008
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x80121010
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x80121018
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x80121020
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x80121028
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x80121030
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x80121038
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x80121040
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x80121048
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x80121050
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x80121058
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x80121060
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x80121068
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x8012106C
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x80121070
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x80121074
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x80121078
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x80121080
extern int diabquad1x;

// address: 0x80121084
extern int diabquad2x;

// address: 0x80121088
extern int diabquad3x;

// address: 0x8012108C
extern int diabquad4x;

// address: 0x80121090
extern int diabquad1y;

// address: 0x80121094
extern int diabquad2y;

// address: 0x80121098
extern int diabquad3y;

// address: 0x8012109C
extern int diabquad4y;

// address: 0x801210A0
extern int SP4x1;

// address: 0x801210A4
extern int SP4y1;

// address: 0x801210A8
extern int SP4x2;

// address: 0x801210AC
extern int SP4y2;

// address: 0x801210B0
extern int l4holdx;

// address: 0x801210B4
extern int l4holdy;

// address: 0x801210C4
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x801210CC
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800DE51C
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800DE530
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800DE54C
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x801210D4
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800DE560
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x801211C8
static bool DoUiForChooseMonster;

// address: 0x800DE584
// size: 0x88
static char *MgToText[34];

// address: 0x800DE60C
// size: 0x24
extern int StoryText[3][3];

// address: 0x800DE630
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800DF830
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800DFE70
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x801211F4
extern int setpc_x;

// address: 0x801211F8
extern int setpc_y;

// address: 0x801211FC
extern int setpc_w;

// address: 0x80121200
extern int setpc_h;

// address: 0x80121204
extern unsigned char setloadflag;

// address: 0x80121208
extern unsigned char *pMegaTiles;

// address: 0x800E04B0
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800E0CB4
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800E14B8
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800E1CBC
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800E24C0
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x8012120C
extern int dminx;

// address: 0x80121210
extern int dminy;

// address: 0x80121214
extern int dmaxx;

// address: 0x80121218
extern int dmaxy;

// address: 0x8012121C
extern int gnDifficulty;

// address: 0x80121220
extern unsigned char currlevel;

// address: 0x80121221
extern unsigned char leveltype;

// address: 0x80121222
extern unsigned char setlevel;

// address: 0x80121223
extern unsigned char setlvlnum;

// address: 0x80121224
extern unsigned char setlvltype;

// address: 0x80121228
extern int ViewX;

// address: 0x8012122C
extern int ViewY;

// address: 0x80121230
extern int ViewDX;

// address: 0x80121234
extern int ViewDY;

// address: 0x80121238
extern int ViewBX;

// address: 0x8012123C
extern int ViewBY;

// address: 0x800E2CC4
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x80121240
extern int LvlViewX;

// address: 0x80121244
extern int LvlViewY;

// address: 0x80121248
extern int btmbx;

// address: 0x8012124C
extern int btmby;

// address: 0x80121250
extern int btmdx;

// address: 0x80121254
extern int btmdy;

// address: 0x80121258
extern int MicroTileLen;

// address: 0x8012125C
extern char TransVal;

// address: 0x800E2CD8
// size: 0x20
extern bool TransList[8];

// address: 0x80121260
extern int themeCount;

// address: 0x800E2CF8
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x80104FB8
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x80105B1C
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x80106680
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x801071E4
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x801211E4
extern unsigned char *pSetPiece;

// address: 0x801211E8
extern int DungSize;

// address: 0x801073B0
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x801212A0
extern int numthemes;

// address: 0x801212A4
extern int zharlib;

// address: 0x801212A8
extern unsigned char armorFlag;

// address: 0x801212A9
extern unsigned char bCrossFlag;

// address: 0x801212AA
extern unsigned char weaponFlag;

// address: 0x801212AC
extern int themex;

// address: 0x801212B0
extern int themey;

// address: 0x801212B4
extern int themeVar1;

// address: 0x801212B8
extern unsigned char bFountainFlag;

// address: 0x801212B9
extern unsigned char cauldronFlag;

// address: 0x801212BA
extern unsigned char mFountainFlag;

// address: 0x801212BB
extern unsigned char pFountainFlag;

// address: 0x801212BC
extern unsigned char tFountainFlag;

// address: 0x801212BD
extern unsigned char treasureFlag;

// address: 0x801212C0
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x80107290
// size: 0x10
extern int ThemeGood[4];

// address: 0x801072A0
// size: 0x64
extern int trm5x[25];

// address: 0x80107304
// size: 0x64
extern int trm5y[25];

// address: 0x80107368
// size: 0x24
extern int trm3x[9];

// address: 0x8010738C
// size: 0x24
extern int trm3y[9];

// address: 0x80121378
extern int nummissiles;

// address: 0x80107580
// size: 0x1F4
extern int missileactive[125];

// address: 0x80107774
// size: 0x1F4
extern int missileavail[125];

// address: 0x8012137C
extern unsigned char MissilePreFlag;

// address: 0x80107968
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x8012137D
extern unsigned char ManashieldFlag;

// address: 0x8012137E
extern unsigned char ManashieldFlag2;

// address: 0x80107540
// size: 0x20
extern int XDirAdd[8];

// address: 0x80107560
// size: 0x20
extern int YDirAdd[8];

// address: 0x80121365
extern unsigned char fadetor;

// address: 0x80121366
extern unsigned char fadetog;

// address: 0x80121367
extern unsigned char fadetob;

// address: 0x8010A218
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x801213DC
extern long nummonsters;

// address: 0x8010F998
// size: 0x190
extern short monstactive[200];

// address: 0x8010FB28
// size: 0x190
extern short monstkills[200];

// address: 0x8010FCB8
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x801213E0
extern long monstimgtot;

// address: 0x801213E4
extern char totalmonsters;

// address: 0x801213E8
extern int uniquetrans;

// address: 0x801219BC
static unsigned char sgbSaveSoundOn;

// address: 0x801213B0
// size: 0x8
extern char offset_x[8];

// address: 0x801213B8
// size: 0x8
extern char offset_y[8];

// address: 0x80121398
// size: 0x8
extern char left[8];

// address: 0x801213A0
// size: 0x8
extern char right[8];

// address: 0x801213A8
// size: 0x8
extern char opposite[8];

// address: 0x8012138C
extern int nummtypes;

// address: 0x80121390
// size: 0x7
extern char animletter[7];

// address: 0x8010A078
// size: 0x120
extern int MWVel[3][24];

// address: 0x801213C0
// size: 0x4
extern char rnd5[4];

// address: 0x801213C4
// size: 0x4
extern char rnd10[4];

// address: 0x801213C8
// size: 0x4
extern char rnd20[4];

// address: 0x801213CC
// size: 0x4
extern char rnd60[4];

// address: 0x8010A198
// size: 0x80
extern void (*AiProc[32])();

// address: 0x80110190
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x80111BD0
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x80111C50
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x80111CC0
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x8010FF78
// size: 0x218
extern int TransPals[134];

// address: 0x8010FE78
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x80112610
// size: 0x60
extern struct PortalStruct portal[4];

// address: 0x80121404
extern int portalindex;

// address: 0x801125F0
// size: 0x10
extern int WarpDropX[4];

// address: 0x80112600
// size: 0x10
extern int WarpDropY[4];

// address: 0x8012141C
extern unsigned char invflag;

// address: 0x8012141D
extern unsigned char drawsbarflag;

// address: 0x80121420
extern int InvBackY;

// address: 0x80121424
// size: 0x68
extern struct TextDat *InvPanelTData;

// address: 0x80121428
// size: 0x68
extern struct TextDat *InvGfxTData;

// address: 0x8012142C
extern int InvCursPos;

// address: 0x80112CF0
// size: 0x94
extern struct ItemStruct InvSpareSlot;

// address: 0x80112D84
// size: 0x4A
extern unsigned char InvSlotTable[74];

// address: 0x80121430
extern int InvBackAY;

// address: 0x80121434
extern int InvSel;

// address: 0x80121438
extern int ItemW;

// address: 0x8012143C
extern int ItemH;

// address: 0x80121440
extern int ItemNo;

// address: 0x80121444
extern unsigned char InvSpareFlag;

// address: 0x80121448
// size: 0x8
extern struct RECT BRect;

// address: 0x80112670
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x80112698
// size: 0x250
extern struct InvXY InvRect[74];

// address: 0x801128E8
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x80112B88
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x80112C3C
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x80121414
static unsigned long sgdwLastTime;

// address: 0x80121418
extern int InvSpareSel;

// address: 0x80121459
extern unsigned char automapflag;

// address: 0x80112DD0
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x80112E98
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8012145A
extern unsigned char AMLWallFlag;

// address: 0x8012145B
extern unsigned char AMRWallFlag;

// address: 0x8012145C
extern unsigned char AMLLWallFlag;

// address: 0x8012145D
extern unsigned char AMLRWallFlag;

// address: 0x8012145E
extern unsigned char AMDirtFlag;

// address: 0x8012145F
extern unsigned char AMColumnFlag;

// address: 0x80121460
extern unsigned char AMStairFlag;

// address: 0x80121461
extern unsigned char AMLDoorFlag;

// address: 0x80121462
extern unsigned char AMLGrateFlag;

// address: 0x80121463
extern unsigned char AMLArchFlag;

// address: 0x80121464
extern unsigned char AMRDoorFlag;

// address: 0x80121465
extern unsigned char AMRGrateFlag;

// address: 0x80121466
extern unsigned char AMRArchFlag;

// address: 0x80121468
extern int AutoMapX;

// address: 0x8012146C
extern int AutoMapY;

// address: 0x80121470
extern int AutoMapXOfs;

// address: 0x80121474
extern int AutoMapYOfs;

// address: 0x80121478
extern int AMPlayerX;

// address: 0x8012147C
extern int AMPlayerY;

// address: 0x80121B18
extern unsigned long GazTick;

// address: 0x8012A000
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A5984
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x80121B40
extern void (*PollFunc)();

// address: 0x80121B24
extern void (*MsgFunc)();

// address: 0x80121B70
extern void (*ErrorFunc)();

// address: 0x80121B2C
extern void *LastPtr;

// address: 0x800A59BC
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x80121A44
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x80127F98
// size: 0xA00
static struct MEM_HDR MemHdrBlocks[80];

// address: 0x80121A48
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x80121A4C
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x80121A50
static int TimeStamp;

// address: 0x80121A54
static unsigned char FullErrorChecking;

// address: 0x80121A58
static unsigned long LastAttemptedAlloc;

// address: 0x80121A5C
static unsigned long LastDeallocedBlock;

// address: 0x80121A60
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x80121A64
static int NumOfFreeHdrs;

// address: 0x80121A68
static unsigned long LastTypeAlloced;

// address: 0x80121A6C
static void (*AllocFilter)();

// address: 0x800A59C4
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A59EC
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80121A70
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x80121A74
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x80121A78
// size: 0x5C
static struct TASK *T;

// address: 0x80121A7C
static unsigned long MemTypeForTasker;

// address: 0x80128998
// size: 0x30
static int SchEnv[12];

// address: 0x80121A80
static unsigned long ExecId;

// address: 0x80121A84
static unsigned long ExecMask;

// address: 0x80121A88
static int TasksActive;

// address: 0x80121A8C
static void (*EpiFunc)();

// address: 0x80121A90
static void (*ProFunc)();

// address: 0x80121A94
static unsigned long EpiProId;

// address: 0x80121A98
static unsigned long EpiProMask;

// address: 0x80121A9C
static void (*DoTasksPrologue)();

// address: 0x80121AA0
static void (*DoTasksEpilogue)();

// address: 0x80121AA4
static void (*StackFloodCallback)();

// address: 0x80121AA8
static unsigned char ExtraStackProtection;

// address: 0x80121AAC
static int ExtraStackSizeLongs;

// address: 0x801289C8
// size: 0x1380
static char buf[4992];

// address: 0x800A5A14
// size: 0x7
static char NULL_REP[7];

// address: 0x8007D77C
// line start: 177
// line end:   178
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007D798
// line start: 182
// line end:   183
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007D7A4
// line start: 110
// line end:   119
void Remove96__Fv() {
}


// address: 0x8007D7DC
// line start: 129
// line end:   200
void AppMain() {
}


// address: 0x8007D884
// line start: 208
// line end:   209
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007D8B0
// line start: 217
// line end:   241
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007D948
// line start: 254
// line end:   269
void MAIN_MainLoop__Fv() {
}


// address: 0x8007D99C
// line start: 76
// line end:   80
void CheckMaxArgs__Fv() {
}


// address: 0x8007D9D0
// line start: 96
// line end:   98
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007D9DC
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


// address: 0x8007DB50
// line start: 159
// line end:   178
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007DC04
// line start: 220
// line end:   239
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007DCA4
// line start: 249
// line end:   266
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007DD40
// line start: 276
// line end:   287
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007DDE0
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


// address: 0x8007DEFC
// line start: 186
// line end:   204
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007DFD8
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


// address: 0x8007E100
// line start: 245
// line end:   254
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007E13C
// line start: 267
// line end:   330
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007E344
// line start: 365
// line end:   367
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007E380
// line start: 371
// line end:   372
unsigned char ClearedYet__Fv() {
}


// address: 0x8007E38C
// line start: 380
// line end:   384
void PrimDrawSycnCallBack() {
}


// address: 0x8007E3AC
// line start: 394
// line end:   395
void SendDispEnv__Fv() {
}


// address: 0x8007E3D0
// size: 0x18
// line start: 444
// line end:   448
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007E3E8
// size: 0x28
// line start: 452
// line end:   456
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007E400
// size: 0x34
// line start: 460
// line end:   464
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007E418
// size: 0x24
// line start: 469
// line end:   473
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007E430
// size: 0x14
// line start: 477
// line end:   481
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007E448
// size: 0xC
// line start: 494
// line end:   498
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007E460
// line start: 502
// line end:   531
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007E574
// line start: 537
// line end:   548
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007E5DC
// line start: 127
// line end:   128
void VID_AfterDisplay__Fv() {
}


// address: 0x8007E5FC
// line start: 182
// line end:   184
void VID_ScrOn__Fv() {
}


// address: 0x8007E624
// line start: 203
// line end:   209
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007E67C
// line start: 213
// line end:   214
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007E688
// line start: 218
// line end:   219
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007E694
// line start: 224
// line end:   230
void VID_DispEnvSend() {
}


// address: 0x8007E6D0
// line start: 236
// line end:   238
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007E6E0
// line start: 242
// line end:   243
int VID_GetXOff__Fv() {
}


// address: 0x8007E6EC
// line start: 247
// line end:   248
int VID_GetYOff__Fv() {
}


// address: 0x8007E6F8
// line start: 96
// line end:   116
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007E700
// line start: 148
// line end:   149
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007E720
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007E720(unsigned short tpage) {
}


// address: 0x8007E73C
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007E73C(unsigned short tpage) {
}


// address: 0x8007E748
// size: 0x14
// line start: 162
// line end:   163
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007E754
// size: 0x14
// line start: 172
// line end:   173
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007E760
// line start: 181
// line end:   241
void SortOutFileSystem__Fv() {
}


// address: 0x8007E89C
// line start: 112
// line end:   114
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007E8BC
// line start: 120
// line end:   128
void Spanker__Fv() {
}


// address: 0x8007E8FC
// line start: 246
// line end:   247
void GaryLiddon__Fv() {
}


// address: 0x8007E904
// line start: 58
// line end:   65
void ReadPad__Fi(int NoDeb) {
	// register: 2
	register int New;
}


// address: 0x8007E964
// line start: 69
// line end:   70
void DummyPoll__Fv() {
}


// address: 0x8007E96C
// line start: 73
// line end:   74
void DaveOwens__Fv() {
}


// address: 0x8007E994
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007E9BC
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007E9BC(unsigned short tpage) {
}


// address: 0x8007E9D8
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007E9D8(unsigned short tpage) {
}


// address: 0x8007E9E4
// line start: 473
// line end:   502
void TimSwann__Fv() {
}


// address: 0x8007E9EC
// line start: 24
// line end:   25
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007E9F4
// line start: 29
// line end:   31
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007EA28
// line start: 35
// line end:   38
void leighbird__Fv() {
}


// address: 0x8007EA50
// size: 0x14
// line start: 61
// line end:   63
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007EAA0
// line start: 70
// line end:   71
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007EAF4
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


// address: 0x8007EC5C
// line start: 112
// line end:   119
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007ECC0
// line start: 129
// line end:   131
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007ECE0
// line start: 138
// line end:   150
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007EDC0
// line start: 157
// line end:   171
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007EE84
// line start: 180
// line end:   185
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007EEE8
// line start: 193
// line end:   207
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007EFC4
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


// address: 0x8007F0D8
// line start: 254
// line end:   274
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007F180
// line start: 282
// line end:   286
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007F1D8
// line start: 295
// line end:   299
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007F230
// line start: 308
// line end:   309
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007F244
// line start: 317
// line end:   318
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007F280
// size: 0x14
// line start: 62
// line end:   65
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007F2E8
// line start: 75
// line end:   75
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007F340
// line start: 85
// line end:   93
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007F384
// line start: 106
// line end:   118
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007F448
// line start: 125
// line end:   139
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007F500
// line start: 143
// line end:   160
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007F5D4
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


// address: 0x8007F7E4
// size: 0x4
// line start: 65
// line end:   67
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007F7FC
// line start: 77
// line end:   79
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007F828
// line start: 89
// line end:   101
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007F8A4
// line start: 111
// line end:   119
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007F910
// size: 0x14
// line start: 65
// line end:   68
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007F94C
// line start: 78
// line end:   78
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007F9A4
// line start: 88
// line end:   96
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007F9E4
// line start: 109
// line end:   121
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FAA4
// line start: 128
// line end:   142
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007FB58
// line start: 146
// line end:   158
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FC00
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


// address: 0x8007FE0C
// size: 0x68
// line start: 110
// line end:   116
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007FE4C
// line start: 126
// line end:   127
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007FE94
// line start: 137
// line end:   195
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


// address: 0x80080088
// line start: 213
// line end:   241
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80121720
	static int TpX;
	// address: 0x80121724
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


// address: 0x80080158
// line start: 244
// line end:   268
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x80080210
// line start: 283
// line end:   296
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8008026C
// line start: 307
// line end:   314
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x800802DC
// line start: 319
// line end:   341
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


// address: 0x80080408
// line start: 351
// line end:   409
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


// address: 0x80080504
// size: 0x28
// line start: 425
// line end:   562
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


// address: 0x8008090C
// line start: 568
// line end:   625
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


// address: 0x80080B78
// line start: 633
// line end:   667
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


// address: 0x80080CD8
// line start: 672
// line end:   730
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


// address: 0x80080DD4
// line start: 734
// line end:   805
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


// address: 0x80081030
// line start: 812
// line end:   839
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


// address: 0x800810B0
// line start: 844
// line end:   902
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


// address: 0x80081274
// size: 0x28
// line start: 916
// line end:   935
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x800813C8
// size: 0x34
// line start: 941
// line end:   960
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8008151C
// size: 0x28
// line start: 966
// line end:   982
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x80081600
// line start: 987
// line end:   1025
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x80081754
// line start: 1034
// line end:   1064
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


// address: 0x80081894
// line start: 1074
// line end:   1098
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x80081990
// line start: 1155
// line end:   1165
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x800819BC
// line start: 1175
// line end:   1210
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x80081B04
// size: 0x68
// line start: 1221
// line end:   1224
struct TextDat *GM_UseTexData__Fi(int Id) {
}


// address: 0x80081B78
// line start: 1234
// line end:   1235
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x80081B98
// line start: 1261
// line end:   1262
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x80081BEC
// line start: 1266
// line end:   1267
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x80081C44
// line start: 1276
// line end:   1306
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


// address: 0x80081D68
// line start: 1344
// line end:   1370
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


// address: 0x80081E3C
// size: 0x4
// line start: 1374
// line end:   1376
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x80081E8C
// line start: 1382
// line end:   1383
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x80081EB4
// line start: 1387
// line end:   1393
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x80081F5C
// line start: 1399
// line end:   1427
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


// address: 0x8008201C
// line start: 1431
// line end:   1435
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x80082060
// size: 0xE
// line start: 1439
// line end:   1447
struct CCreatureAction *GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x800820F0
// line start: 1451
// line end:   1458
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80082160
// line start: 1463
// line end:   1474
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


// address: 0x800821CC
// line start: 1482
// line end:   1484
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8008221C
// line start: 1497
// line end:   1498
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80082244
// line start: 1502
// line end:   1515
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


// address: 0x800822E0
// line start: 1520
// line end:   1529
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x80082348
// line start: 1561
// line end:   1603
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


// address: 0x8008241C
// size: 0x74
// line start: 1617
// line end:   1618
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x80082450
// line start: 1622
// line end:   1659
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


// address: 0x80082604
// line start: 1664
// line end:   1666
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x80082628
// line start: 1670
// line end:   1699
void Display__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x800828FC
// line start: 1707
// line end:   1715
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80082974
// line start: 1719
// line end:   1763
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


// address: 0x80082AD0
// line start: 1801
// line end:   1801
void _GLOBAL__D_AllDats() {
}


// address: 0x80082B28
// line start: 1801
// line end:   1801
void _GLOBAL__I_AllDats() {
}


// address: 0x80082B7C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x80082BF8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x80082C74
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80082CF0
// line start: 249
// line end:   270
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


// address: 0x80082DB8
// line start: 246
// line end:   246
bool CanXferFrame__7TextDat(struct TextDat *this) {
}


// address: 0x80082DE0
// line start: 243
// line end:   243
bool CanXferPal__7TextDat(struct TextDat *this) {
}


// address: 0x80082E08
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80082E80
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x80082E94
// line start: 234
// line end:   234
void SetFileInfo__7TextDatPC13CTextFileInfo(struct TextDat *this, struct CTextFileInfo *NewInfo) {
}


// address: 0x80082E9C
// line start: 227
// line end:   227
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x80082EB0
// size: 0x8
// line start: 226
// line end:   226
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x80082ECC
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80082EE8
// line start: 167
// line end:   167
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80082EF4
// line start: 158
// line end:   158
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80082F1C
// line start: 157
// line end:   157
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80082F44
// line start: 66
// line end:   66
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x80082F58
// size: 0x14
// line start: 120
// line end:   123
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x80082F9C
// line start: 133
// line end:   133
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80082FF4
// line start: 143
// line end:   153
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80083018
// line start: 165
// line end:   187
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80083040
// line start: 196
// line end:   206
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80083064
// line start: 212
// line end:   231
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80083144
// line start: 248
// line end:   249
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x80083154
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


// address: 0x800832A0
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


// address: 0x80083500
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


// address: 0x800835EC
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


// address: 0x80083718
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


// address: 0x80083884
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


// address: 0x80083B3C
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


// address: 0x80083C3C
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


// address: 0x80083DD8
// line start: 384
// line end:   386
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80083DFC
// line start: 398
// line end:   404
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80083E30
// line start: 414
// line end:   495
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80083F18
// line start: 505
// line end:   507
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80083F24
// line start: 512
// line end:   529
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x80083F90
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


// address: 0x80084088
// size: 0x14
// line start: 578
// line end:   582
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x800840B4
// line start: 597
// line end:   604
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x800840EC
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


// address: 0x80084204
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


// address: 0x800842D8
// line start: 77
// line end:   108
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x800843FC
// line start: 118
// line end:   137
void Tfree__FPv(void *Addr) {
}


// address: 0x800844AC
// line start: 146
// line end:   151
void InitTmalloc__Fv() {
}


// address: 0x800844D4
// line start: 161
// line end:   167
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80084528
// line start: 166
// line end:   178
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80084574
// line start: 189
// line end:   209
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


// address: 0x80084604
// line start: 220
// line end:   222
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80084630
// line start: 234
// line end:   281
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


// address: 0x800847D0
// line start: 292
// line end:   391
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


// address: 0x80084AC4
// line start: 402
// line end:   429
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


// address: 0x80084BAC
// line start: 439
// line end:   466
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


// address: 0x80084C94
// line start: 490
// line end:   493
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80084CA4
// line start: 503
// line end:   504
bool PA_GetPauseOk__Fv() {
}


// address: 0x80084CB0
// line start: 527
// line end:   536
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80084E00
// line start: 541
// line end:   542
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084E08
// line start: 545
// line end:   556
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80084F08
// line start: 563
// line end:   564
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80084F10
// line start: 567
// line end:   568
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084F18
// line start: 571
// line end:   582
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80085018
// line start: 589
// line end:   590
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80085020
// line start: 593
// line end:   594
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80085028
// line start: 597
// line end:   606
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x8008510C
// line start: 610
// line end:   611
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80085114
// line start: 614
// line end:   614
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x8008513C
// line start: 619
// line end:   619
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80085164
// line start: 619
// line end:   619
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x8008518C
// size: 0xC
// line start: 101
// line end:   101
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800851D0
// line start: 72
// line end:   72
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80085204
// size: 0x8
// line start: 71
// line end:   71
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80085218
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80085238
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80085240
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80085248
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80085270
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x800852CC
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x800852F4
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x8008531C
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


// address: 0x800854D0
// size: 0x6C
// line start: 168
// line end:   178
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x8008556C
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


// address: 0x800856A4
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


// address: 0x80085800
// line start: 267
// line end:   291
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80085924
// line start: 295
// line end:   295
void _GLOBAL__I_Pad0() {
}


// address: 0x8008595C
// line start: 77
// line end:   77
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x80085964
// size: 0x6C
// line start: 75
// line end:   75
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80085998
// line start: 113
// line end:   117
void Flush__4CPad(struct CPad *this) {
}


// address: 0x800859BC
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


// address: 0x80085A58
// line start: 343
// line end:   353
void InitPrinty__Fv() {
}


// address: 0x80085AE0
// line start: 360
// line end:   419
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 21
	register int Cw;
	{
		{
			{
				{
					// register: 3
					register unsigned short LG;
					// register: 4
					register unsigned short LB;
				}
			}
		}
	}
}


// address: 0x80085C68
// line start: 424
// line end:   533
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


// address: 0x80086000
// line start: 538
// line end:   546
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x80086068
// line start: 554
// line end:   556
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x800860CC
// line start: 562
// line end:   565
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x800860D8
// line start: 88
// line end:   88
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x800860FC
// line start: 85
// line end:   85
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x8008611C
// line start: 82
// line end:   82
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80086134
// line start: 71
// line end:   75
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8008618C
// line start: 59
// line end:   59
void Init__5CFont(struct CFont *this) {
}


// address: 0x800861C0
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_800861C0(struct TextDat *this, int FrNum) {
}


// address: 0x800861DC
// line start: 110
// line end:   113
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80086214
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


// address: 0x80086B8C
// size: 0x24
// line start: 391
// line end:   402
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80086CC4
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


// address: 0x80086F68
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


// address: 0x800870A0
// line start: 496
// line end:   552
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x800872F8
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


// address: 0x800884B8
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


// address: 0x800886D0
// size: 0x8
// line start: 226
// line end:   226
struct PAL *GetPal__7TextDati_addr_800886D0(struct TextDat *this, int PalNum) {
}


// address: 0x800886EC
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_800886EC(struct TextDat *this, int FrNum) {
}


// address: 0x80088708
// line start: 65
// line end:   92
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x800887C0
// line start: 97
// line end:   102
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x8008885C
// line start: 233
// line end:   239
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x8008889C
// line start: 244
// line end:   273
void CycleSelCols__Fv() {
}


// address: 0x80088A2C
// line start: 281
// line end:   289
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


// address: 0x80088AA0
// line start: 298
// line end:   304
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80088AF4
// size: 0xDC
// line start: 313
// line end:   367
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x80088C48
// line start: 377
// line end:   379
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088C80
// line start: 388
// line end:   399
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x80088D48
// line start: 409
// line end:   421
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80088DD0
// line start: 431
// line end:   438
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80088E38
// line start: 447
// line end:   454
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80088EA0
// line start: 464
// line end:   469
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x80088EFC
// line start: 479
// line end:   485
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x80088F4C
// line start: 493
// line end:   528
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80089298
// line start: 539
// line end:   549
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x80089340
// line start: 560
// line end:   571
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x80089414
// line start: 581
// line end:   592
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


// address: 0x8008951C
// line start: 602
// line end:   660
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


// address: 0x80089658
// size: 0xC
// line start: 670
// line end:   672
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x800896D0
// line start: 683
// line end:   684
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x800896F8
// line start: 694
// line end:   697
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x80089720
// line start: 707
// line end:   709
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80089738
// line start: 751
// line end:   1248
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


// address: 0x8008AEA0
// line start: 1260
// line end:   1283
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


// address: 0x8008B010
// line start: 1296
// line end:   1645
void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// register: 30
	register int nMonster;
	// register: 20
	register int bItem;
	// register: 2
	register int bObject;
	// register: 19
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
			// size: 0x68
			register struct TextDat *ObjDat;
			{
				{
					// register: 17
					register int ObjIndex;
					// register: 21
					// size: 0x2C
					register struct ObjectStruct *OStr;
					// register: 5
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
																						// register: 17
																						// size: 0x70
																						register struct MonsterStruct *MyMonst;
																						// register: 20
																						// size: 0x68
																						register struct TextDat *CMonstGraphics;
																						// address: 0xFFFFFFC0
																						auto int mi;
																						{
																							{
																								// register: 16
																								register int Frame;
																								// register: 18
																								register int Action;
																								// register: 21
																								register int Dir;
																								// register: 16
																								register int PhysFrame;
																								// register: 19
																								register int Creature;
																								// register: 30
																								register int ScrXOff;
																								// register: 23
																								register int ScrYOff;
																								{
																									{
																										// register: 4
																										register char transfile;
																										// register: 3
																										register unsigned char paloff;
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


// address: 0x8008BD14
// line start: 1654
// line end:   1835
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
														// size: 0x68
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


// address: 0x8008C3D4
// line start: 1843
// line end:   1863
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


// address: 0x8008C544
// line start: 1873
// line end:   1874
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008C558
// line start: 1884
// line end:   1885
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008C56C
// line start: 1895
// line end:   1897
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008C630
// line start: 1907
// line end:   1914
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x8008C698
// line start: 1924
// line end:   1934
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008C738
// line start: 1945
// line end:   1956
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008C80C
// line start: 2013
// line end:   2040
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008C88C
// line start: 2052
// line end:   2053
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008C894
// line start: 2063
// line end:   2064
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008C8A8
// size: 0xDC
// line start: 2100
// line end:   2107
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008C8B4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008C8B4(struct POLY_FT4 **Prim) {
}


// address: 0x8008C930
// line start: 96
// line end:   104
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008C978
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008C9B4
// line start: 96
// line end:   104
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008C9FC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008C9FC(struct POLY_GT4 **Prim) {
}


// address: 0x8008CA78
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x8008CAF4
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


// address: 0x8008CB1C
// line start: 173
// line end:   175
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008CB38
// line start: 167
// line end:   167
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008CB60
// line start: 166
// line end:   166
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008CB88
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008CBAC
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008CBD0
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008CBF8
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008CC04
// line start: 64
// line end:   76
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008CC9C
// line start: 47
// line end:   60
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8008CD2C
// line start: 249
// line end:   270
void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4_addr_8008CD2C(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4) {
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


// address: 0x8008CDF4
// line start: 243
// line end:   243
bool CanXferPal__7TextDat_addr_8008CDF4(struct TextDat *this) {
}


// address: 0x8008CE1C
// line start: 239
// line end:   239
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008CE54
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati_addr_8008CE54(struct TextDat *this, int Creature) {
}


// address: 0x8008CECC
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat_addr_8008CECC(struct TextDat *this) {
}


// address: 0x8008CEE0
// line start: 234
// line end:   234
void SetFileInfo__7TextDatPC13CTextFileInfo_addr_8008CEE0(struct TextDat *this, struct CTextFileInfo *NewInfo) {
}


// address: 0x8008CEE8
// size: 0x8
// line start: 226
// line end:   226
struct PAL *GetPal__7TextDati_addr_8008CEE8(struct TextDat *this, int PalNum) {
}


// address: 0x8008CF04
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_8008CF04(struct TextDat *this, int FrNum) {
}


// address: 0x8008CF20
// line start: 132
// line end:   134
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008CF4C
// line start: 142
// line end:   144
void OVR_LoadPregame__Fv() {
}


// address: 0x8008CF7C
// line start: 152
// line end:   154
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008CFAC
// line start: 163
// line end:   165
void OVR_LoadGame__Fv() {
}


// address: 0x8008CFDC
// line start: 173
// line end:   174
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008D008
// line start: 183
// line end:   188
void ClearOutOverlays__Fv() {
}


// address: 0x8008D050
// line start: 199
// line end:   206
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008D114
// line start: 215
// line end:   228
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008D184
// line start: 233
// line end:   233
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008D260
// line start: 74
// line end:   75
void StevesDummyPoll__Fv() {
}


// address: 0x8008D268
// line start: 78
// line end:   81
void Lambo__Fv() {
}


// address: 0x8008D270
// size: 0x80
// line start: 66
// line end:   111
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008D354
// line start: 122
// line end:   124
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008D3AC
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008D404
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


// address: 0x8008D550
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


// address: 0x8008D97C
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008D9FC
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


// address: 0x8008DE4C
// line start: 398
// line end:   411
void SetpNscrnxy__7CPlayeriiii(struct CPlayer *this, int x, int y, int px, int py) {
}


// address: 0x8008DEB4
// line start: 423
// line end:   481
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008DF30
// size: 0x4
// line start: 486
// line end:   516
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008DF98
// line start: 527
// line end:   528
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008DFA0
// line start: 537
// line end:   538
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008DFA8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008DFA8(struct POLY_FT4 **Prim) {
}


// address: 0x8008E024
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008E024(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008E060
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008E060(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008E088
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008E09C
// line start: 278
// line end:   282
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008E0B4
// line start: 239
// line end:   239
int GetNumOfFrames__7TextDatii_addr_8008E0B4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008E0EC
// line start: 238
// line end:   238
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008E110
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati_addr_8008E110(struct TextDat *this, int Creature) {
}


// address: 0x8008E188
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat_addr_8008E188(struct TextDat *this) {
}


// address: 0x8008E19C
// line start: 234
// line end:   234
void SetFileInfo__7TextDatPC13CTextFileInfo_addr_8008E19C(struct TextDat *this, struct CTextFileInfo *NewInfo) {
}


// address: 0x8008E1A4
// line start: 87
// line end:   94
void PROF_Open__Fv() {
}


// address: 0x8008E1E4
// line start: 99
// line end:   100
bool PROF_State__Fv() {
}


// address: 0x8008E1F0
// line start: 104
// line end:   105
void PROF_On__Fv() {
}


// address: 0x8008E200
// line start: 109
// line end:   110
void PROF_Off__Fv() {
}


// address: 0x8008E20C
// line start: 114
// line end:   115
void PROF_CpuEnd__Fv() {
}


// address: 0x8008E23C
// line start: 119
// line end:   120
void PROF_CpuStart__Fv() {
}


// address: 0x8008E260
// line start: 124
// line end:   125
void PROF_DrawStart__Fv() {
}


// address: 0x8008E284
// line start: 129
// line end:   130
void PROF_DrawEnd__Fv() {
}


// address: 0x8008E2B4
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


// address: 0x8008E4A8
// line start: 179
// line end:   180
void PROF_Restart__Fv() {
}


// address: 0x8008E4C8
// line start: 178
// line end:   212
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008E578
// line start: 223
// line end:   256
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008E618
// line start: 264
// line end:   271
void GoBackLevel__Fv() {
}


// address: 0x8008E690
// line start: 275
// line end:   279
void GoWarpLevel__Fv() {
}


// address: 0x8008E6C8
// line start: 285
// line end:   291
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008E764
// line start: 295
// line end:   310
void GoLoadGame__Fv() {
}


// address: 0x8008E7EC
// line start: 316
// line end:   320
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008E884
// line start: 327
// line end:   330
void GoForwardLevel__Fv() {
}


// address: 0x8008E8DC
// line start: 334
// line end:   338
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008E974
// line start: 346
// line end:   351
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008E9C4
// line start: 355
// line end:   359
void PostNewGame__Fv() {
}


// address: 0x8008E9FC
// line start: 368
// line end:   379
void LevelToLevelInit__Fv() {
}


// address: 0x8008EA54
// line start: 204
// line end:   218
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008EA98
// size: 0x10
// line start: 226
// line end:   230
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008EAF0
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


// address: 0x8008EF64
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


// address: 0x8008F3E8
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


// address: 0x8008F548
// line start: 452
// line end:   464
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008F594
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


// address: 0x8008F950
// line start: 548
// line end:   567
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008FA44
// line start: 573
// line end:   591
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008FB48
// size: 0x8
// line start: 226
// line end:   226
struct PAL *GetPal__7TextDati_addr_8008FB48(struct TextDat *this, int PalNum) {
}


// address: 0x8008FB64
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_8008FB64(struct TextDat *this, int FrNum) {
}


// address: 0x8008FB80
// line start: 132
// line end:   149
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008FB94
// line start: 345
// line end:   363
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008FBD4
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


// address: 0x8008FC60
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


// address: 0x8008FD28
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


// address: 0x8008FE60
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


// address: 0x8008FF9C
// line start: 566
// line end:   571
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008FFF4
// line start: 596
// line end:   627
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x80090100
// line start: 637
// line end:   641
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x80090150
// line start: 651
// line end:   655
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x800901A0
// line start: 665
// line end:   683
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8009020C
// line start: 692
// line end:   734
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x80090318
// line start: 743
// line end:   797
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80090438
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


// address: 0x80090500
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


// address: 0x800906DC
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


// address: 0x800909D4
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


// address: 0x80090E00
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


// address: 0x80090F10
// line start: 176
// line end:   213
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x80090FE0
// line start: 226
// line end:   239
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8009104C
// line start: 249
// line end:   259
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x800910C4
// line start: 268
// line end:   281
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80121788
	static int DestAddr;
}


// address: 0x8009113C
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


// address: 0x80091270
// line start: 390
// line end:   395
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800912C4
// line start: 419
// line end:   421
void SND_StopSnd__Fi(int voice) {
}


// address: 0x800912E8
// line start: 431
// line end:   436
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8009134C
// line start: 446
// line end:   509
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


// address: 0x80091500
// line start: 85
// line end:   86
void AS_CallBack0__Fi(int handle) {
}


// address: 0x80091514
// line start: 90
// line end:   91
void AS_CallBack1__Fi(int handle) {
}


// address: 0x80091528
// line start: 101
// line end:   124
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80091604
// line start: 147
// line end:   163
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x800916A4
// line start: 173
// line end:   174
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x800916B0
// line start: 184
// line end:   188
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x800916DC
// line start: 199
// line end:   241
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x800917FC
// line start: 170
// line end:   171
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x80091830
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x800918C0
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8009199C
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80091A1C
// line start: 277
// line end:   293
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x80091ABC
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80091B50
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


// address: 0x80091BC4
// line start: 353
// line end:   354
void SCR_Handler__Fv() {
}


// address: 0x80091BEC
// line start: 132
// line end:   132
int GetNumOfObjs__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
}


// address: 0x80091BF4
// size: 0x18
// line start: 110
// line end:   116
struct PalEntry *GetObj__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80091C30
// line start: 98
// line end:   104
void Init__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80091C94
// line start: 90
// line end:   93
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x80091CEC
// line start: 83
// line end:   86
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x80091D44
// line start: 97
// line end:   100
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80091D58
// line start: 89
// line end:   92
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x80091D84
// line start: 82
// line end:   85
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x80091D8C
// line start: 79
// line end:   79
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x80091D94
// line start: 78
// line end:   78
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x80091DA0
// line start: 73
// line end:   73
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80091DD8
// size: 0x18
// line start: 67
// line end:   67
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80091DE4
// line start: 57
// line end:   63
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80091E04
// line start: 46
// line end:   53
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80091E50
// line start: 73
// line end:   74
void stub__FPcPv_addr_80091E50(char *e, void *argptr) {
}


// address: 0x80091E58
// line start: 77
// line end:   79
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x80091E8C
// line start: 91
// line end:   101
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x80091F14
// line start: 107
// line end:   133
void print_demo_task__FP4TASK(struct TASK *T) {
}


// address: 0x80092044
// line start: 136
// line end:   136
void TonysDummyPoll__Fv() {
}


// address: 0x8009204C
// line start: 139
// line end:   145
void load_demo_pad_data__FUl(unsigned long demo_num) {
}


// address: 0x8009209C
// line start: 149
// line end:   155
void save_demo_pad_data__FUl(unsigned long demo_num) {
}


// address: 0x800920EC
// line start: 167
// line end:   180
void set_pad_record_play__Fi(int level) {
}


// address: 0x80092164
// line start: 185
// line end:   197
void demo_game_task__FP4TASK(struct TASK *T) {
}


// address: 0x8009219C
// line start: 200
// line end:   233
void start_demo__Fv() {
}


// address: 0x800921F0
// line start: 237
// line end:   244
void tony__Fv() {
}


// address: 0x80092244
// line start: 220
// line end:   221
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x80092250
// line start: 231
// line end:   232
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8009225C
// line start: 242
// line end:   247
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800922B0
// line start: 257
// line end:   262
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80092304
// line start: 272
// line end:   279
void GLUE_PreTown__Fv() {
}


// address: 0x80092368
// line start: 305
// line end:   306
bool GLUE_Finished__Fv() {
}


// address: 0x80092374
// line start: 316
// line end:   317
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80092380
// line start: 327
// line end:   339
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x80092404
// line start: 348
// line end:   352
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80092414
// line start: 360
// line end:   364
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80092424
// line start: 372
// line end:   376
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80092434
// line start: 386
// line end:   406
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8009250C
// line start: 417
// line end:   569
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
	// address: 0xFFFFFDE0
	// size: 0xDC
	auto struct CBlocks MyBlocks;
	// address: 0xFFFFFEC0
	// size: 0x80
	auto struct CPlayer MyPlayer;
	// address: 0xFFFFFF40
	// size: 0x80
	auto struct CPlayer MyPlayer2;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct GPanel P1Panel;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct GPanel P2Panel;
}


// address: 0x800929C4
// size: 0x8
// line start: 579
// line end:   589
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x80092A4C
// size: 0x8
// line start: 594
// line end:   600
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80092AA8
// size: 0x8
// line start: 604
// line end:   609
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80092AD8
// line start: 613
// line end:   619
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x80092B18
// line start: 629
// line end:   635
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80092B6C
// size: 0x10
// line start: 646
// line end:   653
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80092C18
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x80092C24
// line start: 139
// line end:   139
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x80092C2C
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80092C40
// line start: 108
// line end:   122
char *get_action_str__Fii(int pval, int combo) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x80092CC0
// line start: 152
// line end:   158
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
}


// address: 0x80092CFC
// line start: 164
// line end:   168
void RemoveCtrlScreen__Fv() {
}


// address: 0x80092D44
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


// address: 0x80093348
// line start: 303
// line end:   312
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80093388
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


// address: 0x800933C8
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


// address: 0x80093568
// line start: 380
// line end:   385
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x800935B8
// line start: 391
// line end:   488
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x80093848
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


// address: 0x80093E9C
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


// address: 0x8009429C
// line start: 761
// line end:   761
void _GLOBAL__D_CtrlBorder() {
}


// address: 0x800942D4
// line start: 761
// line end:   761
void _GLOBAL__I_CtrlBorder() {
}


// address: 0x8009430C
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8009430C(struct CPad *this) {
}


// address: 0x80094334
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80094334(struct CPad *this) {
}


// address: 0x8009435C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8009435C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009437C
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8009437C(struct Dialog *this, int Type) {
}


// address: 0x80094384
// line start: 77
// line end:   77
void ___6Dialog_addr_80094384(struct Dialog *this, int __in_chrg) {
}


// address: 0x800943AC
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_800943AC(struct Dialog *this) {
}


// address: 0x80094408
// line start: 372
// line end:   56
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80094428
// line start: 160
// line end:   163
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80094474
// line start: 194
// line end:   223
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x80094600
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


// address: 0x80094730
// line start: 46
// line end:   75
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8009496C
// line start: 81
// line end:   84
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x800949BC
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
			// size: 0x68
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


// address: 0x80094C20
// line start: 147
// line end:   202
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80094DCC
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


// address: 0x80094F94
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80094F94(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80094FD0
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80094FD0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80094FF8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80094FF8(struct POLY_FT4 **Prim) {
}


// address: 0x80095074
// line start: 238
// line end:   238
int GetNumOfActions__7TextDati_addr_80095074(struct TextDat *this, int Creature) {
}


// address: 0x80095098
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati_addr_80095098(struct TextDat *this, int Creature) {
}


// address: 0x80095110
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat_addr_80095110(struct TextDat *this) {
}


// address: 0x80095124
// line start: 103
// line end:   104
void DaveLDummyPoll__Fv() {
}


// address: 0x8009512C
// line start: 107
// line end:   109
void DaveL__Fv() {
}


// address: 0x80095154
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
	// address: 0x801205E8
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


// address: 0x80095434
// line start: 184
// line end:   221
void mteleportfx__Fv() {
	// register: 2
	register int br;
}


// address: 0x8009570C
// line start: 228
// line end:   245
void invistimer__Fv() {
}


// address: 0x800957DC
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


// address: 0x80095864
// line start: 289
// line end:   320
void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos) {
	// register: 30
	// size: 0x68
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


// address: 0x80095A54
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


// address: 0x80095B88
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


// address: 0x80095D58
// line start: 369
// line end:   392
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80095EF8
// line start: 396
// line end:   406
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80095FDC
// line start: 411
// line end:   413
void doparticlejump__Fv() {
}


// address: 0x8009601C
// line start: 417
// line end:   436
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80096184
// line start: 441
// line end:   523
void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source) {
	// address: 0xFFFFFF90
	// size: 0x68
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


// address: 0x8009657C
// line start: 528
// line end:   576
void Teleportfx__Fiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart) {
	// register: 30
	// size: 0x68
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


// address: 0x80096824
// line start: 581
// line end:   596
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x80096A48
// line start: 601
// line end:   613
void healFX__Fv() {
}


// address: 0x80096ADC
// line start: 618
// line end:   635
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80096B9C
// line start: 639
// line end:   642
void HealStart__Fi(int plr) {
}


// address: 0x80096BB8
// line start: 646
// line end:   649
void HealotherStart__Fi(int plr) {
}


// address: 0x80096BD8
// line start: 653
// line end:   664
void TeleStart__Fi(int plr) {
}


// address: 0x80096C20
// line start: 670
// line end:   679
void PhaseStart__Fi(int plr) {
}


// address: 0x80096C50
// line start: 685
// line end:   694
void InvisStart__Fi(int plr) {
}


// address: 0x80096C80
// line start: 700
// line end:   709
void PhaseEnd__Fi(int plr) {
}


// address: 0x80096CA8
// line start: 715
// line end:   734
void ApocaStart__Fi(int plr) {
}


// address: 0x80096DD0
// line start: 740
// line end:   777
void doapocaFX__Fv() {
	// address: 0x801205EC
	static int scale1;
	// address: 0x801205F0
	static int scale2;
}


// address: 0x80097004
// line start: 783
// line end:   803
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80097068
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x800970E4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80097160
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80097160(struct POLY_FT4 **Prim) {
}


// address: 0x800971DC
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_800971DC(struct TextDat *this, int FrNum) {
}


// address: 0x800971F8
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


// address: 0x80097640
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
	// size: 0xDC
	register struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80097A34
// line start: 233
// line end:   281
void release_spell__Fi(int pnum) {
}


// address: 0x80097A98
// line start: 289
// line end:   298
void select_belt_item__Fi(int pnum) {
}


// address: 0x80097AA0
// line start: 306
// line end:   315
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097B08
// line start: 322
// line end:   340
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097C3C
// line start: 346
// line end:   366
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097D78
// line start: 375
// line end:   377
void pad_func_up__Fi(int pnum) {
}


// address: 0x80097DA4
// line start: 385
// line end:   387
void pad_func_down__Fi(int pnum) {
}


// address: 0x80097DD0
// line start: 395
// line end:   396
void pad_func_left__Fi(int pnum) {
}


// address: 0x80097DD8
// line start: 403
// line end:   404
void pad_func_right__Fi(int pnum) {
}


// address: 0x80097DE0
// line start: 422
// line end:   435
void pad_func_select__Fi(int pnum) {
}


// address: 0x80097ED0
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


// address: 0x80098258
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


// address: 0x80098524
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


// address: 0x800986F0
// line start: 589
// line end:   605
void RemoveTargetCursor__Fi(int pnum) {
}


// address: 0x8009878C
// line start: 612
// line end:   768
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 17
	register int sp;
	// register: 19
	// size: 0xDC
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


// address: 0x80098E58
// line start: 775
// line end:   782
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80098F4C
// line start: 794
// line end:   807
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80099088
// line start: 830
// line end:   842
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800991A8
// line start: 847
// line end:   858
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800992C0
// line start: 863
// line end:   867
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x8009936C
// line start: 881
// line end:   902
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80099424
// line start: 941
// line end:   952
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x8009953C
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


// address: 0x800995B8
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


// address: 0x80099790
// line start: 1060
// line end:   1061
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800997B8
// line start: 1071
// line end:   1072
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800997E0
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


// address: 0x80099920
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


// address: 0x80099A28
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


// address: 0x8009A288
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


// address: 0x8009A364
// line start: 1296
// line end:   1302
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x8009A470
// line start: 1311
// line end:   1381
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 10
	register char co;
}


// address: 0x8009A848
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


// address: 0x8009AA9C
// line start: 1485
// line end:   1508
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
}


// address: 0x8009ACF8
// line start: 1509
// line end:   1509
void _GLOBAL__D_gplayer() {
}


// address: 0x8009AD20
// line start: 1509
// line end:   1509
void _GLOBAL__I_gplayer() {
}


// address: 0x8009AD48
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8009AD48(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009AD68
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8009AD68(struct Dialog *this, int Type) {
}


// address: 0x8009AD70
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8009AD70(struct Dialog *this, int Type) {
}


// address: 0x8009AD78
// line start: 77
// line end:   77
void ___6Dialog_addr_8009AD78(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009ADA0
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8009ADA0(struct Dialog *this) {
}


// address: 0x8009ADFC
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_8009ADFC(struct CBlocks *this) {
}


// address: 0x8009AE10
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8009AE10(struct CPad *this) {
}


// address: 0x8009AE38
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_8009AE38(struct CPad *this) {
}


// address: 0x8009AE60
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009AEDC
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009AF34
// line start: 102
// line end:   107
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8009AF90
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009AFC8
// line start: 130
// line end:   136
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009B000
// line start: 139
// line end:   144
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009B060
// line start: 155
// line end:   156
bool IsGameLoading__Fv() {
}


// address: 0x8009B06C
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


// address: 0x8009B4C0
// line start: 247
// line end:   273
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x8009B570
// line start: 283
// line end:   290
void TakeDownCutScreen__Fv() {
}


// address: 0x8009B5B8
// line start: 301
// line end:   305
void FinishProgress__Fv() {
}


// address: 0x8009B600
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009B600(struct POLY_G4 **Prim) {
}


// address: 0x8009B67C
// line start: 310
// line end:   310
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009B6B4
// line start: 310
// line end:   310
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x8009B6EC
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8009B6EC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009B70C
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8009B70C(struct Dialog *this, int Type) {
}


// address: 0x8009B714
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8009B714(struct Dialog *this, int Type) {
}


// address: 0x8009B71C
// line start: 77
// line end:   77
void ___6Dialog_addr_8009B71C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009B744
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8009B744(struct Dialog *this) {
}


// address: 0x8009B7A0
// line start: 372
// line end:   120
void ___7CScreen_addr_8009B7A0(struct CScreen *this, int __in_chrg);

// address: 0x8009B7C0
// line start: 103
// line end:   220
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x8009B9DC
// line start: 224
// line end:   248
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009B9E8
// line start: 253
// line end:   257
void init_card__Fi(int card_number) {
}


// address: 0x8009BA1C
// line start: 262
// line end:   275
int ping_card__Fi(int card_number) {
}


// address: 0x8009BAB0
// line start: 279
// line end:   285
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009BAE8
// line start: 290
// line end:   298
void MemcardON__Fv() {
}


// address: 0x8009BB50
// line start: 304
// line end:   312
void MemcardOFF__Fv() {
}


// address: 0x8009BBC0
// line start: 532
// line end:   541
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009BCA4
// line start: 560
// line end:   693
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
	// size: 0x68
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


// address: 0x8009C1A4
// line start: 699
// line end:   878
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


// address: 0x8009CBA8
// line start: 884
// line end:   1027
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


// address: 0x8009D0C0
// line start: 1030
// line end:   1229
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


// address: 0x8009D738
// line start: 1236
// line end:   1404
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


// address: 0x8009DD0C
// line start: 1420
// line end:   1555
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


// address: 0x8009E288
// line start: 1561
// line end:   1586
void CalcVolumes__Fv() {
}


// address: 0x8009E3C8
// line start: 1593
// line end:   1613
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


// address: 0x8009E4D0
// line start: 1646
// line end:   1883
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 16
	register int oldot;
	// register: 18
	// size: 0x6C
	register struct CPad *P;
}


// address: 0x8009E85C
// line start: 1889
// line end:   1910
void ToggleOptions__Fv() {
}


// address: 0x8009E8FC
// line start: 1917
// line end:   1991
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


// address: 0x8009EC08
// line start: 1991
// line end:   1991
void _GLOBAL__I_cmenu() {
}


// address: 0x8009F02C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009F02C(struct POLY_G4 **Prim) {
}


// address: 0x8009F0A8
// line start: 106
// line end:   110
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009F0D0
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8009F0D0(struct CPad *this) {
}


// address: 0x8009F0F8
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_8009F0F8(struct CPad *this) {
}


// address: 0x8009F120
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_8009F120(struct CPad *this) {
}


// address: 0x8009F148
// line start: 82
// line end:   82
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8009F150
// line start: 81
// line end:   81
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009F158
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8009F158(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009F178
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8009F178(struct Dialog *this, int Type) {
}


// address: 0x8009F180
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8009F180(struct Dialog *this, int Type) {
}


// address: 0x8009F188
// line start: 77
// line end:   77
void ___6Dialog_addr_8009F188(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009F1B0
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8009F1B0(struct Dialog *this) {
}


// address: 0x8009F20C
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_8009F20C(struct TextDat *this, int FrNum) {
}


// address: 0x8009F228
// line start: 70
// line end:   77
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009F280
// line start: 86
// line end:   112
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
}


// address: 0x8009F3C4
// line start: 122
// line end:   132
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009F440
// line start: 141
// line end:   159
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 2
	register int type;
	// register: 4
	register int i;
}


// address: 0x8009F520
// line start: 168
// line end:   177
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009F574
// line start: 186
// line end:   192
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F5D0
// line start: 202
// line end:   221
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F6B0
// line start: 232
// line end:   234
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F6EC
// line start: 243
// line end:   257
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F770
// line start: 265
// line end:   274
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F814
// line start: 283
// line end:   318
void BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 18
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


// address: 0x8009F95C
// line start: 326
// line end:   370
void BIRD_DoFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 8
							register int x;
							// register: 3
							register int y;
						}
					}
				}
			}
		}
	}
}


// address: 0x8009FB88
// line start: 380
// line end:   381
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FB94
// line start: 390
// line end:   394
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FBE4
// line start: 403
// line end:   420
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009FCD0
// line start: 430
// line end:   446
void ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009FD84
// line start: 453
// line end:   460
void LBirdTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009FDDC
// line start: 470
// line end:   491
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009FECC
// line start: 501
// line end:   542
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x800A0024
// line start: 550
// line end:   560
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x800A007C
// line start: 566
// line end:   576
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 18
	// size: 0x68
	register struct TextDat *Dat;
}


// address: 0x800A0154
// line start: 612
// line end:   679
void DrawLBird__Fv() {
	// register: 19
	// size: 0x18
	register struct BIRDSTRUCT *ThisBird;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD0
	// size: 0xDC
	auto struct CBlocks *gblock;
	// register: 2
	register int ScrXOff;
	// register: 2
	register int ScrYOff;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT R;
	// register: 30
	// size: 0x68
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


// address: 0x800A034C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A034C(struct POLY_FT4 **Prim) {
}


// address: 0x8002F644
// line start: 520
// line end:   523
unsigned char TrimCol__Fs_addr_8002F644(short col) {
}


// address: 0x8002F67C
// line start: 527
// line end:   695
void DrawSpellCel__FllUclUc(long xp, long yp, unsigned char Trans, long nCel, int w) {
	// address: 0xFFFFFF78
	// size: 0x68
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
// line start: 709
// line end:   710
void SetSpellTrans__Fc(char t) {
}


// address: 0x800301A4
// line start: 718
// line end:   735
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8003023C
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


// address: 0x800302B4
// line start: 757
// line end:   789
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80030368
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


// address: 0x800310F0
// line start: 1108
// line end:   1120
void SetSpell__Fi(int pnum) {
}


// address: 0x800311C4
// line start: 1131
// line end:   1134
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80031274
// line start: 1141
// line end:   1143
void ClearPanel__Fv() {
}


// address: 0x800312A4
// line start: 1196
// line end:   1197
void InitPanelStr__Fv() {
}


// address: 0x800312C4
// line start: 1283
// line end:   1430
void InitControlPan__Fv() {
	// register: 4
	register int i;
}


// address: 0x8003150C
// line start: 1436
// line end:   1439
void DrawCtrlPan__Fv() {
}


// address: 0x80031538
// line start: 1519
// line end:   1531
void DoAutoMap__Fv() {
}


// address: 0x800315AC
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


// address: 0x80031E70
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


// address: 0x80031F80
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


// address: 0x8003209C
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


// address: 0x800322D8
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


// address: 0x80032A48
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


// address: 0x80032F94
// line start: 2131
// line end:   2147
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x8003303C
// line start: 2170
// line end:   2206
void DrawPlus__Fii(int n, int pnum) {
	// register: 16
	// size: 0x68
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
// line start: 2213
// line end:   2224
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x80033270
// line start: 2232
// line end:   2253
void DrawArrows__Fv() {
	// register: 18
	// size: 0x68
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


// address: 0x80034640
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


// address: 0x80034AE4
// line start: 2594
// line end:   2610
void DrawChrTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80034B84
// line start: 2619
// line end:   2627
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80034C18
// line start: 2632
// line end:   2687
void CheckChrBtns__Fv() {
	// register: 5
	register int pc;
}


// address: 0x80034E5C
// line start: 2694
// line end:   2734
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80034EE0
// line start: 2742
// line end:   2756
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80034FC8
// line start: 2762
// line end:   2769
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x80035060
// line start: 2776
// line end:   2788
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80035278
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


// address: 0x80035BD8
// line start: 3002
// line end:   3038
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 10
	register char st;
}


// address: 0x80035E3C
// line start: 3051
// line end:   3053
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80035E70
// line start: 3559
// line end:   3559
void _GLOBAL__D_fontkern() {
}


// address: 0x80035E98
// line start: 3559
// line end:   3559
void _GLOBAL__I_fontkern() {
}


// address: 0x80035ED4
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80035ED4(struct CPad *this) {
}


// address: 0x80035EFC
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80035EFC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80035F1C
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_80035F1C(struct Dialog *this, int Type) {
}


// address: 0x80035F24
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80035F24(struct Dialog *this, int Type) {
}


// address: 0x80035F2C
// line start: 77
// line end:   77
void ___6Dialog_addr_80035F2C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80035F54
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80035F54(struct Dialog *this) {
}


// address: 0x80035FB0
// size: 0x8
// line start: 226
// line end:   226
struct PAL *GetPal__7TextDati_addr_80035FB0(struct TextDat *this, int PalNum) {
}


// address: 0x80035FCC
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_80035FCC(struct TextDat *this, int FrNum) {
}


// address: 0x80035FE8
// line start: 126
// line end:   132
void InitCursor__Fv() {
}


// address: 0x80035FF0
// line start: 137
// line end:   142
void FreeCursor__Fv() {
}


// address: 0x80035FF8
// line start: 148
// line end:   158
void SetICursor__Fi(int i) {
}


// address: 0x80036054
// line start: 165
// line end:   173
void SetCursor__Fi(int i) {
}


// address: 0x800360B8
// line start: 179
// line end:   180
void NewCursor__Fi(int i) {
}


// address: 0x800360D8
// line start: 186
// line end:   201
void InitLevelCursor__Fv() {
}


// address: 0x80036138
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


// address: 0x80036390
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


// address: 0x800365B8
// line start: 264
// line end:   756
void CheckCursMove__Fv() {
}


// address: 0x800365C0
// line start: 40
// line end:   91
void InitDead__Fv() {
	// register: 6
	register int nd;
	// register: 7
	register int i;
	// register: 2
	register int mi;
	// address: 0xFFFFFCC8
	// size: 0x320
	auto int mtypes[200];
}


// address: 0x800367E4
// line start: 98
// line end:   102
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x8003682C
// line start: 283
// line end:   296
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8003687C
// line start: 303
// line end:   319
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800368F8
// line start: 324
// line end:   341
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8003696C
// line start: 357
// line end:   395
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80036A30
// line start: 400
// line end:   468
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80036BBC
// line start: 474
// line end:   584
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80036D3C
// line start: 1014
// line end:   1094
unsigned char TryIconCurs__Fv() {
}


// address: 0x80037118
// line start: 2117
// line end:   2164
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80037120
// line start: 2171
// line end:   2331
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800371D0
// line start: 2338
// line end:   2405
void LoadLvlGFX__Fv() {
}


// address: 0x80037294
// line start: 2413
// line end:   2425
void LoadAllGFX__Fv() {
}


// address: 0x800372B4
// line start: 2446
// line end:   2466
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800373AC
// line start: 2475
// line end:   2529
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80037578
// line start: 2533
// line end:   2558
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


// address: 0x80037654
// line start: 2565
// line end:   2885
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


// address: 0x80037F94
// line start: 2898
// line end:   2950
void game_logic__Fv() {
}


// address: 0x800380A0
// line start: 2960
// line end:   2990
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80038148
// line start: 2998
// line end:   3053
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80038180
// line start: 3120
// line end:   3125
void alloc_plr__Fv() {
}


// address: 0x80038188
// line start: 3188
// line end:   3246
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80038190
// line start: 3253
// line end:   3255
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x800381B0
// line start: 3260
// line end:   3262
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x800381D0
// line start: 3265
// line end:   3266
void app_fatal(char *pszFile) {
}


// address: 0x80038200
// line start: 3525
// line end:   3531
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038228
// line start: 3535
// line end:   3541
void DoMemCardFromInGame__Fv() {
}


// address: 0x80038250
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800382A4
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800382C4
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x8003830C
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003846C
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


// address: 0x80038524
// line start: 181
// line end:   190
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038688
// line start: 196
// line end:   206
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800387F4
// line start: 211
// line end:   220
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003895C
// line start: 225
// line end:   234
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038AC4
// line start: 239
// line end:   248
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038C2C
// line start: 253
// line end:   263
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038D9C
// line start: 268
// line end:   277
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038F04
// line start: 283
// line end:   292
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003906C
// line start: 297
// line end:   306
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800391D4
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


// address: 0x800394B4
// line start: 344
// line end:   358
void InitTowners__Fv() {
}


// address: 0x80039540
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


// address: 0x800395E4
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


// address: 0x80039704
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


// address: 0x80039738
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


// address: 0x8003976C
// line start: 435
// line end:   447
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80039854
// line start: 453
// line end:   455
void TownHealer__Fv() {
}


// address: 0x8003987C
// line start: 462
// line end:   465
void TownStory__Fv() {
}


// address: 0x800398A4
// line start: 472
// line end:   475
void TownDrunk__Fv() {
}


// address: 0x800398CC
// line start: 482
// line end:   485
void TownBoy__Fv() {
}


// address: 0x800398F4
// line start: 493
// line end:   496
void TownWitch__Fv() {
}


// address: 0x8003991C
// line start: 503
// line end:   505
void TownBarMaid__Fv() {
}


// address: 0x80039944
// line start: 512
// line end:   515
void TownCow__Fv() {
}


// address: 0x8003996C
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


// address: 0x80039BBC
// size: 0x94
// line start: 579
// line end:   584
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80039C90
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x801172D0
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80120BCC
	static int snLastCowSFX;
}


// address: 0x80039DAC
// line start: 645
// line end:   652
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80039DEC
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


// address: 0x8003B214
// line start: 77
// line end:   88
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003B248
// line start: 96
// line end:   103
void stream_stop__Fv() {
}


// address: 0x8003B290
// line start: 116
// line end:   143
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003B36C
// line start: 149
// line end:   165
void stream_update__Fv() {
}


// address: 0x8003B374
// line start: 171
// line end:   178
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003B390
// line start: 185
// line end:   216
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003B3E8
// line start: 222
// line end:   245
void FreeMonsterSnd__Fv() {
}


// address: 0x8003B3F0
// line start: 251
// line end:   271
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003B4F4
// line start: 278
// line end:   309
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003B604
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


// address: 0x8003B730
// line start: 370
// line end:   392
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003B7C8
// line start: 407
// line end:   410
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003B830
// line start: 418
// line end:   428
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003B8B0
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


// address: 0x8003B948
// line start: 457
// line end:   467
void sound_update__Fv() {
}


// address: 0x8003B97C
// line start: 475
// line end:   506
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003B9C0
// line start: 512
// line end:   525
void sound_init__Fv() {
	// register: 16
	register unsigned char bLoadMask;
}


// address: 0x8003BA94
// line start: 44
// line end:   74
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003BB38
// line start: 90
// line end:   93
void SetRndSeed__Fl(long s) {
}


// address: 0x8003BB48
// line start: 98
// line end:   103
long GetRndSeed__Fv() {
}


// address: 0x8003BB90
// line start: 109
// line end:   115
long random__Fil(int idx, long v) {
}


// address: 0x8003BBFC
// line start: 367
// line end:   417
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003BC48
// line start: 428
// line end:   474
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003BC98
// line start: 486
// line end:   496
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003BCA0
// line start: 563
// line end:   585
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003BCA8
// line start: 1104
// line end:   1104
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003BCB0
// line start: 154
// line end:   165
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003BD44
// line start: 171
// line end:   174
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003BD70
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


// address: 0x8003BE7C
// line start: 297
// line end:   306
void interface_msg_pump__Fv() {
}


// address: 0x8003BE84
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


// address: 0x8003C51C
// line start: 969
// line end:   971
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003C554
// line start: 508
// line end:   519
void InitItemGFX__Fv() {
}


// address: 0x8003C580
// line start: 525
// line end:   532
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003C648
// line start: 539
// line end:   578
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


// address: 0x8003C860
// line start: 585
// line end:   632
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003CA20
// line start: 639
// line end:   890
void CalcPlrItemVals__FiUc(int p, unsigned char Loadgfx) {
	// register: 12
	register int mind;
	// register: 11
	register int maxd;
	// address: 0xFFFFFFD0
	auto int tac;
	// register: 5
	register int g;
	// register: 10
	register int i;
	// register: 2
	register int mi;
	// register: 24
	register int bdam;
	// register: 25
	register int btohit;
	// address: 0xFFFFFF58
	auto int bac;
	// address: 0xFFFFFF60
	auto int sadd;
	// register: 20
	register int madd;
	// address: 0xFFFFFF68
	auto int dadd;
	// register: 19
	register int vadd;
	// register: 30
	register int fr;
	// address: 0xFFFFFF70
	auto int lr;
	// register: 21
	register int mr;
	// register: 13
	register int dmod;
	// address: 0xFFFFFFC8
	auto int ghit;
	// register: 18
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
	// register: 22
	register unsigned long spl;
	// register: 6
	register unsigned long t;
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


// address: 0x8003DA44
// line start: 895
// line end:   925
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003DDC4
// line start: 933
// line end:   941
void CalcPlrStaff__Fi(int p) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003DEC0
// line start: 945
// line end:   985
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


// address: 0x8003E020
// line start: 991
// line end:   995
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003E06C
// line start: 1001
// line end:   1016
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


// address: 0x8003E14C
// line start: 1022
// line end:   1045
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003E3E0
// line start: 1050
// line end:   1060
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003E478
// line start: 1066
// line end:   1097
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003E590
// line start: 1103
// line end:   1104
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003E5BC
// line start: 1110
// line end:   1126
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


// address: 0x8003E738
// line start: 1132
// line end:   1133
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003E740
// line start: 1139
// line end:   1144
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003E770
// line start: 1150
// line end:   1261
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8003EBA8
// line start: 1268
// line end:   1297
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003EE80
// line start: 1305
// line end:   1353
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


// address: 0x8003F0AC
// line start: 1360
// line end:   1383
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


// address: 0x8003F214
// line start: 1389
// line end:   1401
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


// address: 0x8003F2DC
// line start: 1407
// line end:   1413
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003F394
// line start: 1420
// line end:   1465
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003F5FC
// line start: 1472
// line end:   1532
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


// address: 0x8003F7EC
// line start: 1540
// line end:   1608
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


// address: 0x8003FAA0
// line start: 1649
// line end:   1739
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003FFEC
// line start: 1748
// line end:   1749
int RndPL__Fii(int param1, int param2) {
}


// address: 0x80040024
// line start: 1756
// line end:   1759
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x80040098
// line start: 1766
// line end:   2047
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x800416A4
// line start: 2055
// line end:   2153
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


// address: 0x80041B0C
// line start: 2160
// line end:   2190
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80041C08
// line start: 2196
// line end:   2223
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80041D1C
// line start: 2232
// line end:   2268
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x80041F60
// line start: 2276
// line end:   2307
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


// address: 0x800421A0
// line start: 2315
// line end:   2338
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80042314
// line start: 2346
// line end:   2361
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


// address: 0x80042414
// line start: 2368
// line end:   2402
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


// address: 0x800425C4
// line start: 2409
// line end:   2431
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x8004286C
// line start: 2438
// line end:   2451
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80042978
// line start: 2461
// line end:   2465
void ItemRndDur__Fi(int ii) {
}


// address: 0x80042A08
// line start: 2472
// line end:   2510
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80042D14
// line start: 2518
// line end:   2561
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x80042F5C
// line start: 2569
// line end:   2583
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x8004308C
// line start: 2593
// line end:   2608
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800431D4
// line start: 2620
// line end:   2630
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x800432AC
// line start: 2634
// line end:   2644
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x8004336C
// line start: 2653
// line end:   2668
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800434B0
// line start: 2680
// line end:   2704
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x8004369C
// line start: 2711
// line end:   2746
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


// address: 0x800438C8
// line start: 2753
// line end:   2778
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


// address: 0x80043A88
// line start: 2786
// line end:   2818
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x80043C4C
// line start: 2825
// line end:   2829
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80043CA0
// line start: 2839
// line end:   2854
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x94
	register struct ItemStruct *i;
}


// address: 0x80043D68
// line start: 2860
// line end:   2899
void ProcessItems__Fv() {
	// register: 6
	register int i;
	// register: 5
	register int ii;
}


// address: 0x80043EAC
// line start: 2906
// line end:   2911
void FreeItemGFX__Fv() {
}


// address: 0x80043EB4
// line start: 2930
// line end:   2954
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


// address: 0x8004403C
// line start: 2960
// line end:   2970
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8004412C
// line start: 2975
// line end:   2999
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x800441FC
// line start: 3003
// line end:   3016
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x800442C0
// line start: 3021
// line end:   3034
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80044330
// line start: 3038
// line end:   3056
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


// address: 0x80044430
// line start: 3161
// line end:   3285
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80044524
// line start: 3291
// line end:   3500
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80044BD0
// line start: 3584
// line end:   3622
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80044E5C
// line start: 3629
// line end:   3674
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800451C8
// line start: 3680
// line end:   3720
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800454D8
// line start: 3726
// line end:   3728
void CastScroll__Fi(int pnum) {
}


// address: 0x800454E0
// line start: 3735
// line end:   3923
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 6
	register unsigned long t;
}


// address: 0x80045ECC
// line start: 3932
// line end:   3937
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80045F60
// line start: 3956
// line end:   3971
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80045FDC
// line start: 3977
// line end:   3996
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x800460E4
// line start: 4004
// line end:   4029
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x94
	auto struct ItemStruct holditem;
}


// address: 0x800462F8
// line start: 4038
// line end:   4057
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x8004652C
// line start: 4070
// line end:   4085
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x8004667C
// line start: 4116
// line end:   4120
void SpawnStoreGold__Fv() {
}


// address: 0x800466FC
// line start: 4169
// line end:   4180
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x8004689C
// line start: 4192
// line end:   4200
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80046900
// line start: 4219
// line end:   4241
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80046A90
// line start: 4249
// line end:   4270
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80046C0C
// line start: 4278
// line end:   4299
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80046D88
// line start: 4621
// line end:   4710
char *MakeItemStr__FP10ItemStructUs(struct ItemStruct *ItemPtr, unsigned short ItemNo) {
	// register: 6
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80046F88
// line start: 319
// line end:   334
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x80046FF0
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


// address: 0x80047064
// line start: 404
// line end:   411
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x800470D0
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


// address: 0x80047D80
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


// address: 0x80047FC4
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


// address: 0x80048088
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


// address: 0x80048598
// line start: 957
// line end:   958
void FreeLightTable__Fv() {
}


// address: 0x800485A0
// line start: 964
// line end:   965
void InitLightTable__Fv() {
}


// address: 0x800485A8
// line start: 970
// line end:   971
void MakeLightTable__Fv() {
}


// address: 0x800485B0
// line start: 1062
// line end:   1065
void InitLightMax__Fv() {
}


// address: 0x800485D4
// line start: 1072
// line end:   1083
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80048618
// line start: 1089
// line end:   1105
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x800486AC
// line start: 1110
// line end:   1116
void AddUnLight__Fi(int i) {
}


// address: 0x800486DC
// line start: 1121
// line end:   1131
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80048708
// line start: 1136
// line end:   1147
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80048740
// line start: 1150
// line end:   1156
void light_fix__Fi(int i) {
}


// address: 0x80048748
// line start: 1166
// line end:   1178
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80048780
// line start: 1183
// line end:   1195
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x800487C4
// line start: 1198
// line end:   1199
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x800487F4
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


// address: 0x80048920
// line start: 1271
// line end:   1298
void SavePreLighting__Fv() {
}


// address: 0x80048928
// line start: 1303
// line end:   1310
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80048978
// line start: 1317
// line end:   1333
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80048A7C
// line start: 1356
// line end:   1369
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80048B30
// line start: 1374
// line end:   1388
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x80048BE8
// line start: 1417
// line end:   1446
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x80048E48
// line start: 108
// line end:   111
void FreeQuestText__Fv() {
}


// address: 0x80048E50
// line start: 115
// line end:   119
void InitQuestText__Fv() {
}


// address: 0x80048E5C
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


// address: 0x80048F9C
// line start: 177
// line end:   205
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x800490C4
// line start: 210
// line end:   216
void DrawQTextBack__Fv() {
}


// address: 0x80049134
// line start: 224
// line end:   232
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800491C0
// line start: 239
// line end:   259
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8004928C
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


// address: 0x800495BC
// line start: 359
// line end:   359
void _GLOBAL__D_QBack() {
}


// address: 0x800495E4
// line start: 359
// line end:   359
void _GLOBAL__I_QBack() {
}


// address: 0x8004960C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8004960C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8004962C
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8004962C(struct Dialog *this, int Type) {
}


// address: 0x80049634
// line start: 77
// line end:   77
void ___6Dialog_addr_80049634(struct Dialog *this, int __in_chrg) {
}


// address: 0x8004965C
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8004965C(struct Dialog *this) {
}


// address: 0x800496B8
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_800496B8(struct CFont *this, char ch) {
}


// address: 0x80049710
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_80049710(struct TextDat *this, int FrNum) {
}


// address: 0x8004972C
// line start: 33
// line end:   35
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80049734
// line start: 806
// line end:   808
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8004973C
// line start: 362
// line end:   376
void run_delta_info__Fv() {
}


// address: 0x80049744
// line start: 688
// line end:   693
void delta_init__Fv() {
}


// address: 0x800497A4
// line start: 699
// line end:   711
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 2
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x800498D8
// line start: 717
// line end:   724
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 4
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x800499A8
// line start: 730
// line end:   747
void delta_sync_monster__FPC12TSyncMonsterUc(struct TSyncMonster *pSync, unsigned char bLevel) {
	// register: 6
	// size: 0xC
	register struct DMonsterStr *pD;
}


// address: 0x80049A80
// line start: 751
// line end:   765
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 3
	// size: 0xC
	register struct DMonsterStr *pD;
}


// address: 0x80049B64
// line start: 770
// line end:   800
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


// address: 0x80049DDC
// line start: 805
// line end:   812
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80049E90
// line start: 818
// line end:   929
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 24
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 6
	register int i;
}


// address: 0x8004A0D0
// line start: 935
// line end:   976
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 16
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 18
	register int i;
}


// address: 0x8004A300
// line start: 982
// line end:   985
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x8004A360
// line start: 991
// line end:   994
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x8004A3C0
// line start: 1000
// line end:   1043
void DeltaAddItem__Fi(int ii) {
	// register: 4
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x8004A634
// line start: 1048
// line end:   1055
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x8004A664
// line start: 1061
// line end:   1068
int DeltaImportData__FPc(char *Src) {
}


// address: 0x8004A698
// line start: 1073
// line end:   1141
void DeltaSaveLevel__Fv() {
	// register: 18
	register int osize;
	// register: 17
	register int nsize;
	// register: 11
	register int countpos;
	// register: 16
	register int pos;
	// register: 5
	register unsigned char count;
	// register: 6
	register unsigned char data;
	// register: 19
	register unsigned char *Src;
	// register: 4
	register unsigned char *Dst;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8004A8B8
// line start: 1157
// line end:   1161
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x8004A8E0
// line start: 1167
// line end:   1181
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct TCmdGolem cmd;
}


// address: 0x8004A9B0
// line start: 1187
// line end:   1197
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE8
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x8004AA48
// line start: 1203
// line end:   1212
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFE0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x8004AAF0
// line start: 1218
// line end:   1228
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x8004ABA8
// line start: 1234
// line end:   1245
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFD0
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x8004AC70
// line start: 1251
// line end:   1256
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x8004AC9C
// line start: 1262
// line end:   1268
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x8004ACCC
// line start: 1273
// line end:   1280
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x8004AD04
// line start: 1285
// line end:   1293
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x8004AD78
// line start: 1298
// line end:   1344
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004AF1C
// line start: 1350
// line end:   1365
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004B00C
// line start: 1381
// line end:   1400
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004B0DC
// line start: 1407
// line end:   1414
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004B170
// line start: 1419
// line end:   1462
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFD8
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x8004B2DC
// line start: 1468
// line end:   1479
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x8004B380
// line start: 1485
// line end:   1490
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x8004B3B0
// line start: 1496
// line end:   1538
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x8004B4EC
// line start: 1543
// line end:   1559
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x8004B4F4
// line start: 1565
// line end:   1573
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x8004B560
// line start: 1604
// line end:   1615
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x8004B694
// line start: 1621
// line end:   1624
void delta_close_portal__Fi(int pnum) {
}


// address: 0x8004B6FC
// line start: 1630
// line end:   1634
void check_update_plr__Fi(int pnum) {
}


// address: 0x8004B730
// line start: 1686
// line end:   1692
unsigned long On_SYNCDATA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B758
// line start: 1699
// line end:   1716
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


// address: 0x8004B830
// line start: 1723
// line end:   1758
unsigned long On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B860
// line start: 1763
// line end:   1787
unsigned long On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B890
// line start: 1792
// line end:   1816
unsigned long On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B8C0
// line start: 1822
// line end:   1846
unsigned long On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B8F0
// line start: 1852
// line end:   1882
unsigned long On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B9B0
// line start: 1889
// line end:   1907
unsigned long On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BA84
// line start: 1912
// line end:   1965
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


// address: 0x8004BC4C
// line start: 1971
// line end:   2053
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


// address: 0x8004BE24
// line start: 2059
// line end:   2075
unsigned long On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BEF8
// line start: 2080
// line end:   2128
unsigned long On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004C0B4
// line start: 2133
// line end:   2222
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


// address: 0x8004C284
// line start: 2227
// line end:   2251
unsigned long On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C324
// line start: 2257
// line end:   2316
unsigned long On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		// register: 18
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


// address: 0x8004C4C4
// line start: 2325
// line end:   2380
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


// address: 0x8004C614
// line start: 2386
// line end:   2416
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


// address: 0x8004C734
// line start: 2444
// line end:   2462
unsigned long On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C80C
// line start: 2488
// line end:   2522
unsigned long On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C93C
// line start: 2528
// line end:   2560
unsigned long On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004CA5C
// line start: 2565
// line end:   2598
unsigned long On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004CB80
// line start: 2603
// line end:   2623
unsigned long On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004CCCC
// line start: 2628
// line end:   2649
unsigned long On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004CE18
// line start: 2655
// line end:   2672
unsigned long On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004CED0
// line start: 2677
// line end:   2698
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


// address: 0x8004D050
// line start: 2766
// line end:   2798
unsigned long On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D160
// line start: 2803
// line end:   2838
unsigned long On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D26C
// line start: 2844
// line end:   2877
unsigned long On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D37C
// line start: 2882
// line end:   2915
unsigned long On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D48C
// line start: 2920
// line end:   2937
unsigned long On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004D51C
// line start: 2942
// line end:   2959
unsigned long On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004D558
// line start: 2964
// line end:   2978
unsigned long On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D5C8
// line start: 2983
// line end:   3001
unsigned long On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D69C
// line start: 3007
// line end:   3022
unsigned long On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D6D4
// line start: 3027
// line end:   3049
unsigned long On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004D7C0
// line start: 3054
// line end:   3068
unsigned long On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D82C
// line start: 3073
// line end:   3087
unsigned long On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D898
// line start: 3092
// line end:   3114
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


// address: 0x8004DA0C
// line start: 3119
// line end:   3146
unsigned long On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004DB14
// line start: 3151
// line end:   3169
unsigned long On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004DB5C
// line start: 3175
// line end:   3225
unsigned long On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004DD58
// line start: 3230
// line end:   3244
unsigned long On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DDF4
// line start: 3249
// line end:   3263
unsigned long On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DE90
// line start: 3269
// line end:   3283
unsigned long On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DF2C
// line start: 3288
// line end:   3302
unsigned long On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DFC4
// line start: 3307
// line end:   3321
unsigned long On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E05C
// line start: 3326
// line end:   3341
unsigned long On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E064
// line start: 3347
// line end:   3359
unsigned long On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E06C
// line start: 3364
// line end:   3378
unsigned long On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E074
// line start: 3383
// line end:   3398
unsigned long On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E0CC
// line start: 3429
// line end:   3488
unsigned long On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004E38C
// line start: 3492
// line end:   3527
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


// address: 0x8004E520
// line start: 3532
// line end:   3545
unsigned long On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E574
// line start: 3550
// line end:   3565
unsigned long On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E5C0
// line start: 3570
// line end:   3588
unsigned long On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E600
// line start: 3593
// line end:   3611
unsigned long On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E640
// line start: 3617
// line end:   3637
unsigned long On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E680
// line start: 3643
// line end:   3662
unsigned long On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E6C0
// line start: 3680
// line end:   3696
unsigned long On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004E708
// line start: 3702
// line end:   3724
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


// address: 0x8004E82C
// line start: 3730
// line end:   3747
unsigned long On_CHEAT_EXPERIENCE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E834
// line start: 3752
// line end:   3766
unsigned long On_CHEAT_SPELL_LEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E83C
// line start: 3771
// line end:   3772
unsigned long On_DEBUG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E844
// line start: 3778
// line end:   3866
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80121908
	static unsigned char sbLastCmd;
}


// address: 0x8004EDEC
// line start: 139
// line end:   141
void buffer_init__FP7TBuffer(struct TBuffer *pBuf) {
}


// address: 0x8004EDF8
// line start: 164
// line end:   167
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004EE1C
// line start: 552
// line end:   557
int InitLevelType__Fi(int l) {
}


// address: 0x8004EE68
// line start: 563
// line end:   601
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004EFF8
// line start: 680
// line end:   686
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004F06C
// line start: 701
// line end:   930
unsigned char NetInit__FUcPUc(unsigned char bSinglePlayer, unsigned char *pfExitProgram) {
	// address: 0xFFFFFF18
	// size: 0x80
	auto char szPlayerDescript[128];
	// address: 0xFFFFFFC0
	// size: 0x2C
	auto struct _SNETPROGRAMDATA progdata;
	// address: 0xFFFFFF98
	// size: 0xC
	auto struct _SNETPLAYERDATA plrdata;
	{
		{
			// address: 0xFFFFFF98
			// size: 0x28
			auto struct _uiheroinfo heroinfo;
			{
				{
				}
			}
		}
	}
}


// address: 0x8004F38C
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


// address: 0x8004F5C8
// line start: 299
// line end:   303
void FreeObjectGFX__Fv() {
}


// address: 0x8004F5D4
// line start: 307
// line end:   318
void DeleteObject__Fii(int oi, int i) {
	// register: 4
	register int ox;
	// register: 4
	register int oy;
}


// address: 0x8004F6CC
// line start: 326
// line end:   360
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004F974
// line start: 367
// line end:   373
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004FA40
// line start: 380
// line end:   382
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004FAAC
// line start: 406
// line end:   443
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004FBD4
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


// address: 0x8004FE00
// line start: 485
// line end:   528
void Obj_Circle__Fi(int i) {
	// register: 3
	register int px;
	// register: 2
	register int py;
	// register: 5
	register int ox;
	// register: 6
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


// address: 0x80050144
// line start: 535
// line end:   540
void Obj_StopAnim__Fi(int i) {
}


// address: 0x800501E0
// line start: 571
// line end:   633
void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 30
	register int PhysFrame;
	// register: 21
	// size: 0x68
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


// address: 0x800504C4
// line start: 638
// line end:   646
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x80050534
// line start: 655
// line end:   673
void Obj_Door__Fi(int i) {
	// register: 4
	register int dx;
	// register: 6
	register int dy;
	// register: 5
	register unsigned char dok;
}


// address: 0x80050700
// line start: 681
// line end:   683
void Obj_Sarc__Fi(int i) {
}


// address: 0x80050784
// line start: 690
// line end:   701
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x80050894
// line start: 708
// line end:   749
void Obj_FlameTrap__Fi(int i) {
	// register: 4
	register int xp;
	// register: 5
	register int yp;
	// register: 7
	register int j;
}


// address: 0x80050B84
// line start: 758
// line end:   809
void Obj_Trap__Fi(int i) {
	// register: 16
	register int oti;
	// register: 17
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


// address: 0x80050EF4
// line start: 818
// line end:   844
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto int damage[4];
}


// address: 0x800511B0
// line start: 853
// line end:   935
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x80051470
// line start: 943
// line end:   944
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x800514A8
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


// address: 0x8005157C
// line start: 1003
// line end:   1027
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x80051584
// line start: 1033
// line end:   1062
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8005158C
// line start: 1068
// line end:   1089
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8005182C
// line start: 1096
// line end:   1103
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x800518D0
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


// address: 0x80051C94
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


// address: 0x8005208C
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


// address: 0x80052444
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


// address: 0x800527FC
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


// address: 0x80052B24
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


// address: 0x80052E4C
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


// address: 0x80053368
// line start: 1467
// line end:   1482
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80053520
// line start: 1490
// line end:   1504
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80053690
// line start: 1511
// line end:   1518
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80053808
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


// address: 0x80053A14
// line start: 1556
// line end:   1614
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


// address: 0x80053F28
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


// address: 0x80054314
// line start: 1671
// line end:   1695
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x8005450C
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


// address: 0x800548FC
// line start: 1748
// line end:   1774
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80054AE4
// line start: 1780
// line end:   1803
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80054C7C
// line start: 1809
// line end:   1835
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80054EF0
// line start: 1841
// line end:   1864
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800550F0
// line start: 1872
// line end:   1888
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800552C8
// line start: 1894
// line end:   1901
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80055440
// line start: 1908
// line end:   1915
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800555B8
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


// address: 0x800556C0
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


// address: 0x80055998
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


// address: 0x80055B7C
// line start: 2035
// line end:   2038
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80055BEC
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


// address: 0x800581F0
// line start: 2604
// line end:   2615
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005838C
// line start: 2621
// line end:   2642
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005857C
// line start: 2648
// line end:   2656
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80058684
// line start: 2662
// line end:   2690
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80058814
// line start: 2702
// line end:   2724
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80058904
// line start: 2731
// line end:   2737
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x800589CC
// line start: 2744
// line end:   2751
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80058AA0
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


// address: 0x8005906C
// line start: 2857
// line end:   2897
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x80059238
// line start: 2903
// line end:   2913
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80059350
// line start: 2919
// line end:   2932
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80059464
// line start: 2938
// line end:   3055
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 18
	register unsigned char senditemmsg;
}


// address: 0x800598CC
// line start: 3063
// line end:   3073
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059A0C
// line start: 3079
// line end:   3089
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059B4C
// line start: 3095
// line end:   3105
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059C8C
// line start: 3111
// line end:   3194
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80059F0C
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


// address: 0x8005A118
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


// address: 0x8005A690
// line start: 3303
// line end:   3324
void BreakObject__Fii(int pnum, int oi) {
	// register: 17
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x8005A814
// line start: 3332
// line end:   3338
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x8005A8AC
// line start: 3346
// line end:   3370
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x8005A9E0
// line start: 3376
// line end:   3392
void SyncCrux__Fi(int i) {
	// register: 17
	register int j;
	// register: 3
	register int ot;
	// register: 16
	register int oi;
	// register: 19
	register unsigned char mapflag;
}


// address: 0x8005AB5C
// line start: 3399
// line end:   3402
void SyncLever__Fi(int i) {
}


// address: 0x8005AC00
// line start: 3410
// line end:   3420
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x8005AD18
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


// address: 0x8005AE94
// line start: 3452
// line end:   3476
void SyncL2Doors__Fi(int i) {
	// register: 4
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005B010
// line start: 3484
// line end:   3507
void SyncL3Doors__Fi(int i) {
	// register: 4
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005B150
// line start: 3515
// line end:   3554
void SyncObjectAnim__Fi(int o) {
	// register: 4
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x8005B2B8
// line start: 3562
// line end:   3698
void GetObjectStr__Fi(int i) {
}


// address: 0x8005B6F0
// line start: 3703
// line end:   3859
void RestoreObjectLight__Fv() {
	// register: 18
	register int i;
	// register: 2
	register int oi;
	// register: 16
	register int ox;
	// register: 17
	register int oy;
}


// address: 0x8005B99C
// line start: 239
// line end:   239
int GetNumOfFrames__7TextDatii_addr_8005B99C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8005B9D4
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati_addr_8005B9D4(struct TextDat *this, int Creature) {
}


// address: 0x8005BA4C
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat_addr_8005BA4C(struct TextDat *this) {
}


// address: 0x8005BA60
// line start: 25
// line end:   26
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x8005BA68
// line start: 381
// line end:   386
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x8005BA94
// line start: 392
// line end:   405
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x8005BB48
// line start: 450
// line end:   499
void SetupLocalPlayer__Fv() {
}


// address: 0x8005BB9C
// line start: 270
// line end:   271
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BBE0
// line start: 275
// line end:   276
bool plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC24
// line start: 412
// line end:   418
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC44
// line start: 528
// line end:   547
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC4C
// line start: 554
// line end:   565
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005BC68
// line start: 574
// line end:   585
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC8C
// line start: 591
// line end:   672
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005BEC8
// line start: 719
// line end:   836
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x8005C2E4
// line start: 843
// line end:   849
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x8005C34C
// line start: 855
// line end:   891
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8005C4BC
// line start: 898
// line end:   950
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp) {
	// register: 19
	register int omp;
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


// address: 0x8005C6C0
// line start: 956
// line end:   963
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


// address: 0x8005C744
// line start: 972
// line end:   1136
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


// address: 0x8005CB2C
// line start: 1146
// line end:   1150
void InitMultiView__Fv() {
}


// address: 0x8005CB88
// line start: 1251
// line end:   1252
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x8005CBCC
// line start: 1306
// line end:   1315
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005CC60
// line start: 1322
// line end:   1335
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005CD54
// line start: 1341
// line end:   1345
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CD68
// line start: 1351
// line end:   1371
void FixPlayerLocation__FP12PlayerStructi(struct PlayerStruct *ptrplr, int bDir) {
}


// address: 0x8005CDCC
// line start: 1379
// line end:   1398
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005CE58
// line start: 1403
// line end:   1422
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CEBC
// line start: 1430
// line end:   1488
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800D4CE0
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005CEF8
// line start: 1496
// line end:   1518
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CF24
// line start: 1615
// line end:   1630
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
}


// address: 0x8005CFC0
// line start: 1656
// line end:   1671
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005D070
// line start: 1677
// line end:   1718
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005D228
// line start: 1751
// line end:   1767
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


// address: 0x8005D348
// line start: 1774
// line end:   1807
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
	// register: 16
	register int pd;
}


// address: 0x8005D478
// line start: 1814
// line end:   1843
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005D610
// line start: 1849
// line end:   1886
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


// address: 0x8005D7D4
// line start: 1892
// line end:   2006
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


// address: 0x8005DB88
// line start: 2011
// line end:   2177
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005DFD0
// line start: 2184
// line end:   2206
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005E114
// line start: 2212
// line end:   2214
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005E134
// line start: 2220
// line end:   2245
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


// address: 0x8005E41C
// line start: 2251
// line end:   2271
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E4D8
// line start: 2278
// line end:   2332
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005E684
// line start: 2337
// line end:   2355
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E714
// line start: 2363
// line end:   2379
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005E7D0
// line start: 2387
// line end:   2388
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E7D8
// line start: 2416
// line end:   2433
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005E860
// line start: 2437
// line end:   2556
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005EBCC
// line start: 2563
// line end:   2612
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005ED6C
// line start: 2619
// line end:   2733
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


// address: 0x8005F39C
// line start: 2740
// line end:   2803
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


// address: 0x8005F74C
// line start: 2810
// line end:   2817
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005F7DC
// line start: 2825
// line end:   2896
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


// address: 0x8005FB68
// line start: 2904
// line end:   2925
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005FC68
// line start: 2933
// line end:   2958
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FD28
// line start: 2964
// line end:   2976
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FDC8
// line start: 2980
// line end:   3131
void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr) {
	// register: 16
	// size: 0x80
	register struct CPlayer *test;
	// register: 30
	register int OtPos;
	// register: 23
	register int ScrX;
	// register: 18
	register int ScrY;
	// register: 20
	// size: 0x68
	register struct TextDat *missdat;
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


// address: 0x80060D30
// line start: 3138
// line end:   3199
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800610A0
// line start: 3205
// line end:   3230
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


// address: 0x8006119C
// line start: 3235
// line end:   3251
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x80061218
// line start: 3258
// line end:   3280
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006132C
// line start: 3287
// line end:   3288
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061334
// line start: 3295
// line end:   3598
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8006174C
// line start: 3610
// line end:   3618
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x800617B4
// line start: 3625
// line end:   3663
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


// address: 0x80061C90
// line start: 3710
// line end:   3727
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061D2C
// line start: 3736
// line end:   3862
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


// address: 0x80062160
// line start: 3868
// line end:   3871
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062188
// line start: 3879
// line end:   3903
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
}


// address: 0x8006239C
// line start: 3910
// line end:   3960
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x800623AC
// line start: 3966
// line end:   4058
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


// address: 0x80062A18
// line start: 4125
// line end:   4149
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x80062B54
// line start: 4153
// line end:   4158
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062B84
// line start: 4175
// line end:   4209
void CheckStats__Fi(int p) {
	// register: 7
	register int c;
	// register: 6
	register int i;
}


// address: 0x80062DBC
// line start: 4216
// line end:   4227
void ModifyPlrStr__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80062F3C
// line start: 4235
// line end:   4251
void ModifyPlrMag__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x8006309C
// line start: 4259
// line end:   4268
void ModifyPlrDex__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x800631CC
// line start: 4276
// line end:   4289
void ModifyPlrVit__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80063314
// line start: 4297
// line end:   4302
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x80063358
// line start: 4309
// line end:   4317
void SetPlrStr__Fii(int p, int v) {
}


// address: 0x80063474
// line start: 4324
// line end:   4332
void SetPlrMag__Fii(int p, int v) {
}


// address: 0x800634F8
// line start: 4339
// line end:   4347
void SetPlrDex__Fii(int p, int v) {
}


// address: 0x80063614
// line start: 4354
// line end:   4362
void SetPlrVit__Fii(int p, int v) {
}


// address: 0x80063694
// line start: 4369
// line end:   4372
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006369C
// line start: 4379
// line end:   4445
void PlayDungMsgs__Fv() {
}


// address: 0x80063C34
// line start: 4448
// line end:   4448
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063C5C
// line start: 4449
// line end:   4449
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80063CA0
// line start: 4450
// line end:   4450
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80063CD4
// line start: 4451
// line end:   4451
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80063D08
// line start: 4452
// line end:   4452
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80063D3C
// line start: 4453
// line end:   4453
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80063D70
// line start: 4454
// line end:   4454
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80063DA4
// line start: 4455
// line end:   4455
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80063DDC
// line start: 4456
// line end:   4456
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80063E10
// line start: 4457
// line end:   4457
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063E38
// line start: 4458
// line end:   4458
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063E60
// line start: 4459
// line end:   4459
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063E88
// line start: 4460
// line end:   4460
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80063ED0
// line start: 4461
// line end:   4461
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063EF8
// line start: 4462
// line end:   4462
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063F20
// line start: 4463
// line end:   4463
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80063F54
// line start: 4464
// line end:   4464
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063F7C
// line start: 4465
// line end:   4465
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063F9C
// line start: 4466
// line end:   4466
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80063FE0
// line start: 4467
// line end:   4467
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80064014
// line start: 4468
// line end:   4468
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80064048
// line start: 4470
// line end:   4470
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80064094
// line start: 4471
// line end:   4471
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x800640E0
// line start: 4472
// line end:   4472
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x8006412C
// line start: 4473
// line end:   4473
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80064180
// line start: 4474
// line end:   4474
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x800641CC
// line start: 4475
// line end:   4475
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80064218
// line start: 4476
// line end:   4476
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80064268
// line start: 4477
// line end:   4477
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x800642B4
// line start: 4478
// line end:   4478
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80064300
// line start: 4479
// line end:   4479
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x8006434C
// line start: 4480
// line end:   4480
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80064398
// line start: 4481
// line end:   4481
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x800643E4
// line start: 4482
// line end:   4482
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80064430
// line start: 4483
// line end:   4483
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80064480
// line start: 4484
// line end:   4484
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x800644CC
// line start: 4485
// line end:   4485
void FixPlayerLocation__Fii(int pnum, int bDir) {
}


// address: 0x80064518
// line start: 4486
// line end:   4486
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80064568
// line start: 4488
// line end:   4488
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x800645B4
// line start: 4489
// line end:   4489
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80064600
// line start: 4490
// line end:   4490
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x8006464C
// line start: 4491
// line end:   4491
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80064698
// line start: 4492
// line end:   4492
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x800646E4
// line start: 4493
// line end:   4493
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80064730
// line start: 4494
// line end:   4494
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x8006477C
// line start: 4495
// line end:   4495
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x800647C8
// line start: 4496
// line end:   4496
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80064814
// line start: 4497
// line end:   4497
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80064860
// line start: 4498
// line end:   4498
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x800648AC
// line start: 4506
// line end:   4507
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x800648E0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800648E0(struct POLY_FT4 **Prim) {
}


// address: 0x8006495C
// size: 0x80
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x800649AC
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800649B8
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800649C4
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800649D0
// line start: 156
// line end:   217
void TSK_Lava2Water__FP4TASK(struct TASK *T) {
}


// address: 0x800649D8
// line start: 221
// line end:   285
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x80064E90
// line start: 289
// line end:   316
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


// address: 0x80065034
// line start: 321
// line end:   327
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x800650FC
// line start: 333
// line end:   431
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
											// register: 6
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


// address: 0x80065728
// line start: 465
// line end:   490
void SetReturnLvlPos__Fv() {
}


// address: 0x80065838
// line start: 498
// line end:   503
void GetReturnLvlPos__Fv() {
}


// address: 0x8006588C
// line start: 510
// line end:   532
void ResyncMPQuests__Fv() {
}


// address: 0x800659C8
// line start: 542
// line end:   631
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80065F28
// line start: 647
// line end:   688
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


// address: 0x80066154
// line start: 697
// line end:   725
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x8006638C
// line start: 730
// line end:   747
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006640C
// line start: 755
// line end:   775
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006651C
// line start: 782
// line end:   790
void QuestlogUp__Fv() {
}


// address: 0x80066574
// line start: 798
// line end:   805
void QuestlogDown__Fv() {
}


// address: 0x800665DC
// line start: 813
// line end:   830
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80066698
// line start: 838
// line end:   843
void QuestlogESC__Fv() {
}


// address: 0x800666D8
// line start: 850
// line end:   870
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x800667DC
// line start: 917
// line end:   917
void _GLOBAL__D_questlog() {
}


// address: 0x80066804
// line start: 917
// line end:   917
void _GLOBAL__I_questlog() {
}


// address: 0x8006682C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8006682C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006684C
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8006684C(struct Dialog *this, int Type) {
}


// address: 0x80066854
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80066854(struct Dialog *this, int Type) {
}


// address: 0x8006685C
// line start: 77
// line end:   77
void ___6Dialog_addr_8006685C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80066884
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80066884(struct Dialog *this) {
}


// address: 0x800668E0
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


// address: 0x80066B4C
// line start: 326
// line end:   384
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x80066C44
// line start: 150
// line end:   151
void FreeStoreMem__Fv() {
}


// address: 0x80066C4C
// line start: 159
// line end:   162
void DrawSTextBack__Fv() {
}


// address: 0x80066CBC
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
	// address: 0x80120DD8
	static unsigned char DaveFix;
}


// address: 0x8006704C
// line start: 241
// line end:   248
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800670E0
// line start: 255
// line end:   268
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80067178
// line start: 274
// line end:   278
void AddSLine__Fi(int y) {
}


// address: 0x800671C8
// line start: 284
// line end:   285
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800671F0
// line start: 294
// line end:   303
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x800672A4
// line start: 308
// line end:   383
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x800676E8
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


// address: 0x80067D04
// line start: 456
// line end:   470
void S_StartSmith__Fv() {
}


// address: 0x80067E8C
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


// address: 0x80068038
// line start: 509
// line end:   527
void S_StartSBuy__Fv() {
}


// address: 0x80068168
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


// address: 0x80068330
// line start: 598
// line end:   628
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80068480
// line start: 634
// line end:   645
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80068568
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


// address: 0x80068754
// line start: 693
// line end:   739
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80068B7C
// line start: 747
// line end:   755
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80068C24
// line start: 760
// line end:   781
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80068E00
// line start: 786
// line end:   844
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x800692CC
// line start: 853
// line end:   865
void S_StartWitch__Fv() {
}


// address: 0x8006940C
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


// address: 0x800695B8
// line start: 906
// line end:   926
void S_StartWBuy__Fv() {
}


// address: 0x800696E0
// line start: 932
// line end:   952
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80069804
// line start: 958
// line end:   1018
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80069E50
// line start: 1027
// line end:   1033
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x80069EDC
// line start: 1039
// line end:   1048
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006A058
// line start: 1054
// line end:   1095
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006A46C
// line start: 1104
// line end:   1110
void S_StartNoMoney__Fv() {
}


// address: 0x8006A4D4
// line start: 1116
// line end:   1121
void S_StartNoRoom__Fv() {
}


// address: 0x8006A534
// line start: 1127
// line end:   1184
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x8006A868
// line start: 1190
// line end:   1208
void S_StartBoy__Fv() {
}


// address: 0x8006A9F8
// line start: 1215
// line end:   1239
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x8006AB44
// line start: 1247
// line end:   1267
void S_StartHealer__Fv() {
}


// address: 0x8006AD18
// line start: 1273
// line end:   1295
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x8006AE78
// line start: 1301
// line end:   1318
void S_StartHBuy__Fv() {
}


// address: 0x8006AF98
// line start: 1324
// line end:   1333
void S_StartStory__Fv() {
}


// address: 0x8006B088
// line start: 1339
// line end:   1343
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x8006B0BC
// line start: 1351
// line end:   1356
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006B18C
// line start: 1362
// line end:   1433
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006BBC8
// line start: 1442
// line end:   1459
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x8006BD58
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


// address: 0x8006BF88
// line start: 1506
// line end:   1516
void S_StartTavern__Fv() {
}


// address: 0x8006C080
// line start: 1522
// line end:   1531
void S_StartBarMaid__Fv() {
}


// address: 0x8006C154
// line start: 1537
// line end:   1546
void S_StartDrunk__Fv() {
}


// address: 0x8006C228
// line start: 1552
// line end:   1624
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x8006C510
// line start: 1631
// line end:   1635
void DrawSText__Fv() {
}


// address: 0x8006C550
// line start: 1640
// line end:   1654
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006C618
// line start: 1658
// line end:   1711
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006C7C4
// line start: 1719
// line end:   1783
void STextESC__Fv() {
}


// address: 0x8006C974
// line start: 1788
// line end:   1822
void STextUp__Fv() {
}


// address: 0x8006CAFC
// line start: 1832
// line end:   1864
void STextDown__Fv() {
}


// address: 0x8006CC94
// line start: 1876
// line end:   1898
void S_SmithEnter__Fv() {
}


// address: 0x8006CD68
// line start: 1905
// line end:   1916
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006CDE8
// line start: 1924
// line end:   1934
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006CE68
// line start: 1942
// line end:   2033
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8006D2B4
// line start: 2042
// line end:   2065
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006D498
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


// address: 0x8006D694
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


// address: 0x8006D814
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


// address: 0x8006DA58
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


// address: 0x8006DD28
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


// address: 0x8006DF8C
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


// address: 0x8006E274
// line start: 2314
// line end:   2330
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006E368
// line start: 2337
// line end:   2354
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006E5D0
// line start: 2360
// line end:   2378
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006E71C
// line start: 2385
// line end:   2402
void S_WitchEnter__Fv() {
}


// address: 0x8006E7CC
// line start: 2409
// line end:   2441
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006E9C0
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


// address: 0x8006EBBC
// line start: 2483
// line end:   2499
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006ECB0
// line start: 2506
// line end:   2520
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006EE20
// line start: 2526
// line end:   2544
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006EF6C
// line start: 2551
// line end:   2579
void S_BoyEnter__Fv() {
}


// address: 0x8006F0A4
// line start: 2586
// line end:   2597
void BoyBuyItem__Fv() {
}


// address: 0x8006F128
// line start: 2603
// line end:   2648
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006F3B4
// line start: 2653
// line end:   2687
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006F5B0
// line start: 2693
// line end:   2715
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006F8F8
// line start: 2722
// line end:   2757
void S_ConfirmEnter__Fv() {
}


// address: 0x8006FA14
// line start: 2762
// line end:   2780
void S_HealerEnter__Fv() {
}


// address: 0x8006FAAC
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


// address: 0x8006FCC8
// line start: 2824
// line end:   2837
void S_StoryEnter__Fv() {
}


// address: 0x8006FD60
// line start: 2844
// line end:   2862
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006FECC
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


// address: 0x800700C4
// line start: 2920
// line end:   2931
void S_TavernEnter__Fv() {
}


// address: 0x80070134
// line start: 2938
// line end:   2950
void S_BarmaidEnter__Fv() {
}


// address: 0x800701A4
// line start: 2957
// line end:   2968
void S_DrunkEnter__Fv() {
}


// address: 0x80070214
// line start: 2975
// line end:   3037
void STextEnter__Fv() {
}


// address: 0x80070424
// line start: 3042
// line end:   3124
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8007053C
// line start: 3129
// line end:   3131
void ReleaseStoreBtn__Fv() {
}


// address: 0x80070550
// line start: 3210
// line end:   3210
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x80070578
// line start: 3210
// line end:   3210
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x800705A0
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_800705A0(struct CPad *this) {
}


// address: 0x800705C8
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_800705C8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800705E8
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_800705E8(struct Dialog *this, int Type) {
}


// address: 0x800705F0
// line start: 77
// line end:   77
void ___6Dialog_addr_800705F0(struct Dialog *this, int __in_chrg) {
}


// address: 0x80070618
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80070618(struct Dialog *this) {
}


// address: 0x80070674
// line start: 303
// line end:   377
void sync_monster__FiPC12TSyncMonster(int pnum, struct TSyncMonster *p) {
	// register: 19
	register int ndx;
	// register: 16
	register unsigned long delta;
	// register: 16
	register int mdx;
	// register: 2
	register int mdy;
	{
		// register: 3
		register int i;
		{
			{
				{
					{
						// register: 16
						register int md;
					}
				}
			}
		}
	}
}


// address: 0x80070A50
// line start: 418
// line end:   450
unsigned long sync_update__FiPCUc(int pnum, unsigned char *pbBuf) {
	// register: 19
	// size: 0x30
	register struct TSyncHeader *pHdr;
	// register: 16
	register unsigned short wLen;
}


// address: 0x80070B88
// line start: 456
// line end:   461
void sync_init__Fv() {
}


// address: 0x80070BC4
// line start: 129
// line end:   202
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x80070D38
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


// address: 0x80070F30
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


// address: 0x80071020
// line start: 326
// line end:   402
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


// address: 0x8007141C
// line start: 411
// line end:   464
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


// address: 0x80071584
// line start: 526
// line end:   558
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


// address: 0x80071668
// line start: 570
// line end:   597
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


// address: 0x80071700
// line start: 76
// line end:   117
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x80071A18
// line start: 122
// line end:   150
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x80071CC8
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


// address: 0x80072128
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


// address: 0x800725A4
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


// address: 0x80072AB0
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


// address: 0x80072B70
// line start: 349
// line end:   360
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x80072C64
// line start: 367
// line end:   378
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x80072D58
// line start: 385
// line end:   396
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x80072E4C
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


// address: 0x80073168
// line start: 476
// line end:   497
void FadeGameOut__Fv() {
}


// address: 0x80073204
// line start: 501
// line end:   640
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


// address: 0x80073780
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


// address: 0x80073A48
// line start: 100
// line end:   137
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80073B60
// line start: 143
// line end:   164
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80073C00
// line start: 171
// line end:   194
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80073E64
// line start: 201
// line end:   236
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x80074118
// line start: 241
// line end:   264
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8007437C
// line start: 106
// line end:   107
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80074384
// line start: 113
// line end:   121
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x800743EC
// line start: 128
// line end:   130
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x8007440C
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x8007447C
// line start: 167
// line end:   195
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80074518
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80074580
// line start: 227
// line end:   234
void music_stop__Fv() {
}


// address: 0x800745CC
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x8007460C
// line start: 260
// line end:   273
void music_start__Fi(int nTrack) {
}


// address: 0x800746AC
// line start: 89
// line end:   152
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
	// size: 0xDC
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x80074B68
// line start: 163
// line end:   171
void CloseInvChr__Fv() {
}


// address: 0x80074BD0
// line start: 180
// line end:   190
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
}


// address: 0x80074CA4
// line start: 199
// line end:   230
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80074D14
// line start: 239
// line end:   269
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80074D84
// size: 0x90
// line start: 282
// line end:   317
struct GamePad *__7GamePadic(struct GamePad *this, int player_num, char move_style) {
	// register: 4
	register int i;
}


// address: 0x80074EF0
// line start: 326
// line end:   327
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80074F10
// line start: 336
// line end:   339
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80074F54
// line start: 348
// line end:   351
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80074F98
// line start: 360
// line end:   395
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 17
	register int i;
}


// address: 0x800750E4
// line start: 405
// line end:   433
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
	// register: 20
	register int oc;
}


// address: 0x800751AC
// line start: 441
// line end:   460
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80075208
// line start: 468
// line end:   471
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80075244
// line start: 480
// line end:   508
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x800752C8
// line start: 516
// line end:   637
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80075694
// line start: 647
// line end:   670
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80075740
// line start: 681
// line end:   727
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80075858
// line start: 739
// line end:   748
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x8007589C
// line start: 757
// line end:   833
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


// address: 0x80075BA0
// line start: 843
// line end:   904
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80075E74
// line start: 912
// line end:   951
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80076064
// line start: 959
// line end:   981
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


// address: 0x800761E8
// line start: 1048
// line end:   1279
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


// address: 0x80076788
// line start: 1287
// line end:   1389
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEC8
	// size: 0x90
	auto struct GamePad GPad1;
	// register: 4
	// size: 0x90
	register struct GamePad *gp;
	// address: 0xFFFFFF58
	// size: 0x90
	auto struct GamePad GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 20
	register int gpause;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x800769A4
// line start: 1395
// line end:   1412
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80076A54
// line start: 1424
// line end:   1425
void Init_GamePad__Fv() {
}


// address: 0x80076A84
// line start: 1430
// line end:   1441
void InitGamePadVars__Fv() {
}


// address: 0x80076AFC
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80076AFC(struct CBlocks *this) {
}


// address: 0x80076B10
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80076B10(struct CPad *this) {
}


// address: 0x80076B38
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_80076B38(struct CPad *this) {
}


// address: 0x80076B60
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80076B60(struct CPad *this) {
}


// address: 0x80076B88
// line start: 66
// line end:   69
void DoGameTestStuff__Fv() {
}


// address: 0x80076BB4
// line start: 73
// line end:   76
void DoInitGameStuff__Fv() {
}


// address: 0x80076BE8
// line start: 63
// line end:   64
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80076C08
// line start: 74
// line end:   76
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80076C28
// line start: 93
// line end:   94
void GRL_InitGwin__Fv() {
}


// address: 0x80076C34
// line start: 105
// line end:   109
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x80076C44
// line start: 120
// line end:   122
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80076C6C
// line start: 132
// line end:   148
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80076D10
// line start: 158
// line end:   165
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x80076D58
// size: 0x4
// line start: 79
// line end:   80
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80076D64
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


// address: 0x80076E68
// line start: 132
// line end:   152
char *GetStr__Fi(int StrId) {
}


// address: 0x80076ED0
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


// address: 0x80076FD4
// line start: 200
// line end:   209
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x8007702C
// line start: 218
// line end:   220
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80077038
// line start: 230
// line end:   246
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80077140
// line start: 254
// line end:   280
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x800771C0
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
	// size: 0x68
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


// address: 0x800776F8
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


// address: 0x80077878
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


// address: 0x800779D8
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


// address: 0x80077A70
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


// address: 0x80077B20
// line start: 234
// line end:   235
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077B84
// line start: 239
// line end:   242
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077C9C
// line start: 246
// line end:   248
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80077D34
// line start: 252
// line end:   254
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80077DCC
// line start: 258
// line end:   259
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077E34
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


// address: 0x80077EC8
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


// address: 0x80077FA8
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


// address: 0x80078080
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


// address: 0x80078110
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


// address: 0x8007822C
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


// address: 0x800782C8
// line start: 368
// line end:   369
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078330
// line start: 373
// line end:   374
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078398
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


// address: 0x800784CC
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


// address: 0x80078610
// line start: 404
// line end:   405
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078678
// line start: 409
// line end:   410
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800786D0
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


// address: 0x8007879C
// line start: 429
// line end:   430
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078800
// line start: 434
// line end:   436
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078808
// line start: 439
// line end:   514
void FuncFLASH__FP13MissileStructiii(struct MissileStruct *Ms, int x, int y, int OtPos) {
	// register: 16
	register int size;
	{
		{
			// register: 16
			// size: 0x80
			register struct CPlayer *test;
			// register: 16
			register int rot;
			{
				{
					// register: 5
					// size: 0x34
					register struct POLY_GT4 *GT4;
					// address: 0xFFFFFFC0
					// size: 0x68
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


// address: 0x80078D30
// line start: 519
// line end:   524
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078DD8
// line start: 528
// line end:   529
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078DE0
// line start: 532
// line end:   533
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078E14
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80078E14(struct POLY_FT4 **Prim) {
}


// address: 0x80078E90
// size: 0x80
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80078E90(int PNum) {
}


// address: 0x80078EE0
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80078EE0(struct CPlayer *this) {
}


// address: 0x80078EEC
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80078EEC(struct CPlayer *this) {
}


// address: 0x80078EF8
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80078EF8(struct CPlayer *this) {
}


// address: 0x80078F04
// line start: 227
// line end:   227
int GetNumOfFrames__7TextDat_addr_80078F04(struct TextDat *this) {
}


// address: 0x80078F18
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_80078F18(struct TextDat *this, int FrNum) {
}


// address: 0x80078F34
// line start: 67
// line end:   72
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80078F6C
// line start: 81
// line end:   96
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80078FEC
// line start: 105
// line end:   120
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80079084
// line start: 131
// line end:   147
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80079134
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


// address: 0x800792F0
// size: 0x28
// line start: 286
// line end:   313
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


// address: 0x80079484
// size: 0x28
// line start: 318
// line end:   337
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


// address: 0x8007953C
// size: 0x28
// line start: 353
// line end:   418
struct POLY_FT4 *DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	register int AnimFrame;
	// register: 19
	register int XOffSet;
	// register: 18
	register int YOffSet;
	// register: 5
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 17
	register int Creature;
	{
		{
		}
	}
}


// address: 0x80079764
// line start: 429
// line end:   436
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x8007983C
// size: 0x28
// line start: 447
// line end:   455
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800798C4
// size: 0x28
// line start: 465
// line end:   466
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800798F0
// size: 0x28
// line start: 476
// line end:   477
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007991C
// size: 0x28
// line start: 487
// line end:   488
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079948
// size: 0x28
// line start: 498
// line end:   499
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079974
// size: 0x28
// line start: 509
// line end:   510
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800799A0
// size: 0x28
// line start: 520
// line end:   521
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800799C4
// size: 0x28
// line start: 531
// line end:   532
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800799E8
// size: 0x28
// line start: 542
// line end:   543
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079A14
// size: 0x28
// line start: 553
// line end:   554
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079A40
// size: 0x28
// line start: 564
// line end:   565
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079A6C
// size: 0x28
// line start: 575
// line end:   576
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079A98
// size: 0x28
// line start: 586
// line end:   587
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079AC4
// size: 0x28
// line start: 597
// line end:   598
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079AF0
// size: 0x28
// line start: 608
// line end:   609
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079B1C
// size: 0x28
// line start: 619
// line end:   620
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079B48
// size: 0x28
// line start: 630
// line end:   631
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079B74
// size: 0x28
// line start: 641
// line end:   642
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079BA0
// size: 0x28
// line start: 652
// line end:   653
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079BCC
// size: 0x28
// line start: 663
// line end:   664
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079BF8
// size: 0x28
// line start: 674
// line end:   675
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079C24
// size: 0x28
// line start: 685
// line end:   686
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079C50
// size: 0x28
// line start: 696
// line end:   697
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079C7C
// size: 0x28
// line start: 707
// line end:   708
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079CA8
// size: 0x28
// line start: 718
// line end:   719
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079CD4
// size: 0x28
// line start: 729
// line end:   730
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079D00
// size: 0x28
// line start: 740
// line end:   741
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079D2C
// size: 0x28
// line start: 751
// line end:   752
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079D58
// size: 0x28
// line start: 762
// line end:   763
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079D84
// size: 0x28
// line start: 773
// line end:   774
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079DB0
// size: 0x28
// line start: 784
// line end:   785
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079DDC
// size: 0x28
// line start: 795
// line end:   796
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079E08
// size: 0x28
// line start: 806
// line end:   807
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079E34
// size: 0x28
// line start: 817
// line end:   818
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079E60
// size: 0x28
// line start: 828
// line end:   829
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079E8C
// size: 0x28
// line start: 839
// line end:   840
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079EB8
// size: 0x28
// line start: 850
// line end:   851
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079EE4
// size: 0x28
// line start: 861
// line end:   862
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079F10
// size: 0x28
// line start: 872
// line end:   873
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079F3C
// size: 0x28
// line start: 883
// line end:   884
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079F68
// line start: 894
// line end:   899
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x68
	register struct TextDat *ThisDat;
}


// address: 0x80079FFC
// size: 0x28
// line start: 903
// line end:   909
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8007A08C
// size: 0x28
// line start: 919
// line end:   925
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8007A11C
// size: 0x28
// line start: 935
// line end:   941
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8007A1AC
// size: 0x28
// line start: 951
// line end:   957
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8007A23C
// size: 0x28
// line start: 967
// line end:   968
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A268
// size: 0x28
// line start: 978
// line end:   979
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A294
// size: 0x28
// line start: 989
// line end:   990
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A2C0
// size: 0x28
// line start: 1000
// line end:   1001
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A2EC
// size: 0x28
// line start: 1011
// line end:   1012
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A318
// size: 0x28
// line start: 1022
// line end:   1023
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A344
// size: 0x28
// line start: 1033
// line end:   1034
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A370
// size: 0x28
// line start: 1044
// line end:   1045
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A39C
// size: 0x28
// line start: 1055
// line end:   1056
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A3C8
// size: 0x28
// line start: 1066
// line end:   1067
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A3F4
// size: 0x28
// line start: 1077
// line end:   1103
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


// address: 0x8007A54C
// size: 0x28
// line start: 1113
// line end:   1120
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007A618
// size: 0x28
// line start: 1130
// line end:   1137
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007A6E4
// size: 0x28
// line start: 1147
// line end:   1148
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A710
// size: 0x28
// line start: 1158
// line end:   1159
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A73C
// size: 0x28
// line start: 1169
// line end:   1170
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A768
// size: 0x28
// line start: 1180
// line end:   1181
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A794
// size: 0x28
// line start: 1191
// line end:   1192
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A7B8
// size: 0x28
// line start: 1202
// line end:   1203
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A7E4
// size: 0x28
// line start: 1213
// line end:   1214
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A810
// size: 0x28
// line start: 1224
// line end:   1225
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A83C
// size: 0x28
// line start: 1235
// line end:   1236
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A868
// size: 0x28
// line start: 1246
// line end:   1247
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A894
// size: 0x28
// line start: 1257
// line end:   1258
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A8C0
// size: 0x28
// line start: 1268
// line end:   1269
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A8EC
// size: 0x28
// line start: 1279
// line end:   1280
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A918
// size: 0x28
// line start: 1290
// line end:   1291
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A944
// size: 0x28
// line start: 1301
// line end:   1302
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A970
// size: 0x28
// line start: 1312
// line end:   1313
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A99C
// size: 0x28
// line start: 1323
// line end:   1324
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A9C8
// size: 0x28
// line start: 1334
// line end:   1335
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A9F4
// size: 0x28
// line start: 1345
// line end:   1346
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AA20
// size: 0x28
// line start: 1356
// line end:   1357
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AA4C
// size: 0x28
// line start: 1367
// line end:   1368
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AA78
// size: 0x28
// line start: 1378
// line end:   1410
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


// address: 0x8007AC0C
// size: 0x28
// line start: 1434
// line end:   1435
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AC38
// size: 0x28
// line start: 1445
// line end:   1446
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AC5C
// size: 0x28
// line start: 1456
// line end:   1457
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AC88
// size: 0x28
// line start: 1467
// line end:   1468
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007ACB4
// size: 0x28
// line start: 1478
// line end:   1479
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007ACE0
// size: 0x28
// line start: 1489
// line end:   1490
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AD0C
// size: 0x28
// line start: 1500
// line end:   1501
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AD38
// size: 0x28
// line start: 1511
// line end:   1512
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AD64
// size: 0x28
// line start: 1522
// line end:   1523
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AD90
// size: 0x28
// line start: 1533
// line end:   1534
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007ADBC
// size: 0x28
// line start: 1544
// line end:   1545
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007ADE8
// size: 0x28
// line start: 1555
// line end:   1556
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AE14
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8007AE14(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8007AE50
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8007AE50(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8007AE78
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007AE78(struct POLY_FT4 **Prim) {
}


// address: 0x8007AEF4
// line start: 239
// line end:   239
int GetNumOfFrames__7TextDatii_addr_8007AEF4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8007AF2C
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati_addr_8007AF2C(struct TextDat *this, int Creature) {
}


// address: 0x8007AFA4
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat_addr_8007AFA4(struct TextDat *this) {
}


// address: 0x8007AFB8
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_8007AFB8(struct TextDat *this, int FrNum) {
}


// address: 0x8007AFD4
// line start: 48
// line end:   58
void gamemenu_on__Fv() {
}


// address: 0x8007AFDC
// line start: 63
// line end:   65
void gamemenu_off__Fv() {
}


// address: 0x8007AFE4
// line start: 73
// line end:   95
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x8007AFEC
// line start: 100
// line end:   113
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x8007AFF4
// line start: 118
// line end:   124
void ResetPal__Fv() {
}


// address: 0x8007AFFC
// line start: 132
// line end:   139
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007B02C
// line start: 174
// line end:   175
bool GetFadeState__Fv() {
}


// address: 0x8007B038
// line start: 186
// line end:   198
void DrawFadedScreen__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007B104
// line start: 203
// line end:   215
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007B1C0
// line start: 222
// line end:   245
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x8007B244
// line start: 252
// line end:   259
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x8007B29C
// line start: 267
// line end:   293
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x8007B334
// line start: 300
// line end:   307
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x8007B388
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x8007B3A8
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


// address: 0x8007B54C
// line start: 168
// line end:   171
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x8007B588
// line start: 176
// line end:   188
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8007B654
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi(int i) {
	// register: 16
	register unsigned char _mAi;
}


// address: 0x8007B6D8
// line start: 205
// line end:   217
unsigned char M_Talker__Fi(int i) {
	// register: 16
	register unsigned char _mAi;
}


// address: 0x8007B770
// line start: 221
// line end:   306
void M_Enemy__Fi(int i) {
	// register: 30
	register int j;
	// register: 19
	register int mi;
	// register: 19
	register int pnum;
	// address: 0xFFFFFFA8
	auto int closest;
	// register: 3
	register int dist;
	// address: 0xFFFFFFB0
	auto int bestdist;
	// register: 20
	register unsigned char sameroom;
	// address: 0xFFFFFFB8
	auto unsigned char bestsameroom;
	// register: 22
	// size: 0x70
	register struct MonsterStruct *Monst;
	// address: 0xFFFFFFC0
	auto unsigned char enemyx;
	// address: 0xFFFFFFC8
	auto unsigned char enemyy;
	// register: 23
	register int _mxi;
	// address: 0xFFFFFFD0
	auto int _myi;
	{
		{
			// register: 17
			register int _mx;
			// register: 21
			register int _my;
		}
	}
}


// address: 0x8007BD74
// line start: 311
// line end:   320
void ClearMVars__Fi(int i) {
}


// address: 0x8007BE20
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


// address: 0x8007C2F4
// line start: 436
// line end:   444
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x8007C3A4
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


// address: 0x8007C538
// line start: 481
// line end:   500
void M_UpdateLeader__Fi(int i) {
	// register: 4
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x8007C6D8
// line start: 504
// line end:   512
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x8007C780
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


// address: 0x8007C970
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


// address: 0x8007CA9C
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


// address: 0x8007CD18
// line start: 620
// line end:   651
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x8007D020
// line start: 108
// line end:   200
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x8007D32C
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
// size: 0x8
// line start: 73
// line end:   74
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F9E0
// line start: 88
// line end:   90
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001FA1C
// line start: 109
// line end:   114
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001FA2C
// line start: 129
// line end:   134
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001FA44
// line start: 146
// line end:   148
unsigned char GSYS_InitMachine();

// address: 0x8001FA7C
// line start: 167
// line end:   181
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001FAB0
// line start: 192
// line end:   196
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FB2C
// line start: 170
// line end:   171
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001FB3C
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


// address: 0x8001FC70
// line start: 249
// line end:   271
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FD28
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


// address: 0x8001FE48
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


// address: 0x8001FFE0
// line start: 460
// line end:   482
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020040
// line start: 495
// line end:   526
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x800200BC
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


// address: 0x8002015C
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


// address: 0x800201D0
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


// address: 0x80020244
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


// address: 0x800202C0
// line start: 705
// line end:   711
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x800202E0
// line start: 725
// line end:   732
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x8002032C
// line start: 747
// line end:   760
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x8002035C
// line start: 774
// line end:   784
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x8002038C
// line start: 797
// line end:   798
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x800203BC
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


// address: 0x80020414
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


// address: 0x8002047C
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


// address: 0x800204E4
// size: 0x28
// line start: 940
// line end:   961
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x80020520
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


// address: 0x800205F4
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


// address: 0x800206D0
// line start: 1103
// line end:   1190
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x80020868
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


// address: 0x800208D4
// size: 0x20
// line start: 1245
// line end:   1262
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x8002095C
// line start: 1275
// line end:   1277
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x8002099C
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


// address: 0x80020A20
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


// address: 0x80020ABC
// line start: 1350
// line end:   1354
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020B24
// line start: 1374
// line end:   1388
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020B78
// line start: 1402
// line end:   1418
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020BCC
// line start: 1432
// line end:   1449
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020C50
// line start: 1462
// line end:   1467
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020CAC
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


// address: 0x80020DA8
// line start: 1549
// line end:   1574
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020E54
// line start: 1587
// line end:   1602
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020EAC
// line start: 1614
// line end:   1616
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020EDC
// size: 0x4
// line start: 1629
// line end:   1630
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020EEC
// line start: 1641
// line end:   1642
char *GAL_GetLastErrorText();

// address: 0x80020F14
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


// address: 0x80020F7C
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


// address: 0x80020FE4
// line start: 1725
// line end:   1726
void GAL_SetTimeStamp(int Time);

// address: 0x80020FF4
// line start: 1736
// line end:   1737
void GAL_IncTimeStamp();

// address: 0x80021014
// line start: 1746
// line end:   1747
int GAL_GetTimeStamp();

// address: 0x80021024
// line start: 1763
// line end:   1774
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80021074
// line start: 1794
// line end:   1799
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x800210C4
// line start: 1814
// line end:   1831
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x80021170
// line start: 1842
// line end:   1853
long GAL_GetSize(long hnd) {
}


// address: 0x800211C4
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


// address: 0x8002132C
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


// address: 0x800213D0
// line start: 2009
// line end:   2015
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80021404
// line start: 2028
// line end:   2038
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x80021470
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


// address: 0x80021568
// size: 0x20
// line start: 2130
// line end:   2149
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x800215A4
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


// address: 0x80021634
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


// address: 0x800216B0
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


// address: 0x80021764
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


// address: 0x800217C0
// line start: 2331
// line end:   2336
void GAL_MemDump(unsigned long Type);

// address: 0x80021834
// line start: 2350
// line end:   2351
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80021844
// line start: 2364
// line end:   2378
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x80021870
// line start: 2390
// line end:   2402
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x800218B8
// line start: 2411
// line end:   2412
int GAL_GetNumFreeHeaders();

// address: 0x800218C8
// line start: 2416
// line end:   2417
unsigned long GAL_GetLastTypeAlloced();

// address: 0x800218D8
// line start: 2427
// line end:   2434
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x800218F0
// line start: 2443
// line end:   2455
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021944
// line start: 2458
// line end:   2459
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x80021954
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


// address: 0x80021A44
// line start: 88
// line end:   91
void DoEpi(struct TASK *T);

// address: 0x80021A94
// line start: 99
// line end:   102
void DoPro(struct TASK *T);

// address: 0x80021AE4
// line start: 115
// line end:   129
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x80021B58
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


// address: 0x80021D40
// line start: 218
// line end:   277
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x80021F00
// line start: 287
// line end:   313
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x80021FDC
// line start: 321
// line end:   330
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x80022064
// line start: 338
// line end:   340
void TSK_Die();

// address: 0x80022090
// line start: 350
// line end:   357
void TSK_Kill(struct TASK *T);

// address: 0x800220E0
// size: 0x5C
// line start: 371
// line end:   372
struct TASK *TSK_GetFirstActive();

// address: 0x800220F0
// line start: 385
// line end:   395
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8002216C
// line start: 408
// line end:   418
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800221B4
// line start: 430
// line end:   440
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x800221F8
// size: 0x5C
// line start: 454
// line end:   455
struct TASK *TSK_GetCurrentTask();

// address: 0x80022208
// line start: 467
// line end:   468
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x80022220
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


// address: 0x80022278
// line start: 512
// line end:   514
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x80022290
// line start: 525
// line end:   526
void TSK_ClearExecFilter();

// address: 0x800222B4
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


// address: 0x800223B4
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


// address: 0x8002242C
// line start: 619
// line end:   620
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x80022440
// line start: 630
// line end:   631
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x80022454
// line start: 642
// line end:   643
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x80022468
// line start: 653
// line end:   654
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8002247C
// line start: 665
// line end:   666
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x80022490
// line start: 677
// line end:   678
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x800224A4
// line start: 689
// line end:   696
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800224F0
// line start: 707
// line end:   713
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x80022510
// line start: 722
// line end:   734
void LoTskKill(struct TASK *T) {
}


// address: 0x80022580
// line start: 744
// line end:   748
void ExecuteTask(struct TASK *T);

// address: 0x800225D0
// line start: 756
// line end:   762
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800225E8
// line start: 765
// line end:   771
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80022600
// line start: 775
// line end:   781
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80022618
// line start: 784
// line end:   790
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80022630
// line start: 793
// line end:   795
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x80022648
// line start: 799
// line end:   802
void TSK_ClearEpiProFilter();

// address: 0x8002267C
// line start: 810
// line end:   811
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8002268C
// line start: 819
// line end:   826
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x800226A4
// line start: 833
// line end:   838
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x800226CC
// line start: 841
// line end:   845
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x800226F8
// line start: 848
// line end:   857
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x80024A00
// line start: 157
// line end:   167
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80024A4C
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


