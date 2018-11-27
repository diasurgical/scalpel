// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x8003682C
// line start: 283
// line end:   296
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8003687C
// line start: 303
// line end:   319
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800368F8
// line start: 324
// line end:   341
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8003696C
// line start: 357
// line end:   395
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80036A30
// line start: 400
// line end:   468
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80036BBC
// line start: 474
// line end:   584
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80036D3C
// line start: 1014
// line end:   1094
unsigned char TryIconCurs__Fv() {
}


// address: 0x80037118
// line start: 2117
// line end:   2164
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80037120
// line start: 2171
// line end:   2331
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800371D0
// line start: 2338
// line end:   2405
void LoadLvlGFX__Fv() {
}


// address: 0x80037294
// line start: 2413
// line end:   2425
void LoadAllGFX__Fv() {
}


// address: 0x800372B4
// line start: 2446
// line end:   2466
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800373AC
// line start: 2475
// line end:   2529
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80037578
// line start: 2533
// line end:   2558
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


// address: 0x80037654
// line start: 2565
// line end:   2885
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


// address: 0x80037F94
// line start: 2898
// line end:   2950
void game_logic__Fv() {
}


// address: 0x800380A0
// line start: 2960
// line end:   2990
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80038148
// line start: 2998
// line end:   3053
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80038180
// line start: 3120
// line end:   3125
void alloc_plr__Fv() {
}


// address: 0x80038188
// line start: 3188
// line end:   3246
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80038190
// line start: 3253
// line end:   3255
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x800381B0
// line start: 3260
// line end:   3262
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x800381D0
// line start: 3265
// line end:   3266
void app_fatal(char *pszFile) {
}


// address: 0x80038200
// line start: 3525
// line end:   3531
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038228
// line start: 3535
// line end:   3541
void DoMemCardFromInGame__Fv() {
}


