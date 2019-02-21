// C:\diabpsx\PSXSRC\KANJI.CPP

#include "types.h"

// address: 0x800AD058
// line start: 139
// line end:   149
void ClearKanjiBuffer__Fv() {
	// register: 4
	// size: 0x4
	register struct vbuffS *kl;
	// register: 3
	register int i;
}


// address: 0x800AD020
// line start: 127
// line end:   135
void ClearKanjiCount__Fv() {
	// register: 4
	// size: 0x4
	register struct vbuffS *kl;
	// register: 3
	register int i;
}


// address: 0x800AD784
// line start: 450
// line end:   469
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


// address: 0x800A060C
// line start: 76
// line end:   94
void FreeKanji__Fv() {
}


// address: 0x800AD970
// size: 0x4
// line start: 530
// line end:   531
enum KANJI_FRMS GetKanjiCacheFrm__Fv() {
}


// address: 0x800AD97C
// size: 0x28
// line start: 535
// line end:   619
struct POLY_FT4 *GetKanjiFrm__FUs(unsigned short kan) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *ft4;
	// register: 17
	register int im;
	// address: 0xFFFFFEB8
	// size: 0x8
	auto struct RECT r;
	// address: 0xFFFFFEC0
	// size: 0x90
	auto unsigned char deBuff[144];
	// address: 0xFFFFFF50
	// size: 0x90
	auto unsigned char dekbuff[144];
	// register: 3
	// size: 0x4
	register struct vbuffS *kl;
	// register: 16
	// size: 0x70
	register struct TextDat_dup_17 *Dat;
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


// address: 0x800AD8A8
// size: 0x28
// line start: 535
// line end:   619
struct POLY_FT4 *GetKanjiFrm__FUs_addr_800AD8A8(unsigned short kan) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *ft4;
	// register: 17
	register int im;
	// address: 0xFFFFFEB8
	// size: 0x8
	auto struct RECT r;
	// address: 0xFFFFFEC0
	// size: 0x90
	auto unsigned char deBuff[144];
	// address: 0xFFFFFF50
	// size: 0x90
	auto unsigned char dekbuff[144];
	// register: 3
	// size: 0x4
	register struct vbuffS *kl;
	// register: 16
	// size: 0x70
	register struct TextDat_dup_18 *Dat;
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


