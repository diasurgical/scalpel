#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x8013B0E0
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x8014A0E0
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x8014A134
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x8014A774
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x8014ADB4
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x8014ADC4
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x8014B404
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x8014B42C
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x8014B56C
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x8014B5EC
// size: 0x78
extern int (*stream_buf[504])[30];

// address: 0x8014B664
// size: 0x78
extern struct strheader *stream_bufh[30];

// address: 0x8014B6DC
void EA_cd_seek(int secnum) {
}


// address: 0x8014B6E4
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014B718
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x8014B728
void flush_cdstream() {
}


// address: 0x8014B74C
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x8014B7CC
void reset_cdstream() {
}


// address: 0x8014B7F4
void kill_stream_handlers() {
}


// address: 0x8014B854
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x8014BA48
void CD_stream_handler(struct TASK *T) {
	// register: 16
	register int chunkcount;
	{
	}
}


// address: 0x8014BB40
void install_stream_handlers() {
}


// address: 0x8014BBB0
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x8014BC48
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x8014BD6C
int cdstream_is_last_chunk() {
}


// address: 0x8014BD84
void cdstream_discard_chunk() {
}


// address: 0x8014BE84
void close_cdstream() {
}


// address: 0x8014BEFC
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x8014C094
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x8014C0C8
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x8014C24C
void DCT_out_handler() {
}


// address: 0x8014C2E8
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x8014C358
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x8014C374
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


// address: 0x8014C764
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x8014C938
void clear_mdec_frame() {
}


// address: 0x8014C944
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x8014CC90
void invalidate_mdec_frame() {
}


// address: 0x8014CCA4
int is_frame_decoded() {
}


// address: 0x8014CCB0
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x8014D040
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x8014D0A8
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x8014D0F8
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014D1FC
void kill_mdec_audio() {
}


// address: 0x8014D22C
void stop_mdec_audio() {
}


// address: 0x8014D250
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 6
	register int b;
	// register: 17
	register int offs;
	// address: 0xFFFFFF98
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 4
	register unsigned char *dp;
	// register: 19
	register int hsize;
}


// address: 0x8014D4DC
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x8014D5A8
void resync_audio() {
}


// address: 0x8014D5D4
void stop_mdec_stream() {
}


// address: 0x8014D620
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014D70C
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014D8BC
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x8014DAA8
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014DB5C
void clear_mdec_queue() {
}


// address: 0x8014DB88
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8014DC48
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


// address: 0x8014E10C
unsigned short GetDown__C4CPad(struct CPad *this) {
}


