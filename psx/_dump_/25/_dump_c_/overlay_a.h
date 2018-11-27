#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x80127F74
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8012811C
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x801285B8
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x801286D0
// size: 0x380
extern int CreditsTable[224];

// address: 0x80129900
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x80129E00
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x80129824
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8012ECEC
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x8012EC68
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8012EC48
// size: 0x14
extern char *CharFileList[5];

// address: 0x8012EC5C
// size: 0xC
extern char *Classes[3];

// address: 0x8012EC84
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8012ECA0
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8012ECBC
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x801256F4
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x8012571C
// line start: 156
// line end:   161
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80125744
// line start: 167
// line end:   174
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x801257B8
// line start: 178
// line end:   183
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80125834
// line start: 188
// line end:   259
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
	// register: 18
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 18
	register int SelX;
	// register: 20
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
								// register: 21
								register int Loop;
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


// address: 0x80125D74
// line start: 263
// line end:   276
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80125DF4
// line start: 280
// line end:   293
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80125E78
// line start: 299
// line end:   310
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80125F60
// line start: 315
// line end:   326
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80126044
// line start: 334
// line end:   335
int FeGetCursor__Fv() {
}


// address: 0x80126058
// line start: 339
// line end:   340
void FeSelect__Fv() {
}


// address: 0x8012609C
// line start: 350
// line end:   400
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801262A8
// line start: 404
// line end:   405
void InitDummyMenu__Fv() {
}


// address: 0x801262B0
// line start: 411
// line end:   429
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80126370
// line start: 446
// line end:   455
void FeInitMainMenu__Fv() {
}


// address: 0x801263CC
// line start: 472
// line end:   478
void FeInitNewGameMenu__Fv() {
}


// address: 0x80126418
// line start: 483
// line end:   505
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x8012650C
// line start: 523
// line end:   532
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8012657C
// line start: 536
// line end:   545
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801265EC
// line start: 550
// line end:   553
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80126634
// line start: 558
// line end:   600
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


// address: 0x80126AD0
// line start: 769
// line end:   776
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80126B20
// line start: 780
// line end:   786
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80126B70
// line start: 791
// line end:   903
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


// address: 0x801270B4
// line start: 912
// line end:   924
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


// address: 0x80127184
// line start: 931
// line end:   936
void FeEnterGame__Fv() {
}


// address: 0x801271AC
// line start: 952
// line end:   965
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80127214
// line start: 969
// line end:   978
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80127280
// line start: 982
// line end:   991
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801272EC
// line start: 1008
// line end:   1013
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80127330
// line start: 1018
// line end:   1033
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x801273E8
// line start: 1070
// line end:   1076
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80127430
// line start: 1080
// line end:   1086
void FeInitBook1Menu__Fv() {
}


// address: 0x8012747C
// line start: 1090
// line end:   1096
void FeInitBook2Menu__Fv() {
}


// address: 0x801274C8
// line start: 1101
// line end:   1134
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x801276C4
// line start: 1142
// line end:   1143
void PlayDemo__Fv() {
}


// address: 0x801276D8
// line start: 1151
// line end:   1167
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80127774
// line start: 1181
// line end:   1312
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen FeScreen;
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


// address: 0x80127AF0
// line start: 1317
// line end:   1437
void McMainCharKeyCtrl__Fv() {
	// register: 19
	register int j;
	// register: 22
	register int Spacing;
	// register: 3
	register int fileno;
	// register: 18
	register int sr;
	// register: 17
	register int sg;
	// register: 16
	register int sb;
}


// address: 0x80127E1C
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80127E44
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80127EA0
// line start: 345
// line end:   1440
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80128A64
// line start: 168
// line end:   174
void InitCredits__Fv() {
}


// address: 0x80128AA0
// line start: 222
// line end:   352
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


// address: 0x801292C0
// line start: 358
// line end:   376
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8012938C
// line start: 383
// line end:   401
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x80129468
// line start: 410
// line end:   467
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


// address: 0x801296DC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80129758
// line start: 79
// line end:   79
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80129790
// line start: 71
// line end:   75
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x801297E8
// line start: 345
// line end:   469
void ___7CScreen_addr_801297E8(struct CScreen *this, int __in_chrg);

