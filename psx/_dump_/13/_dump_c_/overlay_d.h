#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x80122104
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80122158
// size: 0x100
extern struct DR_ENV mdec_env[2][2];

// address: 0x80122258
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80122898
// size: 0x30
extern struct DR_MODE mdec_drmd[2][2];

// address: 0x801228C8
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x80122F08
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x80122F18
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x80123558
// size: 0x320
extern struct SVECTOR temp_offs[10][10];

// address: 0x80123878
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x801238A0
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x801239E0
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x80123A60
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x80123AE4
// size: 0x84
extern struct strheader *stream_bufh[33];

// address: 0x80123B68
void EA_cd_seek(int secnum) {
}


// address: 0x80123B70
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80123BA4
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x80123BB4
void flush_cdstream() {
}


// address: 0x80123BD8
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x80123C58
void reset_cdstream() {
}


// address: 0x80123C80
void kill_stream_handlers() {
}


// address: 0x80123CF0
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x80123ED0
void CD_stream_handler(struct TASK *T) {
}


// address: 0x80123FC4
void install_stream_handlers() {
}


// address: 0x80124034
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x801240CC
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x801241EC
int cdstream_is_last_chunk() {
}


// address: 0x80124204
void cdstream_discard_chunk() {
}


// address: 0x80124304
void close_cdstream() {
}


// address: 0x80124398
void wait_cdstream() {
	// address: 0xFFFFFFF0
	auto int start_wait;
}


// address: 0x80124450
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x801245BC
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x801245F0
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x80124774
void DCT_out_handler() {
}


// address: 0x80124810
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x80124874
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x80124890
int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct) {
	// register: 30
	register int xx;
	// register: 20
	register int x;
	// register: 23
	register int y;
	// register: 22
	register int xs;
	// register: 15
	register int ys;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFF98
	auto int n;
	// register: 9
	register int ox;
	// register: 13
	register int oy;
}


// address: 0x80124C14
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x80124DE8
void clear_mdec_frame() {
}


// address: 0x80124DF4
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x80125144
void invalidate_mdec_frame() {
}


// address: 0x80125158
int is_frame_decoded() {
}


// address: 0x80125164
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFF50
	// size: 0x8
	auto struct RECT r;
	// address: 0xFFFFFF58
	// size: 0x5C
	auto struct DRAWENV de;
	// register: 9
	register int i;
}


// address: 0x801255B4
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x8012561C
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x8012566C
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
}


// address: 0x80125724
void kill_mdec_audio() {
}


// address: 0x80125754
void stop_mdec_audio() {
}


// address: 0x80125778
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


// address: 0x80125A14
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x80125AE0
void resync_audio() {
}


// address: 0x80125B10
void stop_mdec_stream() {
}


// address: 0x80125B5C
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80125C48
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80125DF8
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x80125FE4
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80126098
void clear_mdec_queue() {
}


// address: 0x801260C4
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x80126128
short PlayFMVOverLay(char *filename, int w, int h) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT r;
}


