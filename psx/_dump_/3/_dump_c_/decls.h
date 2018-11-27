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
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007D798
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007D7A4
void Remove96__Fv() {
}


// address: 0x8007D7DC
void AppMain() {
}


// address: 0x8007D884
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007D8B0
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007D948
void MAIN_MainLoop__Fv() {
}


// address: 0x8007D99C
void CheckMaxArgs__Fv() {
}


// address: 0x8007D9D0
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007D9DC
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
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007DC04
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007DCA4
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007DD40
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007DDE0
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
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007DFD8
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007E100
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007E13C
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007E344
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007E380
unsigned char ClearedYet__Fv() {
}


// address: 0x8007E38C
void PrimDrawSycnCallBack() {
}


// address: 0x8007E3AC
void SendDispEnv__Fv() {
}


// address: 0x8007E3D0
// size: 0x18
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007E3E8
// size: 0x28
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007E400
// size: 0x34
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007E418
// size: 0x24
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007E430
// size: 0x14
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007E448
// size: 0xC
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007E460
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007E574
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007E5DC
void VID_AfterDisplay__Fv() {
}


// address: 0x8007E5FC
void VID_ScrOn__Fv() {
}


// address: 0x8007E624
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007E67C
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007E688
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007E694
void VID_DispEnvSend() {
}


// address: 0x8007E6D0
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007E6E0
int VID_GetXOff__Fv() {
}


// address: 0x8007E6EC
int VID_GetYOff__Fv() {
}


// address: 0x8007E6F8
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007E700
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007E720
int GetTpY__FUs_addr_8007E720(unsigned short tpage) {
}


// address: 0x8007E73C
int GetTpX__FUs_addr_8007E73C(unsigned short tpage) {
}


// address: 0x8007E748
// size: 0x14
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007E754
// size: 0x14
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007E760
void SortOutFileSystem__Fv() {
}


// address: 0x8007E89C
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007E8BC
void Spanker__Fv() {
}


// address: 0x8007E8FC
void GaryLiddon__Fv() {
}


// address: 0x8007E904
void ReadPad__Fi(int NoDeb) {
	// register: 2
	register int New;
}


// address: 0x8007E964
void DummyPoll__Fv() {
}


// address: 0x8007E96C
void DaveOwens__Fv() {
}


// address: 0x8007E994
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007E9BC
int GetTpY__FUs_addr_8007E9BC(unsigned short tpage) {
}


// address: 0x8007E9D8
int GetTpX__FUs_addr_8007E9D8(unsigned short tpage) {
}


// address: 0x8007E9E4
void TimSwann__Fv() {
}


// address: 0x8007E9EC
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007E9F4
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007EA28
void leighbird__Fv() {
}


// address: 0x8007EA50
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007EAA0
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007EAF4
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007EC5C
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007ECC0
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007ECE0
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007EDC0
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007EE84
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007EEE8
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007EFC4
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
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007F180
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007F1D8
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007F230
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007F244
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007F280
// size: 0x14
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007F2E8
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007F340
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007F384
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007F448
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007F500
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007F5D4
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
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007F7FC
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007F828
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007F8A4
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007F910
// size: 0x14
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007F94C
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007F9A4
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007F9E4
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FAA4
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007FB58
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FC00
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
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007FE4C
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007FE94
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
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x80080210
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8008026C
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x800802DC
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
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x800813C8
// size: 0x34
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8008151C
// size: 0x28
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x80081600
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x80081754
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
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x800819BC
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x80081B04
// size: 0x68
struct TextDat *GM_UseTexData__Fi(int Id) {
}


// address: 0x80081B78
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x80081B98
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x80081BEC
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x80081C44
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
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x80081E8C
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x80081EB4
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x80081F5C
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
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x80082060
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


// address: 0x800820F0
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
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8008221C
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80082244
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
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x80082348
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
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x80082450
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
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x80082628
void Display__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x800828FC
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80082974
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
void _GLOBAL__D_AllDats() {
}


// address: 0x80082B28
void _GLOBAL__I_AllDats() {
}


// address: 0x80082B7C
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x80082BF8
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x80082C74
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80082CF0
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
bool CanXferFrame__7TextDat(struct TextDat *this) {
}


// address: 0x80082DE0
bool CanXferPal__7TextDat(struct TextDat *this) {
}


// address: 0x80082E08
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80082E80
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x80082E94
void SetFileInfo__7TextDatPC13CTextFileInfo(struct TextDat *this, struct CTextFileInfo *NewInfo) {
}


// address: 0x80082E9C
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x80082EB0
// size: 0x8
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x80082ECC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80082EE8
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80082EF4
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80082F1C
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80082F44
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x80082F58
// size: 0x14
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x80082F9C
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80082FF4
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80083018
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80083040
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80083064
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80083144
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x80083154
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
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x800835EC
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
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80083DFC
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80083E30
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80083F18
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80083F24
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x80083F90
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
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x800840B4
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x800840EC
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
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x800843FC
void Tfree__FPv(void *Addr) {
}


// address: 0x800844AC
void InitTmalloc__Fv() {
}


// address: 0x800844D4
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80084528
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80084574
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
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80084630
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
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80084CA4
bool PA_GetPauseOk__Fv() {
}


// address: 0x80084CB0
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80084E00
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084E08
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80084F08
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80084F10
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084F18
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80085018
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80085020
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80085028
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x8008510C
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80085114
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x8008513C
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80085164
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x8008518C
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800851D0
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80085204
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80085218
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80085238
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80085240
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80085248
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80085270
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x800852CC
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x800852F4
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x8008531C
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
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x8008556C
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x800856A4
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80085800
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80085924
void _GLOBAL__I_Pad0() {
}


// address: 0x8008595C
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x80085964
// size: 0x6C
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80085998
void Flush__4CPad(struct CPad *this) {
}


// address: 0x800859BC
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
void InitPrinty__Fv() {
}


// address: 0x80085AE0
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
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x80086068
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x800860CC
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x800860D8
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x800860FC
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x8008611C
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80086134
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8008618C
void Init__5CFont(struct CFont *this) {
}


// address: 0x800861C0
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800861C0(struct TextDat *this, int FrNum) {
}


// address: 0x800861DC
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80086214
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


// address: 0x80086B8C
// size: 0x24
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80086CC4
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
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x800872F8
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
struct PAL *GetPal__7TextDati_addr_800886D0(struct TextDat *this, int PalNum) {
}


// address: 0x800886EC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800886EC(struct TextDat *this, int FrNum) {
}


