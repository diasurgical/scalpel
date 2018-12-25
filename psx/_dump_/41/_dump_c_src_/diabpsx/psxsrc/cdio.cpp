// C:\diabpsx\PSXSRC\CDIO.CPP

#include "types.h"

// address: 0x80086888
// size: 0x14
// line start: 123
// line end:   126
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x800868CC
// line start: 136
// line end:   136
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80086924
// line start: 146
// line end:   156
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80086948
// line start: 168
// line end:   200
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x800869E4
// line start: 209
// line end:   219
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80086A08
// line start: 226
// line end:   245
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80086ADC
// line start: 268
// line end:   285
bool CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char SearchBuffer[256];
}


// address: 0x80086B2C
// line start: 292
// line end:   373
bool LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// address: 0xFFFFFFC8
	auto unsigned char *Dest;
	// address: 0xFFFFFFD0
	auto int OrigSize;
	// register: 19
	register unsigned long Pos;
	// register: 23
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
	// register: 22
	register unsigned char Count;
	// register: 30
	register int Lumpfile;
	{
		// register: 17
		register int SizeToRead;
		// register: 20
		register unsigned char *ptr;
	}
}


// address: 0x80086D54
// line start: 382
// line end:   422
bool LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
	register long hndText;
	// register: 18
	register unsigned char *Dest;
	// register: 21
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


