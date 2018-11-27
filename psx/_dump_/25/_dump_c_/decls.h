#include "types.h"

// address: 0x80118770
extern int NumOfMonsterListLevels;

// address: 0x800A7554
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x8011846C
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x80118470
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x80118474
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x8011847C
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x80118480
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x80118484
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x80118488
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x8011848C
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x80118490
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x80118494
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x80118498
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x8011849C
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x801184A0
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x801184A4
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x801184A8
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x801184AC
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x801184B0
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x801184B8
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x801184BC
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x801184C4
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x801184C8
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x801184CC
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x801184D0
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x801184D4
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x801184D8
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x801184DC
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x801184E0
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x801184E4
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x801184EC
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x801184F0
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x801184F4
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x801184F8
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x801184FC
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x80118500
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x80118504
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x80118508
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x8011850C
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x80118510
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x80118514
// size: 0x3
static unsigned char NumsLEV8M8A[3];

// address: 0x80118518
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x8011851C
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x80118520
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x80118524
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x80118528
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x8011852C
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x80118530
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x80118534
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x80118538
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x8011853C
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x80118540
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x80118544
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x80118548
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x8011854C
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x80118550
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x80118554
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x80118558
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x8011855C
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x80118560
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x80118564
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x80118568
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x8011856C
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x80118570
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x80118574
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x80118578
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x8011857C
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x80118580
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x80118584
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x80118588
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x8011858C
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x80118590
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x80118594
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x80118598
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x8011859C
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x801185A0
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x801185A4
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x801185A8
// size: 0x3
static unsigned char NumsLEV16M16D[3];

// address: 0x800A7094
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A70C4
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A7124
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A7164
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A71D4
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A7244
// size: 0x50
static struct MonstList ChoiceListLEV6[5];

// address: 0x800A7294
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A72E4
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A7344
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A7384
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800A73D4
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A7424
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A7464
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A74B4
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A7514
// size: 0x30
static struct MonstList ChoiceListLEV15[3];

// address: 0x800A7544
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x8011A000
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800A75D4
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x80118780
extern int ArgsSoFar;

// address: 0x80118784
extern unsigned long *ThisOt;

// address: 0x80118788
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x8011A004
static long hndPrimBuffers;

// address: 0x8011A008
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x8011A00C
static unsigned char BufferDepth;

// address: 0x8011A00D
static unsigned char WorkRamId;

// address: 0x8011A00E
static unsigned char ScrNum;

// address: 0x8011A010
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x8011A014
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x8011A018
static unsigned char BufferNum;

// address: 0x8011878C
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x8011A019
static unsigned char LastBuffer;

// address: 0x8011A01C
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x8011A020
static int ThisOtSize;

// address: 0x80118790
// size: 0x8
static struct RECT ScrRect;

// address: 0x8011A024
static int VidWait;

// address: 0x8011A470
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8011A028
static void (*VbFunc)();

// address: 0x8011A02C
static unsigned long VidTick;

// address: 0x8011A030
static int VXOff;

// address: 0x8011A034
static int VYOff;

// address: 0x801187A4
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x801187A8
extern int LastFmem;

// address: 0x80118798
extern unsigned int GSYS_MemStart;

// address: 0x8011879C
extern unsigned int GSYS_MemEnd;

// address: 0x800A791C
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A7944
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x801187A0
extern int LowestFmem;

// address: 0x801187B8
extern int FileSYS;

// address: 0x8011A038
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x8011A03C
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x801187D2
extern short DavesPad;

// address: 0x801187D4
extern short DavesPadDeb;

// address: 0x800A796C
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x8011A550
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A8210
// size: 0x474
extern struct TextDat *AllDats[285];

// address: 0x80118824
extern int TpW;

// address: 0x80118828
extern int TpH;

// address: 0x8011882C
extern int TpXDest;

// address: 0x80118830
extern int TpYDest;

// address: 0x80118834
// size: 0x8
extern struct RECT R;

// address: 0x800A8684
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800A86B8
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A79A0
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x80118848
static bool ChunkGot;

// address: 0x800A86E0
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800A86F0
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A8700
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x80118860
extern unsigned long BL_NoLumpFiles;

// address: 0x80118864
extern unsigned long BL_NoStreamFiles;

// address: 0x80118868
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x8011886C
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x80118870
extern unsigned char FileLoaded;

// address: 0x801188A0
extern int NoTAllocs;

// address: 0x800A882C
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x8011A048
static bool CanPause;

// address: 0x8011A04C
static bool Paused;

// address: 0x8011A578
// size: 0x10
static struct Dialog PBack;

// address: 0x800A8A94
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800A8AB8
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800A8ADC
// size: 0x708
extern unsigned char demo_buffer[1800];

// address: 0x801188CC
extern int demo_pad_time;

// address: 0x801188D0
extern int demo_pad_count;

// address: 0x800A89BC
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800A8A28
// size: 0x6C
extern struct CPad Pad1;

// address: 0x801188D4
extern unsigned long demo_finish;

// address: 0x801188D8
extern int cac_pad;

// address: 0x801188F4
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x801188F8
extern int CharFrm;

// address: 0x801188E5
extern unsigned char WHITER;

// address: 0x801188E6
extern unsigned char WHITEG;

// address: 0x801188E7
extern unsigned char WHITEB;

// address: 0x801188E8
extern unsigned char BLUER;

// address: 0x801188E9
extern unsigned char BLUEG;

// address: 0x801188EA
extern unsigned char BLUEB;

// address: 0x801188EB
extern unsigned char REDR;

// address: 0x801188EC
extern unsigned char REDG;

// address: 0x801188ED
extern unsigned char REDB;

// address: 0x801188EE
extern unsigned char GOLDR;

// address: 0x801188EF
extern unsigned char GOLDG;

// address: 0x801188F0
extern unsigned char GOLDB;

// address: 0x800A91E4
// size: 0x218
extern struct CFont MediumFont;

// address: 0x800A93FC
// size: 0x218
extern struct CFont LargeFont;

// address: 0x800A9614
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800A96C8
// size: 0x10
extern struct FontTab LFont;

// address: 0x800A96D8
// size: 0x136
extern struct FontItem MFontTab[155];

// address: 0x800A9810
// size: 0x10
extern struct FontTab MFont;

// address: 0x8011890D
extern unsigned char DialogRed;

// address: 0x8011890E
extern unsigned char DialogGreen;

// address: 0x8011890F
extern unsigned char DialogBlue;

// address: 0x80118910
extern unsigned char DialogTRed;

// address: 0x80118911
extern unsigned char DialogTGreen;

// address: 0x80118912
extern unsigned char DialogTBlue;

// address: 0x80118914
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x80118918
extern int DialogBackGfx;

// address: 0x8011891C
extern int DialogBackW;

// address: 0x80118920
extern int DialogBackH;

// address: 0x80118924
extern int DialogBorderGfx;

// address: 0x80118928
extern int DialogBorderTLW;

// address: 0x8011892C
extern int DialogBorderTLH;

// address: 0x80118930
extern int DialogBorderTRW;

// address: 0x80118934
extern int DialogBorderTRH;

// address: 0x80118938
extern int DialogBorderBLW;

// address: 0x8011893C
extern int DialogBorderBLH;

// address: 0x80118940
extern int DialogBorderBRW;

// address: 0x80118944
extern int DialogBorderBRH;

// address: 0x80118948
extern int DialogBorderTW;

// address: 0x8011894C
extern int DialogBorderTH;

// address: 0x80118950
extern int DialogBorderBW;

// address: 0x80118954
extern int DialogBorderBH;

// address: 0x80118958
extern int DialogBorderLW;

// address: 0x8011895C
extern int DialogBorderLH;

// address: 0x80118960
extern int DialogBorderRW;

// address: 0x80118964
extern int DialogBorderRH;

// address: 0x80118968
extern int DialogBevelGfx;

// address: 0x8011896C
extern int DialogBevelCW;

// address: 0x80118970
extern int DialogBevelCH;

// address: 0x80118974
extern int DialogBevelLRW;

// address: 0x80118978
extern int DialogBevelLRH;

// address: 0x8011897C
extern int DialogBevelUDW;

// address: 0x80118980
extern int DialogBevelUDH;

// address: 0x80118984
extern int MY_DialogOTpos;

// address: 0x8011A050
static unsigned char DialogGBack;

// address: 0x8011A051
static char GShadeX;

// address: 0x8011A052
static char GShadeY;

// address: 0x8011A058
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800A9860
// size: 0x70
extern int Cxy[28];

// address: 0x80118907
extern unsigned char BORDERR;

// address: 0x80118908
extern unsigned char BORDERG;

// address: 0x80118909
extern unsigned char BORDERB;

// address: 0x8011890A
extern unsigned char BACKR;

// address: 0x8011890B
extern unsigned char BACKG;

// address: 0x8011890C
extern unsigned char BACKB;

// address: 0x800A9820
// size: 0x40
static char GShadeTab[64];

// address: 0x80118905
static char GShadePX;

// address: 0x80118906
static char GShadePY;

// address: 0x80118991
extern unsigned char PlayDemoFlag;

// address: 0x8011A588
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x8011A5B8
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x8011A060
static int blockr;

// address: 0x8011A064
static int blockg;

// address: 0x8011A068
static int blockb;

// address: 0x8011A06C
static int InfraFlag;

// address: 0x8011A070
static unsigned char blank_bit;

// address: 0x801189A5
extern unsigned char P1ObjSelCount;

// address: 0x801189A6
extern unsigned char P2ObjSelCount;

// address: 0x801189A7
extern unsigned char P12ObjSelCount;

// address: 0x801189A8
extern unsigned char P1ItemSelCount;

// address: 0x801189A9
extern unsigned char P2ItemSelCount;

// address: 0x801189AA
extern unsigned char P12ItemSelCount;

// address: 0x801189AB
extern unsigned char P1MonstSelCount;

// address: 0x801189AC
extern unsigned char P2MonstSelCount;

// address: 0x801189AD
extern unsigned char P12MonstSelCount;

// address: 0x801189AE
static unsigned short P1ObjSelCol;

// address: 0x801189B0
static unsigned short P2ObjSelCol;

// address: 0x801189B2
static unsigned short P12ObjSelCol;

// address: 0x801189B4
static unsigned short P1ItemSelCol;

// address: 0x801189B6
static unsigned short P2ItemSelCol;

// address: 0x801189B8
static unsigned short P12ItemSelCol;

// address: 0x801189BA
static unsigned short P1MonstSelCol;

// address: 0x801189BC
static unsigned short P2MonstSelCol;

// address: 0x801189BE
static unsigned short P12MonstSelCol;

// address: 0x801189C0
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x8010E2B8
// size: 0x40
static short SinTab[32];

// address: 0x800A98D0
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x801189DC
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x8010E358
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x8011A5E8
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x8011A5F8
// size: 0x10
static struct Overlay PregameOver;

// address: 0x8011A608
// size: 0x10
static struct Overlay GameOver;

// address: 0x8011A618
// size: 0x10
static struct Overlay FmvOver;

// address: 0x8011A074
static int OWorldX;

// address: 0x8011A078
static int OWorldY;

// address: 0x8011A07C
static int WWorldX;

// address: 0x8011A080
static int WWorldY;

// address: 0x8010E3D4
// size: 0x20
static short TxyAdd[16];

// address: 0x80118A00
extern int GXAdj2;

// address: 0x8011A084
static int TimePerFrame;

// address: 0x8011A088
static int CpuStart;

// address: 0x8011A08C
static int CpuTime;

// address: 0x8011A090
static int DrawTime;

// address: 0x8011A094
static int DrawStart;

// address: 0x8011A098
static int LastCpuTime;

// address: 0x8011A09C
static int LastDrawTime;

// address: 0x8011A0A0
static int DrawArea;

// address: 0x80118A08
extern bool ProfOn;

// address: 0x800A98E4
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x8010E53C
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800A98F8
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800A994C
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800A99A0
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800A99F4
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800A9A48
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x80118A30
extern int hof;

// address: 0x80118A34
extern int mof;

// address: 0x800A9B10
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x80118A6C
extern unsigned long Time;

// address: 0x80118A70
extern bool CDWAIT;

// address: 0x800A9C10
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x80118A44
extern unsigned long *STR_Buffer;

// address: 0x80118A48
extern char NoActiveStreams;

// address: 0x80118A4C
static bool STRInit;

// address: 0x80118A50
static unsigned char CDFlip;

// address: 0x80118A94
extern char SFXNotPlayed;

// address: 0x80118A95
extern char SFXNotInBank;

// address: 0x8011A628
// size: 0x108
static char spu_management[264];

// address: 0x8011A738
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x8011A0A8
static unsigned short NoSfx;

// address: 0x80118A80
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x80118A84
static long OffsetHandle;

// address: 0x80118A88
static int BankBase;

// address: 0x80118A8C
static unsigned char SPU_Done;

// address: 0x8010E8F8
// size: 0x70
static unsigned short SFXRemapTab[56];

// address: 0x80118A90
static int NoSNDRemaps;

// address: 0x800A9C50
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x8010E99C
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x80118ADC
extern int demo_level;

// address: 0x8011A750
// size: 0x20
static int buff[8];

// address: 0x80118AE0
extern int old_val;

// address: 0x80118AE4
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x80118AE8
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x80118AEC
// size: 0x5C
extern struct TASK *tonys;

// address: 0x80118AC0
extern int demo_load;

// address: 0x80118AC4
extern int demo_record_load;

// address: 0x80118AC8
extern int level_record;

// address: 0x80118ACC
extern char demo_fade_finished;

// address: 0x80118ACD
extern unsigned char demo_which;

// address: 0x800A9E3C
// size: 0x14
extern unsigned long demolevel[5];

// address: 0x80118ABC
extern int moo_moo;

// address: 0x80118ACE
extern unsigned char demo_flash;

// address: 0x80118AD0
extern int tonys_Task;

// address: 0x80118C48
extern bool DoShowPanel;

// address: 0x80118C4C
extern bool DoDrawBg;

// address: 0x8011A0AC
static bool GlueFinished;

// address: 0x8011A0B0
static bool DoHomingScroll;

// address: 0x8011A0B4
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x8011A0B8
static int CurrentMonsterList;

// address: 0x80118AF9
extern char started_grtask;

// address: 0x800A9E50
// size: 0x288
extern struct PInf PlayerInfo[81];

// address: 0x80118C50
// size: 0x4
static char ArmourChar[4];

// address: 0x8010EA90
// size: 0xA
static char WepChar[10];

// address: 0x80118C54
// size: 0x4
static char CharChar[4];

// address: 0x8011A0BC
static char ctrl_select_line;

// address: 0x8011A0BD
static char ctrl_select_side;

// address: 0x8011A0BE
static char ckeyheld;

// address: 0x8011A0C4
// size: 0x8
static struct RECT CtrlRect;

// address: 0x80118C68
extern unsigned char ctrlflag;

// address: 0x800AA180
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800AA0D8
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x80118C64
static int toppos;

// address: 0x8011A770
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800AA2B0
// size: 0x98
static int controller_defaults[2][19];

// address: 0x80118CD8
extern int gr_scrxoff;

// address: 0x80118CDC
extern int gr_scryoff;

// address: 0x80118CE4
extern unsigned short water_clut;

// address: 0x80118CE8
extern char visible_level;

// address: 0x80118CD5
extern char last_type;

// address: 0x80118CEA
extern char daylight;

// address: 0x80118CE6
extern char cow_in_sight;

// address: 0x80118CE7
extern char inn_in_sight;

// address: 0x80118CE0
extern unsigned int water_count;

// address: 0x80118CE9
extern unsigned char lastrnd;

// address: 0x80118CEC
static int call_clock;

// address: 0x80118CFC
extern int TitleAnimCount;

// address: 0x80118D00
static int flametick;

// address: 0x8010EB44
// size: 0x37
static unsigned char light_tile[55];

// address: 0x800AA368
// size: 0x90
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x8011A780
// size: 0x240
static struct Particle PartArray[16];

// address: 0x8011A0CC
static int partOtPos;

// address: 0x80118D1C
extern int SetParticle;

// address: 0x80118D20
static int p1partexecnum;

// address: 0x80118D24
static int p2partexecnum;

// address: 0x800AA348
// size: 0x20
static int JumpArray[8];

// address: 0x80118D28
static int partjumpflag;

// address: 0x80118D2C
static int partglowflag;

// address: 0x80118D30
static int partcolour;

// address: 0x800AA3F8
// size: 0x48
extern struct Spell_Target SplTarget[2];

// address: 0x80118D51
extern unsigned char select_flag;

// address: 0x8011A0D0
// size: 0x8
static struct RECT SelectRect;

// address: 0x8011A0D8
static char item_select;

// address: 0x80118D54
// size: 0x2
extern char QSpell[2];

// address: 0x80118D58
// size: 0x2
extern char _spltotype[2];

// address: 0x80118D5C
// size: 0x8
extern bool force_attack[2];

// address: 0x80118D44
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x8011A9C0
// size: 0x10
static struct Dialog SelectBack;

// address: 0x80118D48
// size: 0x4
extern char mana_order[4];

// address: 0x80118D4C
// size: 0x4
extern char health_order[4];

// address: 0x80118D50
extern unsigned char birdcheck;

// address: 0x8011A9D0
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x8011A0DC
static unsigned short progress;

// address: 0x8010EC58
// size: 0x2A
static unsigned short Level2CutScreen[21];

// address: 0x80118D7C
static char *CutString;

// address: 0x8011A9F8
// size: 0x78
static struct CScreen Scr;

// address: 0x80118D80
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x80118D84
static bool GameLoading;

// address: 0x8011AA78
// size: 0x10
static struct Dialog LBack;

// address: 0x80118D94
extern unsigned int card_ev0;

// address: 0x80118D98
extern unsigned int card_ev1;

// address: 0x80118D9C
extern unsigned int card_ev2;

// address: 0x80118DA0
extern unsigned int card_ev3;

// address: 0x80118DA4
extern unsigned int card_ev10;

// address: 0x80118DA8
extern unsigned int card_ev11;

// address: 0x80118DAC
extern unsigned int card_ev12;

// address: 0x80118DB0
extern unsigned int card_ev13;

// address: 0x80118DB4
// size: 0x8
extern int card_dirty[2];

// address: 0x80118DBC
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8011A0E0
static int card_event;

// address: 0x80118D90
extern void (*mem_card_event_handler)();

// address: 0x80118D88
extern bool MemCardActive;

// address: 0x80118D8C
static int never_hooked_events;

// address: 0x80118E00
extern unsigned long MasterVol;

// address: 0x80118E04
extern unsigned long MusicVol;

// address: 0x80118E08
extern unsigned long SoundVol;

// address: 0x80118E0C
extern unsigned long VideoVol;

// address: 0x80118E10
extern unsigned long SpeechVol;

// address: 0x8011A0E4
// size: 0x6C
static struct TextDat *Slider;

// address: 0x8011A0E8
static int sw;

// address: 0x8011A0EC
static int sx;

// address: 0x8011A0F0
static int sy;

// address: 0x8011A0F4
static unsigned char Adjust;

// address: 0x8011A0F5
static unsigned char qspin;

// address: 0x8011A0F6
static unsigned char lqspin;

// address: 0x8011A0F8
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x8011A0FC
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8011A100
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x80118E14
extern int ReturnMenu;

// address: 0x8011A104
// size: 0x8
static struct RECT ORect;

// address: 0x8011A10C
// size: 0x8
static char *McState[2];

// address: 0x80118E18
extern int they_pressed;

// address: 0x80118DE4
extern bool optionsflag;

// address: 0x80118DD8
extern int cmenu;

// address: 0x80118DEC
extern int options_pad;

// address: 0x80118DF8
extern char *PrevTxt;

// address: 0x80118DE0
extern bool allspellsflag;

// address: 0x800AAC60
// size: 0x80
extern short Circle[64];

// address: 0x80118DCC
static int Spacing;

// address: 0x80118DD0
static int cs;

// address: 0x80118DD4
static int lastcs;

// address: 0x80118DDC
static bool MemcardOverlay;

// address: 0x80118DE8
extern int saveflag;

// address: 0x800AA440
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800AA4E8
// size: 0xD8
extern struct OMENUITEM GameMenu[9];

// address: 0x800AA5C0
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800AA650
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800AA6F8
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800AA7A0
// size: 0x60
extern struct OMENUITEM MemcardMenu[4];

// address: 0x800AA800
// size: 0x90
extern struct OMENUITEM MemcardGameMenu[6];

// address: 0x800AA890
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800AA8F0
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800AA998
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800AAA40
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800AAAA0
// size: 0xD8
extern struct OMENUITEM CheatMenu[9];

// address: 0x800AAB78
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800AABA8
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x800AABF0
// size: 0x70
extern struct OMENULIST MenuList[14];

// address: 0x80118DFC
static bool debounce;

// address: 0x800AACE0
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x80118E25
extern char hop_height;

// address: 0x80118E28
// size: 0x8
static struct Perch perches[4];

// address: 0x800AAE60
// size: 0x10
static char *FmvTab[4];

// address: 0x80118E3C
static int CurMons;

// address: 0x80118E40
static int Frame;

// address: 0x80118E44
static int Action;

// address: 0x80118E48
static int Dir;

// address: 0x80118E8C
extern int indsize;

// address: 0x80118E90
static unsigned char *kanjbuff;

// address: 0x80118E94
// size: 0x4
static struct kindexS *kindex;

// address: 0x80118E98
static long hndKanjBuff;

// address: 0x80118E9C
static long hndKanjIndex;

// address: 0x80118EF4
extern int FeBackX;

// address: 0x80118EF8
extern int FeBackY;

// address: 0x80118EFC
extern int FeBackW;

// address: 0x80118F00
extern int FeBackH;

// address: 0x80118F04
extern unsigned char FeFlag;

// address: 0x800AB9D0
// size: 0x780
extern struct FeStruct FeBuffer[80];

// address: 0x80118F08
extern int FePlayerNo;

// address: 0x8011A114
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x80118F0C
extern int FeBufferCount;

// address: 0x80118F10
extern int FeNoOfPlayers;

// address: 0x80118F14
// size: 0x8
extern int FeChrClass[2];

// address: 0x800AC150
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x80118F1C
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x80118F20
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x80118F24
extern unsigned long FeCount;

// address: 0x80118F28
extern int fileselect;

// address: 0x80118F2C
extern int BookMenu;

// address: 0x80118F30
extern int FeAttractMode;

// address: 0x80118F34
extern int FMVPress;

// address: 0x80118EC4
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x80118ECC
// size: 0x8
extern bool LoadedChar[2];

// address: 0x80118EC8
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x80118ED4
extern unsigned char FeIsAVirgin;

// address: 0x80118ED8
extern int FeMenuDelay;

// address: 0x800AAE70
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800AAE8C
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800AAEA8
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800AAEC4
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800AAEE0
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800AAEFC
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800AAF18
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800AAF34
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800AAF50
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800AAF6C
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800AAF88
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800AAFA4
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800AAFC0
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800AAFDC
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x80118EDC
static int fadeval;

// address: 0x800AAFF8
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800AB070
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800AB0B8
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800AB130
// size: 0x6A8
extern struct FeMenuTable FeNameEngMenuTable[71];

// address: 0x800AB7D8
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800AB820
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800AB880
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800AB8E0
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800AB958
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x80118EE8
extern unsigned long AttractTitleDelay;

// address: 0x80118EEC
extern unsigned long AttractMainDelay;

