#include "types.h"

// address: 0x80129784
extern int NumOfMonsterListLevels;

// address: 0x800A7A14
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x80129468
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x8012946C
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x80129470
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x80129478
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x8012947C
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x80129480
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x80129484
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x80129488
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x8012948C
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x80129490
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x80129494
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x80129498
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x8012949C
// size: 0x4
static unsigned char NumsLEV3M3QA[4];

// address: 0x801294A0
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x801294A4
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x801294A8
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x801294AC
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x801294B0
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x801294B4
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x801294BC
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x801294C4
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x801294C8
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x801294CC
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x801294D0
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x801294D4
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x801294D8
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x801294DC
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x801294E0
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x801294E8
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x801294EC
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x801294F0
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x801294F4
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x801294F8
// size: 0x3
static unsigned char NumsLEV6M6QA[3];

// address: 0x801294FC
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x80129500
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x80129504
// size: 0x4
static unsigned char NumsLEV7M7C[4];

// address: 0x80129508
// size: 0x3
static unsigned char NumsLEV7M7D[3];

// address: 0x8012950C
// size: 0x3
static unsigned char NumsLEV7M7E[3];

// address: 0x80129510
// size: 0x2
static unsigned char NumsLEV8M8A[2];

// address: 0x80129514
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x80129518
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8012951C
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x80129520
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x80129524
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x80129528
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x8012952C
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x80129530
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x80129534
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x80129538
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x8012953C
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x80129540
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x80129544
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x80129548
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x8012954C
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x80129550
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x80129554
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x80129558
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x8012955C
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x80129560
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x80129564
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x80129568
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x8012956C
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x80129570
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x80129574
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x80129578
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x8012957C
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x80129580
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x80129584
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x80129588
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x8012958C
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x80129590
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x80129594
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x80129598
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x8012959C
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x801295A0
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x801295A4
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x801295A8
// size: 0x2
static unsigned char NumsLEV15M15QA[2];

// address: 0x801295AC
// size: 0x3
static unsigned char NumsLEV16M16D[3];

// address: 0x800A7534
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A7564
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A75C4
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A7604
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A7674
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A76E4
// size: 0x60
static struct MonstList ChoiceListLEV6[6];

// address: 0x800A7744
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A7794
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A77F4
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A7834
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800A7884
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A78D4
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A7914
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A7964
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A79C4
// size: 0x40
static struct MonstList ChoiceListLEV15[4];

// address: 0x800A7A04
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x8012B024
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800A7A94
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x80129794
extern int ArgsSoFar;

// address: 0x801297A4
extern unsigned long *ThisOt;

// address: 0x801297A8
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x8012B028
static long hndPrimBuffers;

// address: 0x8012B02C
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x8012B030
static unsigned char BufferDepth;

// address: 0x8012B031
static unsigned char WorkRamId;

// address: 0x8012B032
static unsigned char ScrNum;

// address: 0x8012B034
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x8012B038
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x8012B03C
static unsigned char BufferNum;

// address: 0x801297AC
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x8012B03D
static unsigned char LastBuffer;

// address: 0x8012B040
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x8012B044
static int ThisOtSize;

// address: 0x801297B0
// size: 0x8
static struct RECT ScrRect;

// address: 0x8012B048
static int VidWait;

// address: 0x8012B4C0
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8012B04C
static void (*VbFunc)();

// address: 0x8012B050
static unsigned long VidTick;

// address: 0x8012B054
static int VXOff;

// address: 0x8012B058
static int VYOff;

// address: 0x801297C4
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x801297C8
extern int LastFmem;

// address: 0x801297B8
extern unsigned int GSYS_MemStart;

// address: 0x801297BC
extern unsigned int GSYS_MemEnd;

// address: 0x800A7DDC
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A7E04
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x801297C0
extern int LowestFmem;

// address: 0x801297D8
extern int FileSYS;

// address: 0x8012B05C
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x8012B060
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x801297F2
extern short DavesPad;

// address: 0x801297F4
extern short DavesPadDeb;

// address: 0x800A7E2C
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x8012B5A0
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A86D0
// size: 0x5C4
extern struct TextDat *AllDats[369];

// address: 0x80129844
extern int TpW;

// address: 0x80129848
extern int TpH;

// address: 0x8012984C
extern int TpXDest;

// address: 0x80129850
extern int TpYDest;

// address: 0x80129854
// size: 0x8
extern struct RECT R;

// address: 0x800A8C94
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800A8CC8
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A7E60
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x80129868
static bool ChunkGot;

// address: 0x800A8CF0
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800A8D00
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A8D10
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x8012987C
extern unsigned long BL_NoLumpFiles;

// address: 0x80129880
extern unsigned long BL_NoStreamFiles;

// address: 0x80129884
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x80129888
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x8012988C
extern unsigned char FileLoaded;

// address: 0x801298B0
extern int NoTAllocs;

// address: 0x800A8E3C
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x8012B06C
static bool CanPause;

// address: 0x8012B070
static bool Paused;

// address: 0x8012B074
static char InActivePad;

// address: 0x8012B5C8
// size: 0x10
static struct Dialog PBack;

// address: 0x800A90A4
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800A90C8
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800A90EC
// size: 0x384
extern unsigned char demo_buffer[900];

// address: 0x801298CC
extern int demo_pad_time;

// address: 0x801298D0
extern int demo_pad_count;

// address: 0x800A8FCC
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800A9038
// size: 0x6C
extern struct CPad Pad1;

// address: 0x801298D4
extern unsigned long demo_finish;

// address: 0x801298D8
extern int cac_pad;

// address: 0x801298F8
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x801298FC
extern int CharFrm;

// address: 0x801298E5
extern unsigned char WHITER;

// address: 0x801298E6
extern unsigned char WHITEG;

// address: 0x801298E7
extern unsigned char WHITEB;

// address: 0x801298E8
extern unsigned char BLUER;

// address: 0x801298E9
extern unsigned char BLUEG;

// address: 0x801298EA
extern unsigned char BLUEB;

// address: 0x801298EB
extern unsigned char REDR;

// address: 0x801298EC
extern unsigned char REDG;

// address: 0x801298ED
extern unsigned char REDB;

// address: 0x801298EE
extern unsigned char GOLDR;

// address: 0x801298EF
extern unsigned char GOLDG;

// address: 0x801298F0
extern unsigned char GOLDB;

// address: 0x800A9470
// size: 0x21C
extern struct CFont MediumFont;

// address: 0x800A968C
// size: 0x21C
extern struct CFont LargeFont;

// address: 0x801298F4
extern bool buttoncol;

// address: 0x800A98A8
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800A995C
// size: 0x10
extern struct FontTab LFont;

// address: 0x800A996C
// size: 0x136
extern struct FontItem MFontTab[155];

// address: 0x800A9AA4
// size: 0x10
extern struct FontTab MFont;

// address: 0x80129911
extern unsigned char DialogRed;

// address: 0x80129912
extern unsigned char DialogGreen;

// address: 0x80129913
extern unsigned char DialogBlue;

// address: 0x80129914
extern unsigned char DialogTRed;

// address: 0x80129915
extern unsigned char DialogTGreen;

// address: 0x80129916
extern unsigned char DialogTBlue;

// address: 0x80129918
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x8012991C
extern int DialogBackGfx;

// address: 0x80129920
extern int DialogBackW;

// address: 0x80129924
extern int DialogBackH;

// address: 0x80129928
extern int DialogBorderGfx;

// address: 0x8012992C
extern int DialogBorderTLW;

// address: 0x80129930
extern int DialogBorderTLH;

// address: 0x80129934
extern int DialogBorderTRW;

// address: 0x80129938
extern int DialogBorderTRH;

// address: 0x8012993C
extern int DialogBorderBLW;

// address: 0x80129940
extern int DialogBorderBLH;

// address: 0x80129944
extern int DialogBorderBRW;

// address: 0x80129948
extern int DialogBorderBRH;

// address: 0x8012994C
extern int DialogBorderTW;

// address: 0x80129950
extern int DialogBorderTH;

// address: 0x80129954
extern int DialogBorderBW;

// address: 0x80129958
extern int DialogBorderBH;

// address: 0x8012995C
extern int DialogBorderLW;

// address: 0x80129960
extern int DialogBorderLH;

// address: 0x80129964
extern int DialogBorderRW;

// address: 0x80129968
extern int DialogBorderRH;

// address: 0x8012996C
extern int DialogBevelGfx;

// address: 0x80129970
extern int DialogBevelCW;

// address: 0x80129974
extern int DialogBevelCH;

// address: 0x80129978
extern int DialogBevelLRW;

// address: 0x8012997C
extern int DialogBevelLRH;

// address: 0x80129980
extern int DialogBevelUDW;

// address: 0x80129984
extern int DialogBevelUDH;

// address: 0x80129988
extern int MY_DialogOTpos;

// address: 0x8012B078
static unsigned char DialogGBack;

// address: 0x8012B079
static char GShadeX;

// address: 0x8012B07A
static char GShadeY;

// address: 0x8012B080
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800A9AF4
// size: 0x70
extern int Cxy[28];

// address: 0x8012990B
extern unsigned char BORDERR;

// address: 0x8012990C
extern unsigned char BORDERG;

// address: 0x8012990D
extern unsigned char BORDERB;

// address: 0x8012990E
extern unsigned char BACKR;

// address: 0x8012990F
extern unsigned char BACKG;

// address: 0x80129910
extern unsigned char BACKB;

// address: 0x800A9AB4
// size: 0x40
static char GShadeTab[64];

// address: 0x80129909
static char GShadePX;

// address: 0x8012990A
static char GShadePY;

// address: 0x80129995
extern unsigned char PlayDemoFlag;

// address: 0x8012B5D8
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x8012B608
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x8012B088
static int blockr;

// address: 0x8012B08C
static int blockg;

// address: 0x8012B090
static int blockb;

// address: 0x8012B094
static int InfraFlag;

// address: 0x8012B098
static unsigned char blank_bit;

// address: 0x801299A9
extern unsigned char P1ObjSelCount;

// address: 0x801299AA
extern unsigned char P2ObjSelCount;

// address: 0x801299AB
extern unsigned char P12ObjSelCount;

// address: 0x801299AC
extern unsigned char P1ItemSelCount;

// address: 0x801299AD
extern unsigned char P2ItemSelCount;

// address: 0x801299AE
extern unsigned char P12ItemSelCount;

// address: 0x801299AF
extern unsigned char P1MonstSelCount;

// address: 0x801299B0
extern unsigned char P2MonstSelCount;

// address: 0x801299B1
extern unsigned char P12MonstSelCount;

// address: 0x801299B2
static unsigned short P1ObjSelCol;

// address: 0x801299B4
static unsigned short P2ObjSelCol;

// address: 0x801299B6
static unsigned short P12ObjSelCol;

// address: 0x801299B8
static unsigned short P1ItemSelCol;

// address: 0x801299BA
static unsigned short P2ItemSelCol;

// address: 0x801299BC
static unsigned short P12ItemSelCol;

// address: 0x801299BE
static unsigned short P1MonstSelCol;

// address: 0x801299C0
static unsigned short P2MonstSelCol;

// address: 0x801299C2
static unsigned short P12MonstSelCol;

// address: 0x801299C4
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x800A9B64
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x801299E0
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x8011F0C0
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x8012B638
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x8012B648
// size: 0x10
static struct Overlay PregameOver;

// address: 0x8012B658
// size: 0x10
static struct Overlay GameOver;

// address: 0x8012B668
// size: 0x10
static struct Overlay FmvOver;

// address: 0x8012B09C
static int OWorldX;

// address: 0x8012B0A0
static int OWorldY;

// address: 0x8012B0A4
static int WWorldX;

// address: 0x8012B0A8
static int WWorldY;

// address: 0x8011F13C
// size: 0x20
static short TxyAdd[16];

// address: 0x80129A04
extern int GXAdj2;

// address: 0x8012B0AC
static int TimePerFrame;

// address: 0x8012B0B0
static int CpuStart;

// address: 0x8012B0B4
static int CpuTime;

// address: 0x8012B0B8
static int DrawTime;

// address: 0x8012B0BC
static int DrawStart;

// address: 0x8012B0C0
static int LastCpuTime;

// address: 0x8012B0C4
static int LastDrawTime;

// address: 0x8012B0C8
static int DrawArea;

// address: 0x80129A0C
extern bool ProfOn;

// address: 0x800A9B78
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x8011F298
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x80129A28
static int CutScreen;

// address: 0x800A9B8C
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800A9BE0
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800A9C34
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800A9C88
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800A9CDC
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x80129A38
extern int hof;

// address: 0x80129A3C
extern int mof;

// address: 0x800A9DA4
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x800A9EA4
// size: 0x12000
extern unsigned long STR_Buffer[18432];

// address: 0x80129A70
extern unsigned long Time;

// address: 0x80129A74
extern bool CDWAIT;

// address: 0x800BBEA4
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x800BBEE4
// size: 0x80
extern struct SFXHDR STRSave;

// address: 0x8012B0CC
static bool SavePause;

// address: 0x80129A49
extern char NoActiveStreams;

// address: 0x80129A4C
static bool STRInit;

// address: 0x80129A50
static int frame_rate;

// address: 0x80129A54
static unsigned char CDAngle;

// address: 0x80129A98
extern char SFXNotPlayed;

// address: 0x80129A99
extern char SFXNotInBank;

// address: 0x8012B678
// size: 0x108
static char spu_management[264];

// address: 0x8012B788
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x8012B0D4
static unsigned short NoSfx;

// address: 0x8012B7A8
// size: 0x30
static unsigned short CHStatus[24];

// address: 0x80129A84
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x80129A88
static long OffsetHandle;

// address: 0x80129A8C
static int BankBase;

// address: 0x80129A90
static unsigned char SPU_Done;

// address: 0x8011F698
// size: 0x78
static unsigned short SFXRemapTab[60];

// address: 0x80129A94
static int NoSNDRemaps;

// address: 0x800BBF64
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x8011F744
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x80129ADC
extern int demo_level;

// address: 0x8012B7D8
// size: 0x20
static int buff[8];

// address: 0x80129AE0
extern int old_val;

// address: 0x80129AE4
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x80129AE8
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x80129AEC
// size: 0x5C
extern struct TASK *tonys;

// address: 0x80129AC4
extern int demo_load;

// address: 0x80129AC8
extern int demo_record_load;

// address: 0x80129ACC
extern int level_record;

// address: 0x80129AD0
extern char demo_fade_finished;

// address: 0x80129AD3
extern unsigned char demo_which;

// address: 0x800BC190
// size: 0x14
extern unsigned long demolevel[5];

// address: 0x80129AD1
extern unsigned char quest_cheat_num;

// address: 0x80129AD2
extern unsigned char cheat_quest_flag;

// address: 0x80129AC0
extern int moo_moo;

// address: 0x800BC150
// size: 0x40
extern unsigned long quest_seed[16];

// address: 0x80129AD4
extern unsigned char demo_flash;

// address: 0x80129AD8
extern int tonys_Task;

// address: 0x80129C48
extern bool DoShowPanel;

// address: 0x80129C4C
extern bool DoDrawBg;

// address: 0x8012B0D8
static bool GlueFinished;

// address: 0x8012B0DC
static bool DoHomingScroll;

// address: 0x8012B0E0
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x8012B0E4
static int CurrentMonsterList;

// address: 0x80129AF9
extern char started_grtask;

// address: 0x800BC1A4
// size: 0x3CC
extern struct PInf PlayerInfo[81];

// address: 0x80129C50
// size: 0x4
static char ArmourChar[4];

// address: 0x8011F838
// size: 0xA
static char WepChar[10];

// address: 0x80129C54
// size: 0x4
static char CharChar[4];

// address: 0x8012B0E8
static char ctrl_select_line;

// address: 0x8012B0E9
static char ctrl_select_side;

// address: 0x8012B0EA
static char ckeyheld;

// address: 0x8012B0F0
// size: 0x8
static struct RECT CtrlRect;

// address: 0x80129C68
extern unsigned char ctrlflag;

// address: 0x800BC618
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800BC570
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x80129C64
static int toppos;

// address: 0x8012B7F8
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800BC748
// size: 0x98
static int controller_defaults[2][19];

// address: 0x80129CD4
extern int gr_scrxoff;

// address: 0x80129CD8
extern int gr_scryoff;

// address: 0x80129CE0
extern unsigned short water_clut;

// address: 0x80129CE3
extern char visible_level;

// address: 0x80129CD1
extern char last_type;

// address: 0x80129CE5
extern char daylight;

// address: 0x80129CE2
extern char cow_in_sight;

// address: 0x80129CDC
extern unsigned int water_count;

// address: 0x80129CE4
extern unsigned char lastrnd;

// address: 0x80129CE8
static int call_clock;

// address: 0x80129CF8
extern int TitleAnimCount;

// address: 0x80129CFC
static int flametick;

// address: 0x800BC7E0
// size: 0x18
static int ypos[6];

// address: 0x800BC7F8
// size: 0x18
static int frmlist[6];

// address: 0x800BC810
// size: 0x18
static int xoff[6];

// address: 0x80129D00
static int startx;

// address: 0x80129D04
extern bool jaffflag;

// address: 0x800BC848
// size: 0x90
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x8012B808
// size: 0x240
static struct Particle PartArray[16];

// address: 0x8012B0F8
static int partOtPos;

// address: 0x80129D24
extern int SetParticle;

// address: 0x80129D28
static int p1partexecnum;

// address: 0x80129D2C
static int p2partexecnum;

// address: 0x800BC828
// size: 0x20
static int JumpArray[8];

// address: 0x80129D30
static int partjumpflag;

// address: 0x80129D34
static int partglowflag;

// address: 0x80129D38
static int partcolour;

// address: 0x80129D3C
static bool anyfuckingmenus;

