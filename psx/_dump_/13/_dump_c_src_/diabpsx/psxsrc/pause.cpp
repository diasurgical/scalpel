// C:\diabpsx\PSXSRC\PAUSE.CPP

#include "types.h"

// address: 0x8009D704
void PA_Open__Fv() {
}


// address: 0x80080630
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x8008067C
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
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x8008079C
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
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80080EB4
bool PA_GetPauseOk__Fv() {
}


// address: 0x80080EC0
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80081010
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081018
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081118
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081120
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081128
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081228
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081230
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081238
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x8008131C
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081324
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x8008134C
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80081374
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x8008139C
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800813E0
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80081414
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


