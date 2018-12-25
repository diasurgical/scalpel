#include "types.h"

// === [ Overlay ID b ] ===

// address: 0x801386C4
// size: 0x258
extern struct Creds CreditsText[50];

// address: 0x8013891C
// size: 0x380
extern int CreditsTable[224];

// address: 0x80139CF4
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013A1F4
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x80139C54
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8013F1C0
// size: 0x14000
extern unsigned char save_buffer[81920];

// address: 0x801531C4
// size: 0x1DE0
extern struct CharDataStructDef CharDataStruct;

// address: 0x80154FA4
// size: 0x40
extern char TempStr[64];

// address: 0x80154FE4
// size: 0x80
extern char AlertStr[128];

// address: 0x8013F118
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8013F0C4
// size: 0xC
extern int ClassStrTbl[3];

// address: 0x8013F134
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8013F150
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x8013570C
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80135734
// line start: 167
// line end:   172
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80135760
// line start: 178
// line end:   186
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x801357E4
// line start: 190
// line end:   195
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80135860
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


// address: 0x80135988
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


// address: 0x80135FB4
// line start: 340
// line end:   353
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80136034
// line start: 357
// line end:   413
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013617C
// line start: 420
// line end:   431
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80136264
// line start: 436
// line end:   448
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013634C
// line start: 457
// line end:   458
int FeGetCursor__Fv() {
}


// address: 0x80136360
// line start: 462
// line end:   464
void FeSelect__Fv() {
}


// address: 0x801363B0
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


// address: 0x80136578
// line start: 531
// line end:   532
void InitDummyMenu__Fv() {
}


// address: 0x80136580
// line start: 538
// line end:   577
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x801366A0
// line start: 594
// line end:   607
void FeInitMainMenu__Fv() {
}


// address: 0x8013671C
// line start: 624
// line end:   644
void FeInitNewGameMenu__Fv() {
}


// address: 0x801367D0
// line start: 649
// line end:   713
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80136984
// line start: 730
// line end:   745
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80136A08
// line start: 749
// line end:   764
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80136A8C
// line start: 769
// line end:   772
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80136AD4
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


// address: 0x80136F6C
// line start: 917
// line end:   927
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80136FC8
// line start: 931
// line end:   939
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8013701C
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


// address: 0x801375E4
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


// address: 0x80137710
// line start: 1112
// line end:   1117
void FeEnterGame__Fv() {
}


// address: 0x80137738
// line start: 1133
// line end:   1148
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801377B8
// line start: 1152
// line end:   1160
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80137820
// line start: 1164
// line end:   1172
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80137890
// line start: 1189
// line end:   1212
void FeInitDifficultyMenu__Fv() {
	// register: 4
	register int MaxLevel;
}


// address: 0x80137934
// line start: 1217
// line end:   1238
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80137A20
// line start: 1275
// line end:   1281
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80137A6C
// line start: 1285
// line end:   1291
void FeInitBook1Menu__Fv() {
}


// address: 0x80137ABC
// line start: 1295
// line end:   1301
void FeInitBook2Menu__Fv() {
}


// address: 0x80137B0C
// line start: 1306
// line end:   1348
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80137D50
// line start: 1353
// line end:   1354
void PlayDemo__Fv() {
}


// address: 0x80137D64
// line start: 1369
// line end:   1385
void FadeFEOut__Fv() {
}


// address: 0x80137E28
// line start: 1418
// line end:   1473
void DrawBackTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80137FB0
// line start: 1482
// line end:   1501
void FeInitMainStuff__FP4TASK(struct TASK *T2) {
}


// address: 0x8013805C
// line start: 1514
// line end:   1712
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int len;
	// register: 17
	register int Fefadeval;
	// register: 19
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x80138508
// line start: 1721
// line end:   1723
void DrawFeTwinkle__Fii(int TwinkX, int TwinkY) {
}


