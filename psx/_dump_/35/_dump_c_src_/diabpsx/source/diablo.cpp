// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80035900
// line start: 284
// line end:   297
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035950
// line start: 304
// line end:   320
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800359AC
// line start: 325
// line end:   342
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035A20
// line start: 358
// line end:   396
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035AE4
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


// address: 0x80035CCC
// line start: 491
// line end:   607
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035E3C
// line start: 1041
// line end:   1121
unsigned char TryIconCurs__Fv() {
}


// address: 0x80036218
// line start: 2144
// line end:   2191
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036220
// line start: 2198
// line end:   2358
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800362D0
// line start: 2365
// line end:   2432
void LoadLvlGFX__Fv() {
}


// address: 0x8003636C
// line start: 2440
// line end:   2452
void LoadAllGFX__Fv() {
}


// address: 0x8003638C
// line start: 2473
// line end:   2493
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036484
// line start: 2502
// line end:   2556
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x8003660C
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


// address: 0x800366E8
// line start: 2592
// line end:   2924
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


// address: 0x80037044
// line start: 2937
// line end:   2989
void game_logic__Fv() {
}


// address: 0x80037150
// line start: 2999
// line end:   3029
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x800371F8
// line start: 3037
// line end:   3092
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80037230
// line start: 3159
// line end:   3164
void alloc_plr__Fv() {
}


// address: 0x80037238
// line start: 3227
// line end:   3285
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80037240
// line start: 3292
// line end:   3294
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037260
// line start: 3299
// line end:   3301
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037280
// line start: 3304
// line end:   3305
void app_fatal(char *pszFile) {
}


// address: 0x800372B0
// line start: 3564
// line end:   3570
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800372D8
// line start: 3574
// line end:   3580
void DoMemCardFromInGame__Fv() {
}


