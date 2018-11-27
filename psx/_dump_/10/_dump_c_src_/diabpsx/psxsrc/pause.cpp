// C:\diabpsx\PSXSRC\PAUSE.CPP

#include "types.h"

// address: 0x8009D414
// line start: 479
// line end:   482
void PA_Open__Fv() {
}


// address: 0x80080BDC
// line start: 168
// line end:   180
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80080C28
// line start: 191
// line end:   211
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


// address: 0x80080CB8
// line start: 222
// line end:   224
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80080CE4
// line start: 236
// line end:   283
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


// address: 0x80080EC0
// line start: 294
// line end:   393
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


// address: 0x800811B4
// line start: 404
// line end:   431
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


// address: 0x8008129C
// line start: 441
// line end:   468
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


// address: 0x80081384
// line start: 492
// line end:   495
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80081394
// line start: 505
// line end:   506
bool PA_GetPauseOk__Fv() {
}


// address: 0x800813A0
// line start: 529
// line end:   538
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x800814F0
// line start: 543
// line end:   544
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800814F8
// line start: 547
// line end:   558
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x800815F8
// line start: 565
// line end:   566
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081600
// line start: 569
// line end:   570
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081608
// line start: 573
// line end:   584
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081708
// line start: 591
// line end:   592
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081710
// line start: 595
// line end:   596
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081718
// line start: 599
// line end:   608
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800817FC
// line start: 612
// line end:   613
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081804
// line start: 616
// line end:   616
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x8008182C
// line start: 621
// line end:   621
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80081854
// line start: 621
// line end:   621
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x8008187C
// size: 0xC
// line start: 103
// line end:   103
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800818C0
// line start: 74
// line end:   74
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x800818F4
// size: 0x8
// line start: 73
// line end:   73
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


