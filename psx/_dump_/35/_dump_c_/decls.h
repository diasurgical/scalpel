#include "types.h"

// address: 0x8012CDC8
extern int NumOfMonsterListLevels;

// address: 0x800A9BE0
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x8012CAAC
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x8012CAB0
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x8012CAB4
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x8012CABC
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x8012CAC0
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x8012CAC4
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x8012CAC8
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x8012CACC
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x8012CAD0
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x8012CAD4
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x8012CAD8
// size: 0x4
static unsigned char NumsLEV3M3QA[4];

// address: 0x8012CADC
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x8012CAE0
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x8012CAE4
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x8012CAE8
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x8012CAEC
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x8012CAF0
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x8012CAF8
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x8012CAFC
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x8012CB04
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x8012CB08
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x8012CB0C
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x8012CB10
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x8012CB14
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x8012CB18
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x8012CB1C
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x8012CB20
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x8012CB24
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x8012CB2C
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x8012CB30
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x8012CB34
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x8012CB38
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x8012CB3C
// size: 0x3
static unsigned char NumsLEV6M6QA[3];

// address: 0x8012CB40
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x8012CB44
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x8012CB48
// size: 0x4
static unsigned char NumsLEV7M7C[4];

// address: 0x8012CB4C
// size: 0x3
static unsigned char NumsLEV7M7D[3];

// address: 0x8012CB50
// size: 0x3
static unsigned char NumsLEV7M7E[3];

// address: 0x8012CB54
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x8012CB58
// size: 0x2
static unsigned char NumsLEV8M8A[2];

// address: 0x8012CB5C
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x8012CB60
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8012CB64
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x8012CB68
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x8012CB6C
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x8012CB70
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x8012CB74
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x8012CB78
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x8012CB7C
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x8012CB80
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x8012CB84
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x8012CB88
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x8012CB8C
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x8012CB90
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x8012CB94
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x8012CB98
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x8012CB9C
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x8012CBA0
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x8012CBA4
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x8012CBA8
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x8012CBAC
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x8012CBB0
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x8012CBB4
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x8012CBB8
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x8012CBBC
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x8012CBC0
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x8012CBC4
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x8012CBC8
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x8012CBCC
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x8012CBD0
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x8012CBD4
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x8012CBD8
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x8012CBDC
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x8012CBE0
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x8012CBE4
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8012CBE8
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8012CBEC
// size: 0x2
static unsigned char NumsLEV15M15QA[2];

// address: 0x8012CBF0
// size: 0x3
static unsigned char NumsLEV16M16D[3];

// address: 0x800A9700
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A9730
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A9790
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A97D0
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A9840
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A98B0
// size: 0x60
static struct MonstList ChoiceListLEV6[6];

// address: 0x800A9910
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A9960
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A99C0
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A9A00
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800A9A50
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A9AA0
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A9AE0
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A9B30
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A9B90
// size: 0x40
static struct MonstList ChoiceListLEV15[4];

// address: 0x800A9BD0
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x8012E688
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800A9C60
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x8012CDD8
extern int ArgsSoFar;

// address: 0x8012CDE8
extern unsigned long *ThisOt;

// address: 0x8012CDEC
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x8012E68C
static long hndPrimBuffers;

// address: 0x8012E690
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x8012E694
static unsigned char BufferDepth;

// address: 0x8012E695
static unsigned char WorkRamId;

// address: 0x8012E696
static unsigned char ScrNum;

// address: 0x8012E698
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x8012E69C
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x8012E6A0
static unsigned char BufferNum;

// address: 0x8012CDF0
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x8012E6A1
static unsigned char LastBuffer;

// address: 0x8012E6A4
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x8012E6A8
static int ThisOtSize;

// address: 0x8012CDF4
// size: 0x8
static struct RECT ScrRect;

// address: 0x8012E6AC
static int VidWait;

// address: 0x8012EB28
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8012E6B0
static void (*VbFunc)();

// address: 0x8012E6B4
static unsigned long VidTick;

// address: 0x8012E6B8
static int VXOff;

// address: 0x8012E6BC
static int VYOff;

// address: 0x8012CE08
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x8012CE0C
extern int LastFmem;

// address: 0x8012CDFC
extern unsigned int GSYS_MemStart;

// address: 0x8012CE00
extern unsigned int GSYS_MemEnd;

// address: 0x800A9FA8
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A9FD0
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x8012CE04
extern int LowestFmem;

// address: 0x8012CE1C
extern int FileSYS;

// address: 0x8012E6C0
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x8012E6C4
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x8012CE36
extern short DavesPad;

// address: 0x8012CE38
extern short DavesPadDeb;

// address: 0x800A9FF8
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x8012EC08
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800AA89C
// size: 0x5C0
extern struct TextDat *AllDats[368];

// address: 0x8012CE88
extern int TpW;

// address: 0x8012CE8C
extern int TpH;

// address: 0x8012CE90
extern int TpXDest;

// address: 0x8012CE94
extern int TpYDest;

// address: 0x8012CE98
// size: 0x8
extern struct RECT R;

// address: 0x800AAE5C
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800AAE90
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800AA02C
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x8012CEAC
static bool ChunkGot;

// address: 0x800AAEB8
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800AAEC8
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800AAED8
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x8012CEC0
extern unsigned long BL_NoLumpFiles;

// address: 0x8012CEC4
extern unsigned long BL_NoStreamFiles;

// address: 0x8012CEC8
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x8012CECC
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x8012CED0
extern unsigned char FileLoaded;

// address: 0x8012CEF4
extern int NoTAllocs;

// address: 0x800AB004
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x8012E6D0
static bool CanPause;

// address: 0x8012E6D4
static bool Paused;

// address: 0x8012E6D8
static char InActivePad;

// address: 0x8012EC30
// size: 0x10
static struct Dialog PBack;

// address: 0x800AB26C
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800AB290
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800AB2B4
// size: 0x384
extern unsigned char demo_buffer[900];

// address: 0x8012CF10
extern int demo_pad_time;

// address: 0x8012CF14
extern int demo_pad_count;

// address: 0x800AB194
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800AB200
// size: 0x6C
extern struct CPad Pad1;

// address: 0x8012CF18
extern unsigned long demo_finish;

// address: 0x8012CF1C
extern int cac_pad;

// address: 0x8012CF3C
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x8012CF40
extern int CharFrm;

// address: 0x8012CF29
extern unsigned char WHITER;

// address: 0x8012CF2A
extern unsigned char WHITEG;

// address: 0x8012CF2B
extern unsigned char WHITEB;

// address: 0x8012CF2C
extern unsigned char BLUER;

// address: 0x8012CF2D
extern unsigned char BLUEG;

// address: 0x8012CF2E
extern unsigned char BLUEB;

// address: 0x8012CF2F
extern unsigned char REDR;

// address: 0x8012CF30
extern unsigned char REDG;

// address: 0x8012CF31
extern unsigned char REDB;

// address: 0x8012CF32
extern unsigned char GOLDR;

// address: 0x8012CF33
extern unsigned char GOLDG;

// address: 0x8012CF34
extern unsigned char GOLDB;

// address: 0x800AB638
// size: 0x21C
extern struct CFont MediumFont;

// address: 0x800AB854
// size: 0x21C
extern struct CFont LargeFont;

// address: 0x8012CF38
extern bool buttoncol;

// address: 0x800ABA70
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800ABB24
// size: 0x10
extern struct FontTab LFont;

// address: 0x800ABB34
// size: 0x136
extern struct FontItem MFontTab[155];

// address: 0x800ABC6C
// size: 0x10
extern struct FontTab MFont;

// address: 0x8012CF55
extern unsigned char DialogRed;

// address: 0x8012CF56
extern unsigned char DialogGreen;

// address: 0x8012CF57
extern unsigned char DialogBlue;

// address: 0x8012CF58
extern unsigned char DialogTRed;

// address: 0x8012CF59
extern unsigned char DialogTGreen;

// address: 0x8012CF5A
extern unsigned char DialogTBlue;

// address: 0x8012CF5C
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x8012CF60
extern int DialogBackGfx;

// address: 0x8012CF64
extern int DialogBackW;

// address: 0x8012CF68
extern int DialogBackH;

// address: 0x8012CF6C
extern int DialogBorderGfx;

// address: 0x8012CF70
extern int DialogBorderTLW;

// address: 0x8012CF74
extern int DialogBorderTLH;

// address: 0x8012CF78
extern int DialogBorderTRW;

// address: 0x8012CF7C
extern int DialogBorderTRH;

// address: 0x8012CF80
extern int DialogBorderBLW;

// address: 0x8012CF84
extern int DialogBorderBLH;

// address: 0x8012CF88
extern int DialogBorderBRW;

// address: 0x8012CF8C
extern int DialogBorderBRH;

// address: 0x8012CF90
extern int DialogBorderTW;

// address: 0x8012CF94
extern int DialogBorderTH;

// address: 0x8012CF98
extern int DialogBorderBW;

// address: 0x8012CF9C
extern int DialogBorderBH;

// address: 0x8012CFA0
extern int DialogBorderLW;

// address: 0x8012CFA4
extern int DialogBorderLH;

// address: 0x8012CFA8
extern int DialogBorderRW;

// address: 0x8012CFAC
extern int DialogBorderRH;

// address: 0x8012CFB0
extern int DialogBevelGfx;

// address: 0x8012CFB4
extern int DialogBevelCW;

// address: 0x8012CFB8
extern int DialogBevelCH;

// address: 0x8012CFBC
extern int DialogBevelLRW;

// address: 0x8012CFC0
extern int DialogBevelLRH;

// address: 0x8012CFC4
extern int DialogBevelUDW;

// address: 0x8012CFC8
extern int DialogBevelUDH;

// address: 0x8012CFCC
extern int MY_DialogOTpos;

// address: 0x8012E6DC
static unsigned char DialogGBack;

// address: 0x8012E6DD
static char GShadeX;

// address: 0x8012E6DE
static char GShadeY;

// address: 0x8012E6E4
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800ABCBC
// size: 0x70
extern int Cxy[28];

// address: 0x8012CF4F
extern unsigned char BORDERR;

// address: 0x8012CF50
extern unsigned char BORDERG;

// address: 0x8012CF51
extern unsigned char BORDERB;

// address: 0x8012CF52
extern unsigned char BACKR;

// address: 0x8012CF53
extern unsigned char BACKG;

// address: 0x8012CF54
extern unsigned char BACKB;

// address: 0x800ABC7C
// size: 0x40
static char GShadeTab[64];

// address: 0x8012CF4D
static char GShadePX;

// address: 0x8012CF4E
static char GShadePY;

// address: 0x8012CFD9
extern unsigned char PlayDemoFlag;

// address: 0x8012EC40
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x8012EC70
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x8012E6EC
static int blockr;

// address: 0x8012E6F0
static int blockg;

// address: 0x8012E6F4
static int blockb;

// address: 0x8012E6F8
static int InfraFlag;

// address: 0x8012E6FC
static unsigned char blank_bit;

// address: 0x8012CFED
extern unsigned char P1ObjSelCount;

// address: 0x8012CFEE
extern unsigned char P2ObjSelCount;

// address: 0x8012CFEF
extern unsigned char P12ObjSelCount;

// address: 0x8012CFF0
extern unsigned char P1ItemSelCount;

// address: 0x8012CFF1
extern unsigned char P2ItemSelCount;

// address: 0x8012CFF2
extern unsigned char P12ItemSelCount;

// address: 0x8012CFF3
extern unsigned char P1MonstSelCount;

// address: 0x8012CFF4
extern unsigned char P2MonstSelCount;

// address: 0x8012CFF5
extern unsigned char P12MonstSelCount;

// address: 0x8012CFF6
static unsigned short P1ObjSelCol;

// address: 0x8012CFF8
static unsigned short P2ObjSelCol;

// address: 0x8012CFFA
static unsigned short P12ObjSelCol;

// address: 0x8012CFFC
static unsigned short P1ItemSelCol;

// address: 0x8012CFFE
static unsigned short P2ItemSelCol;

// address: 0x8012D000
static unsigned short P12ItemSelCol;

// address: 0x8012D002
static unsigned short P1MonstSelCol;

// address: 0x8012D004
static unsigned short P2MonstSelCol;

// address: 0x8012D006
static unsigned short P12MonstSelCol;

// address: 0x8012D008
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x800ABD2C
// size: 0x16
extern struct TownToCreature TownConv[11];

// address: 0x8012D024
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x80122750
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x8012ECA0
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x8012ECB0
// size: 0x10
static struct Overlay PregameOver;

// address: 0x8012ECC0
// size: 0x10
static struct Overlay GameOver;

// address: 0x8012ECD0
// size: 0x10
static struct Overlay FmvOver;

// address: 0x8012E700
static int OWorldX;

// address: 0x8012E704
static int OWorldY;

// address: 0x8012E708
static int WWorldX;

// address: 0x8012E70C
static int WWorldY;

// address: 0x801227CC
// size: 0x20
static short TxyAdd[16];

// address: 0x8012D048
extern int GXAdj2;

// address: 0x8012E710
static int TimePerFrame;

// address: 0x8012E714
static int CpuStart;

// address: 0x8012E718
static int CpuTime;

// address: 0x8012E71C
static int DrawTime;

// address: 0x8012E720
static int DrawStart;

// address: 0x8012E724
static int LastCpuTime;

// address: 0x8012E728
static int LastDrawTime;

// address: 0x8012E72C
static int DrawArea;

// address: 0x8012D050
extern bool ProfOn;

// address: 0x800ABD44
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x80122928
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800ABD58
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800ABDAC
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800ABE00
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800ABE54
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800ABEA8
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x8012D078
extern int hof;

// address: 0x8012D07C
extern int mof;

// address: 0x800ABF70
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x800AC070
// size: 0x12000
extern unsigned long STR_Buffer[18432];

// address: 0x8012D0B0
extern unsigned long Time;

// address: 0x8012D0B4
extern bool CDWAIT;

// address: 0x800BE070
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x800BE0B0
// size: 0x80
extern struct SFXHDR STRSave;

// address: 0x8012E730
static bool SavePause;

// address: 0x8012D089
extern char NoActiveStreams;

// address: 0x8012D08C
static bool STRInit;

// address: 0x8012D090
static int frame_rate;

// address: 0x8012D094
static unsigned char CDAngle;

// address: 0x8012D0D8
extern char SFXNotPlayed;

// address: 0x8012D0D9
extern char SFXNotInBank;

// address: 0x8012ECE0
// size: 0x108
static char spu_management[264];

// address: 0x8012EDF0
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x8012E738
static unsigned short NoSfx;

// address: 0x8012EE10
// size: 0x30
static unsigned short CHStatus[24];

// address: 0x8012D0C4
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x8012D0C8
static long OffsetHandle;

// address: 0x8012D0CC
static int BankBase;

// address: 0x8012D0D0
static unsigned char SPU_Done;

// address: 0x80122CD0
// size: 0x78
static unsigned short SFXRemapTab[60];

// address: 0x8012D0D4
static int NoSNDRemaps;

// address: 0x800BE130
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x80122D7C
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x8012D11C
extern int demo_level;

// address: 0x8012EE40
// size: 0x20
static int buff[8];

// address: 0x8012D120
extern int old_val;

// address: 0x8012D124
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x8012D128
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x8012D12C
// size: 0x5C
extern struct TASK *tonys;

// address: 0x8012D104
extern int demo_load;

// address: 0x8012D108
extern int demo_record_load;

// address: 0x8012D10C
extern int level_record;

// address: 0x8012D110
extern char demo_fade_finished;

// address: 0x8012D113
extern unsigned char demo_which;

// address: 0x800BE35C
// size: 0x14
extern unsigned long demolevel[5];

// address: 0x8012D111
extern unsigned char quest_cheat_num;

// address: 0x8012D112
extern unsigned char cheat_quest_flag;

// address: 0x8012D100
extern int moo_moo;

// address: 0x800BE31C
// size: 0x40
extern unsigned long quest_seed[16];

// address: 0x8012D114
extern unsigned char demo_flash;

// address: 0x8012D118
extern int tonys_Task;

// address: 0x8012D288
extern bool DoShowPanel;

// address: 0x8012D28C
extern bool DoDrawBg;

// address: 0x8012E73C
static bool GlueFinished;

// address: 0x8012E740
static bool DoHomingScroll;

// address: 0x8012E744
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x8012E748
static int CurrentMonsterList;

// address: 0x8012D139
extern char started_grtask;

// address: 0x800BE370
// size: 0x3CC
extern struct PInf PlayerInfo[81];

// address: 0x8012D290
// size: 0x4
static char ArmourChar[4];

// address: 0x80122E70
// size: 0xA
static char WepChar[10];

// address: 0x8012D294
// size: 0x4
static char CharChar[4];

// address: 0x8012E74C
static char ctrl_select_line;

// address: 0x8012E74D
static char ctrl_select_side;

// address: 0x8012E74E
static char ckeyheld;

// address: 0x8012E754
// size: 0x8
static struct RECT CtrlRect;

// address: 0x8012D2A8
extern unsigned char ctrlflag;

// address: 0x800BE7E4
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800BE73C
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x8012D2A4
static int toppos;

// address: 0x8012EE60
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800BE914
// size: 0x98
static int controller_defaults[2][19];

// address: 0x8012D314
extern int gr_scrxoff;

// address: 0x8012D318
extern int gr_scryoff;

// address: 0x8012D320
extern unsigned short water_clut;

// address: 0x8012D323
extern char visible_level;

// address: 0x8012D311
extern char last_type;

// address: 0x8012D325
extern char daylight;

// address: 0x8012D322
extern char cow_in_sight;

// address: 0x8012D31C
extern unsigned int water_count;

// address: 0x8012D324
extern unsigned char lastrnd;

// address: 0x8012D328
static int call_clock;

// address: 0x8012D338
extern int TitleAnimCount;

// address: 0x8012D33C
static int flametick;

// address: 0x800BE9AC
// size: 0x18
static int ypos[6];

// address: 0x800BE9C4
// size: 0x18
static int frmlist[6];

// address: 0x800BE9DC
// size: 0x18
static int xoff[6];

// address: 0x8012D340
static int startx;

// address: 0x8012D344
extern bool hellomumflag;

// address: 0x800BEA14
// size: 0x90
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x8012EE70
// size: 0x240
static struct Particle PartArray[16];

// address: 0x8012E75C
static int partOtPos;

