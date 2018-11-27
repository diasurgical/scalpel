#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8013B5E0
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013B788
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8013BC24
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013BD3C
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013CF6C
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013D46C
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013CE90
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x80142364
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x801422E0
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x801422C0
// size: 0x14
extern char *CharFileList[5];

// address: 0x801422D4
// size: 0xC
extern char *Classes[3];

// address: 0x801422FC
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x80142318
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80142334
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80138C2C
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80138C54
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80138C7C
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80138CF0
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80138D6C
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


// address: 0x80139180
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80139200
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801392AC
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139394
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139478
int FeGetCursor__Fv() {
}


// address: 0x8013948C
void FeSelect__Fv() {
}


// address: 0x801394D0
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139668
void InitDummyMenu__Fv() {
}


// address: 0x80139670
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80139730
void FeInitMainMenu__Fv() {
}


// address: 0x8013978C
void FeInitNewGameMenu__Fv() {
}


// address: 0x801397DC
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x80139900
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80139974
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801399E8
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80139A30
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


// address: 0x80139ECC
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80139F14
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80139F5C
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


// address: 0x8013A4AC
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


// address: 0x8013A57C
void FeEnterGame__Fv() {
}


// address: 0x8013A5A4
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013A60C
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013A678
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013A6E4
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8013A72C
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013A7E4
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013A82C
void FeInitBook1Menu__Fv() {
}


// address: 0x8013A878
void FeInitBook2Menu__Fv() {
}


// address: 0x8013A8C4
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013AAC0
void PlayDemo__Fv() {
}


// address: 0x8013AAD4
void FadeFEOut__Fv() {
}


// address: 0x8013AB4C
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013AC3C
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013AFB4
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


// address: 0x8013B3BC
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x8013B47C
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013B4A4
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013B500
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013B520
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8013C0D0
void InitCredits__Fv() {
}


// address: 0x8013C10C
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


// address: 0x8013C92C
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013C9F8
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013CAD4
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


// address: 0x8013CD48
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013CDC4
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013CDFC
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013CE54
void ___7CScreen_addr_8013CE54(struct CScreen *this, int __in_chrg);

// address: 0x8013CE74
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8014146C
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x801414A0
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80141520
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x801415A0
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80141634
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x801416BC
int test_hw_event__Fv() {
}


// address: 0x8014174C
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


// address: 0x80141984
int test_card_format__Fi(int card_number) {
}


// address: 0x80141A14
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80141A50
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80141B48
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


// address: 0x80141D00
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x80141DB0
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


// address: 0x801420F8
void new_card__Fi(int card_number) {
}


// address: 0x80142174
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x8015C364
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015C424
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015C4EC
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015C5AC
void DoLoadGame__Fv() {
}


// address: 0x8015C5EC
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015C648
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015C694
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015C6E0
void ChooseCardLoad__Fv() {
}


// address: 0x8015C794
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015C7BC
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015C818
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


// address: 0x8015C9D4
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


// address: 0x8015CB74
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015CC18
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015CCF0
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015CD10
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015CD18
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015CD20
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015CD2C
void ___6Dialog_addr_8015CD2C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015CD54
// size: 0x10
struct Dialog *__6Dialog_addr_8015CD54(struct Dialog *this) {
}


// address: 0x8015CDB0
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015CE04
void LoadQuest__Fi(int i) {
}


// address: 0x8015CECC
void ISave__Fi(int v) {
}


// address: 0x8015CF2C
void SaveQuest__Fi(int i) {
}


// address: 0x8015CFF8
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015D270
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015D520
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015D684
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015D804
void RestorePads__Fv() {
}


// address: 0x8015D8C4
void StorePads__Fv() {
}


// address: 0x8015D980
void GetIcon__Fv() {
}


// address: 0x8015D9BC
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015DA20
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015DAC4
void LoadOptions__Fv() {
}


// address: 0x8015DB3C
void SaveOptions__Fv() {
}