// address: 0x80088708
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x800887C0
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x8008885C
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x8008889C
void CycleSelCols__Fv() {
}


// address: 0x80088A2C
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
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80088AF4
// size: 0xDC
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x80088C48
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088C80
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x80088D48
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80088DD0
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80088E38
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80088EA0
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x80088EFC
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x80088F4C
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80089298
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x80089340
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x80089414
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
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x800896D0
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x800896F8
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x80089720
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80089738
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
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008C558
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008C56C
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008C630
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x8008C698
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008C738
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008C80C
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008C88C
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008C894
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008C8A8
// size: 0xDC
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008C8B4
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008C8B4(struct POLY_FT4 **Prim) {
}


// address: 0x8008C930
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008C978
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008C9B4
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008C9FC
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008C9FC(struct POLY_GT4 **Prim) {
}


// address: 0x8008CA78
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x8008CAF4
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
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008CB38
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008CB60
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008CB88
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008CBAC
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008CBD0
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008CBF8
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008CC04
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008CC9C
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8008CD2C
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
bool CanXferPal__7TextDat_addr_8008CDF4(struct TextDat *this) {
}


// address: 0x8008CE1C
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008CE54
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008CE54(struct TextDat *this, int Creature) {
}


// address: 0x8008CECC
int GetNumOfCreatures__7TextDat_addr_8008CECC(struct TextDat *this) {
}


// address: 0x8008CEE0
void SetFileInfo__7TextDatPC13CTextFileInfo_addr_8008CEE0(struct TextDat *this, struct CTextFileInfo *NewInfo) {
}


// address: 0x8008CEE8
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008CEE8(struct TextDat *this, int PalNum) {
}


// address: 0x8008CF04
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008CF04(struct TextDat *this, int FrNum) {
}


// address: 0x8008CF20
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008CF4C
void OVR_LoadPregame__Fv() {
}


// address: 0x8008CF7C
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008CFAC
void OVR_LoadGame__Fv() {
}


// address: 0x8008CFDC
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008D008
void ClearOutOverlays__Fv() {
}


// address: 0x8008D050
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008D114
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008D184
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008D260
void StevesDummyPoll__Fv() {
}


// address: 0x8008D268
void Lambo__Fv() {
}


// address: 0x8008D270
// size: 0x80
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008D354
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008D3AC
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008D404
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
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008D9FC
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
void SetpNscrnxy__7CPlayeriiii(struct CPlayer *this, int x, int y, int px, int py) {
}


// address: 0x8008DEB4
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008DF30
// size: 0x4
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008DF98
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008DFA0
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008DFA8
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008DFA8(struct POLY_FT4 **Prim) {
}


// address: 0x8008E024
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008E024(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008E060
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
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008E09C
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008E0B4
int GetNumOfFrames__7TextDatii_addr_8008E0B4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008E0EC
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008E110
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008E110(struct TextDat *this, int Creature) {
}


// address: 0x8008E188
int GetNumOfCreatures__7TextDat_addr_8008E188(struct TextDat *this) {
}


// address: 0x8008E19C
void SetFileInfo__7TextDatPC13CTextFileInfo_addr_8008E19C(struct TextDat *this, struct CTextFileInfo *NewInfo) {
}


// address: 0x8008E1A4
void PROF_Open__Fv() {
}


// address: 0x8008E1E4
bool PROF_State__Fv() {
}


// address: 0x8008E1F0
void PROF_On__Fv() {
}


// address: 0x8008E200
void PROF_Off__Fv() {
}


// address: 0x8008E20C
void PROF_CpuEnd__Fv() {
}


// address: 0x8008E23C
void PROF_CpuStart__Fv() {
}


// address: 0x8008E260
void PROF_DrawStart__Fv() {
}


// address: 0x8008E284
void PROF_DrawEnd__Fv() {
}


// address: 0x8008E2B4
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
void PROF_Restart__Fv() {
}


// address: 0x8008E4C8
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008E578
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008E618
void GoBackLevel__Fv() {
}


// address: 0x8008E690
void GoWarpLevel__Fv() {
}


// address: 0x8008E6C8
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008E764
void GoLoadGame__Fv() {
}


// address: 0x8008E7EC
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008E884
void GoForwardLevel__Fv() {
}


// address: 0x8008E8DC
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008E974
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008E9C4
void PostNewGame__Fv() {
}


// address: 0x8008E9FC
void LevelToLevelInit__Fv() {
}


// address: 0x8008EA54
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008EA98
// size: 0x10
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008EAF0
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
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008F594
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008F950
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008FA44
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008FB48
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008FB48(struct TextDat *this, int PalNum) {
}


// address: 0x8008FB64
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008FB64(struct TextDat *this, int FrNum) {
}


// address: 0x8008FB80
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008FB94
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008FBD4
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
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008FF9C
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008FFF4
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x80090100
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x80090150
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x800901A0
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8009020C
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x80090318
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80090438
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x80090500
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x800906DC
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
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x80090FE0
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
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x800910C4
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80121788
	static int DestAddr;
}


// address: 0x8009113C
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x80091270
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800912C4
void SND_StopSnd__Fi(int voice) {
}


// address: 0x800912E8
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8009134C
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
void AS_CallBack0__Fi(int handle) {
}


// address: 0x80091514
void AS_CallBack1__Fi(int handle) {
}


// address: 0x80091528
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80091604
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x800916A4
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x800916B0
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x800916DC
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x800917FC
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x80091830
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x800918C0
// size: 0x18
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8009199C
// size: 0x18
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80091A1C
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x80091ABC
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80091B50
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
void SCR_Handler__Fv() {
}


// address: 0x80091BEC
int GetNumOfObjs__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
}


// address: 0x80091BF4
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80091C30
void Init__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80091C94
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x80091CEC
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x80091D44
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80091D58
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x80091D84
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x80091D8C
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x80091D94
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x80091DA0
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80091DD8
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80091DE4
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80091E04
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80091E50
void stub__FPcPv_addr_80091E50(char *e, void *argptr) {
}


// address: 0x80091E58
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x80091E8C
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x80091F14
void print_demo_task__FP4TASK(struct TASK *T) {
}


// address: 0x80092044
void TonysDummyPoll__Fv() {
}


// address: 0x8009204C
void load_demo_pad_data__FUl(unsigned long demo_num) {
}


// address: 0x8009209C
void save_demo_pad_data__FUl(unsigned long demo_num) {
}


// address: 0x800920EC
void set_pad_record_play__Fi(int level) {
}


