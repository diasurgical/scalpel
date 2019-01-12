// C:\diabpsx\PSXSRC\SNDBANK.CPP

#include "types.h"

// address: 0x8008DB2C
// line start: 248
// line end:   258
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8009A10C
// line start: 254
// line end:   269
void SND_ClearBank__Fv_addr_8009A10C() {
	{
		{
		}
	}
}


// address: 0x8008DAC0
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


// address: 0x8008DD50
// line start: 389
// line end:   394
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8009A318
// line start: 410
// line end:   429
int SND_FindSFX__FUs_addr_8009A318(unsigned short Name) {
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


// address: 0x80090B1C
// line start: 431
// line end:   438
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008DC1C
// line start: 284
// line end:   323
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8009067C
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


// address: 0x80090BBC
// line start: 463
// line end:   531
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


// address: 0x8008DE2C
// line start: 445
// line end:   508
int SND_PlaySnd__FUsiii_addr_8008DE2C(unsigned short Name, int vol, int pan, int pitchadj) {
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


// address: 0x8009A4D8
// line start: 498
// line end:   572
int SND_PlaySnd__FUsiii_addr_8009A4D8(unsigned short Name, int vol, int pan, int pitchadj) {
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


// address: 0x8008DDC8
// line start: 430
// line end:   435
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008DDA4
// line start: 418
// line end:   420
void SND_StopSnd__Fi(int voice) {
}


// address: 0x80099F98
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


// address: 0x80090708
// line start: 170
// line end:   212
void SPU_Init__Fv_addr_80090708() {
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


// address: 0x8008D9F8
// line start: 176
// line end:   212
void SPU_Init__Fv_addr_8008D9F8() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x80099F60
// line start: 164
// line end:   166
void SPU_OnceOnlyInit__Fv() {
}


// address: 0x8008FD70
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012C364
	static int DestAddr;
}


// address: 0x800908F8
// line start: 267
// line end:   280
bool SndLoadCallBack__FPUciib_addr_800908F8(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012DB9C
	static int DestAddr;
}


// address: 0x8008F97C
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib_addr_8008F97C(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x801198C0
	static int DestAddr;
}


// address: 0x8009A0B4
// line start: 278
// line end:   291
bool SndLoadCallBack__FPUciib_addr_8009A0B4(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011C908
	static int DestAddr;
}


// address: 0x80090364
// line start: 233
// line end:   246
bool SndLoadCallBack__FPUciib_addr_80090364(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012CE78
	static int DestAddr;
}


// address: 0x8008D804
// line start: 267
// line end:   280
bool SndLoadCallBack__FPUciib_addr_8008D804(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80117BF0
	static int DestAddr;
}


// address: 0x8008FF50
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib_addr_8008FF50(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012C670
	static int DestAddr;
}


// address: 0x8008F728
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib_addr_8008F728(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80118C48
	static int DestAddr;
}


// address: 0x80090358
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib_addr_80090358(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012C584
	static int DestAddr;
}


// address: 0x8009A0A8
// line start: 278
// line end:   291
bool SndLoadCallBack__FPUciib_addr_8009A0A8(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011C7F4
	static int DestAddr;
}


// address: 0x8009A000
// line start: 278
// line end:   291
bool SndLoadCallBack__FPUciib_addr_8009A000(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011C8BC
	static int DestAddr;
}


// address: 0x800910C4
// line start: 268
// line end:   281
bool SndLoadCallBack__FPUciib_addr_800910C4(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80121788
	static int DestAddr;
}


// address: 0x80092D4C
// line start: 267
// line end:   280
bool SndLoadCallBack__FPUciib_addr_80092D4C(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80123C0C
	static int DestAddr;
}


// address: 0x8008DD74
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib_addr_8008DD74(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x801163FC
	static int DestAddr;
}


// address: 0x80090430
// line start: 233
// line end:   246
bool SndLoadCallBack__FPUciib_addr_80090430(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012D488
	static int DestAddr;
}


// address: 0x8008F2E4
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib_addr_8008F2E4(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80118240
	static int DestAddr;
}


// address: 0x80092BC0
// line start: 267
// line end:   280
bool SndLoadCallBack__FPUciib_addr_80092BC0(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011D9BC
	static int DestAddr;
}


// address: 0x8008FF58
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib_addr_8008FF58(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011A0A4
	static int DestAddr;
}


// address: 0x8008E6F4
// line start: 268
// line end:   281
bool SndLoadCallBack__FPUciib_addr_8008E6F4(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012B0D0
	static int DestAddr;
}


// address: 0x80090390
// line start: 233
// line end:   246
bool SndLoadCallBack__FPUciib_addr_80090390(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012D5C0
	static int DestAddr;
}


// address: 0x8008DBA4
// line start: 267
// line end:   280
bool SndLoadCallBack__FPUciib_addr_8008DBA4(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80117AC8
	static int DestAddr;
}


// address: 0x800907A4
// line start: 268
// line end:   281
bool SndLoadCallBack__FPUciib_addr_800907A4(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012E734
	static int DestAddr;
}


// address: 0x80090694
// line start: 267
// line end:   280
bool SndLoadCallBack__FPUciib_addr_80090694(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012D954
	static int DestAddr;
}


// address: 0x8008DD98
// line start: 267
// line end:   280
bool SndLoadCallBack__FPUciib_addr_8008DD98(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80118404
	static int DestAddr;
}


// address: 0x8008D44C
// line start: 232
// line end:   245
bool SndLoadCallBack__FPUciib_addr_8008D44C(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x80114C4C
	static int DestAddr;
}


// address: 0x8009A17C
// line start: 278
// line end:   291
bool SndLoadCallBack__FPUciib_addr_8009A17C(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011C8FC
	static int DestAddr;
}


