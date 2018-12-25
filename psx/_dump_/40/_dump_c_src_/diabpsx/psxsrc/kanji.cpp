// C:\diabpsx\PSXSRC\KANJI.CPP

#include "types.h"

// address: 0x800ACDFC
// line start: 69
// line end:   98
void LoadKanjiFont__FPc(char *name) {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800ACF40
// line start: 103
// line end:   117
void FreeKanji__Fv() {
}


// address: 0x800ACF98
// line start: 123
// line end:   131
void ClearKanjiCount__Fv() {
	// register: 4
	// size: 0x4
	register struct vbuffS *kl;
	// register: 3
	register int i;
}


// address: 0x800ACFD0
// line start: 135
// line end:   145
void ClearKanjiBuffer__Fv() {
	// register: 4
	// size: 0x4
	register struct vbuffS *kl;
	// register: 3
	register int i;
}


// address: 0x800AD014
// line start: 150
// line end:   232
void KANJI_SetCache__F10KANJI_FRMS(enum KANJI_FRMS ct) {
	// register: 17
	// size: 0x108
	register struct CBlocks *BgBlocks;
	{
		{
			// register: 16
			// size: 0x70
			register struct TextDat *Dat;
			{
				// register: 16
				// size: 0x70
				register struct TextDat *Dat;
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x800AD2A0
// line start: 241
// line end:   274
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
}


// address: 0x800AD3D0
// line start: 282
// line end:   285
bool SetKanjiLoaded__Fb(bool loaded) {
	// register: 2
	register bool iret;
}


// address: 0x800AD3E0
// line start: 290
// line end:   291
bool IsKanjiLoaded__Fv() {
}


// address: 0x800AD3EC
// line start: 296
// line end:   309
void KanjiSetTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	// size: 0x4
	register enum LANG_DB_NO NewLangDbNo;
}


// address: 0x800AD444
// line start: 313
// line end:   326
void KANJI_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
	// register: 3
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x800AD4BC
// line start: 332
// line end:   343
int inmem__Fs(short k) {
	// register: 16
	// size: 0x4
	register struct vbuffS *kl;
	{
		// register: 3
		register int i;
	}
}


// address: 0x800AD544
// line start: 347
// line end:   351
unsigned short getb__FUs(unsigned short n) {
}


// address: 0x800AD554
// line start: 361
// line end:   437
void ShadeBuff__FPUcii(unsigned char *b, int col, int border) {
	{
		// register: 7
		register int y;
		{
			{
				// register: 3
				register int x;
			}
		}
	}
}


// address: 0x800AD6FC
// line start: 446
// line end:   465
void Crunch__FPUcT0(unsigned char *s, unsigned char *db) {
	// register: 2
	register int c;
	// register: 8
	register unsigned short *d;
	{
		// register: 9
		register int y;
		{
			{
				// register: 7
				register int x;
			}
		}
	}
}


// address: 0x800AD770
// line start: 470
// line end:   498
void _get_font__FPUcUsT0(unsigned char *d, unsigned short num, unsigned char *abuff) {
	// register: 16
	register unsigned char *bp;
	// register: 4
	register long i;
	// register: 18
	register char bcy;
	// register: 3
	register char shift;
}


// address: 0x800AD830
// line start: 503
// line end:   521
int getfreekan__Fv() {
	// register: 17
	register unsigned char max;
	// register: 18
	register int n;
	// register: 16
	// size: 0x4
	register struct vbuffS *kl;
	{
		// register: 4
		register int i;
	}
}


// address: 0x800AD8E8
// size: 0x4
// line start: 526
// line end:   527
enum KANJI_FRMS GetKanjiCacheFrm__Fv() {
}


// address: 0x800AD8F4
// size: 0x28
// line start: 532
// line end:   615
struct POLY_FT4 *GetKanjiFrm__FUs(unsigned short kan) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *ft4;
	// register: 17
	register int im;
	// address: 0xFFFFFED8
	// size: 0x8
	auto struct RECT r;
	// address: 0xFFFFFEE0
	// size: 0x100
	auto unsigned char deBuff[256];
	// register: 3
	// size: 0x4
	register struct vbuffS *kl;
	// register: 16
	// size: 0x70
	register struct TextDat *Dat;
	// register: 17
	register int TpX;
	// register: 16
	register int TpY;
	// register: 16
	register unsigned char *kbuff;
	// register: 18
	register unsigned char *kanjbuff;
	// register: 3
	register int U;
	// register: 4
	register int V;
}


