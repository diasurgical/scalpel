#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8012BBEC
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8012BD94
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8012C230
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8012C348
// size: 0x380
extern int CreditsTable[224];

// address: 0x8012D508
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8012DA08
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8012D468
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8013291C
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x80132898
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x80132878
// size: 0x14
extern char *CharFileList[5];

// address: 0x8013288C
// size: 0xC
extern char *Classes[3];

// address: 0x801328B4
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x801328D0
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x801328EC
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80129014
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x8012903C
// line start: 161
// line end:   166
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80129064
// line start: 172
// line end:   179
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x801290D8
// line start: 183
// line end:   188
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80129154
// line start: 192
// line end:   208
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


// address: 0x80129284
// line start: 215
// line end:   294
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


// address: 0x80129698
// line start: 298
// line end:   311
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80129718
// line start: 315
// line end:   335
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801297D4
// line start: 342
// line end:   353
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801298BC
// line start: 358
// line end:   369
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801299A0
// line start: 377
// line end:   378
int FeGetCursor__Fv() {
}


// address: 0x801299B4
// line start: 382
// line end:   383
void FeSelect__Fv() {
}


// address: 0x801299F8
// line start: 393
// line end:   444
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80129BA4
// line start: 448
// line end:   449
void InitDummyMenu__Fv() {
}


// address: 0x80129BAC
// line start: 455
// line end:   473
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80129C6C
// line start: 490
// line end:   500
void FeInitMainMenu__Fv() {
}


// address: 0x80129CCC
// line start: 517
// line end:   523
void FeInitNewGameMenu__Fv() {
}


// address: 0x80129D1C
// line start: 528
// line end:   573
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80129E88
// line start: 591
// line end:   600
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80129EFC
// line start: 604
// line end:   613
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80129F70
// line start: 618
// line end:   621
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80129FB8
// line start: 626
// line end:   668
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


// address: 0x8012A440
// line start: 758
// line end:   766
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x8012A488
// line start: 770
// line end:   777
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8012A4D0
// line start: 782
// line end:   905
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


// address: 0x8012AA64
// line start: 914
// line end:   926
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


// address: 0x8012AB34
// line start: 933
// line end:   938
void FeEnterGame__Fv() {
}


// address: 0x8012AB5C
// line start: 954
// line end:   967
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8012ABC4
// line start: 971
// line end:   980
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8012AC30
// line start: 984
// line end:   993
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8012AC9C
// line start: 1010
// line end:   1015
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8012ACE4
// line start: 1020
// line end:   1035
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8012AD9C
// line start: 1072
// line end:   1078
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8012ADE4
// line start: 1082
// line end:   1088
void FeInitBook1Menu__Fv() {
}


// address: 0x8012AE30
// line start: 1092
// line end:   1098
void FeInitBook2Menu__Fv() {
}


// address: 0x8012AE7C
// line start: 1103
// line end:   1136
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8012B078
// line start: 1144
// line end:   1145
void PlayDemo__Fv() {
}


// address: 0x8012B08C
// line start: 1160
// line end:   1176
void FadeFEOut__Fv() {
}


// address: 0x8012B150
// line start: 1192
// line end:   1221
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8012B248
// line start: 1230
// line end:   1366
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8012B5C0
// line start: 1373
// line end:   1506
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


// address: 0x8012B9C8
// line start: 1511
// line end:   1513
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x8012BA88
// line start: 78
// line end:   78
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8012BAB0
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8012BB0C
// line start: 345
// line end:   1515
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8012BB2C
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8012C6DC
// line start: 171
// line end:   177
void InitCredits__Fv() {
}


// address: 0x8012C718
// line start: 225
// line end:   355
int PrintCredits__FPciiiii(char *Str, int Y, int CharFade, int RFlag, int GFlag, int BFlag) {
	// register: 18
	register int CharHeight;
	// register: 16
	register int Loop;
	// register: 21
	register int Width;
	// address: 0xFFFFFF98
	auto char *EndPtr;
	// address: 0xFFFFFFA0
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
	// address: 0xFFFFFF78
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 5
	register int Col;
	// address: 0xFFFFFFA8
	auto int DoneFlag;
}


// address: 0x8012CF44
// line start: 361
// line end:   379
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8012D010
// line start: 386
// line end:   404
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8012D0EC
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


// address: 0x8012D370
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8012D3EC
// line start: 73
// line end:   73
int GetCharHeight__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x8012D42C
// line start: 345
// line end:   475
void ___7CScreen_addr_8012D42C(struct CScreen *this, int __in_chrg);