// address: 0x80118EF0
extern int FMVEndPad;

// address: 0x80118F68
extern int InCredits;

// address: 0x80118F6C
extern int CreditTitleNo;

// address: 0x80118F70
extern int CreditSubTitleNo;

// address: 0x80118F84
// size: 0x8
extern int card_status[2];

// address: 0x80118F8C
// size: 0x8
extern int card_usable[2];

// address: 0x80118F94
// size: 0x8
extern int card_files[2];

// address: 0x80118F9C
// size: 0x8
extern int card_changed[2];

// address: 0x80118FDC
extern int AlertTxt;

// address: 0x80118FE0
extern int current_card;

// address: 0x80118FE4
extern int LoadType;

// address: 0x80118FE8
extern int McMenuPos;

// address: 0x80118FEC
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x80118FD8
extern bool fileinfoflag;

// address: 0x80118FB0
extern char *DiabloGameFile;

// address: 0x80118FD0
// size: 0x8
extern char *McState_addr_80118FD0[2];

// address: 0x801190C0
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x801190C8
extern int mdec_audio_sec;

// address: 0x801190CC
extern int mdec_audio_offs;

// address: 0x801190D0
extern int mdec_audio_playing;

// address: 0x801190D4
extern int mdec_audio_rate_shift;

// address: 0x801190D8
// size: 0x8
extern char *vlcbuf[2];

// address: 0x801190E0
extern int slice_size;

// address: 0x801190E4
// size: 0x8
extern struct RECT slice;

// address: 0x801190EC
extern int slice_inc;

// address: 0x801190F0
extern int area_pw;

// address: 0x801190F4
extern int area_ph;

// address: 0x801190F8
// size: 0x2
extern char tmdc_pol_dirty[2];

// address: 0x801190FC
// size: 0x8
extern int num_pol[2];

// address: 0x80119104
extern int mdec_cx;

// address: 0x80119108
extern int mdec_cy;

// address: 0x8011910C
extern int mdec_w;

// address: 0x80119110
extern int mdec_h;

// address: 0x80119114
// size: 0x8
extern int mdec_pw[2];

// address: 0x8011911C
// size: 0x8
extern int mdec_ph[2];

// address: 0x80119124
extern int move_x;

// address: 0x80119128
extern int move_y;

// address: 0x8011912C
extern int move_scale;

// address: 0x80119130
extern int stream_frames;

// address: 0x80119134
extern int last_stream_frame;

// address: 0x80119138
extern int mdec_framecount;

// address: 0x8011913C
extern int mdec_speed;

// address: 0x80119140
extern int mdec_stream_starting;

// address: 0x80119144
extern int mdec_last_frame;

// address: 0x80119148
extern int mdec_sectors_per_frame;

// address: 0x8011914C
extern unsigned short *vlctab;

// address: 0x80119150
extern unsigned char *mdc_buftop;

// address: 0x80119154
extern unsigned char *mdc_bufstart;

// address: 0x80119158
extern int mdc_bufleft;

// address: 0x8011915C
extern int mdc_buftotal;

// address: 0x80119160
extern int ordertab_length;

// address: 0x80119164
extern int time_in_frames;

// address: 0x80119168
extern int stream_chunksize;

// address: 0x8011916C
extern int stream_bufsize;

// address: 0x80119170
extern int stream_subsec;

// address: 0x80119174
extern int stream_secnum;

// address: 0x80119178
extern int stream_last_sector;

// address: 0x8011917C
extern int stream_startsec;

// address: 0x80119180
extern int stream_opened;

// address: 0x80119184
extern int stream_last_chunk;

// address: 0x80119188
extern int stream_got_chunks;

// address: 0x8011918C
extern int last_sector;

// address: 0x80119190
extern int cdstream_resetsec;

// address: 0x80119194
extern int last_handler_event;

// address: 0x80119064
extern bool user_start;

// address: 0x80118FFC
extern unsigned char *vlc_tab;

// address: 0x80119000
extern unsigned char *vlc_buf;

// address: 0x80119004
extern unsigned char *img_buf;

// address: 0x80119008
extern int vbuf;

// address: 0x8011900C
extern int last_fn;

// address: 0x80119010
extern int last_mdc;

// address: 0x80119014
extern int slnum;

// address: 0x80119018
extern int slices_to_do;

// address: 0x8011901C
extern int mbuf;

// address: 0x80119020
extern int mfn;

// address: 0x80119024
extern int last_move_mbuf;

// address: 0x80119028
extern int move_request;

// address: 0x8011902C
extern int mdec_scale;

// address: 0x80119030
extern int do_brightness;

// address: 0x80119034
extern int frame_decoded;

// address: 0x80119038
extern int mdec_streaming;

// address: 0x8011903C
extern int mdec_stream_size;

// address: 0x80119040
extern int first_stream_frame;

// address: 0x80119044
extern int stream_frames_played;

// address: 0x80119048
extern int num_mdcs;

// address: 0x8011904C
extern int mdec_head;

// address: 0x80119050
extern int mdec_tail;

// address: 0x80119054
extern int mdec_waiting_tail;

// address: 0x80119058
extern int mdecs_queued;

// address: 0x8011905C
extern int mdecs_waiting;

// address: 0x80119060
extern int sfx_volume;

// address: 0x80119068
extern int stream_chunks_in;

// address: 0x8011906C
extern int stream_chunks_total;

// address: 0x80119070
extern int stream_in;

// address: 0x80119074
extern int stream_out;

// address: 0x80119078
extern int stream_stalled;

// address: 0x8011907C
extern int stream_ending;

// address: 0x80119080
extern int stream_open;

// address: 0x80119084
extern int stream_handler_installed;

// address: 0x80119088
extern int stream_chunks_borrowed;

// address: 0x8011908C
extern int _get_count;

// address: 0x80119090
extern int _discard_count;

// address: 0x80119094
// size: 0x5C
extern struct TASK *CDTask;

// address: 0x80119098
// size: 0x98
static struct cdstreamstruct *CDStream;

// address: 0x8011909C
extern int cdready_calls;

// address: 0x801190A0
extern int cdready_errors;

// address: 0x801190A4
extern int cdready_out_of_sync;

// address: 0x801190A8
extern int cdstream_resetting;

// address: 0x801190AC
extern int sector_dma;

// address: 0x801190B0
extern int sector_dma_in;

// address: 0x801190B4
extern unsigned long *chkaddr;

// address: 0x801190B8
// size: 0x8
extern struct chunkhdrstruct *chunk;

// address: 0x801190BC
extern int first_handler_event;

// address: 0x80119234
extern unsigned char *pStatusPanel;

// address: 0x80119238
extern unsigned char *pGBoxBuff;

// address: 0x8011923C
extern unsigned char dropGoldFlag;

// address: 0x80119240
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800AC748
// size: 0x200
extern char _infostr[256][2];

// address: 0x80119244
// size: 0x2
extern char _infoclr[2];

// address: 0x800AC948
// size: 0x100
extern char tempstr[256];

// address: 0x80119246
extern unsigned char drawhpflag;

// address: 0x80119247
extern unsigned char drawmanaflag;

// address: 0x80119248
extern unsigned char chrflag;

// address: 0x80119249
extern unsigned char drawbtnflag;

// address: 0x8011924A
extern unsigned char panbtndown;

// address: 0x8011924B
extern unsigned char panelflag;

// address: 0x8011924C
extern unsigned char chrbtndown;

// address: 0x8011924D
extern unsigned char lvlbtndown;

// address: 0x8011924E
extern unsigned char sbookflag;

// address: 0x8011924F
extern unsigned char talkflag;

// address: 0x80119250
extern int dropGoldValue;

// address: 0x80119254
extern int initialDropGoldValue;

// address: 0x80119258
extern int initialDropGoldIndex;

// address: 0x8011925C
extern unsigned char *pPanelButtons;

// address: 0x80119260
extern unsigned char *pPanelText;

// address: 0x80119264
extern unsigned char *pManaBuff;

// address: 0x80119268
extern unsigned char *pLifeBuff;

// address: 0x8011926C
extern unsigned char *pChrPanel;

// address: 0x80119270
extern unsigned char *pChrButtons;

// address: 0x80119274
extern unsigned char *pSpellCels;

// address: 0x8011AAC8
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x8011AEC8
// size: 0x40
static int _pstrjust[8][2];

// address: 0x8011A124
// size: 0x8
static int _pnumlines[2];

// address: 0x80119278
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x8011927C
// size: 0x8
extern struct RECT CSRect;

// address: 0x8011A134
// size: 0x8
static int _pSpell[2];

// address: 0x8011A13C
// size: 0x8
static int _pSplType[2];

// address: 0x8011A144
// size: 0x8
static unsigned char panbtn[8];

// address: 0x80119284
extern int numpanbtns;

// address: 0x80119288
extern unsigned char *pDurIcons;

// address: 0x8011928C
extern unsigned char drawdurflag;

// address: 0x8011A14C
// size: 0x4
static unsigned char chrbtn[4];

// address: 0x8011928D
extern unsigned char chrbtnactive;

// address: 0x80119290
extern unsigned char *pSpellBkCel;

// address: 0x80119294
extern unsigned char *pSBkBtnCel;

// address: 0x80119298
extern unsigned char *pSBkIconCels;

// address: 0x8011929C
extern int sbooktab;

// address: 0x801192A0
extern int cur_spel;

// address: 0x8011A150
static long talkofs;

// address: 0x8011AF18
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x8011A154
static unsigned char sgbTalkSavePos;

// address: 0x8011A155
static unsigned char sgbNextTalkSave;

// address: 0x8011A156
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x8011A158
static unsigned char *pTalkPanel;

// address: 0x8011A15C
static unsigned char *pMultiBtns;

// address: 0x8011A160
static unsigned char *pTalkBtns;

// address: 0x8011A164
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x8010F00C
// size: 0x100
extern unsigned char gbFontTransTbl[256];

// address: 0x8010EF4C
// size: 0x44
extern unsigned char fontkern[68];

// address: 0x800AC17C
// size: 0x25
extern char SpellITbl[37];

// address: 0x801191A1
extern unsigned char DrawLevelUpFlag;

// address: 0x801191C8
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x801191C4
extern unsigned char spspelstate;

// address: 0x80119204
extern bool initchr;

// address: 0x801191A4
static int SPLICONNO;

// address: 0x801191A8
static int SPLICONY;

// address: 0x8011A12C
static int SPLICONRIGHT;

// address: 0x801191AC
static int scx;

// address: 0x801191B0
static int scy;

// address: 0x801191B4
static int scx1;

// address: 0x801191B8
static int scy1;

// address: 0x801191BC
static int scx2;

// address: 0x801191C0
static int scy2;

// address: 0x801191D0
extern char SpellCol;

// address: 0x800AC168
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800AC1A4
// size: 0xA0
extern int PanBtnPos[5][8];

// address: 0x800AC244
// size: 0x20
extern char *PanBtnHotKey[8];

// address: 0x800AC264
// size: 0x20
extern unsigned long PanBtnStr[8];

// address: 0x800AC284
// size: 0x64
extern int SpellPages[5][5];

// address: 0x801191F4
static int lus;

// address: 0x801191F8
static int CsNo;

// address: 0x801191FC
static char plusanim;

// address: 0x8011AF08
// size: 0x10
static struct Dialog CSBack;

// address: 0x80119200
static int CS_XOFF;

// address: 0x800AC2E8
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x80119208
extern int NoCSEntries;

// address: 0x8011920C
static int SPALOFF;

// address: 0x80119210
static int paloffset1;

// address: 0x80119214
static int paloffset2;

// address: 0x80119218
static int paloffset3;

// address: 0x8011921C
static int paloffset4;

// address: 0x80119220
static int pinc1;

// address: 0x80119224
static int pinc2;

// address: 0x80119228
static int pinc3;

// address: 0x8011922C
static int pinc4;

// address: 0x801192B4
// size: 0x8
extern int _pcurs[2];

// address: 0x801192BC
extern int cursW;

// address: 0x801192C0
extern int cursH;

// address: 0x801192C4
extern int icursW;

// address: 0x801192C8
extern int icursH;

// address: 0x801192CC
extern int icursW28;

// address: 0x801192D0
extern int icursH28;

// address: 0x801192D4
extern int cursmx;

// address: 0x801192D8
extern int cursmy;

// address: 0x801192DC
// size: 0x8
extern int _pcursmonst[2];

// address: 0x801192E4
// size: 0x2
extern char _pcursobj[2];

// address: 0x801192E8
// size: 0x2
extern char _pcursitem[2];

// address: 0x801192EC
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x801192F0
// size: 0x2
extern char _pcursplr[2];

// address: 0x801192B0
extern int sel_data;

// address: 0x800ACA48
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x801192F4
extern int spurtndx;

// address: 0x801192F8
extern int stonendx;

// address: 0x801192FC
extern unsigned char *pSquareCel;

// address: 0x8011933C
extern unsigned long ghInst;

// address: 0x80119340
extern unsigned char svgamode;

// address: 0x80119344
extern int MouseX;

// address: 0x80119348
extern int MouseY;

// address: 0x8011934C
extern long gv1;

// address: 0x80119350
extern long gv2;

// address: 0x80119354
extern long gv3;

// address: 0x80119358
extern long gv4;

// address: 0x8011935C
extern long gv5;

// address: 0x80119360
extern unsigned char gbProcessPlayers;

// address: 0x800ACBBC
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800ACBE4
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800ACC28
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x80119361
extern unsigned char gbDoEnding;

// address: 0x80119362
extern unsigned char gbRunGame;

// address: 0x80119363
extern unsigned char gbRunGameResult;

// address: 0x80119364
extern unsigned char gbGameLoopStartup;

// address: 0x8011AF68
// size: 0x44
static int glEndSeed[17];

// address: 0x8011AFB8
// size: 0x44
static int glMid1Seed[17];

// address: 0x8011B008
// size: 0x44
static int glMid2Seed[17];

// address: 0x8011B058
// size: 0x44
static int glMid3Seed[17];

// address: 0x8011A168
static long *sg_previousFilter;

// address: 0x800ACC6C
// size: 0x30
extern int CreateEnv[12];

// address: 0x80119368
extern int Passedlvldir;

// address: 0x8011936C
extern unsigned char *TempStack;

// address: 0x8011930C
extern unsigned long ghMainWnd;

// address: 0x80119310
extern unsigned char fullscreen;

// address: 0x80119314
extern int force_redraw;

// address: 0x80119328
extern unsigned char PauseMode;

// address: 0x80119329
extern unsigned char FriendlyMode;

// address: 0x80119319
extern unsigned char visiondebug;

// address: 0x8011931B
extern unsigned char light4flag;

// address: 0x8011931C
extern unsigned char leveldebug;

// address: 0x8011931D
extern unsigned char monstdebug;

// address: 0x80119324
extern int debugmonsttypes;

// address: 0x80119318
static unsigned char cineflag;

// address: 0x8011931A
extern unsigned char scrollflag;

// address: 0x8011931E
extern unsigned char trigdebug;

// address: 0x80119320
extern int setseed;

// address: 0x8011932C
static int sgnTimeoutCurs;

// address: 0x80119330
extern unsigned char sgbMouseDown;

// address: 0x800AD338
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x80119384
extern int numtowners;

// address: 0x80119388
extern unsigned char storeflag;

// address: 0x80119389
extern unsigned char boyloadflag;

// address: 0x8011938A
extern unsigned char bannerflag;

// address: 0x8011938C
extern unsigned char *pCowCels;

// address: 0x8011A16C
static unsigned long sgdwCowClicks;

// address: 0x8011A170
static int sgnCowMsg;

// address: 0x800AD078
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x8011937C
extern unsigned long CowPlaying;

// address: 0x800ACC9C
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800AD014
// size: 0xC
extern int TownCowX[3];

// address: 0x800AD020
// size: 0xC
extern int TownCowY[3];

// address: 0x800AD02C
// size: 0xC
extern int TownCowDir[3];

// address: 0x800AD038
// size: 0x20
extern int cowoffx[8];

// address: 0x800AD058
// size: 0x20
extern int cowoffy[8];

// address: 0x801193A4
extern int sfxdelay;

// address: 0x801193A8
extern int sfxdnum;

// address: 0x8011939C
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800AE138
// size: 0xF50
extern struct TSFX sgSFX[980];

// address: 0x801193A0
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x801193AC
extern long orgseed;

// address: 0x8011A174
static long sglGameSeed;

// address: 0x801193B0
extern int SeedCount;

// address: 0x8011A178
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8011A17C
static int sgnWidth;

// address: 0x801193BE
extern char msgflag;

// address: 0x801193BF
extern char msgdelay;

// address: 0x800AF138
// size: 0x50
extern char msgtable[80];

// address: 0x800AF088
// size: 0xB0
extern int MsgStrings[44];

// address: 0x801193BD
extern char msgcnt;

// address: 0x8011A180
static unsigned long sgdwProgress;

// address: 0x8011A184
static unsigned long sgdwXY;

// address: 0x800AF188
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x8010F444
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x801107E4
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x80111504
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x80112404
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800AF39C
// size: 0x4C00
extern struct ItemStruct item[128];

// address: 0x800B3F9C
// size: 0x7F
extern char itemactive[127];

// address: 0x800B401C
// size: 0x7F
extern char itemavail[127];

// address: 0x800B409C
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x801193F8
extern unsigned char uitemflag;

// address: 0x8011A188
static int tem;

// address: 0x8011B0A0
// size: 0x98
static struct ItemStruct curruitem;

// address: 0x8011B140
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x801193FC
extern int ScrollType;

// address: 0x800B411C
// size: 0x40
extern char ItemStr[64];

// address: 0x800B415C
// size: 0x40
extern char SufStr[64];

// address: 0x801193D8
extern long numitems;

// address: 0x801193DC
extern int gnNumGetRecords;

// address: 0x800AF2F8
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800AF228
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x80114248
// size: 0x46
static short Item2Frm[35];

// address: 0x800AF2D4
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x801193E0
extern int *ItemAnimSnds;

// address: 0x801193E4
extern int idoppely;

// address: 0x801193E8
extern int ScrollFlag;

// address: 0x800AF384
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800B4F48
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800B5088
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x80119410
extern int numlights;

// address: 0x80119414
extern char lightmax;

// address: 0x800B50B0
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x80119418
extern int numvision;

// address: 0x8011941C
extern unsigned char dovision;

// address: 0x80119420
extern int visionid;

// address: 0x8011A18C
static int disp_mask;

// address: 0x8011A190
static int weird;

// address: 0x8011A194
static int disp_tab_r;

// address: 0x8011A198
static int dispy_r;

// address: 0x8011A19C
static int disp_tab_g;

// address: 0x8011A1A0
static int dispy_g;

// address: 0x8011A1A4
static int disp_tab_b;

// address: 0x8011A1A8
static int dispy_b;

// address: 0x8011A1AC
static int radius;

// address: 0x8011A1B0
static int bright;

// address: 0x8011B150
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x80119400
extern int lightflag;

// address: 0x800B4C5C
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800B4F10
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800B419C
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x80119404
extern int restore_r;

// address: 0x80119408
extern int restore_g;

// address: 0x8011940C
extern int restore_b;

// address: 0x800B4F28
// size: 0x10
extern char radius_tab[16];

// address: 0x800B4F38
// size: 0x10
extern char bright_tab[16];

// address: 0x80119441
extern unsigned char qtextflag;

// address: 0x80119444
extern int qtextSpd;

// address: 0x8011A1B4
static unsigned char *pMedTextCels;

// address: 0x8011A1B8
static unsigned char *pTextBoxCels;

// address: 0x8011A1BC
static char *qtextptr;

// address: 0x8011A1C0
static int qtexty;

// address: 0x8011A1C4
static unsigned long qtextDelay;

// address: 0x8011A1C8
static unsigned long sgLastScroll;

// address: 0x8011A1CC
static unsigned long scrolltexty;

// address: 0x8011A1D0
static long sglMusicVolumeSave;

// address: 0x80119430
static bool qtbodge;

// address: 0x800B5270
// size: 0x10
extern struct Dialog QBack;

// address: 0x800B5280
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800B59F0
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800B58E0
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800B5ADC
// size: 0x13D4C
extern struct DLevel sgLevels[21];

// address: 0x800C9828
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x8011B1D0
// size: 0x16
static struct DJunk sgJunk;

// address: 0x8011A1D5
static unsigned char sgbRecvCmd;

// address: 0x8011A1D8
static unsigned long sgdwRecvOffset;

// address: 0x8011A1DC
static unsigned char sgbDeltaChunks;

// address: 0x8011A1DD
static unsigned char sgbDeltaChanged;

// address: 0x8011A1E0
static unsigned long sgdwOwnerWait;

// address: 0x8011A1E4
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x8011A1E8
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8011A1EC
static int sgnCurrMegaPlayer;

// address: 0x8011945D
extern unsigned char deltaload;

// address: 0x8011945E
extern unsigned char gbBufferMsgs;

// address: 0x80119460
extern unsigned long dwRecCount;

// address: 0x80119464
extern bool LevelOut;

// address: 0x8011947A
extern unsigned char gbMaxPlayers;

// address: 0x8011947B
extern unsigned char gbActivePlayers;

// address: 0x8011947C
extern unsigned char gbGameDestroyed;

// address: 0x8011947D
extern unsigned char gbDeltaSender;

// address: 0x8011947E
extern unsigned char gbSelectProvider;

// address: 0x8011947F
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x8011A1F0
static unsigned char sgbSentThisCycle;

// address: 0x8011A1F4
static unsigned long sgdwGameLoops;

// address: 0x8011A1F8
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x8011A1FC
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x8011A200
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x8011A208
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x8011A210
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x8011A218
static unsigned char sgbTimeout;

// address: 0x8011A21C
static long sglTimeoutStart;

// address: 0x80119474
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x80119479
static unsigned char sgbNetInited;

// address: 0x800CA890
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800CAA54
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80114910
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800CB234
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x801194A0
extern long numobjects;

// address: 0x800CC808
// size: 0x7F
extern char objectactive[127];

// address: 0x800CC888
// size: 0x7F
extern char objectavail[127];

// address: 0x801194A4
extern unsigned char InitObjFlag;

// address: 0x801194A8
extern int trapid;

// address: 0x800CC908
// size: 0x28
extern char ObjFileList[40];

// address: 0x801194AC
extern int trapdir;

// address: 0x801194B0
extern int leverid;

// address: 0x80119498
extern int numobjfiles;

// address: 0x800CB14C
// size: 0x20
extern int bxadd[8];

// address: 0x800CB16C
// size: 0x20
extern int byadd[8];

// address: 0x800CB1F4
// size: 0x1A
extern char shrineavail[26];

// address: 0x800CB18C
// size: 0x68
extern int shrinestrs[26];

// address: 0x800CB210
// size: 0x24
extern int StoryBookName[9];

// address: 0x8011949C
extern int myscale;

// address: 0x801194C4
extern unsigned char gbValidSaveFile;

// address: 0x801194C0
extern bool DoLoadedChar;

// address: 0x800CCB28
// size: 0x4750
extern struct PlayerStruct plr[2];

// address: 0x801194E4
extern int myplr;

// address: 0x801194E8
extern int deathdelay;

// address: 0x801194EC
extern unsigned char deathflag;

// address: 0x801194ED
extern char light_rad;

// address: 0x801194DC
// size: 0x5
extern char light_level[5];

// address: 0x800CCA20
// size: 0x30
extern int MaxStats[4][3];

