// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80035954
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x800359A4
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80035A00
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035A74
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035B38
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035D20
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035E90
unsigned char TryIconCurs__Fv() {
}


// address: 0x8003626C
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036274
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036324
void LoadLvlGFX__Fv() {
}


// address: 0x800363C0
void LoadAllGFX__Fv() {
}


// address: 0x800363E0
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x800364D8
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80036660
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


// address: 0x8003673C
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


// address: 0x800370C0
void game_logic__Fv() {
}


// address: 0x800371CC
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80037274
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x800372AC
void alloc_plr__Fv() {
}


// address: 0x800372B4
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x800372BC
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x800372DC
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x800372FC
void app_fatal(char *pszFile) {
}


// address: 0x8003732C
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80037354
void DoMemCardFromInGame__Fv() {
}


