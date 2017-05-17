/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <dirent.h>
#include <setjmp.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#undef linux
#undef near
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct TY_sM4lkSb7zS6F7OVMvW9cffQ TY_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct TY_4eQHGndY6XBYpFOH09apV8Q TY_4eQHGndY6XBYpFOH09apV8Q;
typedef struct TY_UV3llMMYFckfui8YMBuUZA TY_UV3llMMYFckfui8YMBuUZA;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw  {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU8 StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ;
typedef NU8 PathComponent_9c1SIU9cO1wHcl09b703A9cDrg;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} TY_KeeAOYBd84Ofsw6Y7LizaQ;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
typedef NIM_CHAR TY_dTlC27m9c9aWd5dvuePYanug[256];
struct  StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw  {
  TNimObject Sup;
NI counter;
TY_4eQHGndY6XBYpFOH09apV8Q* data;
StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct TY_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
typedef NU16 TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw;
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY_4eQHGndY6XBYpFOH09apV8Q {
  TGenericSeq Sup;
  TY_UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, contains_jPdUhZfr9a8sH2V3ZBDljzwnimblecmd)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
static N_INLINE(NI, find_9basNl9bVqn7SOf9bgUeI8TEQnimblecmd)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_NIMCALL(void, insert_uR2a6wvjQXz8X49aJA9a9c9cdw)(TY_sM4lkSb7zS6F7OVMvW9cffQ** x, NimStringDesc* item, NI i);
N_NIMCALL(void, addPathRec_3JEODh79bt1SXwL9cUHI7lhw)(NimStringDesc* dir, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_NIMCALL(StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw*, nstnewStringTable)(StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, slash__lXoMhn1ZYc9cAJa9bfA61msg)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(PathComponent_9c1SIU9cO1wHcl09b703A9cDrg, getSymlinkFileKind_WoXOp8qmMec1P4MyA3LBKg)(NimStringDesc* path);
N_NIMCALL(void, addPackage_mPfTsfux8gBVeyQ8xwDYTQ)(StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* packages, NimStringDesc* p);
N_NIMCALL(NI, versionSplitPos_0bw6GOnkbOdW19ciUnT3QEw)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, ltdot__T3MrVNu6QdhxPeHWeI9a9bIg)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, getOrDefault_sPC3Tb9bX9b1TxdHlL7x9cN3Q)(StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* t, NimStringDesc* key, NimStringDesc* default_0);
N_NIMCALL(void, nstPut)(StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addNimblePath_Io0tiMEKgDlbf67BdbC9cWw)(NimStringDesc* p, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_NIMCALL(void, message_VpilfPWbplGz6ny7O9cfr2g_2)(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc* arg);
extern TY_sM4lkSb7zS6F7OVMvW9cffQ* searchPaths_XRBeXIYowTeRSkTUFC0m2w;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TY_sM4lkSb7zS6F7OVMvW9cffQ* lazyPaths_uObU3TsEr9bGIxsNFEkim6Q;
STRING_LITERAL(TM_asNQM9aynXXg9ccUABbReyew_3, ".", 1);
STRING_LITERAL(TM_asNQM9aynXXg9ccUABbReyew_4, "..", 2);
STRING_LITERAL(TM_asNQM9aynXXg9ccUABbReyew_5, "", 0);

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = memcmp(a, b, ((size_t) (size)));
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL T11_;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == NIM_NIL);
		if (T7_) goto LA8_;
		T7_ = (b == NIM_NIL);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA9_: ;
	T11_ = (NIM_BOOL)0;
	T11_ = ((*a).Sup.len == (*b).Sup.len);
	if (!(T11_)) goto LA12_;
	T11_ = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, find_9basNl9bVqn7SOf9bgUeI8TEQnimblecmd)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NI result;
{	result = (NI)0;
	{
		NimStringDesc* i;
		NI i_2;
		i = (NimStringDesc*)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < aLen_0)) goto LA3;
				i = a[i_2];
				{
					if (!eqStrings(i, item)) goto LA6_;
					goto BeforeRet_;
				}
				LA6_: ;
				result += ((NI) 1);
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, contains_jPdUhZfr9a8sH2V3ZBDljzwnimblecmd)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = find_9basNl9bVqn7SOf9bgUeI8TEQnimblecmd(a, aLen_0, item);
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, addPath_t70rbGc1vt9aCRgpPrT47WQ)(NimStringDesc* path, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = contains_jPdUhZfr9a8sH2V3ZBDljzwnimblecmd(searchPaths_XRBeXIYowTeRSkTUFC0m2w->data, searchPaths_XRBeXIYowTeRSkTUFC0m2w->Sup.len, path);
		if (!!(T3_)) goto LA4_;
		insert_uR2a6wvjQXz8X49aJA9a9c9cdw((&searchPaths_XRBeXIYowTeRSkTUFC0m2w), path, ((NI) 0));
	}
	LA4_: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