// address: 0x80092164
void demo_game_task__FP4TASK(struct TASK *T) {
}


// address: 0x8009219C
void start_demo__Fv() {
}


// address: 0x800921F0
void tony__Fv() {
}


// address: 0x80092244
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x80092250
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8009225C
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800922B0
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80092304
void GLUE_PreTown__Fv() {
}


// address: 0x80092368
bool GLUE_Finished__Fv() {
}


// address: 0x80092374
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80092380
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x80092404
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80092414
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80092424
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80092434
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8009250C
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
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x80092A4C
// size: 0x8
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80092AA8
// size: 0x8
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80092AD8
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x80092B18
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80092B6C
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80092C18
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x80092C24
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x80092C2C
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80092C40
char *get_action_str__Fii(int pval, int combo) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x80092CC0
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
}


// address: 0x80092CFC
void RemoveCtrlScreen__Fv() {
}


// address: 0x80092D44
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
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80093388
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800933C8
unsigned char set_buttons__Fii(int cline, int n) {
	// register: 3
	register int cval;
	// register: 4
	register int i;
	// register: 19
	register int p;
}


// address: 0x80093568
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x800935B8
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x80093848
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
void _GLOBAL__D_CtrlBorder() {
}


// address: 0x800942D4
void _GLOBAL__I_CtrlBorder() {
}


// address: 0x8009430C
unsigned short GetDown__C4CPad_addr_8009430C(struct CPad *this) {
}


// address: 0x80094334
unsigned short GetCur__C4CPad_addr_80094334(struct CPad *this) {
}


// address: 0x8009435C
void SetRGB__6DialogUcUcUc_addr_8009435C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009437C
void SetBorder__6Dialogi_addr_8009437C(struct Dialog *this, int Type) {
}


// address: 0x80094384
void ___6Dialog_addr_80094384(struct Dialog *this, int __in_chrg) {
}


// address: 0x800943AC
// size: 0x10
struct Dialog *__6Dialog_addr_800943AC(struct Dialog *this) {
}


// address: 0x80094408
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80094428
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80094474
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x80094600
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
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8009496C
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x800949BC
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
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80094DCC
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
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80094F94(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80094FD0
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
void PRIM_GetPrim__FPP8POLY_FT4_addr_80094FF8(struct POLY_FT4 **Prim) {
}


// address: 0x80095074
int GetNumOfActions__7TextDati_addr_80095074(struct TextDat *this, int Creature) {
}


// address: 0x80095098
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80095098(struct TextDat *this, int Creature) {
}


// address: 0x80095110
int GetNumOfCreatures__7TextDat_addr_80095110(struct TextDat *this) {
}


// address: 0x80095124
void DaveLDummyPoll__Fv() {
}


// address: 0x8009512C
void DaveL__Fv() {
}


// address: 0x80095154
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
void mteleportfx__Fv() {
	// register: 2
	register int br;
}


// address: 0x8009570C
void invistimer__Fv() {
}


// address: 0x800957DC
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
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80095EF8
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80095FDC
void doparticlejump__Fv() {
}


// address: 0x8009601C
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80096184
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
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x80096A48
void healFX__Fv() {
}


// address: 0x80096ADC
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80096B9C
void HealStart__Fi(int plr) {
}


// address: 0x80096BB8
void HealotherStart__Fi(int plr) {
}


// address: 0x80096BD8
void TeleStart__Fi(int plr) {
}


// address: 0x80096C20
void PhaseStart__Fi(int plr) {
}


// address: 0x80096C50
void InvisStart__Fi(int plr) {
}


// address: 0x80096C80
void PhaseEnd__Fi(int plr) {
}


// address: 0x80096CA8
void ApocaStart__Fi(int plr) {
}


// address: 0x80096DD0
void doapocaFX__Fv() {
	// address: 0x801205EC
	static int scale1;
	// address: 0x801205F0
	static int scale2;
}


// address: 0x80097004
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80097068
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x800970E4
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80097160
void PRIM_GetPrim__FPP8POLY_FT4_addr_80097160(struct POLY_FT4 **Prim) {
}


// address: 0x800971DC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800971DC(struct TextDat *this, int FrNum) {
}


// address: 0x800971F8
void DrawArrow__Fii(int x1, int y1) {
	// register: 17
	register int bright;
	{
		// register: 18
		register int i;
	}
}


// address: 0x80097640
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
void release_spell__Fi(int pnum) {
}


// address: 0x80097A98
void select_belt_item__Fi(int pnum) {
}


// address: 0x80097AA0
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097B08
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097C3C
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097D78
void pad_func_up__Fi(int pnum) {
}


// address: 0x80097DA4
void pad_func_down__Fi(int pnum) {
}


// address: 0x80097DD0
void pad_func_left__Fi(int pnum) {
}


// address: 0x80097DD8
void pad_func_right__Fi(int pnum) {
}


// address: 0x80097DE0
void pad_func_select__Fi(int pnum) {
}


// address: 0x80097ED0
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
void RemoveTargetCursor__Fi(int pnum) {
}


// address: 0x8009878C
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
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80098F4C
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80099088
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800991A8
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800992C0
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x8009936C
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80099424
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x8009953C
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
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x80099790
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800997B8
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800997E0
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
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80099A28
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
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x8009A470
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 10
	register char co;
}


// address: 0x8009A848
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
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
}


// address: 0x8009ACF8
void _GLOBAL__D_gplayer() {
}


// address: 0x8009AD20
void _GLOBAL__I_gplayer() {
}