// address: 0x8012D364
extern int SetParticle;

// address: 0x8012D368
static int p1partexecnum;

// address: 0x8012D36C
static int p2partexecnum;

// address: 0x800BE9F4
// size: 0x20
static int JumpArray[8];

// address: 0x8012D370
static int partjumpflag;

// address: 0x8012D374
static int partglowflag;

// address: 0x8012D378
static int partcolour;

// address: 0x8012D37C
static bool anyfuckingmenus;

// address: 0x800BEAA4
// size: 0x30
extern struct Spell_Target SplTarget[2];

// address: 0x8012D39D
extern unsigned char select_flag;

// address: 0x8012E760
// size: 0x8
static struct RECT SelectRect;

// address: 0x8012E768
static char item_select;

// address: 0x8012D3A0
// size: 0x2
extern char QSpell[2];

// address: 0x8012D3A4
// size: 0x2
extern char _spltotype[2];

// address: 0x8012D3A8
// size: 0x8
extern bool force_attack[2];

// address: 0x8012D390
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x8012F0B0
// size: 0x10
static struct Dialog SelectBack;

// address: 0x8012D394
// size: 0x4
extern char mana_order[4];

// address: 0x8012D398
// size: 0x4
extern char health_order[4];

// address: 0x8012D39C
extern unsigned char birdcheck;

// address: 0x8012F0C0
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x8012E76C
static unsigned short progress;

// address: 0x80122FFC
// size: 0x2A
static unsigned short Level2CutScreen[21];

// address: 0x8012F0E8
// size: 0x78
static struct CScreen Scr;

// address: 0x8012D3C8
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x8012D3CC
static bool GameLoading;

// address: 0x8012F168
// size: 0x10
static struct Dialog LBack;

// address: 0x800BEAD4
// size: 0x80
extern unsigned char block_buf[128];

// address: 0x8012D3E8
extern unsigned int card_ev0;

// address: 0x8012D3EC
extern unsigned int card_ev1;

// address: 0x8012D3F0
extern unsigned int card_ev2;

// address: 0x8012D3F4
extern unsigned int card_ev3;

// address: 0x8012D3F8
extern unsigned int card_ev10;

// address: 0x8012D3FC
extern unsigned int card_ev11;

// address: 0x8012D400
extern unsigned int card_ev12;

// address: 0x8012D404
extern unsigned int card_ev13;

// address: 0x8012D408
// size: 0x8
extern int card_dirty[2];

// address: 0x8012D410
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8012E770
static int card_event;

// address: 0x8012D3E4
extern void (*mem_card_event_handler)();

// address: 0x8012D3DC
extern bool MemCardActive;

// address: 0x8012D3E0
static int never_hooked_events;

// address: 0x8012D46C
extern unsigned long MasterVol;

// address: 0x8012D470
extern unsigned long MusicVol;

// address: 0x8012D474
extern unsigned long SoundVol;

// address: 0x8012D478
extern unsigned long VideoVol;

// address: 0x8012D47C
extern unsigned long SpeechVol;

// address: 0x8012E774
// size: 0x6C
static struct TextDat *Slider;

// address: 0x8012E778
static int sw;

// address: 0x8012E77C
static int sx;

// address: 0x8012E780
static int sy;

// address: 0x8012E784
static unsigned char Adjust;

// address: 0x8012E785
static unsigned char qspin;

// address: 0x8012E786
static unsigned char lqspin;

// address: 0x8012E788
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x8012E78C
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8012E790
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x8012D480
extern int save_blocks;

// address: 0x8012D484
extern char *Savefilename;

// address: 0x8012D488
extern int ReturnMenu;

// address: 0x8012E794
// size: 0x8
static struct RECT ORect;

// address: 0x8012E79C
// size: 0x8
static char *McState[2];

// address: 0x8012D48C
extern int they_pressed;

// address: 0x8012E7A4
// size: 0x8
static unsigned char Seed[8];

// address: 0x8012D440
extern bool optionsflag;

// address: 0x8012D434
extern int cmenu;

// address: 0x8012D44C
extern int options_pad;

// address: 0x8012D43C
extern bool allspellsflag;

// address: 0x800BF5F4
// size: 0x80
extern short Circle[64];

// address: 0x8012D420
extern bool goldcheat;

// address: 0x8012D450
extern int OptionsSeed;

// address: 0x8012D454
extern bool OptionsSetSeed;

// address: 0x8012D424
extern unsigned char Qfromoptions;

// address: 0x8012D428
static int Spacing;

// address: 0x8012D42C
static int cs;

// address: 0x8012D430
static int lastcs;

// address: 0x8012D438
static bool MemcardOverlay;

// address: 0x8012D444
extern int saveflag;

// address: 0x8012D448
extern int loadflag;

// address: 0x8012D458
extern bool PadFrig;

// address: 0x800BEB54
// size: 0xD8
extern struct OMENUITEM MainMenu[9];

// address: 0x800BEC2C
// size: 0x108
extern struct OMENUITEM GameMenu[11];

// address: 0x800BED34
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800BEDC4
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800BEE6C
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800BEF14
// size: 0x60
extern struct OMENUITEM QuitMenu[4];

// address: 0x800BEF74
// size: 0xA8
extern struct OMENUITEM MemcardMenu[7];

// address: 0x800BF01C
// size: 0x60
extern struct OMENUITEM MemcardLoadGameMenu[4];

// address: 0x800BF07C
// size: 0x60
extern struct OMENUITEM MemcardSaveGameMenu[4];

// address: 0x800BF0DC
// size: 0x60
extern struct OMENUITEM MemcardSaveOptionsMenu[4];

// address: 0x800BF13C
// size: 0x60
extern struct OMENUITEM MemcardLoadOptionsMenu[4];

// address: 0x800BF19C
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800BF1FC
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800BF2A4
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800BF34C
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800BF3AC
// size: 0xF0
extern struct OMENUITEM CheatMenu[10];

// address: 0x800BF49C
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800BF4CC
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x800BF514
// size: 0x48
extern struct OMENUITEM SeedMenu[3];

// address: 0x800BF55C
// size: 0x98
extern struct OMENULIST MenuList[19];

// address: 0x8012D45C
static bool debounce;

// address: 0x8012D460
static unsigned char KeyPos;

// address: 0x800BF674
// size: 0x14
static unsigned short KeyTab[10];

// address: 0x8012D464
static int SeedPos;

// address: 0x800BF688
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x8012E7AC
// size: 0x8
static int last_seenx[2];

// address: 0x8012E7B4
// size: 0x8
static int last_seeny[2];

// address: 0x8012D499
extern char hop_height;

// address: 0x8012D49C
// size: 0x8
static struct Perch perches[4];

// address: 0x800BF808
// size: 0x40
extern struct FMVDAT FmvTab[8];

// address: 0x8012D4B0
static int CurMons;

// address: 0x8012D4B4
static int Frame;

// address: 0x8012D4B8
static int Action;

// address: 0x8012D4BC
static int Dir;

// address: 0x8012D520
extern int indsize;

// address: 0x8012D500
static unsigned char *kanjbuff;

// address: 0x8012D504
// size: 0x4
static struct kindexS *kindex;

// address: 0x8012D508
static long hndKanjBuff;

// address: 0x8012D50C
static long hndKanjIndex;

// address: 0x8012E7BC
// size: 0x8
static struct RECT HelpRect;

// address: 0x8012E7C4
static unsigned char HelpTop;

// address: 0x8012F178
// size: 0x10
static struct Dialog HelpBack;

// address: 0x8012D530
static bool helpflag;

// address: 0x800BF848
// size: 0x108
static struct HelpStruct HelpList[33];

// address: 0x8012D580
extern int FeBackX;

// address: 0x8012D584
extern int FeBackY;

// address: 0x8012D588
extern int FeBackW;

// address: 0x8012D58C
extern int FeBackH;

// address: 0x8012D590
extern unsigned char FeFlag;

// address: 0x800BFE50
// size: 0x780
extern struct FeStruct FeBuffer[80];

// address: 0x8012D594
extern int FePlayerNo;

// address: 0x8012E7C8
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x8012D598
extern int FeBufferCount;

// address: 0x8012D59C
extern int FeNoOfPlayers;

// address: 0x8012D5A0
// size: 0x8
extern int FeChrClass[2];

// address: 0x800C05D0
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x8012D5A8
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x8012D5AC
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x8012D5B0
extern unsigned long FeCount;

// address: 0x8012D5B4
extern int fileselect;

// address: 0x8012D5B8
extern int BookMenu;

// address: 0x8012D5BC
extern int FeAttractMode;

// address: 0x8012D5C0
extern int FMVPress;

// address: 0x8012D54C
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x8012D554
// size: 0x8
extern bool LoadedChar[2];

// address: 0x8012D550
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x8012D55C
extern unsigned char FeIsAVirgin;

// address: 0x8012D560
extern int FeMenuDelay;

// address: 0x800BF950
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800BF96C
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800BF988
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800BF9A4
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800BF9C0
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800BF9DC
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800BF9F8
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800BFA14
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800BFA30
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800BFA4C
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800BFA68
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800BFA84
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800BFAA0
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800BFABC
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x8012D564
static int fadeval;

// address: 0x800BFAD8
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800BFB50
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800BFB98
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800BFC10
// size: 0x46
extern unsigned char FeNameEngMenuTable[70];

// address: 0x800BFC58
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800BFCA0
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800BFD00
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800BFD60
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800BFDD8
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x8012D570
static bool DrawBackOn;

// address: 0x8012D574
extern unsigned long AttractTitleDelay;

// address: 0x8012D578
extern unsigned long AttractMainDelay;

// address: 0x8012D57C
extern int FMVEndPad;

// address: 0x8012D5F4
extern int InCredits;

// address: 0x8012D5F8
extern int CreditTitleNo;

// address: 0x8012D5FC
extern int CreditSubTitleNo;

// address: 0x8012D610
// size: 0x8
extern int card_status[2];

// address: 0x8012D618
// size: 0x8
extern int card_usable[2];

// address: 0x8012D620
// size: 0x8
extern int card_files[2];

// address: 0x8012D628
// size: 0x8
extern int card_changed[2];

// address: 0x8012D66C
extern int AlertTxt;

// address: 0x8012D670
extern int current_card;

// address: 0x8012D674
extern int LoadType;

// address: 0x8012D678
extern int McMenuPos;

// address: 0x8012D67C
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x8012D668
extern bool fileinfoflag;

// address: 0x8012D63C
extern char *DiabloGameFile;

// address: 0x8012D640
extern char *DiabloOptionFile;

// address: 0x8012D660
// size: 0x8
extern char *McState_addr_8012D660[2];

// address: 0x8012D758
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x8012D760
extern int mdec_audio_sec;

// address: 0x8012D764
extern int mdec_audio_offs;

// address: 0x8012D768
extern int mdec_audio_playing;

// address: 0x8012D76C
extern int mdec_audio_rate_shift;

// address: 0x8012D770
// size: 0x8
extern char *vlcbuf[2];

// address: 0x8012D778
extern int slice_size;

// address: 0x8012D77C
// size: 0x8
extern struct RECT slice;

// address: 0x8012D784
extern int slice_inc;

// address: 0x8012D788
extern int area_pw;

// address: 0x8012D78C
extern int area_ph;

// address: 0x8012D790
// size: 0x2
extern char tmdc_pol_dirty[2];

// address: 0x8012D794
// size: 0x8
extern int num_pol[2];

// address: 0x8012D79C
extern int mdec_cx;

// address: 0x8012D7A0
extern int mdec_cy;

// address: 0x8012D7A4
extern int mdec_w;

// address: 0x8012D7A8
extern int mdec_h;

// address: 0x8012D7AC
// size: 0x8
extern int mdec_pw[2];

// address: 0x8012D7B4
// size: 0x8
extern int mdec_ph[2];

// address: 0x8012D7BC
extern int move_x;

// address: 0x8012D7C0
extern int move_y;

// address: 0x8012D7C4
extern int move_scale;

// address: 0x8012D7C8
extern int stream_frames;

// address: 0x8012D7CC
extern int last_stream_frame;

// address: 0x8012D7D0
extern int mdec_framecount;

// address: 0x8012D7D4
extern int mdec_speed;

// address: 0x8012D7D8
extern int mdec_stream_starting;

// address: 0x8012D7DC
extern int mdec_last_frame;

// address: 0x8012D7E0
extern int mdec_sectors_per_frame;

// address: 0x8012D7E4
extern unsigned short *vlctab;

// address: 0x8012D7E8
extern unsigned char *mdc_buftop;

// address: 0x8012D7EC
extern unsigned char *mdc_bufstart;

// address: 0x8012D7F0
extern int mdc_bufleft;

// address: 0x8012D7F4
extern int mdc_buftotal;

// address: 0x8012D7F8
extern int ordertab_length;

// address: 0x8012D7FC
extern int time_in_frames;

// address: 0x8012D800
extern int stream_chunksize;

// address: 0x8012D804
extern int stream_bufsize;

// address: 0x8012D808
extern int stream_subsec;

// address: 0x8012D80C
extern int stream_secnum;

// address: 0x8012D810
extern int stream_last_sector;

// address: 0x8012D814
extern int stream_startsec;

// address: 0x8012D818
extern int stream_opened;

// address: 0x8012D81C
extern int stream_last_chunk;

// address: 0x8012D820
extern int stream_got_chunks;

// address: 0x8012D824
extern int last_sector;

// address: 0x8012D828
extern int cdstream_resetsec;

// address: 0x8012D82C
extern int last_handler_event;

// address: 0x8012D6F4
extern bool user_start;

// address: 0x8012D68C
extern unsigned char *vlc_tab;

// address: 0x8012D690
extern unsigned char *vlc_buf;

// address: 0x8012D694
extern unsigned char *img_buf;

// address: 0x8012D698
extern int vbuf;

// address: 0x8012D69C
extern int last_fn;

// address: 0x8012D6A0
extern int last_mdc;

// address: 0x8012D6A4
extern int slnum;

// address: 0x8012D6A8
extern int slices_to_do;

// address: 0x8012D6AC
extern int mbuf;

// address: 0x8012D6B0
extern int mfn;

// address: 0x8012D6B4
extern int last_move_mbuf;

// address: 0x8012D6B8
extern int move_request;

// address: 0x8012D6BC
extern int mdec_scale;

// address: 0x8012D6C0
extern int do_brightness;

// address: 0x8012D6C4
extern int frame_decoded;

// address: 0x8012D6C8
extern int mdec_streaming;

// address: 0x8012D6CC
extern int mdec_stream_size;

// address: 0x8012D6D0
extern int first_stream_frame;

// address: 0x8012D6D4
extern int stream_frames_played;

// address: 0x8012D6D8
extern int num_mdcs;

// address: 0x8012D6DC
extern int mdec_head;

// address: 0x8012D6E0
extern int mdec_tail;

// address: 0x8012D6E4
extern int mdec_waiting_tail;

// address: 0x8012D6E8
extern int mdecs_queued;

// address: 0x8012D6EC
extern int mdecs_waiting;

// address: 0x8012D6F0
extern int sfx_volume;

// address: 0x8012D6F8
static unsigned char DiabEnd;

// address: 0x8012D6FC
extern int stream_chunks_in;

// address: 0x8012D700
extern int stream_chunks_total;

// address: 0x8012D704
extern int stream_in;

// address: 0x8012D708
extern int stream_out;

// address: 0x8012D70C
extern int stream_stalled;

// address: 0x8012D710
extern int stream_ending;

// address: 0x8012D714
extern int stream_open;

// address: 0x8012D718
extern int stream_handler_installed;

// address: 0x8012D71C
extern int stream_chunks_borrowed;

// address: 0x8012D720
extern int _get_count;

// address: 0x8012D724
extern int _discard_count;

// address: 0x8012D728
// size: 0x5C
extern struct TASK *CDTask;

// address: 0x8012D72C
// size: 0x98
static struct cdstreamstruct *CDStream;

// address: 0x8012D730
extern int cdready_calls;

// address: 0x8012D734
extern int cdready_errors;

// address: 0x8012D738
extern int cdready_out_of_sync;

// address: 0x8012D73C
extern int cdstream_resetting;

// address: 0x8012D740
extern int sector_dma;

// address: 0x8012D744
extern int sector_dma_in;

// address: 0x8012D748
extern unsigned long *chkaddr;

// address: 0x8012D74C
// size: 0x8
extern struct chunkhdrstruct *chunk;

// address: 0x8012D750
extern int first_handler_event;

// address: 0x8012D754
static bool DOSLEEP;

// address: 0x8012D8AC
extern unsigned char *pStatusPanel;

// address: 0x8012D8B0
extern unsigned char *pGBoxBuff;

// address: 0x8012D8B4
extern unsigned char dropGoldFlag;

// address: 0x8012D8B8
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800C0AE8
// size: 0x200
extern char _infostr[256][2];

// address: 0x8012D8BC
// size: 0x2
extern char _infoclr[2];

// address: 0x800C0CE8
// size: 0x100
extern char tempstr[256];

// address: 0x8012D8BE
extern unsigned char drawhpflag;

// address: 0x8012D8BF
extern unsigned char drawmanaflag;

// address: 0x8012D8C0
extern unsigned char chrflag;

// address: 0x8012D8C1
extern unsigned char drawbtnflag;

// address: 0x8012D8C2
extern unsigned char panbtndown;

// address: 0x8012D8C3
extern unsigned char panelflag;

// address: 0x8012D8C4
extern unsigned char chrbtndown;

// address: 0x8012D8C5
extern unsigned char lvlbtndown;

// address: 0x8012D8C6
extern unsigned char sbookflag;

// address: 0x8012D8C7
extern unsigned char talkflag;

// address: 0x8012D8C8
extern int dropGoldValue;

// address: 0x8012D8CC
extern int initialDropGoldValue;

// address: 0x8012D8D0
extern int initialDropGoldIndex;

// address: 0x8012D8D4
extern unsigned char *pPanelButtons;

// address: 0x8012D8D8
extern unsigned char *pPanelText;

// address: 0x8012D8DC
extern unsigned char *pManaBuff;

// address: 0x8012D8E0
extern unsigned char *pLifeBuff;

// address: 0x8012D8E4
extern unsigned char *pChrPanel;

// address: 0x8012D8E8
extern unsigned char *pChrButtons;

// address: 0x8012D8EC
extern unsigned char *pSpellCels;

