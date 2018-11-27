#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x80125114
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x801252BC
// size: 0xD0
extern struct Creds CreditsSubTitle[26];

// address: 0x80125730
// size: 0x108
extern struct Creds CreditsText[33];

// address: 0x80125838
// size: 0x380
extern int CreditsTable[224];

// address: 0x80126A44
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x80126F44
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x80126968
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8012BF88
// size: 0x1C000
extern unsigned char save_buffer[114688];

// address: 0x8012BEF0
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8012BED0
// size: 0x14
extern char *CharFileList[5];

// address: 0x8012BEE4
// size: 0xC
extern char *Classes[3];

// address: 0x8012BF0C
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8012BF28
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8012BF44
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80122BB4
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80122BDC
// line start: 152
// line end:   157
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80122C04
// line start: 163
// line end:   170
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80122C74
// line start: 174
// line end:   179
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80122CF4
// line start: 195
// line end:   251
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
				}
			}
		}
	}
}


// address: 0x80123184
// line start: 255
// line end:   268
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801231F0
// line start: 272
// line end:   284
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123268
// line start: 290
// line end:   301
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123350
// line start: 306
// line end:   317
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123434
// line start: 325
// line end:   326
int FeGetCursor__Fv() {
}


// address: 0x80123448
// line start: 330
// line end:   331
void FeSelect__Fv() {
}


// address: 0x8012348C
// line start: 340
// line end:   384
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80123678
// line start: 388
// line end:   389
void InitDummyMenu__Fv() {
}


// address: 0x80123680
// line start: 395
// line end:   413
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80123744
// line start: 430
// line end:   439
void FeInitMainMenu__Fv() {
}


// address: 0x801237A4
// line start: 456
// line end:   462
void FeInitNewGameMenu__Fv() {
}


// address: 0x801237F0
// line start: 467
// line end:   489
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801238E4
// line start: 507
// line end:   513
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80123934
// line start: 517
// line end:   523
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80123984
// line start: 528
// line end:   531
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801239CC
// line start: 536
// line end:   578
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


// address: 0x80123E68
// line start: 623
// line end:   630
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80123EB8
// line start: 634
// line end:   640
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80123F08
// line start: 645
// line end:   722
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


// address: 0x80124390
// line start: 731
// line end:   738
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80124434
// line start: 745
// line end:   750
void FeEnterGame__Fv() {
}


// address: 0x8012445C
// line start: 766
// line end:   772
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801244A4
// line start: 777
// line end:   786
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80124510
// line start: 790
// line end:   799
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8012457C
// line start: 816
// line end:   821
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801245C0
// line start: 826
// line end:   841
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80124678
// line start: 878
// line end:   884
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801246C0
// line start: 888
// line end:   894
void FeInitBook1Menu__Fv() {
}


// address: 0x8012470C
// line start: 898
// line end:   904
void FeInitBook2Menu__Fv() {
}


// address: 0x80124758
// line start: 909
// line end:   942
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80124954
// line start: 950
// line end:   951
void PlayDemo__Fv() {
}


// address: 0x80124968
// line start: 968
// line end:   1119
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


// address: 0x80124D0C
// line start: 1124
// line end:   1232
void McMainCharKeyCtrl__Fv() {
	// register: 16
	register int j;
	// register: 19
	register int Spacing;
	// register: 9
	register int fileno;
	// register: 8
	register int sr;
	// register: 3
	register int sg;
	// register: 2
	register int sb;
}


// address: 0x80124FD0
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80124FF8
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80125054
// line start: 345
// line end:   1235
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80125BCC
// line start: 152
// line end:   158
void InitCredits__Fv() {
}


// address: 0x80125C08
// line start: 206
// line end:   336
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


// address: 0x80126428
// line start: 341
// line end:   359
void DrawCreditsTitle__Fiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo) {
}


// address: 0x801264F8
// line start: 366
// line end:   384
void DrawCreditsSubTitle__Fiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo) {
}


// address: 0x801265C8
// line start: 393
// line end:   443
void DoCredits__Fv() {
	// address: 0xFFFFFF60
	// size: 0x78
	auto struct CScreen CreditsBack;
	// register: 30
	register int Y;
	// register: 18
	register int Fade;
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


// address: 0x80126820
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8012689C
// line start: 79
// line end:   79
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x801268D4
// line start: 71
// line end:   75
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8012692C
// line start: 345
// line end:   445
void ___7CScreen_addr_8012692C(struct CScreen *this, int __in_chrg);

// address: 0x8012694C
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8012AF44
// line start: 144
// line end:   148
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8012AF78
// line start: 160
// line end:   179
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012AFF8
// line start: 191
// line end:   208
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012B078
// line start: 219
// line end:   231
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8012B10C
// line start: 236
// line end:   248
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8012B194
// line start: 267
// line end:   273
int test_hw_event__Fv() {
}


// address: 0x8012B224
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


// address: 0x8012B45C
// line start: 396
// line end:   435
int test_card_format__Fi(int card_number) {
}


// address: 0x8012B4EC
// line start: 455
// line end:   459
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8012B528
// line start: 472
// line end:   510
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8012B620
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


// address: 0x8012B7D8
// line start: 639
// line end:   669
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x8012B888
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


// address: 0x8012BBD0
// line start: 837
// line end:   864
void new_card__Fi(int card_number) {
}


// address: 0x8012BC4C
// line start: 875
// line end:   940
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x80147F88
// line start: 173
// line end:   187
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80148048
// line start: 193
// line end:   205
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80148110
// line start: 209
// line end:   222
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x801481D0
// line start: 228
// line end:   232
void DoLoadGame__Fv() {
}


// address: 0x80148210
// line start: 239
// line end:   245
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8014826C
// line start: 285
// line end:   295
void McInitLoadCard1Menu__Fv() {
}


// address: 0x801482B8
// line start: 300
// line end:   310
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80148304
// line start: 315
// line end:   322
void ChooseCardLoad__Fv() {
}


// address: 0x801483A0
// line start: 326
// line end:   328
void McInitLoadCharMenu__Fv() {
}


// address: 0x801483C8
// line start: 332
// line end:   348
void McInitLoadGameMenu__Fv() {
}


// address: 0x8014843C
// line start: 380
// line end:   433
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


// address: 0x801485E8
// line start: 438
// line end:   459
void ShowAlertBox__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
	// register: 2
	register int lines;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 2
	register int W;
	// register: 16
	register int H;
}


// address: 0x80148724
// line start: 465
// line end:   486
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x801487BC
// line start: 490
// line end:   517
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x801488A4
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x801488C4
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x801488CC
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x801488D4
// line start: 77
// line end:   77
void ___6Dialog_addr_801488D4(struct Dialog *this, int __in_chrg) {
}


// address: 0x801488FC
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_801488FC(struct Dialog *this) {
}


// address: 0x80148958
// line start: 103
// line end:   109
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x801489AC
// line start: 201
// line end:   203
void LoadQuest__Fi(int i) {
}


// address: 0x80148A74
// line start: 403
// line end:   410
void ISave__Fi(int v) {
}


// address: 0x80148AD4
// line start: 495
// line end:   497
void SaveQuest__Fi(int i) {
}


// address: 0x80148BA0
// line start: 831
// line end:   896
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x80148DE8
// line start: 904
// line end:   997
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x80149064
// line start: 1003
// line end:   1019
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 17
	register int result;
	// register: 16
	register unsigned char *LoadBuff;
}


// address: 0x801491D0
// line start: 1023
// line end:   1044
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