// address: 0x8009AD48
void SetRGB__6DialogUcUcUc_addr_8009AD48(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009AD68
void SetBack__6Dialogi_addr_8009AD68(struct Dialog *this, int Type) {
}


// address: 0x8009AD70
void SetBorder__6Dialogi_addr_8009AD70(struct Dialog *this, int Type) {
}


// address: 0x8009AD78
void ___6Dialog_addr_8009AD78(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009ADA0
// size: 0x10
struct Dialog *__6Dialog_addr_8009ADA0(struct Dialog *this) {
}


// address: 0x8009ADFC
void MoveToScrollTarget__7CBlocks_addr_8009ADFC(struct CBlocks *this) {
}


// address: 0x8009AE10
unsigned short GetDown__C4CPad_addr_8009AE10(struct CPad *this) {
}


// address: 0x8009AE38
unsigned short GetCur__C4CPad_addr_8009AE38(struct CPad *this) {
}


// address: 0x8009AE60
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009AEDC
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009AF34
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8009AF90
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009AFC8
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009B000
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009B060
bool IsGameLoading__Fv() {
}


// address: 0x8009B06C
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
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x8009B570
void TakeDownCutScreen__Fv() {
}


// address: 0x8009B5B8
void FinishProgress__Fv() {
}


// address: 0x8009B600
void PRIM_GetPrim__FPP7POLY_G4_addr_8009B600(struct POLY_G4 **Prim) {
}


// address: 0x8009B67C
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009B6B4
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x8009B6EC
void SetRGB__6DialogUcUcUc_addr_8009B6EC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009B70C
void SetBack__6Dialogi_addr_8009B70C(struct Dialog *this, int Type) {
}


// address: 0x8009B714
void SetBorder__6Dialogi_addr_8009B714(struct Dialog *this, int Type) {
}


// address: 0x8009B71C
void ___6Dialog_addr_8009B71C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009B744
// size: 0x10
struct Dialog *__6Dialog_addr_8009B744(struct Dialog *this) {
}


// address: 0x8009B7A0
void ___7CScreen_addr_8009B7A0(struct CScreen *this, int __in_chrg);

// address: 0x8009B7C0
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x8009B9DC
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009B9E8
void init_card__Fi(int card_number) {
}


// address: 0x8009BA1C
int ping_card__Fi(int card_number) {
}


// address: 0x8009BAB0
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009BAE8
void MemcardON__Fv() {
}


// address: 0x8009BB50
void MemcardOFF__Fv() {
}


// address: 0x8009BBC0
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009BCA4
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
void CalcVolumes__Fv() {
}


// address: 0x8009E3C8
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
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 16
	register int oldot;
	// register: 18
	// size: 0x6C
	register struct CPad *P;
}


// address: 0x8009E85C
void ToggleOptions__Fv() {
}


// address: 0x8009E8FC
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
void _GLOBAL__I_cmenu() {
}


// address: 0x8009F02C
void PRIM_GetPrim__FPP7POLY_G4_addr_8009F02C(struct POLY_G4 **Prim) {
}


// address: 0x8009F0A8
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009F0D0
unsigned short GetDown__C4CPad_addr_8009F0D0(struct CPad *this) {
}


// address: 0x8009F0F8
unsigned short GetUp__C4CPad_addr_8009F0F8(struct CPad *this) {
}


// address: 0x8009F120
unsigned short GetCur__C4CPad_addr_8009F120(struct CPad *this) {
}


// address: 0x8009F148
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8009F150
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009F158
void SetRGB__6DialogUcUcUc_addr_8009F158(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009F178
void SetBack__6Dialogi_addr_8009F178(struct Dialog *this, int Type) {
}


// address: 0x8009F180
void SetBorder__6Dialogi_addr_8009F180(struct Dialog *this, int Type) {
}


// address: 0x8009F188
void ___6Dialog_addr_8009F188(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009F1B0
// size: 0x10
struct Dialog *__6Dialog_addr_8009F1B0(struct Dialog *this) {
}


// address: 0x8009F20C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009F20C(struct TextDat *this, int FrNum) {
}


// address: 0x8009F228
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009F280
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
}


// address: 0x8009F3C4
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009F440
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 2
	register int type;
	// register: 4
	register int i;
}


// address: 0x8009F520
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009F574
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F5D0
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F6B0
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F6EC
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F770
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F814
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
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FB94
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FBE4
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
void LBirdTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009FDDC
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
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x800A007C
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 18
	// size: 0x68
	register struct TextDat *Dat;
}


// address: 0x800A0154
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
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A034C(struct POLY_FT4 **Prim) {
}


// address: 0x8002F644
unsigned char TrimCol__Fs_addr_8002F644(short col) {
}


// address: 0x8002F67C
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
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x80033270
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
	// address: 0xFFFFFCC8
	// size: 0x320
	auto int mtypes[200];
}


// address: 0x800367E4
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x8003682C
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8003687C
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800368F8
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8003696C
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80036A30
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80036BBC
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80036D3C
unsigned char TryIconCurs__Fv() {
}


// address: 0x80037118
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80037120
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800371D0
void LoadLvlGFX__Fv() {
}


// address: 0x80037294
void LoadAllGFX__Fv() {
}


// address: 0x800372B4
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800373AC
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80037578
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
void game_logic__Fv() {
}


// address: 0x800380A0
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80038148
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80038180
void alloc_plr__Fv() {
}


// address: 0x80038188
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80038190
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x800381B0
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x800381D0
void app_fatal(char *pszFile) {
}


// address: 0x80038200
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038228
void DoMemCardFromInGame__Fv() {
}


// address: 0x80038250
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800382A4
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800382C4
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x8003830C
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003846C
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80038524
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038688
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800387F4
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003895C
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038AC4
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038C2C
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038D9C
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038F04
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003906C
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800391D4
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
void InitTowners__Fv() {
}


// address: 0x80039540
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
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80039704
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80039738
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x8003976C
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80039854
void TownHealer__Fv() {
}


// address: 0x8003987C
void TownStory__Fv() {
}


// address: 0x800398A4
void TownDrunk__Fv() {
}


// address: 0x800398CC
void TownBoy__Fv() {
}


// address: 0x800398F4
void TownWitch__Fv() {
}


// address: 0x8003991C
void TownBarMaid__Fv() {
}


// address: 0x80039944
void TownCow__Fv() {
}


// address: 0x8003996C
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
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80039C90
void CowSFX__Fi(int pnum) {
	// address: 0x801172D0
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80120BCC
	static int snLastCowSFX;
}


// address: 0x80039DAC
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80039DEC
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
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003B248
void stream_stop__Fv() {
}


// address: 0x8003B290
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003B36C
void stream_update__Fv() {
}


// address: 0x8003B374
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003B390
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003B3E8
void FreeMonsterSnd__Fv() {
}


// address: 0x8003B3F0
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003B4F4
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003B604
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003B730
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003B7C8
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003B830
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003B8B0
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
void sound_update__Fv() {
}


// address: 0x8003B97C
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003B9C0
void sound_init__Fv() {
	// register: 16
	register unsigned char bLoadMask;
}


// address: 0x8003BA94
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003BB38
void SetRndSeed__Fl(long s) {
}


// address: 0x8003BB48
long GetRndSeed__Fv() {
}


// address: 0x8003BB90
long random__Fil(int idx, long v) {
}


