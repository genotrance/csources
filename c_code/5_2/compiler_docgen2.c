/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>
typedef struct Tpasscontext240005 Tpasscontext240005;
typedef struct Tsym190843 Tsym190843;
typedef struct Tgen507010 Tgen507010;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tdocumentor339007 Tdocumentor339007;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct Tidobj166015 Tidobj166015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Ttype190849 Ttype190849;
typedef struct Tident166021 Tident166021;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tnode190813 Tnode190813;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
typedef struct Trstgenerator310016 Trstgenerator310016;
typedef struct TY310034 TY310034;
typedef struct Table310052 Table310052;
typedef struct Keyvaluepairseq310055 Keyvaluepairseq310055;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Ttocentry310012 Ttocentry310012;
typedef struct Trstnode295011 Trstnode295011;
typedef struct Keyvaluepair310058 Keyvaluepair310058;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
typedef struct TY190933 TY190933;
typedef struct Trstnodeseq295009 Trstnodeseq295009;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext240005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen507010  {
  Tpasscontext240005 Sup;
Tdocumentor339007* doc;
Tsym190843* module;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj160009* r;
Ropeobj160009* heaproot;
};
struct  Tsym190843  {
  Tidobj166015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident166021* name;
Tlineinfo162338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
typedef N_NIMCALL_PTR(NimStringDesc*, Tfindfilehandler296023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, Tmsghandler296021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY310042[5];
struct  Table310052  {
Keyvaluepairseq310055* data;
NI counter;
};
struct  Trstgenerator310016  {
  TNimObject Sup;
NU8 target;
Stringtableobj133012* config;
NI splitafter;
TY310034* tocpart;
NIM_BOOL hastoc;
NimStringDesc* theindex;
NU8 options;
Tfindfilehandler296023 findfile;
Tmsghandler296021 msghandler;
NimStringDesc* filename;
TY310042 meta;
NimStringDesc* currentsection;
Table310052 seenindexterms;
};
typedef Ropeobj160009* Tsections339005[26];
struct  Tdocumentor339007  {
  Trstgenerator310016 Sup;
Ropeobj160009* moddesc;
NI id;
Tsections339005 toc;
Tsections339005 section;
NimStringDesc* indexvalfilename;
NimStringDesc* analytics;
Stringtableobj133012* seensymbols;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15609 raiseAction;
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
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Ttype190849  {
  Tidobj166015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo162338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident166021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tlib190831  {
  Tlistentry129022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj160009* name;
Tnode190813* path;
};
struct  Ttocentry310012  {
Trstnode295011* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct Keyvaluepair310058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct Keyvaluepair133008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Trstnode295011  {
NU8 kind;
NimStringDesc* text;
NI level;
Trstnodeseq295009* sons;
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY310034 {
  TGenericSeq Sup;
  Ttocentry310012 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq310055 {
  TGenericSeq Sup;
  Keyvaluepair310058 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  Keyvaluepair133008 data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Trstnodeseq295009 {
  TGenericSeq Sup;
  Trstnode295011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4887)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(Tdocumentor339007*, newdocumentor_339065)(NimStringDesc* filename, Stringtableobj133012* config);
N_NIMCALL(NimStringDesc*, tofilename_163271)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46147* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46147* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46147* c);
N_NOINLINE(void, incl_46865)(Tcellset46159* s, Tcell46147* cell);
static N_INLINE(void, decref_51604)(Tcell46147* c);
N_NIMCALL(void, generatedoc_340258)(Tdocumentor339007* d, Tnode190813* n);
N_NIMCALL(void, writeoutput_342349)(Tdocumentor339007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_342330)(Tdocumentor339007* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP4888, "html", 4);
extern TNimType NTI240005; /* TPassContext */
TNimType NTI507010; /* TGen */
extern TNimType NTI339009; /* PDoc */
extern TNimType NTI190811; /* PSym */
TNimType NTI507012; /* PGen */
extern Tgcheap48016 gch_48044;
extern Stringtableobj133012* gconfigvars_153231;
extern NIM_BOOL gwholeproject_153139;
extern TSafePoint* exchandler_17043;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17045;
N_NIMCALL(void, TMP4887)(void* p, NI op) {
	Tgen507010* a;
	a = (Tgen507010*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
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

static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46147* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50423)(Tcell46147* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_46865((&gch_48044.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52022)(Tcell46147* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50423(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51604)(Tcell46147* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50423(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46147* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49646(src);
		incref_52022(LOC5);
	}
	LA3: ;
	{
		Tcell46147* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49646((*dest));
		decref_51604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(Tpasscontext240005*, myopen_507068)(Tsym190843* module) {
	Tpasscontext240005* result;
	Tgen507010* g;
	Tdocumentor339007* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (Tgen507010*) newObj((&NTI507012), sizeof(Tgen507010));
	(*g).Sup.Sup.m_type = (&NTI507010);
	asgnRefNoCycle((void**) (&(*g).module), module);
	LOC1 = 0;
	LOC1 = tofilename_163271(((NI32) ((*module).position)));
	d = newdocumentor_339065(LOC1, gconfigvars_153231);
	(*d).Sup.hastoc = NIM_TRUE;
	asgnRef((void**) (&(*g).doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(Tnode190813*, processnode_507056)(Tpasscontext240005* c, Tnode190813* n) {
	Tnode190813* result;
	Tgen507010* g;
	result = 0;
	result = n;
	g = ((Tgen507010*) (c));
	generatedoc_340258((*g).doc, n);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_17045;
	return result;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(Tnode190813*, close_507018)(Tpasscontext240005* p, Tnode190813* n) {
	Tnode190813* result;
	Tgen507010* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((Tgen507010*) (p));
	usewarning = !((((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP4889;
		LOC3 = 0;
		LOC3 = gwholeproject_153139;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_163271(((NI32) ((*(*g).module).position)));
		writeoutput_342349((*g).doc, LOC7, ((NimStringDesc*) &TMP4888), usewarning);
		pushSafePoint(&TMP4889);
		TMP4889.status = _setjmp(TMP4889.context);
		if (TMP4889.status == 0) {
			generateindex_342330((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
				TMP4889.status = 0;
				popCurrentException();
			}
		}
		if (TMP4889.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_507106)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit)(void) {
static TNimNode* TMP4886[2];
static TNimNode TMP1067[3];
NTI507010.size = sizeof(Tgen507010);
NTI507010.kind = 17;
NTI507010.base = (&NTI240005);
TMP4886[0] = &TMP1067[1];
TMP1067[1].kind = 1;
TMP1067[1].offset = offsetof(Tgen507010, doc);
TMP1067[1].typ = (&NTI339009);
TMP1067[1].name = "doc";
TMP4886[1] = &TMP1067[2];
TMP1067[2].kind = 1;
TMP1067[2].offset = offsetof(Tgen507010, module);
TMP1067[2].typ = (&NTI190811);
TMP1067[2].name = "module";
TMP1067[0].len = 2; TMP1067[0].kind = 2; TMP1067[0].sons = &TMP4886[0];
NTI507010.node = &TMP1067[0];
NTI507012.size = sizeof(Tgen507010*);
NTI507012.kind = 22;
NTI507012.base = (&NTI507010);
NTI507012.marker = TMP4887;
}

