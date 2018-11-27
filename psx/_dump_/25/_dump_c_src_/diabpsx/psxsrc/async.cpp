// C:\diabpsx\PSXSRC\ASYNC.CPP

#include "types.h"

// address: 0x80090394
void AS_CallBack0__Fi(int handle) {
}


// address: 0x800903A8
void AS_CallBack1__Fi(int handle) {
}


// address: 0x800903BC
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80090498
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x80090538
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80090544
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x80090570
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