// address: 0x8012F1C8
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x8012F5C8
// size: 0x40
static int _pstrjust[8][2];

// address: 0x8012E7D8
// size: 0x8
static int _pnumlines[2];

// address: 0x8012D8F0
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x8012D8F4
// size: 0x8
extern struct RECT CSRect;

// address: 0x8012E7E8
// size: 0x8
static int _pSpell[2];

// address: 0x8012E7F0
// size: 0x8
static int _pSplType[2];

// address: 0x8012D8FC
extern int numpanbtns;

// address: 0x8012D900
extern unsigned char *pDurIcons;

// address: 0x8012D904
extern unsigned char drawdurflag;

// address: 0x8012E7F8
// size: 0x8
static unsigned char chrbtn[4][2];

// address: 0x8012D905
extern unsigned char chrbtnactive;

// address: 0x8012D908
extern unsigned char *pSpellBkCel;

// address: 0x8012D90C
extern unsigned char *pSBkBtnCel;

// address: 0x8012D910
extern unsigned char *pSBkIconCels;

// address: 0x8012D914
extern int sbooktab;

// address: 0x8012D918
extern int cur_spel;

// address: 0x8012E800
static long talkofs;

// address: 0x8012F618
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x8012E804
static unsigned char sgbTalkSavePos;

// address: 0x8012E805
static unsigned char sgbNextTalkSave;

// address: 0x8012E806
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x8012E808
static unsigned char *pTalkPanel;

// address: 0x8012E80C
static unsigned char *pMultiBtns;

// address: 0x8012E810
static unsigned char *pTalkBtns;

// address: 0x8012E814
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x800C05FC
// size: 0x25
extern char SpellITbl[37];

// address: 0x8012D839
extern unsigned char DrawLevelUpFlag;

// address: 0x8012D860
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x8012D85C
extern unsigned char spspelstate;

// address: 0x8012D87C
extern bool initchr;

// address: 0x8012D83C
static int SPLICONNO;

// address: 0x8012D840
static int SPLICONY;

// address: 0x8012E7E0
static int SPLICONRIGHT;

// address: 0x8012D844
static int scx;

// address: 0x8012D848
static int scy;

// address: 0x8012D84C
static int scx1;

// address: 0x8012D850
static int scy1;

// address: 0x8012D854
static int scx2;

// address: 0x8012D858
static int scy2;

// address: 0x8012D868
extern char SpellCol;

// address: 0x800C05E8
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800C0624
// size: 0x64
extern int SpellPages[5][5];

// address: 0x8012D86C
static int lus;

// address: 0x8012D870
static int CsNo;

// address: 0x8012D874
static char plusanim;

// address: 0x8012F608
// size: 0x10
static struct Dialog CSBack;

// address: 0x8012D878
static int CS_XOFF;

// address: 0x800C0688
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x8012D880
extern int NoCSEntries;

// address: 0x8012D884
static int SPALOFF;

// address: 0x8012D888
static int paloffset1;

// address: 0x8012D88C
static int paloffset2;

// address: 0x8012D890
static int paloffset3;

// address: 0x8012D894
static int paloffset4;

// address: 0x8012D898
static int pinc1;

// address: 0x8012D89C
static int pinc2;

// address: 0x8012D8A0
static int pinc3;

// address: 0x8012D8A4
static int pinc4;

// address: 0x8012D92C
// size: 0x8
extern int _pcurs[2];

// address: 0x8012D934
extern int cursW;

// address: 0x8012D938
extern int cursH;

// address: 0x8012D93C
extern int icursW;

// address: 0x8012D940
extern int icursH;

// address: 0x8012D944
extern int icursW28;

// address: 0x8012D948
extern int icursH28;

// address: 0x8012D94C
extern int cursmx;

// address: 0x8012D950
extern int cursmy;

// address: 0x8012D954
// size: 0x8
extern int _pcursmonst[2];

// address: 0x8012D95C
// size: 0x2
extern char _pcursobj[2];

// address: 0x8012D960
// size: 0x2
extern char _pcursitem[2];

// address: 0x8012D964
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x8012D968
// size: 0x2
extern char _pcursplr[2];

// address: 0x8012D928
extern int sel_data;

// address: 0x800C0DE8
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x8012D96C
extern int spurtndx;

// address: 0x8012D970
extern int stonendx;

// address: 0x8012D974
extern unsigned char *pSquareCel;

// address: 0x8012D9B4
extern unsigned long ghInst;

// address: 0x8012D9B8
extern unsigned char svgamode;

// address: 0x8012D9BC
extern int MouseX;

// address: 0x8012D9C0
extern int MouseY;

// address: 0x8012D9C4
extern long gv1;

// address: 0x8012D9C8
extern long gv2;

// address: 0x8012D9CC
extern long gv3;

// address: 0x8012D9D0
extern long gv4;

// address: 0x8012D9D4
extern long gv5;

// address: 0x8012D9D8
extern unsigned char gbProcessPlayers;

// address: 0x800C0F5C
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800C0F84
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800C0FC8
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x8012D9D9
extern unsigned char gbDoEnding;

// address: 0x8012D9DA
extern unsigned char gbRunGame;

// address: 0x8012D9DB
extern unsigned char gbRunGameResult;

// address: 0x8012D9DC
extern unsigned char gbGameLoopStartup;

// address: 0x8012F668
// size: 0x44
static int glEndSeed[17];

// address: 0x8012F6B8
// size: 0x44
static int glMid1Seed[17];

// address: 0x8012F708
// size: 0x44
static int glMid2Seed[17];

// address: 0x8012F758
// size: 0x44
static int glMid3Seed[17];

// address: 0x8012E818
static long *sg_previousFilter;

// address: 0x800C100C
// size: 0x30
extern int CreateEnv[12];

// address: 0x8012D9E0
extern int Passedlvldir;

// address: 0x8012D9E4
extern unsigned char *TempStack;

// address: 0x8012D984
extern unsigned long ghMainWnd;

// address: 0x8012D988
extern unsigned char fullscreen;

// address: 0x8012D98C
extern int force_redraw;

// address: 0x8012D9A0
extern unsigned char PauseMode;

// address: 0x8012D9A1
extern unsigned char FriendlyMode;

// address: 0x8012D991
extern unsigned char visiondebug;

// address: 0x8012D993
extern unsigned char light4flag;

// address: 0x8012D994
extern unsigned char leveldebug;

// address: 0x8012D995
extern unsigned char monstdebug;

// address: 0x8012D99C
extern int debugmonsttypes;

// address: 0x8012D990
static unsigned char cineflag;

// address: 0x8012D992
extern unsigned char scrollflag;

// address: 0x8012D996
extern unsigned char trigdebug;

// address: 0x8012D998
extern int setseed;

// address: 0x8012D9A4
static int sgnTimeoutCurs;

// address: 0x8012D9A8
extern unsigned char sgbMouseDown;

// address: 0x800C16D8
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x8012D9FC
extern int numtowners;

// address: 0x8012DA00
extern unsigned char storeflag;

// address: 0x8012DA01
extern unsigned char boyloadflag;

// address: 0x8012DA02
extern unsigned char bannerflag;

// address: 0x8012DA04
extern unsigned char *pCowCels;

// address: 0x8012E81C
static unsigned long sgdwCowClicks;

// address: 0x8012E820
static int sgnCowMsg;

// address: 0x800C1418
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x8012D9F4
extern unsigned long CowPlaying;

// address: 0x800C103C
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800C13B4
// size: 0xC
extern int TownCowX[3];

// address: 0x800C13C0
// size: 0xC
extern int TownCowY[3];

// address: 0x800C13CC
// size: 0xC
extern int TownCowDir[3];

// address: 0x800C13D8
// size: 0x20
extern int cowoffx[8];

// address: 0x800C13F8
// size: 0x20
extern int cowoffy[8];

// address: 0x8012DA1C
extern int sfxdelay;

// address: 0x8012DA20
extern int sfxdnum;

// address: 0x8012DA14
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800C24D8
// size: 0xF78
extern struct TSFX sgSFX[990];

// address: 0x8012DA18
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x8012DA24
extern long orgseed;

// address: 0x8012E824
static long sglGameSeed;

// address: 0x8012DA28
extern int SeedCount;

// address: 0x8012E828
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8012E82C
static int sgnWidth;

// address: 0x8012DA36
extern char msgflag;

// address: 0x8012DA37
extern char msgdelay;

// address: 0x800C3500
// size: 0x50
extern char msgtable[80];

// address: 0x800C3450
// size: 0xB0
extern int MsgStrings[44];

// address: 0x8012DA35
extern char msgcnt;

// address: 0x8012E830
static unsigned long sgdwProgress;

// address: 0x8012E834
static unsigned long sgdwXY;

// address: 0x800C3550
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x80123788
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x80124B28
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x80125848
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x80126748
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800C3764
// size: 0x4C00
extern struct ItemStruct item[128];

// address: 0x800C8364
// size: 0x7F
extern char itemactive[127];

// address: 0x800C83E4
// size: 0x7F
extern char itemavail[127];

// address: 0x800C8464
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8012DA70
extern unsigned char uitemflag;

// address: 0x8012E838
static int tem;

// address: 0x8012F7A0
// size: 0x98
static struct ItemStruct curruitem;

// address: 0x8012F840
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x8012DA74
extern int ScrollType;

// address: 0x800C84E4
// size: 0x40
extern char ItemStr[64];

// address: 0x800C8524
// size: 0x40
extern char SufStr[64];

// address: 0x8012DA50
extern long numitems;

// address: 0x8012DA54
extern int gnNumGetRecords;

// address: 0x800C36C0
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800C35F0
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x80128570
// size: 0x40
extern short SinTab[32];

// address: 0x801285B0
// size: 0x46
static short Item2Frm[35];

// address: 0x800C369C
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x8012DA58
extern int *ItemAnimSnds;

// address: 0x8012DA5C
extern int idoppely;

// address: 0x8012DA60
extern int ScrollFlag;

// address: 0x800C374C
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800C9310
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800C9450
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x8012DA88
extern int numlights;

// address: 0x8012DA8C
extern char lightmax;

// address: 0x800C9478
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x8012DA90
extern int numvision;

// address: 0x8012DA94
extern unsigned char dovision;

// address: 0x8012DA98
extern int visionid;

// address: 0x8012E83C
static int disp_mask;

// address: 0x8012E840
static int weird;

// address: 0x8012E844
static int disp_tab_r;

// address: 0x8012E848
static int dispy_r;

// address: 0x8012E84C
static int disp_tab_g;

// address: 0x8012E850
static int dispy_g;

// address: 0x8012E854
static int disp_tab_b;

// address: 0x8012E858
static int dispy_b;

// address: 0x8012E85C
static int radius;

// address: 0x8012E860
static int bright;

// address: 0x8012F850
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x8012DA78
extern int lightflag;

// address: 0x800C9024
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800C92D8
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800C8564
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x8012DA7C
extern int restore_r;

// address: 0x8012DA80
extern int restore_g;

// address: 0x8012DA84
extern int restore_b;

// address: 0x800C92F0
// size: 0x10
static char radius_tab[16];

// address: 0x800C9300
// size: 0x10
static char bright_tab[16];

// address: 0x8012DAB9
extern unsigned char qtextflag;

// address: 0x8012DABC
extern int qtextSpd;

// address: 0x8012E864
static unsigned char *pMedTextCels;

// address: 0x8012E868
static unsigned char *pTextBoxCels;

// address: 0x8012E86C
static char *qtextptr;

// address: 0x8012E870
static int qtexty;

// address: 0x8012E874
static unsigned long qtextDelay;

// address: 0x8012E878
static unsigned long sgLastScroll;

// address: 0x8012E87C
static unsigned long scrolltexty;

// address: 0x8012E880
static long sglMusicVolumeSave;

// address: 0x8012DAA8
static bool qtbodge;

// address: 0x800C9638
// size: 0x10
extern struct Dialog QBack;

// address: 0x800C9648
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800C9DB8
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800C9CA8
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800C9EA4
// size: 0x13D4C
extern struct DLevel sgLevels[21];

// address: 0x800DDBF0
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x8012F8D0
// size: 0x16
static struct DJunk sgJunk;

// address: 0x8012E885
static unsigned char sgbRecvCmd;

// address: 0x8012E888
static unsigned long sgdwRecvOffset;

// address: 0x8012E88C
static unsigned char sgbDeltaChunks;

// address: 0x8012E88D
static unsigned char sgbDeltaChanged;

// address: 0x8012E890
static unsigned long sgdwOwnerWait;

// address: 0x8012E894
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x8012E898
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8012E89C
static int sgnCurrMegaPlayer;

// address: 0x8012DAD5
extern unsigned char deltaload;

// address: 0x8012DAD6
extern unsigned char gbBufferMsgs;

// address: 0x8012DAD8
extern unsigned long dwRecCount;

// address: 0x8012DADC
extern bool LevelOut;

// address: 0x8012DAF2
extern unsigned char gbMaxPlayers;

// address: 0x8012DAF3
extern unsigned char gbActivePlayers;

// address: 0x8012DAF4
extern unsigned char gbGameDestroyed;

// address: 0x8012DAF5
extern unsigned char gbDeltaSender;

// address: 0x8012DAF6
extern unsigned char gbSelectProvider;

// address: 0x8012DAF7
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x8012E8A0
static unsigned char sgbSentThisCycle;

// address: 0x8012E8A4
static unsigned long sgdwGameLoops;

// address: 0x8012E8A8
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x8012E8AC
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x8012E8B0
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x8012E8B8
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x8012E8C0
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x8012E8C8
static unsigned char sgbTimeout;

// address: 0x8012E8CC
static long sglTimeoutStart;

// address: 0x8012DAEC
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x8012DAF1
static unsigned char sgbNetInited;

// address: 0x800DEC58
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800DEE1C
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80128CD8
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800DF5FC
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x8012DB18
extern long numobjects;

// address: 0x800E0BD0
// size: 0x7F
extern char objectactive[127];

// address: 0x800E0C50
// size: 0x7F
extern char objectavail[127];

// address: 0x8012DB1C
extern unsigned char InitObjFlag;

// address: 0x8012DB20
extern int trapid;

// address: 0x800E0CD0
// size: 0x28
extern char ObjFileList[40];

// address: 0x8012DB24
extern int trapdir;

// address: 0x8012DB28
extern int leverid;

// address: 0x8012DB10
extern int numobjfiles;

// address: 0x800DF514
// size: 0x20
extern int bxadd[8];

// address: 0x800DF534
// size: 0x20
extern int byadd[8];

// address: 0x800DF5BC
// size: 0x1A
extern char shrineavail[26];

// address: 0x800DF554
// size: 0x68
extern int shrinestrs[26];

// address: 0x800DF5D8
// size: 0x24
extern int StoryBookName[9];

// address: 0x8012DB14
extern int myscale;

// address: 0x8012DB3C
extern unsigned char gbValidSaveFile;

// address: 0x8012DB38
extern bool DoLoadedChar;

// address: 0x800E0EF0
// size: 0x4750
extern struct PlayerStruct plr[2];

// address: 0x8012DB5C
extern int myplr;

// address: 0x8012DB60
extern int deathdelay;

// address: 0x8012DB64
extern unsigned char deathflag;

// address: 0x8012DB65
extern char light_rad;

// address: 0x8012DB54
// size: 0x5
extern char light_level[5];

// address: 0x800E0DE8
// size: 0x30
extern int MaxStats[4][3];

// address: 0x8012DB4C
static int PlrStructSize;

// address: 0x8012DB50
static int ItemStructSize;

// address: 0x800E0CF8
// size: 0x24
extern int plrxoff[9];

// address: 0x800E0D1C
// size: 0x24
extern int plryoff[9];

// address: 0x800E0D40
// size: 0x24
extern int plrxoff2[9];

// address: 0x800E0D64
// size: 0x24
extern int plryoff2[9];

// address: 0x800E0D88
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800E0DAC
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800E0DB8
// size: 0xC
extern int MagicTbl[3];

// address: 0x800E0DC4
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800E0DD0
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800E0DDC
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800E0E18
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800E5778
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x8012DB94
extern unsigned char *pQLogCel;

// address: 0x8012DB98
extern int ReturnLvlX;

// address: 0x8012DB9C
extern int ReturnLvlY;

// address: 0x8012DBA0
extern int ReturnLvl;

// address: 0x8012DBA4
extern int ReturnLvlT;

// address: 0x8012DBA8
extern unsigned char rporttest;

// address: 0x8012DBAC
extern int qline;

// address: 0x8012DBB0
extern int numqlines;

// address: 0x8012DBB4
extern int qtopline;

// address: 0x8012F8E8
// size: 0x40
static int qlist[16];

// address: 0x8012E8D0
// size: 0x8
static struct RECT QSRect;

// address: 0x8012DB71
extern unsigned char questlog;

// address: 0x800E5640
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x8012DB74
extern int ALLQUESTS;

// address: 0x800E5754
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800E5760
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800E576C
// size: 0xC
extern int QuestGroup3[3];

// address: 0x8012DB78
// size: 0x8
extern int QuestGroup4[2];

// address: 0x8012DB90
extern bool WaterDone;

// address: 0x800E5740
// size: 0x14
extern int questtrigstr[5];

// address: 0x8012DB80
static int QS_PX;

// address: 0x8012DB84
static int QS_PY;

// address: 0x8012DB88
static int QS_PW;

// address: 0x8012DB8C
static int QS_PH;

// address: 0x8012F928
// size: 0x10
static struct Dialog QSBack;

// address: 0x800E58B8
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x8012DBEF
extern char stextflag;

// address: 0x800E6160
// size: 0xBE0
extern struct ItemStruct smithitem[20];

// address: 0x800E6D40
// size: 0x390
extern struct ItemStruct premiumitem[6];

// address: 0x8012DBF0
extern int numpremium;

// address: 0x8012DBF4
extern int premiumlevel;

// address: 0x800E70D0
// size: 0xBE0
extern struct ItemStruct witchitem[20];

// address: 0x800E7CB0
// size: 0x98
extern struct ItemStruct boyitem;

// address: 0x8012DBF8
extern int boylevel;

// address: 0x800E7D48
// size: 0x98
extern struct ItemStruct golditem;

// address: 0x800E7DE0
// size: 0xBE0
extern struct ItemStruct healitem[20];

// address: 0x8012DBFC
extern char stextsize;

