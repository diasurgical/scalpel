// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x800357D0
// line start: 284
// line end:   297
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035820
// line start: 304
// line end:   320
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x8003587C
// line start: 325
// line end:   342
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800358F0
// line start: 358
// line end:   396
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x800359B4
// line start: 401
// line end:   485
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035B9C
// line start: 491
// line end:   607
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035D0C
// line start: 1041
// line end:   1121
unsigned char TryIconCurs__Fv() {
}


// address: 0x800360E8
// line start: 2144
// line end:   2191
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800360F0
// line start: 2198
// line end:   2358
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800361A0
// line start: 2365
// line end:   2432
void LoadLvlGFX__Fv() {
}


// address: 0x8003623C
// line start: 2440
// line end:   2452
void LoadAllGFX__Fv() {
}


// address: 0x8003625C
// line start: 2473
// line end:   2493
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036354
// line start: 2502
// line end:   2556
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x800364DC
// line start: 2560
// line end:   2585
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


// address: 0x800365B8
// line start: 2592
// line end:   2928
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


// address: 0x80036F58
// line start: 2941
// line end:   2993
void game_logic__Fv() {
}


// address: 0x80037064
// line start: 3003
// line end:   3033
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x8003710C
// line start: 3041
// line end:   3096
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80037144
// line start: 3163
// line end:   3168
void alloc_plr__Fv() {
}


// address: 0x8003714C
// line start: 3231
// line end:   3289
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80037154
// line start: 3296
// line end:   3298
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037174
// line start: 3303
// line end:   3305
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037194
// line start: 3308
// line end:   3309
void app_fatal(char *pszFile) {
}


// address: 0x800371C4
// line start: 3568
// line end:   3574
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800371EC
// line start: 3578
// line end:   3584
void DoMemCardFromInGame__Fv() {
}


