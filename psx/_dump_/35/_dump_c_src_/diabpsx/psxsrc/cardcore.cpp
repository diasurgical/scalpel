// C:\diabpsx\PSXSRC\CARDCORE.CPP

#include "types.h"

// address: 0x8009AF74
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}


// address: 0x8009B1AC
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009B1B4
void init_card__Fib(int card_number, bool read_dir) {
}


// address: 0x8009B274
int ping_card__Fi(int card_number) {
}


// address: 0x8009B308
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009B340
void MemcardON__Fv() {
}


// address: 0x8009B3B0
void MemcardOFF__Fv() {
}


// address: 0x8009B400
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
}


// address: 0x8009B488
void card_removed__Fi(int card_number) {
}


// address: 0x8009B4B0
int read_card_block__Fii(int card_number, int block) {
}


// address: 0x8009B4F8
int test_hw_event__Fv() {
}


