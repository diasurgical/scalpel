// C:\diabpsx\PSXSRC\CARDCORE.CPP

#include "types.h"

// address: 0x8009D6E4
// line start: 107
// line end:   192
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}


// address: 0x8009D91C
// line start: 196
// line end:   220
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009D924
// line start: 225
// line end:   239
void init_card__Fib(int card_number, bool read_dir) {
}


// address: 0x8009D9E4
// line start: 249
// line end:   262
int ping_card__Fi(int card_number) {
}


// address: 0x8009DA78
// line start: 266
// line end:   272
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009DAB0
// line start: 277
// line end:   288
void MemcardON__Fv() {
}


// address: 0x8009DB20
// line start: 294
// line end:   302
void MemcardOFF__Fv() {
}


// address: 0x8009DB70
// line start: 308
// line end:   322
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
}


// address: 0x8009DBF8
// line start: 326
// line end:   334
void card_removed__Fi(int card_number) {
}


// address: 0x8009DC20
// line start: 342
// line end:   350
int read_card_block__Fii(int card_number, int block) {
}


// address: 0x8009DC68
// line start: 360
// line end:   366
int test_hw_event__Fv() {
}


