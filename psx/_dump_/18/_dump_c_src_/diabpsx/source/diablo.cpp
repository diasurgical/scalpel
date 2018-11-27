// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80035A1C
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035A6C
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80035AC8
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035B3C
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035C00
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035DE4
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035F54
unsigned char TryIconCurs__Fv() {
}


// address: 0x80036330
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036338
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800363E8
void LoadLvlGFX__Fv() {
}


// address: 0x80036484
void LoadAllGFX__Fv() {
}


// address: 0x800364A4
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x8003659C
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80036724
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
void game_logic__Fv() {
}


// address: 0x80037240
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x800372E8
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80037320
void alloc_plr__Fv() {
}


// address: 0x80037328
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80037330
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037350
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037370
void app_fatal(char *pszFile) {
}


// address: 0x800373A0
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800373C8
void DoMemCardFromInGame__Fv() {
}


