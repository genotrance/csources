/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Table164376 Table164376;
typedef struct Keyvaluepairseq164379 Keyvaluepairseq164379;
typedef struct Keyvaluepair164382 Keyvaluepair164382;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46146 Tcell46146;
typedef struct Tcellseq46162 Tcellseq46162;
typedef struct Tgcheap48016 Tgcheap48016;
typedef struct Tcellset46158 Tcellset46158;
typedef struct Tpagedesc46154 Tpagedesc46154;
typedef struct Tmemregion28010 Tmemregion28010;
typedef struct Tsmallchunk27240 Tsmallchunk27240;
typedef struct Tllchunk28004 Tllchunk28004;
typedef struct Tbigchunk27242 Tbigchunk27242;
typedef struct Tintset27217 Tintset27217;
typedef struct Ttrunk27213 Ttrunk27213;
typedef struct Tavlnode28008 Tavlnode28008;
typedef struct Tgcstat48014 Tgcstat48014;
typedef struct Table312052 Table312052;
typedef struct Keyvaluepairseq312055 Keyvaluepairseq312055;
typedef struct Keyvaluepair312058 Keyvaluepair312058;
typedef struct Table382650 Table382650;
typedef struct Keyvaluepairseq382653 Keyvaluepairseq382653;
typedef struct Keyvaluepair382656 Keyvaluepair382656;
typedef struct Tnode192813 Tnode192813;
typedef struct Table313411 Table313411;
typedef struct Keyvaluepairseq313414 Keyvaluepairseq313414;
typedef struct Keyvaluepair313417 Keyvaluepair313417;
typedef struct Tindexentry313398 Tindexentry313398;
typedef struct TY315708 TY315708;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Ttype192849 Ttype192849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tsym192843 Tsym192843;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct Tloc192827 Tloc192827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tscope192837 Tscope192837;
typedef struct TY192944 TY192944;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tsymseq192815 Tsymseq192815;
typedef struct Tlib192831 Tlib192831;
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY192933 TY192933;
struct  Table164376  {
Keyvaluepairseq164379* data;
NI counter;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Keyvaluepair164382 {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
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
struct  Tcell46146  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46162  {
NI len;
NI cap;
Tcell46146** d;
};
struct  Tcellset46158  {
NI counter;
NI max;
Tpagedesc46154* head;
Tpagedesc46154** data;
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
Tcellseq46162 zct;
Tcellseq46162 decstack;
Tcellset46158 cycleroots;
Tcellseq46162 tempstack;
NI recgclock;
Tmemregion28010 region;
Tgcstat48014 stat;
};
struct  Table312052  {
Keyvaluepairseq312055* data;
NI counter;
};
struct Keyvaluepair312058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Table382650  {
Keyvaluepairseq382653* data;
NI counter;
};
struct Keyvaluepair382656 {
NI Field0;
NI64 Field1;
Tnode192813* Field2;
};
struct  Table313411  {
Keyvaluepairseq313414* data;
NI counter;
};
struct  Tindexentry313398  {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linktitle;
NimStringDesc* linkdesc;
};
struct Keyvaluepair313417 {
NI Field0;
Tindexentry313398 Field1;
TY315708* Field2;
};
typedef NI TY27220[16];
struct  Tpagedesc46154  {
Tpagedesc46154* next;
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
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode192813  {
Ttype192849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym192843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq192807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tloc192827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype192849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Ttype192849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq192845* sons;
Tnode192813* n;
Tsym192843* owner;
Tsym192843* sym;
Tsym192843* destructor;
Tsym192843* deepcopy;
Tsym192843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc192827 loc;
};
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
};
struct  Tsym192843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq192845* typeinstcache;
Tscope192837* typscope;
} S1;
struct {TY192944* procinstcache;
Tsym192843* gcunsafetyreason;
} S2;
struct {TY192944* usedgenerics;
Tstrtable192817 tab;
} S3;
struct {Tsym192843* guard;
} S4;
} kindU;
NU16 magic;
Ttype192849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym192843* owner;
NU32 flags;
Tnode192813* ast;
NU32 options;
NI position;
NI offset;
Tloc192827 loc;
Tlib192831* annex;
Tnode192813* constraint;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope192837  {
NI depthlevel;
Tstrtable192817 symbols;
Tnodeseq192807* usingsyms;
Tscope192837* parent;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib192831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode192813* path;
};
struct  Tinstantiation192833  {
Tsym192843* sym;
Ttypeseq192845* concretetypes;
TY192933* usedby;
};
struct Keyvaluepairseq164379 {
  TGenericSeq Sup;
  Keyvaluepair164382 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq312055 {
  TGenericSeq Sup;
  Keyvaluepair312058 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq382653 {
  TGenericSeq Sup;
  Keyvaluepair382656 data[SEQ_DECL_SIZE];
};
struct TY315708 {
  TGenericSeq Sup;
  Tindexentry313398 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq313414 {
  TGenericSeq Sup;
  Keyvaluepair313417 data[SEQ_DECL_SIZE];
};
struct Tnodeseq192807 {
  TGenericSeq Sup;
  Tnode192813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq192845 {
  TGenericSeq Sup;
  Ttype192849* data[SEQ_DECL_SIZE];
};
struct TY192944 {
  TGenericSeq Sup;
  Tinstantiation192833* data[SEQ_DECL_SIZE];
};
struct Tsymseq192815 {
  TGenericSeq Sup;
  Tsym192843* data[SEQ_DECL_SIZE];
};
struct TY192933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP129)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, rawget_164559)(Table164376 t, NimStringDesc* key, NI* hc);
N_NIMCALL(NI, hash_131839)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, isfilled_157211)(NI hcode);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_157420)(NI h, NI maxhash);
static N_INLINE(NIM_BOOL, mustrehash_157313)(NI length, NI counter);
N_NIMCALL(void, enlarge_164676)(Table164376* t);
static N_INLINE(NI, rawgetknownhc_164730)(Table164376 t, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawinsert_164756)(Table164376* t, Keyvaluepairseq164379** data, NimStringDesc* key, NI32 val, NI hc, NI h);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
static N_INLINE(NI, rawget_313086)(Table312052 t, NimStringDesc* key, NI* hc);
N_NIMCALL(void, enlarge_313185)(Table312052* t);
N_NIMCALL(void, TMP2432)(void* p, NI op);
static N_INLINE(NI, rawgetknownhc_313239)(Table312052 t, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawinsert_313265)(Table312052* t, Keyvaluepairseq312055** data, NimStringDesc* key, NI val, NI hc, NI h);
N_NIMCALL(void, TMP2919)(void* p, NI op);
static N_INLINE(NI, rawget_383112)(Table382650 t, NI64 key, NI* hc);
static N_INLINE(NI, hash_131811)(NI64 x);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, enlarge_383200)(Table382650* t);
static N_INLINE(NI, rawgetknownhc_383254)(Table382650 t, NI64 key, NI hc);
N_NIMCALL(void, rawinsert_383280)(Table382650* t, Keyvaluepairseq382653** data, NI64 key, Tnode192813* val, NI hc, NI h);
N_NIMCALL(void, TMP4919)(void* p, NI op);
static N_INLINE(NI, rawget_315294)(Table313411 t, Tindexentry313398 key, NI* hc);
N_NIMCALL(NI, hash_313443)(Tindexentry313398 x);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_315309)(Tindexentry313398 x, Tindexentry313398 y);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_81204, TNimType* mt);
N_NIMCALL(void, enlarge_316109)(Table313411* t);
static N_INLINE(NI, rawgetknownhc_316163)(Table313411 t, Tindexentry313398 key, NI hc);
N_NIMCALL(void, rawinsert_316198)(Table313411* t, Keyvaluepairseq313414** data, Tindexentry313398 key, TY315708* val, NI hc, NI h);
TNimType NTI164382; /* KeyValuePair */
extern TNimType NTI131021; /* THash */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI164379; /* KeyValuePairSeq */
TNimType NTI164376; /* Table */
extern TNimType NTI108; /* int */
extern Tgcheap48016 gch_48044;
TNimType NTI312058; /* KeyValuePair */
TNimType NTI312055; /* KeyValuePairSeq */
TNimType NTI382656; /* KeyValuePair */
extern TNimType NTI5710; /* BiggestInt */
extern TNimType NTI192805; /* PNode */
TNimType NTI382653; /* KeyValuePairSeq */
TNimType NTI312052; /* Table */
TNimType NTI313417; /* KeyValuePair */
extern TNimType NTI313398; /* TIndexEntry */
extern TNimType NTI315708; /* seq[TIndexEntry] */
TNimType NTI313414; /* KeyValuePairSeq */
N_NIMCALL(void, TMP129)(void* p, NI op) {
	Keyvaluepairseq164379* a;
	NI LOC1;
	a = (Keyvaluepairseq164379*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_164368)(NI initialsize, Table164376* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq164379*) newSeq((&NTI164379), ((NI) (initialsize))));
}

