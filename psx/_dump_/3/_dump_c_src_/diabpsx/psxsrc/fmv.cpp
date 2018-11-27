// C:\diabpsx\PSXSRC\FMV.CPP

#include "types.h"

// address: 0x8014662C
// line start: 202
// line end:   203
void DsDataCallback() {
}


// address: 0x80146634
// line start: 206
// line end:   207
void DsReadyCallback() {
}


// address: 0x8014663C
// line start: 218
// line end:   220
void SetDecDCT() {
}


// address: 0x80146644
// line start: 229
// line end:   375
short PlayFMV(struct StrInfo *str) {
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


// address: 0x801469B4
// line start: 383
// line end:   406
void StrDecDCToutCB() {
}


// address: 0x80146ABC
// line start: 416
// line end:   417
void STR_CallBack(int handle) {
}


// address: 0x80146ACC
// line start: 423
// line end:   433
void STR_SetRing() {
}


// address: 0x80146B28
// line start: 438
// line end:   439
void STR_RingEnd() {
}


// address: 0x80146B4C
// line start: 450
// line end:   509
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


// address: 0x80146D08
// line start: 519
// line end:   624
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


// address: 0x8014713C
// line start: 646
// line end:   674
void StrEnd() {
}


// address: 0x801471FC
// line start: 684
// line end:   690
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8014726C
// line start: 699
// line end:   714
short StrKickCD(struct CdlLOC *loc) {
	// register: 16
	register short seekRetry;
	// register: 17
	register short readRetry;
}


// address: 0x80147320
// line start: 723
// line end:   793
unsigned long *StrGetNextFrame() {
	// register: 16
	register long timer;
	// register: 17
	register unsigned long *addr;
	// register: 16
	// size: 0x20
	register struct StHEADER *sector;
}


// address: 0x801474FC
// line start: 805
// line end:   828
void StrVLCFrame(unsigned long *frame) {
}


// address: 0x801475A4
// line start: 836
// line end:   855
void StrDrawDecodeSync() {
	// register: 3
	register long timer;
}


// address: 0x80147678
// line start: 864
// line end:   875
short StrFadeOutVol(short *fadeVol) {
}


// address: 0x801476AC
// line start: 885
// line end:   892
long GetDCToutSize() {
	// register: 3
	register unsigned short h;
}


// address: 0x8014771C
// line start: 901
// line end:   906
unsigned short ScalePPW(unsigned short n) {
}


// address: 0x80147750
// line start: 915
// line end:   916
unsigned short GetDCT_MODE() {
}


// address: 0x80147774
// line start: 926
// line end:   936
void PrintVLCBufSize() {
}


// address: 0x8014781C
// line start: 948
// line end:   951
unsigned long FMVAllocMem(unsigned long MemSize) {
}


// address: 0x8014783C
// line start: 955
// line end:   956
void FMVFreeMem(unsigned long *Addr) {
}