// address: 0x801194D4
static int PlrStructSize;

// address: 0x801194D8
static int ItemStructSize;

// address: 0x800CC930
// size: 0x24
extern int plrxoff[9];

// address: 0x800CC954
// size: 0x24
extern int plryoff[9];

// address: 0x800CC978
// size: 0x24
extern int plrxoff2[9];

// address: 0x800CC99C
// size: 0x24
extern int plryoff2[9];

// address: 0x800CC9C0
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800CC9E4
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800CC9F0
// size: 0xC
extern int MagicTbl[3];

// address: 0x800CC9FC
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800CCA08
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800CCA14
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800CCA50
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800D13B0
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x8011952C
extern unsigned char *pQLogCel;

// address: 0x80119530
extern int ReturnLvlX;

// address: 0x80119534
extern int ReturnLvlY;

// address: 0x80119538
extern int ReturnLvl;

// address: 0x8011953C
extern int ReturnLvlT;

// address: 0x80119540
extern unsigned char rporttest;

// address: 0x80119544
extern int qline;

// address: 0x80119548
extern int numqlines;

// address: 0x8011954C
extern int qtopline;

// address: 0x8011B1E8
// size: 0x40
static int qlist[16];

// address: 0x8011A220
// size: 0x8
static struct RECT QSRect;

// address: 0x801194F9
extern unsigned char questlog;

// address: 0x800D1278
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x801194FC
extern int ALLQUESTS;

// address: 0x800D138C
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800D1398
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800D13A4
// size: 0xC
extern int QuestGroup3[3];

// address: 0x80119510
// size: 0x8
extern int QuestGroup4[2];

// address: 0x80119528
extern bool WaterDone;

// address: 0x80119500
// size: 0x7
static char questxoff[7];

// address: 0x80119508
// size: 0x7
static char questyoff[7];

// address: 0x800D1378
// size: 0x14
extern int questtrigstr[5];

// address: 0x80119518
static int QS_PX;

// address: 0x8011951C
static int QS_PY;

// address: 0x80119520
static int QS_PW;

// address: 0x80119524
static int QS_PH;

// address: 0x8011B228
// size: 0x10
static struct Dialog QSBack;

// address: 0x800D14F0
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x80119587
extern char stextflag;

// address: 0x800D1D98
// size: 0xBE0
extern struct ItemStruct smithitem[20];

// address: 0x800D2978
// size: 0x390
extern struct ItemStruct premiumitem[6];

// address: 0x80119588
extern int numpremium;

// address: 0x8011958C
extern int premiumlevel;

// address: 0x800D2D08
// size: 0xBE0
extern struct ItemStruct witchitem[20];

// address: 0x800D38E8
// size: 0x98
extern struct ItemStruct boyitem;

// address: 0x80119590
extern int boylevel;

// address: 0x800D3980
// size: 0x98
extern struct ItemStruct golditem;

// address: 0x800D3A18
// size: 0xBE0
extern struct ItemStruct healitem[20];

// address: 0x80119594
extern char stextsize;

// address: 0x80119595
extern unsigned char stextscrl;

// address: 0x8011A228
static int stextsel;

// address: 0x8011A22C
static int stextlhold;

// address: 0x8011A230
static int stextshold;

// address: 0x8011A234
static int stextvhold;

// address: 0x8011A238
static int stextsval;

// address: 0x8011A23C
static int stextsmax;

// address: 0x8011A240
static int stextup;

// address: 0x8011A244
static int stextdown;

// address: 0x8011A248
static char stextscrlubtn;

// address: 0x8011A249
static char stextscrldbtn;

// address: 0x8011A24A
static char SItemListFlag;

// address: 0x8011B238
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800D45F8
// size: 0x1C80
extern struct ItemStruct storehold[48];

// address: 0x800D6278
// size: 0x30
extern char storehidx[48];

// address: 0x8011A24C
static int storenumh;

// address: 0x8011A250
static int gossipstart;

// address: 0x8011A254
static int gossipend;

// address: 0x8011A258
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x8011A260
static int talker;

// address: 0x80119574
extern unsigned char *pSTextBoxCels;

// address: 0x80119578
extern unsigned char *pSTextSlidCels;

// address: 0x8011957C
extern int *SStringY;

// address: 0x800D1C74
// size: 0x10
extern struct Dialog SBack;

// address: 0x800D1C84
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800D1CD4
// size: 0x50
extern int SStringYBuy0[20];

// address: 0x800D1D24
// size: 0x50
extern int SStringYBuy1[20];

// address: 0x800D1D74
// size: 0x24
extern int talkname[9];

// address: 0x80119586
extern unsigned char InStoreFlag;

// address: 0x80115B64
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x801195A4
extern unsigned long gdwAllTextEntries;

// address: 0x8011A264
static unsigned char *P3Tiles;

// address: 0x801195B4
extern int tile;

// address: 0x801195C4
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800D64E0
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x801195C8
extern int numtrigs;

// address: 0x801195CC
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x801195D0
extern int TWarpFrom;

// address: 0x800D62A8
// size: 0x2C
extern int TownDownList[11];

// address: 0x800D62D4
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800D6308
// size: 0x30
extern int L1UpList[12];

// address: 0x800D6338
// size: 0x28
extern int L1DownList[10];

// address: 0x800D6360
// size: 0xC
extern int L2UpList[3];

// address: 0x800D636C
// size: 0x14
extern int L2DownList[5];

// address: 0x800D6380
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800D638C
// size: 0x3C
extern int L3UpList[15];

// address: 0x800D63C8
// size: 0x24
extern int L3DownList[9];

// address: 0x800D63EC
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800D6424
// size: 0x10
extern int L4UpList[4];

// address: 0x800D6434
// size: 0x18
extern int L4DownList[6];

// address: 0x800D644C
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800D645C
// size: 0x84
extern int L4PentaList[33];

// address: 0x801168F4
// size: 0xA
static char cursoff[10];

// address: 0x801195EA
extern unsigned char gbMusicOn;

// address: 0x801195EB
extern unsigned char gbSoundOn;

// address: 0x801195E9
extern unsigned char gbSndInited;

// address: 0x801195F0
extern long sglMasterVolume;

// address: 0x801195F4
extern long sglMusicVolume;

// address: 0x801195F8
extern long sglSoundVolume;

// address: 0x801195FC
extern long sglSpeechVolume;

// address: 0x80119600
extern int sgnMusicTrack;

// address: 0x801195EC
extern unsigned char gbDupSounds;

// address: 0x80119604
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x801169A0
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x80119628
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800D6530
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x80119630
// size: 0x2
extern char _pfind_index[2];

// address: 0x80119634
// size: 0x2
extern char _pfindx[2];

// address: 0x80119638
// size: 0x2
extern char _pfindy[2];

// address: 0x8011963A
extern unsigned char automapmoved;

// address: 0x8011961C
extern unsigned char flyflag;

// address: 0x80119614
// size: 0x8
extern char (*pad_styles[2])();

// address: 0x8011961D
extern char speed_type;

// address: 0x8011961E
extern char sel_speed;

// address: 0x8011A268
static unsigned long (*CurrentProc)();

// address: 0x80116B3C
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x80119674
extern int NumOfStrings;

// address: 0x80119648
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x8011964C
extern long hndText;

// address: 0x80119650
extern char **TextPtr;

// address: 0x80119654
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x80119684
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x80119688
extern int CharFade;

// address: 0x8011968C
extern int rotateness;

// address: 0x80119690
extern int spiralling_shape;

// address: 0x80119694
extern int down;

// address: 0x800D6580
// size: 0x10
extern char MlTab[16];

// address: 0x800D6590
// size: 0x10
extern char QlTab[16];

// address: 0x800D65A0
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x801196B0
extern int MyXoff1;

// address: 0x801196B4
extern int MyYoff1;

// address: 0x801196B8
extern int MyXoff2;

// address: 0x801196BC
extern int MyYoff2;

// address: 0x801196CC
extern bool iscflag;

// address: 0x801196D9
static unsigned char sgbFadedIn;

// address: 0x801196DA
static unsigned char screenbright;

// address: 0x801196DC
static int faderate;

// address: 0x801196E0
static bool fading;

// address: 0x801196EC
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x801196E4
extern int st;

// address: 0x801196E8
extern int mode;

// address: 0x800D6728
// size: 0x18
extern struct PortalStruct portal[2];

// address: 0x8011971E
extern char portalindex;

// address: 0x80119718
// size: 0x2
static char WarpDropX[2];

// address: 0x8011971C
// size: 0x2
static char WarpDropY[2];

// address: 0x800D6740
// size: 0x78
extern char MyVerString[120];

// address: 0x80119890
extern int Year;

// address: 0x80119894
extern int Day;

// address: 0x8011A26C
static unsigned char *tbuff;

// address: 0x800D67B8
// size: 0x300
extern unsigned char IconBuffer[768];

// address: 0x8011A270
static unsigned char HR1;

// address: 0x8011A271
static unsigned char HR2;

// address: 0x8011A272
static unsigned char HR3;

// address: 0x8011A273
static unsigned char VR1;

// address: 0x8011A274
static unsigned char VR2;

// address: 0x8011A275
static unsigned char VR3;

// address: 0x80119904
// size: 0x18
extern struct NODE *pHallList;

// address: 0x80119908
extern int nRoomCnt;

// address: 0x8011990C
extern int nSx1;

// address: 0x80119910
extern int nSy1;

// address: 0x80119914
extern int nSx2;

// address: 0x80119918
extern int nSy2;

// address: 0x801198BC
extern int Area_Min;

// address: 0x801198C0
extern int Room_Max;

// address: 0x801198C4
extern int Room_Min;

// address: 0x801198C8
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x801198D0
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x801198D8
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x801198E0
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x801198E8
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x801198EC
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x801198F0
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x801198F4
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x801198F8
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x801198FC
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x80119900
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x8011A278
static int abyssx;

// address: 0x8011A27C
static unsigned char lavapool;

// address: 0x801199A4
extern int lockoutcnt;

// address: 0x80119928
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x80119930
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x80119938
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x80119940
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x80119948
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x80119950
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x80119958
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x80119960
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x80119968
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x80119970
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x80119978
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x80119980
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x80119988
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x80119990
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x80119994
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x80119998
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x8011999C
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x801199A0
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x801199A8
extern int diabquad1x;

// address: 0x801199AC
extern int diabquad2x;

// address: 0x801199B0
extern int diabquad3x;

// address: 0x801199B4
extern int diabquad4x;

// address: 0x801199B8
extern int diabquad1y;

// address: 0x801199BC
extern int diabquad2y;

// address: 0x801199C0
extern int diabquad3y;

// address: 0x801199C4
extern int diabquad4y;

// address: 0x801199C8
extern int SP4x1;

// address: 0x801199CC
extern int SP4y1;

// address: 0x801199D0
extern int SP4x2;

// address: 0x801199D4
extern int SP4y2;

// address: 0x801199D8
extern int l4holdx;

// address: 0x801199DC
extern int l4holdy;

// address: 0x8011A280
static unsigned char *lpSetPiece1;

// address: 0x8011A284
static unsigned char *lpSetPiece2;

// address: 0x8011A288
static unsigned char *lpSetPiece3;

// address: 0x8011A28C
static unsigned char *lpSetPiece4;

// address: 0x801199EC
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x801199F4
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800D6AB8
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800D6ACC
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800D6AE8
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x801199FC
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800D6AFC
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x80119AE8
static bool DoUiForChooseMonster;

// address: 0x800D6B20
// size: 0x88
static char *MgToText[34];

// address: 0x800D6BA8
// size: 0x24
extern int StoryText[3][3];

// address: 0x800D6BCC
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800D7DCC
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800D840C
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x80119B0C
extern int setpc_x;

// address: 0x80119B10
extern int setpc_y;

// address: 0x80119B14
extern int setpc_w;

// address: 0x80119B18
extern int setpc_h;

// address: 0x80119B1C
extern unsigned char setloadflag;

// address: 0x80119B20
extern unsigned char *pMegaTiles;

// address: 0x800D8A4C
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800D9250
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800D9A54
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800DA258
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800DAA5C
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x80119B24
extern int dminx;

// address: 0x80119B28
extern int dminy;

// address: 0x80119B2C
extern int dmaxx;

// address: 0x80119B30
extern int dmaxy;

// address: 0x80119B34
extern int gnDifficulty;

// address: 0x80119B38
extern unsigned char currlevel;

// address: 0x80119B39
extern unsigned char leveltype;

// address: 0x80119B3A
extern unsigned char setlevel;

// address: 0x80119B3B
extern unsigned char setlvlnum;

// address: 0x80119B3C
extern unsigned char setlvltype;

// address: 0x80119B40
extern int ViewX;

// address: 0x80119B44
extern int ViewY;

// address: 0x80119B48
extern int ViewDX;

// address: 0x80119B4C
extern int ViewDY;

// address: 0x80119B50
extern int ViewBX;

// address: 0x80119B54
extern int ViewBY;

// address: 0x800DB260
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x80119B58
extern int LvlViewX;

// address: 0x80119B5C
extern int LvlViewY;

// address: 0x80119B60
extern int btmbx;

// address: 0x80119B64
extern int btmby;

// address: 0x80119B68
extern int btmdx;

// address: 0x80119B6C
extern int btmdy;

// address: 0x80119B70
extern int MicroTileLen;

// address: 0x80119B74
extern char TransVal;

// address: 0x800DB274
// size: 0x20
extern bool TransList[8];

// address: 0x80119B78
extern int themeCount;

// address: 0x800DB294
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x800FD554
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x800FE0B8
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x800FEC1C
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x800FF780
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x80119B04
extern unsigned char *pSetPiece;

// address: 0x80119B08
extern int DungSize;

// address: 0x800FF94C
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x80119BB8
extern int numthemes;

// address: 0x80119BBC
extern int zharlib;

// address: 0x80119BC0
extern unsigned char armorFlag;

// address: 0x80119BC1
extern unsigned char bCrossFlag;

// address: 0x80119BC2
extern unsigned char weaponFlag;

// address: 0x80119BC4
extern int themex;

// address: 0x80119BC8
extern int themey;

// address: 0x80119BCC
extern int themeVar1;

// address: 0x80119BD0
extern unsigned char bFountainFlag;

// address: 0x80119BD1
extern unsigned char cauldronFlag;

// address: 0x80119BD2
extern unsigned char mFountainFlag;

// address: 0x80119BD3
extern unsigned char pFountainFlag;

// address: 0x80119BD4
extern unsigned char tFountainFlag;

// address: 0x80119BD5
extern unsigned char treasureFlag;

// address: 0x80119BD8
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x800FF82C
// size: 0x10
extern int ThemeGood[4];

// address: 0x800FF83C
// size: 0x64
extern int trm5x[25];

// address: 0x800FF8A0
// size: 0x64
extern int trm5y[25];

// address: 0x800FF904
// size: 0x24
extern int trm3x[9];

// address: 0x800FF928
// size: 0x24
extern int trm3y[9];

// address: 0x80119C90
extern int nummissiles;

// address: 0x800FFB64
// size: 0x1F4
extern int missileactive[125];

// address: 0x800FFD58
// size: 0x1F4
extern int missileavail[125];

// address: 0x80119C94
extern unsigned char MissilePreFlag;

// address: 0x800FFF4C
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x80119C95
extern unsigned char ManashieldFlag;

// address: 0x80119C96
extern unsigned char ManashieldFlag2;

// address: 0x800FFADC
// size: 0x20
extern int XDirAdd[8];

// address: 0x800FFAFC
// size: 0x20
extern int YDirAdd[8];

// address: 0x80119C7D
extern unsigned char fadetor;

// address: 0x80119C7E
extern unsigned char fadetog;

// address: 0x80119C7F
extern unsigned char fadetob;

// address: 0x800FFB1C
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x800FFB2C
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x801027FC
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x80119CF4
extern long nummonsters;

// address: 0x80107F7C
// size: 0x190
extern short monstactive[200];

// address: 0x8010810C
// size: 0x190
extern short monstkills[200];

// address: 0x8010829C
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x80119CF8
extern long monstimgtot;

// address: 0x80119CFC
extern char totalmonsters;

// address: 0x80119D00
extern int uniquetrans;

// address: 0x8011A290
static unsigned char sgbSaveSoundOn;

// address: 0x80119CC8
// size: 0x8
extern char offset_x[8];

// address: 0x80119CD0
// size: 0x8
extern char offset_y[8];

// address: 0x80119CB0
// size: 0x8
extern char left[8];

// address: 0x80119CB8
// size: 0x8
extern char right[8];

// address: 0x80119CC0
// size: 0x8
extern char opposite[8];

// address: 0x80119CA4
extern int nummtypes;

// address: 0x80119CA8
// size: 0x7
extern char animletter[7];

// address: 0x8010265C
// size: 0x120
extern int MWVel[3][24];

// address: 0x80119CD8
// size: 0x4
extern char rnd5[4];

// address: 0x80119CDC
// size: 0x4
extern char rnd10[4];

// address: 0x80119CE0
// size: 0x4
extern char rnd20[4];

// address: 0x80119CE4
// size: 0x4
extern char rnd60[4];

// address: 0x8010277C
// size: 0x80
extern void (*AiProc[32])();

// address: 0x80108774
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x8010A1B4
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x8010A234
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x8010A2A4
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x8010855C
// size: 0x218
extern int TransPals[134];

// address: 0x8010845C
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x80119D30
extern unsigned char invflag;

// address: 0x80119D31
extern unsigned char drawsbarflag;

// address: 0x80119D34
extern int InvBackY;

// address: 0x80119D38
extern int InvCursPos;

// address: 0x8010B24C
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x80119D3C
extern int InvBackAY;

// address: 0x80119D40
extern int InvSel;

// address: 0x80119D44
extern int ItemW;

// address: 0x80119D48
extern int ItemH;

// address: 0x80119D4C
extern int ItemNo;

// address: 0x80119D50
// size: 0x8
extern struct RECT BRect;

// address: 0x80119D20
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x80119D24
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x80119D1C
extern int InvPageNo;

// address: 0x8010ABD4
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8010ABFC
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x8010AE44
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x8010B0E4
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x8010B198
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x80119D28
static bool InvOn;

// address: 0x80119D2C
static unsigned long sgdwLastTime;

// address: 0x80119D7A
extern unsigned char automapflag;

// address: 0x8010B298
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x8010B360
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x80119D7B
extern unsigned char AMLWallFlag;

// address: 0x80119D7C
extern unsigned char AMRWallFlag;

// address: 0x80119D7D
extern unsigned char AMLLWallFlag;

// address: 0x80119D7E
extern unsigned char AMLRWallFlag;

// address: 0x80119D7F
extern unsigned char AMDirtFlag;

// address: 0x80119D80
extern unsigned char AMColumnFlag;

// address: 0x80119D81
extern unsigned char AMStairFlag;

// address: 0x80119D82
extern unsigned char AMLDoorFlag;

// address: 0x80119D83
extern unsigned char AMLGrateFlag;

// address: 0x80119D84
extern unsigned char AMLArchFlag;

// address: 0x80119D85
extern unsigned char AMRDoorFlag;

// address: 0x80119D86
extern unsigned char AMRGrateFlag;

// address: 0x80119D87
extern unsigned char AMRArchFlag;

// address: 0x80119D88
extern int AutoMapX;

// address: 0x80119D8C
extern int AutoMapY;

// address: 0x80119D90
extern int AutoMapXOfs;

// address: 0x80119D94
extern int AutoMapYOfs;

// address: 0x80119D98
extern int AMPlayerX;

// address: 0x80119D9C
extern int AMPlayerY;

// address: 0x80119D64
extern int AutoMapScale;

// address: 0x80119D68
extern unsigned char AutoMapPlayerR;

// address: 0x80119D69
extern unsigned char AutoMapPlayerG;

// address: 0x80119D6A
extern unsigned char AutoMapPlayerB;

// address: 0x80119D6B
extern unsigned char AutoMapWallR;

// address: 0x80119D6C
extern unsigned char AutoMapWallG;

// address: 0x80119D6D
extern unsigned char AutoMapWallB;

// address: 0x80119D6E
extern unsigned char AutoMapDoorR;

// address: 0x80119D6F
extern unsigned char AutoMapDoorG;

// address: 0x80119D70
extern unsigned char AutoMapDoorB;

// address: 0x80119D71
extern unsigned char AutoMapColumnR;

// address: 0x80119D72
extern unsigned char AutoMapColumnG;

// address: 0x80119D73
extern unsigned char AutoMapColumnB;

// address: 0x80119D74
extern unsigned char AutoMapArchR;

// address: 0x80119D75
extern unsigned char AutoMapArchG;

// address: 0x80119D76
extern unsigned char AutoMapArchB;

// address: 0x80119D77
extern unsigned char AutoMapStairR;

// address: 0x80119D78
extern unsigned char AutoMapStairG;

// address: 0x80119D79
extern unsigned char AutoMapStairB;

// address: 0x8011A3EC
extern unsigned long GazTick;

// address: 0x80120D28
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A6368
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x8011A414
extern void (*PollFunc)();

// address: 0x8011A3F8
extern void (*MsgFunc)();

// address: 0x8011A444
extern void (*ErrorFunc)();

// address: 0x8011A318
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x8011A31C
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x8011A320
// size: 0x5C
static struct TASK *T;

// address: 0x8011A324
static unsigned long MemTypeForTasker;

// address: 0x8011E558
// size: 0x30
static int SchEnv[12];

// address: 0x8011A328
static unsigned long ExecId;

// address: 0x8011A32C
static unsigned long ExecMask;

// address: 0x8011A330
static int TasksActive;

// address: 0x8011A334
static void (*EpiFunc)();

// address: 0x8011A338
static void (*ProFunc)();

// address: 0x8011A33C
static unsigned long EpiProId;

// address: 0x8011A340
static unsigned long EpiProMask;

// address: 0x8011A344
static void (*DoTasksPrologue)();

// address: 0x8011A348
static void (*DoTasksEpilogue)();

// address: 0x8011A34C
static void (*StackFloodCallback)();

// address: 0x8011A350
static unsigned char ExtraStackProtection;

// address: 0x8011A354
static int ExtraStackSizeLongs;

// address: 0x8011A400
extern void *LastPtr;

// address: 0x800A63A0
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8011A358
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x8011E588
// size: 0x1180
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x8011A35C
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x8011A360
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x8011A364
static int TimeStamp;

// address: 0x8011A368
static unsigned char FullErrorChecking;

// address: 0x8011A36C
static unsigned long LastAttemptedAlloc;

// address: 0x8011A370
static unsigned long LastDeallocedBlock;

// address: 0x8011A374
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x8011A378
static int NumOfFreeHdrs;

// address: 0x8011A37C
static unsigned long LastTypeAlloced;

// address: 0x8011A380
static void (*AllocFilter)();

// address: 0x800A63A8
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A63D0
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x8011F708
// size: 0x1380
static char buf[4992];

// address: 0x800A63F8
// size: 0x7
static char NULL_REP[7];

// address: 0x8007B714
// line start: 177
// line end:   178
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B730
// line start: 182
// line end:   183
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007B73C
// line start: 114
// line end:   123
void Remove96__Fv() {
}


// address: 0x8007B774
// line start: 133
// line end:   205
void AppMain() {
}


// address: 0x8007B814
// line start: 213
// line end:   214
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007B840
// line start: 222
// line end:   257
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007B928
// line start: 271
// line end:   283
void MAIN_MainLoop__Fv() {
}


