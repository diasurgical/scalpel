// C:\diabpsx\PSXSRC\CARDCORE.CPP

#include "types.h"

// address: 0x800A4B5C
// line start: 162
// line end:   248
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}


// address: 0x800A4D94
// line start: 252
// line end:   278
void memcard_event__Fii(int evt, int side) {
}


// address: 0x800A4DCC
// line start: 283
// line end:   302
void init_card__Fib(int card_number, bool read_dir) {
}


// address: 0x800A4E98
// line start: 311
// line end:   324
int ping_card__Fi(int card_number) {
}


// address: 0x800A4F2C
// line start: 328
// line end:   344
void DealWithCard__Fi(int side) {
}


// address: 0x800A4FF0
// line start: 350
// line end:   366
void CardUpdateTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int toggle;
}


// address: 0x800A5044
// line start: 371
// line end:   392
void MemcardON__Fv() {
}


// address: 0x800A50B0
// line start: 396
// line end:   404
void MemcardOFF__Fv() {
}


// address: 0x800A50E8
// line start: 417
// line end:   443
void CheckSavedOptions__Fv() {
	// register: 2
	register int option_file;
}


// address: 0x800A51E8
// line start: 447
// line end:   456
void card_removed__Fi(int card_number) {
}


// address: 0x800A5220
// line start: 464
// line end:   472
int read_card_block__Fii(int card_number, int block) {
}


// address: 0x800A5268
// line start: 482
// line end:   488
int test_hw_event__Fv() {
}


// address: 0x800A52E8
// line start: 492
// line end:   499
void ActivateMemcard__Fii(int card1, int card2) {
}


// address: 0x800A5324
// line start: 504
// line end:   529
void ActivateCharacterMemcard__Fii(int card1, int card2) {
	{
		{
			// register: 5
			register int fileno;
			{
				{
				}
			}
		}
	}
}


// address: 0x800A53E0
// line start: 535
// line end:   606
void ShowCardActionText__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT um;
	// register: 3
	register int X;
	// register: 17
	register int Y;
	// register: 18
	register int W;
	// register: 20
	register int H;
	// register: 16
	register int otpos;
	// address: 0xFFFFFFC8
	auto int oldBot;
	// register: 23
	register int oldTot;
	// register: 19
	register int lines;
	// register: 16
	register int yprintpos;
	{
		{
			{
			}
		}
	}
}


// address: 0x800A56C4
// line start: 611
// line end:   689
int CountdownLoad__Fi(int Counter) {
	{
		{
			{
				// register: 3
				register int readstate;
				{
					{
						// register: 3
						register int readstate;
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x800A58D4
// line start: 695
// line end:   738
int CountdownSave__Fi(int Counter) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto int cardstate[2];
}


// address: 0x800A59B4
// line start: 742
// line end:   789
void ShowLoadingBox__Fi(int Text) {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT um;
	// register: 21
	register bool addwaitmsg;
	// register: 19
	register int W;
	// register: 20
	register int H;
	// register: 3
	register int X;
	// register: 18
	register int Y;
	// register: 16
	register int otpos;
	// address: 0xFFFFFFC8
	auto int oldBot;
	// register: 30
	register int oldTot;
	// register: 3
	register int lines;
	// register: 18
	register int topline;
	// register: 20
	register int yprintpos;
}


// address: 0x800A5C40
// line start: 795
// line end:   864
void KillItemDead__Fiii(int pnum, int InvPos, int Idx) {
	// register: 9
	register int ii;
	// register: 9
	register int iv;
}


// address: 0x800A6284
// line start: 870
// line end:   893
void DoRemoveSpellItems__Fii(int plrno, int item) {
	// register: 2
	register int i;
	// register: 16
	register int j;
}


// address: 0x800A63BC
// line start: 914
// line end:   941
void ClearLoadCharItems__Fv() {
	// register: 16
	register int i;
}


// address: 0x800A645C
// line start: 978
// line end:   980
void PantsDelay__Fv() {
	{
		// register: 16
		register int i;
	}
}


