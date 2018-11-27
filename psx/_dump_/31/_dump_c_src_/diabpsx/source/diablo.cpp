// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x800357A4
// line start: 284
// line end:   297
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x800357F4
// line start: 304
// line end:   320
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80035850
// line start: 325
// line end:   342
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800358C4
// line start: 358
// line end:   396
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035988
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


// address: 0x80035B70
// line start: 491
// line end:   607
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035CE0
// line start: 1041
// line end:   1121
unsigned char TryIconCurs__Fv() {
}


// address: 0x800360BC
// line start: 2144
// line end:   2191
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800360C4
// line start: 2198
// line end:   2358
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036174
// line start: 2365
// line end:   2432
void LoadLvlGFX__Fv() {
}


// address: 0x80036210
// line start: 2440
// line end:   2452
void LoadAllGFX__Fv() {
}


// address: 0x80036230
// line start: 2473
// line end:   2493
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036328
// line start: 2502
// line end:   2556
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x800364B0
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


// address: 0x8003658C
// line start: 2592
// line end:   2925
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


// address: 0x80036F10
// line start: 2938
// line end:   2990
void game_logic__Fv() {
}


// address: 0x8003701C
// line start: 3000
// line end:   3030
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x800370C4
// line start: 3038
// line end:   3093
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x800370FC
// line start: 3160
// line end:   3165
void alloc_plr__Fv() {
}


// address: 0x80037104
// line start: 3228
// line end:   3286
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x8003710C
// line start: 3293
// line end:   3295
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x8003712C
// line start: 3300
// line end:   3302
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x8003714C
// line start: 3305
// line end:   3306
void app_fatal(char *pszFile) {
}


// address: 0x8003717C
// line start: 3565
// line end:   3571
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800371A4
// line start: 3575
// line end:   3581
void DoMemCardFromInGame__Fv() {
}


