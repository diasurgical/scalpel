// C:\diabpsx\PSXSRC\SNDBANK.CPP

#include "types.h"

// address: 0x80090528
// line start: 150
// line end:   160
void SND_Monitor__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFFD8
	// size: 0x18
	auto char status[24];
	{
		{
			// register: 5
			register int i;
		}
	}
}


// address: 0x800905B4
// line start: 171
// line end:   213
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
		{
			// register: 3
			register int i;
		}
	}
}


// address: 0x800906C0
// line start: 226
// line end:   239
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8009072C
// line start: 249
// line end:   259
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x800907A4
// line start: 268
// line end:   281
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012E734
	static int DestAddr;
}


// address: 0x8009081C
// line start: 286
// line end:   325
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x80090950
// line start: 391
// line end:   396
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800909A4
// line start: 420
// line end:   422
void SND_StopSnd__Fi(int voice) {
}


// address: 0x800909C8
// line start: 432
// line end:   439
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80090A04
// line start: 449
// line end:   454
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090A78
// line start: 464
// line end:   532
int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj) {
	// address: 0xFFFFFF98
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 19
	register int Offset;
	// register: 3
	register int sfxnum;
	// register: 17
	register int voice;
}


