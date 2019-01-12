// C:\diabpsx\PSXSRC\STREAM.CPP

#include "types.h"

// address: 0x8008ECD4
// line start: 146
// line end:   167
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat *CDGfxData;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8008ED8C
// line start: 173
// line end:   175
void InitCDWaitIcon__Fv() {
}


// address: 0x8008EDC0
// line start: 185
// line end:   202
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008EDD4
// line start: 398
// line end:   421
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008EE1C
// line start: 431
// line end:   441
void STR_AllocBuffer__Fv() {
	{
		{
			{
				// register: 3
				register int i;
			}
		}
	}
}


// address: 0x8008EE70
// line start: 447
// line end:   474
void STR_Init__Fv() {
	{
		{
			// register: 4
			register unsigned char *ptr;
			// register: 16
			// size: 0x5C
			register struct TASK *T;
			{
			}
		}
	}
}


// address: 0x8008EF3C
// size: 0x80
// line start: 485
// line end:   543
struct SFXHDR *STR_InitStream__Fv() {
	// register: 18
	// size: 0x80
	register struct SFXHDR *sfh;
	{
		// register: 17
		register int s;
	}
}


// address: 0x8008F074
// size: 0x80
// line start: 553
// line end:   613
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008F1B0
// line start: 623
// line end:   628
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F208
// line start: 653
// line end:   684
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008F314
// line start: 694
// line end:   698
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F364
// line start: 708
// line end:   712
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F3B4
// line start: 722
// line end:   740
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F420
// line start: 749
// line end:   791
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008F52C
// line start: 800
// line end:   869
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F6D8
// line start: 879
// line end:   898
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008F7A0
// line start: 909
// line end:   986
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008F97C
// line start: 998
// line end:   1119
void STR_AsyncWeeTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 19
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// register: 17
	register char Done;
	// register: 18
	register int frame;
	// register: 20
	register int framediff;
	// register: 21
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
}


// address: 0x8008FC74
// line start: 1132
// line end:   1299
void STR_AsyncTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 21
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// register: 18
	register char Done;
	// register: 17
	register int latency;
	// register: 19
	register int frame;
	// register: 22
	register int framediff;
	// register: 20
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
}


// address: 0x800900A0
// line start: 1313
// line end:   1348
void STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh, char FileType) {
	// register: 18
	// size: 0x14
	register struct STRHDR *sh;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	{
		{
			// register: 16
			// size: 0x5C
			register struct TASK *T2;
		}
	}
}