// address: 0x800BC8D8
// size: 0x30
extern struct Spell_Target SplTarget[2];

// address: 0x80129D5D
extern unsigned char select_flag;

// address: 0x8012B0FC
// size: 0x8
static struct RECT SelectRect;

// address: 0x8012B104
static char item_select;

// address: 0x80129D60
// size: 0x2
extern char QSpell[2];

// address: 0x80129D64
// size: 0x2
extern char _spltotype[2];

// address: 0x80129D68
// size: 0x8
extern bool force_attack[2];

// address: 0x80129D50
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x8012BA48
// size: 0x10
static struct Dialog SelectBack;

// address: 0x80129D54
// size: 0x4
extern char mana_order[4];

// address: 0x80129D58
// size: 0x4
extern char health_order[4];

// address: 0x80129D5C
extern unsigned char birdcheck;

// address: 0x8012BA58
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x8012B108
static unsigned short progress;

// address: 0x8011F9C8
// size: 0x16
static unsigned short Level2CutScreen[11];

// address: 0x8012BA80
// size: 0x78
static struct CScreen Scr;

// address: 0x80129D88
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x80129D8C
static bool GameLoading;

// address: 0x8012BB00
// size: 0x10
static struct Dialog LBack;

// address: 0x800BC908
// size: 0x80
extern unsigned char block_buf[128];

// address: 0x80129DA8
extern unsigned int card_ev0;

// address: 0x80129DAC
extern unsigned int card_ev1;

// address: 0x80129DB0
extern unsigned int card_ev2;

// address: 0x80129DB4
extern unsigned int card_ev3;

// address: 0x80129DB8
extern unsigned int card_ev10;

// address: 0x80129DBC
extern unsigned int card_ev11;

// address: 0x80129DC0
extern unsigned int card_ev12;

// address: 0x80129DC4
extern unsigned int card_ev13;

// address: 0x80129DC8
// size: 0x8
extern int card_dirty[2];

// address: 0x80129DD0
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8012B10C
static int card_event;

// address: 0x80129DA4
extern void (*mem_card_event_handler)();

// address: 0x80129D9C
extern bool MemCardActive;

// address: 0x80129DA0
static int never_hooked_events;

// address: 0x80129E2C
extern unsigned long MasterVol;

// address: 0x80129E30
extern unsigned long MusicVol;

// address: 0x80129E34
extern unsigned long SoundVol;

// address: 0x80129E38
extern unsigned long VideoVol;

// address: 0x80129E3C
extern unsigned long SpeechVol;

// address: 0x8012B110
// size: 0x6C
static struct TextDat *Slider;

// address: 0x8012B114
static int sw;

// address: 0x8012B118
static int sx;

// address: 0x8012B11C
static int sy;

// address: 0x8012B120
static unsigned char Adjust;

// address: 0x8012B121
static unsigned char qspin;

// address: 0x8012B122
static unsigned char lqspin;

// address: 0x8012B124
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x8012B128
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8012B12C
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x80129E40
extern int save_blocks;

// address: 0x80129E44
extern char *Savefilename;

// address: 0x80129E48
extern int ReturnMenu;

// address: 0x8012B130
// size: 0x8
static struct RECT ORect;

// address: 0x8012B138
// size: 0x8
static char *McState[2];

// address: 0x80129E4C
extern int they_pressed;

// address: 0x8012B140
// size: 0x8
static unsigned char Seed[8];

// address: 0x80129E00
extern bool optionsflag;

// address: 0x80129DF4
extern int cmenu;

// address: 0x80129E0C
extern int options_pad;

// address: 0x80129DFC
extern bool allspellsflag;

// address: 0x800BD490
// size: 0x80
extern short Circle[64];

// address: 0x80129DE0
extern bool goldcheat;

// address: 0x80129E10
extern int OptionsSeed;

// address: 0x80129E14
extern bool OptionsSetSeed;

// address: 0x80129DE4
extern unsigned char Qfromoptions;

// address: 0x80129DE8
static int Spacing;

// address: 0x80129DEC
static int cs;

// address: 0x80129DF0
static int lastcs;

// address: 0x80129DF8
static bool MemcardOverlay;

// address: 0x80129E04
extern int saveflag;

// address: 0x80129E08
extern int loadflag;

// address: 0x80129E18
extern bool PadFrig;

// address: 0x800BC988
// size: 0xD8
extern struct OMENUITEM MainMenu[9];

// address: 0x800BCA60
// size: 0x108
extern struct OMENUITEM GameMenu[11];

// address: 0x800BCB68
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800BCBF8
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800BCCA0
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800BCD48
// size: 0x60
extern struct OMENUITEM QuitMenu[4];

// address: 0x800BCDA8
// size: 0x60
extern struct OMENUITEM AreYouSureMenu[4];

// address: 0x800BCE08
// size: 0xA8
extern struct OMENUITEM MemcardMenu[7];

// address: 0x800BCEB0
// size: 0x60
extern struct OMENUITEM MemcardLoadGameMenu[4];

// address: 0x800BCF10
// size: 0x60
extern struct OMENUITEM MemcardSaveGameMenu[4];

// address: 0x800BCF70
// size: 0x60
extern struct OMENUITEM MemcardSaveOptionsMenu[4];

// address: 0x800BCFD0
// size: 0x60
extern struct OMENUITEM MemcardLoadOptionsMenu[4];

// address: 0x800BD030
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800BD090
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800BD138
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800BD1E0
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800BD240
// size: 0xF0
extern struct OMENUITEM CheatMenu[10];

// address: 0x800BD330
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800BD360
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x800BD3A8
// size: 0x48
extern struct OMENUITEM SeedMenu[3];

// address: 0x800BD3F0
// size: 0xA0
extern struct OMENULIST MenuList[20];

// address: 0x80129E1C
static bool debounce;

// address: 0x80129E20
static unsigned char KeyPos;

// address: 0x800BD510
// size: 0x14
static unsigned short KeyTab[10];

// address: 0x80129E24
static int SeedPos;

// address: 0x800BD524
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x8012B148
// size: 0x8
static int last_seenx[2];

// address: 0x8012B150
// size: 0x8
static int last_seeny[2];

// address: 0x80129E59
extern char hop_height;

// address: 0x80129E5C
// size: 0x8
static struct Perch perches[4];

// address: 0x800BD6A4
// size: 0x40
extern struct FMVDAT FmvTab[8];

// address: 0x80129E70
static int CurMons;

// address: 0x80129E74
static int Frame;

// address: 0x80129E78
static int Action;

// address: 0x80129E7C
static int Dir;

// address: 0x80129EE0
extern int indsize;

// address: 0x80129EC0
static unsigned char *kanjbuff;

// address: 0x80129EC4
// size: 0x4
static struct kindexS *kindex;

// address: 0x80129EC8
static long hndKanjBuff;

// address: 0x80129ECC
static long hndKanjIndex;

// address: 0x8012B158
// size: 0x8
static struct RECT HelpRect;

// address: 0x8012B160
static unsigned char HelpTop;

// address: 0x8012BB10
// size: 0x10
static struct Dialog HelpBack;

// address: 0x80129EF0
static bool helpflag;

// address: 0x800BD6E4
// size: 0x108
static struct HelpStruct HelpList[33];

// address: 0x80129F44
extern int FeBackX;

// address: 0x80129F48
extern int FeBackY;

// address: 0x80129F4C
extern int FeBackW;

// address: 0x80129F50
extern int FeBackH;

// address: 0x80129F54
extern unsigned char FeFlag;

// address: 0x800BDCEC
// size: 0x780
extern struct FeStruct FeBuffer[80];

// address: 0x80129F58
extern int FePlayerNo;

// address: 0x8012B164
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x80129F5C
extern int FeBufferCount;

// address: 0x80129F60
extern int FeNoOfPlayers;

// address: 0x80129F64
// size: 0x8
extern int FeChrClass[2];

// address: 0x800BE46C
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x80129F6C
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x80129F70
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x80129F74
extern unsigned long FeCount;

// address: 0x80129F78
extern int fileselect;

// address: 0x80129F7C
extern int BookMenu;

// address: 0x80129F80
extern int FeAttractMode;

// address: 0x80129F84
extern int FMVPress;

// address: 0x80129F0C
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x80129F24
extern bool JustQuitQText;

// address: 0x80129F14
// size: 0x8
extern bool LoadedChar[2];

// address: 0x80129F10
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x80129F1C
extern unsigned char FeIsAVirgin;

// address: 0x80129F20
extern int FeMenuDelay;

// address: 0x800BD7EC
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800BD808
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800BD824
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800BD840
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800BD85C
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800BD878
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800BD894
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800BD8B0
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800BD8CC
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800BD8E8
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800BD904
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800BD920
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800BD93C
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800BD958
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x80129F28
static int fadeval;

// address: 0x800BD974
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800BD9EC
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800BDA34
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800BDAAC
// size: 0x46
extern unsigned char FeNameEngMenuTable[70];

// address: 0x800BDAF4
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800BDB3C
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800BDB9C
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800BDBFC
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800BDC74
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x80129F34
static bool DrawBackOn;

// address: 0x80129F38
extern unsigned long AttractTitleDelay;

// address: 0x80129F3C
extern unsigned long AttractMainDelay;

// address: 0x80129F40
extern int FMVEndPad;

// address: 0x80129FB8
extern int InCredits;

// address: 0x80129FBC
extern int CreditTitleNo;

// address: 0x80129FC0
extern int CreditSubTitleNo;

// address: 0x80129FD4
// size: 0x8
extern int card_status[2];

// address: 0x80129FDC
// size: 0x8
extern int card_usable[2];

// address: 0x80129FE4
// size: 0x8
extern int card_files[2];

// address: 0x80129FEC
// size: 0x8
extern int card_changed[2];

// address: 0x8012A030
extern int AlertTxt;

// address: 0x8012A034
extern int current_card;

// address: 0x8012A038
extern int LoadType;

// address: 0x8012A03C
extern int McMenuPos;

// address: 0x8012A040
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x8012A02C
extern bool fileinfoflag;

// address: 0x8012A000
extern char *DiabloGameFile;

// address: 0x8012A004
extern char *DiabloOptionFile;

// address: 0x8012A024
// size: 0x8
extern char *McState_addr_8012A024[2];

// address: 0x8012A11C
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x8012A124
extern int mdec_audio_sec;

// address: 0x8012A128
extern int mdec_audio_offs;

// address: 0x8012A12C
extern int mdec_audio_playing;

// address: 0x8012A130
extern int mdec_audio_rate_shift;

// address: 0x8012A134
// size: 0x8
extern char *vlcbuf[2];

// address: 0x8012A13C
extern int slice_size;

// address: 0x8012A140
// size: 0x8
extern struct RECT slice;

// address: 0x8012A148
extern int slice_inc;

// address: 0x8012A14C
extern int area_pw;

// address: 0x8012A150
extern int area_ph;

// address: 0x8012A154
// size: 0x2
extern char tmdc_pol_dirty[2];

// address: 0x8012A158
// size: 0x8
extern int num_pol[2];

// address: 0x8012A160
extern int mdec_cx;

// address: 0x8012A164
extern int mdec_cy;

// address: 0x8012A168
extern int mdec_w;

// address: 0x8012A16C
extern int mdec_h;

// address: 0x8012A170
// size: 0x8
extern int mdec_pw[2];

// address: 0x8012A178
// size: 0x8
extern int mdec_ph[2];

// address: 0x8012A180
extern int move_x;

// address: 0x8012A184
extern int move_y;

// address: 0x8012A188
extern int move_scale;

// address: 0x8012A18C
extern int stream_frames;

// address: 0x8012A190
extern int last_stream_frame;

// address: 0x8012A194
extern int mdec_framecount;

// address: 0x8012A198
extern int mdec_speed;

// address: 0x8012A19C
extern int mdec_stream_starting;

// address: 0x8012A1A0
extern int mdec_last_frame;

// address: 0x8012A1A4
extern int mdec_sectors_per_frame;

// address: 0x8012A1A8
extern unsigned short *vlctab;

// address: 0x8012A1AC
extern unsigned char *mdc_buftop;

// address: 0x8012A1B0
extern unsigned char *mdc_bufstart;

// address: 0x8012A1B4
extern int mdc_bufleft;

// address: 0x8012A1B8
extern int mdc_buftotal;

// address: 0x8012A1BC
extern int ordertab_length;

// address: 0x8012A1C0
extern int time_in_frames;

// address: 0x8012A1C4
extern int stream_chunksize;

// address: 0x8012A1C8
extern int stream_bufsize;

// address: 0x8012A1CC
extern int stream_subsec;

// address: 0x8012A1D0
extern int stream_secnum;

// address: 0x8012A1D4
extern int stream_last_sector;

// address: 0x8012A1D8
extern int stream_startsec;

// address: 0x8012A1DC
extern int stream_opened;

// address: 0x8012A1E0
extern int stream_last_chunk;

// address: 0x8012A1E4
extern int stream_got_chunks;

// address: 0x8012A1E8
extern int last_sector;

// address: 0x8012A1EC
extern int cdstream_resetsec;

// address: 0x8012A1F0
extern int last_handler_event;

// address: 0x8012A0B8
extern bool user_start;

// address: 0x8012A050
extern unsigned char *vlc_tab;

// address: 0x8012A054
extern unsigned char *vlc_buf;

// address: 0x8012A058
extern unsigned char *img_buf;

// address: 0x8012A05C
extern int vbuf;

// address: 0x8012A060
extern int last_fn;

// address: 0x8012A064
extern int last_mdc;

// address: 0x8012A068
extern int slnum;

// address: 0x8012A06C
extern int slices_to_do;

// address: 0x8012A070
extern int mbuf;

// address: 0x8012A074
extern int mfn;

// address: 0x8012A078
extern int last_move_mbuf;

// address: 0x8012A07C
extern int move_request;

// address: 0x8012A080
extern int mdec_scale;

// address: 0x8012A084
extern int do_brightness;

// address: 0x8012A088
extern int frame_decoded;

// address: 0x8012A08C
extern int mdec_streaming;

// address: 0x8012A090
extern int mdec_stream_size;

// address: 0x8012A094
extern int first_stream_frame;

// address: 0x8012A098
extern int stream_frames_played;

// address: 0x8012A09C
extern int num_mdcs;

// address: 0x8012A0A0
extern int mdec_head;

// address: 0x8012A0A4
extern int mdec_tail;

// address: 0x8012A0A8
extern int mdec_waiting_tail;

// address: 0x8012A0AC
extern int mdecs_queued;

// address: 0x8012A0B0
extern int mdecs_waiting;

// address: 0x8012A0B4
extern int sfx_volume;

// address: 0x8012A0BC
static unsigned char DiabEnd;

// address: 0x8012A0C0
extern int stream_chunks_in;

// address: 0x8012A0C4
extern int stream_chunks_total;

// address: 0x8012A0C8
extern int stream_in;

// address: 0x8012A0CC
extern int stream_out;

// address: 0x8012A0D0
extern int stream_stalled;

// address: 0x8012A0D4
extern int stream_ending;

// address: 0x8012A0D8
extern int stream_open;

// address: 0x8012A0DC
extern int stream_handler_installed;

// address: 0x8012A0E0
extern int stream_chunks_borrowed;

// address: 0x8012A0E4
extern int _get_count;

// address: 0x8012A0E8
extern int _discard_count;

// address: 0x8012A0EC
// size: 0x5C
extern struct TASK *CDTask;

// address: 0x8012A0F0
// size: 0x98
static struct cdstreamstruct *CDStream;

// address: 0x8012A0F4
extern int cdready_calls;

// address: 0x8012A0F8
extern int cdready_errors;

// address: 0x8012A0FC
extern int cdready_out_of_sync;

// address: 0x8012A100
extern int cdstream_resetting;

// address: 0x8012A104
extern int sector_dma;

// address: 0x8012A108
extern int sector_dma_in;

// address: 0x8012A10C
extern unsigned long *chkaddr;

// address: 0x8012A110
// size: 0x8
extern struct chunkhdrstruct *chunk;

// address: 0x8012A114
extern int first_handler_event;

// address: 0x8012A118
static bool DOSLEEP;

// address: 0x8012A270
extern unsigned char *pStatusPanel;

// address: 0x8012A274
extern unsigned char *pGBoxBuff;

// address: 0x8012A278
extern unsigned char dropGoldFlag;

// address: 0x8012A27C
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800BE984
// size: 0x200
extern char _infostr[256][2];

// address: 0x8012A280
// size: 0x2
extern char _infoclr[2];

// address: 0x800BEB84
// size: 0x100
extern char tempstr[256];

// address: 0x8012A282
extern unsigned char drawhpflag;

// address: 0x8012A283
extern unsigned char drawmanaflag;

// address: 0x8012A284
extern unsigned char chrflag;

// address: 0x8012A285
extern unsigned char drawbtnflag;

// address: 0x8012A286
extern unsigned char panbtndown;

// address: 0x8012A287
extern unsigned char panelflag;

// address: 0x8012A288
extern unsigned char chrbtndown;

// address: 0x8012A289
extern unsigned char lvlbtndown;

// address: 0x8012A28A
extern unsigned char sbookflag;

// address: 0x8012A28B
extern unsigned char talkflag;

// address: 0x8012A28C
extern int dropGoldValue;

// address: 0x8012A290
extern int initialDropGoldValue;

// address: 0x8012A294
extern int initialDropGoldIndex;

// address: 0x8012A298
extern unsigned char *pPanelButtons;

// address: 0x8012A29C
extern unsigned char *pPanelText;

// address: 0x8012A2A0
extern unsigned char *pManaBuff;

// address: 0x8012A2A4
extern unsigned char *pLifeBuff;

// address: 0x8012A2A8
extern unsigned char *pChrPanel;

// address: 0x8012A2AC
extern unsigned char *pChrButtons;

// address: 0x8012A2B0
extern unsigned char *pSpellCels;

