// C:\diabpsx\PSXSRC\PAUSE.CPP

#include "types.h"

// address: 0x8009D704
// line start: 511
// line end:   514
void PA_Open__Fv() {
}


// address: 0x80080630
// line start: 169
// line end:   181
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x8008067C
// line start: 192
// line end:   221
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
						{
							{
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80080770
// line start: 232
// line end:   237
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x8008079C
// line start: 249
// line end:   309
void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum) {
	{
		{
			{
				{
					// register: 19
					register bool oldsflag;
					// register: 18
					register bool oldpflag;
					{
						{
							{
								{
									{
										{
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


// address: 0x800809C0
// line start: 320
// line end:   419
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


// address: 0x80080CC0
// line start: 430
// line end:   463
int DoQuitMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 19
	register int RetVal;
	// register: 18
	register bool Done;
	// register: 16
	register int Menu;
	{
		// register: 3
		register unsigned short PadVal;
	}
}


// address: 0x80080DBC
// line start: 473
// line end:   500
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


// address: 0x80080EA4
// line start: 524
// line end:   527
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80080EB4
// line start: 537
// line end:   538
bool PA_GetPauseOk__Fv() {
}


// address: 0x80080EC0
// line start: 561
// line end:   570
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80081010
// line start: 575
// line end:   576
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081018
// line start: 579
// line end:   592
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081118
// line start: 599
// line end:   600
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081120
// line start: 603
// line end:   604
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081128
// line start: 607
// line end:   618
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081228
// line start: 625
// line end:   626
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081230
// line start: 629
// line end:   630
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081238
// line start: 633
// line end:   642
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x8008131C
// line start: 659
// line end:   660
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081324
// line start: 663
// line end:   663
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x8008134C
// line start: 668
// line end:   668
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80081374
// line start: 668
// line end:   668
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x8008139C
// size: 0xC
// line start: 105
// line end:   105
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800813E0
// line start: 76
// line end:   76
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80081414
// size: 0x8
// line start: 75
// line end:   75
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


