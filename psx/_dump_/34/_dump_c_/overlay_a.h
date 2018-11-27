#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x8013BD84
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013BF2C
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8013C3C8
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013C4E0
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013D720
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013DC20
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013D644
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x80142B18
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x80142A94
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x80142A74
// size: 0x14
extern char *CharFileList[5];

// address: 0x80142A88
// size: 0xC
extern char *Classes[3];

// address: 0x80142AB0
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x80142ACC
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80142AE8
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x8013923C
void PresOnlyTestRoutine__Fv() {
}


// address: 0x80139264
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x8013928C
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80139300
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8013937C
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


// address: 0x801394AC
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


// address: 0x801398C0
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80139940
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801399EC
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139AD4
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139BB8
int FeGetCursor__Fv() {
}


// address: 0x80139BCC
void FeSelect__Fv() {
}


// address: 0x80139C10
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139DA8
void InitDummyMenu__Fv() {
}


// address: 0x80139DB0
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80139E70
void FeInitMainMenu__Fv() {
}


// address: 0x80139ECC
void FeInitNewGameMenu__Fv() {
}


// address: 0x80139F1C
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x8013A050
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013A0C4
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x8013A138
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x8013A180
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


// address: 0x8013A61C
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x8013A664
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8013A6AC
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


// address: 0x8013ABFC
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


// address: 0x8013ACCC
void FeEnterGame__Fv() {
}


// address: 0x8013ACF4
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013AD5C
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013ADC8
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013AE34
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8013AE7C
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013AF34
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013AF7C
void FeInitBook1Menu__Fv() {
}


// address: 0x8013AFC8
void FeInitBook2Menu__Fv() {
}


// address: 0x8013B014
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013B210
void PlayDemo__Fv() {
}


// address: 0x8013B224
void FadeFEOut__Fv() {
}


// address: 0x8013B2E8
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013B3E0
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013B758
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


// address: 0x8013BB60
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


// address: 0x8013BC20
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013BC48
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013BCA4
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013BCC4
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8013C874
void InitCredits__Fv() {
}


// address: 0x8013C8B0
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


// address: 0x8013D0D0
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013D19C
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013D278
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


// address: 0x8013D4FC
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013D578
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013D5B0
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013D608
void ___7CScreen_addr_8013D608(struct CScreen *this, int __in_chrg);

// address: 0x8013D628
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80141C20
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x80141C54
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80141CD4
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x80141D54
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x80141DE8
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x80141E70
int test_hw_event__Fv() {
}


// address: 0x80141F00
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


// address: 0x80142138
int test_card_format__Fi(int card_number) {
}


// address: 0x801421C8
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80142204
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x801422FC
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


// address: 0x801424B4
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x80142564
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


// address: 0x801428AC
void new_card__Fi(int card_number) {
}


// address: 0x80142928
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x8015CB18
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015CBD8
int DoSaveOptions__Fv() {
	// register: 5
	register int delete_file_number;
}


// address: 0x8015CC2C
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015CCFC
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015CDBC
void DoLoadGame__Fv() {
}


// address: 0x8015CE4C
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015CEA8
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015CEF4
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015CF40
void ChooseCardLoad__Fv() {
}


// address: 0x8015CFF4
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015D01C
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015D078
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


// address: 0x8015D234
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


// address: 0x8015D3D4
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015D478
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015D550
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015D570
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015D578
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015D580
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015D58C
void ___6Dialog_addr_8015D58C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015D5B4
// size: 0x10
struct Dialog *__6Dialog_addr_8015D5B4(struct Dialog *this) {
}


// address: 0x8015D610
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015D664
void LoadQuest__Fi(int i) {
}


// address: 0x8015D72C
void ISave__Fi(int v) {
}


// address: 0x8015D78C
void SaveQuest__Fi(int i) {
}


// address: 0x8015D858
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015DAE0
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015DDA0
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015DF04
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015E09C
void RestorePads__Fv() {
}


// address: 0x8015E15C
void StorePads__Fv() {
}


// address: 0x8015E218
void GetIcon__Fv() {
}


// address: 0x8015E254
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 17
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015E2B8
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015E350
void LoadOptions__Fv() {
}


// address: 0x8015E3B0
void SaveOptions__Fv() {
}