// address: 0x8012DBFD
extern unsigned char stextscrl;

// address: 0x8012E8D8
static int stextsel;

// address: 0x8012E8DC
static int stextlhold;

// address: 0x8012E8E0
static int stextshold;

// address: 0x8012E8E4
static int stextvhold;

// address: 0x8012E8E8
static int stextsval;

// address: 0x8012E8EC
static int stextsmax;

// address: 0x8012E8F0
static int stextup;

// address: 0x8012E8F4
static int stextdown;

// address: 0x8012E8F8
static char stextscrlubtn;

// address: 0x8012E8F9
static char stextscrldbtn;

// address: 0x8012E8FA
static char SItemListFlag;

// address: 0x8012F938
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800E89C0
// size: 0x1C80
extern struct ItemStruct storehold[48];

// address: 0x800EA640
// size: 0x30
extern char storehidx[48];

// address: 0x8012E8FC
static int storenumh;

// address: 0x8012E900
static int gossipstart;

// address: 0x8012E904
static int gossipend;

// address: 0x8012E908
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x8012E910
static int talker;

// address: 0x8012DBDC
extern unsigned char *pSTextBoxCels;

// address: 0x8012DBE0
extern unsigned char *pSTextSlidCels;

// address: 0x8012DBE4
extern int *SStringY;

// address: 0x800E603C
// size: 0x10
extern struct Dialog SBack;

// address: 0x800E604C
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800E609C
// size: 0x50
extern int SStringYBuy0[20];

// address: 0x800E60EC
// size: 0x50
extern int SStringYBuy1[20];

// address: 0x800E613C
// size: 0x24
extern int talkname[9];

// address: 0x8012DBEE
extern unsigned char InStoreFlag;

// address: 0x8012A024
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x8012DC0C
extern unsigned long gdwAllTextEntries;

// address: 0x8012E914
static unsigned char *P3Tiles;

// address: 0x8012DC1C
extern int tile;

// address: 0x8012DC2C
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800EA8A8
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x8012DC30
extern int numtrigs;

// address: 0x8012DC34
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x8012DC38
extern int TWarpFrom;

// address: 0x800EA670
// size: 0x2C
extern int TownDownList[11];

// address: 0x800EA69C
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800EA6D0
// size: 0x30
extern int L1UpList[12];

// address: 0x800EA700
// size: 0x28
extern int L1DownList[10];

// address: 0x800EA728
// size: 0xC
extern int L2UpList[3];

// address: 0x800EA734
// size: 0x14
extern int L2DownList[5];

// address: 0x800EA748
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800EA754
// size: 0x3C
extern int L3UpList[15];

// address: 0x800EA790
// size: 0x24
extern int L3DownList[9];

// address: 0x800EA7B4
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800EA7EC
// size: 0x10
extern int L4UpList[4];

// address: 0x800EA7FC
// size: 0x18
extern int L4DownList[6];

// address: 0x800EA814
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800EA824
// size: 0x84
extern int L4PentaList[33];

// address: 0x8012DC51
extern unsigned char gbSndInited;

// address: 0x8012DC54
extern long sglMasterVolume;

// address: 0x8012DC58
extern long sglMusicVolume;

// address: 0x8012DC5C
extern long sglSoundVolume;

// address: 0x8012DC60
extern long sglSpeechVolume;

// address: 0x8012DC64
extern int sgnMusicTrack;

// address: 0x8012DC52
extern unsigned char gbDupSounds;

// address: 0x8012DC68
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x8012AE58
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x8012DC80
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800EA8F8
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x8012DC88
// size: 0x2
extern char _pfind_index[2];

// address: 0x8012DC8C
// size: 0x2
extern char _pfindx[2];

// address: 0x8012DC90
// size: 0x2
extern char _pfindy[2];

// address: 0x8012DC92
extern unsigned char automapmoved;

// address: 0x8012DC75
extern unsigned char flyflag;

// address: 0x8012DC76
static char seen_combo;

// address: 0x80130658
// size: 0x94
static struct GamePad GPad1;

// address: 0x801306F8
// size: 0x94
static struct GamePad GPad2;

// address: 0x8012E918
static unsigned long (*CurrentProc)();

// address: 0x8012AFEC
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x8012DCCC
extern int NumOfStrings;

// address: 0x8012DCA0
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x8012DCA4
extern long hndText;

// address: 0x8012DCA8
extern char **TextPtr;

// address: 0x8012DCAC
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x8012DCDC
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x8012DCE0
extern int CharFade;

// address: 0x8012DCE4
extern int rotateness;

// address: 0x8012DCE8
extern int spiralling_shape;

// address: 0x8012DCEC
extern int down;

// address: 0x800EA948
// size: 0x10
extern char MlTab[16];

// address: 0x800EA958
// size: 0x10
extern char QlTab[16];

// address: 0x800EA968
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x8012DD08
extern int MyXoff1;

// address: 0x8012DD0C
extern int MyYoff1;

// address: 0x8012DD10
extern int MyXoff2;

// address: 0x8012DD14
extern int MyYoff2;

// address: 0x8012DD24
extern bool iscflag;

// address: 0x8012DD31
static unsigned char sgbFadedIn;

// address: 0x8012DD32
static unsigned char screenbright;

// address: 0x8012DD34
static int faderate;

// address: 0x8012DD38
static bool fading;

// address: 0x8012DD44
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x8012DD3C
extern int st;

// address: 0x8012DD40
extern int mode;

// address: 0x800EAAF0
// size: 0x18
extern struct PortalStruct portal[2];

// address: 0x8012DD76
extern char portalindex;

// address: 0x8012DD70
// size: 0x2
static char WarpDropX[2];

// address: 0x8012DD74
// size: 0x2
static char WarpDropY[2];

// address: 0x800EAB08
// size: 0x78
extern char MyVerString[120];

// address: 0x8012DED4
extern int Year;

// address: 0x8012DED8
extern int Day;

// address: 0x8012E91C
static unsigned char *tbuff;

// address: 0x800EAB80
// size: 0x300
extern unsigned char IconBuffer[768];

// address: 0x8012E920
static unsigned char HR1;

// address: 0x8012E921
static unsigned char HR2;

// address: 0x8012E922
static unsigned char HR3;

// address: 0x8012E923
static unsigned char VR1;

// address: 0x8012E924
static unsigned char VR2;

// address: 0x8012E925
static unsigned char VR3;

// address: 0x8012DF48
// size: 0x18
extern struct NODE *pHallList;

// address: 0x8012DF4C
extern int nRoomCnt;

// address: 0x8012DF50
extern int nSx1;

// address: 0x8012DF54
extern int nSy1;

// address: 0x8012DF58
extern int nSx2;

// address: 0x8012DF5C
extern int nSy2;

// address: 0x8012DF00
extern int Area_Min;

// address: 0x8012DF04
extern int Room_Max;

// address: 0x8012DF08
extern int Room_Min;

// address: 0x8012DF0C
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x8012DF14
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x8012DF1C
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x8012DF24
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x8012DF2C
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x8012DF30
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x8012DF34
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x8012DF38
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x8012DF3C
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x8012DF40
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x8012DF44
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x8012E928
static int abyssx;

// address: 0x8012E92C
static unsigned char lavapool;

// address: 0x8012DFE8
extern int lockoutcnt;

// address: 0x8012DF6C
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x8012DF74
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x8012DF7C
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x8012DF84
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x8012DF8C
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x8012DF94
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x8012DF9C
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x8012DFA4
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x8012DFAC
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x8012DFB4
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x8012DFBC
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x8012DFC4
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x8012DFCC
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x8012DFD4
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x8012DFD8
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x8012DFDC
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x8012DFE0
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x8012DFE4
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x8012DFEC
extern int diabquad1x;

// address: 0x8012DFF0
extern int diabquad2x;

// address: 0x8012DFF4
extern int diabquad3x;

// address: 0x8012DFF8
extern int diabquad4x;

// address: 0x8012DFFC
extern int diabquad1y;

// address: 0x8012E000
extern int diabquad2y;

// address: 0x8012E004
extern int diabquad3y;

// address: 0x8012E008
extern int diabquad4y;

// address: 0x8012E00C
extern int SP4x1;

// address: 0x8012E010
extern int SP4y1;

// address: 0x8012E014
extern int SP4x2;

// address: 0x8012E018
extern int SP4y2;

// address: 0x8012E01C
extern int l4holdx;

// address: 0x8012E020
extern int l4holdy;

// address: 0x8012E930
static unsigned char *lpSetPiece1;

// address: 0x8012E934
static unsigned char *lpSetPiece2;

// address: 0x8012E938
static unsigned char *lpSetPiece3;

// address: 0x8012E93C
static unsigned char *lpSetPiece4;

// address: 0x8012E940
static unsigned char *lppSetPiece2;

// address: 0x8012E944
static unsigned char *lppSetPiece3;

// address: 0x8012E948
static unsigned char *lppSetPiece4;

// address: 0x8012E030
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x8012E038
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800EAE80
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800EAE94
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800EAEB0
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8012E040
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800EAEC4
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x8012E134
static bool DoUiForChooseMonster;

// address: 0x800EAEE8
// size: 0x88
static char *MgToText[34];

// address: 0x800EAF70
// size: 0x24
extern int StoryText[3][3];

// address: 0x800EAF94
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800EC194
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800EC7D4
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x8012E158
extern int setpc_x;

// address: 0x8012E15C
extern int setpc_y;

// address: 0x8012E160
extern int setpc_w;

// address: 0x8012E164
extern int setpc_h;

// address: 0x8012E168
extern unsigned char setloadflag;

// address: 0x8012E16C
extern unsigned char *pMegaTiles;

// address: 0x800ECE14
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800ED618
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800EDE1C
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800EE620
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800EEE24
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x8012E170
extern int dminx;

// address: 0x8012E174
extern int dminy;

// address: 0x8012E178
extern int dmaxx;

// address: 0x8012E17C
extern int dmaxy;

// address: 0x8012E180
extern int gnDifficulty;

// address: 0x8012E184
extern unsigned char currlevel;

// address: 0x8012E185
extern unsigned char leveltype;

// address: 0x8012E186
extern unsigned char setlevel;

// address: 0x8012E187
extern unsigned char setlvlnum;

// address: 0x8012E188
extern unsigned char setlvltype;

// address: 0x8012E18C
extern int ViewX;

// address: 0x8012E190
extern int ViewY;

// address: 0x8012E194
extern int ViewDX;

// address: 0x8012E198
extern int ViewDY;

// address: 0x8012E19C
extern int ViewBX;

// address: 0x8012E1A0
extern int ViewBY;

// address: 0x800EF628
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x8012E1A4
extern int LvlViewX;

// address: 0x8012E1A8
extern int LvlViewY;

// address: 0x8012E1AC
extern int btmbx;

// address: 0x8012E1B0
extern int btmby;

// address: 0x8012E1B4
extern int btmdx;

// address: 0x8012E1B8
extern int btmdy;

// address: 0x8012E1BC
extern int MicroTileLen;

// address: 0x8012E1C0
extern char TransVal;

// address: 0x800EF63C
// size: 0x20
extern bool TransList[8];

// address: 0x8012E1C4
extern int themeCount;

// address: 0x800EF65C
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x8011191C
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x80112480
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x80112FE4
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x80113B48
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x8012E150
extern unsigned char *pSetPiece;

// address: 0x8012E154
extern int DungSize;

// address: 0x80113D14
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x8012E204
extern int numthemes;

// address: 0x8012E208
extern int zharlib;

// address: 0x8012E20C
extern unsigned char armorFlag;

// address: 0x8012E20D
extern unsigned char bCrossFlag;

// address: 0x8012E20E
extern unsigned char weaponFlag;

// address: 0x8012E210
extern int themex;

// address: 0x8012E214
extern int themey;

// address: 0x8012E218
extern int themeVar1;

// address: 0x8012E21C
extern unsigned char bFountainFlag;

// address: 0x8012E21D
extern unsigned char cauldronFlag;

// address: 0x8012E21E
extern unsigned char mFountainFlag;

// address: 0x8012E21F
extern unsigned char pFountainFlag;

// address: 0x8012E220
extern unsigned char tFountainFlag;

// address: 0x8012E221
extern unsigned char treasureFlag;

// address: 0x8012E224
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x80113BF4
// size: 0x10
extern int ThemeGood[4];

// address: 0x80113C04
// size: 0x64
extern int trm5x[25];

// address: 0x80113C68
// size: 0x64
extern int trm5y[25];

// address: 0x80113CCC
// size: 0x24
extern int trm3x[9];

// address: 0x80113CF0
// size: 0x24
extern int trm3y[9];

// address: 0x8012E2FC
extern int nummissiles;

// address: 0x80113F2C
// size: 0x1F4
extern int missileactive[125];

// address: 0x80114120
// size: 0x1F4
extern int missileavail[125];

// address: 0x8012E300
extern unsigned char MissilePreFlag;

// address: 0x80114314
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x8012E301
extern unsigned char ManashieldFlag;

// address: 0x8012E302
extern unsigned char ManashieldFlag2;

// address: 0x80113EA4
// size: 0x20
extern int XDirAdd[8];

// address: 0x80113EC4
// size: 0x20
extern int YDirAdd[8];

// address: 0x8012E2C9
extern unsigned char fadetor;

// address: 0x8012E2CA
extern unsigned char fadetog;

// address: 0x8012E2CB
extern unsigned char fadetob;

// address: 0x80113EE4
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x80113EF4
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x80116BC4
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x8012E364
extern long nummonsters;

// address: 0x8011C344
// size: 0x190
extern short monstactive[200];

// address: 0x8011C4D4
// size: 0x190
extern short monstkills[200];

// address: 0x8011C664
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x8012E368
extern long monstimgtot;

// address: 0x8012E36C
extern char totalmonsters;

// address: 0x8012E370
extern int uniquetrans;

// address: 0x8012E94C
static unsigned char sgbSaveSoundOn;

// address: 0x8012E334
// size: 0x8
extern char offset_x[8];

// address: 0x8012E33C
// size: 0x8
extern char offset_y[8];

// address: 0x8012E31C
// size: 0x8
extern char left[8];

// address: 0x8012E324
// size: 0x8
extern char right[8];

// address: 0x8012E32C
// size: 0x8
extern char opposite[8];

// address: 0x8012E310
extern int nummtypes;

// address: 0x8012E314
// size: 0x7
extern char animletter[7];

// address: 0x80116A24
// size: 0x120
extern int MWVel[3][24];

// address: 0x8012E344
// size: 0x4
extern char rnd5[4];

// address: 0x8012E348
// size: 0x4
extern char rnd10[4];

// address: 0x8012E34C
// size: 0x4
extern char rnd20[4];

// address: 0x8012E350
// size: 0x4
extern char rnd60[4];

// address: 0x80116B44
// size: 0x80
extern void (*AiProc[32])();

// address: 0x8011CB3C
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x8011E57C
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x8011E5FC
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x8011E66C
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x8011C924
// size: 0x218
extern int TransPals[134];

// address: 0x8011C824
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x8012E3A8
extern unsigned char invflag;

// address: 0x8012E3A9
extern unsigned char drawsbarflag;

// address: 0x8012E3AC
extern int InvBackY;

// address: 0x8012E3B0
extern int InvCursPos;

// address: 0x8011F614
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x8012E3B4
extern int InvBackAY;

// address: 0x8012E3B8
extern int InvSel;

// address: 0x8012E3BC
extern int ItemW;

// address: 0x8012E3C0
extern int ItemH;

// address: 0x8012E3C4
extern int ItemNo;

// address: 0x8012E3C8
// size: 0x8
extern struct RECT BRect;

// address: 0x8012E390
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x8012E394
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x8012E38C
extern int InvPageNo;

// address: 0x8011EF9C
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8011EFC4
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x8011F20C
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x8011F4AC
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x8011F560
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x8012E3A0
static bool InvOn;

// address: 0x8012E3A4
static unsigned long sgdwLastTime;

// address: 0x8012E3FF
extern unsigned char automapflag;

// address: 0x8011F678
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x8011F740
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8012E400
extern unsigned char AMLWallFlag;

// address: 0x8012E401
extern unsigned char AMRWallFlag;

// address: 0x8012E402
extern unsigned char AMLLWallFlag;

// address: 0x8012E403
extern unsigned char AMLRWallFlag;

// address: 0x8012E404
extern unsigned char AMDirtFlag;

// address: 0x8012E405
extern unsigned char AMColumnFlag;

// address: 0x8012E406
extern unsigned char AMStairFlag;

// address: 0x8012E407
extern unsigned char AMLDoorFlag;

// address: 0x8012E408
extern unsigned char AMLGrateFlag;

// address: 0x8012E409
extern unsigned char AMLArchFlag;

// address: 0x8012E40A
extern unsigned char AMRDoorFlag;

// address: 0x8012E40B
extern unsigned char AMRGrateFlag;

// address: 0x8012E40C
extern unsigned char AMRArchFlag;

// address: 0x8012E410
extern int AutoMapX;

// address: 0x8012E414
extern int AutoMapY;

// address: 0x8012E418
extern int AutoMapXOfs;

// address: 0x8012E41C
extern int AutoMapYOfs;

// address: 0x8012E420
extern int AMPlayerX;

// address: 0x8012E424
extern int AMPlayerY;

// address: 0x8012E3DC
extern int AutoMapScale;

// address: 0x8012E3E0
extern unsigned char AutoMapPlayerR;

// address: 0x8012E3E1
extern unsigned char AutoMapPlayerG;

// address: 0x8012E3E2
extern unsigned char AutoMapPlayerB;

// address: 0x8012E3E3
extern unsigned char AutoMapWallR;

// address: 0x8012E3E4
extern unsigned char AutoMapWallG;

// address: 0x8012E3E5
extern unsigned char AutoMapWallB;

// address: 0x8012E3E6
extern unsigned char AutoMapDoorR;

// address: 0x8012E3E7
extern unsigned char AutoMapDoorG;

// address: 0x8012E3E8
extern unsigned char AutoMapDoorB;

// address: 0x8012E3E9
extern unsigned char AutoMapColumnR;

// address: 0x8012E3EA
extern unsigned char AutoMapColumnG;

// address: 0x8012E3EB
extern unsigned char AutoMapColumnB;

// address: 0x8012E3EC
extern unsigned char AutoMapArchR;

// address: 0x8012E3ED
extern unsigned char AutoMapArchG;

