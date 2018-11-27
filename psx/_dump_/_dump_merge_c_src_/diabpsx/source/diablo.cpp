// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80037464
// line start: 2531
// line end:   2556
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


// address: 0x800371E4
// line start: 2444
// line end:   2464
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80037084
// line start: 2115
// line end:   2162
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800380E8
// line start: 3524
// line end:   3530
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038110
// line start: 3534
// line end:   3540
void DoMemCardFromInGame__Fv() {
}


// address: 0x80036804
// line start: 282
// line end:   295
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8003708C
// line start: 2169
// line end:   2329
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036924
// line start: 356
// line end:   394
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x800372DC
// line start: 2473
// line end:   2527
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x800371C4
// line start: 2411
// line end:   2423
void LoadAllGFX__Fv() {
}


// address: 0x80037540
// line start: 2563
// line end:   2884
void LoadGameLevel__FUci(unsigned char firstflag, int lvldir) {
	// register: 17
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


// address: 0x80037570
// line start: 2563
// line end:   2884
void LoadGameLevel__FUci_addr_80037570(unsigned char firstflag, int lvldir) {
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


// address: 0x80037128
// line start: 2336
// line end:   2403
void LoadLvlGFX__Fv() {
}


// address: 0x800369E8
// line start: 399
// line end:   467
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80036CA8
// line start: 1012
// line end:   1092
unsigned char TryIconCurs__Fv() {
}


// address: 0x80038068
// line start: 3119
// line end:   3124
void alloc_plr__Fv() {
}


// address: 0x800380B8
// line start: 3264
// line end:   3265
void app_fatal(char *pszFile) {
}


// address: 0x80038098
// line start: 3259
// line end:   3261
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80038078
// line start: 3252
// line end:   3254
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x800368B0
// line start: 323
// line end:   340
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80037E7C
// line start: 2897
// line end:   2949
void game_logic__Fv() {
}


// address: 0x80038030
// line start: 2997
// line end:   3052
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80038070
// line start: 3187
// line end:   3245
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80036B74
// line start: 473
// line end:   582
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80036854
// line start: 302
// line end:   318
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80037F88
// line start: 2959
// line end:   2989
void timeout_cursor__FUc(unsigned char bTimeout) {
}


