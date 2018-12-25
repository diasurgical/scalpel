#include "types.h"

// === [ Overlay ID b ] ===

// address: 0x80138630
// size: 0x258
extern struct Creds CreditsText[50];

// address: 0x80138888
// size: 0x380
extern int CreditsTable[224];

// address: 0x80139C60
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013A160
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x80139BC0
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8013F13C
// size: 0x14000
extern unsigned char save_buffer[81920];

// address: 0x80153140
// size: 0x1DE0
extern struct CharDataStructDef CharDataStruct;

// address: 0x80154F20
// size: 0x40
extern char TempStr[64];

// address: 0x80154F60
// size: 0x80
extern char AlertStr[128];

// address: 0x8013F09C
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8013F048
// size: 0xC
extern int ClassStrTbl[3];

// address: 0x8013F0B8
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8013F0D4
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x801356C4
// line start: 60
// line end:   61
void PresOnlyTestRoutine__Fv() {
}


// address: 0x801356EC
// line start: 167
// line end:   172
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80135718
// line start: 178
// line end:   186
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x8013579C
// line start: 190
// line end:   195
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80135818
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


// address: 0x80135940
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


// address: 0x80135F6C
// line start: 340
// line end:   353
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80135FEC
// line start: 357
// line end:   413
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80136134
// line start: 420
// line end:   431
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013621C
// line start: 436
// line end:   448
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80136304
// line start: 457
// line end:   458
int FeGetCursor__Fv() {
}


// address: 0x80136318
// line start: 462
// line end:   464
void FeSelect__Fv() {
}


// address: 0x80136368
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


// address: 0x80136530
// line start: 531
// line end:   532
void InitDummyMenu__Fv() {
}


// address: 0x80136538
// line start: 538
// line end:   577
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80136658
// line start: 594
// line end:   607
void FeInitMainMenu__Fv() {
}


// address: 0x801366D4
// line start: 624
// line end:   644
void FeInitNewGameMenu__Fv() {
}


// address: 0x80136764
// line start: 649
// line end:   713
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80136918
// line start: 730
// line end:   745
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013699C
// line start: 749
// line end:   764
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80136A20
// line start: 769
// line end:   772
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80136A68
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


// address: 0x80136EF0
// line start: 917
// line end:   927
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80136F4C
// line start: 931
// line end:   939
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80136FA0
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


// address: 0x80137568
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


// address: 0x8013767C
// line start: 1112
// line end:   1117
void FeEnterGame__Fv() {
}


// address: 0x801376A4
// line start: 1133
// line end:   1148
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80137724
// line start: 1152
// line end:   1160
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013778C
// line start: 1164
// line end:   1172
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801377FC
// line start: 1189
// line end:   1212
void FeInitDifficultyMenu__Fv() {
	// register: 4
	register int MaxLevel;
}


// address: 0x801378A0
// line start: 1217
// line end:   1238
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013798C
// line start: 1275
// line end:   1281
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801379D8
// line start: 1285
// line end:   1291
void FeInitBook1Menu__Fv() {
}


// address: 0x80137A28
// line start: 1295
// line end:   1301
void FeInitBook2Menu__Fv() {
}


// address: 0x80137A78
// line start: 1306
// line end:   1348
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80137CBC
// line start: 1353
// line end:   1354
void PlayDemo__Fv() {
}


// address: 0x80137CD0
// line start: 1369
// line end:   1385
void FadeFEOut__Fv() {
}


// address: 0x80137D94
// line start: 1418
// line end:   1473
void DrawBackTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80137F1C
// line start: 1482
// line end:   1501
void FeInitMainStuff__FP4TASK(struct TASK *T2) {
}


// address: 0x80137FC8
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


// address: 0x80138474
// line start: 1721
// line end:   1723
void DrawFeTwinkle__Fii(int TwinkX, int TwinkY) {
}


// address: 0x80138550
// line start: 79
// line end:   79
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80138578
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x801385F8
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks() {
}


// address: 0x80138600
// line start: 97
// line end:   99
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x80138C1C
// line start: 324
// line end:   336
void InitCredits__Fv() {
}


// address: 0x80138CB0
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


// address: 0x801394E0
// line start: 549
// line end:   567
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x80139598
// line start: 574
// line end:   592
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x80139650
// line start: 598
// line end:   608
int CredCountNL__Fi(int Str) {
	// register: 16
	register int Count;
	// register: 4
	register char *StrPtr;
}


// address: 0x801396BC
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


// address: 0x80139AA4
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80139B20
// line start: 85
// line end:   85
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80139B44
// line start: 76
// line end:   76
int GetCharHeight__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x80139B84
// line start: 382
// line end:   716
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80139BA4
// size: 0xC
// line start: 229
// line end:   229
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8013E160
// line start: 137
// line end:   141
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8013E194
// line start: 145
// line end:   155
void sjis_endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 2
	register unsigned char t;
}


// address: 0x8013E1DC
// line start: 167
// line end:   186
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013E25C
// line start: 200
// line end:   218
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013E2E4
// line start: 229
// line end:   242
void ascii_to_sjis__FPUcPUs(unsigned char *asc, unsigned short *sjis) {
}


// address: 0x8013E36C
// line start: 246
// line end:   247
int is_sjis__FPUc(unsigned char *buf) {
}


// address: 0x8013E378
// line start: 251
// line end:   270
int sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8013E400
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


// address: 0x8013E664
// line start: 418
// line end:   490
int test_card_format__Fi(int card_number) {
}


// address: 0x8013E754
// line start: 503
// line end:   507
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8013E790
// line start: 520
// line end:   558
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8013E888
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


// address: 0x8013EA64
// line start: 702
// line end:   732
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8013EB28
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