// address: 0x8007B970
// line start: 76
// line end:   80
void CheckMaxArgs__Fv() {
}


// address: 0x8007B9A4
// line start: 96
// line end:   98
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007B9B0
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


// address: 0x8007BB24
// line start: 159
// line end:   178
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BBD8
// line start: 220
// line end:   239
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007BC78
// line start: 249
// line end:   266
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BD14
// line start: 276
// line end:   287
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BDB4
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


// address: 0x8007BED0
// line start: 186
// line end:   204
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007BFAC
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


// address: 0x8007C0D4
// line start: 247
// line end:   248
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007C0E0
// line start: 256
// line end:   265
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007C11C
// line start: 278
// line end:   341
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007C324
// line start: 365
// line end:   366
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007C330
// line start: 374
// line end:   376
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007C36C
// line start: 380
// line end:   381
unsigned char ClearedYet__Fv() {
}


// address: 0x8007C378
// line start: 389
// line end:   393
void PrimDrawSycnCallBack() {
}


// address: 0x8007C398
// line start: 403
// line end:   404
void SendDispEnv__Fv() {
}


// address: 0x8007C3BC
// size: 0x18
// line start: 453
// line end:   457
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007C3D4
// size: 0x28
// line start: 461
// line end:   465
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007C3EC
// size: 0x34
// line start: 469
// line end:   473
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007C404
// size: 0x24
// line start: 478
// line end:   482
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007C41C
// size: 0x14
// line start: 486
// line end:   490
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007C434
// size: 0xC
// line start: 503
// line end:   507
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007C44C
// line start: 511
// line end:   540
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007C560
// line start: 546
// line end:   557
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007C5C8
// line start: 127
// line end:   128
void VID_AfterDisplay__Fv() {
}


// address: 0x8007C5E8
// line start: 182
// line end:   184
void VID_ScrOn__Fv() {
}


// address: 0x8007C610
// line start: 203
// line end:   209
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007C668
// line start: 213
// line end:   214
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007C674
// line start: 218
// line end:   219
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007C680
// line start: 224
// line end:   230
void VID_DispEnvSend() {
}


// address: 0x8007C6BC
// line start: 236
// line end:   238
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007C6CC
// line start: 242
// line end:   243
int VID_GetXOff__Fv() {
}


// address: 0x8007C6D8
// line start: 247
// line end:   248
int VID_GetYOff__Fv() {
}


// address: 0x8007C6E4
// line start: 252
// line end:   286
void VID_SetDBuffer__Fb(bool DBuf) {
}


// address: 0x8007C800
// line start: 96
// line end:   116
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007C808
// line start: 148
// line end:   149
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007C828
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C828(unsigned short tpage) {
}


// address: 0x8007C844
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C844(unsigned short tpage) {
}


// address: 0x8007C850
// size: 0x14
// line start: 163
// line end:   164
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007C85C
// size: 0x14
// line start: 173
// line end:   174
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007C868
// line start: 182
// line end:   242
void SortOutFileSystem__Fv() {
}


// address: 0x8007C9A4
// line start: 111
// line end:   113
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007C9C4
// line start: 117
// line end:   125
void Spanker__Fv() {
}


// address: 0x8007CA04
// line start: 271
// line end:   272
void GaryLiddon__Fv() {
}


// address: 0x8007CA0C
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


// address: 0x8007CAD0
// line start: 97
// line end:   100
void DummyPoll__Fv() {
}


// address: 0x8007CAD8
// line start: 103
// line end:   104
void DaveOwens__Fv() {
}


// address: 0x8007CB00
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007CB28
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007CB28(unsigned short tpage) {
}


// address: 0x8007CB44
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007CB44(unsigned short tpage) {
}


// address: 0x8007CB50
// line start: 474
// line end:   502
void TimSwann__Fv() {
}


// address: 0x8007CB58
// line start: 25
// line end:   26
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007CB60
// line start: 30
// line end:   32
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007CB94
// line start: 36
// line end:   39
void leighbird__Fv() {
}


// address: 0x8007CBBC
// size: 0x14
// line start: 61
// line end:   63
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007CC0C
// line start: 70
// line end:   71
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007CC60
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


// address: 0x8007CDC8
// line start: 112
// line end:   119
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007CE2C
// line start: 129
// line end:   131
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007CE4C
// line start: 138
// line end:   150
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007CF2C
// line start: 157
// line end:   171
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007CFF0
// line start: 180
// line end:   185
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007D054
// line start: 193
// line end:   207
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007D130
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


// address: 0x8007D244
// line start: 254
// line end:   274
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007D2EC
// line start: 282
// line end:   286
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007D344
// line start: 295
// line end:   299
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007D39C
// line start: 308
// line end:   309
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007D3B0
// line start: 317
// line end:   318
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007D3EC
// size: 0x14
// line start: 62
// line end:   65
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007D454
// line start: 75
// line end:   75
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007D4AC
// line start: 85
// line end:   93
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007D4F0
// line start: 106
// line end:   118
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D5B4
// line start: 125
// line end:   139
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007D66C
// line start: 143
// line end:   160
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D740
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


// address: 0x8007D950
// size: 0x4
// line start: 65
// line end:   67
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007D968
// line start: 77
// line end:   79
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007D994
// line start: 89
// line end:   101
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007DA10
// line start: 111
// line end:   119
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007DA7C
// size: 0x14
// line start: 65
// line end:   68
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007DAB8
// line start: 78
// line end:   78
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007DB10
// line start: 88
// line end:   96
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007DB50
// line start: 109
// line end:   121
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DC10
// line start: 128
// line end:   142
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007DCC4
// line start: 146
// line end:   158
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DD6C
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


// address: 0x8007DF78
// size: 0x6C
// line start: 112
// line end:   118
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007DFB8
// line start: 128
// line end:   129
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007E000
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


// address: 0x8007E1F4
// line start: 215
// line end:   243
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011A040
	static int TpX;
	// address: 0x8011A044
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


// address: 0x8007E2C4
// line start: 246
// line end:   270
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007E37C
// line start: 285
// line end:   298
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007E3D8
// line start: 309
// line end:   316
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007E448
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


// address: 0x8007E574
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


// address: 0x8007E670
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


// address: 0x8007EA78
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


// address: 0x8007ECE4
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


// address: 0x8007EE44
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


// address: 0x8007EF40
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


// address: 0x8007F19C
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


// address: 0x8007F21C
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


// address: 0x8007F3E0
// size: 0x28
// line start: 918
// line end:   937
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007F534
// size: 0x34
// line start: 943
// line end:   962
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007F688
// size: 0x28
// line start: 968
// line end:   984
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007F76C
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


// address: 0x8007F8C0
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


// address: 0x8007FA00
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


// address: 0x8007FAFC
// line start: 1157
// line end:   1167
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007FB28
// line start: 1177
// line end:   1212
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007FC70
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


// address: 0x8007FD90
// line start: 1253
// line end:   1257
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x8007FDE4
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


// address: 0x8007FEAC
// line start: 1309
// line end:   1310
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8007FF00
// line start: 1314
// line end:   1315
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x8007FF58
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


// address: 0x8008007C
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


// address: 0x80080150
// size: 0x4
// line start: 1422
// line end:   1424
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x800801A0
// line start: 1430
// line end:   1431
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x800801C8
// line start: 1435
// line end:   1441
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x80080270
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


// address: 0x80080330
// line start: 1479
// line end:   1483
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x80080374
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


// address: 0x80080404
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


// address: 0x80080474
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


// address: 0x800804E0
// line start: 1530
// line end:   1532
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080530
// line start: 1545
// line end:   1546
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080558
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


// address: 0x800805F4
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


// address: 0x8008065C
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


// address: 0x80080730
// size: 0x78
// line start: 1665
// line end:   1666
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x80080764
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


// address: 0x800809E0
// line start: 1731
// line end:   1733
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x80080A04
// line start: 1737
// line end:   1766
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80080CE4
// line start: 1774
// line end:   1782
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80080D5C
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


// address: 0x80080EB8
// line start: 1868
// line end:   1868
void _GLOBAL__D_DatPool() {
}


// address: 0x80080F10
// line start: 1868
// line end:   1868
void _GLOBAL__I_DatPool() {
}


// address: 0x80080F64
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x80080FE0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x8008105C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x800810D8
// line start: 243
// line end:   243
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x80081100
// line start: 242
// line end:   242
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x80081128
// line start: 241
// line end:   241
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x80081134
// line start: 240
// line end:   240
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x80081140
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x800811B8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x800811CC
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x800811D8
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x800811EC
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x80081208
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80081224
// line start: 167
// line end:   167
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80081230
// line start: 158
// line end:   158
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80081258
// line start: 157
// line end:   157
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80081280
// line start: 66
// line end:   66
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x80081294
// size: 0x14
// line start: 122
// line end:   125
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x800812D8
// line start: 135
// line end:   135
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80081330
// line start: 145
// line end:   155
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80081354
// line start: 167
// line end:   189
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8008137C
// line start: 198
// line end:   208
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x800813A0
// line start: 214
// line end:   233
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80081480
// line start: 250
// line end:   251
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x80081490
// line start: 256
// line end:   283
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


// address: 0x800815DC
// line start: 290
// line end:   364
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
		// register: 18
		register unsigned char *ptr;
		{
			// register: 17
			register int i;
		}
	}
}


// address: 0x8008185C
// line start: 373
// line end:   444
bool LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 23
	register unsigned char *Dest;
	// register: 30
	register int OrigSize;
	// register: 21
	register unsigned long Pos;
	// address: 0xFFFFFFC8
	// size: 0x14
	auto struct STRHDR *sh;
	// register: 17
	register int ah;
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


// address: 0x80081A90
// line start: 107
// line end:   134
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x80081B7C
// line start: 144
// line end:   170
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


// address: 0x80081CA8
// line start: 180
// line end:   220
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


// address: 0x80081E1C
// line start: 230
// line end:   274
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


// address: 0x80081F88
// line start: 279
// line end:   346
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


// address: 0x80082268
// size: 0x14
// line start: 356
// line end:   377
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


// address: 0x80082368
// size: 0x14
// line start: 387
// line end:   426
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


// address: 0x80082504
// line start: 436
// line end:   438
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80082528
// line start: 450
// line end:   456
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x8008255C
// line start: 466
// line end:   547
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80082644
// line start: 557
// line end:   559
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80082650
// line start: 564
// line end:   579
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x800826B4
// line start: 584
// line end:   625
long BL_LoadFileAsync__FPcc(char *Name, char LumpID) {
	// register: 18
	// size: 0x14
	register struct STRHDR *sh;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int Size;
	// register: 16
	register int ah;
	// register: 17
	register long MyHnd;
	// register: 16
	register unsigned char *LoadAddr;
}


// address: 0x80082814
// size: 0x14
// line start: 635
// line end:   639
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80082840
// line start: 654
// line end:   661
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80082878
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


// address: 0x8008294C
// line start: 77
// line end:   108
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x80082A70
// line start: 118
// line end:   137
void Tfree__FPv(void *Addr) {
}


// address: 0x80082B20
// line start: 146
// line end:   151
void InitTmalloc__Fv() {
}


// address: 0x80082B48
// line start: 161
// line end:   167
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80082B9C
// line start: 174
// line end:   186
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80082BE8
// line start: 197
// line end:   223
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


// address: 0x80082CAC
// line start: 234
// line end:   239
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80082CD8
// line start: 251
// line end:   315
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


// address: 0x80082F38
// line start: 326
// line end:   427
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


// address: 0x80083250
// line start: 438
// line end:   476
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


// address: 0x80083370
// line start: 486
// line end:   517
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


// address: 0x80083474
// line start: 541
// line end:   544
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80083484
// line start: 554
// line end:   555
bool PA_GetPauseOk__Fv() {
}


// address: 0x80083490
// line start: 578
// line end:   589
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT PRect;
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x800835DC
// line start: 594
// line end:   595
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800835E4
// line start: 598
// line end:   613
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x800836E4
// line start: 620
// line end:   621
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x800836EC
// line start: 624
// line end:   625
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800836F4
// line start: 628
// line end:   641
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x800837F4
// line start: 648
// line end:   649
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x800837FC
// line start: 652
// line end:   653
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083804
// line start: 656
// line end:   669
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083930
// line start: 686
// line end:   687
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083938
// line start: 690
// line end:   690
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80083960
// line start: 695
// line end:   695
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80083988
// line start: 695
// line end:   695
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x800839B0
// size: 0xC
// line start: 111
// line end:   111
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800839F4
// line start: 82
// line end:   82
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80083A28
// size: 0x8
// line start: 81
// line end:   81
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80083A3C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80083A5C
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80083A64
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80083A6C
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80083A94
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80083AF0
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x80083B18
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x80083B40
// line start: 85
// line end:   85
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x80083B4C
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


// address: 0x80083C64
// line start: 152
// line end:   201
void PAD_Handler__Fv() {
	// register: 16
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 17
	register unsigned char fin;
}


// address: 0x80083E1C
// size: 0x6C
// line start: 215
// line end:   226
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x80083EB8
// line start: 238
// line end:   269
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80083FF0
// line start: 273
// line end:   305
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x8008414C
// line start: 315
// line end:   339
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x80084270
// line start: 343
// line end:   343
void _GLOBAL__I_Pad0() {
}


// address: 0x800842A8
// line start: 86
// line end:   86
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x800842B0
// line start: 85
// line end:   85
unsigned char CheckActive__4CPad_addr_800842B0(struct CPad *this) {
}


// address: 0x800842BC
// line start: 84
// line end:   84
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x800842C4
// line start: 77
// line end:   77
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x800842CC
// size: 0x6C
// line start: 75
// line end:   75
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80084300
// line start: 118
// line end:   122
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80084324
// line start: 89
// line end:   94
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


// address: 0x800843C0
// line start: 360
// line end:   370
void InitPrinty__Fv() {
}


// address: 0x80084448
// line start: 375
// line end:   376
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80084450
// line start: 383
// line end:   442
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x800845D0
// line start: 447
// line end:   627
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


// address: 0x80084BF0
// line start: 632
// line end:   648
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x80084CA4
// line start: 656
// line end:   658
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80084D08
// line start: 664
// line end:   667
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80084D14
// line start: 88
// line end:   88
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80084D38
// line start: 85
// line end:   85
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80084D58
// line start: 82
// line end:   82
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80084D70
// line start: 71
// line end:   75
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80084DC8
// line start: 59
// line end:   59
void Init__5CFont(struct CFont *this) {
}


// address: 0x80084DFC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80084DFC(struct TextDat *this, int FrNum) {
}


// address: 0x80084E18
// line start: 110
// line end:   113
unsigned char TrimCol__Fs(short col) {
}


// address: 0x80084E50
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


// address: 0x800857C8
// size: 0x24
// line start: 391
// line end:   402
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80085900
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


// address: 0x80085BA4
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


// address: 0x80085CDC
// line start: 496
// line end:   552
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80085F34
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


// address: 0x800870F4
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


// address: 0x8008730C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008730C(struct TextDat *this, int PalNum) {
}


// address: 0x80087328
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80087328(struct TextDat *this, int FrNum) {
}


// address: 0x80087344
// line start: 65
// line end:   106
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80087484
// line start: 111
// line end:   116
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80087520
// line start: 234
// line end:   240
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x80087560
// line start: 245
// line end:   274
void CycleSelCols__Fv() {
}


// address: 0x800876F0
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


// address: 0x80087764
// line start: 299
// line end:   305
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x800877B8
// size: 0xE0
// line start: 314
// line end:   368
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x8008790C
// line start: 378
// line end:   380
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80087944
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


// address: 0x80087A0C
// line start: 410
// line end:   422
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80087A94
// line start: 432
// line end:   439
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80087AFC
// line start: 448
// line end:   455
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80087B64
// line start: 465
// line end:   470
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x80087BC0
// line start: 480
// line end:   486
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x80087C10
// line start: 494
// line end:   529
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80087F5C
// line start: 540
// line end:   550
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x80088008
// line start: 561
// line end:   572
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x800880DC
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


// address: 0x800881E4
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


// address: 0x80088320
// size: 0xC
// line start: 671
// line end:   673
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x80088398
// line start: 684
// line end:   685
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x800883C0
// line start: 695
// line end:   698
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x800883E8
// line start: 708
// line end:   710
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x80088400
// line start: 753
// line end:   1237
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


// address: 0x80089924
// line start: 1249
// line end:   1272
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


// address: 0x80089A94
// line start: 1282
// line end:   1654
void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// address: 0xFFFFFFA0
	auto int nMonster;
	// register: 20
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


// address: 0x8008A80C
// line start: 1663
// line end:   1844
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


// address: 0x8008AED0
// line start: 1852
// line end:   1872
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


// address: 0x8008B040
// line start: 1882
// line end:   1883
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B054
// line start: 1893
// line end:   1894
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B068
// line start: 1904
// line end:   1906
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B12C
// line start: 1916
// line end:   1923
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x8008B194
// line start: 1933
// line end:   1943
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008B234
// line start: 1954
// line end:   1965
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008B308
// line start: 2022
// line end:   2049
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008B388
// line start: 2061
// line end:   2062
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B390
// line start: 2072
// line end:   2073
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B3A4
// size: 0xE0
// line start: 2109
// line end:   2116
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008B3B0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008B3B0(struct POLY_FT4 **Prim) {
}


// address: 0x8008B42C
// line start: 97
// line end:   105
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008B474
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008B4B0
// line start: 97
// line end:   105
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008B4F8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008B4F8(struct POLY_GT4 **Prim) {
}


// address: 0x8008B574
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x8008B5F0
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


// address: 0x8008B618
// line start: 174
// line end:   176
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008B634
// line start: 173
// line end:   173
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008B65C
// line start: 172
// line end:   172
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008B684
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B6A8
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B6CC
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B6F4
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B700
// line start: 64
// line end:   76
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008B798
// line start: 47
// line end:   60
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8008B828
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008B860
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008B860(struct TextDat *this, int Creature) {
}


// address: 0x8008B8D8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008B8D8(struct TextDat *this) {
}


