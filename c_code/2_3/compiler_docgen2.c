/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tsym191843 Tsym191843;
typedef struct Tgen508010 Tgen508010;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tdocumentor340007 Tdocumentor340007;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident167021 Tident167021;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tnode191813 Tnode191813;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct Trstgenerator311016 Trstgenerator311016;
typedef struct TY311034 TY311034;
typedef struct Table311052 Table311052;
typedef struct Keyvaluepairseq311055 Keyvaluepairseq311055;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Ttocentry311012 Ttocentry311012;
typedef struct Trstnode296011 Trstnode296011;
typedef struct Keyvaluepair311058 Keyvaluepair311058;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
typedef struct TY191933 TY191933;
typedef struct Trstnodeseq296009 Trstnodeseq296009;
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
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen508010  {
  Tpasscontext241005 Sup;
Tdocumentor340007* doc;
Tsym191843* module;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
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
typedef N_NIMCALL_PTR(NimStringDesc*, Tfindfilehandler297023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, Tmsghandler297021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY311042[5];
struct  Table311052  {
Keyvaluepairseq311055* data;
NI counter;
};
struct  Trstgenerator311016  {
  TNimObject Sup;
NU8 target;
Stringtableobj133012* config;
NI splitafter;
TY311034* tocpart;
NIM_BOOL hastoc;
NimStringDesc* theindex;
NU8 options;
Tfindfilehandler297023 findfile;
Tmsghandler297021 msghandler;
NimStringDesc* filename;
TY311042 meta;
NimStringDesc* currentsection;
Table311052 seenindexterms;
};
typedef Ropeobj161009* Tsections340005[26];
struct  Tdocumentor340007  {
  Trstgenerator311016 Sup;
Ropeobj161009* moddesc;
NI id;
Tsections340005 toc;
Tsections340005 section;
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
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
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
struct  Ttocentry311012  {
Trstnode296011* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct Keyvaluepair311058 {
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
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Trstnode296011  {
NU8 kind;
NimStringDesc* text;
NI level;
Trstnodeseq296009* sons;
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
struct TY311034 {
  TGenericSeq Sup;
  Ttocentry311012 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq311055 {
  TGenericSeq Sup;
  Keyvaluepair311058 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  Keyvaluepair133008 data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Trstnodeseq296009 {
  TGenericSeq Sup;
  Trstnode296011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4888)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(Tdocumentor340007*, newdocumentor_340065)(NimStringDesc* filename, Stringtableobj133012* config);
N_NIMCALL(NimStringDesc*, tofilename_164271)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46146* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46146* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46146* c);
N_NOINLINE(void, incl_46865)(Tcellset46158* s, Tcell46146* cell);
static N_INLINE(void, decref_51604)(Tcell46146* c);
N_NIMCALL(void, generatedoc_341258)(Tdocumentor340007* d, Tnode191813* n);
N_NIMCALL(void, writeoutput_343349)(Tdocumentor340007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_343330)(Tdocumentor340007* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP4889, "html", 4);
extern TNimType NTI241005; /* TPassContext */
TNimType NTI508010; /* TGen */
extern TNimType NTI340009; /* PDoc */
extern TNimType NTI191811; /* PSym */
TNimType NTI508012; /* PGen */
extern Tgcheap48016 gch_48044;
extern Stringtableobj133012* gconfigvars_154231;
extern NIM_BOOL gwholeproject_154139;
extern TSafePoint* exchandler_17043;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17045;
N_NIMCALL(void, TMP4888)(void* p, NI op) {
	Tgen508010* a;
	a = (Tgen508010*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
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

static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46146* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50423)(Tcell46146* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_46865((&gch_48044.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52022)(Tcell46146* c) {
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

static N_INLINE(void, decref_51604)(Tcell46146* c) {
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
		Tcell46146* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49646(src);
		incref_52022(LOC5);
	}
	LA3: ;
	{
		Tcell46146* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49646((*dest));
		decref_51604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(Tpasscontext241005*, myopen_508068)(Tsym191843* module) {
	Tpasscontext241005* result;
	Tgen508010* g;
	Tdocumentor340007* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (Tgen508010*) newObj((&NTI508012), sizeof(Tgen508010));
	(*g).Sup.Sup.m_type = (&NTI508010);
	asgnRefNoCycle((void**) (&(*g).module), module);
	LOC1 = 0;
	LOC1 = tofilename_164271(((NI32) ((*module).position)));
	d = newdocumentor_340065(LOC1, gconfigvars_154231);
	(*d).Sup.hastoc = NIM_TRUE;
	asgnRef((void**) (&(*g).doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(Tnode191813*, processnode_508056)(Tpasscontext241005* c, Tnode191813* n) {
	Tnode191813* result;
	Tgen508010* g;
	result = 0;
	result = n;
	g = ((Tgen508010*) (c));
	generatedoc_341258((*g).doc, n);
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

N_NIMCALL(Tnode191813*, close_508018)(Tpasscontext241005* p, Tnode191813* n) {
	Tnode191813* result;
	Tgen508010* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((Tgen508010*) (p));
	usewarning = !((((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP4890;
		LOC3 = 0;
		LOC3 = gwholeproject_154139;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_164271(((NI32) ((*(*g).module).position)));
		writeoutput_343349((*g).doc, LOC7, ((NimStringDesc*) &TMP4889), usewarning);
		pushSafePoint(&TMP4890);
		TMP4890.status = setjmp(TMP4890.context);
		if (TMP4890.status == 0) {
			generateindex_343330((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
				TMP4890.status = 0;
				popCurrentException();
			}
		}
		if (TMP4890.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_508106)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit)(void) {
static TNimNode* TMP4887[2];
static TNimNode TMP1069[3];
NTI508010.size = sizeof(Tgen508010);
NTI508010.kind = 17;
NTI508010.base = (&NTI241005);
TMP4887[0] = &TMP1069[1];
TMP1069[1].kind = 1;
TMP1069[1].offset = offsetof(Tgen508010, doc);
TMP1069[1].typ = (&NTI340009);
TMP1069[1].name = "doc";
TMP4887[1] = &TMP1069[2];
TMP1069[2].kind = 1;
TMP1069[2].offset = offsetof(Tgen508010, module);
TMP1069[2].typ = (&NTI191811);
TMP1069[2].name = "module";
TMP1069[0].len = 2; TMP1069[0].kind = 2; TMP1069[0].sons = &TMP4887[0];
NTI508010.node = &TMP1069[0];
NTI508012.size = sizeof(Tgen508010*);
NTI508012.kind = 22;
NTI508012.base = (&NTI508010);
NTI508012.marker = TMP4888;
}