// address: 0x8012D44C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80131A08
// line start: 135
// line end:   139
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x80131A3C
// line start: 151
// line end:   170
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80131ABC
// line start: 182
// line end:   199
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80131B3C
// line start: 210
// line end:   221
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80131BC0
// line start: 229
// line end:   240
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x80131C38
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


// address: 0x80131E44
// line start: 375
// line end:   447
int test_card_format__Fi(int card_number) {
}


// address: 0x80131F34
// line start: 460
// line end:   464
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80131F70
// line start: 477
// line end:   515
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80132068
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


// address: 0x8013222C
// line start: 652
// line end:   682
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x801322F0
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


// address: 0x80132648
// line start: 850
// line end:   881
void new_card__Fi(int card_number) {
}


// address: 0x801326DC
// line start: 892
// line end:   974
void service_card__Fi(int card_number) {
	// register: 18
	register int old_status;
}


// address: 0x8014C91C
// line start: 176
// line end:   190
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8014C9DC
// line start: 194
// line end:   202
int DoSaveOptions__Fv() {
	// register: 5
	register int delete_file_number;
}


// address: 0x8014CA30
// line start: 208
// line end:   220
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014CB00
// line start: 224
// line end:   236
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014CBC0
// line start: 242
// line end:   264
void DoLoadGame__Fv() {
	{
		{
			{
				// register: 3
				register int result;
			}
		}
	}
}


// address: 0x8014CC64
// line start: 272
// line end:   278
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8014CCC0
// line start: 318
// line end:   328
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8014CD0C
// line start: 333
// line end:   343
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8014CD58
// line start: 348
// line end:   358
void ChooseCardLoad__Fv() {
}


// address: 0x8014CE0C
// line start: 362
// line end:   364
void McInitLoadCharMenu__Fv() {
}


// address: 0x8014CE34
// line start: 368
// line end:   384
void McInitLoadGameMenu__Fv() {
}


// address: 0x8014CE90
// line start: 394
// line end:   437
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
}


// address: 0x8014CFCC
// line start: 442
// line end:   471
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


// address: 0x8014D198
// line start: 475
// line end:   500
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


// address: 0x8014D2D4
// line start: 506
// line end:   530
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8014D378
// line start: 534
// line end:   561
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8014D450
// line start: 565
// line end:   589
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


// address: 0x8014D5B8
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8014D5D8
// line start: 98
// line end:   98
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014D5E0
// line start: 95
// line end:   95
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014D5E8
// line start: 85
// line end:   88
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8014D5F4
// line start: 78
// line end:   78
void ___6Dialog_addr_8014D5F4(struct Dialog *this, int __in_chrg) {
}


// address: 0x8014D61C
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8014D61C(struct Dialog *this) {
}


// address: 0x8014D678
// line start: 125
// line end:   131
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8014D6CC
// line start: 150
// line end:   152
unsigned char OLoad__Fv() {
}


// address: 0x8014D6F0
// line start: 221
// line end:   223
void LoadQuest__Fi(int i) {
}


// address: 0x8014D7B8
// line start: 423
// line end:   430
void ISave__Fi(int v) {
}


// address: 0x8014D818
// line start: 447
// line end:   449
void OSave__FUc(unsigned char v) {
}


// address: 0x8014D85C
// line start: 514
// line end:   516
void SaveQuest__Fi(int i) {
}


// address: 0x8014D928
// line start: 850
// line end:   947
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 19
	register unsigned char *SaveBuff;
	// register: 16
	register int SaveSize;
}


// address: 0x8014DCB0
// line start: 951
// line end:   993
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 2
	register int result;
	// register: 18
	register unsigned char *LoadBuff;
}


// address: 0x8014DDC0
// line start: 999
// line end:   1019
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8014DF24
// line start: 1023
// line end:   1044
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8014E0A4
// line start: 1048
// line end:   1063
void RestorePads__Fv() {
}


// address: 0x8014E164
// line start: 1067
// line end:   1082
void StorePads__Fv() {
}


// address: 0x8014E220
// line start: 1086
// line end:   1089
void GetIcon__Fv() {
}


// address: 0x8014E25C
// line start: 1093
// line end:   1110
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8014E2C0
// line start: 1114
// line end:   1138
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8014E358
// line start: 1142
// line end:   1171
void LoadOptions__Fv() {
}


// address: 0x8014E3C8
// line start: 1175
// line end:   1188
void SaveOptions__Fv() {
}


// address: 0x8014E428
// line start: 1192
// line end:   1267
int RestoreLoadedData__Fv() {
	// register: 2
	register unsigned char *LoadBuff;
	// register: 18
	register int DataSize;
	// register: 17
	register int i;
}


