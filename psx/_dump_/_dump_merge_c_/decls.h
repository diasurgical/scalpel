#include "types.h"

// address: 0x801170B8
extern int ALLQUESTS;

// address: 0x8011779F
extern unsigned char AMColumnFlag;

// address: 0x8011779E
extern unsigned char AMDirtFlag;

// address: 0x801177A3
extern unsigned char AMLArchFlag;

// address: 0x801177A1
extern unsigned char AMLDoorFlag;

// address: 0x801177A2
extern unsigned char AMLGrateFlag;

// address: 0x8011779C
extern unsigned char AMLLWallFlag;

// address: 0x8011779D
extern unsigned char AMLRWallFlag;

// address: 0x8011779A
extern unsigned char AMLWallFlag;

// address: 0x801177B8
extern int AMPlayerX;

// address: 0x801177BC
extern int AMPlayerY;

// address: 0x801177A6
extern unsigned char AMRArchFlag;

// address: 0x801177A4
extern unsigned char AMRDoorFlag;

// address: 0x801177A5
extern unsigned char AMRGrateFlag;

// address: 0x8011779B
extern unsigned char AMRWallFlag;

// address: 0x801177A0
extern unsigned char AMStairFlag;

// address: 0x80108EAC
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x80113B8C
static int Action;

// address: 0x80117DA8
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x80116478
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x80117B58
static unsigned char Adjust;

// address: 0x801009D4
// size: 0x80
extern void (*AiProc[32])();

// address: 0x80116D08
extern char *AlertTxt;

// address: 0x80113CEC
extern int AlertTxt;

// address: 0x800A37DC
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x800A85A0
// size: 0x47C
extern struct TextDat *AllDats[287];

// address: 0x800A4418
// size: 0x46C
extern struct TextDat *AllDats[283];

// address: 0x800AA89C
// size: 0x5C0
extern struct TextDat_dup_14 *AllDats[368];

// address: 0x800A6F8C
// size: 0x7290
extern struct TextDat_dup_1 AllDats[282];

// address: 0x800A44C4
// size: 0x470
extern struct TextDat *AllDats[284];

// address: 0x800A86D0
// size: 0x5C4
extern struct TextDat *AllDats[369];

// address: 0x800A93E0
// size: 0x5C0
extern struct TextDat *AllDats[368];

// address: 0x800A8734
// size: 0x478
extern struct TextDat *AllDats[286];

// address: 0x800A4720
// size: 0x474
extern struct TextDat *AllDats[285];

// address: 0x8010D9BC
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x800AAB64
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x800A375C
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x80111E4C
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x8011E9B4
// size: 0x58
static struct MESSAGE_STR AllMsgs[11];

// address: 0x80114EB8
// size: 0x50
static struct MESSAGE_STR AllMsgs[10];

// address: 0x800C940C
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80117DA4
static void (*AllocFilter)();

// address: 0x801172B0
// size: 0x8
static unsigned char AmShiftTab[8];

// address: 0x800A867C
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800BCDA8
// size: 0x60
extern struct OMENUITEM AreYouSureMenu[4];

// address: 0x801172DC
extern int Area_Min;

// address: 0x8011646C
extern int ArgsSoFar;

// address: 0x80116924
// size: 0x4
static char ArmourChar[4];

// address: 0x80116BE0
extern unsigned long AttractMainDelay;

// address: 0x80116BDC
extern unsigned long AttractTitleDelay;

// address: 0x801160CA
extern unsigned char AutoMapArchB;

// address: 0x801160C9
extern unsigned char AutoMapArchG;

// address: 0x801160C8
extern unsigned char AutoMapArchR;

// address: 0x801160C7
extern unsigned char AutoMapColumnB;

// address: 0x801160C6
extern unsigned char AutoMapColumnG;

// address: 0x801160C5
extern unsigned char AutoMapColumnR;

// address: 0x801160C4
extern unsigned char AutoMapDoorB;

// address: 0x801160C3
extern unsigned char AutoMapDoorG;

// address: 0x801160C2
extern unsigned char AutoMapDoorR;

// address: 0x8011491B
extern unsigned char AutoMapPlayerB;

// address: 0x8011491A
extern unsigned char AutoMapPlayerG;

// address: 0x80114919
extern unsigned char AutoMapPlayerR;

// address: 0x801160B8
extern int AutoMapScale;

// address: 0x801160CD
extern unsigned char AutoMapStairB;

// address: 0x801160CC
extern unsigned char AutoMapStairG;

// address: 0x801160CB
extern unsigned char AutoMapStairR;

// address: 0x801160C1
extern unsigned char AutoMapWallB;

// address: 0x801160C0
extern unsigned char AutoMapWallG;

// address: 0x801160BF
extern unsigned char AutoMapWallR;

// address: 0x801177A8
extern int AutoMapX;

// address: 0x801177B0
extern int AutoMapXOfs;

// address: 0x801177AC
extern int AutoMapY;

// address: 0x801177B4
extern int AutoMapYOfs;

// address: 0x801165F4
extern unsigned char BACKB;

// address: 0x801165F3
extern unsigned char BACKG;

// address: 0x801165F2
extern unsigned char BACKR;

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

// address: 0x801165D2
extern unsigned char BLUEB;

// address: 0x801165D1
extern unsigned char BLUEG;

// address: 0x801165D0
extern unsigned char BLUER;

// address: 0x80116548
extern unsigned long BL_NoLumpFiles;

// address: 0x8011654C
extern unsigned long BL_NoStreamFiles;

// address: 0x801165F1
extern unsigned char BORDERB;

// address: 0x801165F0
extern unsigned char BORDERG;

// address: 0x801165EF
extern unsigned char BORDERR;

// address: 0x80117788
// size: 0x8
extern struct RECT BRect;

// address: 0x80116760
static int BankBase;

// address: 0x80116758
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x800A6D70
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x80116B28
extern char *BlankEntry;

// address: 0x80116C20
extern int BookMenu;

// address: 0x80117A2C
static unsigned char BufferDepth;

// address: 0x80117A38
static unsigned char BufferNum;

// address: 0x8012AEF4
static unsigned char CDAngle;

// address: 0x80117001
static unsigned char CDFlip;

// address: 0x80113DA8
// size: 0x98
static struct cdstreamstruct *CDStream;

// address: 0x80113DA4
// size: 0x5C
extern struct TASK *CDTask;

// address: 0x80118A70
extern bool CDWAIT;

// address: 0x8012E268
// size: 0x30
static unsigned short CHStatus[24];

// address: 0x80118AC0
// size: 0x10
static struct Dialog CSBack;

// address: 0x80116E34
// size: 0x8
extern struct RECT CSRect;

// address: 0x800A7CC8
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x80116DB8
static int CS_XOFF;

// address: 0x80117B7C
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x80117A68
static bool CanPause;

// address: 0x800A6714
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800A6ABC
// size: 0xA8
extern struct OMENUITEM_dup_4 CentreMenu[7];

// address: 0x80116928
// size: 0x4
static char CharChar[4];

// address: 0x8011723C
extern int CharFade;

// address: 0x801165E0
extern int CharFrm;

// address: 0x801165DC
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x801201B0
// size: 0x34
extern struct POLY_GT4 *CharGt4;

// address: 0x800BDDFC
// size: 0xF0
extern struct OMENUITEM CheatMenu[10];

// address: 0x800BCCEC
// size: 0x108
extern struct OMENUITEM CheatMenu[11];

// address: 0x800A6B64
// size: 0xC0
extern struct OMENUITEM CheatMenu[8];

// address: 0x800A7F2C
// size: 0xD8
extern struct OMENUITEM CheatMenu[9];

// address: 0x800A6F0C
// size: 0xD8
extern struct OMENUITEM_dup_4 CheatMenu[9];

// address: 0x800A32BC
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A359C
// size: 0x40
static struct MonstList ChoiceListLEV10[4];

// address: 0x800A3894
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

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

// address: 0x800A7894
// size: 0x40
static struct MonstList ChoiceListLEV15[4];

// address: 0x800A371C
// size: 0x30
static struct MonstList ChoiceListLEV15[3];

// address: 0x800A374C
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x800A32EC
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A66E0
// size: 0x50
static struct MonstList ChoiceListLEV2[5];

// address: 0x800A334C
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A338C
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A3498
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A33FC
// size: 0x60
static struct MonstList ChoiceListLEV5[6];

// address: 0x800A345C
// size: 0x50
static struct MonstList ChoiceListLEV6[5];

// address: 0x800A7758
// size: 0x60
static struct MonstList ChoiceListLEV6[6];

// address: 0x800A34AC
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A34FC
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A355C
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x80116534
static bool ChunkGot;

// address: 0x800A6CF0
// size: 0x80
extern short Circle[64];

// address: 0x80116CDC
extern char *ContText;

// address: 0x80116F34
extern unsigned long CowPlaying;

// address: 0x80117AAC
static int CpuStart;

// address: 0x80117AB0
static int CpuTime;

// address: 0x800AF978
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x800A864C
// size: 0x30
extern int CreateEnv[12];

// address: 0x80116C64
extern int CreditSubTitleNo;

// address: 0x80116C60
extern int CreditTitleNo;

// address: 0x80116DB0
static int CsNo;

// address: 0x80118230
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x80116938
extern int CtrlBorder;

// address: 0x80117AE8
// size: 0x8
static struct RECT CtrlRect;

// address: 0x80121E68
// size: 0x74
static struct CScreen_dup_1 CtrlScreen;

// address: 0x801181B0
// size: 0x78
static struct CScreen CtrlScreen;

// address: 0x80113B84
static int CurMons;

// address: 0x8012D008
// size: 0xE0
extern struct CBlocks_dup_14 *CurrentBlocks;

// address: 0x80120274
// size: 0xDC
extern struct CBlocks_dup_1 *CurrentBlocks;

// address: 0x801166A0
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x801136B0
// size: 0xE0
extern struct CBlocks_dup_4 *CurrentBlocks;

// address: 0x80117ADC
static int CurrentMonsterList;

// address: 0x801166BC
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x80117CDC
static unsigned long (*CurrentProc)();

// address: 0x80117DAC
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x80129A28
static int CutScreen;

// address: 0x80116AB0
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x80116AAC
static char *CutString;

// address: 0x800A5A58
// size: 0x70
extern int Cxy[28];

// address: 0x80117B94
static unsigned short *DCTTab;

// address: 0x8012D754
static bool DOSLEEP;

// address: 0x800A3BA8
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x800AA02C
// size: 0x870
extern struct TextDat_dup_14 DatPool[20];

// address: 0x801164BE
extern short DavesPad;

// address: 0x801164C0
extern short DavesPadDeb;

// address: 0x80115BEC
extern int Day;

// address: 0x800A859C
// size: 0x28
extern int DebugMonsters[10];

// address: 0x8012F0C0
// size: 0x28
static struct TextDat_dup_14 *DecRequestors[10];

// address: 0x80122148
// size: 0x28
static struct TextDat_dup_1 *DecRequestors[10];

// address: 0x80118490
// size: 0x28
static struct TextDat *DecRequestors[10];

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

// address: 0x800A2590
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x801167BC
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x801167B8
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x800CB3B4
// size: 0xC
extern int DexterityTbl[3];

// address: 0x8012CB44
static unsigned char DiabEnd;

// address: 0x80116CE0
extern char *DiabloGameFile;

// address: 0x8012B468
extern char *DiabloOptionFile;

// address: 0x80116600
extern int DialogBackGfx;

// address: 0x80116608
extern int DialogBackH;

// address: 0x80116604
extern int DialogBackW;

// address: 0x80116658
extern int DialogBevelCH;

// address: 0x80116654
extern int DialogBevelCW;

// address: 0x80116650
extern int DialogBevelGfx;

// address: 0x80116660
extern int DialogBevelLRH;

// address: 0x8011665C
extern int DialogBevelLRW;

// address: 0x80116668
extern int DialogBevelUDH;

// address: 0x80116664
extern int DialogBevelUDW;

// address: 0x801165F7
extern unsigned char DialogBlue;

// address: 0x8011663C
extern int DialogBorderBH;

// address: 0x80116624
extern int DialogBorderBLH;

// address: 0x80116620
extern int DialogBorderBLW;

// address: 0x8011662C
extern int DialogBorderBRH;

// address: 0x80116628
extern int DialogBorderBRW;

// address: 0x80116638
extern int DialogBorderBW;

// address: 0x8011660C
extern int DialogBorderGfx;

// address: 0x80116644
extern int DialogBorderLH;

// address: 0x80116640
extern int DialogBorderLW;

// address: 0x8011664C
extern int DialogBorderRH;

// address: 0x80116648
extern int DialogBorderRW;

// address: 0x80116634
extern int DialogBorderTH;

// address: 0x80116614
extern int DialogBorderTLH;

// address: 0x80116610
extern int DialogBorderTLW;

// address: 0x8011661C
extern int DialogBorderTRH;

// address: 0x80116618
extern int DialogBorderTRW;

// address: 0x80116630
extern int DialogBorderTW;

// address: 0x80117A78
static unsigned char DialogGBack;

// address: 0x801165F6
extern unsigned char DialogGreen;

// address: 0x801165F5
extern unsigned char DialogRed;

// address: 0x801165FA
extern unsigned char DialogTBlue;

// address: 0x8012CF5C
// size: 0x6C
extern struct TextDat_dup_14 *DialogTData;

// address: 0x801201D0
// size: 0x68
extern struct TextDat_dup_1 *DialogTData;

// address: 0x801165FC
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x801165F9
extern unsigned char DialogTGreen;

// address: 0x801165F8
extern unsigned char DialogTRed;

// address: 0x80113B90
static int Dir;

// address: 0x80117A3C
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x80116920
extern bool DoDrawBg;

// address: 0x80117AD4
static bool DoHomingScroll;

// address: 0x8011707C
extern bool DoLoadedChar;

// address: 0x8011691C
extern bool DoShowPanel;

// address: 0x80117DD8
static void (*DoTasksEpilogue)();

// address: 0x80117DD4
static void (*DoTasksPrologue)();

// address: 0x80117510
static bool DoUiForChooseMonster;

// address: 0x80117AC4
static int DrawArea;

// address: 0x8012C3D8
static bool DrawBackOn;

// address: 0x80116D59
extern unsigned char DrawLevelUpFlag;

// address: 0x80117AB8
static int DrawStart;

// address: 0x80117AB4
static int DrawTime;

// address: 0x800A6FD0
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x80117530
extern int DungSize;

// address: 0x800A4900
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x800B07A0
// size: 0x20
extern struct StrInfo EndFmv;

// address: 0x80117DC4
static void (*EpiFunc)();

// address: 0x80117DCC
static unsigned long EpiProId;

// address: 0x80117DD0
static unsigned long EpiProMask;

// address: 0x80117EA8
extern void (*ErrorFunc)();

// address: 0x80117DB8
static unsigned long ExecId;

// address: 0x80117DBC
static unsigned long ExecMask;

// address: 0x800CB408
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x80117DE0
static unsigned char ExtraStackProtection;

// address: 0x80117DE4
static int ExtraStackSizeLongs;

// address: 0x80116BE4
extern int FMVEndPad;

// address: 0x80116C28
extern int FMVPress;

// address: 0x80116D4C
// size: 0x98
extern struct cdstreamstruct *FMVStream;

// address: 0x801143F8
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x80116C24
extern int FeAttractMode;

// address: 0x80116BF4
extern int FeBackH;

// address: 0x8012089C
extern int FeBackScreen;

// address: 0x80116BF0
extern int FeBackW;

// address: 0x80116BE8
extern int FeBackX;

// address: 0x80116BEC
extern int FeBackY;

// address: 0x800A70B0
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800BDB3C
// size: 0x60
extern struct FeMenuTable_dup_10 FeBackgroundMenuTable[4];

// address: 0x800AB104
// size: 0x60
extern struct FeMenuTable_dup_7 FeBackgroundMenuTable[4];

// address: 0x800BFD00
// size: 0x60
extern struct FeMenuTable_dup_14 FeBackgroundMenuTable[4];

// address: 0x800BDE48
// size: 0x60
extern struct FeMenuTable_dup_11 FeBackgroundMenuTable[4];

// address: 0x800A7620
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800A70CC
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800BFD60
// size: 0x78
extern struct FeMenuTable_dup_14 FeBook1MenuTable[5];

// address: 0x800BDB9C
// size: 0x78
extern struct FeMenuTable_dup_10 FeBook1MenuTable[5];

// address: 0x800BDEA8
// size: 0x78
extern struct FeMenuTable_dup_11 FeBook1MenuTable[5];

// address: 0x800AB164
// size: 0x78
extern struct FeMenuTable_dup_7 FeBook1MenuTable[5];

// address: 0x800A7680
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800A70E8
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800BDF20
// size: 0x78
extern struct FeMenuTable_dup_11 FeBook2MenuTable[5];

// address: 0x800A76F8
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x800BDC14
// size: 0x78
extern struct FeMenuTable_dup_10 FeBook2MenuTable[5];

// address: 0x800BFDD8
// size: 0x78
extern struct FeMenuTable_dup_14 FeBook2MenuTable[5];

// address: 0x800AB1DC
// size: 0x78
extern struct FeMenuTable_dup_7 FeBook2MenuTable[5];

// address: 0x800AB254
// size: 0x780
extern struct FeStruct FeBuffer[80];

// address: 0x800B09E8
// size: 0x3C0
extern struct FeStruct_dup_1 FeBuffer[40];

// address: 0x800BFE50
// size: 0x780
extern struct FeStruct_dup_14 FeBuffer[80];

// address: 0x800A7770
// size: 0x3C0
extern struct FeStruct FeBuffer[40];

// address: 0x800BDC8C
// size: 0x780
extern struct FeStruct_dup_10 FeBuffer[80];

// address: 0x800BDF98
// size: 0x780
extern struct FeStruct_dup_11 FeBuffer[80];

// address: 0x80116BFC
extern int FeBufferCount;

// address: 0x80116C08
// size: 0x8
extern int FeChrClass[2];

// address: 0x80116C18
extern unsigned long FeCount;

// address: 0x80116C10
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x800A7094
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800BDADC
// size: 0x60
extern struct FeMenuTable_dup_10 FeDifficultyMenuTable[4];

// address: 0x800BDDE8
// size: 0x60
extern struct FeMenuTable_dup_11 FeDifficultyMenuTable[4];

// address: 0x800AB0A4
// size: 0x60
extern struct FeMenuTable_dup_7 FeDifficultyMenuTable[4];

// address: 0x800A75C0
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800BFCA0
// size: 0x60
extern struct FeMenuTable_dup_14 FeDifficultyMenuTable[4];

// address: 0x80116BF8
extern unsigned char FeFlag;

// address: 0x80116BC8
extern unsigned char FeIsAVirgin;

// address: 0x800A7120
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800A713C
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x800A7104
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800A6FEC
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800AA87C
// size: 0x78
extern struct FeMenuTable_dup_7 FeMainMenuTable[5];

// address: 0x800BD5C0
// size: 0x78
extern struct FeMenuTable_dup_11 FeMainMenuTable[5];

// address: 0x800A7158
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800BFAD8
// size: 0x78
extern struct FeMenuTable_dup_14 FeMainMenuTable[5];

// address: 0x800BD2B4
// size: 0x78
extern struct FeMenuTable_dup_10 FeMainMenuTable[5];

// address: 0x800BFC58
// size: 0x48
extern struct FeMenuTable_dup_14 FeMemcardMenuTable[3];

// address: 0x800AB05C
// size: 0x48
extern struct FeMenuTable_dup_7 FeMemcardMenuTable[3];

// address: 0x800BDDA0
// size: 0x48
extern struct FeMenuTable_dup_11 FeMemcardMenuTable[3];

// address: 0x800BDA94
// size: 0x48
extern struct FeMenuTable_dup_10 FeMemcardMenuTable[3];

// address: 0x800A7578
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x80116BCC
extern int FeMenuDelay;

// address: 0x800AA9B4
// size: 0x6A8
extern struct FeMenuTable_dup_7 FeNameEngMenuTable[71];

// address: 0x800AB130
// size: 0x6A8
extern struct FeMenuTable FeNameEngMenuTable[71];

// address: 0x800BF0E4
// size: 0x46
extern unsigned char FeNameEngMenuTable[70];

// address: 0x800BD3EC
// size: 0x6A8
extern struct FeMenuTable_dup_10 FeNameEngMenuTable[71];

// address: 0x800A7290
// size: 0x2E8
extern struct FeMenuTable FeNameEngMenuTable[31];

// address: 0x800BD6F8
// size: 0x6A8
extern struct FeMenuTable_dup_11 FeNameEngMenuTable[71];

// address: 0x800A7008
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800AA8F4
// size: 0x48
extern struct FeMenuTable_dup_7 FeNewGameMenuTable[3];

// address: 0x800BFB50
// size: 0x48
extern struct FeMenuTable_dup_14 FeNewGameMenuTable[3];

// address: 0x800BD32C
// size: 0x48
extern struct FeMenuTable_dup_10 FeNewGameMenuTable[3];

// address: 0x800A71D0
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800BD638
// size: 0x48
extern struct FeMenuTable_dup_11 FeNewGameMenuTable[3];

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

// address: 0x80116C00
extern int FeNoOfPlayers;

// address: 0x800A7218
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800BD680
// size: 0x78
extern struct FeMenuTable_dup_11 FePlayerClassMenuTable[5];

// address: 0x800AA93C
// size: 0x78
extern struct FeMenuTable_dup_7 FePlayerClassMenuTable[5];

// address: 0x800BFB98
// size: 0x78
extern struct FeMenuTable_dup_14 FePlayerClassMenuTable[5];

// address: 0x800BD374
// size: 0x78
extern struct FeMenuTable_dup_10 FePlayerClassMenuTable[5];

// address: 0x800A7B30
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x80116C14
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x80116C04
extern int FePlayerNo;

// address: 0x80116BC0
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x8012D54C
// size: 0x6C
extern struct TextDat_dup_14 *FeTData;

// address: 0x8012078C
// size: 0x68
extern struct TextDat_dup_1 *FeTData;

// address: 0x80116558
extern unsigned char FileLoaded;

// address: 0x801164A4
extern int FileSYS;

// address: 0x80117A58
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x80120790
// size: 0x68
extern struct TextDat_dup_1 *FlameTData;

// address: 0x8012D550
// size: 0x6C
extern struct TextDat_dup_14 *FlameTData;

// address: 0x80116BC4
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x80118078
// size: 0x10
static struct Overlay FmvOver;

// address: 0x800A72CC
// size: 0x1C
static char *FmvTab[7];

// address: 0x800A6EF0
// size: 0xE0
extern struct StrInfo FmvTab[7];

// address: 0x800BEDE4
// size: 0x40
extern struct FMVDAT FmvTab[8];

// address: 0x800BD254
// size: 0x30
extern struct FMVDAT FmvTab[6];

// address: 0x800A82EC
// size: 0x10
static char *FmvTab[4];

// address: 0x80113B88
static int Frame;

// address: 0x80117D80
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x80116EE1
extern unsigned char FriendlyMode;

// address: 0x80121D10
// size: 0xC
static struct Overlay_dup_1 FrontEndOver;

// address: 0x80118048
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x80117D8C
static unsigned char FullErrorChecking;

// address: 0x801165D8
extern unsigned char GOLDB;

// address: 0x801165D7
extern unsigned char GOLDG;

// address: 0x801165D6
extern unsigned char GOLDR;

// address: 0x8012CFF0
// size: 0x94
static struct GamePad GPad1;

// address: 0x80130658
// size: 0x94
static struct GamePad_dup_14 GPad1;

// address: 0x8012D090
// size: 0x94
static struct GamePad GPad2;

// address: 0x801306F8
// size: 0x94
static struct GamePad_dup_14 GPad2;

// address: 0x80116488
extern unsigned int GSYS_MemEnd;

// address: 0x80116484
extern unsigned int GSYS_MemStart;

// address: 0x801165ED
static char GShadePX;

// address: 0x801165EE
static char GShadePY;

// address: 0x800A5A18
// size: 0x40
static char GShadeTab[64];

// address: 0x80117A79
static char GShadeX;

// address: 0x80117A7A
static char GShadeY;

// address: 0x801166E0
extern int GXAdj2;

// address: 0x800A25D0
// size: 0x28
extern char *GalErrors[10];

// address: 0x80116AB4
static bool GameLoading;

// address: 0x800A6954
// size: 0xD8
extern struct OMENUITEM_dup_4 GameMenu[9];

// address: 0x800A65C4
// size: 0xC0
extern struct OMENUITEM GameMenu[8];

// address: 0x800A6E70
// size: 0xD8
extern struct OMENUITEM GameMenu[9];

// address: 0x800BC70C
// size: 0xF0
extern struct OMENUITEM GameMenu[10];

// address: 0x800BEC2C
// size: 0x108
extern struct OMENUITEM GameMenu[11];

// address: 0x80118068
// size: 0x10
static struct Overlay GameOver;

// address: 0x80121D30
// size: 0xC
static struct Overlay_dup_1 GameOver;

// address: 0x80117A20
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x80116490
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x80117E50
extern unsigned long GazTick;

// address: 0x80117AD0
static bool GlueFinished;

// address: 0x80117CE4
static unsigned char HR1;

// address: 0x80117CE5
static unsigned char HR2;

// address: 0x80117CE6
static unsigned char HR3;

// address: 0x8010C688
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x8012F178
// size: 0x10
static struct Dialog HelpBack;

// address: 0x800BF848
// size: 0x108
static struct HelpStruct HelpList[33];

// address: 0x8012E7BC
// size: 0x8
static struct RECT HelpRect;

// address: 0x8012E7C4
static unsigned char HelpTop;

// address: 0x800D5FE8
// size: 0x300
extern unsigned char IconBuffer[768];

// address: 0x8012E6D8
static char InActivePad;

// address: 0x80116C5C
extern int InCredits;

// address: 0x80117146
extern unsigned char InStoreFlag;

// address: 0x80116E30
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x800A6FE4
// size: 0x30
extern struct OMENUITEM_dup_4 InfoMenu[2];

// address: 0x800A6C24
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x80117A94
static int InfraFlag;

// address: 0x80117060
extern unsigned char InitObjFlag;

// address: 0x80109D5C
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x8010CCE4
// size: 0x40
static struct InitPos InitialPositions[16];

// address: 0x800B07C0
// size: 0x20
extern struct StrInfo IntroFmv;

// address: 0x80117770
extern int InvBackAY;

// address: 0x80117768
extern int InvBackY;

// address: 0x8011776C
extern int InvCursPos;

// address: 0x80121428
// size: 0x68
extern struct TextDat_dup_1 *InvGfxTData;

// address: 0x80117758
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x8012E394
// size: 0x6C
extern struct TextDat_dup_14 *InvGfxTData;

// address: 0x80109124
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x80109478
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x801093C4
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x80119548
static bool InvOn;

// address: 0x801148D8
extern int InvPageNo;

// address: 0x80117754
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x8012E390
// size: 0x6C
extern struct TextDat_dup_14 *InvPanelTData;

// address: 0x80121424
// size: 0x68
extern struct TextDat_dup_1 *InvPanelTData;

// address: 0x80108ED4
// size: 0x250
extern struct InvXY InvRect[74];

// address: 0x80106000
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x80117774
extern int InvSel;

// address: 0x801095C0
// size: 0x4A
extern unsigned char InvSlotTable[74];

// address: 0x80106650
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x80117784
extern unsigned char InvSpareFlag;

// address: 0x80117760
extern int InvSpareSel;

// address: 0x8010952C
// size: 0x94
extern struct ItemStruct InvSpareSlot;

// address: 0x801127C0
// size: 0x46
static short Item2Frm[35];

// address: 0x800AACB0
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x80116F98
extern int *ItemAnimSnds;

// address: 0x800AAC04
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x8011777C
extern int ItemH;

// address: 0x800AACD4
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x80117780
extern int ItemNo;

// address: 0x800AF8F8
// size: 0x80
extern char ItemStr[128];

// address: 0x800AFC10
// size: 0x40
extern char ItemStr[64];

// address: 0x80117094
static int ItemStructSize;

// address: 0x80117778
extern int ItemW;

// address: 0x800A64E4
// size: 0x20
static int JumpArray[8];

// address: 0x80129F24
extern bool JustQuitQText;

// address: 0x8012C8C8
static unsigned char KeyPos;

// address: 0x800BEC50
// size: 0x14
static unsigned short KeyTab[10];

// address: 0x800D4920
// size: 0x28
extern int L1DownList[10];

// address: 0x800D48F0
// size: 0x30
extern int L1UpList[12];

// address: 0x800D4954
// size: 0x14
extern int L2DownList[5];

// address: 0x800D4968
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800D4948
// size: 0xC
extern int L2UpList[3];

// address: 0x80117358
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x801173A0
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x801173A8
// size: 0x6
static unsigned char L3CREV11[6];

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

// address: 0x800D49B0
// size: 0x24
extern int L3DownList[9];

// address: 0x80117348
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x80117350
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x800D49D4
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800D4974
// size: 0x3C
extern int L3UpList[15];

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

// address: 0x800D4A1C
// size: 0x18
extern int L4DownList[6];

// address: 0x800D4A44
// size: 0x84
extern int L4PentaList[33];

// address: 0x800D4A34
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800D4A0C
// size: 0x10
extern int L4UpList[4];

// address: 0x80118538
// size: 0x10
static struct Dialog LBack;

// address: 0x80116550
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x800A99F0
// size: 0x10
extern struct FontTab_dup_11 LFont;

// address: 0x800A96E4
// size: 0x10
extern struct FontTab_dup_10 LFont;

// address: 0x800A995C
// size: 0x10
extern struct FontTab_dup_15 LFont;

// address: 0x800A58C8
// size: 0x10
extern struct FontTab LFont;

// address: 0x800AF260
// size: 0x10
extern struct FontTab_dup_1 LFont;

// address: 0x800ABB24
// size: 0x10
extern struct FontTab_dup_14 LFont;

// address: 0x800A98A8
// size: 0xB4
extern struct FontItem_dup_15 LFontTab[90];

// address: 0x800A5814
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x80117208
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x800A67BC
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800A6B64
// size: 0xA8
extern struct OMENUITEM_dup_4 LangMenu[7];

// address: 0x801171FC
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x800A9414
// size: 0x21C
extern struct CFont_dup_10 LargeFont;

// address: 0x800A55FC
// size: 0x218
extern struct CFont LargeFont;

// address: 0x800A9720
// size: 0x21C
extern struct CFont LargeFont;

// address: 0x800AB854
// size: 0x21C
extern struct CFont_dup_14 LargeFont;

// address: 0x800AEF94
// size: 0x218
extern struct CFont_dup_1 LargeFont;

// address: 0x80117D90
static unsigned long LastAttemptedAlloc;

// address: 0x80117A39
static unsigned char LastBuffer;

// address: 0x80117ABC
static int LastCpuTime;

// address: 0x80117D94
static unsigned long LastDeallocedBlock;

// address: 0x80117AC0
static int LastDrawTime;

// address: 0x80117D84
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x80116494
extern int LastFmem;

// address: 0x80117E64
extern void *LastPtr;

// address: 0x80117DA0
static unsigned long LastTypeAlloced;

// address: 0x800B07E0
// size: 0x20
extern struct StrInfo LazFmv;

// address: 0x800A5ADC
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x8010C848
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x8010E460
// size: 0x2A
static unsigned short Level2CutScreen[21];

// address: 0x8011F9C8
// size: 0x16
static unsigned short Level2CutScreen[11];

// address: 0x8010CF8C
// size: 0x28
static unsigned short Level2CutScreen[20];

// address: 0x80114178
extern bool LevelOut;

// address: 0x800B0724
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x80116BD0
extern char *LoadErrorText;

// address: 0x80116D10
extern int LoadType;

// address: 0x80113BDC
// size: 0x8
extern bool LoadedChar[2];

// address: 0x800B0780
// size: 0x20
extern struct StrInfo LogoFmv;

// address: 0x8011648C
extern int LowestFmem;

// address: 0x80117580
extern int LvlViewX;

// address: 0x80117584
extern int LvlViewY;

// address: 0x800A982C
// size: 0x10
extern struct FontTab_dup_10 MFont;

// address: 0x800AF3A0
// size: 0x10
extern struct FontTab_dup_1 MFont;

// address: 0x800A9AA4
// size: 0x10
extern struct FontTab_dup_15 MFont;

// address: 0x800A5A08
// size: 0x10
extern struct FontTab MFont;

// address: 0x800A9B38
// size: 0x10
extern struct FontTab_dup_11 MFont;

// address: 0x800ABC6C
// size: 0x10
extern struct FontTab_dup_14 MFont;

// address: 0x800A996C
// size: 0x136
extern struct FontItem_dup_15 MFontTab[155];

// address: 0x800A5BE8
// size: 0x136
extern struct FontItem MFontTab[155];

// address: 0x800A58D8
// size: 0x12E
extern struct FontItem MFontTab[151];

// address: 0x801008B4
// size: 0x120
extern int MWVel[3][24];

// address: 0x8011666C
extern int MY_DialogOTpos;

// address: 0x800CB3A8
// size: 0xC
extern int MagicTbl[3];

// address: 0x800A651C
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800BEB54
// size: 0xD8
extern struct OMENUITEM MainMenu[9];

// address: 0x800BD5D4
// size: 0xC0
extern struct OMENUITEM MainMenu[8];

// address: 0x800A68AC
// size: 0xA8
extern struct OMENUITEM_dup_4 MainMenu[7];

// address: 0x801176BD
extern unsigned char ManashieldFlag;

// address: 0x801176BE
extern unsigned char ManashieldFlag2;

// address: 0x80117B34
static unsigned long MasterVol;

// address: 0x80113B4C
extern unsigned long MasterVol;

// address: 0x800CB3D8
// size: 0x30
extern int MaxStats[4][3];

// address: 0x80116D18
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x80116D14
extern int McMenuPos;

// address: 0x80117B74
// size: 0x8
static char *McState[2];

// address: 0x80113CE0
// size: 0x8
extern char *McState_addr_80113CE0[2];

// address: 0x80115338
// size: 0x8
extern char *McState_addr_80115338[2];

// address: 0x80116CFC
// size: 0x8
extern char *McState_addr_80116CFC[2];

// address: 0x80116E2C
// size: 0x8
extern char *McState_addr_80116E2C[2];

// address: 0x80117314
// size: 0x8
extern char *McState_addr_80117314[2];

// address: 0x80117638
// size: 0x8
extern char *McState_addr_80117638[2];

// address: 0x801187F0
// size: 0x8
extern char *McState_addr_801187F0[2];

// address: 0x80118FD0
// size: 0x8
extern char *McState_addr_80118FD0[2];

// address: 0x801209BC
// size: 0x8
extern char *McState_addr_801209BC[2];

// address: 0x8012A024
// size: 0x8
extern char *McState_addr_8012A024[2];

// address: 0x8012B284
// size: 0x8
extern char *McState_addr_8012B284[2];

// address: 0x8012B488
// size: 0x8
extern char *McState_addr_8012B488[2];

// address: 0x8012B590
// size: 0x8
extern char *McState_addr_8012B590[2];

// address: 0x8012C4C8
// size: 0x8
extern char *McState_addr_8012C4C8[2];

// address: 0x8012CAAC
// size: 0x8
extern char *McState_addr_8012CAAC[2];

// address: 0x8012D660
// size: 0x8
extern char *McState_addr_8012D660[2];

// address: 0x800AED7C
// size: 0x218
extern struct CFont_dup_1 MediumFont;

// address: 0x800A91F8
// size: 0x21C
extern struct CFont_dup_10 MediumFont;

// address: 0x800A9504
// size: 0x21C
extern struct CFont MediumFont;

// address: 0x800AB638
// size: 0x21C
extern struct CFont_dup_14 MediumFont;

// address: 0x800A53E4
// size: 0x218
extern struct CFont MediumFont;

// address: 0x800A4A2C
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x80116AB8
extern bool MemCardActive;

// address: 0x80119130
// size: 0x1180
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x8011C138
// size: 0xA00
static struct MEM_HDR MemHdrBlocks[80];

// address: 0x80117D7C
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x80117DB4
static unsigned long MemTypeForTasker;

// address: 0x800A6954
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800A6CFC
// size: 0x60
extern struct OMENUITEM_dup_4 MemcardCharacterMenu[4];

// address: 0x800A6B04
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800A6EAC
// size: 0x60
extern struct OMENUITEM_dup_4 MemcardFormatMenu[4];

// address: 0x800A68C4
// size: 0x90
extern struct OMENUITEM MemcardGameMenu[6];

// address: 0x800A6C6C
// size: 0x90
extern struct OMENUITEM_dup_4 MemcardGameMenu[6];

// address: 0x800BCAE4
// size: 0x60
extern struct OMENUITEM MemcardLoadGameMenu[4];

// address: 0x800BCC04
// size: 0x60
extern struct OMENUITEM MemcardLoadOptionsMenu[4];

// address: 0x800BCA3C
// size: 0xA8
extern struct OMENUITEM MemcardMenu[7];

// address: 0x800A6864
// size: 0x60
extern struct OMENUITEM MemcardMenu[4];

// address: 0x800A6C0C
// size: 0x60
extern struct OMENUITEM_dup_4 MemcardMenu[4];

// address: 0x80116B10
static bool MemcardOverlay;

// address: 0x800BCB44
// size: 0x60
extern struct OMENUITEM MemcardSaveGameMenu[4];

// address: 0x800BCBA4
// size: 0x60
extern struct OMENUITEM MemcardSaveOptionsMenu[4];

// address: 0x800A69B4
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800A6D5C
// size: 0xA8
extern struct OMENUITEM_dup_4 MemcardSelectCard1[7];

// address: 0x800A6A5C
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800A6E04
// size: 0xA8
extern struct OMENUITEM_dup_4 MemcardSelectCard2[7];

// address: 0x80116AEC
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x800BD3F0
// size: 0xA0
extern struct OMENULIST MenuList[20];

// address: 0x800A6C54
// size: 0x9C
extern struct OMENULIST MenuList[13];

// address: 0x800A9A8C
// size: 0x70
extern struct OMENULIST MenuList[14];

// address: 0x800BCFC4
// size: 0x90
extern struct OMENULIST MenuList[18];

// address: 0x800BDFAC
// size: 0x98
extern struct OMENULIST MenuList[19];

// address: 0x800A807C
// size: 0x70
extern struct OMENULIST_dup_5 MenuList[14];

// address: 0x800B04FC
// size: 0x84
extern struct OMENULIST MenuList[11];

// address: 0x800A705C
// size: 0x70
extern struct OMENULIST_dup_4 MenuList[14];

// address: 0x800D4D78
// size: 0x88
static char *MgToText[34];

// address: 0x80117598
extern int MicroTileLen;

// address: 0x800FD9D8
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x8012DCDC
// size: 0x6C
extern struct TextDat_dup_14 *MissDat;

// address: 0x80117238
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x80120EF0
// size: 0x68
extern struct TextDat_dup_1 *MissDat;

// address: 0x800B10BC
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x801176BC
extern unsigned char MissilePreFlag;

// address: 0x800D4B68
// size: 0x10
extern char MlTab[16];

// address: 0x8010848C
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x8010840C
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x800A7014
// size: 0x48
extern struct OMENUITEM_dup_4 MonstViewMenu[3];

// address: 0x800A8034
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x801064F4
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x80116EFC
extern int MouseX;

// address: 0x80116F00
extern int MouseY;

// address: 0x80117E5C
extern void (*MsgFunc)();

// address: 0x800AAA64
// size: 0xB0
extern int MsgStrings[44];

// address: 0x80117B38
static unsigned long MusicVol;

// address: 0x80113B50
extern unsigned long MusicVol;

// address: 0x80117FB0
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A48B8
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A4884
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800D2ED0
// size: 0x78
extern char MyVerString[120];

// address: 0x80117264
extern int MyXoff1;

// address: 0x8011726C
extern int MyXoff2;

// address: 0x80117268
extern int MyYoff1;

// address: 0x80117270
extern int MyYoff2;

// address: 0x800A2620
// size: 0x7
static char NULL_REP[7];

// address: 0x80117B64
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x80116728
extern char NoActiveStreams;

// address: 0x80116DC0
extern int NoCSEntries;

// address: 0x80116768
static int NoSNDRemaps;

// address: 0x80117ACC
static unsigned short NoSfx;

// address: 0x80116588
extern int NoTAllocs;

// address: 0x80117D9C
static int NumOfFreeHdrs;

// address: 0x80116458
extern int NumOfMonsterListLevels;

// address: 0x80117228
extern int NumOfStrings;

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

// address: 0x8011323C
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

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

// address: 0x80116274
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x80116278
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x80116270
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x8011627C
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x80116280
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x80116288
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x8011628C
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x80116290
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x80116284
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x80116294
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x80116298
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8011629C
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8012A83C
// size: 0x2
static unsigned char NumsLEV15M15QA[2];

// address: 0x8011329C
// size: 0x2
static unsigned char NumsLEV16M16D[2];

// address: 0x801162A0
// size: 0x1
static unsigned char NumsLEV16M16D[1];

// address: 0x801185A8
// size: 0x3
static unsigned char NumsLEV16M16D[3];

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

// address: 0x801161A4
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x801161A8
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x801161A0
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x8012CAD8
// size: 0x4
static unsigned char NumsLEV3M3QA[4];

// address: 0x801161AC
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x801161B4
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x801161BC
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x801161C4
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x801161B0
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x801161B8
// size: 0x4
static unsigned char NumsLEV4M4QB[4];

// address: 0x801131A4
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x801161C0
// size: 0x4
static unsigned char NumsLEV4M4QC[4];

// address: 0x801131B0
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

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

// address: 0x8011632C
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

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

// address: 0x8012A994
// size: 0x3
static unsigned char NumsLEV6M6QA[3];

// address: 0x801161F8
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x801161FC
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x8012BFB4
// size: 0x4
static unsigned char NumsLEV7M7C[4];

// address: 0x80116200
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x8012BFB8
// size: 0x3
static unsigned char NumsLEV7M7D[3];

// address: 0x80116204
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x80116208
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x8012BFBC
// size: 0x3
static unsigned char NumsLEV7M7E[3];

// address: 0x80116210
// size: 0x3
static unsigned char NumsLEV8M8A[3];

// address: 0x8012B9E4
// size: 0x2
static unsigned char NumsLEV8M8A[2];

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

// address: 0x8011620C
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

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

// address: 0x80117B6C
// size: 0x8
static struct RECT ORect;

// address: 0x80116CC0
extern char *OText2;

// address: 0x80116CC4
extern char *OText3;

// address: 0x80116CC8
extern char *OText4;

// address: 0x80116CCC
extern char *OText5;

// address: 0x80116CD0
extern char *OText7;

// address: 0x80116CD4
extern char *OText8;

// address: 0x80117A98
static int OWorldX;

// address: 0x80117A9C
static int OWorldY;

// address: 0x800CB2C0
// size: 0x28
extern char ObjFileList[40];

// address: 0x80112E88
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800D4B88
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x800C9248
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x8011675C
static long OffsetHandle;

// address: 0x80117B60
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8012C2DC
extern int OptionsSeed;

// address: 0x8012C2E0
extern bool OptionsSetSeed;

// address: 0x80117B5C
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x80117A5C
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x80116698
static unsigned short P12ItemSelCol;

// address: 0x8011668A
extern unsigned char P12ItemSelCount;

// address: 0x8011669E
static unsigned short P12MonstSelCol;

// address: 0x8011668D
extern unsigned char P12MonstSelCount;

// address: 0x80116692
static unsigned short P12ObjSelCol;

// address: 0x80116687
extern unsigned char P12ObjSelCount;

// address: 0x80116694
static unsigned short P1ItemSelCol;

// address: 0x80116688
extern unsigned char P1ItemSelCount;

// address: 0x8011669A
static unsigned short P1MonstSelCol;

// address: 0x8011668B
extern unsigned char P1MonstSelCount;

// address: 0x8011668E
static unsigned short P1ObjSelCol;

// address: 0x80116685
extern unsigned char P1ObjSelCount;

// address: 0x80116696
static unsigned short P2ItemSelCol;

// address: 0x80116689
extern unsigned char P2ItemSelCount;

// address: 0x8011669C
static unsigned short P2MonstSelCol;

// address: 0x8011668C
extern unsigned char P2MonstSelCount;

// address: 0x80116690
static unsigned short P2ObjSelCol;

// address: 0x80116686
extern unsigned char P2ObjSelCount;

// address: 0x80117CD8
static unsigned char *P3Tiles;

// address: 0x80117FD8
// size: 0x10
static struct Dialog PBack;

// address: 0x8010ED5C
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x8010FA7C
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x80117A70
// size: 0x8
static struct RECT PRect;

// address: 0x800A4ECC
// size: 0x6C
extern struct CPad_dup_4 Pad0;

// address: 0x800A4BBC
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800A4F38
// size: 0x6C
extern struct CPad_dup_4 Pad1;

// address: 0x800A4C28
// size: 0x6C
extern struct CPad Pad1;

// address: 0x8012D458
extern bool PadFrig;

// address: 0x800A7C24
// size: 0x20
extern char *PanBtnHotKey[8];

// address: 0x800A7B84
// size: 0xA0
extern int PanBtnPos[5][8];

// address: 0x800A7C44
// size: 0x20
extern unsigned long PanBtnStr[8];

// address: 0x80118240
// size: 0x240
static struct Particle PartArray[16];

// address: 0x80116F20
extern int Passedlvldir;

// address: 0x80116EE0
extern unsigned char PauseMode;

// address: 0x80117A6C
static bool Paused;

// address: 0x80117A34
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x800A25F8
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80116679
extern unsigned char PlayDemoFlag;

// address: 0x800BD9FC
// size: 0x3CC
extern struct PInf PlayerInfo[81];

// address: 0x800BCEB0
// size: 0x3CC
extern struct PInf_dup_12 PlayerInfo[81];

// address: 0x800A5FD4
// size: 0x288
extern struct PInf PlayerInfo[81];

// address: 0x800CB378
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x80117090
static int PlrStructSize;

// address: 0x80117E78
extern void (*PollFunc)();

// address: 0x80118058
// size: 0x10
static struct Overlay PregameOver;

// address: 0x80121D20
// size: 0xC
static struct Overlay_dup_1 PregameOver;

// address: 0x80116B24
extern char *PrevTxt;

// address: 0x8012B2A4
static char *PrevTxt;

// address: 0x80117A28
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x80117DC8
static void (*ProFunc)();

// address: 0x801166E8
extern bool ProfOn;

// address: 0x800A3B4C
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x800A3B24
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800B0A4C
// size: 0x10
extern struct Dialog QBack;

// address: 0x80118DE8
// size: 0x10
static struct Dialog QSBack;

// address: 0x80117C94
// size: 0x8
static struct RECT QSRect;

// address: 0x801170E0
static int QS_PH;

// address: 0x801170DC
static int QS_PW;

// address: 0x801170D4
static int QS_PX;

// address: 0x801170D8
static int QS_PY;

// address: 0x80116BBC
// size: 0x2
extern char QSpell[2];

// address: 0x80116A6C
// size: 0x8
extern int QSpell[2];

// address: 0x8012B2B0
extern unsigned char Qfromoptions;

// address: 0x800D4B78
// size: 0x10
extern char QlTab[16];

// address: 0x800A8A58
// size: 0x2C0
extern int Qtalklist[16][11];

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

// address: 0x800BC9DC
// size: 0x60
extern struct OMENUITEM QuitMenu[4];

// address: 0x80116520
// size: 0x8
extern struct RECT R;

// address: 0x801165D5
extern unsigned char REDB;

// address: 0x801165D4
extern unsigned char REDG;

// address: 0x801165D3
extern unsigned char REDR;

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

// address: 0x800B06EC
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x80117A80
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800A4C94
// size: 0x22
extern char RawPadData0[34];

// address: 0x800A4FA4
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800A4FC8
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800A4CB8
// size: 0x22
extern char RawPadData1[34];

// address: 0x801170F0
extern int ReturnLvl;

// address: 0x801170F4
extern int ReturnLvlT;

// address: 0x801170E8
extern int ReturnLvlX;

// address: 0x801170EC
extern int ReturnLvlY;

// address: 0x80116B9C
extern int ReturnMenu;

// address: 0x8011E1A0
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x801172E0
extern int Room_Max;

// address: 0x801172E4
extern int Room_Min;

// address: 0x800D047C
// size: 0x10
extern struct Dialog SBack;

// address: 0x8011676D
extern char SFXNotInBank;

// address: 0x8011676C
extern char SFXNotPlayed;

// address: 0x80122184
// size: 0x74
static unsigned short SFXRemapTab[58];

// address: 0x8010CC00
// size: 0xB0
static int SFXRemapTab[44];

// address: 0x80109CB8
// size: 0x70
static unsigned short SFXRemapTab[56];

// address: 0x80122CD0
// size: 0x78
static unsigned short SFXRemapTab[60];

// address: 0x800A5D08
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x80116554
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x80117CBE
static char SItemListFlag;

// address: 0x801173E8
extern int SP4x1;

// address: 0x801173F0
extern int SP4x2;

// address: 0x801173EC
extern int SP4y1;

// address: 0x801173F4
extern int SP4y2;

// address: 0x80116DC4
static int SPALOFF;

// address: 0x80116D5C
static int SPLICONNO;

// address: 0x80117BA0
static int SPLICONRIGHT;

// address: 0x80116D60
static int SPLICONY;

// address: 0x80116764
static unsigned char SPU_Done;

// address: 0x80117138
extern int *SStringY;

// address: 0x800D04DC
// size: 0x50
extern int SStringYBuy[20];

// address: 0x800D1CD4
// size: 0x50
extern int SStringYBuy0[20];

// address: 0x800D1D24
// size: 0x50
extern int SStringYBuy1[20];

// address: 0x800D048C
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800A48F0
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A48E0
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x8011672C
static bool STRInit;

// address: 0x800BBDF4
// size: 0x80
extern struct SFXHDR STRSave;

// address: 0x80116724
extern unsigned long *STR_Buffer;

// address: 0x800A9DB4
// size: 0x12000
extern unsigned long STR_Buffer[18432];

// address: 0x80116CD8
extern char *SaveError;

// address: 0x8012D5BC
static bool SavePause;

// address: 0x8012B2CC
extern char *Savefilename;

// address: 0x8011CB38
// size: 0x30
static int SchEnv[12];

// address: 0x801184B8
// size: 0x78
static struct CScreen Scr;

// address: 0x8012F0E8
// size: 0x78
static struct CScreen_dup_14 Scr;

// address: 0x80122170
// size: 0x74
static struct CScreen_dup_1 Scr;

// address: 0x80117A2E
static unsigned char ScrNum;

// address: 0x8011647C
// size: 0x8
static struct RECT ScrRect;

// address: 0x80117A30
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x80116FA0
extern int ScrollFlag;

// address: 0x800D94B8
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x80116FBC
extern int ScrollType;

// address: 0x80116D44
static bool SecGot;

// address: 0x8012D630
// size: 0x8
static unsigned char Seed[8];

// address: 0x80116F68
extern int SeedCount;

// address: 0x800BDF64
// size: 0x48
extern struct OMENUITEM SeedMenu[3];

// address: 0x8012C2E8
static int SeedPos;

// address: 0x8012B2A8
static char *SelTxt;

// address: 0x80118480
// size: 0x10
static struct Dialog SelectBack;

// address: 0x80117B24
// size: 0x8
static struct RECT SelectRect;

// address: 0x8011E5E4
// size: 0x18
static int SetLevelName[6];

// address: 0x801169F8
extern int SetParticle;

// address: 0x801265E0
// size: 0x40
extern short SinTab[32];

// address: 0x8010C5FC
// size: 0x40
static short SinTab[32];

// address: 0x800D4D40
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8011741C
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800D4D54
// size: 0x24
static unsigned char SkelChamTrans3[36];

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

// address: 0x80117B48
// size: 0x6C
static struct TextDat *Slider;

// address: 0x80121808
// size: 0x68
static struct TextDat_dup_1 *Slider;

// address: 0x8012E774
// size: 0x6C
static struct TextDat_dup_14 *Slider;

// address: 0x800A6A2C
// size: 0x90
extern struct OMENUITEM_dup_4 SoundMenu[6];

// address: 0x800A6684
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x80117B3C
static unsigned long SoundVol;

// address: 0x80113B54
extern unsigned long SoundVol;

// address: 0x80116B00
static int Spacing;

// address: 0x80113B5C
extern unsigned long SpeechVol;

// address: 0x80117B44
static unsigned long SpeechVol;

// address: 0x800A5C40
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x80116D88
extern char SpellCol;

// address: 0x800A7B48
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800AA368
// size: 0x90
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x800A9BEC
// size: 0x90
extern struct SPELLFX_DAT_dup_7 SpellFXDat[2];

// address: 0x800A77E4
// size: 0xA0
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x800A7B5C
// size: 0x25
extern char SpellITbl[37];

// address: 0x800A7C64
// size: 0x64
extern int SpellPages[5][5];

// address: 0x800BD59C
// size: 0x38
extern struct Spell_Target_dup_12 SplTarget[2];

// address: 0x800A6864
// size: 0x48
extern struct Spell_Target_dup_4 SplTarget[2];

// address: 0x800BE130
// size: 0x30
extern struct Spell_Target_dup_13 SplTarget[2];

// address: 0x800BEAA4
// size: 0x30
extern struct Spell_Target SplTarget[2];

// address: 0x800A7884
// size: 0x48
extern struct Spell_Target SplTarget[2];

// address: 0x800A65B4
// size: 0x38
extern struct Spell_Target SplTarget[2];

// address: 0x80117DDC
static void (*StackFloodCallback)();

// address: 0x801066B4
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x80117CCC
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x800C9BC8
// size: 0x24
extern int StoryBookName[9];

// address: 0x800D4E00
// size: 0x24
extern int StoryText[3][3];

// address: 0x800CB39C
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800FDD84
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x800AFC50
// size: 0x40
extern char SufStr[64];

// address: 0x80117DB0
// size: 0x5C
static struct TASK *T;

// address: 0x80117190
extern int TWarpFrom;

// address: 0x80117DC0
static int TasksActive;

// address: 0x80116F24
extern unsigned char *TempStack;

// address: 0x80116CA4
extern char *Text1;

// address: 0x80116CA8
extern char *Text3;

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

// address: 0x80117204
extern char **TextPtr;

// address: 0x800A70E0
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x800A5E48
// size: 0x18C
extern struct PalCollection ThePals;

// address: 0x800A6160
// size: 0x1EC
extern struct PalCollection_dup_4 ThePals;

// address: 0x800FDA84
// size: 0x10
extern int ThemeGood[4];

// address: 0x80117600
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x80116470
extern unsigned long *ThisOt;

// address: 0x80117A40
static int ThisOtSize;

// address: 0x80116474
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x80116748
extern unsigned long Time;

// address: 0x80117AA8
static int TimePerFrame;

// address: 0x80117D88
static int TimeStamp;

// address: 0x801169C4
extern int TitleAnimCount;

// address: 0x800CB3CC
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800ABD2C
// size: 0x16
extern struct TownToCreature TownConv[11];

// address: 0x800A5AC8
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x800A8A0C
// size: 0xC
extern int TownCowDir[3];

// address: 0x800A89F4
// size: 0xC
extern int TownCowX[3];

// address: 0x800A8A00
// size: 0xC
extern int TownCowY[3];

// address: 0x800D4890
// size: 0x2C
extern int TownDownList[11];

// address: 0x800D48BC
// size: 0x34
extern int TownWarp1List[13];

// address: 0x80117AD8
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x80121798
// size: 0x68
static struct TextDat_dup_1 *TownerGfx;

// address: 0x8012E744
// size: 0x6C
static struct TextDat_dup_14 *TownerGfx;

// address: 0x80116514
extern int TpH;

// address: 0x80116510
extern int TpW;

// address: 0x80116518
extern int TpXDest;

// address: 0x8011651C
extern int TpYDest;

// address: 0x800D94CC
// size: 0x20
extern bool TransList[8];

// address: 0x801067B4
// size: 0x218
extern int TransPals[134];

// address: 0x8011759C
extern char TransVal;

// address: 0x8010C704
// size: 0x20
static short TxyAdd[16];

// address: 0x801084FC
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x800AF878
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8011097C
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x80117CE7
static unsigned char VR1;

// address: 0x80117CE8
static unsigned char VR2;

// address: 0x80117CE9
static unsigned char VR3;

// address: 0x80117A50
static int VXOff;

// address: 0x80117A54
static int VYOff;

// address: 0x800FDD74
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x80117A48
static void (*VbFunc)();

// address: 0x80117D98
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x800B0800
// size: 0x20
extern struct StrInfo Vic1Fmv;

// address: 0x800B0820
// size: 0x20
extern struct StrInfo Vic2Fmv;

// address: 0x800B0840
// size: 0x20
extern struct StrInfo Vic3Fmv;

// address: 0x80117A4C
static unsigned long VidTick;

// address: 0x80117A44
static int VidWait;

// address: 0x80113B58
extern unsigned long VideoVol;

// address: 0x80117B40
static unsigned long VideoVol;

// address: 0x80117578
extern int ViewBX;

// address: 0x8011757C
extern int ViewBY;

// address: 0x80117570
extern int ViewDX;

// address: 0x80117574
extern int ViewDY;

// address: 0x80117568
extern int ViewX;

// address: 0x8011756C
extern int ViewY;

// address: 0x800B088C
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x800CB3C0
// size: 0xC
extern int VitalityTbl[3];

// address: 0x801165CF
extern unsigned char WHITEB;

// address: 0x801165CE
extern unsigned char WHITEG;

// address: 0x801165CD
extern unsigned char WHITER;

// address: 0x80117AA0
static int WWorldX;

// address: 0x80117AA4
static int WWorldY;

// address: 0x80108E2C
// size: 0x10
extern int WarpDropX[4];

// address: 0x80118F38
// size: 0x2
static char WarpDropX[2];

// address: 0x80108E3C
// size: 0x10
extern int WarpDropY[4];

// address: 0x80118F3C
// size: 0x2
static char WarpDropY[2];

// address: 0x8011423C
extern bool WaterDone;

// address: 0x8010CDC8
// size: 0xA
static char WepChar[10];

// address: 0x800A25C8
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x80117A2D
static unsigned char WorkRamId;

// address: 0x800FDD34
// size: 0x20
extern int XDirAdd[8];

// address: 0x800FDD54
// size: 0x20
extern int YDirAdd[8];

// address: 0x80115BE8
extern int Year;

// address: 0x800A3B74
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x8012C534
// size: 0x9C
static struct GamePad *_GP0;

// address: 0x8012DD74
// size: 0x94
static struct GamePad_dup_13 *_GP0;

// address: 0x8012C840
// size: 0x9C
static struct GamePad_dup_11 *_GP0;

// address: 0x8012C844
// size: 0x9C
static struct GamePad_dup_11 *_GP1;

// address: 0x8012DD78
// size: 0x94
static struct GamePad_dup_13 *_GP1;

// address: 0x8012C538
// size: 0x9C
static struct GamePad *_GP1;

// address: 0x80113DA0
extern int _discard_count;

// address: 0x80113D9C
extern int _get_count;

// address: 0x80116DFC
// size: 0x2
extern char _infoclr[2];

// address: 0x800A8128
// size: 0x200
extern char _infostr[256][2];

// address: 0x80117BA8
// size: 0x8
static int _pSpell[2];

// address: 0x80116A58
// size: 0x2
extern unsigned char _pSplTargetX[2];

// address: 0x80116A5C
// size: 0x2
extern unsigned char _pSplTargetY[2];

// address: 0x80117BB0
// size: 0x8
static int _pSplType[2];

// address: 0x80116A60
// size: 0x2
extern unsigned char _pTargetSpell[2];

// address: 0x80118680
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x801171E8
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x80116E6C
// size: 0x8
extern int _pcurs[2];

// address: 0x80116EA4
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x80116EA0
// size: 0x2
extern char _pcursitem[2];

// address: 0x80116E94
// size: 0x8
extern int _pcursmonst[2];

// address: 0x80116E9C
// size: 0x2
extern char _pcursobj[2];

// address: 0x80116EA8
// size: 0x2
extern char _pcursplr[2];

// address: 0x801171F0
// size: 0x2
extern char _pfind_index[2];

// address: 0x800D4B18
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x801171F4
// size: 0x2
extern char _pfindx[2];

// address: 0x801171F8
// size: 0x2
extern char _pfindy[2];

// address: 0x80116DF8
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x80117B98
// size: 0x8
static int _pnumlines[2];

// address: 0x80116A84
// size: 0x2
extern char _psplpos[2];

// address: 0x800A6504
// size: 0xC
extern short _psplxpos[3][2];

// address: 0x800A6510
// size: 0xC
extern short _psplypos[3][2];

// address: 0x80116A64
// size: 0x8
static int _pspotid[2];

// address: 0x80118A80
// size: 0x40
static int _pstrjust[8][2];

// address: 0x80116A74
// size: 0x2
extern char _spltotype[2];

// address: 0x80116D80
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x80117184
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x80117CEC
static int abyssx;

// address: 0x80116B14
extern bool allspellsflag;

// address: 0x80113F10
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x801176D0
// size: 0x7
extern char animletter[7];

// address: 0x8012C7E8
static bool anyfuckingmenus;

// address: 0x80113E08
extern int area_ph;

// address: 0x80113E04
extern int area_pw;

// address: 0x801175E8
extern unsigned char armorFlag;

// address: 0x80117799
extern unsigned char automapflag;

// address: 0x801171FA
extern unsigned char automapmoved;

// address: 0x801096D4
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8010960C
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x801175E9
extern unsigned char bCrossFlag;

// address: 0x801175F8
extern unsigned char bFountainFlag;

// address: 0x80116F42
extern unsigned char bannerflag;

// address: 0x80116A80
extern unsigned char birdcheck;

// address: 0x8011A070
static unsigned char blank_bit;

// address: 0x800BEAD4
// size: 0x80
extern unsigned char block_buf[128];

// address: 0x80117A90
static int blockb;

// address: 0x80117A8C
static int blockg;

// address: 0x80117A88
static int blockr;

// address: 0x800E5DF8
// size: 0x98
extern struct ItemStruct_dup_11 boyitem;

// address: 0x800D1FE8
// size: 0x94
extern struct ItemStruct boyitem;

// address: 0x800E7184
// size: 0x98
extern struct ItemStruct_dup_13 boyitem;

// address: 0x800D1FB0
// size: 0x98
extern struct ItemStruct_dup_6 boyitem;

// address: 0x800D3118
// size: 0x98
extern struct ItemStruct boyitem;

// address: 0x80117150
extern int boylevel;

// address: 0x80116F41
extern unsigned char boyloadflag;

// address: 0x80117C24
static int bright;

// address: 0x800C87D4
// size: 0x10
static char bright_tab[16];

// address: 0x800B0714
// size: 0x10
extern char bright_tab[16];

// address: 0x80117588
extern int btmbx;

// address: 0x8011758C
extern int btmby;

// address: 0x80117590
extern int btmdx;

// address: 0x80117594
extern int btmdy;

// address: 0x8011CB68
// size: 0x1380
static char buf[4992];

// address: 0x80119F68
// size: 0x20
static int buff[8];

// address: 0x8012C3A4
extern bool buttoncol;

// address: 0x800C9B04
// size: 0x20
extern int bxadd[8];

// address: 0x800C9B24
// size: 0x20
extern int byadd[8];

// address: 0x801165C0
extern int cac_pad;

// address: 0x801169B4
static int call_clock;

// address: 0x8012B2C8
extern int card_blocks;

// address: 0x80116C90
// size: 0x8
extern int card_changed[2];

// address: 0x80116AE4
// size: 0x8
extern int card_dirty[2];

// address: 0x80116AC4
extern unsigned int card_ev0;

// address: 0x80116AC8
extern unsigned int card_ev1;

// address: 0x80116AD4
extern unsigned int card_ev10;

// address: 0x80116AD8
extern unsigned int card_ev11;

// address: 0x80116ADC
extern unsigned int card_ev12;

// address: 0x80116AE0
extern unsigned int card_ev13;

// address: 0x80116ACC
extern unsigned int card_ev2;

// address: 0x80116AD0
extern unsigned int card_ev3;

// address: 0x80116AF0
extern int card_event;

// address: 0x80116438
static int card_event;

// address: 0x80116C88
// size: 0x8
extern int card_files[2];

// address: 0x80116C78
// size: 0x8
extern int card_status[2];

// address: 0x80116C80
// size: 0x8
extern int card_usable[2];

// address: 0x801175F9
extern unsigned char cauldronFlag;

// address: 0x80113DAC
extern int cdready_calls;

// address: 0x80113DB0
extern int cdready_errors;

// address: 0x80113DB4
extern int cdready_out_of_sync;

// address: 0x80113EA4
extern int cdstream_resetsec;

// address: 0x80113DB8
extern int cdstream_resetting;

// address: 0x80116B98
static char centrestep;

// address: 0x8012BFAA
extern unsigned char cheat_quest_flag;

// address: 0x80113DC4
extern unsigned long *chkaddr;

// address: 0x8012C63C
// size: 0x8
static unsigned char chrbtn[4][2];

// address: 0x80117BC0
// size: 0x4
static unsigned char chrbtn[4];

// address: 0x80116E45
extern unsigned char chrbtnactive;

// address: 0x80116E04
extern unsigned char chrbtndown;

// address: 0x80116E00
extern unsigned char chrflag;

// address: 0x80113DC8
// size: 0x8
extern struct chunkhdrstruct *chunk;

// address: 0x80116ED0
static unsigned char cineflag;

// address: 0x80117AE2
static char ckeyheld;

// address: 0x80116B0C
extern int cmenu;

// address: 0x800A6444
// size: 0xA0
static int controller_defaults[2][20];

// address: 0x800A67AC
// size: 0x98
static int controller_defaults[2][19];

// address: 0x801169AE
extern char cow_in_sight;

// address: 0x800A8A18
// size: 0x20
extern int cowoffx[8];

// address: 0x800A8A38
// size: 0x20
extern int cowoffy[8];

// address: 0x80116B04
static int cs;

// address: 0x80117AE0
static char ctrl_select_line;

// address: 0x80117AE1
static char ctrl_select_side;

// address: 0x8011693C
extern unsigned char ctrlflag;

// address: 0x80116E58
extern int cur_spel;

// address: 0x80116D0C
extern int current_card;

// address: 0x80117560
extern unsigned char currlevel;

// address: 0x8011A8B8
// size: 0x98
static struct ItemStruct curruitem;

// address: 0x80125B00
// size: 0x98
static struct ItemStruct_dup_6 curruitem;

// address: 0x8012D680
// size: 0x98
static struct ItemStruct_dup_11 curruitem;

// address: 0x8012EBE8
// size: 0x98
static struct ItemStruct_dup_13 curruitem;

// address: 0x80118C58
// size: 0x94
static struct ItemStruct curruitem;

// address: 0x80116E78
extern int cursH;

// address: 0x80116E74
extern int cursW;

// address: 0x80116E8C
extern int cursmx;

// address: 0x80116E90
extern int cursmy;

// address: 0x80114CA0
// size: 0xA
static char cursoff[10];

// address: 0x801169B2
extern char daylight;

// address: 0x80116B95
static unsigned char dc;

// address: 0x800A8428
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x801170A4
extern int deathdelay;

// address: 0x801170A8
extern unsigned char deathflag;

// address: 0x80116B80
static bool debounce;

// address: 0x80113B30
extern bool debounce;

// address: 0x80116EDC
extern int debugmonsttypes;

// address: 0x80118608
// size: 0x74
static struct DecEnv dec;

// address: 0x8011701D
extern unsigned char deltaload;

// address: 0x800A4CDC
// size: 0x708
extern unsigned char demo_buffer[1800];

// address: 0x800A9004
// size: 0x384
extern unsigned char demo_buffer[900];

// address: 0x80116E28
extern char demo_fade_finished;

// address: 0x801165BC
extern unsigned long demo_finish;

// address: 0x801167A4
extern unsigned char demo_flash;

// address: 0x801167B4
extern int demo_level;

// address: 0x80116798
extern int demo_load;

// address: 0x801165B8
extern int demo_pad_count;

// address: 0x801165B4
extern int demo_pad_time;

// address: 0x8011679C
extern int demo_record_load;

// address: 0x801182ED
extern unsigned char demo_which;

// address: 0x801137BC
extern int demo_which;

// address: 0x800A96C0
// size: 0x14
extern unsigned long demolevel[5];

// address: 0x801137B4
// size: 0x5
extern char demolevel[5];

// address: 0x800D6664
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x801173C8
extern int diabquad1x;

// address: 0x801173D8
extern int diabquad1y;

// address: 0x801173CC
extern int diabquad2x;

// address: 0x801173DC
extern int diabquad2y;

// address: 0x801173D0
extern int diabquad3x;

// address: 0x801173E0
extern int diabquad3y;

// address: 0x801173D4
extern int diabquad4x;

// address: 0x801173E4
extern int diabquad4y;

// address: 0x80117C00
static int disp_mask;

// address: 0x80117C18
static int disp_tab_b;

// address: 0x80117C10
static int disp_tab_g;

// address: 0x80117C08
static int disp_tab_r;

// address: 0x80117C1C
static int dispy_b;

// address: 0x80117C14
static int dispy_g;

// address: 0x80117C0C
static int dispy_r;

// address: 0x80117554
extern int dmaxx;

// address: 0x80117558
extern int dmaxy;

// address: 0x8011754C
extern int dminx;

// address: 0x80117550
extern int dminy;

// address: 0x80113D44
extern int do_brightness;

// address: 0x80116FDC
extern unsigned char dovision;

// address: 0x80117248
extern int down;

// address: 0x80118548
// size: 0xB8
static struct DRAWENV draw[2];

// address: 0x80116E01
extern unsigned char drawbtnflag;

// address: 0x80116E44
extern unsigned char drawdurflag;

// address: 0x80116DFE
extern unsigned char drawhpflag;

// address: 0x80116DFF
extern unsigned char drawmanaflag;

// address: 0x80117765
extern unsigned char drawsbarflag;

// address: 0x80116DF4
extern unsigned char dropGoldFlag;

// address: 0x80116E08
extern int dropGoldValue;

// address: 0x800D94EC
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x800FCE74
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x800FC310
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x800FB7AC
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x800D4E24
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x80117020
extern unsigned long dwRecCount;

// address: 0x80117290
static int faderate;

// address: 0x801176A7
extern unsigned char fadetob;

// address: 0x801176A6
extern unsigned char fadetog;

// address: 0x801176A5
extern unsigned char fadetor;

// address: 0x80113BEC
static int fadeval;

// address: 0x80117294
static bool fading;

// address: 0x80116D04
extern bool fileinfoflag;

// address: 0x80116C1C
extern int fileselect;

// address: 0x80116D26
static short firstFrame;

// address: 0x80113DCC
extern int first_handler_event;

// address: 0x80113D54
extern int first_stream_frame;

// address: 0x801139EC
static int flametick;

// address: 0x801171DC
extern unsigned char flyflag;

// address: 0x8010D4E0
// size: 0x44
extern unsigned char fontkern[68];

// address: 0x801170C0
// size: 0x8
extern bool force_attack[2];

// address: 0x80116ECC
extern int force_redraw;

// address: 0x80113D48
extern int frame_decoded;

// address: 0x8012BF28
static int frame_rate;

// address: 0x800BE050
// size: 0x18
static int frmlist[6];

// address: 0x80116EC8
extern unsigned char fullscreen;

// address: 0x80117037
extern unsigned char gbActivePlayers;

// address: 0x8011701E
extern unsigned char gbBufferMsgs;

// address: 0x80117039
extern unsigned char gbDeltaSender;

// address: 0x80116F19
extern unsigned char gbDoEnding;

// address: 0x801171AC
extern unsigned char gbDupSounds;

// address: 0x8010D5A0
// size: 0x100
extern unsigned char gbFontTransTbl[256];

// address: 0x80117038
extern unsigned char gbGameDestroyed;

// address: 0x80116F1C
extern unsigned char gbGameLoopStartup;

// address: 0x80117036
extern unsigned char gbMaxPlayers;

// address: 0x801171AA
extern unsigned char gbMusicOn;

// address: 0x80116F18
extern unsigned char gbProcessPlayers;

// address: 0x80116F1A
extern unsigned char gbRunGame;

// address: 0x80116F1B
extern unsigned char gbRunGameResult;

// address: 0x8011703A
extern unsigned char gbSelectProvider;

// address: 0x801171A9
extern unsigned char gbSndInited;

// address: 0x8011703B
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x801171AB
extern unsigned char gbSoundOn;

// address: 0x80117080
extern unsigned char gbValidSaveFile;

// address: 0x80117164
extern unsigned long gdwAllTextEntries;

// address: 0x80116EF4
extern unsigned long ghInst;

// address: 0x80116EC4
extern unsigned long ghMainWnd;

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

// address: 0x800A85C4
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x8011755C
extern int gnDifficulty;

// address: 0x800A8608
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x80116F94
extern int gnNumGetRecords;

// address: 0x8012B270
extern bool goldcheat;

// address: 0x800D31B0
// size: 0x98
extern struct ItemStruct golditem;

// address: 0x800D2048
// size: 0x98
extern struct ItemStruct_dup_6 golditem;

// address: 0x800D207C
// size: 0x94
extern struct ItemStruct golditem;

// address: 0x800E721C
// size: 0x98
extern struct ItemStruct_dup_13 golditem;

// address: 0x800E5E90
// size: 0x98
extern struct ItemStruct_dup_11 golditem;

// address: 0x80117CC8
static int gossipend;

// address: 0x80117CC4
static int gossipstart;

// address: 0x80120BDC
extern unsigned char *gpBuffer;

// address: 0x80116A54
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x8012D390
// size: 0x84
extern struct CPlayer_dup_14 *gplayer;

// address: 0x80120620
// size: 0x80
extern struct CPlayer_dup_1 *gplayer;

// address: 0x801169A0
extern int gr_scrxoff;

// address: 0x801169A4
extern int gr_scryoff;

// address: 0x800B9CC4
// size: 0x10
extern char gszHero[16];

// address: 0x80117030
// size: 0x5
extern char gszVersionNumber[5];

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

// address: 0x80116A10
static int healflag;

// address: 0x800D3248
// size: 0xBE0
extern struct ItemStruct healitem[20];

// address: 0x800E5F28
// size: 0xBE0
extern struct ItemStruct_dup_11 healitem[20];

// address: 0x800D20E0
// size: 0xBE0
extern struct ItemStruct_dup_6 healitem[20];

// address: 0x800D2110
// size: 0xB90
extern struct ItemStruct healitem[20];

// address: 0x800E72B4
// size: 0xBE0
extern struct ItemStruct_dup_13 healitem[20];

// address: 0x80116A18
static int healplyr;

// address: 0x80116A7C
// size: 0x4
extern char health_order[4];

// address: 0x80116A14
static int healtime;

// address: 0x8012C7B0
extern bool hellomumflag;

// address: 0x8012D530
static bool helpflag;

// address: 0x801186B8
static long hndKanjBuff;

// address: 0x801186BC
static long hndKanjIndex;

// address: 0x80117A24
static long hndPrimBuffers;

// address: 0x80117200
extern long hndText;

// address: 0x80116710
extern int hof;

// address: 0x80116BA9
extern char hop_height;

// address: 0x80116E80
extern int icursH;

// address: 0x80116E88
extern int icursH28;

// address: 0x80116E7C
extern int icursW;

// address: 0x80116E84
extern int icursW28;

// address: 0x80116F9C
extern int idoppely;

// address: 0x80113D18
extern unsigned char *img_buf;

// address: 0x801186AC
extern int indsize;

// address: 0x80116DBC
extern bool initchr;

// address: 0x80116E10
extern int initialDropGoldIndex;

// address: 0x80116E0C
extern int initialDropGoldValue;

// address: 0x801169AF
extern char inn_in_sight;

// address: 0x80117764
extern unsigned char invflag;

// address: 0x80117280
extern bool iscflag;

// address: 0x800C2C38
// size: 0x4C00
extern struct ItemStruct_dup_13 item[128];

// address: 0x800ADAB4
// size: 0x4C00
extern struct ItemStruct_dup_6 item[128];

// address: 0x800AAD78
// size: 0x4A00
extern struct ItemStruct item[128];

// address: 0x800AEC1C
// size: 0x4C00
extern struct ItemStruct item[128];

// address: 0x800C18AC
// size: 0x4C00
extern struct ItemStruct_dup_11 item[128];

// address: 0x80117B2C
static char item_select;

// address: 0x800AF778
// size: 0x7F
extern char itemactive[127];

// address: 0x800AF7F8
// size: 0x7F
extern char itemavail[127];

// address: 0x80118CF8
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x80129D04
extern bool jaffflag;

// address: 0x801186B0
static unsigned char *kanjbuff;

// address: 0x80118BF8
// size: 0x7472
static unsigned char kanjbuff[29810];

// address: 0x80120078
// size: 0x54B0
static struct kindexS kindex[5420];

// address: 0x801186B4
// size: 0x4
static struct kindexS *kindex;

// address: 0x801173F8
extern int l4holdx;

// address: 0x801173FC
extern int l4holdy;

// address: 0x80113D20
extern int last_fn;

// address: 0x80113EA8
extern int last_handler_event;

// address: 0x80113D24
extern int last_mdc;

// address: 0x80113D38
extern int last_move_mbuf;

// address: 0x80113EA0
extern int last_sector;

// address: 0x8012C5F4
// size: 0x8
static int last_seenx[2];

// address: 0x8012C5FC
// size: 0x8
static int last_seeny[2];

// address: 0x80113E4C
extern int last_stream_frame;

// address: 0x8011699D
extern char last_type;

// address: 0x80116B08
static int lastcs;

// address: 0x801169B1
extern unsigned char lastrnd;

// address: 0x80117CF0
static unsigned char lavapool;

// address: 0x80116B96
static unsigned char lc;

// address: 0x801176D8
// size: 0x8
extern char left[8];

// address: 0x801167A0
extern int level_record;

// address: 0x80116ED4
extern unsigned char leveldebug;

// address: 0x80117561
extern unsigned char leveltype;

// address: 0x8011706C
extern int leverid;

// address: 0x80116ED3
extern unsigned char light4flag;

// address: 0x80117098
// size: 0x5
extern char light_level[5];

// address: 0x801170A9
extern char light_rad;

// address: 0x8010CE90
// size: 0x37
static unsigned char light_tile[55];

// address: 0x800B0864
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x80116FC0
extern int lightflag;

// address: 0x80116FD4
extern char lightmax;

// address: 0x8012B294
extern int loadflag;

// address: 0x801173C4
extern int lockoutcnt;

// address: 0x801165D8
static unsigned char *lpSetPiece1;

// address: 0x801165DC
static unsigned char *lpSetPiece2;

// address: 0x801165E0
static unsigned char *lpSetPiece3;

// address: 0x801165E4
static unsigned char *lpSetPiece4;

// address: 0x8012E940
static unsigned char *lppSetPiece2;

// address: 0x8012E944
static unsigned char *lppSetPiece3;

// address: 0x8012E948
static unsigned char *lppSetPiece4;

// address: 0x80117B5A
static unsigned char lqspin;

// address: 0x80116DAC
static int lus;

// address: 0x80116E05
extern unsigned char lvlbtndown;

// address: 0x801175FA
extern unsigned char mFountainFlag;

// address: 0x80116A78
// size: 0x4
extern char mana_order[4];

// address: 0x80113D0C
extern unsigned char *map_buf;

// address: 0x80116D2C
static unsigned short maxRunLevel;

// address: 0x80113D30
extern int mbuf;

// address: 0x80113E70
extern int mdc_bufleft;

// address: 0x80113E6C
extern unsigned char *mdc_bufstart;

// address: 0x80113E68
extern unsigned char *mdc_buftop;

// address: 0x80113E74
extern int mdc_buftotal;

// address: 0x80113DD4
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x80113DE0
extern int mdec_audio_offs;

// address: 0x80113DE4
extern int mdec_audio_playing;

// address: 0x80113DE8
extern int mdec_audio_rate_shift;

// address: 0x80113DDC
extern int mdec_audio_sec;

// address: 0x80113E1C
extern int mdec_cx;

// address: 0x80113E20
extern int mdec_cy;

// address: 0x80113E50
extern int mdec_framecount;

// address: 0x80113E28
extern int mdec_h;

// address: 0x80113D60
extern int mdec_head;

// address: 0x80113E5C
extern int mdec_last_frame;

// address: 0x80113E34
// size: 0x8
extern int mdec_ph[2];

// address: 0x80113E2C
// size: 0x8
extern int mdec_pw[2];

// address: 0x80113D40
extern int mdec_scale;

// address: 0x80113E60
extern int mdec_sectors_per_frame;

// address: 0x80113E54
extern int mdec_speed;

// address: 0x80113D50
extern int mdec_stream_size;

// address: 0x80113E58
extern int mdec_stream_starting;

// address: 0x80113D4C
extern int mdec_streaming;

// address: 0x80113D64
extern int mdec_tail;

// address: 0x80113E24
extern int mdec_w;

// address: 0x80113D68
extern int mdec_waiting_tail;

// address: 0x80113D6C
extern int mdecs_queued;

// address: 0x80113D70
extern int mdecs_waiting;

// address: 0x80116AC0
extern void (*mem_card_event_handler)();

// address: 0x80113D34
extern int mfn;

// address: 0x800B11CC
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800BA454
// size: 0x66D
extern struct MisFileData_dup_1 misfiledata[47];

// address: 0x800FE1A4
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x800FDDBC
// size: 0x1F4
extern int missileactive[125];

// address: 0x800FDFB0
// size: 0x1F4
extern int missileavail[125];

// address: 0x800B0A5C
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x801143F4
extern int mode;

// address: 0x80116714
extern int mof;

// address: 0x801061D4
// size: 0x190
extern short monstactive[200];

// address: 0x80116ED5
extern unsigned char monstdebug;

// address: 0x80100A54
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x801069CC
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x80117720
extern long monstimgtot;

// address: 0x80106364
// size: 0x190
extern short monstkills[200];

// address: 0x80116794
extern int moo_moo;

// address: 0x80113D3C
extern int move_request;

// address: 0x80113E44
extern int move_scale;

// address: 0x80113E3C
extern int move_x;

// address: 0x80113E40
extern int move_y;

// address: 0x80116F75
extern char msgcnt;

// address: 0x80116F77
extern char msgdelay;

// address: 0x80116F76
extern char msgflag;

// address: 0x800AAB14
// size: 0x50
extern char msgtable[80];

// address: 0x80118D08
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x80120288
extern int mypaloff;

// address: 0x801170A0
extern int myplr;

// address: 0x80113DD0
extern int myrate;

// address: 0x80117058
extern int myscale;

// address: 0x800D6CA4
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800D84B0
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x80117328
extern int nRoomCnt;

// address: 0x800D74A8
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x8011732C
extern int nSx1;

// address: 0x80117334
extern int nSx2;

// address: 0x80117330
extern int nSy1;

// address: 0x80117338
extern int nSy2;

// address: 0x800D7CAC
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800D8CB4
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x80115130
static int never_hooked_events;

// address: 0x80116ABC
extern int never_hooked_events;

// address: 0x80116D28
static short numSkipped;

// address: 0x80113D5C
extern int num_mdcs;

// address: 0x80113E14
// size: 0x8
extern int num_pol[2];

// address: 0x80116F90
extern long numitems;

// address: 0x80116FD0
extern int numlights;

// address: 0x801176B8
extern int nummissiles;

// address: 0x8011771C
extern long nummonsters;

// address: 0x801176CC
extern int nummtypes;

// address: 0x8011705C
extern long numobjects;

// address: 0x80117054
extern int numobjfiles;

// address: 0x80116E3C
extern int numpanbtns;

// address: 0x80117148
extern int numpremium;

// address: 0x80117104
extern int numqlines;

// address: 0x801175E0
extern int numthemes;

// address: 0x80116F3C
extern int numtowners;

// address: 0x80117188
extern int numtrigs;

// address: 0x80116FD8
extern int numvision;

// address: 0x800C9BEC
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x800CB1C0
// size: 0x7F
extern char objectactive[127];

// address: 0x800CB240
// size: 0x7F
extern char objectavail[127];

// address: 0x801176F0
// size: 0x8
extern char offset_x[8];

// address: 0x801176F8
// size: 0x8
extern char offset_y[8];

// address: 0x80117B88
static unsigned long oldHeapbase;

// address: 0x80117B8C
// size: 0x4
static struct SndVolume oldVolume;

// address: 0x80117AE4
static int old_options_pad;

// address: 0x80118300
extern int old_val;

// address: 0x801176E8
// size: 0x8
extern char opposite[8];

// address: 0x80116B20
extern int options_pad;

// address: 0x80116B18
extern bool optionsflag;

// address: 0x8011897C
extern int ordertab_length;

// address: 0x80116F64
extern long orgseed;

// address: 0x80117AFC
static int p1apocaflag;

// address: 0x80117B00
static int p1apocaxpos;

// address: 0x80117B04
static int p1apocaypos;

// address: 0x801169E8
extern int p1inviscount;

// address: 0x801169FC
static int p1partexecnum;

// address: 0x801169E4
extern int p1phaseflag;

// address: 0x80117AF8
static int p1scale;

// address: 0x80116A28
extern int p1scrnx;

// address: 0x80116A2C
extern int p1scrny;

// address: 0x80117AF0
static int p1spiny1;

// address: 0x80117AF4
static int p1spiny2;

// address: 0x801169E0
extern int p1teleflag;

// address: 0x80116A30
extern int p1wrldx;

// address: 0x80116A34
extern int p1wrldy;

// address: 0x80117B14
static int p2apocaflag;

// address: 0x80117B18
static int p2apocaxpos;

// address: 0x80117B1C
static int p2apocaypos;

// address: 0x801169F4
extern int p2inviscount;

// address: 0x80116A00
static int p2partexecnum;

// address: 0x801169F0
extern int p2phaseflag;

// address: 0x80117B10
static int p2scale;

// address: 0x80116A38
extern int p2scrnx;

// address: 0x80116A3C
extern int p2scrny;

// address: 0x80117B08
static int p2spiny1;

// address: 0x80117B0C
static int p2spiny2;

// address: 0x801169EC
extern int p2teleflag;

// address: 0x80116A40
extern int p2wrldx;

// address: 0x80116A44
extern int p2wrldy;

// address: 0x80116E28
extern unsigned char *pChrButtons;

// address: 0x80116E24
extern unsigned char *pChrPanel;

// address: 0x80116F44
extern unsigned char *pCowCels;

// address: 0x80116E40
extern unsigned char *pDurIcons;

// address: 0x801175FB
extern unsigned char pFountainFlag;

// address: 0x80116DF0
extern unsigned char *pGBoxBuff;

// address: 0x80117324
// size: 0x18
extern struct NODE *pHallList;

// address: 0x80116E20
extern unsigned char *pLifeBuff;

// address: 0x80116E1C
extern unsigned char *pManaBuff;

// address: 0x80117C28
static unsigned char *pMedTextCels;

// address: 0x80117548
extern unsigned char *pMegaTiles;

// address: 0x80117BD0
static unsigned char *pMultiBtns;

// address: 0x80116E14
extern unsigned char *pPanelButtons;

// address: 0x80116E18
extern unsigned char *pPanelText;

// address: 0x801170E4
extern unsigned char *pQLogCel;

// address: 0x80116E4C
extern unsigned char *pSBkBtnCel;

// address: 0x80116E50
extern unsigned char *pSBkIconCels;

// address: 0x80117130
extern unsigned char *pSTextBoxCels;

// address: 0x80117134
extern unsigned char *pSTextSlidCels;

// address: 0x8011752C
extern unsigned char *pSetPiece;

// address: 0x80116E48
extern unsigned char *pSpellBkCel;

// address: 0x80116E2C
extern unsigned char *pSpellCels;

// address: 0x80116EB4
extern unsigned char *pSquareCel;

// address: 0x80116DEC
extern unsigned char *pStatusPanel;

// address: 0x80117BD4
static unsigned char *pTalkBtns;

// address: 0x80117BCC
static unsigned char *pTalkPanel;

// address: 0x80117C2C
static unsigned char *pTextBoxCels;

// address: 0x801171D4
// size: 0x8
extern char (*pad_styles[2])();

// address: 0x800A625C
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x800A65D4
// size: 0xA8
extern struct pad_assigns_dup_4 pad_txt[14];

// address: 0x80116DC8
static int paloffset1;

// address: 0x80116DCC
static int paloffset2;

// address: 0x80116DD0
static int paloffset3;

// address: 0x80116DD4
static int paloffset4;

// address: 0x80117BB8
// size: 0x8
static unsigned char panbtn[8];

// address: 0x80116E02
extern unsigned char panbtndown;

// address: 0x80116E03
extern unsigned char panelflag;

// address: 0x80117B20
static int partOtPos;

// address: 0x80116A0C
static int partcolour;

// address: 0x80116A08
static int partglowflag;

// address: 0x80116A04
static int partjumpflag;

// address: 0x80116B88
static bool pd;

// address: 0x800D6024
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x80116BAC
// size: 0x8
static struct Perch perches[4];

// address: 0x80116DD8
static int pinc1;

// address: 0x80116DDC
static int pinc2;

// address: 0x80116DE0
static int pinc3;

// address: 0x80116DE4
static int pinc4;

// address: 0x80116B8C
static bool pl;

// address: 0x800C9630
// size: 0x4590
extern struct PlayerStruct plr[2];

// address: 0x800CB4E0
// size: 0x45A0
extern struct PlayerStruct plr[2];

// address: 0x800CB240
// size: 0x4750
extern struct PlayerStruct_dup_6 plr[2];

// address: 0x800C861C
// size: 0x4590
extern struct PlayerStruct_dup_4 plr[2];

// address: 0x800DF038
// size: 0x4750
extern struct PlayerStruct_dup_11 plr[2];

// address: 0x800CCB28
// size: 0x4750
extern struct PlayerStruct plr[2];

// address: 0x800CC3A8
// size: 0x4750
extern struct PlayerStruct_dup_7 plr[2];

// address: 0x800E03C4
// size: 0x4750
extern struct PlayerStruct_dup_13 plr[2];

// address: 0x800CB2E8
// size: 0x24
extern int plrxoff[9];

// address: 0x800CB330
// size: 0x24
extern int plrxoff2[9];

// address: 0x800CB30C
// size: 0x24
extern int plryoff[9];

// address: 0x800CB354
// size: 0x24
extern int plryoff2[9];

// address: 0x80116DB4
static char plusanim;

// address: 0x80108E4C
// size: 0x60
extern struct PortalStruct portal[4];

// address: 0x800D6728
// size: 0x18
extern struct PortalStruct portal[2];

// address: 0x800D5F58
// size: 0x18
extern struct PortalStruct_dup_7 portal[2];

// address: 0x80118F3E
extern char portalindex;

// address: 0x80117744
extern int portalindex;

// address: 0x80116B90
static bool pr;

// address: 0x800D1040
// size: 0x390
extern struct ItemStruct_dup_6 premiumitem[6];

// address: 0x800D21A8
// size: 0x390
extern struct ItemStruct premiumitem[6];

// address: 0x800D10E0
// size: 0x378
extern struct ItemStruct premiumitem[6];

// address: 0x800E6214
// size: 0x390
extern struct ItemStruct_dup_13 premiumitem[6];

// address: 0x800E4E88
// size: 0x390
extern struct ItemStruct_dup_11 premiumitem[6];

// address: 0x8011714C
extern int premiumlevel;

// address: 0x800AAD60
// size: 0x18
extern int premiumlvladd[6];

// address: 0x80116D2A
static short prevFrameNum;

// address: 0x80117B30
static unsigned short progress;

// address: 0x80116B84
static bool pu;

// address: 0x801170F8
extern int qfade;

// address: 0x80117100
extern int qline;

// address: 0x80118DA8
// size: 0x40
static int qlist[16];

// address: 0x80117B59
static unsigned char qspin;

// address: 0x80116FF0
static bool qtbodge;

// address: 0x80117C38
static unsigned long qtextDelay;

// address: 0x80117004
extern int qtextSpd;

// address: 0x80117002
extern unsigned char qtextflag;

// address: 0x80117C30
static char *qtextptr;

// address: 0x80117C34
static int qtexty;

// address: 0x80117108
extern int qtopline;

// address: 0x8012AD79
extern unsigned char quest_cheat_num;

// address: 0x800BCE5C
// size: 0x40
extern unsigned long quest_seed[16];

// address: 0x800CFA80
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x801170B5
extern unsigned char questlog;

// address: 0x800CFBB8
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x800CFB80
// size: 0x14
extern int questtrigstr[5];

// address: 0x801170BC
// size: 0x7
static char questxoff[7];

// address: 0x801170C4
// size: 0x7
static char questyoff[7];

// address: 0x80117C20
static int radius;

// address: 0x800B0704
// size: 0x10
extern char radius_tab[16];

// address: 0x800C87C4
// size: 0x10
static char radius_tab[16];

// address: 0x80116B97
static unsigned char rc;

// address: 0x80116FCC
extern int restore_b;

// address: 0x80116FC8
extern int restore_g;

// address: 0x80116FC4
extern int restore_r;

// address: 0x80118198
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x80117FE8
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x80118018
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x801176E0
// size: 0x8
extern char right[8];

// address: 0x80116D30
static unsigned long *ringBuf;

// address: 0x80116D40
static int ringHnd;

// address: 0x80117B90
static char *ringName;

// address: 0x80116D48
// size: 0x14
extern struct STRHDR *ringSH;

// address: 0x80116D34
static int ringcount;

// address: 0x80116D38
static int ringpos;

// address: 0x80116D3C
static int ringsec;

// address: 0x80117704
// size: 0x4
extern char rnd10[4];

// address: 0x80117708
// size: 0x4
extern char rnd20[4];

// address: 0x80117700
// size: 0x4
extern char rnd5[4];

// address: 0x8011770C
// size: 0x4
extern char rnd60[4];

// address: 0x80117240
extern int rotateness;

// address: 0x801170FC
extern unsigned char rporttest;

// address: 0x8012B3D0
extern int save_blocks;

// address: 0x80116B1C
extern int saveflag;

// address: 0x80116E06
extern unsigned char sbookflag;

// address: 0x80116E54
extern int sbooktab;

// address: 0x80117ED0
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8011728E
static unsigned char screenbright;

// address: 0x80116ED2
extern unsigned char scrollflag;

// address: 0x80117C40
static unsigned long scrolltexty;

// address: 0x80116D64
static int scx;

// address: 0x80116D6C
static int scx1;

// address: 0x80116D74
static int scx2;

// address: 0x80116D68
static int scy;

// address: 0x80116D70
static int scy1;

// address: 0x80116D78
static int scy2;

// address: 0x80113DBC
extern int sector_dma;

// address: 0x80113DC0
extern int sector_dma_in;

// address: 0x8012B8B1
static char seen_combo;

// address: 0x80116E68
extern int sel_data;

// address: 0x801171DE
extern char sel_speed;

// address: 0x80116A81
extern unsigned char select_flag;

// address: 0x80117562
extern unsigned char setlevel;

// address: 0x80117544
extern unsigned char setloadflag;

// address: 0x80117563
extern unsigned char setlvlnum;

// address: 0x80117564
extern unsigned char setlvltype;

// address: 0x80117540
extern int setpc_h;

// address: 0x8011753C
extern int setpc_w;

// address: 0x80117534
extern int setpc_x;

// address: 0x80117538
extern int setpc_y;

// address: 0x80116ED8
extern int setseed;

// address: 0x80113D74
extern int sfx_volume;

// address: 0x80116F5C
extern int sfxdelay;

// address: 0x80116F60
extern int sfxdnum;

// address: 0x80117C84
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x80123A70
// size: 0x1004
static struct TBuffer sgHiPriBuf;

// address: 0x8011B1D0
// size: 0x16
static struct DJunk sgJunk;

// address: 0x80118D88
// size: 0x20
static struct DJunk sgJunk;

// address: 0x8011A9E8
// size: 0x16
static struct DJunk_dup_7 sgJunk;

// address: 0x80117C3C
static unsigned long sgLastScroll;

// address: 0x800B25E4
// size: 0x13D4C
extern struct DLevel_dup_5 sgLevels[21];

// address: 0x800B15D0
// size: 0x13D4C
extern struct DLevel_dup_4 sgLevels[21];

// address: 0x800B12B8
// size: 0x17248
extern struct DLevel sgLevels[17];

// address: 0x800B41F4
// size: 0x13D4C
extern struct DLevel sgLevels[21];

// address: 0x80122A60
// size: 0x1004
static struct TBuffer sgLoPriBuf;

// address: 0x800C531C
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x800C8500
// size: 0xD48
extern struct LocalLevel sgLocals[17];

// address: 0x80117BEC
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x800A9B18
// size: 0xF4C
extern struct TSFX sgSFX[979];

// address: 0x800AE138
// size: 0xF50
extern struct TSFX sgSFX[980];

// address: 0x800C19AC
// size: 0xF78
extern struct TSFX_dup_13 sgSFX[990];

// address: 0x800C0314
// size: 0xF78
extern struct TSFX sgSFX[990];

// address: 0x80117BDC
static long *sg_previousFilter;

// address: 0x80117C51
static unsigned char sgbDeltaChanged;

// address: 0x80117C50
static unsigned char sgbDeltaChunks;

// address: 0x8011728D
static unsigned char sgbFadedIn;

// address: 0x8012194C
// size: 0x2
static unsigned char sgbGameJoiner[2];

// address: 0x80116EE8
extern unsigned char sgbMouseDown;

// address: 0x80117035
static unsigned char sgbNetInited;

// address: 0x80117BC9
static unsigned char sgbNextTalkSave;

// address: 0x80117C70
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x80117BCA
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x80117C49
static unsigned char sgbRecvCmd;

// address: 0x80117CF4
static unsigned char sgbSaveSoundOn;

// address: 0x80117C7C
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x80117C64
static unsigned char sgbSentThisCycle;

// address: 0x80117BC8
static unsigned char sgbTalkSavePos;

// address: 0x80117C8C
static unsigned char sgbTimeout;

// address: 0x80117BE0
static unsigned long sgdwCowClicks;

// address: 0x80117C68
static unsigned long sgdwGameLoops;

// address: 0x8011775C
static unsigned long sgdwLastTime;

// address: 0x80117C54
static unsigned long sgdwOwnerWait;

// address: 0x80117C74
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x80117BF4
static unsigned long sgdwProgress;

// address: 0x80117C4C
static unsigned long sgdwRecvOffset;

// address: 0x80117BF8
static unsigned long sgdwXY;

// address: 0x801171C4
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x80116F54
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x80117BE8
static long sglGameSeed;

// address: 0x801171B0
extern long sglMasterVolume;

// address: 0x801171B4
extern long sglMusicVolume;

// address: 0x80117C44
static long sglMusicVolumeSave;

// address: 0x801171B8
extern long sglSoundVolume;

// address: 0x801171BC
extern long sglSpeechVolume;

// address: 0x80117C90
static long sglTimeoutStart;

// address: 0x80117BE4
static int sgnCowMsg;

// address: 0x80117C60
static int sgnCurrMegaPlayer;

// address: 0x8012199C
static int sgnLRUScan;

// address: 0x80121998
static int sgnMonsters;

// address: 0x80119600
extern int sgnMusicTrack;

// address: 0x801171C0
static int sgnMusicTrack;

// address: 0x80120E00
static int sgnSyncItem;

// address: 0x80120E04
static int sgnSyncObj;

// address: 0x80120E08
static int sgnSyncPInv;

// address: 0x80116EE4
static int sgnTimeoutCurs;

// address: 0x80117BF0
static int sgnWidth;

// address: 0x80117C5C
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x80117C58
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x80116F58
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x8012CE60
// size: 0x4
extern struct TSFX_dup_13 *sgpStreamSFX;

// address: 0x80114D3C
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x80118AD0
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x801257E8
// size: 0x190
static unsigned short sgwLRU[200];

// address: 0x80117C6C
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x800C9BAC
// size: 0x1A
extern char shrineavail[26];

// address: 0x800C9B44
// size: 0x68
extern int shrinestrs[26];

// address: 0x80113DF8
// size: 0x8
extern struct RECT slice;

// address: 0x80113E00
extern int slice_inc;

// address: 0x80113DF4
extern int slice_size;

// address: 0x80113D2C
extern int slices_to_do;

// address: 0x80113D28
extern int slnum;

// address: 0x800E42A8
// size: 0xBE0
extern struct ItemStruct_dup_11 smithitem[20];

// address: 0x800D0460
// size: 0xBE0
extern struct ItemStruct_dup_6 smithitem[20];

// address: 0x800D0550
// size: 0xB90
extern struct ItemStruct smithitem[20];

// address: 0x800E5634
// size: 0xBE0
extern struct ItemStruct_dup_13 smithitem[20];

// address: 0x800D15C8
// size: 0xBE0
extern struct ItemStruct smithitem[20];

// address: 0x801171DD
extern char speed_type;

// address: 0x800CFCF8
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x80117244
extern int spiralling_shape;

// address: 0x80116A88
// size: 0x2
extern char spl_maxrad[2];

// address: 0x80116A8C
// size: 0x8
extern int splangle[2];

// address: 0x80116D7C
extern unsigned char spspelstate;

// address: 0x80118088
// size: 0x108
static char spu_management[264];

// address: 0x80116EAC
extern int spurtndx;

// address: 0x801143F0
extern int st;

// address: 0x801167CD
extern char started_grtask;

// address: 0x8012C7AC
static int startx;

// address: 0x80118DF8
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x80117CB8
static int stextdown;

// address: 0x80117147
extern char stextflag;

// address: 0x80117CA0
static int stextlhold;

// address: 0x80117155
extern unsigned char stextscrl;

// address: 0x80117CBD
static char stextscrldbtn;

// address: 0x80117CBC
static char stextscrlubtn;

// address: 0x80117C9C
static int stextsel;

// address: 0x80117CA4
static int stextshold;

// address: 0x80117154
extern char stextsize;

// address: 0x80117CB0
static int stextsmax;

// address: 0x80117CAC
static int stextsval;

// address: 0x80117CB4
static int stextup;

// address: 0x80117CA8
static int stextvhold;

// address: 0x80116EB0
extern int stonendx;

// address: 0x80116F40
extern unsigned char storeflag;

// address: 0x800D4860
// size: 0x30
extern char storehidx[48];

// address: 0x800D2CA0
// size: 0x1BC0
extern struct ItemStruct storehold[48];

// address: 0x800E6B08
// size: 0x1C80
extern struct ItemStruct_dup_11 storehold[48];

// address: 0x800D2CC0
// size: 0x1C80
extern struct ItemStruct_dup_6 storehold[48];

// address: 0x800E7E94
// size: 0x1C80
extern struct ItemStruct_dup_13 storehold[48];

// address: 0x800D3E28
// size: 0x1C80
extern struct ItemStruct storehold[48];

// address: 0x80117CC0
static int storenumh;

// address: 0x80113E80
extern int stream_bufsize;

// address: 0x80113D98
extern int stream_chunks_borrowed;

// address: 0x80113D78
extern int stream_chunks_in;

// address: 0x80113D7C
extern int stream_chunks_total;

// address: 0x80113E7C
extern int stream_chunksize;

// address: 0x80113D8C
extern int stream_ending;

// address: 0x80113E48
extern int stream_frames;

// address: 0x80113D58
extern int stream_frames_played;

// address: 0x80113E9C
extern int stream_got_chunks;

// address: 0x80113D94
extern int stream_handler_installed;

// address: 0x80113D80
extern int stream_in;

// address: 0x80113E98
extern int stream_last_chunk;

// address: 0x80113E8C
extern int stream_last_sector;

// address: 0x80113D90
extern int stream_open;

// address: 0x80113E94
extern int stream_opened;

// address: 0x80113D84
extern int stream_out;

// address: 0x80113E88
extern int stream_secnum;

// address: 0x80113D88
extern int stream_stalled;

// address: 0x80113E90
extern int stream_startsec;

// address: 0x80113E84
extern int stream_subsec;

// address: 0x80116EF8
extern unsigned char svgamode;

// address: 0x80117B4C
static int sw;

// address: 0x80117B50
static int sx;

// address: 0x80117B54
static int sy;

// address: 0x80117B80
static int t1;

// address: 0x80117B84
static int t2;

// address: 0x801175FC
extern unsigned char tFountainFlag;

// address: 0x80117BD8
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x80117CD4
static int talker;

// address: 0x80116E07
extern unsigned char talkflag;

// address: 0x800D052C
// size: 0x24
extern int talkname[9];

// address: 0x80117BC4
static long talkofs;

// address: 0x80117CE0
static unsigned char *tbuff;

// address: 0x80117BFC
static int tem;

// address: 0x800A8328
// size: 0x100
extern char tempstr[256];

// address: 0x800FDBA4
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x801175A0
extern int themeCount;

// address: 0x801175F4
extern int themeVar1;

// address: 0x801175EC
extern int themex;

// address: 0x801175F0
extern int themey;

// address: 0x80118638
extern int they_pressed;

// address: 0x80117174
extern int tile;

// address: 0x80116468
extern int time_in_frames;

// address: 0x80118914
// size: 0x2
extern char tmdc_pol_dirty[2];

// address: 0x80113E0C
// size: 0x8
extern int tmdc_pol_dirty[2];

// address: 0x801167C0
// size: 0x5C
extern struct TASK *tonys;

// address: 0x801167A8
extern int tonys_Task;

// address: 0x80113954
static int toppos;

// address: 0x80117724
extern char totalmonsters;

// address: 0x800A8D18
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x8011718C
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x80117068
extern int trapdir;

// address: 0x80117064
extern int trapid;

// address: 0x801175FD
extern unsigned char treasureFlag;

// address: 0x80116ED6
extern unsigned char trigdebug;

// address: 0x800D4AC8
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x800FDB5C
// size: 0x24
extern int trm3x[9];

// address: 0x800FDB80
// size: 0x24
extern int trm3y[9];

// address: 0x800FDA94
// size: 0x64
extern int trm5x[25];

// address: 0x800FDAF8
// size: 0x64
extern int trm5y[25];

// address: 0x800A667C
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800A6304
// size: 0x140
extern struct KEY_ASSIGNS txt_actions[20];

// address: 0x80116B94
static unsigned char uc;

// address: 0x80116FB8
extern unsigned char uitemflag;

// address: 0x80117728
extern int uniquetrans;

// address: 0x80119064
extern bool user_start;

// address: 0x800B0438
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x80113D1C
extern int vbuf;

// address: 0x801169B0
extern char visible_level;

// address: 0x80116ED1
extern unsigned char visiondebug;

// address: 0x80116FE0
extern int visionid;

// address: 0x80113D14
extern unsigned char *vlc_buf;

// address: 0x80113D10
extern unsigned char *vlc_tab;

// address: 0x80113DEC
// size: 0x8
extern char *vlcbuf[2];

// address: 0x80113E64
extern unsigned short *vlctab;

// address: 0x800A5E08
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x801169AC
extern unsigned short water_clut;

// address: 0x801169A8
extern unsigned int water_count;

// address: 0x801175EA
extern unsigned char weaponFlag;

// address: 0x80117C04
static int weird;

// address: 0x80120E9C
extern int whatmon;

// address: 0x800E5218
// size: 0xBE0
extern struct ItemStruct_dup_11 witchitem[20];

// address: 0x800E65A4
// size: 0xBE0
extern struct ItemStruct_dup_13 witchitem[20];

// address: 0x800D1458
// size: 0xB90
extern struct ItemStruct witchitem[20];

// address: 0x800D13D0
// size: 0xBE0
extern struct ItemStruct_dup_6 witchitem[20];

// address: 0x800D2538
// size: 0xBE0
extern struct ItemStruct witchitem[20];

// address: 0x800BE068
// size: 0x18
static int xoff[6];

// address: 0x800BE038
// size: 0x18
static int ypos[6];

// address: 0x801175E4
extern int zharlib;

// address: 0x80032F94
// line start: 2131
// line end:   2147
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x8008DFE0
// line start: 85
// line end:   86
void AS_CallBack0__Fi(int handle) {
}


// address: 0x8008DFF4
// line start: 90
// line end:   91
void AS_CallBack1__Fi(int handle) {
}


// address: 0x8008E190
// line start: 184
// line end:   188
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8008E184
// line start: 173
// line end:   174
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008E1BC
// line start: 199
// line end:   241
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x8008E0E4
// line start: 147
// line end:   163
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8008E008
// line start: 101
// line end:   124
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80085198
// line start: 65
// line end:   92
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x8009E314
// line start: 2196
// line end:   2208
void ActivateMemcard__Fv() {
}


// address: 0x80079200
// line start: 504
// line end:   512
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x8004E32C
// line start: 690
// line end:   701
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x800367BC
// line start: 98
// line end:   102
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x8003C0A0
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


// address: 0x80046BD0
// line start: 1101
// line end:   1119
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x800476F0
// line start: 1089
// line end:   1105
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x80078F14
// line start: 436
// line end:   444
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x8004D75C
// line start: 406
// line end:   443
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x800311C4
// line start: 1131
// line end:   1134
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80058CF0
// line start: 897
// line end:   960
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct_dup_4 *ptrplr, int lvl, long exp) {
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


// address: 0x80058FF4
// line start: 897
// line end:   960
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct_dup_11 *ptrplr, int lvl, long exp) {
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


// address: 0x8005976C
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


// address: 0x800596DC
// line start: 898
// line end:   961
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct_dup_6 *ptrplr, int lvl, long exp) {
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


// address: 0x80059690
// line start: 899
// line end:   962
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct_dup_13 *ptrplr, int lvl, long exp) {
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


// address: 0x800594E0
// line start: 898
// line end:   961
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct_dup_7 *ptrplr, int lvl, long exp) {
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


// address: 0x800615F8
// line start: 4498
// line end:   4498
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80059978
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


// address: 0x80064560
// line start: 274
// line end:   278
void AddSLine__Fi(int y) {
}


// address: 0x800645B0
// line start: 284
// line end:   285
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800645D8
// line start: 294
// line end:   303
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80067520
// line start: 1398
// line end:   1403
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct_dup_11 itm, int i) {
}


// address: 0x800684A4
// line start: 1351
// line end:   1356
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067B70
// line start: 1351
// line end:   1356
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct_dup_6 itm, int i) {
}


// address: 0x80067BE0
// line start: 1414
// line end:   1419
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct_dup_13 itm, int i) {
}


// address: 0x800662CC
// line start: 1078
// line end:   1087
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct_dup_11 itm, int i) {
}


// address: 0x80066964
// line start: 1080
// line end:   1089
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct_dup_13 itm, int i) {
}


// address: 0x800672C4
// line start: 1039
// line end:   1048
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006695C
// line start: 1039
// line end:   1048
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct_dup_6 itm, int i) {
}


// address: 0x8006566C
// line start: 793
// line end:   814
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct_dup_13 *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80064FD4
// line start: 791
// line end:   812
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct_dup_11 *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006600C
// line start: 760
// line end:   781
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065690
// line start: 760
// line end:   781
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct_dup_6 *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800224F0
// line start: 707
// line end:   713
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8008E8C4
// line start: 57
// line end:   63
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80047784
// line start: 1110
// line end:   1116
void AddUnLight__Fi(int i) {
}


// address: 0x80047A50
// line start: 1317
// line end:   1333
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80046EEC
// line start: 1342
// line end:   1358
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


// address: 0x8007A000
// line start: 149
// line end:   178
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 3
	register int mi;
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

// address: 0x8009BB60
// line start: 88
// line end:   114
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
}


// address: 0x8009B730
// line start: 88
// line end:   129
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x800969F4
// line start: 721
// line end:   744
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct_dup_13 *ptrplr) {
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


// address: 0x80093CE4
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


// address: 0x80096938
// line start: 721
// line end:   744
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT R;
	// register: 22
	// size: 0xE0
	register struct CBlocks_dup_14 *TheBlocks;
	// register: 21
	register int ScrXOff;
	// register: 20
	register int ScrYOff;
	// register: 17
	register int OtPos;
}


// address: 0x800948C4
// line start: 722
// line end:   745
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


// address: 0x80095C78
// line start: 661
// line end:   684
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct_dup_11 *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80095268
// line start: 668
// line end:   692
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct_dup_6 *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80095620
// line start: 668
// line end:   691
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT_dup_7 *this, struct PlayerStruct_dup_7 *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x800957C0
// line start: 696
// line end:   703
void ApocUpdate__11SPELLFX_DAT(struct SPELLFX_DAT_dup_7 *this) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x80093E90
// line start: 697
// line end:   704
void ApocUpdate__11SPELLFX_DAT(struct SPELLFX_DAT *this) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x80093798
// line start: 715
// line end:   734
void ApocaStart__Fi(int plr) {
}


// address: 0x8007A2B8
// line start: 129
// line end:   200
void AppMain() {
}


// address: 0x8007BA14
// line start: 133
// line end:   220
void AppMain() {
	{
		// register: 16
		register int option_file;
		{
			{
				// register: 16
				register int option_file;
			}
		}
	}
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


// address: 0x8008163C
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


// address: 0x80081710
// line start: 484
// line end:   515
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


// address: 0x8005D804
// line start: 3237
// line end:   3262
void ArmorDur__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8005E08C
// line start: 3304
// line end:   3329
void ArmorDur__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8005D910
// line start: 3276
// line end:   3301
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


// address: 0x8005E348
// line start: 3276
// line end:   3301
void ArmorDur__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x98
	register struct ItemStruct_dup_6 *pi;
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


// address: 0x8005E2F8
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


// address: 0x8005DB5C
// line start: 3292
// line end:   3317
void ArmorDur__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x98
	register struct ItemStruct_dup_11 *pi;
}


// address: 0x8005E1EC
// line start: 3303
// line end:   3328
void ArmorDur__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x98
	register struct ItemStruct_dup_13 *pi;
}


// address: 0x800202C0
// line start: 705
// line end:   711
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

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


// address: 0x8009C374
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


// address: 0x8009BFBC
// line start: 224
// line end:   244
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C62C
// line start: 434
// line end:   438
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C0FC
// line start: 266
// line end:   282
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C180
// line start: 290
// line end:   303
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


// address: 0x8009C2D0
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


// address: 0x8009BE54
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


// address: 0x8009F574
// line start: 186
// line end:   192
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C620
// line start: 424
// line end:   425
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C0C0
// line start: 255
// line end:   257
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009C22C
// line start: 311
// line end:   321
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x80082D50
// line start: 568
// line end:   570
void BL_AsyncLoadCallBack__Fi(int handle) {
}


// address: 0x80080AF4
// line start: 505
// line end:   507
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80082EF8
// line start: 655
// line end:   691
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80082B18
// line start: 641
// line end:   673
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 3
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x80080B00
// line start: 512
// line end:   529
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
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


// address: 0x80080C90
// line start: 597
// line end:   604
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x800809B4
// line start: 384
// line end:   386
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x800809D8
// line start: 398
// line end:   404
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x80080818
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


// address: 0x800829EC
// size: 0x14
// line start: 377
// line end:   421
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


// address: 0x8008BB70
// size: 0xE0
// line start: 2130
// line end:   2137
struct CBlocks_dup_14 *BL_GetCurrentBlocks__Fv() {
}


// address: 0x80089354
// size: 0xE0
// line start: 2114
// line end:   2121
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008C8A8
// size: 0xDC
// line start: 2100
// line end:   2107
struct CBlocks_dup_1 *BL_GetCurrentBlocks__Fv() {
}


// address: 0x800889F4
// size: 0xE0
// line start: 2080
// line end:   2087
struct CBlocks_dup_4 *BL_GetCurrentBlocks__Fv() {
}


// address: 0x800800DC
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


// address: 0x800802F4
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


// address: 0x80082004
// line start: 230
// line end:   264
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


// address: 0x80080B6C
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


// address: 0x80082D80
// line start: 598
// line end:   645
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


// address: 0x80082974
// line start: 585
// line end:   631
long BL_LoadFileAsync__FPcc(char *Name, char LumpID) {
	// register: 17
	// size: 0x14
	register struct STRHDR *sh;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int Size;
	// register: 16
	register int ah;
	// register: 18
	register long MyHnd;
	// register: 16
	register unsigned char *LoadAddr;
}


// address: 0x800822A8
// line start: 529
// line end:   570
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


// address: 0x80080A0C
// line start: 414
// line end:   495
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80080CC8
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


// address: 0x80080460
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


// address: 0x80080718
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


// address: 0x80080C64
// size: 0x14
// line start: 578
// line end:   582
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x800801C8
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


// address: 0x80082D04
// line start: 561
// line end:   563
void BL_WaitForAsyncFinish__Fv() {
}


// address: 0x80083D88
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


// address: 0x80086590
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
	auto struct CBlocks_dup_1 MyBlocks;
	// address: 0xFFFFFEC0
	// size: 0x80
	auto struct CPlayer_dup_1 MyPlayer;
	// address: 0xFFFFFF40
	// size: 0x80
	auto struct CPlayer_dup_1 MyPlayer2;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct GPanel_dup_1 P1Panel;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct GPanel_dup_1 P2Panel;
}


// address: 0x8008EFEC
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


// address: 0x80091A00
// line start: 430
// line end:   612
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


// address: 0x8008E928
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
	auto struct CBlocks_dup_4 MyBlocks;
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


// address: 0x80091E60
// line start: 438
// line end:   625
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
	auto struct CBlocks_dup_14 MyBlocks;
	// address: 0xFFFFFEB0
	// size: 0x84
	auto struct CPlayer_dup_14 MyPlayer;
	// address: 0xFFFFFF38
	// size: 0x84
	auto struct CPlayer_dup_14 MyPlayer2;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct GPanel_dup_14 P1Panel;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct GPanel_dup_14 P2Panel;
}


// address: 0x8009BB08
// line start: 72
// line end:   79
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009EAD4
// line start: 160
// line end:   183
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
			register struct PlayerStruct_dup_11 *player;
		}
	}
}


// address: 0x8009FA58
// line start: 160
// line end:   183
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
			register struct PlayerStruct_dup_13 *player;
		}
	}
}


// address: 0x8009E974
// line start: 160
// line end:   183
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


// address: 0x8009BD20
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


// address: 0x8009BCA4
// line start: 124
// line end:   134
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x80077F54
// line start: 203
// line end:   215
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x800819DC
// line start: 275
// line end:   307
void BothNewVal__4CPadUsUs(struct CPad_dup_4 *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x80082134
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


// address: 0x8006C48C
// line start: 2586
// line end:   2597
void BoyBuyItem__Fv() {
}


// address: 0x8005763C
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


// address: 0x8005744C
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


// address: 0x80060594
// line start: 4566
// line end:   4566
void BreakObject__FP12PlayerStructi(struct PlayerStruct_dup_13 *ptrplr, int val) {
}


// address: 0x8005FAB4
// line start: 4493
// line end:   4493
void BreakObject__FP12PlayerStructi(struct PlayerStruct_dup_4 *ptrplr, int val) {
}


// address: 0x8005FEFC
// line start: 4555
// line end:   4555
void BreakObject__FP12PlayerStructi(struct PlayerStruct_dup_11 *ptrplr, int val) {
}


// address: 0x80060F60
// line start: 4469
// line end:   4469
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060434
// line start: 4566
// line end:   4566
void BreakObject__FP12PlayerStructi(struct PlayerStruct_dup_7 *ptrplr, int val) {
}


// address: 0x800606C8
// line start: 4532
// line end:   4532
void BreakObject__FP12PlayerStructi(struct PlayerStruct_dup_6 *ptrplr, int val) {
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


// address: 0x80057B90
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


// address: 0x8003249C
// line start: 2258
// line end:   2451
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


// address: 0x8007AD30
// line start: 308
// line end:   354
void BuildCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps_dup_6 *this, struct CompLevelMemImage *Dest) {
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


// address: 0x80079A88
// line start: 308
// line end:   354
void BuildCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps_dup_5 *this, struct CompLevelMemImage *Dest) {
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


// address: 0x80079204
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


// address: 0x80071E04
// line start: 613
// line end:   736
void ButtonDown__7GamePadi(struct GamePad_dup_14 *this, int button) {
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


// address: 0x80071C80
// line start: 613
// line end:   736
void ButtonDown__7GamePadi(struct GamePad_dup_13 *this, int button) {
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


// address: 0x80071704
// line start: 598
// line end:   710
void ButtonDown__7GamePadi(struct GamePad_dup_7 *this, int button) {
}


// address: 0x80070778
// line start: 597
// line end:   709
void ButtonDown__7GamePadi(struct GamePad_dup_5 *this, int button) {
}


// address: 0x80071954
// line start: 598
// line end:   710
void ButtonDown__7GamePadi(struct GamePad_dup_8 *this, int button) {
}


// address: 0x800714F8
// line start: 586
// line end:   709
void ButtonDown__7GamePadi(struct GamePad_dup_11 *this, int button) {
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


// address: 0x80071980
// line start: 598
// line end:   710
void ButtonDown__7GamePadi(struct GamePad_dup_6 *this, int button) {
}


// address: 0x8007066C
// line start: 597
// line end:   709
void ButtonDown__7GamePadi(struct GamePad_dup_4 *this, int button) {
}


// address: 0x800720E0
// line start: 514
// line end:   625
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80071758
// line start: 594
// line end:   717
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


// address: 0x8007FD30
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


// address: 0x8003E78C
// line start: 1408
// line end:   1414
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x80073E04
// line start: 218
// line end:   220
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x8003C4B4
// line start: 1023
// line end:   1046
void CalcPlrBookVals__Fi(int p) {
	// register: 17
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003D5D0
// line start: 1023
// line end:   1046
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x80060F94
// line start: 4470
// line end:   4470
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x800606FC
// line start: 4533
// line end:   4533
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct_dup_6 *ptrplr, unsigned char bl) {
}


// address: 0x80060468
// line start: 4567
// line end:   4567
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct_dup_7 *ptrplr, unsigned char bl) {
}


// address: 0x8005FAE8
// line start: 4494
// line end:   4494
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct_dup_4 *ptrplr, unsigned char bl) {
}


// address: 0x800605C8
// line start: 4567
// line end:   4567
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct_dup_13 *ptrplr, unsigned char bl) {
}


// address: 0x8005FF30
// line start: 4556
// line end:   4556
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct_dup_11 *ptrplr, unsigned char bl) {
}


// address: 0x8003D864
// line start: 1051
// line end:   1061
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003C418
// line start: 1002
// line end:   1017
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


// address: 0x8003C3DC
// line start: 1002
// line end:   1017
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *p;
}


// address: 0x8003C718
// line start: 1002
// line end:   1017
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x98
	register struct ItemStruct_dup_13 *pi;
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *p;
}


// address: 0x8003C620
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
	register struct PlayerStruct_dup_7 *p;
}


// address: 0x8003C61C
// line start: 1002
// line end:   1017
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x98
	register struct ItemStruct_dup_11 *pi;
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *p;
}


// address: 0x8003C840
// line start: 1002
// line end:   1017
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x98
	register struct ItemStruct_dup_6 *pi;
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *p;
}


// address: 0x8003D4F0
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


// address: 0x8003C478
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


// address: 0x8003B3F8
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


// address: 0x8003B3BC
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
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *ptrplr;
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


// address: 0x8003B5A4
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
	register struct PlayerStruct_dup_11 *ptrplr;
	{
		{
			// register: 5
			// size: 0x98
			register struct ItemStruct_dup_11 *itm;
			{
				{
					// register: 3
					register int tmpac;
				}
			}
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
	register struct PlayerStruct_dup_6 *ptrplr;
	{
		{
			// register: 5
			// size: 0x98
			register struct ItemStruct_dup_6 *itm;
			{
				{
					// register: 3
					register int tmpac;
				}
			}
		}
	}
}


// address: 0x8003B5A8
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
	register struct PlayerStruct_dup_7 *ptrplr;
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


// address: 0x8003B6A0
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
	register struct PlayerStruct_dup_13 *ptrplr;
	{
		{
			// register: 5
			// size: 0x98
			register struct ItemStruct_dup_13 *itm;
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
// line start: 895
// line end:   925
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003C19C
// line start: 934
// line end:   942
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003C5F8
// line start: 934
// line end:   942
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003C3D4
// line start: 934
// line end:   942
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003C3D8
// line start: 934
// line end:   942
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003C4D0
// line start: 934
// line end:   942
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003D2A8
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


// address: 0x8003C470
// line start: 946
// line end:   986
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *p;
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


// address: 0x8003C238
// line start: 946
// line end:   986
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *p;
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


// address: 0x8003C474
// line start: 946
// line end:   986
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *p;
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


// address: 0x8003D344
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


// address: 0x8003C274
// line start: 946
// line end:   986
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


// address: 0x8003C56C
// line start: 946
// line end:   986
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *p;
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


// address: 0x8003C694
// line start: 946
// line end:   986
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *p;
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


// address: 0x80058E1C
// line start: 842
// line end:   848
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x800594B8
// line start: 844
// line end:   850
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80059594
// line start: 842
// line end:   848
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80059308
// line start: 843
// line end:   849
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80059504
// line start: 843
// line end:   849
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80058B18
// line start: 842
// line end:   848
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x800612F4
// line start: 4488
// line end:   4488
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80047F34
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


// address: 0x8009AB60
// line start: 1576
// line end:   1601
void CalcVolumes__Fv() {
}


// address: 0x800610B8
// line start: 4476
// line end:   4476
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006058C
// line start: 4573
// line end:   4573
int CalculateGold__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x80060054
// line start: 4562
// line end:   4562
int CalculateGold__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x80060820
// line start: 4539
// line end:   4539
int CalculateGold__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x800606EC
// line start: 4573
// line end:   4573
int CalculateGold__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x8005FC0C
// line start: 4500
// line end:   4500
int CalculateGold__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x800797F4
// line start: 620
// line end:   651
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80082DB8
// line start: 246
// line end:   246
bool CanXferFrame__7TextDat(struct TextDat_dup_1 *this) {
}


// address: 0x8007F978
// line start: 243
// line end:   243
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x80081460
// line start: 243
// line end:   243
bool CanXferFrame__C7TextDat(struct TextDat_dup_14 *this) {
}


// address: 0x80082DE0
// line start: 243
// line end:   243
bool CanXferPal__7TextDat(struct TextDat_dup_1 *this) {
}


// address: 0x8008CDF4
// line start: 243
// line end:   243
bool CanXferPal__7TextDat_addr_8008CDF4(struct TextDat_dup_1 *this) {
}


// address: 0x8007F9A0
// line start: 242
// line end:   242
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x80081488
// line start: 242
// line end:   242
bool CanXferPal__C7TextDat(struct TextDat_dup_14 *this) {
}


// address: 0x800983B4
// line start: 279
// line end:   285
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x80044988
// line start: 3727
// line end:   3729
void CastScroll__Fi(int pnum) {
}


// address: 0x80043DA4
// line start: 3732
// line end:   3735
void CastScroll__Fii(int pnum, int Spell) {
}


// address: 0x80070A50
// line start: 171
// line end:   194
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x8009A204
// line start: 1523
// line end:   1658
void CentrePad__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad_dup_4 *P;
	// register: 16
	register int move;
	// register: 18
	// size: 0x18
	register struct OMENUITEM_dup_4 *iptr;
	{
		{
			// register: 5
			register int lcs;
		}
	}
}


// address: 0x8009ADE8
// line start: 1501
// line end:   1604
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


// address: 0x8009A5E4
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


// address: 0x80046D48
// line start: 1216
// line end:   1218
void ChangeLightColour__Fii(int i, int c) {
	// register: 4
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x8004789C
// line start: 1198
// line end:   1199
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x80046CDC
// line start: 1182
// line end:   1195
void ChangeLightOff__Fiii(int i, int x, int y) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80047820
// line start: 1166
// line end:   1178
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x800477B4
// line start: 1121
// line end:   1131
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80046C98
// line start: 1151
// line end:   1163
void ChangeLightXY__Fiii(int i, int x, int y) {
	// register: 3
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x800477E0
// line start: 1136
// line end:   1147
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80046D10
// line start: 1200
// line end:   1213
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	// register: 2
	// size: 0x8
	register struct LightListStruct2 *ll;
}


// address: 0x80047858
// line start: 1183
// line end:   1195
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x80047B54
// line start: 1356
// line end:   1369
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80047C08
// line start: 1374
// line end:   1388
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x8004701C
// line start: 1399
// line end:   1415
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 9
	register int i;
	// register: 8
	// size: 0xE
	register struct LightListStruct *vl;
}


// address: 0x80079DEC
// line start: 283
// line end:   284
int CharPair2Num__FPc(char *Str) {
}


// address: 0x80081EE8
// line start: 85
// line end:   85
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8008152C
// line start: 85
// line end:   85
unsigned char CheckActive__4CPad(struct CPad_dup_4 *this) {
}


// address: 0x80081C9C
// line start: 85
// line end:   85
unsigned char CheckActive__4CPad_addr_80081C9C(struct CPad_dup_4 *this) {
}


// address: 0x80081E90
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_80081E90(struct CPad *this) {
}


// address: 0x80082610
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_80082610(struct CPad *this) {
}


// address: 0x80082658
// line start: 85
// line end:   85
unsigned char CheckActive__4CPad_addr_80082658(struct CPad *this) {
}


// address: 0x80083910
// line start: 85
// line end:   85
unsigned char CheckActive__4CPad_addr_80083910(struct CPad *this) {
}


// address: 0x80083E60
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_80083E60(struct CPad *this) {
}


// address: 0x80083E94
// line start: 85
// line end:   85
unsigned char CheckActive__4CPad_addr_80083E94(struct CPad *this) {
}


// address: 0x80083F10
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_80083F10(struct CPad *this) {
}


// address: 0x800840D4
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_800840D4(struct CPad *this) {
}


// address: 0x8008411C
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_8008411C(struct CPad *this) {
}


// address: 0x800842B0
// line start: 85
// line end:   85
unsigned char CheckActive__4CPad_addr_800842B0(struct CPad *this) {
}


// address: 0x8008436C
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_8008436C(struct CPad *this) {
}


// address: 0x800845E0
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_800845E0(struct CPad *this) {
}


// address: 0x80084678
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_80084678(struct CPad *this) {
}


// address: 0x8008489C
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_8008489C(struct CPad *this) {
}


// address: 0x80084AEC
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad_addr_80084AEC(struct CPad *this) {
}


// address: 0x80097174
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


// address: 0x80098CD0
// line start: 1430
// line end:   1484
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *player;
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


// address: 0x80097694
// line start: 1419
// line end:   1473
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


// address: 0x800993E4
// line start: 1264
// line end:   1318
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *player;
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


// address: 0x80099FA0
// line start: 1284
// line end:   1341
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *player;
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


// address: 0x80099020
// line start: 1444
// line end:   1498
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *player;
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


// address: 0x80099EFC
// line start: 1287
// line end:   1344
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


// address: 0x80096A84
// line start: 1419
// line end:   1473
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *player;
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


// address: 0x800725B4
// line start: 915
// line end:   1025
int CheckBodge__7GamePadi(struct GamePad_dup_14 *this, int dir) {
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


// address: 0x80071D18
// line start: 834
// line end:   925
int CheckBodge__7GamePadi(struct GamePad_dup_7 *this, int dir) {
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


// address: 0x80071F94
// line start: 834
// line end:   925
int CheckBodge__7GamePadi(struct GamePad_dup_6 *this, int dir) {
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


// address: 0x80071F68
// line start: 834
// line end:   928
int CheckBodge__7GamePadi(struct GamePad_dup_8 *this, int dir) {
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


// address: 0x80072430
// line start: 915
// line end:   1025
int CheckBodge__7GamePadi(struct GamePad_dup_13 *this, int dir) {
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


// address: 0x80070C80
// line start: 833
// line end:   924
int CheckBodge__7GamePadi(struct GamePad_dup_4 *this, int dir) {
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


// address: 0x80072154
// line start: 835
// line end:   931
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


// address: 0x80071BA4
// line start: 835
// line end:   931
int CheckBodge__7GamePadi(struct GamePad_dup_11 *this, int dir) {
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


// address: 0x80070D8C
// line start: 833
// line end:   924
int CheckBodge__7GamePadi(struct GamePad_dup_5 *this, int dir) {
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


// address: 0x80071F3C
// line start: 910
// line end:   1020
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


// address: 0x800726B4
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


// address: 0x80071CA8
// line start: 768
// line end:   811
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x800721D0
// line start: 787
// line end:   830
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct_dup_13 *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x8005ECD0
// line start: 3816
// line end:   3833
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8005EEE8
// line start: 3727
// line end:   3744
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EF64
// line start: 3784
// line end:   3801
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x8005E3B0
// line start: 3745
// line end:   3762
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005E7AC
// line start: 3805
// line end:   3822
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x8005EE3C
// line start: 3816
// line end:   3833
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x80033BDC
// line start: 2650
// line end:   2687
void CheckChrBtns__Fv() {
	// register: 16
	register int pc;
}


// address: 0x80034C18
// line start: 2632
// line end:   2687
void CheckChrBtns__Fv() {
	// register: 5
	register int pc;
}


// address: 0x80020DA8
// line start: 1549
// line end:   1574
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x800365B8
// line start: 264
// line end:   756
void CheckCursMove__Fv() {
}


// address: 0x8009F5AC
// line start: 335
// line end:   362
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


// address: 0x80071E38
// line start: 760
// line end:   806
int CheckDirs__7GamePadi(struct GamePad_dup_6 *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80070B24
// line start: 759
// line end:   805
int CheckDirs__7GamePadi(struct GamePad_dup_4 *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071BBC
// line start: 760
// line end:   806
int CheckDirs__7GamePadi(struct GamePad_dup_7 *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071A48
// line start: 761
// line end:   807
int CheckDirs__7GamePadi(struct GamePad_dup_11 *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071E0C
// line start: 760
// line end:   806
int CheckDirs__7GamePadi(struct GamePad_dup_8 *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80072448
// line start: 841
// line end:   887
int CheckDirs__7GamePadi(struct GamePad_dup_14 *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x800722C4
// line start: 841
// line end:   887
int CheckDirs__7GamePadi(struct GamePad_dup_13 *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80070C30
// line start: 759
// line end:   805
int CheckDirs__7GamePadi(struct GamePad_dup_5 *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80072558
// line start: 669
// line end:   715
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x800226F8
// line start: 848
// line end:   857
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x80042968
// line start: 2961
// line end:   2971
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct_dup_6 *pi;
}


// address: 0x80042748
// line start: 2961
// line end:   2971
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x800428FC
// line start: 2994
// line end:   3004
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct_dup_13 *pi;
}


// address: 0x800434EC
// line start: 2961
// line end:   2971
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8004281C
// line start: 2982
// line end:   2992
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct_dup_11 *pi;
}


// address: 0x800597BC
// line start: 1271
// line end:   1297
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFA0
	// size: 0x60
	auto struct bbssbb bodge[12];
	{
		// register: 4
		register int i;
	}
}


// address: 0x80059B44
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


// address: 0x8005937C
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


// address: 0x800792C8
// line start: 82
// line end:   82
void CheckMapNum__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x8007B600
// line start: 82
// line end:   82
void CheckMapNum__13CompLevelMapsi(struct CompLevelMaps_dup_14 *this, int MapNum) {
}


// address: 0x8007A478
// line start: 76
// line end:   80
void CheckMaxArgs__Fv() {
}


// address: 0x8005DAC4
// line start: 3330
// line end:   3633
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E4AC
// line start: 3396
// line end:   3703
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E34C
// line start: 3397
// line end:   3704
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E58C
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


// address: 0x8005E608
// line start: 3369
// line end:   3672
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005DE1C
// line start: 3385
// line end:   3692
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x80061814
// line start: 4506
// line end:   4506
void CheckNewPath__Fi(int pnum) {
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


// address: 0x8003061C
// line start: 1548
// line end:   1639
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


// address: 0x8005E948
// line start: 3999
// line end:   4090
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x24
	register struct Spell_Target_dup_4 *spl;
	// register: 5
	register unsigned char addflag;
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *player;
	// register: 3
	register int rspell;
}


// address: 0x8005F3E4
// line start: 4070
// line end:   4163
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x18
	register struct Spell_Target_dup_13 *spl;
	// register: 5
	register unsigned char addflag;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *player;
	// register: 3
	register int rspell;
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


// address: 0x8005F278
// line start: 4070
// line end:   4163
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
	register struct PlayerStruct_dup_7 *player;
	// register: 3
	register int rspell;
}


// address: 0x8005F468
// line start: 3983
// line end:   4074
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x1C
	register struct Spell_Target *spl;
	// register: 7
	register unsigned char addflag;
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
}


// address: 0x8005EEE4
// line start: 4070
// line end:   4163
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x1C
	register struct Spell_Target_dup_12 *spl;
	// register: 7
	register unsigned char addflag;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
}


// address: 0x8005F604
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
	register struct PlayerStruct_dup_6 *player;
	// register: 3
	register int rspell;
}


// address: 0x8005EA54
// line start: 4038
// line end:   4129
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


// address: 0x8005F5D0
// line start: 4072
// line end:   4165
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


// address: 0x8005ED54
// line start: 4059
// line end:   4152
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
	register struct PlayerStruct_dup_11 *player;
	// register: 3
	register int rspell;
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


// address: 0x80062570
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


// address: 0x80061E80
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


// address: 0x80061628
// line start: 226
// line end:   304
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


// address: 0x80096D9C
// line start: 1311
// line end:   1381
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 10
	register char co;
}


// address: 0x800966D0
// line start: 1344
// line end:   1414
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
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


// address: 0x80035454
// line start: 247
// line end:   279
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


// address: 0x80035BD8
// line start: 3002
// line end:   3038
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 10
	register char st;
}


// address: 0x80034B70
// line start: 3014
// line end:   3057
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


// address: 0x8009AA70
// line start: 286
// line end:   304
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
}


// address: 0x80071CD4
// line start: 817
// line end:   826
int CheckSide__7GamePadi(struct GamePad_dup_7 *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80071F50
// line start: 817
// line end:   826
int CheckSide__7GamePadi(struct GamePad_dup_6 *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80071EE8
// line start: 894
// line end:   902
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x80071B60
// line start: 818
// line end:   827
int CheckSide__7GamePadi(struct GamePad_dup_11 *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80072560
// line start: 899
// line end:   907
int CheckSide__7GamePadi(struct GamePad_dup_14 *this, int dir) {
}


// address: 0x80071F24
// line start: 817
// line end:   826
int CheckSide__7GamePadi(struct GamePad_dup_8 *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80070C3C
// line start: 816
// line end:   825
int CheckSide__7GamePadi(struct GamePad_dup_4 *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x800723DC
// line start: 899
// line end:   907
int CheckSide__7GamePadi(struct GamePad_dup_13 *this, int dir) {
}


// address: 0x80070D48
// line start: 816
// line end:   825
int CheckSide__7GamePadi(struct GamePad_dup_5 *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80072670
// line start: 726
// line end:   735
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x800709B0
// line start: 143
// line end:   164
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x8005FDDC
// line start: 4192
// line end:   4226
void CheckStats__Fi(int p) {
	// register: 7
	register int c;
	// register: 6
	register int i;
}


// address: 0x8005F7EC
// line start: 4280
// line end:   4314
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *player;
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
	register struct PlayerStruct_dup_6 *player;
}


// address: 0x8005F94C
// line start: 4280
// line end:   4314
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *player;
}


// address: 0x8005F9E0
// line start: 4191
// line end:   4225
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x8005EFC8
// line start: 4246
// line end:   4280
void CheckStats__Fi(int p) {
	// register: 5
	register int c;
	// register: 6
	register int i;
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F2B4
// line start: 4269
// line end:   4303
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *player;
}


// address: 0x8005EEBC
// line start: 4207
// line end:   4241
void CheckStats__Fi(int p) {
	// register: 5
	register int c;
	// register: 6
	register int i;
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *player;
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


// address: 0x8006BC04
// line start: 3048
// line end:   3130
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad_dup_4 *Pad;
}


// address: 0x8006D80C
// line start: 3042
// line end:   3124
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x800A0354
// line start: 137
// line end:   174
void CheckStr__FPcT0i(char *s, char *d, int pos) {
	// register: 20
	register char c;
	// register: 17
	register int l;
}


// address: 0x800A23B0
// line start: 135
// line end:   169
void CheckStr__FPcT0i(char *s, char *d, int pos) {
	// register: 20
	register char c;
	// register: 18
	register int l;
}


// address: 0x800351C8
// line start: 211
// line end:   242
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


// address: 0x8006F6D8
// line start: 418
// line end:   471
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


// address: 0x8006FCA8
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


// address: 0x8006F458
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


// address: 0x80070060
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


// address: 0x800418C4
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


// address: 0x8005BA28
// line start: 2431
// line end:   2448
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x800331A4
// line start: 2213
// line end:   2224
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x800860D8
// line start: 88
// line end:   88
void ClearFont__5CFont(struct CFont_dup_1 *this) {
}


// address: 0x8008533C
// line start: 91
// line end:   91
void ClearFont__5CFont(struct CFont_dup_14 *this) {
}


// address: 0x80084ADC
// line start: 91
// line end:   91
void ClearFont__5CFont(struct CFont_dup_10 *this) {
}


// address: 0x80082B68
// line start: 88
// line end:   88
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80078A54
// line start: 311
// line end:   320
void ClearMVars__Fi(int i) {
}


// address: 0x80037464
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


// address: 0x800899D8
// line start: 174
// line end:   178
void ClearOutOverlays__Fv() {
}


// address: 0x80089A30
// line start: 187
// line end:   194
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008D050
// line start: 199
// line end:   206
void ClearOut__7Overlay(struct Overlay_dup_1 *this) {
}


// address: 0x80031274
// line start: 1141
// line end:   1143
void ClearPanel__Fv() {
}


// address: 0x8007AE20
// line start: 365
// line end:   367
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x80058E88
// line start: 574
// line end:   585
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x800587A0
// line start: 573
// line end:   584
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x80058C8C
// line start: 574
// line end:   585
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8005849C
// line start: 573
// line end:   584
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x80058E3C
// line start: 575
// line end:   586
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x80058F18
// line start: 573
// line end:   584
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800644C8
// line start: 255
// line end:   268
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x8007AE5C
// line start: 371
// line end:   372
unsigned char ClearedYet__Fv() {
}


// address: 0x8007AF3C
// line start: 502
// line end:   531
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007199C
// line start: 164
// line end:   172
void CloseInvChr__Fv() {
}


// address: 0x8007094C
// line start: 94
// line end:   99
void ClrCursor__Fi(int num) {
}


// address: 0x8003B9DC
// line start: 171
// line end:   174
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8005F0A0
// line start: 3969
// line end:   3972
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8005F20C
// line start: 3969
// line end:   3972
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x8005E778
// line start: 3898
// line end:   3901
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005EB7C
// line start: 3958
// line end:   3961
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x8005F334
// line start: 3937
// line end:   3940
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x8005F3B8
// line start: 3885
// line end:   3888
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800619DC
// line start: 4512
// line end:   4512
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x800213D0
// line start: 2009
// line end:   2015
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x8007BBB4
// line start: 254
// line end:   274
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x800896B0
// line start: 64
// line end:   76
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


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


// address: 0x8003998C
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x8010DA38
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80117068
	static int snLastCowSFX;
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


// address: 0x800389F8
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x80121730
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012B920
	static int snLastCowSFX;
}


// address: 0x800389D4
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x80121464
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012B614
	static int snLastCowSFX;
}


// address: 0x800389FC
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x8010EB70
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80118B9C
	static int snLastCowSFX;
}


// address: 0x80039964
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x8010D8E4
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80116F38
	static int snLastCowSFX;
}


// address: 0x800388A4
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x8010A6E8
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80114094
	static int snLastCowSFX;
}


// address: 0x800369A8
// line start: 595
// line end:   641
void CowSFX__Fi(int pnum) {
	// address: 0x80120040
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012A3BC
	static int snLastCowSFX;
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


// address: 0x80038AD8
// line start: 595
// line end:   641
void CowSFX__Fi(int pnum) {
	// address: 0x8012258C
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012C858
	static int snLastCowSFX;
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


// address: 0x800388E0
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x8010B764
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x801156E4
	static int snLastCowSFX;
}


// address: 0x80038B3C
// line start: 595
// line end:   641
void CowSFX__Fi(int pnum) {
	// address: 0x80123684
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012D9F8
	static int snLastCowSFX;
}


// address: 0x80038BA8
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x801216A8
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012B838
	static int snLastCowSFX;
}


// address: 0x80038AE0
// line start: 595
// line end:   641
void CowSFX__Fi(int pnum) {
	// address: 0x80122B0C
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012CE40
	static int snLastCowSFX;
}


// address: 0x8004240C
// line start: 2570
// line end:   2584
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x800371E4
// line start: 2444
// line end:   2464
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80045B68
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


// address: 0x80045CE4
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


// address: 0x800590E8
// line start: 719
// line end:   836
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct_dup_6 *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80058A00
// line start: 718
// line end:   835
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct_dup_11 *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x800586FC
// line start: 718
// line end:   835
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct_dup_4 *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80059178
// line start: 718
// line end:   835
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x8005909C
// line start: 720
// line end:   837
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct_dup_13 *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80058EEC
// line start: 719
// line end:   836
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct_dup_7 *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x8006138C
// line start: 4490
// line end:   4490
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80085250
// line start: 97
// line end:   102
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x8005F9E0
// line start: 4489
// line end:   4489
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005FE28
// line start: 4551
// line end:   4551
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x80060E8C
// line start: 4465
// line end:   4465
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060360
// line start: 4562
// line end:   4562
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x800604C0
// line start: 4562
// line end:   4562
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x800605F4
// line start: 4528
// line end:   4528
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x8003CACC
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 4
	register int i;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8003CE48
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct_dup_13 *pi;
}


// address: 0x8003CD50
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003DC20
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8003CF70
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct_dup_6 *pi;
}


// address: 0x8003CD4C
// line start: 1151
// line end:   1262
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct_dup_11 *pi;
}


// address: 0x8004253C
// line start: 2594
// line end:   2609
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x8004275C
// line start: 2635
// line end:   2645
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x800459D8
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


// address: 0x8006E278
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


// address: 0x8004281C
// line start: 2654
// line end:   2669
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800910C4
// line start: 276
// line end:   277
int CurrCheatStr__Fv() {
}


// address: 0x8008532C
// line start: 245
// line end:   274
void CycleSelCols__Fv() {
}


// address: 0x8001F700
// line start: 146
// line end:   158
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001F6D0
// line start: 88
// line end:   92
void DBG_Halt();

// address: 0x8001F6C0
// line start: 53
// line end:   60
unsigned char DBG_OpenModule();

// address: 0x8001F6C8
// line start: 72
// line end:   79
void DBG_PollHost();

// address: 0x8001F6D8
// line start: 108
// line end:   126
void DBG_SendMessage(char *e);

// address: 0x8001F72C
// line start: 164
// line end:   165
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001F6F0
// line start: 135
// line end:   136
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001F744
// line start: 188
// line end:   189
void DBG_SetPollRoutine(void (*Func)());

// address: 0x80097764
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009A584
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat_dup_14 *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009AE60
// line start: 71
// line end:   80
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat_dup_1 *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80097838
// line start: 102
// line end:   107
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x800977E0
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009AEDC
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat_dup_1 *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x8009A600
// line start: 90
// line end:   94
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat_dup_14 *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80091C14
// line start: 103
// line end:   104
void DaveLDummyPoll__Fv() {
}


// address: 0x80093AF4
// line start: 783
// line end:   803
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x80091C1C
// line start: 107
// line end:   109
void DaveL__Fv() {
}


// address: 0x8007B448
// line start: 76
// line end:   77
void DaveOwens__Fv() {
}


// address: 0x8007E0DC
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


// address: 0x80081600
// line start: 987
// line end:   1025
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat_dup_1 *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007FAC8
// line start: 1008
// line end:   1046
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat_dup_14 *this, struct FRAME_HDR_dup_14 *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007ACE8
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


// address: 0x800798E8
// line start: 256
// line end:   300
void DecompToCached__13CompLevelMapsi(struct CompLevelMaps_dup_5 *this, int Val) {
	// register: 17
	// size: 0xF1C
	register struct DLevel_dup_5 *DPtr;
	{
		{
			// register: 19
			register unsigned char *SrcPtr;
		}
	}
}


// address: 0x80079064
// line start: 256
// line end:   300
void DecompToCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
	// register: 17
	// size: 0xF1C
	register struct DLevel_dup_4 *DPtr;
	{
		{
			// register: 19
			register unsigned char *SrcPtr;
		}
	}
}


// address: 0x8007AB90
// line start: 256
// line end:   300
void DecompToCached__13CompLevelMapsi(struct CompLevelMaps_dup_6 *this, int Val) {
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


// address: 0x800792F0
// size: 0x28
// line start: 286
// line end:   313
struct POLY_FT4 *DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos, int XOffSet, int YOffSet) {
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


// address: 0x800760C8
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


// address: 0x800764B0
// size: 0x28
// line start: 287
// line end:   314
struct POLY_FT4 *DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos, int XOffSet, int YOffSet) {
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


// address: 0x8007A350
// line start: 249
// line end:   256
void DelMis__Fii(int mi, int i) {
}


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


// address: 0x800430FC
// line start: 2826
// line end:   2830
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x8004D398
// line start: 307
// line end:   318
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
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


// address: 0x80048FC8
// line start: 461
// line end:   504
void DeltaAddItem__Fi(int ii) {
	// register: 5
	// size: 0x18
	register struct TCmdPItem *pD;
	// register: 8
	register int i;
}


// address: 0x800480E4
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
	register struct DLevel_dup_5 *Dl;
	// register: 8
	register int i;
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


// address: 0x80048108
// line start: 572
// line end:   635
void DeltaAddItem__Fi(int ii) {
	// register: 7
	// size: 0x14
	register struct TCmdPItem_dup_4 *pD;
	// register: 10
	// size: 0x14
	register struct TCmdPItem_dup_4 *OpD;
	// register: 4
	// size: 0xF1C
	register struct DLevel_dup_4 *Dl;
	// register: 8
	register int i;
}


// address: 0x80049208
// line start: 509
// line end:   516
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x80048734
// line start: 640
// line end:   657
int DeltaExportData__FPc(char *Dst) {
	// register: 16
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x800487DC
// line start: 668
// line end:   685
int DeltaImportData__FPc(char *Src) {
	// register: 16
	register int osize;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80049238
// line start: 522
// line end:   529
int DeltaImportData__FPc(char *Src) {
}


// address: 0x8004926C
// line start: 534
// line end:   544
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
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


// address: 0x800224A4
// line start: 689
// line end:   696
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8008E8E4
// line start: 46
// line end:   53
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x800202E0
// line start: 725
// line end:   732
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x8003B80C
// line start: 368
// line end:   418
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x80083200
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


// address: 0x80085478
// size: 0x34
// line start: 204
// line end:   385
struct POLY_GT4 *DialogPrint__Fiiiiiiiiii(int Frm, int X, int Y, int SW, int SH, int UW, int UH, int UOfs, int VOfs, int Trans) {
	// address: 0xFFFFFF78
	// size: 0xC
	auto struct FRAME_HDR_dup_14 *Fr;
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


// address: 0x80082CA4
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


// address: 0x80037084
// line start: 2115
// line end:   2162
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800A2484
// line start: 172
// line end:   247
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


// address: 0x8009CDC0
// line start: 130
// line end:   216
void DisplayMonsterTypes__Fv() {
	// address: 0xFFFFFED8
	// size: 0x100
	auto char Text[256];
	// register: 17
	// size: 0xE0
	register struct CBlocks_dup_4 *MBlocks;
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
	register struct CPad_dup_4 *P;
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


// address: 0x8009D86C
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


// address: 0x800A11A4
// line start: 130
// line end:   216
void DisplayMonsterTypes__Fv() {
	// address: 0xFFFFFED8
	// size: 0x100
	auto char Text[256];
	// register: 17
	// size: 0xE0
	register struct CBlocks_dup_14 *MBlocks;
	// register: 20
	// size: 0x1C
	register struct CMonster *MyCMonst;
	// register: 18
	// size: 0x3C
	register struct MonsterData *MyMonst;
	// register: 17
	// size: 0x6C
	register struct TextDat_dup_14 *CMonstGraphics;
	// register: 19
	// size: 0x6C
	register struct TextDat_dup_14 *ObjGraphics;
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


// address: 0x8007F2B0
// line start: 1718
// line end:   1747
void Display__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80082628
// line start: 1670
// line end:   1699
void Display__7CScreeniii(struct CScreen_dup_1 *this, int Id, int tpx, int tpy) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80080D88
// line start: 1773
// line end:   1802
void Display__7CScreeniiii(struct CScreen_dup_14 *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007ED7C
// line start: 1737
// line end:   1766
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80031538
// line start: 1519
// line end:   1531
void DoAutoMap__Fv() {
}


// address: 0x80079D28
// line start: 406
// line end:   408
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps_dup_5 *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x800794A4
// line start: 406
// line end:   408
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x8007AFD0
// line start: 406
// line end:   408
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps_dup_6 *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x800802B4
// line start: 1356
// line end:   1386
void DoDecompRequests__7TextDat(struct TextDat_dup_14 *this) {
	// register: 17
	register long *DecArray;
	{
		// register: 18
		register int f;
		{
		}
	}
}


// address: 0x8007E8C8
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


// address: 0x80081C44
// line start: 1276
// line end:   1306
void DoDecompRequests__7TextDat(struct TextDat_dup_1 *this) {
	// register: 17
	register long *DecArray;
	{
		// register: 18
		register int f;
		{
		}
	}
}


// address: 0x8007B008
// line start: 412
// line end:   414
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps_dup_6 *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x80079D60
// line start: 412
// line end:   414
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps_dup_5 *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x800794DC
// line start: 412
// line end:   414
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x80021A44
// line start: 88
// line end:   91
void DoEpi(struct TASK *T);

// address: 0x80073960
// line start: 66
// line end:   69
void DoGameTestStuff__Fv() {
}


// address: 0x80070F68
// line start: 241
// line end:   264
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8007398C
// line start: 73
// line end:   76
void DoInitGameStuff__Fv() {
}


// address: 0x800461A8
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


// address: 0x800380E8
// line start: 3524
// line end:   3530
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038110
// line start: 3534
// line end:   3540
void DoMemCardFromInGame__Fv() {
}


// address: 0x8008120C
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


// address: 0x8008079C
// line start: 249
// line end:   309
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


// address: 0x800813E8
// line start: 294
// line end:   393
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


// address: 0x800809C0
// line start: 320
// line end:   419
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
		register struct CPad_dup_4 *P;
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


// address: 0x80021A94
// line start: 99
// line end:   102
void DoPro(struct TASK *T);

// address: 0x800815F0
// line start: 436
// line end:   474
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


// address: 0x80081554
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


// address: 0x80080CC0
// line start: 430
// line end:   463
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


// address: 0x80042A3C
// line start: 3039
// line end:   3057
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *p;
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


// address: 0x80042C5C
// line start: 3039
// line end:   3057
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *p;
	// register: 16
	// size: 0x98
	register struct ItemStruct_dup_6 *pi;
	{
		{
			// register: 2
			register int r;
		}
	}
}


// address: 0x800437E0
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


// address: 0x80042630
// line start: 3039
// line end:   3057
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *p;
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


// address: 0x80042B10
// line start: 3060
// line end:   3078
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *p;
	// register: 16
	// size: 0x98
	register struct ItemStruct_dup_11 *pi;
	{
		{
			// register: 2
			register int r;
		}
	}
}


// address: 0x8004266C
// line start: 3039
// line end:   3057
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


// address: 0x80042BF0
// line start: 3072
// line end:   3090
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *p;
	// register: 16
	// size: 0x98
	register struct ItemStruct_dup_13 *pi;
	{
		{
			// register: 2
			register int r;
		}
	}
}


// address: 0x800918CC
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
	// address: 0x80116B74
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


// address: 0x80091F98
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


// address: 0x80094238
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
	// address: 0x8012B1D8
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


// address: 0x80094398
// line start: 101
// line end:   161
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
	// address: 0x8012C20C
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


// address: 0x80091670
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


// address: 0x80093F60
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
	// address: 0x8012B2E4
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


// address: 0x800938D4
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
	// address: 0x80118554
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


// address: 0x80093D80
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
	// address: 0x8012AFD8
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


// address: 0x80094A10
// line start: 107
// line end:   167
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


// address: 0x80094AB8
// line start: 107
// line end:   167
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
	// address: 0x8012C7EC
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


// address: 0x8009297C
// line start: 107
// line end:   167
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


// address: 0x80091C44
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


// address: 0x80042540
// line start: 3004
// line end:   3017
void DoRepair__Fii(int pnum, int cii) {
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x80042B28
// line start: 3004
// line end:   3017
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct_dup_6 *pi;
}


// address: 0x800436AC
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


// address: 0x80042504
// line start: 3004
// line end:   3017
void DoRepair__Fii(int pnum, int cii) {
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *p;
	// register: 4
	// size: 0x94
	register struct ItemStruct *pi;
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


// address: 0x80042ABC
// line start: 3037
// line end:   3050
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct_dup_13 *pi;
}


// address: 0x800429DC
// line start: 3025
// line end:   3038
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct_dup_11 *pi;
}


// address: 0x80042908
// line start: 3004
// line end:   3017
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80070CB4
// line start: 201
// line end:   236
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x8008AF2C
// line start: 1919
// line end:   1927
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 7
	register int XDiff;
	// register: 4
	register int YDiff;
	// register: 6
	register int divnum;
}


// address: 0x800890DC
// line start: 1921
// line end:   1928
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x8008C630
// line start: 1907
// line end:   1914
void DoScroll__7CBlocks(struct CBlocks_dup_1 *this) {
	// register: 3
	register int YDiff;
}


// address: 0x80089644
// line start: 1936
// line end:   1944
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 4
	register int XDiff;
	// register: 7
	register int YDiff;
	// register: 6
	register int divnum;
}


// address: 0x8008877C
// line start: 1887
// line end:   1894
void DoScroll__7CBlocks(struct CBlocks_dup_4 *this) {
	// register: 3
	register int YDiff;
}


// address: 0x8008B8DC
// line start: 1936
// line end:   1944
void DoScroll__7CBlocks(struct CBlocks_dup_14 *this) {
	// register: 4
	register int XDiff;
	// register: 7
	register int YDiff;
	// register: 6
	register int divnum;
}


// address: 0x80092434
// line start: 386
// line end:   406
void DoShowPanelGFX__FP6GPanelT0(struct GPanel_dup_1 *P1, struct GPanel_dup_1 *P2) {
}


// address: 0x8008EF14
// line start: 386
// line end:   406
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x80091D88
// line start: 407
// line end:   427
void DoShowPanelGFX__FP6GPanelT0(struct GPanel_dup_14 *P1, struct GPanel_dup_14 *P2) {
}


// address: 0x80069A00
// line start: 1658
// line end:   1711
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80046E58
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


// address: 0x80046334
// line start: 777
// line end:   831
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


// address: 0x8004709C
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


// address: 0x80047160
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


// address: 0x800766FC
// size: 0x28
// line start: 354
// line end:   430
struct POLY_FT4 *DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
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
	register struct FRAME_HDR_dup_14 *PalFr;
	// register: 16
	// size: 0x6C
	register struct TextDat_dup_14 *ThisDat;
	// register: 3
	register int LoadIndex;
	// register: 23
	register int Creature;
	{
		{
		}
	}
}


// address: 0x80076314
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


// address: 0x8007953C
// size: 0x28
// line start: 353
// line end:   418
struct POLY_FT4 *DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
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


// address: 0x8004F0A8
// line start: 1068
// line end:   1089
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x80063F34
// line start: 326
// line end:   384
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x80093CE8
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


// address: 0x80096EB0
// line start: 90
// line end:   117
void DrawArrow__Fii(int x1, int y1) {
	// register: 22
	// size: 0x18
	register struct Spell_Target_dup_13 *spl;
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


// address: 0x800965F0
// line start: 88
// line end:   115
void DrawArrow__Fii(int x1, int y1) {
	// register: 22
	// size: 0x1C
	register struct Spell_Target_dup_12 *spl;
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


// address: 0x80096DF4
// line start: 90
// line end:   117
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


// address: 0x80094324
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


// address: 0x80093970
// line start: 94
// line end:   128
void DrawArrow__Fii(int x1, int y1) {
	// register: 19
	register int bright;
	// register: 18
	// size: 0x1C
	register struct Spell_Target *spl;
	// register: 23
	register char r;
	// register: 22
	register char b;
	{
		// register: 20
		register int i;
	}
}


// address: 0x80093714
// line start: 95
// line end:   122
void DrawArrow__Fii(int x1, int y1) {
	// register: 22
	// size: 0x24
	register struct Spell_Target_dup_4 *spl;
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


// address: 0x80033270
// line start: 2232
// line end:   2253
void DrawArrows__Fv() {
	// register: 18
	// size: 0x68
	register struct TextDat_dup_1 *ThisDat;
	// register: 10
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 16
	register unsigned char flip;
	// register: 17
	register int x;
}


// address: 0x80032158
// line start: 2265
// line end:   2286
void DrawArrows__Fv() {
	// register: 18
	// size: 0x6C
	register struct TextDat_dup_14 *ThisDat;
	// register: 10
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 16
	register unsigned char flip;
	// register: 17
	register int x;
}


// address: 0x80033270
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


// address: 0x80033A64
// line start: 2607
// line end:   2628
void DrawChrTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
}


// address: 0x80034AE4
// line start: 2594
// line end:   2610
void DrawChrTSK__FP4TASK(struct TASK *T) {
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


// address: 0x800335FC
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
	register struct CPad_dup_4 *P;
	{
		{
			// register: 18
			register int llus;
			// register: 16
			register int move;
		}
	}
}


// address: 0x8003150C
// line start: 1436
// line end:   1439
void DrawCtrlPan__Fv() {
}


// address: 0x80092554
// line start: 738
// line end:   814
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


// address: 0x8009098C
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


// address: 0x80092FB4
// line start: 663
// line end:   737
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 20
	register int pnum;
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


// address: 0x800936E4
// line start: 690
// line end:   768
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


// address: 0x80090234
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


// address: 0x8003BA08
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


// address: 0x80098498
// line start: 546
// line end:   555
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x80033D9C
// line start: 2699
// line end:   2739
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct_dup_11 *pItem, int x, int c) {
}


// address: 0x80033E58
// line start: 2724
// line end:   2764
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct_dup_13 *pItem, int x, int c) {
}


// address: 0x80034074
// line start: 2694
// line end:   2734
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct_dup_6 *pItem, int x, int c) {
}


// address: 0x80034E5C
// line start: 2694
// line end:   2734
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x8008E17C
// line start: 553
// line end:   572
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_7 *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008EF14
// line start: 558
// line end:   577
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_13 *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008C438
// line start: 548
// line end:   567
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008E664
// line start: 558
// line end:   577
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_11 *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008DB70
// line start: 553
// line end:   572
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_6 *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008BCD8
// line start: 548
// line end:   567
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_4 *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008EDA8
// line start: 558
// line end:   577
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel_dup_14 *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008F950
// line start: 548
// line end:   567
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel_dup_1 *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008EB58
// line start: 491
// line end:   554
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct_dup_13 *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008D7B4
// line start: 486
// line end:   549
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct_dup_6 *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008E9EC
// line start: 491
// line end:   554
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel_dup_14 *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008E2A8
// line start: 491
// line end:   554
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct_dup_11 *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008F594
// line start: 481
// line end:   544
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel_dup_1 *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008C07C
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
	register struct TextDat_dup_1 *ObjDat;
	// register: 5
	register int temp;
	// register: 17
	register int bright;
	// register: 2
	register int W;
	// register: 2
	register int H;
}


// address: 0x8004DE00
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


// address: 0x8004D5F4
// line start: 876
// line end:   938
void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 30
	register int PhysFrame;
	// register: 21
	// size: 0x6C
	register struct TextDat_dup_14 *ObjDat;
	// register: 5
	register int temp;
	// register: 17
	register int bright;
	// register: 2
	register int W;
	// register: 2
	register int H;
}


// address: 0x8007762C
// line start: 236
// line end:   256
void DrawFadedScreen__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80076734
// line start: 261
// line end:   266
void DrawFadedScreen__Fv() {
}


// address: 0x80077E88
// line start: 186
// line end:   198
void DrawFadedScreen__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80090BF8
// line start: 50
// line end:   82
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	register int diff;
}


// address: 0x80092F38
// line start: 50
// line end:   79
void DrawFlameLogo__Fv() {
	// register: 16
	register int diff;
}


// address: 0x80094038
// line start: 87
// line end:   141
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


// address: 0x80091220
// line start: 46
// line end:   75
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8008EAF0
// line start: 241
// line end:   334
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel_dup_1 *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
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


// address: 0x8008CCF8
// line start: 241
// line end:   338
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_6 *Plr) {
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


// address: 0x8008AE78
// line start: 241
// line end:   334
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_4 *Plr) {
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


// address: 0x8008DEFC
// line start: 242
// line end:   339
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel_dup_14 *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
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


// address: 0x8008D304
// line start: 241
// line end:   338
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_7 *Plr) {
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


// address: 0x8008BE98
// line start: 243
// line end:   344
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


// address: 0x8008B5D8
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


// address: 0x8008E068
// line start: 242
// line end:   339
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_13 *Plr) {
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


// address: 0x8008D7B8
// line start: 242
// line end:   339
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_11 *Plr) {
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


// address: 0x800A2848
// line start: 251
// line end:   264
void DrawHelp__Fv() {
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
										register struct ItemStruct_dup_6 *pi;
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


// address: 0x8009CA00
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
	auto struct CBlocks_dup_4 *gblock;
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


// address: 0x8009CC58
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


// address: 0x800A0D8C
// line start: 786
// line end:   848
void DrawLBird__Fv() {
	// register: 19
	// size: 0x18
	register struct BIRDSTRUCT *ThisBird;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD0
	// size: 0xE0
	auto struct CBlocks_dup_14 *gblock;
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
	register struct TextDat_dup_14 *Dat;
	{
		{
			{
				// register: 21
				register int i;
			}
		}
	}
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
	auto struct CBlocks_dup_1 *gblock;
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
	register struct TextDat_dup_1 *Dat;
	{
		{
			{
				// register: 21
				register int i;
			}
		}
	}
}


// address: 0x80034B84
// line start: 2619
// line end:   2627
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x800765A8
// line start: 441
// line end:   448
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x8009B16C
// line start: 773
// line end:   974
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
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009ACA8
// line start: 778
// line end:   1022
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
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80098A7C
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


// address: 0x80098F6C
// line start: 678
// line end:   876
void DrawMenu__Fi(int MenuNo) {
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct OMENULIST_dup_5 *mptr;
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


// address: 0x8009BBBC
// line start: 804
// line end:   1048
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


// address: 0x80098388
// line start: 692
// line end:   890
void DrawMenu__Fi(int MenuNo) {
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct OMENULIST_dup_4 *mptr;
	// address: 0xFFFFFF88
	// size: 0x18
	auto struct OMENUITEM_dup_4 *iptr;
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


// address: 0x8008C030
// line start: 452
// line end:   464
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008E25C
// line start: 462
// line end:   474
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_11 *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008B8D0
// line start: 452
// line end:   464
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_4 *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008EB0C
// line start: 462
// line end:   474
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_13 *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008F548
// line start: 452
// line end:   464
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel_dup_1 *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008D768
// line start: 457
// line end:   469
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_6 *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008DD74
// line start: 457
// line end:   469
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_7 *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008E9A0
// line start: 462
// line end:   474
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel_dup_14 *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8004E0DC
// line start: 638
// line end:   646
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x80095F08
// line start: 1132
// line end:   1264
void DrawObjSelector__Fi(int pnum) {
	// register: 22
	// size: 0x22D0
	register struct PlayerStruct *player;
	// address: 0xFFFFFF48
	// size: 0x1E
	auto char str[30];
	// register: 19
	// size: 0x6C
	register struct CPad *Pad;
	// address: 0xFFFFFF68
	auto int list_size;
	// address: 0xFFFFFF70
	auto int maxlen;
	// register: 2
	register int cgold;
	{
		// register: 20
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


// address: 0x80095C2C
// line start: 1150
// line end:   1292
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *player;
	// address: 0xFFFFFF40
	// size: 0x1E
	auto char str[30];
	// register: 16
	// size: 0x6C
	register struct CPad_dup_4 *Pad;
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


// address: 0x8009683C
// line start: 1150
// line end:   1292
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


// address: 0x80098870
// line start: 1003
// line end:   1144
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


// address: 0x800981B4
// line start: 1175
// line end:   1317
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *player;
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


// address: 0x80096354
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


// address: 0x80098578
// line start: 997
// line end:   1137
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *player;
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


// address: 0x80099178
// line start: 1016
// line end:   1157
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *player;
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


// address: 0x80097E64
// line start: 1161
// line end:   1303
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *player;
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


// address: 0x80096BB4
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


// address: 0x8009ADA8
// line start: 1661
// line end:   1898
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 16
	register int oldot;
	// register: 18
	// size: 0x6C
	register struct CPad *P;
}


// address: 0x8009C920
// line start: 2064
// line end:   2382
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


// address: 0x8009AB48
// line start: 1759
// line end:   2000
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 17
	register int old_pad;
	// register: 18
	// size: 0x6C
	register struct CPad_dup_4 *P;
	{
		{
			{
				// register: 3
				register int x;
			}
		}
	}
}


// address: 0x8009D818
// line start: 1830
// line end:   2078
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


// address: 0x8009E960
// line start: 2025
// line end:   2346
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


// address: 0x8009B5FC
// line start: 1705
// line end:   1950
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


// address: 0x8009D53C
// line start: 1882
// line end:   2159
void DrawOptions__FP4TASK(struct TASK *T) {
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


// address: 0x8009DE30
// line start: 1994
// line end:   2290
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 19
	register int OldOptionsSeed;
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


// address: 0x80031F14
// line start: 2201
// line end:   2237
void DrawPlus__Fii(int n, int pnum) {
	// register: 16
	// size: 0x6C
	register struct TextDat_dup_14 *ThisDat;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 3
	register int x;
	// register: 7
	register int y;
}


// address: 0x8003303C
// line start: 2170
// line end:   2206
void DrawPlus__Fii(int n, int pnum) {
	// register: 16
	// size: 0x68
	register struct TextDat_dup_1 *ThisDat;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 3
	register int x;
	// register: 7
	register int y;
}


// address: 0x8003303C
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


// address: 0x8004819C
// line start: 210
// line end:   216
void DrawQTextBack__Fv() {
}


// address: 0x80045610
// line start: 246
// line end:   301
void DrawQTextTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int quest_pad;
	{
	}
}


// address: 0x80048298
// line start: 239
// line end:   259
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800477A0
// line start: 246
// line end:   297
void DrawQTextTSK__FP4TASK(struct TASK *T) {
	{
	}
}


// address: 0x80048364
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


// address: 0x800472FC
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


// address: 0x80048420
// line start: 265
// line end:   368
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


// address: 0x800637B4
// line start: 733
// line end:   750
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006357C
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


// address: 0x80064434
// line start: 241
// line end:   248
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80064034
// line start: 159
// line end:   162
void DrawSTextBack__Fv() {
}


// address: 0x80069938
// line start: 1640
// line end:   1654
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800698F8
// line start: 1631
// line end:   1635
void DrawSText__Fv() {
}


// address: 0x8008EF64
// line start: 341
// line end:   409
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel_dup_1 *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
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


// address: 0x8008E4E8
// line start: 347
// line end:   415
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_13 *Plr) {
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


// address: 0x8008BA4C
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


// address: 0x8008E37C
// line start: 347
// line end:   415
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel_dup_14 *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
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


// address: 0x8008DC38
// line start: 347
// line end:   415
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_11 *Plr) {
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


// address: 0x8008B2EC
// line start: 341
// line end:   409
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_4 *Plr) {
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


// address: 0x8008D178
// line start: 346
// line end:   414
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_6 *Plr) {
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


// address: 0x8008D784
// line start: 346
// line end:   414
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_7 *Plr) {
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


// address: 0x800301A4
// line start: 718
// line end:   735
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
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


// address: 0x800341EC
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
	register struct CPad_dup_4 *P;
	// register: 17
	register int lsbooktab;
	// register: 18
	register int lcur_spel;
}


// address: 0x8002F67C
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


// address: 0x8002C6F4
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


// address: 0x8002E8E8
// line start: 527
// line end:   695
void DrawSpellCel__FllUclUc(long xp, long yp, unsigned char Trans, long nCel, int w) {
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct TextDat_dup_14 *ThisDat;
	// register: 17
	// size: 0xC
	register struct FRAME_HDR_dup_14 *Fr;
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


// address: 0x8002F67C
// line start: 527
// line end:   695
void DrawSpellCel__FllUclUc(long xp, long yp, unsigned char Trans, long nCel, int w) {
	// address: 0xFFFFFF78
	// size: 0x68
	auto struct TextDat_dup_1 *ThisDat;
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
	register struct PlayerStruct_dup_7 *player;
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
	register struct CPad_dup_4 *P;
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


// address: 0x8002F5F8
// line start: 815
// line end:   1113
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
	register struct PlayerStruct_dup_13 *player;
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


// address: 0x8002F5C4
// line start: 814
// line end:   1112
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
	register struct PlayerStruct_dup_11 *player;
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


// address: 0x8008B770
// line start: 416
// line end:   444
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_4 *Plr) {
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


// address: 0x8008BED0
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


// address: 0x8008E0BC
// line start: 422
// line end:   454
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_11 *Plr) {
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


// address: 0x8008F3E8
// line start: 416
// line end:   444
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel_dup_1 *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
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


// address: 0x8008DC08
// line start: 421
// line end:   449
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_7 *Plr) {
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


// address: 0x8008E800
// line start: 422
// line end:   454
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel_dup_14 *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
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


// address: 0x8008E96C
// line start: 422
// line end:   454
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_13 *Plr) {
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


// address: 0x8008D5FC
// line start: 421
// line end:   449
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct_dup_6 *Plr) {
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


// address: 0x8008E4C4
// line start: 422
// line end:   454
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
	auto struct TextDat_dup_1 *ThisDat;
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


// address: 0x80097E88
// line start: 552
// line end:   686
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


// address: 0x8009857C
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


// address: 0x8009B7DC
// line start: 692
// line end:   827
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
	auto struct TextDat_dup_14 *ThisDat;
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


// address: 0x80044C98
// line start: 4444
// line end:   4485
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x800626AC
// line start: 85
// line end:   304
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x80063CC8
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


// address: 0x8005A680
// line start: 2090
// line end:   2256
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005AB80
// line start: 2099
// line end:   2265
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005AE40
// line start: 2026
// line end:   2192
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005AE3C
// line start: 2071
// line end:   2237
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005ACF4
// line start: 2095
// line end:   2261
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005A364
// line start: 2041
// line end:   2207
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x80083754
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


// address: 0x8007B440
// line start: 70
// line end:   73
void DummyPoll__Fv() {
}


// address: 0x80073DAC
// line start: 200
// line end:   209
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x8007E498
// line start: 1177
// line end:   1212
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x800819BC
// line start: 1175
// line end:   1210
void DumpData__7TextDat(struct TextDat_dup_1 *this) {
}


// address: 0x8007FE88
// line start: 1201
// line end:   1236
void DumpData__7TextDat(struct TextDat_dup_14 *this) {
}


// address: 0x80088EFC
// line start: 479
// line end:   485
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks_dup_1 *this, struct TextDat_dup_1 **TDat, int *Id) {
}


// address: 0x8008598C
// line start: 480
// line end:   486
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x80085298
// line start: 480
// line end:   486
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks_dup_4 *this, struct TextDat **TDat, int *Id) {
}


// address: 0x80088284
// line start: 476
// line end:   482
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks_dup_14 *this, struct TextDat_dup_14 **TDat, int *Id) {
}


// address: 0x80088DD0
// line start: 431
// line end:   438
void DumpGt4s__7CBlocks(struct CBlocks_dup_1 *this) {
	{
		{
		}
	}
}


// address: 0x80085860
// line start: 432
// line end:   439
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x8008516C
// line start: 432
// line end:   439
void DumpGt4s__7CBlocks(struct CBlocks_dup_4 *this) {
	{
		{
		}
	}
}


// address: 0x80088158
// line start: 428
// line end:   435
void DumpGt4s__7CBlocks(struct CBlocks_dup_14 *this) {
	{
		{
		}
	}
}


// address: 0x8008CB88
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks_dup_1 *this) {
}


// address: 0x80089634
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088CD4
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks_dup_4 *this) {
}


// address: 0x8008BE50
// line start: 158
// line end:   158
void DumpItems__7CBlocks(struct CBlocks_dup_14 *this) {
}


// address: 0x800794B4
// line start: 115
// line end:   121
void DumpMap__13CompLevelMapsi(struct CompLevelMaps_dup_5 *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x80078C30
// line start: 115
// line end:   121
void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x8007A75C
// line start: 115
// line end:   121
void DumpMap__13CompLevelMapsi(struct CompLevelMaps_dup_6 *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x8008BE74
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks_dup_14 *this) {
}


// address: 0x80088CF8
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks_dup_4 *this) {
}


// address: 0x80089658
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008CBAC
// line start: 157
// line end:   157
void DumpObjs__7CBlocks(struct CBlocks_dup_1 *this) {
}


// address: 0x8007B960
// line start: 180
// line end:   185
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x800851D4
// line start: 448
// line end:   455
void DumpRects__7CBlocks(struct CBlocks_dup_4 *this) {
	{
		{
		}
	}
}


// address: 0x800858C8
// line start: 448
// line end:   455
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80088E38
// line start: 447
// line end:   454
void DumpRects__7CBlocks(struct CBlocks_dup_1 *this) {
	{
		{
		}
	}
}


// address: 0x800881C0
// line start: 444
// line end:   451
void DumpRects__7CBlocks(struct CBlocks_dup_14 *this) {
	{
		{
		}
	}
}


// address: 0x8007A6B8
// line start: 90
// line end:   106
void Dump__13CompLevelMaps(struct CompLevelMaps_dup_6 *this) {
	{
		{
			{
				// register: 16
				register int f;
			}
		}
	}
}


// address: 0x80079410
// line start: 90
// line end:   106
void Dump__13CompLevelMaps(struct CompLevelMaps_dup_5 *this) {
	{
		{
			{
				// register: 16
				register int f;
			}
		}
	}
}


// address: 0x80078B8C
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


// address: 0x8008D2D4
// line start: 544
// line end:   545
void Dump__7CPlayer(struct CPlayer_dup_14 *this) {
}


// address: 0x8008DFA0
// line start: 537
// line end:   538
void Dump__7CPlayer(struct CPlayer_dup_1 *this) {
}


// address: 0x8008AA84
// line start: 537
// line end:   538
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8003B940
// line start: 1104
// line end:   1104
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x80022580
// line start: 744
// line end:   748
void ExecuteTask(struct TASK *T);

// address: 0x800226CC
// line start: 841
// line end:   845
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8006FFC4
// line start: 476
// line end:   497
void FadeGameOut__Fv() {
}


// address: 0x8007FBD0
// line start: 143
// line end:   153
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007BE1C
// line start: 85
// line end:   93
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007C480
// line start: 88
// line end:   96
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007B738
// line start: 112
// line end:   119
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B79C
// line start: 129
// line end:   131
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8008CA98
// size: 0x4
// line start: 489
// line end:   520
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct_dup_11 *Plr) {
}


// address: 0x8008C010
// size: 0x4
// line start: 489
// line end:   520
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct_dup_6 *Plr) {
}


// address: 0x8008C61C
// size: 0x4
// line start: 489
// line end:   520
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct_dup_7 *Plr) {
}


// address: 0x8008A1A4
// size: 0x4
// line start: 519
// line end:   549
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct_dup_4 *Plr) {
}


// address: 0x8008D250
// size: 0x4
// line start: 492
// line end:   523
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer_dup_14 *this, struct PlayerStruct *Plr) {
}


// address: 0x8008D3BC
// size: 0x4
// line start: 489
// line end:   520
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct_dup_13 *Plr) {
}


// address: 0x8008DF30
// size: 0x4
// line start: 486
// line end:   516
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer_dup_1 *this, struct PlayerStruct *Plr) {
}


// address: 0x8008AA14
// size: 0x4
// line start: 486
// line end:   516
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008D340
// line start: 426
// line end:   484
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct_dup_13 *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008C5A0
// line start: 426
// line end:   484
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct_dup_7 *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008BF94
// line start: 426
// line end:   484
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct_dup_6 *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008A128
// line start: 456
// line end:   514
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct_dup_4 *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008D1D4
// line start: 429
// line end:   487
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer_dup_14 *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008DEB4
// line start: 423
// line end:   481
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer_dup_1 *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008CA1C
// line start: 426
// line end:   484
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct_dup_11 *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008A998
// line start: 423
// line end:   481
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
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


// address: 0x80084E3C
// line start: 299
// line end:   305
int FindCreature__7CBlocksi(struct CBlocks_dup_4 *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80087E28
// line start: 295
// line end:   301
int FindCreature__7CBlocksi(struct CBlocks_dup_14 *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80085530
// line start: 299
// line end:   305
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80088AA0
// line start: 298
// line end:   304
int FindCreature__7CBlocksi(struct CBlocks_dup_1 *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8007E9EC
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


// address: 0x8007E0C8
// line start: 1428
// line end:   1454
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


// address: 0x80081D68
// line start: 1344
// line end:   1370
void FindDecompArea__7TextDatR4RECT(struct TextDat_dup_1 *this, struct RECT *R) {
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


// address: 0x800803D8
// line start: 1424
// line end:   1450
void FindDecompArea__7TextDatR4RECT(struct TextDat_dup_14 *this, struct RECT *R) {
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


// address: 0x800978CC
// line start: 130
// line end:   136
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007BAA0
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


// address: 0x8008E3A0
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008DC48
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection_dup_4 *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80058D74
// line start: 25
// line end:   26
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80091BB8
// size: 0x8
// line start: 624
// line end:   629
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct_dup_11 *P) {
}


// address: 0x80090D9C
// size: 0x8
// line start: 620
// line end:   625
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct_dup_6 *P) {
}


// address: 0x8008F598
// size: 0x8
// line start: 607
// line end:   612
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x800925B4
// size: 0xC
// line start: 652
// line end:   657
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct_dup_13 *P) {
}


// address: 0x800924B4
// size: 0xC
// line start: 660
// line end:   665
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x800914C4
// size: 0x8
// line start: 624
// line end:   629
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct_dup_7 *P) {
}


// address: 0x8008EEF8
// size: 0x8
// line start: 620
// line end:   625
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct_dup_4 *P) {
}


// address: 0x80092010
// size: 0xC
// line start: 647
// line end:   652
struct PInf_dup_12 *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80092040
// line start: 656
// line end:   668
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf_dup_12 *Inf;
}


// address: 0x8008EF28
// line start: 629
// line end:   635
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct_dup_4 *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x8008F5C8
// line start: 616
// line end:   622
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x80091BE8
// line start: 633
// line end:   639
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct_dup_11 *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x800914F4
// line start: 633
// line end:   639
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct_dup_7 *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x800925E4
// line start: 661
// line end:   673
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct_dup_13 *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf *Inf;
}


// address: 0x800924E4
// line start: 669
// line end:   681
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf *Inf;
}


// address: 0x80090DCC
// line start: 629
// line end:   635
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct_dup_6 *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x800924C0
// size: 0xC
// line start: 627
// line end:   637
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80091F1C
// size: 0xC
// line start: 622
// line end:   632
struct PInf_dup_12 *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8008F4B4
// size: 0x8
// line start: 582
// line end:   592
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x80092558
// size: 0xC
// line start: 642
// line end:   648
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8008F53C
// size: 0x8
// line start: 597
// line end:   603
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80091FB4
// size: 0xC
// line start: 637
// line end:   643
struct PInf_dup_12 *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8009A6B4
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat_dup_14 *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80097894
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009AF90
// line start: 116
// line end:   122
int FindThisTd__FP7TextDat(struct TextDat_dup_1 *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800854BC
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


// address: 0x80087DB4
// line start: 278
// line end:   286
int FindTownCreature__7CBlocksi(struct CBlocks_dup_14 *this, int GameEqu) {
	{
		// register: 17
		register unsigned int f;
		{
			// register: 2
			register int Creature;
		}
	}
}


// address: 0x80088A2C
// line start: 281
// line end:   289
int FindTownCreature__7CBlocksi(struct CBlocks_dup_1 *this, int GameEqu) {
	{
		// register: 17
		register unsigned int f;
		{
			// register: 2
			register int Creature;
		}
	}
}


// address: 0x80084DC8
// line start: 282
// line end:   290
int FindTownCreature__7CBlocksi(struct CBlocks_dup_4 *this, int GameEqu) {
	{
		// register: 17
		register unsigned int f;
		{
			// register: 2
			register int Creature;
		}
	}
}


// address: 0x80055F84
// line start: 2702
// line end:   2724
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80097EBC
// line start: 301
// line end:   305
void FinishProgress__Fv() {
}


// address: 0x8007CCEC
// line start: 285
// line end:   298
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x80080210
// line start: 283
// line end:   296
void FinishedUsing__7TextDat(struct TextDat_dup_1 *this) {
}


// address: 0x8007E6C8
// line start: 294
// line end:   307
void FinishedUsing__7TextDat(struct TextDat_dup_14 *this) {
}


// address: 0x8005A020
// line start: 1366
// line end:   1386
void FixPlayerLocation__FP12PlayerStructi(struct PlayerStruct *ptrplr, int bDir) {
}


// address: 0x8006172C
// line start: 4502
// line end:   4502
void FixPlayerLocation__Fii(int pnum, int bDir) {
}


// address: 0x8009D740
// line start: 128
// line end:   132
void Flush__4CPad_addr_8009D740(struct CPad *this) {
}


// address: 0x8009F7A4
// line start: 128
// line end:   132
void Flush__4CPad_addr_8009F7A4(struct CPad *this) {
}


// address: 0x8006E874
// line start: 122
// line end:   150
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006EB24
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


// address: 0x8006EF84
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


// address: 0x8006F400
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


// address: 0x8006FBB4
// line start: 385
// line end:   396
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x80062338
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


// address: 0x8006FAC0
// line start: 367
// line end:   378
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006F9CC
// line start: 349
// line end:   360
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006E55C
// line start: 76
// line end:   117
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8009B1DC
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


// address: 0x8009B1D8
// line start: 2034
// line end:   2110
void FormatPad__Fv() {
	// register: 16
	register int move;
	// register: 17
	// size: 0x6C
	register struct CPad_dup_4 *P;
	// register: 18
	// size: 0x18
	register struct OMENUITEM_dup_4 *iptr;
	// register: 5
	register int lcs;
}


// address: 0x8009D298
// line start: 2420
// line end:   2501
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


// address: 0x80035FF0
// line start: 137
// line end:   142
void FreeCursor__Fv() {
}


// address: 0x80036804
// line start: 282
// line end:   295
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8004335C
// line start: 2907
// line end:   2912
void FreeItemGFX__Fv() {
}


// address: 0x800A060C
// line start: 76
// line end:   94
void FreeKanji__Fv() {
}


// address: 0x80047670
// line start: 957
// line end:   958
void FreeLightTable__Fv() {
}


// address: 0x8003B078
// line start: 222
// line end:   245
void FreeMonsterSnd__Fv() {
}


// address: 0x8004D38C
// line start: 299
// line end:   303
void FreeObjectGFX__Fv() {
}


// address: 0x80058EF4
// line start: 527
// line end:   546
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058478
// line start: 527
// line end:   546
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005877C
// line start: 527
// line end:   546
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x80058E64
// line start: 528
// line end:   547
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x80058E18
// line start: 529
// line end:   548
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x80058C68
// line start: 528
// line end:   547
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x80061860
// line start: 4507
// line end:   4507
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80047F20
// line start: 108
// line end:   111
void FreeQuestText__Fv() {
}


// address: 0x8006402C
// line start: 150
// line end:   151
void FreeStoreMem__Fv() {
}


// address: 0x80039214
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


// address: 0x8006F90C
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


// address: 0x80075108
// line start: 373
// line end:   374
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800750A0
// line start: 368
// line end:   369
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075004
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


// address: 0x80074C0C
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


// address: 0x80074B0C
// line start: 302
// line end:   313
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074EE8
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


// address: 0x80075450
// line start: 409
// line end:   410
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800753E8
// line start: 404
// line end:   405
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800754A8
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


// address: 0x80074CA0
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


// address: 0x800747B0
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


// address: 0x80074B0C
// line start: 252
// line end:   254
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074A74
// line start: 246
// line end:   248
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074BA4
// line start: 258
// line end:   259
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800752A4
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


// address: 0x80075170
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


// address: 0x80075BB0
// line start: 528
// line end:   529
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800759A4
// line start: 480
// line end:   555
void FuncFLASH__FP13MissileStructiii(struct MissileStruct *Ms, int x, int y, int OtPos) {
	// register: 16
	register int size;
	{
		{
			// register: 16
			// size: 0x84
			register struct CPlayer_dup_14 *test;
			// register: 16
			register int rot;
			{
				{
					// register: 5
					// size: 0x34
					register struct POLY_GT4 *GT4;
					// address: 0xFFFFFFC0
					// size: 0x6C
					auto struct TextDat_dup_14 *ThisDat;
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
			register struct CPlayer_dup_1 *test;
			// register: 16
			register int rot;
			{
				{
					// register: 5
					// size: 0x34
					register struct POLY_GT4 *GT4;
					// address: 0xFFFFFFC0
					// size: 0x68
					auto struct TextDat_dup_1 *ThisDat;
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


// address: 0x800755E0
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


// address: 0x8007495C
// line start: 239
// line end:   242
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074848
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


// address: 0x80074D80
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


// address: 0x800748F8
// line start: 234
// line end:   235
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074E58
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


// address: 0x80075B08
// line start: 519
// line end:   524
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075574
// line start: 429
// line end:   430
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8004880C
// line start: 806
// line end:   808
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075BB8
// line start: 532
// line end:   533
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800755D8
// line start: 434
// line end:   436
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074650
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


// address: 0x80072728
// line start: 230
// line end:   238
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 4
	register int anim;
}


// address: 0x800744D0
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


// address: 0x80072690
// line start: 201
// line end:   214
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int anim;
}


// address: 0x80075968
// line start: 576
// line end:   577
void FuncWEAPEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
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


// address: 0x80021024
// line start: 1763
// line end:   1774
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
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


// address: 0x80021074
// line start: 1794
// line end:   1799
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


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


// address: 0x80020BCC
// line start: 1432
// line end:   1449
unsigned char GAL_DefragMem(unsigned long type) {
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


// address: 0x80020EAC
// line start: 1614
// line end:   1616
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

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


// address: 0x80020EDC
// size: 0x4
// line start: 1629
// line end:   1630
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020EEC
// line start: 1641
// line end:   1642
char *GAL_GetLastErrorText();

// address: 0x800218C8
// line start: 2416
// line end:   2417
unsigned long GAL_GetLastTypeAlloced();

// address: 0x800218B8
// line start: 2411
// line end:   2412
int GAL_GetNumFreeHeaders();

// address: 0x80021170
// line start: 1842
// line end:   1853
long GAL_GetSize(long hnd) {
}


// address: 0x80021014
// line start: 1746
// line end:   1747
int GAL_GetTimeStamp();

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


// address: 0x80020FF4
// line start: 1736
// line end:   1737
void GAL_IncTimeStamp();

// address: 0x8001FC70
// line start: 249
// line end:   271
void GAL_InitModule() {
	// register: 17
	register int f;
}


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


// address: 0x8001FFE0
// line start: 460
// line end:   482
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
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


// address: 0x800217C0
// line start: 2331
// line end:   2336
void GAL_MemDump(unsigned long Type);

// address: 0x800210C4
// line start: 1814
// line end:   1831
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x800218D8
// line start: 2427
// line end:   2434
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x8001FB2C
// line start: 170
// line end:   171
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x80020ABC
// line start: 1350
// line end:   1354
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020FE4
// line start: 1725
// line end:   1726
void GAL_SetTimeStamp(int Time);

// address: 0x80021834
// line start: 2350
// line end:   2351
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x800218F0
// line start: 2443
// line end:   2455
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


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


// address: 0x80020040
// line start: 495
// line end:   526
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8008EE48
// line start: 305
// line end:   306
bool GLUE_Finished__Fv() {
}


// address: 0x8008F65C
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


// address: 0x8008ED30
// line start: 231
// line end:   232
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8008E738
// line start: 289
// line end:   295
void GLUE_PreDun__Fv() {
}


// address: 0x8008EDE4
// line start: 272
// line end:   279
void GLUE_PreTown__Fv() {
}


// address: 0x8008ED90
// line start: 257
// line end:   262
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008EE54
// line start: 316
// line end:   317
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8008EEF4
// line start: 360
// line end:   364
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008ED24
// line start: 220
// line end:   221
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8008EEE4
// line start: 348
// line end:   352
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008EF04
// line start: 372
// line end:   376
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008EE60
// line start: 327
// line end:   339
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8008ED3C
// line start: 242
// line end:   247
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8007E700
// line start: 1253
// line end:   1257
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x800800F0
// line start: 1277
// line end:   1281
void GM_FinishedUsing__FP7TextDat(struct TextDat_dup_14 *Fin) {
}


// address: 0x80081B78
// line start: 1234
// line end:   1235
void GM_FinishedUsing__FP7TextDat(struct TextDat_dup_1 *Fin) {
}


// address: 0x8003708C
// line start: 2169
// line end:   2329
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80081B04
// size: 0x68
// line start: 1221
// line end:   1224
struct TextDat_dup_1 *GM_UseTexData__Fi(int Id) {
}


// address: 0x8007FFD0
// size: 0x6C
// line start: 1247
// line end:   1267
struct TextDat_dup_14 *GM_UseTexData__Fi(int Id) {
	{
		{
			// register: 18
			// size: 0x6C
			register struct TextDat_dup_14 *Dat2Use;
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


// address: 0x8007E5E0
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


// address: 0x8007B198
// line start: 73
// line end:   75
void GO_DoGameOver__Fv() {
}


// address: 0x8007A6E0
// line start: 220
// line end:   239
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007A4B8
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


// address: 0x8007A4AC
// line start: 96
// line end:   98
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007A780
// line start: 249
// line end:   266
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A62C
// line start: 159
// line end:   178
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007A81C
// line start: 276
// line end:   287
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x80073A1C
// line start: 120
// line end:   122
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x80073A00
// line start: 93
// line end:   94
void GRL_InitGwin__Fv() {
}


// address: 0x8006E3E0
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


// address: 0x80073A44
// line start: 132
// line end:   148
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80073A0C
// line start: 105
// line end:   109
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x8006E4C4
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


// address: 0x8001FA7C
// line start: 167
// line end:   181
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001F9D0
// size: 0x8
// line start: 73
// line end:   74
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001FA44
// line start: 146
// line end:   148
unsigned char GSYS_InitMachine();

// address: 0x8001FA2C
// line start: 129
// line end:   134
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001FAB0
// line start: 192
// line end:   196
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FA1C
// line start: 109
// line end:   114
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F9E0
// line start: 88
// line end:   90
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x80020C50
// line start: 1462
// line end:   1467
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x8001F754
// line start: 52
// line end:   53
unsigned long GTIMSYS_GetTimer();

// address: 0x8001F79C
// line start: 63
// line end:   91
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8001F778
// line start: 57
// line end:   58
void GTIMSYS_ResetTimer();

// address: 0x8001F64C
// line start: 126
// line end:   128
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001F560
// line start: 76
// line end:   95
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001F610
// line start: 114
// line end:   115
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001F5F0
// line start: 103
// line end:   104
long GU_GetSRnd();

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


// address: 0x8007B1DC
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


// address: 0x80072E54
// line start: 1526
// line end:   1619
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEA8
	// size: 0x9C
	auto struct GamePad_dup_7 GPad1;
	// address: 0xFFFFFF48
	// size: 0x9C
	auto struct GamePad_dup_7 GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80073930
// line start: 1519
// line end:   1543
void GamePadTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x800732D4
// line start: 1456
// line end:   1549
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


// address: 0x80071DC8
// line start: 1502
// line end:   1594
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEA8
	// size: 0x9C
	auto struct GamePad_dup_5 GPad1;
	// address: 0xFFFFFF48
	// size: 0x9C
	auto struct GamePad_dup_5 GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80072BF8
// line start: 1403
// line end:   1432
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEB0
	// size: 0x9C
	auto struct GamePad GPad1;
	// address: 0xFFFFFF50
	// size: 0x9C
	auto struct GamePad GPad2;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80073584
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


// address: 0x80072D9C
// line start: 1415
// line end:   1444
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEB0
	// size: 0x9C
	auto struct GamePad_dup_11 GPad1;
	// address: 0xFFFFFF50
	// size: 0x9C
	auto struct GamePad_dup_11 GPad2;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80073750
// line start: 1511
// line end:   1540
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEC0
	// size: 0x94
	auto struct GamePad_dup_13 GPad1;
	// address: 0xFFFFFF58
	// size: 0x94
	auto struct GamePad_dup_13 GPad2;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80073040
// line start: 1510
// line end:   1602
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEA8
	// size: 0x9C
	auto struct GamePad_dup_6 GPad1;
	// address: 0xFFFFFF48
	// size: 0x9C
	auto struct GamePad_dup_6 GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x800730D0
// line start: 1451
// line end:   1544
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEA8
	// size: 0x9C
	auto struct GamePad_dup_8 GPad1;
	// address: 0xFFFFFF48
	// size: 0x9C
	auto struct GamePad_dup_8 GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80071D2C
// line start: 1501
// line end:   1593
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEA8
	// size: 0x9C
	auto struct GamePad_dup_4 GPad1;
	// address: 0xFFFFFF48
	// size: 0x9C
	auto struct GamePad_dup_4 GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
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


// address: 0x8007A38C
// line start: 217
// line end:   241
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007B3D8
// line start: 239
// line end:   240
void GaryLiddon__Fv() {
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


// address: 0x80071B24
// line start: 545
// line end:   564
int GetActionButton__7GamePadPFi_v(struct GamePad_dup_13 *this, void (*func)()) {
	{
	}
}


// address: 0x8007181C
// line start: 523
// line end:   542
int GetActionButton__7GamePadPFi_v(struct GamePad_dup_8 *this, void (*func)()) {
	{
	}
}


// address: 0x800713C0
// line start: 519
// line end:   538
int GetActionButton__7GamePadPFi_v(struct GamePad_dup_11 *this, void (*func)()) {
	{
	}
}


// address: 0x80070640
// line start: 522
// line end:   541
int GetActionButton__7GamePadPFi_v(struct GamePad_dup_5 *this, void (*func)()) {
	{
	}
}


// address: 0x80070534
// line start: 522
// line end:   541
int GetActionButton__7GamePadPFi_v(struct GamePad_dup_4 *this, void (*func)()) {
	{
	}
}


// address: 0x80071848
// line start: 523
// line end:   542
int GetActionButton__7GamePadPFi_v(struct GamePad_dup_6 *this, void (*func)()) {
	{
	}
}


// address: 0x80071FC4
// line start: 439
// line end:   458
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x800715CC
// line start: 523
// line end:   542
int GetActionButton__7GamePadPFi_v(struct GamePad_dup_7 *this, void (*func)()) {
	{
	}
}


// address: 0x80071CA8
// line start: 545
// line end:   564
int GetActionButton__7GamePadPFi_v(struct GamePad_dup_14 *this, void (*func)()) {
	{
	}
}


// address: 0x8007ECE4
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


// address: 0x80038138
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8007165C
// line start: 462
// line end:   515
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad_dup_8 *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071974
// line start: 484
// line end:   537
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad_dup_13 *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80070374
// line start: 461
// line end:   514
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad_dup_4 *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x8007140C
// line start: 462
// line end:   515
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad_dup_7 *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071EFC
// line start: 403
// line end:   431
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071858
// line start: 463
// line end:   516
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80070480
// line start: 461
// line end:   514
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad_dup_5 *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071AF8
// line start: 484
// line end:   537
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad_dup_14 *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071688
// line start: 462
// line end:   515
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad_dup_6 *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071210
// line start: 458
// line end:   511
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad_dup_11 *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80079AFC
// line start: 108
// line end:   200
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x8009CAC8
// line start: 595
// line end:   624
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x8006338C
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat_dup_14 *GetBlockTexDat__7CBlocks(struct CBlocks_dup_14 *this) {
}


// address: 0x80063BD0
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x800625B4
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks_dup_4 *this) {
}


// address: 0x80075F44
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80075F44(struct CBlocks *this) {
}


// address: 0x800764D8
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_800764D8(struct CBlocks_dup_4 *this) {
}


// address: 0x80076660
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80076660(struct CBlocks *this) {
}


// address: 0x800773D8
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_800773D8(struct CBlocks *this) {
}


// address: 0x800775C4
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_800775C4(struct CBlocks *this) {
}


// address: 0x80077788
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077788(struct CBlocks *this) {
}


// address: 0x8007787C
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_8007787C(struct CBlocks *this) {
}


// address: 0x800778F0
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_800778F0(struct CBlocks *this) {
}


// address: 0x80077B00
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077B00(struct CBlocks *this) {
}


// address: 0x80077C34
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077C34(struct CBlocks *this) {
}


// address: 0x80077D38
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077D38(struct CBlocks *this) {
}


// address: 0x80077DA0
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077DA0(struct CBlocks *this) {
}


// address: 0x80077DA4
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077DA4(struct CBlocks *this) {
}


// address: 0x80078054
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat *GetBlockTexDat__7CBlocks_addr_80078054(struct CBlocks *this) {
}


// address: 0x8007827C
// size: 0x6C
// line start: 151
// line end:   151
struct TextDat_dup_14 *GetBlockTexDat__7CBlocks_addr_8007827C(struct CBlocks_dup_14 *this) {
}


// address: 0x800860EC
// size: 0xC
// line start: 671
// line end:   673
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x800859F8
// size: 0xC
// line start: 671
// line end:   673
struct CBlock *GetBlock__7CBlocksi(struct CBlocks_dup_4 *this, int num) {
}


// address: 0x80089658
// size: 0xC
// line start: 670
// line end:   672
struct CBlock *GetBlock__7CBlocksi(struct CBlocks_dup_1 *this, int num) {
}


// address: 0x800889E8
// size: 0xC
// line start: 667
// line end:   669
struct CBlock *GetBlock__7CBlocksi(struct CBlocks_dup_14 *this, int num) {
}


// address: 0x8003E844
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


// address: 0x8007F5FC
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


// address: 0x800810E4
// line start: 1822
// line end:   1866
void GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this, struct TextDat_dup_14 *TDat, struct RECT *R) {
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


// address: 0x80082974
// line start: 1719
// line end:   1763
void GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this, struct TextDat_dup_1 *TDat, struct RECT *R) {
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


// address: 0x8008310C
// line start: 85
// line end:   85
int GetCharFrameNum__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x80084B20
// line start: 85
// line end:   85
int GetCharFrameNum__5CFontc(struct CFont_dup_10 *this, char ch) {
}


// address: 0x8008611C
// line start: 82
// line end:   82
int GetCharFrameNum__5CFontc(struct CFont_dup_1 *this, char ch) {
}


// address: 0x80082BAC
// line start: 82
// line end:   82
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80085380
// line start: 85
// line end:   85
int GetCharFrameNum__5CFontc(struct CFont_dup_14 *this, char ch) {
}


// address: 0x80045BF8
// line start: 71
// line end:   78
int GetCharWidth__5CFontUc_addr_80045BF8(struct CFont *this, unsigned char ch) {
}


// address: 0x800A0A10
// line start: 71
// line end:   78
int GetCharWidth__5CFontUc_addr_800A0A10(struct CFont *this, unsigned char ch) {
}


// address: 0x80047730
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_80047730(struct CFont *this, char ch) {
}


// address: 0x80047754
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_80047754(struct CFont *this, char ch) {
}


// address: 0x80047A84
// line start: 71
// line end:   78
int GetCharWidth__5CFontc_addr_80047A84(struct CFont_dup_10 *this, char ch) {
}


// address: 0x80047AC0
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_80047AC0(struct CFont *this, char ch) {
}


// address: 0x80047ADC
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_80047ADC(struct CFont *this, char ch) {
}


// address: 0x80047B6C
// line start: 71
// line end:   78
int GetCharWidth__5CFontc_addr_80047B6C(struct CFont *this, char ch) {
}


// address: 0x80047B8C
// line start: 71
// line end:   78
int GetCharWidth__5CFontc_addr_80047B8C(struct CFont *this, char ch) {
}


// address: 0x80047BC0
// line start: 71
// line end:   78
int GetCharWidth__5CFontc_addr_80047BC0(struct CFont *this, char ch) {
}


// address: 0x80047C60
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_80047C60(struct CFont *this, char ch) {
}


// address: 0x80047CEC
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_80047CEC(struct CFont *this, char ch) {
}


// address: 0x80047D48
// line start: 71
// line end:   78
int GetCharWidth__5CFontc_addr_80047D48(struct CFont_dup_14 *this, char ch) {
}


// address: 0x80048790
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_80048790(struct CFont *this, char ch) {
}


// address: 0x800487C0
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_800487C0(struct CFont *this, char ch) {
}


// address: 0x8004884C
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_8004884C(struct CFont *this, char ch) {
}


// address: 0x800496B8
// line start: 71
// line end:   75
int GetCharWidth__5CFontc_addr_800496B8(struct CFont_dup_1 *this, char ch) {
}


// address: 0x800A29E0
// line start: 71
// line end:   78
int GetCharWidth__5CFontc_addr_800A29E0(struct CFont_dup_14 *this, char ch) {
}


// address: 0x8008E874
// line start: 78
// line end:   78
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x800A2308
// line start: 110
// line end:   130
int GetControlKey__FiPb(int str, bool *iscombo) {
	// register: 6
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 7
		register int i;
	}
}


// address: 0x800895C8
// line start: 174
// line end:   176
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x80082E08
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat_dup_1 *this, int Creature) {
}


// address: 0x800814C8
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat_dup_14 *this, int Creature) {
}


// address: 0x8007F9E0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80056C9C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80056C9C(struct TextDat *this, int Creature) {
}


// address: 0x80058250
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058250(struct TextDat *this, int Creature) {
}


// address: 0x80058274
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058274(struct TextDat *this, int Creature) {
}


// address: 0x80058468
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058468(struct TextDat *this, int Creature) {
}


// address: 0x80058570
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058570(struct TextDat *this, int Creature) {
}


// address: 0x80058700
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058700(struct TextDat *this, int Creature) {
}


// address: 0x80058A40
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058A40(struct TextDat *this, int Creature) {
}


// address: 0x80058A5C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058A5C(struct TextDat *this, int Creature) {
}


// address: 0x80058BE0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058BE0(struct TextDat *this, int Creature) {
}


// address: 0x80058C0C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058C0C(struct TextDat *this, int Creature) {
}


// address: 0x80058C58
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058C58(struct TextDat *this, int Creature) {
}


// address: 0x80058CE8
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058CE8(struct TextDat *this, int Creature) {
}


// address: 0x80058D18
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058D18(struct TextDat *this, int Creature) {
}


// address: 0x80058DA4
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058DA4(struct TextDat *this, int Creature) {
}


// address: 0x80058DF0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80058DF0(struct TextDat_dup_14 *this, int Creature) {
}


// address: 0x8005B9D4
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati_addr_8005B9D4(struct TextDat_dup_1 *this, int Creature) {
}


// address: 0x80075F88
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80075F88(struct TextDat *this, int Creature) {
}


// address: 0x8007651C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8007651C(struct TextDat *this, int Creature) {
}


// address: 0x800766A4
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800766A4(struct TextDat *this, int Creature) {
}


// address: 0x8007741C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8007741C(struct TextDat *this, int Creature) {
}


// address: 0x80077608
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80077608(struct TextDat *this, int Creature) {
}


// address: 0x800777CC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800777CC(struct TextDat *this, int Creature) {
}


// address: 0x800778C0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800778C0(struct TextDat *this, int Creature) {
}


// address: 0x80077934
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80077934(struct TextDat *this, int Creature) {
}


// address: 0x80077B44
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80077B44(struct TextDat *this, int Creature) {
}


// address: 0x80077C78
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80077C78(struct TextDat *this, int Creature) {
}


// address: 0x80077D7C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80077D7C(struct TextDat *this, int Creature) {
}


// address: 0x80077DE4
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80077DE4(struct TextDat *this, int Creature) {
}


// address: 0x80077DE8
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80077DE8(struct TextDat *this, int Creature) {
}


// address: 0x80078098
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80078098(struct TextDat *this, int Creature) {
}


// address: 0x800782C0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800782C0(struct TextDat_dup_14 *this, int Creature) {
}


// address: 0x8007AF2C
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati_addr_8007AF2C(struct TextDat_dup_1 *this, int Creature) {
}


// address: 0x80088EB0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80088EB0(struct TextDat *this, int Creature) {
}


// address: 0x80089470
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80089470(struct TextDat *this, int Creature) {
}


// address: 0x80089810
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80089810(struct TextDat *this, int Creature) {
}


// address: 0x80089878
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80089878(struct TextDat *this, int Creature) {
}


// address: 0x80089A04
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80089A04(struct TextDat *this, int Creature) {
}


// address: 0x80089D94
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80089D94(struct TextDat *this, int Creature) {
}


// address: 0x8008A384
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008A384(struct TextDat *this, int Creature) {
}


// address: 0x8008A854
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008A854(struct TextDat *this, int Creature) {
}


// address: 0x8008ABF4
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008ABF4(struct TextDat *this, int Creature) {
}


// address: 0x8008ACAC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008ACAC(struct TextDat *this, int Creature) {
}


// address: 0x8008ADD0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008ADD0(struct TextDat *this, int Creature) {
}


// address: 0x8008ADE8
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008ADE8(struct TextDat *this, int Creature) {
}


// address: 0x8008B1AC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008B1AC(struct TextDat *this, int Creature) {
}


// address: 0x8008B3DC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008B3DC(struct TextDat *this, int Creature) {
}


// address: 0x8008B678
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008B678(struct TextDat *this, int Creature) {
}


// address: 0x8008B858
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008B858(struct TextDat *this, int Creature) {
}


// address: 0x8008B860
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008B860(struct TextDat *this, int Creature) {
}


// address: 0x8008BC48
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008BC48(struct TextDat *this, int Creature) {
}


// address: 0x8008BC60
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008BC60(struct TextDat *this, int Creature) {
}


// address: 0x8008C02C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008C02C(struct TextDat_dup_14 *this, int Creature) {
}


// address: 0x8008C17C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008C17C(struct TextDat *this, int Creature) {
}


// address: 0x8008C204
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008C204(struct TextDat *this, int Creature) {
}


// address: 0x8008C810
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008C810(struct TextDat *this, int Creature) {
}


// address: 0x8008CAAC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008CAAC(struct TextDat *this, int Creature) {
}


// address: 0x8008CC8C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008CC8C(struct TextDat *this, int Creature) {
}


// address: 0x8008CC94
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008CC94(struct TextDat *this, int Creature) {
}


// address: 0x8008CE54
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati_addr_8008CE54(struct TextDat_dup_1 *this, int Creature) {
}


// address: 0x8008D07C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008D07C(struct TextDat *this, int Creature) {
}


// address: 0x8008D094
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008D094(struct TextDat *this, int Creature) {
}


// address: 0x8008D444
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008D444(struct TextDat_dup_14 *this, int Creature) {
}


// address: 0x8008D5B0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8008D5B0(struct TextDat *this, int Creature) {
}


// address: 0x8008E110
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati_addr_8008E110(struct TextDat_dup_1 *this, int Creature) {
}


// address: 0x800915B4
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800915B4(struct TextDat *this, int Creature) {
}


// address: 0x80091810
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80091810(struct TextDat *this, int Creature) {
}


// address: 0x80091B88
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80091B88(struct TextDat *this, int Creature) {
}


// address: 0x80091D7C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80091D7C(struct TextDat *this, int Creature) {
}


// address: 0x80091EDC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80091EDC(struct TextDat *this, int Creature) {
}


// address: 0x800928C0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800928C0(struct TextDat *this, int Creature) {
}


// address: 0x80093460
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80093460(struct TextDat *this, int Creature) {
}


// address: 0x80093818
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80093818(struct TextDat *this, int Creature) {
}


// address: 0x80093CC4
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80093CC4(struct TextDat *this, int Creature) {
}


// address: 0x80093EA4
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80093EA4(struct TextDat *this, int Creature) {
}


// address: 0x80093F88
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80093F88(struct TextDat *this, int Creature) {
}


// address: 0x8009417C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8009417C(struct TextDat *this, int Creature) {
}


// address: 0x800942DC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800942DC(struct TextDat *this, int Creature) {
}


// address: 0x80094954
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_80094954(struct TextDat_dup_14 *this, int Creature) {
}


// address: 0x800949FC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800949FC(struct TextDat *this, int Creature) {
}


// address: 0x80095098
// size: 0x14
// line start: 298
// line end:   300
struct CCreatureHdr *GetCreature__7TextDati_addr_80095098(struct TextDat_dup_1 *this, int Creature) {
}


// address: 0x8009D2BC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8009D2BC(struct TextDat *this, int Creature) {
}


// address: 0x8009DD68
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8009DD68(struct TextDat *this, int Creature) {
}


// address: 0x8009F3EC
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8009F3EC(struct TextDat *this, int Creature) {
}


// address: 0x8009F63C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8009F63C(struct TextDat *this, int Creature) {
}


// address: 0x8009F8A0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_8009F8A0(struct TextDat *this, int Creature) {
}


// address: 0x800A001C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800A001C(struct TextDat *this, int Creature) {
}


// address: 0x800A0270
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800A0270(struct TextDat *this, int Creature) {
}


// address: 0x800A041C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800A041C(struct TextDat *this, int Creature) {
}


// address: 0x800A057C
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800A057C(struct TextDat *this, int Creature) {
}


// address: 0x800A0BA0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800A0BA0(struct TextDat *this, int Creature) {
}


// address: 0x800A1634
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800A1634(struct TextDat *this, int Creature) {
}


// address: 0x800A16A0
// size: 0x14
// line start: 271
// line end:   273
struct CCreatureHdr *GetCreature__7TextDati_addr_800A16A0(struct TextDat_dup_14 *this, int Creature) {
}


// address: 0x8007B470
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007A8D0
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad(struct CPad_dup_4 *this) {
}


// address: 0x80071C08
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_80071C08(struct CPad *this) {
}


// address: 0x800720E0
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_800720E0(struct CPad_dup_4 *this) {
}


// address: 0x8007217C
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_8007217C(struct CPad *this) {
}


// address: 0x80072F40
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_80072F40(struct CPad *this) {
}


// address: 0x80072FD8
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80072FD8(struct CPad *this) {
}


// address: 0x800730E4
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_800730E4(struct CPad *this) {
}


// address: 0x8007329C
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_8007329C(struct CPad *this) {
}


// address: 0x80073404
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_80073404(struct CPad *this) {
}


// address: 0x80073518
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_80073518(struct CPad *this) {
}


// address: 0x800735B0
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_800735B0(struct CPad *this) {
}


// address: 0x8007371C
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_8007371C(struct CPad *this) {
}


// address: 0x80073938
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80073938(struct CPad *this) {
}


// address: 0x800739A4
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_800739A4(struct CPad *this) {
}


// address: 0x80073AD4
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_80073AD4(struct CPad *this) {
}


// address: 0x80073CFC
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_80073CFC(struct CPad *this) {
}


// address: 0x80076B60
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80076B60(struct CPad *this) {
}


// address: 0x80090808
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_80090808(struct CPad_dup_4 *this) {
}


// address: 0x80090A84
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80090A84(struct CPad *this) {
}


// address: 0x80090E24
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80090E24(struct CPad *this) {
}


// address: 0x80091018
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80091018(struct CPad *this) {
}


// address: 0x80091130
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_80091130(struct CPad *this) {
}


// address: 0x800926B4
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_800926B4(struct CPad *this) {
}


// address: 0x80094334
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80094334(struct CPad *this) {
}


// address: 0x80097044
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_80097044(struct CPad_dup_4 *this) {
}


// address: 0x800972CC
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_800972CC(struct CPad *this) {
}


// address: 0x8009773C
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_8009773C(struct CPad *this) {
}


// address: 0x80097AF0
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_80097AF0(struct CPad *this) {
}


// address: 0x80097C54
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_80097C54(struct CPad *this) {
}


// address: 0x800984D8
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_800984D8(struct CPad *this) {
}


// address: 0x800992A0
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_800992A0(struct CPad *this) {
}


// address: 0x800995D8
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_800995D8(struct CPad *this) {
}


// address: 0x800997BC
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_800997BC(struct CPad *this) {
}


// address: 0x8009999C
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_8009999C(struct CPad *this) {
}


// address: 0x80099C64
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_80099C64(struct CPad *this) {
}


// address: 0x80099CA0
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_80099CA0(struct CPad *this) {
}


// address: 0x80099D58
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_80099D58(struct CPad *this) {
}


// address: 0x8009A54C
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_8009A54C(struct CPad *this) {
}


// address: 0x8009A5F0
// line start: 100
// line end:   104
unsigned short GetCur__C4CPad_addr_8009A5F0(struct CPad *this) {
}


// address: 0x8009AE38
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_8009AE38(struct CPad *this) {
}


// address: 0x8009B5C4
// line start: 90
// line end:   94
unsigned short GetCur__C4CPad_addr_8009B5C4(struct CPad_dup_4 *this) {
}


// address: 0x8009BA00
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_8009BA00(struct CPad *this) {
}


// address: 0x8009BA8C
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_8009BA8C(struct CPad *this) {
}


// address: 0x8009C2AC
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_8009C2AC(struct CPad *this) {
}


// address: 0x8009F120
// line start: 85
// line end:   89
unsigned short GetCur__C4CPad_addr_8009F120(struct CPad *this) {
}


// address: 0x8004BB38
// size: 0xF1C
// line start: 2568
// line end:   2576
struct DLevel_dup_5 *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004C2B4
// size: 0xF1C
// line start: 2568
// line end:   2576
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004BB5C
// size: 0xF1C
// line start: 2568
// line end:   2576
struct DLevel_dup_4 *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x80080B78
// line start: 633
// line end:   667
unsigned char *GetDecompBufffer__7TextDati(struct TextDat_dup_1 *this, int Size) {
	// register: 18
	register long *DecArray;
	// register: 19
	register int DecIndex;
	// register: 16
	register long hnd;
	// register: 20
	register unsigned char *RetAddr;
}


// address: 0x8007F038
// line start: 654
// line end:   688
unsigned char *GetDecompBufffer__7TextDati(struct TextDat_dup_14 *this, int Size) {
	// register: 18
	register long *DecArray;
	// register: 19
	register int DecIndex;
	// register: 16
	register long hnd;
	// register: 20
	register unsigned char *RetAddr;
}


// address: 0x8007D654
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


// address: 0x8003B6A4
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


// address: 0x80032DC0
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80032DC0(struct CPad *this) {
}


// address: 0x80034E18
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80034E18(struct CPad *this) {
}


// address: 0x80034E18
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80034E18(struct CPad_dup_4 *this) {
}


// address: 0x80034E40
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80034E40(struct CPad *this) {
}


// address: 0x80034E64
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80034E64(struct CPad *this) {
}


// address: 0x80034EB0
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80034EB0(struct CPad *this) {
}


// address: 0x80034EC4
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80034EC4(struct CPad *this) {
}


// address: 0x80034F18
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80034F18(struct CPad *this) {
}


// address: 0x80034F20
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80034F20(struct CPad *this) {
}


// address: 0x80034F54
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80034F54(struct CPad *this) {
}


// address: 0x80035014
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80035014(struct CPad *this) {
}


// address: 0x800350EC
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_800350EC(struct CPad *this) {
}


// address: 0x80035ED4
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80035ED4(struct CPad *this) {
}


// address: 0x80035EF0
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80035EF0(struct CPad *this) {
}


// address: 0x80045C4C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80045C4C(struct CPad *this) {
}


// address: 0x80047DA0
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80047DA0(struct CPad *this) {
}


// address: 0x8006B240
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8006B240(struct CPad *this) {
}


// address: 0x8006BD6C
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8006BD6C(struct CPad_dup_4 *this) {
}


// address: 0x8006BE78
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8006BE78(struct CPad *this) {
}


// address: 0x8006C990
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8006C990(struct CPad *this) {
}


// address: 0x8006CAB4
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8006CAB4(struct CPad *this) {
}


// address: 0x8006CC78
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8006CC78(struct CPad *this) {
}


// address: 0x8006CD1C
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8006CD1C(struct CPad *this) {
}


// address: 0x8006CF78
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8006CF78(struct CPad *this) {
}


// address: 0x8006CF90
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8006CF90(struct CPad *this) {
}


// address: 0x8006D004
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8006D004(struct CPad *this) {
}


// address: 0x8006D0EC
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8006D0EC(struct CPad *this) {
}


// address: 0x8006D19C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8006D19C(struct CPad *this) {
}


// address: 0x8006D334
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8006D334(struct CPad *this) {
}


// address: 0x8006D988
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8006D988(struct CPad *this) {
}


// address: 0x8006D9B8
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8006D9B8(struct CPad *this) {
}


// address: 0x800705A0
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_800705A0(struct CPad *this) {
}


// address: 0x80071BB8
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80071BB8(struct CPad *this) {
}


// address: 0x80072090
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80072090(struct CPad_dup_4 *this) {
}


// address: 0x8007212C
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8007212C(struct CPad *this) {
}


// address: 0x80072EF0
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80072EF0(struct CPad *this) {
}


// address: 0x80072F88
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80072F88(struct CPad *this) {
}


// address: 0x80073094
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80073094(struct CPad *this) {
}


// address: 0x8007324C
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8007324C(struct CPad *this) {
}


// address: 0x800733B4
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_800733B4(struct CPad *this) {
}


// address: 0x800734C8
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_800734C8(struct CPad *this) {
}


// address: 0x80073560
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80073560(struct CPad *this) {
}


// address: 0x800736CC
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800736CC(struct CPad *this) {
}


// address: 0x800738E8
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_800738E8(struct CPad *this) {
}


// address: 0x80073954
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80073954(struct CPad *this) {
}


// address: 0x80073A84
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80073A84(struct CPad *this) {
}


// address: 0x80073CAC
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80073CAC(struct CPad *this) {
}


// address: 0x80076B10
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80076B10(struct CPad *this) {
}


// address: 0x80083E10
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80083E10(struct CPad *this) {
}


// address: 0x8008431C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8008431C(struct CPad *this) {
}


// address: 0x800907E0
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_800907E0(struct CPad_dup_4 *this) {
}


// address: 0x80090A5C
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80090A5C(struct CPad *this) {
}


// address: 0x80090DFC
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80090DFC(struct CPad *this) {
}


// address: 0x80090FF0
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80090FF0(struct CPad *this) {
}


// address: 0x80091108
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80091108(struct CPad *this) {
}


// address: 0x80091AAC
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80091AAC(struct CPad *this) {
}


// address: 0x8009268C
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009268C(struct CPad *this) {
}


// address: 0x80092B20
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80092B20(struct CPad *this) {
}


// address: 0x8009302C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009302C(struct CPad *this) {
}


// address: 0x800931B4
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_800931B4(struct CPad *this) {
}


// address: 0x8009320C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009320C(struct CPad *this) {
}


// address: 0x800934E4
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800934E4(struct CPad *this) {
}


// address: 0x80093684
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80093684(struct CPad *this) {
}


// address: 0x80093B5C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80093B5C(struct CPad *this) {
}


// address: 0x80093C18
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80093C18(struct CPad *this) {
}


// address: 0x8009430C
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8009430C(struct CPad *this) {
}


// address: 0x8009701C
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009701C(struct CPad_dup_4 *this) {
}


// address: 0x800972A4
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_800972A4(struct CPad *this) {
}


// address: 0x80097714
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80097714(struct CPad *this) {
}


// address: 0x80097AC8
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_80097AC8(struct CPad *this) {
}


// address: 0x80097C2C
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80097C2C(struct CPad *this) {
}


// address: 0x800984B0
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800984B0(struct CPad *this) {
}


// address: 0x80099278
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80099278(struct CPad *this) {
}


// address: 0x800995B0
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_800995B0(struct CPad *this) {
}


// address: 0x80099794
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80099794(struct CPad *this) {
}


// address: 0x80099974
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80099974(struct CPad *this) {
}


// address: 0x80099C3C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80099C3C(struct CPad *this) {
}


// address: 0x80099C78
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_80099C78(struct CPad *this) {
}


// address: 0x80099D30
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_80099D30(struct CPad *this) {
}


// address: 0x8009A524
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009A524(struct CPad *this) {
}


// address: 0x8009A5C8
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009A5C8(struct CPad *this) {
}


// address: 0x8009AE10
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8009AE10(struct CPad *this) {
}


// address: 0x8009B574
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009B574(struct CPad_dup_4 *this) {
}


// address: 0x8009B9B0
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8009B9B0(struct CPad *this) {
}


// address: 0x8009BA3C
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8009BA3C(struct CPad *this) {
}


// address: 0x8009C048
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009C048(struct CPad *this) {
}


// address: 0x8009C25C
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8009C25C(struct CPad *this) {
}


// address: 0x8009D25C
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009D25C(struct CPad_dup_4 *this) {
}


// address: 0x8009D6CC
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009D6CC(struct CPad *this) {
}


// address: 0x8009D6E0
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009D6E0(struct CPad *this) {
}


// address: 0x8009DB80
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009DB80(struct CPad *this) {
}


// address: 0x8009DD08
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009DD08(struct CPad *this) {
}


// address: 0x8009E2FC
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009E2FC(struct CPad *this) {
}


// address: 0x8009E3DC
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009E3DC(struct CPad *this) {
}


// address: 0x8009E588
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009E588(struct CPad *this) {
}


// address: 0x8009E6E8
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009E6E8(struct CPad *this) {
}


// address: 0x8009EC70
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009EC70(struct CPad *this) {
}


// address: 0x8009F0D0
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad_addr_8009F0D0(struct CPad *this) {
}


// address: 0x8009F38C
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009F38C(struct CPad *this) {
}


// address: 0x8009F5DC
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009F5DC(struct CPad *this) {
}


// address: 0x8009F704
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009F704(struct CPad *this) {
}


// address: 0x8009F744
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_8009F744(struct CPad *this) {
}


// address: 0x8009F840
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009F840(struct CPad *this) {
}


// address: 0x8009FFBC
// line start: 104
// line end:   108
unsigned short GetDown__C4CPad_addr_8009FFBC(struct CPad *this) {
}


// address: 0x800A0210
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A0210(struct CPad *this) {
}


// address: 0x800A03BC
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A03BC(struct CPad *this) {
}


// address: 0x800A051C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A051C(struct CPad *this) {
}


// address: 0x800A0AA8
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A0AA8(struct CPad *this) {
}


// address: 0x800A0B40
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A0B40(struct CPad *this) {
}


// address: 0x800A15D4
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A15D4(struct CPad *this) {
}


// address: 0x800A1640
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A1640(struct CPad *this) {
}


// address: 0x800A2A7C
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad_addr_800A2A7C(struct CPad *this) {
}


// address: 0x8008361C
// size: 0x24
// line start: 391
// line end:   402
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80077E7C
// line start: 174
// line end:   175
bool GetFadeState__Fv() {
}


// address: 0x800804B0
// size: 0x4
// line start: 1454
// line end:   1456
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat_dup_14 *this, int Id) {
}


// address: 0x80081E3C
// size: 0x4
// line start: 1374
// line end:   1376
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat_dup_1 *this, int Id) {
}


// address: 0x8007EAC0
// size: 0x4
// line start: 1422
// line end:   1424
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x8007FC1C
// line start: 196
// line end:   206
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x8007BF24
// line start: 125
// line end:   139
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007C580
// line start: 128
// line end:   142
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007EEC8
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


// address: 0x80081B98
// line start: 1261
// line end:   1262
int GetFrNum__7TextDatiiii(struct TextDat_dup_1 *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8007E81C
// line start: 1309
// line end:   1310
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x80080208
// line start: 1341
// line end:   1342
int GetFrNum__7TextDatiiii(struct TextDat_dup_14 *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x8007ECA0
// line start: 1479
// line end:   1483
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x8007EB38
// line start: 1435
// line end:   1441
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x80032EC8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80032EC8(struct TextDat *this, int FrNum) {
}


// address: 0x80034F10
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80034F10(struct TextDat *this, int FrNum) {
}


// address: 0x80034F48
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80034F48(struct TextDat *this, int FrNum) {
}


// address: 0x80034F6C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80034F6C(struct TextDat *this, int FrNum) {
}


// address: 0x80034FA8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80034FA8(struct TextDat *this, int FrNum) {
}


// address: 0x80034FBC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80034FBC(struct TextDat *this, int FrNum) {
}


// address: 0x80035020
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80035020(struct TextDat *this, int FrNum) {
}


// address: 0x80035028
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80035028(struct TextDat *this, int FrNum) {
}


// address: 0x8003505C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_8003505C(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x8003511C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8003511C(struct TextDat *this, int FrNum) {
}


// address: 0x800351E4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800351E4(struct TextDat *this, int FrNum) {
}


// address: 0x80035FCC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80035FCC(struct TextDat *this, int FrNum) {
}


// address: 0x80035FCC
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_80035FCC(struct TextDat_dup_1 *this, int FrNum) {
}


// address: 0x80035FE8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80035FE8(struct TextDat *this, int FrNum) {
}


// address: 0x80045C74
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80045C74(struct TextDat *this, int FrNum) {
}


// address: 0x80047788
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047788(struct TextDat *this, int FrNum) {
}


// address: 0x800477AC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800477AC(struct TextDat *this, int FrNum) {
}


// address: 0x80047ADC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047ADC(struct TextDat *this, int FrNum) {
}


// address: 0x80047B18
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047B18(struct TextDat *this, int FrNum) {
}


// address: 0x80047B34
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047B34(struct TextDat *this, int FrNum) {
}


// address: 0x80047BC4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047BC4(struct TextDat *this, int FrNum) {
}


// address: 0x80047BE4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047BE4(struct TextDat *this, int FrNum) {
}


// address: 0x80047C18
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047C18(struct TextDat *this, int FrNum) {
}


// address: 0x80047CB8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047CB8(struct TextDat *this, int FrNum) {
}


// address: 0x80047D44
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80047D44(struct TextDat *this, int FrNum) {
}


// address: 0x80047DC8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_80047DC8(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x800487E8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800487E8(struct TextDat *this, int FrNum) {
}


// address: 0x80048818
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80048818(struct TextDat *this, int FrNum) {
}


// address: 0x800488A4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800488A4(struct TextDat *this, int FrNum) {
}


// address: 0x80049710
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_80049710(struct TextDat_dup_1 *this, int FrNum) {
}


// address: 0x80061360
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80061360(struct TextDat *this, int FrNum) {
}


// address: 0x80062690
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80062690(struct TextDat *this, int FrNum) {
}


// address: 0x8006279C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8006279C(struct TextDat *this, int FrNum) {
}


// address: 0x80062AD4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80062AD4(struct TextDat *this, int FrNum) {
}


// address: 0x80062BE8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80062BE8(struct TextDat *this, int FrNum) {
}


// address: 0x80062D7C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80062D7C(struct TextDat *this, int FrNum) {
}


// address: 0x8006311C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8006311C(struct TextDat *this, int FrNum) {
}


// address: 0x80063138
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80063138(struct TextDat *this, int FrNum) {
}


// address: 0x8006326C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8006326C(struct TextDat *this, int FrNum) {
}


// address: 0x80063280
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80063280(struct TextDat *this, int FrNum) {
}


// address: 0x80063328
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80063328(struct TextDat *this, int FrNum) {
}


// address: 0x800633CC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800633CC(struct TextDat *this, int FrNum) {
}


// address: 0x80063468
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_80063468(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x80063CAC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80063CAC(struct TextDat *this, int FrNum) {
}


// address: 0x80063CDC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80063CDC(struct TextDat *this, int FrNum) {
}


// address: 0x80073DA0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80073DA0(struct TextDat *this, int FrNum) {
}


// address: 0x80074490
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80074490(struct TextDat *this, int FrNum) {
}


// address: 0x80074618
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80074618(struct TextDat *this, int FrNum) {
}


// address: 0x80075390
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80075390(struct TextDat *this, int FrNum) {
}


// address: 0x80075420
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80075420(struct TextDat *this, int FrNum) {
}


// address: 0x800755E4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800755E4(struct TextDat *this, int FrNum) {
}


// address: 0x800756D8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800756D8(struct TextDat *this, int FrNum) {
}


// address: 0x800758A8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800758A8(struct TextDat *this, int FrNum) {
}


// address: 0x8007595C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8007595C(struct TextDat *this, int FrNum) {
}


// address: 0x80075A90
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80075A90(struct TextDat *this, int FrNum) {
}


// address: 0x80075BFC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80075BFC(struct TextDat *this, int FrNum) {
}


// address: 0x80075CF0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80075CF0(struct TextDat *this, int FrNum) {
}


// address: 0x80075D5C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80075D5C(struct TextDat *this, int FrNum) {
}


// address: 0x80075EB0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80075EB0(struct TextDat *this, int FrNum) {
}


// address: 0x80076014
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80076014(struct TextDat *this, int FrNum) {
}


// address: 0x800760D8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_800760D8(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x800765A8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800765A8(struct TextDat *this, int FrNum) {
}


// address: 0x80076730
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80076730(struct TextDat *this, int FrNum) {
}


// address: 0x800774A8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800774A8(struct TextDat *this, int FrNum) {
}


// address: 0x80077694
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077694(struct TextDat *this, int FrNum) {
}


// address: 0x80077858
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077858(struct TextDat *this, int FrNum) {
}


// address: 0x8007794C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8007794C(struct TextDat *this, int FrNum) {
}


// address: 0x800779C0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800779C0(struct TextDat *this, int FrNum) {
}


// address: 0x80077BD0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077BD0(struct TextDat *this, int FrNum) {
}


// address: 0x80077D04
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077D04(struct TextDat *this, int FrNum) {
}


// address: 0x80077E08
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077E08(struct TextDat *this, int FrNum) {
}


// address: 0x80077E70
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077E70(struct TextDat *this, int FrNum) {
}


// address: 0x80077E74
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80077E74(struct TextDat *this, int FrNum) {
}


// address: 0x80078124
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80078124(struct TextDat *this, int FrNum) {
}


// address: 0x8007834C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_8007834C(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x80078F18
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_80078F18(struct TextDat_dup_1 *this, int FrNum) {
}


// address: 0x8007AFB8
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_8007AFB8(struct TextDat_dup_1 *this, int FrNum) {
}


// address: 0x80082514
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80082514(struct TextDat *this, int FrNum) {
}


// address: 0x800828B0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800828B0(struct TextDat *this, int FrNum) {
}


// address: 0x80082C50
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80082C50(struct TextDat *this, int FrNum) {
}


// address: 0x80082E44
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80082E44(struct TextDat *this, int FrNum) {
}


// address: 0x80082ED0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80082ED0(struct TextDat *this, int FrNum) {
}


// address: 0x800831AC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800831AC(struct TextDat *this, int FrNum) {
}


// address: 0x80084424
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80084424(struct TextDat *this, int FrNum) {
}


// address: 0x800849A8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800849A8(struct TextDat *this, int FrNum) {
}


// address: 0x80084A40
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80084A40(struct TextDat *this, int FrNum) {
}


// address: 0x80084BC4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80084BC4(struct TextDat *this, int FrNum) {
}


// address: 0x80084D88
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80084D88(struct TextDat *this, int FrNum) {
}


// address: 0x80084DDC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80084DDC(struct TextDat *this, int FrNum) {
}


// address: 0x80084DFC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80084DFC(struct TextDat *this, int FrNum) {
}


// address: 0x80085148
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80085148(struct TextDat *this, int FrNum) {
}


// address: 0x8008517C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008517C(struct TextDat *this, int FrNum) {
}


// address: 0x800851C4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800851C4(struct TextDat *this, int FrNum) {
}


// address: 0x80085370
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80085370(struct TextDat *this, int FrNum) {
}


// address: 0x800853FC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800853FC(struct TextDat *this, int FrNum) {
}


// address: 0x80085424
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_80085424(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x80085674
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80085674(struct TextDat *this, int FrNum) {
}


// address: 0x8008570C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008570C(struct TextDat *this, int FrNum) {
}


// address: 0x800861C0
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_800861C0(struct TextDat_dup_1 *this, int FrNum) {
}


// address: 0x80086950
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80086950(struct TextDat *this, int FrNum) {
}


// address: 0x80086ED4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80086ED4(struct TextDat *this, int FrNum) {
}


// address: 0x800870F0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800870F0(struct TextDat *this, int FrNum) {
}


// address: 0x800872B4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800872B4(struct TextDat *this, int FrNum) {
}


// address: 0x80087328
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80087328(struct TextDat *this, int FrNum) {
}


// address: 0x80087674
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80087674(struct TextDat *this, int FrNum) {
}


// address: 0x800876F0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800876F0(struct TextDat *this, int FrNum) {
}


// address: 0x80087984
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_80087984(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x80087BA0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80087BA0(struct TextDat *this, int FrNum) {
}


// address: 0x800886EC
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_800886EC(struct TextDat_dup_1 *this, int FrNum) {
}


// address: 0x80088F64
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80088F64(struct TextDat *this, int FrNum) {
}


// address: 0x80089524
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80089524(struct TextDat *this, int FrNum) {
}


// address: 0x800898C4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800898C4(struct TextDat *this, int FrNum) {
}


// address: 0x8008992C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008992C(struct TextDat *this, int FrNum) {
}


// address: 0x80089AB8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80089AB8(struct TextDat *this, int FrNum) {
}


// address: 0x80089E48
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80089E48(struct TextDat *this, int FrNum) {
}


// address: 0x8008AE84
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008AE84(struct TextDat *this, int FrNum) {
}


// address: 0x8008B490
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008B490(struct TextDat *this, int FrNum) {
}


// address: 0x8008B72C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008B72C(struct TextDat *this, int FrNum) {
}


// address: 0x8008B90C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008B90C(struct TextDat *this, int FrNum) {
}


// address: 0x8008B914
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008B914(struct TextDat *this, int FrNum) {
}


// address: 0x8008BCFC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008BCFC(struct TextDat *this, int FrNum) {
}


// address: 0x8008BD14
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008BD14(struct TextDat *this, int FrNum) {
}


// address: 0x8008BEEC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008BEEC(struct TextDat *this, int FrNum) {
}


// address: 0x8008C0E0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_8008C0E0(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x8008C230
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008C230(struct TextDat *this, int FrNum) {
}


// address: 0x8008C2AC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008C2AC(struct TextDat *this, int FrNum) {
}


// address: 0x8008C64C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008C64C(struct TextDat *this, int FrNum) {
}


// address: 0x8008C814
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008C814(struct TextDat *this, int FrNum) {
}


// address: 0x8008C840
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008C840(struct TextDat *this, int FrNum) {
}


// address: 0x8008CF04
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_8008CF04(struct TextDat_dup_1 *this, int FrNum) {
}


// address: 0x8008CF0C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008CF0C(struct TextDat *this, int FrNum) {
}


// address: 0x8008DD84
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008DD84(struct TextDat *this, int FrNum) {
}


// address: 0x8008E390
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008E390(struct TextDat *this, int FrNum) {
}


// address: 0x8008E698
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008E698(struct TextDat *this, int FrNum) {
}


// address: 0x8008E84C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008E84C(struct TextDat *this, int FrNum) {
}


// address: 0x8008E878
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008E878(struct TextDat *this, int FrNum) {
}


// address: 0x8008EC80
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008EC80(struct TextDat *this, int FrNum) {
}


// address: 0x8008EC88
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008EC88(struct TextDat *this, int FrNum) {
}


// address: 0x8008EFBC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_8008EFBC(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x8008F128
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8008F128(struct TextDat *this, int FrNum) {
}


// address: 0x8008FB64
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_8008FB64(struct TextDat_dup_1 *this, int FrNum) {
}


// address: 0x800936F8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800936F8(struct TextDat *this, int FrNum) {
}


// address: 0x80093954
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80093954(struct TextDat *this, int FrNum) {
}


// address: 0x80093CCC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80093CCC(struct TextDat *this, int FrNum) {
}


// address: 0x80093EC0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80093EC0(struct TextDat *this, int FrNum) {
}


// address: 0x80094308
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80094308(struct TextDat *this, int FrNum) {
}


// address: 0x80094D64
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80094D64(struct TextDat *this, int FrNum) {
}


// address: 0x8009589C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009589C(struct TextDat *this, int FrNum) {
}


// address: 0x80095B74
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80095B74(struct TextDat *this, int FrNum) {
}


// address: 0x80095FEC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80095FEC(struct TextDat *this, int FrNum) {
}


// address: 0x800961CC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800961CC(struct TextDat *this, int FrNum) {
}


// address: 0x800962E4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800962E4(struct TextDat *this, int FrNum) {
}


// address: 0x800964D8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800964D8(struct TextDat *this, int FrNum) {
}


// address: 0x800965D4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800965D4(struct TextDat *this, int FrNum) {
}


// address: 0x80096DD8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_80096DD8(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x80096E94
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_80096E94(struct TextDat *this, int FrNum) {
}


// address: 0x800971DC
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_800971DC(struct TextDat_dup_1 *this, int FrNum) {
}


// address: 0x8009B6BC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009B6BC(struct TextDat *this, int FrNum) {
}


// address: 0x8009BAEC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009BAEC(struct TextDat *this, int FrNum) {
}


// address: 0x8009BB78
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009BB78(struct TextDat *this, int FrNum) {
}


// address: 0x8009C168
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009C168(struct TextDat *this, int FrNum) {
}


// address: 0x8009C398
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009C398(struct TextDat *this, int FrNum) {
}


// address: 0x8009D348
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009D348(struct TextDat *this, int FrNum) {
}


// address: 0x8009D7EC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009D7EC(struct TextDat *this, int FrNum) {
}


// address: 0x8009D818
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009D818(struct TextDat *this, int FrNum) {
}


// address: 0x8009DCA0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009DCA0(struct TextDat *this, int FrNum) {
}


// address: 0x8009DDF4
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009DDF4(struct TextDat *this, int FrNum) {
}


// address: 0x8009E41C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009E41C(struct TextDat *this, int FrNum) {
}


// address: 0x8009E4FC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009E4FC(struct TextDat *this, int FrNum) {
}


// address: 0x8009E6A8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009E6A8(struct TextDat *this, int FrNum) {
}


// address: 0x8009E808
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009E808(struct TextDat *this, int FrNum) {
}


// address: 0x8009ED90
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009ED90(struct TextDat *this, int FrNum) {
}


// address: 0x8009F20C
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati_addr_8009F20C(struct TextDat_dup_1 *this, int FrNum) {
}


// address: 0x8009F478
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009F478(struct TextDat *this, int FrNum) {
}


// address: 0x8009F6C8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009F6C8(struct TextDat *this, int FrNum) {
}


// address: 0x8009F824
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009F824(struct TextDat *this, int FrNum) {
}


// address: 0x8009F87C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_8009F87C(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x8009F92C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_8009F92C(struct TextDat *this, int FrNum) {
}


// address: 0x800A00A8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A00A8(struct TextDat *this, int FrNum) {
}


// address: 0x800A02FC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A02FC(struct TextDat *this, int FrNum) {
}


// address: 0x800A04A8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A04A8(struct TextDat *this, int FrNum) {
}


// address: 0x800A0608
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A0608(struct TextDat *this, int FrNum) {
}


// address: 0x800A0A64
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A0A64(struct TextDat *this, int FrNum) {
}


// address: 0x800A0C2C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A0C2C(struct TextDat *this, int FrNum) {
}


// address: 0x800A16C0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati_addr_800A16C0(struct TextDat *this, int FrNum) {
}


// address: 0x800A172C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_800A172C(struct TextDat_dup_14 *this, int FrNum) {
}


// address: 0x800A2A38
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR_dup_14 *GetFr__7TextDati_addr_800A2A38(struct TextDat_dup_14 *this, int FrNum) {
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


// address: 0x8006053C
// line start: 4547
// line end:   4548
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct_dup_4 *ptrplr, struct ItemStruct *h) {
}


// address: 0x800610CC
// line start: 4619
// line end:   4620
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct_dup_13 *ptrplr, struct ItemStruct_dup_13 *h) {
}


// address: 0x80061228
// line start: 4586
// line end:   4587
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct_dup_6 *ptrplr, struct ItemStruct_dup_6 *h) {
}


// address: 0x80061B0C
// line start: 4523
// line end:   4524
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x80060F94
// line start: 4620
// line end:   4621
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct_dup_7 *ptrplr, struct ItemStruct *h) {
}


// address: 0x80060A34
// line start: 4608
// line end:   4609
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct_dup_11 *ptrplr, struct ItemStruct_dup_11 *h) {
}


// address: 0x8003CC94
// line start: 1111
// line end:   1127
void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct_dup_13 *h) {
	// register: 4
	register int i;
	// register: 2
	register int ii;
	// register: 7
	register int s;
	// register: 17
	register unsigned char doneflag;
}


// address: 0x8003CB98
// line start: 1111
// line end:   1127
void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct_dup_11 *h) {
	// register: 4
	register int i;
	// register: 2
	register int ii;
	// register: 7
	register int s;
	// register: 17
	register unsigned char doneflag;
}


// address: 0x8003C928
// line start: 1111
// line end:   1127
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


// address: 0x8003CDBC
// line start: 1111
// line end:   1127
void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct_dup_6 *h) {
	// register: 4
	register int i;
	// register: 2
	register int ii;
	// register: 7
	register int s;
	// register: 17
	register unsigned char doneflag;
}


// address: 0x8003DA6C
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


// address: 0x80089460
// line start: 97
// line end:   105
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x800893DC
// line start: 97
// line end:   105
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008E59C
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008DE44
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection_dup_4 *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8003EF50
// line start: 1650
// line end:   1740
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x80040FBC
// line start: 2161
// line end:   2191
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80040B54
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


// address: 0x8003E330
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


// address: 0x80043364
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


// address: 0x80073F18
// line start: 254
// line end:   280
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80073E10
// line start: 230
// line end:   246
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80096DCC
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer_dup_14 *this) {
}


// address: 0x800649AC
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer_dup_1 *this) {
}


// address: 0x80061C0C
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x8005F2A4
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_8005F2A4(struct CPlayer *this) {
}


// address: 0x800611CC
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_800611CC(struct CPlayer *this) {
}


// address: 0x800613B8
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_800613B8(struct CPlayer_dup_14 *this) {
}


// address: 0x80073D68
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80073D68(struct CPlayer *this) {
}


// address: 0x80074458
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80074458(struct CPlayer *this) {
}


// address: 0x800745E0
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_800745E0(struct CPlayer *this) {
}


// address: 0x80075358
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075358(struct CPlayer *this) {
}


// address: 0x800753E8
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_800753E8(struct CPlayer *this) {
}


// address: 0x800755AC
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_800755AC(struct CPlayer *this) {
}


// address: 0x800756A0
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_800756A0(struct CPlayer *this) {
}


// address: 0x80075870
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075870(struct CPlayer *this) {
}


// address: 0x80075924
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075924(struct CPlayer *this) {
}


// address: 0x80075A58
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075A58(struct CPlayer *this) {
}


// address: 0x80075BC4
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075BC4(struct CPlayer *this) {
}


// address: 0x80075CB8
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075CB8(struct CPlayer *this) {
}


// address: 0x80075D24
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075D24(struct CPlayer *this) {
}


// address: 0x80075E78
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80075E78(struct CPlayer *this) {
}


// address: 0x800760A0
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_800760A0(struct CPlayer_dup_14 *this) {
}


// address: 0x80078EE0
// line start: 60
// line end:   60
int GetLastOtPos__C7CPlayer_addr_80078EE0(struct CPlayer_dup_1 *this) {
}


// address: 0x80061C24
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800649C4
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer_dup_1 *this) {
}


// address: 0x800613D0
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer(struct CPlayer_dup_14 *this) {
}


// address: 0x80073D80
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80073D80(struct CPlayer *this) {
}


// address: 0x80074470
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80074470(struct CPlayer *this) {
}


// address: 0x800745F8
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_800745F8(struct CPlayer *this) {
}


// address: 0x80075370
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075370(struct CPlayer *this) {
}


// address: 0x80075400
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075400(struct CPlayer *this) {
}


// address: 0x800755C4
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_800755C4(struct CPlayer *this) {
}


// address: 0x800756B8
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_800756B8(struct CPlayer *this) {
}


// address: 0x80075888
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075888(struct CPlayer *this) {
}


// address: 0x8007593C
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_8007593C(struct CPlayer *this) {
}


// address: 0x80075A70
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075A70(struct CPlayer *this) {
}


// address: 0x80075BDC
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075BDC(struct CPlayer *this) {
}


// address: 0x80075CD0
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075CD0(struct CPlayer *this) {
}


// address: 0x80075D3C
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075D3C(struct CPlayer *this) {
}


// address: 0x80075E90
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80075E90(struct CPlayer *this) {
}


// address: 0x800760B8
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_800760B8(struct CPlayer_dup_14 *this) {
}


// address: 0x80078EF8
// line start: 58
// line end:   58
int GetLastScrX__C7CPlayer_addr_80078EF8(struct CPlayer_dup_1 *this) {
}


// address: 0x800649B8
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer_dup_1 *this) {
}


// address: 0x80061C18
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800613C4
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer(struct CPlayer_dup_14 *this) {
}


// address: 0x80073D74
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80073D74(struct CPlayer *this) {
}


// address: 0x80074464
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80074464(struct CPlayer *this) {
}


// address: 0x800745EC
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_800745EC(struct CPlayer *this) {
}


// address: 0x80075364
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80075364(struct CPlayer *this) {
}


// address: 0x800753F4
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_800753F4(struct CPlayer *this) {
}


// address: 0x800755B8
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_800755B8(struct CPlayer *this) {
}


// address: 0x800756AC
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_800756AC(struct CPlayer *this) {
}


// address: 0x8007587C
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_8007587C(struct CPlayer *this) {
}


// address: 0x80075930
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80075930(struct CPlayer *this) {
}


// address: 0x80075A64
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80075A64(struct CPlayer *this) {
}


// address: 0x80075BD0
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80075BD0(struct CPlayer *this) {
}


// address: 0x80075CC4
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80075CC4(struct CPlayer *this) {
}


// address: 0x80075D30
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80075D30(struct CPlayer *this) {
}


// address: 0x80075E84
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80075E84(struct CPlayer *this) {
}


// address: 0x800760AC
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_800760AC(struct CPlayer_dup_14 *this) {
}


// address: 0x80078EEC
// line start: 59
// line end:   59
int GetLastScrY__C7CPlayer_addr_80078EEC(struct CPlayer_dup_1 *this) {
}


// address: 0x800705A4
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


// address: 0x80078F98
// size: 0xF1C
// line start: 100
// line end:   108
struct DLevel *GetMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x8007B2D0
// size: 0xF1C
// line start: 100
// line end:   108
struct DLevel *GetMap__13CompLevelMapsi(struct CompLevelMaps_dup_14 *this, int MapNum) {
}


// address: 0x8007B450
// size: 0xF1C
// line start: 150
// line end:   183
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


// address: 0x800204E4
// size: 0x28
// line start: 940
// line end:   961
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x8007FAC4
// line start: 167
// line end:   167
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8008E8B8
// size: 0x18
// line start: 67
// line end:   67
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8008E0EC
// line start: 238
// line end:   238
int GetNumOfActions__7TextDati(struct TextDat_dup_1 *this, int Creature) {
}


// address: 0x8008ABD0
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008D420
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati(struct TextDat_dup_14 *this, int Creature) {
}


// address: 0x80091590
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80091590(struct TextDat *this, int Creature) {
}


// address: 0x800917EC
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_800917EC(struct TextDat *this, int Creature) {
}


// address: 0x80091B64
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80091B64(struct TextDat *this, int Creature) {
}


// address: 0x80091D58
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80091D58(struct TextDat *this, int Creature) {
}


// address: 0x80091EB8
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80091EB8(struct TextDat *this, int Creature) {
}


// address: 0x8009289C
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_8009289C(struct TextDat *this, int Creature) {
}


// address: 0x8009343C
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_8009343C(struct TextDat *this, int Creature) {
}


// address: 0x800937F4
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_800937F4(struct TextDat *this, int Creature) {
}


// address: 0x80093CA0
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80093CA0(struct TextDat *this, int Creature) {
}


// address: 0x80093E80
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80093E80(struct TextDat *this, int Creature) {
}


// address: 0x80093F64
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80093F64(struct TextDat *this, int Creature) {
}


// address: 0x80094158
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80094158(struct TextDat *this, int Creature) {
}


// address: 0x800942B8
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_800942B8(struct TextDat *this, int Creature) {
}


// address: 0x80094930
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_80094930(struct TextDat_dup_14 *this, int Creature) {
}


// address: 0x800949D8
// line start: 236
// line end:   236
int GetNumOfActions__7TextDati_addr_800949D8(struct TextDat *this, int Creature) {
}


// address: 0x80095074
// line start: 238
// line end:   238
int GetNumOfActions__7TextDati_addr_80095074(struct TextDat_dup_1 *this, int Creature) {
}


// address: 0x800896A4
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x80088D44
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks_dup_4 *this) {
}


// address: 0x8008CBF8
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks_dup_1 *this) {
}


// address: 0x8008BEC0
// line start: 117
// line end:   117
int GetNumOfBlocks__7CBlocks(struct CBlocks_dup_14 *this) {
}


// address: 0x80082E80
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat(struct TextDat_dup_1 *this) {
}


// address: 0x8007FA58
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x80081540
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat(struct TextDat_dup_14 *this) {
}


// address: 0x80056D14
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80056D14(struct TextDat *this) {
}


// address: 0x800582C8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800582C8(struct TextDat *this) {
}


// address: 0x800582EC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800582EC(struct TextDat *this) {
}


// address: 0x800584E0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800584E0(struct TextDat *this) {
}


// address: 0x800585E8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800585E8(struct TextDat *this) {
}


// address: 0x80058778
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058778(struct TextDat *this) {
}


// address: 0x80058AB8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058AB8(struct TextDat *this) {
}


// address: 0x80058AD4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058AD4(struct TextDat *this) {
}


// address: 0x80058C58
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058C58(struct TextDat *this) {
}


// address: 0x80058C84
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058C84(struct TextDat *this) {
}


// address: 0x80058CD0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058CD0(struct TextDat *this) {
}


// address: 0x80058D60
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058D60(struct TextDat *this) {
}


// address: 0x80058D90
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058D90(struct TextDat *this) {
}


// address: 0x80058E1C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058E1C(struct TextDat *this) {
}


// address: 0x80058E68
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80058E68(struct TextDat_dup_14 *this) {
}


// address: 0x8005BA4C
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat_addr_8005BA4C(struct TextDat_dup_1 *this) {
}


// address: 0x80076000
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80076000(struct TextDat *this) {
}


// address: 0x80076594
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80076594(struct TextDat *this) {
}


// address: 0x8007671C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8007671C(struct TextDat *this) {
}


// address: 0x80077494
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077494(struct TextDat *this) {
}


// address: 0x80077680
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077680(struct TextDat *this) {
}


// address: 0x80077844
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077844(struct TextDat *this) {
}


// address: 0x80077938
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077938(struct TextDat *this) {
}


// address: 0x800779AC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800779AC(struct TextDat *this) {
}


// address: 0x80077BBC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077BBC(struct TextDat *this) {
}


// address: 0x80077CF0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077CF0(struct TextDat *this) {
}


// address: 0x80077DF4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077DF4(struct TextDat *this) {
}


// address: 0x80077E5C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077E5C(struct TextDat *this) {
}


// address: 0x80077E60
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80077E60(struct TextDat *this) {
}


// address: 0x80078110
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80078110(struct TextDat *this) {
}


// address: 0x80078338
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80078338(struct TextDat_dup_14 *this) {
}


// address: 0x8007AFA4
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat_addr_8007AFA4(struct TextDat_dup_1 *this) {
}


// address: 0x80088F28
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80088F28(struct TextDat *this) {
}


// address: 0x800894E8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800894E8(struct TextDat *this) {
}


// address: 0x80089888
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80089888(struct TextDat *this) {
}


// address: 0x800898F0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800898F0(struct TextDat *this) {
}


// address: 0x80089A7C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80089A7C(struct TextDat *this) {
}


// address: 0x80089E0C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80089E0C(struct TextDat *this) {
}


// address: 0x8008A3FC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008A3FC(struct TextDat *this) {
}


// address: 0x8008A8CC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008A8CC(struct TextDat *this) {
}


// address: 0x8008AC6C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008AC6C(struct TextDat *this) {
}


// address: 0x8008AD24
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008AD24(struct TextDat *this) {
}


// address: 0x8008AE48
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008AE48(struct TextDat *this) {
}


// address: 0x8008AE60
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008AE60(struct TextDat *this) {
}


// address: 0x8008B224
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008B224(struct TextDat *this) {
}


// address: 0x8008B454
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008B454(struct TextDat *this) {
}


// address: 0x8008B6F0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008B6F0(struct TextDat *this) {
}


// address: 0x8008B8D0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008B8D0(struct TextDat *this) {
}


// address: 0x8008B8D8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008B8D8(struct TextDat *this) {
}


// address: 0x8008BCC0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008BCC0(struct TextDat *this) {
}


// address: 0x8008BCD8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008BCD8(struct TextDat *this) {
}


// address: 0x8008C0A4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008C0A4(struct TextDat_dup_14 *this) {
}


// address: 0x8008C1F4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008C1F4(struct TextDat *this) {
}


// address: 0x8008C27C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008C27C(struct TextDat *this) {
}


// address: 0x8008C888
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008C888(struct TextDat *this) {
}


// address: 0x8008CB24
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008CB24(struct TextDat *this) {
}


// address: 0x8008CD04
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008CD04(struct TextDat *this) {
}


// address: 0x8008CD0C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008CD0C(struct TextDat *this) {
}


// address: 0x8008CECC
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat_addr_8008CECC(struct TextDat_dup_1 *this) {
}


// address: 0x8008D0F4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008D0F4(struct TextDat *this) {
}


// address: 0x8008D10C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008D10C(struct TextDat *this) {
}


// address: 0x8008D4BC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008D4BC(struct TextDat_dup_14 *this) {
}


// address: 0x8008D628
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8008D628(struct TextDat *this) {
}


// address: 0x8008E188
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat_addr_8008E188(struct TextDat_dup_1 *this) {
}


// address: 0x8009162C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8009162C(struct TextDat *this) {
}


// address: 0x80091888
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80091888(struct TextDat *this) {
}


// address: 0x80091C00
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80091C00(struct TextDat *this) {
}


// address: 0x80091DF4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80091DF4(struct TextDat *this) {
}


// address: 0x80091F54
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80091F54(struct TextDat *this) {
}


// address: 0x80092938
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80092938(struct TextDat *this) {
}


// address: 0x800934D8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800934D8(struct TextDat *this) {
}


// address: 0x80093890
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80093890(struct TextDat *this) {
}


// address: 0x80093D3C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80093D3C(struct TextDat *this) {
}


// address: 0x80093F1C
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80093F1C(struct TextDat *this) {
}


// address: 0x80094000
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80094000(struct TextDat *this) {
}


// address: 0x800941F4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800941F4(struct TextDat *this) {
}


// address: 0x80094354
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80094354(struct TextDat *this) {
}


// address: 0x800949CC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800949CC(struct TextDat_dup_14 *this) {
}


// address: 0x80094A74
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_80094A74(struct TextDat *this) {
}


// address: 0x80095110
// line start: 237
// line end:   237
int GetNumOfCreatures__7TextDat_addr_80095110(struct TextDat_dup_1 *this) {
}


// address: 0x8009D334
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8009D334(struct TextDat *this) {
}


// address: 0x8009DDE0
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8009DDE0(struct TextDat *this) {
}


// address: 0x8009F464
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8009F464(struct TextDat *this) {
}


// address: 0x8009F6B4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8009F6B4(struct TextDat *this) {
}


// address: 0x8009F918
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_8009F918(struct TextDat *this) {
}


// address: 0x800A0094
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800A0094(struct TextDat *this) {
}


// address: 0x800A02E8
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800A02E8(struct TextDat *this) {
}


// address: 0x800A0494
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800A0494(struct TextDat *this) {
}


// address: 0x800A05F4
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800A05F4(struct TextDat *this) {
}


// address: 0x800A0C18
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800A0C18(struct TextDat *this) {
}


// address: 0x800A16AC
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800A16AC(struct TextDat *this) {
}


// address: 0x800A1718
// line start: 235
// line end:   235
int GetNumOfCreatures__7TextDat_addr_800A1718(struct TextDat_dup_14 *this) {
}


// address: 0x8007FA78
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x80082E9C
// line start: 227
// line end:   227
int GetNumOfFrames__7TextDat(struct TextDat_dup_1 *this) {
}


// address: 0x80081560
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat(struct TextDat_dup_14 *this) {
}


// address: 0x80073D8C
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80073D8C(struct TextDat *this) {
}


// address: 0x8007447C
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_8007447C(struct TextDat *this) {
}


// address: 0x80074604
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80074604(struct TextDat *this) {
}


// address: 0x8007537C
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_8007537C(struct TextDat *this) {
}


// address: 0x8007540C
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_8007540C(struct TextDat *this) {
}


// address: 0x800755D0
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_800755D0(struct TextDat *this) {
}


// address: 0x800756C4
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_800756C4(struct TextDat *this) {
}


// address: 0x80075894
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075894(struct TextDat *this) {
}


// address: 0x80075948
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075948(struct TextDat *this) {
}


// address: 0x80075A7C
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075A7C(struct TextDat *this) {
}


// address: 0x80075BE8
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075BE8(struct TextDat *this) {
}


// address: 0x80075CDC
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075CDC(struct TextDat *this) {
}


// address: 0x80075D48
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075D48(struct TextDat *this) {
}


// address: 0x80075E9C
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_80075E9C(struct TextDat *this) {
}


// address: 0x800760C4
// line start: 225
// line end:   225
int GetNumOfFrames__7TextDat_addr_800760C4(struct TextDat_dup_14 *this) {
}


// address: 0x80078F04
// line start: 227
// line end:   227
int GetNumOfFrames__7TextDat_addr_80078F04(struct TextDat_dup_1 *this) {
}


// address: 0x800897D8
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008CE1C
// line start: 239
// line end:   239
int GetNumOfFrames__7TextDatii(struct TextDat_dup_1 *this, int Creature, int Action) {
}


// address: 0x8008BFF4
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii(struct TextDat_dup_14 *this, int Creature, int Action) {
}


// address: 0x80056C64
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80056C64(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058218
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058218(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8005823C
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8005823C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058430
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058430(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058538
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058538(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800586C8
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800586C8(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058A08
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058A08(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058A24
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058A24(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058BA8
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058BA8(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058BD4
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058BD4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058C20
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058C20(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058CB0
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058CB0(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058CE0
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058CE0(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058D6C
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058D6C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058DB8
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80058DB8(struct TextDat_dup_14 *this, int Creature, int Action) {
}


// address: 0x8005B99C
// line start: 239
// line end:   239
int GetNumOfFrames__7TextDatii_addr_8005B99C(struct TextDat_dup_1 *this, int Creature, int Action) {
}


// address: 0x80075F50
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80075F50(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800764E4
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800764E4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8007666C
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8007666C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800773E4
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800773E4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800775D0
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800775D0(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077794
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80077794(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077888
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80077888(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800778FC
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800778FC(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077B0C
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80077B0C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077C40
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80077C40(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077D44
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80077D44(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077DAC
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80077DAC(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077DB0
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80077DB0(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80078060
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80078060(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80078288
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_80078288(struct TextDat_dup_14 *this, int Creature, int Action) {
}


// address: 0x8007AEF4
// line start: 239
// line end:   239
int GetNumOfFrames__7TextDatii_addr_8007AEF4(struct TextDat_dup_1 *this, int Creature, int Action) {
}


// address: 0x8008A328
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008A328(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008A7F8
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008A7F8(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008AB98
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008AB98(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008AC50
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008AC50(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008AD8C
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008AD8C(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008B150
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008B150(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008C1A8
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008C1A8(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008C7B4
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008C7B4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008CA50
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008CA50(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008CC30
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008CC30(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008CC38
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008CC38(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008D020
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008D020(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008D038
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008D038(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008D3E8
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008D3E8(struct TextDat_dup_14 *this, int Creature, int Action) {
}


// address: 0x8008D554
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8008D554(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008E0B4
// line start: 239
// line end:   239
int GetNumOfFrames__7TextDatii_addr_8008E0B4(struct TextDat_dup_1 *this, int Creature, int Action) {
}


// address: 0x8009D284
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8009D284(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8009DD30
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8009DD30(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8009F3B4
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8009F3B4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8009F604
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8009F604(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8009F868
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8009F868(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8009FFE4
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_8009FFE4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A0238
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800A0238(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A03E4
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800A03E4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A0544
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800A0544(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A0B68
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800A0B68(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A15FC
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800A15FC(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A1668
// line start: 237
// line end:   237
int GetNumOfFrames__7TextDatii_addr_800A1668(struct TextDat_dup_14 *this, int Creature, int Action) {
}


// address: 0x8008E6CC
// line start: 132
// line end:   132
int GetNumOfObjs__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
}


// address: 0x8008DF74
// line start: 132
// line end:   132
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8008C02C
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct_dup_7 *Plr) {
}


// address: 0x8008C4A8
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct_dup_11 *Plr) {
}


// address: 0x8008A460
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008CDCC
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct_dup_13 *Plr) {
}


// address: 0x80089B00
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct_dup_4 *Plr) {
}


// address: 0x8008BA20
// line start: 260
// line end:   277
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct_dup_6 *Plr) {
}


// address: 0x8008E6D4
// size: 0x18
// line start: 110
// line end:   116
struct PalEntry *GetObj__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008DF7C
// size: 0x18
// line start: 110
// line end:   116
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80058640
// line start: 3562
// line end:   3698
void GetObjectStr__Fi(int i) {
}


// address: 0x80089D34
// size: 0x4
// line start: 65
// line end:   65
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x80073A48
// line start: 1646
// line end:   1649
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad_dup_13 *GPad;
}


// address: 0x80073C3C
// line start: 1649
// line end:   1652
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad_dup_14 *GPad;
}


// address: 0x80071B48
// line start: 1649
// line end:   1652
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad *GPad;
}


// address: 0x8008EA54
// line start: 204
// line end:   218
unsigned int GetPal__6GPaneli(struct GPanel_dup_1 *this, int Frm) {
}


// address: 0x8008B53C
// line start: 204
// line end:   218
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008DE60
// line start: 205
// line end:   219
unsigned int GetPal__6GPaneli(struct GPanel_dup_14 *this, int Frm) {
}


// address: 0x80081574
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati(struct TextDat_dup_14 *this, int PalNum) {
}


// address: 0x80082EB0
// size: 0x8
// line start: 226
// line end:   226
struct PAL *GetPal__7TextDati(struct TextDat_dup_1 *this, int PalNum) {
}


// address: 0x8007FA8C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x80032EAC
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80032EAC(struct TextDat *this, int PalNum) {
}


// address: 0x80034EF4
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80034EF4(struct TextDat *this, int PalNum) {
}


// address: 0x80034F2C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80034F2C(struct TextDat *this, int PalNum) {
}


// address: 0x80034F50
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80034F50(struct TextDat *this, int PalNum) {
}


// address: 0x80034F8C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80034F8C(struct TextDat *this, int PalNum) {
}


// address: 0x80034FA0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80034FA0(struct TextDat *this, int PalNum) {
}


// address: 0x80035004
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80035004(struct TextDat *this, int PalNum) {
}


// address: 0x8003500C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8003500C(struct TextDat *this, int PalNum) {
}


// address: 0x80035040
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80035040(struct TextDat_dup_14 *this, int PalNum) {
}


// address: 0x80035100
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80035100(struct TextDat *this, int PalNum) {
}


// address: 0x800351C8
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800351C8(struct TextDat *this, int PalNum) {
}


// address: 0x80035FB0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80035FB0(struct TextDat *this, int PalNum) {
}


// address: 0x80035FB0
// size: 0x8
// line start: 226
// line end:   226
struct PAL *GetPal__7TextDati_addr_80035FB0(struct TextDat_dup_1 *this, int PalNum) {
}


// address: 0x80035FCC
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80035FCC(struct TextDat *this, int PalNum) {
}


// address: 0x80061344
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80061344(struct TextDat *this, int PalNum) {
}


// address: 0x80062674
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80062674(struct TextDat *this, int PalNum) {
}


// address: 0x80062780
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80062780(struct TextDat *this, int PalNum) {
}


// address: 0x80062AB8
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80062AB8(struct TextDat *this, int PalNum) {
}


// address: 0x80062BCC
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80062BCC(struct TextDat *this, int PalNum) {
}


// address: 0x80062D60
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80062D60(struct TextDat *this, int PalNum) {
}


// address: 0x80063100
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80063100(struct TextDat *this, int PalNum) {
}


// address: 0x8006311C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8006311C(struct TextDat *this, int PalNum) {
}


// address: 0x80063250
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80063250(struct TextDat *this, int PalNum) {
}


// address: 0x80063264
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80063264(struct TextDat *this, int PalNum) {
}


// address: 0x8006330C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8006330C(struct TextDat *this, int PalNum) {
}


// address: 0x800633B0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800633B0(struct TextDat *this, int PalNum) {
}


// address: 0x8006344C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8006344C(struct TextDat_dup_14 *this, int PalNum) {
}


// address: 0x80063C90
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80063C90(struct TextDat *this, int PalNum) {
}


// address: 0x80063CC0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80063CC0(struct TextDat *this, int PalNum) {
}


// address: 0x80084A24
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80084A24(struct TextDat *this, int PalNum) {
}


// address: 0x80084DC0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80084DC0(struct TextDat *this, int PalNum) {
}


// address: 0x80085160
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80085160(struct TextDat *this, int PalNum) {
}


// address: 0x80085354
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80085354(struct TextDat *this, int PalNum) {
}


// address: 0x800853E0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800853E0(struct TextDat *this, int PalNum) {
}


// address: 0x800856F0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800856F0(struct TextDat *this, int PalNum) {
}


// address: 0x80086934
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80086934(struct TextDat *this, int PalNum) {
}


// address: 0x80086EB8
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80086EB8(struct TextDat *this, int PalNum) {
}


// address: 0x800870D4
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800870D4(struct TextDat *this, int PalNum) {
}


// address: 0x80087298
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80087298(struct TextDat *this, int PalNum) {
}


// address: 0x8008730C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008730C(struct TextDat *this, int PalNum) {
}


// address: 0x80087658
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80087658(struct TextDat *this, int PalNum) {
}


// address: 0x800876D4
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800876D4(struct TextDat *this, int PalNum) {
}


// address: 0x80087968
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80087968(struct TextDat_dup_14 *this, int PalNum) {
}


// address: 0x80087B84
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80087B84(struct TextDat *this, int PalNum) {
}


// address: 0x800886D0
// size: 0x8
// line start: 226
// line end:   226
struct PAL *GetPal__7TextDati_addr_800886D0(struct TextDat_dup_1 *this, int PalNum) {
}


// address: 0x80088F48
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80088F48(struct TextDat *this, int PalNum) {
}


// address: 0x80089508
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80089508(struct TextDat *this, int PalNum) {
}


// address: 0x800898A8
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_800898A8(struct TextDat *this, int PalNum) {
}


// address: 0x80089910
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80089910(struct TextDat *this, int PalNum) {
}


// address: 0x80089A9C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80089A9C(struct TextDat *this, int PalNum) {
}


// address: 0x80089E2C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_80089E2C(struct TextDat *this, int PalNum) {
}


// address: 0x8008AE68
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008AE68(struct TextDat *this, int PalNum) {
}


// address: 0x8008B474
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008B474(struct TextDat *this, int PalNum) {
}


// address: 0x8008B710
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008B710(struct TextDat *this, int PalNum) {
}


// address: 0x8008B8F0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008B8F0(struct TextDat *this, int PalNum) {
}


// address: 0x8008B8F8
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008B8F8(struct TextDat *this, int PalNum) {
}


// address: 0x8008BCE0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008BCE0(struct TextDat *this, int PalNum) {
}


// address: 0x8008BCF8
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008BCF8(struct TextDat *this, int PalNum) {
}


// address: 0x8008BED0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008BED0(struct TextDat *this, int PalNum) {
}


// address: 0x8008C0C4
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008C0C4(struct TextDat_dup_14 *this, int PalNum) {
}


// address: 0x8008C214
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008C214(struct TextDat *this, int PalNum) {
}


// address: 0x8008C290
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008C290(struct TextDat *this, int PalNum) {
}


// address: 0x8008C630
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008C630(struct TextDat *this, int PalNum) {
}


// address: 0x8008C7F8
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008C7F8(struct TextDat *this, int PalNum) {
}


// address: 0x8008C824
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008C824(struct TextDat *this, int PalNum) {
}


// address: 0x8008CEE8
// size: 0x8
// line start: 226
// line end:   226
struct PAL *GetPal__7TextDati_addr_8008CEE8(struct TextDat_dup_1 *this, int PalNum) {
}


// address: 0x8008CEF0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008CEF0(struct TextDat *this, int PalNum) {
}


// address: 0x8008DD68
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008DD68(struct TextDat *this, int PalNum) {
}


// address: 0x8008E374
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008E374(struct TextDat *this, int PalNum) {
}


// address: 0x8008E67C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008E67C(struct TextDat *this, int PalNum) {
}


// address: 0x8008E830
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008E830(struct TextDat *this, int PalNum) {
}


// address: 0x8008E85C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008E85C(struct TextDat *this, int PalNum) {
}


// address: 0x8008EC64
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008EC64(struct TextDat *this, int PalNum) {
}


// address: 0x8008EC6C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008EC6C(struct TextDat *this, int PalNum) {
}


// address: 0x8008EFA0
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008EFA0(struct TextDat_dup_14 *this, int PalNum) {
}


// address: 0x8008F10C
// size: 0x8
// line start: 224
// line end:   224
struct PAL *GetPal__7TextDati_addr_8008F10C(struct TextDat *this, int PalNum) {
}


// address: 0x8008FB48
// size: 0x8
// line start: 226
// line end:   226
struct PAL *GetPal__7TextDati_addr_8008FB48(struct TextDat_dup_1 *this, int PalNum) {
}


// address: 0x80081150
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


// address: 0x8008067C
// line start: 192
// line end:   221
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


// address: 0x80080F94
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


// address: 0x80082FB4
// line start: 198
// line end:   226
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


// address: 0x8009BE00
// line start: 170
// line end:   179
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x80096D7C
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer_dup_14 *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x8006495C
// size: 0x80
// line start: 63
// line end:   65
struct CPlayer_dup_1 *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x80061BBC
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x8005F254
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_8005F254(int PNum) {
}


// address: 0x8006117C
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_8006117C(int PNum) {
}


// address: 0x80061368
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer_dup_14 *GetPlayer__7CPlayeri_addr_80061368(int PNum) {
}


// address: 0x80073D18
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80073D18(int PNum) {
}


// address: 0x80074408
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80074408(int PNum) {
}


// address: 0x80074590
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80074590(int PNum) {
}


// address: 0x80075308
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075308(int PNum) {
}


// address: 0x80075398
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075398(int PNum) {
}


// address: 0x8007555C
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_8007555C(int PNum) {
}


// address: 0x80075650
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075650(int PNum) {
}


// address: 0x80075820
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075820(int PNum) {
}


// address: 0x800758D4
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_800758D4(int PNum) {
}


// address: 0x80075A08
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075A08(int PNum) {
}


// address: 0x80075B74
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075B74(int PNum) {
}


// address: 0x80075C68
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075C68(int PNum) {
}


// address: 0x80075CD4
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075CD4(int PNum) {
}


// address: 0x80075E28
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer *GetPlayer__7CPlayeri_addr_80075E28(int PNum) {
}


// address: 0x80076050
// size: 0x84
// line start: 63
// line end:   65
struct CPlayer_dup_14 *GetPlayer__7CPlayeri_addr_80076050(int PNum) {
}


// address: 0x80078E90
// size: 0x80
// line start: 63
// line end:   65
struct CPlayer_dup_1 *GetPlayer__7CPlayeri_addr_80078E90(int PNum) {
}


// address: 0x8003CD90
// line start: 1104
// line end:   1105
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct_dup_6 *h) {
}


// address: 0x8003CC68
// line start: 1104
// line end:   1105
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct_dup_13 *h) {
}


// address: 0x8003CB6C
// line start: 1104
// line end:   1105
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct_dup_11 *h) {
}


// address: 0x8003DA40
// line start: 1104
// line end:   1105
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8008A2FC
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks_dup_4 *this, int PlayerNum) {
}


// address: 0x8008D3BC
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks_dup_14 *this, int PlayerNum) {
}


// address: 0x8008E088
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks_dup_1 *this, int PlayerNum) {
}


// address: 0x8008AB6C
// line start: 126
// line end:   126
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x80095914
// line start: 586
// line end:   603
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct_dup_11 *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x8009666C
// line start: 644
// line end:   661
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct_dup_13 *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x8009394C
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


// address: 0x80094ED0
// line start: 586
// line end:   603
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct_dup_6 *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80095288
// line start: 586
// line end:   603
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT_dup_7 *this, struct PlayerStruct_dup_7 *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
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


// address: 0x80062C60
// line start: 501
// line end:   506
void GetReturnLvlPos__Fv() {
}


// address: 0x8003B758
// line start: 99
// line end:   104
long GetRndSeed__Fv() {
}


// address: 0x80035060
// line start: 2776
// line end:   2788
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x8008C738
// line start: 1945
// line end:   1956
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks_dup_1 *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008BA00
// line start: 1975
// line end:   1986
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks_dup_14 *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x80088884
// line start: 1925
// line end:   1936
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks_dup_4 *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x800891E4
// line start: 1959
// line end:   1970
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8007EDE4
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


// address: 0x8007EB10
// line start: 1430
// line end:   1431
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x8007FB20
// line start: 66
// line end:   66
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x8008630C
// line start: 496
// line end:   552
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR_dup_14 *Fr;
}


// address: 0x80083B30
// line start: 496
// line end:   552
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80060694
// line start: 4531
// line end:   4531
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct_dup_6 *ptrplr, int val) {
}


// address: 0x80060560
// line start: 4565
// line end:   4565
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct_dup_13 *ptrplr, int val) {
}


// address: 0x8005FA80
// line start: 4492
// line end:   4492
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct_dup_4 *ptrplr, int val) {
}


// address: 0x80060400
// line start: 4565
// line end:   4565
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct_dup_7 *ptrplr, int val) {
}


// address: 0x80060F2C
// line start: 4468
// line end:   4468
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FEC8
// line start: 4554
// line end:   4554
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct_dup_11 *ptrplr, int val) {
}


// address: 0x8003EAAC
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


// address: 0x8003EC9C
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


// address: 0x80086000
// line start: 538
// line end:   546
int GetStrWidth__5CFontPc(struct CFont_dup_1 *this, char *Str) {
	// register: 17
	register int Width;
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


// address: 0x80085218
// line start: 641
// line end:   657
int GetStrWidth__5CFontPc(struct CFont_dup_14 *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x80082F8C
// line start: 646
// line end:   662
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 18
	register int Width;
	// register: 19
	register char c;
}


// address: 0x800849B8
// line start: 635
// line end:   651
int GetStrWidth__5CFontPc(struct CFont_dup_10 *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x80082A90
// line start: 544
// line end:   552
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 17
	register int Width;
}


// address: 0x80073C40
// line start: 132
// line end:   152
char *GetStr__Fi(int StrId) {
}


// address: 0x8003E6C4
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


// address: 0x8003E55C
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


// address: 0x80092C18
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer_dup_1 *this) {
}


// address: 0x8008F708
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x80092670
// line start: 55
// line end:   55
int GetTexId__7CPlayer(struct CPlayer_dup_14 *this) {
}


// address: 0x800814BC
// line start: 240
// line end:   240
int GetTexNum__C7TextDat(struct TextDat_dup_14 *this) {
}


// address: 0x8007F9D4
// line start: 240
// line end:   240
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x8009B988
// line start: 106
// line end:   110
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009B54C
// line start: 111
// line end:   115
unsigned short GetTick__C4CPad(struct CPad_dup_4 *this) {
}


// address: 0x80032D98
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80032D98(struct CPad *this) {
}


// address: 0x80034E18
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80034E18(struct CPad *this) {
}


// address: 0x80034E3C
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80034E3C(struct CPad *this) {
}


// address: 0x80034EF0
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80034EF0(struct CPad *this) {
}


// address: 0x80034EF8
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80034EF8(struct CPad *this) {
}


// address: 0x80034F2C
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80034F2C(struct CPad *this) {
}


// address: 0x80034FEC
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80034FEC(struct CPad *this) {
}


// address: 0x80098488
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80098488(struct CPad *this) {
}


// address: 0x80099C14
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_80099C14(struct CPad *this) {
}


// address: 0x8009A4FC
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009A4FC(struct CPad *this) {
}


// address: 0x8009A5A0
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009A5A0(struct CPad *this) {
}


// address: 0x8009D6B8
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009D6B8(struct CPad *this) {
}


// address: 0x8009E2D4
// line start: 111
// line end:   115
unsigned short GetTick__C4CPad_addr_8009E2D4(struct CPad *this) {
}


// address: 0x8009E3B4
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009E3B4(struct CPad *this) {
}


// address: 0x8009E560
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009E560(struct CPad *this) {
}


// address: 0x8009E6C0
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009E6C0(struct CPad *this) {
}


// address: 0x8009EC48
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009EC48(struct CPad *this) {
}


// address: 0x8009F6DC
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009F6DC(struct CPad *this) {
}


// address: 0x8009F71C
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_8009F71C(struct CPad *this) {
}


// address: 0x800A0A80
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_800A0A80(struct CPad *this) {
}


// address: 0x800A2A54
// line start: 121
// line end:   125
unsigned short GetTick__C4CPad_addr_800A2A54(struct CPad *this) {
}


// address: 0x8007A274
// line start: 182
// line end:   183
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007A614
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007A614(unsigned short tpage) {
}


// address: 0x8007A818
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007A818(unsigned short tpage) {
}


// address: 0x8007A914
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007A914(unsigned short tpage) {
}


// address: 0x8007ABD0
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007ABD0(unsigned short tpage) {
}


// address: 0x8007AC20
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007AC20(unsigned short tpage) {
}


// address: 0x8007AEBC
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007AEBC(unsigned short tpage) {
}


// address: 0x8007AF44
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007AF44(unsigned short tpage) {
}


// address: 0x8007B218
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007B218(unsigned short tpage) {
}


// address: 0x8007B244
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007B244(unsigned short tpage) {
}


// address: 0x8007B284
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007B284(unsigned short tpage) {
}


// address: 0x8007B4B4
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007B4B4(unsigned short tpage) {
}


// address: 0x8007B520
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007B520(unsigned short tpage) {
}


// address: 0x8007C1EC
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C1EC(unsigned short tpage) {
}


// address: 0x8007C3C0
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C3C0(unsigned short tpage) {
}


// address: 0x8007C4EC
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C4EC(unsigned short tpage) {
}


// address: 0x8007C584
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C584(unsigned short tpage) {
}


// address: 0x8007C5D4
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C5D4(unsigned short tpage) {
}


// address: 0x8007C6E8
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C6E8(unsigned short tpage) {
}


// address: 0x8007C844
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C844(unsigned short tpage) {
}


// address: 0x8007C8AC
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C8AC(unsigned short tpage) {
}


// address: 0x8007C8D4
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C8D4(unsigned short tpage) {
}


// address: 0x8007C9BC
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007C9BC(unsigned short tpage) {
}


// address: 0x8007CB44
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007CB44(unsigned short tpage) {
}


// address: 0x8007CB50
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007CB50(unsigned short tpage) {
}


// address: 0x8007CBBC
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007CBBC(unsigned short tpage) {
}


// address: 0x8007CDD8
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007CDD8(unsigned short tpage) {
}


// address: 0x8007CDE8
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007CDE8(unsigned short tpage) {
}


// address: 0x8007CEBC
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007CEBC(unsigned short tpage) {
}


// address: 0x8007CEF4
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007CEF4(unsigned short tpage) {
}


// address: 0x8007D204
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007D204(unsigned short tpage) {
}


// address: 0x8007E73C
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007E73C(unsigned short tpage) {
}


// address: 0x8007E9D8
// line start: 182
// line end:   183
int GetTpX__FUs_addr_8007E9D8(unsigned short tpage) {
}


// address: 0x8007A258
// line start: 177
// line end:   178
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007A5F8
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007A5F8(unsigned short tpage) {
}


// address: 0x8007A7FC
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007A7FC(unsigned short tpage) {
}


// address: 0x8007A8F8
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007A8F8(unsigned short tpage) {
}


// address: 0x8007ABB4
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007ABB4(unsigned short tpage) {
}


// address: 0x8007AC04
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007AC04(unsigned short tpage) {
}


// address: 0x8007AEA0
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007AEA0(unsigned short tpage) {
}


// address: 0x8007AF28
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007AF28(unsigned short tpage) {
}


// address: 0x8007B1FC
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007B1FC(unsigned short tpage) {
}


// address: 0x8007B228
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007B228(unsigned short tpage) {
}


// address: 0x8007B268
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007B268(unsigned short tpage) {
}


// address: 0x8007B498
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007B498(unsigned short tpage) {
}


// address: 0x8007B504
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007B504(unsigned short tpage) {
}


// address: 0x8007C1D0
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C1D0(unsigned short tpage) {
}


// address: 0x8007C3A4
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C3A4(unsigned short tpage) {
}


// address: 0x8007C4D0
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C4D0(unsigned short tpage) {
}


// address: 0x8007C568
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C568(unsigned short tpage) {
}


// address: 0x8007C5B8
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C5B8(unsigned short tpage) {
}


// address: 0x8007C6CC
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C6CC(unsigned short tpage) {
}


// address: 0x8007C828
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C828(unsigned short tpage) {
}


// address: 0x8007C890
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C890(unsigned short tpage) {
}


// address: 0x8007C8B8
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C8B8(unsigned short tpage) {
}


// address: 0x8007C9A0
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007C9A0(unsigned short tpage) {
}


// address: 0x8007CB28
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007CB28(unsigned short tpage) {
}


// address: 0x8007CB34
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007CB34(unsigned short tpage) {
}


// address: 0x8007CBA0
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007CBA0(unsigned short tpage) {
}


// address: 0x8007CDBC
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007CDBC(unsigned short tpage) {
}


// address: 0x8007CDCC
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007CDCC(unsigned short tpage) {
}


// address: 0x8007CEA0
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007CEA0(unsigned short tpage) {
}


// address: 0x8007CED8
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007CED8(unsigned short tpage) {
}


// address: 0x8007D1E8
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007D1E8(unsigned short tpage) {
}


// address: 0x8007E720
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007E720(unsigned short tpage) {
}


// address: 0x8007E9BC
// line start: 177
// line end:   178
int GetTpY__FUs_addr_8007E9BC(unsigned short tpage) {
}


// address: 0x80041A74
// line start: 2410
// line end:   2432
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80081504
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad(struct CPad_dup_4 *this) {
}


// address: 0x80081D84
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x80071BE0
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80071BE0(struct CPad *this) {
}


// address: 0x800720B8
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_800720B8(struct CPad_dup_4 *this) {
}


// address: 0x80072154
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_80072154(struct CPad *this) {
}


// address: 0x80072F18
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80072F18(struct CPad *this) {
}


// address: 0x80072FB0
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_80072FB0(struct CPad *this) {
}


// address: 0x800730BC
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_800730BC(struct CPad *this) {
}


// address: 0x80073274
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_80073274(struct CPad *this) {
}


// address: 0x800733DC
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_800733DC(struct CPad *this) {
}


// address: 0x800734F0
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_800734F0(struct CPad *this) {
}


// address: 0x80073588
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80073588(struct CPad *this) {
}


// address: 0x800736F4
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_800736F4(struct CPad *this) {
}


// address: 0x80073910
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_80073910(struct CPad *this) {
}


// address: 0x8007397C
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_8007397C(struct CPad *this) {
}


// address: 0x80073AAC
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80073AAC(struct CPad *this) {
}


// address: 0x80073CD4
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80073CD4(struct CPad *this) {
}


// address: 0x80076B38
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_80076B38(struct CPad *this) {
}


// address: 0x80091AD4
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80091AD4(struct CPad *this) {
}


// address: 0x80092B48
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_80092B48(struct CPad *this) {
}


// address: 0x80093054
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80093054(struct CPad *this) {
}


// address: 0x800931DC
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_800931DC(struct CPad *this) {
}


// address: 0x80093234
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80093234(struct CPad *this) {
}


// address: 0x8009350C
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_8009350C(struct CPad *this) {
}


// address: 0x800936AC
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_800936AC(struct CPad *this) {
}


// address: 0x80093B84
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80093B84(struct CPad *this) {
}


// address: 0x80093C40
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_80093C40(struct CPad *this) {
}


// address: 0x8009B59C
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_8009B59C(struct CPad_dup_4 *this) {
}


// address: 0x8009B9D8
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_8009B9D8(struct CPad *this) {
}


// address: 0x8009BA64
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_8009BA64(struct CPad *this) {
}


// address: 0x8009C070
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_8009C070(struct CPad *this) {
}


// address: 0x8009C284
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_8009C284(struct CPad *this) {
}


// address: 0x8009D6F4
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_8009D6F4(struct CPad *this) {
}


// address: 0x8009D708
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_8009D708(struct CPad *this) {
}


// address: 0x8009DBA8
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_8009DBA8(struct CPad *this) {
}


// address: 0x8009E324
// line start: 97
// line end:   101
unsigned short GetUp__C4CPad_addr_8009E324(struct CPad *this) {
}


// address: 0x8009E404
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_8009E404(struct CPad *this) {
}


// address: 0x8009E5B0
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_8009E5B0(struct CPad *this) {
}


// address: 0x8009E710
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_8009E710(struct CPad *this) {
}


// address: 0x8009EC98
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_8009EC98(struct CPad *this) {
}


// address: 0x8009F0F8
// line start: 92
// line end:   96
unsigned short GetUp__C4CPad_addr_8009F0F8(struct CPad *this) {
}


// address: 0x8009F72C
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_8009F72C(struct CPad *this) {
}


// address: 0x8009F76C
// line start: 107
// line end:   111
unsigned short GetUp__C4CPad_addr_8009F76C(struct CPad *this) {
}


// address: 0x8009A898
// line start: 1697
// line end:   1717
void GetVolumes__Fv() {
	{
		// register: 8
		register int i;
		{
			// register: 5
			// size: 0x8
			register struct OMENULIST_dup_4 *mptr;
			// register: 3
			// size: 0x18
			register struct OMENUITEM_dup_4 *iptr;
			{
				// register: 4
				register int s;
			}
		}
	}
}


// address: 0x8009B34C
// line start: 1643
// line end:   1663
void GetVolumes__Fv() {
	{
		// register: 8
		register int i;
		{
			// register: 5
			// size: 0x8
			register struct OMENULIST_dup_5 *mptr;
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


// address: 0x8009ACA0
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


// address: 0x8009E498
// line start: 1916
// line end:   1933
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


// address: 0x80085AC0
// line start: 708
// line end:   710
void GetXY__7CBlocksPiT1(struct CBlocks_dup_4 *this, int *nx, int *ny) {
}


// address: 0x80088AB0
// line start: 704
// line end:   706
void GetXY__7CBlocksPiT1(struct CBlocks_dup_14 *this, int *nx, int *ny) {
}


// address: 0x80089720
// line start: 707
// line end:   709
void GetXY__7CBlocksPiT1(struct CBlocks_dup_1 *this, int *nx, int *ny) {
}


// address: 0x800861B4
// line start: 708
// line end:   710
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x8008B100
// line start: 264
// line end:   271
void GoBackLevel__Fv() {
}


// address: 0x8008B36C
// line start: 327
// line end:   330
void GoForwardLevel__Fv() {
}


// address: 0x8008B24C
// line start: 295
// line end:   310
void GoLoadGame__Fv() {
}


// address: 0x8008B45C
// line start: 346
// line end:   351
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008AB20
// line start: 333
// line end:   344
void GoNewLevel__Fv() {
}


// address: 0x8008B178
// line start: 275
// line end:   279
void GoWarpLevel__Fv() {
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


// address: 0x80072714
// line start: 1175
// line end:   1410
void Handle__7GamePad(struct GamePad_dup_11 *this) {
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


// address: 0x80072BCC
// line start: 1264
// line end:   1499
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


// address: 0x80073258
// line start: 1276
// line end:   1512
void Handle__7GamePad(struct GamePad_dup_14 *this) {
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


// address: 0x80072C70
// line start: 1166
// line end:   1451
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


// address: 0x800725C8
// line start: 1167
// line end:   1398
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
	register int cp;
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


// address: 0x80072A74
// line start: 1163
// line end:   1446
void Handle__7GamePad(struct GamePad_dup_8 *this) {
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


// address: 0x80071690
// line start: 1194
// line end:   1496
void Handle__7GamePad(struct GamePad_dup_4 *this) {
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


// address: 0x8007172C
// line start: 1194
// line end:   1497
void Handle__7GamePad(struct GamePad_dup_5 *this) {
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


// address: 0x80072FF4
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


// address: 0x800730CC
// line start: 1271
// line end:   1506
void Handle__7GamePad(struct GamePad_dup_13 *this) {
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


// address: 0x800727E8
// line start: 1214
// line end:   1521
void Handle__7GamePad(struct GamePad_dup_7 *this) {
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


// address: 0x80072934
// line start: 1195
// line end:   1505
void Handle__7GamePad(struct GamePad_dup_6 *this) {
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


// address: 0x8007FAD0
// line start: 158
// line end:   158
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8007EF64
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


// address: 0x8007FAF8
// line start: 157
// line end:   157
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800607D0
// line start: 4537
// line end:   4537
void HealStart__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x8005FBBC
// line start: 4498
// line end:   4498
void HealStart__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8006053C
// line start: 4571
// line end:   4571
void HealStart__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8006069C
// line start: 4571
// line end:   4571
void HealStart__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x80060004
// line start: 4560
// line end:   4560
void HealStart__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x80061068
// line start: 4474
// line end:   4474
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8009368C
// line start: 639
// line end:   642
void HealStart__Fi(int plr) {
}


// address: 0x8006C510
// line start: 2603
// line end:   2648
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8005FBE4
// line start: 4499
// line end:   4499
void HealotherStart__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x80061090
// line start: 4475
// line end:   4475
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606C4
// line start: 4572
// line end:   4572
void HealotherStart__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x80060564
// line start: 4572
// line end:   4572
void HealotherStart__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x800607F8
// line start: 4538
// line end:   4538
void HealotherStart__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x8006002C
// line start: 4561
// line end:   4561
void HealotherStart__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x800936A8
// line start: 646
// line end:   649
void HealotherStart__Fi(int plr) {
}


// address: 0x800A21BC
// line start: 67
// line end:   97
void HelpPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x800674EC
// line start: 1386
// line end:   1390
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct_dup_11 *i) {
}


// address: 0x80067B3C
// line start: 1339
// line end:   1343
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct_dup_6 *i) {
}


// address: 0x80068470
// line start: 1339
// line end:   1343
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067BAC
// line start: 1402
// line end:   1406
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct_dup_13 *i) {
}


// address: 0x8007ED74
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


// address: 0x8003BF74
// line start: 969
// line end:   971
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80078F50
// line start: 90
// line end:   92
void InitAllMaps__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8007B288
// line start: 90
// line end:   92
void InitAllMaps__13CompLevelMaps(struct CompLevelMaps_dup_14 *this) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80038538
// line start: 196
// line end:   206
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800388CC
// line start: 239
// line end:   248
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009C898
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


// address: 0x800389FC
// line start: 253
// line end:   263
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008E94C
// line start: 160
// line end:   162
void InitCDWaitIcon__Fv() {
}


// address: 0x8003035C
// line start: 1293
// line end:   1440
void InitControlPan__Fv() {
	// register: 3
	register int i;
}


// address: 0x800312C4
// line start: 1283
// line end:   1430
void InitControlPan__Fv() {
	// register: 4
	register int i;
}


// address: 0x80038EC4
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


// address: 0x80035FE8
// line start: 126
// line end:   132
void InitCursor__Fv() {
}


// address: 0x8007FE5C
// line start: 1181
// line end:   1191
void InitData__7TextDat(struct TextDat_dup_14 *this) {
}


// address: 0x80081990
// line start: 1155
// line end:   1165
void InitData__7TextDat(struct TextDat_dup_1 *this) {
}


// address: 0x8007E46C
// line start: 1157
// line end:   1167
void InitData__7TextDat(struct TextDat *this) {
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


// address: 0x800365C0
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


// address: 0x8003B948
// line start: 154
// line end:   165
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x800839F8
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


// address: 0x8007EBE0
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


// address: 0x80038D94
// line start: 297
// line end:   306
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800602BC
// line start: 4448
// line end:   4451
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x80060028
// line start: 4482
// line end:   4485
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x80060188
// line start: 4482
// line end:   4485
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x8005F6B0
// line start: 4409
// line end:   4412
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005FAF0
// line start: 4471
// line end:   4474
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x800608EC
// line start: 4386
// line end:   4389
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800618AC
// line start: 4508
// line end:   4508
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80079BE8
// line start: 362
// line end:   399
void InitFromCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps_dup_5 *this, struct CompLevelMemImage *Src) {
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


// address: 0x8007AE90
// line start: 362
// line end:   399
void InitFromCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps_dup_6 *this, struct CompLevelMemImage *Src) {
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


// address: 0x80079364
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


// address: 0x80089748
// line start: 47
// line end:   60
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8007385C
// line start: 1433
// line end:   1444
void InitGamePadVars__Fv() {
}


// address: 0x80038B34
// line start: 268
// line end:   277
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800A22C4
// line start: 103
// line end:   106
void InitHelp__Fv() {
}


// address: 0x8003BFAC
// line start: 508
// line end:   519
void InitItemGFX__Fv() {
}


// address: 0x8003C2B8
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


// address: 0x8005ABF8
// line start: 2281
// line end:   2301
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005B6D4
// line start: 2266
// line end:   2286
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AF14
// line start: 2330
// line end:   2350
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x8005B6D0
// line start: 2311
// line end:   2331
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x8005B414
// line start: 2339
// line end:   2359
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8005B59C
// line start: 2338
// line end:   2360
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x800360D8
// line start: 186
// line end:   201
void InitLevelCursor__Fv() {
}


// address: 0x8004CCF8
// line start: 554
// line end:   559
int InitLevelType__Fi(int l) {
}


// address: 0x80047688
// line start: 1062
// line end:   1065
void InitLightMax__Fv() {
}


// address: 0x80047678
// line start: 964
// line end:   965
void InitLightTable__Fv() {
}


// address: 0x800476AC
// line start: 1072
// line end:   1083
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x8003B020
// line start: 185
// line end:   216
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x80078AC8
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


// address: 0x80059DE4
// line start: 1161
// line end:   1165
void InitMultiView__Fv() {
}


// address: 0x8004CED4
// line start: 682
// line end:   688
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004D170
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


// address: 0x800312A4
// line start: 1196
// line end:   1197
void InitPanelStr__Fv() {
}


// address: 0x80058ED4
// line start: 411
// line end:   417
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058458
// line start: 411
// line end:   417
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005875C
// line start: 411
// line end:   417
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x80058DF8
// line start: 413
// line end:   419
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x80058E44
// line start: 412
// line end:   418
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x80058C48
// line start: 412
// line end:   418
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x800618F8
// line start: 4509
// line end:   4509
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80059284
// line start: 982
// line end:   1152
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct_dup_11 *ptrplr, unsigned char FirstTime) {
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


// address: 0x80058F80
// line start: 982
// line end:   1152
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct_dup_4 *ptrplr, unsigned char FirstTime) {
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


// address: 0x80059770
// line start: 983
// line end:   1153
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct_dup_7 *ptrplr, unsigned char FirstTime) {
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


// address: 0x80059920
// line start: 984
// line end:   1154
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct_dup_13 *ptrplr, unsigned char FirstTime) {
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


// address: 0x8005996C
// line start: 983
// line end:   1153
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct_dup_6 *ptrplr, unsigned char FirstTime) {
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


// address: 0x800599FC
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


// address: 0x80061778
// line start: 4503
// line end:   4503
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x8007A9D8
// line start: 186
// line end:   204
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x80084F10
// line start: 567
// line end:   568
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage_dup_1 *this) {
}


// address: 0x80083BA8
// line start: 628
// line end:   629
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage_dup_14 *this) {
}


// address: 0x800819A0
// line start: 569
// line end:   570
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80085020
// line start: 593
// line end:   594
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage_dup_1 *this) {
}


// address: 0x80083CD4
// line start: 656
// line end:   657
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage_dup_14 *this) {
}


// address: 0x80081AB0
// line start: 595
// line end:   596
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084E00
// line start: 541
// line end:   542
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage_dup_1 *this) {
}


// address: 0x80083A7C
// line start: 600
// line end:   601
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage_dup_14 *this) {
}


// address: 0x80081890
// line start: 543
// line end:   544
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800824E8
// line start: 343
// line end:   353
void InitPrinty__Fv() {
}


// address: 0x80048074
// line start: 177
// line end:   205
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x80047458
// line start: 176
// line end:   225
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x80038354
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


// address: 0x80047F28
// line start: 115
// line end:   119
void InitQuestText__Fv() {
}


// address: 0x8003840C
// line start: 181
// line end:   190
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80094888
// line start: 582
// line end:   605
void InitTargetCursor__Fi(int pnum) {
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *player;
	// register: 16
	// size: 0x24
	register struct Spell_Target_dup_4 *spl;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80095498
// line start: 582
// line end:   605
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


// address: 0x80096DA8
// line start: 603
// line end:   626
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *player;
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
	{
		// register: 5
		register int i;
	}
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


// address: 0x80097898
// line start: 545
// line end:   565
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x1C
	register struct Spell_Target_dup_12 *spl;
	{
		// register: 8
		register int i;
	}
}


// address: 0x80096A70
// line start: 593
// line end:   616
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *player;
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800980D8
// line start: 555
// line end:   575
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


// address: 0x80097408
// line start: 541
// line end:   561
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *player;
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80094A34
// line start: 565
// line end:   588
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x1C
	register struct Spell_Target *spl;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80098194
// line start: 555
// line end:   575
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *player;
	// register: 16
	// size: 0x18
	register struct Spell_Target_dup_13 *spl;
	{
		// register: 8
		register int i;
	}
}


// address: 0x80094FFC
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


// address: 0x80038C64
// line start: 283
// line end:   292
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80081088
// line start: 146
// line end:   151
void InitTmalloc__Fv() {
}


// address: 0x8003866C
// line start: 211
// line end:   220
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800381F4
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80039188
// line start: 344
// line end:   358
void InitTowners__Fv() {
}


// address: 0x80047A00
// line start: 1303
// line end:   1310
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x8003879C
// line start: 225
// line end:   234
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8007382C
// line start: 1427
// line end:   1428
void Init_GamePad__Fv() {
}


// address: 0x8007B258
// line start: 79
// line end:   82
void Init__13CompLevelMaps(struct CompLevelMaps_dup_14 *this) {
}


// address: 0x80078F20
// line start: 79
// line end:   82
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x800793E0
// line start: 76
// line end:   82
void Init__13CompLevelMaps(struct CompLevelMaps_dup_5 *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007A688
// line start: 76
// line end:   82
void Init__13CompLevelMaps(struct CompLevelMaps_dup_6 *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80078B5C
// line start: 76
// line end:   82
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8008E310
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8008DBB8
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos(struct PalCollection_dup_4 *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8007B3E8
// line start: 133
// line end:   142
void Init__4AMap(struct AMap *this) {
	{
		{
		}
	}
}


// address: 0x80084B90
// line start: 59
// line end:   59
void Init__5CFont(struct CFont_dup_10 *this) {
}


// address: 0x8008618C
// line start: 59
// line end:   59
void Init__5CFont(struct CFont_dup_1 *this) {
}


// address: 0x800853F0
// line start: 59
// line end:   59
void Init__5CFont(struct CFont_dup_14 *this) {
}


// address: 0x80082C1C
// line start: 59
// line end:   59
void Init__5CFont(struct CFont *this) {
}


// address: 0x8008D2CC
// line start: 534
// line end:   535
void Init__7CPlayer(struct CPlayer_dup_14 *this) {
}


// address: 0x8008AA7C
// line start: 527
// line end:   528
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008DF98
// line start: 527
// line end:   528
void Init__7CPlayer(struct CPlayer_dup_1 *this) {
}


// address: 0x8008E86C
// line start: 79
// line end:   79
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8008E710
// line start: 98
// line end:   104
void Init__t10Collection2Z8PalEntryi16(struct t10Collection2Z8PalEntryi16 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008DFB8
// line start: 98
// line end:   104
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x800918B8
// line start: 275
// line end:   376
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x8008F190
// line start: 236
// line end:   333
unsigned char Init_ctrl_pos__Fv() {
	// register: 22
	// size: 0x6C
	register struct CPad_dup_4 *Pad;
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


// address: 0x8008F834
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


// address: 0x8005FD00
// line start: 4505
// line end:   4505
void InvisStart__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x800611AC
// line start: 4481
// line end:   4481
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060680
// line start: 4578
// line end:   4578
void InvisStart__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x80060914
// line start: 4544
// line end:   4544
void InvisStart__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x80093740
// line start: 685
// line end:   694
void InvisStart__Fi(int plr) {
}


// address: 0x8002032C
// line start: 747
// line end:   760
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x8007B050
// line start: 537
// line end:   548
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x80082B8C
// line start: 85
// line end:   85
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80084B00
// line start: 88
// line end:   88
bool IsDefined__5CFontUc(struct CFont_dup_10 *this, unsigned char C) {
}


// address: 0x800860FC
// line start: 85
// line end:   85
bool IsDefined__5CFontUc(struct CFont_dup_1 *this, unsigned char C) {
}


// address: 0x80085360
// line start: 88
// line end:   88
bool IsDefined__5CFontUc(struct CFont_dup_14 *this, unsigned char C) {
}


// address: 0x8007E870
// line start: 1314
// line end:   1315
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x8008025C
// line start: 1346
// line end:   1347
bool IsDirAliased__7TextDatiii(struct TextDat_dup_14 *this, int Creature, int Action, int Direction) {
}


// address: 0x80081BEC
// line start: 1266
// line end:   1267
bool IsDirAliased__7TextDatiii(struct TextDat_dup_1 *this, int Creature, int Action, int Direction) {
}


// address: 0x8008E880
// line start: 73
// line end:   73
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80097964
// line start: 155
// line end:   156
bool IsGameLoading__Fv() {
}


// address: 0x8007F9C8
// line start: 241
// line end:   241
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x800814B0
// line start: 241
// line end:   241
bool IsLoaded__C7TextDat(struct TextDat_dup_14 *this) {
}


// address: 0x80078DDC
// line start: 177
// line end:   183
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x80079660
// line start: 177
// line end:   183
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps_dup_5 *this, int Val) {
}


// address: 0x8007A908
// line start: 177
// line end:   183
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps_dup_6 *this, int Val) {
}


// address: 0x80078364
// line start: 168
// line end:   171
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x8006E460
// line start: 502
// line end:   509
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x80042504
// line start: 2852
// line end:   2867
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct_dup_13 *i;
}


// address: 0x800425C4
// line start: 2840
// line end:   2855
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct_dup_6 *i;
}


// address: 0x80043150
// line start: 2840
// line end:   2855
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x94
	register struct ItemStruct *i;
}


// address: 0x800423A4
// line start: 2840
// line end:   2855
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x80042388
// line start: 2841
// line end:   2856
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct_dup_11 *i;
}


// address: 0x8003C6CC
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct_dup_13 *p, struct ItemStruct_dup_13 *x) {
}


// address: 0x8003C7F4
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct_dup_6 *p, struct ItemStruct_dup_6 *x) {
}


// address: 0x8003D4A4
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003C390
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct_dup_4 *p, struct ItemStruct *x) {
}


// address: 0x8003C5D4
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct_dup_7 *p, struct ItemStruct *x) {
}


// address: 0x8003C5D0
// line start: 992
// line end:   996
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct_dup_11 *p, struct ItemStruct_dup_11 *x) {
}


// address: 0x800533AC
// line start: 2035
// line end:   2038
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80045974
// line start: 4195
// line end:   4203
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x8003BFD8
// line start: 525
// line end:   532
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x80041E28
// line start: 2462
// line end:   2466
void ItemRndDur__Fi(int ii) {
}


// address: 0x8003E058
// line start: 1269
// line end:   1298
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x800A08A8
// line start: 188
// line end:   229
int KPrintChar__FUsUsUcUcUs(unsigned short Cx, unsigned short Cy, unsigned char h, unsigned char l, int col) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *ft4;
	// address: 0xFFFFFE80
	// size: 0x152
	auto unsigned short buff[169];
	// register: 5
	register unsigned short kan;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT r;
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


// address: 0x80073B30
// size: 0x4
// line start: 79
// line end:   80
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x800734D8
// line start: 172
// line end:   173
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x80073B3C
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


// address: 0x80072380
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


// address: 0x800734A0
// line start: 91
// line end:   132
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


// address: 0x80073CA8
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


// address: 0x8009FD84
// line start: 453
// line end:   460
void LBirdTask__FP4TASK(struct TASK *T) {
}


// address: 0x80080DE0
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


// address: 0x80089D48
// line start: 78
// line end:   81
void Lambo__Fv() {
}


// address: 0x80085018
// line start: 589
// line end:   590
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage_dup_1 *this, int Menu) {
}


// address: 0x80083CCC
// line start: 652
// line end:   653
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage_dup_14 *this, int Menu) {
}


// address: 0x80081AA8
// line start: 591
// line end:   592
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x8008510C
// line start: 610
// line end:   611
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage_dup_1 *this) {
}


// address: 0x80081B9C
// line start: 612
// line end:   613
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083F0C
// line start: 705
// line end:   706
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage_dup_14 *this) {
}


// address: 0x80081998
// line start: 565
// line end:   566
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80084F08
// line start: 563
// line end:   564
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage_dup_1 *this, int Menu) {
}


// address: 0x80083BA0
// line start: 624
// line end:   625
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage_dup_14 *this, int Menu) {
}


// address: 0x80071EB4
// line start: 880
// line end:   883
int LeftOf__Fi(int dir) {
}


// address: 0x8008B4E4
// line start: 368
// line end:   379
void LevelToLevelInit__Fv() {
}


// address: 0x8007625C
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


// address: 0x80079484
// size: 0x28
// line start: 318
// line end:   337
struct POLY_FT4 *LightObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
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


// address: 0x80076644
// size: 0x28
// line start: 319
// line end:   338
struct POLY_FT4 *LightObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
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


// address: 0x80084F48
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


// address: 0x80036924
// line start: 356
// line end:   394
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
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


// address: 0x800815EC
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


// address: 0x80081C0C
// line start: 375
// line end:   410
bool LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 20
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


// address: 0x80081FF8
// line start: 381
// line end:   421
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


// address: 0x800372DC
// line start: 2473
// line end:   2527
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x8007FBF4
// line start: 165
// line end:   187
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007BE60
// line start: 106
// line end:   118
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007C4C0
// line start: 109
// line end:   121
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FC40
// line start: 212
// line end:   231
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007BFDC
// line start: 143
// line end:   160
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007C634
// line start: 146
// line end:   158
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FD20
// line start: 248
// line end:   249
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x8007FE7C
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


// address: 0x80081D1C
// line start: 300
// line end:   372
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


// address: 0x8008136C
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


// address: 0x8007C0B0
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


// address: 0x8007C6DC
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


// address: 0x80022510
// line start: 722
// line end:   734
void LoTskKill(struct TASK *T) {
}


// address: 0x800371C4
// line start: 2411
// line end:   2423
void LoadAllGFX__Fv() {
}


// address: 0x8007EE50
// line start: 1530
// line end:   1532
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8003B8A8
// line start: 487
// line end:   497
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x80037540
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


// address: 0x80037570
// line start: 2563
// line end:   2884
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


// address: 0x8007EEA0
// line start: 1545
// line end:   1546
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800A16DC
// line start: 44
// line end:   67
void LoadKanjiFont__FPc(char *name) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A04C4
// line start: 40
// line end:   52
void LoadKanjiFont__FPc(char *name) {
}


// address: 0x8009F948
// line start: 37
// line end:   54
void LoadKanjiFont__Fv() {
	// register: 16
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009F494
// line start: 34
// line end:   36
void LoadKanjiFont__Fv() {
}


// address: 0x800A0558
// line start: 57
// line end:   71
void LoadKanjiIndex__FPc(char *name) {
	// register: 16
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A17CC
// line start: 72
// line end:   97
void LoadKanjiIndex__FPc(char *name) {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009FA18
// line start: 59
// line end:   78
void LoadKanjiIndex__Fv() {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009F4D0
// line start: 40
// line end:   42
void LoadKanjiIndex__Fv() {
}


// address: 0x800A0694
// line start: 101
// line end:   123
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto char tmp[40];
	// register: 16
	register char *bname;
}


// address: 0x80037128
// line start: 2336
// line end:   2403
void LoadLvlGFX__Fv() {
}


// address: 0x80052E28
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


// address: 0x80089B70
// line start: 234
// line end:   239
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x80077E34
// line start: 73
// line end:   95
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077E3C
// line start: 100
// line end:   113
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80088620
// line start: 536
// line end:   546
void Load__7CBlocksi(struct CBlocks_dup_14 *this, int Id) {
	{
		{
		}
	}
}


// address: 0x80085D28
// line start: 540
// line end:   550
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x80085634
// line start: 540
// line end:   550
void Load__7CBlocksi(struct CBlocks_dup_4 *this, int Id) {
	{
		{
		}
	}
}


// address: 0x80089298
// line start: 539
// line end:   549
void Load__7CBlocksi(struct CBlocks_dup_1 *this, int Id) {
	{
		{
		}
	}
}


// address: 0x8008C6A8
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer_dup_14 *this, int Id) {
}


// address: 0x80089E8C
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008D3AC
// line start: 134
// line end:   138
void Load__7CPlayeri(struct CPlayer_dup_1 *this, int Id) {
}


// address: 0x80082450
// line start: 1622
// line end:   1659
void Load__7CScreeniii(struct CScreen_dup_1 *this, int Id, int tpx, int tpy) {
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


// address: 0x80080AC4
// line start: 1702
// line end:   1762
void Load__7CScreeniii(struct CScreen_dup_14 *this, int Id, int tpx, int tpy) {
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
			register struct FRAME_HDR_dup_14 *Fr;
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


// address: 0x8007EADC
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


// address: 0x8007F0D4
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


// address: 0x8008D114
// line start: 215
// line end:   228
void Load__7Overlay(struct Overlay_dup_1 *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x80089AF4
// line start: 203
// line end:   216
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8007BC5C
// line start: 282
// line end:   286
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007A424
// line start: 254
// line end:   269
void MAIN_MainLoop__Fv() {
}


// address: 0x8007A360
// line start: 208
// line end:   209
void MAIN_RestartGameTask__Fv() {
}


// address: 0x80075D44
// line start: 81
// line end:   96
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80075F0C
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


// address: 0x80075D0C
// line start: 67
// line end:   72
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80075E5C
// line start: 131
// line end:   147
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80075DC4
// line start: 105
// line end:   120
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80084CB0
// line start: 527
// line end:   536
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage_dup_1 *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80083074
// line start: 576
// line end:   587
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


// address: 0x80081740
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


// address: 0x80081620
// line start: 586
// line end:   606
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


// address: 0x800830D0
// line start: 582
// line end:   591
void MY_PausePrint__17CTempPauseMessageiPciP4RECT(struct CTempPauseMessage *this, int s, char *Txt, int Menu, struct RECT *PRect) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80083930
// line start: 586
// line end:   595
void MY_PausePrint__17CTempPauseMessageiPciP4RECT(struct CTempPauseMessage_dup_14 *this, int s, char *Txt, int Menu, struct RECT *PRect) {
	{
		{
			// register: 17
			register int len;
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


// address: 0x800781D8
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x800781F8
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


// address: 0x80076ECC
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


// address: 0x80077DD8
// line start: 221
// line end:   304
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


// address: 0x80078494
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


// address: 0x800783EC
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x8007B654
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi(int i) {
	// register: 16
	register unsigned char _mAi;
}


// address: 0x8005FC34
// line start: 4501
// line end:   4501
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct_dup_4 *ptrplr, int dam) {
}


// address: 0x80060848
// line start: 4540
// line end:   4540
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct_dup_6 *ptrplr, int dam) {
}


// address: 0x80060714
// line start: 4574
// line end:   4574
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct_dup_13 *ptrplr, int dam) {
}


// address: 0x8006007C
// line start: 4563
// line end:   4563
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct_dup_11 *ptrplr, int dam) {
}


// address: 0x800610E0
// line start: 4477
// line end:   4477
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x800605B4
// line start: 4574
// line end:   4574
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct_dup_7 *ptrplr, int dam) {
}


// address: 0x8005FB50
// line start: 4496
// line end:   4496
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x80060630
// line start: 4569
// line end:   4569
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x800604D0
// line start: 4569
// line end:   4569
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x80060764
// line start: 4535
// line end:   4535
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x80060FFC
// line start: 4472
// line end:   4472
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x8005FF98
// line start: 4558
// line end:   4558
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x80079498
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


// address: 0x80078FC4
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


// address: 0x8007B6D8
// line start: 205
// line end:   217
unsigned char M_Talker__Fi(int i) {
	// register: 16
	register unsigned char _mAi;
}


// address: 0x80078434
// line start: 205
// line end:   217
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
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


// address: 0x80079108
// line start: 481
// line end:   500
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x8007E724
// line start: 318
// line end:   325
void MakeBlockOffsetTab__7TextDat(struct TextDat_dup_14 *this) {
	{
		{
		}
	}
}


// address: 0x8007CD48
// line start: 309
// line end:   316
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8008026C
// line start: 307
// line end:   314
void MakeBlockOffsetTab__7TextDat(struct TextDat_dup_1 *this) {
	{
		{
		}
	}
}


// address: 0x8007E230
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


// address: 0x80081754
// line start: 1034
// line end:   1064
void MakeCreatureOffsetTab__7TextDat(struct TextDat_dup_1 *this) {
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


// address: 0x8007FC20
// line start: 1055
// line end:   1085
void MakeCreatureOffsetTab__7TextDat(struct TextDat_dup_14 *this) {
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


// address: 0x80089414
// line start: 581
// line end:   592
void MakeGt4Table__7CBlocks(struct CBlocks_dup_1 *this) {
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


// address: 0x80085EA8
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


// address: 0x800857B4
// line start: 582
// line end:   593
void MakeGt4Table__7CBlocks(struct CBlocks_dup_4 *this) {
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


// address: 0x800887A0
// line start: 578
// line end:   589
void MakeGt4Table__7CBlocks(struct CBlocks_dup_14 *this) {
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


// address: 0x80086630
// line start: 599
// line end:   657
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


// address: 0x800888A8
// line start: 599
// line end:   657
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks_dup_14 *this, struct POLY_GT4 *GT4, struct FRAME_HDR_dup_14 *Fr) {
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


// address: 0x800858BC
// line start: 603
// line end:   661
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks_dup_4 *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr) {
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


// address: 0x8008951C
// line start: 602
// line end:   660
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks_dup_1 *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr) {
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


// address: 0x80045E60
// line start: 4624
// line end:   4713
char *MakeItemStr__FP10ItemStructUs(struct ItemStruct *ItemPtr, unsigned short ItemNo) {
	// register: 6
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80045344
// line start: 4664
// line end:   4762
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct_dup_11 *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80045484
// line start: 4640
// line end:   4738
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct_dup_6 *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80045334
// line start: 4683
// line end:   4787
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct_dup_13 *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 16
	register int PreIdx;
	// register: 3
	register int SufIdx;
}


// address: 0x800454B8
// line start: 4680
// line end:   4784
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 16
	register int PreIdx;
	// register: 3
	register int SufIdx;
}


// address: 0x80044E0C
// line start: 4639
// line end:   4733
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80047680
// line start: 970
// line end:   971
void MakeLightTable__Fv() {
}


// address: 0x8007CDB8
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


// address: 0x8007FD60
// line start: 1095
// line end:   1126
void MakePalOffsetTab__7TextDat(struct TextDat_dup_14 *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x8007E370
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


// address: 0x80081894
// line start: 1074
// line end:   1098
void MakePalOffsetTab__7TextDat(struct TextDat_dup_1 *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x8008E4FC
// line start: 277
// line end:   293
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x8005F3DC
// line start: 4012
// line end:   4064
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct_dup_13 *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005E940
// line start: 3941
// line end:   3993
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct_dup_4 *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F270
// line start: 4012
// line end:   4064
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct_dup_7 *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F5F4
// line start: 3927
// line end:   3977
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005ED4C
// line start: 4001
// line end:   4053
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct_dup_11 *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F504
// line start: 3980
// line end:   4032
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct_dup_6 *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x80061478
// line start: 4493
// line end:   4493
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x800886CC
// line start: 557
// line end:   568
void MakeRectTable__7CBlocks(struct CBlocks_dup_14 *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x800856E0
// line start: 561
// line end:   572
void MakeRectTable__7CBlocks(struct CBlocks_dup_4 *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x80089340
// line start: 560
// line end:   571
void MakeRectTable__7CBlocks(struct CBlocks_dup_1 *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x80085DD4
// line start: 561
// line end:   572
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x8008EF68
// line start: 645
// line end:   651
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct_dup_4 *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80091C28
// line start: 649
// line end:   655
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct_dup_11 *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80092B18
// line start: 629
// line end:   635
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer_dup_1 *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x8008F608
// line start: 632
// line end:   638
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80091534
// line start: 649
// line end:   655
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct_dup_7 *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80092644
// line start: 685
// line end:   700
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct_dup_13 *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80090E0C
// line start: 645
// line end:   651
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct_dup_6 *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80092544
// line start: 693
// line end:   708
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer_dup_14 *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x8007B378
// line start: 112
// line end:   114
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x80098448
// line start: 307
// line end:   315
void MemcardOFF__Fv() {
}


// address: 0x800983EC
// line start: 291
// line end:   301
void MemcardON__Fv() {
}


// address: 0x8009CFEC
// line start: 1303
// line end:   1500
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


// address: 0x80099550
// line start: 1115
// line end:   1332
void MemcardPad__Fv() {
	// register: 21
	// size: 0x6C
	register struct CPad_dup_4 *P;
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
	register struct OMENUITEM_dup_4 *iptr;
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


// address: 0x8009A134
// line start: 1101
// line end:   1318
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


// address: 0x8009AF7C
// line start: 1318
// line end:   1525
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


// address: 0x8009C388
// line start: 1216
// line end:   1424
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
					// address: 0xFFFFFFD0
					// size: 0x10
					auto struct Dialog SBack;
					// address: 0xFFFFFFE0
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


// address: 0x80099998
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


// address: 0x8005F354
// line start: 4332
// line end:   4342
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FB90
// line start: 4366
// line end:   4376
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *player;
	// register: 3
	register int ms;
}


// address: 0x8005F658
// line start: 4355
// line end:   4365
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *player;
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


// address: 0x8005F248
// line start: 4293
// line end:   4303
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *player;
	// register: 3
	register int ms;
}


// address: 0x8005FE24
// line start: 4332
// line end:   4342
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *player;
	// register: 3
	register int ms;
}


// address: 0x8005FD84
// line start: 4277
// line end:   4287
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x800602F4
// line start: 4276
// line end:   4285
void ModifyPlrDex__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x8005FCF0
// line start: 4366
// line end:   4376
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *player;
	// register: 3
	register int ms;
}


// address: 0x8005FAA4
// line start: 4341
// line end:   4358
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *player;
	// register: 3
	register int ms;
}


// address: 0x8005FC04
// line start: 4341
// line end:   4358
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *player;
	// register: 3
	register int ms;
}


// address: 0x80060194
// line start: 4252
// line end:   4268
void ModifyPlrMag__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x8005F56C
// line start: 4330
// line end:   4347
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *player;
	// register: 3
	register int ms;
}


// address: 0x8005F164
// line start: 4268
// line end:   4285
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *player;
	// register: 3
	register int ms;
}


// address: 0x8005F270
// line start: 4307
// line end:   4324
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FC98
// line start: 4252
// line end:   4269
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
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


// address: 0x8005FD38
// line start: 4307
// line end:   4324
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *player;
	// register: 3
	register int ms;
}


// address: 0x8005FB7C
// line start: 4232
// line end:   4244
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F988
// line start: 4321
// line end:   4333
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *player;
	// register: 3
	register int ms;
}


// address: 0x8005F050
// line start: 4248
// line end:   4260
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *player;
	// register: 3
	register int ms;
}


// address: 0x8005F15C
// line start: 4287
// line end:   4299
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F450
// line start: 4310
// line end:   4322
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *player;
	// register: 3
	register int ms;
}


// address: 0x80060014
// line start: 4233
// line end:   4244
void ModifyPlrStr__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x8005FC1C
// line start: 4287
// line end:   4299
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *player;
	// register: 3
	register int ms;
}


// address: 0x8005FAE8
// line start: 4321
// line end:   4333
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *player;
	// register: 3
	register int ms;
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


// address: 0x8005FC74
// line start: 4384
// line end:   4398
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *player;
	// register: 3
	register int ms;
}


// address: 0x80060424
// line start: 4293
// line end:   4306
void ModifyPlrVit__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x8005F430
// line start: 4350
// line end:   4364
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
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


// address: 0x8005FF08
// line start: 4350
// line end:   4364
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *player;
	// register: 3
	register int ms;
}


// address: 0x8005F324
// line start: 4311
// line end:   4325
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *player;
	// register: 3
	register int ms;
}


// address: 0x8005FDD4
// line start: 4384
// line end:   4398
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *player;
	// register: 3
	register int ms;
}


// address: 0x8005F73C
// line start: 4373
// line end:   4387
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *player;
	// register: 3
	register int ms;
}


// address: 0x8005FE68
// line start: 4295
// line end:   4309
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80050888
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


// address: 0x8008E7CC
// line start: 83
// line end:   86
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E074
// line start: 83
// line end:   86
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E774
// line start: 90
// line end:   93
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi16P8PalEntry(struct t10Collection2Z8PalEntryi16 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E01C
// line start: 90
// line end:   93
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80071BA4
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80071BA4(struct CBlocks *this) {
}


// address: 0x8007207C
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_8007207C(struct CBlocks_dup_4 *this) {
}


// address: 0x80072118
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80072118(struct CBlocks *this) {
}


// address: 0x80072EDC
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80072EDC(struct CBlocks *this) {
}


// address: 0x80072F74
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80072F74(struct CBlocks *this) {
}


// address: 0x80073080
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80073080(struct CBlocks *this) {
}


// address: 0x80073238
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80073238(struct CBlocks *this) {
}


// address: 0x800733A0
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_800733A0(struct CBlocks *this) {
}


// address: 0x800734B4
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_800734B4(struct CBlocks *this) {
}


// address: 0x8007354C
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_8007354C(struct CBlocks *this) {
}


// address: 0x800736B8
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_800736B8(struct CBlocks *this) {
}


// address: 0x800738D4
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_800738D4(struct CBlocks *this) {
}


// address: 0x80073940
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80073940(struct CBlocks *this) {
}


// address: 0x80073A70
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80073A70(struct CBlocks *this) {
}


// address: 0x80073C98
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80073C98(struct CBlocks_dup_14 *this) {
}


// address: 0x80076AFC
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80076AFC(struct CBlocks_dup_1 *this) {
}


// address: 0x80097008
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80097008(struct CBlocks_dup_4 *this) {
}


// address: 0x80097290
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80097290(struct CBlocks *this) {
}


// address: 0x80097AB4
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80097AB4(struct CBlocks *this) {
}


// address: 0x80097C18
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80097C18(struct CBlocks *this) {
}


// address: 0x80099264
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80099264(struct CBlocks *this) {
}


// address: 0x8009959C
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_8009959C(struct CBlocks *this) {
}


// address: 0x80099780
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80099780(struct CBlocks *this) {
}


// address: 0x80099960
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80099960(struct CBlocks *this) {
}


// address: 0x80099C64
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80099C64(struct CBlocks *this) {
}


// address: 0x80099D1C
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_80099D1C(struct CBlocks *this) {
}


// address: 0x8009ADFC
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks_addr_8009ADFC(struct CBlocks_dup_1 *this) {
}


// address: 0x80073AE8
// line start: 158
// line end:   165
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x8007B1D4
// line start: 96
// line end:   116
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
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


// address: 0x8004CF48
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


// address: 0x80049910
// line start: 930
// line end:   941
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x80048B14
// line start: 1094
// line end:   1136
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem_dup_4 cmd;
}


// address: 0x80048AF0
// line start: 1094
// line end:   1136
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x800499E4
// line start: 958
// line end:   1000
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x8004B4F4
// line start: 1565
// line end:   1573
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80049B00
// line start: 1027
// line end:   1035
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x800499B4
// line start: 947
// line end:   952
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x800488BC
// line start: 1005
// line end:   1012
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80049798
// line start: 869
// line end:   876
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x800488E0
// line start: 1005
// line end:   1012
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem_dup_4 *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem_dup_4 cmd;
}


// address: 0x800496B4
// line start: 812
// line end:   827
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x800487E8
// line start: 948
// line end:   963
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
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


// address: 0x8004880C
// line start: 948
// line end:   963
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem_dup_4 *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem_dup_4 cmd;
}


// address: 0x8004AD78
// line start: 1298
// line end:   1344
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x800486B4
// line start: 896
// line end:   942
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x800486D8
// line start: 896
// line end:   942
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem_dup_4 cmd;
}


// address: 0x80049580
// line start: 760
// line end:   806
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80048470
// line start: 765
// line end:   779
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x8004A8E0
// line start: 1167
// line end:   1181
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct TCmdGolem cmd;
}


// address: 0x80048494
// line start: 765
// line end:   779
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem_dup_4 cmd;
}


// address: 0x8004933C
// line start: 629
// line end:   643
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdGolem cmd;
}


// address: 0x800493B8
// line start: 665
// line end:   674
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x8004AA48
// line start: 1203
// line end:   1212
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFE0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x800493F0
// line start: 680
// line end:   690
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
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


// address: 0x80049430
// line start: 696
// line end:   707
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x8004A9B0
// line start: 1187
// line end:   1197
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE8
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x80049388
// line start: 649
// line end:   659
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x80048924
// line start: 1017
// line end:   1060
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80049808
// line start: 881
// line end:   924
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x80048948
// line start: 1017
// line end:   1060
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem_dup_4 cmd;
}


// address: 0x8004B170
// line start: 1419
// line end:   1462
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFD8
	// size: 0x18
	auto struct TCmdPItem cmd;
}


// address: 0x80049478
// line start: 713
// line end:   718
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x800494A4
// line start: 724
// line end:   730
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x800494D4
// line start: 735
// line end:   742
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x8004950C
// line start: 747
// line end:   755
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80048888
// line start: 979
// line end:   998
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem_dup_4 *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem_dup_4 cmd;
}


// address: 0x8004B00C
// line start: 1381
// line end:   1400
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80048864
// line start: 979
// line end:   998
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80049738
// line start: 843
// line end:   862
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto struct TCmdGItem cmd;
}


// address: 0x80049314
// line start: 619
// line end:   623
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x8004CCCC
// line start: 165
// line end:   169
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x800360B8
// line start: 179
// line end:   180
void NewCursor__Fi(int i) {
}


// address: 0x800783A0
// line start: 176
// line end:   188
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8008E47C
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008DD24
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection_dup_4 *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80058E6C
// line start: 554
// line end:   565
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct_dup_6 *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058C70
// line start: 554
// line end:   565
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct_dup_7 *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058EFC
// line start: 553
// line end:   564
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058E20
// line start: 555
// line end:   566
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct_dup_13 *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058784
// line start: 553
// line end:   564
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct_dup_11 *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058480
// line start: 553
// line end:   564
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct_dup_4 *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x800615AC
// line start: 4497
// line end:   4497
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x800381AC
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80081FFC
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


// address: 0x800818A4
// line start: 240
// line end:   271
void NewVal__4CPadUs(struct CPad_dup_4 *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x8005956C
// line start: 855
// line end:   891
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x800595FC
// line start: 854
// line end:   890
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80059370
// line start: 855
// line end:   891
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80058B80
// line start: 854
// line end:   890
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80059520
// line start: 856
// line end:   892
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80058E84
// line start: 854
// line end:   890
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80089B64
// size: 0x4
// line start: 225
// line end:   226
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x800898E0
// line start: 119
// line end:   121
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x80089984
// line start: 155
// line end:   156
void OVR_LoadFmv__Fv() {
}


// address: 0x80089934
// line start: 137
// line end:   138
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008995C
// line start: 146
// line end:   147
void OVR_LoadGame__Fv() {
}


// address: 0x800899AC
// line start: 164
// line end:   165
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008990C
// line start: 129
// line end:   130
void OVR_LoadPregame__Fv() {
}


// address: 0x80050F3C
// line start: 1490
// line end:   1504
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050D84
// line start: 1467
// line end:   1482
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x8004F098
// line start: 1003
// line end:   1027
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004F0A0
// line start: 1033
// line end:   1062
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004EF8C
// line start: 943
// line end:   944
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004EFC4
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


// address: 0x8004DF30
// line start: 1127
// line end:   1153
void Obj_BCrossDamage__Fi(int i) {
	// register: 3
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
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


// address: 0x8004EA5C
// line start: 818
// line end:   844
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
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


// address: 0x8004DA78
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


// address: 0x8004CF5C
// line start: 787
// line end:   830
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


// address: 0x8004E14C
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


// address: 0x8004E43C
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


// address: 0x8004D868
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


// address: 0x8004E2E0
// line start: 681
// line end:   683
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004DD9C
// line start: 535
// line end:   540
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004E70C
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


// address: 0x8004B2C0
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


// address: 0x8004C3C0
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


// address: 0x80048E04
// line start: 1280
// line end:   1293
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049CF0
// line start: 1164
// line end:   1188
unsigned long On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80048DD4
// line start: 1267
// line end:   1276
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049CC0
// line start: 1143
// line end:   1159
unsigned long On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80048DA4
// line start: 1248
// line end:   1262
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049C90
// line start: 1116
// line end:   1138
unsigned long On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80048E34
// line start: 1299
// line end:   1312
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049D20
// line start: 1194
// line end:   1218
unsigned long On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004A368
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


// address: 0x80049434
// line start: 1491
// line end:   1534
void On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem_dup_4 *p;
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


// address: 0x80049410
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


// address: 0x8004A118
// line start: 1800
// line end:   1812
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 19
	// size: 0x4
	register struct TCmdParam1 *p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8004A07C
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


// address: 0x8004B04C
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


// address: 0x8004A878
// line start: 1997
// line end:   2017
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


// address: 0x8004A8C8
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


// address: 0x8004B928
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


// address: 0x8004AF50
// line start: 2164
// line end:   2169
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C020
// line start: 2679
// line end:   2693
unsigned long On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004AFDC
// line start: 2175
// line end:   2182
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C0B8
// line start: 2698
// line end:   2713
unsigned long On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C860
// line start: 3073
// line end:   3090
unsigned long On_CHEAT_EXPERIENCE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C868
// line start: 3095
// line end:   3109
unsigned long On_CHEAT_SPELL_LEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004ADA4
// line start: 2126
// line end:   2132
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BE50
// line start: 2621
// line end:   2635
unsigned long On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B448
// line start: 2312
// line end:   2317
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C554
// line start: 2878
// line end:   2891
unsigned long On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C870
// line start: 3114
// line end:   3115
unsigned long On_DEBUG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C0C0
// line start: 2719
// line end:   2731
unsigned long On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004AFE4
// line start: 2188
// line end:   2191
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049F00
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


// address: 0x8004AEB0
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


// address: 0x80049FEC
// line start: 1768
// line end:   1779
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004C0D0
// line start: 2755
// line end:   2770
unsigned long On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004AFF4
// line start: 2207
// line end:   2212
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C73C
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


// address: 0x8004B628
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


// address: 0x800490A4
// line start: 1389
// line end:   1426
void On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem_dup_4 *p;
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


// address: 0x80049080
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


// address: 0x80049FB0
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


// address: 0x8004A188
// line start: 1431
// line end:   1447
unsigned long On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004926C
// line start: 1435
// line end:   1441
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x800495A4
// line start: 1448
// line end:   1454
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049DC4
// line start: 1261
// line end:   1279
unsigned long On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048ED0
// line start: 1333
// line end:   1339
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004920C
// line start: 1346
// line end:   1352
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B614
// line start: 2336
// line end:   2350
unsigned long On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A5F0
// line start: 1904
// line end:   1908
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A5DC
// line start: 1917
// line end:   1921
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800495F4
// line start: 1542
// line end:   1555
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A538
// line start: 1599
// line end:   1623
unsigned long On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004A864
// line start: 1971
// line end:   1977
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B8BC
// line start: 2445
// line end:   2459
unsigned long On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B548
// line start: 2292
// line end:   2309
unsigned long On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004A530
// line start: 1881
// line end:   1887
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AA2C
// line start: 2013
// line end:   2033
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BA9C
// line start: 2491
// line end:   2518
unsigned long On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A800
// line start: 1958
// line end:   1964
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B850
// line start: 2426
// line end:   2440
unsigned long On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A68C
// line start: 1943
// line end:   1947
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A6F4
// line start: 1930
// line end:   1934
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B72C
// line start: 2379
// line end:   2394
unsigned long On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BDB4
// line start: 2602
// line end:   2616
unsigned long On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004AD14
// line start: 2113
// line end:   2119
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BEEC
// line start: 2641
// line end:   2655
unsigned long On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004AE34
// line start: 2139
// line end:   2145
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFE0
// line start: 2027
// line end:   2044
unsigned long On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A01C
// line start: 1774
// line end:   1780
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A0CC
// line start: 1787
// line end:   1793
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049DE4
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


// address: 0x8004AD80
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


// address: 0x80049F0C
// line start: 1750
// line end:   1761
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x6
	register struct TCmdLocParam1 *p;
}


// address: 0x8004C128
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


// address: 0x8004B044
// line start: 2218
// line end:   2266
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB70
// line start: 2057
// line end:   2104
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BBEC
// line start: 2547
// line end:   2597
unsigned long On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BBA4
// line start: 2523
// line end:   2541
unsigned long On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB28
// line start: 2043
// line end:   2050
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C0C8
// line start: 2736
// line end:   2750
unsigned long On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004AFEC
// line start: 2196
// line end:   2202
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AEC4
// line start: 2152
// line end:   2158
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BF88
// line start: 2660
// line end:   2674
unsigned long On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80049974
// line start: 1575
// line end:   1606
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x8004A5D8
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


// address: 0x80049664
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


// address: 0x80049688
// line start: 1562
// line end:   1593
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem_dup_4 *p;
	{
		{
			// register: 3
			register int ii;
		}
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


// address: 0x8004A230
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


// address: 0x80049308
// line start: 1448
// line end:   1482
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049E6C
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


// address: 0x80048F6C
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


// address: 0x80049954
// line start: 1637
// line end:   1647
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem_dup_4 *p;
}


// address: 0x80049B8C
// line start: 1650
// line end:   1660
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A8A8
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


// address: 0x80049930
// line start: 1637
// line end:   1647
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
}


// address: 0x8004A5B8
// line start: 1894
// line end:   1898
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5D8
// line start: 2314
// line end:   2331
unsigned long On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B498
// line start: 2323
// line end:   2330
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C5A8
// line start: 2896
// line end:   2911
unsigned long On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A9C8
// line start: 1816
// line end:   1834
unsigned long On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049BE4
// line start: 1667
// line end:   1675
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049A5C
// line start: 1654
// line end:   1662
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048E64
// line start: 1318
// line end:   1324
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049D50
// line start: 1224
// line end:   1254
unsigned long On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C634
// line start: 2939
// line end:   2957
unsigned long On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B520
// line start: 2349
// line end:   2357
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B560
// line start: 2363
// line end:   2371
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C674
// line start: 2963
// line end:   2983
unsigned long On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004C5F4
// line start: 2916
// line end:   2934
unsigned long On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B4E0
// line start: 2336
// line end:   2344
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5A0
// line start: 2377
// line end:   2386
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004C6B4
// line start: 2989
// line end:   3008
unsigned long On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x8004B1A8
// line start: 2138
// line end:   2170
unsigned long On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A24C
// line start: 1819
// line end:   1833
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A1C0
// line start: 1806
// line end:   1820
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A314
// line start: 1840
// line end:   1851
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B294
// line start: 2175
// line end:   2210
unsigned long On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A2A0
// line start: 1827
// line end:   1838
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049B00
// line start: 1669
// line end:   1685
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049C70
// line start: 1682
// line end:   1698
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AA78
// line start: 1860
// line end:   1894
unsigned long On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049C00
// line start: 1693
// line end:   1708
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049D58
// line start: 1706
// line end:   1721
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AB84
// line start: 1900
// line end:   1932
unsigned long On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B730
// line start: 1686
// line end:   1692
unsigned long On_SYNCDATA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A764
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


// address: 0x80049A8C
// line start: 1615
// line end:   1630
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 3
	register int ii;
}


// address: 0x80049820
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


// address: 0x8004B5E0
// line start: 2391
// line end:   2398
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004C6F4
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


// address: 0x8004B684
// line start: 2355
// line end:   2373
unsigned long On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A658
// line start: 1915
// line end:   1922
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A604
// line start: 1928
// line end:   1935
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A3D4
// line start: 1859
// line end:   1869
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A378
// line start: 1846
// line end:   1856
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B378
// line start: 2216
// line end:   2249
unsigned long On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B460
// line start: 2254
// line end:   2287
unsigned long On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A498
// line start: 1876
// line end:   1887
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A454
// line start: 1863
// line end:   1874
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AC80
// line start: 1937
// line end:   1970
unsigned long On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049CF0
// line start: 1715
// line end:   1730
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049E30
// line start: 1728
// line end:   1743
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049BD8
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


// address: 0x80049058
// line start: 1245
// line end:   1252
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048D08
// line start: 1232
// line end:   1239
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A72C
// line start: 1941
// line end:   1950
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B764
// line start: 2399
// line end:   2421
unsigned long On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
	}
}


// address: 0x80055E14
// line start: 2662
// line end:   2690
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80055B5C
// line start: 2621
// line end:   2642
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005126C
// line start: 1990
// line end:   2071
void OperateBookLever__Fii(int pnum, int i) {
	// register: 20
	register int x;
	// register: 19
	register int y;
	// register: 16
	register int tren;
}


// address: 0x800518E8
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


// address: 0x80050BA8
// line start: 1920
// line end:   1978
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


// address: 0x800513F4
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


// address: 0x8005611C
// line start: 2744
// line end:   2751
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80051E68
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


// address: 0x80055D2C
// line start: 2648
// line end:   2656
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800561D0
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


// address: 0x8005579C
// line start: 3125
// line end:   3217
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


// address: 0x80056074
// line start: 2731
// line end:   2737
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x800523FC
// line start: 1780
// line end:   1803
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80051FD8
// line start: 2195
// line end:   2220
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int x;
	// address: 0xFFFFFFEC
	auto int y;
}


// address: 0x800510AC
// line start: 1511
// line end:   1518
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x8004F770
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


// address: 0x8004F3CC
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


// address: 0x80052B70
// line start: 1894
// line end:   1901
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x8004FEE0
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


// address: 0x8004FB48
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


// address: 0x80052CCC
// line start: 1908
// line end:   1915
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80050580
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


// address: 0x80050278
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


// address: 0x80056A18
// line start: 2919
// line end:   2932
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
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


// address: 0x80051208
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


// address: 0x80052238
// line start: 1748
// line end:   1774
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x800611FC
// line start: 4483
// line end:   4483
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80060170
// line start: 4568
// line end:   4568
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct_dup_11 *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80060964
// line start: 4546
// line end:   4546
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct_dup_6 *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80060808
// line start: 4579
// line end:   4579
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct_dup_13 *ptrplr, int oi, unsigned char bl) {
}


// address: 0x8005FD50
// line start: 4507
// line end:   4507
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct_dup_4 *ptrplr, int oi, unsigned char bl) {
}


// address: 0x800606D0
// line start: 4580
// line end:   4580
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct_dup_7 *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80059464
// line start: 2938
// line end:   3055
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 18
	register unsigned char senditemmsg;
}


// address: 0x80056AF8
// line start: 2938
// line end:   3055
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80052F30
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


// address: 0x80052B28
// line start: 2380
// line end:   2473
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


// address: 0x80051C90
// line start: 1671
// line end:   1695
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x800529B8
// line start: 1872
// line end:   1888
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005341C
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


// address: 0x800559E0
// line start: 2604
// line end:   2615
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052594
// line start: 1809
// line end:   1835
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80056928
// line start: 2903
// line end:   2913
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x800527E8
// line start: 1841
// line end:   1864
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x8005677C
// line start: 2857
// line end:   2897
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x8009B508
// size: 0x6C
// line start: 898
// line end:   903
struct CPad *PAD_GetOptionsPad__Fi(int p) {
}


// address: 0x80081808
// size: 0x6C
// line start: 217
// line end:   228
struct CPad_dup_4 *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x80081F60
// size: 0x6C
// line start: 168
// line end:   178
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x80081650
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


// address: 0x80081DAC
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


// address: 0x80083F84
// line start: 152
// line end:   201
void PAD_Handler__Fv() {
	// register: 20
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 16
	register unsigned char fin;
}


// address: 0x8009FF00
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


// address: 0x800A0140
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


// address: 0x80081734
// line start: 505
// line end:   506
bool PA_GetPauseOk__Fv() {
}


// address: 0x80081724
// line start: 492
// line end:   495
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x8003F4D4
// line start: 1757
// line end:   1760
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8005A074
// line start: 1487
// line end:   1545
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800E03B8
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80058104
// line start: 1489
// line end:   1547
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800DED80
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80059A04
// line start: 1483
// line end:   1541
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800DF02C
	// size: 0x9
	static unsigned char fix[9];
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


// address: 0x80059EF0
// line start: 1484
// line end:   1542
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800CC39C
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A1B0
// line start: 1447
// line end:   1505
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800CB5BC
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A258
// line start: 1489
// line end:   1547
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800E0EE4
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80059670
// line start: 1447
// line end:   1505
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800C8610
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A140
// line start: 1477
// line end:   1535
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800CB234
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80059B68
// line start: 1487
// line end:   1545
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800DFE68
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80059728
// line start: 1477
// line end:   1535
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800C9624
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x800598FC
// line start: 1483
// line end:   1541
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800DED20
	// size: 0x9
	static unsigned char fix[9];
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


// address: 0x8005A174
// line start: 1445
// line end:   1503
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800CB4D4
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A074
// line start: 1484
// line end:   1542
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800DEF30
	// size: 0x9
	static unsigned char fix[9];
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


// address: 0x800617C8
// line start: 4505
// line end:   4505
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80059A40
// line start: 1549
// line end:   1571
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x8005A0B0
// line start: 1553
// line end:   1575
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x8005A1B0
// line start: 1511
// line end:   1533
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A17C
// line start: 1543
// line end:   1565
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x800596AC
// line start: 1513
// line end:   1535
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x80059F2C
// line start: 1550
// line end:   1572
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8005C8FC
// line start: 2913
// line end:   2984
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
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


// address: 0x8005CA28
// line start: 2883
// line end:   2954
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
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


// address: 0x8005CA2C
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


// address: 0x8005C76C
// line start: 2911
// line end:   2982
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
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


// address: 0x8005BF38
// line start: 2855
// line end:   2926
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
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


// address: 0x8005C26C
// line start: 2902
// line end:   2973
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
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


// address: 0x8005CE48
// line start: 3052
// line end:   3064
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x8005CCB8
// line start: 3050
// line end:   3062
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8005C7B8
// line start: 3041
// line end:   3053
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x8005C484
// line start: 2994
// line end:   3006
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005CF74
// line start: 3022
// line end:   3034
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x8005CF78
// line start: 2979
// line end:   2991
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E204
// line start: 3357
// line end:   3382
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8005E470
// line start: 3275
// line end:   3297
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E364
// line start: 3356
// line end:   3381
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x8005E4C0
// line start: 3329
// line end:   3354
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x8005D97C
// line start: 3290
// line end:   3315
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005DCD4
// line start: 3345
// line end:   3370
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x8005E188
// line start: 3334
// line end:   3350
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E444
// line start: 3306
// line end:   3322
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E2E8
// line start: 3333
// line end:   3349
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005DC58
// line start: 3322
// line end:   3338
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E3F4
// line start: 3252
// line end:   3268
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005D900
// line start: 3267
// line end:   3283
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E4A4
// line start: 3388
// line end:   3389
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x8005DE14
// line start: 3377
// line end:   3378
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x8005E584
// line start: 3304
// line end:   3305
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E600
// line start: 3361
// line end:   3362
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x8005DABC
// line start: 3322
// line end:   3323
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005E344
// line start: 3389
// line end:   3390
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8005CC88
// line start: 2992
// line end:   3013
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005C5F8
// line start: 2981
// line end:   3002
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CDB8
// line start: 2919
// line end:   2940
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005C2C4
// line start: 2934
// line end:   2955
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CAF8
// line start: 2990
// line end:   3011
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CDB4
// line start: 2962
// line end:   2983
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005DEAC
// line start: 3239
// line end:   3297
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x8005DFD8
// line start: 3209
// line end:   3270
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x8005D81C
// line start: 3228
// line end:   3286
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x8005DD1C
// line start: 3237
// line end:   3298
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8005DF88
// line start: 3155
// line end:   3216
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D494
// line start: 3170
// line end:   3231
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005B260
// line start: 2466
// line end:   2467
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x8005B760
// line start: 2475
// line end:   2476
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8005BA20
// line start: 2402
// line end:   2403
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B8F0
// line start: 2477
// line end:   2478
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x8005BA1C
// line start: 2447
// line end:   2448
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x8005AF3C
// line start: 2417
// line end:   2418
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x8005BAB0
// line start: 2452
// line end:   2571
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005B980
// line start: 2527
// line end:   2644
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005B7F0
// line start: 2525
// line end:   2642
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BAAC
// line start: 2497
// line end:   2614
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005B2F0
// line start: 2516
// line end:   2633
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005AFCC
// line start: 2467
// line end:   2586
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8007AAB4
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


// address: 0x800895A0
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


// address: 0x80075EA0
// line start: 75
// line end:   80
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


// address: 0x80076434
// line start: 75
// line end:   80
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


// address: 0x800765BC
// line start: 75
// line end:   80
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


// address: 0x80077334
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077334(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80077520
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077520(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x800776E4
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_800776E4(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x800777D8
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_800777D8(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
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


// address: 0x80077B90
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077B90(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80077C94
// line start: 75
// line end:   80
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


// address: 0x80077CFC
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077CFC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
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


// address: 0x80077FB0
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077FB0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x800781D8
// line start: 75
// line end:   80
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


// address: 0x8008A2D4
// line start: 75
// line end:   80
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


// address: 0x8008A7A4
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008A7A4(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008AB44
// line start: 75
// line end:   80
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


// address: 0x8008ABFC
// line start: 75
// line end:   80
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


// address: 0x8008B0FC
// line start: 75
// line end:   80
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


// address: 0x8008C760
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008C760(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008C9FC
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008C9FC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008CBDC
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008CBDC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
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


// address: 0x8008CFCC
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008CFCC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008CFE4
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008CFE4(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008D394
// line start: 75
// line end:   80
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


// address: 0x8008D500
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008D500(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
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


// address: 0x800914EC
// line start: 75
// line end:   80
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


// address: 0x80091748
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80091748(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80091AC0
// line start: 75
// line end:   80
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


// address: 0x80091E14
// line start: 75
// line end:   80
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


// address: 0x800927F8
// line start: 75
// line end:   80
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


// address: 0x80093750
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80093750(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80093BFC
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80093BFC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80093DDC
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80093DDC(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
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


// address: 0x800940B4
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_800940B4(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80094214
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80094214(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8009488C
// line start: 75
// line end:   80
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


// address: 0x80094934
// line start: 75
// line end:   80
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80094934(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
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


// address: 0x8007AC18
// line start: 267
// line end:   330
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007ABDC
// line start: 245
// line end:   254
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x80089424
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80075E64
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80075E64(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800763F8
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800763F8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80076580
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80076580(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800772F8
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800772F8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800774E4
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800774E4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800776A8
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800776A8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8007779C
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8007779C(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
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


// address: 0x80077A20
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077A20(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80077B54
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077B54(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80077C58
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077C58(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80077CC0
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077CC0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
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


// address: 0x80077F74
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077F74(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8007819C
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8007819C(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
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


// address: 0x8008A298
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008A298(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008A768
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008A768(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008AB08
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008AB08(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008ABC0
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008ABC0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
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


// address: 0x8008B0C0
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008B0C0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
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


// address: 0x8008C724
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008C724(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008C9C0
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008C9C0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008CBA0
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008CBA0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
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


// address: 0x8008CF90
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008CF90(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008CFA8
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008CFA8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008D358
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008D358(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008D4C4
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008D4C4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
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


// address: 0x800914B0
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800914B0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8009170C
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8009170C(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80091A84
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80091A84(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
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


// address: 0x80091DD8
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80091DD8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800927BC
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800927BC(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
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


// address: 0x80093714
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80093714(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80093BC0
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80093BC0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80093DA0
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80093DA0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
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


// address: 0x80094078
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80094078(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800941D8
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800941D8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80094850
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80094850(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x800948F8
// size: 0x28
// line start: 84
// line end:   89
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800948F8(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
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


// address: 0x8007A0F4
// line start: 365
// line end:   366
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x80079EA4
// line start: 247
// line end:   248
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007AF24
// size: 0xC
// line start: 494
// line end:   498
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007AF0C
// size: 0x14
// line start: 477
// line end:   481
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007AEAC
// size: 0x18
// line start: 444
// line end:   448
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007AEC4
// size: 0x28
// line start: 452
// line end:   456
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007AEF4
// size: 0x24
// line start: 469
// line end:   473
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007AEDC
// size: 0x34
// line start: 460
// line end:   464
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x80093BD4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x80093B58
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x80097810
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_80097810(struct POLY_G4 **Prim) {
}


// address: 0x80097A98
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_80097A98(struct POLY_G4 **Prim) {
}


// address: 0x80097F04
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_80097F04(struct POLY_G4 **Prim) {
}


// address: 0x800982B8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_800982B8(struct POLY_G4 **Prim) {
}


// address: 0x80098420
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_80098420(struct POLY_G4 **Prim) {
}


// address: 0x80098D40
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_80098D40(struct POLY_G4 **Prim) {
}


// address: 0x80099A6C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_80099A6C(struct POLY_G4 **Prim) {
}


// address: 0x80099E00
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_80099E00(struct POLY_G4 **Prim) {
}


// address: 0x8009A004
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009A004(struct POLY_G4 **Prim) {
}


// address: 0x8009A1E4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009A1E4(struct POLY_G4 **Prim) {
}


// address: 0x8009A4C8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009A4C8(struct POLY_G4 **Prim) {
}


// address: 0x8009A4CC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009A4CC(struct POLY_G4 **Prim) {
}


// address: 0x8009A580
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009A580(struct POLY_G4 **Prim) {
}


// address: 0x8009ADB4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009ADB4(struct POLY_G4 **Prim) {
}


// address: 0x8009AE58
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009AE58(struct POLY_G4 **Prim) {
}


// address: 0x8009B4D0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009B4D0(struct POLY_G4 **Prim) {
}


// address: 0x8009B600
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009B600(struct POLY_G4 **Prim) {
}


// address: 0x8009B90C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009B90C(struct POLY_G4 **Prim) {
}


// address: 0x8009B998
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009B998(struct POLY_G4 **Prim) {
}


// address: 0x8009BFA4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009BFA4(struct POLY_G4 **Prim) {
}


// address: 0x8009C1B8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009C1B8(struct POLY_G4 **Prim) {
}


// address: 0x8009D628
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009D628(struct POLY_G4 **Prim) {
}


// address: 0x8009D63C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009D63C(struct POLY_G4 **Prim) {
}


// address: 0x8009DADC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009DADC(struct POLY_G4 **Prim) {
}


// address: 0x8009E258
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009E258(struct POLY_G4 **Prim) {
}


// address: 0x8009E338
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009E338(struct POLY_G4 **Prim) {
}


// address: 0x8009E4E4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009E4E4(struct POLY_G4 **Prim) {
}


// address: 0x8009E644
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009E644(struct POLY_G4 **Prim) {
}


// address: 0x8009EBCC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009EBCC(struct POLY_G4 **Prim) {
}


// address: 0x8009F02C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009F02C(struct POLY_G4 **Prim) {
}


// address: 0x8009F660
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009F660(struct POLY_G4 **Prim) {
}


// address: 0x8009F6A0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7POLY_G4_addr_8009F6A0(struct POLY_G4 **Prim) {
}


// address: 0x8005F1D8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8005F1D8(struct POLY_FT4 **Prim) {
}


// address: 0x80060570
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80060570(struct POLY_FT4 **Prim) {
}


// address: 0x8006067C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8006067C(struct POLY_FT4 **Prim) {
}


// address: 0x80060960
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80060960(struct POLY_FT4 **Prim) {
}


// address: 0x80060A68
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80060A68(struct POLY_FT4 **Prim) {
}


// address: 0x80060BFC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80060BFC(struct POLY_FT4 **Prim) {
}


// address: 0x80060FAC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80060FAC(struct POLY_FT4 **Prim) {
}


// address: 0x80060FC8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80060FC8(struct POLY_FT4 **Prim) {
}


// address: 0x80061100
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80061100(struct POLY_FT4 **Prim) {
}


// address: 0x8006114C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8006114C(struct POLY_FT4 **Prim) {
}


// address: 0x800611BC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800611BC(struct POLY_FT4 **Prim) {
}


// address: 0x8006125C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8006125C(struct POLY_FT4 **Prim) {
}


// address: 0x800612EC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800612EC(struct POLY_FT4 **Prim) {
}


// address: 0x80061B40
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80061B40(struct POLY_FT4 **Prim) {
}


// address: 0x80061B70
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80061B70(struct POLY_FT4 **Prim) {
}


// address: 0x800648E0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800648E0(struct POLY_FT4 **Prim) {
}


// address: 0x80073C9C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80073C9C(struct POLY_FT4 **Prim) {
}


// address: 0x8007438C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007438C(struct POLY_FT4 **Prim) {
}


// address: 0x80074514
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80074514(struct POLY_FT4 **Prim) {
}


// address: 0x8007528C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007528C(struct POLY_FT4 **Prim) {
}


// address: 0x8007531C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007531C(struct POLY_FT4 **Prim) {
}


// address: 0x800754E0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800754E0(struct POLY_FT4 **Prim) {
}


// address: 0x800755D4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800755D4(struct POLY_FT4 **Prim) {
}


// address: 0x800757A4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800757A4(struct POLY_FT4 **Prim) {
}


// address: 0x80075858
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075858(struct POLY_FT4 **Prim) {
}


// address: 0x8007598C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007598C(struct POLY_FT4 **Prim) {
}


// address: 0x80075AF8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075AF8(struct POLY_FT4 **Prim) {
}


// address: 0x80075BEC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075BEC(struct POLY_FT4 **Prim) {
}


// address: 0x80075C58
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075C58(struct POLY_FT4 **Prim) {
}


// address: 0x80075DAC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075DAC(struct POLY_FT4 **Prim) {
}


// address: 0x80075EC8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075EC8(struct POLY_FT4 **Prim) {
}


// address: 0x80075FD4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80075FD4(struct POLY_FT4 **Prim) {
}


// address: 0x8007645C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007645C(struct POLY_FT4 **Prim) {
}


// address: 0x800765E4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800765E4(struct POLY_FT4 **Prim) {
}


// address: 0x8007735C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007735C(struct POLY_FT4 **Prim) {
}


// address: 0x80077548
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077548(struct POLY_FT4 **Prim) {
}


// address: 0x8007770C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007770C(struct POLY_FT4 **Prim) {
}


// address: 0x80077800
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077800(struct POLY_FT4 **Prim) {
}


// address: 0x80077874
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077874(struct POLY_FT4 **Prim) {
}


// address: 0x800779F0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800779F0(struct POLY_FT4 **Prim) {
}


// address: 0x80077A84
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077A84(struct POLY_FT4 **Prim) {
}


// address: 0x80077BB8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077BB8(struct POLY_FT4 **Prim) {
}


// address: 0x80077CBC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077CBC(struct POLY_FT4 **Prim) {
}


// address: 0x80077D24
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077D24(struct POLY_FT4 **Prim) {
}


// address: 0x80077D28
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077D28(struct POLY_FT4 **Prim) {
}


// address: 0x80077FD8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077FD8(struct POLY_FT4 **Prim) {
}


// address: 0x80078200
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80078200(struct POLY_FT4 **Prim) {
}


// address: 0x80078E14
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80078E14(struct POLY_FT4 **Prim) {
}


// address: 0x8007AE78
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007AE78(struct POLY_FT4 **Prim) {
}


// address: 0x80088A00
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80088A00(struct POLY_FT4 **Prim) {
}


// address: 0x80088FC0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80088FC0(struct POLY_FT4 **Prim) {
}


// address: 0x80089360
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80089360(struct POLY_FT4 **Prim) {
}


// address: 0x800893C8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800893C8(struct POLY_FT4 **Prim) {
}


// address: 0x80089554
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80089554(struct POLY_FT4 **Prim) {
}


// address: 0x800898E4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800898E4(struct POLY_FT4 **Prim) {
}


// address: 0x8008A21C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008A21C(struct POLY_FT4 **Prim) {
}


// address: 0x8008A6EC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008A6EC(struct POLY_FT4 **Prim) {
}


// address: 0x8008A920
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008A920(struct POLY_FT4 **Prim) {
}


// address: 0x8008AA8C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008AA8C(struct POLY_FT4 **Prim) {
}


// address: 0x8008AB44
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008AB44(struct POLY_FT4 **Prim) {
}


// address: 0x8008AC80
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008AC80(struct POLY_FT4 **Prim) {
}


// address: 0x8008AF2C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008AF2C(struct POLY_FT4 **Prim) {
}


// address: 0x8008B044
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008B044(struct POLY_FT4 **Prim) {
}


// address: 0x8008B1C8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008B1C8(struct POLY_FT4 **Prim) {
}


// address: 0x8008B3A8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008B3A8(struct POLY_FT4 **Prim) {
}


// address: 0x8008B3B0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008B3B0(struct POLY_FT4 **Prim) {
}


// address: 0x8008B798
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008B798(struct POLY_FT4 **Prim) {
}


// address: 0x8008B7B0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008B7B0(struct POLY_FT4 **Prim) {
}


// address: 0x8008BB7C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008BB7C(struct POLY_FT4 **Prim) {
}


// address: 0x8008BCCC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008BCCC(struct POLY_FT4 **Prim) {
}


// address: 0x8008C09C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008C09C(struct POLY_FT4 **Prim) {
}


// address: 0x8008C6A8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008C6A8(struct POLY_FT4 **Prim) {
}


// address: 0x8008C8B4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008C8B4(struct POLY_FT4 **Prim) {
}


// address: 0x8008C944
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008C944(struct POLY_FT4 **Prim) {
}


// address: 0x8008CB24
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008CB24(struct POLY_FT4 **Prim) {
}


// address: 0x8008CB2C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008CB2C(struct POLY_FT4 **Prim) {
}


// address: 0x8008CF14
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008CF14(struct POLY_FT4 **Prim) {
}


// address: 0x8008CF2C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008CF2C(struct POLY_FT4 **Prim) {
}


// address: 0x8008D2DC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008D2DC(struct POLY_FT4 **Prim) {
}


// address: 0x8008D448
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008D448(struct POLY_FT4 **Prim) {
}


// address: 0x8008DFA8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008DFA8(struct POLY_FT4 **Prim) {
}


// address: 0x80091514
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80091514(struct POLY_FT4 **Prim) {
}


// address: 0x80091770
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80091770(struct POLY_FT4 **Prim) {
}


// address: 0x80091AE8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80091AE8(struct POLY_FT4 **Prim) {
}


// address: 0x80091CDC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80091CDC(struct POLY_FT4 **Prim) {
}


// address: 0x80091E3C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80091E3C(struct POLY_FT4 **Prim) {
}


// address: 0x80092820
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80092820(struct POLY_FT4 **Prim) {
}


// address: 0x800933C0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800933C0(struct POLY_FT4 **Prim) {
}


// address: 0x8009367C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009367C(struct POLY_FT4 **Prim) {
}


// address: 0x80093778
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80093778(struct POLY_FT4 **Prim) {
}


// address: 0x800938D8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800938D8(struct POLY_FT4 **Prim) {
}


// address: 0x80093C24
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80093C24(struct POLY_FT4 **Prim) {
}


// address: 0x80093C50
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80093C50(struct POLY_FT4 **Prim) {
}


// address: 0x80093E04
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80093E04(struct POLY_FT4 **Prim) {
}


// address: 0x80093E44
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80093E44(struct POLY_FT4 **Prim) {
}


// address: 0x80093EE8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80093EE8(struct POLY_FT4 **Prim) {
}


// address: 0x800940DC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800940DC(struct POLY_FT4 **Prim) {
}


// address: 0x8009423C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009423C(struct POLY_FT4 **Prim) {
}


// address: 0x8009428C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009428C(struct POLY_FT4 **Prim) {
}


// address: 0x800948B4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800948B4(struct POLY_FT4 **Prim) {
}


// address: 0x8009495C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009495C(struct POLY_FT4 **Prim) {
}


// address: 0x80094C8C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80094C8C(struct POLY_FT4 **Prim) {
}


// address: 0x80094FF8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80094FF8(struct POLY_FT4 **Prim) {
}


// address: 0x80095820
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80095820(struct POLY_FT4 **Prim) {
}


// address: 0x80095AF8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80095AF8(struct POLY_FT4 **Prim) {
}


// address: 0x80095F70
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80095F70(struct POLY_FT4 **Prim) {
}


// address: 0x80096150
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096150(struct POLY_FT4 **Prim) {
}


// address: 0x80096268
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096268(struct POLY_FT4 **Prim) {
}


// address: 0x8009645C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009645C(struct POLY_FT4 **Prim) {
}


// address: 0x80096558
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096558(struct POLY_FT4 **Prim) {
}


// address: 0x80096D00
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096D00(struct POLY_FT4 **Prim) {
}


// address: 0x80096DBC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096DBC(struct POLY_FT4 **Prim) {
}


// address: 0x80097160
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_80097160(struct POLY_FT4 **Prim) {
}


// address: 0x8009CC0C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009CC0C(struct POLY_FT4 **Prim) {
}


// address: 0x8009CE50
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009CE50(struct POLY_FT4 **Prim) {
}


// address: 0x8009CEDC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009CEDC(struct POLY_FT4 **Prim) {
}


// address: 0x8009D6B8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009D6B8(struct POLY_FT4 **Prim) {
}


// address: 0x8009D6FC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009D6FC(struct POLY_FT4 **Prim) {
}


// address: 0x8009ED3C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009ED3C(struct POLY_FT4 **Prim) {
}


// address: 0x8009EF34
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009EF34(struct POLY_FT4 **Prim) {
}


// address: 0x8009F1F0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009F1F0(struct POLY_FT4 **Prim) {
}


// address: 0x8009F7A8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009F7A8(struct POLY_FT4 **Prim) {
}


// address: 0x8009F96C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009F96C(struct POLY_FT4 **Prim) {
}


// address: 0x8009FB7C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009FB7C(struct POLY_FT4 **Prim) {
}


// address: 0x8009FCEC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009FCEC(struct POLY_FT4 **Prim) {
}


// address: 0x8009FD28
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009FD28(struct POLY_FT4 **Prim) {
}


// address: 0x8009FD9C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009FD9C(struct POLY_FT4 **Prim) {
}


// address: 0x8009FE88
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009FE88(struct POLY_FT4 **Prim) {
}


// address: 0x800A034C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A034C(struct POLY_FT4 **Prim) {
}


// address: 0x800A04AC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A04AC(struct POLY_FT4 **Prim) {
}


// address: 0x800A0518
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0518(struct POLY_FT4 **Prim) {
}


// address: 0x800A0868
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0868(struct POLY_FT4 **Prim) {
}


// address: 0x800A0A1C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0A1C(struct POLY_FT4 **Prim) {
}


// address: 0x800A0B74
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0B74(struct POLY_FT4 **Prim) {
}


// address: 0x800A0F40
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0F40(struct POLY_FT4 **Prim) {
}


// address: 0x800A0F98
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0F98(struct POLY_FT4 **Prim) {
}


// address: 0x800A1198
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A1198(struct POLY_FT4 **Prim) {
}


// address: 0x800A1CE4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A1CE4(struct POLY_FT4 **Prim) {
}


// address: 0x800A1D50
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A1D50(struct POLY_FT4 **Prim) {
}


// address: 0x8007F804
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x8007F880
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x80088B48
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_80088B48(struct POLY_GT4 **Prim) {
}


// address: 0x80089108
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_80089108(struct POLY_GT4 **Prim) {
}


// address: 0x800894A8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_800894A8(struct POLY_GT4 **Prim) {
}


// address: 0x80089510
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_80089510(struct POLY_GT4 **Prim) {
}


// address: 0x8008969C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008969C(struct POLY_GT4 **Prim) {
}


// address: 0x80089A2C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_80089A2C(struct POLY_GT4 **Prim) {
}


// address: 0x8008AA68
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008AA68(struct POLY_GT4 **Prim) {
}


// address: 0x8008B074
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008B074(struct POLY_GT4 **Prim) {
}


// address: 0x8008B310
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008B310(struct POLY_GT4 **Prim) {
}


// address: 0x8008B4F0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008B4F0(struct POLY_GT4 **Prim) {
}


// address: 0x8008B4F8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008B4F8(struct POLY_GT4 **Prim) {
}


// address: 0x8008B8E0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008B8E0(struct POLY_GT4 **Prim) {
}


// address: 0x8008B8F8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008B8F8(struct POLY_GT4 **Prim) {
}


// address: 0x8008BCC4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008BCC4(struct POLY_GT4 **Prim) {
}


// address: 0x8008BE14
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008BE14(struct POLY_GT4 **Prim) {
}


// address: 0x8008C9FC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008C9FC(struct POLY_GT4 **Prim) {
}


// address: 0x8007A8BC
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


// address: 0x8008ACF4
// line start: 114
// line end:   115
void PROF_CpuEnd__Fv() {
}


// address: 0x8008AD24
// line start: 119
// line end:   120
void PROF_CpuStart__Fv() {
}


// address: 0x8008AD6C
// line start: 129
// line end:   130
void PROF_DrawEnd__Fv() {
}


// address: 0x8008AD48
// line start: 124
// line end:   125
void PROF_DrawStart__Fv() {
}


// address: 0x8008AD9C
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


// address: 0x8008ACE8
// line start: 109
// line end:   110
void PROF_Off__Fv() {
}


// address: 0x8008ACD8
// line start: 104
// line end:   105
void PROF_On__Fv() {
}


// address: 0x8008AC8C
// line start: 87
// line end:   94
void PROF_Open__Fv() {
}


// address: 0x8008AF90
// line start: 179
// line end:   180
void PROF_Restart__Fv() {
}


// address: 0x8008ACCC
// line start: 99
// line end:   100
bool PROF_State__Fv() {
}


// address: 0x8008B060
// line start: 223
// line end:   256
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008AFB0
// line start: 178
// line end:   212
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80077BE8
// line start: 304
// line end:   332
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80076844
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


// address: 0x80078010
// line start: 222
// line end:   245
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078094
// line start: 252
// line end:   259
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80077CD0
// line start: 354
// line end:   389
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80076958
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


// address: 0x800780EC
// line start: 267
// line end:   293
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
}


// address: 0x80078184
// line start: 300
// line end:   307
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x8004E844
// line start: 3778
// line end:   3866
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80121908
	static unsigned char sbLastCmd;
}


// address: 0x8004BC84
// line start: 2470
// line end:   2572
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x801199F0
	static unsigned char sbLastCmd;
}


// address: 0x8004B7F4
// line start: 2489
// line end:   2591
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012DCE0
	static unsigned char sbLastCmd;
}


// address: 0x8004C934
// line start: 3121
// line end:   3211
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80117D70
	static unsigned char sbLastCmd;
}


// address: 0x8004B718
// line start: 2457
// line end:   2559
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8011652C
	static unsigned char sbLastCmd;
}


// address: 0x8004B73C
// line start: 2457
// line end:   2559
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80114DA8
	static unsigned char sbLastCmd;
}


// address: 0x8004BE08
// line start: 2470
// line end:   2572
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012C6C8
	static unsigned char sbLastCmd;
}


// address: 0x8004B758
// line start: 2470
// line end:   2572
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012D704
	static unsigned char sbLastCmd;
}


// address: 0x8004C878
// line start: 3121
// line end:   3211
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80117C48
	static unsigned char sbLastCmd;
}


// address: 0x8004BA08
// line start: 2491
// line end:   2593
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012E884
	static unsigned char sbLastCmd;
}


// address: 0x800498B4
// line start: 2491
// line end:   2593
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012B220
	static unsigned char sbLastCmd;
}


// address: 0x8004BC68
// line start: 2470
// line end:   2572
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8011A1D4
	static unsigned char sbLastCmd;
}


// address: 0x8004BE94
// line start: 2457
// line end:   2559
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80118364
	static unsigned char sbLastCmd;
}


// address: 0x8004C8A8
// line start: 3121
// line end:   3211
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x80118584
	static unsigned char sbLastCmd;
}


// address: 0x8004B724
// line start: 2470
// line end:   2572
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012C7AC
	static unsigned char sbLastCmd;
}


// address: 0x8004B61C
// line start: 2470
// line end:   2572
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012C4A0
	static unsigned char sbLastCmd;
}


// address: 0x80095F5C
// line start: 510
// line end:   525
void ParticleBlob__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80095E04
// line start: 597
// line end:   612
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x800935CC
// line start: 618
// line end:   635
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80084528
// line start: 166
// line end:   178
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage_dup_1 Cpm;
	}
}


// address: 0x80082FEC
// line start: 176
// line end:   188
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage_dup_14 Cpm;
	}
}


// address: 0x80081104
// line start: 168
// line end:   180
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x800607E0
// line start: 4578
// line end:   4578
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x800611D4
// line start: 4482
// line end:   4482
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606A8
// line start: 4579
// line end:   4579
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x8005FD28
// line start: 4506
// line end:   4506
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x80060148
// line start: 4567
// line end:   4567
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x8006093C
// line start: 4545
// line end:   4545
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x80093770
// line start: 700
// line end:   709
void PhaseEnd__Fi(int plr) {
}


// address: 0x80061150
// line start: 4479
// line end:   4479
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060624
// line start: 4576
// line end:   4576
void PhaseStart__FP12PlayerStruct(struct PlayerStruct_dup_7 *ptrplr) {
}


// address: 0x800608B8
// line start: 4542
// line end:   4542
void PhaseStart__FP12PlayerStruct(struct PlayerStruct_dup_6 *ptrplr) {
}


// address: 0x800600EC
// line start: 4565
// line end:   4565
void PhaseStart__FP12PlayerStruct(struct PlayerStruct_dup_11 *ptrplr) {
}


// address: 0x80060784
// line start: 4576
// line end:   4576
void PhaseStart__FP12PlayerStruct(struct PlayerStruct_dup_13 *ptrplr) {
}


// address: 0x8005FCA4
// line start: 4503
// line end:   4503
void PhaseStart__FP12PlayerStruct(struct PlayerStruct_dup_4 *ptrplr) {
}


// address: 0x80093710
// line start: 670
// line end:   679
void PhaseStart__Fi(int plr) {
}


// address: 0x8009C67C
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


// address: 0x800978E0
// line start: 1518
// line end:   1543
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x80099638
// line start: 1363
// line end:   1388
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *player;
}


// address: 0x80098F24
// line start: 1529
// line end:   1554
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *player;
}


// address: 0x80096F50
// line start: 1490
// line end:   1515
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x80099274
// line start: 1543
// line end:   1568
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *player;
}


// address: 0x800999F4
// line start: 1543
// line end:   1568
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80096CD0
// line start: 1518
// line end:   1543
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *player;
}


// address: 0x8009A1D4
// line start: 1389
// line end:   1410
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8009A278
// line start: 1386
// line end:   1411
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *player;
}


// address: 0x800973C8
// line start: 1485
// line end:   1508
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
}


// address: 0x8006B110
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


// address: 0x8005FAF8
// line start: 4481
// line end:   4548
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *player;
}


// address: 0x8005F7C4
// line start: 4458
// line end:   4525
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x80060030
// line start: 4492
// line end:   4559
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *player;
}


// address: 0x80060224
// line start: 4403
// line end:   4470
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x800602C4
// line start: 4458
// line end:   4525
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *player;
}


// address: 0x800608F4
// line start: 4396
// line end:   4462
void PlayDungMsgs__Fv() {
}


// address: 0x80060014
// line start: 4484
// line end:   4551
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005F6B8
// line start: 4419
// line end:   4486
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *player;
}


// address: 0x80060190
// line start: 4492
// line end:   4559
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *player;
}


// address: 0x8003B294
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


// address: 0x8003A434
// line start: 324
// line end:   369
void PlayEffect__Fii(int i, int mode) {
	// register: 3
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8009CECC
// line start: 145
// line end:   173
short PlayFMV(struct StrInfo *str) {
	// register: 16
	register short RetVal;
	// register: 17
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009CC88
// line start: 82
// line end:   114
short PlayFMV__FPCc(char *str) {
	// register: 17
	register short RetVal;
	// register: 16
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009D734
// line start: 82
// line end:   114
short PlayFMV__FPCc(char *str) {
	// register: 16
	register short RetVal;
	// register: 17
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009FDA4
// line start: 90
// line end:   125
short PlayFMV__FPcii(char *str, int w, int h) {
	// register: 16
	register short RetVal;
	// register: 19
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8003B8B0
// line start: 565
// line end:   580
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003B458
// line start: 407
// line end:   410
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003B184
// line start: 278
// line end:   309
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A338
// line start: 284
// line end:   315
void PlaySFX_priv__FP4TSFXUcii(struct TSFX_dup_13 *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003B498
// line start: 418
// line end:   428
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x80059E84
// line start: 1321
// line end:   1330
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005A8C8
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


// address: 0x8005A8F0
// line start: 1913
// line end:   1950
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct_dup_6 *ptrplr, struct ItemStruct_dup_6 *itm, int xx, int yy) {
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


// address: 0x80059E1C
// line start: 1883
// line end:   1920
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct_dup_4 *ptrplr, struct ItemStruct *itm, int xx, int yy) {
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


// address: 0x8005A824
// line start: 1923
// line end:   1960
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct_dup_13 *ptrplr, struct ItemStruct_dup_13 *itm, int xx, int yy) {
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


// address: 0x8005A6A0
// line start: 1920
// line end:   1957
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct_dup_7 *ptrplr, struct ItemStruct *itm, int xx, int yy) {
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


// address: 0x8005A1B4
// line start: 1919
// line end:   1956
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct_dup_11 *ptrplr, struct ItemStruct_dup_11 *itm, int xx, int yy) {
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


// address: 0x8005E9A4
// line start: 3627
// line end:   3635
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x80059F18
// line start: 1337
// line end:   1350
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80039890
// size: 0x94
// line start: 579
// line end:   584
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038A0C
// size: 0x98
// line start: 581
// line end:   586
struct ItemStruct_dup_13 *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038B48
// size: 0x98
// line start: 579
// line end:   584
struct ItemStruct_dup_6 *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038928
// size: 0x98
// line start: 579
// line end:   584
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038924
// size: 0x98
// line start: 579
// line end:   584
struct ItemStruct_dup_11 *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x8005BFBC
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


// address: 0x8005BCFC
// line start: 2705
// line end:   2819
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct_dup_7 *ptrplr, int m) {
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


// address: 0x8005B7FC
// line start: 2696
// line end:   2810
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct_dup_11 *ptrplr, int m) {
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


// address: 0x8005BFB8
// line start: 2677
// line end:   2791
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct_dup_6 *ptrplr, int m) {
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


// address: 0x8005BE8C
// line start: 2707
// line end:   2821
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct_dup_13 *ptrplr, int m) {
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


// address: 0x8005B4D8
// line start: 2649
// line end:   2763
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct_dup_4 *ptrplr, int m) {
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


// address: 0x8005C998
// line start: 2868
// line end:   2875
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct_dup_6 *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C99C
// line start: 2825
// line end:   2832
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005BEA8
// line start: 2840
// line end:   2847
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct_dup_4 *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C86C
// line start: 2898
// line end:   2905
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct_dup_13 *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C6DC
// line start: 2896
// line end:   2903
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct_dup_7 *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C1DC
// line start: 2887
// line end:   2894
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct_dup_11 *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005BE2C
// line start: 2817
// line end:   2880
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct_dup_11 *ptrplr, char p) {
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


// address: 0x8005C5E8
// line start: 2798
// line end:   2861
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct_dup_6 *ptrplr, char p) {
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


// address: 0x8005BB08
// line start: 2770
// line end:   2833
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct_dup_4 *ptrplr, char p) {
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


// address: 0x8005C4BC
// line start: 2828
// line end:   2891
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct_dup_13 *ptrplr, char p) {
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


// address: 0x8005C32C
// line start: 2826
// line end:   2889
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct_dup_7 *ptrplr, char p) {
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


// address: 0x8005C5EC
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


// address: 0x80079578
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


// address: 0x8005EBA4
// line start: 3969
// line end:   3994
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct_dup_11 *ptrplr, int px, int py) {
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


// address: 0x8005F2B8
// line start: 3893
// line end:   3918
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


// address: 0x8005E7A0
// line start: 3909
// line end:   3934
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct_dup_4 *ptrplr, int px, int py) {
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


// address: 0x8005F234
// line start: 3980
// line end:   4005
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct_dup_13 *ptrplr, int px, int py) {
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


// address: 0x8005F35C
// line start: 3948
// line end:   3973
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct_dup_6 *ptrplr, int px, int py) {
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


// address: 0x8005F0C8
// line start: 3980
// line end:   4005
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct_dup_7 *ptrplr, int px, int py) {
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


// address: 0x8005F3E0
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


// address: 0x800612A8
// line start: 4487
// line end:   4487
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x8004C328
// line start: 302
// line end:   310
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004C0A4
// line start: 256
// line end:   270
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80050248
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


// address: 0x8004C1DC
// line start: 277
// line end:   295
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80050380
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


// address: 0x8004C3F0
// line start: 346
// line end:   357
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004CC40
// line start: 708
// line end:   745
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x80071908
// line start: 1549
// line end:   1605
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 3
	// size: 0x94
	register struct GamePad *GP1;
	// register: 8
	// size: 0x94
	register struct GamePad *GP2;
}


// address: 0x80072E6C
// line start: 1450
// line end:   1506
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 4
	// size: 0x9C
	register struct GamePad_dup_11 *GPad1;
	// register: 8
	// size: 0x9C
	register struct GamePad_dup_11 *GPad2;
}


// address: 0x8007377C
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


// address: 0x80073834
// line start: 1546
// line end:   1602
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 4
	// size: 0x94
	register struct GamePad_dup_13 *GPad1;
	// register: 8
	// size: 0x94
	register struct GamePad_dup_13 *GPad2;
}


// address: 0x80072CC8
// line start: 1438
// line end:   1494
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 4
	// size: 0x9C
	register struct GamePad *GPad1;
	// register: 8
	// size: 0x9C
	register struct GamePad *GPad2;
}


// address: 0x800739FC
// line start: 1549
// line end:   1605
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 3
	// size: 0x94
	register struct GamePad_dup_14 *GP1;
	// register: 8
	// size: 0x94
	register struct GamePad_dup_14 *GP2;
}


// address: 0x8008B2D4
// line start: 316
// line end:   320
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B3C4
// line start: 334
// line end:   338
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B1B0
// line start: 285
// line end:   291
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008B4AC
// line start: 355
// line end:   359
void PostNewGame__Fv() {
}


// address: 0x8008AA84
// line start: 323
// line end:   329
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8004C494
// line start: 365
// line end:   388
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004C3B0
// line start: 317
// line end:   319
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x80045038
// line start: 3959
// line end:   3974
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x8008090C
// line start: 568
// line end:   625
void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat_dup_1 *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
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


// address: 0x8007EDCC
// line start: 579
// line end:   646
void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat_dup_14 *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR_dup_14 *Fr;
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


// address: 0x8007D3E8
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


// address: 0x8007CABC
// line start: 583
// line end:   650
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


// address: 0x8007F574
// line start: 865
// line end:   923
void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat_dup_14 *this, struct POLY_GT3 *GT3, int Frm, int X, int Y) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR_dup_14 *Fr;
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


// address: 0x8007DB8C
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


// address: 0x8007D264
// line start: 869
// line end:   927
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


// address: 0x800810B0
// line start: 844
// line end:   902
void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat_dup_1 *this, struct POLY_GT3 *GT3, int Frm, int X, int Y) {
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


// address: 0x80080DD4
// line start: 734
// line end:   805
void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat_dup_1 *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
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


// address: 0x8007D8B0
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


// address: 0x8007F298
// line start: 755
// line end:   826
void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat_dup_14 *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR_dup_14 *Fr;
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


// address: 0x8007CF88
// line start: 759
// line end:   830
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


// address: 0x8007AE68
// line start: 380
// line end:   384
void PrimDrawSycnCallBack() {
}


// address: 0x80084F18
// line start: 571
// line end:   582
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage_dup_1 *this, int Menu) {
}


// address: 0x80083BB0
// line start: 632
// line end:   645
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage_dup_14 *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x800819A8
// line start: 573
// line end:   584
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x800832D8
// line start: 626
// line end:   639
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x800859DC
// line start: 494
// line end:   529
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x800852E8
// line start: 494
// line end:   529
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks_dup_4 *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x800882D4
// line start: 490
// line end:   525
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks_dup_14 *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80088F4C
// line start: 493
// line end:   528
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks_dup_1 *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x8008ECA4
// line start: 151
// line end:   164
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat *CDGfxData;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8008EFD8
// line start: 150
// line end:   163
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat_dup_14 *CDGfxData;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
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


// address: 0x8004820C
// line start: 224
// line end:   232
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800827C8
// line start: 386
// line end:   455
int PrintChar__5CFontUsUsUcUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80082578
// line start: 366
// line end:   425
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x800840C8
// line start: 385
// line end:   444
int PrintChar__5CFontUsUscUcUcUc(struct CFont_dup_10 *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// address: 0xFFFFFFB8
	auto int Cw;
	{
		{
			{
				{
					// address: 0xFFFFFFC0
					auto unsigned short DR;
					// address: 0xFFFFFFC8
					auto unsigned short DG;
					// address: 0xFFFFFFD0
					auto unsigned short DB;
					// register: 16
					register unsigned short LR;
					// register: 17
					register unsigned short LG;
					// register: 19
					register unsigned short LB;
				}
			}
		}
	}
}


// address: 0x80084A54
// line start: 386
// line end:   450
int PrintChar__5CFontUsUscUcUcUc(struct CFont_dup_14 *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x80085AE0
// line start: 360
// line end:   419
int PrintChar__5CFontUsUscUcUcUc(struct CFont_dup_1 *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
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


// address: 0x8008428C
// line start: 385
// line end:   444
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// address: 0xFFFFFFB8
	auto int Cw;
	{
		{
			{
				{
					// address: 0xFFFFFFC0
					auto unsigned short DR;
					// address: 0xFFFFFFC8
					auto unsigned short DG;
					// address: 0xFFFFFFD0
					auto unsigned short DB;
					// register: 16
					register unsigned short LR;
					// register: 17
					register unsigned short LG;
					// register: 19
					register unsigned short LB;
				}
			}
		}
	}
}


// address: 0x8008FD24
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


// address: 0x80090338
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


// address: 0x80092018
// line start: 620
// line end:   735
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


// address: 0x80081274
// size: 0x28
// line start: 916
// line end:   935
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat_dup_1 *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007DD50
// size: 0x28
// line start: 918
// line end:   937
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007F73C
// size: 0x28
// line start: 937
// line end:   956
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat_dup_14 *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007B298
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


// address: 0x80087B0C
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


// address: 0x80087AA4
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


// address: 0x80089610
// line start: 1277
// line end:   1649
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
													register struct ItemStruct_dup_6 *pItem;
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


// address: 0x80087EB0
// line start: 1279
// line end:   1675
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


// address: 0x80089A58
// line start: 1274
// line end:   1647
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
									register struct ItemStruct_dup_11 *pItem;
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


// address: 0x80087148
// line start: 1255
// line end:   1625
void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks_dup_4 *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
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


// address: 0x8008B010
// line start: 1296
// line end:   1645
void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks_dup_1 *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
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
			register struct TextDat_dup_1 *ObjDat;
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
																						register struct TextDat_dup_1 *CMonstGraphics;
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


// address: 0x8008A340
// line start: 1275
// line end:   1653
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
									register struct ItemStruct_dup_13 *pItem;
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


// address: 0x80089E18
// line start: 1274
// line end:   1650
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


// address: 0x8008A128
// line start: 1279
// line end:   1675
void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks_dup_14 *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
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
			register struct TextDat_dup_14 *ObjDat;
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
											register struct FRAME_HDR_dup_14 *Fr;
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
																						register struct TextDat_dup_14 *CMonstGraphics;
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


// address: 0x80086FD8
// line start: 1222
// line end:   1245
void PrintGameSprites__7CBlocksiiiii(struct CBlocks_dup_4 *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY) {
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


// address: 0x80087934
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


// address: 0x8008AEA0
// line start: 1260
// line end:   1283
void PrintGameSprites__7CBlocksiiiii(struct CBlocks_dup_1 *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY) {
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


// address: 0x80089FB8
// line start: 1246
// line end:   1269
void PrintGameSprites__7CBlocksiiiii(struct CBlocks_dup_14 *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY) {
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


// address: 0x8008151C
// size: 0x28
// line start: 966
// line end:   982
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat_dup_1 *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007F9E4
// size: 0x28
// line start: 987
// line end:   1003
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat_dup_14 *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007DFF8
// size: 0x28
// line start: 968
// line end:   984
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x800813C8
// size: 0x34
// line start: 941
// line end:   960
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat_dup_1 *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007DEA4
// size: 0x34
// line start: 943
// line end:   962
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007F890
// size: 0x34
// line start: 962
// line end:   981
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat_dup_14 *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
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


// address: 0x80030F94
// line start: 1823
// line end:   1866
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


// address: 0x8004430C
// line start: 3630
// line end:   3675
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043798
// line start: 3634
// line end:   3679
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct_dup_6 *x) {
}


// address: 0x8004364C
// line start: 3655
// line end:   3700
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct_dup_11 *x) {
}


// address: 0x80043634
// line start: 3673
// line end:   3718
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct_dup_13 *x) {
}


// address: 0x80043B08
// line start: 3685
// line end:   3725
void PrintItemDur__FPC10ItemStruct(struct ItemStruct_dup_6 *x) {
}


// address: 0x800439A4
// line start: 3724
// line end:   3764
void PrintItemDur__FPC10ItemStruct(struct ItemStruct_dup_13 *x) {
}


// address: 0x80044678
// line start: 3681
// line end:   3721
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800439BC
// line start: 3706
// line end:   3746
void PrintItemDur__FPC10ItemStruct(struct ItemStruct_dup_11 *x) {
}


// address: 0x800433C0
// line start: 3610
// line end:   3648
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct_dup_11 *x) {
}


// address: 0x800434A8
// line start: 3623
// line end:   3666
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct_dup_13 *x) {
}


// address: 0x8004350C
// line start: 3589
// line end:   3627
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct_dup_6 *x) {
}


// address: 0x80044080
// line start: 3585
// line end:   3623
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800438E0
// line start: 3162
// line end:   3286
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80042E50
// line start: 3292
// line end:   3504
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct_dup_6 *x) {
	// register: 16
	register int v;
}


// address: 0x80042D04
// line start: 3313
// line end:   3525
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct_dup_11 *x) {
	// register: 16
	register int v;
}


// address: 0x800439D4
// line start: 3292
// line end:   3501
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80042DE4
// line start: 3325
// line end:   3538
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct_dup_13 *x) {
	// register: 16
	register int v;
}


// address: 0x80086494
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


// address: 0x80089738
// line start: 751
// line end:   1248
void PrintMap__7CBlocksii(struct CBlocks_dup_1 *this, int x, int y) {
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


// address: 0x80087FAC
// line start: 752
// line end:   1232
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


// address: 0x80088AC8
// line start: 749
// line end:   1234
void PrintMap__7CBlocksii(struct CBlocks_dup_14 *this, int x, int y) {
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


// address: 0x80088CE0
// line start: 745
// line end:   1230
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


// address: 0x800861CC
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


// address: 0x80085AD8
// line start: 752
// line end:   1210
void PrintMap__7CBlocksii(struct CBlocks_dup_4 *this, int x, int y) {
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


// address: 0x8007E9C0
// size: 0x28
// line start: 436
// line end:   573
struct POLY_FT4 *PrintMonster__7TextDatiiibi(struct TextDat_dup_14 *this, int Frm, int X, int Y, bool XFlip, int OtPos) {
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x28
			auto struct POLY_FT4 *FT4;
			// register: 18
			// size: 0xC
			register struct FRAME_HDR_dup_14 *Fr;
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


// address: 0x8007C6B0
// size: 0x28
// line start: 440
// line end:   577
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


// address: 0x80080504
// size: 0x28
// line start: 425
// line end:   562
struct POLY_FT4 *PrintMonster__7TextDatiiibi(struct TextDat_dup_1 *this, int Frm, int X, int Y, bool XFlip, int OtPos) {
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


// address: 0x8007CFE0
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


// address: 0x8007AA4C
// size: 0x28
// line start: 1367
// line end:   1368
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077C78
// size: 0x28
// line start: 1379
// line end:   1380
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80077890
// size: 0x28
// line start: 1379
// line end:   1380
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079C50
// size: 0x28
// line start: 696
// line end:   697
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076E7C
// size: 0x28
// line start: 708
// line end:   709
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80076A94
// size: 0x28
// line start: 708
// line end:   709
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800777B4
// size: 0x28
// line start: 1324
// line end:   1325
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A970
// size: 0x28
// line start: 1312
// line end:   1313
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077B9C
// size: 0x28
// line start: 1324
// line end:   1325
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80077B70
// size: 0x28
// line start: 1313
// line end:   1314
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80077788
// size: 0x28
// line start: 1313
// line end:   1314
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A944
// size: 0x28
// line start: 1301
// line end:   1302
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076858
// size: 0x28
// line start: 565
// line end:   566
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076C40
// size: 0x28
// line start: 565
// line end:   566
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80079A14
// size: 0x28
// line start: 553
// line end:   554
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80079A40
// size: 0x28
// line start: 564
// line end:   565
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076C6C
// size: 0x28
// line start: 576
// line end:   577
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80076884
// size: 0x28
// line start: 576
// line end:   577
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079A6C
// size: 0x28
// line start: 575
// line end:   576
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076C98
// size: 0x28
// line start: 587
// line end:   588
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800768B0
// size: 0x28
// line start: 587
// line end:   588
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077620
// size: 0x28
// line start: 1089
// line end:   1115
struct POLY_FT4 *PrintOBJ_BARRELEX__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
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


// address: 0x80077238
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


// address: 0x8007A3F4
// size: 0x28
// line start: 1077
// line end:   1103
struct POLY_FT4 *PrintOBJ_BARRELEX__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
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


// address: 0x8007A3C8
// size: 0x28
// line start: 1066
// line end:   1067
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x800775F4
// size: 0x28
// line start: 1078
// line end:   1079
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x8007720C
// size: 0x28
// line start: 1078
// line end:   1079
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AEC
// size: 0x28
// line start: 730
// line end:   731
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076ED4
// size: 0x28
// line start: 730
// line end:   731
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80079CA8
// size: 0x28
// line start: 718
// line end:   719
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x800776D8
// size: 0x28
// line start: 1269
// line end:   1270
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A894
// size: 0x28
// line start: 1257
// line end:   1258
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077AC0
// size: 0x28
// line start: 1269
// line end:   1270
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x8007A8C0
// size: 0x28
// line start: 1268
// line end:   1269
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077704
// size: 0x28
// line start: 1280
// line end:   1281
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077AEC
// size: 0x28
// line start: 1280
// line end:   1281
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x8007A7B8
// size: 0x28
// line start: 1202
// line end:   1203
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x800775FC
// size: 0x28
// line start: 1214
// line end:   1215
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779E4
// size: 0x28
// line start: 1214
// line end:   1215
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80079C7C
// size: 0x28
// line start: 707
// line end:   708
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076AC0
// size: 0x28
// line start: 719
// line end:   720
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EA8
// size: 0x28
// line start: 719
// line end:   720
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80077168
// size: 0x28
// line start: 895
// line end:   896
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80079F3C
// size: 0x28
// line start: 883
// line end:   884
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076D80
// size: 0x28
// line start: 895
// line end:   896
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779C0
// size: 0x28
// line start: 1203
// line end:   1204
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x8007A794
// size: 0x28
// line start: 1191
// line end:   1192
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x800775D8
// size: 0x28
// line start: 1203
// line end:   1204
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007793C
// size: 0x28
// line start: 1170
// line end:   1171
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80077554
// size: 0x28
// line start: 1170
// line end:   1171
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A710
// size: 0x28
// line start: 1158
// line end:   1159
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077968
// size: 0x28
// line start: 1181
// line end:   1182
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80077580
// size: 0x28
// line start: 1181
// line end:   1182
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A73C
// size: 0x28
// line start: 1169
// line end:   1170
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x8007A2EC
// size: 0x28
// line start: 1011
// line end:   1012
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077130
// size: 0x28
// line start: 1023
// line end:   1024
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077518
// size: 0x28
// line start: 1023
// line end:   1024
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800771B4
// size: 0x28
// line start: 1056
// line end:   1057
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A370
// size: 0x28
// line start: 1044
// line end:   1045
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x8007759C
// size: 0x28
// line start: 1056
// line end:   1057
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800775AC
// size: 0x28
// line start: 1192
// line end:   1193
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A768
// size: 0x28
// line start: 1180
// line end:   1181
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077994
// size: 0x28
// line start: 1192
// line end:   1193
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800799A0
// size: 0x28
// line start: 520
// line end:   521
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076BCC
// size: 0x28
// line start: 532
// line end:   533
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800767E4
// size: 0x28
// line start: 532
// line end:   533
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076808
// size: 0x28
// line start: 543
// line end:   544
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076BF0
// size: 0x28
// line start: 543
// line end:   544
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800799C4
// size: 0x28
// line start: 531
// line end:   532
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x8007682C
// size: 0x28
// line start: 554
// line end:   555
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800799E8
// size: 0x28
// line start: 542
// line end:   543
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076C14
// size: 0x28
// line start: 554
// line end:   555
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x8007780C
// size: 0x28
// line start: 1346
// line end:   1347
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077BF4
// size: 0x28
// line start: 1346
// line end:   1347
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x8007A9C8
// size: 0x28
// line start: 1334
// line end:   1335
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076760
// size: 0x28
// line start: 499
// line end:   500
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007991C
// size: 0x28
// line start: 487
// line end:   488
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076B48
// size: 0x28
// line start: 499
// line end:   500
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x8007678C
// size: 0x28
// line start: 510
// line end:   511
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079948
// size: 0x28
// line start: 498
// line end:   499
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076B74
// size: 0x28
// line start: 510
// line end:   511
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80079974
// size: 0x28
// line start: 509
// line end:   510
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076BA0
// size: 0x28
// line start: 521
// line end:   522
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800767B8
// size: 0x28
// line start: 521
// line end:   522
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769E4
// size: 0x28
// line start: 664
// line end:   665
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076DCC
// size: 0x28
// line start: 664
// line end:   665
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80079BA0
// size: 0x28
// line start: 652
// line end:   653
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076DF8
// size: 0x28
// line start: 675
// line end:   676
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80076A10
// size: 0x28
// line start: 675
// line end:   676
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80079BCC
// size: 0x28
// line start: 663
// line end:   664
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80079BF8
// size: 0x28
// line start: 674
// line end:   675
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076E24
// size: 0x28
// line start: 686
// line end:   687
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80076A3C
// size: 0x28
// line start: 686
// line end:   687
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A7E4
// size: 0x28
// line start: 1213
// line end:   1214
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077628
// size: 0x28
// line start: 1225
// line end:   1226
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A10
// size: 0x28
// line start: 1225
// line end:   1226
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80077494
// size: 0x28
// line start: 990
// line end:   991
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800770AC
// size: 0x28
// line start: 990
// line end:   991
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A268
// size: 0x28
// line start: 978
// line end:   979
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x800774C0
// size: 0x28
// line start: 1001
// line end:   1002
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800770D8
// size: 0x28
// line start: 1001
// line end:   1002
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A294
// size: 0x28
// line start: 989
// line end:   990
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x8007A99C
// size: 0x28
// line start: 1323
// line end:   1324
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077BC8
// size: 0x28
// line start: 1335
// line end:   1336
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800777E0
// size: 0x28
// line start: 1335
// line end:   1336
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A68
// size: 0x28
// line start: 459
// line end:   467
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8007983C
// size: 0x28
// line start: 447
// line end:   455
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076680
// size: 0x28
// line start: 459
// line end:   467
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80077BD4
// size: 0x28
// line start: 1545
// line end:   1546
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80078118
// size: 0x28
// line start: 1568
// line end:   1569
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x8007AD90
// size: 0x28
// line start: 1533
// line end:   1534
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076734
// size: 0x28
// line start: 488
// line end:   489
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B1C
// size: 0x28
// line start: 488
// line end:   489
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800798F0
// size: 0x28
// line start: 476
// line end:   477
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x800778BC
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


// address: 0x8007AA78
// size: 0x28
// line start: 1378
// line end:   1410
struct POLY_FT4 *PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
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


// address: 0x80077CA4
// size: 0x28
// line start: 1390
// line end:   1422
struct POLY_FT4 *PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
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


// address: 0x8007A9F4
// size: 0x28
// line start: 1345
// line end:   1346
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077838
// size: 0x28
// line start: 1357
// line end:   1358
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077C20
// size: 0x28
// line start: 1357
// line end:   1358
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80077BA8
// size: 0x28
// line start: 1534
// line end:   1535
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007AD64
// size: 0x28
// line start: 1522
// line end:   1523
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x800780EC
// size: 0x28
// line start: 1557
// line end:   1558
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80076B18
// size: 0x28
// line start: 741
// line end:   742
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F00
// size: 0x28
// line start: 741
// line end:   742
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80079CD4
// size: 0x28
// line start: 729
// line end:   730
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x8007A8EC
// size: 0x28
// line start: 1279
// line end:   1280
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077730
// size: 0x28
// line start: 1291
// line end:   1292
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B18
// size: 0x28
// line start: 1291
// line end:   1292
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x8007A918
// size: 0x28
// line start: 1290
// line end:   1291
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077B44
// size: 0x28
// line start: 1302
// line end:   1303
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x8007775C
// size: 0x28
// line start: 1302
// line end:   1303
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007A23C
// size: 0x28
// line start: 967
// line end:   968
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077080
// size: 0x28
// line start: 979
// line end:   980
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077468
// size: 0x28
// line start: 979
// line end:   980
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80077778
// size: 0x28
// line start: 1125
// line end:   1132
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80077390
// size: 0x28
// line start: 1125
// line end:   1132
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007A54C
// size: 0x28
// line start: 1113
// line end:   1120
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80077844
// size: 0x28
// line start: 1142
// line end:   1149
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007A618
// size: 0x28
// line start: 1130
// line end:   1137
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x8007745C
// size: 0x28
// line start: 1142
// line end:   1149
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x80078170
// size: 0x28
// line start: 1590
// line end:   1591
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80077C2C
// size: 0x28
// line start: 1567
// line end:   1568
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007ADE8
// size: 0x28
// line start: 1555
// line end:   1556
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x8007A6E4
// size: 0x28
// line start: 1147
// line end:   1148
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80077910
// size: 0x28
// line start: 1159
// line end:   1160
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80077528
// size: 0x28
// line start: 1159
// line end:   1160
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076708
// size: 0x28
// line start: 477
// line end:   478
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800798C4
// size: 0x28
// line start: 465
// line end:   466
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_1 *ObjDat, int OtPos) {
}


// address: 0x80076AF0
// size: 0x28
// line start: 477
// line end:   478
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x80076CC4
// size: 0x28
// line start: 598
// line end:   599
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat_dup_14 *ObjDat, int OtPos) {
}


// address: 0x800768DC
// size: 0x28
// line start: 598
// line end:   599
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// size: 0x28