// address: 0x8012BB60
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x8012BF60
// size: 0x40
static int _pstrjust[8][2];

// address: 0x8012B174
// size: 0x8
static int _pnumlines[2];

// address: 0x8012A2B4
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x8012A2B8
// size: 0x8
extern struct RECT CSRect;

// address: 0x8012B184
// size: 0x8
static int _pSpell[2];

// address: 0x8012B18C
// size: 0x8
static int _pSplType[2];

// address: 0x8012A2C0
extern int numpanbtns;

// address: 0x8012A2C4
extern unsigned char *pDurIcons;

// address: 0x8012A2C8
extern unsigned char drawdurflag;

// address: 0x8012B194
// size: 0x8
static unsigned char chrbtn[4][2];

// address: 0x8012A2C9
extern unsigned char chrbtnactive;

// address: 0x8012A2CC
extern unsigned char *pSpellBkCel;

// address: 0x8012A2D0
extern unsigned char *pSBkBtnCel;

// address: 0x8012A2D4
extern unsigned char *pSBkIconCels;

// address: 0x8012A2D8
extern int sbooktab;

// address: 0x8012A2DC
extern int cur_spel;

// address: 0x8012B19C
static long talkofs;

// address: 0x8012BFB0
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x8012B1A0
static unsigned char sgbTalkSavePos;

// address: 0x8012B1A1
static unsigned char sgbNextTalkSave;

// address: 0x8012B1A2
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x8012B1A4
static unsigned char *pTalkPanel;

// address: 0x8012B1A8
static unsigned char *pMultiBtns;

// address: 0x8012B1AC
static unsigned char *pTalkBtns;

// address: 0x8012B1B0
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x800BE498
// size: 0x25
extern char SpellITbl[37];

// address: 0x8012A1FD
extern unsigned char DrawLevelUpFlag;

// address: 0x8012A224
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x8012A220
extern unsigned char spspelstate;

// address: 0x8012A240
extern bool initchr;

// address: 0x8012A200
static int SPLICONNO;

// address: 0x8012A204
static int SPLICONY;

// address: 0x8012B17C
static int SPLICONRIGHT;

// address: 0x8012A208
static int scx;

// address: 0x8012A20C
static int scy;

// address: 0x8012A210
static int scx1;

// address: 0x8012A214
static int scy1;

// address: 0x8012A218
static int scx2;

// address: 0x8012A21C
static int scy2;

// address: 0x8012A22C
extern char SpellCol;

// address: 0x800BE484
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800BE4C0
// size: 0x64
extern int SpellPages[5][5];

// address: 0x8012A230
static int lus;

// address: 0x8012A234
static int CsNo;

// address: 0x8012A238
static char plusanim;

// address: 0x8012BFA0
// size: 0x10
static struct Dialog CSBack;

// address: 0x8012A23C
static int CS_XOFF;

// address: 0x800BE524
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x8012A244
extern int NoCSEntries;

// address: 0x8012A248
static int SPALOFF;

// address: 0x8012A24C
static int paloffset1;

// address: 0x8012A250
static int paloffset2;

// address: 0x8012A254
static int paloffset3;

// address: 0x8012A258
static int paloffset4;

// address: 0x8012A25C
static int pinc1;

// address: 0x8012A260
static int pinc2;

// address: 0x8012A264
static int pinc3;

// address: 0x8012A268
static int pinc4;

// address: 0x8012A2F0
// size: 0x8
extern int _pcurs[2];

// address: 0x8012A2F8
extern int cursW;

// address: 0x8012A2FC
extern int cursH;

// address: 0x8012A300
extern int icursW;

// address: 0x8012A304
extern int icursH;

// address: 0x8012A308
extern int icursW28;

// address: 0x8012A30C
extern int icursH28;

// address: 0x8012A310
extern int cursmx;

// address: 0x8012A314
extern int cursmy;

// address: 0x8012A318
// size: 0x8
extern int _pcursmonst[2];

// address: 0x8012A320
// size: 0x2
extern char _pcursobj[2];

// address: 0x8012A324
// size: 0x2
extern char _pcursitem[2];

// address: 0x8012A328
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x8012A32C
// size: 0x2
extern char _pcursplr[2];

// address: 0x8012A2EC
extern int sel_data;

// address: 0x800BEC84
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x8012A330
extern int spurtndx;

// address: 0x8012A334
extern int stonendx;

// address: 0x8012A338
extern unsigned char *pSquareCel;

// address: 0x8012A378
extern unsigned long ghInst;

// address: 0x8012A37C
extern unsigned char svgamode;

// address: 0x8012A380
extern int MouseX;

// address: 0x8012A384
extern int MouseY;

// address: 0x8012A388
extern long gv1;

// address: 0x8012A38C
extern long gv2;

// address: 0x8012A390
extern long gv3;

// address: 0x8012A394
extern long gv4;

// address: 0x8012A398
extern long gv5;

// address: 0x8012A39C
extern unsigned char gbProcessPlayers;

// address: 0x800BEDF8
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800BEE20
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800BEE64
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x8012A39D
extern unsigned char gbDoEnding;

// address: 0x8012A39E
extern unsigned char gbRunGame;

// address: 0x8012A39F
extern unsigned char gbRunGameResult;

// address: 0x8012A3A0
extern unsigned char gbGameLoopStartup;

// address: 0x8012C000
// size: 0x44
static int glEndSeed[17];

// address: 0x8012C050
// size: 0x44
static int glMid1Seed[17];

// address: 0x8012C0A0
// size: 0x44
static int glMid2Seed[17];

// address: 0x8012C0F0
// size: 0x44
static int glMid3Seed[17];

// address: 0x8012B1B4
static long *sg_previousFilter;

// address: 0x800BEEA8
// size: 0x30
extern int CreateEnv[12];

// address: 0x8012A3A4
extern int Passedlvldir;

// address: 0x8012A3A8
extern unsigned char *TempStack;

// address: 0x8012A348
extern unsigned long ghMainWnd;

// address: 0x8012A34C
extern unsigned char fullscreen;

// address: 0x8012A350
extern int force_redraw;

// address: 0x8012A364
extern unsigned char PauseMode;

// address: 0x8012A365
extern unsigned char FriendlyMode;

// address: 0x8012A355
extern unsigned char visiondebug;

// address: 0x8012A357
extern unsigned char light4flag;

// address: 0x8012A358
extern unsigned char leveldebug;

// address: 0x8012A359
extern unsigned char monstdebug;

// address: 0x8012A360
extern int debugmonsttypes;

// address: 0x8012A354
static unsigned char cineflag;

// address: 0x8012A356
extern unsigned char scrollflag;

// address: 0x8012A35A
extern unsigned char trigdebug;

// address: 0x8012A35C
extern int setseed;

// address: 0x8012A368
static int sgnTimeoutCurs;

// address: 0x8012A36C
extern unsigned char sgbMouseDown;

// address: 0x800BF574
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x8012A3C0
extern int numtowners;

// address: 0x8012A3C4
extern unsigned char storeflag;

// address: 0x8012A3C5
extern unsigned char boyloadflag;

// address: 0x8012A3C6
extern unsigned char bannerflag;

// address: 0x8012A3C8
extern unsigned char *pCowCels;

// address: 0x8012B1B8
static unsigned long sgdwCowClicks;

// address: 0x8012B1BC
static int sgnCowMsg;

// address: 0x800BF2B4
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x8012A3B8
extern unsigned long CowPlaying;

// address: 0x800BEED8
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800BF250
// size: 0xC
extern int TownCowX[3];

// address: 0x800BF25C
// size: 0xC
extern int TownCowY[3];

// address: 0x800BF268
// size: 0xC
extern int TownCowDir[3];

// address: 0x800BF274
// size: 0x20
extern int cowoffx[8];

// address: 0x800BF294
// size: 0x20
extern int cowoffy[8];

// address: 0x8012A3E0
extern int sfxdelay;

// address: 0x8012A3E4
extern int sfxdnum;

// address: 0x8012A3D8
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800C0374
// size: 0xF78
extern struct TSFX sgSFX[990];

// address: 0x8012A3DC
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x8012A3E8
extern long orgseed;

// address: 0x8012B1C0
static long sglGameSeed;

// address: 0x8012A3EC
extern int SeedCount;

// address: 0x8012B1C4
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8012B1C8
static int sgnWidth;

// address: 0x8012A3FA
extern char msgflag;

// address: 0x8012A3FB
extern char msgdelay;

// address: 0x800C139C
// size: 0x50
extern char msgtable[80];

// address: 0x800C12EC
// size: 0xB0
extern int MsgStrings[44];

// address: 0x8012A3F9
extern char msgcnt;

// address: 0x8012B1CC
static unsigned long sgdwProgress;

// address: 0x8012B1D0
static unsigned long sgdwXY;

// address: 0x800C13EC
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x80120144
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x801214E4
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x80122204
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x80123104
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800C1600
// size: 0x4C00
extern struct ItemStruct item[128];

// address: 0x800C6200
// size: 0x7F
extern char itemactive[127];

// address: 0x800C6280
// size: 0x7F
extern char itemavail[127];

// address: 0x800C6300
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8012A434
extern unsigned char uitemflag;

// address: 0x8012B1D4
static int tem;

// address: 0x8012C138
// size: 0x98
static struct ItemStruct curruitem;

// address: 0x8012C1D8
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x8012A438
extern int ScrollType;

// address: 0x800C6380
// size: 0x40
extern char ItemStr[64];

// address: 0x800C63C0
// size: 0x40
extern char SufStr[64];

// address: 0x8012A414
extern long numitems;

// address: 0x8012A418
extern int gnNumGetRecords;

// address: 0x800C155C
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800C148C
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x80124F2C
// size: 0x40
extern short SinTab[32];

// address: 0x80124F6C
// size: 0x46
static short Item2Frm[35];

// address: 0x800C1538
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x8012A41C
extern int *ItemAnimSnds;

// address: 0x8012A420
extern int idoppely;

// address: 0x8012A424
extern int ScrollFlag;

// address: 0x800C15E8
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800C71AC
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800C72EC
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x8012A44C
extern int numlights;

// address: 0x8012A450
extern char lightmax;

// address: 0x800C7314
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x8012A454
extern int numvision;

// address: 0x8012A458
extern unsigned char dovision;

// address: 0x8012A45C
extern int visionid;

// address: 0x8012B1D8
static int disp_mask;

// address: 0x8012B1DC
static int weird;

// address: 0x8012B1E0
static int disp_tab_r;

// address: 0x8012B1E4
static int dispy_r;

// address: 0x8012B1E8
static int disp_tab_g;

// address: 0x8012B1EC
static int dispy_g;

// address: 0x8012B1F0
static int disp_tab_b;

// address: 0x8012B1F4
static int dispy_b;

// address: 0x8012B1F8
static int radius;

// address: 0x8012B1FC
static int bright;

// address: 0x8012C1E8
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x8012A43C
extern int lightflag;

// address: 0x800C6EC0
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800C7174
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800C6400
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x8012A440
extern int restore_r;

// address: 0x8012A444
extern int restore_g;

// address: 0x8012A448
extern int restore_b;

// address: 0x800C718C
// size: 0x10
static char radius_tab[16];

// address: 0x800C719C
// size: 0x10
static char bright_tab[16];

// address: 0x8012A47D
extern unsigned char qtextflag;

// address: 0x8012A480
extern int qtextSpd;

// address: 0x8012B200
static unsigned char *pMedTextCels;

// address: 0x8012B204
static unsigned char *pTextBoxCels;

// address: 0x8012B208
static char *qtextptr;

// address: 0x8012B20C
static int qtexty;

// address: 0x8012B210
static unsigned long qtextDelay;

// address: 0x8012B214
static unsigned long sgLastScroll;

// address: 0x8012B218
static unsigned long scrolltexty;

// address: 0x8012B21C
static long sglMusicVolumeSave;

// address: 0x8012A46C
static bool qtbodge;

// address: 0x800C74D4
// size: 0x10
extern struct Dialog QBack;

// address: 0x800C74E4
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800C7C54
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800C7B44
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800C7D40
// size: 0x13D4C
extern struct DLevel sgLevels[21];

// address: 0x800DBA8C
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x8012C268
// size: 0x16
static struct DJunk sgJunk;

// address: 0x8012B221
static unsigned char sgbRecvCmd;

// address: 0x8012B224
static unsigned long sgdwRecvOffset;

// address: 0x8012B228
static unsigned char sgbDeltaChunks;

// address: 0x8012B229
static unsigned char sgbDeltaChanged;

// address: 0x8012B22C
static unsigned long sgdwOwnerWait;

// address: 0x8012B230
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x8012B234
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8012B238
static int sgnCurrMegaPlayer;

// address: 0x8012A499
extern unsigned char deltaload;

// address: 0x8012A49A
extern unsigned char gbBufferMsgs;

// address: 0x8012A49C
extern unsigned long dwRecCount;

// address: 0x8012A4A0
extern bool LevelOut;

// address: 0x8012A4B6
extern unsigned char gbMaxPlayers;

// address: 0x8012A4B7
extern unsigned char gbActivePlayers;

// address: 0x8012A4B8
extern unsigned char gbGameDestroyed;

// address: 0x8012A4B9
extern unsigned char gbDeltaSender;

// address: 0x8012A4BA
extern unsigned char gbSelectProvider;

// address: 0x8012A4BB
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x8012B23C
static unsigned char sgbSentThisCycle;

// address: 0x8012B240
static unsigned long sgdwGameLoops;

// address: 0x8012B244
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x8012B248
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x8012B24C
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x8012B254
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x8012B25C
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x8012B264
static unsigned char sgbTimeout;

// address: 0x8012B268
static long sglTimeoutStart;

// address: 0x8012A4B0
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x8012A4B5
static unsigned char sgbNetInited;

// address: 0x800DCAF4
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800DCCB8
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80125694
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800DD498
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x8012A4DC
extern long numobjects;

// address: 0x800DEA6C
// size: 0x7F
extern char objectactive[127];

// address: 0x800DEAEC
// size: 0x7F
extern char objectavail[127];

// address: 0x8012A4E0
extern unsigned char InitObjFlag;

// address: 0x8012A4E4
extern int trapid;

// address: 0x800DEB6C
// size: 0x28
extern char ObjFileList[40];

// address: 0x8012A4E8
extern int trapdir;

// address: 0x8012A4EC
extern int leverid;

// address: 0x8012A4D4
extern int numobjfiles;

// address: 0x800DD3B0
// size: 0x20
extern int bxadd[8];

// address: 0x800DD3D0
// size: 0x20
extern int byadd[8];

// address: 0x800DD458
// size: 0x1A
extern char shrineavail[26];

// address: 0x800DD3F0
// size: 0x68
extern int shrinestrs[26];

// address: 0x800DD474
// size: 0x24
extern int StoryBookName[9];

// address: 0x8012A4D8
extern int myscale;

// address: 0x8012A500
extern unsigned char gbValidSaveFile;

// address: 0x8012A4FC
extern bool DoLoadedChar;

// address: 0x800DED8C
// size: 0x4750
extern struct PlayerStruct plr[2];

// address: 0x8012A520
extern int myplr;

// address: 0x8012A524
extern int deathdelay;

// address: 0x8012A528
extern unsigned char deathflag;

// address: 0x8012A529
extern char light_rad;

// address: 0x8012A518
// size: 0x5
extern char light_level[5];

// address: 0x800DEC84
// size: 0x30
extern int MaxStats[4][3];

// address: 0x8012A510
static int PlrStructSize;

// address: 0x8012A514
static int ItemStructSize;

// address: 0x800DEB94
// size: 0x24
extern int plrxoff[9];

// address: 0x800DEBB8
// size: 0x24
extern int plryoff[9];

// address: 0x800DEBDC
// size: 0x24
extern int plrxoff2[9];

// address: 0x800DEC00
// size: 0x24
extern int plryoff2[9];

// address: 0x800DEC24
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800DEC48
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800DEC54
// size: 0xC
extern int MagicTbl[3];

// address: 0x800DEC60
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800DEC6C
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800DEC78
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800DECB4
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800E3614
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x8012A558
extern unsigned char *pQLogCel;

// address: 0x8012A55C
extern int ReturnLvlX;

// address: 0x8012A560
extern int ReturnLvlY;

// address: 0x8012A564
extern int ReturnLvl;

// address: 0x8012A568
extern int ReturnLvlT;

// address: 0x8012A56C
extern unsigned char rporttest;

// address: 0x8012A570
extern int qline;

// address: 0x8012A574
extern int numqlines;

// address: 0x8012A578
extern int qtopline;

// address: 0x8012C280
// size: 0x40
static int qlist[16];

// address: 0x8012B26C
// size: 0x8
static struct RECT QSRect;

// address: 0x8012A535
extern unsigned char questlog;

// address: 0x800E34DC
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x8012A538
extern int ALLQUESTS;

// address: 0x800E35F0
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800E35FC
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800E3608
// size: 0xC
extern int QuestGroup3[3];

// address: 0x8012A53C
// size: 0x8
extern int QuestGroup4[2];

// address: 0x8012A554
extern bool WaterDone;

// address: 0x800E35DC
// size: 0x14
extern int questtrigstr[5];

// address: 0x8012A544
static int QS_PX;

// address: 0x8012A548
static int QS_PY;

// address: 0x8012A54C
static int QS_PW;

// address: 0x8012A550
static int QS_PH;

// address: 0x8012C2C0
// size: 0x10
static struct Dialog QSBack;

// address: 0x800E3754
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x8012A5B3
extern char stextflag;

// address: 0x800E3FFC
// size: 0xBE0
extern struct ItemStruct smithitem[20];

// address: 0x800E4BDC
// size: 0x390
extern struct ItemStruct premiumitem[6];

// address: 0x8012A5B4
extern int numpremium;

// address: 0x8012A5B8
extern int premiumlevel;

