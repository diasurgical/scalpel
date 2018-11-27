#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8012526C
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x80125414
// size: 0xD0
extern struct Creds CreditsSubTitle[26];

// address: 0x80125888
// size: 0x108
extern struct Creds CreditsText[33];

// address: 0x80125990
// size: 0x380
extern int CreditsTable[224];

// address: 0x80126BA0
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x801270A0
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x80126AC4
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8012C0E4
// size: 0x1C000
extern unsigned char save_buffer[114688];

// address: 0x8012C04C
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8012C02C
// size: 0x14
extern char *CharFileList[5];

// address: 0x8012C040
// size: 0xC
extern char *Classes[3];

// address: 0x8012C068
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8012C084
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8012C0A0
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80122CDC
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80122D04
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80122D2C
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80122D9C
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80122E1C
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
				}
			}
		}
	}
}


// address: 0x801232AC
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123318
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123390
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123478
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8012355C
int FeGetCursor__Fv() {
}


// address: 0x80123570
void FeSelect__Fv() {
}


// address: 0x801235B4
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801237A4
void InitDummyMenu__Fv() {
}


// address: 0x801237AC
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80123870
void FeInitMainMenu__Fv() {
}


// address: 0x801238D0
void FeInitNewGameMenu__Fv() {
}


// address: 0x8012391C
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80123A10
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80123A60
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80123AB0
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80123AF8
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


// address: 0x80123F94
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80123FE4
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80124034
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


// address: 0x801244BC
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80124560
void FeEnterGame__Fv() {
}


// address: 0x80124588
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801245D0
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8012463C
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801246A8
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801246EC
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x801247A4
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801247EC
void FeInitBook1Menu__Fv() {
}


// address: 0x80124838
void FeInitBook2Menu__Fv() {
}


// address: 0x80124884
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80124A80
void PlayDemo__Fv() {
}


// address: 0x80124A94
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF78
	// size: 0x78
	auto struct CScreen FeScreen;
	// register: 17
	register int fadeval;
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


// address: 0x80124E64
void McMainCharKeyCtrl__Fv() {
	// register: 16
	register int j;
	// register: 19
	register int Spacing;
	// register: 9
	register int fileno;
	// register: 8
	register int sr;
	// register: 3
	register int sg;
	// register: 2
	register int sb;
}


// address: 0x80125128
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80125150
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x801251AC
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80125D24
void InitCredits__Fv() {
}


// address: 0x80125D60
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


// address: 0x80126580
void DrawCreditsTitle__Fiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo) {
}


// address: 0x80126650
void DrawCreditsSubTitle__Fiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo) {
}


// address: 0x80126720
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


// address: 0x8012697C
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x801269F8
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80126A30
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80126A88
void ___7CScreen_addr_80126A88(struct CScreen *this, int __in_chrg);

// address: 0x80126AA8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8012B0A0
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8012B0D4
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012B154
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012B1D4
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8012B268
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8012B2F0
int test_hw_event__Fv() {
}


// address: 0x8012B380
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


// address: 0x8012B5B8
int test_card_format__Fi(int card_number) {
}


// address: 0x8012B648
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8012B684
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8012B77C
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


// address: 0x8012B934
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x8012B9E4
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


// address: 0x8012BD2C
void new_card__Fi(int card_number) {
}


// address: 0x8012BDA8
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x801480E4
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x801481A4
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014826C
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014832C
void DoLoadGame__Fv() {
}


// address: 0x8014836C
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x801483C8
void McInitLoadCard1Menu__Fv() {
}


// address: 0x80148414
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80148460
void ChooseCardLoad__Fv() {
}


// address: 0x801484FC
void McInitLoadCharMenu__Fv() {
}


// address: 0x80148524
void McInitLoadGameMenu__Fv() {
}


// address: 0x80148598
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


// address: 0x80148744
void ShowAlertBox__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT um;
	// register: 2
	register int lines;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 2
	register int W;
	// register: 16
	register int H;
}


// address: 0x80148880
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x80148918
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x80148A00
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80148A20
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80148A28
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80148A30
void ___6Dialog_addr_80148A30(struct Dialog *this, int __in_chrg) {
}


// address: 0x80148A58
// size: 0x10
struct Dialog *__6Dialog_addr_80148A58(struct Dialog *this) {
}


// address: 0x80148AB4
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80148B08
void LoadQuest__Fi(int i) {
}


// address: 0x80148BD0
void ISave__Fi(int v) {
}


// address: 0x80148C30
void SaveQuest__Fi(int i) {
}


// address: 0x80148CFC
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x80148F44
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x801491C0
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80149304
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 10
	register unsigned char *SaveBuff;
}


