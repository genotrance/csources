/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Table163376 Table163376;
typedef struct Keyvaluepairseq163379 Keyvaluepairseq163379;
typedef struct Keyvaluepair163382 Keyvaluepair163382;
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
typedef struct Table311052 Table311052;
typedef struct Keyvaluepairseq311055 Keyvaluepairseq311055;
typedef struct Keyvaluepair311058 Keyvaluepair311058;
typedef struct Table381650 Table381650;
typedef struct Keyvaluepairseq381653 Keyvaluepairseq381653;
typedef struct Keyvaluepair381656 Keyvaluepair381656;
typedef struct Tnode191813 Tnode191813;
typedef struct Table312411 Table312411;
typedef struct Keyvaluepairseq312414 Keyvaluepairseq312414;
typedef struct Keyvaluepair312417 Keyvaluepair312417;
typedef struct Tindexentry312398 Tindexentry312398;
typedef struct TY314708 TY314708;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tsym191843 Tsym191843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tlib191831 Tlib191831;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY191933 TY191933;
struct  Table163376  {
Keyvaluepairseq163379* data;
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
struct Keyvaluepair163382 {
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
struct  Table311052  {
Keyvaluepairseq311055* data;
NI counter;
};
struct Keyvaluepair311058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Table381650  {
Keyvaluepairseq381653* data;
NI counter;
};
struct Keyvaluepair381656 {
NI Field0;
NI64 Field1;
Tnode191813* Field2;
};
struct  Table312411  {
Keyvaluepairseq312414* data;
NI counter;
};
struct  Tindexentry312398  {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linktitle;
NimStringDesc* linkdesc;
};
struct Keyvaluepair312417 {
NI Field0;
Tindexentry312398 Field1;
TY314708* Field2;
};
typedef NI TY27220[8];
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
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq191807* sons;
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
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Ttype191849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tsym191843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tlib191831  {
  Tlistentry129022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode191813* path;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct Keyvaluepairseq163379 {
  TGenericSeq Sup;
  Keyvaluepair163382 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq311055 {
  TGenericSeq Sup;
  Keyvaluepair311058 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq381653 {
  TGenericSeq Sup;
  Keyvaluepair381656 data[SEQ_DECL_SIZE];
};
struct TY314708 {
  TGenericSeq Sup;
  Tindexentry312398 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq312414 {
  TGenericSeq Sup;
  Keyvaluepair312417 data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP129)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, rawget_163559)(Table163376 t, NimStringDesc* key, NI* hc);
N_NIMCALL(NI, hash_130839)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, isfilled_156211)(NI hcode);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_156420)(NI h, NI maxhash);
static N_INLINE(NIM_BOOL, mustrehash_156313)(NI length, NI counter);
N_NIMCALL(void, enlarge_163676)(Table163376* t);
static N_INLINE(NI, rawgetknownhc_163730)(Table163376 t, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawinsert_163756)(Table163376* t, Keyvaluepairseq163379** data, NimStringDesc* key, NI32 val, NI hc, NI h);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
static N_INLINE(NI, rawget_312086)(Table311052 t, NimStringDesc* key, NI* hc);
N_NIMCALL(void, enlarge_312185)(Table311052* t);
N_NIMCALL(void, TMP2432)(void* p, NI op);
static N_INLINE(NI, rawgetknownhc_312239)(Table311052 t, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawinsert_312265)(Table311052* t, Keyvaluepairseq311055** data, NimStringDesc* key, NI val, NI hc, NI h);
N_NIMCALL(void, TMP2919)(void* p, NI op);
static N_INLINE(NI, rawget_382112)(Table381650 t, NI64 key, NI* hc);
static N_INLINE(NI, hash_130811)(NI64 x);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, enlarge_382200)(Table381650* t);
static N_INLINE(NI, rawgetknownhc_382254)(Table381650 t, NI64 key, NI hc);
N_NIMCALL(void, rawinsert_382280)(Table381650* t, Keyvaluepairseq381653** data, NI64 key, Tnode191813* val, NI hc, NI h);
N_NIMCALL(void, TMP4919)(void* p, NI op);
static N_INLINE(NI, rawget_314294)(Table312411 t, Tindexentry312398* key, NI* hc);
N_NIMCALL(NI, hash_312443)(Tindexentry312398* x);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_314309)(Tindexentry312398* x, Tindexentry312398* y);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_81004, TNimType* mt);
N_NIMCALL(void, enlarge_315109)(Table312411* t);
static N_INLINE(NI, rawgetknownhc_315163)(Table312411 t, Tindexentry312398* key, NI hc);
N_NIMCALL(void, rawinsert_315198)(Table312411* t, Keyvaluepairseq312414** data, Tindexentry312398* key, TY314708* val, NI hc, NI h);
TNimType NTI163382; /* KeyValuePair */
extern TNimType NTI130021; /* THash */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI163379; /* KeyValuePairSeq */
TNimType NTI163376; /* Table */
extern TNimType NTI108; /* int */
extern Tgcheap48016 gch_48044;
TNimType NTI311058; /* KeyValuePair */
TNimType NTI311055; /* KeyValuePairSeq */
TNimType NTI381656; /* KeyValuePair */
extern TNimType NTI5710; /* BiggestInt */
extern TNimType NTI191805; /* PNode */
TNimType NTI381653; /* KeyValuePairSeq */
TNimType NTI311052; /* Table */
TNimType NTI312417; /* KeyValuePair */
extern TNimType NTI312398; /* TIndexEntry */
extern TNimType NTI314708; /* seq[TIndexEntry] */
TNimType NTI312414; /* KeyValuePairSeq */
N_NIMCALL(void, TMP129)(void* p, NI op) {
	Keyvaluepairseq163379* a;
	NI LOC1;
	a = (Keyvaluepairseq163379*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_163368)(NI initialsize, Table163376* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq163379*) newSeq((&NTI163379), ((NI) (initialsize))));
}

