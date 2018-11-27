// C:\diabpsx\PSXSRC\PAUSE.CPP

#include "types.h"

// address: 0x800A07A4
// line start: 477
// line end:   480
void PA_Open__Fv() {
}


// address: 0x80084528
// line start: 166
// line end:   178
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80084574
// line start: 189
// line end:   209
int GetPausePad__Fv() {
	// register: 17
	register bool Done;
	// register: 18
	register int PadVal;
	{
		{
			{
				{
					// register: 16
					register int f;
				}
			}
		}
	}
}


// address: 0x80084604
// line start: 220
// line end:   222
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80084630
// line start: 234
// line end:   281
void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum) {
	{
		{
			{
				{
					// register: 19
					register bool oldsflag;
					// register: 18
					register bool oldpflag;
				}
			}
		}
	}
}


// address: 0x800847D0
// line start: 292
// line end:   391
bool DoPausedMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register bool RetVal;
	// register: 19
	register bool Done;
	// register: 16
	register int lvlchange;
	// address: 0xFFFFFFD0
	auto int newx;
	// register: 30
	register int newy;
	{
		// register: 17
		// size: 0x6C
		register struct CPad *P;
		{
			{
				{
					// register: 5
					register int y;
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


// address: 0x80084AC4
// line start: 402
// line end:   429
bool DoQuitMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 19
	register bool RetVal;
	// register: 18
	register bool Done;
	// register: 16
	register int Menu;
	{
		// register: 3
		register unsigned short PadVal;
	}
}


// address: 0x80084BAC
// line start: 439
// line end:   466
bool AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 19
	register bool RetVal;
	// register: 18
	register bool Done;
	// register: 16
	register int Menu;
	{
		// register: 3
		register unsigned short PadVal;
	}
}


// address: 0x80084C94
// line start: 490
// line end:   493
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80084CA4
// line start: 503
// line end:   504
bool PA_GetPauseOk__Fv() {
}


// address: 0x80084CB0
// line start: 527
// line end:   536
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80084E00
// line start: 541
// line end:   542
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084E08
// line start: 545
// line end:   556
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80084F08
// line start: 563
// line end:   564
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80084F10
// line start: 567
// line end:   568
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084F18
// line start: 571
// line end:   582
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80085018
// line start: 589
// line end:   590
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80085020
// line start: 593
// line end:   594
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80085028
// line start: 597
// line end:   606
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x8008510C
// line start: 610
// line end:   611
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80085114
// line start: 614
// line end:   614
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x8008513C
// line start: 619
// line end:   619
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80085164
// line start: 619
// line end:   619
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x8008518C
// size: 0xC
// line start: 101
// line end:   101
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800851D0
// line start: 72
// line end:   72
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80085204
// size: 0x8
// line start: 71
// line end:   71
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