// address: 0x800AD8F4
// size: 0x28
// line start: 532
// line end:   615
struct POLY_FT4 *GetKanjiFrm__FUs_addr_800AD8F4(unsigned short kan) {
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


// address: 0x800AD468
// line start: 294
// line end:   295
bool IsKanjiLoaded__Fv() {
}


// address: 0x800ACFC8
// line start: 154
// line end:   236
void KANJI_SetCache__F10KANJI_FRMS(enum KANJI_FRMS ct) {
	// register: 17
	// size: 0x108
	register struct CBlocks_dup_18 *BgBlocks;
	{
		{
			// register: 16
			// size: 0x70
			register struct TextDat_dup_18 *Dat;
			{
				// register: 16
				// size: 0x70
				register struct TextDat_dup_18 *Dat;
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x800AD09C
// line start: 154
// line end:   236
void KANJI_SetCache__F10KANJI_FRMS_addr_800AD09C(enum KANJI_FRMS ct) {
	// register: 17
	// size: 0x108
	register struct CBlocks_dup_17 *BgBlocks;
	{
		{
			// register: 16
			// size: 0x70
			register struct TextDat_dup_17 *Dat;
			{
				// register: 16
				// size: 0x70
				register struct TextDat_dup_17 *Dat;
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x800AD08C
// line start: 150
// line end:   232
void KANJI_SetCache__F10KANJI_FRMS_addr_800AD08C(enum KANJI_FRMS ct) {
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


// address: 0x800AD014
// line start: 150
// line end:   232
void KANJI_SetCache__F10KANJI_FRMS_addr_800AD014(enum KANJI_FRMS ct) {
	// register: 17
	// size: 0x108
	register struct CBlocks_dup_19 *BgBlocks;
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


// address: 0x800AD3F8
// line start: 317
// line end:   330
void KANJI_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
	// register: 3
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x800AD4CC
// line start: 317
// line end:   330
void KANJI_SetDb__F10LANG_DB_NO_addr_800AD4CC(enum LANG_DB_NO_dup_17 NewLangDbNo) {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
	// register: 3
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x800A3DF4
// line start: 214
// line end:   257
int KPrintChar__FUsUsUcUcUs(unsigned short Cx, unsigned short Cy, unsigned char h, unsigned char l, int col) {
	// address: 0xFFFFFE60
	// size: 0x28
	auto struct POLY_FT4 At4;
	// register: 20
	// size: 0x28
	register struct POLY_FT4 *ft4;
	// address: 0xFFFFFE88
	// size: 0x152
	auto unsigned short buff[169];
	// register: 5
	register unsigned short kan;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT r;
}


// address: 0x800A08A8
// line start: 188
// line end:   229
int KPrintChar__FUsUsUcUcUs_addr_800A08A8(unsigned short Cx, unsigned short Cy, unsigned char h, unsigned char l, int col) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *ft4;
	// address: 0xFFFFFE80
	// size: 0x152
	auto unsigned short buff[169];
	// register: 5
	register unsigned short kan;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT r;
}


// address: 0x8009F65C
// line start: 110
// line end:   144
int KPrintChar__FUsUsUcUcUs_addr_8009F65C(unsigned short Cx, unsigned short Cy, unsigned char h, unsigned char l, int col) {
	// address: 0xFFFFFFE8
	// size: 0x28
	auto struct POLY_FT4 *ft4;
	// address: 0xFFFFFE88
	// size: 0x152
	auto unsigned short buff[169];
	// register: 5
	register unsigned short kan;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT r;
}


// address: 0x800AD3A0
// line start: 300
// line end:   313
void KanjiSetTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	// size: 0x4
	register enum LANG_DB_NO NewLangDbNo;
}


// address: 0x800AD474
// line start: 300
// line end:   313
void KanjiSetTSK__FP4TASK_addr_800AD474(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	// size: 0x4
	register enum LANG_DB_NO_dup_17 NewLangDbNo;
}


// address: 0x800ACF68
// line start: 71
// line end:   90
void LoadKanjiFont__FPc(char *name) {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A16DC
// line start: 44
// line end:   67
void LoadKanjiFont__FPc_addr_800A16DC(char *name) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A04C4
// line start: 40
// line end:   52
void LoadKanjiFont__FPc_addr_800A04C4(char *name) {
}


// address: 0x8009F494
// line start: 34
// line end:   36
void LoadKanjiFont__Fv() {
}


// address: 0x8009F948
// line start: 37
// line end:   54
void LoadKanjiFont__Fv_addr_8009F948() {
	// register: 16
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A17CC
// line start: 72
// line end:   97
void LoadKanjiIndex__FPc(char *name) {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A0558
// line start: 57
// line end:   71
void LoadKanjiIndex__FPc_addr_800A0558(char *name) {
	// register: 16
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009F4D0
// line start: 40
// line end:   42
void LoadKanjiIndex__Fv() {
}


// address: 0x8009FA18
// line start: 59
// line end:   78
void LoadKanjiIndex__Fv_addr_8009FA18() {
	// register: 17
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800AD328
// line start: 245
// line end:   278
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO_dup_17 NewLangDbNo) {
}


// address: 0x800A0694
// line start: 101
// line end:   123
void LoadKanji__F10LANG_DB_NO_addr_800A0694(enum LANG_DB_NO NewLangDbNo) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto char tmp[40];
	// register: 16
	register char *bname;
}


// address: 0x800AD254
// line start: 245
// line end:   278
void LoadKanji__F10LANG_DB_NO_addr_800AD254(enum LANG_DB_NO NewLangDbNo) {
}


// address: 0x800AD458
// line start: 286
// line end:   289
bool SetKanjiLoaded__Fb(bool loaded) {
	// register: 2
	register bool iret;
}


// address: 0x800AD5DC
// line start: 365
// line end:   441
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


// address: 0x800AD7F8
// line start: 474
// line end:   502
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


// address: 0x8009F580
// line start: 78
// line end:   102
void _get_font__FPUsUsUs(unsigned short *into, unsigned short num, unsigned short col) {
	// register: 8
	register unsigned short *p;
	// register: 16
	register unsigned short *d;
	// register: 5
	register long i;
	// register: 3
	register long j;
	// register: 6
	register short by;
}


// address: 0x8009F50C
// line start: 49
// line end:   67
unsigned short *getb__FUs(unsigned short n) {
	// register: 3
	// size: 0x4
	register struct kindexS *ii;
	// register: 4
	register int i;
	// register: 16
	register int off;
}


// address: 0x8009FB04
// line start: 85
// line end:   103
unsigned short *getb__FUs_addr_8009FB04(unsigned short n) {
	// register: 4
	// size: 0x4
	register struct kindexS *ii;
	// register: 3
	register int i;
	// register: 16
	register int off;
}


// address: 0x800AD5CC
// line start: 351
// line end:   355
unsigned short getb__FUs_addr_800AD5CC(unsigned short n) {
}


// address: 0x800AD8B8
// line start: 507
// line end:   525
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


// address: 0x800AD544
// line start: 336
// line end:   347
int inmem__Fs(short k) {
	// register: 16
	// size: 0x4
	register struct vbuffS *kl;
	{
		// register: 3
		register int i;
	}
}


