// C:\diabpsx\PSXSRC\SNDBANK.CPP

#include "types.h"

// address: 0x80092934
// line start: 149
// line end:   159
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


// address: 0x800929C0
// line start: 164
// line end:   166
void SPU_OnceOnlyInit__Fv() {
}


// address: 0x800929F8
// line start: 175
// line end:   212
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


// address: 0x80092ADC
// line start: 225
// line end:   238
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x80092B48
// line start: 248
// line end:   258
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x80092BC0
// line start: 267
// line end:   280
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011D9BC
	static int DestAddr;
}


// address: 0x80092C38
// line start: 285
// line end:   324
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x80092D6C
// line start: 398
// line end:   403
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80092DC0
// line start: 427
// line end:   429
void SND_StopSnd__Fi(int voice) {
}


// address: 0x80092DE4
// line start: 439
// line end:   446
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80092E20
// line start: 456
// line end:   461
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80092E94
// line start: 471
// line end:   539
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


