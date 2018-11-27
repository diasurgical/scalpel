#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x80132930
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x80132AD8
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x80132F74
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013308C
// size: 0x380
extern int CreditsTable[224];

// address: 0x801342BC
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x801347BC
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x801341E0
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x801396BC
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x80139624
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x80139604
// size: 0x14
extern char *CharFileList[5];

// address: 0x80139618
// size: 0xC
extern char *Classes[3];

// address: 0x80139640
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8013965C
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80139678
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x8013015C
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80130184
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801301AC
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x8013021C
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8013029C
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
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


// address: 0x80130754
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801307D4
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80130858
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80130940
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80130A24
int FeGetCursor__Fv() {
}


// address: 0x80130A38
void FeSelect__Fv() {
}


// address: 0x80130A7C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80130C88
void InitDummyMenu__Fv() {
}


// address: 0x80130C90
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80130D54
void FeInitMainMenu__Fv() {
}


// address: 0x80130DB0
void FeInitNewGameMenu__Fv() {
}


// address: 0x80130DFC
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80130EF0
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80130F40
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80130F90
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80130FD8
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


// address: 0x80131474
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801314C4
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80131514
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


// address: 0x80131A64
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


// address: 0x80131B34
void FeEnterGame__Fv() {
}


// address: 0x80131B5C
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80131BC4
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80131C30
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80131C9C
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80131CE0
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80131D98
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80131DE0
void FeInitBook1Menu__Fv() {
}


// address: 0x80131E2C
void FeInitBook2Menu__Fv() {
}


// address: 0x80131E78
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80132074
void PlayDemo__Fv() {
}


// address: 0x80132088
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013213C
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


// address: 0x801324AC
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


// address: 0x801327D8
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80132800
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013285C
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80133420
void InitCredits__Fv() {
}


// address: 0x8013345C
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


// address: 0x80133C7C
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x80133D48
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x80133E24
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


// address: 0x80134098
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80134114
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013414C
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x801341A4
void ___7CScreen_addr_801341A4(struct CScreen *this, int __in_chrg);

// address: 0x801341C4
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x801387BC
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x801387F0
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80138870
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x801388F0
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80138984
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x80138A0C
int test_hw_event__Fv() {
}


// address: 0x80138A9C
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


// address: 0x80138CD4
int test_card_format__Fi(int card_number) {
}


// address: 0x80138D64
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80138DA0
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80138E98
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


// address: 0x80139050
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x80139100
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


// address: 0x80139448
void new_card__Fi(int card_number) {
}


// address: 0x801394C4
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x801536BC
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015377C
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80153844
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80153904
void DoLoadGame__Fv() {
}


// address: 0x80153944
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x801539A0
void McInitLoadCard1Menu__Fv() {
}


// address: 0x801539EC
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80153A38
void ChooseCardLoad__Fv() {
}


// address: 0x80153AEC
void McInitLoadCharMenu__Fv() {
}


// address: 0x80153B14
void McInitLoadGameMenu__Fv() {
}


// address: 0x80153B70
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


// address: 0x80153D2C
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


// address: 0x80153ECC
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x80153F4C
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x80154024
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80154044
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015404C
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80154054
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80154060
void ___6Dialog_addr_80154060(struct Dialog *this, int __in_chrg) {
}


// address: 0x80154088
// size: 0x10
struct Dialog *__6Dialog_addr_80154088(struct Dialog *this) {
}


// address: 0x801540E4
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80154138
void LoadQuest__Fi(int i) {
}


// address: 0x80154200
void ISave__Fi(int v) {
}


// address: 0x80154260
void SaveQuest__Fi(int i) {
}


// address: 0x8015432C
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x801545E0
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x801548DC
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80154A04
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 10
	register unsigned char *SaveBuff;
}


// address: 0x80154B5C
void RestorePads__Fv() {
}


// address: 0x80154C1C
void StorePads__Fv() {
}


