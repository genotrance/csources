/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdlib.h>

#include <errno.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <time.h>

#include <unistd.h>
typedef struct TY121008 TY121008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
typedef struct Oserror3433 Oserror3433;
typedef struct Systemerror3429 Systemerror3429;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct Tcell46147 Tcell46147;
typedef struct Tcellseq46163 Tcellseq46163;
typedef struct Tgcheap48016 Tgcheap48016;
typedef struct Tcellset46159 Tcellset46159;
typedef struct Tpagedesc46155 Tpagedesc46155;
typedef struct Tmemregion28010 Tmemregion28010;
typedef struct Tsmallchunk27240 Tsmallchunk27240;
typedef struct Tllchunk28004 Tllchunk28004;
typedef struct Tbigchunk27242 Tbigchunk27242;
typedef struct Tintset27217 Tintset27217;
typedef struct Ttrunk27213 Ttrunk27213;
typedef struct Tavlnode28008 Tavlnode28008;
typedef struct Tgcstat48014 Tgcstat48014;
typedef struct TY118589 TY118589;
typedef struct Indexerror3455 Indexerror3455;
typedef struct Slice85573 Slice85573;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct Keyvaluepair133008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct  Systemerror3429  {
  Exception Sup;
};
struct  Oserror3433  {
  Systemerror3429 Sup;
NI32 errorcode;
};
struct  Tcell46147  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46163  {
NI len;
NI cap;
Tcell46147** d;
};
struct  Tcellset46159  {
NI counter;
NI max;
Tpagedesc46155* head;
Tpagedesc46155** data;
};
typedef Tsmallchunk27240* TY28022[512];
typedef Ttrunk27213* Ttrunkbuckets27215[256];
struct  Tintset27217  {
Ttrunkbuckets27215 data;
};
struct  Tmemregion28010  {
NI minlargeobj;
NI maxlargeobj;
TY28022 freesmallchunks;
Tllchunk28004* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27242* freechunkslist;
Tintset27217 chunkstarts;
Tavlnode28008* root;
Tavlnode28008* deleted;
Tavlnode28008* last;
Tavlnode28008* freeavlnodes;
};
struct  Tgcstat48014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48016  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46163 zct;
Tcellseq46163 decstack;
Tcellset46159 cycleroots;
Tcellseq46163 tempstack;
NI recgclock;
Tmemregion28010 region;
Tgcstat48014 stat;
};
struct TY118589 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  Indexerror3455  {
  Exception Sup;
};
struct  Slice85573  {
NI a;
NI b;
};
typedef NI TY27220[8];
struct  Tpagedesc46155  {
Tpagedesc46155* next;
NI key;
TY27220 bits;
};
struct  Tbasechunk27238  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27240  {
  Tbasechunk27238 Sup;
Tsmallchunk27240* next;
Tsmallchunk27240* prev;
Tfreecell27230* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28004  {
NI size;
NI acc;
Tllchunk28004* next;
};
struct  Tbigchunk27242  {
  Tbasechunk27238 Sup;
Tbigchunk27242* next;
Tbigchunk27242* prev;
NI align;
NF data;
};
struct  Ttrunk27213  {
Ttrunk27213* next;
NI key;
TY27220 bits;
};
typedef Tavlnode28008* TY28014[2];
struct  Tavlnode28008  {
TY28014 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct TY121008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP52)(void* p, NI op);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, Keyvaluepair133008* Result);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NI, searchextpos_118536)(NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, normext_118526)(NimStringDesc* ext);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(void, raiseoserror_115809)(NI32 errorcode);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, oserrormsg_115620)(NI32 errorcode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NI32, oslasterror_115833)(void);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118589* Result);
N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void);
N_NIMCALL(NimStringDesc*, getenv_121644)(NimStringDesc* key);
N_NIMCALL(NI, findenvvar_121605)(NimStringDesc* key);
N_NIMCALL(void, getenvvarsc_121202)(void);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NimStringDesc*, getapplheuristic_125404)(void);
N_NIMCALL(NimStringDesc*, paramstr_124809)(NI i);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NI, parentdirpos_118359)(NimStringDesc* path);
N_NIMCALL(void, rawcreatedir_122843)(NimStringDesc* dir);
N_NIMCALL(NI, cmp_4717)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, nososErrorMsg)(void);
N_NIMCALL(NI64, ntDiffTime)(time_t a, time_t b);
N_NIMCALL(time_t, nosgetLastModificationTime)(NimStringDesc* file);
N_NIMCALL(NimStringDesc*, HEX2F_118292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosgetHomeDir)(void);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_85566)(NimStringDesc* s, Slice85573 x);
static N_INLINE(Slice85573, HEX2EHEX2E_104273)(NI a, NI b);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, expandtilde_126610)(NimStringDesc* path);
STRING_LITERAL(TMP134, "", 0);
STRING_LITERAL(TMP1141, "unknown OS error", 16);
STRING_LITERAL(TMP1142, "_", 1);
STRING_LITERAL(TMP1144, "invalid index", 13);
STRING_LITERAL(TMP1145, "PATH", 4);
STRING_LITERAL(TMP1654, "HOME", 4);
STRING_LITERAL(TMP1655, "/", 1);
STRING_LITERAL(TMP1894, "/.config/", 9);
NIM_BOOL envcomputed_121007;
TY121008* environment_121009;
extern NCSTRING* environ;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType NTI149; /* string */
TNimType NTI121008; /* seq[string] */
extern TNimType NTI115812; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern Tgcheap48016 gch_48044;
extern TNimType NTI124816; /* ref IndexError */
extern TNimType NTI3455; /* IndexError */
N_NIMCALL(void, TMP52)(void* p, NI op) {
	TY121008* a;
	NI LOC1;
	a = (TY121008*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, nossplitPath)(NimStringDesc* path, Keyvaluepair133008* Result) {
	NI seppos;
	seppos = ((NI) -1);
	{
		NI i_118324;
		NI HEX3Atmp_118337;
		NI res_118340;
		i_118324 = 0;
		HEX3Atmp_118337 = 0;
		HEX3Atmp_118337 = (NI)((path ? path->Sup.len : 0) - ((NI) 1));
		res_118340 = HEX3Atmp_118337;
		{
			while (1) {
				if (!(((NI) 0) <= res_118340)) goto LA3;
				i_118324 = res_118340;
				{
					if (!(((NU8)(path->data[i_118324])) == ((NU8)(47)) || ((NU8)(path->data[i_118324])) == ((NU8)(47)))) goto LA6;
					seppos = i_118324;
					goto LA1;
				}
				LA6: ;
				res_118340 -= ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
	{
		if (!(((NI) 0) <= seppos)) goto LA10;
		unsureAsgnRef((void**) (&(*Result).Field0), copyStrLast(path, ((NI) 0), (NI)(seppos - ((NI) 1))));
		unsureAsgnRef((void**) (&(*Result).Field1), copyStr(path, (NI)(seppos + ((NI) 1))));
	}
	goto LA8;
	LA10: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field0), copyString(((NimStringDesc*) &TMP134)));
		unsureAsgnRef((void**) (&(*Result).Field1), copyString(path));
	}
	LA8: ;
}

N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((path ? path->Sup.len : 0) == ((NI) 0));
		if (LOC3) goto LA4;
		LOC3 = (((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyString(((NimStringDesc*) &TMP134));
	}
	goto LA1;
	LA5: ;
	{
		Keyvaluepair133008 LOC8;
		memset((void*)(&LOC8), 0, sizeof(LOC8));
		nossplitPath(path, (&LOC8));
		result = copyString(LOC8.Field1);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, searchextpos_118536)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = ((NI) -1);
	{
		NI i_118551;
		NI HEX3Atmp_118564;
		NI res_118567;
		i_118551 = 0;
		HEX3Atmp_118564 = 0;
		HEX3Atmp_118564 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res_118567 = HEX3Atmp_118564;
		{
			while (1) {
				if (!(((NI) 1) <= res_118567)) goto LA3;
				i_118551 = res_118567;
				{
					if (!((NU8)(s->data[i_118551]) == (NU8)(46))) goto LA6;
					result = i_118551;
					goto LA1;
				}
				goto LA4;
				LA6: ;
				{
					if (!(((NU8)(s->data[i_118551])) == ((NU8)(47)) || ((NU8)(s->data[i_118551])) == ((NU8)(47)))) goto LA9;
					goto LA1;
				}
				goto LA4;
				LA9: ;
				LA4: ;
				res_118567 -= ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, normext_118526)(NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((ext) && (ext)->Sup.len == 0);
		if (LOC3) goto LA4;
		LOC3 = ((NU8)(ext->data[((NI) 0)]) == (NU8)(46));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyString(ext);
	}
	goto LA1;
	LA5: ;
	{
		NimStringDesc* LOC8;
		LOC8 = 0;
		LOC8 = rawNewString(ext->Sup.len + 1);
appendChar(LOC8, 46);
appendString(LOC8, ext);
		result = LOC8;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	NI extpos;
	result = 0;
	extpos = searchextpos_118536(filename);
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		if (!(extpos < ((NI) 0))) goto LA3;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = normext_118526(ext);
		LOC5 = rawNewString(filename->Sup.len + LOC6->Sup.len + 0);
appendString(LOC5, filename);
appendString(LOC5, LOC6);
		result = LOC5;
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC8;
		NimStringDesc* LOC9;
		NimStringDesc* LOC10;
		LOC8 = 0;
		LOC9 = 0;
		LOC9 = copyStrLast(filename, ((NI) 0), (NI)(extpos - ((NI) 1)));
		LOC10 = 0;
		LOC10 = normext_118526(ext);
		LOC8 = rawNewString(LOC9->Sup.len + LOC10->Sup.len + 0);
appendString(LOC8, LOC9);
appendString(LOC8, LOC10);
		result = LOC8;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, oserrormsg_115620)(NI32 errorcode) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP134));
	{
		NCSTRING LOC5;
		if (!!((errorcode == ((NI32) 0)))) goto LA3;
		LOC5 = 0;
		LOC5 = strerror(errorcode);
		result = cstrToNimstr(LOC5);
	}
	LA3: ;
	return result;
}

static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr) {
	Tcell46147* result;
	result = 0;
	result = ((Tcell46147*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46147))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46147* c) {
	addzct_49617((&gch_48044.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46147* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46147* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49646((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46147* c;
	c = usrtocell_49646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
}

N_NIMCALL(void, raiseoserror_115809)(NI32 errorcode) {
	Oserror3433* e;
	e = 0;
	e = (Oserror3433*) newObj((&NTI115812), sizeof(Oserror3433));
	(*e).Sup.Sup.Sup.m_type = (&NTI3433);
	(*e).errorcode = errorcode;
	asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), oserrormsg_115620(errorcode));
	{
		NimStringDesc* LOC5;
		if (!(((*e).Sup.Sup.message) && ((*e).Sup.Sup.message)->Sup.len == 0)) goto LA3;
		LOC5 = 0;
		LOC5 = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP1141));
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	raiseException((Exception*)e, "OSError");
}

N_NIMCALL(NI32, oslasterror_115833)(void) {
	NI32 result;
	result = 0;
	result = errno;
	return result;
}

N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename) {
	NimStringDesc* result;
	NCSTRING r;
	NI LOC6;
	result = 0;
	result = mnewString(((NI) (PATH_MAX)));
	r = realpath(filename->data, result->data);
	{
		NI32 LOC5;
		if (!r == 0) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_115833();
		raiseoserror_115809(LOC5);
	}
	LA3: ;
	LOC6 = 0;
	LOC6 = strlen(result->data);
	result = setLengthStr(result, ((NI) (LOC6)));
	return result;
}

N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118589* Result) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((path ? path->Sup.len : 0) == ((NI) 0));
		if (LOC3) goto LA4;
		LOC3 = (((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		unsureAsgnRef((void**) (&(*Result).Field0), copyString(path));
		unsureAsgnRef((void**) (&(*Result).Field1), copyString(((NimStringDesc*) &TMP134)));
		unsureAsgnRef((void**) (&(*Result).Field2), copyString(((NimStringDesc*) &TMP134)));
	}
	goto LA1;
	LA5: ;
	{
		NI seppos;
		NI dotpos;
		seppos = ((NI) -1);
		dotpos = (path ? path->Sup.len : 0);
		{
			NI i_118619;
			NI HEX3Atmp_118643;
			NI res_118646;
			i_118619 = 0;
			HEX3Atmp_118643 = 0;
			HEX3Atmp_118643 = (NI)((path ? path->Sup.len : 0) - ((NI) 1));
			res_118646 = HEX3Atmp_118643;
			{
				while (1) {
					if (!(((NI) 0) <= res_118646)) goto LA10;
					i_118619 = res_118646;
					{
						if (!((NU8)(path->data[i_118619]) == (NU8)(46))) goto LA13;
						{
							NIM_BOOL LOC17;
							NIM_BOOL LOC18;
							LOC17 = 0;
							LOC18 = 0;
							LOC18 = (dotpos == (path ? path->Sup.len : 0));
							if (!(LOC18)) goto LA19;
							LOC18 = (((NI) 0) < i_118619);
							LA19: ;
							LOC17 = LOC18;
							if (!(LOC17)) goto LA20;
							LOC17 = !((((NU8)(path->data[(NI)(i_118619 - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI)(i_118619 - ((NI) 1))])) == ((NU8)(47))));
							LA20: ;
							if (!LOC17) goto LA21;
							dotpos = i_118619;
						}
						LA21: ;
					}
					goto LA11;
					LA13: ;
					{
						if (!(((NU8)(path->data[i_118619])) == ((NU8)(47)) || ((NU8)(path->data[i_118619])) == ((NU8)(47)))) goto LA24;
						seppos = i_118619;
						goto LA8;
					}
					goto LA11;
					LA24: ;
					LA11: ;
					res_118646 -= ((NI) 1);
				} LA10: ;
			}
		} LA8: ;
		unsureAsgnRef((void**) (&(*Result).Field0), copyStrLast(path, ((NI) 0), (NI)(seppos - ((NI) 1))));
		unsureAsgnRef((void**) (&(*Result).Field1), copyStrLast(path, (NI)(seppos + ((NI) 1)), (NI)(dotpos - ((NI) 1))));
		unsureAsgnRef((void**) (&(*Result).Field2), copyStr(path, dotpos));
	}
	LA1: ;
}

N_NIMCALL(void, getenvvarsc_121202)(void) {
	{
		NI i;
		if (!!(envcomputed_121007)) goto LA3;
		if (environment_121009) nimGCunrefNoCycle(environment_121009);
		environment_121009 = (TY121008*) newSeqRC1((&NTI121008), 0);
		i = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC11;
				NimStringDesc* LOC12;
				{
					if (!(environ[(i)- 0] == NIM_NIL)) goto LA9;
					goto LA5;
				}
				LA9: ;
				LOC11 = 0;
				LOC11 = cstrToNimstr(environ[(i)- 0]);
				environment_121009 = (TY121008*) incrSeq(&(environment_121009)->Sup, sizeof(NimStringDesc*));
				LOC12 = 0;
				LOC12 = environment_121009->data[environment_121009->Sup.len-1]; environment_121009->data[environment_121009->Sup.len-1] = copyStringRC1(LOC11);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				i += ((NI) 1);
			}
		} LA5: ;
		envcomputed_121007 = NIM_TRUE;
	}
	LA3: ;
}