// address: 0x8008B8EC
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008B8EC(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008B8F8
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008B8F8(struct TextDat *this, int PalNum) {
}


// address: 0x8008B914
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008B914(struct TextDat *this, int FrNum) {
}


// address: 0x8008B930
// line start: 119
// line end:   121
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008B95C
// line start: 129
// line end:   130
void OVR_LoadPregame__Fv() {
}


// address: 0x8008B984
// line start: 137
// line end:   138
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008B9AC
// line start: 146
// line end:   147
void OVR_LoadGame__Fv() {
}


// address: 0x8008B9D4
// line start: 155
// line end:   156
void OVR_LoadFmv__Fv() {
}


// address: 0x8008B9FC
// line start: 164
// line end:   165
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008BA28
// line start: 174
// line end:   178
void ClearOutOverlays__Fv() {
}


// address: 0x8008BA80
// line start: 187
// line end:   194
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008BB44
// line start: 203
// line end:   216
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008BBB4
// size: 0x4
// line start: 225
// line end:   226
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x8008BBC0
// line start: 234
// line end:   239
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x8008BC14
// line start: 244
// line end:   244
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008BD84
// size: 0x4
// line start: 65
// line end:   65
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x8008BD90
// line start: 74
// line end:   75
void StevesDummyPoll__Fv() {
}


// address: 0x8008BD98
// line start: 78
// line end:   81
void Lambo__Fv() {
}


// address: 0x8008BDA0
// size: 0x84
// line start: 66
// line end:   111
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008BE84
// line start: 122
// line end:   124
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008BEDC
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008BF38
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


// address: 0x8008C084
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


// address: 0x8008C4B0
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008C530
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


// address: 0x8008CA24
// line start: 426
// line end:   484
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008CAA0
// size: 0x4
// line start: 489
// line end:   520
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008CB1C
// line start: 531
// line end:   532
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008CB24
// line start: 541
// line end:   542
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008CB2C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008CB2C(struct POLY_FT4 **Prim) {
}


// address: 0x8008CBA8
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008CBA8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008CBE4
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008CBE4(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008CC0C
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008CC20
// line start: 249
// line end:   253
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008CC38
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008CC38(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008CC70
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008CC94
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008CC94(struct TextDat *this, int Creature) {
}


// address: 0x8008CD0C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008CD0C(struct TextDat *this) {
}


// address: 0x8008CD20
// line start: 232
// line end:   232
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008CD20(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008CD2C
// line start: 87
// line end:   94
void PROF_Open__Fv() {
}


// address: 0x8008CD6C
// line start: 99
// line end:   100
bool PROF_State__Fv() {
}


// address: 0x8008CD78
// line start: 104
// line end:   105
void PROF_On__Fv() {
}


// address: 0x8008CD88
// line start: 109
// line end:   110
void PROF_Off__Fv() {
}


// address: 0x8008CD94
// line start: 114
// line end:   115
void PROF_CpuEnd__Fv() {
}


// address: 0x8008CDC4
// line start: 119
// line end:   120
void PROF_CpuStart__Fv() {
}


// address: 0x8008CDE8
// line start: 124
// line end:   125
void PROF_DrawStart__Fv() {
}


// address: 0x8008CE0C
// line start: 129
// line end:   130
void PROF_DrawEnd__Fv() {
}


// address: 0x8008CE3C
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


// address: 0x8008D030
// line start: 179
// line end:   180
void PROF_Restart__Fv() {
}


// address: 0x8008D050
// line start: 181
// line end:   220
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008D148
// line start: 231
// line end:   268
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008D1F8
// line start: 276
// line end:   283
void GoBackLevel__Fv() {
}


// address: 0x8008D270
// line start: 287
// line end:   291
void GoWarpLevel__Fv() {
}


// address: 0x8008D2A8
// line start: 297
// line end:   303
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D344
// line start: 307
// line end:   322
void GoLoadGame__Fv() {
}


// address: 0x8008D3CC
// line start: 326
// line end:   332
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D468
// line start: 336
// line end:   347
void GoNewLevel__Fv() {
}


// address: 0x8008D4BC
// line start: 354
// line end:   358
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D554
// line start: 365
// line end:   368
void GoForwardLevel__Fv() {
}


// address: 0x8008D5AC
// line start: 372
// line end:   376
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D644
// line start: 384
// line end:   389
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008D694
// line start: 393
// line end:   397
void PostNewGame__Fv() {
}


// address: 0x8008D6CC
// line start: 406
// line end:   417
void LevelToLevelInit__Fv() {
}


// address: 0x8008D724
// line start: 204
// line end:   218
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008D768
// size: 0x10
// line start: 226
// line end:   230
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008D7C0
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


// address: 0x8008DC40
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


// address: 0x8008E0C4
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


// address: 0x8008E230
// line start: 457
// line end:   469
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008E27C
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


// address: 0x8008E638
// line start: 553
// line end:   572
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008E72C
// line start: 578
// line end:   596
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008E830
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008E830(struct TextDat *this, int PalNum) {
}


// address: 0x8008E84C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008E84C(struct TextDat *this, int FrNum) {
}


// address: 0x8008E868
// line start: 140
// line end:   154
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat *CDGfxData;
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8008E94C
// line start: 160
// line end:   162
void InitCDWaitIcon__Fv() {
}


// address: 0x8008E980
// line start: 172
// line end:   189
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008E994
// line start: 385
// line end:   408
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008E9DC
// line start: 418
// line end:   428
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


// address: 0x8008EA68
// line start: 434
// line end:   461
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


// address: 0x8008EB30
// size: 0x80
// line start: 472
// line end:   530
struct SFXHDR *STR_InitStream__Fv() {
	// register: 18
	// size: 0x80
	register struct SFXHDR *sfh;
	{
		// register: 17
		register int s;
	}
}


// address: 0x8008EC68
// size: 0x80
// line start: 540
// line end:   600
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008EDA4
// line start: 610
// line end:   615
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008EDFC
// line start: 640
// line end:   671
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008EF08
// line start: 681
// line end:   685
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008EF58
// line start: 695
// line end:   699
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008EFA8
// line start: 709
// line end:   711
void STR_fadedownto__FP6SFXHDRi(struct SFXHDR *sfh, int vol) {
}


// address: 0x8008EFCC
// line start: 721
// line end:   723
void STR_fadeupto__FP6SFXHDRi(struct SFXHDR *sfh, int vol) {
}


// address: 0x8008EFF0
// line start: 733
// line end:   751
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F05C
// line start: 760
// line end:   802
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008F168
// line start: 811
// line end:   889
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F2CC
// line start: 899
// line end:   918
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008F394
// line start: 929
// line end:   1006
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008F570
// line start: 1018
// line end:   1139
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


// address: 0x8008F868
// line start: 1152
// line end:   1319
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


// address: 0x8008FC94
// line start: 1333
// line end:   1368
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


// address: 0x8008FDA4
// line start: 140
// line end:   177
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x8008FE74
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


// address: 0x8008FEE0
// line start: 213
// line end:   223
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8008FF58
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011A0A4
	static int DestAddr;
}


// address: 0x8008FFD0
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


// address: 0x80090104
// line start: 355
// line end:   360
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090158
// line start: 384
// line end:   386
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8009017C
// line start: 396
// line end:   401
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800901E0
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


// address: 0x80090394
// line start: 86
// line end:   87
void AS_CallBack0__Fi(int handle) {
}


// address: 0x800903A8
// line start: 91
// line end:   92
void AS_CallBack1__Fi(int handle) {
}


// address: 0x800903BC
// line start: 102
// line end:   125
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80090498
// line start: 148
// line end:   164
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x80090538
// line start: 174
// line end:   175
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80090544
// line start: 185
// line end:   189
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x80090570
// line start: 200
// line end:   242
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x80090690
// line start: 170
// line end:   171
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x800906C4
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x80090754
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80090830
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x800908B0
// line start: 277
// line end:   293
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x80090950
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x800909E4
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


// address: 0x80090A58
// line start: 353
// line end:   354
void SCR_Handler__Fv() {
}


// address: 0x80090A80
// line start: 132
// line end:   132
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x80090A88
// size: 0x18
// line start: 110
// line end:   116
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80090AC4
// line start: 98
// line end:   104
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80090B28
// line start: 90
// line end:   93
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090B80
// line start: 83
// line end:   86
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090BD8
// line start: 97
// line end:   100
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80090BEC
// line start: 89
// line end:   92
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x80090C18
// line start: 82
// line end:   85
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x80090C20
// line start: 79
// line end:   79
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x80090C28
// line start: 78
// line end:   78
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x80090C34
// line start: 73
// line end:   73
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80090C6C
// size: 0x18
// line start: 67
// line end:   67
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80090C78
// line start: 57
// line end:   63
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090C98
// line start: 46
// line end:   53
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090CE4
// line start: 94
// line end:   95
void stub__FPcPv_addr_80090CE4(char *e, void *argptr) {
}


// address: 0x80090CEC
// line start: 98
// line end:   100
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x80090D20
// line start: 104
// line end:   112
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x80090DA8
// line start: 117
// line end:   137
void SetAmbientLight__Fv() {
}


// address: 0x80090E2C
// line start: 154
// line end:   196
void print_demo_task__FP4TASK(struct TASK *T) {
	{
		{
			// register: 3
			register int x;
		}
	}
}


// address: 0x80091030
// line start: 200
// line end:   202
void TonysDummyPoll__Fv() {
}


// address: 0x80091054
// line start: 206
// line end:   213
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800910B4
// line start: 217
// line end:   224
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x80091114
// line start: 236
// line end:   247
void set_pad_record_play__Fi(int level) {
}


// address: 0x80091188
// line start: 252
// line end:   261
void start_demo__Fv() {
}


// address: 0x80091230
// line start: 265
// line end:   267
void tony__Fv() {
}


// address: 0x80091268
// line start: 222
// line end:   223
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x80091274
// line start: 233
// line end:   234
int GLUE_GetMonsterList__Fv() {
}


// address: 0x80091280
// line start: 244
// line end:   249
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800912D4
// line start: 259
// line end:   264
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091328
// line start: 274
// line end:   281
void GLUE_PreTown__Fv() {
}


// address: 0x8009138C
// line start: 290
// line end:   296
void GLUE_PreDun__Fv() {
}


// address: 0x800913D8
// line start: 316
// line end:   317
bool GLUE_Finished__Fv() {
}


// address: 0x800913E4
// line start: 327
// line end:   328
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x800913F0
// line start: 338
// line end:   350
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x80091474
// line start: 359
// line end:   363
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091484
// line start: 371
// line end:   375
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091494
// line start: 383
// line end:   387
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800914A4
// line start: 397
// line end:   417
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8009157C
// line start: 428
// line end:   589
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


// address: 0x80091A40
// size: 0x8
// line start: 599
// line end:   609
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x80091AC8
// size: 0x8
// line start: 614
// line end:   620
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80091B24
// size: 0x8
// line start: 624
// line end:   629
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80091B54
// line start: 633
// line end:   639
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x80091B94
// line start: 649
// line end:   655
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80091BE8
// size: 0x10
// line start: 666
// line end:   673
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80091C94
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x80091CA0
// line start: 139
// line end:   139
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x80091CA8
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80091CBC
// line start: 166
// line end:   181
void SetDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80091D94
// line start: 185
// line end:   195
void RestoreDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 3
		register int i;
	}
}


// address: 0x80091E24
// line start: 199
// line end:   216
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80091E9C
// line start: 245
// line end:   255
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x80091ED4
// line start: 261
// line end:   265
void RemoveCtrlScreen__Fv() {
}


// address: 0x80091F18
// line start: 274
// line end:   292
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x80091FD0
// line start: 296
// line end:   308
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80092010
// line start: 312
// line end:   325
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80092050
// line start: 329
// line end:   373
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


// address: 0x800921A4
// line start: 377
// line end:   384
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x800921EC
// line start: 391
// line end:   538
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x80092684
// line start: 545
// line end:   660
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


