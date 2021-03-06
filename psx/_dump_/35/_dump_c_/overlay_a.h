#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8013CAB4
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013CC5C
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8013D0F8
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013D210
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013E420
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013E920
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013E380
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x80143834
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x801437B0
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x80143790
// size: 0x14
extern char *CharFileList[5];

// address: 0x801437A4
// size: 0xC
extern char *Classes[3];

// address: 0x801437CC
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x801437E8
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80143804
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80139F2C
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80139F54
// line start: 157
// line end:   162
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80139F7C
// line start: 168
// line end:   175
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80139FF0
// line start: 179
// line end:   184
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8013A06C
// line start: 188
// line end:   204
void FeAddNameTable__FPUci(unsigned char *Table, int Count) {
	{
		// register: 17
		register int YLoop;
		{
			{
				// register: 3
				register int XLoop;
			}
		}
	}
}


// address: 0x8013A19C
// line start: 211
// line end:   290
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT ARect;
	// register: 16
	register int X;
	// register: 17
	register int Y;
	// register: 19
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 22
	register int SelY;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 20
								register int Loop;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8013A5B0
// line start: 294
// line end:   307
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A630
// line start: 311
// line end:   329
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A6DC
// line start: 335
// line end:   346
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A7C4
// line start: 351
// line end:   362
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A8A8
// line start: 370
// line end:   371
int FeGetCursor__Fv() {
}


// address: 0x8013A8BC
// line start: 375
// line end:   376
void FeSelect__Fv() {
}


// address: 0x8013A900
// line start: 386
// line end:   437
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013AA98
// line start: 441
// line end:   442
void InitDummyMenu__Fv() {
}


// address: 0x8013AAA0
// line start: 448
// line end:   466
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8013AB60
// line start: 483
// line end:   492
void FeInitMainMenu__Fv() {
}


// address: 0x8013ABBC
// line start: 509
// line end:   515
void FeInitNewGameMenu__Fv() {
}


// address: 0x8013AC0C
// line start: 520
// line end:   553
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x8013AD40
// line start: 571
// line end:   580
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013ADB4
// line start: 584
// line end:   593
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x8013AE28
// line start: 598
// line end:   601
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x8013AE70
// line start: 606
// line end:   648
void FeDrawChrClass__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC8
	// size: 0x4
	auto char TempStr[4];
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


// address: 0x8013B30C
// line start: 738
// line end:   746
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x8013B354
// line start: 750
// line end:   757
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8013B39C
// line start: 762
// line end:   881
void FeNewNameMenuCtrl__Fv() {
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
											// address: 0xFFFFFFD8
											// size: 0x2
											auto char asd[2];
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8013B92C
// line start: 890
// line end:   902
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8013B9FC
// line start: 909
// line end:   914
void FeEnterGame__Fv() {
}


// address: 0x8013BA24
// line start: 930
// line end:   943
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013BA8C
// line start: 947
// line end:   956
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013BAF8
// line start: 960
// line end:   969
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013BB64
// line start: 986
// line end:   991
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8013BBAC
// line start: 996
// line end:   1011
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013BC64
// line start: 1048
// line end:   1054
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013BCAC
// line start: 1058
// line end:   1064
void FeInitBook1Menu__Fv() {
}


// address: 0x8013BCF8
// line start: 1068
// line end:   1074
void FeInitBook2Menu__Fv() {
}


// address: 0x8013BD44
// line start: 1079
// line end:   1112
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013BF40
// line start: 1120
// line end:   1121
void PlayDemo__Fv() {
}


// address: 0x8013BF54
// line start: 1129
// line end:   1145
void FadeFEOut__Fv() {
}


// address: 0x8013C018
// line start: 1161
// line end:   1190
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013C110
// line start: 1199
// line end:   1335
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013C488
// line start: 1342
// line end:   1475
void McMainCharKeyCtrl__Fv() {
	// register: 23
	register int j;
	// register: 30
	register int Spacing;
	// register: 20
	register int fileno;
	// register: 22
	register int sr;
	// register: 21
	register int sg;
	// register: 19
	register int sb;
	// register: 17
	register int SelX;
	// register: 16
	register int len;
}


// address: 0x8013C890
// line start: 1480
// line end:   1482
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x8013C950
// line start: 78
// line end:   78
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013C978
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013C9D4
// line start: 345
// line end:   1484
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013C9F4
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8013D5A4
// line start: 171
// line end:   177
void InitCredits__Fv() {
}


// address: 0x8013D5E0
// line start: 225
// line end:   355
int PrintCredits__FPciiiii(char *Str, int Y, int CharFade, int RFlag, int GFlag, int BFlag) {
	// register: 18
	register int CharHeight;
	// register: 16
	register int Loop;
	// register: 21
	register int Width;
	// address: 0xFFFFFFA8
	auto char *EndPtr;
	// address: 0xFFFFFFB0
	auto int X;
	// register: 9
	register int x0;
	// register: 30
	register int x1;
	// register: 23
	register int x2;
	// register: 22
	register int x3;
	// register: 17
	register int Fade;
	// address: 0xFFFFFF88
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 5
	register int Col;
	// address: 0xFFFFFFB8
	auto int DoneFlag;
}


// address: 0x8013DE04
// line start: 361
// line end:   379
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013DED0
// line start: 386
// line end:   404
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013DFAC
// line start: 413
// line end:   473
void DoCredits__Fv() {
	// address: 0xFFFFFF60
	// size: 0x78
	auto struct CScreen CreditsBack;
	// register: 2
	register int Y;
	// register: 18
	register int Fade;
	// register: 30
	register int Dx;
	// register: 19
	register int Mode;
	// register: 21
	register int TextNo;
	// register: 23
	register unsigned long CreditsCount;
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


// address: 0x8013E230
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013E2AC
// line start: 82
// line end:   82
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013E2EC
// line start: 71
// line end:   78
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013E344
// line start: 345
// line end:   475
void ___7CScreen_addr_8013E344(struct CScreen *this, int __in_chrg);

// address: 0x8013E364
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80142920
// line start: 135
// line end:   139
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x80142954
// line start: 151
// line end:   170
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x801429D4
// line start: 182
// line end:   199
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80142A54
// line start: 210
// line end:   221
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80142AD8
// line start: 229
// line end:   240
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x80142B50
// line start: 262
// line end:   359
void read_card_directory__Fi(int card_number) {
	// address: 0xFFFFFF78
	// size: 0x50
	auto char path[80];
	// register: 17
	// size: 0x28
	register struct DIRENTRY *dir;
	// register: 19
	register int i;
	// register: 17
	register int fh;
	// register: 18
	register int r;
}


// address: 0x80142D5C
// line start: 375
// line end:   447
int test_card_format__Fi(int card_number) {
}


// address: 0x80142E4C
// line start: 460
// line end:   464
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80142E88
// line start: 477
// line end:   515
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80142F80
// line start: 529
// line end:   640
int read_card_file__FiiiPc(int card_number, int file, int id, char *buf) {
	// register: 20
	register int okay;
	// register: 19
	register int tries;
	// register: 17
	register int fd;
	// register: 2
	register int r;
	// register: 16
	register int size;
	// address: 0xFFFFFD90
	// size: 0x200
	auto struct file_header h;
	// address: 0xFFFFFF90
	// size: 0x50
	auto char path[80];
}


// address: 0x80143144
// line start: 652
// line end:   682
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80143208
// line start: 707
// line end:   840
int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf) {
	// address: 0xFFFFFD88
	// size: 0x200
	auto struct file_header h;
	// register: 16
	register int fd;
	// register: 17
	register int failed;
	// register: 22
	register int e;
	// address: 0xFFFFFF88
	// size: 0x50
	auto char path[80];
}


// address: 0x80143560
// line start: 850
// line end:   881
void new_card__Fi(int card_number) {
}


// address: 0x801435F4
// line start: 892
// line end:   974
void service_card__Fi(int card_number) {
	// register: 18
	register int old_status;
}


// address: 0x8015D834
// line start: 175
// line end:   189
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015D8F4
// line start: 193
// line end:   201
int DoSaveOptions__Fv() {
	// register: 5
	register int delete_file_number;
}


// address: 0x8015D948
// line start: 207
// line end:   219
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015DA18
// line start: 223
// line end:   235
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015DAD8
// line start: 241
// line end:   256
void DoLoadGame__Fv() {
}


// address: 0x8015DB68
// line start: 264
// line end:   270
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015DBC4
// line start: 310
// line end:   320
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015DC10
// line start: 325
// line end:   335
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015DC5C
// line start: 340
// line end:   350
void ChooseCardLoad__Fv() {
}


// address: 0x8015DD10
// line start: 354
// line end:   356
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015DD38
// line start: 360
// line end:   376
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015DD94
// line start: 386
// line end:   429
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
}


