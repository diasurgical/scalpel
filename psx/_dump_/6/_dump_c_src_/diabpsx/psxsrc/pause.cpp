// C:\diabpsx\PSXSRC\PAUSE.CPP

#include "types.h"

// address: 0x8009DC34
void PA_Open__Fv() {
}


// address: 0x80081170
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x800811BC
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


// address: 0x8008124C
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80081278
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


// address: 0x80081454
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


// address: 0x80081748
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


// address: 0x80081830
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


// address: 0x80081918
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80081928
bool PA_GetPauseOk__Fv() {
}


// address: 0x80081934
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80081A84
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081A8C
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081B8C
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081B94
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081B9C
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081C9C
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081CA4
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081CAC
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081D90
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081D98
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80081DC0
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80081DE8
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80081E10
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081E54
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80081E88
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


