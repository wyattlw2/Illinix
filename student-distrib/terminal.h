#ifndef _TERMINAL_H
#define _TERMINAL_H

#include "types.h"
#include "lib.h"
#include "keyboard.h"
#include "idt.h"


int32_t TERMINAL_READ_FLAG[3];

int t_open();
int t_close();
// reads characters and fill into buf from kb_buff
int32_t t_read(int32_t fd, void* buf, int32_t nbytes);
// prints characters inside buf to the screen
int32_t t_write(int32_t fd, const void* buf, int32_t nbytes);


// Takes in characters as they're written to the screen
extern char kb_buff[3][128];
// a helper variable that keeps track of available space in the kb_buff
extern int kb_idx[3];

// buf copies from kb_buff and is used to write to the screen
extern char buf[128];

extern char get_args_buf[128]; //reflective  of the size


#endif