// address: 0x8012E3EE
extern unsigned char AutoMapArchB;

// address: 0x8012E3EF
extern unsigned char AutoMapStairR;

// address: 0x8012E3F0
extern unsigned char AutoMapStairG;

// address: 0x8012E3F1
extern unsigned char AutoMapStairB;

// address: 0x8011F660
// size: 0x18
static int SetLevelName[6];

// address: 0x8012EAA8
extern unsigned long GazTick;

// address: 0x80135560
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A89D4
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x8012EAD0
extern void (*PollFunc)();

// address: 0x8012EAB4
extern void (*MsgFunc)();

// address: 0x8012EB00
extern void (*ErrorFunc)();

// address: 0x8012E9D4
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x8012E9D8
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x8012E9DC
// size: 0x5C
static struct TASK *T;

// address: 0x8012E9E0
static unsigned long MemTypeForTasker;

// address: 0x80132D90
// size: 0x30
static int SchEnv[12];

// address: 0x8012E9E4
static unsigned long ExecId;

// address: 0x8012E9E8
static unsigned long ExecMask;

// address: 0x8012E9EC
static int TasksActive;

// address: 0x8012E9F0
static void (*EpiFunc)();

// address: 0x8012E9F4
static void (*ProFunc)();

// address: 0x8012E9F8
static unsigned long EpiProId;

// address: 0x8012E9FC
static unsigned long EpiProMask;

// address: 0x8012EA00
static void (*DoTasksPrologue)();

// address: 0x8012EA04
static void (*DoTasksEpilogue)();

// address: 0x8012EA08
static void (*StackFloodCallback)();

// address: 0x8012EA0C
static unsigned char ExtraStackProtection;

// address: 0x8012EA10
static int ExtraStackSizeLongs;

// address: 0x8012EABC
extern void *LastPtr;

// address: 0x800A8A0C
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8012EA14
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x80132DC0
// size: 0x1180
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x8012EA18
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x8012EA1C
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x8012EA20
static int TimeStamp;

// address: 0x8012EA24
static unsigned char FullErrorChecking;

// address: 0x8012EA28
static unsigned long LastAttemptedAlloc;

// address: 0x8012EA2C
static unsigned long LastDeallocedBlock;

// address: 0x8012EA30
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x8012EA34
static int NumOfFreeHdrs;

// address: 0x8012EA38
static unsigned long LastTypeAlloced;

// address: 0x8012EA3C
static void (*AllocFilter)();

// address: 0x800A8A14
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A8A3C
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80133F40
// size: 0x1380
static char buf[4992];

// address: 0x800A8A64
// size: 0x7
static char NULL_REP[7];

// address: 0x8007B9C0
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B9DC
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007B9E8
void Remove96__Fv() {
}


// address: 0x8007BA20
void AppMain() {
}


// address: 0x8007BAC0
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007BAEC
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007BBD4
void MAIN_MainLoop__Fv() {
}


// address: 0x8007BC1C
void CheckMaxArgs__Fv() {
}


// address: 0x8007BC50
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007BC5C
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


// address: 0x8007BDD0
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BE84
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007BF24
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BFC0
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007C060
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


// address: 0x8007C17C
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007C258
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007C380
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007C38C
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007C3C8
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007C5DC
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007C5E8
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007C624
unsigned char ClearedYet__Fv() {
}


// address: 0x8007C630
void PrimDrawSycnCallBack() {
}


// address: 0x8007C650
void SendDispEnv__Fv() {
}


// address: 0x8007C674
// size: 0x18
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007C68C
// size: 0x28
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007C6A4
// size: 0x34
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007C6BC
// size: 0x24
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007C6D4
// size: 0x14
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007C6EC
// size: 0xC
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007C704
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007C818
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007C880
void VID_AfterDisplay__Fv() {
}


// address: 0x8007C8A0
void VID_ScrOn__Fv() {
}


// address: 0x8007C8C8
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007C920
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007C92C
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007C938
void VID_DispEnvSend() {
}


// address: 0x8007C974
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007C984
int VID_GetXOff__Fv() {
}


// address: 0x8007C990
int VID_GetYOff__Fv() {
}


// address: 0x8007C99C
void VID_SetDBuffer__Fb(bool DBuf) {
	{
		{
		}
	}
}


// address: 0x8007CB0C
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007CB14
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007CB34
int GetTpY__FUs_addr_8007CB34(unsigned short tpage) {
}


// address: 0x8007CB50
int GetTpX__FUs_addr_8007CB50(unsigned short tpage) {
}


// address: 0x8007CB5C
// size: 0x14
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007CB68
// size: 0x14
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007CB74
void SortOutFileSystem__Fv() {
}


// address: 0x8007CCB0
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007CCD0
void Spanker__Fv() {
}


// address: 0x8007CD10
void GaryLiddon__Fv() {
}


// address: 0x8007CD18
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


// address: 0x8007CE74
void DummyPoll__Fv() {
}


// address: 0x8007CE7C
void DaveOwens__Fv() {
}


// address: 0x8007CEA4
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007CECC
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8007CED8
int GetTpY__FUs_addr_8007CED8(unsigned short tpage) {
}


// address: 0x8007CEF4
int GetTpX__FUs_addr_8007CEF4(unsigned short tpage) {
}


// address: 0x8007CF00
void TimSwann__Fv() {
}


// address: 0x8007CF08
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007CF58
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007CFAC
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007D114
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007D178
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007D198
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007D278
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007D33C
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007D3A0
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007D47C
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


// address: 0x8007D590
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007D638
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007D690
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007D6E8
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007D6FC
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007D738
// size: 0x14
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007D7A0
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007D7F8
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007D83C
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D900
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007D9B8
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DA8C
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


// address: 0x8007DC9C
// size: 0x4
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007DCB4
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007DCE0
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007DD5C
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007DDC8
// size: 0x14
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007DE04
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007DE5C
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007DE9C
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DF5C
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007E010
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007E0B8
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


// address: 0x8007E2C4
// size: 0x6C
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007E304
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007E34C
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


// address: 0x8007E540
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012E6C8
	static int TpX;
	// address: 0x8012E6CC
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


// address: 0x8007E610
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007E6C8
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007E724
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007E794
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


// address: 0x8007E8C0
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


// address: 0x8007E9C0
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


// address: 0x8007EDCC
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


// address: 0x8007F038
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


// address: 0x8007F198
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


// address: 0x8007F298
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


// address: 0x8007F4F0
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


// address: 0x8007F574
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


// address: 0x8007F73C
// size: 0x28
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007F890
// size: 0x34
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007F9E4
// size: 0x28
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007FAC8
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007FC20
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


// address: 0x8007FD60
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x8007FE5C
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007FE88
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007FFD0
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


// address: 0x800800F0
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x80080144
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


// address: 0x80080208
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8008025C
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x800802B4
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


// address: 0x800803D8
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


// address: 0x800804B0
// size: 0x4
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x80080500
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x80080528
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x800805D0
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


// address: 0x80080690
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x800806D4
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


// address: 0x80080764
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x800807D4
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


// address: 0x80080840
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080890
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800808B8
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


// address: 0x80080954
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x800809BC
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


// address: 0x80080A90
// size: 0x78
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x80080AC4
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


// address: 0x80080D64
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x80080D88
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80081068
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x800810E4
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


// address: 0x80081240
void _GLOBAL__D_DatPool() {
}


// address: 0x80081298
void _GLOBAL__I_DatPool() {
}


// address: 0x800812EC
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x80081368
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x800813E4
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80081460
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x80081488
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x800814B0
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x800814BC
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x800814C8
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80081540
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x80081554
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80081560
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x80081574
// size: 0x8
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x80081590
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x800815AC
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800815B8
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800815E0
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80081608
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x8008161C
// size: 0x14
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x80081660
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x800816B8
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x800816DC
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80081760
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80081784
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80081864
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x80081874
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


// address: 0x800819C0
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


// address: 0x80081C9C
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


// address: 0x80081DFC
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x80081EE8
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


// address: 0x80082014
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


// address: 0x80082188
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


// address: 0x800822B0
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


// address: 0x80082590
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


// address: 0x80082690
// size: 0x14
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


// address: 0x8008285C
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80082880
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x800828B4
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x8008299C
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x800829A8
void BL_WaitForAsyncFinish__Fv() {
}


// address: 0x800829F4
void BL_AsyncLoadCallBack__Fi(int handle) {
}


// address: 0x80082A24
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


// address: 0x80082B9C
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80082C64
// size: 0x14
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80082C90
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80082CC8
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


// address: 0x80082D9C
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x80082EC0
void Tfree__FPv(void *Addr) {
}


// address: 0x80082F70
void InitTmalloc__Fv() {
}


// address: 0x80082F98
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80082FEC
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80083038
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


// address: 0x8008312C
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80083158
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


// address: 0x800833D8
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


// address: 0x800836F0
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


// address: 0x80083810
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


// address: 0x80083914
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80083924
bool PA_GetPauseOk__Fv() {
}


// address: 0x80083930
void MY_PausePrint__17CTempPauseMessageiPciP4RECT(struct CTempPauseMessage *this, int s, char *Txt, int Menu, struct RECT *PRect) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80083A7C
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083A84
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083BA0
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80083BA8
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083BB0
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083CCC
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80083CD4
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083CDC
void ShowInActive__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// register: 16
	// size: 0x6C
	register struct CPad *P;
}


// address: 0x80083DBC
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083F0C
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083F14
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80083F3C
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80083F64
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80083F8C
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083FD0
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80084004
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80084018
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80084038
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80084040
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80084048
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80084070
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x800840CC
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x800840F4
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x8008411C
unsigned char CheckActive__4CPad_addr_8008411C(struct CPad *this) {
}


// address: 0x80084128
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x80084240
void PAD_Handler__Fv() {
	// register: 20
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 16
	register unsigned char fin;
}


// address: 0x80084408
// size: 0x6C
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x800844A4
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x800845DC
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80084738
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x8008485C
void _GLOBAL__I_Pad0() {
}


// address: 0x80084894
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x8008489C
unsigned char CheckActive__4CPad_addr_8008489C(struct CPad *this) {
}


// address: 0x800848A8
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x800848B0
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x800848B8
// size: 0x6C
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x800848EC
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80084910
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


// address: 0x800849AC
void InitPrinty__Fv() {
}


// address: 0x80084A4C
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80084A54
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80084BEC
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


// address: 0x80085218
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x800852CC
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80085330
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8008533C
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80085360
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80085380
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80085398
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x800853F0
void Init__5CFont(struct CFont *this) {
}


// address: 0x80085424
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80085424(struct TextDat *this, int FrNum) {
}


// address: 0x80085440
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80085478
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


// address: 0x80085DF8
// size: 0x24
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80085F30
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


// address: 0x800861D4
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


// address: 0x8008630C
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80086590
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


// address: 0x80087750
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


// address: 0x80087968
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80087968(struct TextDat *this, int PalNum) {
}


// address: 0x80087984
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80087984(struct TextDat *this, int FrNum) {
}


// address: 0x800879A0
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80087AF0
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80087BBC
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x80087BFC
void CycleSelCols__Fv() {
}


// address: 0x80087DB4
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


// address: 0x80087E28
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80087E7C
// size: 0xE0
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x80087FD0
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088008
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x800880D0
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80088158
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x800881C0
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80088228
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x80088284
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x800882D4
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80088620
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x800886CC
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x800887A0
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


// address: 0x800888A8
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


// address: 0x800889E8
// size: 0xC
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x80088A60
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088A88
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x80088AB0
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80088AC8
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


// address: 0x80089FB8
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


// address: 0x8008A128
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


// address: 0x8008AF2C
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
														// register: 19
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
														// register: 5
														register int GameType;
														// register: 20
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


// address: 0x8008B680
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


// address: 0x8008B7F0
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B804
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B818
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B8DC
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 4
	register int XDiff;
	// register: 7
	register int YDiff;
	// register: 6
	register int divnum;
}


// address: 0x8008B960
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008BA00
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008BAD4
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008BB54
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008BB5C
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008BB70
// size: 0xE0
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008BB7C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008BB7C(struct POLY_FT4 **Prim) {
}


// address: 0x8008BBF8
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008BC40
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008BC7C
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008BCC4
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008BCC4(struct POLY_GT4 **Prim) {
}


// address: 0x8008BD40
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x8008BDBC
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


// address: 0x8008BDE4
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008BE00
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008BE28
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008BE50
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BE74
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BE98
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BEC0
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008BECC
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008BF64
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8008BFF4
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008C02C
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008C02C(struct TextDat *this, int Creature) {
}


// address: 0x8008C0A4
int GetNumOfCreatures__7TextDat_addr_8008C0A4(struct TextDat *this) {
}


// address: 0x8008C0B8
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008C0B8(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008C0C4
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008C0C4(struct TextDat *this, int PalNum) {
}


// address: 0x8008C0E0
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008C0E0(struct TextDat *this, int FrNum) {
}


// address: 0x8008C0FC
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008C128
void OVR_LoadPregame__Fv() {
}


// address: 0x8008C150
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008C178
void OVR_LoadGame__Fv() {
}


// address: 0x8008C1A0
void OVR_LoadFmv__Fv() {
}


// address: 0x8008C1C8
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008C1F4
void ClearOutOverlays__Fv() {
}


// address: 0x8008C24C
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008C310
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008C380
// size: 0x4
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x8008C38C
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x8008C3E0
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008C550
// size: 0x4
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x8008C55C
void StevesDummyPoll__Fv() {
}


// address: 0x8008C564
void Lambo__Fv() {
}


// address: 0x8008C56C
// size: 0x84
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008C650
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008C6A8
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008C704
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


// address: 0x8008C850
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


// address: 0x8008CC7C
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008CCFC
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


// address: 0x8008D1D4
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008D250
// size: 0x4
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008D2CC
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008D2D4
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008D2DC
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008D2DC(struct POLY_FT4 **Prim) {
}


// address: 0x8008D358
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008D358(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008D394
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008D394(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008D3BC
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008D3D0
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008D3E8
int GetNumOfFrames__7TextDatii_addr_8008D3E8(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008D420
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008D444
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008D444(struct TextDat *this, int Creature) {
}


// address: 0x8008D4BC
int GetNumOfCreatures__7TextDat_addr_8008D4BC(struct TextDat *this) {
}


// address: 0x8008D4D0
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008D4D0(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008D4DC
void PROF_Open__Fv() {
}


// address: 0x8008D51C
bool PROF_State__Fv() {
}


// address: 0x8008D528
void PROF_On__Fv() {
}


// address: 0x8008D538
void PROF_Off__Fv() {
}


// address: 0x8008D544
void PROF_CpuEnd__Fv() {
}


// address: 0x8008D574
void PROF_CpuStart__Fv() {
}


// address: 0x8008D598
void PROF_DrawStart__Fv() {
}


// address: 0x8008D5BC
void PROF_DrawEnd__Fv() {
}


// address: 0x8008D5EC
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


// address: 0x8008D7E0
void PROF_Restart__Fv() {
}


// address: 0x8008D800
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008D8C0
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008D970
void GoBackLevel__Fv() {
}


// address: 0x8008D9E8
void GoWarpLevel__Fv() {
}


// address: 0x8008DA20
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DABC
void GoLoadGame__Fv() {
}


// address: 0x8008DB18
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DBB4
void GoNewLevel__Fv() {
}


// address: 0x8008DC08
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DCA0
void GoForwardLevel__Fv() {
}


// address: 0x8008DCF8
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008DD90
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DDE0
void PostNewGame__Fv() {
}


// address: 0x8008DE18
void LevelToLevelInit__Fv() {
}


// address: 0x8008DE60
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008DEA4
// size: 0x10
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008DEFC
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


// address: 0x8008E37C
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


// address: 0x8008E800
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


// address: 0x8008E9A0
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008E9EC
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008EDA8
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008EE9C
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008EFA0
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008EFA0(struct TextDat *this, int PalNum) {
}


// address: 0x8008EFBC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008EFBC(struct TextDat *this, int FrNum) {
}


// address: 0x8008EFD8
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat *CDGfxData;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8008F090
void InitCDWaitIcon__Fv() {
}


// address: 0x8008F0C4
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008F0D8
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008F120
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


// address: 0x8008F174
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


// address: 0x8008F294
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


// address: 0x8008F3CC
// size: 0x80
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008F508
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F560
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008F66C
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F6BC
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F70C
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F790
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008F89C
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008FA48
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008FB10
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008FCEC
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


// address: 0x8008FFEC
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


// address: 0x80090420
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


// address: 0x80090528
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


// address: 0x800905B4
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


// address: 0x800906C0
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8009072C
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x800907A4
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012E734
	static int DestAddr;
}


// address: 0x8009081C
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x80090950
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800909A4
void SND_StopSnd__Fi(int voice) {
}


// address: 0x800909C8
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80090A04
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090A78
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


// address: 0x80090C34
void AS_CallBack0__Fi(int handle) {
}


// address: 0x80090C48
void AS_CallBack1__Fi(int handle) {
}


// address: 0x80090C5C
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80090D38
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x80090DD8
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80090DE4
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x80090E10
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x80090F30
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x80090F64
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x80090FF4
// size: 0x18
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x800910D0
// size: 0x18
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80091150
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x800911F0
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80091284
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


// address: 0x800912F8
void SCR_Handler__Fv() {
}


// address: 0x80091320
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x80091328
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80091364
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x800913C8
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80091420
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80091478
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8009148C
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x800914B8
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x800914C0
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x800914C8
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x800914D4
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8009150C
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80091518
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80091538
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80091584
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8009158C
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x800915C0
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x80091648
void SetAmbientLight__Fv() {
}


// address: 0x800916CC
void print_demo_task__FP4TASK(struct TASK *T) {
	{
		{
			// register: 3
			register int x;
		}
	}
}


// address: 0x800918D8
void TonysDummyPoll__Fv() {
}


// address: 0x800918FC
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009195C
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800919BC
void set_pad_record_play__Fi(int level) {
}


// address: 0x80091A30
void start_demo__Fv() {
}


// address: 0x80091ACC
void SetQuest__Fv() {
}


// address: 0x80091AF4
int CurrCheatStr__Fv() {
}


// address: 0x80091B14
void tony__Fv() {
}


// address: 0x80091B4C
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x80091B58
int GLUE_GetMonsterList__Fv() {
}


// address: 0x80091B64
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091BB8
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091C0C
void GLUE_PreTown__Fv() {
}


// address: 0x80091C70
void GLUE_PreDun__Fv() {
}


// address: 0x80091CBC
bool GLUE_Finished__Fv() {
}


// address: 0x80091CC8
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80091CD4
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x80091D58
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091D68
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091D78
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091D88
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x80091E60
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


// address: 0x800923C0
// size: 0xC
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80092458
// size: 0xC
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x800924B4
// size: 0xC
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x800924E4
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf *Inf;
}


// address: 0x80092544
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x800925C4
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80092670
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x8009267C
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x80092684
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80092698
void SetDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80092770
void RestoreDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 3
		register int i;
	}
}


