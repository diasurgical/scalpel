#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x80144A9C
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x80144C44
// size: 0xD0
extern struct Creds CreditsSubTitle[26];

// address: 0x801450B8
// size: 0x108
extern struct Creds CreditsText[33];

// address: 0x801451C0
// size: 0x380
extern int CreditsTable[224];

// address: 0x80147960
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x80147E60
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x80147884
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x8014CE0C
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x8014CDEC
// size: 0x14
extern char *CharFileList[5];

// address: 0x8014CE00
// size: 0xC
extern char *Classes[3];

// address: 0x8014CE28
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x8014CE44
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x8014CE60
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x801419A4
void PresOnlyTestRoutine__Fv() {
}


// address: 0x801419CC
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801419F4
void FeAddEntry__Fii8TXT_JUSTPcP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, char *Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80141A64
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// register: 5
	register int X;
	// register: 6
	register int Y;
	// register: 3
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 17
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


// address: 0x80141E14
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80141E80
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80141EF8
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80141FE0
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801420C4
int FeGetCursor__Fv() {
}


// address: 0x801420D8
void FeSelect__Fv() {
}


// address: 0x8014211C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80142308
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x801423F4
void FeInitMainMenu__Fv() {
}


// address: 0x8014251C
void FeInitNewGameMenu__Fv() {
}


// address: 0x801425E0
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801426D4
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801427D0
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801428CC
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80142914
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


// address: 0x80142D98
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801431BC
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x801435E0
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


// address: 0x801439F8
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80143A9C
void FeEnterGame__Fv() {
}


// address: 0x80143ADC
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80143B94
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80143C04
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80143C74
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80143D48
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80143E00
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80143EE8
void FeInitBook1Menu__Fv() {
}


// address: 0x80143FE4
void FeInitBook2Menu__Fv() {
}


// address: 0x801440E0
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x801442DC
void InitDummyMenu__Fv() {
}


// address: 0x801442E4
void PlayDemo__Fv() {
}


// address: 0x801442F8
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF80
	// size: 0x74
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


// address: 0x80144694
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


// address: 0x80144958
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80144980
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x801449DC
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x80145554
void InitCredits__Fv() {
}


// address: 0x80145590
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


// address: 0x80145DB0
void DrawCreditsTitle__Fiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo) {
}


// address: 0x80145E80
void DrawCreditsSubTitle__Fiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo) {
}


// address: 0x80145F50
void DoCredits__Fv() {
	// address: 0xFFFFFF60
	// size: 0x74
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


// address: 0x801461A8
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80146224
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8014625C
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x801462B4
void ___7CScreen_addr_801462B4(struct CScreen *this, int __in_chrg);

// address: 0x801462D4
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8014662C
void DsDataCallback() {
}


// address: 0x80146634
void DsReadyCallback() {
}


// address: 0x8014663C
void SetDecDCT() {
}


// address: 0x80146644
short PlayFMV(struct StrInfo *str) {
	// address: 0xFFFFFFC0
	// size: 0x18
	auto struct CdlFILE fp;
	// register: 16
	register unsigned long *frame;
	// register: 17
	register short frameRetry;
	// register: 18
	register short strQuit;
	// address: 0xFFFFFFD8
	auto short fadeVol;
	{
		// register: 2
		// size: 0x6C
		register struct CPad *P1;
	}
}


// address: 0x801469B4
void StrDecDCToutCB() {
}


// address: 0x80146ABC
void STR_CallBack(int handle) {
}


// address: 0x80146ACC
void STR_SetRing() {
}


// address: 0x80146B28
void STR_RingEnd() {
}


// address: 0x80146B4C
unsigned long *STR_GetNext() {
	// register: 19
	register unsigned long *addr;
	// register: 18
	register int count;
	// register: 16
	// size: 0x8
	register struct chunkhdrstruct *chunk;
	// register: 17
	register int frameoff;
	{
		// register: 4
		register int i;
		{
			{
				// register: 4
				register int i;
			}
		}
	}
}


// address: 0x80146D08
void StrInit(struct StrInfo *str) {
	// register: 23
	register short x;
	// register: 22
	register short y;
	// register: 30
	register short w;
	// register: 21
	register short h;
	// register: 20
	register short scrWidth;
	// register: 16
	register unsigned long imageBufSize;
	{
		// register: 4
		register int i;
	}
}


// address: 0x8014713C
void StrEnd() {
}


// address: 0x801471FC
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8014726C
short StrKickCD(struct CdlLOC *loc) {
	// register: 16
	register short seekRetry;
	// register: 17
	register short readRetry;
}


// address: 0x80147320
unsigned long *StrGetNextFrame() {
	// register: 16
	register long timer;
	// register: 17
	register unsigned long *addr;
	// register: 16
	// size: 0x20
	register struct StHEADER *sector;
}


// address: 0x801474FC
void StrVLCFrame(unsigned long *frame) {
}


// address: 0x801475A4
void StrDrawDecodeSync() {
	// register: 3
	register long timer;
}


// address: 0x80147678
short StrFadeOutVol(short *fadeVol) {
}


// address: 0x801476AC
long GetDCToutSize() {
	// register: 3
	register unsigned short h;
}


// address: 0x8014771C
unsigned short ScalePPW(unsigned short n) {
}


// address: 0x80147750
unsigned short GetDCT_MODE() {
}


// address: 0x80147774
void PrintVLCBufSize() {
}


// address: 0x8014781C
unsigned long FMVAllocMem(unsigned long MemSize) {
}


// address: 0x8014783C
void FMVFreeMem(unsigned long *Addr) {
}


// address: 0x8014785C
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x8014BE60
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8014BE94
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8014BF14
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8014BF94
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8014C028
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8014C0B0
int test_hw_event__Fv() {
}


// address: 0x8014C140
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


// address: 0x8014C378
int test_card_format__Fi(int card_number) {
}


// address: 0x8014C408
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8014C444
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8014C53C
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


// address: 0x8014C6F4
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x8014C7A4
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


// address: 0x8014CAEC
void new_card__Fi(int card_number) {
}


// address: 0x8014CB68
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x8014CED8
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8014CF98
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014D060
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8014D120
void DoLoadGame__Fv() {
}


// address: 0x8014D160
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8014D1BC
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8014D208
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8014D254
void ChooseCardLoad__Fv() {
}


// address: 0x8014D2F4
void McInitLoadCharMenu__Fv() {
}


// address: 0x8014D31C
void McInitLoadGameMenu__Fv() {
}


// address: 0x8014D390
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


// address: 0x8014D53C
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


// address: 0x8014D678
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8014D710
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8014D7F8
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8014D818
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014D820
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014D828
void ___6Dialog_addr_8014D828(struct Dialog *this, int __in_chrg) {
}


// address: 0x8014D850
// size: 0x10
struct Dialog *__6Dialog_addr_8014D850(struct Dialog *this) {
}


// address: 0x8014D8AC
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8014D900
void LoadQuest__Fi(int i) {
}


// address: 0x8014D9C8
void ISave__Fi(int v) {
}


// address: 0x8014DA28
void SaveQuest__Fi(int i) {
}


// address: 0x8014DAF4
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8014DD50
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
}


// address: 0x8014E074
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 17
	register int result;
	// register: 16
	register unsigned char *LoadBuff;
}


// address: 0x8014E1E0
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