// address: 0x8003BBFC
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003BC48
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003BC98
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003BCA0
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003BCA8
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003BCB0
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003BD44
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003BD70
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFEE8
	// size: 0x100
	auto char tempstr[256];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x8003BE7C
void interface_msg_pump__Fv() {
}


// address: 0x8003BE84
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
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003C554
void InitItemGFX__Fv() {
}


// address: 0x8003C580
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003C648
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
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003CA20
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
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003DDC4
void CalcPlrStaff__Fi(int p) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003DEC0
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
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003E06C
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
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003E3E0
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003E478
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003E590
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003E5BC
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
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003E740
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003E770
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8003EBA8
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003EE80
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
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003F394
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003F5FC
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
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003FFEC
int RndPL__Fii(int param1, int param2) {
}


// address: 0x80040024
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x80040098
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x800416A4
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
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80041C08
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80041D1C
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
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x8004286C
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80042978
void ItemRndDur__Fi(int ii) {
}


// address: 0x80042A08
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80042D14
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x80042F5C
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x8004308C
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800431D4
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x800432AC
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x8004336C
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800434B0
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x8004369C
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
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x80043C4C
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80043CA0
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x94
	register struct ItemStruct *i;
}


// address: 0x80043D68
void ProcessItems__Fv() {
	// register: 6
	register int i;
	// register: 5
	register int ii;
}


// address: 0x80043EAC
void FreeItemGFX__Fv() {
}


// address: 0x80043EB4
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
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8004412C
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x800441FC
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x800442C0
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80044330
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
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80044524
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80044BD0
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80044E5C
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800451C8
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800454D8
void CastScroll__Fi(int pnum) {
}


// address: 0x800454E0
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 6
	register unsigned long t;
}


// address: 0x80045ECC
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80045F60
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80045FDC
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
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x8004652C
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x8004667C
void SpawnStoreGold__Fv() {
}


// address: 0x800466FC
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x8004689C
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80046900
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80046A90
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80046C0C
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80046D88
char *MakeItemStr__FP10ItemStructUs(struct ItemStruct *ItemPtr, unsigned short ItemNo) {
	// register: 6
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80046F88
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x80046FF0
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 5
	register int y;
	// register: 4
	register int c;
}


// address: 0x80047064
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x800470D0
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
void FreeLightTable__Fv() {
}


// address: 0x800485A0
void InitLightTable__Fv() {
}


// address: 0x800485A8
void MakeLightTable__Fv() {
}


// address: 0x800485B0
void InitLightMax__Fv() {
}


// address: 0x800485D4
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80048618
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x800486AC
void AddUnLight__Fi(int i) {
}


// address: 0x800486DC
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80048708
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80048740
void light_fix__Fi(int i) {
}


// address: 0x80048748
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80048780
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x800487C4
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x800487F4
void ProcessLightList__Fv() {
	// register: 7
	register int i;
	// register: 16
	register int j;
	// register: 4
	register unsigned char temp;
}


// address: 0x80048920
void SavePreLighting__Fv() {
}


// address: 0x80048928
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80048978
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80048A7C
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80048B30
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x80048BE8
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x80048E48
void FreeQuestText__Fv() {
}


// address: 0x80048E50
void InitQuestText__Fv() {
}


// address: 0x80048E5C
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
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x800490C4
void DrawQTextBack__Fv() {
}


// address: 0x80049134
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800491C0
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8004928C
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
void _GLOBAL__D_QBack() {
}


// address: 0x800495E4
void _GLOBAL__I_QBack() {
}


// address: 0x8004960C
void SetRGB__6DialogUcUcUc_addr_8004960C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8004962C
void SetBorder__6Dialogi_addr_8004962C(struct Dialog *this, int Type) {
}


// address: 0x80049634
void ___6Dialog_addr_80049634(struct Dialog *this, int __in_chrg) {
}


// address: 0x8004965C
// size: 0x10
struct Dialog *__6Dialog_addr_8004965C(struct Dialog *this) {
}


// address: 0x800496B8
int GetCharWidth__5CFontc_addr_800496B8(struct CFont *this, char ch) {
}


// address: 0x80049710
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80049710(struct TextDat *this, int FrNum) {
}


// address: 0x8004972C
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80049734
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8004973C
void run_delta_info__Fv() {
}


// address: 0x80049744
void delta_init__Fv() {
}


// address: 0x800497A4
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 2
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x800498D8
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 4
	// size: 0xC
	register struct DMonsterStr *p;
}


// address: 0x800499A8
void delta_sync_monster__FPC12TSyncMonsterUc(struct TSyncMonster *pSync, unsigned char bLevel) {
	// register: 6
	// size: 0xC
	register struct DMonsterStr *pD;
}


// address: 0x80049A80
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 3
	// size: 0xC
	register struct DMonsterStr *pD;
}


// address: 0x80049B64
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
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80049E90
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 24
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 6
	register int i;
}


// address: 0x8004A0D0
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 16
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 18
	register int i;
}


// address: 0x8004A300
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x8004A360
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x8004A3C0
void DeltaAddItem__Fi(int ii) {
	// register: 4
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x8004A634
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x8004A664
int DeltaImportData__FPc(char *Src) {
}


// address: 0x8004A698
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
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x8004A8E0
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct TCmdGolem cmd;
}


// address: 0x8004A9B0
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE8
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x8004AA48
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFE0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x8004AAF0
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x8004ABA8
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFD0
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x8004AC70
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x8004AC9C
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x8004ACCC
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x8004AD04
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x8004AD78
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004AF1C
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004B00C
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004B0DC
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x8004B170
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFD8
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x8004B2DC
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x8004B380
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x8004B3B0
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x8004B4EC
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x8004B4F4
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x8004B560
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x8004B694
void delta_close_portal__Fi(int pnum) {
}


// address: 0x8004B6FC
void check_update_plr__Fi(int pnum) {
}


