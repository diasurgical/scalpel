// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x800357E0
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035830
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x8003588C
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035900
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x800359C4
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035BAC
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035D1C
unsigned char TryIconCurs__Fv() {
}


// address: 0x800360F8
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036100
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800361B0
void LoadLvlGFX__Fv() {
}


// address: 0x8003624C
void LoadAllGFX__Fv() {
}


// address: 0x8003626C
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036364
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x800364EC
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


// address: 0x800365C8
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


// address: 0x80036F14
void game_logic__Fv() {
}


// address: 0x80037020
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x800370C8
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80037100
void alloc_plr__Fv() {
}


// address: 0x80037108
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80037110
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037130
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037150
void app_fatal(char *pszFile) {
}


// address: 0x80037180
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800371A8
void DoMemCardFromInGame__Fv() {
}