static N_INLINE(NIM_BOOL, isfilled_156211)(NI hcode) {
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

static N_INLINE(NI, nexttry_156420)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)(h + ((NI) 1)) & maxhash);
	return result;
}

static N_INLINE(NI, rawget_163559)(Table163376 t, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_130839(key);
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
			LOC7 = isfilled_156211(t.data->data[h].Field0);
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
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_163547)(Table163376 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI LOC1;
	result = 0;
	hc = 0;
	LOC1 = 0;
	LOC1 = rawget_163559(t, key, (&hc));
	result = (((NI) 0) <= LOC1);
	return result;
}

N_NIMCALL(NI32, HEX5BHEX5D_163590)(Table163376 t, NimStringDesc* key) {
	NI32 result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_163559(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.data->data[index].Field2;
	}
	LA3: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_156313)(NI length, NI counter) {
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

static N_INLINE(NI, rawgetknownhc_163730)(Table163376 t, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_156211(t.data->data[h].Field0);
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
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr) {
	Tcell46146* result;
	result = 0;
	result = ((Tcell46146*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46146))))));
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
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
}

N_NIMCALL(void, rawinsert_163756)(Table163376* t, Keyvaluepairseq163379** data, NimStringDesc* key, NI32 val, NI hc, NI h) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*data)->data[h].Field2 = val;
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_163676)(Table163376* t) {
	Keyvaluepairseq163379* n;
	Keyvaluepairseq163379* LOC1;
	n = 0;
	n = (Keyvaluepairseq163379*) newSeq((&NTI163379), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_163728;
		NI HEX3Atmp_163782;
		NI res_163785;
		i_163728 = 0;
		HEX3Atmp_163782 = 0;
		HEX3Atmp_163782 = (n ? (n->Sup.len-1) : -1);
		res_163785 = ((NI) 0);
		{
			while (1) {
				if (!(res_163785 <= HEX3Atmp_163782)) goto LA4;
				i_163728 = res_163785;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_156211(n->data[i_163728].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_163730((*t), n->data[i_163728].Field1, n->data[i_163728].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_163756(t, (&(*t).data), n->data[i_163728].Field1, n->data[i_163728].Field2, n->data[i_163728].Field0, j);
				}
				LA8: ;
				res_163785 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_163639)(Table163376* t, NimStringDesc* key, NI32 val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_163559((*t), key, (&hc));
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
			LOC8 = mustrehash_156313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_163676(t);
			index = rawgetknownhc_163730((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_163756(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

static N_INLINE(NI, rawget_312086)(Table311052 t, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_130839(key);
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
			LOC7 = isfilled_156211(t.data->data[h].Field0);
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
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_312074)(Table311052 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI LOC1;
	result = 0;
	hc = 0;
	LOC1 = 0;
	LOC1 = rawget_312086(t, key, (&hc));
	result = (((NI) 0) <= LOC1);
	return result;
}
N_NIMCALL(void, TMP2432)(void* p, NI op) {
	Keyvaluepairseq311055* a;
	NI LOC1;
	a = (Keyvaluepairseq311055*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

static N_INLINE(NI, rawgetknownhc_312239)(Table311052 t, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_156211(t.data->data[h].Field0);
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
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_312265)(Table311052* t, Keyvaluepairseq311055** data, NimStringDesc* key, NI val, NI hc, NI h) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*data)->data[h].Field2 = val;
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_312185)(Table311052* t) {
	Keyvaluepairseq311055* n;
	Keyvaluepairseq311055* LOC1;
	n = 0;
	n = (Keyvaluepairseq311055*) newSeq((&NTI311055), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_312237;
		NI HEX3Atmp_312291;
		NI res_312294;
		i_312237 = 0;
		HEX3Atmp_312291 = 0;
		HEX3Atmp_312291 = (n ? (n->Sup.len-1) : -1);
		res_312294 = ((NI) 0);
		{
			while (1) {
				if (!(res_312294 <= HEX3Atmp_312291)) goto LA4;
				i_312237 = res_312294;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_156211(n->data[i_312237].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_312239((*t), n->data[i_312237].Field1, n->data[i_312237].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_312265(t, (&(*t).data), n->data[i_312237].Field1, n->data[i_312237].Field2, n->data[i_312237].Field0, j);
				}
				LA8: ;
				res_312294 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_312148)(Table311052* t, NimStringDesc* key, NI val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_312086((*t), key, (&hc));
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
			LOC8 = mustrehash_156313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_312185(t);
			index = rawgetknownhc_312239((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_312265(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(NI, HEX5BHEX5D_312117)(Table311052 t, NimStringDesc* key) {
	NI result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_312086(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.data->data[index].Field2;
	}
	LA3: ;
	return result;
}
N_NIMCALL(void, TMP2919)(void* p, NI op) {
	Keyvaluepairseq381653* a;
	NI LOC1;
	a = (Keyvaluepairseq381653*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field2, op);
	}
}

N_NIMCALL(void, inittable_382471)(NI initialsize, Table381650* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq381653*) newSeq((&NTI381653), ((NI) (initialsize))));
}

static N_INLINE(NI, hash_130811)(NI64 x) {
	NI result;
	result = 0;
	result = ((NI) (((NI32)(NU32)(NU64)(x))));
	return result;
}

static N_INLINE(NI, rawget_382112)(Table381650 t, NI64 key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_130811(key);
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
			LOC7 = isfilled_156211(t.data->data[h].Field0);
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
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tnode191813*, HEX5BHEX5D_382100)(Table381650 t, NI64 key) {
	Tnode191813* result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_382112(t, key, (&hc));
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
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NI, rawgetknownhc_382254)(Table381650 t, NI64 key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_156211(t.data->data[h].Field0);
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
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_382280)(Table381650* t, Keyvaluepairseq381653** data, NI64 key, Tnode191813* val, NI hc, NI h) {
	(*data)->data[h].Field1 = key;
	asgnRefNoCycle((void**) (&(*data)->data[h].Field2), val);
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_382200)(Table381650* t) {
	Keyvaluepairseq381653* n;
	Keyvaluepairseq381653* LOC1;
	n = 0;
	n = (Keyvaluepairseq381653*) newSeq((&NTI381653), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_382252;
		NI HEX3Atmp_382306;
		NI res_382309;
		i_382252 = 0;
		HEX3Atmp_382306 = 0;
		HEX3Atmp_382306 = (n ? (n->Sup.len-1) : -1);
		res_382309 = ((NI) 0);
		{
			while (1) {
				if (!(res_382309 <= HEX3Atmp_382306)) goto LA4;
				i_382252 = res_382309;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_156211(n->data[i_382252].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_382254((*t), n->data[i_382252].Field1, n->data[i_382252].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_382280(t, (&(*t).data), n->data[i_382252].Field1, n->data[i_382252].Field2, n->data[i_382252].Field0, j);
				}
				LA8: ;
				res_382309 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_382163)(Table381650* t, NI64 key, Tnode191813* val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_382112((*t), key, (&hc));
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
			LOC8 = mustrehash_156313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_382200(t);
			index = rawgetknownhc_382254((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_382280(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(void, inittable_311118)(NI initialsize, Table311052* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq311055*) newSeq((&NTI311055), ((NI) (initialsize))));
}
N_NIMCALL(void, TMP4919)(void* p, NI op) {
	Keyvaluepairseq312414* a;
	NI LOC1;
	a = (Keyvaluepairseq312414*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1.keyword, op);
	nimGCvisit((void*)a->data[LOC1].Field1.link, op);
	nimGCvisit((void*)a->data[LOC1].Field1.linktitle, op);
	nimGCvisit((void*)a->data[LOC1].Field1.linkdesc, op);
	nimGCvisit((void*)a->data[LOC1].Field2, op);
	}
}

N_NIMCALL(void, inittable_314732)(NI initialsize, Table312411* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq312414*) newSeq((&NTI312414), ((NI) (initialsize))));
}

N_NIMCALL(NI, len_315060)(Table312411 t) {
	NI result;
	result = 0;
	result = t.counter;
	return result;
}

static N_INLINE(NI, rawget_314294)(Table312411 t, Tindexentry312398* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_312443(key);
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
			LOC7 = isfilled_156211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = HEX3DHEX3D_314309((&t.data->data[h].Field1), key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, rawgetknownhc_315163)(Table312411 t, Tindexentry312398* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_156211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = HEX3DHEX3D_314309((&t.data->data[h].Field1), key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_315198)(Table312411* t, Keyvaluepairseq312414** data, Tindexentry312398* key, TY314708* val, NI hc, NI h) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1.keyword; (*data)->data[h].Field1.keyword = copyStringRC1((*key).keyword);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = (*data)->data[h].Field1.link; (*data)->data[h].Field1.link = copyStringRC1((*key).link);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = (*data)->data[h].Field1.linktitle; (*data)->data[h].Field1.linktitle = copyStringRC1((*key).linktitle);
	if (LOC3) nimGCunrefNoCycle(LOC3);
	LOC4 = 0;
	LOC4 = (*data)->data[h].Field1.linkdesc; (*data)->data[h].Field1.linkdesc = copyStringRC1((*key).linkdesc);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	genericSeqAssign((&(*data)->data[h].Field2), val, (&NTI314708));
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_315109)(Table312411* t) {
	Keyvaluepairseq312414* n;
	Keyvaluepairseq312414* LOC1;
	n = 0;
	n = (Keyvaluepairseq312414*) newSeq((&NTI312414), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_315161;
		NI HEX3Atmp_315224;
		NI res_315227;
		i_315161 = 0;
		HEX3Atmp_315224 = 0;
		HEX3Atmp_315224 = (n ? (n->Sup.len-1) : -1);
		res_315227 = ((NI) 0);
		{
			while (1) {
				if (!(res_315227 <= HEX3Atmp_315224)) goto LA4;
				i_315161 = res_315227;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_156211(n->data[i_315161].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_315163((*t), (&n->data[i_315161].Field1), n->data[i_315161].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_315198(t, (&(*t).data), (&n->data[i_315161].Field1), n->data[i_315161].Field2, n->data[i_315161].Field0, j);
				}
				LA8: ;
				res_315227 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_315072)(Table312411* t, Tindexentry312398* key, TY314708* val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_314294((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		genericSeqAssign((&(*t).data->data[index].Field2), val, (&NTI314708));
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_156313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_315109(t);
			index = rawgetknownhc_315163((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_315198(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(TY314708*, HEX5BHEX5D_314282)(Table312411 t, Tindexentry312398* key) {
	TY314708* result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_314294(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		genericSeqAssign((&result), t.data->data[index].Field2, (&NTI314708));
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
NTI163382.size = sizeof(Keyvaluepair163382);
NTI163382.kind = 18;
NTI163382.base = 0;
NTI163382.flags = 2;
TMP128[0] = &TMP55[1];
TMP55[1].kind = 1;
TMP55[1].offset = offsetof(Keyvaluepair163382, Field0);
TMP55[1].typ = (&NTI130021);
TMP55[1].name = "Field0";
TMP128[1] = &TMP55[2];
TMP55[2].kind = 1;
TMP55[2].offset = offsetof(Keyvaluepair163382, Field1);
TMP55[2].typ = (&NTI149);
TMP55[2].name = "Field1";
TMP128[2] = &TMP55[3];
TMP55[3].kind = 1;
TMP55[3].offset = offsetof(Keyvaluepair163382, Field2);
TMP55[3].typ = (&NTI114);
TMP55[3].name = "Field2";
TMP55[0].len = 3; TMP55[0].kind = 2; TMP55[0].sons = &TMP128[0];
NTI163382.node = &TMP55[0];
NTI163379.size = sizeof(Keyvaluepairseq163379*);
NTI163379.kind = 24;
NTI163379.base = (&NTI163382);
NTI163379.flags = 2;
NTI163379.marker = TMP129;
NTI163376.size = sizeof(Table163376);
NTI163376.kind = 18;
NTI163376.base = 0;
NTI163376.flags = 2;
TMP132[0] = &TMP55[5];
TMP55[5].kind = 1;
TMP55[5].offset = offsetof(Table163376, data);
TMP55[5].typ = (&NTI163379);
TMP55[5].name = "data";
TMP132[1] = &TMP55[6];
TMP55[6].kind = 1;
TMP55[6].offset = offsetof(Table163376, counter);
TMP55[6].typ = (&NTI108);
TMP55[6].name = "counter";
TMP55[4].len = 2; TMP55[4].kind = 2; TMP55[4].sons = &TMP132[0];
NTI163376.node = &TMP55[4];
NTI311058.size = sizeof(Keyvaluepair311058);
NTI311058.kind = 18;
NTI311058.base = 0;
NTI311058.flags = 2;
TMP2431[0] = &TMP55[8];
TMP55[8].kind = 1;
TMP55[8].offset = offsetof(Keyvaluepair311058, Field0);
TMP55[8].typ = (&NTI130021);
TMP55[8].name = "Field0";
TMP2431[1] = &TMP55[9];
TMP55[9].kind = 1;
TMP55[9].offset = offsetof(Keyvaluepair311058, Field1);
TMP55[9].typ = (&NTI149);
TMP55[9].name = "Field1";
TMP2431[2] = &TMP55[10];
TMP55[10].kind = 1;
TMP55[10].offset = offsetof(Keyvaluepair311058, Field2);
TMP55[10].typ = (&NTI108);
TMP55[10].name = "Field2";
TMP55[7].len = 3; TMP55[7].kind = 2; TMP55[7].sons = &TMP2431[0];
NTI311058.node = &TMP55[7];
NTI311055.size = sizeof(Keyvaluepairseq311055*);
NTI311055.kind = 24;
NTI311055.base = (&NTI311058);
NTI311055.flags = 2;
NTI311055.marker = TMP2432;
NTI381656.size = sizeof(Keyvaluepair381656);
NTI381656.kind = 18;
NTI381656.base = 0;
NTI381656.flags = 2;
TMP2918[0] = &TMP55[12];
TMP55[12].kind = 1;
TMP55[12].offset = offsetof(Keyvaluepair381656, Field0);
TMP55[12].typ = (&NTI130021);
TMP55[12].name = "Field0";
TMP2918[1] = &TMP55[13];
TMP55[13].kind = 1;
TMP55[13].offset = offsetof(Keyvaluepair381656, Field1);
TMP55[13].typ = (&NTI5710);
TMP55[13].name = "Field1";
TMP2918[2] = &TMP55[14];
TMP55[14].kind = 1;
TMP55[14].offset = offsetof(Keyvaluepair381656, Field2);
TMP55[14].typ = (&NTI191805);
TMP55[14].name = "Field2";
TMP55[11].len = 3; TMP55[11].kind = 2; TMP55[11].sons = &TMP2918[0];
NTI381656.node = &TMP55[11];
NTI381653.size = sizeof(Keyvaluepairseq381653*);
NTI381653.kind = 24;
NTI381653.base = (&NTI381656);
NTI381653.flags = 2;
NTI381653.marker = TMP2919;
NTI311052.size = sizeof(Table311052);
NTI311052.kind = 18;
NTI311052.base = 0;
NTI311052.flags = 2;
TMP4766[0] = &TMP55[16];
TMP55[16].kind = 1;
TMP55[16].offset = offsetof(Table311052, data);
TMP55[16].typ = (&NTI311055);
TMP55[16].name = "data";
TMP4766[1] = &TMP55[17];
TMP55[17].kind = 1;
TMP55[17].offset = offsetof(Table311052, counter);
TMP55[17].typ = (&NTI108);
TMP55[17].name = "counter";
TMP55[15].len = 2; TMP55[15].kind = 2; TMP55[15].sons = &TMP4766[0];
NTI311052.node = &TMP55[15];
NTI312417.size = sizeof(Keyvaluepair312417);
NTI312417.kind = 18;
NTI312417.base = 0;
NTI312417.flags = 2;
TMP4916[0] = &TMP55[19];
TMP55[19].kind = 1;
TMP55[19].offset = offsetof(Keyvaluepair312417, Field0);
TMP55[19].typ = (&NTI130021);
TMP55[19].name = "Field0";
TMP4916[1] = &TMP55[20];
TMP55[20].kind = 1;
TMP55[20].offset = offsetof(Keyvaluepair312417, Field1);
TMP55[20].typ = (&NTI312398);
TMP55[20].name = "Field1";
TMP4916[2] = &TMP55[21];
TMP55[21].kind = 1;
TMP55[21].offset = offsetof(Keyvaluepair312417, Field2);
TMP55[21].typ = (&NTI314708);
TMP55[21].name = "Field2";
TMP55[18].len = 3; TMP55[18].kind = 2; TMP55[18].sons = &TMP4916[0];
NTI312417.node = &TMP55[18];
NTI312414.size = sizeof(Keyvaluepairseq312414*);
NTI312414.kind = 24;
NTI312414.base = (&NTI312417);
NTI312414.flags = 2;
NTI312414.marker = TMP4919;
}