// address: 0x800E4F6C
// size: 0xBE0
extern struct ItemStruct witchitem[20];

// address: 0x800E5B4C
// size: 0x98
extern struct ItemStruct boyitem;

// address: 0x8012A5BC
extern int boylevel;

// address: 0x800E5BE4
// size: 0x98
extern struct ItemStruct golditem;

// address: 0x800E5C7C
// size: 0xBE0
extern struct ItemStruct healitem[20];

// address: 0x8012A5C0
extern char stextsize;

// address: 0x8012A5C1
extern unsigned char stextscrl;

// address: 0x8012B274
static int stextsel;

// address: 0x8012B278
static int stextlhold;

// address: 0x8012B27C
static int stextshold;

// address: 0x8012B280
static int stextvhold;

// address: 0x8012B284
static int stextsval;

// address: 0x8012B288
static int stextsmax;

// address: 0x8012B28C
static int stextup;

// address: 0x8012B290
static int stextdown;

// address: 0x8012B294
static char stextscrlubtn;

// address: 0x8012B295
static char stextscrldbtn;

// address: 0x8012B296
static char SItemListFlag;

// address: 0x8012C2D0
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800E685C
// size: 0x1C80
extern struct ItemStruct storehold[48];

// address: 0x800E84DC
// size: 0x30
extern char storehidx[48];

// address: 0x8012B298
static int storenumh;

// address: 0x8012B29C
static int gossipstart;

// address: 0x8012B2A0
static int gossipend;

// address: 0x8012B2A4
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x8012B2AC
static int talker;

// address: 0x8012A5A0
extern unsigned char *pSTextBoxCels;

// address: 0x8012A5A4
extern unsigned char *pSTextSlidCels;

// address: 0x8012A5A8
extern int *SStringY;

// address: 0x800E3ED8
// size: 0x10
extern struct Dialog SBack;

// address: 0x800E3EE8
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800E3F38
// size: 0x50
extern int SStringYBuy0[20];

// address: 0x800E3F88
// size: 0x50
extern int SStringYBuy1[20];

// address: 0x800E3FD8
// size: 0x24
extern int talkname[9];

// address: 0x8012A5B2
extern unsigned char InStoreFlag;

// address: 0x801269E0
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x8012A5D0
extern unsigned long gdwAllTextEntries;

// address: 0x8012B2B0
static unsigned char *P3Tiles;

// address: 0x8012A5E0
extern int tile;

// address: 0x8012A5F0
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800E8744
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x8012A5F4
extern int numtrigs;

// address: 0x8012A5F8
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x8012A5FC
extern int TWarpFrom;

// address: 0x800E850C
// size: 0x2C
extern int TownDownList[11];

// address: 0x800E8538
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800E856C
// size: 0x30
extern int L1UpList[12];

// address: 0x800E859C
// size: 0x28
extern int L1DownList[10];

// address: 0x800E85C4
// size: 0xC
extern int L2UpList[3];

// address: 0x800E85D0
// size: 0x14
extern int L2DownList[5];

// address: 0x800E85E4
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800E85F0
// size: 0x3C
extern int L3UpList[15];

// address: 0x800E862C
// size: 0x24
extern int L3DownList[9];

// address: 0x800E8650
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800E8688
// size: 0x10
extern int L4UpList[4];

// address: 0x800E8698
// size: 0x18
extern int L4DownList[6];

// address: 0x800E86B0
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800E86C0
// size: 0x84
extern int L4PentaList[33];

// address: 0x8012A615
extern unsigned char gbSndInited;

// address: 0x8012A618
extern long sglMasterVolume;

// address: 0x8012A61C
extern long sglMusicVolume;

// address: 0x8012A620
extern long sglSoundVolume;

// address: 0x8012A624
extern long sglSpeechVolume;

// address: 0x8012A628
extern int sgnMusicTrack;

// address: 0x8012A616
extern unsigned char gbDupSounds;

// address: 0x8012A62C
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x80127814
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x8012A644
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800E8794
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x8012A64C
// size: 0x2
extern char _pfind_index[2];

// address: 0x8012A650
// size: 0x2
extern char _pfindx[2];

// address: 0x8012A654
// size: 0x2
extern char _pfindy[2];

// address: 0x8012A656
extern unsigned char automapmoved;

// address: 0x8012A639
extern unsigned char flyflag;

// address: 0x8012A63A
static char seen_combo;

// address: 0x8012CFF0
// size: 0x94
static struct GamePad GPad1;

// address: 0x8012D090
// size: 0x94
static struct GamePad GPad2;

// address: 0x8012B2B4
static unsigned long (*CurrentProc)();

// address: 0x801279A8
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x8012A690
extern int NumOfStrings;

// address: 0x8012A664
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x8012A668
extern long hndText;

// address: 0x8012A66C
extern char **TextPtr;

// address: 0x8012A670
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x8012A6A0
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x8012A6A4
extern int CharFade;

// address: 0x8012A6A8
extern int rotateness;

// address: 0x8012A6AC
extern int spiralling_shape;

// address: 0x8012A6B0
extern int down;

// address: 0x800E87E4
// size: 0x10
extern char MlTab[16];

// address: 0x800E87F4
// size: 0x10
extern char QlTab[16];

// address: 0x800E8804
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x8012A6CC
extern int MyXoff1;

// address: 0x8012A6D0
extern int MyYoff1;

// address: 0x8012A6D4
extern int MyXoff2;

// address: 0x8012A6D8
extern int MyYoff2;

// address: 0x8012A6E8
extern bool iscflag;

// address: 0x8012A6F5
static unsigned char sgbFadedIn;

// address: 0x8012A6F6
static unsigned char screenbright;

// address: 0x8012A6F8
static int faderate;

// address: 0x8012A6FC
static bool fading;

// address: 0x8012A708
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x8012A700
extern int st;

// address: 0x8012A704
extern int mode;

// address: 0x800E898C
// size: 0x18
extern struct PortalStruct portal[2];

// address: 0x8012A73A
extern char portalindex;

// address: 0x8012A734
// size: 0x2
static char WarpDropX[2];

// address: 0x8012A738
// size: 0x2
static char WarpDropY[2];

// address: 0x800E89A4
// size: 0x78
extern char MyVerString[120];

// address: 0x8012A898
extern int Year;

// address: 0x8012A89C
extern int Day;

// address: 0x8012B2B8
static unsigned char *tbuff;

// address: 0x800E8A1C
// size: 0x300
extern unsigned char IconBuffer[768];

// address: 0x8012B2BC
static unsigned char HR1;

// address: 0x8012B2BD
static unsigned char HR2;

// address: 0x8012B2BE
static unsigned char HR3;

// address: 0x8012B2BF
static unsigned char VR1;

// address: 0x8012B2C0
static unsigned char VR2;

// address: 0x8012B2C1
static unsigned char VR3;

// address: 0x8012A90C
// size: 0x18
extern struct NODE *pHallList;

// address: 0x8012A910
extern int nRoomCnt;

// address: 0x8012A914
extern int nSx1;

// address: 0x8012A918
extern int nSy1;

// address: 0x8012A91C
extern int nSx2;

// address: 0x8012A920
extern int nSy2;

// address: 0x8012A8C4
extern int Area_Min;

// address: 0x8012A8C8
extern int Room_Max;

// address: 0x8012A8CC
extern int Room_Min;

// address: 0x8012A8D0
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x8012A8D8
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x8012A8E0
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x8012A8E8
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x8012A8F0
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x8012A8F4
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x8012A8F8
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x8012A8FC
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x8012A900
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x8012A904
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x8012A908
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x8012B2C4
static int abyssx;

// address: 0x8012B2C8
static unsigned char lavapool;

// address: 0x8012A9AC
extern int lockoutcnt;

// address: 0x8012A930
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x8012A938
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x8012A940
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x8012A948
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x8012A950
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x8012A958
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x8012A960
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x8012A968
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x8012A970
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x8012A978
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x8012A980
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x8012A988
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x8012A990
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x8012A998
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x8012A99C
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x8012A9A0
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x8012A9A4
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x8012A9A8
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x8012A9B0
extern int diabquad1x;

// address: 0x8012A9B4
extern int diabquad2x;

// address: 0x8012A9B8
extern int diabquad3x;

// address: 0x8012A9BC
extern int diabquad4x;

// address: 0x8012A9C0
extern int diabquad1y;

// address: 0x8012A9C4
extern int diabquad2y;

// address: 0x8012A9C8
extern int diabquad3y;

// address: 0x8012A9CC
extern int diabquad4y;

// address: 0x8012A9D0
extern int SP4x1;

// address: 0x8012A9D4
extern int SP4y1;

// address: 0x8012A9D8
extern int SP4x2;

// address: 0x8012A9DC
extern int SP4y2;

// address: 0x8012A9E0
extern int l4holdx;

// address: 0x8012A9E4
extern int l4holdy;

// address: 0x8012B2CC
static unsigned char *lpSetPiece1;

// address: 0x8012B2D0
static unsigned char *lpSetPiece2;

// address: 0x8012B2D4
static unsigned char *lpSetPiece3;

// address: 0x8012B2D8
static unsigned char *lpSetPiece4;

// address: 0x8012B2DC
static unsigned char *lppSetPiece2;

// address: 0x8012B2E0
static unsigned char *lppSetPiece3;

// address: 0x8012B2E4
static unsigned char *lppSetPiece4;

// address: 0x8012A9F4
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x8012A9FC
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800E8D1C
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800E8D30
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800E8D4C
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8012AA04
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800E8D60
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x8012AAF8
static bool DoUiForChooseMonster;

// address: 0x800E8D84
// size: 0x88
static char *MgToText[34];

// address: 0x800E8E0C
// size: 0x24
extern int StoryText[3][3];

// address: 0x800E8E30
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800EA030
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800EA670
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x8012AB1C
extern int setpc_x;

// address: 0x8012AB20
extern int setpc_y;

// address: 0x8012AB24
extern int setpc_w;

// address: 0x8012AB28
extern int setpc_h;

// address: 0x8012AB2C
extern unsigned char setloadflag;

// address: 0x8012AB30
extern unsigned char *pMegaTiles;

// address: 0x800EACB0
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800EB4B4
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800EBCB8
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800EC4BC
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800ECCC0
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x8012AB34
extern int dminx;

// address: 0x8012AB38
extern int dminy;

// address: 0x8012AB3C
extern int dmaxx;

// address: 0x8012AB40
extern int dmaxy;

// address: 0x8012AB44
extern int gnDifficulty;

// address: 0x8012AB48
extern unsigned char currlevel;

// address: 0x8012AB49
extern unsigned char leveltype;

// address: 0x8012AB4A
extern unsigned char setlevel;

// address: 0x8012AB4B
extern unsigned char setlvlnum;

// address: 0x8012AB4C
extern unsigned char setlvltype;

// address: 0x8012AB50
extern int ViewX;

// address: 0x8012AB54
extern int ViewY;

// address: 0x8012AB58
extern int ViewDX;

// address: 0x8012AB5C
extern int ViewDY;

// address: 0x8012AB60
extern int ViewBX;

// address: 0x8012AB64
extern int ViewBY;

// address: 0x800ED4C4
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x8012AB68
extern int LvlViewX;

// address: 0x8012AB6C
extern int LvlViewY;

// address: 0x8012AB70
extern int btmbx;

// address: 0x8012AB74
extern int btmby;

// address: 0x8012AB78
extern int btmdx;

// address: 0x8012AB7C
extern int btmdy;

// address: 0x8012AB80
extern int MicroTileLen;

// address: 0x8012AB84
extern char TransVal;

// address: 0x800ED4D8
// size: 0x20
extern bool TransList[8];

// address: 0x8012AB88
extern int themeCount;

// address: 0x800ED4F8
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x8010F7B8
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x8011031C
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x80110E80
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x801119E4
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x8012AB14
extern unsigned char *pSetPiece;

// address: 0x8012AB18
extern int DungSize;

// address: 0x80111BB0
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x8012ABC8
extern int numthemes;

// address: 0x8012ABCC
extern int zharlib;

// address: 0x8012ABD0
extern unsigned char armorFlag;

// address: 0x8012ABD1
extern unsigned char bCrossFlag;

// address: 0x8012ABD2
extern unsigned char weaponFlag;

// address: 0x8012ABD4
extern int themex;

// address: 0x8012ABD8
extern int themey;

// address: 0x8012ABDC
extern int themeVar1;

// address: 0x8012ABE0
extern unsigned char bFountainFlag;

// address: 0x8012ABE1
extern unsigned char cauldronFlag;

// address: 0x8012ABE2
extern unsigned char mFountainFlag;

// address: 0x8012ABE3
extern unsigned char pFountainFlag;

// address: 0x8012ABE4
extern unsigned char tFountainFlag;

// address: 0x8012ABE5
extern unsigned char treasureFlag;

// address: 0x8012ABE8
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x80111A90
// size: 0x10
extern int ThemeGood[4];

// address: 0x80111AA0
// size: 0x64
extern int trm5x[25];

// address: 0x80111B04
// size: 0x64
extern int trm5y[25];

// address: 0x80111B68
// size: 0x24
extern int trm3x[9];

// address: 0x80111B8C
// size: 0x24
extern int trm3y[9];

// address: 0x8012ACC0
extern int nummissiles;

// address: 0x80111DC8
// size: 0x1F4
extern int missileactive[125];

// address: 0x80111FBC
// size: 0x1F4
extern int missileavail[125];

// address: 0x8012ACC4
extern unsigned char MissilePreFlag;

// address: 0x801121B0
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x8012ACC5
extern unsigned char ManashieldFlag;

// address: 0x8012ACC6
extern unsigned char ManashieldFlag2;

// address: 0x80111D40
// size: 0x20
extern int XDirAdd[8];

// address: 0x80111D60
// size: 0x20
extern int YDirAdd[8];

// address: 0x8012AC8D
extern unsigned char fadetor;

// address: 0x8012AC8E
extern unsigned char fadetog;

// address: 0x8012AC8F
extern unsigned char fadetob;

// address: 0x80111D80
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x80111D90
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x80114A60
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x8012AD28
extern long nummonsters;

// address: 0x8011A1E0
// size: 0x190
extern short monstactive[200];

// address: 0x8011A370
// size: 0x190
extern short monstkills[200];

// address: 0x8011A500
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x8012AD2C
extern long monstimgtot;

// address: 0x8012AD30
extern char totalmonsters;

// address: 0x8012AD34
extern int uniquetrans;

// address: 0x8012B2E8
static unsigned char sgbSaveSoundOn;

// address: 0x8012ACF8
// size: 0x8
extern char offset_x[8];

// address: 0x8012AD00
// size: 0x8
extern char offset_y[8];

// address: 0x8012ACE0
// size: 0x8
extern char left[8];

// address: 0x8012ACE8
// size: 0x8
extern char right[8];

// address: 0x8012ACF0
// size: 0x8
extern char opposite[8];

// address: 0x8012ACD4
extern int nummtypes;

// address: 0x8012ACD8
// size: 0x7
extern char animletter[7];

// address: 0x801148C0
// size: 0x120
extern int MWVel[3][24];

// address: 0x8012AD08
// size: 0x4
extern char rnd5[4];

// address: 0x8012AD0C
// size: 0x4
extern char rnd10[4];

// address: 0x8012AD10
// size: 0x4
extern char rnd20[4];

// address: 0x8012AD14
// size: 0x4
extern char rnd60[4];

// address: 0x801149E0
// size: 0x80
extern void (*AiProc[32])();

// address: 0x8011A9D8
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x8011C418
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x8011C498
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x8011C508
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x8011A7C0
// size: 0x218
extern int TransPals[134];

// address: 0x8011A6C0
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x8012AD6C
extern unsigned char invflag;

// address: 0x8012AD6D
extern unsigned char drawsbarflag;

// address: 0x8012AD70
extern int InvBackY;

// address: 0x8012AD74
extern int InvCursPos;

// address: 0x8011D4B0
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x8012AD78
extern int InvBackAY;

// address: 0x8012AD7C
extern int InvSel;

// address: 0x8012AD80
extern int ItemW;

// address: 0x8012AD84
extern int ItemH;

// address: 0x8012AD88
extern int ItemNo;

// address: 0x8012AD8C
// size: 0x8
extern struct RECT BRect;

// address: 0x8012AD54
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x8012AD58
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x8012AD50
extern int InvPageNo;

// address: 0x8011CE38
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8011CE60
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x8011D0A8
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x8011D348
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x8011D3FC
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x8012AD64
static bool InvOn;

// address: 0x8012AD68
static unsigned long sgdwLastTime;

// address: 0x8012ADC3
extern unsigned char automapflag;

// address: 0x8011D514
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x8011D5DC
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8012ADC4
extern unsigned char AMLWallFlag;

// address: 0x8012ADC5
extern unsigned char AMRWallFlag;

// address: 0x8012ADC6
extern unsigned char AMLLWallFlag;

// address: 0x8012ADC7
extern unsigned char AMLRWallFlag;

// address: 0x8012ADC8
extern unsigned char AMDirtFlag;

// address: 0x8012ADC9
extern unsigned char AMColumnFlag;

// address: 0x8012ADCA
extern unsigned char AMStairFlag;

// address: 0x8012ADCB
extern unsigned char AMLDoorFlag;

// address: 0x8012ADCC
extern unsigned char AMLGrateFlag;

// address: 0x8012ADCD
extern unsigned char AMLArchFlag;

// address: 0x8012ADCE
extern unsigned char AMRDoorFlag;

// address: 0x8012ADCF
extern unsigned char AMRGrateFlag;

// address: 0x8012ADD0
extern unsigned char AMRArchFlag;

// address: 0x8012ADD4
extern int AutoMapX;

// address: 0x8012ADD8
extern int AutoMapY;

// address: 0x8012ADDC
extern int AutoMapXOfs;

