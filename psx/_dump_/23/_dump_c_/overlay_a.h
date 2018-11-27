#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8012775C
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x80127904
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x80127DA0
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x80127EB8
// size: 0x380
extern int CreditsTable[224];

// address: 0x801290E8
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x801295E8
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8012900C
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8012E4D4
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x8012E450
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8012E430
// size: 0x14
extern char *CharFileList[5];

// address: 0x8012E444
// size: 0xC
extern char *Classes[3];

// address: 0x8012E46C
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8012E488
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8012E4A4
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80124F0C
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80124F34
// line start: 156
// line end:   161
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80124F5C
// line start: 167
// line end:   174
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80124FD0
// line start: 178
// line end:   183
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8012504C
// line start: 188
// line end:   257
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


// address: 0x8012557C
// line start: 261
// line end:   274
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801255FC
// line start: 278
// line end:   291
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80125680
// line start: 297
// line end:   308
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80125768
// line start: 313
// line end:   324
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8012584C
// line start: 332
// line end:   333
int FeGetCursor__Fv() {
}


// address: 0x80125860
// line start: 337
// line end:   338
void FeSelect__Fv() {
}


// address: 0x801258A4
// line start: 348
// line end:   398
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80125AB0
// line start: 402
// line end:   403
void InitDummyMenu__Fv() {
}


// address: 0x80125AB8
// line start: 409
// line end:   427
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80125B78
// line start: 444
// line end:   453
void FeInitMainMenu__Fv() {
}


// address: 0x80125BD4
// line start: 470
// line end:   476
void FeInitNewGameMenu__Fv() {
}


// address: 0x80125C20
// line start: 481
// line end:   503
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80125D14
// line start: 521
// line end:   530
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80125D84
// line start: 534
// line end:   543
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80125DF4
// line start: 548
// line end:   551
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80125E3C
// line start: 556
// line end:   598
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


// address: 0x801262D8
// line start: 767
// line end:   774
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80126328
// line start: 778
// line end:   784
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80126378
// line start: 789
// line end:   895
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


// address: 0x801268B0
// line start: 904
// line end:   916
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


// address: 0x80126980
// line start: 923
// line end:   928
void FeEnterGame__Fv() {
}


// address: 0x801269A8
// line start: 944
// line end:   957
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80126A10
// line start: 961
// line end:   970
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80126A7C
// line start: 974
// line end:   983
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80126AE8
// line start: 1000
// line end:   1005
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80126B2C
// line start: 1010
// line end:   1025
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80126BE4
// line start: 1062
// line end:   1068
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80126C2C
// line start: 1072
// line end:   1078
void FeInitBook1Menu__Fv() {
}


// address: 0x80126C78
// line start: 1082
// line end:   1088
void FeInitBook2Menu__Fv() {
}


// address: 0x80126CC4
// line start: 1093
// line end:   1126
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80126EC0
// line start: 1134
// line end:   1135
void PlayDemo__Fv() {
}


// address: 0x80126ED4
// line start: 1143
// line end:   1159
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80126F70
// line start: 1173
// line end:   1303
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


// address: 0x801272D8
// line start: 1308
// line end:   1428
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


// address: 0x80127604
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8012762C
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80127688
// line start: 345
// line end:   1431
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8012824C
// line start: 168
// line end:   174
void InitCredits__Fv() {
}


// address: 0x80128288
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


// address: 0x80128AA8
// line start: 358
// line end:   376
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x80128B74
// line start: 383
// line end:   401
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x80128C50
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


// address: 0x80128EC4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80128F40
// line start: 79
// line end:   79
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80128F78
// line start: 71
// line end:   75
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80128FD0
// line start: 345
// line end:   469
void ___7CScreen_addr_80128FD0(struct CScreen *this, int __in_chrg);

// address: 0x80128FF0
// size: 0xC
// line start: 221
// line end:   221
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8012D5E8
// line start: 144
// line end:   148
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8012D61C
// line start: 160
// line end:   179
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012D69C
// line start: 191
// line end:   208
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012D71C
// line start: 219
// line end:   231
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8012D7B0
// line start: 236
// line end:   248
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8012D838
// line start: 267
// line end:   273
int test_hw_event__Fv() {
}


// address: 0x8012D8C8
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


// address: 0x8012DB00
// line start: 396
// line end:   435
int test_card_format__Fi(int card_number) {
}


// address: 0x8012DB90
// line start: 455
// line end:   459
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8012DBCC
// line start: 472
// line end:   510
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8012DCC4
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


// address: 0x8012DE7C
// line start: 639
// line end:   669
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x8012DF2C
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


// address: 0x8012E274
// line start: 837
// line end:   864
void new_card__Fi(int card_number) {
}


// address: 0x8012E2F0
// line start: 875
// line end:   940
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x801484D4
// line start: 177
// line end:   191
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80148594
// line start: 197
// line end:   209
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014865C
// line start: 213
// line end:   226
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014871C
// line start: 232
// line end:   236
void DoLoadGame__Fv() {
}


// address: 0x8014875C
// line start: 243
// line end:   249
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x801487B8
// line start: 289
// line end:   299
void McInitLoadCard1Menu__Fv() {
}


// address: 0x80148804
// line start: 304
// line end:   314
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80148850
// line start: 319
// line end:   329
void ChooseCardLoad__Fv() {
}


// address: 0x80148904
// line start: 333
// line end:   335
void McInitLoadCharMenu__Fv() {
}


// address: 0x8014892C
// line start: 339
// line end:   355
void McInitLoadGameMenu__Fv() {
}


// address: 0x80148988
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


// address: 0x80148B44
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


// address: 0x80148CE4
// line start: 458
// line end:   479
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x80148D64
// line start: 483
// line end:   510
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x80148E3C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80148E5C
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80148E64
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80148E6C
// line start: 84
// line end:   87
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80148E78
// line start: 77
// line end:   77
void ___6Dialog_addr_80148E78(struct Dialog *this, int __in_chrg) {
}


// address: 0x80148EA0
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog_addr_80148EA0(struct Dialog *this) {
}


// address: 0x80148EFC
// line start: 118
// line end:   124
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80148F50
// line start: 216
// line end:   218
void LoadQuest__Fi(int i) {
}


// address: 0x80149018
// line start: 418
// line end:   425
void ISave__Fi(int v) {
}


// address: 0x80149078
// line start: 510
// line end:   512
void SaveQuest__Fi(int i) {
}


// address: 0x80149144
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


// address: 0x8014940C
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


// address: 0x80149708
// line start: 1028
// line end:   1044
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80149830
// line start: 1048
// line end:   1069
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x801499B0
// line start: 1073
// line end:   1089
void RestorePads__Fv() {
}


// address: 0x80149A70
// line start: 1094
// line end:   1109
void StorePads__Fv() {
}


// address: 0x80149B2C
// line start: 1113
// line end:   1116
void GetIcon__Fv() {
}


