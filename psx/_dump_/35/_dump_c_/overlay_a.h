#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8013CAB4
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013CC5C
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8013D0F8
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013D210
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013E420
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013E920
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013E380
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x80143834
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x801437B0
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x80143790
// size: 0x14
extern char *CharFileList[5];

// address: 0x801437A4
// size: 0xC
extern char *Classes[3];

// address: 0x801437CC
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x801437E8
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80143804
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80139F2C
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80139F54
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80139F7C
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80139FF0
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8013A06C
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


// address: 0x8013A19C
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


// address: 0x8013A5B0
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A630
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A6DC
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A7C4
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A8A8
int FeGetCursor__Fv() {
}


// address: 0x8013A8BC
void FeSelect__Fv() {
}


// address: 0x8013A900
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013AA98
void InitDummyMenu__Fv() {
}


// address: 0x8013AAA0
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8013AB60
void FeInitMainMenu__Fv() {
}


// address: 0x8013ABBC
void FeInitNewGameMenu__Fv() {
}


// address: 0x8013AC0C
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x8013AD40
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013ADB4
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x8013AE28
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x8013AE70
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


// address: 0x8013B30C
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x8013B354
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8013B39C
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


// address: 0x8013B92C
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


// address: 0x8013B9FC
void FeEnterGame__Fv() {
}


// address: 0x8013BA24
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013BA8C
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013BAF8
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013BB64
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8013BBAC
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013BC64
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013BCAC
void FeInitBook1Menu__Fv() {
}


// address: 0x8013BCF8
void FeInitBook2Menu__Fv() {
}


// address: 0x8013BD44
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013BF40
void PlayDemo__Fv() {
}


// address: 0x8013BF54
void FadeFEOut__Fv() {
}


// address: 0x8013C018
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013C110
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013C488
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


// address: 0x8013C890
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x8013C950
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013C978
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013C9D4
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013C9F4
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8013D5A4
void InitCredits__Fv() {
}


// address: 0x8013D5E0
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


// address: 0x8013DE04
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013DED0
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013DFAC
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


// address: 0x8013E230
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013E2AC
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013E2EC
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013E344
void ___7CScreen_addr_8013E344(struct CScreen *this, int __in_chrg);

// address: 0x8013E364
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80142920
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x80142954
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x801429D4
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80142A54
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80142AD8
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x80142B50
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


// address: 0x80142D5C
int test_card_format__Fi(int card_number) {
}


// address: 0x80142E4C
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80142E88
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80142F80
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


// address: 0x80143144
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80143208
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


// address: 0x80143560
void new_card__Fi(int card_number) {
}


// address: 0x801435F4
void service_card__Fi(int card_number) {
	// register: 18
	register int old_status;
}


// address: 0x8015D834
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015D8F4
int DoSaveOptions__Fv() {
	// register: 5
	register int delete_file_number;
}


// address: 0x8015D948
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015DA18
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015DAD8
void DoLoadGame__Fv() {
}


// address: 0x8015DB68
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015DBC4
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015DC10
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015DC5C
void ChooseCardLoad__Fv() {
}


// address: 0x8015DD10
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015DD38
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015DD94
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
}


// address: 0x8015DED0
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


// address: 0x8015E0A4
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


// address: 0x8015E1E8
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015E28C
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015E364
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


// address: 0x8015E4CC
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015E4EC
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015E4F4
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015E4FC
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015E508
void ___6Dialog_addr_8015E508(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015E530
// size: 0x10
struct Dialog *__6Dialog_addr_8015E530(struct Dialog *this) {
}


// address: 0x8015E58C
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015E5E0
void LoadQuest__Fi(int i) {
}


// address: 0x8015E6A8
void ISave__Fi(int v) {
}


// address: 0x8015E708
void SaveQuest__Fi(int i) {
}


// address: 0x8015E7D4
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


// address: 0x8015EA74
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


// address: 0x8015ED60
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015EEC4
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015F044
void RestorePads__Fv() {
}


// address: 0x8015F104
void StorePads__Fv() {
}


// address: 0x8015F1C0
void GetIcon__Fv() {
}


// address: 0x8015F1FC
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015F260
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015F2F8
void LoadOptions__Fv() {
}


// address: 0x8015F368
void SaveOptions__Fv() {
}