// address: 0x8012ADE0
extern int AutoMapYOfs;

// address: 0x8012ADE4
extern int AMPlayerX;

// address: 0x8012ADE8
extern int AMPlayerY;

// address: 0x8012ADA0
extern int AutoMapScale;

// address: 0x8012ADA4
extern unsigned char AutoMapPlayerR;

// address: 0x8012ADA5
extern unsigned char AutoMapPlayerG;

// address: 0x8012ADA6
extern unsigned char AutoMapPlayerB;

// address: 0x8012ADA7
extern unsigned char AutoMapWallR;

// address: 0x8012ADA8
extern unsigned char AutoMapWallG;

// address: 0x8012ADA9
extern unsigned char AutoMapWallB;

// address: 0x8012ADAA
extern unsigned char AutoMapDoorR;

// address: 0x8012ADAB
extern unsigned char AutoMapDoorG;

// address: 0x8012ADAC
extern unsigned char AutoMapDoorB;

// address: 0x8012ADAD
extern unsigned char AutoMapColumnR;

// address: 0x8012ADAE
extern unsigned char AutoMapColumnG;

// address: 0x8012ADAF
extern unsigned char AutoMapColumnB;

// address: 0x8012ADB0
extern unsigned char AutoMapArchR;

// address: 0x8012ADB1
extern unsigned char AutoMapArchG;

// address: 0x8012ADB2
extern unsigned char AutoMapArchB;

// address: 0x8012ADB3
extern unsigned char AutoMapStairR;

// address: 0x8012ADB4
extern unsigned char AutoMapStairG;

// address: 0x8012ADB5
extern unsigned char AutoMapStairB;

// address: 0x8011D4FC
// size: 0x18
static int SetLevelName[6];

// address: 0x8012B444
extern unsigned long GazTick;

// address: 0x80130B78
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A6A10
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x8012B46C
extern void (*PollFunc)();

// address: 0x8012B450
extern void (*MsgFunc)();

// address: 0x8012B498
extern void (*ErrorFunc)();

// address: 0x8012B370
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x8012B374
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x8012B378
// size: 0x5C
static struct TASK *T;

// address: 0x8012B37C
static unsigned long MemTypeForTasker;

// address: 0x8012F728
// size: 0x30
static int SchEnv[12];

// address: 0x8012B380
static unsigned long ExecId;

// address: 0x8012B384
static unsigned long ExecMask;

// address: 0x8012B388
static int TasksActive;

// address: 0x8012B38C
static void (*EpiFunc)();

// address: 0x8012B390
static void (*ProFunc)();

// address: 0x8012B394
static unsigned long EpiProId;

// address: 0x8012B398
static unsigned long EpiProMask;

// address: 0x8012B39C
static void (*DoTasksPrologue)();

// address: 0x8012B3A0
static void (*DoTasksEpilogue)();

// address: 0x8012B3A4
static void (*StackFloodCallback)();

// address: 0x8012B3A8
static unsigned char ExtraStackProtection;

// address: 0x8012B3AC
static int ExtraStackSizeLongs;

// address: 0x8012B458
extern void *LastPtr;

// address: 0x800A6A48
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8012B3B0
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x8012F758
// size: 0x1180
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x8012B3B4
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x8012B3B8
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x8012B3BC
static int TimeStamp;

// address: 0x8012B3C0
static unsigned char FullErrorChecking;

// address: 0x8012B3C4
static unsigned long LastAttemptedAlloc;

// address: 0x8012B3C8
static unsigned long LastDeallocedBlock;

// address: 0x8012B3CC
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x8012B3D0
static int NumOfFreeHdrs;

// address: 0x8012B3D4
static unsigned long LastTypeAlloced;

// address: 0x8012B3D8
static void (*AllocFilter)();

// address: 0x800A6A50
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A6A78
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80079688
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x800796A4
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x800796B0
void Remove96__Fv() {
}


// address: 0x800796E8
void AppMain() {
}


// address: 0x80079788
void MAIN_RestartGameTask__Fv() {
}


// address: 0x800797B4
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007989C
void MAIN_MainLoop__Fv() {
}


// address: 0x800798E4
void CheckMaxArgs__Fv() {
}


// address: 0x80079918
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x80079924
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


// address: 0x80079A98
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x80079B4C
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x80079BEC
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x80079C88
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x80079D28
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


// address: 0x80079E44
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x80079F20
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007A048
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007A054
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007A090
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007A2A4
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007A2B0
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007A2EC
unsigned char ClearedYet__Fv() {
}


// address: 0x8007A2F8
void PrimDrawSycnCallBack() {
}


// address: 0x8007A318
void SendDispEnv__Fv() {
}


// address: 0x8007A33C
// size: 0x18
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007A354
// size: 0x28
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007A36C
// size: 0x34
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007A384
// size: 0x24
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007A39C
// size: 0x14
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007A3B4
// size: 0xC
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007A3CC
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007A4E0
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007A548
void VID_AfterDisplay__Fv() {
}


// address: 0x8007A568
void VID_ScrOn__Fv() {
}


// address: 0x8007A590
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007A5E8
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007A5F4
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007A600
void VID_DispEnvSend() {
}


// address: 0x8007A63C
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007A64C
int VID_GetXOff__Fv() {
}


// address: 0x8007A658
int VID_GetYOff__Fv() {
}


// address: 0x8007A664
void VID_SetDBuffer__Fb(bool DBuf) {
	{
		{
		}
	}
}


// address: 0x8007A7D4
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007A7DC
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007A7FC
int GetTpY__FUs_addr_8007A7FC(unsigned short tpage) {
}


// address: 0x8007A818
int GetTpX__FUs_addr_8007A818(unsigned short tpage) {
}


// address: 0x8007A824
// size: 0x14
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007A830
// size: 0x14
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007A83C
void SortOutFileSystem__Fv() {
}


// address: 0x8007A978
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007A998
void Spanker__Fv() {
}


// address: 0x8007A9D8
void GaryLiddon__Fv() {
}


// address: 0x8007A9E0
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


// address: 0x8007AB50
void DummyPoll__Fv() {
}


// address: 0x8007AB58
void DaveOwens__Fv() {
}


// address: 0x8007AB80
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007ABA8
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8007ABB4
int GetTpY__FUs_addr_8007ABB4(unsigned short tpage) {
}


// address: 0x8007ABD0
int GetTpX__FUs_addr_8007ABD0(unsigned short tpage) {
}


// address: 0x8007ABDC
void TimSwann__Fv() {
}


// address: 0x8007ABE4
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007AC34
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007AC88
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007ADF0
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007AE54
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007AE74
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007AF54
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007B018
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007B07C
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007B158
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


// address: 0x8007B26C
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007B314
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007B36C
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007B3C4
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007B3D8
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007B414
// size: 0x14
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007B47C
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007B4D4
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007B518
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007B5DC
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007B694
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007B768
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


// address: 0x8007B978
// size: 0x4
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007B990
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007B9BC
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007BA38
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007BAA4
// size: 0x14
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007BAE0
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007BB38
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007BB78
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007BC38
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007BCEC
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007BD94
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


// address: 0x8007BFA0
// size: 0x6C
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007BFE0
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007C028
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


// address: 0x8007C21C
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012B064
	static int TpX;
	// address: 0x8012B068
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


// address: 0x8007C2EC
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007C3A4
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007C414
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007C484
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


// address: 0x8007C5B0
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


// address: 0x8007C6B0
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


// address: 0x8007CABC
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


// address: 0x8007CD28
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


// address: 0x8007CE88
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


// address: 0x8007CF88
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


// address: 0x8007D1E0
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


// address: 0x8007D264
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


// address: 0x8007D42C
// size: 0x28
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007D580
// size: 0x34
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007D6D4
// size: 0x28
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007D7B8
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007D910
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


// address: 0x8007DA50
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x8007DB4C
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007DB78
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007DCC0
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


// address: 0x8007DDE0
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x8007DE34
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


// address: 0x8007DEF8
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8007DF4C
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x8007DFA4
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


// address: 0x8007E0C8
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


// address: 0x8007E1A0
// size: 0x4
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x8007E1F0
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x8007E218
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x8007E2C0
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


// address: 0x8007E380
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x8007E3C4
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


// address: 0x8007E454
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8007E4C4
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


// address: 0x8007E530
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007E580
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007E5A8
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


// address: 0x8007E644
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x8007E6AC
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


// address: 0x8007E780
// size: 0x78
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x8007E7B4
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


// address: 0x8007EA54
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x8007EA78
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007ED58
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x8007EDD4
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


// address: 0x8007EF30
void _GLOBAL__D_DatPool() {
}


// address: 0x8007EF88
void _GLOBAL__I_DatPool() {
}


// address: 0x8007EFDC
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x8007F058
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x8007F0D4
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8007F150
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F178
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F1A0
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F1AC
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x8007F1B8
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8007F230
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x8007F244
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8007F250
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x8007F264
// size: 0x8
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x8007F280
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8007F29C
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F2A8
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F2D0
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007F2F8
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x8007F30C
// size: 0x14
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x8007F350
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x8007F3A8
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007F3CC
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007F450
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007F474
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007F554
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x8007F564
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


// address: 0x8007F6B0
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


// address: 0x8007F98C
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


// address: 0x8007FAEC
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x8007FBD8
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


// address: 0x8007FD04
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


// address: 0x8007FE78
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


// address: 0x8007FFA0
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


// address: 0x80080280
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


// address: 0x80080380
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


// address: 0x8008054C
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80080570
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x800805A4
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x8008068C
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80080698
void BL_WaitForAsyncFinish__Fv() {
}


// address: 0x800806E4
void BL_AsyncLoadCallBack__Fi(int handle) {
}


// address: 0x80080714
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


// address: 0x8008088C
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80080954
// size: 0x14
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80080980
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x800809B8
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


// address: 0x80080A8C
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x80080BB0
void Tfree__FPv(void *Addr) {
}


// address: 0x80080C60
void InitTmalloc__Fv() {
}


// address: 0x80080C88
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80080CDC
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80080D28
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


// address: 0x80080E1C
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80080E48
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


// address: 0x800810C8
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


// address: 0x800813E0
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


// address: 0x80081500
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


// address: 0x80081604
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80081614
bool PA_GetPauseOk__Fv() {
}


// address: 0x80081620
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


// address: 0x800817F0
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800817F8
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80081914
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x8008191C
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081924
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80081A40
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081A48
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081A50
void ShowInActive__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// register: 16
	// size: 0x6C
	register struct CPad *P;
}


// address: 0x80081B30
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80081C80
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081C88
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80081CB0
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80081CD8
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80081D00
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081D44
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80081D78
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80081D8C
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80081DAC
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081DB4
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80081DBC
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80081DE4
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80081E40
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x80081E68
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x80081E90
unsigned char CheckActive__4CPad_addr_80081E90(struct CPad *this) {
}


// address: 0x80081E9C
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x80081FB4
void PAD_Handler__Fv() {
	// register: 20
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 16
	register unsigned char fin;
}


// address: 0x8008217C
// size: 0x6C
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x80082218
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80082350
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x800824AC
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x800825D0
void _GLOBAL__I_Pad0() {
}


// address: 0x80082608
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x80082610
unsigned char CheckActive__4CPad_addr_80082610(struct CPad *this) {
}


// address: 0x8008261C
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x80082624
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x8008262C
// size: 0x6C
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80082660
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80082684
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


// address: 0x80082720
void InitPrinty__Fv() {
}


// address: 0x800827C0
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x800827C8
int PrintChar__5CFontUsUsUcUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x8008296C
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


// address: 0x80082F8C
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 18
	register int Width;
	// register: 19
	register char c;
}


// address: 0x8008303C
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x800830BC
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x800830C8
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x800830EC
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x8008310C
int GetCharFrameNum__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x80083124
int GetCharWidth__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x80083178
void Init__5CFont(struct CFont *this) {
}


// address: 0x800831AC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800831AC(struct TextDat *this, int FrNum) {
}


// address: 0x800831C8
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80083200
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


// address: 0x80083B80
// size: 0x24
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80083CB8
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


// address: 0x80083F5C
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


// address: 0x80084094
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80084318
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


// address: 0x800854D8
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


// address: 0x800856F0
// size: 0x8
struct PAL *GetPal__7TextDati_addr_800856F0(struct TextDat *this, int PalNum) {
}


// address: 0x8008570C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008570C(struct TextDat *this, int FrNum) {
}


// address: 0x80085728
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80085878
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80085944
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x80085984
void CycleSelCols__Fv() {
}


// address: 0x80085B3C
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


// address: 0x80085BB0
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80085C04
// size: 0xE0
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x80085D58
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80085D90
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x80085E58
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80085EE0
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80085F48
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80085FB0
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x8008600C
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x8008605C
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x800863A8
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x80086454
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x80086528
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


// address: 0x80086630
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


// address: 0x80086770
// size: 0xC
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x800867E8
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x80086810
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x80086838
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80086850
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


// address: 0x80087D40
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


// address: 0x80087EB0
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


// address: 0x80088CB4
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


// address: 0x800893E8
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


// address: 0x80089558
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008956C
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x80089580
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x80089644
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 4
	register int XDiff;
	// register: 7
	register int YDiff;
	// register: 6
	register int divnum;
}


// address: 0x800896C8
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x80089768
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008983C
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x800898BC
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800898C4
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800898D8
// size: 0xE0
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x800898E4
void PRIM_GetPrim__FPP8POLY_FT4_addr_800898E4(struct POLY_FT4 **Prim) {
}


// address: 0x80089960
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x800899A8
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800899E4
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80089A2C
void PRIM_GetPrim__FPP8POLY_GT4_addr_80089A2C(struct POLY_GT4 **Prim) {
}


// address: 0x80089AA8
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x80089B24
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


// address: 0x80089B4C
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x80089B68
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80089B90
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80089BB8
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x80089BDC
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x80089C00
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x80089C28
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x80089C34
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x80089CCC
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x80089D5C
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80089D94
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80089D94(struct TextDat *this, int Creature) {
}


// address: 0x80089E0C
int GetNumOfCreatures__7TextDat_addr_80089E0C(struct TextDat *this) {
}


// address: 0x80089E20
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_80089E20(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80089E2C
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80089E2C(struct TextDat *this, int PalNum) {
}


// address: 0x80089E48
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80089E48(struct TextDat *this, int FrNum) {
}


// address: 0x80089E64
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x80089E90
void OVR_LoadPregame__Fv() {
}


// address: 0x80089EB8
void OVR_LoadFrontend__Fv() {
}


// address: 0x80089EE0
void OVR_LoadGame__Fv() {
}


// address: 0x80089F08
void OVR_LoadFmv__Fv() {
}


// address: 0x80089F30
void OVR_LoadMemcard__Fv() {
}


// address: 0x80089F5C
void ClearOutOverlays__Fv() {
}


// address: 0x80089FB4
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008A078
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008A0E8
// size: 0x4
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x8008A0F4
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x8008A148
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008A2B8
// size: 0x4
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x8008A2C4
void StevesDummyPoll__Fv() {
}


// address: 0x8008A2CC
void Lambo__Fv() {
}


// address: 0x8008A2D4
// size: 0x84
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008A3B8
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008A410
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008A46C
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


// address: 0x8008A5B8
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


// address: 0x8008A9E4
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008AA64
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


// address: 0x8008AF3C
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008AFB8
// size: 0x4
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008B034
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008B03C
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008B044
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008B044(struct POLY_FT4 **Prim) {
}


// address: 0x8008B0C0
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008B0C0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008B0FC
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008B0FC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008B124
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008B138
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008B150
int GetNumOfFrames__7TextDatii_addr_8008B150(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008B188
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008B1AC
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008B1AC(struct TextDat *this, int Creature) {
}


// address: 0x8008B224
int GetNumOfCreatures__7TextDat_addr_8008B224(struct TextDat *this) {
}


// address: 0x8008B238
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008B238(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008B244
void PROF_Open__Fv() {
}


// address: 0x8008B284
bool PROF_State__Fv() {
}


// address: 0x8008B290
void PROF_On__Fv() {
}


// address: 0x8008B2A0
void PROF_Off__Fv() {
}


// address: 0x8008B2AC
void PROF_CpuEnd__Fv() {
}


// address: 0x8008B2DC
void PROF_CpuStart__Fv() {
}


// address: 0x8008B300
void PROF_DrawStart__Fv() {
}


// address: 0x8008B324
void PROF_DrawEnd__Fv() {
}


// address: 0x8008B354
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


// address: 0x8008B548
void PROF_Restart__Fv() {
}


// address: 0x8008B568
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008B85C
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008B90C
void GoBackLevel__Fv() {
}


// address: 0x8008B980
void GoWarpLevel__Fv() {
}


// address: 0x8008B9BC
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008BA58
void GoLoadGame__Fv() {
}


// address: 0x8008BAB0
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008BB4C
void GoNewLevel__Fv() {
}


// address: 0x8008BBA4
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008BC3C
void GoForwardLevel__Fv() {
}


// address: 0x8008BC90
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008BD28
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008BD7C
void PostNewGame__Fv() {
}


// address: 0x8008BDB4
void LevelToLevelInit__Fv() {
}


// address: 0x8008BDFC
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008BE40
// size: 0x10
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008BE98
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


// address: 0x8008C2CC
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


// address: 0x8008C750
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


// address: 0x8008C8F0
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008C93C
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008CCF8
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008CDEC
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008CEF0
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008CEF0(struct TextDat *this, int PalNum) {
}


// address: 0x8008CF0C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008CF0C(struct TextDat *this, int FrNum) {
}


// address: 0x8008CF28
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat *CDGfxData;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8008CFE0
void InitCDWaitIcon__Fv() {
}


// address: 0x8008D014
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008D028
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008D070
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


// address: 0x8008D0C4
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


// address: 0x8008D1E4
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


// address: 0x8008D31C
// size: 0x80
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008D458
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008D4B0
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008D5BC
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008D60C
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008D65C
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008D6E0
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008D7EC
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008D998
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008DA60
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008DC3C
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


// address: 0x8008DF3C
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


// address: 0x8008E370
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


// address: 0x8008E478
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


// address: 0x8008E504
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


// address: 0x8008E610
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8008E67C
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8008E6F4
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012B0D0
	static int DestAddr;
}


// address: 0x8008E76C
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8008E8A0
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008E8F4
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8008E918
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008E954
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008E9C8
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


// address: 0x8008EB84
void AS_CallBack0__Fi(int handle) {
}


// address: 0x8008EB98
void AS_CallBack1__Fi(int handle) {
}


// address: 0x8008EBAC
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x8008EC88
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8008ED28
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008ED34
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8008ED60
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x8008EE80
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x8008EEB4
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8008EF44
// size: 0x18
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008F020
// size: 0x18
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008F0A0
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x8008F140
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008F1D4
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


// address: 0x8008F248
void SCR_Handler__Fv() {
}


// address: 0x8008F270
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8008F278
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008F2B4
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008F318
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008F370
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008F3C8
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008F3DC
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x8008F408
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x8008F410
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8008F418
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x8008F424
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008F45C
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8008F468
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008F488
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008F4D4
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8008F4DC
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8008F510
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008F598
void SetAmbientLight__Fv() {
}


// address: 0x8008F61C
void print_demo_task__FP4TASK(struct TASK *T) {
	{
		{
			// register: 3
			register int x;
		}
	}
}


// address: 0x8008F828
void TonysDummyPoll__Fv() {
}


// address: 0x8008F84C
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8008F8AC
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8008F90C
void set_pad_record_play__Fi(int level) {
}


// address: 0x8008F980
void start_demo__Fv() {
}


// address: 0x8008FA1C
void SetQuest__Fv() {
}


// address: 0x8008FA44
int CurrCheatStr__Fv() {
}


// address: 0x8008FA64
void tony__Fv() {
}


// address: 0x8008FA9C
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8008FAA8
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8008FAB4
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008FB08
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008FB5C
void GLUE_PreTown__Fv() {
}


// address: 0x8008FBC0
void GLUE_PreDun__Fv() {
}


// address: 0x8008FC0C
bool GLUE_Finished__Fv() {
}


// address: 0x8008FC18
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8008FC24
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8008FCA8
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008FCB8
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008FCC8
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008FCD8
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8008FDB0
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


// address: 0x80090310
// size: 0xC
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x800903A8
// size: 0xC
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80090404
// size: 0xC
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80090434
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf *Inf;
}


