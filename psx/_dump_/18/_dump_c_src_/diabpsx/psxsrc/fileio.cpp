// C:\diabpsx\PSXSRC\FILEIO.CPP

#include "types.h"

// address: 0x8007C564
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007C5B4
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007C608
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007C770
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007C7D4
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007C7F4
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007C8D4
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007C998
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007C9FC
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007CAD8
bool FindFile__6FileIOPCcPc(struct FileIO *this, char *Name, char *Buffa) {
	{
		{
			// register: 19
			register bool Success;
			{
				{
					// register: 18
					register char *Path;
				}
			}
		}
	}
}


// address: 0x8007CBEC
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007CC94
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007CCEC
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007CD44
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007CD58
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