// address: 0x8015DED0
// line start: 434
// line end:   463
void ShowAlertBox__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT um;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 16
	register int W;
	// register: 17
	register int H;
	// address: 0xFFFFFFC8
	auto int oldBot;
	// register: 30
	register int oldTot;
	// register: 19
	register int lines;
	// register: 17
	register int yprintpos;
}


// address: 0x8015E0A4
// line start: 467
// line end:   492
void ShowCardActionText__FPc(char *Text) {
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


// address: 0x8015E1E8
// line start: 498
// line end:   522
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015E28C
// line start: 526
// line end:   553
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015E364
// line start: 557
// line end:   581
void ShowGameFiles__FPciiG4RECT(char *filename, int saveflag, int Spacing, struct RECT ORect) {
	// register: 22
	register int yoff;
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 6
					register int FileNo;
				}
			}
		}
	}
}


// address: 0x8015E4CC
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015E4EC
// line start: 98
// line end:   98
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015E4F4
// line start: 95
// line end:   95
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015E4FC
// line start: 85
// line end:   88
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015E508
// line start: 78
// line end:   78
void ___6Dialog_addr_8015E508(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015E530
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8015E530(struct Dialog *this) {
}


// address: 0x8015E58C
// line start: 124
// line end:   130
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015E5E0
// line start: 222
// line end:   224
void LoadQuest__Fi(int i) {
}


// address: 0x8015E6A8
// line start: 424
// line end:   431
void ISave__Fi(int v) {
}


// address: 0x8015E708
// line start: 516
// line end:   518
void SaveQuest__Fi(int i) {
}


// address: 0x8015E7D4
// line start: 852
// line end:   941
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
	// register: 17
	register int SaveSize;
}


// address: 0x8015EA74
// line start: 945
// line end:   1044
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 19
	register int DataSize;
	// register: 20
	register unsigned char *LoadBuff;
}


// address: 0x8015ED60
// line start: 1050
// line end:   1070
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015EEC4
// line start: 1074
// line end:   1095
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015F044
// line start: 1099
// line end:   1114
void RestorePads__Fv() {
}


// address: 0x8015F104
// line start: 1118
// line end:   1133
void StorePads__Fv() {
}


// address: 0x8015F1C0
// line start: 1137
// line end:   1140
void GetIcon__Fv() {
}


// address: 0x8015F1FC
// line start: 1144
// line end:   1161
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015F260
// line start: 1165
// line end:   1189
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015F2F8
// line start: 1193
// line end:   1222
void LoadOptions__Fv() {
}


// address: 0x8015F368
// line start: 1226
// line end:   1239
void SaveOptions__Fv() {
}


