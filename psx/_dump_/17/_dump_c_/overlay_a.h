#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x801241F0
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x80124398
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x80124834
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8012494C
// size: 0x380
extern int CreditsTable[224];

// address: 0x80125B74
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x80126074
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x80125A98
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8012AF74
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x8012AEDC
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8012AEBC
// size: 0x14
extern char *CharFileList[5];

// address: 0x8012AED0
// size: 0xC
extern char *Classes[3];

// address: 0x8012AEF8
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8012AF14
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8012AF30
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80121A34
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80121A5C
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80121A84
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80121AF4
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80121B74
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


// address: 0x8012202C
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80122098
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80122110
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801221F8
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801222DC
int FeGetCursor__Fv() {
}


// address: 0x801222F0
void FeSelect__Fv() {
}


// address: 0x80122334
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80122540
void InitDummyMenu__Fv() {
}


// address: 0x80122548
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8012260C
void FeInitMainMenu__Fv() {
}


// address: 0x80122668
void FeInitNewGameMenu__Fv() {
}


// address: 0x801226B4
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801227A8
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801227F8
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80122848
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80122890
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


// address: 0x80122D2C
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80122D7C
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80122DCC
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


// address: 0x8012331C
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


// address: 0x801233EC
void FeEnterGame__Fv() {
}


// address: 0x80123414
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8012347C
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x801234E8
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80123554
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80123598
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80123650
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80123698
void FeInitBook1Menu__Fv() {
}


// address: 0x801236E4
void FeInitBook2Menu__Fv() {
}


// address: 0x80123730
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8012392C
void PlayDemo__Fv() {
}


// address: 0x80123940
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801239F4
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


// address: 0x80123D64
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


// address: 0x80124098
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x801240C0
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8012411C
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80124CE0
void InitCredits__Fv() {
}


// address: 0x80124D1C
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


// address: 0x8012553C
void DrawCreditsTitle__Fiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo) {
}


// address: 0x8012560C
void DrawCreditsSubTitle__Fiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo) {
}


// address: 0x801256EC
void DoCredits__Fv() {
	// address: 0xFFFFFF60
	// size: 0x78
	auto struct CScreen CreditsBack;
	// register: 30
	register int Y;
	// register: 18
	register int Fade;
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


// address: 0x80125950
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x801259CC
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80125A04
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80125A5C
void ___7CScreen_addr_80125A5C(struct CScreen *this, int __in_chrg);

// address: 0x80125A7C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8012A074
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8012A0A8
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012A128
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012A1A8
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8012A23C
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8012A2C4
int test_hw_event__Fv() {
}


// address: 0x8012A354
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


// address: 0x8012A58C
int test_card_format__Fi(int card_number) {
}


// address: 0x8012A61C
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8012A658
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8012A750
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


// address: 0x8012A908
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x8012A9B8
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


// address: 0x8012AD00
void new_card__Fi(int card_number) {
}


// address: 0x8012AD7C
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x80144F74
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80145034
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x801450F4
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x801451AC
void DoLoadGame__Fv() {
}


// address: 0x801451EC
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x80145248
void McInitLoadCard1Menu__Fv() {
}


// address: 0x80145294
void McInitLoadCard2Menu__Fv() {
}


// address: 0x801452E0
void ChooseCardLoad__Fv() {
}


// address: 0x80145394
void McInitLoadCharMenu__Fv() {
}


// address: 0x801453BC
void McInitLoadGameMenu__Fv() {
}


// address: 0x80145418
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


// address: 0x801455D4
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


// address: 0x80145774
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x801457F4
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x801458CC
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x801458EC
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x801458F4
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x801458FC
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80145908
void ___6Dialog_addr_80145908(struct Dialog *this, int __in_chrg) {
}


// address: 0x80145930
// size: 0x10
struct Dialog *__6Dialog_addr_80145930(struct Dialog *this) {
}


// address: 0x8014598C
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x801459E0
void LoadQuest__Fi(int i) {
}


// address: 0x80145AA8
void ISave__Fi(int v) {
}


// address: 0x80145B08
void SaveQuest__Fi(int i) {
}


// address: 0x80145BD4
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x80145E88
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8014617C
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8014629C
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 10
	register unsigned char *SaveBuff;
}


// address: 0x801463EC
void RestorePads__Fv() {
}


// address: 0x801464AC
void StorePads__Fv() {
}


