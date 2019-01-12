// global_e.cpp

#include "types.h"

// address: 0x8013BA60
// size: 0x19000
extern unsigned char map_buf[102400];

// address: 0x80154A60
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80154AB4
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x801550F4
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x80155734
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x80155744
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x80155D84
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x80155DAC
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x80155EEC
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

