#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x801238BC
// size: 0x22600
extern unsigned char img_buf[140800];

// address: 0x80145EBC
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80145F10
// size: 0x100
extern struct DR_ENV mdec_env[2][2];

// address: 0x80146010
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80146650
// size: 0x30
extern struct DR_MODE mdec_drmd[2][2];

// address: 0x80146680
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x80146CC0
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x80146CD0
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x80147310
// size: 0x320
extern struct SVECTOR temp_offs[10][10];

// address: 0x80147630
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x80147658
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x80147798
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x80147818
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x8014789C
// size: 0x84
extern struct strheader *stream_bufh[33];

// address: 0x80147920
void EA_cd_seek(int secnum) {
}


// address: 0x80147948
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014797C
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x8014798C
void flush_cdstream() {
}


// address: 0x801479B0
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x80147A30
void reset_cdstream() {
}


// address: 0x80147A58
void kill_stream_handlers() {
}


// address: 0x80147AC8
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x80147CA8
void CD_stream_handler(struct TASK *T) {
}


// address: 0x80147D9C
void install_stream_handlers() {
}


// address: 0x80147E0C
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x80147EA4
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x80147FC4
int cdstream_is_last_chunk() {
}


// address: 0x80147FDC
void cdstream_discard_chunk() {
}


// address: 0x801480DC
void close_cdstream() {
}


// address: 0x80148170
void wait_cdstream() {
	// address: 0xFFFFFFF0
	auto int start_wait;
}


// address: 0x80148228
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x80148394
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x801483C8
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x8014854C
void DCT_out_handler() {
}


// address: 0x801485E8
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x8014864C
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x80148668
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


// address: 0x801489EC
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x80148BC0
void clear_mdec_frame() {
}


// address: 0x80148BCC
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x80148F1C
void invalidate_mdec_frame() {
}


// address: 0x80148F30
int is_frame_decoded() {
}


// address: 0x80148F3C
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


// address: 0x8014938C
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x801493F4
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x80149444
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
}


// address: 0x801494FC
void kill_mdec_audio() {
}


// address: 0x8014952C
void stop_mdec_audio() {
}


// address: 0x80149550
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


// address: 0x801497EC
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x801498B8
void resync_audio() {
}


// address: 0x801498E8
void stop_mdec_stream() {
}


// address: 0x80149934
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80149A20
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80149BD0
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x80149DBC
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80149E70
void clear_mdec_queue() {
}


// address: 0x80149E9C
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x80149F00
short PlayFMVOverLay(char *filename, int w, int h) {
	// register: 20
	register int start_time;
	// register: 22
	register int start_frame;
	// register: 2
	register int afrm;
	// register: 4
	register int efrm;
	// register: 19
	register int br;
	// register: 21
	register int fade;
	// register: 23
	register int user_quit;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT r;
}


// address: 0x8014A28C
unsigned short GetDown__C4CPad(struct CPad *this) {
}