// address: 0x80090494
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80090514
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x800905C0
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x800905CC
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x800905D4
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x800905E8
void SetDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 4
		register int i;
	}
}


// address: 0x800906C0
void RestoreDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090750
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x800907C8
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x80090800
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


// address: 0x80090864
bool RemoveCtrlScreen__Fv() {
}


// address: 0x800908CC
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x80090984
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800909C4
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80090A04
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


// address: 0x80090B58
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x80090BA0
bool only_one_button__Fi(int p) {
	// register: 3
	register int hand;
	// register: 5
	register int count;
}


// address: 0x80090BCC
unsigned char main_ctrl_setup__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	register int lv;
}


// address: 0x8009107C
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


// address: 0x80091578
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


// address: 0x80091A34
void _GLOBAL__D_ctrlflag() {
}


// address: 0x80091A5C
void _GLOBAL__I_ctrlflag() {
}


// address: 0x80091A84
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x80091AAC
unsigned short GetDown__C4CPad_addr_80091AAC(struct CPad *this) {
}


// address: 0x80091AD4
unsigned short GetUp__C4CPad_addr_80091AD4(struct CPad *this) {
}


// address: 0x80091AFC
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x80091B04
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x80091B0C
void SetRGB__6DialogUcUcUc_addr_80091B0C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80091B2C
void SetBorder__6Dialogi_addr_80091B2C(struct Dialog *this, int Type) {
}


// address: 0x80091B34
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80091B40
void ___6Dialog_addr_80091B40(struct Dialog *this, int __in_chrg) {
}


// address: 0x80091B68
// size: 0x10
struct Dialog *__6Dialog_addr_80091B68(struct Dialog *this) {
}


// address: 0x80091BC4
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80091C10
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x80091D64
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


// address: 0x80091EA8
void ReInitDFL__Fv() {
	// register: 5
	register int *yp;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80091EE0
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


// address: 0x800922A0
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x800922F4
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


// address: 0x80092558
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80092730
void nightgfx__FibiP8POLY_GT4i(int BlockBase, bool water, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x800927BC
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800927BC(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800927F8
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_800927F8(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80092820
void PRIM_GetPrim__FPP8POLY_FT4_addr_80092820(struct POLY_FT4 **Prim) {
}


// address: 0x8009289C
int GetNumOfActions__7TextDati_addr_8009289C(struct TextDat *this, int Creature) {
}


// address: 0x800928C0
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_800928C0(struct TextDat *this, int Creature) {
}


// address: 0x80092938
int GetNumOfCreatures__7TextDat_addr_80092938(struct TextDat *this) {
}


// address: 0x8009294C
void DaveLDummyPoll__Fv() {
}


// address: 0x80092954
void DaveL__Fv() {
}


// address: 0x8009297C
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
	// address: 0x80129D40
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


// address: 0x80092C68
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


// address: 0x80092F68
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x80093040
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


// address: 0x800930D0
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


// address: 0x800932C8
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


// address: 0x800933FC
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


// address: 0x800935CC
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x8009377C
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80093870
void doparticlejump__Fv() {
}


// address: 0x800938B0
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80093A18
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


// address: 0x80093E20
void ParticleBlob__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80093EB8
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80093F78
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


// address: 0x80094278
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x800944A0
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009453C
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80094660
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


// address: 0x8009479C
void HealStart__Fi(int plr) {
}


// address: 0x800947D0
void HealotherStart__Fi(int plr) {
}


// address: 0x80094808
void TeleStart__Fi(int plr) {
}


// address: 0x80094864
void PhaseStart__Fi(int plr) {
}


// address: 0x80094898
void PhaseEnd__Fi(int plr) {
}


// address: 0x800948C4
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


// address: 0x80094AA0
void ApocaStart__Fi(int plr) {
}


// address: 0x80094AF8
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80094B94
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x80094C10
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80094C8C
void PRIM_GetPrim__FPP8POLY_FT4_addr_80094C8C(struct POLY_FT4 **Prim) {
}


// address: 0x80094D08
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80094D58
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80094D64
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80094D64(struct TextDat *this, int FrNum) {
}


// address: 0x80094D80
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


// address: 0x80094F84
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


// address: 0x8009541C
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x80095490
void select_belt_item__Fi(int pnum) {
}


// address: 0x80095498
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80095500
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80095630
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80095768
void pad_func_up__Fi(int pnum) {
}


// address: 0x80095794
void pad_func_down__Fi(int pnum) {
}


// address: 0x800957C0
void pad_func_left__Fi(int pnum) {
}


// address: 0x800957C8
void pad_func_right__Fi(int pnum) {
}


// address: 0x800957D0
void pad_func_select__Fi(int pnum) {
}


// address: 0x8009588C
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80095D18
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


// address: 0x80096064
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


// address: 0x8009616C
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x18
	register struct Spell_Target *spl;
}


// address: 0x800961FC
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


// address: 0x800965FC
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x800966BC
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x800967C4
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800968BC
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800969A8
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80096A2C
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80096AC4
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80096B80
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80096BFC
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


// address: 0x80096DC4
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80096DEC
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80096E14
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


// address: 0x80096F54
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80097060
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


// address: 0x800978E0
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


// address: 0x800979BC
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80097AC8
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80097E88
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


// address: 0x80098160
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80098384
void _GLOBAL__D_gplayer() {
}


// address: 0x800983AC
void _GLOBAL__I_gplayer() {
}


// address: 0x800983D4
void SetRGB__6DialogUcUcUc_addr_800983D4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800983F4
void SetBack__6Dialogi_addr_800983F4(struct Dialog *this, int Type) {
}


// address: 0x800983FC
void SetBorder__6Dialogi_addr_800983FC(struct Dialog *this, int Type) {
}


// address: 0x80098404
void ___6Dialog_addr_80098404(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009842C
// size: 0x10
struct Dialog *__6Dialog_addr_8009842C(struct Dialog *this) {
}


// address: 0x80098488
unsigned short GetTick__C4CPad_addr_80098488(struct CPad *this) {
}


// address: 0x800984B0
unsigned short GetDown__C4CPad_addr_800984B0(struct CPad *this) {
}


// address: 0x800984D8
unsigned short GetCur__C4CPad_addr_800984D8(struct CPad *this) {
}


// address: 0x80098500
void SetPadTickMask__4CPadUs_addr_80098500(struct CPad *this, unsigned short mask) {
}


// address: 0x80098508
void SetPadTick__4CPadUs_addr_80098508(struct CPad *this, unsigned short tick) {
}


// address: 0x80098510
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009858C
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x800985E4
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80098640
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80098678
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800986B0
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80098710
bool IsGameLoading__Fv() {
}


// address: 0x8009871C
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


// address: 0x80098B90
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x80098C50
void TakeDownCutScreen__Fv() {
}


// address: 0x80098CDC
void FinishProgress__Fv() {
}


// address: 0x80098D40
void PRIM_GetPrim__FPP7POLY_G4_addr_80098D40(struct POLY_G4 **Prim) {
}


// address: 0x80098DBC
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x80098DF4
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x80098E2C
void SetRGB__6DialogUcUcUc_addr_80098E2C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80098E4C
void SetBack__6Dialogi_addr_80098E4C(struct Dialog *this, int Type) {
}


// address: 0x80098E54
void SetBorder__6Dialogi_addr_80098E54(struct Dialog *this, int Type) {
}


// address: 0x80098E5C
void ___6Dialog_addr_80098E5C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80098E84
// size: 0x10
struct Dialog *__6Dialog_addr_80098E84(struct Dialog *this) {
}


// address: 0x80098EE0
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80098F00
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}


// address: 0x80099138
void memcard_event__Fii(int evt, int side) {
}


// address: 0x80099140
void init_card__Fib(int card_number, bool read_dir) {
}


// address: 0x80099200
int ping_card__Fi(int card_number) {
}


// address: 0x80099294
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x800992CC
void MemcardON__Fv() {
}


// address: 0x8009933C
void MemcardOFF__Fv() {
}


// address: 0x8009938C
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
}


// address: 0x80099414
void card_removed__Fi(int card_number) {
}


// address: 0x8009943C
int read_card_block__Fii(int card_number, int block) {
}


// address: 0x80099484
int test_hw_event__Fv() {
}


// address: 0x80099504
void PrintSelectBack__FbT0(bool S, bool B) {
	// register: 17
	register int len;
}


// address: 0x80099684
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x80099768
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


// address: 0x80099C5C
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


// address: 0x8009A8EC
int who_pressed__Fi(int pval) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad1;
}


// address: 0x8009A974
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


// address: 0x8009AF7C
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


// address: 0x8009B5E4
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


// address: 0x8009BE1C
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


// address: 0x8009C298
void CalcVolumes__Fv() {
}


// address: 0x8009C3D0
void SetLoadedVolumes__Fv() {
}


// address: 0x8009C458
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


// address: 0x8009C4F4
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009C69C
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


// address: 0x8009C920
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


// address: 0x8009D1E0
void ToggleOptions__Fv() {
}


// address: 0x8009D298
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


// address: 0x8009D5B8
void ActivateMemcard__Fv() {
}


// address: 0x8009D63C
void PRIM_GetPrim__FPP7POLY_G4_addr_8009D63C(struct POLY_G4 **Prim) {
}


// address: 0x8009D6B8
unsigned short GetTick__C4CPad_addr_8009D6B8(struct CPad *this) {
}


// address: 0x8009D6E0
unsigned short GetDown__C4CPad_addr_8009D6E0(struct CPad *this) {
}


// address: 0x8009D708
unsigned short GetUp__C4CPad_addr_8009D708(struct CPad *this) {
}


// address: 0x8009D730
void SetPadTickMask__4CPadUs_addr_8009D730(struct CPad *this, unsigned short mask) {
}


// address: 0x8009D738
void SetPadTick__4CPadUs_addr_8009D738(struct CPad *this, unsigned short tick) {
}


// address: 0x8009D740
void Flush__4CPad_addr_8009D740(struct CPad *this) {
}


// address: 0x8009D764
void SetRGB__6DialogUcUcUc_addr_8009D764(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009D784
void SetBack__6Dialogi_addr_8009D784(struct Dialog *this, int Type) {
}


// address: 0x8009D78C
void SetBorder__6Dialogi_addr_8009D78C(struct Dialog *this, int Type) {
}


// address: 0x8009D794
void ___6Dialog_addr_8009D794(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009D7BC
// size: 0x10
struct Dialog *__6Dialog_addr_8009D7BC(struct Dialog *this) {
}


// address: 0x8009D818
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009D818(struct TextDat *this, int FrNum) {
}


// address: 0x8009D834
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009D88C
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x8009D9D0
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009DA4C
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


// address: 0x8009DBD8
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009DC2C
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009DD94
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009DE98
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009DF04
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009DF88
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009E034
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


// address: 0x8009E144
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009E1F0
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


// address: 0x8009E294
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


// address: 0x8009E540
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009E598
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009E604
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009E6F0
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


// address: 0x8009E820
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009E8F8
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009EA50
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x8009EAEC
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x8009EC1C
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x8009ED28
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


// address: 0x8009EF34
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009EF34(struct POLY_FT4 **Prim) {
}


// address: 0x8009EFB0
short PlayFMV__FPcii(char *str, int w, int h) {
	// register: 16
	register short RetVal;
	// register: 19
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009F084
void play_movie(char *pszMovie) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8009F140
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


// address: 0x8009F5DC
unsigned short GetDown__C4CPad_addr_8009F5DC(struct CPad *this) {
}


// address: 0x8009F604
int GetNumOfFrames__7TextDatii_addr_8009F604(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8009F63C
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8009F63C(struct TextDat *this, int Creature) {
}


// address: 0x8009F6B4
int GetNumOfCreatures__7TextDat_addr_8009F6B4(struct TextDat *this) {
}


// address: 0x8009F6C8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009F6C8(struct TextDat *this, int FrNum) {
}


// address: 0x8009F6E4
void LoadKanjiFont__FPc(char *name) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009F7D4
void LoadKanjiIndex__FPc(char *name) {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009F8E4
void FreeKanji__Fv() {
}


// address: 0x8009F96C
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto char tmp[40];
	// register: 16
	register char *bname;
}


// address: 0x8009FA40
unsigned short *getb__FUs(unsigned short n) {
	// register: 4
	// size: 0x4
	register struct kindexS *ii;
	// register: 3
	register int i;
	// register: 16
	register int off;
}


// address: 0x8009FAB0
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


// address: 0x8009FB80
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


// address: 0x8009FCEC
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009FCEC(struct POLY_FT4 **Prim) {
}


// address: 0x8009FD68
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


// address: 0x8009FE50
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


// address: 0x800A0090
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


// address: 0x800A0130
void fputc__5blockUc(struct block *this, unsigned char Val) {
}


// address: 0x800A0158
void HelpPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x800A0268
void InitHelp__Fv() {
}


// address: 0x800A02AC
int GetControlKey__FiPb(int str, bool *iscombo) {
	// register: 6
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 7
		register int i;
	}
}


// address: 0x800A0354
void CheckStr__FPcT0i(char *s, char *d, int pos) {
	// register: 20
	register char c;
	// register: 17
	register int l;
}


// address: 0x800A049C
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


// address: 0x800A0878
void DrawHelp__Fv() {
}


// address: 0x800A0914
void _GLOBAL__D_DrawHelp__Fv() {
}


// address: 0x800A093C
void _GLOBAL__I_DrawHelp__Fv() {
}


// address: 0x800A0964
void SetRGB__6DialogUcUcUc_addr_800A0964(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800A0984
void SetBorder__6Dialogi_addr_800A0984(struct Dialog *this, int Type) {
}


// address: 0x800A098C
void ___6Dialog_addr_800A098C(struct Dialog *this, int __in_chrg) {
}


// address: 0x800A09B4
// size: 0x10
struct Dialog *__6Dialog_addr_800A09B4(struct Dialog *this) {
}


// address: 0x800A0A10
int GetCharWidth__5CFontUc_addr_800A0A10(struct CFont *this, unsigned char ch) {
}


// address: 0x800A0A64
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800A0A64(struct TextDat *this, int FrNum) {
}


// address: 0x800A0A80
unsigned short GetTick__C4CPad_addr_800A0A80(struct CPad *this) {
}


// address: 0x800A0AA8
unsigned short GetDown__C4CPad_addr_800A0AA8(struct CPad *this) {
}


// address: 0x800A0AD0
void SetPadTickMask__4CPadUs_addr_800A0AD0(struct CPad *this, unsigned short mask) {
}


// address: 0x800A0AD8
void SetPadTick__4CPadUs_addr_800A0AD8(struct CPad *this, unsigned short tick) {
}


// address: 0x8002C6BC
unsigned char TrimCol__Fs_addr_8002C6BC(short col) {
}


// address: 0x8002C6F4
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


// address: 0x8002D214
void SetSpellTrans__Fc(char t) {
}


// address: 0x8002D220
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8002D2C8
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


// address: 0x8002D36C
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8002D420
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


// address: 0x8002DFE4
void SetSpell__Fi(int pnum) {
}


// address: 0x8002E0B8
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x8002E168
void ClearPanel__Fv() {
}


// address: 0x8002E198
void InitPanelStr__Fv() {
}


// address: 0x8002E1B8
void InitControlPan__Fv() {
	// register: 3
	register int i;
}


// address: 0x8002E3D8
void DrawCtrlPan__Fv() {
}


// address: 0x8002E404
void DoAutoMap__Fv() {
}


// address: 0x8002E478
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


// address: 0x8002EB98
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


// address: 0x8002ECA8
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


// address: 0x8002EDC4
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


// address: 0x8002F080
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


// address: 0x8002F73C
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


// address: 0x8002FC8C
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x8002FD34
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


// address: 0x8002FE9C
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x8002FF78
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


// address: 0x80030070
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


// address: 0x80031348
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


// address: 0x800317E8
void DrawChrTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
}


// address: 0x800318CC
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80031960
void CheckChrBtns__Fv() {
	// register: 16
	register int pc;
}


// address: 0x80031CCC
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80031D50
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80031E38
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x80031ED0
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x800320E8
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


// address: 0x80032ACC
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


// address: 0x80032D00
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80032D34
void _GLOBAL__D_DrawLevelUpFlag() {
}


// address: 0x80032D5C
void _GLOBAL__I_DrawLevelUpFlag() {
}


// address: 0x80032D98
unsigned short GetTick__C4CPad_addr_80032D98(struct CPad *this) {
}


// address: 0x80032DC0
unsigned short GetDown__C4CPad_addr_80032DC0(struct CPad *this) {
}


// address: 0x80032DE8
void SetPadTickMask__4CPadUs_addr_80032DE8(struct CPad *this, unsigned short mask) {
}


// address: 0x80032DF0
void SetPadTick__4CPadUs_addr_80032DF0(struct CPad *this, unsigned short tick) {
}


// address: 0x80032DF8
void SetRGB__6DialogUcUcUc_addr_80032DF8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80032E18
void SetBack__6Dialogi_addr_80032E18(struct Dialog *this, int Type) {
}


// address: 0x80032E20
void SetBorder__6Dialogi_addr_80032E20(struct Dialog *this, int Type) {
}


// address: 0x80032E28
void ___6Dialog_addr_80032E28(struct Dialog *this, int __in_chrg) {
}


// address: 0x80032E50
// size: 0x10
struct Dialog *__6Dialog_addr_80032E50(struct Dialog *this) {
}


// address: 0x80032EAC
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80032EAC(struct TextDat *this, int PalNum) {
}


// address: 0x80032EC8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80032EC8(struct TextDat *this, int FrNum) {
}


// address: 0x80032EE4
void InitCursor__Fv() {
}


// address: 0x80032EEC
void FreeCursor__Fv() {
}


// address: 0x80032EF4
void SetICursor__Fi(int i) {
}


// address: 0x80032F50
void SetCursor__Fi(int i) {
}


// address: 0x80032FB4
void NewCursor__Fi(int i) {
}


// address: 0x80032FD4
void InitLevelCursor__Fv() {
}


// address: 0x80033034
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


// address: 0x800332C0
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


// address: 0x80033520
void CheckCursMove__Fv() {
}


// address: 0x80033528
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


// address: 0x80033724
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x8003376C
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x800337BC
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80033818
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8003388C
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80033950
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80033B38
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80033CA8
unsigned char TryIconCurs__Fv() {
}


// address: 0x80034084
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x8003408C
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x8003413C
void LoadLvlGFX__Fv() {
}


// address: 0x800341D8
void LoadAllGFX__Fv() {
}


// address: 0x800341F8
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800342F0
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80034478
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


// address: 0x80034554
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


// address: 0x80034EB0
void game_logic__Fv() {
}


// address: 0x80034FBC
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80035064
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x8003509C
void alloc_plr__Fv() {
}


// address: 0x800350A4
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x800350AC
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x800350CC
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x800350EC
void app_fatal(char *pszFile) {
}


// address: 0x8003511C
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80035144
void DoMemCardFromInGame__Fv() {
}


// address: 0x8003516C
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800351C0
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800351E0
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80035228
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80035388
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80035440
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003556C
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800356A0
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800357D0
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035900
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035A30
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035B68
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035C98
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035DC8
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035EF8
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


// address: 0x800361BC
void InitTowners__Fv() {
}


// address: 0x80036248
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


// address: 0x800362EC
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8003641C
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80036450
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80036484
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x8003656C
void TownHealer__Fv() {
}


// address: 0x80036594
void TownStory__Fv() {
}


// address: 0x800365BC
void TownDrunk__Fv() {
}


// address: 0x800365E4
void TownBoy__Fv() {
}


// address: 0x8003660C
void TownWitch__Fv() {
}


// address: 0x80036634
void TownBarMaid__Fv() {
}


// address: 0x8003665C
void TownCow__Fv() {
}


// address: 0x80036684
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


// address: 0x800368D4
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800369A8
void CowSFX__Fi(int pnum) {
	// address: 0x80120040
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012A3BC
	static int snLastCowSFX;
}


// address: 0x80036AC4
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80036B04
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


// address: 0x80037FD8
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x80037FE0
void stream_stop__Fv() {
}


// address: 0x80038034
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x80038124
void stream_update__Fv() {
}


// address: 0x8003812C
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x80038148
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x800381A0
void FreeMonsterSnd__Fv() {
}


// address: 0x800381A8
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x800382AC
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x800383A8
void PlayEffect__Fii(int i, int mode) {
	// register: 3
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x800384EC
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003858C
void PlaySFX__Fi(int psfx) {
}


// address: 0x800385CC
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x80038620
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


// address: 0x800386B8
void sound_update__Fv() {
}


// address: 0x800386EC
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x80038730
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x800387D8
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003887C
void SetRndSeed__Fl(long s) {
}


// address: 0x8003888C
long GetRndSeed__Fv() {
}


// address: 0x800388D4
long random__Fil(int idx, long v) {
}


// address: 0x80038940
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003898C
void mem_free_dbg__FPv(void *p) {
}


// address: 0x800389DC
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x800389E4
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x800389EC
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x800389F4
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x80038A88
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80038AB4
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFEE8
	// size: 0x100
	auto char tempstr[256];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x80038BC0
void interface_msg_pump__Fv() {
}


// address: 0x80038BC8
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


// address: 0x80039100
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80039138
void InitItemGFX__Fv() {
}


// address: 0x80039164
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003922C
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


// address: 0x80039444
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003961C
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


// address: 0x8003A0CC
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003A44C
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003A4E8
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


// address: 0x8003A648
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003A694
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


// address: 0x8003A774
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003AA08
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003AACC
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003ABE4
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003AC10
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


// address: 0x8003AD8C
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003AD94
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003ADC4
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003B200
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003B4D8
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


// address: 0x8003B704
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


// address: 0x8003B86C
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


// address: 0x8003B934
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003B9EC
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003BC54
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


// address: 0x8003BE44
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


// address: 0x8003C0F8
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003C644
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003C67C
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003C6F0
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8003DE1C
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


// address: 0x8003E284
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x8003E380
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x8003E488
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x8003E6CC
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


// address: 0x8003E90C
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x8003EA80
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


// address: 0x8003EB80
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


// address: 0x8003ED30
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x8003EFD8
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x8003F110
void ItemRndDur__Fi(int ii) {
}


// address: 0x8003F1A0
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x8003F4AC
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x8003F6F4
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x8003F824
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x8003F96C
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x8003FA44
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x8003FB04
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x8003FC48
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x8003FE34
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


// address: 0x800400A8
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


// address: 0x80040268
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x80040420
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80040474
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x8004053C
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


// address: 0x80040744
void FreeItemGFX__Fv() {
}


// address: 0x8004074C
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


// address: 0x800408F4
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x800409E4
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80040AB4
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80040B78
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80040BE8
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


// address: 0x80040CE8
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80040DDC
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80041498
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x800414A0
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x8004162C
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x8004199C
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80041CAC
void CastScroll__Fii(int pnum, int Spell) {
}


// address: 0x80041CC4
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
}


// address: 0x800422DC
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80042370
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x800423EC
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x800424F4
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct holditem;
}


// address: 0x80042714
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x80042958
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80042AA8
void SpawnStoreGold__Fv() {
}


// address: 0x80042B2C
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80042CCC
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80042D30
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80042EC0
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x8004303C
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x800431B8
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x8004332C
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 16
	register int PreIdx;
	// register: 3
	register int SufIdx;
}