// address: 0x80092BC0
// line start: 663
// line end:   739
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 20
	register int pnum;
	{
		{
			{
				{
					// register: 2
					register int len;
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


// address: 0x8009313C
// line start: 739
// line end:   739
void _GLOBAL__D_ctrlflag() {
}


// address: 0x80093164
// line start: 739
// line end:   739
void _GLOBAL__I_ctrlflag() {
}


// address: 0x8009318C
// line start: 111
// line end:   115
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x800931B4
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_800931B4(struct CPad *this) {
}


// address: 0x800931DC
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_800931DC(struct CPad *this) {
}


// address: 0x80093204
// line start: 82
// line end:   82
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8009320C
// line start: 81
// line end:   81
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x80093214
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80093214(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80093234
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80093234(struct Dialog *this, int Type) {
}


// address: 0x8009323C
// line start: 84
// line end:   87
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80093248
// line start: 77
// line end:   77
void ___6Dialog_addr_80093248(struct Dialog *this, int __in_chrg) {
}


// address: 0x80093270
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80093270(struct Dialog *this) {
}


// address: 0x800932CC
// line start: 160
// line end:   163
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x80093318
// line start: 194
// line end:   223
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x80093498
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


// address: 0x800935DC
// line start: 50
// line end:   82
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	register int diff;
}


// address: 0x8009382C
// line start: 87
// line end:   90
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80093880
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


// address: 0x80093AE4
// line start: 148
// line end:   183
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80093CBC
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


// address: 0x80093E84
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80093E84(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80093EC0
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80093EC0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80093EE8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80093EE8(struct POLY_FT4 **Prim) {
}


// address: 0x80093F64
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80093F64(struct TextDat *this, int Creature) {
}


// address: 0x80093F88
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80093F88(struct TextDat *this, int Creature) {
}


// address: 0x80094000
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80094000(struct TextDat *this) {
}


// address: 0x80094014
// line start: 83
// line end:   84
void DaveLDummyPoll__Fv() {
}


// address: 0x8009401C
// line start: 87
// line end:   89
void DaveL__Fv() {
}


// address: 0x80094044
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
	// address: 0x80118D34
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


// address: 0x80094324
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


// address: 0x80094600
// line start: 195
// line end:   209
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x800946CC
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


// address: 0x80094754
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


// address: 0x80094944
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


// address: 0x80094A78
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


// address: 0x80094C48
// line start: 333
// line end:   356
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80094DE8
// line start: 360
// line end:   370
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80094ECC
// line start: 375
// line end:   377
void doparticlejump__Fv() {
}


// address: 0x80094F0C
// line start: 381
// line end:   400
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x80095074
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


// address: 0x8009546C
// line start: 492
// line end:   509
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009552C
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


// address: 0x800957D4
// line start: 566
// line end:   581
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x800959F8
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


// address: 0x80095B1C
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


// address: 0x80095C34
// line start: 625
// line end:   627
void HealStart__Fi(int plr) {
}


// address: 0x80095C68
// line start: 631
// line end:   634
void HealotherStart__Fi(int plr) {
}


// address: 0x80095CA0
// line start: 638
// line end:   641
void TeleStart__Fi(int plr) {
}


// address: 0x80095CFC
// line start: 646
// line end:   648
void PhaseStart__Fi(int plr) {
}


// address: 0x80095D30
// line start: 653
// line end:   655
void InvisStart__Fi(int plr) {
}


// address: 0x80095D64
// line start: 660
// line end:   662
void PhaseEnd__Fi(int plr) {
}


// address: 0x80095D90
// line start: 668
// line end:   691
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80095F30
// line start: 696
// line end:   703
void ApocUpdate__11SPELLFX_DAT(struct SPELLFX_DAT *this) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x80095F9C
// line start: 707
// line end:   710
void ApocaStart__Fi(int plr) {
}


// address: 0x80095FF4
// line start: 715
// line end:   730
void doapocaFX__Fv() {
	// register: 17
	register int plr;
}


// address: 0x8009610C
// line start: 735
// line end:   755
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80096170
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x800961EC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80096268
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096268(struct POLY_FT4 **Prim) {
}


// address: 0x800962E4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800962E4(struct TextDat *this, int FrNum) {
}


// address: 0x80096300
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


// address: 0x80096504
// line start: 130
// line end:   237
void show_spell_dir__Fi(int pnum) {
	// address: 0xFFFFFFB8
	// size: 0x23A8
	auto struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	register int cp;
	// register: 19
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 30
	register int otx;
	// register: 23
	register int oty;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFC0
	// size: 0xE0
	auto struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80096968
// line start: 251
// line end:   300
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x800969DC
// line start: 308
// line end:   317
void select_belt_item__Fi(int pnum) {
}


// address: 0x800969E4
// line start: 325
// line end:   334
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096A4C
// line start: 341
// line end:   359
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096B7C
// line start: 365
// line end:   385
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096CB4
// line start: 394
// line end:   396
void pad_func_up__Fi(int pnum) {
}


// address: 0x80096CE0
// line start: 404
// line end:   406
void pad_func_down__Fi(int pnum) {
}


// address: 0x80096D0C
// line start: 414
// line end:   415
void pad_func_left__Fi(int pnum) {
}


// address: 0x80096D14
// line start: 422
// line end:   423
void pad_func_right__Fi(int pnum) {
}


// address: 0x80096D1C
// line start: 441
// line end:   454
void pad_func_select__Fi(int pnum) {
}


// address: 0x80096E0C
// line start: 466
// line end:   541
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80097200
// line start: 548
// line end:   599
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


// address: 0x80097528
// line start: 603
// line end:   626
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


// address: 0x80097630
// line start: 630
// line end:   649
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x800976C0
// line start: 656
// line end:   816
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


// address: 0x80097D4C
// line start: 823
// line end:   830
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80097E40
// line start: 842
// line end:   855
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80097F7C
// line start: 878
// line end:   890
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x8009809C
// line start: 895
// line end:   906
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800981B4
// line start: 911
// line end:   915
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80098260
// line start: 929
// line end:   951
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x8009832C
// line start: 989
// line end:   1000
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80098444
// line start: 1026
// line end:   1036
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x800984C0
// line start: 1064
// line end:   1100
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x80098698
// line start: 1108
// line end:   1109
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800986C0
// line start: 1119
// line end:   1120
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800986E8
// line start: 1125
// line end:   1140
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


// address: 0x80098828
// line start: 1144
// line end:   1171
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80098934
// line start: 1175
// line end:   1317
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


// address: 0x800991F8
// line start: 1321
// line end:   1345
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


// address: 0x800992D4
// line start: 1354
// line end:   1360
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x800993E0
// line start: 1369
// line end:   1439
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x800997A0
// line start: 1444
// line end:   1498
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


// address: 0x800999F4
// line start: 1543
// line end:   1568
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80099C18
// line start: 1569
// line end:   1569
void _GLOBAL__D_gplayer() {
}


// address: 0x80099C40
// line start: 1569
// line end:   1569
void _GLOBAL__I_gplayer() {
}


// address: 0x80099C68
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80099C68(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80099C88
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_80099C88(struct Dialog *this, int Type) {
}


// address: 0x80099C90
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80099C90(struct Dialog *this, int Type) {
}


// address: 0x80099C98
// line start: 77
// line end:   77
void ___6Dialog_addr_80099C98(struct Dialog *this, int __in_chrg) {
}


// address: 0x80099CC0
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80099CC0(struct Dialog *this) {
}


// address: 0x80099D1C
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80099D1C(struct CBlocks *this) {
}


// address: 0x80099D30
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80099D30(struct CPad *this) {
}


// address: 0x80099D58
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_80099D58(struct CPad *this) {
}


// address: 0x80099D80
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80099DFC
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80099E54
// line start: 102
// line end:   107
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80099EB0
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80099EE8
// line start: 130
// line end:   136
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80099F20
// line start: 138
// line end:   143
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80099F80
// line start: 154
// line end:   155
bool IsGameLoading__Fv() {
}


// address: 0x80099F8C
// line start: 165
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


// address: 0x8009A3F4
// line start: 247
// line end:   273
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x8009A4A4
// line start: 283
// line end:   301
void TakeDownCutScreen__Fv() {
}


// address: 0x8009A530
// line start: 312
// line end:   318
void FinishProgress__Fv() {
}


// address: 0x8009A580
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009A580(struct POLY_G4 **Prim) {
}


// address: 0x8009A5FC
// line start: 322
// line end:   322
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009A634
// line start: 322
// line end:   322
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x8009A66C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8009A66C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009A68C
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8009A68C(struct Dialog *this, int Type) {
}


// address: 0x8009A694
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8009A694(struct Dialog *this, int Type) {
}


// address: 0x8009A69C
// line start: 77
// line end:   77
void ___6Dialog_addr_8009A69C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009A6C4
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8009A6C4(struct Dialog *this) {
}


// address: 0x8009A720
// line start: 345
// line end:   119
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8009A740
// line start: 104
// line end:   184
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x8009A95C
// line start: 188
// line end:   212
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009A964
// line start: 217
// line end:   221
void init_card__Fi(int card_number) {
}


// address: 0x8009A998
// line start: 226
// line end:   239
int ping_card__Fi(int card_number) {
}


// address: 0x8009AA2C
// line start: 243
// line end:   249
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009AA64
// line start: 254
// line end:   265
void MemcardON__Fv() {
}


// address: 0x8009AAD4
// line start: 271
// line end:   279
void MemcardOFF__Fv() {
}


// address: 0x8009AB24
// line start: 524
// line end:   533
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009AC08
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


// address: 0x8009B0D0
// line start: 678
// line end:   879
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


// address: 0x8009BC00
// line start: 884
// line end:   893
int who_pressed__Fi(int pval) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad1;
}


// address: 0x8009BC88
// size: 0x6C
// line start: 898
// line end:   903
struct CPad *PAD_GetOptionsPad__Fi(int p) {
}


// address: 0x8009BCC4
// line start: 908
// line end:   1123
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


// address: 0x8009C35C
// line start: 1126
// line end:   1342
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


// address: 0x8009C9FC
// line start: 1349
// line end:   1521
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


// address: 0x8009D018
// line start: 1529
// line end:   1632
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


// address: 0x8009D43C
// line start: 1638
// line end:   1663
void CalcVolumes__Fv() {
}


// address: 0x8009D57C
// line start: 1671
// line end:   1691
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


// address: 0x8009D684
// line start: 1699
// line end:   1716
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009D82C
// line start: 1733
// line end:   1981
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


// address: 0x8009DEB8
// line start: 1987
// line end:   2009
void ToggleOptions__Fv() {
}


// address: 0x8009DF60
// line start: 2016
// line end:   2092
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


// address: 0x8009E258
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009E258(struct POLY_G4 **Prim) {
}


// address: 0x8009E2D4
// line start: 111
// line end:   115
unsigned short GetTick__C4CPad_addr_8009E2D4(struct CPad *this) {
}


// address: 0x8009E2FC
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009E2FC(struct CPad *this) {
}


// address: 0x8009E324
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_8009E324(struct CPad *this) {
}


// address: 0x8009E34C
// line start: 82
// line end:   82
void SetPadTickMask__4CPadUs_addr_8009E34C(struct CPad *this, unsigned short mask) {
}


// address: 0x8009E354
// line start: 81
// line end:   81
void SetPadTick__4CPadUs_addr_8009E354(struct CPad *this, unsigned short tick) {
}


// address: 0x8009E35C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8009E35C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009E37C
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8009E37C(struct Dialog *this, int Type) {
}


// address: 0x8009E384
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8009E384(struct Dialog *this, int Type) {
}


// address: 0x8009E38C
// line start: 84
// line end:   87
int SetOTpos__6Dialogi_addr_8009E38C(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8009E398
// line start: 77
// line end:   77
void ___6Dialog_addr_8009E398(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009E3C0
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8009E3C0(struct Dialog *this) {
}


// address: 0x8009E41C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009E41C(struct TextDat *this, int FrNum) {
}


// address: 0x8009E438
// line start: 72
// line end:   79
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009E490
// line start: 88
// line end:   129
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x8009E66C
// line start: 139
// line end:   149
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009E6E8
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


// address: 0x8009E7C8
// line start: 185
// line end:   194
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009E81C
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


// address: 0x8009E984
// line start: 239
// line end:   259
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EA88
// line start: 270
// line end:   272
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EAC4
// line start: 281
// line end:   297
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EB48
// line start: 305
// line end:   318
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EBF4
// line start: 326
// line end:   336
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EC98
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


// address: 0x8009ED3C
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


// address: 0x8009EFE8
// line start: 439
// line end:   440
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EFF4
// line start: 449
// line end:   453
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F044
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


// address: 0x8009F130
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


// address: 0x8009F260
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


// address: 0x8009F338
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


// address: 0x8009F490
// line start: 610
// line end:   639
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x8009F52C
// line start: 645
// line end:   665
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x8009F65C
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


// address: 0x8009F760
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


// address: 0x8009F96C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009F96C(struct POLY_FT4 **Prim) {
}


// address: 0x8009F9E8
// line start: 82
// line end:   117
short PlayFMV__FPCc(char *str) {
	// register: 16
	register short RetVal;
	// register: 17
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009FA90
// line start: 122
// line end:   136
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


// address: 0x8009FB20
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


// address: 0x8009FFBC
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009FFBC(struct CPad *this) {
}


// address: 0x8009FFE4
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8009FFE4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A001C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800A001C(struct TextDat *this, int Creature) {
}


// address: 0x800A0094
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800A0094(struct TextDat *this) {
}


// address: 0x800A00A8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A00A8(struct TextDat *this, int FrNum) {
}


// address: 0x800A00C4
// line start: 37
// line end:   54
void LoadKanjiFont__Fv() {
	// register: 16
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A0194
// line start: 59
// line end:   78
void LoadKanjiIndex__Fv() {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A0280
// line start: 85
// line end:   103
unsigned short *getb__FUs(unsigned short n) {
	// register: 4
	// size: 0x4
	register struct kindexS *ii;
	// register: 3
	register int i;
	// register: 16
	register int off;
}


// address: 0x800A02F0
// line start: 114
// line end:   138
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


// address: 0x800A03CC
// line start: 146
// line end:   180
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


// address: 0x800A0518
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0518(struct POLY_FT4 **Prim) {
}


// address: 0x800A0594
// line start: 85
// line end:   108
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


// address: 0x800A067C
// line start: 118
// line end:   235
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


// address: 0x800A08BC
// line start: 245
// line end:   278
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


// address: 0x800A095C
// line start: 55
// line end:   58
void fputc__5blockUc(struct block *this, unsigned char Val) {
}


// address: 0x8002E8A0
// line start: 520
// line end:   523
unsigned char TrimCol__Fs_addr_8002E8A0(short col) {
}


// address: 0x8002E8D8
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


// address: 0x8002F3F4
// line start: 709
// line end:   710
void SetSpellTrans__Fc(char t) {
}


// address: 0x8002F400
// line start: 718
// line end:   735
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8002F498
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


// address: 0x8002F510
// line start: 757
// line end:   789
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8002F5C4
// line start: 815
// line end:   1102
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


// address: 0x8003012C
// line start: 1111
// line end:   1123
void SetSpell__Fi(int pnum) {
}


// address: 0x80030200
// line start: 1134
// line end:   1137
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x800302B0
// line start: 1144
// line end:   1146
void ClearPanel__Fv() {
}


// address: 0x800302E0
// line start: 1199
// line end:   1200
void InitPanelStr__Fv() {
}


// address: 0x80030300
// line start: 1286
// line end:   1433
void InitControlPan__Fv() {
	// register: 4
	register int i;
}


// address: 0x80030548
// line start: 1439
// line end:   1442
void DrawCtrlPan__Fv() {
}


// address: 0x80030574
// line start: 1522
// line end:   1534
void DoAutoMap__Fv() {
}


// address: 0x800305E8
// line start: 1541
// line end:   1632
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


// address: 0x80030EAC
// line start: 1706
// line end:   1722
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


// address: 0x80030FBC
// line start: 1744
// line end:   1772
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


// address: 0x800310D8
// line start: 1815
// line end:   1851
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


// address: 0x80031314
// line start: 1857
// line end:   1977
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


// address: 0x800319C8
// line start: 2030
// line end:   2124
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


// address: 0x80031F14
// line start: 2130
// line end:   2146
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80031FBC
// line start: 2169
// line end:   2205
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


// address: 0x80032124
// line start: 2212
// line end:   2223
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x800321F0
// line start: 2231
// line end:   2252
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


// address: 0x800322E8
// line start: 2257
// line end:   2455
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


// address: 0x800335C0
// line start: 2460
// line end:   2544
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


// address: 0x80033A74
// line start: 2598
// line end:   2614
void DrawChrTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80033B14
// line start: 2623
// line end:   2631
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80033BA8
// line start: 2636
// line end:   2693
void CheckChrBtns__Fv() {
	// register: 5
	register int pc;
}


// address: 0x80033E38
// line start: 2700
// line end:   2740
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80033EBC
// line start: 2748
// line end:   2762
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80033FA4
// line start: 2768
// line end:   2775
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x8003403C
// line start: 2782
// line end:   2794
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80034254
// line start: 2818
// line end:   2999
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


// address: 0x80034BC8
// line start: 3008
// line end:   3044
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 10
	register char st;
}


// address: 0x80034E2C
// line start: 3057
// line end:   3059
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80034E60
// line start: 3565
// line end:   3565
void _GLOBAL__D_fontkern() {
}


// address: 0x80034E88
// line start: 3565
// line end:   3565
void _GLOBAL__I_fontkern() {
}


// address: 0x80034EC4
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80034EC4(struct CPad *this) {
}


// address: 0x80034EEC
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80034EEC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80034F0C
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_80034F0C(struct Dialog *this, int Type) {
}


// address: 0x80034F14
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80034F14(struct Dialog *this, int Type) {
}


// address: 0x80034F1C
// line start: 77
// line end:   77
void ___6Dialog_addr_80034F1C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80034F44
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80034F44(struct Dialog *this) {
}


// address: 0x80034FA0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80034FA0(struct TextDat *this, int PalNum) {
}


// address: 0x80034FBC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80034FBC(struct TextDat *this, int FrNum) {
}


// address: 0x80034FD8
// line start: 126
// line end:   132
void InitCursor__Fv() {
}


// address: 0x80034FE0
// line start: 137
// line end:   142
void FreeCursor__Fv() {
}


// address: 0x80034FE8
// line start: 148
// line end:   158
void SetICursor__Fi(int i) {
}


// address: 0x80035044
// line start: 165
// line end:   173
void SetCursor__Fi(int i) {
}


// address: 0x800350A8
// line start: 179
// line end:   180
void NewCursor__Fi(int i) {
}


// address: 0x800350C8
// line start: 186
// line end:   201
void InitLevelCursor__Fv() {
}


// address: 0x80035128
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


// address: 0x80035380
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


// address: 0x800355A8
// line start: 264
// line end:   756
void CheckCursMove__Fv() {
}


// address: 0x800355B0
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


// address: 0x800357AC
// line start: 98
// line end:   102
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x800357F4
// line start: 284
// line end:   297
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035844
// line start: 304
// line end:   320
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800358A0
// line start: 325
// line end:   342
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035914
// line start: 358
// line end:   396
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x800359D8
// line start: 401
// line end:   485
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035BC0
// line start: 491
// line end:   607
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035D30
// line start: 1041
// line end:   1121
unsigned char TryIconCurs__Fv() {
}


// address: 0x8003610C
// line start: 2144
// line end:   2191
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036114
// line start: 2198
// line end:   2358
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800361C4
// line start: 2365
// line end:   2432
void LoadLvlGFX__Fv() {
}


// address: 0x80036260
// line start: 2440
// line end:   2452
void LoadAllGFX__Fv() {
}


// address: 0x80036280
// line start: 2473
// line end:   2493
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036378
// line start: 2502
// line end:   2556
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80036500
// line start: 2560
// line end:   2585
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


// address: 0x800365DC
// line start: 2592
// line end:   2925
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


// address: 0x80036F60
// line start: 2938
// line end:   2990
void game_logic__Fv() {
}


// address: 0x8003706C
// line start: 3000
// line end:   3030
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80037114
// line start: 3038
// line end:   3093
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x8003714C
// line start: 3160
// line end:   3165
void alloc_plr__Fv() {
}


// address: 0x80037154
// line start: 3228
// line end:   3286
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x8003715C
// line start: 3293
// line end:   3295
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x8003717C
// line start: 3300
// line end:   3302
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x8003719C
// line start: 3305
// line end:   3306
void app_fatal(char *pszFile) {
}


// address: 0x800371CC
// line start: 3565
// line end:   3571
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800371F4
// line start: 3575
// line end:   3581
void DoMemCardFromInGame__Fv() {
}


// address: 0x8003721C
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037270
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037290
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x800372D8
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80037438
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


// address: 0x800374F0
// line start: 181
// line end:   190
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003761C
// line start: 196
// line end:   206
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037750
// line start: 211
// line end:   220
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037880
// line start: 225
// line end:   234
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800379B0
// line start: 239
// line end:   248
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037AE0
// line start: 253
// line end:   263
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037C18
// line start: 268
// line end:   277
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037D48
// line start: 283
// line end:   292
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E78
// line start: 297
// line end:   306
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037FA8
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


// address: 0x8003826C
// line start: 344
// line end:   358
void InitTowners__Fv() {
}


// address: 0x800382F8
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


// address: 0x8003839C
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


// address: 0x800384BC
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


// address: 0x800384F0
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


// address: 0x80038524
// line start: 435
// line end:   447
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x8003860C
// line start: 453
// line end:   455
void TownHealer__Fv() {
}


// address: 0x80038634
// line start: 462
// line end:   465
void TownStory__Fv() {
}


// address: 0x8003865C
// line start: 472
// line end:   475
void TownDrunk__Fv() {
}


// address: 0x80038684
// line start: 482
// line end:   485
void TownBoy__Fv() {
}


// address: 0x800386AC
// line start: 493
// line end:   496
void TownWitch__Fv() {
}


// address: 0x800386D4
// line start: 503
// line end:   505
void TownBarMaid__Fv() {
}


// address: 0x800386FC
// line start: 512
// line end:   515
void TownCow__Fv() {
}


// address: 0x80038724
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


// address: 0x80038974
// size: 0x98
// line start: 579
// line end:   584
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038A48
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x8010F368
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80119380
	static int snLastCowSFX;
}


// address: 0x80038B64
// line start: 645
// line end:   652
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038BA4
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


// address: 0x80039FCC
// line start: 77
// line end:   88
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x80039FD4
// line start: 96
// line end:   103
void stream_stop__Fv() {
}


// address: 0x8003A01C
// line start: 116
// line end:   143
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003A0E0
// line start: 149
// line end:   165
void stream_update__Fv() {
}


// address: 0x8003A0E8
// line start: 171
// line end:   178
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003A104
// line start: 185
// line end:   216
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003A15C
// line start: 222
// line end:   245
void FreeMonsterSnd__Fv() {
}


// address: 0x8003A164
// line start: 251
// line end:   271
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A268
// line start: 278
// line end:   309
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A378
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


// address: 0x8003A4A4
// line start: 370
// line end:   392
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A53C
// line start: 407
// line end:   410
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A57C
// line start: 418
// line end:   428
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A5D0
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


// address: 0x8003A668
// line start: 457
// line end:   467
void sound_update__Fv() {
}


// address: 0x8003A69C
// line start: 475
// line end:   506
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A6E0
// line start: 512
// line end:   525
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003A788
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


// address: 0x8003A82C
// line start: 91
// line end:   94
void SetRndSeed__Fl(long s) {
}


// address: 0x8003A83C
// line start: 99
// line end:   104
long GetRndSeed__Fv() {
}


// address: 0x8003A884
// line start: 110
// line end:   116
long random__Fil(int idx, long v) {
}


// address: 0x8003A8F0
// line start: 368
// line end:   418
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003A93C
// line start: 429
// line end:   475
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003A98C
// line start: 487
// line end:   497
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003A994
// line start: 565
// line end:   580
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003AA24
// line start: 1104
// line end:   1104
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003AA2C
// line start: 154
// line end:   165
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003AAC0
// line start: 171
// line end:   174
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003AAEC
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


// address: 0x8003ABF8
// line start: 297
// line end:   306
void interface_msg_pump__Fv() {
}


// address: 0x8003AC00
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


// address: 0x8003B0EC
// line start: 969
// line end:   971
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003B124
// line start: 508
// line end:   519
void InitItemGFX__Fv() {
}


// address: 0x8003B150
// line start: 525
// line end:   532
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003B218
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


// address: 0x8003B430
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


// address: 0x8003B5F4
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


// address: 0x8003C0A4
// line start: 895
// line end:   925
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003C424
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


// address: 0x8003C4C0
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


// address: 0x8003C620
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003C66C
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


// address: 0x8003C74C
// line start: 1023
// line end:   1046
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003C9E0
// line start: 1051
// line end:   1061
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003CAA4
// line start: 1067
// line end:   1098
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003CBBC
// line start: 1104
// line end:   1105
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CBE8
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


// address: 0x8003CD64
// line start: 1133
// line end:   1134
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003CD6C
// line start: 1140
// line end:   1145
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CD9C
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003D1D8
// line start: 1269
// line end:   1298
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003D4B0
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


// address: 0x8003D6DC
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


// address: 0x8003D844
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


// address: 0x8003D90C
// line start: 1408
// line end:   1414
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003D9C4
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


// address: 0x8003DC2C
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


// address: 0x8003DE1C
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


// address: 0x8003E0D0
// line start: 1650
// line end:   1740
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003E61C
// line start: 1749
// line end:   1750
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003E654
// line start: 1757
// line end:   1760
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003E6C8
// line start: 1767
// line end:   2048
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8003FDF4
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


// address: 0x8004025C
// line start: 2161
// line end:   2191
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80040358
// line start: 2197
// line end:   2224
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x8004046C
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


// address: 0x800406B0
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


// address: 0x800408F0
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


// address: 0x80040A64
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


// address: 0x80040B64
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


// address: 0x80040D14
// line start: 2410
// line end:   2432
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80040FBC
// line start: 2439
// line end:   2452
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x800410C8
// line start: 2462
// line end:   2466
void ItemRndDur__Fi(int ii) {
}


// address: 0x80041158
// line start: 2473
// line end:   2511
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80041464
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


// address: 0x800416AC
// line start: 2570
// line end:   2584
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x800417DC
// line start: 2594
// line end:   2609
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041924
// line start: 2621
// line end:   2631
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x800419FC
// line start: 2635
// line end:   2645
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x80041ABC
// line start: 2654
// line end:   2669
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041C00
// line start: 2681
// line end:   2705
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80041DEC
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


// address: 0x80042018
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


// address: 0x800421D8
// line start: 2787
// line end:   2819
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x8004239C
// line start: 2826
// line end:   2830
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x800423F0
// line start: 2840
// line end:   2855
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x800424B8
// line start: 2861
// line end:   2900
void ProcessItems__Fv() {
	// register: 6
	register int i;
	// register: 5
	register int ii;
}


// address: 0x800425FC
// line start: 2907
// line end:   2912
void FreeItemGFX__Fv() {
}


// address: 0x80042604
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


// address: 0x80042794
// line start: 2961
// line end:   2971
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80042884
// line start: 2976
// line end:   3000
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80042954
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


// address: 0x80042A18
// line start: 3022
// line end:   3035
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80042A88
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


// address: 0x80042B88
// line start: 3162
// line end:   3286
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80042C7C
// line start: 3292
// line end:   3504
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80043330
// line start: 3548
// line end:   3576
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x80043338
// line start: 3589
// line end:   3627
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800435C4
// line start: 3634
// line end:   3679
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043934
// line start: 3685
// line end:   3725
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043C44
// line start: 3731
// line end:   3733
void CastScroll__Fi(int pnum) {
}


// address: 0x80043C4C
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


// address: 0x80044260
// line start: 3939
// line end:   3944
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x800442F4
// line start: 3963
// line end:   3978
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80044370
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


// address: 0x80044478
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


// address: 0x80044698
// line start: 4045
// line end:   4064
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x800448DC
// line start: 4077
// line end:   4092
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80044A2C
// line start: 4123
// line end:   4127
void SpawnStoreGold__Fv() {
}


// address: 0x80044AB0
// line start: 4176
// line end:   4187
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80044C50
// line start: 4199
// line end:   4207
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80044CB4
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


// address: 0x80044E44
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


// address: 0x80044FC0
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


// address: 0x8004513C
// line start: 4445
// line end:   4486
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x800452B0
// line start: 4640
// line end:   4738
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80045448
// line start: 319
// line end:   334
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x800454B0
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


// address: 0x80045524
// line start: 404
// line end:   411
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x80045590
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


// address: 0x80046240
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


// address: 0x80046484
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


// address: 0x80046548
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


// address: 0x80046A58
// line start: 957
// line end:   958
void FreeLightTable__Fv() {
}


// address: 0x80046A60
// line start: 964
// line end:   965
void InitLightTable__Fv() {
}


// address: 0x80046A68
// line start: 970
// line end:   971
void MakeLightTable__Fv() {
}


// address: 0x80046A70
// line start: 1062
// line end:   1065
void InitLightMax__Fv() {
}


// address: 0x80046A94
// line start: 1072
// line end:   1083
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80046AD8
// line start: 1089
// line end:   1105
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x80046B6C
// line start: 1110
// line end:   1116
void AddUnLight__Fi(int i) {
}


// address: 0x80046B9C
// line start: 1121
// line end:   1131
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80046BC8
// line start: 1136
// line end:   1147
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80046C00
// line start: 1150
// line end:   1156
void light_fix__Fi(int i) {
}


// address: 0x80046C08
// line start: 1166
// line end:   1178
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80046C40
// line start: 1183
// line end:   1195
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x80046C84
// line start: 1198
// line end:   1199
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x80046CB4
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


// address: 0x80046DE0
// line start: 1271
// line end:   1298
void SavePreLighting__Fv() {
}


// address: 0x80046DE8
// line start: 1303
// line end:   1310
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80046E38
// line start: 1317
// line end:   1333
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80046F3C
// line start: 1356
// line end:   1369
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80046FF0
// line start: 1374
// line end:   1388
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x800470A8
// line start: 1417
// line end:   1446
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x80047308
// line start: 110
// line end:   113
void FreeQuestText__Fv() {
}


// address: 0x80047310
// line start: 117
// line end:   121
void InitQuestText__Fv() {
}


// address: 0x8004731C
// line start: 129
// line end:   166
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


// address: 0x8004745C
// line start: 175
// line end:   214
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x80047570
// line start: 219
// line end:   225
void DrawQTextBack__Fv() {
}


// address: 0x800475E0
// line start: 232
// line end:   249
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8004767C
// line start: 265
// line end:   375
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


// address: 0x800479C4
// line start: 378
// line end:   378
void _GLOBAL__D_QBack() {
}


// address: 0x800479EC
// line start: 378
// line end:   378
void _GLOBAL__I_QBack() {
}


// address: 0x80047A14
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_80047A14(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80047A34
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80047A34(struct Dialog *this, int Type) {
}


// address: 0x80047A3C
// line start: 77
// line end:   77
void ___6Dialog_addr_80047A3C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80047A64
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80047A64(struct Dialog *this) {
}


// address: 0x80047AC0
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_80047AC0(struct CFont *this, char ch) {
}


// address: 0x80047B18
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047B18(struct TextDat *this, int FrNum) {
}


// address: 0x80047B34
// line start: 33
// line end:   35
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80047B3C
// line start: 806
// line end:   808
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80047B44
// line start: 187
// line end:   201
void delta_init__Fv() {
}


// address: 0x80047BA4
// line start: 208
// line end:   229
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047C40
// line start: 236
// line end:   252
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047CC4
// line start: 261
// line end:   283
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x80047D54
// line start: 289
// line end:   330
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


// address: 0x80048080
// line start: 336
// line end:   352
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x800480E0
// line start: 359
// line end:   478
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


// address: 0x800482A4
// line start: 485
// line end:   546
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


// address: 0x8004842C
// line start: 552
// line end:   555
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x80048450
// line start: 561
// line end:   564
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x80048474
// line start: 571
// line end:   634
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


// address: 0x80048688
// line start: 639
// line end:   647
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x800486B8
// line start: 658
// line end:   666
int DeltaImportData__FPc(char *Src) {
}


// address: 0x800486EC
// line start: 678
// line end:   693
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800487E8
// line start: 768
// line end:   772
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x80048810
// line start: 778
// line end:   792
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x8004885C
// line start: 798
// line end:   808
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x8004888C
// line start: 814
// line end:   823
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x800488C4
// line start: 829
// line end:   839
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80048904
// line start: 845
// line end:   856
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x8004894C
// line start: 862
// line end:   867
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x80048978
// line start: 873
// line end:   879
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x800489A8
// line start: 884
// line end:   891
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x800489E0
// line start: 896
// line end:   904
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80048A54
// line start: 909
// line end:   955
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048B88
// line start: 961
// line end:   976
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048C04
// line start: 992
// line end:   1011
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048C5C
// line start: 1018
// line end:   1025
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048CC4
// line start: 1030
// line end:   1073
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048DCC
// line start: 1079
// line end:   1090
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x80048E70
// line start: 1096
// line end:   1101
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x80048EA0
// line start: 1107
// line end:   1149
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048FB4
// line start: 1154
// line end:   1170
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80048FBC
// line start: 1176
// line end:   1184
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80048FF0
// line start: 1199
// line end:   1210
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x8004904C
// line start: 1216
// line end:   1219
void delta_close_portal__Fi(int pnum) {
}


// address: 0x8004908C
// line start: 1225
// line end:   1234
void check_update_plr__Fi(int pnum) {
}


// address: 0x80049094
// line start: 1245
// line end:   1252
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049138
// line start: 1261
// line end:   1275
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049168
// line start: 1280
// line end:   1289
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049198
// line start: 1293
// line end:   1306
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800491C8
// line start: 1312
// line end:   1325
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800491F8
// line start: 1331
// line end:   1337
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004926C
// line start: 1346
// line end:   1352
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049310
// line start: 1359
// line end:   1392
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x80049450
// line start: 1402
// line end:   1439
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


// address: 0x80049620
// line start: 1448
// line end:   1454
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x800496C4
// line start: 1461
// line end:   1495
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x800497F8
// line start: 1504
// line end:   1547
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


// address: 0x800499C0
// line start: 1555
// line end:   1568
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049A5C
// line start: 1575
// line end:   1606
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


// address: 0x80049C0C
// line start: 1615
// line end:   1641
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 3
			register int ii;
		}
	}
}


// address: 0x80049D48
// line start: 1650
// line end:   1660
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
}


// address: 0x80049E60
// line start: 1667
// line end:   1675
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049F0C
// line start: 1682
// line end:   1698
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A014
// line start: 1706
// line end:   1721
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A10C
// line start: 1728
// line end:   1743
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A208
// line start: 1750
// line end:   1761
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004A330
// line start: 1768
// line end:   1779
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004A458
// line start: 1787
// line end:   1793
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A4C0
// line start: 1800
// line end:   1812
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


// address: 0x8004A614
// line start: 1819
// line end:   1833
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A6FC
// line start: 1840
// line end:   1851
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A7DC
// line start: 1859
// line end:   1869
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A8C0
// line start: 1876
// line end:   1887
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A9A4
// line start: 1894
// line end:   1900
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AA30
// line start: 1907
// line end:   1911
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AA68
// line start: 1917
// line end:   1921
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AAD8
// line start: 1928
// line end:   1935
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB7C
// line start: 1943
// line end:   1947
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ABB4
// line start: 1954
// line end:   1963
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AC98
// line start: 1971
// line end:   1977
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AD04
// line start: 1984
// line end:   1990
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AD70
// line start: 1997
// line end:   2017
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


// address: 0x8004AEE0
// line start: 2026
// line end:   2046
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AFE4
// line start: 2056
// line end:   2063
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B02C
// line start: 2070
// line end:   2117
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B1E8
// line start: 2126
// line end:   2132
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B280
// line start: 2139
// line end:   2145
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B318
// line start: 2152
// line end:   2158
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B3B0
// line start: 2165
// line end:   2171
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B444
// line start: 2177
// line end:   2182
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4D8
// line start: 2188
// line end:   2195
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4E0
// line start: 2201
// line end:   2204
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4E8
// line start: 2209
// line end:   2215
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4F0
// line start: 2220
// line end:   2225
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B548
// line start: 2231
// line end:   2279
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B7DC
// line start: 2287
// line end:   2319
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


// address: 0x8004B96C
// line start: 2325
// line end:   2330
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B9BC
// line start: 2336
// line end:   2343
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BA04
// line start: 2349
// line end:   2357
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BA44
// line start: 2362
// line end:   2370
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BA84
// line start: 2376
// line end:   2384
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BAC4
// line start: 2390
// line end:   2399
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BB04
// line start: 2404
// line end:   2411
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BB4C
// line start: 2418
// line end:   2430
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


// address: 0x8004BC68
// line start: 2470
// line end:   2572
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8011A1D4
	static unsigned char sbLastCmd;
}


// address: 0x8004C088
// size: 0xF1C
// line start: 2583
// line end:   2593
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004C118
// line start: 2600
// line end:   2604
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x8004C150
// line start: 165
// line end:   169
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004C17C
// line start: 554
// line end:   559
int InitLevelType__Fi(int l) {
}


// address: 0x8004C1C8
// line start: 565
// line end:   603
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004C358
// line start: 682
// line end:   688
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004C3CC
// line start: 703
// line end:   812
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


// address: 0x8004C5F4
// line start: 256
// line end:   270
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C72C
// line start: 277
// line end:   295
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C878
// line start: 302
// line end:   310
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004C900
// line start: 317
// line end:   319
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004C940
// line start: 346
// line end:   357
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004C9E4
// line start: 365
// line end:   388
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004CA98
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


// address: 0x8004CCB4
// line start: 556
// line end:   560
void FreeObjectGFX__Fv() {
}


// address: 0x8004CCC0
// line start: 564
// line end:   575
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004CD78
// line start: 583
// line end:   617
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004CFFC
// line start: 624
// line end:   630
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004D05C
// line start: 637
// line end:   639
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004D084
// line start: 663
// line end:   700
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004D190
// line start: 708
// line end:   745
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004D29C
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


// address: 0x8004D4AC
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


// address: 0x8004D7D0
// line start: 837
// line end:   842
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004D834
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


// address: 0x8004DB10
// line start: 940
// line end:   948
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004DB80
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


// address: 0x8004DD14
// line start: 990
// line end:   992
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004DD60
// line start: 999
// line end:   1010
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004DE70
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


// address: 0x8004E140
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


// address: 0x8004E490
// line start: 1127
// line end:   1153
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004E720
// line start: 1162
// line end:   1244
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004E9C0
// line start: 1252
// line end:   1253
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004E9F8
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


// address: 0x8004EACC
// line start: 1312
// line end:   1336
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004EAD4
// line start: 1342
// line end:   1371
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004EADC
// line start: 1377
// line end:   1398
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004ED5C
// line start: 1405
// line end:   1412
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004EE00
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


// address: 0x8004F1A4
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


// address: 0x8004F57C
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


// address: 0x8004F914
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


// address: 0x8004FCAC
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


// address: 0x8004FFB4
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


// address: 0x800502BC
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


// address: 0x800507B8
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


// address: 0x800508F0
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


// address: 0x80050A04
// line start: 1812
// line end:   1827
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050BBC
// line start: 1836
// line end:   1846
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80050C68
// line start: 1854
// line end:   1868
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050DD8
// line start: 1875
// line end:   1882
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80050F34
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


// address: 0x80051120
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


// address: 0x80051614
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


// address: 0x800519BC
// line start: 2035
// line end:   2059
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x80051B94
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


// address: 0x80051F64
// line start: 2112
// line end:   2138
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80052128
// line start: 2144
// line end:   2167
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x800522C0
// line start: 2173
// line end:   2199
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052514
// line start: 2205
// line end:   2228
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x800526E4
// line start: 2236
// line end:   2252
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005289C
// line start: 2258
// line end:   2265
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x800529F8
// line start: 2272
// line end:   2279
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052B54
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