N_NIMCALL(NI, findenvvar_121605)(NimStringDesc* key) {
	NI result;
	NimStringDesc* temp;
	NimStringDesc* LOC1;
{	result = 0;
	getenvvarsc_121202();
	LOC1 = 0;
	LOC1 = rawNewString(key->Sup.len + 1);
appendString(LOC1, key);
appendChar(LOC1, 61);
	temp = LOC1;
	{
		NI i_121620;
		NI HEX3Atmp_121622;
		NI res_121625;
		i_121620 = 0;
		HEX3Atmp_121622 = 0;
		HEX3Atmp_121622 = (environment_121009 ? (environment_121009->Sup.len-1) : -1);
		res_121625 = ((NI) 0);
		{
			while (1) {
				if (!(res_121625 <= HEX3Atmp_121622)) goto LA4;
				i_121620 = res_121625;
				{
					NIM_BOOL LOC7;
					LOC7 = 0;
					LOC7 = nsuStartsWith(environment_121009->data[i_121620], temp);
					if (!LOC7) goto LA8;
					result = i_121620;
					goto BeforeRet;
				}
				LA8: ;
				res_121625 += ((NI) 1);
			} LA4: ;
		}
	}
	result = ((NI) -1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getenv_121644)(NimStringDesc* key) {
	NimStringDesc* result;
	NI i;
{	result = 0;
	i = findenvvar_121605(key);
	{
		NI LOC5;
		if (!(((NI) 0) <= i)) goto LA3;
		LOC5 = 0;
		LOC5 = nsuFindChar(environment_121009->data[i], 61, ((NI) 0));
		result = copyStr(environment_121009->data[i], (NI)(LOC5 + ((NI) 1)));
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING env;
		env = getenv(key->data);
		{
			if (!(env == NIM_NIL)) goto LA9;
			result = copyString(((NimStringDesc*) &TMP134));
			goto BeforeRet;
		}
		LA9: ;
		result = cstrToNimstr(env);
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, paramstr_124809)(NI i) {
	NimStringDesc* result;
	Indexerror3455* e_124815;
	NimStringDesc* LOC7;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (i < ((NI) (cmdCount)));
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) 0) <= i);
		LA4: ;
		if (!LOC3) goto LA5;
		result = cstrToNimstr(cmdLine[(i)- 0]);
		goto BeforeRet;
	}
	LA5: ;
	e_124815 = 0;
	e_124815 = (Indexerror3455*) newObj((&NTI124816), sizeof(Indexerror3455));
	(*e_124815).Sup.Sup.m_type = (&NTI3455);
	LOC7 = 0;
	LOC7 = (*e_124815).Sup.message; (*e_124815).Sup.message = copyStringRC1(((NimStringDesc*) &TMP1144));
	if (LOC7) nimGCunrefNoCycle(LOC7);
	raiseException((Exception*)e_124815, "IndexError");
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	result = 0;
	{
		if (!((head ? head->Sup.len : 0) == ((NI) 0))) goto LA3;
		result = copyString(tail);
	}
	goto LA1;
	LA3: ;
	{
		if (!(((NU8)(head->data[(NI)((head ? head->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(head->data[(NI)((head ? head->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)))) goto LA6;
		{
			NimStringDesc* LOC12;
			NimStringDesc* LOC13;
			if (!(((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)) || ((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)))) goto LA10;
			LOC12 = 0;
			LOC13 = 0;
			LOC13 = copyStr(tail, ((NI) 1));
			LOC12 = rawNewString(head->Sup.len + LOC13->Sup.len + 0);
appendString(LOC12, head);
appendString(LOC12, LOC13);
			result = LOC12;
		}
		goto LA8;
		LA10: ;
		{
			NimStringDesc* LOC15;
			LOC15 = 0;
			LOC15 = rawNewString(head->Sup.len + tail->Sup.len + 0);
appendString(LOC15, head);
appendString(LOC15, tail);
			result = LOC15;
		}
		LA8: ;
	}
	goto LA1;
	LA6: ;
	{
		{
			NimStringDesc* LOC21;
			if (!(((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)) || ((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)))) goto LA19;
			LOC21 = 0;
			LOC21 = rawNewString(head->Sup.len + tail->Sup.len + 0);
appendString(LOC21, head);
appendString(LOC21, tail);
			result = LOC21;
		}
		goto LA17;
		LA19: ;
		{
			NimStringDesc* LOC23;
			LOC23 = 0;
			LOC23 = rawNewString(head->Sup.len + tail->Sup.len + 1);
appendString(LOC23, head);
appendChar(LOC23, 47);
appendString(LOC23, tail);
			result = LOC23;
		}
		LA17: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL LOC1;
	int LOC2;
{	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = stat(filename->data, (&res));
	LOC1 = (((NI32) 0) <= LOC2);
	if (!(LOC1)) goto LA3;
	LOC1 = S_ISREG(res.st_mode);
	LA3: ;
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getapplheuristic_125404)(void) {
	NimStringDesc* result;
{	result = 0;
	result = paramstr_124809(((NI) 0));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) < (result ? result->Sup.len : 0));
		if (!(LOC3)) goto LA4;
		LOC3 = !(((NU8)(result->data[((NI) 0)]) == (NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		{
			NimStringDesc* p_125602;
			NimStringDesc* HEX3Atmp_125609;
			NI last_125614;
			p_125602 = 0;
			HEX3Atmp_125609 = 0;
			HEX3Atmp_125609 = getenv_121644(((NimStringDesc*) &TMP1145));
			last_125614 = ((NI) 0);
			{
				while (1) {
					NI first_125616;
					if (!(last_125614 < (HEX3Atmp_125609 ? HEX3Atmp_125609->Sup.len : 0))) goto LA9;
					{
						while (1) {
							if (!(((NU8)(HEX3Atmp_125609->data[last_125614])) == ((NU8)(58)))) goto LA11;
							last_125614 += ((NI) 1);
						} LA11: ;
					}
					first_125616 = last_125614;
					{
						while (1) {
							NIM_BOOL LOC14;
							LOC14 = 0;
							LOC14 = (last_125614 < (HEX3Atmp_125609 ? HEX3Atmp_125609->Sup.len : 0));
							if (!(LOC14)) goto LA15;
							LOC14 = !((((NU8)(HEX3Atmp_125609->data[last_125614])) == ((NU8)(58))));
							LA15: ;
							if (!LOC14) goto LA13;
							last_125614 += ((NI) 1);
						} LA13: ;
					}
					{
						NimStringDesc* x;
						if (!(first_125616 <= (NI)(last_125614 - ((NI) 1)))) goto LA18;
						p_125602 = copyStrLast(HEX3Atmp_125609, first_125616, (NI)(last_125614 - ((NI) 1)));
						x = nosjoinPath(p_125602, result);
						{
							NIM_BOOL LOC22;
							LOC22 = 0;
							LOC22 = nosexistsFile(x);
							if (!LOC22) goto LA23;
							result = copyString(x);
							goto BeforeRet;
						}
						LA23: ;
					}
					LA18: ;
				} LA9: ;
			}
		}
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
	NimStringDesc* result;
	result = 0;
	result = getenv_121644(((NimStringDesc*) &TMP1142));
	{
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA3;
		result = getapplheuristic_125404();
	}
	LA3: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetAppDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	TY118589 LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetAppFilename();
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	nossplitFile(LOC1, (&LOC2));
	result = copyString(LOC2.Field0);
	return result;
}

N_NIMCALL(NI, parentdirpos_118359)(NimStringDesc* path) {
	NI result;
	NI q;
{	result = 0;
	q = ((NI) 1);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 1) <= (path ? path->Sup.len : 0));
		if (!(LOC3)) goto LA4;
		LOC3 = (((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		q = ((NI) 2);
	}
	LA5: ;
	{
		NI i_118386;
		NI HEX3Atmp_118399;
		NI res_118402;
		i_118386 = 0;
		HEX3Atmp_118399 = 0;
		HEX3Atmp_118399 = (NI)((path ? path->Sup.len : 0) - q);
		res_118402 = HEX3Atmp_118399;
		{
			while (1) {
				if (!(((NI) 0) <= res_118402)) goto LA9;
				i_118386 = res_118402;
				{
					if (!(((NU8)(path->data[i_118386])) == ((NU8)(47)) || ((NU8)(path->data[i_118386])) == ((NU8)(47)))) goto LA12;
					result = i_118386;
					goto BeforeRet;
				}
				LA12: ;
				res_118402 -= ((NI) 1);
			} LA9: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path) {
	NimStringDesc* result;
	NI seppos;
	result = 0;
	seppos = parentdirpos_118359(path);
	{
		if (!(((NI) 0) <= seppos)) goto LA3;
		result = copyStrLast(path, ((NI) 0), (NI)(seppos - ((NI) 1)));
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP134));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, HEX2F_118292)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
{	result = 0;
	result = nosjoinPath(head, tail);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawcreatedir_122843)(NimStringDesc* dir) {
	{
		NIM_BOOL LOC3;
		int LOC4;
		NI32 LOC8;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = mkdir(dir->data, ((mode_t) 511));
		LOC3 = !((LOC4 == ((NI32) 0)));
		if (!(LOC3)) goto LA5;
		LOC3 = !((errno == EEXIST));
		LA5: ;
		if (!LOC3) goto LA6;
		LOC8 = 0;
		LOC8 = oslasterror_115833();
		raiseoserror_115809(LOC8);
	}
	LA6: ;
}

N_NIMCALL(void, noscreateDir)(NimStringDesc* dir) {
	NIM_BOOL omitnext;
	omitnext = NIM_FALSE;
	{
		NI i_123211;
		NI HEX3Atmp_123224;
		NI res_123227;
		i_123211 = 0;
		HEX3Atmp_123224 = 0;
		HEX3Atmp_123224 = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
		res_123227 = ((NI) 1);
		{
			while (1) {
				if (!(res_123227 <= HEX3Atmp_123224)) goto LA3;
				i_123211 = res_123227;
				{
					if (!(((NU8)(dir->data[i_123211])) == ((NU8)(47)) || ((NU8)(dir->data[i_123211])) == ((NU8)(47)))) goto LA6;
					{
						if (!omitnext) goto LA10;
						omitnext = NIM_FALSE;
					}
					goto LA8;
					LA10: ;
					{
						NimStringDesc* LOC13;
						LOC13 = 0;
						LOC13 = copyStrLast(dir, ((NI) 0), (NI)(i_123211 - ((NI) 1)));
						rawcreatedir_122843(LOC13);
					}
					LA8: ;
				}
				LA6: ;
				res_123227 += ((NI) 1);
			} LA3: ;
		}
	}
	rawcreatedir_122843(dir);
}

N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0) {
	NimStringDesc* result;
	result = 0;
	result = copyString(parts[((NI) 0)]);
	{
		NI i_118266;
		NI HEX3Atmp_118270;
		NI res_118273;
		i_118266 = 0;
		HEX3Atmp_118270 = 0;
		HEX3Atmp_118270 = (partsLen0-1);
		res_118273 = ((NI) 1);
		{
			while (1) {
				if (!(res_118273 <= HEX3Atmp_118270)) goto LA3;
				i_118266 = res_118273;
				result = nosjoinPath(result, parts[i_118266]);
				res_118273 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	NI extpos;
	result = 0;
	extpos = searchextpos_118536(filename);
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		if (!(extpos < ((NI) 0))) goto LA3;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = normext_118526(ext);
		LOC5 = rawNewString(filename->Sup.len + LOC6->Sup.len + 0);
appendString(LOC5, filename);
appendString(LOC5, LOC6);
		result = LOC5;
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(filename);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, paramcount_124830)(void) {
	NI result;
	result = 0;
	result = ((NI) ((NI32)(cmdCount - ((NI32) 1))));
	return result;
}

N_NIMCALL(NimStringDesc*, nosunixToNativePath)(NimStringDesc* path, NimStringDesc* drive) {
	NimStringDesc* result;
	result = 0;
	result = copyString(path);
	return result;
}

N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path) {
	NIM_BOOL result;
	result = 0;
	result = ((NU8)(path->data[((NI) 0)]) == (NU8)(47));
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetHomeDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
{	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getenv_121644(((NimStringDesc*) &TMP1654));
	LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP1655));
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, noscmpPaths)(NimStringDesc* patha, NimStringDesc* pathb) {
	NI result;
	result = 0;
	{
		if (!NIM_TRUE) goto LA3;
		result = cmp_4717(patha, pathb);
	}
	goto LA1;
	LA3: ;
	{
		result = nsuCmpIgnoreCase(patha, pathb);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, putenv_121669)(NimStringDesc* key, NimStringDesc* val) {
	NI indx;
	indx = findenvvar_121605(key);
	{
		NimStringDesc* LOC5;
		if (!(((NI) 0) <= indx)) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(key->Sup.len + val->Sup.len + 1);
appendString(LOC5, key);
appendChar(LOC5, 61);
appendString(LOC5, val);
		asgnRefNoCycle((void**) (&environment_121009->data[indx]), LOC5);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC7;
		NimStringDesc* LOC8;
		LOC7 = 0;
		LOC7 = rawNewString(key->Sup.len + val->Sup.len + 1);
appendString(LOC7, key);
appendChar(LOC7, 61);
appendString(LOC7, val);
		environment_121009 = (TY121008*) incrSeq(&(environment_121009)->Sup, sizeof(NimStringDesc*));
		LOC8 = 0;
		LOC8 = environment_121009->data[environment_121009->Sup.len-1]; environment_121009->data[environment_121009->Sup.len-1] = copyStringRC1(LOC7);
		if (LOC8) nimGCunrefNoCycle(LOC8);
		indx = (environment_121009 ? (environment_121009->Sup.len-1) : -1);
	}
	LA1: ;
	{
		int LOC11;
		NI32 LOC14;
		LOC11 = 0;
		LOC11 = putenv(environment_121009->data[indx]->data);
		if (!!((LOC11 == ((NI32) 0)))) goto LA12;
		LOC14 = 0;
		LOC14 = oslasterror_115833();
		raiseoserror_115809(LOC14);
	}
	LA12: ;
}

N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
	NimStringDesc* result;
	result = 0;
	result = mnewString(((NI) 512));
	{
		NCSTRING LOC3;
		NI LOC6;
		LOC3 = 0;
		LOC3 = getcwd(result->data, ((NI) 512));
		if (!!((LOC3 == NIM_NIL))) goto LA4;
		LOC6 = 0;
		LOC6 = strlen(result->data);
		result = setLengthStr(result, ((NI) (LOC6)));
	}
	goto LA1;
	LA4: ;
	{
		NI32 LOC8;
		LOC8 = 0;
		LOC8 = oslasterror_115833();
		raiseoserror_115809(LOC8);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
{	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getenv_121644(((NimStringDesc*) &TMP1654));
	LOC1 = rawNewString(LOC2->Sup.len + 9);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP1894));
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = parentdirpos_118359(path);
	result = (LOC1 < ((NI) 0));
	return result;
}

N_NIMCALL(NIM_BOOL, existsenv_121659)(NimStringDesc* key) {
	NIM_BOOL result;
{	result = 0;
	{
		NCSTRING LOC3;
		LOC3 = 0;
		LOC3 = getenv(key->data);
		if (!!((LOC3 == NIM_NIL))) goto LA4;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	goto LA1;
	LA4: ;
	{
		NI LOC7;
		LOC7 = 0;
		LOC7 = findenvvar_121605(key);
		result = (((NI) 0) <= LOC7);
		goto BeforeRet;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL LOC1;
	int LOC2;
{	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = stat(dir->data, (&res));
	LOC1 = (((NI32) 0) <= LOC2);
	if (!(LOC1)) goto LA3;
	LOC1 = S_ISDIR(res.st_mode);
	LA3: ;
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nososErrorMsg)(void) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP134));
	{
		NCSTRING LOC5;
		if (!!((errno == ((NI32) 0)))) goto LA3;
		LOC5 = 0;
		LOC5 = strerror(errno);
		result = cstrToNimstr(LOC5);
	}
	LA3: ;
	return result;
}

N_NOINLINE(void, nosraiseOSError)(NimStringDesc* msg) {
	{
		NimStringDesc* m;
		Oserror3433* e_115416;
		if (!((msg ? msg->Sup.len : 0) == ((NI) 0))) goto LA3;
		m = nososErrorMsg();
		e_115416 = 0;
		e_115416 = (Oserror3433*) newObj((&NTI115812), sizeof(Oserror3433));
		(*e_115416).Sup.Sup.Sup.m_type = (&NTI3433);
		{
			NimStringDesc* LOC9;
			if (!(((NI) 0) < (m ? m->Sup.len : 0))) goto LA7;
			LOC9 = 0;
			LOC9 = (*e_115416).Sup.Sup.message; (*e_115416).Sup.Sup.message = copyStringRC1(m);
			if (LOC9) nimGCunrefNoCycle(LOC9);
		}
		goto LA5;
		LA7: ;
		{
			NimStringDesc* LOC11;
			LOC11 = 0;
			LOC11 = (*e_115416).Sup.Sup.message; (*e_115416).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP1141));
			if (LOC11) nimGCunrefNoCycle(LOC11);
		}
		LA5: ;
		raiseException((Exception*)e_115416, "OSError");
	}
	goto LA1;
	LA3: ;
	{
		Oserror3433* e_115428;
		NimStringDesc* LOC13;
		e_115428 = 0;
		e_115428 = (Oserror3433*) newObj((&NTI115812), sizeof(Oserror3433));
		(*e_115428).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC13 = 0;
		LOC13 = (*e_115428).Sup.Sup.message; (*e_115428).Sup.Sup.message = copyStringRC1(msg);
		if (LOC13) nimGCunrefNoCycle(LOC13);
		raiseException((Exception*)e_115428, "OSError");
	}
	LA1: ;
}

N_NIMCALL(time_t, nosgetLastModificationTime)(NimStringDesc* file) {
	time_t result;
	struct stat res;
{	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = stat(file->data, (&res));
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_115833();
		raiseoserror_115809(LOC6);
	}
	LA4: ;
	result = res.st_mtime;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	time_t LOC1;
	time_t LOC2;
	NI64 LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetLastModificationTime(a);
	LOC2 = 0;
	LOC2 = nosgetLastModificationTime(b);
	LOC3 = 0;
	LOC3 = ntDiffTime(LOC1, LOC2);
	result = (IL64(0) <= LOC3);
	return result;
}

N_NIMCALL(void, nossleep)(NI milsecs) {
	struct timespec a;
	struct timespec b;
	int LOC1;
	memset((void*)(&a), 0, sizeof(a));
	memset((void*)(&b), 0, sizeof(b));
	a.tv_sec = (NI)(milsecs / ((NI) 1000));
	a.tv_nsec = ((NI) ((NI)(((NI) ((NI)(((NI) ((NI)(milsecs % ((NI) 1000)))) * ((NI) 1000)))) * ((NI) 1000))));
	LOC1 = 0;
	LOC1 = nanosleep((&a), (&b));
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_85566)(NimStringDesc* s, Slice85573 x) {
	NimStringDesc* result;
	result = 0;
	result = copyStrLast(s, x.a, x.b);
	return result;
}

static N_INLINE(Slice85573, HEX2EHEX2E_104273)(NI a, NI b) {
	Slice85573 result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

N_NIMCALL(NimStringDesc*, expandtilde_126610)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC7;
		NimStringDesc* LOC11;
		Slice85573 LOC12;
		NimStringDesc* LOC13;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = (((NI) 1) < (path ? path->Sup.len : 0));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)(path->data[((NI) 0)]) == (NU8)(126));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC7 = 0;
		LOC7 = ((NU8)(path->data[((NI) 1)]) == (NU8)(47));
		if (LOC7) goto LA8;
		LOC7 = ((NU8)(path->data[((NI) 1)]) == (NU8)(92));
		LA8: ;
		LOC3 = LOC7;
		LA6: ;
		if (!LOC3) goto LA9;
		LOC11 = 0;
		LOC11 = nosgetHomeDir();
		LOC12 = HEX2EHEX2E_104273(((NI) 2), (NI)((path ? path->Sup.len : 0) - ((NI) 1)));
		LOC13 = 0;
		LOC13 = HEX5BHEX5D_85566(path, LOC12);
		result = HEX2F_118292(LOC11, LOC13);
	}
	goto LA1;
	LA9: ;
	{
		result = copyString(path);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findexe_126616)(NimStringDesc* exe) {
	NimStringDesc* result;
	NimStringDesc* path;
{	result = 0;
	result = nosaddFileExt(exe, ((NimStringDesc*) &TMP134));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nosexistsFile(result);
		if (!LOC3) goto LA4;
		goto BeforeRet;
	}
	LA4: ;
	path = getenv_121644(((NimStringDesc*) &TMP1145));
	{
		NimStringDesc* candidate_126621;
		NI last_126807;
		candidate_126621 = 0;
		last_126807 = ((NI) 0);
		{
			if (!(((NI) 0) < (path ? path->Sup.len : 0))) goto LA9;
			{
				while (1) {
					NI first_126809;
					NimStringDesc* x;
					NimStringDesc* LOC17;
					if (!(last_126807 <= (path ? path->Sup.len : 0))) goto LA12;
					first_126809 = last_126807;
					{
						while (1) {
							NIM_BOOL LOC15;
							LOC15 = 0;
							LOC15 = (last_126807 < (path ? path->Sup.len : 0));
							if (!(LOC15)) goto LA16;
							LOC15 = !(((NU8)(path->data[last_126807]) == (NU8)(58)));
							LA16: ;
							if (!LOC15) goto LA14;
							last_126807 += ((NI) 1);
						} LA14: ;
					}
					candidate_126621 = copyStrLast(path, first_126809, (NI)(last_126807 - ((NI) 1)));
					LOC17 = 0;
					LOC17 = expandtilde_126610(candidate_126621);
					x = HEX2F_118292(LOC17, result);
					{
						NIM_BOOL LOC20;
						LOC20 = 0;
						LOC20 = nosexistsFile(x);
						if (!LOC20) goto LA21;
						result = copyString(x);
						goto BeforeRet;
					}
					LA21: ;
					last_126807 += ((NI) 1);
				} LA12: ;
			}
		}
		LA9: ;
	}
	result = copyString(((NimStringDesc*) &TMP134));
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void) {
NTI121008.size = sizeof(TY121008*);
NTI121008.kind = 24;
NTI121008.base = (&NTI149);
NTI121008.flags = 2;
NTI121008.marker = TMP52;
}