// address: 0x8004352C
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x80043594
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


// address: 0x80043610
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x8004367C
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


// address: 0x8004432C
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


// address: 0x80044574
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


// address: 0x80044638
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


// address: 0x80044B48
void FreeLightTable__Fv() {
}


// address: 0x80044B50
void InitLightTable__Fv() {
}


// address: 0x80044B58
void MakeLightTable__Fv() {
}


// address: 0x80044B60
void InitLightMax__Fv() {
}


// address: 0x80044B84
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80044BC8
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80044C34
void AddUnLight__Fi(int i) {
}


// address: 0x80044C64
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80044C90
void ChangeLightXY__Fiii(int i, int x, int y) {
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80044CCC
void light_fix__Fi(int i) {
}


// address: 0x80044CD4
void ChangeLightOff__Fiii(int i, int x, int y) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80044D08
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80044D40
void ChangeLightColour__Fii(int i, int c) {
	// register: 4
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80044D68
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


// address: 0x80044E8C
void SavePreLighting__Fv() {
}


// address: 0x80044E94
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80044EE4
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


// address: 0x80044F60
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80045014
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 9
	register int i;
	// register: 8
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x80045094
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
	// register: 18
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x80045294
void FreeQuestText__Fv() {
}


// address: 0x8004529C
void InitQuestText__Fv() {
}


// address: 0x800452A8
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


// address: 0x800453F8
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x800455A0
void DrawQTextBack__Fv() {
}


// address: 0x80045610
void DrawQTextTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int quest_pad;
	{
	}
}


// address: 0x80045774
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


// address: 0x80045AFC
void _GLOBAL__D_QBack() {
}


// address: 0x80045B24
void _GLOBAL__I_QBack() {
}


// address: 0x80045B4C
void SetRGB__6DialogUcUcUc_addr_80045B4C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80045B6C
void SetBorder__6Dialogi_addr_80045B6C(struct Dialog *this, int Type) {
}


// address: 0x80045B74
void ___6Dialog_addr_80045B74(struct Dialog *this, int __in_chrg) {
}


// address: 0x80045B9C
// size: 0x10
struct Dialog *__6Dialog_addr_80045B9C(struct Dialog *this) {
}


// address: 0x80045BF8
int GetCharWidth__5CFontUc_addr_80045BF8(struct CFont *this, unsigned char ch) {
}


// address: 0x80045C4C
unsigned short GetDown__C4CPad_addr_80045C4C(struct CPad *this) {
}


// address: 0x80045C74
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80045C74(struct TextDat *this, int FrNum) {
}


// address: 0x80045C90
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80045C98
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80045CA0
void delta_init__Fv() {
}


// address: 0x80045D00
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80045D9C
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80045E20
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x80045EB0
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


// address: 0x800461DC
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x8004623C
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


// address: 0x80046400
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


// address: 0x80046588
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x800465AC
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x800465D0
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


// address: 0x800467E4
int DeltaExportData__FPc(char *Dst) {
	// register: 16
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8004688C
int DeltaImportData__FPc(char *Src) {
	// register: 16
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80046938
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80046A34
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x80046A5C
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x80046AA8
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x80046AD8
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80046B10
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80046B50
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x80046B98
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x80046BC4
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80046BF4
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80046C2C
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80046CA0
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80046DD4
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80046E50
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80046EA8
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80046F10
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80047018
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x800470BC
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x800470EC
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80047200
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80047208
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x8004723C
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80047298
void delta_close_portal__Fi(int pnum) {
}


// address: 0x800472D8
void check_update_plr__Fi(int pnum) {
}


// address: 0x800472E0
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80047360
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80047390
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800473C0
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800473F0
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80047420
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80047494
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004751C
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x8004765C
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


// address: 0x8004782C
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800478B4
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x800479E8
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


// address: 0x80047BB0
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80047BFC
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80047D14
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80047E14
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80047E6C
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80047EF8
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80047FE0
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800480B8
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048194
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x80048274
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x80048354
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800483A0
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 19
	// size: 0x4
	register struct TCmdParam1 *p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x800484D4
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004859C
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004865C
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048720
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800487E4
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004882C
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048864
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004888C
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048914
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048944
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048A38
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048AA4
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048B10
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


// address: 0x80048C28
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048D14
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048D5C
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048F18
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048F94
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049010
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004908C
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049108
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049180
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049188
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049190
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049198
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800491F0
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049468
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


// address: 0x800495F8
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049648
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049690
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800496D0
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049710
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049750
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049790
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x800497D8
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


// address: 0x800498B4
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012B220
	static unsigned char sbLastCmd;
}


// address: 0x80049CD4
// size: 0xF1C
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x80049D64
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x80049D9C
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x80049DC8
int InitLevelType__Fi(int l) {
}


// address: 0x80049E14
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x80049FA4
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004A018
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


// address: 0x8004A26C
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004A3A4
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004A4F0
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004A578
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004A5B8
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004A65C
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004A6EC
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


// address: 0x8004A908
void FreeObjectGFX__Fv() {
}


// address: 0x8004A914
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004A9CC
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004AC50
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004ACB0
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004ACD8
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004ADE4
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004AEF0
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


// address: 0x8004B100
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


// address: 0x8004B43C
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004B4A0
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


// address: 0x8004B77C
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004B7EC
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004B980
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004B9CC
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004BAF0
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004BDC0
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


// address: 0x8004C110
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004C3A0
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004C67C
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004C6B4
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


// address: 0x8004C788
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004C790
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004C798
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004CA18
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004CABC
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004CE60
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004D238
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004D5D0
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004D968
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004DC70
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004DF78
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


// address: 0x8004E474
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8004E5AC
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x8004E6C0
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x8004E878
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x8004E924
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x8004EAA8
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x8004EC04
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


// address: 0x8004EDF0
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


// address: 0x8004F318
void OperateBookLever__Fii(int pnum, int i) {
	// register: 20
	register int x;
	// register: 19
	register int y;
	// register: 16
	register int tren;
}


// address: 0x8004F8A8
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x8004FAE8
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x8004FEB8
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80050084
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80050238
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005048C
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x8005065C
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80050814
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80050970
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80050ACC
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


// address: 0x80050BD4
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


// address: 0x800510EC
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


// address: 0x800512B0
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80051320
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


// address: 0x800538F0
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80053A6C
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80053C70
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80053D58
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80053EC8
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80053FB8
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x80054060
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80054104
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


// address: 0x800546B0
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x8005485C
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x8005494C
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x80054AB0
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80054EE8
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80054FFC
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80055110
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80055224
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x80055424
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


// address: 0x80055614
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80055B68
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80055CC8
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80055D24
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80055E3C
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


// address: 0x80055F74
void SyncLever__Fi(int i) {
}


// address: 0x80055FF0
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x800560FC
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


// address: 0x80056258
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x800563C0
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x800564EC
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x8005662C
void GetObjectStr__Fi(int i) {
}


// address: 0x80056A48
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


// address: 0x80056C64
int GetNumOfFrames__7TextDatii_addr_80056C64(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80056C9C
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80056C9C(struct TextDat *this, int Creature) {
}


// address: 0x80056D14
int GetNumOfCreatures__7TextDat_addr_80056D14(struct TextDat *this) {
}


// address: 0x80056D28
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80056D30
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80056D5C
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x80056E10
void SetupLocalPlayer__Fv() {
}


// address: 0x80056E30
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80056E74
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80056E88
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80056EA8
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80056EB0
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80056ECC
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80056EF0
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005712C
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80057548
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x800575B0
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80057720
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


// address: 0x8005792C
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


// address: 0x800579B0
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


// address: 0x80057D50
void InitMultiView__Fv() {
}


// address: 0x80057D58
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFA0
	// size: 0x60
	auto struct bbssbb bodge[12];
	{
		// register: 4
		register int i;
	}
}


// address: 0x80057DF0
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80057E78
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80057F0C
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80058000
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058014
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x800580A0
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058104
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800DED80
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80058140
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005816C
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x800582A4
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005833C
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x800584D8
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


// address: 0x800585F8
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x80058718
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x800588B4
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


// address: 0x80058A7C
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


// address: 0x80058DC4
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005920C
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 6
	register int i;
	// register: 5
	register int mx;
	// register: 4
	register int pnum;
}


// address: 0x80059364
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x80059384
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


// address: 0x8005966C
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059730
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x80059874
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059904
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x800599C0
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800599C8
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x80059A50
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x80059DBC
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x80059F5C
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


// address: 0x8005A58C
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


// address: 0x8005A93C
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005A9CC
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


// address: 0x8005AD58
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005AE58
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AF1C
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AFBC
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


// address: 0x8005BF80
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C2C0
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


// address: 0x8005C3C0
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005C43C
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C57C
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C584
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005C9C4
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005CA2C
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


// address: 0x8005CF14
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CFB0
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


// address: 0x8005D2E4
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D30C
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


// address: 0x8005D4B4
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005D4BC
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


// address: 0x8005D8CC
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x8005D9F4
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DA24
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005DBC0
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005DCDC
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005DDC8
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005DEAC
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005DF88
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005DFCC
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005E0A8
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005E118
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005E1F4
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005E260
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E268
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005E598
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E5C0
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x8005E604
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005E638
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005E66C
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005E6A0
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x8005E6D4
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005E708
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x8005E740
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005E774
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E79C
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E7C4
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E7EC
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x8005E834
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E85C
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E884
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005E8B8
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E8E0
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x8005E924
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x8005E958
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005E98C
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x8005E9D8
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x8005EA24
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x8005EA70
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x8005EAC4
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x8005EB10
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x8005EB5C
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005EBAC
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x8005EBF8
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x8005EC44
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x8005EC90
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x8005ECDC
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x8005ED28
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x8005ED74
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x8005EDC4
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x8005EE10
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x8005EE60
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x8005EEAC
void CheckNewPath__Fi(int pnum) {
}


// address: 0x8005EEF8
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x8005EF44
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x8005EF90
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x8005EFDC
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x8005F028
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x8005F074
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x8005F0C0
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x8005F10C
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x8005F158
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x8005F1A4
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x8005F1D8
void PRIM_GetPrim__FPP8POLY_FT4_addr_8005F1D8(struct POLY_FT4 **Prim) {
}


// address: 0x8005F254
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri_addr_8005F254(int PNum) {
}


// address: 0x8005F2A4
int GetLastOtPos__C7CPlayer_addr_8005F2A4(struct CPlayer *this) {
}


// address: 0x8005F2B0
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x8005F2BC
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x8005F2C8
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


// address: 0x8005F514
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


// address: 0x8005F9D4
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


// address: 0x8005FB78
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x8005FC0C
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


// address: 0x800601EC
void SetReturnLvlPos__Fv() {
}


// address: 0x800602FC
void GetReturnLvlPos__Fv() {
}


// address: 0x80060350
void ResyncMPQuests__Fv() {
}


// address: 0x8006048C
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x800609EC
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


// address: 0x80060C18
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80060DE0
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80060E78
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80060F90
void QuestlogUp__Fv() {
}


// address: 0x80060FE4
void QuestlogDown__Fv() {
}


// address: 0x80061050
void RemoveQLog__Fv() {
}


// address: 0x800610C8
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x8006118C
void QuestlogESC__Fv() {
}


// address: 0x800611B4
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80061234
void _GLOBAL__D_questlog() {
}


// address: 0x8006125C
void _GLOBAL__I_questlog() {
}


// address: 0x80061284
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x80061290
void SetRGB__6DialogUcUcUc_addr_80061290(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800612B0
void SetBack__6Dialogi_addr_800612B0(struct Dialog *this, int Type) {
}


// address: 0x800612B8
void SetBorder__6Dialogi_addr_800612B8(struct Dialog *this, int Type) {
}


// address: 0x800612C0
void ___6Dialog_addr_800612C0(struct Dialog *this, int __in_chrg) {
}


// address: 0x800612E8
// size: 0x10
struct Dialog *__6Dialog_addr_800612E8(struct Dialog *this) {
}


// address: 0x80061344
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80061344(struct TextDat *this, int PalNum) {
}


// address: 0x80061360
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80061360(struct TextDat *this, int FrNum) {
}


// address: 0x8006137C
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x80061544
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x80061670
void FreeStoreMem__Fv() {
}


// address: 0x80061678
void DrawSTextBack__Fv() {
}


// address: 0x800616E8
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
	// address: 0x8012A5AC
	static unsigned char DaveFix;
}


// address: 0x80061ADC
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80061B70
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80061C08
void AddSLine__Fi(int y) {
}


// address: 0x80061C58
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80061C80
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80061D34
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x800621BC
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


// address: 0x800627DC
void S_StartSmith__Fv() {
}


// address: 0x80062964
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80062B1C
void S_StartSBuy__Fv() {
}


// address: 0x80062C4C
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


// address: 0x80062E6C
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80062FBC
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x800630A0
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


// address: 0x800632C8
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800636F8
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006379C
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006397C
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80063E4C
void S_StartWitch__Fv() {
}


// address: 0x80063F8C
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


// address: 0x80064164
void S_StartWBuy__Fv() {
}


// address: 0x80064290
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x800643B4
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80064A0C
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80064A94
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80064C14
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80065034
void S_StartNoMoney__Fv() {
}


// address: 0x8006509C
void S_StartNoRoom__Fv() {
}


// address: 0x800650FC
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x80065474
void S_StartBoy__Fv() {
}


// address: 0x80065604
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006578C
void S_StartHealer__Fv() {
}


// address: 0x80065960
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80065ACC
void S_StartHBuy__Fv() {
}


// address: 0x80065BEC
void S_StartStory__Fv() {
}


// address: 0x80065CDC
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80065D10
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80065DE4
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80066844
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80066A18
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


// address: 0x80066C48
void S_StartTavern__Fv() {
}


// address: 0x80066D40
void S_StartBarMaid__Fv() {
}


// address: 0x80066E14
void S_StartDrunk__Fv() {
}


// address: 0x80066EE8
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800671D0
void DrawSText__Fv() {
}


// address: 0x80067210
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800672D8
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80067484
void STextESC__Fv() {
}


// address: 0x800675F8
void STextUp__Fv() {
}


// address: 0x80067790
void STextDown__Fv() {
}


// address: 0x80067940
void S_SmithEnter__Fv() {
}


// address: 0x80067A14
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80067A90
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80067B0C
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80067F58
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006814C
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80068370
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x800684F8
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


// address: 0x80068728
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


// address: 0x800689E0
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


// address: 0x80068C44
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80068F38
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006903C
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x800692AC
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80069408
void S_WitchEnter__Fv() {
}


// address: 0x800694B8
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x800696B8
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800698A4
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x800699A8
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x80069B20
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80069C7C
void S_BoyEnter__Fv() {
}


// address: 0x80069DB4
void BoyBuyItem__Fv() {
}


// address: 0x80069E38
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006A0DC
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A2C4
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006A610
void S_ConfirmEnter__Fv() {
}


// address: 0x8006A72C
void S_HealerEnter__Fv() {
}


// address: 0x8006A7C4
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A9D0
void S_StoryEnter__Fv() {
}


// address: 0x8006AA68
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006ABE4
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


// address: 0x8006ADDC
void S_TavernEnter__Fv() {
}


// address: 0x8006AE4C
void S_BarmaidEnter__Fv() {
}


// address: 0x8006AEBC
void S_DrunkEnter__Fv() {
}


// address: 0x8006AF2C
void STextEnter__Fv() {
}


// address: 0x8006B0F0
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006B1DC
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006B1F0
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006B218
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006B240
unsigned short GetDown__C4CPad_addr_8006B240(struct CPad *this) {
}


// address: 0x8006B268
void SetRGB__6DialogUcUcUc_addr_8006B268(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006B288
void SetBorder__6Dialogi_addr_8006B288(struct Dialog *this, int Type) {
}


// address: 0x8006B290
void ___6Dialog_addr_8006B290(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006B2B8
// size: 0x10
struct Dialog *__6Dialog_addr_8006B2B8(struct Dialog *this) {
}


// address: 0x8006B314
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006B4C4
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


// address: 0x8006B6BC
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


// address: 0x8006B7AC
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


// address: 0x8006BB6C
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


// address: 0x8006BCD4
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


// address: 0x8006BDB8
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


// address: 0x8006BE50
void InitVPTriggers__Fv() {
}


// address: 0x8006BE98
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006C1B0
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006C460
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x8006C8C0
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006CD3C
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006D248
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


// address: 0x8006D308
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006D3FC
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006D4F0
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006D5E4
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


// address: 0x8006D8EC
void FadeGameOut__Fv() {
}


// address: 0x8006D988
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x8006D9EC
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


// address: 0x8006DF08
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


// address: 0x8006E1D0
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x8006E314
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x8006E3B4
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x8006E660
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x8006E914
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8006EB78
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x8006EB80
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x8006EBE8
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x8006EC08
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x8006EC68
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x8006ECF8
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x8006ED48
void music_stop__Fv() {
}


// address: 0x8006ED8C
void music_fade__Fv() {
}


// address: 0x8006EDCC
void music_start__Fi(int nTrack) {
	{
		{
			// register: 2
			register int MusicVolume;
		}
	}
}


// address: 0x8006EE50
void music_hold__Fv() {
}


// address: 0x8006EEB0
void music_release__Fv() {
}


// address: 0x8006EF00
unsigned char snd_playing__Fi(int SFXNo) {
}


// address: 0x8006EF20
void ClrCursor__Fi(int num) {
}


// address: 0x8006EF70
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


// address: 0x8006F42C
void CloseInvChr__Fv() {
}


// address: 0x8006F47C
int LeftOf__Fi(int dir) {
}


// address: 0x8006F494
int RightOf__Fi(int dir) {
}


// address: 0x8006F4B0
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8006F55C
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x8006F620
// size: 0x94
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x8006F714
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x8006F71C
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x8006F760
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x8006F7A4
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x8006FA04
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x8006FBB4
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x8006FC10
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x8006FC4C
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x8006FD10
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


// address: 0x8007011C
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80070260
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x80070354
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x8007046C
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x800704C0
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


// address: 0x800708CC
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80070BE4
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


// address: 0x80070FC4
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


// address: 0x80071164
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


// address: 0x8007183C
void GamePadTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80071908
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 3
	// size: 0x94
	register struct GamePad *GP1;
	// register: 8
	// size: 0x94
	register struct GamePad *GP2;
}


// address: 0x80071A18
void Init_GamePad__Fv() {
}


// address: 0x80071A48
void InitGamePadVars__Fv() {
}


// address: 0x80071AD8
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x80071B48
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad *GPad;
}


// address: 0x80071B6C
void _GLOBAL__I_flyflag() {
}


// address: 0x80071BA4
void MoveToScrollTarget__7CBlocks_addr_80071BA4(struct CBlocks *this) {
}


// address: 0x80071BB8
unsigned short GetDown__C4CPad_addr_80071BB8(struct CPad *this) {
}


// address: 0x80071BE0
unsigned short GetUp__C4CPad_addr_80071BE0(struct CPad *this) {
}


// address: 0x80071C08
unsigned short GetCur__C4CPad_addr_80071C08(struct CPad *this) {
}


// address: 0x80071C30
void DoGameTestStuff__Fv() {
}


// address: 0x80071C5C
void DoInitGameStuff__Fv() {
}


// address: 0x80071C90
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80071CB0
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80071CD0
void GRL_InitGwin__Fv() {
}


// address: 0x80071CDC
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x80071CEC
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80071D14
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80071DC0
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x80071E08
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80071E14
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


// address: 0x80071F80
char *GetStr__Fi(int StrId) {
}


// address: 0x80071FE8
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x8007201C
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


// address: 0x80072180
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x800721D8
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x800721E4
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x800722AC
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x8007232C
void TempPrintMissile__FiiiiiiiiccUcUcUcc(int ScrX, int ScrY, int OtPos, int spell, int aframe, int direction, int anim, int sfx, int xflip, int yflip, int red, int grn, int blu, int semi) {
	// address: 0xFFFFFFA8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// register: 17
	// size: 0x6C
	register struct TextDat *missdat;
	// register: 16
	register int frame;
	// register: 5
	register int tv1;
}


// address: 0x80072690
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int anim;
}