N_NIMCALL(NI, versionSplitPos_0bw6GOnkbOdW19ciUnT3QEw)(NimStringDesc* s) {
	NI result;
	result = (NI)0;
	result = (NI)((s ? s->Sup.len : 0) - ((NI) 2));
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = (((NI) 1) < result);
			if (!(T3_)) goto LA4_;
			T3_ = !(((NU8)(s->data[result]) == (NU8)(45)));
			LA4_: ;
			if (!T3_) goto LA2;
			result -= ((NI) 1);
		} LA2: ;
	}
	{
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA7_;
		result = (s ? s->Sup.len : 0);
	}
	LA7_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, ltdot__T3MrVNu6QdhxPeHWeI9a9bIg)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI verA;
	NI verB;
{	result = (NIM_BOOL)0;
	{
		if (!((a) && (a)->Sup.len == 0)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((b) && (b)->Sup.len == 0)) goto LA6_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	goto LA1_;
	LA6_: ;
	LA1_: ;
	i = ((NI) 0);
	j = ((NI) 0);
	verA = ((NI) 0);
	verB = ((NI) 0);
	{
		while (1) {
			NI ii;
			NI jj;
			ii = npuParseInt(a, (&verA), i);
			jj = npuParseInt(b, (&verB), j);
			{
				NIM_BOOL T12_;
				T12_ = (NIM_BOOL)0;
				T12_ = (ii <= ((NI) 0));
				if (T12_) goto LA13_;
				T12_ = (jj <= ((NI) 0));
				LA13_: ;
				if (!T12_) goto LA14_;
				{
					NIM_BOOL T18_;
					NIM_BOOL T19_;
					T18_ = (NIM_BOOL)0;
					T19_ = (NIM_BOOL)0;
					T19_ = (((NI) 0) < ii);
					if (!(T19_)) goto LA20_;
					T19_ = (jj <= ((NI) 0));
					LA20_: ;
					T18_ = T19_;
					if (!(T18_)) goto LA21_;
					T18_ = (j == ((NI) 0));
					LA21_: ;
					if (!T18_) goto LA22_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA22_: ;
				{
					NIM_BOOL T26_;
					NIM_BOOL T27_;
					T26_ = (NIM_BOOL)0;
					T27_ = (NIM_BOOL)0;
					T27_ = (ii <= ((NI) 0));
					if (!(T27_)) goto LA28_;
					T27_ = (((NI) 0) < jj);
					LA28_: ;
					T26_ = T27_;
					if (!(T26_)) goto LA29_;
					T26_ = (i == ((NI) 0));
					LA29_: ;
					if (!T26_) goto LA30_;
					result = NIM_FALSE;
					goto BeforeRet_;
				}
				LA30_: ;
				result = (((NI) 0) < jj);
				goto BeforeRet_;
			}
			LA14_: ;
			{
				if (!(verA < verB)) goto LA34_;
				result = NIM_TRUE;
				goto BeforeRet_;
			}
			goto LA32_;
			LA34_: ;
			{
				if (!(verB < verA)) goto LA37_;
				result = NIM_FALSE;
				goto BeforeRet_;
			}
			goto LA32_;
			LA37_: ;
			LA32_: ;
			i += ii;
			j += jj;
			{
				if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA41_;
				i += ((NI) 1);
			}
			LA41_: ;
			{
				if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA45_;
				j += ((NI) 1);
			}
			LA45_: ;
		}
	}
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, addPackage_mPfTsfux8gBVeyQ8xwDYTQ)(StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	NimStringDesc* version;
	x = versionSplitPos_0bw6GOnkbOdW19ciUnT3QEw(p);
	name = copyStrLast(p, ((NI) 0), (NI)(x - ((NI) 1)));
	{
		if (!(x < (p ? p->Sup.len : 0))) goto LA3_;
		version = copyStr(p, (NI)(x + ((NI) 1)));
	}
	goto LA1_;
	LA3_: ;
	{
		version = copyString(((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_5));
	}
	LA1_: ;
	{
		NimStringDesc* T8_;
		NIM_BOOL T9_;
		T8_ = (NimStringDesc*)0;
		T8_ = getOrDefault_sPC3Tb9bX9b1TxdHlL7x9cN3Q(packages, name, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_5));
		T9_ = (NIM_BOOL)0;
		T9_ = ltdot__T3MrVNu6QdhxPeHWeI9a9bIg(T8_, version);
		if (!T9_) goto LA10_;
		nstPut(packages, name, version);
	}
	LA10_: ;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, addNimblePath_Io0tiMEKgDlbf67BdbC9cWw)(NimStringDesc* p, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = contains_jPdUhZfr9a8sH2V3ZBDljzwnimblecmd(searchPaths_XRBeXIYowTeRSkTUFC0m2w->data, searchPaths_XRBeXIYowTeRSkTUFC0m2w->Sup.len, p);
		if (!!(T3_)) goto LA4_;
		message_VpilfPWbplGz6ny7O9cfr2g_2(info, ((TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 283), p);
		insert_uR2a6wvjQXz8X49aJA9a9c9cdw((&lazyPaths_uObU3TsEr9bGIxsNFEkim6Q), p, ((NI) 0));
	}
	LA4_: ;
}

N_NIMCALL(void, addPathRec_3JEODh79bt1SXwL9cUHI7lhw)(NimStringDesc* dir, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info) {
	StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* packages;
	NI pos;
	packages = nstnewStringTable(((StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ) 2));
	pos = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3_;
		pos += ((NI) 1);
	}
	LA3_: ;
	{
		PathComponent_9c1SIU9cO1wHcl09b703A9cDrg k;
		NimStringDesc* p;
		DIR* d;
		k = (PathComponent_9c1SIU9cO1wHcl09b703A9cDrg)0;
		p = (NimStringDesc*)0;
		d = opendir(dir->data);
		{
			TSafePoint TM_asNQM9aynXXg9ccUABbReyew_2;
			if (!!((d == NIM_NIL))) goto LA8_;
			pushSafePoint(&TM_asNQM9aynXXg9ccUABbReyew_2);
			TM_asNQM9aynXXg9ccUABbReyew_2.status = _setjmp(TM_asNQM9aynXXg9ccUABbReyew_2.context);
			if (TM_asNQM9aynXXg9ccUABbReyew_2.status == 0) {
				{
					while (1) {
						struct dirent* x;
						NimStringDesc* volatile y;
						x = readdir(d);
						{
							if (!(x == NIM_NIL)) goto LA15_;
							goto LA11;
						}
						LA15_: ;
						y = cstrToNimstr(((NCSTRING) ((*x).d_name)));
						{
							NIM_BOOL T19_;
							struct stat s;
							PathComponent_9c1SIU9cO1wHcl09b703A9cDrg volatile k_2;
							T19_ = (NIM_BOOL)0;
							T19_ = !(eqStrings(y, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_3)));
							if (!(T19_)) goto LA20_;
							T19_ = !(eqStrings(y, ((NimStringDesc*) &TM_asNQM9aynXXg9ccUABbReyew_4)));
							LA20_: ;
							if (!T19_) goto LA21_;
							memset((void*)(&s), 0, sizeof(s));
							{
								if (!NIM_TRUE) goto LA25_;
								y = slash__lXoMhn1ZYc9cAJa9bfA61msg(dir, y);
							}
							LA25_: ;
							k_2 = ((PathComponent_9c1SIU9cO1wHcl09b703A9cDrg) 0);
							{
								int T29_;
								T29_ = (int)0;
								T29_ = lstat(y->data, (&s));
								if (!(T29_ < ((NI32) 0))) goto LA30_;
								goto LA11;
							}
							LA30_: ;
							{
								NIM_BOOL T34_;
								T34_ = (NIM_BOOL)0;
								T34_ = S_ISDIR(s.st_mode);
								if (!T34_) goto LA35_;
								k_2 = ((PathComponent_9c1SIU9cO1wHcl09b703A9cDrg) 2);
							}
							goto LA32_;
							LA35_: ;
							{
								NIM_BOOL T38_;
								T38_ = (NIM_BOOL)0;
								T38_ = S_ISLNK(s.st_mode);
								if (!T38_) goto LA39_;
								k_2 = getSymlinkFileKind_WoXOp8qmMec1P4MyA3LBKg(y);
							}
							goto LA32_;
							LA39_: ;
							LA32_: ;
							k = k_2;
							p = y;
							{
								NIM_BOOL T43_;
								T43_ = (NIM_BOOL)0;
								T43_ = (k == ((PathComponent_9c1SIU9cO1wHcl09b703A9cDrg) 2));
								if (!(T43_)) goto LA44_;
								T43_ = !(((NU8)(p->data[pos]) == (NU8)(46)));
								LA44_: ;
								if (!T43_) goto LA45_;
								addPackage_mPfTsfux8gBVeyQ8xwDYTQ(packages, p);
							}
							LA45_: ;
						}
						LA21_: ;
					}
				} LA11: ;
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				int T49_;
				T49_ = (int)0;
				T49_ = closedir(d);
			}
			if (TM_asNQM9aynXXg9ccUABbReyew_2.status != 0) reraiseException();
		}
		LA8_: ;
	}
	{
		NimStringDesc* p_2;
		p_2 = (NimStringDesc*)0;
		{
			NimStringDesc* key;
			NimStringDesc* val;
			key = (NimStringDesc*)0;
			val = (NimStringDesc*)0;
			{
				NI h;
				NI colontmp_;
				NI res;
				h = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				res = ((NI) 0);
				{
					while (1) {
						if (!(res <= colontmp_)) goto LA54;
						h = res;
						{
							NimStringDesc* res_2;
							if (!!(((*packages).data->data[h].Field0 == 0))) goto LA57_;
							key = (*packages).data->data[h].Field0;
							val = (*packages).data->data[h].Field1;
							{
								if (!((val) && (val)->Sup.len == 0)) goto LA61_;
								res_2 = key;
							}
							goto LA59_;
							LA61_: ;
							{
								NimStringDesc* T64_;
								T64_ = (NimStringDesc*)0;
								T64_ = rawNewString(key->Sup.len + val->Sup.len + 1);
appendString(T64_, key);
appendChar(T64_, 45);
appendString(T64_, val);
								res_2 = T64_;
							}
							LA59_: ;
							p_2 = res_2;
							addNimblePath_Io0tiMEKgDlbf67BdbC9cWw(p_2, info);
						}
						LA57_: ;
						res += ((NI) 1);
					} LA54: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblePath_JlgWmHvYGMBlcPx0hG1xEQ)(NimStringDesc* path, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info) {
	addPathRec_3JEODh79bt1SXwL9cUHI7lhw(path, info);
	addNimblePath_Io0tiMEKgDlbf67BdbC9cWw(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}

