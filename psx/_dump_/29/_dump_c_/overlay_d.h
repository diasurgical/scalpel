#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x80139838
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x80148838
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x8014888C
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80148ECC
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x8014950C
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x8014951C
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x80149B5C
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x80149B84
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x80149CC4
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x80149D44
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x80149DC8
// size: 0x84
extern struct strheader *stream_bufh[33];

// address: 0x80149E4C
void EA_cd_seek(int secnum) {
}


// address: 0x80149E74
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80149EA8
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x80149EB8
void flush_cdstream() {
}


// address: 0x80149EDC
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x80149F5C
void reset_cdstream() {
}


// address: 0x80149F84
void kill_stream_handlers() {
}


// address: 0x80149FF4
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x8014A1E8
void CD_stream_handler(struct TASK *T) {
	{
	}
}


// address: 0x8014A2D4
void install_stream_handlers() {
}


// address: 0x8014A344
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x8014A3DC
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x8014A500
int cdstream_is_last_chunk() {
}


// address: 0x8014A518
void cdstream_discard_chunk() {
}


// address: 0x8014A618
void close_cdstream() {
}


// address: 0x8014A690
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x8014A800
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x8014A834
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x8014A9B8
void DCT_out_handler() {
}


// address: 0x8014AA54
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x8014AAC4
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x8014AAE0
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


// address: 0x8014AED0
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x8014B0A4
void clear_mdec_frame() {
}


// address: 0x8014B0B0
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x8014B3FC
void invalidate_mdec_frame() {
}


// address: 0x8014B410
int is_frame_decoded() {
}


// address: 0x8014B41C
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x8014B7AC
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x8014B814
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x8014B864
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
}


// address: 0x8014B91C
void kill_mdec_audio() {
}


// address: 0x8014B94C
void stop_mdec_audio() {
}


// address: 0x8014B970
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


// address: 0x8014BC0C
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x8014BCD8
void resync_audio() {
}


// address: 0x8014BD08
void stop_mdec_stream() {
}


// address: 0x8014BD54
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014BE40
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014BFF0
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x8014C1DC
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014C290
void clear_mdec_queue() {
}


// address: 0x8014C2BC
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8014C37C
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


// address: 0x8014C788
unsigned short GetDown__C4CPad(struct CPad *this) {
}