// address: 0x80072728
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 4
	register int anim;
}


// address: 0x800727A4
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x8007283C
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800728EC
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80072950
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80072A68
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80072B00
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80072B98
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80072C00
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80072CA0
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


// address: 0x80072D80
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


// address: 0x80072E58
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80072EE8
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


// address: 0x80073004
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x800730A0
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073108
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073170
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x800732D4
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80073418
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073480
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800734D8
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


// address: 0x800735A4
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073608
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007366C
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


// address: 0x80073B94
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073C3C
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073C44
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073C78
void FuncWEAPEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80073C9C
void PRIM_GetPrim__FPP8POLY_FT4_addr_80073C9C(struct POLY_FT4 **Prim) {
}


// address: 0x80073D18
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri_addr_80073D18(int PNum) {
}


// address: 0x80073D68
int GetLastOtPos__C7CPlayer_addr_80073D68(struct CPlayer *this) {
}


// address: 0x80073D74
int GetLastScrY__C7CPlayer_addr_80073D74(struct CPlayer *this) {
}


// address: 0x80073D80
int GetLastScrX__C7CPlayer_addr_80073D80(struct CPlayer *this) {
}


// address: 0x80073D8C
int GetNumOfFrames__7TextDat_addr_80073D8C(struct TextDat *this) {
}


// address: 0x80073DA0
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80073DA0(struct TextDat *this, int FrNum) {
}


// address: 0x80073DBC
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80073DF4
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80073E74
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80073F0C
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80073FBC
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


// address: 0x80074178
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


// address: 0x8007430C
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


// address: 0x800743C4
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


// address: 0x80074658
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80074730
// size: 0x28
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800747B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800747E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074810
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007483C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074868
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074894
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800748B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800748DC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074908
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074934
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074960
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007498C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800749B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800749E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074A10
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074A3C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074A68
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074A94
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074AC0
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074AEC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074B18
// size: 0x28
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074B44
// size: 0x28
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074B70
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074B9C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074BC8
// size: 0x28
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074BF4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074C20
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074C4C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074C78
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074CA4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074CD0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074CFC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074D28
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074D54
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074D80
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074DAC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074DD8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074E04
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074E30
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80074E5C
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80074EF0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80074F80
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80075010
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800750A0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80075130
// size: 0x28
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007515C
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075188
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800751B4
// size: 0x28
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800751E0
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007520C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075238
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075264
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075290
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800752BC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800752E8
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


// address: 0x80075440
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007550C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x800755D8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075604
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075630
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007565C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075688
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800756AC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800756D8
// size: 0x28
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075704
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075730
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007575C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075788
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800757B4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800757E0
// size: 0x28
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007580C
// size: 0x28
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075838
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075864
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075890
// size: 0x28
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800758BC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800758E8
// size: 0x28
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075914
// size: 0x28
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075940
// size: 0x28
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007596C
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


// address: 0x80075B00
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


// address: 0x80075C88
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075CAC
// size: 0x28
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075CD8
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075D04
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075D30
// size: 0x28
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075D5C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075D88
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075DB4
// size: 0x28
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075DE0
// size: 0x28
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075E0C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075E38
// size: 0x28
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80075E64
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80075E64(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80075EA0
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80075EA0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80075EC8
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075EC8(struct POLY_FT4 **Prim) {
}


// address: 0x80075F44
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks_addr_80075F44(struct CBlocks *this) {
}


// address: 0x80075F50
int GetNumOfFrames__7TextDatii_addr_80075F50(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80075F88
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80075F88(struct TextDat *this, int Creature) {
}


// address: 0x80076000
int GetNumOfCreatures__7TextDat_addr_80076000(struct TextDat *this) {
}


// address: 0x80076014
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80076014(struct TextDat *this, int FrNum) {
}


// address: 0x80076030
void gamemenu_on__Fv() {
}


// address: 0x80076038
void gamemenu_off__Fv() {
}


// address: 0x80076040
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80076048
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80076050
void ResetPal__Fv() {
}


// address: 0x80076058
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80076088
bool GetFadeState__Fv() {
}


// address: 0x80076094
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 6
	register unsigned char bright1;
	// register: 3
	register unsigned char bright2;
}


// address: 0x800761B0
void SmearScreen__Fv() {
}


// address: 0x800761B8
void DrawFadedScreen__Fv() {
}


// address: 0x8007620C
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800762C8
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80076358
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x800763B0
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80076460
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x800764B4
void M_CheckEFlag__Fi(int i) {
}


// address: 0x800764D4
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


// address: 0x80076640
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x8007667C
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x800766C8
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x80076710
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80076770
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


// address: 0x80076CE4
void ClearMVars__Fi(int i) {
}


// address: 0x80076D58
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x800771A4
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80077254
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x80077398
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80077490
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x80077538
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


// address: 0x80077728
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80077808
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


// address: 0x80077A84
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80077D8C
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x80078088
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


// address: 0x800784D8
int lAddMissile__Fiiici(int sx, int sy, int midir, char micaster, int id) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
	// register: 18
	register int mi;
}


// address: 0x800786AC
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 3
	register int mi;
}


// address: 0x800787F4
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800788FC
void AddInTownPortal__Fi(int i) {
}


// address: 0x80078934
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x800789A4
void DeactivatePortal__Fi(int i) {
}


// address: 0x800789C4
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x800789FC
void DelMis__Fii(int mi, int i) {
}


// address: 0x80078A5C
void RemovePortalMissile__Fi(int id) {
	// register: 17
	register int i;
	// register: 18
	register int mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
}


// address: 0x80078BD8
void SetCurrentPortal__Fi(int p) {
}


// address: 0x80078BE4
void GetPortalLevel__Fv() {
}


// address: 0x80078D88
void GetPortalLvlPos__Fv() {
}


// address: 0x80078E38
// size: 0x108
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x80078EA0
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x80078F20
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x80078F50
void InitAllMaps__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80078F98
// size: 0xF1C
struct DLevel *GetMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x8007900C
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Dl) {
}


// address: 0x800790B0
void Init__4AMap(struct AMap *this) {
	{
		{
		}
	}
}


// address: 0x80079118
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


// address: 0x80079238
void ReleaseMap__4AMapP6DLevel(struct AMap *this, struct DLevel *Dl) {
}


// address: 0x800792C8
void CheckMapNum__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x800792FC
void ___4AMap(struct AMap *this, int __in_chrg) {
}


// address: 0x80079344
// size: 0xC
struct AMap *__4AMap(struct AMap *this) {
}


// address: 0x80079378
void GO_DoGameOver__Fv() {
}


// address: 0x800793BC
void GameOverTask__FP4TASK(struct TASK *T) {
	// register: 17
	register bool OldPause;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80079478
void PrintGameOver__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct Dialog PBack;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80079558
void SetRGB__6DialogUcUcUc_addr_80079558(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80079578
void SetBack__6Dialogi_addr_80079578(struct Dialog *this, int Type) {
}


// address: 0x80079580
void SetBorder__6Dialogi_addr_80079580(struct Dialog *this, int Type) {
}


// address: 0x80079588
void ___6Dialog_addr_80079588(struct Dialog *this, int __in_chrg) {
}


// address: 0x800795B0
// size: 0x10
struct Dialog *__6Dialog_addr_800795B0(struct Dialog *this) {
}


// address: 0x8007960C
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x80079650
char *VER_GetVerString__Fv() {
}


// address: 0x80079660
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


