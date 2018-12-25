#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8013B5FC
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013B7A4
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8013BC40
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013BD58
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013CF98
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013D498
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013CEBC
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x80142390
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x8014230C
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x801422EC
// size: 0x14
extern char *CharFileList[5];

// address: 0x80142300
// size: 0xC
extern char *Classes[3];

// address: 0x80142328
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x80142344
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80142360
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80138AF4
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80138B1C
// line start: 157
// line end:   162
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80138B44
// line start: 168
// line end:   175
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80138BB8
// line start: 179
// line end:   184
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80138C34
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


// address: 0x80138D64
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


// address: 0x80139178
// line start: 294
// line end:   307
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801391F8
// line start: 311
// line end:   329
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801392A4
// line start: 335
// line end:   346
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013938C
// line start: 351
// line end:   362
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139470
// line start: 370
// line end:   371
int FeGetCursor__Fv() {
}


// address: 0x80139484
// line start: 375
// line end:   376
void FeSelect__Fv() {
}


// address: 0x801394C8
// line start: 386
// line end:   437
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139660
// line start: 441
// line end:   442
void InitDummyMenu__Fv() {
}


// address: 0x80139668
// line start: 448
// line end:   466
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80139728
// line start: 483
// line end:   492
void FeInitMainMenu__Fv() {
}


// address: 0x80139784
// line start: 509
// line end:   515
void FeInitNewGameMenu__Fv() {
}


// address: 0x801397D4
// line start: 520
// line end:   553
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x80139908
// line start: 571
// line end:   580
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013997C
// line start: 584
// line end:   593
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801399F0
// line start: 598
// line end:   601
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80139A38
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


// address: 0x80139ED4
// line start: 738
// line end:   746
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80139F1C
// line start: 750
// line end:   757
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80139F64
// line start: 762
// line end:   875
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


// address: 0x8013A4B4
// line start: 884
// line end:   898
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


// address: 0x8013A590
// line start: 905
// line end:   910
void FeEnterGame__Fv() {
}


// address: 0x8013A5B8
// line start: 926
// line end:   939
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013A620
// line start: 943
// line end:   952
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013A68C
// line start: 956
// line end:   965
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013A6F8
// line start: 982
// line end:   987
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8013A740
// line start: 992
// line end:   1007
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013A7F8
// line start: 1044
// line end:   1050
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013A840
// line start: 1054
// line end:   1060
void FeInitBook1Menu__Fv() {
}


// address: 0x8013A88C
// line start: 1064
// line end:   1070
void FeInitBook2Menu__Fv() {
}


// address: 0x8013A8D8
// line start: 1075
// line end:   1108
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013AAD4
// line start: 1116
// line end:   1117
void PlayDemo__Fv() {
}


// address: 0x8013AAE8
// line start: 1125
// line end:   1139
void FadeFEOut__Fv() {
}


// address: 0x8013AB60
// line start: 1155
// line end:   1184
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013AC58
// line start: 1193
// line end:   1329
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013AFD0
// line start: 1336
// line end:   1469
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


// address: 0x8013B3D8
// line start: 1474
// line end:   1476
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x8013B498
// line start: 78
// line end:   78
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013B4C0
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013B51C
// line start: 345
// line end:   1478
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013B53C
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8013C0EC
// line start: 171
// line end:   177
void InitCredits__Fv() {
}


// address: 0x8013C128
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


// address: 0x8013C948
// line start: 361
// line end:   379
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013CA14
// line start: 386
// line end:   404
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013CAF0
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


// address: 0x8013CD74
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013CDF0
// line start: 82
// line end:   82
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013CE28
// line start: 71
// line end:   78
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013CE80
// line start: 345
// line end:   475
void ___7CScreen_addr_8013CE80(struct CScreen *this, int __in_chrg);

// address: 0x8013CEA0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80141498
// line start: 144
// line end:   148
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x801414CC
// line start: 160
// line end:   179
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8014154C
// line start: 191
// line end:   208
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x801415CC
// line start: 219
// line end:   231
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80141660
// line start: 236
// line end:   248
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x801416E8
// line start: 267
// line end:   273
int test_hw_event__Fv() {
}


// address: 0x80141778
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


// address: 0x801419B0
// line start: 396
// line end:   435
int test_card_format__Fi(int card_number) {
}


// address: 0x80141A40
// line start: 455
// line end:   459
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80141A7C
// line start: 472
// line end:   510
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80141B74
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


// address: 0x80141D2C
// line start: 639
// line end:   669
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x80141DDC
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


// address: 0x80142124
// line start: 837
// line end:   864
void new_card__Fi(int card_number) {
}


// address: 0x801421A0
// line start: 875
// line end:   940
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x8015C390
// line start: 175
// line end:   189
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015C450
// line start: 195
// line end:   207
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015C520
// line start: 211
// line end:   224
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015C5E0
// line start: 230
// line end:   234
void DoLoadGame__Fv() {
}


// address: 0x8015C620
// line start: 241
// line end:   247
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015C67C
// line start: 287
// line end:   297
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015C6C8
// line start: 302
// line end:   312
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015C714
// line start: 317
// line end:   327
void ChooseCardLoad__Fv() {
}


// address: 0x8015C7C8
// line start: 331
// line end:   333
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015C7F0
// line start: 337
// line end:   353
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015C84C
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


// address: 0x8015CA08
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


// address: 0x8015CBA8
// line start: 456
// line end:   480
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015CC4C
// line start: 484
// line end:   511
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015CD24
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015CD44
// line start: 98
// line end:   98
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015CD4C
// line start: 95
// line end:   95
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015CD54
// line start: 85
// line end:   88
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015CD60
// line start: 78
// line end:   78
void ___6Dialog_addr_8015CD60(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015CD88
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8015CD88(struct Dialog *this) {
}


// address: 0x8015CDE4
// line start: 122
// line end:   128
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015CE38
// line start: 220
// line end:   222
void LoadQuest__Fi(int i) {
}


// address: 0x8015CF00
// line start: 422
// line end:   429
void ISave__Fi(int v) {
}


// address: 0x8015CF60
// line start: 514
// line end:   516
void SaveQuest__Fi(int i) {
}


// address: 0x8015D02C
// line start: 850
// line end:   921
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015D2A4
// line start: 925
// line end:   1008
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015D554
// line start: 1014
// line end:   1034
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015D6B8
// line start: 1038
// line end:   1061
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015D850
// line start: 1065
// line end:   1081
void RestorePads__Fv() {
}


// address: 0x8015D910
// line start: 1086
// line end:   1101
void StorePads__Fv() {
}


// address: 0x8015D9CC
// line start: 1105
// line end:   1108
void GetIcon__Fv() {
}


// address: 0x8015DA08
// line start: 1112
// line end:   1129
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015DA6C
// line start: 1133
// line end:   1159
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015DB10
// line start: 1163
// line end:   1200
void LoadOptions__Fv() {
}


// address: 0x8015DB88
// line start: 1204
// line end:   1220
void SaveOptions__Fv() {
}


