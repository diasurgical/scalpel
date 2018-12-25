// C:\diabpsx\PSXSRC\SNDBANK.CPP

#include "types.h"

// address: 0x80099E0C
// line start: 145
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


// address: 0x80099E98
// line start: 164
// line end:   166
void SPU_OnceOnlyInit__Fv() {
}


// address: 0x80099ED0
// line start: 175
// line end:   218
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFC8
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x80099FD8
// line start: 231
// line end:   244
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8009A044
// line start: 254
// line end:   269
void SND_ClearBank__Fv() {
	{
		{
		}
	}
}


// address: 0x8009A0B4
// line start: 278
// line end:   291
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011C908
	static int DestAddr;
}


// address: 0x8009A12C
// line start: 296
// line end:   334
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8009A250
// line start: 410
// line end:   429
int SND_FindSFX__FUs(unsigned short Name) {
	// register: 17
	// size: 0xC
	register struct bank_entry *BankOffsets;
	// register: 16
	register int RetVal;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8009A32C
// line start: 453
// line end:   456
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8009A360
// line start: 466
// line end:   473
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009A39C
// line start: 483
// line end:   488
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8009A410
// line start: 498
// line end:   572
int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj) {
	// register: 21
	register int RetVal;
	{
		{
			// register: 18
			register int sfxnum;
			{
				{
					// register: 19
					register int voice;
					{
						{
							// register: 17
							// size: 0xC
							register struct bank_entry *BankOffsets;
							// register: 6
							register int Offset;
							// address: 0xFFFFFF98
							// size: 0x40
							auto struct SpuVoiceAttr voice_attr;
						}
					}
				}
			}
		}
	}
}