// address: 0x80129808
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8012DE00
// line start: 144
// line end:   148
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8012DE34
// line start: 160
// line end:   179
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012DEB4
// line start: 191
// line end:   208
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012DF34
// line start: 219
// line end:   231
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8012DFC8
// line start: 236
// line end:   248
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8012E050
// line start: 267
// line end:   273
int test_hw_event__Fv() {
}


// address: 0x8012E0E0
// line start: 283
// line end:   373
void read_card_directory__Fi(int card_number) {
	// address: 0xFFFFFF78
	// size: 0x50
	auto char path[80];
	// register: 17
	// size: 0x28
	register struct DIRENTRY *dir;
	// register: 20
	register int i;
	// register: 17
	register int fh;
	// register: 19
	register int r;
}


// address: 0x8012E318
// line start: 396
// line end:   435
int test_card_format__Fi(int card_number) {
}


// address: 0x8012E3A8
// line start: 455
// line end:   459
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8012E3E4
// line start: 472
// line end:   510
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8012E4DC
// line start: 524
// line end:   627
int read_card_file__FiiiPc(int card_number, int file, int id, char *buf) {
	// register: 20
	register int okay;
	// register: 19
	register int tries;
	// register: 16
	register int fd;
	// register: 6
	register int size;
	// address: 0xFFFFFD90
	// size: 0x200
	auto struct file_header h;
	// address: 0xFFFFFF90
	// size: 0x50
	auto char path[80];
}


// address: 0x8012E694
// line start: 639
// line end:   669
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x8012E744
// line start: 694
// line end:   827
int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf) {
	// address: 0xFFFFFD88
	// size: 0x200
	auto struct file_header h;
	// register: 16
	register int fd;
	// register: 17
	register int failed;
	// register: 17
	register int e;
	// address: 0xFFFFFF88
	// size: 0x50
	auto char path[80];
}


// address: 0x8012EA8C
// line start: 837
// line end:   864
void new_card__Fi(int card_number) {
}


// address: 0x8012EB08
// line start: 875
// line end:   940
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x80148CEC
// line start: 177
// line end:   191
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80148DAC
// line start: 197
// line end:   209
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80148E74
// line start: 213
// line end:   226
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80148F34
// line start: 232
// line end:   236
void DoLoadGame__Fv() {
}


// address: 0x80148F74
// line start: 243
// line end:   249
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x80148FD0
// line start: 289
// line end:   299
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8014901C
// line start: 304
// line end:   314
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80149068
// line start: 319
// line end:   329
void ChooseCardLoad__Fv() {
}


// address: 0x8014911C
// line start: 333
// line end:   335
void McInitLoadCharMenu__Fv() {
}


// address: 0x80149144
// line start: 339
// line end:   355
void McInitLoadGameMenu__Fv() {
}


// address: 0x801491A0
// line start: 365
// line end:   420
void McMainKeyCtrl__Fv() {
	// register: 3
	register int FileNo;
	{
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
}


// address: 0x8014935C
// line start: 425
// line end:   452
void ShowAlertBox__Fv() {
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
	// register: 23
	register int oldBot;
	// register: 22
	register int oldTot;
	// register: 16
	register int lines;
}


// address: 0x801494FC
// line start: 458
// line end:   479
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8014957C
// line start: 483
// line end:   510
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x80149654
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80149674
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014967C
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80149684
// line start: 84
// line end:   87
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80149690
// line start: 77
// line end:   77
void ___6Dialog_addr_80149690(struct Dialog *this, int __in_chrg) {
}


// address: 0x801496B8
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_801496B8(struct Dialog *this) {
}


// address: 0x80149714
// line start: 118
// line end:   124
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80149768
// line start: 216
// line end:   218
void LoadQuest__Fi(int i) {
}


// address: 0x80149830
// line start: 418
// line end:   425
void ISave__Fi(int v) {
}


// address: 0x80149890
// line start: 510
// line end:   512
void SaveQuest__Fi(int i) {
}


// address: 0x8014995C
// line start: 846
// line end:   927
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x80149C24
// line start: 931
// line end:   1022
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x80149F20
// line start: 1028
// line end:   1044
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8014A048
// line start: 1048
// line end:   1069
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8014A1C8
// line start: 1073
// line end:   1089
void RestorePads__Fv() {
}


// address: 0x8014A288
// line start: 1094
// line end:   1109
void StorePads__Fv() {
}


// address: 0x8014A344
// line start: 1113
// line end:   1116
void GetIcon__Fv() {
}


