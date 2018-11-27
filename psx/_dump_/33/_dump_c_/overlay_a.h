#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8013B5E0
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013B788
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8013BC24
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013BD3C
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013CF6C
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013D46C
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013CE90
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x80142364
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x801422E0
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x801422C0
// size: 0x14
extern char *CharFileList[5];

// address: 0x801422D4
// size: 0xC
extern char *Classes[3];

// address: 0x801422FC
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x80142318
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80142334
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80138C2C
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80138C54
// line start: 157
// line end:   162
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80138C7C
// line start: 168
// line end:   175
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80138CF0
// line start: 179
// line end:   184
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80138D6C
// line start: 191
// line end:   270
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


// address: 0x80139180
// line start: 274
// line end:   287
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80139200
// line start: 291
// line end:   309
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801392AC
// line start: 315
// line end:   326
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139394
// line start: 331
// line end:   342
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139478
// line start: 350
// line end:   351
int FeGetCursor__Fv() {
}


// address: 0x8013948C
// line start: 355
// line end:   356
void FeSelect__Fv() {
}


// address: 0x801394D0
// line start: 366
// line end:   417
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139668
// line start: 421
// line end:   422
void InitDummyMenu__Fv() {
}


// address: 0x80139670
// line start: 428
// line end:   446
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80139730
// line start: 463
// line end:   472
void FeInitMainMenu__Fv() {
}


// address: 0x8013978C
// line start: 489
// line end:   495
void FeInitNewGameMenu__Fv() {
}


// address: 0x801397DC
// line start: 500
// line end:   533
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x80139900
// line start: 551
// line end:   560
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80139974
// line start: 564
// line end:   573
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801399E8
// line start: 578
// line end:   581
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80139A30
// line start: 586
// line end:   628
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


// address: 0x80139ECC
// line start: 797
// line end:   805
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80139F14
// line start: 809
// line end:   816
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80139F5C
// line start: 821
// line end:   934
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


// address: 0x8013A4AC
// line start: 943
// line end:   955
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


// address: 0x8013A57C
// line start: 962
// line end:   967
void FeEnterGame__Fv() {
}


// address: 0x8013A5A4
// line start: 983
// line end:   996
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013A60C
// line start: 1000
// line end:   1009
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013A678
// line start: 1013
// line end:   1022
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013A6E4
// line start: 1039
// line end:   1044
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8013A72C
// line start: 1049
// line end:   1064
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013A7E4
// line start: 1101
// line end:   1107
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013A82C
// line start: 1111
// line end:   1117
void FeInitBook1Menu__Fv() {
}


// address: 0x8013A878
// line start: 1121
// line end:   1127
void FeInitBook2Menu__Fv() {
}


// address: 0x8013A8C4
// line start: 1132
// line end:   1165
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013AAC0
// line start: 1173
// line end:   1174
void PlayDemo__Fv() {
}


// address: 0x8013AAD4
// line start: 1182
// line end:   1196
void FadeFEOut__Fv() {
}


// address: 0x8013AB4C
// line start: 1212
// line end:   1239
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013AC3C
// line start: 1248
// line end:   1384
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013AFB4
// line start: 1391
// line end:   1524
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


// address: 0x8013B3BC
// line start: 1529
// line end:   1531
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x8013B47C
// line start: 78
// line end:   78
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013B4A4
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013B500
// line start: 345
// line end:   1533
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013B520
// line start: 91
// line end:   93
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8013C0D0
// line start: 168
// line end:   174
void InitCredits__Fv() {
}


// address: 0x8013C10C
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


// address: 0x8013C92C
// line start: 358
// line end:   376
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013C9F8
// line start: 383
// line end:   401
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013CAD4
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


// address: 0x8013CD48
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013CDC4
// line start: 82
// line end:   82
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013CDFC
// line start: 71
// line end:   78
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013CE54
// line start: 345
// line end:   469
void ___7CScreen_addr_8013CE54(struct CScreen *this, int __in_chrg);

// address: 0x8013CE74
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8014146C
// line start: 144
// line end:   148
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x801414A0
// line start: 160
// line end:   179
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80141520
// line start: 191
// line end:   208
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x801415A0
// line start: 219
// line end:   231
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80141634
// line start: 236
// line end:   248
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x801416BC
// line start: 267
// line end:   273
int test_hw_event__Fv() {
}


// address: 0x8014174C
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


// address: 0x80141984
// line start: 396
// line end:   435
int test_card_format__Fi(int card_number) {
}


// address: 0x80141A14
// line start: 455
// line end:   459
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80141A50
// line start: 472
// line end:   510
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80141B48
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


// address: 0x80141D00
// line start: 639
// line end:   669
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x80141DB0
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


// address: 0x801420F8
// line start: 837
// line end:   864
void new_card__Fi(int card_number) {
}


// address: 0x80142174
// line start: 875
// line end:   940
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x8015C364
// line start: 175
// line end:   189
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015C424
// line start: 195
// line end:   207
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015C4EC
// line start: 211
// line end:   224
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015C5AC
// line start: 230
// line end:   234
void DoLoadGame__Fv() {
}


// address: 0x8015C5EC
// line start: 241
// line end:   247
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015C648
// line start: 287
// line end:   297
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015C694
// line start: 302
// line end:   312
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015C6E0
// line start: 317
// line end:   327
void ChooseCardLoad__Fv() {
}


// address: 0x8015C794
// line start: 331
// line end:   333
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015C7BC
// line start: 337
// line end:   353
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015C818
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


// address: 0x8015C9D4
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


// address: 0x8015CB74
// line start: 456
// line end:   480
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015CC18
// line start: 484
// line end:   511
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015CCF0
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015CD10
// line start: 98
// line end:   98
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015CD18
// line start: 95
// line end:   95
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015CD20
// line start: 85
// line end:   88
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015CD2C
// line start: 78
// line end:   78
void ___6Dialog_addr_8015CD2C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015CD54
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog_addr_8015CD54(struct Dialog *this) {
}


// address: 0x8015CDB0
// line start: 122
// line end:   128
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015CE04
// line start: 220
// line end:   222
void LoadQuest__Fi(int i) {
}


// address: 0x8015CECC
// line start: 422
// line end:   429
void ISave__Fi(int v) {
}


// address: 0x8015CF2C
// line start: 514
// line end:   516
void SaveQuest__Fi(int i) {
}


// address: 0x8015CFF8
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


// address: 0x8015D270
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


// address: 0x8015D520
// line start: 1014
// line end:   1034
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015D684
// line start: 1038
// line end:   1059
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015D804
// line start: 1063
// line end:   1079
void RestorePads__Fv() {
}


// address: 0x8015D8C4
// line start: 1084
// line end:   1099
void StorePads__Fv() {
}


// address: 0x8015D980
// line start: 1103
// line end:   1106
void GetIcon__Fv() {
}


// address: 0x8015D9BC
// line start: 1110
// line end:   1127
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015DA20
// line start: 1131
// line end:   1157
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015DAC4
// line start: 1161
// line end:   1198
void LoadOptions__Fv() {
}


// address: 0x8015DB3C
// line start: 1202
// line end:   1218
void SaveOptions__Fv() {
}


