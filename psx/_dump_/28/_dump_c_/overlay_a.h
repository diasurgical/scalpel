#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8013A444
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013A5EC
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8013AA88
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013ABA0
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013BDD0
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013C2D0
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013BCF4
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x801411C8
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x80141144
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x80141124
// size: 0x14
extern char *CharFileList[5];

// address: 0x80141138
// size: 0xC
extern char *Classes[3];

// address: 0x80141160
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8014117C
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80141198
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80137BE4
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80137C0C
// line start: 156
// line end:   161
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80137C34
// line start: 167
// line end:   174
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80137CA8
// line start: 178
// line end:   183
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80137D24
// line start: 188
// line end:   262
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
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x801381FC
// line start: 266
// line end:   279
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013827C
// line start: 283
// line end:   296
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80138300
// line start: 302
// line end:   313
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801383E8
// line start: 318
// line end:   329
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801384CC
// line start: 337
// line end:   338
int FeGetCursor__Fv() {
}


// address: 0x801384E0
// line start: 342
// line end:   343
void FeSelect__Fv() {
}


// address: 0x80138524
// line start: 353
// line end:   403
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80138730
// line start: 407
// line end:   408
void InitDummyMenu__Fv() {
}


// address: 0x80138738
// line start: 414
// line end:   432
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x801387F8
// line start: 449
// line end:   458
void FeInitMainMenu__Fv() {
}


// address: 0x80138854
// line start: 475
// line end:   481
void FeInitNewGameMenu__Fv() {
}


// address: 0x801388A0
// line start: 486
// line end:   508
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80138994
// line start: 526
// line end:   535
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80138A04
// line start: 539
// line end:   548
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80138A74
// line start: 553
// line end:   556
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80138ABC
// line start: 561
// line end:   603
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


// address: 0x80138F58
// line start: 772
// line end:   779
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80138FA8
// line start: 783
// line end:   789
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80138FF8
// line start: 794
// line end:   906
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


// address: 0x8013953C
// line start: 915
// line end:   927
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


// address: 0x8013960C
// line start: 934
// line end:   939
void FeEnterGame__Fv() {
}


// address: 0x80139634
// line start: 955
// line end:   968
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013969C
// line start: 972
// line end:   981
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80139708
// line start: 985
// line end:   994
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80139774
// line start: 1011
// line end:   1016
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801397B8
// line start: 1021
// line end:   1036
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80139870
// line start: 1073
// line end:   1079
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801398B8
// line start: 1083
// line end:   1089
void FeInitBook1Menu__Fv() {
}


// address: 0x80139904
// line start: 1093
// line end:   1099
void FeInitBook2Menu__Fv() {
}


// address: 0x80139950
// line start: 1104
// line end:   1137
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80139B4C
// line start: 1145
// line end:   1146
void PlayDemo__Fv() {
}


// address: 0x80139B60
// line start: 1154
// line end:   1174
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139C04
// line start: 1188
// line end:   1322
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


// address: 0x80139FC0
// line start: 1327
// line end:   1447
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


// address: 0x8013A2EC
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013A314
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013A370
// line start: 345
// line end:   1450
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013AF34
// line start: 168
// line end:   174
void InitCredits__Fv() {
}


// address: 0x8013AF70
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


// address: 0x8013B790
// line start: 358
// line end:   376
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013B85C
// line start: 383
// line end:   401
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013B938
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


// address: 0x8013BBAC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013BC28
// line start: 79
// line end:   79
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013BC60
// line start: 71
// line end:   75
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013BCB8
// line start: 345
// line end:   469
void ___7CScreen_addr_8013BCB8(struct CScreen *this, int __in_chrg);

// address: 0x8013BCD8
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x801402D0
// line start: 144
// line end:   148
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x80140304
// line start: 160
// line end:   179
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80140384
// line start: 191
// line end:   208
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80140404
// line start: 219
// line end:   231
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80140498
// line start: 236
// line end:   248
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x80140520
// line start: 267
// line end:   273
int test_hw_event__Fv() {
}


// address: 0x801405B0
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


// address: 0x801407E8
// line start: 396
// line end:   435
int test_card_format__Fi(int card_number) {
}


// address: 0x80140878
// line start: 455
// line end:   459
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x801408B4
// line start: 472
// line end:   510
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x801409AC
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


// address: 0x80140B64
// line start: 639
// line end:   669
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x80140C14
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


// address: 0x80140F5C
// line start: 837
// line end:   864
void new_card__Fi(int card_number) {
}


// address: 0x80140FD8
// line start: 875
// line end:   940
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x8015B1C8
// line start: 175
// line end:   189
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015B288
// line start: 195
// line end:   207
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015B350
// line start: 211
// line end:   224
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015B410
// line start: 230
// line end:   234
void DoLoadGame__Fv() {
}


// address: 0x8015B450
// line start: 241
// line end:   247
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015B4AC
// line start: 287
// line end:   297
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015B4F8
// line start: 302
// line end:   312
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015B544
// line start: 317
// line end:   327
void ChooseCardLoad__Fv() {
}


// address: 0x8015B5F8
// line start: 331
// line end:   333
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015B620
// line start: 337
// line end:   353
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015B67C
// line start: 363
// line end:   418
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


// address: 0x8015B838
// line start: 423
// line end:   450
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


// address: 0x8015B9D8
// line start: 456
// line end:   477
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015BA58
// line start: 481
// line end:   508
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015BB30
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015BB50
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015BB58
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015BB60
// line start: 84
// line end:   87
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015BB6C
// line start: 77
// line end:   77
void ___6Dialog_addr_8015BB6C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015BB94
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8015BB94(struct Dialog *this) {
}


// address: 0x8015BBF0
// line start: 118
// line end:   124
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015BC44
// line start: 216
// line end:   218
void LoadQuest__Fi(int i) {
}


// address: 0x8015BD0C
// line start: 418
// line end:   425
void ISave__Fi(int v) {
}


// address: 0x8015BD6C
// line start: 510
// line end:   512
void SaveQuest__Fi(int i) {
}


// address: 0x8015BE38
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


// address: 0x8015C100
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


// address: 0x8015C3FC
// line start: 1028
// line end:   1044
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C524
// line start: 1048
// line end:   1069
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015C6A4
// line start: 1073
// line end:   1089
void RestorePads__Fv() {
}


// address: 0x8015C764
// line start: 1094
// line end:   1109
void StorePads__Fv() {
}


// address: 0x8015C820
// line start: 1113
// line end:   1116
void GetIcon__Fv() {
}


// address: 0x8015C85C
// line start: 1120
// line end:   1145
int PSX_OPT_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C904
// line start: 1149
// line end:   1181
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


