#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8013A2E4
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013A48C
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8013A928
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013AA40
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013BC70
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013C170
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013BB94
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x80141068
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x80140FE4
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x80140FC4
// size: 0x14
extern char *CharFileList[5];

// address: 0x80140FD8
// size: 0xC
extern char *Classes[3];

// address: 0x80141000
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8014101C
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80141038
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x801379C4
void PresOnlyTestRoutine__Fv() {
}


// address: 0x801379EC
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80137A14
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80137A88
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80137B04
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


// address: 0x80137EF4
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80137F74
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80137FF8
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801380E0
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801381C4
int FeGetCursor__Fv() {
}


// address: 0x801381D8
void FeSelect__Fv() {
}


// address: 0x8013821C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80138428
void InitDummyMenu__Fv() {
}


// address: 0x80138430
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x801384F0
void FeInitMainMenu__Fv() {
}


// address: 0x8013854C
void FeInitNewGameMenu__Fv() {
}


// address: 0x80138598
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x8013868C
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801386FC
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x8013876C
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801387B4
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


// address: 0x80138C50
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80138CA0
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80138CF0
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


// address: 0x80139240
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


// address: 0x80139310
void FeEnterGame__Fv() {
}


// address: 0x80139338
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801393A0
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013940C
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80139478
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801394BC
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80139574
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801395BC
void FeInitBook1Menu__Fv() {
}


// address: 0x80139608
void FeInitBook2Menu__Fv() {
}


// address: 0x80139654
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80139850
void PlayDemo__Fv() {
}


// address: 0x80139864
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139908
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


// address: 0x80139CC4
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


// address: 0x8013A0CC
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x8013A18C
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013A1B4
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013A210
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013ADD4
void InitCredits__Fv() {
}


// address: 0x8013AE10
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


// address: 0x8013B630
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013B6FC
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013B7D8
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


// address: 0x8013BA4C
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013BAC8
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013BB00
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013BB58
void ___7CScreen_addr_8013BB58(struct CScreen *this, int __in_chrg);

// address: 0x8013BB78
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80140170
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x801401A4
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80140224
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x801402A4
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80140338
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x801403C0
int test_hw_event__Fv() {
}


// address: 0x80140450
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


// address: 0x80140688
int test_card_format__Fi(int card_number) {
}


// address: 0x80140718
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80140754
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8014084C
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


// address: 0x80140A04
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x80140AB4
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


// address: 0x80140DFC
void new_card__Fi(int card_number) {
}


// address: 0x80140E78
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x8015B068
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015B128
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015B1F0
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015B2B0
void DoLoadGame__Fv() {
}


// address: 0x8015B2F0
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015B34C
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015B398
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015B3E4
void ChooseCardLoad__Fv() {
}


// address: 0x8015B498
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015B4C0
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015B51C
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


// address: 0x8015B6D8
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


// address: 0x8015B878
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015B8F8
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015B9D0
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015B9F0
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015B9F8
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015BA00
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015BA0C
void ___6Dialog_addr_8015BA0C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015BA34
// size: 0x10
struct Dialog *__6Dialog_addr_8015BA34(struct Dialog *this) {
}


// address: 0x8015BA90
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015BAE4
void LoadQuest__Fi(int i) {
}


// address: 0x8015BBAC
void ISave__Fi(int v) {
}


// address: 0x8015BC0C
void SaveQuest__Fi(int i) {
}


// address: 0x8015BCD8
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015BFA0
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015C29C
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C3C4
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015C544
void RestorePads__Fv() {
}


// address: 0x8015C604
void StorePads__Fv() {
}


// address: 0x8015C6C0
void GetIcon__Fv() {
}


// address: 0x8015C6FC
int PSX_OPT_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C7A4
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