// address: 0x80092800
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80092878
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x800928B0
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


// address: 0x80092914
bool RemoveCtrlScreen__Fv() {
}


// address: 0x8009297C
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x80092A34
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80092A74
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80092AB4
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


// address: 0x80092C08
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x80092C50
bool only_one_button__Fi(int p) {
	// register: 3
	register int hand;
	// register: 5
	register int count;
}


// address: 0x80092C7C
unsigned char main_ctrl_setup__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	register int lv;
}


// address: 0x8009312C
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


// address: 0x80093628
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


// address: 0x80093AE4
void _GLOBAL__D_ctrlflag() {
}


// address: 0x80093B0C
void _GLOBAL__I_ctrlflag() {
}


// address: 0x80093B34
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x80093B5C
unsigned short GetDown__C4CPad_addr_80093B5C(struct CPad *this) {
}


// address: 0x80093B84
unsigned short GetUp__C4CPad_addr_80093B84(struct CPad *this) {
}


// address: 0x80093BAC
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x80093BB4
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x80093BBC
void SetRGB__6DialogUcUcUc_addr_80093BBC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80093BDC
void SetBorder__6Dialogi_addr_80093BDC(struct Dialog *this, int Type) {
}


// address: 0x80093BE4
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80093BF0
void ___6Dialog_addr_80093BF0(struct Dialog *this, int __in_chrg) {
}


// address: 0x80093C18
// size: 0x10
struct Dialog *__6Dialog_addr_80093C18(struct Dialog *this) {
}


// address: 0x80093C74
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80093CC0
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x80093E14
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


// address: 0x80093F58
void ReInitDFL__Fv() {
	// register: 5
	register int *yp;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80093F90
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


// address: 0x80094334
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80094388
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


// address: 0x800945EC
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x800947C4
void nightgfx__FibiP8POLY_GT4i(int BlockBase, bool water, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80094850
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80094850(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8009488C
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8009488C(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x800948B4
void PRIM_GetPrim__FPP8POLY_FT4_addr_800948B4(struct POLY_FT4 **Prim) {
}


// address: 0x80094930
int GetNumOfActions__7TextDati_addr_80094930(struct TextDat *this, int Creature) {
}


// address: 0x80094954
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80094954(struct TextDat *this, int Creature) {
}


// address: 0x800949CC
int GetNumOfCreatures__7TextDat_addr_800949CC(struct TextDat *this) {
}


// address: 0x800949E0
void DaveLDummyPoll__Fv() {
}


// address: 0x800949E8
void DaveL__Fv() {
}


// address: 0x80094A10
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
	// address: 0x8012D380
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


// address: 0x80094CFC
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


// address: 0x80094FFC
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x800950D4
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


// address: 0x80095164
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


// address: 0x80095354
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


// address: 0x80095488
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


// address: 0x80095658
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80095808
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x800958FC
void doparticlejump__Fv() {
}


// address: 0x8009593C
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80095AA4
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


// address: 0x80095EA0
void ParticleBlob__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80095F38
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80095FF8
void Teleportfx__Fiiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart, int OtPos) {
	// register: 30
	// size: 0x6C
	register struct TextDat *Dat;
	// address: 0xFFFFFF70
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 22
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 18
	register unsigned char SpB;
	// register: 17
	register int w;
	// register: 16
	register int h;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// address: 0xFFFFFF98
	auto int f;
	// address: 0xFFFFFFA0
	auto int n;
	// register: 18
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


// address: 0x800962EC
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x80096514
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x800965B0
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x800966D4
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


// address: 0x80096810
void HealStart__Fi(int plr) {
}


// address: 0x80096844
void HealotherStart__Fi(int plr) {
}


// address: 0x8009687C
void TeleStart__Fi(int plr) {
}


// address: 0x800968D8
void PhaseStart__Fi(int plr) {
}


// address: 0x8009690C
void PhaseEnd__Fi(int plr) {
}


// address: 0x80096938
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


// address: 0x80096B14
void ApocaStart__Fi(int plr) {
}


// address: 0x80096B6C
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80096C08
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x80096C84
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80096D00
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096D00(struct POLY_FT4 **Prim) {
}


// address: 0x80096D7C
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80096DCC
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80096DD8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80096DD8(struct TextDat *this, int FrNum) {
}


// address: 0x80096DF4
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


// address: 0x80096FF8
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


// address: 0x80097490
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x80097504
void select_belt_item__Fi(int pnum) {
}


// address: 0x8009750C
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80097574
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800976A4
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x800977DC
void pad_func_up__Fi(int pnum) {
}


// address: 0x80097808
void pad_func_down__Fi(int pnum) {
}


// address: 0x80097834
void pad_func_left__Fi(int pnum) {
}


// address: 0x8009783C
void pad_func_right__Fi(int pnum) {
}


// address: 0x80097844
void pad_func_select__Fi(int pnum) {
}


// address: 0x80097900
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80097D8C
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


// address: 0x800980D8
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


// address: 0x800981E0
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x80098270
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


// address: 0x80098670
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80098730
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80098838
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80098930
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x80098A1C
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80098AA0
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80098B38
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80098BF4
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80098C70
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


// address: 0x80098E38
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80098E60
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80098E88
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


// address: 0x80098FC8
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x800990D4
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


// address: 0x80099954
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


// address: 0x80099A30
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80099B3C
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80099EFC
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


// address: 0x8009A1D4
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8009A3F8
void _GLOBAL__D_gplayer() {
}


// address: 0x8009A420
void _GLOBAL__I_gplayer() {
}


// address: 0x8009A448
void SetRGB__6DialogUcUcUc_addr_8009A448(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009A468
void SetBack__6Dialogi_addr_8009A468(struct Dialog *this, int Type) {
}


// address: 0x8009A470
void SetBorder__6Dialogi_addr_8009A470(struct Dialog *this, int Type) {
}


// address: 0x8009A478
void ___6Dialog_addr_8009A478(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009A4A0
// size: 0x10
struct Dialog *__6Dialog_addr_8009A4A0(struct Dialog *this) {
}


// address: 0x8009A4FC
unsigned short GetTick__C4CPad_addr_8009A4FC(struct CPad *this) {
}


// address: 0x8009A524
unsigned short GetDown__C4CPad_addr_8009A524(struct CPad *this) {
}


// address: 0x8009A54C
unsigned short GetCur__C4CPad_addr_8009A54C(struct CPad *this) {
}


// address: 0x8009A574
void SetPadTickMask__4CPadUs_addr_8009A574(struct CPad *this, unsigned short mask) {
}


// address: 0x8009A57C
void SetPadTick__4CPadUs_addr_8009A57C(struct CPad *this, unsigned short tick) {
}


// address: 0x8009A584
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009A600
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009A658
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8009A6B4
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009A6EC
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009A724
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009A784
bool IsGameLoading__Fv() {
}


// address: 0x8009A790
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


// address: 0x8009AC04
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x8009ACC4
void TakeDownCutScreen__Fv() {
}


// address: 0x8009AD50
void FinishProgress__Fv() {
}


// address: 0x8009ADB4
void PRIM_GetPrim__FPP7POLY_G4_addr_8009ADB4(struct POLY_G4 **Prim) {
}


// address: 0x8009AE30
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009AE68
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x8009AEA0
void SetRGB__6DialogUcUcUc_addr_8009AEA0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009AEC0
void SetBack__6Dialogi_addr_8009AEC0(struct Dialog *this, int Type) {
}


// address: 0x8009AEC8
void SetBorder__6Dialogi_addr_8009AEC8(struct Dialog *this, int Type) {
}


// address: 0x8009AED0
void ___6Dialog_addr_8009AED0(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009AEF8
// size: 0x10
struct Dialog *__6Dialog_addr_8009AEF8(struct Dialog *this) {
}


// address: 0x8009AF54
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8009AF74
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}


// address: 0x8009B1AC
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009B1B4
void init_card__Fib(int card_number, bool read_dir) {
}


// address: 0x8009B274
int ping_card__Fi(int card_number) {
}


// address: 0x8009B308
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009B340
void MemcardON__Fv() {
}


// address: 0x8009B3B0
void MemcardOFF__Fv() {
}


// address: 0x8009B400
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
}


// address: 0x8009B488
void card_removed__Fi(int card_number) {
}


// address: 0x8009B4B0
int read_card_block__Fii(int card_number, int block) {
}


// address: 0x8009B4F8
int test_hw_event__Fv() {
}


// address: 0x8009B578
void PrintSelectBack__FbT0(bool S, bool B) {
	// register: 17
	register int len;
}


// address: 0x8009B6F8
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009B7DC
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


// address: 0x8009BCD0
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


// address: 0x8009C960
int who_pressed__Fi(int pval) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad1;
}


// address: 0x8009C9E8
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


// address: 0x8009CFEC
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
		}
	}
}


// address: 0x8009D664
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


// address: 0x8009DE80
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


// address: 0x8009E2D8
void CalcVolumes__Fv() {
}


// address: 0x8009E410
void SetLoadedVolumes__Fv() {
}


// address: 0x8009E498
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


// address: 0x8009E534
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009E6DC
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


// address: 0x8009E960
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 19
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


// address: 0x8009F234
void ToggleOptions__Fv() {
}


// address: 0x8009F2EC
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


// address: 0x8009F61C
void ActivateMemcard__Fv() {
}


// address: 0x8009F6A0
void PRIM_GetPrim__FPP7POLY_G4_addr_8009F6A0(struct POLY_G4 **Prim) {
}


// address: 0x8009F71C
unsigned short GetTick__C4CPad_addr_8009F71C(struct CPad *this) {
}


// address: 0x8009F744
unsigned short GetDown__C4CPad_addr_8009F744(struct CPad *this) {
}


// address: 0x8009F76C
unsigned short GetUp__C4CPad_addr_8009F76C(struct CPad *this) {
}


// address: 0x8009F794
void SetPadTickMask__4CPadUs_addr_8009F794(struct CPad *this, unsigned short mask) {
}


// address: 0x8009F79C
void SetPadTick__4CPadUs_addr_8009F79C(struct CPad *this, unsigned short tick) {
}


// address: 0x8009F7A4
void Flush__4CPad_addr_8009F7A4(struct CPad *this) {
}


// address: 0x8009F7C8
void SetRGB__6DialogUcUcUc_addr_8009F7C8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009F7E8
void SetBack__6Dialogi_addr_8009F7E8(struct Dialog *this, int Type) {
}


// address: 0x8009F7F0
void SetBorder__6Dialogi_addr_8009F7F0(struct Dialog *this, int Type) {
}


// address: 0x8009F7F8
void ___6Dialog_addr_8009F7F8(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009F820
// size: 0x10
struct Dialog *__6Dialog_addr_8009F820(struct Dialog *this) {
}


// address: 0x8009F87C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009F87C(struct TextDat *this, int FrNum) {
}


// address: 0x8009F898
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009F8F0
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x8009FA34
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009FAB0
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


// address: 0x8009FC3C
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009FC90
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009FDF8
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FEFC
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FF68
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009FFEC
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A0098
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


// address: 0x800A01A8
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A0254
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


// address: 0x800A02F8
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


// address: 0x800A05A4
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A05FC
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800A0668
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x800A0754
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


// address: 0x800A0884
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x800A095C
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x800A0AB4
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x800A0B50
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x800A0C80
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x800A0D8C
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


// address: 0x800A0F98
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0F98(struct POLY_FT4 **Prim) {
}


// address: 0x800A1014
short PlayFMV__FPcii(char *str, int w, int h) {
	// register: 16
	register short RetVal;
	// register: 19
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x800A10E8
void play_movie(char *pszMovie) {
	{
		{
			{
			}
		}
	}
}


// address: 0x800A11A4
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


// address: 0x800A1640
unsigned short GetDown__C4CPad_addr_800A1640(struct CPad *this) {
}


// address: 0x800A1668
int GetNumOfFrames__7TextDatii_addr_800A1668(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A16A0
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_800A16A0(struct TextDat *this, int Creature) {
}


// address: 0x800A1718
int GetNumOfCreatures__7TextDat_addr_800A1718(struct TextDat *this) {
}


// address: 0x800A172C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800A172C(struct TextDat *this, int FrNum) {
}


// address: 0x800A1748
void LoadKanjiFont__FPc(char *name) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A1838
void LoadKanjiIndex__FPc(char *name) {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A1948
void FreeKanji__Fv() {
}


// address: 0x800A19D0
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto char tmp[40];
	// register: 16
	register char *bname;
}


// address: 0x800A1AA4
unsigned short *getb__FUs(unsigned short n) {
	// register: 4
	// size: 0x4
	register struct kindexS *ii;
	// register: 3
	register int i;
	// register: 16
	register int off;
}


// address: 0x800A1B14
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


// address: 0x800A1BE4
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


// address: 0x800A1D50
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A1D50(struct POLY_FT4 **Prim) {
}


// address: 0x800A1DCC
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


// address: 0x800A1EB4
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


// address: 0x800A20F4
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


// address: 0x800A2194
void fputc__5blockUc(struct block *this, unsigned char Val) {
}


// address: 0x800A21BC
void HelpPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x800A22C4
void InitHelp__Fv() {
}


// address: 0x800A2308
int GetControlKey__FiPb(int str, bool *iscombo) {
	// register: 6
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 7
		register int i;
	}
}


// address: 0x800A23B0
void CheckStr__FPcT0i(char *s, char *d, int pos) {
	// register: 20
	register char c;
	// register: 18
	register int l;
}


// address: 0x800A2484
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


// address: 0x800A2848
void DrawHelp__Fv() {
}


// address: 0x800A28E4
void _GLOBAL__D_DrawHelp__Fv() {
}


// address: 0x800A290C
void _GLOBAL__I_DrawHelp__Fv() {
}


// address: 0x800A2934
void SetRGB__6DialogUcUcUc_addr_800A2934(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800A2954
void SetBorder__6Dialogi_addr_800A2954(struct Dialog *this, int Type) {
}


// address: 0x800A295C
void ___6Dialog_addr_800A295C(struct Dialog *this, int __in_chrg) {
}


// address: 0x800A2984
// size: 0x10
struct Dialog *__6Dialog_addr_800A2984(struct Dialog *this) {
}


// address: 0x800A29E0
int GetCharWidth__5CFontc_addr_800A29E0(struct CFont *this, char ch) {
}


// address: 0x800A2A38
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800A2A38(struct TextDat *this, int FrNum) {
}


// address: 0x800A2A54
unsigned short GetTick__C4CPad_addr_800A2A54(struct CPad *this) {
}


// address: 0x800A2A7C
unsigned short GetDown__C4CPad_addr_800A2A7C(struct CPad *this) {
}


// address: 0x800A2AA4
void SetPadTickMask__4CPadUs_addr_800A2AA4(struct CPad *this, unsigned short mask) {
}


// address: 0x800A2AAC
void SetPadTick__4CPadUs_addr_800A2AAC(struct CPad *this, unsigned short tick) {
}


// address: 0x8002E8B0
unsigned char TrimCol__Fs_addr_8002E8B0(short col) {
}


// address: 0x8002E8E8
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


// address: 0x8002F408
void SetSpellTrans__Fc(char t) {
}


// address: 0x8002F414
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8002F4B0
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


// address: 0x8002F554
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8002F608
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


// address: 0x800301CC
void SetSpell__Fi(int pnum) {
}


// address: 0x800302A0
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80030350
void ClearPanel__Fv() {
}


// address: 0x80030380
void InitPanelStr__Fv() {
}


// address: 0x800303A0
void InitControlPan__Fv() {
	// register: 3
	register int i;
}


// address: 0x800305C0
void DrawCtrlPan__Fv() {
}


// address: 0x800305EC
void DoAutoMap__Fv() {
}


// address: 0x80030660
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


// address: 0x80030D80
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


// address: 0x80030E90
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


// address: 0x80030FAC
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


// address: 0x80031268
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


// address: 0x8003191C
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


// address: 0x80031E6C
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80031F14
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


// address: 0x8003207C
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x80032158
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


// address: 0x80032250
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


// address: 0x80033528
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


// address: 0x80033984
void DrawChrTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
}


// address: 0x80033A68
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80033AFC
void CheckChrBtns__Fv() {
	// register: 16
	register int pc;
}


// address: 0x80033E68
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80033EEC
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80033FD4
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x8003406C
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80034284
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


// address: 0x80034C60
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


// address: 0x80034E94
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80034EC8
void _GLOBAL__D_DrawLevelUpFlag() {
}


// address: 0x80034EF0
void _GLOBAL__I_DrawLevelUpFlag() {
}


// address: 0x80034F2C
unsigned short GetTick__C4CPad_addr_80034F2C(struct CPad *this) {
}


// address: 0x80034F54
unsigned short GetDown__C4CPad_addr_80034F54(struct CPad *this) {
}


// address: 0x80034F7C
void SetPadTickMask__4CPadUs_addr_80034F7C(struct CPad *this, unsigned short mask) {
}


// address: 0x80034F84
void SetPadTick__4CPadUs_addr_80034F84(struct CPad *this, unsigned short tick) {
}


// address: 0x80034F8C
void SetRGB__6DialogUcUcUc_addr_80034F8C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80034FAC
void SetBack__6Dialogi_addr_80034FAC(struct Dialog *this, int Type) {
}


// address: 0x80034FB4
void SetBorder__6Dialogi_addr_80034FB4(struct Dialog *this, int Type) {
}


// address: 0x80034FBC
void ___6Dialog_addr_80034FBC(struct Dialog *this, int __in_chrg) {
}


// address: 0x80034FE4
// size: 0x10
struct Dialog *__6Dialog_addr_80034FE4(struct Dialog *this) {
}


// address: 0x80035040
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80035040(struct TextDat *this, int PalNum) {
}


// address: 0x8003505C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8003505C(struct TextDat *this, int FrNum) {
}