// address: 0x80052C5C
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


// address: 0x80052F14
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


// address: 0x800530D8
// line start: 2402
// line end:   2405
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80053148
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


// address: 0x80055724
// line start: 2971
// line end:   2982
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800558A0
// line start: 2988
// line end:   3009
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055A70
// line start: 3015
// line end:   3023
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055B58
// line start: 3029
// line end:   3057
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80055CC8
// line start: 3069
// line end:   3091
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80055DB8
// line start: 3098
// line end:   3104
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x80055E60
// line start: 3111
// line end:   3118
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80055F14
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


// address: 0x800564C0
// line start: 3224
// line end:   3264
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x8005666C
// line start: 3270
// line end:   3281
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x80056770
// line start: 3287
// line end:   3300
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80056850
// line start: 3306
// line end:   3423
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80056C88
// line start: 3431
// line end:   3441
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056D9C
// line start: 3447
// line end:   3457
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056EB0
// line start: 3463
// line end:   3473
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056FC4
// line start: 3479
// line end:   3562
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x800571A4
// line start: 3570
// line end:   3596
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


// address: 0x80057394
// line start: 3604
// line end:   3665
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x800578E8
// line start: 3671
// line end:   3692
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057A48
// line start: 3700
// line end:   3706
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80057AA4
// line start: 3714
// line end:   3738
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80057BBC
// line start: 3744
// line end:   3760
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


// address: 0x80057CF4
// line start: 3767
// line end:   3770
void SyncLever__Fi(int i) {
}


// address: 0x80057D70
// line start: 3778
// line end:   3788
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x80057E68
// line start: 3797
// line end:   3812
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


// address: 0x80057FC4
// line start: 3820
// line end:   3844
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005812C
// line start: 3852
// line end:   3875
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058258
// line start: 3883
// line end:   3922
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x80058398
// line start: 3930
// line end:   4071
void GetObjectStr__Fi(int i) {
}


// address: 0x800587B4
// line start: 4076
// line end:   4231
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


// address: 0x80058A08
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058A08(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058A40
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058A40(struct TextDat *this, int Creature) {
}


// address: 0x80058AB8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058AB8(struct TextDat *this) {
}


// address: 0x80058ACC
// line start: 25
// line end:   26
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80058AD4
// line start: 381
// line end:   386
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058B00
// line start: 392
// line end:   405
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x80058BB4
// line start: 450
// line end:   499
void SetupLocalPlayer__Fv() {
}


// address: 0x80058BD4
// line start: 270
// line end:   271
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058C18
// line start: 275
// line end:   276
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058C2C
// line start: 412
// line end:   418
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058C4C
// line start: 528
// line end:   547
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058C54
// line start: 554
// line end:   565
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058C70
// line start: 574
// line end:   585
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058C94
// line start: 591
// line end:   672
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x80058ED0
// line start: 719
// line end:   836
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x800592EC
// line start: 843
// line end:   849
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80059354
// line start: 855
// line end:   891
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x800594C4
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


// address: 0x800596D0
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


// address: 0x80059754
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


// address: 0x80059B20
// line start: 1163
// line end:   1169
void InitMultiView__Fv() {
}


// address: 0x80059B28
// line start: 1270
// line end:   1294
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFB0
	// size: 0x50
	auto struct bbssbb bodge[10];
	{
		// register: 4
		register int i;
	}
}


// address: 0x80059BC0
// line start: 1298
// line end:   1303
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059C48
// line start: 1357
// line end:   1366
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059CDC
// line start: 1373
// line end:   1386
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059DD0
// line start: 1392
// line end:   1396
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059DE4
// line start: 1431
// line end:   1452
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80059E70
// line start: 1457
// line end:   1476
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059ED4
// line start: 1484
// line end:   1542
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800CCB1C
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80059F10
// line start: 1550
// line end:   1572
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059F3C
// line start: 1669
// line end:   1701
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x8005A074
// line start: 1727
// line end:   1742
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A10C
// line start: 1748
// line end:   1789
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A2A8
// line start: 1822
// line end:   1838
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


// address: 0x8005A3C8
// line start: 1845
// line end:   1878
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A4E8
// line start: 1885
// line end:   1914
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A684
// line start: 1920
// line end:   1957
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


// address: 0x8005A84C
// line start: 1962
// line end:   2086
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 18
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


// address: 0x8005AB64
// line start: 2091
// line end:   2257
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005AFAC
// line start: 2264
// line end:   2286
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005B0F0
// line start: 2292
// line end:   2294
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B110
// line start: 2300
// line end:   2325
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


// address: 0x8005B3F8
// line start: 2331
// line end:   2351
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B4B4
// line start: 2358
// line end:   2412
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B5F8
// line start: 2417
// line end:   2435
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B688
// line start: 2443
// line end:   2459
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005B744
// line start: 2467
// line end:   2468
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B74C
// line start: 2496
// line end:   2513
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005B7D4
// line start: 2517
// line end:   2634
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BB40
// line start: 2641
// line end:   2690
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BCE0
// line start: 2697
// line end:   2811
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


// address: 0x8005C310
// line start: 2818
// line end:   2881
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


// address: 0x8005C6C0
// line start: 2888
// line end:   2895
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C750
// line start: 2903
// line end:   2974
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


// address: 0x8005CADC
// line start: 2982
// line end:   3003
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CBDC
// line start: 3011
// line end:   3036
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CC9C
// line start: 3042
// line end:   3054
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CD3C
// line start: 3058
// line end:   3222
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


// address: 0x8005DD00
// line start: 3229
// line end:   3290
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E070
// line start: 3296
// line end:   3321
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


// address: 0x8005E16C
// line start: 3326
// line end:   3342
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E1E8
// line start: 3349
// line end:   3374
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E328
// line start: 3381
// line end:   3382
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E330
// line start: 3389
// line end:   3696
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E770
// line start: 3708
// line end:   3716
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E7D8
// line start: 3723
// line end:   3761
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


// address: 0x8005ECB4
// line start: 3808
// line end:   3825
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005ED50
// line start: 3834
// line end:   3955
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


// address: 0x8005F084
// line start: 3961
// line end:   3964
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F0AC
// line start: 3972
// line end:   3997
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


// address: 0x8005F254
// line start: 4004
// line end:   4056
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F25C
// line start: 4062
// line end:   4155
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


// address: 0x8005F664
// line start: 4222
// line end:   4246
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005F7A0
// line start: 4250
// line end:   4255
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F7D0
// line start: 4272
// line end:   4306
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005F96C
// line start: 4313
// line end:   4325
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FA88
// line start: 4333
// line end:   4350
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FB74
// line start: 4358
// line end:   4368
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FC58
// line start: 4376
// line end:   4390
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FD34
// line start: 4398
// line end:   4403
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005FD78
// line start: 4410
// line end:   4419
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FE54
// line start: 4426
// line end:   4435
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FEC4
// line start: 4442
// line end:   4451
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FFA0
// line start: 4458
// line end:   4467
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8006000C
// line start: 4474
// line end:   4477
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060014
// line start: 4484
// line end:   4551
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060344
// line start: 4554
// line end:   4554
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006036C
// line start: 4555
// line end:   4555
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x800603B0
// line start: 4556
// line end:   4556
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800603E4
// line start: 4557
// line end:   4557
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060418
// line start: 4558
// line end:   4558
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006044C
// line start: 4559
// line end:   4559
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80060480
// line start: 4560
// line end:   4560
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800604B4
// line start: 4561
// line end:   4561
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x800604EC
// line start: 4562
// line end:   4562
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060520
// line start: 4563
// line end:   4563
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060548
// line start: 4564
// line end:   4564
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060570
// line start: 4565
// line end:   4565
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060598
// line start: 4566
// line end:   4566
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x800605E0
// line start: 4567
// line end:   4567
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060608
// line start: 4568
// line end:   4568
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060630
// line start: 4569
// line end:   4569
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060664
// line start: 4570
// line end:   4570
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006068C
// line start: 4571
// line end:   4571
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606B4
// line start: 4572
// line end:   4572
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x800606F8
// line start: 4573
// line end:   4573
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x8006072C
// line start: 4574
// line end:   4574
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060760
// line start: 4576
// line end:   4576
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x800607AC
// line start: 4577
// line end:   4577
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x800607F8
// line start: 4578
// line end:   4578
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060844
// line start: 4579
// line end:   4579
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80060898
// line start: 4580
// line end:   4580
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x800608E4
// line start: 4581
// line end:   4581
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80060930
// line start: 4582
// line end:   4582
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80060980
// line start: 4583
// line end:   4583
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x800609CC
// line start: 4584
// line end:   4584
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060A18
// line start: 4585
// line end:   4585
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060A64
// line start: 4586
// line end:   4586
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060AB0
// line start: 4587
// line end:   4587
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060AFC
// line start: 4588
// line end:   4588
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060B48
// line start: 4589
// line end:   4589
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060B98
// line start: 4590
// line end:   4590
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060BE4
// line start: 4592
// line end:   4592
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060C34
// line start: 4594
// line end:   4594
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060C80
// line start: 4595
// line end:   4595
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060CCC
// line start: 4596
// line end:   4596
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060D18
// line start: 4597
// line end:   4597
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060D64
// line start: 4598
// line end:   4598
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80060DB0
// line start: 4599
// line end:   4599
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80060DFC
// line start: 4600
// line end:   4600
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80060E48
// line start: 4601
// line end:   4601
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80060E94
// line start: 4602
// line end:   4602
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80060EE0
// line start: 4603
// line end:   4603
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80060F2C
// line start: 4604
// line end:   4604
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80060F78
// line start: 4612
// line end:   4613
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x80060FAC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80060FAC(struct POLY_FT4 **Prim) {
}


// address: 0x80061028
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80061078
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80061084
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x80061090
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x8006109C
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


// address: 0x800612EC
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


// address: 0x800617A8
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


// address: 0x8006194C
// line start: 326
// line end:   332
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x800619E0
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


// address: 0x80061FC0
// line start: 470
// line end:   495
void SetReturnLvlPos__Fv() {
}


// address: 0x800620D0
// line start: 503
// line end:   508
void GetReturnLvlPos__Fv() {
}


// address: 0x80062124
// line start: 515
// line end:   537
void ResyncMPQuests__Fv() {
}


// address: 0x80062260
// line start: 547
// line end:   636
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x800627C0
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


// address: 0x800629EC
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


// address: 0x80062C24
// line start: 735
// line end:   753
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062CA4
// line start: 761
// line end:   781
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062DB4
// line start: 788
// line end:   796
void QuestlogUp__Fv() {
}


// address: 0x80062E0C
// line start: 804
// line end:   811
void QuestlogDown__Fv() {
}


// address: 0x80062E74
// line start: 819
// line end:   836
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80062F30
// line start: 844
// line end:   849
void QuestlogESC__Fv() {
}


// address: 0x80062F70
// line start: 856
// line end:   876
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80062FF0
// line start: 923
// line end:   923
void _GLOBAL__D_questlog() {
}


// address: 0x80063018
// line start: 923
// line end:   923
void _GLOBAL__I_questlog() {
}


// address: 0x80063040
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x8006304C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8006304C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006306C
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8006306C(struct Dialog *this, int Type) {
}


// address: 0x80063074
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_80063074(struct Dialog *this, int Type) {
}


// address: 0x8006307C
// line start: 77
// line end:   77
void ___6Dialog_addr_8006307C(struct Dialog *this, int __in_chrg) {
}


// address: 0x800630A4
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_800630A4(struct Dialog *this) {
}


// address: 0x80063100
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80063100(struct TextDat *this, int PalNum) {
}


// address: 0x8006311C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8006311C(struct TextDat *this, int FrNum) {
}


// address: 0x80063138
// line start: 85
// line end:   304
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x800632DC
// line start: 315
// line end:   373
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x800633D4
// line start: 158
// line end:   159
void FreeStoreMem__Fv() {
}


// address: 0x800633DC
// line start: 167
// line end:   170
void DrawSTextBack__Fv() {
}


// address: 0x8006344C
// line start: 175
// line end:   250
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
	// address: 0x80119580
	static unsigned char DaveFix;
}


// address: 0x80063824
// line start: 257
// line end:   264
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800638B8
// line start: 271
// line end:   284
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063950
// line start: 290
// line end:   294
void AddSLine__Fi(int y) {
}


// address: 0x800639A0
// line start: 300
// line end:   301
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800639C8
// line start: 310
// line end:   319
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063A7C
// line start: 324
// line end:   416
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80063F04
// line start: 424
// line end:   482
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


// address: 0x80064524
// line start: 489
// line end:   503
void S_StartSmith__Fv() {
}


// address: 0x800646AC
// line start: 509
// line end:   536
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064864
// line start: 542
// line end:   560
void S_StartSBuy__Fv() {
}


// address: 0x80064994
// line start: 566
// line end:   607
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


// address: 0x80064BB4
// line start: 613
// line end:   643
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064D04
// line start: 649
// line end:   660
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064DE8
// line start: 666
// line end:   718
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


// address: 0x80065010
// line start: 724
// line end:   770
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065440
// line start: 778
// line end:   786
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800654E4
// line start: 791
// line end:   812
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800656C4
// line start: 817
// line end:   875
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065B94
// line start: 884
// line end:   896
void S_StartWitch__Fv() {
}


// address: 0x80065CD4
// line start: 902
// line end:   939
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


// address: 0x80065EAC
// line start: 945
// line end:   965
void S_StartWBuy__Fv() {
}


// address: 0x80065FD8
// line start: 971
// line end:   991
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x800660FC
// line start: 997
// line end:   1057
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80066754
// line start: 1066
// line end:   1072
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x800667DC
// line start: 1078
// line end:   1087
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006695C
// line start: 1093
// line end:   1134
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066D7C
// line start: 1143
// line end:   1149
void S_StartNoMoney__Fv() {
}


// address: 0x80066DE4
// line start: 1155
// line end:   1160
void S_StartNoRoom__Fv() {
}


// address: 0x80066E44
// line start: 1166
// line end:   1226
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80067194
// line start: 1232
// line end:   1250
void S_StartBoy__Fv() {
}


// address: 0x80067324
// line start: 1257
// line end:   1281
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80067480
// line start: 1289
// line end:   1309
void S_StartHealer__Fv() {
}


// address: 0x80067654
// line start: 1315
// line end:   1337
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800677C0
// line start: 1343
// line end:   1360
void S_StartHBuy__Fv() {
}


// address: 0x800678E0
// line start: 1366
// line end:   1375
void S_StartStory__Fv() {
}


// address: 0x800679D0
// line start: 1381
// line end:   1385
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067A04
// line start: 1393
// line end:   1398
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067AD8
// line start: 1404
// line end:   1475
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068538
// line start: 1484
// line end:   1508
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006870C
// line start: 1514
// line end:   1548
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


// address: 0x8006893C
// line start: 1555
// line end:   1565
void S_StartTavern__Fv() {
}


// address: 0x80068A34
// line start: 1571
// line end:   1580
void S_StartBarMaid__Fv() {
}


// address: 0x80068B08
// line start: 1586
// line end:   1595
void S_StartDrunk__Fv() {
}


// address: 0x80068BDC
// line start: 1601
// line end:   1675
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068ECC
// line start: 1682
// line end:   1686
void DrawSText__Fv() {
}


// address: 0x80068F0C
// line start: 1691
// line end:   1705
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068FD4
// line start: 1709
// line end:   1762
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069180
// line start: 1770
// line end:   1834
void STextESC__Fv() {
}


// address: 0x800692FC
// line start: 1839
// line end:   1873
void STextUp__Fv() {
}


// address: 0x80069484
// line start: 1883
// line end:   1915
void STextDown__Fv() {
}


// address: 0x8006961C
// line start: 1927
// line end:   1949
void S_SmithEnter__Fv() {
}


// address: 0x800696F0
// line start: 1956
// line end:   1967
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006976C
// line start: 1975
// line end:   1985
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800697E8
// line start: 1993
// line end:   2084
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069C34
// line start: 2093
// line end:   2117
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069E28
// line start: 2123
// line end:   2157
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A04C
// line start: 2165
// line end:   2191
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A1D4
// line start: 2198
// line end:   2237
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


// address: 0x8006A404
// line start: 2244
// line end:   2274
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


// address: 0x8006A6BC
// line start: 2283
// line end:   2307
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


// address: 0x8006A920
// line start: 2313
// line end:   2369
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AC14
// line start: 2376
// line end:   2393
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AD18
// line start: 2400
// line end:   2418
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006AF88
// line start: 2424
// line end:   2443
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B0E4
// line start: 2450
// line end:   2467
void S_WitchEnter__Fv() {
}


// address: 0x8006B194
// line start: 2474
// line end:   2507
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B394
// line start: 2512
// line end:   2543
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B580
// line start: 2551
// line end:   2568
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B684
// line start: 2575
// line end:   2590
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B7FC
// line start: 2596
// line end:   2615
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B958
// line start: 2622
// line end:   2650
void S_BoyEnter__Fv() {
}


// address: 0x8006BA90
// line start: 2657
// line end:   2668
void BoyBuyItem__Fv() {
}


// address: 0x8006BB14
// line start: 2674
// line end:   2721
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BDB8
// line start: 2726
// line end:   2760
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BF90
// line start: 2766
// line end:   2788
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C2DC
// line start: 2795
// line end:   2830
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C3F8
// line start: 2835
// line end:   2853
void S_HealerEnter__Fv() {
}


// address: 0x8006C490
// line start: 2860
// line end:   2891
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C69C
// line start: 2899
// line end:   2912
void S_StoryEnter__Fv() {
}


// address: 0x8006C734
// line start: 2919
// line end:   2938
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C8B0
// line start: 2945
// line end:   2987
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


// address: 0x8006CAA8
// line start: 2996
// line end:   3007
void S_TavernEnter__Fv() {
}


// address: 0x8006CB18
// line start: 3014
// line end:   3026
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CB88
// line start: 3033
// line end:   3044
void S_DrunkEnter__Fv() {
}


// address: 0x8006CBF8
// line start: 3051
// line end:   3113
void STextEnter__Fv() {
}


// address: 0x8006CDF8
// line start: 3118
// line end:   3202
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CF14
// line start: 3207
// line end:   3209
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CF28
// line start: 3288
// line end:   3288
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CF50
// line start: 3288
// line end:   3288
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006CF78
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8006CF78(struct CPad *this) {
}


// address: 0x8006CFA0
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8006CFA0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006CFC0
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8006CFC0(struct Dialog *this, int Type) {
}


// address: 0x8006CFC8
// line start: 77
// line end:   77
void ___6Dialog_addr_8006CFC8(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006CFF0
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8006CFF0(struct Dialog *this) {
}


// address: 0x8006D04C
// line start: 129
// line end:   202
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006D1C0
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


// address: 0x8006D3B8
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


// address: 0x8006D4A8
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


// address: 0x8006D868
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


// address: 0x8006D9D0
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


// address: 0x8006DAB4
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


// address: 0x8006DB4C
// line start: 76
// line end:   117
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006DE64
// line start: 122
// line end:   150
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006E114
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


// address: 0x8006E574
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


// address: 0x8006E9F0
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


// address: 0x8006EEFC
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


// address: 0x8006EFBC
// line start: 349
// line end:   360
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006F0B0
// line start: 367
// line end:   378
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006F1A4
// line start: 385
// line end:   396
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006F298
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


// address: 0x8006F5B4
// line start: 476
// line end:   497
void FadeGameOut__Fv() {
}


// address: 0x8006F650
// line start: 502
// line end:   509
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x8006F6B4
// line start: 513
// line end:   655
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


// address: 0x8006FBC4
// line start: 45
// line end:   94
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


// address: 0x8006FE8C
// line start: 101
// line end:   138
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x8006FFD0
// line start: 144
// line end:   165
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80070070
// line start: 172
// line end:   204
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x8007031C
// line start: 209
// line end:   244
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x800705D0
// line start: 249
// line end:   272
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80070834
// line start: 106
// line end:   107
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x8007083C
// line start: 113
// line end:   121
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x800708A4
// line start: 128
// line end:   130
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x800708C4
// line start: 141
// line end:   158
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070934
// line start: 167
// line end:   195
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x800709D0
// line start: 209
// line end:   216
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070A2C
// line start: 227
// line end:   234
void music_stop__Fv() {
}


// address: 0x80070A78
// line start: 245
// line end:   251
void music_fade__Fv() {
}


// address: 0x80070AB8
// line start: 260
// line end:   274
void music_start__Fi(int nTrack) {
	{
		{
			// register: 6
			register int MusicVolume;
		}
	}
}


// address: 0x80070B44
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


// address: 0x80071000
// line start: 171
// line end:   179
void CloseInvChr__Fv() {
}


// address: 0x80071068
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


// address: 0x80071114
// line start: 208
// line end:   239
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071184
// line start: 248
// line end:   278
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x800711F4
// size: 0x9C
// line start: 291
// line end:   318
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80071324
// line start: 327
// line end:   329
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071364
// line start: 338
// line end:   341
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800713A8
// line start: 350
// line end:   353
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800713EC
// line start: 394
// line end:   452
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x8007165C
// line start: 462
// line end:   515
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x8007181C
// line start: 523
// line end:   542
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80071878
// line start: 550
// line end:   553
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800718B4
// line start: 562
// line end:   590
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80071954
// line start: 598
// line end:   710
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80071D38
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


// address: 0x80071E0C
// line start: 760
// line end:   806
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071F24
// line start: 817
// line end:   826
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80071F68
// line start: 834
// line end:   928
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


// address: 0x80072268
// line start: 938
// line end:   1000
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072568
// line start: 1008
// line end:   1068
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	{
		{
			// register: 16
			// size: 0x98
			register struct ItemStruct *pi;
		}
	}
}


// address: 0x800728C0
// line start: 1076
// line end:   1095
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


// address: 0x80072A74
// line start: 1163
// line end:   1446
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
	register int cp;
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
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800730D0
// line start: 1451
// line end:   1544
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


// address: 0x800732D4
// line start: 1550
// line end:   1567
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80073384
// line start: 1579
// line end:   1580
void Init_GamePad__Fv() {
}


// address: 0x800733B4
// line start: 1585
// line end:   1599
void InitGamePadVars__Fv() {
}


// address: 0x80073444
// line start: 1603
// line end:   1612
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x800734B4
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_800734B4(struct CBlocks *this) {
}


// address: 0x800734C8
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_800734C8(struct CPad *this) {
}


// address: 0x800734F0
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_800734F0(struct CPad *this) {
}


// address: 0x80073518
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_80073518(struct CPad *this) {
}


// address: 0x80073540
// line start: 66
// line end:   69
void DoGameTestStuff__Fv() {
}


// address: 0x8007356C
// line start: 73
// line end:   76
void DoInitGameStuff__Fv() {
}


// address: 0x800735A0
// line start: 63
// line end:   64
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x800735C0
// line start: 74
// line end:   76
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x800735E0
// line start: 94
// line end:   95
void GRL_InitGwin__Fv() {
}


// address: 0x800735EC
// line start: 106
// line end:   110
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x800735FC
// line start: 121
// line end:   123
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80073624
// line start: 133
// line end:   150
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x800736D0
// line start: 160
// line end:   167
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x80073718
// size: 0x4
// line start: 83
// line end:   84
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x80073724
// line start: 91
// line end:   134
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


// address: 0x80073888
// line start: 142
// line end:   162
char *GetStr__Fi(int StrId) {
}


