// C:\diabpsx\PSXSRC\ASYNC.CPP

#include "types.h"

// address: 0x8008E1D4
// line start: 85
// line end:   86
void AS_CallBack0__Fi(int handle) {
}


// address: 0x8008E1E8
// line start: 90
// line end:   91
void AS_CallBack1__Fi(int handle) {
}


// address: 0x8008E1FC
// line start: 101
// line end:   124
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x8008E2D8
// line start: 147
// line end:   163
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x8008E378
// line start: 173
// line end:   174
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008E384
// line start: 184
// line end:   188
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8008E3B0
// line start: 199
// line end:   241
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


