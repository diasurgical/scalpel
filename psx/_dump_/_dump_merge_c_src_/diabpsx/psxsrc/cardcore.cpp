// C:\diabpsx\PSXSRC\CARDCORE.CPP

#include "types.h"

// address: 0x800983B4
// line start: 279
// line end:   285
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009AA70
// line start: 286
// line end:   304
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
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