// address: 0x80035078
void InitCursor__Fv() {
}


// address: 0x80035080
void FreeCursor__Fv() {
}


// address: 0x80035088
void SetICursor__Fi(int i) {
}


// address: 0x800350E4
void SetCursor__Fi(int i) {
}


// address: 0x80035148
void NewCursor__Fi(int i) {
}


// address: 0x80035168
void InitLevelCursor__Fv() {
}


// address: 0x800351C8
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


// address: 0x80035454
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


// address: 0x800356B4
void CheckCursMove__Fv() {
}


// address: 0x800356BC
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


// address: 0x800358B8
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x80035900
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035950
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800359AC
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035A20
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035AE4
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035CCC
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035E3C
unsigned char TryIconCurs__Fv() {
}


// address: 0x80036218
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036220
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800362D0
void LoadLvlGFX__Fv() {
}


// address: 0x8003636C
void LoadAllGFX__Fv() {
}


// address: 0x8003638C
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036484
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x8003660C
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


// address: 0x800366E8
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


// address: 0x80037044
void game_logic__Fv() {
}


// address: 0x80037150
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x800371F8
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80037230
void alloc_plr__Fv() {
}


// address: 0x80037238
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80037240
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037260
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037280
void app_fatal(char *pszFile) {
}


// address: 0x800372B0
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800372D8
void DoMemCardFromInGame__Fv() {
}


// address: 0x80037300
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037354
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037374
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x800373BC
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003751C
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x800375D4
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037700
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037834
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037964
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A94
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037BC4
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CFC
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E2C
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F5C
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003808C
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


// address: 0x80038350
void InitTowners__Fv() {
}


// address: 0x800383DC
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


// address: 0x80038480
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x800385B0
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800385E4
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038618
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80038700
void TownHealer__Fv() {
}


// address: 0x80038728
void TownStory__Fv() {
}


// address: 0x80038750
void TownDrunk__Fv() {
}


// address: 0x80038778
void TownBoy__Fv() {
}


// address: 0x800387A0
void TownWitch__Fv() {
}


// address: 0x800387C8
void TownBarMaid__Fv() {
}


// address: 0x800387F0
void TownCow__Fv() {
}


// address: 0x80038818
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


// address: 0x80038A68
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038B3C
void CowSFX__Fi(int pnum) {
	// address: 0x80123684
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012D9F8
	static int snLastCowSFX;
}


// address: 0x80038C58
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038C98
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


// address: 0x8003A16C
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003A174
void stream_stop__Fv() {
}


// address: 0x8003A1C8
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003A2B8
void stream_update__Fv() {
}


// address: 0x8003A2C0
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003A2DC
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003A334
void FreeMonsterSnd__Fv() {
}


// address: 0x8003A33C
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A440
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A53C
void PlayEffect__Fii(int i, int mode) {
	// register: 3
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003A680
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A718
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A758
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A7AC
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


// address: 0x8003A844
void sound_update__Fv() {
}


// address: 0x8003A878
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A8BC
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003A964
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003AA08
void SetRndSeed__Fl(long s) {
}


// address: 0x8003AA18
long GetRndSeed__Fv() {
}


// address: 0x8003AA60
long random__Fil(int idx, long v) {
}


// address: 0x8003AACC
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003AB18
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003AB68
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003AB70
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003AB78
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003AB80
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003AC14
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003AC40
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFEE8
	// size: 0x100
	auto char tempstr[256];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x8003AD4C
void interface_msg_pump__Fv() {
}


// address: 0x8003AD54
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


// address: 0x8003B28C
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003B2C4
void InitItemGFX__Fv() {
}


// address: 0x8003B2F0
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003B3B8
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


// address: 0x8003B5D0
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003B7A8
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


// address: 0x8003C258
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003C5D8
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003C674
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


// address: 0x8003C7D4
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003C820
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


// address: 0x8003C900
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003CB94
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003CC58
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003CD70
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CD9C
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


// address: 0x8003CF18
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003CF20
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CF50
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003D38C
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003D664
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


// address: 0x8003D890
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


// address: 0x8003D9F8
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


// address: 0x8003DAC0
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003DB78
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003DDE0
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


// address: 0x8003DFD0
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


// address: 0x8003E284
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003E7D0
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003E808
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003E87C
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8003FFA8
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


// address: 0x80040410
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x8004050C
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80040614
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x80040858
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


// address: 0x80040A98
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80040C0C
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


// address: 0x80040D0C
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


// address: 0x80040EBC
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80041164
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x8004129C
void ItemRndDur__Fi(int ii) {
}


// address: 0x8004132C
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80041638
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x80041880
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x800419B0
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041AF8
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x80041BD0
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x80041C90
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041DD4
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80041FC0
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


// address: 0x80042234
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


// address: 0x800423F4
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x800425AC
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80042600
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x800426C8
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


// address: 0x800428D0
void FreeItemGFX__Fv() {
}


// address: 0x800428D8
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


// address: 0x80042A80
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80042B70
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80042C40
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80042D04
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80042D74
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


// address: 0x80042E74
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80042F68
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80043624
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x8004362C
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800437B8
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043B28
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043E38
void CastScroll__Fii(int pnum, int Spell) {
}


// address: 0x80043E50
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80044468
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x800444FC
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80044578
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80044680
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct holditem;
}


// address: 0x800448A0
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x80044AE4
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80044C34
void SpawnStoreGold__Fv() {
}


// address: 0x80044CB8
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80044E58
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80044EBC
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x8004504C
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x800451C8
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045344
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x800454B8
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 16
	register int PreIdx;
	// register: 3
	register int SufIdx;
}


// address: 0x800456B8
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x80045720
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


// address: 0x8004579C
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x80045808
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


// address: 0x800464B8
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


// address: 0x80046700
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


// address: 0x800467C4
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


// address: 0x80046CD4
void FreeLightTable__Fv() {
}


// address: 0x80046CDC
void InitLightTable__Fv() {
}


// address: 0x80046CE4
void MakeLightTable__Fv() {
}


// address: 0x80046CEC
void InitLightMax__Fv() {
}


// address: 0x80046D10
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80046D54
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046DC0
void AddUnLight__Fi(int i) {
}


// address: 0x80046DF0
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80046E1C
void ChangeLightXY__Fiii(int i, int x, int y) {
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046E58
void light_fix__Fi(int i) {
}


// address: 0x80046E60
void ChangeLightOff__Fiii(int i, int x, int y) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046E94
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046ECC
void ChangeLightColour__Fii(int i, int c) {
	// register: 4
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80046EF4
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


// address: 0x80047018
void SavePreLighting__Fv() {
}


// address: 0x80047020
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80047070
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


// address: 0x800470EC
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x800471A0
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 9
	register int i;
	// register: 8
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x80047220
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
	// register: 18
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x80047420
void FreeQuestText__Fv() {
}


// address: 0x80047428
void InitQuestText__Fv() {
}


// address: 0x80047434
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


// address: 0x80047588
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x80047730
void DrawQTextBack__Fv() {
}


// address: 0x800477A0
void DrawQTextTSK__FP4TASK(struct TASK *T) {
	{
	}
}


// address: 0x800478E0
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


// address: 0x80047C4C
void _GLOBAL__D_QBack() {
}


// address: 0x80047C74
void _GLOBAL__I_QBack() {
}


// address: 0x80047C9C
void SetRGB__6DialogUcUcUc_addr_80047C9C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80047CBC
void SetBorder__6Dialogi_addr_80047CBC(struct Dialog *this, int Type) {
}


// address: 0x80047CC4
void ___6Dialog_addr_80047CC4(struct Dialog *this, int __in_chrg) {
}


// address: 0x80047CEC
// size: 0x10
struct Dialog *__6Dialog_addr_80047CEC(struct Dialog *this) {
}


// address: 0x80047D48
int GetCharWidth__5CFontc_addr_80047D48(struct CFont *this, char ch) {
}


// address: 0x80047DA0
unsigned short GetDown__C4CPad_addr_80047DA0(struct CPad *this) {
}


// address: 0x80047DC8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80047DC8(struct TextDat *this, int FrNum) {
}


// address: 0x80047DE4
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80047DEC
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80047DF4
void delta_init__Fv() {
}


// address: 0x80047E54
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047EF0
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047F74
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x80048004
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


// address: 0x80048330
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80048390
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


// address: 0x80048554
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


// address: 0x800486DC
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x80048700
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x80048724
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


// address: 0x80048938
int DeltaExportData__FPc(char *Dst) {
	// register: 16
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x800489E0
int DeltaImportData__FPc(char *Src) {
	// register: 16
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80048A8C
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80048B88
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x80048BB0
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x80048BFC
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x80048C2C
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80048C64
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80048CA4
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x80048CEC
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x80048D18
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80048D48
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80048D80
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80048DF4
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048F28
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048FA4
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048FFC
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80049064
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x8004916C
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x80049210
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x80049240
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80049354
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x8004935C
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80049390
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x800493EC
void delta_close_portal__Fi(int pnum) {
}


// address: 0x8004942C
void check_update_plr__Fi(int pnum) {
}


// address: 0x80049434
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800494B4
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800494E4
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049514
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049544
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049574
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800495E8
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049670
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x800497B0
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


// address: 0x80049980
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049A08
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049B3C
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


// address: 0x80049D04
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049D50
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80049E68
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80049F68
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049FC0
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A04C
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A134
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A20C
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A2E8
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004A3C8
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004A4A8
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A4F4
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 19
	// size: 0x4
	register struct TCmdParam1 *p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8004A628
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A6F0
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A7B0
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A874
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A938
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A980
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A9B8
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A9E0
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AA68
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AA98
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AB8C
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ABF8
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AC64
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


// address: 0x8004AD7C
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AE68
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AEB0
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B06C
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B0E8
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B164
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B1E0
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B25C
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B2D4
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B2DC
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B2E4
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B2EC
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B344
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B5BC
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


// address: 0x8004B74C
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B79C
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B7E4
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B824
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B864
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B8A4
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B8E4
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B92C
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


// address: 0x8004BA08
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012E884
	static unsigned char sbLastCmd;
}


// address: 0x8004BE28
// size: 0xF1C
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004BEB8
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x8004BEF0
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004BF1C
int InitLevelType__Fi(int l) {
}


// address: 0x8004BF68
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004C0F8
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004C16C
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


// address: 0x8004C3C0
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C4F8
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C644
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004C6CC
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004C70C
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004C7B0
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004C840
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


// address: 0x8004CA5C
void FreeObjectGFX__Fv() {
}


// address: 0x8004CA68
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004CB20
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004CDA4
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004CE04
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004CE2C
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004CF38
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004D044
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


// address: 0x8004D254
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


// address: 0x8004D590
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004D5F4
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


// address: 0x8004D8D0
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004D940
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004DAD4
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004DB20
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004DC44
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004DF14
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


// address: 0x8004E264
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004E4F4
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004E7D0
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004E808
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


// address: 0x8004E8DC
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E8E4
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004E8EC
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004EB6C
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004EC10
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004EFB4
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F38C
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F724
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FABC
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FDC4
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x800500CC
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


// address: 0x800505C8
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050700
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050814
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x800509CC
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80050A78
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050BFC
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80050D58
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


// address: 0x80050F44
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


// address: 0x8005146C
void OperateBookLever__Fii(int pnum, int i) {
	// register: 20
	register int x;
	// register: 19
	register int y;
	// register: 16
	register int tren;
}


// address: 0x800519FC
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x80051C3C
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x8005200C
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x800521D8
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x8005238C
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800525E0
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800527B0
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052968
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052AC4
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052C20
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


// address: 0x80052D28
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


// address: 0x80053240
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


// address: 0x80053404
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80053474
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


// address: 0x80055A44
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055BC0
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055DC4
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055EAC
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x8005601C
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x8005610C
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x800561B4
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80056258
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


// address: 0x80056804
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x800569B0
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80056AA0
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80056C04
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x8005703C
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057150
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057264
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057378
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80057578
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


// address: 0x80057768
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80057CBC
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057E1C
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80057E78
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80057F90
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


// address: 0x800580C8
void SyncLever__Fi(int i) {
}


// address: 0x80058144
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x80058250
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


// address: 0x800583AC
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058514
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058640
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x80058780
void GetObjectStr__Fi(int i) {
}


// address: 0x80058B9C
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


// address: 0x80058DB8
int GetNumOfFrames__7TextDatii_addr_80058DB8(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058DF0
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80058DF0(struct TextDat *this, int Creature) {
}


// address: 0x80058E68
int GetNumOfCreatures__7TextDat_addr_80058E68(struct TextDat *this) {
}


// address: 0x80058E7C
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80058E84
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058EB0
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x80058F64
void SetupLocalPlayer__Fv() {
}


// address: 0x80058F84
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FC8
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FDC
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FFC
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059004
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80059020
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059044
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x80059280
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x8005969C
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80059704
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80059874
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


// address: 0x80059A80
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


// address: 0x80059B04
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


// address: 0x80059EA4
void InitMultiView__Fv() {
}


// address: 0x80059EAC
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFA0
	// size: 0x60
	auto struct bbssbb bodge[12];
	{
		// register: 4
		register int i;
	}
}


// address: 0x80059F44
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059FCC
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005A060
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005A154
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A168
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A1F4
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A258
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800E0EE4
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A294
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A2C0
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x8005A3F8
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A490
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A62C
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


// address: 0x8005A74C
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A86C
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005AA08
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


// address: 0x8005ABD0
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


// address: 0x8005AED8
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B320
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 6
	register int i;
	// register: 5
	register int mx;
	// register: 4
	register int pnum;
}


// address: 0x8005B478
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B498
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


// address: 0x8005B780
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B844
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B988
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BA18
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005BAD4
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BADC
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005BB64
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BED0
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005C070
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


// address: 0x8005C6A0
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


// address: 0x8005CA50
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005CAE0
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


// address: 0x8005CE6C
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CF6C
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D030
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D0D0
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


// address: 0x8005E094
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E3D4
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


// address: 0x8005E4D4
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E550
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E690
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E698
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005EAD8
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005EB40
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


// address: 0x8005F028
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F0C4
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


// address: 0x8005F3F8
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F420
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


// address: 0x8005F5C8
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F5D0
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


// address: 0x8005F9E0
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x8005FB08
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FB38
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FCD4
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FDF0
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FEDC
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FFC0
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8006009C
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x800600E0
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800601BC
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8006022C
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060308
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060374
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006037C
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800606AC
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606D4
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80060718
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8006074C
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060780
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800607B4
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x800607E8
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006081C
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80060854
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060888
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800608B0
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800608D8
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060900
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80060948
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060970
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060998
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800609CC
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800609F4
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80060A38
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80060A6C
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060AA0
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80060AEC
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80060B38
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060B84
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80060BD8
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060C24
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80060C70
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80060CC0
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060D0C
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060D58
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060DA4
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060DF0
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060E3C
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060E88
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060ED8
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060F24
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060F74
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060FC0
void CheckNewPath__Fi(int pnum) {
}


// address: 0x8006100C
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80061058
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x800610A4
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x800610F0
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x8006113C
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80061188
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x800611D4
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80061220
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x8006126C
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x800612B8
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x800612EC
void PRIM_GetPrim__FPP8POLY_FT4_addr_800612EC(struct POLY_FT4 **Prim) {
}


// address: 0x80061368
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri_addr_80061368(int PNum) {
}


// address: 0x800613B8
int GetLastOtPos__C7CPlayer_addr_800613B8(struct CPlayer *this) {
}


// address: 0x800613C4
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800613D0
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800613DC
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


// address: 0x80061628
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


// address: 0x80061ADC
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


// address: 0x80061C80
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061D14
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


// address: 0x800622F4
void SetReturnLvlPos__Fv() {
}


// address: 0x80062404
void GetReturnLvlPos__Fv() {
}


// address: 0x80062458
void ResyncMPQuests__Fv() {
}


// address: 0x80062594
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80062AF4
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


// address: 0x80062D20
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062EE8
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062F80
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80063098
void QuestlogUp__Fv() {
}


// address: 0x800630EC
void QuestlogDown__Fv() {
}


// address: 0x80063158
void RemoveQLog__Fv() {
}


// address: 0x800631D0
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80063294
void QuestlogESC__Fv() {
}


// address: 0x800632BC
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x8006333C
void _GLOBAL__D_questlog() {
}


// address: 0x80063364
void _GLOBAL__I_questlog() {
}


// address: 0x8006338C
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x80063398
void SetRGB__6DialogUcUcUc_addr_80063398(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800633B8
void SetBack__6Dialogi_addr_800633B8(struct Dialog *this, int Type) {
}


// address: 0x800633C0
void SetBorder__6Dialogi_addr_800633C0(struct Dialog *this, int Type) {
}


// address: 0x800633C8
void ___6Dialog_addr_800633C8(struct Dialog *this, int __in_chrg) {
}


// address: 0x800633F0
// size: 0x10
struct Dialog *__6Dialog_addr_800633F0(struct Dialog *this) {
}


// address: 0x8006344C
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8006344C(struct TextDat *this, int PalNum) {
}


// address: 0x80063468
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80063468(struct TextDat *this, int FrNum) {
}


// address: 0x80063484
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006364C
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x80063778
void FreeStoreMem__Fv() {
}


// address: 0x80063780
void DrawSTextBack__Fv() {
}


// address: 0x800637F0
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
	// address: 0x8012DBE8
	static unsigned char DaveFix;
}


// address: 0x80063BE4
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063C78
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063D10
void AddSLine__Fi(int y) {
}


// address: 0x80063D60
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063D88
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063E3C
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x800642C4
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


// address: 0x800648E4
void S_StartSmith__Fv() {
}


// address: 0x80064A6C
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064C24
void S_StartSBuy__Fv() {
}


// address: 0x80064D54
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


// address: 0x80064F74
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x800650C4
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x800651A8
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


// address: 0x800653D0
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065800
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800658A4
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065A84
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065F54
void S_StartWitch__Fv() {
}


// address: 0x80066094
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


// address: 0x8006626C
void S_StartWBuy__Fv() {
}


// address: 0x80066398
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x800664BC
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80066B14
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80066B9C
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066D1C
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006713C
void S_StartNoMoney__Fv() {
}


// address: 0x800671A4
void S_StartNoRoom__Fv() {
}


// address: 0x80067204
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006757C
void S_StartBoy__Fv() {
}


// address: 0x8006770C
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80067894
void S_StartHealer__Fv() {
}


// address: 0x80067A68
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80067BD4
void S_StartHBuy__Fv() {
}


// address: 0x80067CF4
void S_StartStory__Fv() {
}


// address: 0x80067DE4
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067E18
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067EEC
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006894C
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80068B20
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


// address: 0x80068D50
void S_StartTavern__Fv() {
}


// address: 0x80068E48
void S_StartBarMaid__Fv() {
}


// address: 0x80068F1C
void S_StartDrunk__Fv() {
}


// address: 0x80068FF0
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800692D8
void DrawSText__Fv() {
}


// address: 0x80069318
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800693E0
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006958C
void STextESC__Fv() {
}


// address: 0x80069700
void STextUp__Fv() {
}


// address: 0x80069898
void STextDown__Fv() {
}


// address: 0x80069A48
void S_SmithEnter__Fv() {
}


// address: 0x80069B1C
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069B98
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069C14
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8006A060
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006A254
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A478
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A600
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


// address: 0x8006A830
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


// address: 0x8006AAE8
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


// address: 0x8006AD4C
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006B040
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B144
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B3B4
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B510
void S_WitchEnter__Fv() {
}


// address: 0x8006B5C0
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B7C0
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B9AC
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BAB0
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006BC28
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BD84
void S_BoyEnter__Fv() {
}


// address: 0x8006BEBC
void BoyBuyItem__Fv() {
}


// address: 0x8006BF40
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006C1E4
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C3CC
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C718
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C834
void S_HealerEnter__Fv() {
}


// address: 0x8006C8CC
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006CAD8
void S_StoryEnter__Fv() {
}


// address: 0x8006CB70
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006CCEC
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


// address: 0x8006CEE4
void S_TavernEnter__Fv() {
}


// address: 0x8006CF54
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CFC4
void S_DrunkEnter__Fv() {
}


// address: 0x8006D034
void STextEnter__Fv() {
}


// address: 0x8006D1F8
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D2D0
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D2E4
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D30C
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006D334
unsigned short GetDown__C4CPad_addr_8006D334(struct CPad *this) {
}


// address: 0x8006D35C
void SetRGB__6DialogUcUcUc_addr_8006D35C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006D37C
void SetBorder__6Dialogi_addr_8006D37C(struct Dialog *this, int Type) {
}


// address: 0x8006D384
void ___6Dialog_addr_8006D384(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006D3AC
// size: 0x10
struct Dialog *__6Dialog_addr_8006D3AC(struct Dialog *this) {
}


// address: 0x8006D408
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006D5B8
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


// address: 0x8006D7B0
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


// address: 0x8006D8A0
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


// address: 0x8006DC60
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


// address: 0x8006DDC8
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


// address: 0x8006DEAC
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


// address: 0x8006DF44
void InitVPTriggers__Fv() {
}


// address: 0x8006DF8C
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006E2A4
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006E554
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x8006E9B4
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006EE30
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006F33C
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


// address: 0x8006F3FC
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006F4F0
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006F5E4
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006F6D8
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


// address: 0x8006F9E0
void FadeGameOut__Fv() {
}


// address: 0x8006FA7C
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x8006FAE0
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


// address: 0x8006FFFC
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


// address: 0x800702C4
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x80070408
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x800704A8
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80070754
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x80070A08
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80070C6C
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070C74
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x80070CDC
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x80070CFC
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070D5C
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x80070DEC
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070E3C
void music_stop__Fv() {
}


// address: 0x80070E80
void music_fade__Fv() {
}


// address: 0x80070EC0
void music_start__Fi(int nTrack) {
	{
		{
			// register: 2
			register int MusicVolume;
		}
	}
}


// address: 0x80070F44
void music_hold__Fv() {
}


// address: 0x80070FA4
void music_release__Fv() {
}


// address: 0x80070FF4
unsigned char snd_playing__Fi(int SFXNo) {
}


// address: 0x80071014
void ClrCursor__Fi(int num) {
}


// address: 0x80071064
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


// address: 0x80071520
void CloseInvChr__Fv() {
}


// address: 0x80071570
int LeftOf__Fi(int dir) {
}


// address: 0x80071588
int RightOf__Fi(int dir) {
}


// address: 0x800715A4
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80071650
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071714
// size: 0x94
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80071808
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071810
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071854
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071898
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80071AF8
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071CA8
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80071D04
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80071D40
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80071E04
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


// address: 0x80072210
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80072354
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x80072448
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80072560
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x800725B4
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


// address: 0x800729C0
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072CD8
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


// address: 0x800730B8
void show_combos__7GamePad(struct GamePad *this) {
	// register: 22
	register int x;
	// register: 20
	register int y;
	{
		// register: 19
		register int i;
	}
}


// address: 0x80073258
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


// address: 0x80073930
void GamePadTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x800739FC
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 3
	// size: 0x94
	register struct GamePad *GP1;
	// register: 8
	// size: 0x94
	register struct GamePad *GP2;
}


// address: 0x80073B0C
void Init_GamePad__Fv() {
}


// address: 0x80073B3C
void InitGamePadVars__Fv() {
}


// address: 0x80073BCC
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x80073C3C
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad *GPad;
}


