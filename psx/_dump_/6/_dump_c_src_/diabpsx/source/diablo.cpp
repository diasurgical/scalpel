// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80036820
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80036870
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800368CC
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80036940
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80036A04
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80036B90
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80036CC4
unsigned char TryIconCurs__Fv() {
}


// address: 0x800370A0
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800370A8
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80037158
void LoadLvlGFX__Fv() {
}


// address: 0x800371F4
void LoadAllGFX__Fv() {
}


// address: 0x80037214
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x8003730C
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80037494
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


// address: 0x80037570
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


// address: 0x80037EAC
void game_logic__Fv() {
}


// address: 0x80037FB8
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80038060
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80038098
void alloc_plr__Fv() {
}


// address: 0x800380A0
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x800380A8
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x800380C8
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x800380E8
void app_fatal(char *pszFile) {
}


// address: 0x80038118
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80038140
void DoMemCardFromInGame__Fv() {
}


