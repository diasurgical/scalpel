#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x80127568
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x80136568
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x801365BC
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80136BFC
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x8013723C
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x8013724C
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x8013788C
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x801378B4
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x801379F4
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x80137A74
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x80137AF8
// size: 0x84
extern struct strheader *stream_bufh[33];

// address: 0x80137B7C
void EA_cd_seek(int secnum) {
}


// address: 0x80137BA4
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80137BD8
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x80137BE8
void flush_cdstream() {
}


// address: 0x80137C0C
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x80137C8C
void reset_cdstream() {
}


// address: 0x80137CB4
void kill_stream_handlers() {
}


// address: 0x80137D24
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x80137F18
void CD_stream_handler(struct TASK *T) {
	{
	}
}


// address: 0x80138004
void install_stream_handlers() {
}


// address: 0x80138074
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x8013810C
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x80138230
int cdstream_is_last_chunk() {
}


// address: 0x80138248
void cdstream_discard_chunk() {
}


// address: 0x80138348
void close_cdstream() {
}


// address: 0x801383C0
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x80138530
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x80138564
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x801386E8
void DCT_out_handler() {
}


// address: 0x80138784
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x801387F4
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x80138810
int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct) {
	// register: 30
	register int xx;
	// register: 20
	register int x;
	// register: 22
	register int y;
	// register: 23
	register int xs;
	// address: 0xFFFFFFA8
	auto int ys;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFFB0
	auto int n;
	// address: 0xFFFFFFB8
	auto int ox;
	// address: 0xFFFFFFC0
	auto int oy;
}


// address: 0x80138C00
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x80138DD4
void clear_mdec_frame() {
}


// address: 0x80138DE0
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x8013912C
void invalidate_mdec_frame() {
}


// address: 0x80139140
int is_frame_decoded() {
}


// address: 0x8013914C
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x801394DC
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x80139544
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x80139594
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
}


// address: 0x8013964C
void kill_mdec_audio() {
}


// address: 0x8013967C
void stop_mdec_audio() {
}


// address: 0x801396A0
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 7
	register int b;
	// register: 19
	register int offs;
	// address: 0xFFFFFF90
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 5
	register unsigned char *dp;
	// register: 20
	register int hsize;
}


// address: 0x8013993C
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x80139A08
void resync_audio() {
}


// address: 0x80139A38
void stop_mdec_stream() {
}


// address: 0x80139A84
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80139B70
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80139D20
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x80139F0C
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80139FC0
void clear_mdec_queue() {
}


// address: 0x80139FEC
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8013A0AC
short PlayFMVOverLay(char *filename, int w, int h) {
	// register: 20
	register int start_time;
	// register: 23
	register int start_frame;
	// register: 2
	register int afrm;
	// register: 4
	register int efrm;
	// register: 19
	register int br;
	// register: 22
	register int fade;
	// register: 21
	register int user_quit;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT r;
	// register: 17
	// size: 0x6C
	register struct CPad *P1;
	// register: 18
	// size: 0x6C
	register struct CPad *P2;
}


// address: 0x8013A4B4
unsigned short GetDown__C4CPad(struct CPad *this) {
}


