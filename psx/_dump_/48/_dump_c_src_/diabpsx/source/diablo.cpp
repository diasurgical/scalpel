// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80035740
// line start: 284
// line end:   297
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035790
// line start: 304
// line end:   320
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800357EC
// line start: 325
// line end:   342
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035860
// line start: 358
// line end:   396
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035924
// line start: 401
// line end:   478
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035B08
// line start: 484
// line end:   593
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035C3C
// line start: 1023
// line end:   1103
unsigned char TryIconCurs__Fv() {
}


// address: 0x80035FE8
// line start: 2126
// line end:   2173
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80035FF0
// line start: 2180
// line end:   2340
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800360A0
// line start: 2347
// line end:   2414
void LoadLvlGFX__Fv() {
}


// address: 0x8003613C
// line start: 2422
// line end:   2434
void LoadAllGFX__Fv() {
}


// address: 0x8003615C
// line start: 2455
// line end:   2475
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036254
// line start: 2484
// line end:   2538
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x800363DC
// line start: 2542
// line end:   2567
void ClearOutDungeonMap__Fv() {
	// register: 11
	register unsigned short val;
	{
		// register: 10
		register int x;
		{
			{
				// register: 6
				register int y;
			}
		}
	}
}


// address: 0x800364B8
// line start: 2574
// line end:   2895
void LoadGameLevel__FUci(unsigned char firstflag, int lvldir) {
	// register: 16
	register int i;
	// register: 4
	register int j;
	{
		{
			// register: 6
			register unsigned char visited;
		}
	}
}


// address: 0x80036DD4
// line start: 2908
// line end:   2960
void game_logic__Fv() {
}


// address: 0x80036EE0
// line start: 2970
// line end:   3000
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80036F88
// line start: 3008
// line end:   3063
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80036FC0
// line start: 3130
// line end:   3135
void alloc_plr__Fv() {
}


// address: 0x80036FC8
// line start: 3198
// line end:   3256
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80036FD0
// line start: 3263
// line end:   3265
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80036FF0
// line start: 3270
// line end:   3272
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037010
// line start: 3275
// line end:   3276
void app_fatal(char *pszFile) {
}


// address: 0x80037040
// line start: 3535
// line end:   3541
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80037068
// line start: 3545
// line end:   3551
void DoMemCardFromInGame__Fv() {
}


