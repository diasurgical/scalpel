// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80035740
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035790
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800357EC
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035860
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035924
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035B08
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035C3C
unsigned char TryIconCurs__Fv() {
}


// address: 0x80035FE8
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80035FF0
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800360A0
void LoadLvlGFX__Fv() {
}


// address: 0x8003613C
void LoadAllGFX__Fv() {
}


// address: 0x8003615C
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036254
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x800363DC
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
void game_logic__Fv() {
}


// address: 0x80036EE0
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80036F88
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80036FC0
void alloc_plr__Fv() {
}


// address: 0x80036FC8
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80036FD0
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80036FF0
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037010
void app_fatal(char *pszFile) {
}


// address: 0x80037040
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80037068
void DoMemCardFromInGame__Fv() {
}


