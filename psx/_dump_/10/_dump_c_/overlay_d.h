#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x80135FA8
// line start: 210
// line end:   211
void DsDataCallback() {
}


// address: 0x80135FB0
// line start: 214
// line end:   215
void DsReadyCallback() {
}


// address: 0x80135FB8
// line start: 226
// line end:   228
void SetDecDCT() {
}


// address: 0x80135FC0
// line start: 238
// line end:   384
short PlayFMVOverLay(struct StrInfo *str) {
	// address: 0xFFFFFFC0
	// size: 0x18
	auto struct CdlFILE fp;
	// register: 16
	register unsigned long *frame;
	// register: 17
	register short frameRetry;
	// register: 18
	register short strQuit;
	// address: 0xFFFFFFD8
	auto short fadeVol;
	{
		// register: 2
		// size: 0x6C
		register struct CPad *P1;
	}
}


// address: 0x80136320
// line start: 392
// line end:   415
void StrDecDCToutCB() {
}


// address: 0x80136428
// line start: 425
// line end:   426
void STR_CallBack(int handle) {
}


// address: 0x80136438
// line start: 432
// line end:   442
void STR_SetRing() {
}


// address: 0x80136494
// line start: 447
// line end:   448
void STR_RingEnd() {
}


// address: 0x801364B8
// line start: 459
// line end:   518
unsigned long *STR_GetNext() {
	// register: 19
	register unsigned long *addr;
	// register: 18
	register int count;
	// register: 16
	// size: 0x8
	register struct chunkhdrstruct *chunk;
	// register: 17
	register int frameoff;
	{
		// register: 4
		register int i;
		{
			{
				// register: 4
				register int i;
			}
		}
	}
}


// address: 0x80136674
// line start: 528
// line end:   633
void StrInit(struct StrInfo *str) {
	// register: 23
	register short x;
	// register: 22
	register short y;
	// register: 30
	register short w;
	// register: 21
	register short h;
	// register: 20
	register short scrWidth;
	// register: 16
	register unsigned long imageBufSize;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80136AA8
// line start: 655
// line end:   683
void StrEnd() {
}


// address: 0x80136B68
// line start: 693
// line end:   699
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x80136BD8
// line start: 708
// line end:   723
short StrKickCD(struct CdlLOC *loc) {
	// register: 16
	register short seekRetry;
	// register: 17
	register short readRetry;
}


// address: 0x80136C8C
// line start: 732
// line end:   802
unsigned long *StrGetNextFrame() {
	// register: 16
	register long timer;
	// register: 17
	register unsigned long *addr;
	// register: 16
	// size: 0x20
	register struct StHEADER *sector;
}


// address: 0x80136E68
// line start: 814
// line end:   837
void StrVLCFrame(unsigned long *frame) {
}


// address: 0x80136F10
// line start: 845
// line end:   864
void StrDrawDecodeSync() {
	// register: 3
	register long timer;
}


// address: 0x80136FE4
// line start: 873
// line end:   884
short StrFadeOutVol(short *fadeVol) {
}


// address: 0x80137018
// line start: 894
// line end:   901
long GetDCToutSize() {
	// register: 3
	register unsigned short h;
}


// address: 0x80137088
// line start: 910
// line end:   915
unsigned short ScalePPW(unsigned short n) {
}


// address: 0x801370BC
// line start: 924
// line end:   925
unsigned short GetDCT_MODE() {
}


// address: 0x801370E0
// line start: 935
// line end:   945
void PrintVLCBufSize() {
}


// address: 0x80137188
// line start: 957
// line end:   960
unsigned long FMVAllocMem(unsigned long MemSize) {
}


// address: 0x801371A8
// line start: 964
// line end:   965
void FMVFreeMem(unsigned long *Addr) {
}


// address: 0x801371C8
// line start: 99
// line end:   103
unsigned short GetDown__C4CPad(struct CPad *this) {
}


