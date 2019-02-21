// C:\diabpsx\PSXSRC\CARDCORE.CPP

#include "types.h"

// address: 0x800A5490
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


// address: 0x800A5454
// line start: 492
// line end:   499
void ActivateMemcard__Fii(int card1, int card2) {
}


// address: 0x800983B4
// line start: 279
// line end:   285
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x800A515C
// line start: 350
// line end:   366
void CardUpdateTask__FP4TASK_addr_800A515C(struct TASK *T) {
	// register: 16
	register int toggle;
}


// address: 0x8009AA70
// line start: 286
// line end:   304
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
}


// address: 0x800A5254
// line start: 417
// line end:   443
void CheckSavedOptions__Fv_addr_800A5254() {
	// register: 2
	register int option_file;
}


// address: 0x800A6528
// line start: 914
// line end:   941
void ClearLoadCharItems__Fv() {
	// register: 16
	register int i;
}


// address: 0x800A5830
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


// address: 0x800A5A40
// line start: 695
// line end:   738
int CountdownSave__Fi(int Counter) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto int cardstate[2];
}


// address: 0x800A5098
// line start: 328
// line end:   344
void DealWithCard__Fi(int side) {
}


// address: 0x800A63F0
// line start: 870
// line end:   893
void DoRemoveSpellItems__Fii(int plrno, int item) {
	// register: 2
	register int i;
	// register: 16
	register int j;
}


// address: 0x800A5DAC
// line start: 795
// line end:   864
void KillItemDead__Fiii(int pnum, int InvPos, int Idx) {
	// register: 9
	register int ii;
	// register: 9
	register int iv;
}


// address: 0x80098448
// line start: 307
// line end:   315
void MemcardOFF__Fv() {
}


// address: 0x800983EC
// line start: 291
// line end:   301
void MemcardON__Fv() {
}


// address: 0x800A65C8
// line start: 978
// line end:   980
void PantsDelay__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800A554C
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


// address: 0x800A5B20
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


// address: 0x8009B488
// line start: 326
// line end:   334
void card_removed__Fi(int card_number) {
}


// address: 0x800982EC
// line start: 253
// line end:   257
void init_card__Fi(int card_number) {
}


// address: 0x8009B1B4
// line start: 225
// line end:   239
void init_card__Fib(int card_number, bool read_dir) {
}


// address: 0x800980C4
// line start: 103
// line end:   220
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x8009AF74
// line start: 107
// line end:   192
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}


// address: 0x800982E0
// line start: 224
// line end:   248
void memcard_event__Fii(int evt, int side) {
}


// address: 0x80098320
// line start: 262
// line end:   275
int ping_card__Fi(int card_number) {
}


// address: 0x8009B4B0
// line start: 342
// line end:   350
int read_card_block__Fii(int card_number, int block) {
}


