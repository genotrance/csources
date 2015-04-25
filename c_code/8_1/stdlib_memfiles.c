/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <fcntl.h>

#include <sys/stat.h>

#include <unistd.h>

#include <sys/types.h>

#include <time.h>

#include <sys/mman.h>
typedef struct Memfile230208 Memfile230208;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  Memfile230208  {
void* mem;
NI size;
int handle;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, raiseoserror_115809)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_115833)(void);
TNimType NTI230208; /* MemFile */
extern TNimType NTI153; /* pointer */
extern TNimType NTI108; /* int */
extern TNimType NTI5811; /* cint */
extern int Mappopulate_108316;

N_NIMCALL(Memfile230208, open_230807)(NimStringDesc* filename, NU8 mode, NI mappedsize, NI offset, NI newfilesize) {
	Memfile230208 result;
	NIM_BOOL readonly;
	int flags;
	int LOC53;
	NI32 LOC59;
	memset((void*)(&result), 0, sizeof(result));
	readonly = (mode == ((NU8) 0));
	{
		if (!readonly) goto LA3;
		flags = O_RDONLY;
	}
	goto LA1;
	LA3: ;
	{
		flags = O_RDWR;
	}
	LA1: ;
	{
		NI32 permissionsmode;
		if (!!((newfilesize == ((NI) -1)))) goto LA8;
		flags = (NI32)((NI32)(flags | O_CREAT) | O_TRUNC);
		permissionsmode = (NI32)(S_IRUSR | S_IWUSR);
		result.handle = open(filename->data, flags, permissionsmode);
	}
	goto LA6;
	LA8: ;
	{
		result.handle = open(filename->data, flags);
	}
	LA6: ;
	{
		NI32 LOC20;
		if (!(result.handle == ((NI32) -1))) goto LA13;
		result.mem = NIM_NIL;
		result.size = ((NI) 0);
		{
			int LOC19;
			if (!!((result.handle == ((NI32) 0)))) goto LA17;
			LOC19 = 0;
			LOC19 = close(result.handle);
		}
		LA17: ;
		LOC20 = 0;
		LOC20 = oslasterror_115833();
		raiseoserror_115809(LOC20);
	}
	LA13: ;
	{
		if (!!((newfilesize == ((NI) -1)))) goto LA23;
		{
			int LOC27;
			NI32 LOC35;
			LOC27 = 0;
			LOC27 = ftruncate(result.handle, ((off_t) (newfilesize)));
			if (!(LOC27 == ((NI32) -1))) goto LA28;
			result.mem = NIM_NIL;
			result.size = ((NI) 0);
			{
				int LOC34;
				if (!!((result.handle == ((NI32) 0)))) goto LA32;
				LOC34 = 0;
				LOC34 = close(result.handle);
			}
			LA32: ;
			LOC35 = 0;
			LOC35 = oslasterror_115833();
			raiseoserror_115809(LOC35);
		}
		LA28: ;
	}
	LA23: ;
	{
		if (!!((mappedsize == ((NI) -1)))) goto LA38;
		result.size = mappedsize;
	}
	goto LA36;
	LA38: ;
	{
		struct stat stat;
		memset((void*)(&stat), 0, sizeof(stat));
		{
			int LOC43;
			LOC43 = 0;
			LOC43 = fstat(result.handle, (&stat));
			if (!!((LOC43 == ((NI32) -1)))) goto LA44;
			result.size = ((NI) (stat.st_size));
		}
		goto LA41;
		LA44: ;
		{
			NI32 LOC52;
			result.mem = NIM_NIL;
			result.size = ((NI) 0);
			{
				int LOC51;
				if (!!((result.handle == ((NI32) 0)))) goto LA49;
				LOC51 = 0;
				LOC51 = close(result.handle);
			}
			LA49: ;
			LOC52 = 0;
			LOC52 = oslasterror_115833();
			raiseoserror_115809(LOC52);
		}
		LA41: ;
	}
	LA36: ;
	LOC53 = 0;
	{
		if (!readonly) goto LA56;
		LOC53 = PROT_READ;
	}
	goto LA54;
	LA56: ;
	{
		LOC53 = (NI32)(PROT_READ | PROT_WRITE);
	}
	LA54: ;
	LOC59 = 0;
	{
		if (!readonly) goto LA62;
		LOC59 = (NI32)(MAP_PRIVATE | Mappopulate_108316);
	}
	goto LA60;
	LA62: ;
	{
		LOC59 = (NI32)(MAP_SHARED | Mappopulate_108316);
	}
	LA60: ;
	result.mem = mmap(NIM_NIL, result.size, LOC53, LOC59, result.handle, ((off_t) (offset)));
	{
		NI32 LOC74;
		if (!(result.mem == ((void*) (MAP_FAILED)))) goto LA67;
		result.mem = NIM_NIL;
		result.size = ((NI) 0);
		{
			int LOC73;
			if (!!((result.handle == ((NI32) 0)))) goto LA71;
			LOC73 = 0;
			LOC73 = close(result.handle);
		}
		LA71: ;
		LOC74 = 0;
		LOC74 = oslasterror_115833();
		raiseoserror_115809(LOC74);
	}
	LA67: ;
	return result;
}

N_NIMCALL(void, close_231248)(Memfile230208* f) {
	NIM_BOOL error;
	NI32 lasterr;
	error = NIM_FALSE;
	lasterr = 0;
	{
		int LOC5;
		NIM_BOOL LOC6;
		int LOC7;
		if (!!(((*f).handle == ((NI32) 0)))) goto LA3;
		LOC5 = 0;
		LOC5 = munmap((*f).mem, (*f).size);
		error = !((LOC5 == ((NI32) 0)));
		lasterr = oslasterror_115833();
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = close((*f).handle);
		LOC6 = !((LOC7 == ((NI32) 0)));
		if (LOC6) goto LA8;
		LOC6 = error;
		LA8: ;
		error = LOC6;
	}
	LA3: ;
	(*f).size = ((NI) 0);
	(*f).mem = NIM_NIL;
	(*f).handle = ((int) 0);
	{
		if (!error) goto LA11;
		raiseoserror_115809(lasterr);
	}
	LA11: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit)(void) {
static TNimNode* TMP831[3];
static TNimNode TMP815[4];
NTI230208.size = sizeof(Memfile230208);
NTI230208.kind = 18;
NTI230208.base = 0;
NTI230208.flags = 3;
TMP831[0] = &TMP815[1];
TMP815[1].kind = 1;
TMP815[1].offset = offsetof(Memfile230208, mem);
TMP815[1].typ = (&NTI153);
TMP815[1].name = "mem";
TMP831[1] = &TMP815[2];
TMP815[2].kind = 1;
TMP815[2].offset = offsetof(Memfile230208, size);
TMP815[2].typ = (&NTI108);
TMP815[2].name = "size";
TMP831[2] = &TMP815[3];
TMP815[3].kind = 1;
TMP815[3].offset = offsetof(Memfile230208, handle);
TMP815[3].typ = (&NTI5811);
TMP815[3].name = "handle";
TMP815[0].len = 3; TMP815[0].kind = 2; TMP815[0].sons = &TMP831[0];
NTI230208.node = &TMP815[0];
}

