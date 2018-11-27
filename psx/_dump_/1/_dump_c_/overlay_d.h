#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x80135E80
void DsDataCallback() {
}


// address: 0x80135E88
void DsReadyCallback() {
}


// address: 0x80135E90
void SetDecDCT() {
}


// address: 0x80135E98
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


// address: 0x801361F8
void StrDecDCToutCB() {
}


// address: 0x80136300
void STR_CallBack(int handle) {
}


// address: 0x80136310
void STR_SetRing() {
}


// address: 0x8013636C
void STR_RingEnd() {
}


// address: 0x80136390
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


// address: 0x8013654C
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


// address: 0x80136980
void StrEnd() {
}


// address: 0x80136A40
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x80136AB0
short StrKickCD(struct CdlLOC *loc) {
	// register: 16
	register short seekRetry;
	// register: 17
	register short readRetry;
}


// address: 0x80136B64
unsigned long *StrGetNextFrame() {
	// register: 16
	register long timer;
	// register: 17
	register unsigned long *addr;
	// register: 16
	// size: 0x20
	register struct StHEADER *sector;
}


// address: 0x80136D40
void StrVLCFrame(unsigned long *frame) {
}


// address: 0x80136DE8
void StrDrawDecodeSync() {
	// register: 3
	register long timer;
}


// address: 0x80136EBC
short StrFadeOutVol(short *fadeVol) {
}


// address: 0x80136EF0
long GetDCToutSize() {
	// register: 3
	register unsigned short h;
}


// address: 0x80136F60
unsigned short ScalePPW(unsigned short n) {
}


// address: 0x80136F94
unsigned short GetDCT_MODE() {
}


// address: 0x80136FB8
void PrintVLCBufSize() {
}


// address: 0x80137060
unsigned long FMVAllocMem(unsigned long MemSize) {
}


// address: 0x80137080
void FMVFreeMem(unsigned long *Addr) {
}


// address: 0x801370A0
unsigned short GetDown__C4CPad(struct CPad *this) {
}


