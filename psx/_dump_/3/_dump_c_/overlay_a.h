#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x80144A9C
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x80144C44
// size: 0xD0
extern struct Creds CreditsSubTitle[26];

// address: 0x801450B8
// size: 0x108
extern struct Creds CreditsText[33];

// address: 0x801451C0
// size: 0x380
extern int CreditsTable[224];

// address: 0x80147960
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x80147E60
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x80147884
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8014CE0C
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8014CDEC
// size: 0x14
extern char *CharFileList[5];

// address: 0x8014CE00
// size: 0xC
extern char *Classes[3];

// address: 0x8014CE28
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8014CE44
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8014CE60
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x801419A4
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x801419CC
// line start: 256
// line end:   261
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801419F4
// line start: 267
// line end:   274
void FeAddEntry__Fii8TXT_JUSTPcP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, char *Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80141A64
// line start: 289
// line end:   346
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// register: 5
	register int X;
	// register: 6
	register int Y;
	// register: 3
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 17
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


// address: 0x80141E14
// line start: 350
// line end:   363
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80141E80
// line start: 367
// line end:   379
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80141EF8
// line start: 385
// line end:   396
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80141FE0
// line start: 401
// line end:   412
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801420C4
// line start: 420
// line end:   421
int FeGetCursor__Fv() {
}


// address: 0x801420D8
// line start: 425
// line end:   426
void FeSelect__Fv() {
}


// address: 0x8014211C
// line start: 435
// line end:   489
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80142308
// line start: 495
// line end:   522
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x801423F4
// line start: 529
// line end:   543
void FeInitMainMenu__Fv() {
}


// address: 0x8014251C
// line start: 561
// line end:   570
void FeInitNewGameMenu__Fv() {
}


// address: 0x801425E0
// line start: 575
// line end:   597
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801426D4
// line start: 605
// line end:   614
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801427D0
// line start: 618
// line end:   627
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801428CC
// line start: 632
// line end:   635
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80142914
// line start: 640
// line end:   682
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


// address: 0x80142D98
// line start: 691
// line end:   730
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801431BC
// line start: 734
// line end:   771
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x801435E0
// line start: 776
// line end:   852
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


// address: 0x801439F8
// line start: 861
// line end:   868
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80143A9C
// line start: 875
// line end:   880
void FeEnterGame__Fv() {
}


// address: 0x80143ADC
// line start: 889
// line end:   897
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80143B94
// line start: 901
// line end:   910
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80143C04
// line start: 914
// line end:   923
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80143C74
// line start: 931
// line end:   939
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80143D48
// line start: 944
// line end:   959
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80143E00
// line start: 967
// line end:   977
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80143EE8
// line start: 981
// line end:   991
void FeInitBook1Menu__Fv() {
}


// address: 0x80143FE4
// line start: 995
// line end:   1005
void FeInitBook2Menu__Fv() {
}


// address: 0x801440E0
// line start: 1010
// line end:   1043
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x801442DC
// line start: 1059
// line end:   1062
void InitDummyMenu__Fv() {
}


// address: 0x801442E4
// line start: 1067
// line end:   1068
void PlayDemo__Fv() {
}


// address: 0x801442F8
// line start: 1085
// line end:   1222
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF80
	// size: 0x74
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


// address: 0x80144694
// line start: 1227
// line end:   1335
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


// address: 0x80144958
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80144980
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x801449DC
// line start: 372
// line end:   1338
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80145554
// line start: 152
// line end:   158
void InitCredits__Fv() {
}


// address: 0x80145590
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


// address: 0x80145DB0
// line start: 341
// line end:   359
void DrawCreditsTitle__Fiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo) {
}


// address: 0x80145E80
// line start: 366
// line end:   384
void DrawCreditsSubTitle__Fiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo) {
}


