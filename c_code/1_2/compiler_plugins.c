/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct PluginHEX3Aobjecttype407019 PluginHEX3Aobjecttype407019;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode192813 Tnode192813;
typedef struct Tcontext245023 Tcontext245023;
typedef struct Tident168021 Tident168021;
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
typedef struct Tsym192843 Tsym192843;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct Tscope192837 Tscope192837;
typedef struct TY192944 TY192944;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tsymseq192815 Tsymseq192815;
typedef struct Ttype192849 Ttype192849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tloc192827 Tloc192827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib192831 Tlib192831;
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Tproccon245011 Tproccon245011;
typedef struct Intset189056 Intset189056;
typedef struct Ttrunk189052 Ttrunk189052;
typedef struct Ttrunkseq189054 Ttrunkseq189054;
typedef struct Tlinkedlist132028 Tlinkedlist132028;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct Tidtable192861 Tidtable192861;
typedef struct Tidpairseq192859 Tidpairseq192859;
typedef struct Tctx244048 Tctx244048;
typedef struct TY245141 TY245141;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct Tidpair192857 Tidpair192857;
typedef struct TY244253 TY244253;
typedef struct TY165037 TY165037;
typedef struct PprocHEX3Aobjecttype244232 PprocHEX3Aobjecttype244232;
typedef struct TY244272 TY244272;
typedef struct Tinstantiationpair245013 Tinstantiationpair245013;
typedef struct TY192933 TY192933;
typedef struct TY244233 TY244233;
typedef struct TY244239 TY244239;
typedef struct TY244273 TY244273;
typedef struct Vmargs244042 Vmargs244042;
typedef struct Tblock244030 Tblock244030;
typedef struct TY244213 TY244213;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode192813*, Transformation407013) (Tcontext245023* c, Tnode192813* n);
struct  PluginHEX3Aobjecttype407019  {
Tident168021* fn;
Tident168021* module;
Tident168021* package;
Transformation407013 t;
PluginHEX3Aobjecttype407019* next;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc192827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype192849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
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
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset189056  {
NI counter;
NI max;
Ttrunk189052* head;
Ttrunkseq189054* data;
};
struct  Tlinkedlist132028  {
Tlistentry132022* head;
Tlistentry132022* tail;
NI counter;
};
struct  Tidtable192861  {
NI counter;
Tidpairseq192859* data;
};
typedef N_NIMCALL_PTR(Tnode192813*, TY245072) (Tcontext245023* c, Tnode192813* n);
typedef N_NIMCALL_PTR(Tnode192813*, TY245077) (Tcontext245023* c, Tnode192813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode192813*, TY245085) (Tcontext245023* c, Tnode192813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode192813*, TY245093) (Tcontext245023* c, Tnode192813* n);
typedef N_NIMCALL_PTR(Tnode192813*, TY245098) (Tcontext245023* c, Tnode192813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode192813*, TY245106) (Tcontext245023* c, Tnode192813* n);
typedef N_NIMCALL_PTR(Tnode192813*, TY245111) (Tcontext245023* c, Tnode192813* n, Tnode192813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype192849*, TY245118) (Tcontext245023* c, Tnode192813* n, Ttype192849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode192813*, ClPrc) (Tcontext245023* c, Tidtable192861 pt, Tnode192813* n, void* ClEnv);
void* ClEnv;
} TY245124;
typedef struct {
N_NIMCALL_PTR(Tsym192843*, ClPrc) (Tcontext245023* c, Tsym192843* fn, Tidtable192861 pt, Tlineinfo164338 info, void* ClEnv);
void* ClEnv;
} TY245130;
typedef N_NIMCALL_PTR(Tsym192843*, TY245146) (Tcontext245023* c, Tsym192843* dc, Ttype192849* t, Tlineinfo164338 info, NU8 op);
struct  Tcontext245023  {
  Tpasscontext242005 Sup;
Tsym192843* module;
Tscope192837* currentscope;
Tscope192837* importtable;
Tscope192837* toplevelscope;
Tproccon245011* p;
Tsymseq192815* friendmodules;
NI instcounter;
Intset189056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq192815* converters;
Tsymseq192815* patterns;
Tlinkedlist132028 optionstack;
Tidtable192861 symmapping;
Tlinkedlist132028 libs;
TY245072 semconstexpr;
TY245077 semexpr;
TY245085 semtryexpr;
TY245093 semtryconstexpr;
TY245098 semoperand;
TY245106 semconstboolexpr;
TY245111 semoverloadedcall;
TY245118 semtypenode;
TY245124 seminferredlambda;
TY245130 semgenerateinstance;
Intset189056 includedfiles;
Tstrtable192817 userpragmas;
Tctx244048* evalcontext;
Intset189056 unknownidents;
TY245141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY245146 insttypeboundop;
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
struct  Tscope192837  {
NI depthlevel;
Tstrtable192817 symbols;
Tnodeseq192807* usingsyms;
Tscope192837* parent;
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
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry132022  {
  TNimObject Sup;
Tlistentry132022* prev;
Tlistentry132022* next;
};
struct  Tlib192831  {
  Tlistentry132022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode192813* path;
};
struct  Tproccon245011  {
Tsym192843* owner;
Tsym192843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon245011* next;
NIM_BOOL wasforwarded;
Tnode192813* bracketexpr;
};
struct  Ttrunk189052  {
Ttrunk189052* next;
NI key;
TY27220 bits;
};
struct  Tidpair192857  {
Tidobj168015* key;
TNimObject* val;
};
struct  Tctx244048  {
  Tpasscontext242005 Sup;
TY244253* code;
TY165037* debug;
Tnode192813* globals;
Tnode192813* constants;
Ttypeseq192845* types;
Tnode192813* currentexceptiona;
Tnode192813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype244232* prc;
Tsym192843* module;
Tnode192813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo164338 comesfromheuristic;
TY244272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair245013  {
Tsym192843* genericsym;
Tinstantiation192833* inst;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct  Tinstantiation192833  {
Tsym192843* sym;
Ttypeseq192845* concretetypes;
TY192933* usedby;
};
struct TY244239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY244239 TY244236[256];
struct  PprocHEX3Aobjecttype244232  {
TY244233* blocks;
Tsym192843* sym;
TY244236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs244042* args, void* ClEnv);
void* ClEnv;
} Vmcallback244044;
struct TY244273 {
NimStringDesc* Field0;
Vmcallback244044 Field1;
};
struct  Tblock244030  {
Tsym192843* label;
TY244213* fixups;
};
struct  Vmargs244042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode192813* currentexception;
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
struct Tnodeseq192807 {
  TGenericSeq Sup;
  Tnode192813* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq189054 {
  TGenericSeq Sup;
  Ttrunk189052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq192859 {
  TGenericSeq Sup;
  Tidpair192857 data[SEQ_DECL_SIZE];
};
struct TY245141 {
  TGenericSeq Sup;
  Tinstantiationpair245013 data[SEQ_DECL_SIZE];
};
struct TY244253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY165037 {
  TGenericSeq Sup;
  Tlineinfo164338 data[SEQ_DECL_SIZE];
};
struct TY244272 {
  TGenericSeq Sup;
  TY244273 data[SEQ_DECL_SIZE];
};
struct TY192933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY244233 {
  TGenericSeq Sup;
  Tblock244030 data[SEQ_DECL_SIZE];
};
struct TY244213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP962)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident168021*, getident_168463)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46146* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46146* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46146* c);
N_NOINLINE(void, incl_46865)(Tcellset46158* s, Tcell46146* cell);
static N_INLINE(void, decref_51604)(Tcell46146* c);
N_NIMCALL(NIM_BOOL, pluginmatches_407029)(PluginHEX3Aobjecttype407019* p, Tsym192843* s);
PluginHEX3Aobjecttype407019* head_407089;
TNimType NTI407019; /* Plugin:ObjectType */
extern TNimType NTI168019; /* PIdent */
TNimType NTI407013; /* Transformation */
TNimType NTI407015; /* Plugin */
extern Tgcheap48016 gch_48044;
N_NIMCALL(void, TMP962)(void* p, NI op) {
	PluginHEX3Aobjecttype407019* a;
	a = (PluginHEX3Aobjecttype407019*)p;
	nimGCvisit((void*)(*a).fn, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).package, op);
	nimGCvisit((void*)(*a).next, op);
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

N_NIMCALL(void, registerplugin_407124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation407013 t) {
	PluginHEX3Aobjecttype407019* oldhead;
	PluginHEX3Aobjecttype407019* LOC1;
	oldhead = head_407089;
	LOC1 = 0;
	LOC1 = (PluginHEX3Aobjecttype407019*) newObj((&NTI407015), sizeof(PluginHEX3Aobjecttype407019));
	asgnRefNoCycle((void**) (&(*LOC1).fn), getident_168463(fn));
	asgnRefNoCycle((void**) (&(*LOC1).module), getident_168463(module));
	asgnRefNoCycle((void**) (&(*LOC1).package), getident_168463(package));
	(*LOC1).t = t;
	asgnRef((void**) (&(*LOC1).next), oldhead);
	asgnRef((void**) (&head_407089), LOC1);
}

N_NIMCALL(NIM_BOOL, pluginmatches_407029)(PluginHEX3Aobjecttype407019* p, Tsym192843* s) {
	NIM_BOOL result;
	Tsym192843* module;
	Tsym192843* package;
{	result = 0;
	{
		if (!!(((*(*s).name).Sup.id == (*(*p).fn).Sup.id))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	module = (*s).owner;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = (module == NIM_NIL);
		if (LOC8) goto LA9;
		LOC8 = !(((*module).kind == ((NU8) 6)));
		LA9: ;
		LOC7 = LOC8;
		if (LOC7) goto LA10;
		LOC7 = !(((*(*module).name).Sup.id == (*(*p).module).Sup.id));
		LA10: ;
		if (!LOC7) goto LA11;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA11: ;
	package = (*module).owner;
	{
		NIM_BOOL LOC15;
		NIM_BOOL LOC16;
		LOC15 = 0;
		LOC16 = 0;
		LOC16 = (package == NIM_NIL);
		if (LOC16) goto LA17;
		LOC16 = !(((*package).kind == ((NU8) 24)));
		LA17: ;
		LOC15 = LOC16;
		if (LOC15) goto LA18;
		LOC15 = !(((*(*package).name).Sup.id == (*(*p).package).Sup.id));
		LA18: ;
		if (!LOC15) goto LA19;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA19: ;
	result = NIM_TRUE;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Transformation407013, getplugin_407094)(Tsym192843* fn) {
	Transformation407013 result;
	PluginHEX3Aobjecttype407019* it;
{	result = 0;
	it = head_407089;
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = pluginmatches_407029(it, fn);
				if (!LOC5) goto LA6;
				result = (*it).t;
				goto BeforeRet;
			}
			LA6: ;
			it = (*it).next;
		} LA2: ;
	}
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_pluginsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_pluginsDatInit)(void) {
static TNimNode* TMP961[5];
static TNimNode TMP955[6];
NTI407019.size = sizeof(PluginHEX3Aobjecttype407019);
NTI407019.kind = 18;
NTI407019.base = 0;
TMP961[0] = &TMP955[1];
TMP955[1].kind = 1;
TMP955[1].offset = offsetof(PluginHEX3Aobjecttype407019, fn);
TMP955[1].typ = (&NTI168019);
TMP955[1].name = "fn";
TMP961[1] = &TMP955[2];
TMP955[2].kind = 1;
TMP955[2].offset = offsetof(PluginHEX3Aobjecttype407019, module);
TMP955[2].typ = (&NTI168019);
TMP955[2].name = "module";
TMP961[2] = &TMP955[3];
TMP955[3].kind = 1;
TMP955[3].offset = offsetof(PluginHEX3Aobjecttype407019, package);
TMP955[3].typ = (&NTI168019);
TMP955[3].name = "package";
TMP961[3] = &TMP955[4];
NTI407013.size = sizeof(Transformation407013);
NTI407013.kind = 25;
NTI407013.base = 0;
NTI407013.flags = 3;
TMP955[4].kind = 1;
TMP955[4].offset = offsetof(PluginHEX3Aobjecttype407019, t);
TMP955[4].typ = (&NTI407013);
TMP955[4].name = "t";
TMP961[4] = &TMP955[5];
TMP955[5].kind = 1;
TMP955[5].offset = offsetof(PluginHEX3Aobjecttype407019, next);
TMP955[5].typ = (&NTI407015);
TMP955[5].name = "next";
TMP955[0].len = 5; TMP955[0].kind = 2; TMP955[0].sons = &TMP961[0];
NTI407019.node = &TMP955[0];
NTI407015.size = sizeof(PluginHEX3Aobjecttype407019*);
NTI407015.kind = 22;
NTI407015.base = (&NTI407019);
NTI407015.marker = TMP962;
}