// address: 0x8004B730
unsigned long On_SYNCDATA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B758
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
unsigned long On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B860
unsigned long On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B890
unsigned long On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B8C0
unsigned long On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B8F0
unsigned long On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B9B0
unsigned long On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BA84
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
unsigned long On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BEF8
unsigned long On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004C0B4
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
unsigned long On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C324
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
unsigned long On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C80C
unsigned long On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C93C
unsigned long On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004CA5C
unsigned long On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004CB80
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
unsigned long On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004CED0
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
unsigned long On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D160
unsigned long On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D26C
unsigned long On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D37C
unsigned long On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D48C
unsigned long On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004D51C
unsigned long On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004D558
unsigned long On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D5C8
unsigned long On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D69C
unsigned long On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D6D4
unsigned long On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004D7C0
unsigned long On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D82C
unsigned long On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004D898
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
unsigned long On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004DB14
unsigned long On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004DB5C
unsigned long On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004DD58
unsigned long On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DDF4
unsigned long On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DE90
unsigned long On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DF2C
unsigned long On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004DFC4
unsigned long On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E05C
unsigned long On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E064
unsigned long On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E06C
unsigned long On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E074
unsigned long On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E0CC
unsigned long On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004E38C
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
unsigned long On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E574
unsigned long On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E5C0
unsigned long On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E600
unsigned long On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E640
unsigned long On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E680
unsigned long On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004E6C0
unsigned long On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8004E708
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
unsigned long On_CHEAT_EXPERIENCE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E834
unsigned long On_CHEAT_SPELL_LEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E83C
unsigned long On_DEBUG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004E844
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80121908
	static unsigned char sbLastCmd;
}


// address: 0x8004EDEC
void buffer_init__FP7TBuffer(struct TBuffer *pBuf) {
}


// address: 0x8004EDF8
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004EE1C
int InitLevelType__Fi(int l) {
}


// address: 0x8004EE68
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004EFF8
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004F06C
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
void FreeObjectGFX__Fv() {
}


// address: 0x8004F5D4
void DeleteObject__Fii(int oi, int i) {
	// register: 4
	register int ox;
	// register: 4
	register int oy;
}


// address: 0x8004F6CC
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004F974
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004FA40
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004FAAC
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004FBD4
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
void Obj_StopAnim__Fi(int i) {
}


// address: 0x800501E0
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
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x80050534
void Obj_Door__Fi(int i) {
	// register: 4
	register int dx;
	// register: 6
	register int dy;
	// register: 5
	register unsigned char dok;
}


// address: 0x80050700
void Obj_Sarc__Fi(int i) {
}


// address: 0x80050784
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x80050894
void Obj_FlameTrap__Fi(int i) {
	// register: 4
	register int xp;
	// register: 5
	register int yp;
	// register: 7
	register int j;
}


// address: 0x80050B84
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
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto int damage[4];
}


// address: 0x800511B0
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x80051470
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x800514A8
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
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x80051584
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8005158C
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8005182C
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x800518D0
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80051C94
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8005208C
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80052444
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x800527FC
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80052B24
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x80052E4C
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
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80053520
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80053690
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80053808
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
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x80054314
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x8005450C
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x800548FC
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80054AE4
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80054C7C
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80054EF0
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800550F0
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800552C8
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80055440
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800555B8
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
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80055BEC
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
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005838C
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005857C
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80058684
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80058814
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80058904
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x800589CC
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80058AA0
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
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x80059238
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80059350
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80059464
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 18
	register unsigned char senditemmsg;
}


// address: 0x800598CC
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059A0C
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059B4C
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 17
	register unsigned char opok;
}