// address: 0x80145F50
// line start: 393
// line end:   443
void DoCredits__Fv() {
	// address: 0xFFFFFF60
	// size: 0x74
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


// address: 0x801461A8
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80146224
// line start: 79
// line end:   79
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8014625C
// line start: 71
// line end:   75
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x801462B4
// line start: 372
// line end:   445
void ___7CScreen_addr_801462B4(struct CScreen *this, int __in_chrg);

// address: 0x801462D4
// size: 0xC
// line start: 223
// line end:   223
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8014662C
// line start: 202
// line end:   203
void DsDataCallback() {
}


// address: 0x80146634
// line start: 206
// line end:   207
void DsReadyCallback() {
}


// address: 0x8014663C
// line start: 218
// line end:   220
void SetDecDCT() {
}


// address: 0x80146644
// line start: 229
// line end:   375
short PlayFMV(struct StrInfo *str) {
	// address: 0xFFFFFFC0
	// size: 0x18
	auto struct CdlFILE fp;
	// register: 16
	register unsigned long *frame;
	// register: 17
	register short frameRetry;
	// register: 18
	register short strQuit;
	// address: 0xFFFFFFD8
	auto short fadeVol;
	{
		// register: 2
		// size: 0x6C
		register struct CPad *P1;
	}
}


// address: 0x801469B4
// line start: 383
// line end:   406
void StrDecDCToutCB() {
}


// address: 0x80146ABC
// line start: 416
// line end:   417
void STR_CallBack(int handle) {
}


// address: 0x80146ACC
// line start: 423
// line end:   433
void STR_SetRing() {
}


// address: 0x80146B28
// line start: 438
// line end:   439
void STR_RingEnd() {
}


// address: 0x80146B4C
// line start: 450
// line end:   509
unsigned long *STR_GetNext() {
	// register: 19
	register unsigned long *addr;
	// register: 18
	register int count;
	// register: 16
	// size: 0x8
	register struct chunkhdrstruct *chunk;
	// register: 17
	register int frameoff;
	{
		// register: 4
		register int i;
		{
			{
				// register: 4
				register int i;
			}
		}
	}
}


// address: 0x80146D08
// line start: 519
// line end:   624
void StrInit(struct StrInfo *str) {
	// register: 23
	register short x;
	// register: 22
	register short y;
	// register: 30
	register short w;
	// register: 21
	register short h;
	// register: 20
	register short scrWidth;
	// register: 16
	register unsigned long imageBufSize;
	{
		// register: 4
		register int i;
	}
}


// address: 0x8014713C
// line start: 646
// line end:   674
void StrEnd() {
}


// address: 0x801471FC
// line start: 684
// line end:   690
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8014726C
// line start: 699
// line end:   714
short StrKickCD(struct CdlLOC *loc) {
	// register: 16
	register short seekRetry;
	// register: 17
	register short readRetry;
}


// address: 0x80147320
// line start: 723
// line end:   793
unsigned long *StrGetNextFrame() {
	// register: 16
	register long timer;
	// register: 17
	register unsigned long *addr;
	// register: 16
	// size: 0x20
	register struct StHEADER *sector;
}


// address: 0x801474FC
// line start: 805
// line end:   828
void StrVLCFrame(unsigned long *frame) {
}


// address: 0x801475A4
// line start: 836
// line end:   855
void StrDrawDecodeSync() {
	// register: 3
	register long timer;
}


// address: 0x80147678
// line start: 864
// line end:   875
short StrFadeOutVol(short *fadeVol) {
}


// address: 0x801476AC
// line start: 885
// line end:   892
long GetDCToutSize() {
	// register: 3
	register unsigned short h;
}


// address: 0x8014771C
// line start: 901
// line end:   906
unsigned short ScalePPW(unsigned short n) {
}


// address: 0x80147750
// line start: 915
// line end:   916
unsigned short GetDCT_MODE() {
}


// address: 0x80147774
// line start: 926
// line end:   936
void PrintVLCBufSize() {
}


// address: 0x8014781C
// line start: 948
// line end:   951
unsigned long FMVAllocMem(unsigned long MemSize) {
}


// address: 0x8014783C
// line start: 955
// line end:   956
void FMVFreeMem(unsigned long *Addr) {
}


// address: 0x8014785C
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x8014BE60
// line start: 144
// line end:   148
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8014BE94
// line start: 160
// line end:   179
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8014BF14
// line start: 191
// line end:   208
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8014BF94
// line start: 219
// line end:   231
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8014C028
// line start: 236
// line end:   248
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8014C0B0
// line start: 267
// line end:   273
int test_hw_event__Fv() {
}


// address: 0x8014C140
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


// address: 0x8014C378
// line start: 396
// line end:   435
int test_card_format__Fi(int card_number) {
}


// address: 0x8014C408
// line start: 455
// line end:   459
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8014C444
// line start: 472
// line end:   510
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8014C53C
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


// address: 0x8014C6F4
// line start: 639
// line end:   669
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x8014C7A4
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


// address: 0x8014CAEC
// line start: 837
// line end:   864
void new_card__Fi(int card_number) {
}


// address: 0x8014CB68
// line start: 875
// line end:   940
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x8014CED8
// line start: 170
// line end:   184
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8014CF98
// line start: 190
// line end:   202
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014D060
// line start: 206
// line end:   219
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014D120
// line start: 225
// line end:   229
void DoLoadGame__Fv() {
}


// address: 0x8014D160
// line start: 236
// line end:   242
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8014D1BC
// line start: 282
// line end:   292
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8014D208
// line start: 297
// line end:   307
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8014D254
// line start: 312
// line end:   319
void ChooseCardLoad__Fv() {
}


// address: 0x8014D2F4
// line start: 323
// line end:   325
void McInitLoadCharMenu__Fv() {
}


// address: 0x8014D31C
// line start: 329
// line end:   345
void McInitLoadGameMenu__Fv() {
}


// address: 0x8014D390
// line start: 377
// line end:   430
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


// address: 0x8014D53C
// line start: 435
// line end:   456
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


// address: 0x8014D678
// line start: 462
// line end:   483
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8014D710
// line start: 487
// line end:   514
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8014D7F8
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8014D818
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014D820
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014D828
// line start: 77
// line end:   77
void ___6Dialog_addr_8014D828(struct Dialog *this, int __in_chrg) {
}


// address: 0x8014D850
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8014D850(struct Dialog *this) {
}


// address: 0x8014D8AC
// line start: 104
// line end:   110
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8014D900
// line start: 202
// line end:   204
void LoadQuest__Fi(int i) {
}


// address: 0x8014D9C8
// line start: 404
// line end:   411
void ISave__Fi(int v) {
}


// address: 0x8014DA28
// line start: 496
// line end:   498
void SaveQuest__Fi(int i) {
}


// address: 0x8014DAF4
// line start: 832
// line end:   897
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8014DD50
// line start: 901
// line end:   994
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
}


// address: 0x8014E074
// line start: 1000
// line end:   1016
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 17
	register int result;
	// register: 16
	register unsigned char *LoadBuff;
}


// address: 0x8014E1E0
// line start: 1020
// line end:   1041
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


