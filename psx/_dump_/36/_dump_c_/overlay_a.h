#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x801380F4
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013829C
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x80138738
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x80138850
// size: 0x380
extern int CreditsTable[224];

// address: 0x80139A64
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x80139F64
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x801399C4
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8013EE78
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x8013EDF4
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8013EDD4
// size: 0x14
extern char *CharFileList[5];

// address: 0x8013EDE8
// size: 0xC
extern char *Classes[3];

// address: 0x8013EE10
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8013EE2C
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8013EE48
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80135544
void PresOnlyTestRoutine__Fv() {
}


// address: 0x8013556C
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80135594
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80135608
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80135684
void FeAddNameTable__FPUci(unsigned char *Table, int Count) {
	{
		// register: 17
		register int YLoop;
		{
			{
				// register: 3
				register int XLoop;
			}
		}
	}
}


// address: 0x801357B4
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


// address: 0x80135BC8
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80135C48
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80135D04
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80135DEC
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80135ED0
int FeGetCursor__Fv() {
}


// address: 0x80135EE4
void FeSelect__Fv() {
}


// address: 0x80135F28
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801360D4
void InitDummyMenu__Fv() {
}


// address: 0x801360DC
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8013619C
void FeInitMainMenu__Fv() {
}


// address: 0x801361FC
void FeInitNewGameMenu__Fv() {
}


// address: 0x8013624C
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x80136380
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801363F4
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80136468
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801364B0
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


// address: 0x8013694C
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80136994
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x801369DC
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


// address: 0x80136F6C
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


// address: 0x8013703C
void FeEnterGame__Fv() {
}


// address: 0x80137064
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801370CC
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80137138
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801371A4
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801371EC
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x801372A4
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801372EC
void FeInitBook1Menu__Fv() {
}


// address: 0x80137338
void FeInitBook2Menu__Fv() {
}


// address: 0x80137384
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80137580
void PlayDemo__Fv() {
}


// address: 0x80137594
void FadeFEOut__Fv() {
}


// address: 0x80137658
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x80137750
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x80137AC8
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


// address: 0x80137ED0
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x80137F90
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80137FB8
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80138014
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80138034
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x80138BE4
void InitCredits__Fv() {
}


// address: 0x80138C20
int PrintCredits__FPciiiii(char *Str, int Y, int CharFade, int RFlag, int GFlag, int BFlag) {
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
}


// address: 0x8013944C
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x80139518
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x801395F4
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


// address: 0x80139878
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x801398F4
int GetCharHeight__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x80139934
int GetCharWidth__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x80139988
void ___7CScreen_addr_80139988(struct CScreen *this, int __in_chrg);

// address: 0x801399A8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8013DF64
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8013DF98
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013E018
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013E098
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8013E11C
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8013E194
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


// address: 0x8013E3A0
int test_card_format__Fi(int card_number) {
}


// address: 0x8013E490
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8013E4CC
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8013E5C4
int read_card_file__FiiiPc(int card_number, int file, int id, char *buf) {
	// register: 20
	register int okay;
	// register: 19
	register int tries;
	// register: 17
	register int fd;
	// register: 2
	register int r;
	// register: 16
	register int size;
	// address: 0xFFFFFD90
	// size: 0x200
	auto struct file_header h;
	// address: 0xFFFFFF90
	// size: 0x50
	auto char path[80];
}


// address: 0x8013E788
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8013E84C
int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf) {
	// address: 0xFFFFFD88
	// size: 0x200
	auto struct file_header h;
	// register: 16
	register int fd;
	// register: 17
	register int failed;
	// register: 22
	register int e;
	// address: 0xFFFFFF88
	// size: 0x50
	auto char path[80];
}


// address: 0x8013EBA4
void new_card__Fi(int card_number) {
}


// address: 0x8013EC38
void service_card__Fi(int card_number) {
	// register: 18
	register int old_status;
}


// address: 0x80158E78
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80158F38
int DoSaveOptions__Fv() {
	// register: 5
	register int delete_file_number;
}


// address: 0x80158F8C
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015905C
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015911C
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


// address: 0x801591C8
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x80159224
void McInitLoadCard1Menu__Fv() {
}


// address: 0x80159270
void McInitLoadCard2Menu__Fv() {
}


// address: 0x801592BC
void ChooseCardLoad__Fv() {
}


// address: 0x80159370
void McInitLoadCharMenu__Fv() {
}


// address: 0x80159398
void McInitLoadGameMenu__Fv() {
}


// address: 0x801593F4
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
}


// address: 0x80159530
void ShowAlertBox__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT um;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 16
	register int W;
	// register: 17
	register int H;
	// address: 0xFFFFFFC8
	auto int oldBot;
	// register: 30
	register int oldTot;
	// register: 19
	register int lines;
	// register: 17
	register int yprintpos;
}


// address: 0x80159704
void ShowCardActionText__FPc(char *Text) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 2
	register int W;
	// register: 17
	register int H;
	// register: 19
	register int oldBot;
	// register: 18
	register int oldTot;
}


// address: 0x80159848
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x801598EC
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x801599C4
void ShowGameFiles__FPciiG4RECT(char *filename, int saveflag, int Spacing, struct RECT ORect) {
	// register: 22
	register int yoff;
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 6
					register int FileNo;
				}
			}
		}
	}
}


// address: 0x80159B2C
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80159B4C
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80159B54
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80159B5C
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80159B68
void ___6Dialog_addr_80159B68(struct Dialog *this, int __in_chrg) {
}


// address: 0x80159B90
// size: 0x10
struct Dialog *__6Dialog_addr_80159B90(struct Dialog *this) {
}


// address: 0x80159BEC
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80159C40
void LoadQuest__Fi(int i) {
}


// address: 0x80159D08
void ISave__Fi(int v) {
}


// address: 0x80159D68
void SaveQuest__Fi(int i) {
}


// address: 0x80159E34
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
	// register: 17
	register int SaveSize;
}


// address: 0x8015A0D4
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 19
	register int DataSize;
	// register: 20
	register unsigned char *LoadBuff;
}


// address: 0x8015A3C0
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015A524
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015A6A4
void RestorePads__Fv() {
}


// address: 0x8015A764
void StorePads__Fv() {
}


// address: 0x8015A820
void GetIcon__Fv() {
}


// address: 0x8015A85C
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015A8C0
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015A958
void LoadOptions__Fv() {
}


// address: 0x8015A9C8
void SaveOptions__Fv() {
}