// address: 0x80059C8C
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80059F0C
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
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x8005A690
void BreakObject__Fii(int pnum, int oi) {
	// register: 17
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x8005A814
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x8005A8AC
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x8005A9E0
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
void SyncLever__Fi(int i) {
}


// address: 0x8005AC00
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x8005AD18
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
void SyncL2Doors__Fi(int i) {
	// register: 4
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005B010
void SyncL3Doors__Fi(int i) {
	// register: 4
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005B150
void SyncObjectAnim__Fi(int o) {
	// register: 4
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x8005B2B8
void GetObjectStr__Fi(int i) {
}


// address: 0x8005B6F0
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
int GetNumOfFrames__7TextDatii_addr_8005B99C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8005B9D4
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8005B9D4(struct TextDat *this, int Creature) {
}


// address: 0x8005BA4C
int GetNumOfCreatures__7TextDat_addr_8005BA4C(struct TextDat *this) {
}


// address: 0x8005BA60
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x8005BA68
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x8005BA94
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x8005BB48
void SetupLocalPlayer__Fv() {
}


// address: 0x8005BB9C
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BBE0
bool plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC24
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC44
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC4C
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005BC68
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC8C
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005BEC8
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x8005C2E4
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x8005C34C
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8005C4BC
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
void InitMultiView__Fv() {
}


// address: 0x8005CB88
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x8005CBCC
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005CC60
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005CD54
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CD68
void FixPlayerLocation__FP12PlayerStructi(struct PlayerStruct *ptrplr, int bDir) {
}


// address: 0x8005CDCC
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005CE58
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CEBC
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
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CF24
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
}


// address: 0x8005CFC0
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005D070
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005D228
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
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
	// register: 16
	register int pd;
}


// address: 0x8005D478
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005D610
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
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005DFD0
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005E114
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005E134
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
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E4D8
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005E684
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E714
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005E7D0
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E7D8
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005E860
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005EBCC
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005ED6C
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
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005F7DC
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
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005FC68
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FD28
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FDC8
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
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800610A0
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
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x80061218
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006132C
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061334
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8006174C
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x800617B4
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
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061D2C
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
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062188
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
}


// address: 0x8006239C
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x800623AC
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
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x80062B54
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062B84
void CheckStats__Fi(int p) {
	// register: 7
	register int c;
	// register: 6
	register int i;
}


// address: 0x80062DBC
void ModifyPlrStr__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80062F3C
void ModifyPlrMag__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x8006309C
void ModifyPlrDex__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x800631CC
void ModifyPlrVit__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80063314
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x80063358
void SetPlrStr__Fii(int p, int v) {
}


// address: 0x80063474
void SetPlrMag__Fii(int p, int v) {
}


// address: 0x800634F8
void SetPlrDex__Fii(int p, int v) {
}


// address: 0x80063614
void SetPlrVit__Fii(int p, int v) {
}


// address: 0x80063694
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006369C
void PlayDungMsgs__Fv() {
}


// address: 0x80063C34
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063C5C
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80063CA0
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80063CD4
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80063D08
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80063D3C
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80063D70
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80063DA4
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80063DDC
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80063E10
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063E38
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063E60
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063E88
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80063ED0
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063EF8
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063F20
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80063F54
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063F7C
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063F9C
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80063FE0
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80064014
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80064048
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80064094
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x800640E0
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x8006412C
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80064180
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x800641CC
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80064218
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80064268
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x800642B4
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80064300
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x8006434C
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80064398
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x800643E4
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80064430
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80064480
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x800644CC
void FixPlayerLocation__Fii(int pnum, int bDir) {
}


// address: 0x80064518
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80064568
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x800645B4
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80064600
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x8006464C
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80064698
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x800646E4
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80064730
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x8006477C
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x800647C8
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80064814
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80064860
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x800648AC
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x800648E0
void PRIM_GetPrim__FPP8POLY_FT4_addr_800648E0(struct POLY_FT4 **Prim) {
}


// address: 0x8006495C
// size: 0x80
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x800649AC
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800649B8
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800649C4
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800649D0
void TSK_Lava2Water__FP4TASK(struct TASK *T) {
}


// address: 0x800649D8
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x80064E90
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
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x800650FC
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
void SetReturnLvlPos__Fv() {
}


// address: 0x80065838
void GetReturnLvlPos__Fv() {
}


// address: 0x8006588C
void ResyncMPQuests__Fv() {
}


// address: 0x800659C8
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80065F28
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
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x8006638C
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006640C
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006651C
void QuestlogUp__Fv() {
}


// address: 0x80066574
void QuestlogDown__Fv() {
}


// address: 0x800665DC
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80066698
void QuestlogESC__Fv() {
}


// address: 0x800666D8
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x800667DC
void _GLOBAL__D_questlog() {
}


// address: 0x80066804
void _GLOBAL__I_questlog() {
}


// address: 0x8006682C
void SetRGB__6DialogUcUcUc_addr_8006682C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006684C
void SetBack__6Dialogi_addr_8006684C(struct Dialog *this, int Type) {
}


// address: 0x80066854
void SetBorder__6Dialogi_addr_80066854(struct Dialog *this, int Type) {
}


// address: 0x8006685C
void ___6Dialog_addr_8006685C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80066884
// size: 0x10
struct Dialog *__6Dialog_addr_80066884(struct Dialog *this) {
}


// address: 0x800668E0
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
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x80066C44
void FreeStoreMem__Fv() {
}


// address: 0x80066C4C
void DrawSTextBack__Fv() {
}


// address: 0x80066CBC
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
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800670E0
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80067178
void AddSLine__Fi(int y) {
}


// address: 0x800671C8
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800671F0
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x800672A4
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x800676E8
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
void S_StartSmith__Fv() {
}


// address: 0x80067E8C
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80068038
void S_StartSBuy__Fv() {
}


// address: 0x80068168
void S_ScrollSPBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80068330
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80068480
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80068568
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
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80068B7C
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80068C24
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80068E00
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x800692CC
void S_StartWitch__Fv() {
}


// address: 0x8006940C
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800695B8
void S_StartWBuy__Fv() {
}


// address: 0x800696E0
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80069804
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80069E50
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x80069EDC
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006A058
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006A46C
void S_StartNoMoney__Fv() {
}


// address: 0x8006A4D4
void S_StartNoRoom__Fv() {
}


// address: 0x8006A534
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x8006A868
void S_StartBoy__Fv() {
}


// address: 0x8006A9F8
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x8006AB44
void S_StartHealer__Fv() {
}


// address: 0x8006AD18
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x8006AE78
void S_StartHBuy__Fv() {
}


// address: 0x8006AF98
void S_StartStory__Fv() {
}


// address: 0x8006B088
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x8006B0BC
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006B18C
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006BBC8
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x8006BD58
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
void S_StartTavern__Fv() {
}


// address: 0x8006C080
void S_StartBarMaid__Fv() {
}


// address: 0x8006C154
void S_StartDrunk__Fv() {
}


// address: 0x8006C228
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x8006C510
void DrawSText__Fv() {
}


// address: 0x8006C550
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006C618
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006C7C4
void STextESC__Fv() {
}


// address: 0x8006C974
void STextUp__Fv() {
}


// address: 0x8006CAFC
void STextDown__Fv() {
}


// address: 0x8006CC94
void S_SmithEnter__Fv() {
}


// address: 0x8006CD68
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006CDE8
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006CE68
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8006D2B4
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006D498
void S_SBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006D694
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006D814
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
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006E274
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006E368
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006E5D0
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006E71C
void S_WitchEnter__Fv() {
}


// address: 0x8006E7CC
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006E9C0
void S_WBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006EBBC
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006ECB0
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006EE20
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006EF6C
void S_BoyEnter__Fv() {
}


// address: 0x8006F0A4
void BoyBuyItem__Fv() {
}


// address: 0x8006F128
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006F3B4
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006F5B0
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006F8F8
void S_ConfirmEnter__Fv() {
}


// address: 0x8006FA14
void S_HealerEnter__Fv() {
}


// address: 0x8006FAAC
void S_HBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006FCC8
void S_StoryEnter__Fv() {
}


// address: 0x8006FD60
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006FECC
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
void S_TavernEnter__Fv() {
}


// address: 0x80070134
void S_BarmaidEnter__Fv() {
}


// address: 0x800701A4
void S_DrunkEnter__Fv() {
}


// address: 0x80070214
void STextEnter__Fv() {
}


// address: 0x80070424
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8007053C
void ReleaseStoreBtn__Fv() {
}


// address: 0x80070550
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x80070578
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x800705A0
unsigned short GetDown__C4CPad_addr_800705A0(struct CPad *this) {
}


// address: 0x800705C8
void SetRGB__6DialogUcUcUc_addr_800705C8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800705E8
void SetBorder__6Dialogi_addr_800705E8(struct Dialog *this, int Type) {
}


// address: 0x800705F0
void ___6Dialog_addr_800705F0(struct Dialog *this, int __in_chrg) {
}


// address: 0x80070618
// size: 0x10
struct Dialog *__6Dialog_addr_80070618(struct Dialog *this) {
}


// address: 0x80070674
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
unsigned long sync_update__FiPCUc(int pnum, unsigned char *pbBuf) {
	// register: 19
	// size: 0x30
	register struct TSyncHeader *pHdr;
	// register: 16
	register unsigned short wLen;
}


// address: 0x80070B88
void sync_init__Fv() {
}


// address: 0x80070BC4
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x80070D38
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
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x80071A18
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x80071CC8
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x80072128
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x800725A4
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80072AB0
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
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x80072C64
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x80072D58
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x80072E4C
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
void FadeGameOut__Fv() {
}


// address: 0x80073204
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
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80073B60
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80073C00
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80073E64
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x80074118
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8007437C
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80074384
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x800743EC
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x8007440C
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x8007447C
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80074518
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80074580
void music_stop__Fv() {
}


// address: 0x800745CC
void music_fade__Fv() {
}


// address: 0x8007460C
void music_start__Fi(int nTrack) {
}


// address: 0x800746AC
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
void CloseInvChr__Fv() {
}


// address: 0x80074BD0
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
}


