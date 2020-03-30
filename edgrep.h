#include <signal.h>
#include <setjmp.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

unsigned int* address(void);
int  advance(char* lp, char* ep);
int  append(int (*f)(void), unsigned int* a);
int  backref(int i, char* lp); 
void blkio(int b, char* buf, long (*iofcn)(int, void*, unsigned long));
int  cclass(char* set, int c, int af);  
void commands(void);
void compile(int eof);
void error(char* s);
int  execute(unsigned int* addr);
void exfile(void);
void filename(int comm);
char* getblock(unsigned int atl, int iof); 
int  getchr(void); 
int  getfile(void);  
char* getline_blk(unsigned int tl); 
int  getnum(void);
void global(int k);
void greperror(char);  
void grepline(void);
void init(void);
void newline(void); 
void nonzero(void);
void onhup(int n);
void onintr(int n);
void print(void);
void putchr_(int ac);
void putd(void); 
void putfile(void); 
int  putline(void);  
void puts_(char* sp);
void quit(int n);
void readfile(const char* c);
void search(const char* c);
void search_file(const char* filename, const char* searchfor);  
void setnoaddr(void);   
void setwide(void); 
void squeeze(int);
void ungetch_(const char* c);

#define	BLKSIZE	4096
#define	NBLK	2047
#define	FNSIZE	128
#define	LBSIZE	4096
#define	ESIZE	256
#define	GBSIZE	256
#define	NBRA	5
#define	KSIZE	9
#define	CBRA	1
#define	CCHR	2
#define	CDOT	4
#define	CCL		6
#define	NCCL	8
#define	CDOL	10
#define	CEOF	11
#define	CKET	12
#define	CBACK	14
#define	CCIRC	15
#define	STAR	01
#define	READ	0
#define	WRITE	1
#define BUFSIZE 100
#define	SIGHUP	1	/* hangup */
#define	SIGQUIT	3	/* quit (ASCII FS) */