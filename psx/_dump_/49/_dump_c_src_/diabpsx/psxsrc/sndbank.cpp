// C:\diabpsx\PSXSRC\SNDBANK.CPP

#include "types.h"

// address: 0x8008D298
// line start: 140
// line end:   177
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x8008D368
// line start: 190
// line end:   203
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8008D3D4
// line start: 213
// line end:   223
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8008D44C
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80114C4C
	static int DestAddr;
}


// address: 0x8008D4C4
// line start: 249
// line end:   288
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8008D5F8
// line start: 354
// line end:   359
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008D64C
// line start: 383
// line end:   385
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8008D670
// line start: 395
// line end:   400
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008D6D4
// line start: 410
// line end:   473
int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj) {
	// address: 0xFFFFFFA0
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 19
	register int Offset;
	// register: 3
	register int sfxnum;
	// register: 17
	register int voice;
}


