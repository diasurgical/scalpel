// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80037F24
// line start: 292
// line end:   305
void FreeGameMem__Fv() {
}


// address: 0x80037F5C
// line start: 312
// line end:   352
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x8003804C
// line start: 357
// line end:   374
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800380C0
// line start: 390
// line end:   428
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80038184
// line start: 433
// line end:   526
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80038384
// line start: 532
// line end:   653
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x800384EC
// line start: 1087
// line end:   1168
unsigned char TryIconCurs__Fv() {
}


// address: 0x8003880C
// line start: 2191
// line end:   2238
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80038814
// line start: 2245
// line end:   2405
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800388A8
// line start: 2413
// line end:   2447
void LoadLvlGFX__Fv() {
	// register: 16
	register char *LoadFile;
}


// address: 0x80038960
// line start: 2452
// line end:   2464
void LoadMegaTiles__FPCc(char *LoadFile) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyIo;
}


// address: 0x800389F0
// line start: 2472
// line end:   2484
void LoadAllGFX__Fv() {
}


// address: 0x80038A10
// line start: 2505
// line end:   2525
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80038B08
// line start: 2534
// line end:   2587
void LoCreateLevel__FPv() {
	// register: 5
	register int lvldir;
}


// address: 0x80038C6C
// line start: 2592
// line end:   2661
void ClearOutDungeonMap__Fv() {
	// register: 17
	register bool istown;
	// register: 16
	register unsigned short val;
	{
		// register: 6
		register int x;
		{
			{
				// register: 4
				register int y;
				{
					// register: 7
					register int y;
					// register: 6
					register int x;
					{
						{
							// register: 4
							register int x;
							{
								// register: 5
								register int y;
								// register: 6
								register int x;
								{
									{
										// register: 4
										register int x;
										{
											// register: 5
											register int y;
											// register: 6
											register int x;
											{
												{
													// register: 4
													register int x;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80038E6C
// line start: 2690
// line end:   2703
void AddQuestItems__Fv() {
}


// address: 0x80038F0C
// line start: 2710
// line end:   2712
void AllSolid__Fii(int x, int y) {
}


// address: 0x80038F4C
// line start: 2716
// line end:   2750
void FillCrapBits__Fv() {
	// register: 18
	// size: 0x14
	register struct QuestStruct *qs;
	{
		{
			{
				{
					// register: 16
					register int x;
					// register: 17
					register int y;
				}
			}
		}
	}
}


// address: 0x800390EC
// line start: 2755
// line end:   2771
void Lsaveplrpos__Fv() {
}


// address: 0x80039198
// line start: 2776
// line end:   2780
void Lrestoreplrpos__Fv() {
}


// address: 0x800391E8
// line start: 2785
// line end:   3135
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


// address: 0x80039B20
// line start: 3163
// line end:   3165
void SetSpeed__F9GM_SPEEDS(enum GM_SPEEDS Speed) {
}


// address: 0x80039B34
// size: 0x4
// line start: 3169
// line end:   3170
enum GM_SPEEDS GetSpeed__Fv() {
}


// address: 0x80039B40
// line start: 3175
// line end:   3273
void game_logic__Fv() {
	// register: 17
	register int Frames;
	// register: 18
	register int ThisTick;
	// register: 16
	register int SinceLast;
}


// address: 0x80039D28
// line start: 3278
// line end:   3308
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80039DD0
// line start: 3317
// line end:   3381
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80039E30
// line start: 3448
// line end:   3453
void alloc_plr__Fv() {
}


// address: 0x80039E38
// line start: 3516
// line end:   3574
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80039E40
// line start: 3581
// line end:   3583
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80039E60
// line start: 3588
// line end:   3590
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80039E80
// line start: 3593
// line end:   3594
void app_fatal(char *pszFile) {
}


// address: 0x80039EB0
// line start: 3853
// line end:   3859
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80039ED8
// line start: 3863
// line end:   3869
void DoMemCardFromInGame__Fv() {
}