static N_INLINE(NIM_BOOL, isfilled_157211)(NI hcode) {
	NIM_BOOL result;
	result = 0;
	result = !((hcode == ((NI) 0)));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, nexttry_157420)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)(h + ((NI) 1)) & maxhash);
	return result;
}

static N_INLINE(NI, rawget_164559)(Table164376 t, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_131839(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_157211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = eqStrings(t.data->data[h].Field1, key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_157420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_164547)(Table164376 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI LOC1;
	result = 0;
	hc = 0;
	LOC1 = 0;
	LOC1 = rawget_164559(t, key, (&hc));
	result = (((NI) 0) <= LOC1);
	return result;
}

N_NIMCALL(NI32, HEX5BHEX5D_164590)(Table164376 t, NimStringDesc* key) {
	NI32 result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_164559(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.data->data[index].Field2;
	}
	LA3: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_157313)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI)(length - counter) < ((NI) 4));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NI, rawgetknownhc_164730)(Table164376 t, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_157211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = eqStrings(t.data->data[h].Field1, key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_157420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr) {
	Tcell46146* result;
	result = 0;
	result = ((Tcell46146*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46146))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46146* c) {
	addzct_49617((&gch_48044.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46146* c;
	c = usrtocell_49646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
}

N_NIMCALL(void, rawinsert_164756)(Table164376* t, Keyvaluepairseq164379** data, NimStringDesc* key, NI32 val, NI hc, NI h) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*data)->data[h].Field2 = val;
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_164676)(Table164376* t) {
	Keyvaluepairseq164379* n;
	Keyvaluepairseq164379* LOC1;
	n = 0;
	n = (Keyvaluepairseq164379*) newSeq((&NTI164379), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_164728;
		NI HEX3Atmp_164782;
		NI res_164785;
		i_164728 = 0;
		HEX3Atmp_164782 = 0;
		HEX3Atmp_164782 = (n ? (n->Sup.len-1) : -1);
		res_164785 = ((NI) 0);
		{
			while (1) {
				if (!(res_164785 <= HEX3Atmp_164782)) goto LA4;
				i_164728 = res_164785;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_157211(n->data[i_164728].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_164730((*t), n->data[i_164728].Field1, n->data[i_164728].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_164756(t, (&(*t).data), n->data[i_164728].Field1, n->data[i_164728].Field2, n->data[i_164728].Field0, j);
				}
				LA8: ;
				res_164785 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_164639)(Table164376* t, NimStringDesc* key, NI32 val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_164559((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		(*t).data->data[index].Field2 = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_157313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_164676(t);
			index = rawgetknownhc_164730((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_164756(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

static N_INLINE(NI, rawget_313086)(Table312052 t, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_131839(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_157211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = eqStrings(t.data->data[h].Field1, key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_157420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_313074)(Table312052 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI LOC1;
	result = 0;
	hc = 0;
	LOC1 = 0;
	LOC1 = rawget_313086(t, key, (&hc));
	result = (((NI) 0) <= LOC1);
	return result;
}
N_NIMCALL(void, TMP2432)(void* p, NI op) {
	Keyvaluepairseq312055* a;
	NI LOC1;
	a = (Keyvaluepairseq312055*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

static N_INLINE(NI, rawgetknownhc_313239)(Table312052 t, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_157211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = eqStrings(t.data->data[h].Field1, key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_157420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_313265)(Table312052* t, Keyvaluepairseq312055** data, NimStringDesc* key, NI val, NI hc, NI h) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*data)->data[h].Field2 = val;
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_313185)(Table312052* t) {
	Keyvaluepairseq312055* n;
	Keyvaluepairseq312055* LOC1;
	n = 0;
	n = (Keyvaluepairseq312055*) newSeq((&NTI312055), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_313237;
		NI HEX3Atmp_313291;
		NI res_313294;
		i_313237 = 0;
		HEX3Atmp_313291 = 0;
		HEX3Atmp_313291 = (n ? (n->Sup.len-1) : -1);
		res_313294 = ((NI) 0);
		{
			while (1) {
				if (!(res_313294 <= HEX3Atmp_313291)) goto LA4;
				i_313237 = res_313294;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_157211(n->data[i_313237].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_313239((*t), n->data[i_313237].Field1, n->data[i_313237].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_313265(t, (&(*t).data), n->data[i_313237].Field1, n->data[i_313237].Field2, n->data[i_313237].Field0, j);
				}
				LA8: ;
				res_313294 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_313148)(Table312052* t, NimStringDesc* key, NI val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_313086((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		(*t).data->data[index].Field2 = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_157313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_313185(t);
			index = rawgetknownhc_313239((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_313265(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(NI, HEX5BHEX5D_313117)(Table312052 t, NimStringDesc* key) {
	NI result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_313086(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.data->data[index].Field2;
	}
	LA3: ;
	return result;
}
N_NIMCALL(void, TMP2919)(void* p, NI op) {
	Keyvaluepairseq382653* a;
	NI LOC1;
	a = (Keyvaluepairseq382653*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field2, op);
	}
}

N_NIMCALL(void, inittable_383471)(NI initialsize, Table382650* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq382653*) newSeq((&NTI382653), ((NI) (initialsize))));
}

static N_INLINE(NI, hash_131811)(NI64 x) {
	NI result;
	result = 0;
	result = ((NI) (((NI32)(NU32)(NU64)(x))));
	return result;
}

static N_INLINE(NI, rawget_383112)(Table382650 t, NI64 key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_131811(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_157211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = (t.data->data[h].Field1 == key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_157420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tnode192813*, HEX5BHEX5D_383100)(Table382650 t, NI64 key) {
	Tnode192813* result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_383112(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.data->data[index].Field2;
	}
	LA3: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46146* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46146* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49646((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NI, rawgetknownhc_383254)(Table382650 t, NI64 key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_157211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = (t.data->data[h].Field1 == key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_157420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_383280)(Table382650* t, Keyvaluepairseq382653** data, NI64 key, Tnode192813* val, NI hc, NI h) {
	(*data)->data[h].Field1 = key;
	asgnRefNoCycle((void**) (&(*data)->data[h].Field2), val);
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_383200)(Table382650* t) {
	Keyvaluepairseq382653* n;
	Keyvaluepairseq382653* LOC1;
	n = 0;
	n = (Keyvaluepairseq382653*) newSeq((&NTI382653), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_383252;
		NI HEX3Atmp_383306;
		NI res_383309;
		i_383252 = 0;
		HEX3Atmp_383306 = 0;
		HEX3Atmp_383306 = (n ? (n->Sup.len-1) : -1);
		res_383309 = ((NI) 0);
		{
			while (1) {
				if (!(res_383309 <= HEX3Atmp_383306)) goto LA4;
				i_383252 = res_383309;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_157211(n->data[i_383252].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_383254((*t), n->data[i_383252].Field1, n->data[i_383252].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_383280(t, (&(*t).data), n->data[i_383252].Field1, n->data[i_383252].Field2, n->data[i_383252].Field0, j);
				}
				LA8: ;
				res_383309 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_383163)(Table382650* t, NI64 key, Tnode192813* val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_383112((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		asgnRefNoCycle((void**) (&(*t).data->data[index].Field2), val);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_157313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_383200(t);
			index = rawgetknownhc_383254((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_383280(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(void, inittable_312118)(NI initialsize, Table312052* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq312055*) newSeq((&NTI312055), ((NI) (initialsize))));
}
N_NIMCALL(void, TMP4919)(void* p, NI op) {
	Keyvaluepairseq313414* a;
	NI LOC1;
	a = (Keyvaluepairseq313414*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1.keyword, op);
	nimGCvisit((void*)a->data[LOC1].Field1.link, op);
	nimGCvisit((void*)a->data[LOC1].Field1.linktitle, op);
	nimGCvisit((void*)a->data[LOC1].Field1.linkdesc, op);
	nimGCvisit((void*)a->data[LOC1].Field2, op);
	}
}

N_NIMCALL(void, inittable_315732)(NI initialsize, Table313411* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq313414*) newSeq((&NTI313414), ((NI) (initialsize))));
}

N_NIMCALL(NI, len_316060)(Table313411 t) {
	NI result;
	result = 0;
	result = t.counter;
	return result;
}

static N_INLINE(NI, rawget_315294)(Table313411 t, Tindexentry313398 key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_313443(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_157211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = HEX3DHEX3D_315309(t.data->data[h].Field1, key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_157420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, rawgetknownhc_316163)(Table313411 t, Tindexentry313398 key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_157211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = HEX3DHEX3D_315309(t.data->data[h].Field1, key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_157420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_316198)(Table313411* t, Keyvaluepairseq313414** data, Tindexentry313398 key, TY315708* val, NI hc, NI h) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1.keyword; (*data)->data[h].Field1.keyword = copyStringRC1(key.keyword);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = (*data)->data[h].Field1.link; (*data)->data[h].Field1.link = copyStringRC1(key.link);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = (*data)->data[h].Field1.linktitle; (*data)->data[h].Field1.linktitle = copyStringRC1(key.linktitle);
	if (LOC3) nimGCunrefNoCycle(LOC3);
	LOC4 = 0;
	LOC4 = (*data)->data[h].Field1.linkdesc; (*data)->data[h].Field1.linkdesc = copyStringRC1(key.linkdesc);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	genericSeqAssign((&(*data)->data[h].Field2), val, (&NTI315708));
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_316109)(Table313411* t) {
	Keyvaluepairseq313414* n;
	Keyvaluepairseq313414* LOC1;
	n = 0;
	n = (Keyvaluepairseq313414*) newSeq((&NTI313414), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_316161;
		NI HEX3Atmp_316224;
		NI res_316227;
		i_316161 = 0;
		HEX3Atmp_316224 = 0;
		HEX3Atmp_316224 = (n ? (n->Sup.len-1) : -1);
		res_316227 = ((NI) 0);
		{
			while (1) {
				if (!(res_316227 <= HEX3Atmp_316224)) goto LA4;
				i_316161 = res_316227;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_157211(n->data[i_316161].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_316163((*t), n->data[i_316161].Field1, n->data[i_316161].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_316198(t, (&(*t).data), n->data[i_316161].Field1, n->data[i_316161].Field2, n->data[i_316161].Field0, j);
				}
				LA8: ;
				res_316227 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_316072)(Table313411* t, Tindexentry313398 key, TY315708* val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_315294((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		genericSeqAssign((&(*t).data->data[index].Field2), val, (&NTI315708));
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_157313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_316109(t);
			index = rawgetknownhc_316163((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_316198(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(TY315708*, HEX5BHEX5D_315282)(Table313411 t, Tindexentry313398 key) {
	TY315708* result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_315294(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		genericSeqAssign((&result), t.data->data[index].Field2, (&NTI315708));
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void) {
static TNimNode* TMP128[3];
static TNimNode* TMP132[2];
static TNimNode* TMP2431[3];
static TNimNode* TMP2918[3];
static TNimNode* TMP4766[2];
static TNimNode* TMP4916[3];
static TNimNode TMP55[22];
NTI164382.size = sizeof(Keyvaluepair164382);
NTI164382.kind = 18;
NTI164382.base = 0;
NTI164382.flags = 2;
TMP128[0] = &TMP55[1];
TMP55[1].kind = 1;
TMP55[1].offset = offsetof(Keyvaluepair164382, Field0);
TMP55[1].typ = (&NTI131021);
TMP55[1].name = "Field0";
TMP128[1] = &TMP55[2];
TMP55[2].kind = 1;
TMP55[2].offset = offsetof(Keyvaluepair164382, Field1);
TMP55[2].typ = (&NTI149);
TMP55[2].name = "Field1";
TMP128[2] = &TMP55[3];
TMP55[3].kind = 1;
TMP55[3].offset = offsetof(Keyvaluepair164382, Field2);
TMP55[3].typ = (&NTI114);
TMP55[3].name = "Field2";
TMP55[0].len = 3; TMP55[0].kind = 2; TMP55[0].sons = &TMP128[0];
NTI164382.node = &TMP55[0];
NTI164379.size = sizeof(Keyvaluepairseq164379*);
NTI164379.kind = 24;
NTI164379.base = (&NTI164382);
NTI164379.flags = 2;
NTI164379.marker = TMP129;
NTI164376.size = sizeof(Table164376);
NTI164376.kind = 18;
NTI164376.base = 0;
NTI164376.flags = 2;
TMP132[0] = &TMP55[5];
TMP55[5].kind = 1;
TMP55[5].offset = offsetof(Table164376, data);
TMP55[5].typ = (&NTI164379);
TMP55[5].name = "data";
TMP132[1] = &TMP55[6];
TMP55[6].kind = 1;
TMP55[6].offset = offsetof(Table164376, counter);
TMP55[6].typ = (&NTI108);
TMP55[6].name = "counter";
TMP55[4].len = 2; TMP55[4].kind = 2; TMP55[4].sons = &TMP132[0];
NTI164376.node = &TMP55[4];
NTI312058.size = sizeof(Keyvaluepair312058);
NTI312058.kind = 18;
NTI312058.base = 0;
NTI312058.flags = 2;
TMP2431[0] = &TMP55[8];
TMP55[8].kind = 1;
TMP55[8].offset = offsetof(Keyvaluepair312058, Field0);
TMP55[8].typ = (&NTI131021);
TMP55[8].name = "Field0";
TMP2431[1] = &TMP55[9];
TMP55[9].kind = 1;
TMP55[9].offset = offsetof(Keyvaluepair312058, Field1);
TMP55[9].typ = (&NTI149);
TMP55[9].name = "Field1";
TMP2431[2] = &TMP55[10];
TMP55[10].kind = 1;
TMP55[10].offset = offsetof(Keyvaluepair312058, Field2);
TMP55[10].typ = (&NTI108);
TMP55[10].name = "Field2";
TMP55[7].len = 3; TMP55[7].kind = 2; TMP55[7].sons = &TMP2431[0];
NTI312058.node = &TMP55[7];
NTI312055.size = sizeof(Keyvaluepairseq312055*);
NTI312055.kind = 24;
NTI312055.base = (&NTI312058);
NTI312055.flags = 2;
NTI312055.marker = TMP2432;
NTI382656.size = sizeof(Keyvaluepair382656);
NTI382656.kind = 18;
NTI382656.base = 0;
NTI382656.flags = 2;
TMP2918[0] = &TMP55[12];
TMP55[12].kind = 1;
TMP55[12].offset = offsetof(Keyvaluepair382656, Field0);
TMP55[12].typ = (&NTI131021);
TMP55[12].name = "Field0";
TMP2918[1] = &TMP55[13];
TMP55[13].kind = 1;
TMP55[13].offset = offsetof(Keyvaluepair382656, Field1);
TMP55[13].typ = (&NTI5710);
TMP55[13].name = "Field1";
TMP2918[2] = &TMP55[14];
TMP55[14].kind = 1;
TMP55[14].offset = offsetof(Keyvaluepair382656, Field2);
TMP55[14].typ = (&NTI192805);
TMP55[14].name = "Field2";
TMP55[11].len = 3; TMP55[11].kind = 2; TMP55[11].sons = &TMP2918[0];
NTI382656.node = &TMP55[11];
NTI382653.size = sizeof(Keyvaluepairseq382653*);
NTI382653.kind = 24;
NTI382653.base = (&NTI382656);
NTI382653.flags = 2;
NTI382653.marker = TMP2919;
NTI312052.size = sizeof(Table312052);
NTI312052.kind = 18;
NTI312052.base = 0;
NTI312052.flags = 2;
TMP4766[0] = &TMP55[16];
TMP55[16].kind = 1;
TMP55[16].offset = offsetof(Table312052, data);
TMP55[16].typ = (&NTI312055);
TMP55[16].name = "data";
TMP4766[1] = &TMP55[17];
TMP55[17].kind = 1;
TMP55[17].offset = offsetof(Table312052, counter);
TMP55[17].typ = (&NTI108);
TMP55[17].name = "counter";
TMP55[15].len = 2; TMP55[15].kind = 2; TMP55[15].sons = &TMP4766[0];
NTI312052.node = &TMP55[15];
NTI313417.size = sizeof(Keyvaluepair313417);
NTI313417.kind = 18;
NTI313417.base = 0;
NTI313417.flags = 2;
TMP4916[0] = &TMP55[19];
TMP55[19].kind = 1;
TMP55[19].offset = offsetof(Keyvaluepair313417, Field0);
TMP55[19].typ = (&NTI131021);
TMP55[19].name = "Field0";
TMP4916[1] = &TMP55[20];
TMP55[20].kind = 1;
TMP55[20].offset = offsetof(Keyvaluepair313417, Field1);
TMP55[20].typ = (&NTI313398);
TMP55[20].name = "Field1";
TMP4916[2] = &TMP55[21];
TMP55[21].kind = 1;
TMP55[21].offset = offsetof(Keyvaluepair313417, Field2);
TMP55[21].typ = (&NTI315708);
TMP55[21].name = "Field2";
TMP55[18].len = 3; TMP55[18].kind = 2; TMP55[18].sons = &TMP4916[0];
NTI313417.node = &TMP55[18];
NTI313414.size = sizeof(Keyvaluepairseq313414*);
NTI313414.kind = 24;
NTI313414.base = (&NTI313417);
NTI313414.flags = 2;
NTI313414.marker = TMP4919;
}

