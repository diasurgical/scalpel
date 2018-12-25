// global_d.cpp

#include "types.h"

// address: 0x80139B6C
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x80148B6C
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80148BC0
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80149200
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x80149840
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x80149850
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x80149E90
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x80149EB8
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x80149FF8
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x8014A078
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x8014A0FC
// size: 0x84
extern struct strheader *stream_bufh[33];

