// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x8003682C
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x8003687C
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800368F8
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8003696C
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80036A30
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80036BBC
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80036D3C
unsigned char TryIconCurs__Fv() {
}


// address: 0x80037118
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80037120
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800371D0
void LoadLvlGFX__Fv() {
}


// address: 0x80037294
void LoadAllGFX__Fv() {
}


// address: 0x800372B4
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800373AC
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80037578
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
void game_logic__Fv() {
}


// address: 0x800380A0
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80038148
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80038180
void alloc_plr__Fv() {
}


// address: 0x80038188
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80038190
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x800381B0
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x800381D0
void app_fatal(char *pszFile) {
}


// address: 0x80038200
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038228
void DoMemCardFromInGame__Fv() {
}


