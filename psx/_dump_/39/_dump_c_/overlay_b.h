#include "types.h"

// === [ Overlay ID b ] ===

// address: 0x8013CCB0
// size: 0x258
extern struct Creds CreditsText[50];

// address: 0x8013CF08
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013E2E0
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013E7E0
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013E240
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x801437BC
// size: 0x14000
extern unsigned char save_buffer[81920];

// address: 0x801577C0
// size: 0x1DE0
extern struct CharDataStructDef CharDataStruct;

// address: 0x801595A0
// size: 0x40
extern char TempStr[64];

// address: 0x801595E0
// size: 0x80
extern char AlertStr[128];

// address: 0x8014371C
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x801436C8
// size: 0xC
extern int ClassStrTbl[3];

// address: 0x80143738
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80143754
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80139D4C
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80139D74
// line start: 167
// line end:   172
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80139DA0
// line start: 178
// line end:   186
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80139E24
// line start: 190
// line end:   195
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80139EA0
// line start: 199
// line end:   215
void FeAddNameTable__FPUci(unsigned char *Table, int Count) {
	{
		// register: 21
		register int YLoop;
		{
			{
				// register: 3
				register int XLoop;
			}
		}
	}
}


// address: 0x80139FC8
// line start: 222
// line end:   336
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFF98
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT ARect;
	// register: 17
	register int X;
	// register: 19
	register int Y;
	// register: 20
	// size: 0x4
	register enum TXT_JUST Just;
	// address: 0xFFFFFFC0
	// size: 0x70
	auto struct TextDat *PanelGfx;
	// register: 4
	register int SelX;
	// register: 18
	register int SelY;
	// address: 0xFFFFFFB8
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
										{
											{
												{
													{
														{
															// register: 2
															// size: 0x28
															register struct POLY_FT4 *Ft4;
															{
																{
																	{
																		// register: 18
																		register int Loop;
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
					}
				}
			}
		}
	}
}


// address: 0x8013A5F4
// line start: 340
// line end:   353
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A674
// line start: 357
// line end:   413
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A7BC
// line start: 420
// line end:   431
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A8A4
// line start: 436
// line end:   448
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A98C
// line start: 457
// line end:   458
int FeGetCursor__Fv() {
}


// address: 0x8013A9A0
// line start: 462
// line end:   464
void FeSelect__Fv() {
}


// address: 0x8013A9F0
// line start: 474
// line end:   527
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
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


// address: 0x8013ABB8
// line start: 531
// line end:   532
void InitDummyMenu__Fv() {
}


// address: 0x8013ABC0
// line start: 538
// line end:   577
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8013ACE0
// line start: 594
// line end:   607
void FeInitMainMenu__Fv() {
}


// address: 0x8013AD5C
// line start: 624
// line end:   644
void FeInitNewGameMenu__Fv() {
}


// address: 0x8013ADEC
// line start: 649
// line end:   713
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x8013AFA0
// line start: 730
// line end:   745
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013B024
// line start: 749
// line end:   764
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x8013B0A8
// line start: 769
// line end:   772
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x8013B0F0
// line start: 777
// line end:   827
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


// address: 0x8013B578
// line start: 917
// line end:   927
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x8013B5D4
// line start: 931
// line end:   939
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8013B628
// line start: 944
// line end:   1074
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
	}
}