// address: 0x800738F0
// line start: 172
// line end:   207
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


// address: 0x800739F4
// line start: 219
// line end:   228
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x80073A4C
// line start: 237
// line end:   239
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80073A58
// line start: 249
// line end:   267
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80073B78
// line start: 275
// line end:   301
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80073BF8
// line start: 97
// line end:   176
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


// address: 0x8007413C
// line start: 179
// line end:   203
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x800742BC
// line start: 207
// line end:   225
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x8007441C
// line start: 229
// line end:   244
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800744B4
// line start: 251
// line end:   266
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074564
// line start: 273
// line end:   274
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800745C8
// line start: 278
// line end:   281
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800746E0
// line start: 285
// line end:   287
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074778
// line start: 291
// line end:   293
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074810
// line start: 297
// line end:   298
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074878
// line start: 302
// line end:   313
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 3
	register int frame;
}


// address: 0x8007490C
// line start: 317
// line end:   332
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


// address: 0x800749EC
// line start: 337
// line end:   352
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


// address: 0x80074AC4
// line start: 357
// line end:   369
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074B54
// line start: 373
// line end:   387
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


// address: 0x80074C70
// line start: 391
// line end:   403
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074D0C
// line start: 407
// line end:   408
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074D74
// line start: 412
// line end:   413
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074DDC
// line start: 417
// line end:   426
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80074F10
// line start: 430
// line end:   439
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80075054
// line start: 443
// line end:   444
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800750BC
// line start: 448
// line end:   449
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075114
// line start: 453
// line end:   463
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


// address: 0x800751E0
// line start: 468
// line end:   469
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075244
// line start: 473
// line end:   475
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007524C
// line start: 478
// line end:   553
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


// address: 0x80075774
// line start: 558
// line end:   563
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007581C
// line start: 567
// line end:   568
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075824
// line start: 571
// line end:   572
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075858
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075858(struct POLY_FT4 **Prim) {
}


// address: 0x800758D4
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_800758D4(int PNum) {
}


// address: 0x80075924
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075924(struct CPlayer *this) {
}


// address: 0x80075930
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80075930(struct CPlayer *this) {
}


// address: 0x8007593C
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_8007593C(struct CPlayer *this) {
}


// address: 0x80075948
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075948(struct TextDat *this) {
}


// address: 0x8007595C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8007595C(struct TextDat *this, int FrNum) {
}


// address: 0x80075978
// line start: 67
// line end:   72
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800759B0
// line start: 81
// line end:   96
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80075A30
// line start: 105
// line end:   120
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80075AC8
// line start: 131
// line end:   147
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80075B78
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


// address: 0x80075D34
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


// address: 0x80075EC8
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


// address: 0x80075F80
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


// address: 0x80076214
// line start: 441
// line end:   448
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x800762EC
// size: 0x28
// line start: 459
// line end:   467
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076374
// size: 0x28
// line start: 477
// line end:   478
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763A0
// size: 0x28
// line start: 488
// line end:   489
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763CC
// size: 0x28
// line start: 499
// line end:   500
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800763F8
// size: 0x28
// line start: 510
// line end:   511
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076424
// size: 0x28
// line start: 521
// line end:   522
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076450
// size: 0x28
// line start: 532
// line end:   533
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076474
// size: 0x28
// line start: 543
// line end:   544
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076498
// size: 0x28
// line start: 554
// line end:   555
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764C4
// size: 0x28
// line start: 565
// line end:   566
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764F0
// size: 0x28
// line start: 576
// line end:   577
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007651C
// size: 0x28
// line start: 587
// line end:   588
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076548
// size: 0x28
// line start: 598
// line end:   599
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076574
// size: 0x28
// line start: 609
// line end:   610
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765A0
// size: 0x28
// line start: 620
// line end:   621
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765CC
// size: 0x28
// line start: 631
// line end:   632
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765F8
// size: 0x28
// line start: 642
// line end:   643
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076624
// size: 0x28
// line start: 653
// line end:   654
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076650
// size: 0x28
// line start: 664
// line end:   665
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007667C
// size: 0x28
// line start: 675
// line end:   676
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800766A8
// size: 0x28
// line start: 686
// line end:   687
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800766D4
// size: 0x28
// line start: 697
// line end:   698
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076700
// size: 0x28
// line start: 708
// line end:   709
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007672C
// size: 0x28
// line start: 719
// line end:   720
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076758
// size: 0x28
// line start: 730
// line end:   731
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076784
// size: 0x28
// line start: 741
// line end:   742
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767B0
// size: 0x28
// line start: 752
// line end:   753
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767DC
// size: 0x28
// line start: 763
// line end:   764
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076808
// size: 0x28
// line start: 774
// line end:   775
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076834
// size: 0x28
// line start: 785
// line end:   786
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076860
// size: 0x28
// line start: 796
// line end:   797
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007688C
// size: 0x28
// line start: 807
// line end:   808
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768B8
// size: 0x28
// line start: 818
// line end:   819
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768E4
// size: 0x28
// line start: 829
// line end:   830
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076910
// size: 0x28
// line start: 840
// line end:   841
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007693C
// size: 0x28
// line start: 851
// line end:   852
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076968
// size: 0x28
// line start: 862
// line end:   863
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076994
// size: 0x28
// line start: 873
// line end:   874
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769C0
// size: 0x28
// line start: 884
// line end:   885
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769EC
// size: 0x28
// line start: 895
// line end:   896
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A18
// line start: 906
// line end:   911
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80076AAC
// size: 0x28
// line start: 915
// line end:   921
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076B3C
// size: 0x28
// line start: 931
// line end:   937
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076BCC
// size: 0x28
// line start: 947
// line end:   953
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076C5C
// size: 0x28
// line start: 963
// line end:   969
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076CEC
// size: 0x28
// line start: 979
// line end:   980
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D18
// size: 0x28
// line start: 990
// line end:   991
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D44
// size: 0x28
// line start: 1001
// line end:   1002
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D70
// size: 0x28
// line start: 1012
// line end:   1013
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076D9C
// size: 0x28
// line start: 1023
// line end:   1024
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DC8
// size: 0x28
// line start: 1034
// line end:   1035
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DF4
// size: 0x28
// line start: 1045
// line end:   1046
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E20
// size: 0x28
// line start: 1056
// line end:   1057
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E4C
// size: 0x28
// line start: 1067
// line end:   1068
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E78
// size: 0x28
// line start: 1078
// line end:   1079
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EA4
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


// address: 0x80076FFC
// size: 0x28
// line start: 1125
// line end:   1132
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x800770C8
// size: 0x28
// line start: 1142
// line end:   1149
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80077194
// size: 0x28
// line start: 1159
// line end:   1160
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800771C0
// size: 0x28
// line start: 1170
// line end:   1171
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800771EC
// size: 0x28
// line start: 1181
// line end:   1182
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077218
// size: 0x28
// line start: 1192
// line end:   1193
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077244
// size: 0x28
// line start: 1203
// line end:   1204
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077268
// size: 0x28
// line start: 1214
// line end:   1215
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077294
// size: 0x28
// line start: 1225
// line end:   1226
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772C0
// size: 0x28
// line start: 1236
// line end:   1237
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772EC
// size: 0x28
// line start: 1247
// line end:   1248
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077318
// size: 0x28
// line start: 1258
// line end:   1259
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077344
// size: 0x28
// line start: 1269
// line end:   1270
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077370
// size: 0x28
// line start: 1280
// line end:   1281
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007739C
// size: 0x28
// line start: 1291
// line end:   1292
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773C8
// size: 0x28
// line start: 1302
// line end:   1303
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773F4
// size: 0x28
// line start: 1313
// line end:   1314
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077420
// size: 0x28
// line start: 1324
// line end:   1325
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007744C
// size: 0x28
// line start: 1335
// line end:   1336
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077478
// size: 0x28
// line start: 1346
// line end:   1347
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800774A4
// size: 0x28
// line start: 1357
// line end:   1358
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800774D0
// size: 0x28
// line start: 1368
// line end:   1369
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800774FC
// size: 0x28
// line start: 1379
// line end:   1380
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077528
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


// address: 0x800776BC
// size: 0x28
// line start: 1446
// line end:   1470
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


// address: 0x80077844
// size: 0x28
// line start: 1480
// line end:   1481
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077868
// size: 0x28
// line start: 1491
// line end:   1492
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077894
// size: 0x28
// line start: 1502
// line end:   1503
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800778C0
// size: 0x28
// line start: 1513
// line end:   1514
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800778EC
// size: 0x28
// line start: 1524
// line end:   1525
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077918
// size: 0x28
// line start: 1535
// line end:   1536
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077944
// size: 0x28
// line start: 1546
// line end:   1547
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077970
// size: 0x28
// line start: 1557
// line end:   1558
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007799C
// size: 0x28
// line start: 1568
// line end:   1569
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779C8
// size: 0x28
// line start: 1579
// line end:   1580
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779F4
// size: 0x28
// line start: 1590
// line end:   1591
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A20
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077A20(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80077A5C
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077A5C(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80077A84
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077A84(struct POLY_FT4 **Prim) {
}


// address: 0x80077B00
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077B00(struct CBlocks *this) {
}


// address: 0x80077B0C
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80077B0C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077B44
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80077B44(struct TextDat *this, int Creature) {
}


// address: 0x80077BBC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077BBC(struct TextDat *this) {
}


// address: 0x80077BD0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077BD0(struct TextDat *this, int FrNum) {
}


// address: 0x80077BEC
// line start: 48
// line end:   58
void gamemenu_on__Fv() {
}


// address: 0x80077BF4
// line start: 63
// line end:   65
void gamemenu_off__Fv() {
}


// address: 0x80077BFC
// line start: 74
// line end:   96
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077C04
// line start: 101
// line end:   114
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077C0C
// line start: 119
// line end:   125
void ResetPal__Fv() {
}


// address: 0x80077C14
// line start: 133
// line end:   140
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077C44
// line start: 175
// line end:   176
bool GetFadeState__Fv() {
}


// address: 0x80077C50
// line start: 203
// line end:   227
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x80077D54
// line start: 235
// line end:   258
void SmearScreen__Fv() {
}


// address: 0x80077D5C
// line start: 261
// line end:   266
void DrawFadedScreen__Fv() {
}


// address: 0x80077DB0
// line start: 285
// line end:   297
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077E6C
// line start: 304
// line end:   332
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80077EFC
// line start: 339
// line end:   346
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077F54
// line start: 354
// line end:   389
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078004
// line start: 396
// line end:   406
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x80078058
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x80078078
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


// address: 0x800781E4
// line start: 168
// line end:   171
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x80078220
// line start: 176
// line end:   188
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8007826C
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x800782B4
// line start: 205
// line end:   217
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80078314
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


// address: 0x800788A8
// line start: 310
// line end:   319
void ClearMVars__Fi(int i) {
}


// address: 0x8007891C
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


// address: 0x80078D68
// line start: 435
// line end:   443
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80078E18
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


// address: 0x80078F5C
// line start: 480
// line end:   499
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80079054
// line start: 503
// line end:   511
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x800790FC
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


// address: 0x800792EC
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


// address: 0x800793CC
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


// address: 0x80079648
// line start: 619
// line end:   650
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80079950
// line start: 110
// line end:   198
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x80079C4C
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


// address: 0x8007A09C
// line start: 70
// line end:   140
int lAddMissile__Fiiici(int sx, int sy, int midir, char micaster, int id) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
	// register: 18
	register int mi;
}


// address: 0x8007A270
// line start: 149
// line end:   178
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 3
	register int mi;
}


// address: 0x8007A3B8
// line start: 184
// line end:   198
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8007A4C0
// line start: 206
// line end:   207
void AddInTownPortal__Fi(int i) {
}


// address: 0x8007A4F8
// line start: 214
// line end:   222
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8007A568
// line start: 230
// line end:   232
void DeactivatePortal__Fi(int i) {
}


// address: 0x8007A588
// line start: 239
// line end:   243
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8007A5C0
// line start: 249
// line end:   256
void DelMis__Fii(int mi, int i) {
}


// address: 0x8007A620
// line start: 262
// line end:   277
void RemovePortalMissile__Fi(int id) {
	// register: 17
	register int i;
	// register: 18
	register int mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
}


// address: 0x8007A79C
// line start: 283
// line end:   284
void SetCurrentPortal__Fi(int p) {
}


// address: 0x8007A7A8
// line start: 289
// line end:   315
void GetPortalLevel__Fv() {
}


// address: 0x8007A94C
// line start: 321
// line end:   334
void GetPortalLvlPos__Fv() {
}


// address: 0x8007A9FC
// size: 0xB8
// line start: 61
// line end:   62
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x8007AA28
// line start: 70
// line end:   70
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x8007AA50
// line start: 78
// line end:   84
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007AA80
// line start: 92
// line end:   108
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


// address: 0x8007AB24
// line start: 117
// line end:   123
void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x8007AB8C
// size: 0xF1C
// line start: 132
// line end:   152
struct DLevel *UseMap__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007AC60
// line start: 160
// line end:   171
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Map) {
}


// address: 0x8007ACD0
// line start: 179
// line end:   185
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007AD44
// line start: 195
// line end:   250
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


// address: 0x8007AF58
// line start: 258
// line end:   302
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


// address: 0x8007B0F8
// line start: 310
// line end:   356
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


// address: 0x8007B258
// line start: 364
// line end:   401
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


// address: 0x8007B398
// line start: 408
// line end:   414
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x8007B3D0
// line start: 418
// line end:   420
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x8007B408
// line start: 73
// line end:   75
void GO_DoGameOver__Fv() {
}


// address: 0x8007B44C
// line start: 85
// line end:   116
void GameOverTask__FP4TASK(struct TASK *T) {
	// register: 17
	register bool OldPause;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8007B508
// line start: 126
// line end:   140
void PrintGameOver__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct Dialog PBack;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x8007B5E4
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc_addr_8007B5E4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8007B604
// line start: 97
// line end:   97
void SetBack__6Dialogi_addr_8007B604(struct Dialog *this, int Type) {
}


// address: 0x8007B60C
// line start: 94
// line end:   94
void SetBorder__6Dialogi_addr_8007B60C(struct Dialog *this, int Type) {
}


// address: 0x8007B614
// line start: 77
// line end:   77
void ___6Dialog_addr_8007B614(struct Dialog *this, int __in_chrg) {
}


// address: 0x8007B63C
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8007B63C(struct Dialog *this) {
}


// address: 0x8007B698
// line start: 230
// line end:   236
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x8007B6DC
// line start: 240
// line end:   241
char *VER_GetVerString__Fv() {
}


// address: 0x8007B6EC
// line start: 284
// line end:   285
int CharPair2Num__FPc(char *Str) {
}


// address: 0x8001E698
// line start: 32
// line end:   33
void TICK_InitModule();

// address: 0x8001E6B8
// line start: 41
// line end:   42
void TICK_Set(unsigned long Val);

// address: 0x8001E6C8
// line start: 49
// line end:   50
unsigned long TICK_Get();

// address: 0x8001E6D8
// line start: 58
// line end:   59
void TICK_Update();

// address: 0x8001E6F8
// line start: 66
// line end:   67
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001E724
// line start: 71
// line end:   72
char *TICK_GetDateString();

// address: 0x8001E734
// line start: 76
// line end:   77
char *TICK_GetTimeString();

// address: 0x8001E744
// line start: 55
// line end:   57
unsigned char GU_InitModule();

// address: 0x8001E770
// line start: 65
// line end:   70
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E7A0
// line start: 76
// line end:   95
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E830
// line start: 103
// line end:   104
long GU_GetSRnd();

// address: 0x8001E850
// line start: 114
// line end:   115
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E88C
// line start: 126
// line end:   128
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001E8B0
// line start: 31
// line end:   39
void main();

// address: 0x8001E900
// line start: 53
// line end:   60
unsigned char DBG_OpenModule();

// address: 0x8001E908
// line start: 72
// line end:   79
void DBG_PollHost();

// address: 0x8001E910
// line start: 88
// line end:   92
void DBG_Halt();

// address: 0x8001E918
// line start: 108
// line end:   126
void DBG_SendMessage(char *e);

// address: 0x8001E930
// line start: 135
// line end:   136
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E940
// line start: 146
// line end:   158
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E96C
// line start: 164
// line end:   165
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E97C
// line start: 175
// line end:   179
void SendPsyqString(char *e);

// address: 0x8001E984
// line start: 188
// line end:   189
void DBG_SetPollRoutine(void (*Func)());

// address: 0x8001E994
// line start: 52
// line end:   53
unsigned long GTIMSYS_GetTimer();

// address: 0x8001E9B8
// line start: 57
// line end:   58
void GTIMSYS_ResetTimer();

// address: 0x8001E9DC
// line start: 63
// line end:   91
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8001EC10
// line start: 88
// line end:   91
void DoEpi(struct TASK *T);

// address: 0x8001EC60
// line start: 99
// line end:   102
void DoPro(struct TASK *T);

// address: 0x8001ECB0
// line start: 115
// line end:   129
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x8001ED24
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


// address: 0x8001EF0C
// line start: 218
// line end:   277
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F0CC
// line start: 287
// line end:   313
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x8001F1A8
// line start: 321
// line end:   330
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8001F230
// line start: 338
// line end:   340
void TSK_Die();

// address: 0x8001F25C
// line start: 350
// line end:   357
void TSK_Kill(struct TASK *T);

// address: 0x8001F2AC
// size: 0x5C
// line start: 371
// line end:   372
struct TASK *TSK_GetFirstActive();

// address: 0x8001F2BC
// line start: 385
// line end:   395
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8001F338
// line start: 408
// line end:   418
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8001F380
// line start: 430
// line end:   440
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8001F3C4
// size: 0x5C
// line start: 454
// line end:   455
struct TASK *TSK_GetCurrentTask();

// address: 0x8001F3D4
// line start: 467
// line end:   468
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x8001F3EC
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


// address: 0x8001F444
// line start: 512
// line end:   514
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F45C
// line start: 525
// line end:   526
void TSK_ClearExecFilter();

// address: 0x8001F480
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


// address: 0x8001F580
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


// address: 0x8001F5F8
// line start: 619
// line end:   620
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x8001F60C
// line start: 630
// line end:   631
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8001F620
// line start: 642
// line end:   643
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8001F634
// line start: 653
// line end:   654
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8001F648
// line start: 665
// line end:   666
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x8001F65C
// line start: 677
// line end:   678
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8001F670
// line start: 689
// line end:   696
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6BC
// line start: 707
// line end:   713
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6DC
// line start: 722
// line end:   734
void LoTskKill(struct TASK *T) {
}


// address: 0x8001F74C
// line start: 744
// line end:   748
void ExecuteTask(struct TASK *T);

// address: 0x8001F79C
// line start: 756
// line end:   762
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7B4
// line start: 765
// line end:   771
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7CC
// line start: 775
// line end:   781
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7E4
// line start: 784
// line end:   790
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7FC
// line start: 793
// line end:   795
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F814
// line start: 799
// line end:   802
void TSK_ClearEpiProFilter();

// address: 0x8001F848
// line start: 810
// line end:   811
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8001F858
// line start: 819
// line end:   826
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x8001F870
// line start: 833
// line end:   838
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x8001F898
// line start: 841
// line end:   845
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8001F8C4
// line start: 848
// line end:   857
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x8001F900
// size: 0x8
// line start: 74
// line end:   75
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F910
// line start: 89
// line end:   91
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001F94C
// line start: 110
// line end:   115
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F95C
// line start: 130
// line end:   135
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F974
// line start: 147
// line end:   151
unsigned char GSYS_InitMachine();

// address: 0x8001F9C8
// line start: 170
// line end:   184
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001F9FC
// line start: 195
// line end:   199
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FA78
// line start: 174
// line end:   175
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001FA88
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


// address: 0x8001FBBC
// line start: 253
// line end:   275
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FC74
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


// address: 0x8001FD94
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


// address: 0x8001FF2C
// line start: 464
// line end:   486
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FF8C
// line start: 499
// line end:   530
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020008
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


// address: 0x800200A8
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


// address: 0x8002011C
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


// address: 0x80020190
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


// address: 0x8002020C
// line start: 709
// line end:   715
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x8002022C
// line start: 729
// line end:   736
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80020278
// line start: 751
// line end:   764
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x800202A8
// line start: 778
// line end:   788
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x800202D8
// line start: 801
// line end:   802
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80020308
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


// address: 0x80020360
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


// address: 0x800203C8
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


// address: 0x80020430
// size: 0x28
// line start: 944
// line end:   965
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x8002046C
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


// address: 0x80020540
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


// address: 0x8002061C
// line start: 1107
// line end:   1194
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x800207B4
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


// address: 0x80020820
// size: 0x20
// line start: 1249
// line end:   1266
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x800208A8
// line start: 1279
// line end:   1281
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x800208E8
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


// address: 0x8002096C
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


// address: 0x80020A08
// line start: 1354
// line end:   1358
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020A70
// line start: 1378
// line end:   1392
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020AC4
// line start: 1406
// line end:   1422
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020B18
// line start: 1436
// line end:   1453
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020B9C
// line start: 1466
// line end:   1471
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020BF8
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


// address: 0x80020CF4
// line start: 1553
// line end:   1578
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020DA0
// line start: 1591
// line end:   1606
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020DF8
// line start: 1618
// line end:   1620
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020E28
// size: 0x4
// line start: 1633
// line end:   1634
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020E38
// line start: 1645
// line end:   1646
char *GAL_GetLastErrorText();

// address: 0x80020E60
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


// address: 0x80020EC8
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


// address: 0x80020F30
// line start: 1729
// line end:   1730
void GAL_SetTimeStamp(int Time);

// address: 0x80020F40
// line start: 1740
// line end:   1741
void GAL_IncTimeStamp();

// address: 0x80020F60
// line start: 1750
// line end:   1751
int GAL_GetTimeStamp();

// address: 0x80020F70
// line start: 1767
// line end:   1778
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80020FC0
// line start: 1798
// line end:   1803
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80021010
// line start: 1818
// line end:   1835
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x800210BC
// line start: 1846
// line end:   1857
long GAL_GetSize(long hnd) {
}


// address: 0x80021110
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


// address: 0x80021278
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


// address: 0x8002131C
// line start: 2013
// line end:   2019
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80021350
// line start: 2032
// line end:   2042
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x800213BC
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


// address: 0x800214B4
// size: 0x20
// line start: 2134
// line end:   2153
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x800214F0
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


// address: 0x80021580
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


// address: 0x800215FC
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


// address: 0x800216B0
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


// address: 0x8002170C
// line start: 2335
// line end:   2340
void GAL_MemDump(unsigned long Type);

// address: 0x80021780
// line start: 2354
// line end:   2355
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80021790
// line start: 2368
// line end:   2382
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x800217BC
// line start: 2394
// line end:   2406
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x80021804
// line start: 2415
// line end:   2416
int GAL_GetNumFreeHeaders();

// address: 0x80021814
// line start: 2420
// line end:   2421
unsigned long GAL_GetLastTypeAlloced();

// address: 0x80021824
// line start: 2431
// line end:   2438
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x8002183C
// line start: 2447
// line end:   2459
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021890
// line start: 2462
// line end:   2463
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x800218A0
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


// address: 0x80023C5C
// line start: 157
// line end:   167
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80023CA8
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
	// address: 0x80023DFC
	bool rflag;
	// address: 0x80024164
	bool nosign;
	// address: 0x80024210
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


