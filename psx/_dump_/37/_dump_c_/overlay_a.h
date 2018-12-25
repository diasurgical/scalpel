#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x80126A48
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x80126BF0
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8012708C
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x801271A4
// size: 0x380
extern int CreditsTable[224];

// address: 0x801283D4
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x801288D4
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x801282F8
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8012D7D4
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x8012D73C
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8012D71C
// size: 0x14
extern char *CharFileList[5];

// address: 0x8012D730
// size: 0xC
extern char *Classes[3];

// address: 0x8012D758
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8012D774
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8012D790
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x8012427C
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x801242A4
// line start: 156
// line end:   161
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801242CC
// line start: 167
// line end:   174
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x8012433C
// line start: 178
// line end:   183
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x801243BC
// line start: 199
// line end:   258
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
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


// address: 0x80124874
// line start: 262
// line end:   275
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801248F4
// line start: 279
// line end:   292
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80124978
// line start: 298
// line end:   309
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80124A60
// line start: 314
// line end:   325
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80124B44
// line start: 333
// line end:   334
int FeGetCursor__Fv() {
}


// address: 0x80124B58
// line start: 338
// line end:   339
void FeSelect__Fv() {
}


// address: 0x80124B9C
// line start: 349
// line end:   399
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80124DA8
// line start: 403
// line end:   404
void InitDummyMenu__Fv() {
}


// address: 0x80124DB0
// line start: 410
// line end:   428
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80124E74
// line start: 445
// line end:   454
void FeInitMainMenu__Fv() {
}


// address: 0x80124ED0
// line start: 471
// line end:   477
void FeInitNewGameMenu__Fv() {
}


// address: 0x80124F1C
// line start: 482
// line end:   504
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80125010
// line start: 522
// line end:   528
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80125060
// line start: 532
// line end:   538
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801250B0
// line start: 543
// line end:   546
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801250F8
// line start: 551
// line end:   593
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


// address: 0x80125594
// line start: 638
// line end:   645
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801255E4
// line start: 649
// line end:   655
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80125634
// line start: 660
// line end:   749
void FeNewNameMenuCtrl__Fv() {
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


// address: 0x80125B84
// line start: 758
// line end:   770
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


// address: 0x80125C54
// line start: 777
// line end:   782
void FeEnterGame__Fv() {
}


// address: 0x80125C7C
// line start: 798
// line end:   811
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80125CE4
// line start: 815
// line end:   824
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80125D50
// line start: 828
// line end:   837
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80125DBC
// line start: 854
// line end:   859
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80125E00
// line start: 864
// line end:   879
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80125EB8
// line start: 916
// line end:   922
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80125F00
// line start: 926
// line end:   932
void FeInitBook1Menu__Fv() {
}


// address: 0x80125F4C
// line start: 936
// line end:   942
void FeInitBook2Menu__Fv() {
}


// address: 0x80125F98
// line start: 947
// line end:   980
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80126194
// line start: 988
// line end:   989
void PlayDemo__Fv() {
}


// address: 0x801261A8
// line start: 997
// line end:   1013
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8012625C
// line start: 1027
// line end:   1157
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


// address: 0x801265C4
// line start: 1162
// line end:   1282
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


// address: 0x801268F0
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80126918
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80126974
// line start: 345
// line end:   1285
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80127538
// line start: 168
// line end:   174
void InitCredits__Fv() {
}


// address: 0x80127574
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


// address: 0x80127D94
// line start: 358
// line end:   376
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x80127E60
// line start: 383
// line end:   401
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x80127F3C
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


// address: 0x801281B0
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8012822C
// line start: 79
// line end:   79
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80128264
// line start: 71
// line end:   75
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x801282BC
// line start: 345
// line end:   469
void ___7CScreen_addr_801282BC(struct CScreen *this, int __in_chrg);

// address: 0x801282DC
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8012C8D4
// line start: 144
// line end:   148
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8012C908
// line start: 160
// line end:   179
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012C988
// line start: 191
// line end:   208
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012CA08
// line start: 219
// line end:   231
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8012CA9C
// line start: 236
// line end:   248
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8012CB24
// line start: 267
// line end:   273
int test_hw_event__Fv() {
}


// address: 0x8012CBB4
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


// address: 0x8012CDEC
// line start: 396
// line end:   435
int test_card_format__Fi(int card_number) {
}


// address: 0x8012CE7C
// line start: 455
// line end:   459
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8012CEB8
// line start: 472
// line end:   510
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8012CFB0
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


// address: 0x8012D168
// line start: 639
// line end:   669
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x8012D218
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


// address: 0x8012D560
// line start: 837
// line end:   864
void new_card__Fi(int card_number) {
}


// address: 0x8012D5DC
// line start: 875
// line end:   940
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x801477D4
// line start: 177
// line end:   191
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80147894
// line start: 197
// line end:   209
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014795C
// line start: 213
// line end:   226
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80147A1C
// line start: 232
// line end:   236
void DoLoadGame__Fv() {
}


// address: 0x80147A5C
// line start: 243
// line end:   249
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x80147AB8
// line start: 289
// line end:   299
void McInitLoadCard1Menu__Fv() {
}


// address: 0x80147B04
// line start: 304
// line end:   314
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80147B50
// line start: 319
// line end:   329
void ChooseCardLoad__Fv() {
}


// address: 0x80147C04
// line start: 333
// line end:   335
void McInitLoadCharMenu__Fv() {
}


// address: 0x80147C2C
// line start: 339
// line end:   355
void McInitLoadGameMenu__Fv() {
}


// address: 0x80147C88
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


// address: 0x80147E44
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


// address: 0x80147FE4
// line start: 458
// line end:   479
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x80148064
// line start: 483
// line end:   510
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8014813C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8014815C
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80148164
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014816C
// line start: 84
// line end:   87
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80148178
// line start: 77
// line end:   77
void ___6Dialog_addr_80148178(struct Dialog *this, int __in_chrg) {
}


// address: 0x801481A0
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_801481A0(struct Dialog *this) {
}


// address: 0x801481FC
// line start: 116
// line end:   122
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80148250
// line start: 214
// line end:   216
void LoadQuest__Fi(int i) {
}


// address: 0x80148318
// line start: 416
// line end:   423
void ISave__Fi(int v) {
}


// address: 0x80148378
// line start: 508
// line end:   510
void SaveQuest__Fi(int i) {
}


// address: 0x80148444
// line start: 844
// line end:   923
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x801486F8
// line start: 927
// line end:   1018
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x801489F4
// line start: 1024
// line end:   1040
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80148B1C
// line start: 1044
// line end:   1063
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 10
	register unsigned char *SaveBuff;
}


// address: 0x80148C74
// line start: 1067
// line end:   1083
void RestorePads__Fv() {
}


// address: 0x80148D34
// line start: 1088
// line end:   1103
void StorePads__Fv() {
}


