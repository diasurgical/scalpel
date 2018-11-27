// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80036804
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80036854
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800368B0
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80036924
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x800369E8
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80036B74
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80036CA8
unsigned char TryIconCurs__Fv() {
}


// address: 0x80037084
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x8003708C
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80037128
void LoadLvlGFX__Fv() {
}


// address: 0x800371C4
void LoadAllGFX__Fv() {
}


// address: 0x800371E4
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800372DC
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80037464
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


// address: 0x80037540
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


// address: 0x80037E7C
void game_logic__Fv() {
}


// address: 0x80037F88
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80038030
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80038068
void alloc_plr__Fv() {
}


// address: 0x80038070
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80038078
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80038098
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x800380B8
void app_fatal(char *pszFile) {
}


// address: 0x800380E8
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038110
void DoMemCardFromInGame__Fv() {
}


