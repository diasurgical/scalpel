// C:\diabpsx\PSXSRC\PAUSE.CPP

#include "types.h"

// address: 0x800A24F0
// line start: 533
// line end:   536
void PA_Open__Fv() {
}


// address: 0x80083348
// line start: 175
// line end:   187
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80083394
// line start: 198
// line end:   226
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


// address: 0x80083480
// line start: 238
// line end:   243
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x800834AC
// line start: 255
// line end:   320
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


// address: 0x8008372C
// line start: 331
// line end:   432
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


// address: 0x80083A44
// line start: 443
// line end:   481
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


// address: 0x80083B64
// line start: 491
// line end:   522
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


// address: 0x80083C68
// line start: 546
// line end:   549
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80083C78
// line start: 559
// line end:   560
bool PA_GetPauseOk__Fv() {
}


// address: 0x80083C84
// line start: 583
// line end:   592
void MY_PausePrint__17CTempPauseMessageiPciP4RECT(struct CTempPauseMessage *this, int s, char *Txt, int Menu, struct RECT *PRect) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80083DD0
// line start: 597
// line end:   598
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083DD8
// line start: 601
// line end:   614
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083EF4
// line start: 621
// line end:   622
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80083EFC
// line start: 625
// line end:   626
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083F04
// line start: 629
// line end:   642
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80084020
// line start: 649
// line end:   650
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80084028
// line start: 653
// line end:   654
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084030
// line start: 657
// line end:   670
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x8008415C
// line start: 687
// line end:   688
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084164
// line start: 691
// line end:   691
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x8008418C
// line start: 696
// line end:   696
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x800841B4
// line start: 696
// line end:   696
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x800841DC
// size: 0xC
// line start: 112
// line end:   112
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80084220
// line start: 83
// line end:   83
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80084254
// size: 0x8
// line start: 82
// line end:   82
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


