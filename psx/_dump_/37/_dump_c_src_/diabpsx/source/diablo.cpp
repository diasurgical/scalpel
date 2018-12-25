// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x800359C8
// line start: 284
// line end:   297
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035A18
// line start: 304
// line end:   320
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80035A74
// line start: 325
// line end:   342
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035AE8
// line start: 358
// line end:   396
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035BAC
// line start: 401
// line end:   480
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035D94
// line start: 486
// line end:   602
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035F04
// line start: 1036
// line end:   1116
unsigned char TryIconCurs__Fv() {
}


// address: 0x800362E0
// line start: 2139
// line end:   2186
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800362E8
// line start: 2193
// line end:   2353
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036398
// line start: 2360
// line end:   2427
void LoadLvlGFX__Fv() {
}


// address: 0x80036434
// line start: 2435
// line end:   2447
void LoadAllGFX__Fv() {
}


// address: 0x80036454
// line start: 2468
// line end:   2488
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x8003654C
// line start: 2497
// line end:   2551
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x800366D4
// line start: 2555
// line end:   2580
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


// address: 0x800367B0
// line start: 2587
// line end:   2908
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


// address: 0x800370E4
// line start: 2921
// line end:   2973
void game_logic__Fv() {
}


// address: 0x800371F0
// line start: 2983
// line end:   3013
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80037298
// line start: 3021
// line end:   3076
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x800372D0
// line start: 3143
// line end:   3148
void alloc_plr__Fv() {
}


// address: 0x800372D8
// line start: 3211
// line end:   3269
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x800372E0
// line start: 3276
// line end:   3278
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037300
// line start: 3283
// line end:   3285
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037320
// line start: 3288
// line end:   3289
void app_fatal(char *pszFile) {
}


// address: 0x80037350
// line start: 3548
// line end:   3554
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80037378
// line start: 3558
// line end:   3564
void DoMemCardFromInGame__Fv() {
}


