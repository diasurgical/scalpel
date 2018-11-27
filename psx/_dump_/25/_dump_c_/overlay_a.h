#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x80127F74
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8012811C
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x801285B8
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x801286D0
// size: 0x380
extern int CreditsTable[224];

// address: 0x80129900
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x80129E00
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x80129824
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8012ECEC
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x8012EC68
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8012EC48
// size: 0x14
extern char *CharFileList[5];

// address: 0x8012EC5C
// size: 0xC
extern char *Classes[3];

// address: 0x8012EC84
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8012ECA0
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8012ECBC
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x801256F4
void PresOnlyTestRoutine__Fv() {
}


// address: 0x8012571C
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80125744
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x801257B8
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80125834
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
		}
	}
}


// address: 0x80125D74
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80125DF4
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80125E78
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80125F60
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80126044
int FeGetCursor__Fv() {
}


// address: 0x80126058
void FeSelect__Fv() {
}


// address: 0x8012609C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801262A8
void InitDummyMenu__Fv() {
}


// address: 0x801262B0
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80126370
void FeInitMainMenu__Fv() {
}


// address: 0x801263CC
void FeInitNewGameMenu__Fv() {
}


// address: 0x80126418
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x8012650C
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8012657C
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801265EC
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80126634
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


// address: 0x80126AD0
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80126B20
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80126B70
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


// address: 0x801270B4
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


// address: 0x80127184
void FeEnterGame__Fv() {
}


// address: 0x801271AC
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80127214
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80127280
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801272EC
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80127330
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x801273E8
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80127430
void FeInitBook1Menu__Fv() {
}


// address: 0x8012747C
void FeInitBook2Menu__Fv() {
}


// address: 0x801274C8
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x801276C4
void PlayDemo__Fv() {
}


// address: 0x801276D8
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80127774
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


// address: 0x80127AF0
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


// address: 0x80127E1C
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80127E44
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80127EA0
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80128A64
void InitCredits__Fv() {
}


// address: 0x80128AA0
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


// address: 0x801292C0
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8012938C
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x80129468
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


// address: 0x801296DC
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80129758
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80129790
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x801297E8
void ___7CScreen_addr_801297E8(struct CScreen *this, int __in_chrg);

// address: 0x80129808
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8012DE00
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8012DE34
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012DEB4
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012DF34
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8012DFC8
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8012E050
int test_hw_event__Fv() {
}


// address: 0x8012E0E0
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


// address: 0x8012E318
int test_card_format__Fi(int card_number) {
}


// address: 0x8012E3A8
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8012E3E4
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8012E4DC
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


// address: 0x8012E694
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x8012E744
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


// address: 0x8012EA8C
void new_card__Fi(int card_number) {
}


// address: 0x8012EB08
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x80148CEC
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80148DAC
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80148E74
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80148F34
void DoLoadGame__Fv() {
}


// address: 0x80148F74
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x80148FD0
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8014901C
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80149068
void ChooseCardLoad__Fv() {
}


// address: 0x8014911C
void McInitLoadCharMenu__Fv() {
}


// address: 0x80149144
void McInitLoadGameMenu__Fv() {
}


// address: 0x801491A0
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


// address: 0x8014935C
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


// address: 0x801494FC
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8014957C
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x80149654
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80149674
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014967C
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80149684
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80149690
void ___6Dialog_addr_80149690(struct Dialog *this, int __in_chrg) {
}


// address: 0x801496B8
// size: 0x10
struct Dialog *__6Dialog_addr_801496B8(struct Dialog *this) {
}


// address: 0x80149714
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80149768
void LoadQuest__Fi(int i) {
}


// address: 0x80149830
void ISave__Fi(int v) {
}


// address: 0x80149890
void SaveQuest__Fi(int i) {
}


// address: 0x8014995C
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x80149C24
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x80149F20
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8014A048
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8014A1C8
void RestorePads__Fv() {
}


// address: 0x8014A288
void StorePads__Fv() {
}


// address: 0x8014A344
void GetIcon__Fv() {
}