// address: 0x8013BBF0
// line start: 1080
// line end:   1105
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
		{
			{
				{
					{
						// register: 2
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8013BD04
// line start: 1112
// line end:   1117
void FeEnterGame__Fv() {
}


// address: 0x8013BD2C
// line start: 1133
// line end:   1148
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013BDAC
// line start: 1152
// line end:   1160
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013BE14
// line start: 1164
// line end:   1172
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013BE84
// line start: 1189
// line end:   1212
void FeInitDifficultyMenu__Fv() {
	// register: 4
	register int MaxLevel;
}


// address: 0x8013BF28
// line start: 1217
// line end:   1239
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013C00C
// line start: 1276
// line end:   1282
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013C058
// line start: 1286
// line end:   1292
void FeInitBook1Menu__Fv() {
}


// address: 0x8013C0A8
// line start: 1296
// line end:   1302
void FeInitBook2Menu__Fv() {
}


// address: 0x8013C0F8
// line start: 1307
// line end:   1349
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013C33C
// line start: 1354
// line end:   1355
void PlayDemo__Fv() {
}


// address: 0x8013C350
// line start: 1370
// line end:   1386
void FadeFEOut__Fv() {
}


// address: 0x8013C414
// line start: 1419
// line end:   1474
void DrawBackTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8013C59C
// line start: 1483
// line end:   1502
void FeInitMainStuff__FP4TASK(struct TASK *T2) {
}


// address: 0x8013C648
// line start: 1515
// line end:   1713
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int len;
	// register: 17
	register int Fefadeval;
	// register: 19
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013CAF4
// line start: 1722
// line end:   1724
void DrawFeTwinkle__Fii(int TwinkX, int TwinkY) {
}


// address: 0x8013CBD0
// line start: 79
// line end:   79
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013CBF8
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013CC78
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks() {
}


// address: 0x8013CC80
// line start: 97
// line end:   99
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8013D29C
// line start: 324
// line end:   336
void InitCredits__Fv() {
}


// address: 0x8013D330
// line start: 398
// line end:   543
int PrintCredits__Fiiiiii(int StrNo, int Y, int CharFade, int RFlag, int GFlag, int BFlag) {
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
	// register: 19
	register char *Str;
}


// address: 0x8013DB60
// line start: 549
// line end:   567
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013DC18
// line start: 574
// line end:   592
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013DCD0
// line start: 598
// line end:   608
int CredCountNL__Fi(int Str) {
	// register: 16
	register int Count;
	// register: 4
	register char *StrPtr;
}


// address: 0x8013DD3C
// line start: 616
// line end:   714
void DoCredits__Fv() {
	// address: 0xFFFFFF58
	// size: 0x7C
	auto struct CScreen CreditsBack;
	// register: 8
	register int Y;
	// register: 19
	register int Fade;
	// register: 20
	register int Mode;
	// register: 21
	register unsigned short TextNo;
	// register: 30
	register unsigned long CreditsCount;
	{
		// register: 17
		register int YOfs;
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


// address: 0x8013E124
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013E1A0
// line start: 85
// line end:   85
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x8013E1C4
// line start: 76
// line end:   76
int GetCharHeight__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x8013E204
// line start: 382
// line end:   716
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013E224
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x801427E0
// line start: 137
// line end:   141
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x80142814
// line start: 145
// line end:   155
void sjis_endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 2
	register unsigned char t;
}


// address: 0x8014285C
// line start: 167
// line end:   186
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x801428DC
// line start: 200
// line end:   218
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80142964
// line start: 229
// line end:   242
void ascii_to_sjis__FPUcPUs(unsigned char *asc, unsigned short *sjis) {
}


// address: 0x801429EC
// line start: 246
// line end:   247
int is_sjis__FPUc(unsigned char *buf) {
}


// address: 0x801429F8
// line start: 251
// line end:   270
int sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x80142A80
// line start: 280
// line end:   402
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


// address: 0x80142CE4
// line start: 418
// line end:   490
int test_card_format__Fi(int card_number) {
}


// address: 0x80142DD4
// line start: 503
// line end:   507
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80142E10
// line start: 520
// line end:   558
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80142F08
// line start: 572
// line end:   690
int read_card_file__FiiiPc(int card_number, int file, int id, char *buf) {
	// register: 19
	register int okay;
	// register: 20
	register int tries;
	// register: 17
	register int fd;
	// register: 2
	register int r;
	// register: 16
	register int size;
	// register: 22
	register int checksumerror;
	// address: 0xFFFFFD90
	// size: 0x200
	auto struct file_header h;
	// address: 0xFFFFFF90
	// size: 0x50
	auto char path[80];
}


// address: 0x801430E4
// line start: 702
// line end:   732
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x801431A8
// line start: 757
// line end:   884
int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf) {
	// address: 0xFFFFFD90
	// size: 0x200
	auto struct file_header h;
	// register: 16
	register int fd;
	// register: 19
	register int failed;
	// register: 20
	register int e;
	// address: 0xFFFFFF90
	// size: 0x50
	auto char path[80];
}


// address: 0x801434DC
// line start: 894
// line end:   926
void new_card__Fi(int card_number) {
}


// address: 0x80143570
// line start: 939
// line end:   1028
void service_card__Fi(int card_number) {
	// register: 4
	register int last_status;
}


// address: 0x80159660
// line start: 188
// line end:   202
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80159720
// line start: 206
// line end:   207
int DoSaveOptions__Fv() {
}


// address: 0x80159748
// line start: 214
// line end:   252
int DoSaveGame__Fv() {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto char temp_name[32];
	// address: 0xFFFFFFE0
	// size: 0xC
	auto char *Classes[3];
}


// address: 0x801598C0
// line start: 258
// line end:   278
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


// address: 0x80159964
// line start: 286
// line end:   297
int DoFrontEndLoadCharacter__Fi(int slot) {
	// register: 16
	register int result;
	{
	}
}


// address: 0x801599BC
// line start: 303
// line end:   313
void McInitLoadCard1Menu__Fv() {
}


// address: 0x801599FC
// line start: 318
// line end:   328
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80159A3C
// line start: 333
// line end:   340
void ChooseCardLoad__Fv() {
}


// address: 0x80159AD8
// line start: 344
// line end:   356
void McInitLoadGameMenu__Fv() {
}


// address: 0x80159B3C
// line start: 366
// line end:   454
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT um;
}


// address: 0x80159D8C
// line start: 477
// line end:   534
void McCharCardMenuCtrl__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x80159FD4
// line start: 537
// line end:   690
void McMainCharKeyCtrl__Fv() {
	// register: 19
	register int Spacing;
	// register: 17
	register int yoff;
	// register: 16
	register int SelX;
	// register: 17
	register int len;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT um;
	// register: 18
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x8015A44C
// line start: 693
// line end:   732
void ShowAlertBox__Fv() {
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT um;
	// register: 17
	register int W;
	// register: 30
	register int H;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 16
	register int otpos;
	// address: 0xFFFFFFC0
	auto int oldBot;
	// address: 0xFFFFFFC8
	auto int oldTot;
	// register: 18
	register int lines;
	// register: 16
	register int yprintpos;
}


// address: 0x8015A658
// line start: 738
// line end:   756
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015A70C
// line start: 760
// line end:   791
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 4
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015A82C
// line start: 795
// line end:   819
void ShowGameFiles__FPciiG4RECTi(char *filename, int saveflag, int Spacing, struct RECT ORect, int yoff) {
	{
		// register: 17
		register int i;
		{
			// register: 5
			register int FileNo;
		}
	}
}


// address: 0x8015A98C
// line start: 822
// line end:   871
void ShowCharacterFiles__FiiG4RECTi(int cs, int Spacing, struct RECT ORect, int yoff) {
	// register: 4
	register int sn;
	{
		// register: 19
		register int j;
		{
			// register: 3
			register int fileno;
			// register: 18
			register int r;
			// register: 17
			register int g;
			// register: 16
			register int b;
			// address: 0xFFFFFF90
			// size: 0x40
			auto char TempStr[64];
		}
	}
}


// address: 0x8015AB6C
// line start: 884
// line end:   903
void PackItem__FP12PkItemStructPC10ItemStruct(struct PkItemStruct *id, struct ItemStruct *is) {
}


// address: 0x8015ABF8
// line start: 910
// line end:   964
void PackPlayer__FP14PkPlayerStructi(struct PkPlayerStruct *pPack, int pnum) {
	// register: 18
	register int i;
	// register: 17
	// size: 0x14
	register struct PkItemStruct *pki;
	// register: 16
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x19E8
	register struct PlayerStruct *pPlayer;
}


// address: 0x8015AE04
// line start: 971
// line end:   992
void UnPackItem__FPC12PkItemStructP10ItemStruct(struct PkItemStruct *is, struct ItemStruct *id) {
}


// address: 0x8015AF0C
// line start: 1000
// line end:   1014
void VerifyGoldSeeds__FP12PlayerStruct(struct PlayerStruct *pPlayer) {
	// register: 18
	register int i;
	// register: 5
	register int j;
}


// address: 0x8015AFE4
// line start: 1022
// line end:   1103
void UnPackPlayer__FPC14PkPlayerStructiUc(struct PkPlayerStruct *pPack, int pnum, unsigned char killok) {
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x14
	register struct PkItemStruct *pki;
	// register: 19
	// size: 0x19E8
	register struct PlayerStruct *pPlayer;
	// register: 16
	register int i;
}


// address: 0x8015B2A8
// line start: 1109
// line end:   1117
void ConstructSlotName__FPci(char *TempStr, int slot) {
}


// address: 0x8015B3A0
// line start: 1120
// line end:   1137
int GetSpinnerWidth__Fi(int j) {
	// address: 0xFFFFFFB8
	// size: 0x40
	auto char TempStr[64];
	// register: 2
	register int len;
}


// address: 0x8015B444
// line start: 1151
// line end:   1255
char *ReconstructSlotName__Fii(int side, int file) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8015B83C
// line start: 127
// line end:   131
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8015B864
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x8015B88C
// line start: 92
// line end:   92
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8015B894
// line start: 91
// line end:   91
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8015B89C
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015B8BC
// line start: 94
// line end:   94
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015B8C4
// line start: 91
// line end:   91
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015B8CC
// line start: 79
// line end:   79
void ___6Dialog_addr_8015B8CC(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015B8F4
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_8015B8F4(struct Dialog *this) {
}


// address: 0x8015B974
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_8015B974() {
}


// address: 0x8015B97C
// line start: 134
// line end:   135
char *GetOptStr__Fv() {
}


// address: 0x8015B98C
// line start: 144
// line end:   145
char *GetDiabloStr__Fv() {
}


// address: 0x8015B99C
// line start: 151
// line end:   152
char BLoad__Fv() {
}


// address: 0x8015B9B8
// line start: 156
// line end:   162
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015BA0C
// line start: 181
// line end:   183
unsigned char OLoad__Fv() {
}


// address: 0x8015BA30
// line start: 252
// line end:   254
void LoadQuest__Fi(int i) {
}


// address: 0x8015BAF8
// line start: 446
// line end:   447
void BSave__Fc(char v) {
}


// address: 0x8015BB10
// line start: 452
// line end:   459
void ISave__Fi(int v) {
}


// address: 0x8015BB70
// line start: 476
// line end:   478
void OSave__FUc(unsigned char v) {
}


// address: 0x8015BBB4
// line start: 543
// line end:   545
void SaveQuest__Fi(int i) {
}


// address: 0x8015BC80
// line start: 879
// line end:   1038
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 3
	register int result;
	// register: 19
	register int tries;
	// register: 21
	register unsigned char *SaveBuff;
	// register: 16
	register int SaveSize;
	// register: 16
	register int savesize;
	{
		// register: 2
		register int delete_file_number;
	}
}


// address: 0x8015C1E0
// line start: 1042
// line end:   1114
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 2
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
}


// address: 0x8015C304
// line start: 1120
// line end:   1128
void PSX_CH_LoadGame__Fi(int slot) {
}


// address: 0x8015C3A4
// line start: 1132
// line end:   1138
int PSX_CH_LoadBlock__Fii(int card_number, int file) {
}


// address: 0x8015C3CC
// line start: 1142
// line end:   1187
int PSX_CH_SaveGame__Fii(int card_number, int slot) {
	// register: 2
	register int result;
	// register: 17
	register int tries;
	// address: 0xFFFFFFA0
	// size: 0x40
	auto char TempStr[64];
	{
		// register: 2
		register int delete_file_number;
	}
}


// address: 0x8015C538
// line start: 1191
// line end:   1206
void RestorePads__Fv() {
}


// address: 0x8015C5F8
// line start: 1210
// line end:   1225
void StorePads__Fv() {
}


// address: 0x8015C6B4
// line start: 1229
// line end:   1232
void GetIcon__Fv() {
}


// address: 0x8015C6F0
// line start: 1236
// line end:   1253
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C74C
// line start: 1257
// line end:   1304
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 2
	register int result;
	// register: 16
	register int tries;
	// address: 0xFFFFFFA0
	// size: 0x40
	auto char TempStr[64];
	// register: 19
	register unsigned char *SaveBuff;
	{
		// register: 2
		register int delete_file_number;
	}
}


// address: 0x8015C86C
// line start: 1310
// line end:   1331
void LoadOptions__Fv() {
}


// address: 0x8015C944
// line start: 1335
// line end:   1350
void SaveOptions__Fv() {
}


// address: 0x8015C9E8
// line start: 1354
// line end:   1461
int RestoreLoadedData__Fb(bool firstflag) {
	// register: 2
	register unsigned char *LoadBuff;
	// register: 18
	register int DataSize;
	// register: 16
	register int i;
}


