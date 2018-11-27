// C:\diabpsx\PSXSRC\PAUSE.CPP

#include "types.h"

// address: 0x8009D388
void PA_Open__Fv() {
}


// address: 0x80081104
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80081150
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


// address: 0x800811E0
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x8008120C
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


// address: 0x800813E8
bool DoPausedMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 18
	register bool RetVal;
	// register: 17
	register bool Done;
	{
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


// address: 0x80081554
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


// address: 0x8008163C
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


// address: 0x80081724
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80081734
bool PA_GetPauseOk__Fv() {
}


// address: 0x80081740
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80081890
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081898
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081998
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x800819A0
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800819A8
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081AA8
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80081AB0
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081AB8
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081B9C
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081BA4
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80081BCC
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80081BF4
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80081C1C
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80081C60
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80081C94
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


