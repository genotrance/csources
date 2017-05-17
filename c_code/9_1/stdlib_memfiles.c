/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>
#include <sys/mman.h>
#undef linux
#undef near
typedef struct MemFile_j4SnXNrJDFBxAz4BlbM9aIQ MemFile_j4SnXNrJDFBxAz4BlbM9aIQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  MemFile_j4SnXNrJDFBxAz4BlbM9aIQ  {
void* mem;
NI size;
int handle;
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
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
typedef NU8 FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
N_NOINLINE(void, raiseOSError_86HIIOlD5N61CWaO5GBgqA)(NI32 errorCode, NimStringDesc* additionalInfo);
N_NIMCALL(NI32, osLastError_YyC2FKP9bqQiUDq2XVqW9acA)(void);
TNimType NTI_j4SnXNrJDFBxAz4BlbM9aIQ_;
extern TNimType NTI_vr5DoT1jILTGdRlYv1OYpw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_nlCscttRCss70IBTyuBqnA_;
extern int MAP_POPULATE_VA0iC4AP6fJAacff09cx89ag;
STRING_LITERAL(TM_mFfhe8Jm7Jqn2Znr3841fw_3, "", 0);

N_NIMCALL(MemFile_j4SnXNrJDFBxAz4BlbM9aIQ, open_Dp9bdJQfA43suzyZzRfL9bow)(NimStringDesc* filename, FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI mappedSize, NI offset, NI newFileSize, NIM_BOOL allowRemap) {
	MemFile_j4SnXNrJDFBxAz4BlbM9aIQ result;
	NIM_BOOL readonly;
	int flags;
	int T53_;
	NI32 T59_;
	memset((void*)(&result), 0, sizeof(result));
	readonly = (mode == ((FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 0));
	{
		if (!readonly) goto LA3_;
		flags = O_RDONLY;
	}
	goto LA1_;
	LA3_: ;
	{
		flags = O_RDWR;
	}
	LA1_: ;
	{
		NI32 permissions_mode;
		if (!!((newFileSize == ((NI) -1)))) goto LA8_;
		flags = (NI32)((NI32)(flags | O_CREAT) | O_TRUNC);
		permissions_mode = (NI32)(S_IRUSR | S_IWUSR);
		result.handle = open(filename->data, flags, permissions_mode);
	}
	goto LA6_;
	LA8_: ;
	{
		result.handle = open(filename->data, flags);
	}
	LA6_: ;
	{
		NI32 T20_;
		if (!(result.handle == ((NI32) -1))) goto LA13_;
		result.mem = NIM_NIL;
		result.size = ((NI) 0);
		{
			int T19_;
			if (!!((result.handle == ((NI32) -1)))) goto LA17_;
			T19_ = (int)0;
			T19_ = close(result.handle);
		}
		LA17_: ;
		T20_ = (NI32)0;
		T20_ = osLastError_YyC2FKP9bqQiUDq2XVqW9acA();
		raiseOSError_86HIIOlD5N61CWaO5GBgqA(T20_, ((NimStringDesc*) &TM_mFfhe8Jm7Jqn2Znr3841fw_3));
	}
	LA13_: ;
	{
		if (!!((newFileSize == ((NI) -1)))) goto LA23_;
		{
			int T27_;
			NI32 T35_;
			T27_ = (int)0;
			T27_ = ftruncate(result.handle, ((off_t) (newFileSize)));
			if (!(T27_ == ((NI32) -1))) goto LA28_;
			result.mem = NIM_NIL;
			result.size = ((NI) 0);
			{
				int T34_;
				if (!!((result.handle == ((NI32) -1)))) goto LA32_;
				T34_ = (int)0;
				T34_ = close(result.handle);
			}
			LA32_: ;
			T35_ = (NI32)0;
			T35_ = osLastError_YyC2FKP9bqQiUDq2XVqW9acA();
			raiseOSError_86HIIOlD5N61CWaO5GBgqA(T35_, ((NimStringDesc*) &TM_mFfhe8Jm7Jqn2Znr3841fw_3));
		}
		LA28_: ;
	}
	LA23_: ;
	{
		if (!!((mappedSize == ((NI) -1)))) goto LA38_;
		result.size = mappedSize;
	}
	goto LA36_;
	LA38_: ;
	{
		struct stat stat;
		memset((void*)(&stat), 0, sizeof(stat));
		{
			int T43_;
			T43_ = (int)0;
			T43_ = fstat(result.handle, (&stat));
			if (!!((T43_ == ((NI32) -1)))) goto LA44_;
			result.size = ((NI) (stat.st_size));
		}
		goto LA41_;
		LA44_: ;
		{
			NI32 T52_;
			result.mem = NIM_NIL;
			result.size = ((NI) 0);
			{
				int T51_;
				if (!!((result.handle == ((NI32) -1)))) goto LA49_;
				T51_ = (int)0;
				T51_ = close(result.handle);
			}
			LA49_: ;
			T52_ = (NI32)0;
			T52_ = osLastError_YyC2FKP9bqQiUDq2XVqW9acA();
			raiseOSError_86HIIOlD5N61CWaO5GBgqA(T52_, ((NimStringDesc*) &TM_mFfhe8Jm7Jqn2Znr3841fw_3));
		}
		LA41_: ;
	}
	LA36_: ;
	T53_ = (int)0;
	{
		if (!readonly) goto LA56_;
		T53_ = PROT_READ;
	}
	goto LA54_;
	LA56_: ;
	{
		T53_ = (NI32)(PROT_READ | PROT_WRITE);
	}
	LA54_: ;
	T59_ = (NI32)0;
	{
		if (!readonly) goto LA62_;
		T59_ = (NI32)(MAP_PRIVATE | MAP_POPULATE_VA0iC4AP6fJAacff09cx89ag);
	}
	goto LA60_;
	LA62_: ;
	{
		T59_ = (NI32)(MAP_SHARED | MAP_POPULATE_VA0iC4AP6fJAacff09cx89ag);
	}
	LA60_: ;
	result.mem = mmap(NIM_NIL, result.size, T53_, T59_, result.handle, ((off_t) (offset)));
	{
		NI32 T74_;
		if (!(result.mem == ((void*) (MAP_FAILED)))) goto LA67_;
		result.mem = NIM_NIL;
		result.size = ((NI) 0);
		{
			int T73_;
			if (!!((result.handle == ((NI32) -1)))) goto LA71_;
			T73_ = (int)0;
			T73_ = close(result.handle);
		}
		LA71_: ;
		T74_ = (NI32)0;
		T74_ = osLastError_YyC2FKP9bqQiUDq2XVqW9acA();
		raiseOSError_86HIIOlD5N61CWaO5GBgqA(T74_, ((NimStringDesc*) &TM_mFfhe8Jm7Jqn2Znr3841fw_3));
	}
	LA67_: ;
	{
		NIM_BOOL T77_;
		T77_ = (NIM_BOOL)0;
		T77_ = !(allowRemap);
		if (!(T77_)) goto LA78_;
		T77_ = !((result.handle == ((NI32) -1)));
		LA78_: ;
		if (!T77_) goto LA79_;
		{
			int T83_;
			T83_ = (int)0;
			T83_ = close(result.handle);
			if (!(T83_ == ((NI32) 0))) goto LA84_;
			result.handle = ((int) -1);
		}
		LA84_: ;
	}
	LA79_: ;
	return result;
}

N_NIMCALL(void, close_pdDAO8UZUr4A4NczjpWmdA)(MemFile_j4SnXNrJDFBxAz4BlbM9aIQ* f) {
	NIM_BOOL error;
	NI32 lastErr;
	int T1_;
	error = NIM_FALSE;
	lastErr = (NI32)0;
	T1_ = (int)0;
	T1_ = munmap((*f).mem, (*f).size);
	error = !((T1_ == ((NI32) 0)));
	lastErr = osLastError_YyC2FKP9bqQiUDq2XVqW9acA();
	{
		NIM_BOOL T6_;
		int T7_;
		if (!!(((*f).handle == ((NI32) -1)))) goto LA4_;
		T6_ = (NIM_BOOL)0;
		T7_ = (int)0;
		T7_ = close((*f).handle);
		T6_ = !((T7_ == ((NI32) 0)));
		if (T6_) goto LA8_;
		T6_ = error;
		LA8_: ;
		error = T6_;
	}
	LA4_: ;
	(*f).size = ((NI) 0);
	(*f).mem = NIM_NIL;
	(*f).handle = ((int) -1);
	{
		if (!error) goto LA11_;
		raiseOSError_86HIIOlD5N61CWaO5GBgqA(lastErr, ((NimStringDesc*) &TM_mFfhe8Jm7Jqn2Znr3841fw_3));
	}
	LA11_: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit000)(void) {
static TNimNode* TM_mFfhe8Jm7Jqn2Znr3841fw_2[3];
static TNimNode TM_mFfhe8Jm7Jqn2Znr3841fw_0[4];
NTI_j4SnXNrJDFBxAz4BlbM9aIQ_.size = sizeof(MemFile_j4SnXNrJDFBxAz4BlbM9aIQ);
NTI_j4SnXNrJDFBxAz4BlbM9aIQ_.kind = 18;
NTI_j4SnXNrJDFBxAz4BlbM9aIQ_.base = 0;
NTI_j4SnXNrJDFBxAz4BlbM9aIQ_.flags = 3;
TM_mFfhe8Jm7Jqn2Znr3841fw_2[0] = &TM_mFfhe8Jm7Jqn2Znr3841fw_0[1];
TM_mFfhe8Jm7Jqn2Znr3841fw_0[1].kind = 1;
TM_mFfhe8Jm7Jqn2Znr3841fw_0[1].offset = offsetof(MemFile_j4SnXNrJDFBxAz4BlbM9aIQ, mem);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[1].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[1].name = "mem";
TM_mFfhe8Jm7Jqn2Znr3841fw_2[1] = &TM_mFfhe8Jm7Jqn2Znr3841fw_0[2];
TM_mFfhe8Jm7Jqn2Znr3841fw_0[2].kind = 1;
TM_mFfhe8Jm7Jqn2Znr3841fw_0[2].offset = offsetof(MemFile_j4SnXNrJDFBxAz4BlbM9aIQ, size);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[2].name = "size";
TM_mFfhe8Jm7Jqn2Znr3841fw_2[2] = &TM_mFfhe8Jm7Jqn2Znr3841fw_0[3];
TM_mFfhe8Jm7Jqn2Znr3841fw_0[3].kind = 1;
TM_mFfhe8Jm7Jqn2Znr3841fw_0[3].offset = offsetof(MemFile_j4SnXNrJDFBxAz4BlbM9aIQ, handle);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[3].typ = (&NTI_nlCscttRCss70IBTyuBqnA_);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[3].name = "handle";
TM_mFfhe8Jm7Jqn2Znr3841fw_0[0].len = 3; TM_mFfhe8Jm7Jqn2Znr3841fw_0[0].kind = 2; TM_mFfhe8Jm7Jqn2Znr3841fw_0[0].sons = &TM_mFfhe8Jm7Jqn2Znr3841fw_2[0];
NTI_j4SnXNrJDFBxAz4BlbM9aIQ_.node = &TM_mFfhe8Jm7Jqn2Znr3841fw_0[0];
}

