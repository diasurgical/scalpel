// C:\diabpsx\PSXSRC\PAUSE.CPP

#include "types.h"

// address: 0x800B0418
// line start: 560
// line end:   563
void PA_Open__Fv() {
}


// address: 0x800880C8
// line start: 181
// line end:   199
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80088118
// line start: 211
// line end:   239
int GetPausePad__Fv() {
	// register: 18
	register bool Done;
	// register: 19
	register int PadVal;
	{
		{
			{
				{
					// register: 16
					register int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x80088240
// line start: 251
// line end:   256
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x8008826C
// line start: 268
// line end:   328
void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8008847C
// line start: 339
// line end:   451
bool DoPausedMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 18
	register bool RetVal;
	// register: 17
	register bool Done;
	{
	}
}


// address: 0x800885B4
// line start: 462
// line end:   501
int DoQuitMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register int RetVal;
	// register: 19
	register bool Done;
	// register: 17
	register int Menu;
	{
		// register: 16
		register unsigned short PadVal;
	}
}


// address: 0x800886D4
// line start: 511
// line end:   549
bool AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register bool RetVal;
	// register: 19
	register bool Done;
	// register: 17
	register int Menu;
	{
		// register: 16
		register unsigned short PadVal;
	}
}


// address: 0x800887F4
// line start: 573
// line end:   576
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80088804
// line start: 586
// line end:   587
bool PA_GetPauseOk__Fv() {
}


// address: 0x80088810
// line start: 610
// line end:   634
void MY_PausePrint__17CTempPauseMessageiiiP4RECT(struct CTempPauseMessage *this, int s, int Txt, int Menu, struct RECT *PRect) {
	// register: 23
	register int y;
	// register: 30
	register int otpos;
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80088A50
// line start: 637
// line end:   638
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088A58
// line start: 641
// line end:   662
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT PRect;
	// register: 16
	register int otpos;
	// register: 22
	register int oldDotpos;
	// register: 21
	register int oldTotpos;
}


// address: 0x80088BD0
// line start: 669
// line end:   670
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80088BD8
// line start: 673
// line end:   674
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088BE0
// line start: 677
// line end:   699
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT PRect;
	// register: 16
	register int otpos;
	// register: 22
	register int oldDotpos;
	// register: 21
	register int oldTotpos;
}


// address: 0x80088D58
// line start: 706
// line end:   707
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80088D60
// line start: 710
// line end:   711
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088D68
// line start: 715
// line end:   758
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT PRect;
	// register: 16
	register int otpos;
	// register: 19
	register int oldDotpos;
	// register: 16
	register int oldTotpos;
}


// address: 0x80088EB8
// line start: 761
// line end:   762
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088EC0
// line start: 765
// line end:   765
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80088EE8
// line start: 770
// line end:   770
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80088F10
// line start: 770
// line end:   770
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80088F38
// size: 0xC
// line start: 115
// line end:   115
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088F7C
// line start: 86
// line end:   86
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80088FB0
// size: 0x8
// line start: 85
// line end:   85
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


