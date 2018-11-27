#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8013A5F4
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013A79C
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8013AC38
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013AD50
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013BF80
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013C480
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013BEA4
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x80141378
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x801412F4
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x801412D4
// size: 0x14
extern char *CharFileList[5];

// address: 0x801412E8
// size: 0xC
extern char *Classes[3];

// address: 0x80141310
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8014132C
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80141348
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80137CD4
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80137CFC
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80137D24
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80137D98
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80137E14
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


// address: 0x80138204
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80138284
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80138308
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801383F0
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801384D4
int FeGetCursor__Fv() {
}


// address: 0x801384E8
void FeSelect__Fv() {
}


// address: 0x8013852C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80138738
void InitDummyMenu__Fv() {
}


// address: 0x80138740
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80138800
void FeInitMainMenu__Fv() {
}


// address: 0x8013885C
void FeInitNewGameMenu__Fv() {
}


// address: 0x801388A8
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x8013899C
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80138A0C
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80138A7C
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80138AC4
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


// address: 0x80138F60
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80138FB0
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80139000
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


// address: 0x80139550
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


// address: 0x80139620
void FeEnterGame__Fv() {
}


// address: 0x80139648
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801396B0
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013971C
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80139788
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801397CC
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80139884
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801398CC
void FeInitBook1Menu__Fv() {
}


// address: 0x80139918
void FeInitBook2Menu__Fv() {
}


// address: 0x80139964
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80139B60
void PlayDemo__Fv() {
}


// address: 0x80139B74
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139C18
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


// address: 0x80139FD4
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


// address: 0x8013A3DC
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x8013A49C
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013A4C4
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013A520
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013B0E4
void InitCredits__Fv() {
}


// address: 0x8013B120
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


// address: 0x8013B940
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013BA0C
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013BAE8
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


// address: 0x8013BD5C
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013BDD8
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013BE10
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013BE68
void ___7CScreen_addr_8013BE68(struct CScreen *this, int __in_chrg);

// address: 0x8013BE88
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80140480
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x801404B4
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80140534
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x801405B4
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80140648
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x801406D0
int test_hw_event__Fv() {
}


// address: 0x80140760
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


// address: 0x80140998
int test_card_format__Fi(int card_number) {
}


// address: 0x80140A28
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80140A64
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80140B5C
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


// address: 0x80140D14
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x80140DC4
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


// address: 0x8014110C
void new_card__Fi(int card_number) {
}


// address: 0x80141188
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x8015B378
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015B438
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015B500
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015B5C0
void DoLoadGame__Fv() {
}


// address: 0x8015B600
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015B65C
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015B6A8
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015B6F4
void ChooseCardLoad__Fv() {
}


// address: 0x8015B7A8
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015B7D0
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015B82C
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


// address: 0x8015B9E8
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


// address: 0x8015BB88
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015BC2C
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015BD04
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015BD24
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015BD2C
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015BD34
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015BD40
void ___6Dialog_addr_8015BD40(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015BD68
// size: 0x10
struct Dialog *__6Dialog_addr_8015BD68(struct Dialog *this) {
}


// address: 0x8015BDC4
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015BE18
void LoadQuest__Fi(int i) {
}


// address: 0x8015BEE0
void ISave__Fi(int v) {
}


// address: 0x8015BF40
void SaveQuest__Fi(int i) {
}


// address: 0x8015C00C
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015C2D4
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015C5D0
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C6F8
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015C878
void RestorePads__Fv() {
}


// address: 0x8015C938
void StorePads__Fv() {
}


// address: 0x8015C9F4
void GetIcon__Fv() {
}


// address: 0x8015CA30
int PSX_OPT_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015CAD8
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