// address: 0x80074CA4
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80074D14
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80074D84
// size: 0x90
struct GamePad *__7GamePadic(struct GamePad *this, int player_num, char move_style) {
	// register: 4
	register int i;
}


// address: 0x80074EF0
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80074F10
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80074F54
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80074F98
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 17
	register int i;
}


// address: 0x800750E4
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
	// register: 20
	register int oc;
}


// address: 0x800751AC
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80075208
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80075244
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x800752C8
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80075694
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80075740
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80075858
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x8007589C
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
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80075E74
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80076064
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
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80076A54
void Init_GamePad__Fv() {
}


// address: 0x80076A84
void InitGamePadVars__Fv() {
}


// address: 0x80076AFC
void MoveToScrollTarget__7CBlocks_addr_80076AFC(struct CBlocks *this) {
}


// address: 0x80076B10
unsigned short GetDown__C4CPad_addr_80076B10(struct CPad *this) {
}


// address: 0x80076B38
unsigned short GetUp__C4CPad_addr_80076B38(struct CPad *this) {
}


// address: 0x80076B60
unsigned short GetCur__C4CPad_addr_80076B60(struct CPad *this) {
}


// address: 0x80076B88
void DoGameTestStuff__Fv() {
}


// address: 0x80076BB4
void DoInitGameStuff__Fv() {
}


// address: 0x80076BE8
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80076C08
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80076C28
void GRL_InitGwin__Fv() {
}


// address: 0x80076C34
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x80076C44
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80076C6C
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80076D10
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x80076D58
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80076D64
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
char *GetStr__Fi(int StrId) {
}


// address: 0x80076ED0
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
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x8007702C
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80077038
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80077140
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x800771C0
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
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80077A70
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80077B20
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077B84
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077C9C
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80077D34
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80077DCC
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80077E34
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 3
	register int frame;
}


// address: 0x80077EC8
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
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80078110
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
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x800782C8
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078330
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078398
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x800784CC
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80078610
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078678
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800786D0
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
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078800
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078808
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
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078DD8
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078DE0
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80078E14
void PRIM_GetPrim__FPP8POLY_FT4_addr_80078E14(struct POLY_FT4 **Prim) {
}


// address: 0x80078E90
// size: 0x80
struct CPlayer *GetPlayer__7CPlayeri_addr_80078E90(int PNum) {
}


// address: 0x80078EE0
int GetLastOtPos__C7CPlayer_addr_80078EE0(struct CPlayer *this) {
}


// address: 0x80078EEC
int GetLastScrY__C7CPlayer_addr_80078EEC(struct CPlayer *this) {
}


// address: 0x80078EF8
int GetLastScrX__C7CPlayer_addr_80078EF8(struct CPlayer *this) {
}


// address: 0x80078F04
int GetNumOfFrames__7TextDat_addr_80078F04(struct TextDat *this) {
}


// address: 0x80078F18
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80078F18(struct TextDat *this, int FrNum) {
}


// address: 0x80078F34
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80078F6C
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80078FEC
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80079084
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80079134
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
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x8007983C
// size: 0x28
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800798C4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800798F0
// size: 0x28
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007991C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079948
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079974
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800799A0
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800799C4
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800799E8
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079A14
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079A40
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079A6C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079A98
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079AC4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079AF0
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079B1C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079B48
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079B74
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079BA0
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079BCC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079BF8
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079C24
// size: 0x28
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079C50
// size: 0x28
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079C7C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079CA8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079CD4
// size: 0x28
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079D00
// size: 0x28
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079D2C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079D58
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079D84
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079DB0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079DDC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079E08
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079E34
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079E60
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079E8C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079EB8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079EE4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079F10
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079F3C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079F68
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x68
	register struct TextDat *ThisDat;
}


// address: 0x80079FFC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8007A08C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8007A11C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8007A1AC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8007A23C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A268
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A294
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A2C0
// size: 0x28
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A2EC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A318
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A344
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A370
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A39C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A3C8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A3F4
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


// address: 0x8007A54C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007A618
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007A6E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A710
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A73C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A768
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A794
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A7B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A7E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A810
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A83C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A868
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A894
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A8C0
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A8EC
// size: 0x28
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A918
// size: 0x28
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A944
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A970
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A99C
// size: 0x28
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A9C8
// size: 0x28
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A9F4
// size: 0x28
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AA20
// size: 0x28
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AA4C
// size: 0x28
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AA78
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


// address: 0x8007AC0C
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AC38
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AC5C
// size: 0x28
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AC88
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007ACB4
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007ACE0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AD0C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AD38
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AD64
// size: 0x28
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AD90
// size: 0x28
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007ADBC
// size: 0x28
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007ADE8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AE14
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8007AE14(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8007AE50
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
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007AE78(struct POLY_FT4 **Prim) {
}


// address: 0x8007AEF4
int GetNumOfFrames__7TextDatii_addr_8007AEF4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8007AF2C
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8007AF2C(struct TextDat *this, int Creature) {
}


// address: 0x8007AFA4
int GetNumOfCreatures__7TextDat_addr_8007AFA4(struct TextDat *this) {
}


// address: 0x8007AFB8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8007AFB8(struct TextDat *this, int FrNum) {
}


// address: 0x8007AFD4
void gamemenu_on__Fv() {
}


// address: 0x8007AFDC
void gamemenu_off__Fv() {
}


// address: 0x8007AFE4
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x8007AFEC
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x8007AFF4
void ResetPal__Fv() {
}


// address: 0x8007AFFC
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007B02C
bool GetFadeState__Fv() {
}


// address: 0x8007B038
void DrawFadedScreen__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007B104
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007B1C0
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x8007B244
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x8007B29C
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x8007B334
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x8007B388
void M_CheckEFlag__Fi(int i) {
}


// address: 0x8007B3A8
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
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x8007B588
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8007B654
unsigned char M_Ranged__Fi(int i) {
	// register: 16
	register unsigned char _mAi;
}


// address: 0x8007B6D8
unsigned char M_Talker__Fi(int i) {
	// register: 16
	register unsigned char _mAi;
}


// address: 0x8007B770
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
void ClearMVars__Fi(int i) {
}


// address: 0x8007BE20
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x8007C2F4
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x8007C3A4
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
void M_UpdateLeader__Fi(int i) {
	// register: 4
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x8007C6D8
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x8007C780
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
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x8007D020
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x8007D32C
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


