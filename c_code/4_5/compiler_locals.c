/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode191813 Tnode191813;
typedef struct Tcontext244023 Tcontext244023;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tsym191843 Tsym191843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
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
typedef struct Tscope191837 Tscope191837;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tproccon244011 Tproccon244011;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tctx243048 Tctx243048;
typedef struct TY244141 TY244141;
typedef struct Ttabiter199119 Ttabiter199119;
typedef struct TY191944 TY191944;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Tidpair191857 Tidpair191857;
typedef struct TY243253 TY243253;
typedef struct TY164040 TY164040;
typedef struct PprocHEX3Aobjecttype243232 PprocHEX3Aobjecttype243232;
typedef struct TY243272 TY243272;
typedef struct Tinstantiationpair244013 Tinstantiationpair244013;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct TY243233 TY243233;
typedef struct TY243239 TY243239;
typedef struct TY243273 TY243273;
typedef struct Vmargs243042 Vmargs243042;
typedef struct TY191933 TY191933;
typedef struct Tblock243030 Tblock243030;
typedef struct TY243213 TY243213;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode191813*, Transformation406013) (Tcontext244023* c, Tnode191813* n);
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
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
};
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
typedef N_NIMCALL_PTR(Tnode191813*, TY244072) (Tcontext244023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY244077) (Tcontext244023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY244085) (Tcontext244023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY244093) (Tcontext244023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY244098) (Tcontext244023* c, Tnode191813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode191813*, TY244106) (Tcontext244023* c, Tnode191813* n);
typedef N_NIMCALL_PTR(Tnode191813*, TY244111) (Tcontext244023* c, Tnode191813* n, Tnode191813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype191849*, TY244118) (Tcontext244023* c, Tnode191813* n, Ttype191849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode191813*, ClPrc) (Tcontext244023* c, Tidtable191861 pt, Tnode191813* n, void* ClEnv);
void* ClEnv;
} TY244124;
typedef struct {
N_NIMCALL_PTR(Tsym191843*, ClPrc) (Tcontext244023* c, Tsym191843* fn, Tidtable191861 pt, Tlineinfo163338 info, void* ClEnv);
void* ClEnv;
} TY244130;
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
typedef N_NIMCALL_PTR(Tsym191843*, TY244146) (Tcontext244023* c, Tsym191843* dc, Ttype191849* t, Tlineinfo163338 info, NU8 op);
struct  Tcontext244023  {
  Tpasscontext241005 Sup;
Tsym191843* module;
Tscope191837* currentscope;
Tscope191837* importtable;
Tscope191837* toplevelscope;
Tproccon244011* p;
Tsymseq191815* friendmodules;
NI instcounter;
Intset188056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq191815* converters;
Tsymseq191815* patterns;
Tlinkedlist130028 optionstack;
Tidtable191861 symmapping;
Tlinkedlist130028 libs;
TY244072 semconstexpr;
TY244077 semexpr;
TY244085 semtryexpr;
TY244093 semtryconstexpr;
TY244098 semoperand;
TY244106 semconstboolexpr;
TY244111 semoverloadedcall;
TY244118 semtypenode;
TY244124 seminferredlambda;
TY244130 semgenerateinstance;
Intset188056 includedfiles;
Tstrtable191817 userpragmas;
Tctx243048* evalcontext;
Intset188056 unknownidents;
TY244141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY244146 insttypeboundop;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Ttabiter199119  {
NI h;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Tproccon244011  {
Tsym191843* owner;
Tsym191843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon244011* next;
NIM_BOOL wasforwarded;
Tnode191813* bracketexpr;
};
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27220 bits;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tidpair191857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Tctx243048  {
  Tpasscontext241005 Sup;
TY243253* code;
TY164040* debug;
Tnode191813* globals;
Tnode191813* constants;
Ttypeseq191845* types;
Tnode191813* currentexceptiona;
Tnode191813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype243232* prc;
Tsym191843* module;
Tnode191813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo163338 comesfromheuristic;
TY243272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair244013  {
Tsym191843* genericsym;
Tinstantiation191833* inst;
};
struct  Tlib191831  {
  Tlistentry130022 Sup;
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
struct TY243239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY243239 TY243236[256];
struct  PprocHEX3Aobjecttype243232  {
TY243233* blocks;
Tsym191843* sym;
TY243236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs243042* args, void* ClEnv);
void* ClEnv;
} Vmcallback243044;
struct TY243273 {
NimStringDesc* Field0;
Vmcallback243044 Field1;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tblock243030  {
Tsym191843* label;
TY243213* fixups;
};
struct  Vmargs243042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode191813* currentexception;
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct TY244141 {
  TGenericSeq Sup;
  Tinstantiationpair244013 data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct TY243253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY164040 {
  TGenericSeq Sup;
  Tlineinfo163338 data[SEQ_DECL_SIZE];
};
struct TY243272 {
  TGenericSeq Sup;
  TY243273 data[SEQ_DECL_SIZE];
};
struct TY243233 {
  TGenericSeq Sup;
  Tblock243030 data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY243213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registerplugin_406124)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation406013 t);
N_NIMCALL(Tnode191813*, semlocals_407020)(Tcontext244023* c, Tnode191813* n);
N_NIMCALL(Ttype191849*, newtypes_244219)(NU8 kind, Tcontext244023* c);
N_NIMCALL(Tnode191813*, newnodeit_193807)(NU8 kind, Tlineinfo163338 info, Ttype191849* typ);
N_NIMCALL(Tnode191813*, newnodei_193351)(NU8 kind, Tlineinfo163338 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(Tsym191843*, inittabiter_199124)(Ttabiter199119* ti, Tstrtable191817 tab);
N_NIMCALL(Ttype191849*, skiptypes_195167)(Ttype191849* t, NU64 kinds);
N_NIMCALL(Tsym191843*, newsym_192656)(NU8 symkind, Tident167021* name, Tsym191843* owner, Tlineinfo163338 info);
N_NIMCALL(Tsym191843*, getcurrowner_244256)(void);
N_NIMCALL(void, addson_193819)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Tnode191813*, newsymnode_193325)(Tsym191843* sym);
N_NIMCALL(void, addsonskipintlit_238729)(Ttype191849* father, Ttype191849* son);
N_NIMCALL(Tnode191813*, newsymnode_193338)(Tsym191843* sym, Tlineinfo163338 info);
static N_INLINE(Tnode191813*, newderef_357024)(Tnode191813* n);
N_NIMCALL(void, add_192164)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Tsym191843*, nextiter_199132)(Ttabiter199119* ti, Tstrtable191817 tab);
STRING_LITERAL(TMP961, "stdlib", 6);
STRING_LITERAL(TMP962, "system", 6);
STRING_LITERAL(TMP963, "locals", 6);
extern Tgcheap48016 gch_48044;

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

static N_INLINE(Tnode191813*, newderef_357024)(Tnode191813* n) {
	Tnode191813* result;
	result = 0;
	result = newnodeit_193807(((NU8) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	addson_193819(result, n);
	return result;
}

N_NIMCALL(Tnode191813*, semlocals_407020)(Tcontext244023* c, Tnode191813* n) {
	Tnode191813* result;
	NI counter;
	Ttype191849* tupletype;
	result = 0;
	counter = ((NI) 0);
	tupletype = newtypes_244219(((NU8) 18), c);
	result = newnodeit_193807(((NU8) 37), (*n).info, tupletype);
	asgnRefNoCycle((void**) (&(*tupletype).n), newnodei_193351(((NU8) 138), (*n).info));
	{
		Tscope191837* scope_407027;
		Tscope191837* HEX3Atmp_407100;
		Tscope191837* current_407103;
		scope_407027 = 0;
		HEX3Atmp_407100 = 0;
		HEX3Atmp_407100 = (*c).currentscope;
		current_407103 = HEX3Atmp_407100;
		{
			while (1) {
				if (!!((current_407103 == NIM_NIL))) goto LA3;
				scope_407027 = current_407103;
				{
					if (!(scope_407027 == (*c).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym191843* it_407039;
					Tstrtable191817 HEX3Atmp_407094;
					Ttabiter199119 it_407097;
					Tsym191843* s_407099;
					it_407039 = 0;
					memset((void*)(&HEX3Atmp_407094), 0, sizeof(HEX3Atmp_407094));
					HEX3Atmp_407094.counter = (*scope_407027).symbols.counter;
					HEX3Atmp_407094.data = (*scope_407027).symbols.data;
					memset((void*)(&it_407097), 0, sizeof(it_407097));
					s_407099 = inittabiter_199124((&it_407097), HEX3Atmp_407094);
					{
						while (1) {
							if (!!((s_407099 == NIM_NIL))) goto LA10;
							it_407039 = s_407099;
							{
								NIM_BOOL LOC13;
								Ttype191849* LOC15;
								Tsym191843* field;
								Tsym191843* LOC18;
								Tnode191813* LOC19;
								Tnode191813* a;
								LOC13 = 0;
								LOC13 = ((2099976 &(1<<(((*it_407039).kind)&31)))!=0);
								if (!(LOC13)) goto LA14;
								LOC15 = 0;
								LOC15 = skiptypes_195167((*it_407039).typ, 8390656);
								LOC13 = !(((*LOC15).kind == ((NU8) 48) || (*LOC15).kind == ((NU8) 27) || (*LOC15).kind == ((NU8) 8) || (*LOC15).kind == ((NU8) 59) || (*LOC15).kind == ((NU8) 6) || (*LOC15).kind == ((NU8) 7) || (*LOC15).kind == ((NU8) 3)));
								LA14: ;
								if (!LOC13) goto LA16;
								LOC18 = 0;
								LOC18 = getcurrowner_244256();
								field = newsym_192656(((NU8) 19), (*it_407039).name, LOC18, (*n).info);
								asgnRefNoCycle((void**) (&(*field).typ), skiptypes_195167((*it_407039).typ, 8390656));
								(*field).position = counter;
								counter += ((NI) 1);
								LOC19 = 0;
								LOC19 = newsymnode_193325(field);
								addson_193819((*tupletype).n, LOC19);
								addsonskipintlit_238729(tupletype, (*field).typ);
								a = newsymnode_193338(it_407039, (*result).info);
								{
									Ttype191849* LOC22;
									LOC22 = 0;
									LOC22 = skiptypes_195167((*it_407039).typ, 2048);
									if (!((*LOC22).kind == ((NU8) 23))) goto LA23;
									a = newderef_357024(a);
								}
								LA23: ;
								add_192164(result, a);
							}
							LA16: ;
							s_407099 = nextiter_199132((&it_407097), HEX3Atmp_407094);
						} LA10: ;
					}
				}
				current_407103 = (*current_407103).parent;
			} LA3: ;
		}
	} LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit)(void) {
	registerplugin_406124(((NimStringDesc*) &TMP961), ((NimStringDesc*) &TMP962), ((NimStringDesc*) &TMP963), semlocals_407020);
}

NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit)(void) {
}