// address: 0x801385E4
// line start: 79
// line end:   79
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013860C
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013868C
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks() {
}


// address: 0x80138694
// line start: 97
// line end:   99
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x80138CB0
// line start: 324
// line end:   336
void InitCredits__Fv() {
}


// address: 0x80138D44
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


// address: 0x80139574
// line start: 549
// line end:   567
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013962C
// line start: 574
// line end:   592
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x801396E4
// line start: 598
// line end:   608
int CredCountNL__Fi(int Str) {
	// register: 16
	register int Count;
	// register: 4
	register char *StrPtr;
}


// address: 0x80139750
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


// address: 0x80139B38
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80139BB4
// line start: 85
// line end:   85
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80139BD8
// line start: 76
// line end:   76
int GetCharHeight__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x80139C18
// line start: 382
// line end:   716
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80139C38
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8013E1F4
// line start: 137
// line end:   141
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8013E228
// line start: 145
// line end:   155
void sjis_endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 2
	register unsigned char t;
}


// address: 0x8013E270
// line start: 167
// line end:   186
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013E2F0
// line start: 200
// line end:   218
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013E378
// line start: 229
// line end:   242
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8013E3FC
// line start: 246
// line end:   247
int is_sjis__FPUc(unsigned char *buf) {
}


// address: 0x8013E408
// line start: 251
// line end:   270
int sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8013E490
// line start: 280
// line end:   399
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
	// register: 18
	register int r;
}


// address: 0x8013E6F0
// line start: 415
// line end:   487
int test_card_format__Fi(int card_number) {
}


// address: 0x8013E7E0
// line start: 500
// line end:   504
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8013E81C
// line start: 517
// line end:   555
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8013E914
// line start: 569
// line end:   687
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


// address: 0x8013EAF0
// line start: 699
// line end:   729
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8013EBB4
// line start: 754
// line end:   879
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


// address: 0x8013EED8
// line start: 889
// line end:   921
void new_card__Fi(int card_number) {
}


// address: 0x8013EF6C
// line start: 934
// line end:   1024
void service_card__Fi(int card_number) {
	// register: 4
	register int last_status;
}


// address: 0x80155064
// line start: 187
// line end:   201
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80155124
// line start: 205
// line end:   206
int DoSaveOptions__Fv() {
}


// address: 0x8015514C
// line start: 212
// line end:   248
int DoSaveGame__Fv() {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto char temp_name[32];
	// address: 0xFFFFFFE0
	// size: 0xC
	auto char *Classes[3];
}


// address: 0x8015529C
// line start: 254
// line end:   274
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


// address: 0x80155340
// line start: 282
// line end:   293
int DoFrontEndLoadCharacter__Fi(int slot) {
	// register: 16
	register int result;
	{
	}
}


// address: 0x80155398
// line start: 299
// line end:   309
void McInitLoadCard1Menu__Fv() {
}


// address: 0x801553D8
// line start: 314
// line end:   324
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80155418
// line start: 329
// line end:   336
void ChooseCardLoad__Fv() {
}


// address: 0x801554B4
// line start: 340
// line end:   352
void McInitLoadGameMenu__Fv() {
}


// address: 0x80155518
// line start: 362
// line end:   450
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT um;
}


// address: 0x80155768
// line start: 473
// line end:   530
void McCharCardMenuCtrl__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x801559B0
// line start: 533
// line end:   686
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


// address: 0x80155E28
// line start: 689
// line end:   727
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


// address: 0x80156034
// line start: 733
// line end:   751
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x801560E8
// line start: 755
// line end:   786
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 4
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x80156208
// line start: 790
// line end:   814
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


