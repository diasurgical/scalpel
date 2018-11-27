// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80035A1C
// line start: 284
// line end:   297
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035A6C
// line start: 304
// line end:   320
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80035AC8
// line start: 325
// line end:   342
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035B3C
// line start: 358
// line end:   396
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035C00
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


// address: 0x80035DE4
// line start: 484
// line end:   600
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035F54
// line start: 1034
// line end:   1114
unsigned char TryIconCurs__Fv() {
}


// address: 0x80036330
// line start: 2137
// line end:   2184
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036338
// line start: 2191
// line end:   2351
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800363E8
// line start: 2358
// line end:   2425
void LoadLvlGFX__Fv() {
}


// address: 0x80036484
// line start: 2433
// line end:   2445
void LoadAllGFX__Fv() {
}


// address: 0x800364A4
// line start: 2466
// line end:   2486
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x8003659C
// line start: 2495
// line end:   2549
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80036724
// line start: 2553
// line end:   2578
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


// address: 0x80036800
// line start: 2585
// line end:   2906
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


// address: 0x80037134
// line start: 2919
// line end:   2971
void game_logic__Fv() {
}


// address: 0x80037240
// line start: 2981
// line end:   3011
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x800372E8
// line start: 3019
// line end:   3074
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80037320
// line start: 3141
// line end:   3146
void alloc_plr__Fv() {
}


// address: 0x80037328
// line start: 3209
// line end:   3267
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80037330
// line start: 3274
// line end:   3276
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037350
// line start: 3281
// line end:   3283
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037370
// line start: 3286
// line end:   3287
void app_fatal(char *pszFile) {
}


// address: 0x800373A0
// line start: 3546
// line end:   3552
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800373C8
// line start: 3556
// line end:   3562
void DoMemCardFromInGame__Fv() {
}


