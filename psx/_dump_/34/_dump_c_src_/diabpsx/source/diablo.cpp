// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80035860
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x800358B0
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x8003590C
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035980
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035A44
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035C2C
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035D9C
unsigned char TryIconCurs__Fv() {
}


// address: 0x80036178
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036180
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036230
void LoadLvlGFX__Fv() {
}


// address: 0x800362CC
void LoadAllGFX__Fv() {
}


// address: 0x800362EC
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800363E4
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x8003656C
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


// address: 0x80036648
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


// address: 0x80036FE8
void game_logic__Fv() {
}


// address: 0x800370F4
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x8003719C
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x800371D4
void alloc_plr__Fv() {
}


// address: 0x800371DC
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x800371E4
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80037204
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80037224
void app_fatal(char *pszFile) {
}


// address: 0x80037254
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x8003727C
void DoMemCardFromInGame__Fv() {
}


