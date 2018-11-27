// C:\diabpsx\PSXSRC\FMV.CPP

#include "types.h"

// address: 0x801367C0
// line start: 210
// line end:   211
void DsDataCallback() {
}


// address: 0x801367C8
// line start: 214
// line end:   215
void DsReadyCallback() {
}


// address: 0x801367D0
// line start: 226
// line end:   228
void SetDecDCT() {
}


// address: 0x801367D8
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


// address: 0x80136B38
// line start: 392
// line end:   415
void StrDecDCToutCB() {
}


// address: 0x80136C40
// line start: 425
// line end:   426
void STR_CallBack(int handle) {
}


// address: 0x80136C50
// line start: 432
// line end:   442
void STR_SetRing() {
}


// address: 0x80136CAC
// line start: 447
// line end:   448
void STR_RingEnd() {
}


// address: 0x80136CD0
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


// address: 0x80136E8C
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


// address: 0x801372C0
// line start: 655
// line end:   683
void StrEnd() {
}


// address: 0x80137380
// line start: 693
// line end:   699
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x801373F0
// line start: 708
// line end:   723
short StrKickCD(struct CdlLOC *loc) {
	// register: 16
	register short seekRetry;
	// register: 17
	register short readRetry;
}


// address: 0x801374A4
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


// address: 0x80137680
// line start: 814
// line end:   837
void StrVLCFrame(unsigned long *frame) {
}


// address: 0x80137728
// line start: 845
// line end:   864
void StrDrawDecodeSync() {
	// register: 3
	register long timer;
}


// address: 0x801377FC
// line start: 873
// line end:   884
short StrFadeOutVol(short *fadeVol) {
}


// address: 0x80137830
// line start: 894
// line end:   901
long GetDCToutSize() {
	// register: 3
	register unsigned short h;
}


// address: 0x801378A0
// line start: 910
// line end:   915
unsigned short ScalePPW(unsigned short n) {
}


// address: 0x801378D4
// line start: 924
// line end:   925
unsigned short GetDCT_MODE() {
}


// address: 0x801378F8
// line start: 935
// line end:   945
void PrintVLCBufSize() {
}


// address: 0x801379A0
// line start: 957
// line end:   960
unsigned long FMVAllocMem(unsigned long MemSize) {
}


// address: 0x801379C0
// line start: 964
// line end:   965
void FMVFreeMem(unsigned long *Addr) {
}