// address: 0x80073C60
void _GLOBAL__I_flyflag() {
}


// address: 0x80073C98
void MoveToScrollTarget__7CBlocks_addr_80073C98(struct CBlocks *this) {
}


// address: 0x80073CAC
unsigned short GetDown__C4CPad_addr_80073CAC(struct CPad *this) {
}


// address: 0x80073CD4
unsigned short GetUp__C4CPad_addr_80073CD4(struct CPad *this) {
}


// address: 0x80073CFC
unsigned short GetCur__C4CPad_addr_80073CFC(struct CPad *this) {
}


// address: 0x80073D24
void DoGameTestStuff__Fv() {
}


// address: 0x80073D50
void DoInitGameStuff__Fv() {
}


// address: 0x80073D84
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073DA4
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073DC4
void GRL_InitGwin__Fv() {
}


// address: 0x80073DD0
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x80073DE0
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80073E08
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80073EB4
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x80073EFC
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80073F08
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


// address: 0x80074074
char *GetStr__Fi(int StrId) {
}


// address: 0x800740DC
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x80074110
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


// address: 0x80074274
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800742CC
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800742D8
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x800743A0
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80074420
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


// address: 0x80074858
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x800749D8
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80074B38
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074BD0
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074C80
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074CE4
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074DFC
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074E94
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074F2C
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074F94
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80075034
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


// address: 0x80075114
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


// address: 0x800751EC
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x8007527C
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


// address: 0x80075398
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80075434
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007549C
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075504
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80075668
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x800757AC
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075814
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007586C
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


// address: 0x80075938
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007599C
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800759A4
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


// address: 0x80075ECC
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075F74
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075F7C
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075FB0
void FuncWEAPEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075FD4
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075FD4(struct POLY_FT4 **Prim) {
}


// address: 0x80076050
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri_addr_80076050(int PNum) {
}


// address: 0x800760A0
int GetLastOtPos__C7CPlayer_addr_800760A0(struct CPlayer *this) {
}


// address: 0x800760AC
int GetLastScrY__C7CPlayer_addr_800760AC(struct CPlayer *this) {
}


// address: 0x800760B8
int GetLastScrX__C7CPlayer_addr_800760B8(struct CPlayer *this) {
}


// address: 0x800760C4
int GetNumOfFrames__7TextDat_addr_800760C4(struct TextDat *this) {
}


// address: 0x800760D8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800760D8(struct TextDat *this, int FrNum) {
}


// address: 0x800760F4
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007612C
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x800761AC
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80076244
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x800762F4
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


// address: 0x800764B0
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


// address: 0x80076644
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


// address: 0x800766FC
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


// address: 0x80076990
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80076A68
// size: 0x28
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076AF0
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B1C
// size: 0x28
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B48
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B74
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BA0
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BCC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BF0
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C14
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C40
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C6C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C98
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CC4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076CF0
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D1C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D48
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D74
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DA0
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DCC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DF8
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E24
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E50
// size: 0x28
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E7C
// size: 0x28
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EA8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076ED4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F00
// size: 0x28
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F2C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F58
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F84
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076FB0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076FDC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077008
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077034
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077060
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007708C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800770B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800770E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077110
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007713C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077168
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077194
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80077228
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800772B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80077348
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800773D8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80077468
// size: 0x28
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077494
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800774C0
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800774EC
// size: 0x28
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077518
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077544
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077570
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007759C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775C8
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775F4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077620
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


// address: 0x80077778
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80077844
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80077910
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007793C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077968
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077994
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779C0
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A10
// size: 0x28
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A3C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A68
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A94
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077AC0
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077AEC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B18
// size: 0x28
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B44
// size: 0x28
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B70
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B9C
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077BC8
// size: 0x28
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077BF4
// size: 0x28
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077C20
// size: 0x28
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077C4C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077C78
// size: 0x28
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077CA4
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


// address: 0x80077E38
// size: 0x28
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


// address: 0x80077FC0
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077FE4
// size: 0x28
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078010
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007803C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078068
// size: 0x28
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078094
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800780C0
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800780EC
// size: 0x28
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078118
// size: 0x28
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078144
// size: 0x28
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078170
// size: 0x28
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007819C
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8007819C(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800781D8
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_800781D8(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80078200
void PRIM_GetPrim__FPP8POLY_FT4_addr_80078200(struct POLY_FT4 **Prim) {
}


// address: 0x8007827C
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks_addr_8007827C(struct CBlocks *this) {
}


// address: 0x80078288
int GetNumOfFrames__7TextDatii_addr_80078288(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800782C0
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_800782C0(struct TextDat *this, int Creature) {
}


// address: 0x80078338
int GetNumOfCreatures__7TextDat_addr_80078338(struct TextDat *this) {
}


// address: 0x8007834C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8007834C(struct TextDat *this, int FrNum) {
}


// address: 0x80078368
void gamemenu_on__Fv() {
}


// address: 0x80078370
void gamemenu_off__Fv() {
}


// address: 0x80078378
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80078380
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80078388
void ResetPal__Fv() {
}


// address: 0x80078390
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x800783C0
bool GetFadeState__Fv() {
}


// address: 0x800783CC
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 6
	register unsigned char bright1;
	// register: 3
	register unsigned char bright2;
}


// address: 0x800784E8
void SmearScreen__Fv() {
}


// address: 0x800784F0
void DrawFadedScreen__Fv() {
}


// address: 0x80078544
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80078600
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078690
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x800786E8
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078798
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x800787EC
void M_CheckEFlag__Fi(int i) {
}


// address: 0x8007880C
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


// address: 0x80078978
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x800789B4
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80078A00
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x80078A48
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80078AA8
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


// address: 0x8007901C
void ClearMVars__Fi(int i) {
}


// address: 0x80079090
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x800794DC
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x8007958C
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x800796D0
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x800797C8
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x80079870
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


// address: 0x80079A60
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80079B40
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


// address: 0x80079DBC
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x8007A0C4
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x8007A3C0
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


// address: 0x8007A810
int lAddMissile__Fiiici(int sx, int sy, int midir, char micaster, int id) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
	// register: 18
	register int mi;
}


// address: 0x8007A9E4
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 3
	register int mi;
}


// address: 0x8007AB2C
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8007AC34
void AddInTownPortal__Fi(int i) {
}


// address: 0x8007AC6C
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8007ACDC
void DeactivatePortal__Fi(int i) {
}


// address: 0x8007ACFC
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8007AD34
void DelMis__Fii(int mi, int i) {
}


// address: 0x8007AD94
void RemovePortalMissile__Fi(int id) {
	// register: 17
	register int i;
	// register: 18
	register int mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
}


// address: 0x8007AF10
void SetCurrentPortal__Fi(int p) {
}


// address: 0x8007AF1C
void GetPortalLevel__Fv() {
}


// address: 0x8007B0C0
void GetPortalLvlPos__Fv() {
}


// address: 0x8007B170
// size: 0x108
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x8007B1D8
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x8007B258
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x8007B288
void InitAllMaps__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8007B2D0
// size: 0xF1C
struct DLevel *GetMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x8007B344
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Dl) {
}


// address: 0x8007B3E8
void Init__4AMap(struct AMap *this) {
	{
		{
		}
	}
}


// address: 0x8007B450
// size: 0xF1C
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


// address: 0x8007B570
void ReleaseMap__4AMapP6DLevel(struct AMap *this, struct DLevel *Dl) {
}


// address: 0x8007B600
void CheckMapNum__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x8007B634
void ___4AMap(struct AMap *this, int __in_chrg) {
}


// address: 0x8007B67C
// size: 0xC
struct AMap *__4AMap(struct AMap *this) {
}


// address: 0x8007B6B0
void GO_DoGameOver__Fv() {
}


// address: 0x8007B6F4
void GameOverTask__FP4TASK(struct TASK *T) {
	// register: 17
	register bool OldPause;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8007B7B0
void PrintGameOver__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct Dialog PBack;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x8007B890
void SetRGB__6DialogUcUcUc_addr_8007B890(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8007B8B0
void SetBack__6Dialogi_addr_8007B8B0(struct Dialog *this, int Type) {
}


// address: 0x8007B8B8
void SetBorder__6Dialogi_addr_8007B8B8(struct Dialog *this, int Type) {
}


// address: 0x8007B8C0
void ___6Dialog_addr_8007B8C0(struct Dialog *this, int __in_chrg) {
}


// address: 0x8007B8E8
// size: 0x10
struct Dialog *__6Dialog_addr_8007B8E8(struct Dialog *this) {
}


// address: 0x8007B944
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x8007B988
char *VER_GetVerString__Fv() {
}


// address: 0x8007B998
int CharPair2Num__FPc(char *Str) {
}


// address: 0x8001E6A8
void TICK_InitModule();

// address: 0x8001E6C8
void TICK_Set(unsigned long Val);

// address: 0x8001E6D8
unsigned long TICK_Get();

// address: 0x8001E6E8
void TICK_Update();

// address: 0x8001E708
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001E734
char *TICK_GetDateString();

// address: 0x8001E744
char *TICK_GetTimeString();

// address: 0x8001E754
unsigned char GU_InitModule();

// address: 0x8001E780
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E7B0
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E840
long GU_GetSRnd();

// address: 0x8001E860
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E89C
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001E8C0
void main();

// address: 0x8001E910
unsigned char DBG_OpenModule();

// address: 0x8001E918
void DBG_PollHost();

// address: 0x8001E920
void DBG_Halt();

// address: 0x8001E928
void DBG_SendMessage(char *e);

// address: 0x8001E940
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E950
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E97C
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E98C
void SendPsyqString(char *e);

// address: 0x8001E994
void DBG_SetPollRoutine(void (*Func)());

// address: 0x8001E9A4
unsigned long GTIMSYS_GetTimer();

// address: 0x8001E9C8
void GTIMSYS_ResetTimer();

// address: 0x8001E9EC
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8001EC20
void DoEpi(struct TASK *T);

// address: 0x8001EC70
void DoPro(struct TASK *T);

// address: 0x8001ECC0
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x8001ED34
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


// address: 0x8001EF1C
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F0DC
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x8001F1B8
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8001F240
void TSK_Die();

// address: 0x8001F26C
void TSK_Kill(struct TASK *T);

// address: 0x8001F2BC
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x8001F2CC
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8001F348
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8001F390
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8001F3D4
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x8001F3E4
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x8001F3FC
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x8001F454
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F46C
void TSK_ClearExecFilter();

// address: 0x8001F490
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


// address: 0x8001F590
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


// address: 0x8001F608
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x8001F61C
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8001F630
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8001F644
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8001F658
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x8001F66C
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8001F680
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6CC
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6EC
void LoTskKill(struct TASK *T) {
}


// address: 0x8001F75C
void ExecuteTask(struct TASK *T);

// address: 0x8001F7AC
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7C4
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7DC
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7F4
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F80C
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F824
void TSK_ClearEpiProFilter();

// address: 0x8001F858
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8001F868
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x8001F880
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x8001F8A8
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8001F8D4
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x8001F910
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F920
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001F95C
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F96C
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F984
unsigned char GSYS_InitMachine();

// address: 0x8001F9D8
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001FA0C
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FA88
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001FA98
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


// address: 0x8001FBCC
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FC84
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


// address: 0x8001FDA4
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


// address: 0x8001FF3C
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FF9C
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020018
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x800200B8
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


// address: 0x8002012C
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


// address: 0x800201A0
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


// address: 0x8002021C
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x8002023C
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80020288
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x800202B8
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x800202E8
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80020318
// size: 0x20
struct MEM_HDR *FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
}


// address: 0x80020370
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


// address: 0x800203D8
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


// address: 0x80020440
// size: 0x28
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x8002047C
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


// address: 0x80020550
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x8002062C
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x800207C4
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


// address: 0x80020830
// size: 0x20
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x800208B8
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x800208F8
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


// address: 0x8002097C
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


// address: 0x80020A18
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020A80
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020AD4
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020B28
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020BAC
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020C08
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


// address: 0x80020D04
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020DB0
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020E08
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020E38
// size: 0x4
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020E48
char *GAL_GetLastErrorText();

// address: 0x80020E70
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


// address: 0x80020ED8
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


// address: 0x80020F40
void GAL_SetTimeStamp(int Time);

// address: 0x80020F50
void GAL_IncTimeStamp();

// address: 0x80020F70
int GAL_GetTimeStamp();

// address: 0x80020F80
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80020FD0
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80021020
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x800210CC
long GAL_GetSize(long hnd) {
}


// address: 0x80021120
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


// address: 0x80021288
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


// address: 0x8002132C
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80021360
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x800213CC
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


// address: 0x800214C4
// size: 0x20
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x80021500
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
}


// address: 0x80021590
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


// address: 0x8002160C
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


// address: 0x800216C0
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


// address: 0x8002171C
void GAL_MemDump(unsigned long Type);

// address: 0x80021790
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x800217A0
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x800217CC
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x80021814
int GAL_GetNumFreeHeaders();

// address: 0x80021824
unsigned long GAL_GetLastTypeAlloced();

// address: 0x80021834
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x8002184C
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x800218A0
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x800218B0
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


// address: 0x80023C6C
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80023CB8
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
	// address: 0x80023E0C
	bool rflag;
	// address: 0x80024174
	bool nosign;
	// address: 0x80024220
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