// address: 0x80156368
// line start: 817
// line end:   858
void ShowCharacterFiles__FiiG4RECTi(int cs, int Spacing, struct RECT ORect, int yoff) {
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


// address: 0x801564E4
// line start: 871
// line end:   890
void PackItem__FP12PkItemStructPC10ItemStruct(struct PkItemStruct *id, struct ItemStruct *is) {
}


// address: 0x80156570
// line start: 897
// line end:   951
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


// address: 0x8015677C
// line start: 958
// line end:   979
void UnPackItem__FPC12PkItemStructP10ItemStruct(struct PkItemStruct *is, struct ItemStruct *id) {
}


// address: 0x80156884
// line start: 987
// line end:   1001
void VerifyGoldSeeds__FP12PlayerStruct(struct PlayerStruct *pPlayer) {
	// register: 18
	register int i;
	// register: 5
	register int j;
}


// address: 0x8015695C
// line start: 1009
// line end:   1090
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


// address: 0x80156C20
// line start: 1096
// line end:   1104
void ConstructSlotName__FPci(char *TempStr, int slot) {
}


// address: 0x80156D18
// line start: 1107
// line end:   1124
int GetSpinnerWidth__Fi(int j) {
	// address: 0xFFFFFFB8
	// size: 0x40
	auto char TempStr[64];
	// register: 2
	register int len;
}


// address: 0x80156DBC
// line start: 1132
// line end:   1237
char *ReconstructSlotName__Fii(int side, int file) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x801571B4
// line start: 127
// line end:   131
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x801571DC
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x80157204
// line start: 92
// line end:   92
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8015720C
// line start: 91
// line end:   91
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x80157214
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80157234
// line start: 94
// line end:   94
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015723C
// line start: 91
// line end:   91
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80157244
// line start: 79
// line end:   79
void ___6Dialog_addr_80157244(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015726C
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_8015726C(struct Dialog *this) {
}


// address: 0x801572EC
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_801572EC() {
}


// address: 0x801572F4
// line start: 129
// line end:   130
char BLoad__Fv() {
}


// address: 0x80157310
// line start: 134
// line end:   140
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80157364
// line start: 159
// line end:   161
unsigned char OLoad__Fv() {
}


// address: 0x80157388
// line start: 230
// line end:   232
void LoadQuest__Fi(int i) {
}


// address: 0x80157450
// line start: 424
// line end:   425
void BSave__Fc(char v) {
}


// address: 0x80157468
// line start: 430
// line end:   437
void ISave__Fi(int v) {
}


// address: 0x801574C8
// line start: 454
// line end:   456
void OSave__FUc(unsigned char v) {
}


// address: 0x8015750C
// line start: 521
// line end:   523
void SaveQuest__Fi(int i) {
}


// address: 0x801575D8
// line start: 857
// line end:   1016
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


// address: 0x80157B38
// line start: 1020
// line end:   1092
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 2
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
}


// address: 0x80157C5C
// line start: 1098
// line end:   1106
void PSX_CH_LoadGame__Fi(int slot) {
}


// address: 0x80157CFC
// line start: 1110
// line end:   1116
int PSX_CH_LoadBlock__Fii(int card_number, int file) {
}


// address: 0x80157D24
// line start: 1120
// line end:   1163
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


// address: 0x80157EA8
// line start: 1167
// line end:   1182
void RestorePads__Fv() {
}


// address: 0x80157F68
// line start: 1186
// line end:   1201
void StorePads__Fv() {
}


// address: 0x80158024
// line start: 1205
// line end:   1208
void GetIcon__Fv() {
}


// address: 0x80158060
// line start: 1212
// line end:   1229
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x801580BC
// line start: 1233
// line end:   1277
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


// address: 0x801581F4
// line start: 1283
// line end:   1304
void LoadOptions__Fv() {
}


// address: 0x801582CC
// line start: 1308
// line end:   1323
void SaveOptions__Fv() {
}


// address: 0x80158370
// line start: 1327
// line end:   1434
int RestoreLoadedData__Fb(bool firstflag) {
	// register: 2
	register unsigned char *LoadBuff;
	// register: 18
	register int DataSize;
	// register: 16
	register int i;
}


