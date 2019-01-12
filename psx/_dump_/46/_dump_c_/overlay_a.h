#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8013AE04
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013AFAC
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8013B448
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013B560
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013C790
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013CC90
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013C6B4
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x80141B88
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x80141B04
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x80141AE4
// size: 0x14
extern char *CharFileList[5];

// address: 0x80141AF8
// size: 0xC
extern char *Classes[3];

// address: 0x80141B20
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x80141B3C
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80141B58
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x801384E4
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x8013850C
// line start: 157
// line end:   162
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80138534
// line start: 168
// line end:   175
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x801385A8
// line start: 179
// line end:   184
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80138624
// line start: 189
// line end:   265
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


// address: 0x80138A14
// line start: 269
// line end:   282
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80138A94
// line start: 286
// line end:   299
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80138B18
// line start: 305
// line end:   316
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80138C00
// line start: 321
// line end:   332
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80138CE4
// line start: 340
// line end:   341
int FeGetCursor__Fv() {
}


// address: 0x80138CF8
// line start: 345
// line end:   346
void FeSelect__Fv() {
}


// address: 0x80138D3C
// line start: 356
// line end:   406
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80138F48
// line start: 410
// line end:   411
void InitDummyMenu__Fv() {
}


// address: 0x80138F50
// line start: 417
// line end:   435
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80139010
// line start: 452
// line end:   461
void FeInitMainMenu__Fv() {
}


// address: 0x8013906C
// line start: 478
// line end:   484
void FeInitNewGameMenu__Fv() {
}


// address: 0x801390BC
// line start: 489
// line end:   511
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801391B0
// line start: 529
// line end:   538
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80139224
// line start: 542
// line end:   551
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80139298
// line start: 556
// line end:   559
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801392E0
// line start: 564
// line end:   606
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


// address: 0x8013977C
// line start: 775
// line end:   782
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801397C4
// line start: 786
// line end:   792
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8013980C
// line start: 797
// line end:   910
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


// address: 0x80139D5C
// line start: 919
// line end:   931
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


// address: 0x80139E2C
// line start: 938
// line end:   943
void FeEnterGame__Fv() {
}


// address: 0x80139E54
// line start: 959
// line end:   972
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80139EBC
// line start: 976
// line end:   985
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80139F28
// line start: 989
// line end:   998
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80139F94
// line start: 1015
// line end:   1020
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80139FDC
// line start: 1025
// line end:   1040
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013A094
// line start: 1077
// line end:   1083
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013A0DC
// line start: 1087
// line end:   1093
void FeInitBook1Menu__Fv() {
}


// address: 0x8013A128
// line start: 1097
// line end:   1103
void FeInitBook2Menu__Fv() {
}


// address: 0x8013A174
// line start: 1108
// line end:   1141
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013A370
// line start: 1149
// line end:   1150
void PlayDemo__Fv() {
}


// address: 0x8013A384
// line start: 1158
// line end:   1178
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013A428
// line start: 1192
// line end:   1326
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


// address: 0x8013A7E4
// line start: 1331
// line end:   1464
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


// address: 0x8013ABEC
// line start: 1469
// line end:   1471
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x8013ACAC
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013ACD4
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013AD30
// line start: 345
// line end:   1473
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013B8F4
// line start: 168
// line end:   174
void InitCredits__Fv() {
}


// address: 0x8013B930
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


// address: 0x8013C150
// line start: 358
// line end:   376
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013C21C
// line start: 383
// line end:   401
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013C2F8
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


// address: 0x8013C56C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013C5E8
// line start: 82
// line end:   82
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013C620
// line start: 71
// line end:   78
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013C678
// line start: 345
// line end:   469
void ___7CScreen_addr_8013C678(struct CScreen *this, int __in_chrg);

// address: 0x8013C698
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80140C90
// line start: 144
// line end:   148
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x80140CC4
// line start: 160
// line end:   179
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80140D44
// line start: 191
// line end:   208
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80140DC4
// line start: 219
// line end:   231
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80140E58
// line start: 236
// line end:   248
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x80140EE0
// line start: 267
// line end:   273
int test_hw_event__Fv() {
}


// address: 0x80140F70
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


// address: 0x801411A8
// line start: 396
// line end:   435
int test_card_format__Fi(int card_number) {
}


// address: 0x80141238
// line start: 455
// line end:   459
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80141274
// line start: 472
// line end:   510
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8014136C
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


// address: 0x80141524
// line start: 639
// line end:   669
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x801415D4
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


// address: 0x8014191C
// line start: 837
// line end:   864
void new_card__Fi(int card_number) {
}


// address: 0x80141998
// line start: 875
// line end:   940
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x8015BB88
// line start: 175
// line end:   189
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015BC48
// line start: 195
// line end:   207
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015BD10
// line start: 211
// line end:   224
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015BDD0
// line start: 230
// line end:   234
void DoLoadGame__Fv() {
}


// address: 0x8015BE10
// line start: 241
// line end:   247
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015BE6C
// line start: 287
// line end:   297
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015BEB8
// line start: 302
// line end:   312
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015BF04
// line start: 317
// line end:   327
void ChooseCardLoad__Fv() {
}


// address: 0x8015BFB8
// line start: 331
// line end:   333
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015BFE0
// line start: 337
// line end:   353
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015C03C
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


// address: 0x8015C1F8
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


// address: 0x8015C398
// line start: 456
// line end:   480
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015C43C
// line start: 484
// line end:   511
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015C514
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015C534
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015C53C
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015C544
// line start: 84
// line end:   87
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015C550
// line start: 77
// line end:   77
void ___6Dialog_addr_8015C550(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015C578
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_8015C578(struct Dialog *this) {
}


// address: 0x8015C5D4
// line start: 122
// line end:   128
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015C628
// line start: 220
// line end:   222
void LoadQuest__Fi(int i) {
}


// address: 0x8015C6F0
// line start: 422
// line end:   429
void ISave__Fi(int v) {
}


// address: 0x8015C750
// line start: 514
// line end:   516
void SaveQuest__Fi(int i) {
}


// address: 0x8015C81C
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


// address: 0x8015CA94
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


// address: 0x8015CD44
// line start: 1014
// line end:   1034
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015CEA8
// line start: 1038
// line end:   1059
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015D028
// line start: 1063
// line end:   1079
void RestorePads__Fv() {
}


// address: 0x8015D0E8
// line start: 1084
// line end:   1099
void StorePads__Fv() {
}


// address: 0x8015D1A4
// line start: 1103
// line end:   1106
void GetIcon__Fv() {
}


// address: 0x8015D1E0
// line start: 1110
// line end:   1126
int PSX_OPT_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015D230
// line start: 1130
// line end:   1154
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015D2C0
// line start: 1158
// line end:   1196
void LoadOptions__Fv() {
}


// address: 0x8015D338
// line start: 1200
// line end:   1216
void SaveOptions__Fv() {
}


