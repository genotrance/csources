/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tsym191843 Tsym191843;
typedef struct Tgen507016 Tgen507016;
typedef struct TNimObject TNimObject;
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
typedef struct Tnode191813 Tnode191813;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tloc191827 Tloc191827;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY191933 TY191933;
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
struct  Tgen507016  {
  Tpasscontext241005 Sup;
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
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef Ropeobj161009* TY491053[2];
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
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
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
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
N_NIMCALL(void, TMP4957)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
N_NIMCALL(NimStringDesc*, getmodulename_251018)(Tnode191813* n);
N_NIMCALL(void, adddependencyaux_507028)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, addf_162635)(Ropeobj161009** c, NimStringDesc* frmt, Ropeobj161009** args, NI argsLen0);
N_NIMCALL(Ropeobj161009*, rope_161320)(NimStringDesc* s);
N_NIMCALL(Tnode191813*, adddotdependency_507043)(Tpasscontext241005* c, Tnode191813* n);
N_NIMCALL(void, writerope_162105)(Ropeobj161009* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(Ropeobj161009*, HEX25_162235)(NimStringDesc* frmt, Ropeobj161009** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
STRING_LITERAL(TMP4958, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP4959, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP4960, "", 0);
STRING_LITERAL(TMP4961, "dot", 3);
Ropeobj161009* gdotgraph_507023;
extern TNimType NTI241005; /* TPassContext */
TNimType NTI507016; /* TGen */
extern TNimType NTI191811; /* PSym */
TNimType NTI507018; /* PGen */
extern Tgcheap48016 gch_48044;
N_NIMCALL(void, TMP4957)(void* p, NI op) {
	Tgen507016* a;
	a = (Tgen507016*)p;
	nimGCvisit((void*)(*a).module, op);
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

N_NIMCALL(Tpasscontext241005*, myopen_507135)(Tsym191843* module) {
	Tpasscontext241005* result;
	Tgen507016* g;
	result = 0;
	g = 0;
	g = (Tgen507016*) newObj((&NTI507018), sizeof(Tgen507016));
	(*g).Sup.Sup.m_type = (&NTI507016);
	asgnRefNoCycle((void**) (&(*g).module), module);
	result = &g->Sup;
	return result;
}

N_NIMCALL(void, adddependencyaux_507028)(NimStringDesc* importing, NimStringDesc* imported) {
	TY491053 LOC1;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = rope_161320(importing);
	LOC1[1] = rope_161320(imported);
	addf_162635(&gdotgraph_507023, ((NimStringDesc*) &TMP4958), LOC1, 2);
}

N_NIMCALL(Tnode191813*, adddotdependency_507043)(Tpasscontext241005* c, Tnode191813* n) {
	Tnode191813* result;
	Tgen507016* g;
	result = 0;
	result = n;
	g = ((Tgen507016*) (c));
	switch ((*n).kind) {
	case ((NU8) 116):
	{
		{
			NI i_507061;
			NI HEX3Atmp_507083;
			NI LOC3;
			NI res_507086;
			i_507061 = 0;
			HEX3Atmp_507083 = 0;
			LOC3 = 0;
			LOC3 = sonslen_194403(n);
			HEX3Atmp_507083 = (NI)(LOC3 - ((NI) 1));
			res_507086 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* imported;
					if (!(res_507086 <= HEX3Atmp_507083)) goto LA5;
					i_507061 = res_507086;
					imported = getmodulename_251018((*n).kindU.S6.sons->data[i_507061]);
					adddependencyaux_507028((*(*(*g).module).name).s, imported);
					res_507086 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 120):
	case ((NU8) 117):
	{
		NimStringDesc* imported;
		imported = getmodulename_251018((*n).kindU.S6.sons->data[((NI) 0)]);
		adddependencyaux_507028((*(*(*g).module).name).s, imported);
	}
	break;
	case ((NU8) 115):
	case ((NU8) 112):
	case ((NU8) 126):
	case ((NU8) 127):
	{
		{
			NI i_507080;
			NI HEX3Atmp_507091;
			NI LOC9;
			NI res_507094;
			i_507080 = 0;
			HEX3Atmp_507091 = 0;
			LOC9 = 0;
			LOC9 = sonslen_194403(n);
			HEX3Atmp_507091 = (NI)(LOC9 - ((NI) 1));
			res_507094 = ((NI) 0);
			{
				while (1) {
					Tnode191813* LOC12;
					if (!(res_507094 <= HEX3Atmp_507091)) goto LA11;
					i_507080 = res_507094;
					LOC12 = 0;
					LOC12 = adddotdependency_507043(c, (*n).kindU.S6.sons->data[i_507080]);
					res_507094 += ((NI) 1);
				} LA11: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(void, generatedot_507009)(NimStringDesc* project) {
	TY491053 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	Ropeobj161009* LOC4;
	NimStringDesc* LOC5;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP4960));
	LOC1[0] = rope_161320(LOC3);
	LOC1[1] = gdotgraph_507023;
	LOC4 = 0;
	LOC4 = HEX25_162235(((NimStringDesc*) &TMP4959), LOC1, 2);
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP4961));
	writerope_162105(LOC4, LOC5, NIM_FALSE);
}
NIM_EXTERNC N_NOINLINE(void, compiler_dependsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_dependsDatInit)(void) {
static TNimNode TMP1067[1];
NTI507016.size = sizeof(Tgen507016);
NTI507016.kind = 17;
NTI507016.base = (&NTI241005);
TMP1067[0].kind = 1;
TMP1067[0].offset = offsetof(Tgen507016, module);
TMP1067[0].typ = (&NTI191811);
TMP1067[0].name = "module";
NTI507016.node = &TMP1067[0];
NTI507018.size = sizeof(Tgen507016*);
NTI507018.kind = 22;
NTI507018.base = (&NTI507016);
NTI507018.marker = TMP4957;
}
