#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x80125A54
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x80125BFC
// size: 0xD0
extern struct Creds CreditsSubTitle[26];

// address: 0x80126070
// size: 0x108
extern struct Creds CreditsText[33];

// address: 0x80126178
// size: 0x380
extern int CreditsTable[224];

// address: 0x80127384
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x80127884
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x801272A8
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8012C8C8
// size: 0x1C000
extern unsigned char save_buffer[114688];

// address: 0x8012C830
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8012C810
// size: 0x14
extern char *CharFileList[5];

// address: 0x8012C824
// size: 0xC
extern char *Classes[3];

// address: 0x8012C84C
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8012C868
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8012C884
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x801234F4
void PresOnlyTestRoutine__Fv() {
}


// address: 0x8012351C
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80123544
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x801235B4
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80123634
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


// address: 0x80123AC4
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123B30
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123BA8
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123C90
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123D74
int FeGetCursor__Fv() {
}


// address: 0x80123D88
void FeSelect__Fv() {
}


// address: 0x80123DCC
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80123FB8
void InitDummyMenu__Fv() {
}


// address: 0x80123FC0
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80124084
void FeInitMainMenu__Fv() {
}


// address: 0x801240E4
void FeInitNewGameMenu__Fv() {
}


// address: 0x80124130
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80124224
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80124274
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801242C4
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x8012430C
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


// address: 0x801247A8
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801247F8
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80124848
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


// address: 0x80124CD0
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80124D74
void FeEnterGame__Fv() {
}


// address: 0x80124D9C
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80124DE4
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80124E50
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80124EBC
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80124F00
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80124FB8
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80125000
void FeInitBook1Menu__Fv() {
}


// address: 0x8012504C
void FeInitBook2Menu__Fv() {
}


// address: 0x80125098
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80125294
void PlayDemo__Fv() {
}


// address: 0x801252A8
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


// address: 0x8012564C
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


// address: 0x80125910
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80125938
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80125994
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8012650C
void InitCredits__Fv() {
}


// address: 0x80126548
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


// address: 0x80126D68
void DrawCreditsTitle__Fiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo) {
}


// address: 0x80126E38
void DrawCreditsSubTitle__Fiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo) {
}


// address: 0x80126F08
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


// address: 0x80127160
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x801271DC
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80127214
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8012726C
void ___7CScreen_addr_8012726C(struct CScreen *this, int __in_chrg);

// address: 0x8012728C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8012B884
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8012B8B8
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012B938
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8012B9B8
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8012BA4C
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8012BAD4
int test_hw_event__Fv() {
}


// address: 0x8012BB64
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


// address: 0x8012BD9C
int test_card_format__Fi(int card_number) {
}


// address: 0x8012BE2C
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8012BE68
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8012BF60
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


// address: 0x8012C118
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x8012C1C8
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


// address: 0x8012C510
void new_card__Fi(int card_number) {
}


// address: 0x8012C58C
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x801488C8
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80148988
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80148A50
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x80148B10
void DoLoadGame__Fv() {
}


// address: 0x80148B50
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x80148BAC
void McInitLoadCard1Menu__Fv() {
}


// address: 0x80148BF8
void McInitLoadCard2Menu__Fv() {
}


// address: 0x80148C44
void ChooseCardLoad__Fv() {
}


// address: 0x80148CE0
void McInitLoadCharMenu__Fv() {
}


// address: 0x80148D08
void McInitLoadGameMenu__Fv() {
}


// address: 0x80148D7C
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


// address: 0x80148F28
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


// address: 0x80149064
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x801490FC
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x801491E4
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80149204
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014920C
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80149214
void ___6Dialog_addr_80149214(struct Dialog *this, int __in_chrg) {
}


// address: 0x8014923C
// size: 0x10
struct Dialog *__6Dialog_addr_8014923C(struct Dialog *this) {
}


// address: 0x80149298
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x801492EC
void LoadQuest__Fi(int i) {
}


// address: 0x801493B4
void ISave__Fi(int v) {
}


// address: 0x80149414
void SaveQuest__Fi(int i) {
}


// address: 0x801494E0
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x80149728
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x801499A4
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 17
	register int result;
	// register: 16
	register unsigned char *LoadBuff;
}


// address: 0x80149B10
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


