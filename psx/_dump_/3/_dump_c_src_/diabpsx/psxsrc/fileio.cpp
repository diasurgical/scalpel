// C:\diabpsx\PSXSRC\FILEIO.CPP

#include "types.h"

// address: 0x8007EA50
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007EAA0
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007EAF4
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007EC5C
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007ECC0
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007ECE0
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007EDC0
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007EE84
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007EEE8
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007EFC4
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


// address: 0x8007F0D8
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007F180
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007F1D8
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007F230
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007F244
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