// address: 0x8013EE5C
// line start: 894
// line end:   926
void new_card__Fi(int card_number) {
}


// address: 0x8013EEF0
// line start: 939
// line end:   1028
void service_card__Fi(int card_number) {
	// register: 4
	register int last_status;
}


// address: 0x80154FE0
// line start: 187
// line end:   201
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x801550A0
// line start: 205
// line end:   206
int DoSaveOptions__Fv() {
}


// address: 0x801550C8
// line start: 213
// line end:   251
int DoSaveGame__Fv() {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto char temp_name[32];
	// address: 0xFFFFFFE0
	// size: 0xC
	auto char *Classes[3];
}


// address: 0x80155240
// line start: 257
// line end:   277
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


// address: 0x801552E4
// line start: 285
// line end:   296
int DoFrontEndLoadCharacter__Fi(int slot) {
	// register: 16
	register int result;
	{
	}
}


// address: 0x8015533C
// line start: 302
// line end:   312
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015537C
// line start: 317
// line end:   327
void McInitLoadCard2Menu__Fv() {
}


// address: 0x801553BC
// line start: 332
// line end:   339
void ChooseCardLoad__Fv() {
}


// address: 0x80155458
// line start: 343
// line end:   355
void McInitLoadGameMenu__Fv() {
}


// address: 0x801554BC
// line start: 365
// line end:   453
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT um;
}


// address: 0x8015570C
// line start: 476
// line end:   533
void McCharCardMenuCtrl__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x80155954
// line start: 536
// line end:   689
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


// address: 0x80155DCC
// line start: 692
// line end:   730
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


// address: 0x80155FD8
// line start: 736
// line end:   754
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015608C
// line start: 758
// line end:   789
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 4
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x801561AC
// line start: 793
// line end:   817
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


// address: 0x8015630C
// line start: 820
// line end:   861
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


// address: 0x80156488
// line start: 874
// line end:   893
void PackItem__FP12PkItemStructPC10ItemStruct(struct PkItemStruct *id, struct ItemStruct *is) {
}


// address: 0x80156514
// line start: 900
// line end:   954
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


// address: 0x80156720
// line start: 961
// line end:   982
void UnPackItem__FPC12PkItemStructP10ItemStruct(struct PkItemStruct *is, struct ItemStruct *id) {
}


// address: 0x80156828
// line start: 990
// line end:   1004
void VerifyGoldSeeds__FP12PlayerStruct(struct PlayerStruct *pPlayer) {
	// register: 18
	register int i;
	// register: 5
	register int j;
}


// address: 0x80156900
// line start: 1012
// line end:   1093
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


// address: 0x80156BC4
// line start: 1099
// line end:   1107
void ConstructSlotName__FPci(char *TempStr, int slot) {
}


// address: 0x80156CBC
// line start: 1110
// line end:   1127
int GetSpinnerWidth__Fi(int j) {
	// address: 0xFFFFFFB8
	// size: 0x40
	auto char TempStr[64];
	// register: 2
	register int len;
}


// address: 0x80156D60
// line start: 1141
// line end:   1245
char *ReconstructSlotName__Fii(int side, int file) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80157158
// line start: 127
// line end:   131
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x80157180
// line start: 120
// line end:   124
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x801571A8
// line start: 92
// line end:   92
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x801571B0
// line start: 91
// line end:   91
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x801571B8
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x801571D8
// line start: 94
// line end:   94
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x801571E0
// line start: 91
// line end:   91
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x801571E8
// line start: 79
// line end:   79
void ___6Dialog_addr_801571E8(struct Dialog *this, int __in_chrg) {
}


// address: 0x80157210
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog_addr_80157210(struct Dialog *this) {
}


// address: 0x80157290
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_80157290() {
}


// address: 0x80157298
// line start: 134
// line end:   135
char *GetOptStr__Fv() {
}


// address: 0x801572A8
// line start: 144
// line end:   145
char *GetDiabloStr__Fv() {
}


// address: 0x801572B8
// line start: 151
// line end:   152
char BLoad__Fv() {
}


// address: 0x801572D4
// line start: 156
// line end:   162
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80157328
// line start: 181
// line end:   183
unsigned char OLoad__Fv() {
}


// address: 0x8015734C
// line start: 252
// line end:   254
void LoadQuest__Fi(int i) {
}


// address: 0x80157414
// line start: 446
// line end:   447
void BSave__Fc(char v) {
}


// address: 0x8015742C
// line start: 452
// line end:   459
void ISave__Fi(int v) {
}


// address: 0x8015748C
// line start: 476
// line end:   478
void OSave__FUc(unsigned char v) {
}


// address: 0x801574D0
// line start: 543
// line end:   545
void SaveQuest__Fi(int i) {
}


// address: 0x8015759C
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


// address: 0x80157AFC
// line start: 1042
// line end:   1114
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 2
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
}


// address: 0x80157C20
// line start: 1120
// line end:   1128
void PSX_CH_LoadGame__Fi(int slot) {
}


// address: 0x80157CC0
// line start: 1132
// line end:   1138
int PSX_CH_LoadBlock__Fii(int card_number, int file) {
}


// address: 0x80157CE8
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


// address: 0x80157E54
// line start: 1191
// line end:   1206
void RestorePads__Fv() {
}


// address: 0x80157F14
// line start: 1210
// line end:   1225
void StorePads__Fv() {
}


// address: 0x80157FD0
// line start: 1229
// line end:   1232
void GetIcon__Fv() {
}


// address: 0x8015800C
// line start: 1236
// line end:   1253
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80158068
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


// address: 0x80158188
// line start: 1310
// line end:   1331
void LoadOptions__Fv() {
}


// address: 0x80158260
// line start: 1335
// line end:   1350
void SaveOptions__Fv() {
}


// address: 0x80158304
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


