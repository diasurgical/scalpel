// C:\diabpsx\PSXSRC\ASYNC.CPP

#include "types.h"

// address: 0x8008FDB8
// line start: 86
// line end:   87
void AS_CallBack0__Fi(int handle) {
}


// address: 0x8008FDCC
// line start: 91
// line end:   92
void AS_CallBack1__Fi(int handle) {
}


// address: 0x8008FDE0
// line start: 102
// line end:   125
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x8008FEBC
// line start: 148
// line end:   164
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8008FF5C
// line start: 174
// line end:   175
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008FF68
// line start: 185
// line end:   189
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8008FF94
// line start: 200
// line end:   242
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


