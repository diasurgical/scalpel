// C:\diabpsx\PSXSRC\STREAM.CPP

#include "types.h"

// address: 0x800985FC
// line start: 166
// line end:   191
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 20
	// size: 0x70
	register struct TextDat *CDGfxData;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			{
				// register: 16
				register int cdx;
				// register: 17
				register int cdy;
			}
		}
	}
}


// address: 0x80098738
// line start: 197
// line end:   199
void InitCDWaitIcon__Fv() {
}


// address: 0x8009876C
// line start: 209
// line end:   228
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x80098780
// line start: 424
// line end:   443
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x800987B0
// line start: 456
// line end:   464
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


// address: 0x800987E8
// line start: 472
// line end:   520
void STR_Init__Fv() {
	{
		{
			// register: 3
			register long vm;
			// register: 5
			register unsigned char *ptr;
			// register: 16
			// size: 0x5C
			register struct TASK *T;
			{
				// register: 4
				register int i;
			}
		}
	}
}


// address: 0x80098914
// size: 0x84
// line start: 531
// line end:   585
struct SFXHDR *STR_InitStream__Fc(char flag) {
	// register: 16
	// size: 0x84
	register struct SFXHDR *sfh;
}


// address: 0x80098A3C
// size: 0x84
// line start: 597
// line end:   726
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 17
	// size: 0x84
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFB8
	// size: 0x20
	auto char tstring[32];
	// address: 0xFFFFFFD8
	// size: 0x2
	auto char Prefix[2];
	{
		{
			// register: 3
			// size: 0x4
			register enum LANG_TYPE Lang;
		}
	}
}


// address: 0x80098C84
// line start: 736
// line end:   752
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 2
	// size: 0x4
	register enum LANG_TYPE lang;
}


// address: 0x80098D50
// line start: 761
// line end:   765
void STR_setpitch__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80098D9C
// line start: 775
// line end:   806
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x80098EA8
// line start: 816
// line end:   821
void STR_pauseall__Fv() {
	{
		// register: 18
		register int i;
	}
}


// address: 0x80098F1C
// line start: 831
// line end:   836
void STR_resumeall__Fv() {
	{
		// register: 18
		register int i;
	}
}


// address: 0x80098F90
// line start: 846
// line end:   867
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80098FFC
// line start: 876
// line end:   918
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x800990E8
// line start: 927
// line end:   1003
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x800992D8
// line start: 1013
// line end:   1031
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x800993A0
// line start: 1042
// line end:   1133
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
	// register: 2
	register int read;
	// register: 5
	register int osize;
}


// address: 0x80099620
// line start: 1145
// line end:   1268
void STR_AsyncWeeTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 20
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x84
	register struct SFXHDR *sfh;
	// register: 17
	register char Done;
	// register: 19
	register int frame;
	// register: 18
	register int framediff;
	// register: 21
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
	{
		{
			{
			}
		}
	}
}


// address: 0x800998F8
// line start: 1281
// line end:   1461
void STR_AsyncTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 21
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x84
	register struct SFXHDR *sfh;
	// register: 17
	register char Done;
	// register: 20
	register int latency;
	// register: 19
	register int frame;
	// register: 18
	register int framediff;
	// register: 22
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											{
												// register: 16
												register unsigned long vol;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80099CE0
// line start: 1471
// line end:   1515
void STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh, char FileType) {
	// register: 17
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


