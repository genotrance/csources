/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Tcontext243023 Tcontext243023;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tsym190843 Tsym190843;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tident166021 Tident166021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
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
typedef struct Tpasscontext240005 Tpasscontext240005;
typedef struct Tproccon243011 Tproccon243011;
typedef struct Tlinkedlist129028 Tlinkedlist129028;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Tctx242048 Tctx242048;
typedef struct TY243141 TY243141;
typedef struct Ttabiter198119 Ttabiter198119;
typedef struct Tidentiter198141 Tidentiter198141;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Tidpair190857 Tidpair190857;
typedef struct TY242253 TY242253;
typedef struct TY163037 TY163037;
typedef struct PprocHEX3Aobjecttype242232 PprocHEX3Aobjecttype242232;
typedef struct TY242272 TY242272;
typedef struct Tinstantiationpair243013 Tinstantiationpair243013;
typedef struct TY190933 TY190933;
typedef struct TY242233 TY242233;
typedef struct TY242239 TY242239;
typedef struct TY242273 TY242273;
typedef struct Vmargs242042 Vmargs242042;
typedef struct Tblock242030 Tblock242030;
typedef struct TY242213 TY242213;
struct  Intset187056  {
NI counter;
NI max;
Ttrunk187052* head;
Ttrunkseq187054* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
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
typedef N_NIMCALL_PTR(Tsym190843*, TY240064) (Tsym190843* m, NI32 fileidx);
struct  Tpasscontext240005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlinkedlist129028  {
Tlistentry129022* head;
Tlistentry129022* tail;
NI counter;
};
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
typedef N_NIMCALL_PTR(Tnode190813*, TY243072) (Tcontext243023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY243077) (Tcontext243023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY243085) (Tcontext243023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY243093) (Tcontext243023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY243098) (Tcontext243023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY243106) (Tcontext243023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY243111) (Tcontext243023* c, Tnode190813* n, Tnode190813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype190849*, TY243118) (Tcontext243023* c, Tnode190813* n, Ttype190849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode190813*, ClPrc) (Tcontext243023* c, Tidtable190861 pt, Tnode190813* n, void* ClEnv);
void* ClEnv;
} TY243124;
typedef struct {
N_NIMCALL_PTR(Tsym190843*, ClPrc) (Tcontext243023* c, Tsym190843* fn, Tidtable190861 pt, Tlineinfo162338 info, void* ClEnv);
void* ClEnv;
} TY243130;
typedef N_NIMCALL_PTR(Tsym190843*, TY243146) (Tcontext243023* c, Tsym190843* dc, Ttype190849* t, Tlineinfo162338 info, NU8 op);
struct  Tcontext243023  {
  Tpasscontext240005 Sup;
Tsym190843* module;
Tscope190837* currentscope;
Tscope190837* importtable;
Tscope190837* toplevelscope;
Tproccon243011* p;
Tsymseq190815* friendmodules;
NI instcounter;
Intset187056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq190815* converters;
Tsymseq190815* patterns;
Tlinkedlist129028 optionstack;
Tidtable190861 symmapping;
Tlinkedlist129028 libs;
TY243072 semconstexpr;
TY243077 semexpr;
TY243085 semtryexpr;
TY243093 semtryconstexpr;
TY243098 semoperand;
TY243106 semconstboolexpr;
TY243111 semoverloadedcall;
TY243118 semtypenode;
TY243124 seminferredlambda;
TY243130 semgenerateinstance;
Intset187056 includedfiles;
Tstrtable190817 userpragmas;
Tctx242048* evalcontext;
Intset187056 unknownidents;
TY243141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY243146 insttypeboundop;
};
struct  Ttabiter198119  {
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
struct  Tidentiter198141  {
NI h;
Tident166021* name;
};
typedef NI TY27220[8];
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY27220 bits;
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
struct  Tproccon243011  {
Tsym190843* owner;
Tsym190843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon243011* next;
NIM_BOOL wasforwarded;
Tnode190813* bracketexpr;
};
struct  Tidpair190857  {
Tidobj166015* key;
TNimObject* val;
};
struct  Tctx242048  {
  Tpasscontext240005 Sup;
TY242253* code;
TY163037* debug;
Tnode190813* globals;
Tnode190813* constants;
Ttypeseq190845* types;
Tnode190813* currentexceptiona;
Tnode190813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype242232* prc;
Tsym190843* module;
Tnode190813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo162338 comesfromheuristic;
TY242272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair243013  {
Tsym190843* genericsym;
Tinstantiation190833* inst;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct TY242239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY242239 TY242236[256];
struct  PprocHEX3Aobjecttype242232  {
TY242233* blocks;
Tsym190843* sym;
TY242236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs242042* args, void* ClEnv);
void* ClEnv;
} Vmcallback242044;
struct TY242273 {
NimStringDesc* Field0;
Vmcallback242044 Field1;
};
struct  Tblock242030  {
Tsym190843* label;
TY242213* fixups;
};
struct  Vmargs242042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode190813* currentexception;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq187054 {
  TGenericSeq Sup;
  Ttrunk187052* data[SEQ_DECL_SIZE];
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
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
struct TY243141 {
  TGenericSeq Sup;
  Tinstantiationpair243013 data[SEQ_DECL_SIZE];
};
struct TY242253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY163037 {
  TGenericSeq Sup;
  Tlineinfo162338 data[SEQ_DECL_SIZE];
};
struct TY242272 {
  TGenericSeq Sup;
  TY242273 data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY242233 {
  TGenericSeq Sup;
  Tblock242030 data[SEQ_DECL_SIZE];
};
struct TY242213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(Tsym190843*, myimportmodule_250708)(Tcontext243023* c, Tnode190813* n);
N_NIMCALL(NI32, checkmodulename_250064)(Tnode190813* n);
N_NIMCALL(NimStringDesc*, getmodulename_250018)(Tnode190813* n);
N_NIMCALL(NimStringDesc*, nosunixToNativePath)(NimStringDesc* path, NimStringDesc* drive);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(Tident166021*, getident_166463)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_NIMCALL(NimStringDesc*, rendertree_212058)(Tnode190813* n, NU8 renderflags);
N_NIMCALL(void, localerror_164171)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_NIMCALL(NimStringDesc*, findmodule_154351)(NimStringDesc* modulename, NimStringDesc* currentmodule);
N_NIMCALL(NimStringDesc*, tofullpath_163281)(NI32 fileidx);
N_NIMCALL(NI32, fileinfoidx_162857)(NimStringDesc* filename);
N_NIMCALL(Tsym190843*, importmoduleas_250671)(Tnode190813* n, Tsym190843* realmodule);
static N_INLINE(NI, len_191097)(Tnode190813* n);
N_NIMCALL(Tsym190843*, createmodulealias_193844)(Tsym190843* s, Tident166021* newident, Tlineinfo162338 info);
N_NIMCALL(void, message_164204)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, adddecl_248611)(Tcontext243023* c, Tsym190843* sym);
N_NIMCALL(void, importallsymbolsexcept_250315)(Tcontext243023* c, Tsym190843* frommod, Intset187056* exceptset);
N_NIMCALL(Tsym190843*, inittabiter_198124)(Ttabiter198119* ti, Tstrtable190817 tab);
N_NIMCALL(void, internalerror_164215)(Tlineinfo162338 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_82329, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NIM_BOOL, empty_188363)(Intset187056* s);
N_NIMCALL(NIM_BOOL, contains_187829)(Intset187056* s, NI key);
N_NIMCALL(void, rawimportsymbol_250077)(Tcontext243023* c, Tsym190843* s);
N_NIMCALL(Tsym190843*, strtableget_198111)(Tstrtable190817 t, Tident166021* name);
N_NIMCALL(void, incl_187856)(Intset187056* s, NI key);
N_NIMCALL(void, strtableadd_198103)(Tstrtable190817* t, Tsym190843* n);
N_NIMCALL(Tsym190843*, initidentiter_198147)(Tidentiter198141* ti, Tstrtable190817 tab, Tident166021* s);
N_NIMCALL(Tsym190843*, nextidentiter_198156)(Tidentiter198141* ti, Tstrtable190817 tab);
N_NIMCALL(void, addconverter_243571)(Tcontext243023* c, Tsym190843* conv);
static N_INLINE(NIM_BOOL, haspattern_195785)(Tsym190843* s);
static N_INLINE(NIM_BOOL, isroutine_195765)(Tsym190843* s);
N_NIMCALL(void, addpattern_243582)(Tcontext243023* c, Tsym190843* p);
N_NIMCALL(Tsym190843*, nextiter_198132)(Ttabiter198119* ti, Tstrtable190817 tab);
N_NIMCALL(void, checkminsonslen_244275)(Tnode190813* n, NI length);
N_NIMCALL(Tnode190813*, newsymnode_192325)(Tsym190843* sym);
N_NIMCALL(void, initintset_187927)(Intset187056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(Tident166021*, considerquotedident_248010)(Tnode190813* n);
N_NIMCALL(void, importsymbol_250241)(Tcontext243023* c, Tnode190813* n, Tsym190843* frommod);
N_NIMCALL(void, loadstub_234638)(Tsym190843* s);
STRING_LITERAL(TMP3459, "", 0);
STRING_LITERAL(TMP3460, "as", 2);
STRING_LITERAL(TMP3461, " ", 1);
STRING_LITERAL(TMP3462, ".", 1);
STRING_LITERAL(TMP3463, "/", 1);
STRING_LITERAL(TMP3464, "invalid module name: \'$1\'", 25);
STRING_LITERAL(TMP3465, "module alias must be an identifier", 34);
STRING_LITERAL(TMP3466, "A module cannot import itself", 29);
STRING_LITERAL(TMP3467, "importAllSymbols: ", 18);
STRING_LITERAL(TMP3468, "rawImportSymbol", 15);
STRING_LITERAL(TMP3470, "importSymbol: 2", 15);
STRING_LITERAL(TMP3471, "importSymbol: 3", 15);
extern Tgcheap48016 gch_48044;
extern TY240064 gimportmodule_240068;
extern TNimType NTI190441; /* TSymKind */

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

N_NIMCALL(NimStringDesc*, getmodulename_250018)(Tnode190813* n) {
	NimStringDesc* result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 20):
	case ((NU8) 21):
	case ((NU8) 22):
	{
		result = nosunixToNativePath((*n).kindU.S3.strval, ((NimStringDesc*) &TMP3459));
	}
	break;
	case ((NU8) 2):
	{
		result = copyString((*(*n).kindU.S5.ident).s);
	}
	break;
	case ((NU8) 3):
	{
		result = copyString((*(*(*n).kindU.S4.sym).name).s);
	}
	break;
	case ((NU8) 29):
	case ((NU8) 30):
	{
		NimStringDesc* LOC12;
		{
			NIM_BOOL LOC7;
			Tident166021* LOC9;
			LOC7 = 0;
			LOC7 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
			if (!(LOC7)) goto LA8;
			LOC9 = 0;
			LOC9 = getident_166463(((NimStringDesc*) &TMP3460));
			LOC7 = ((*(*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident).Sup.id == (*LOC9).Sup.id);
			LA8: ;
			if (!LOC7) goto LA10;
			(*n).kind = ((NU8) 78);
			asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 0)]), (*n).kindU.S6.sons->data[((NI) 1)]);
			asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 1)]), (*n).kindU.S6.sons->data[((NI) 2)]);
			(*n).kindU.S6.sons = (Tnodeseq190807*) setLengthSeq(&((*n).kindU.S6.sons)->Sup, sizeof(Tnode190813*), ((NI) 2));
			result = getmodulename_250018((*n).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA10: ;
		LOC12 = 0;
		LOC12 = rendertree_212058(n, 4);
		result = nsuReplaceStr(LOC12, ((NimStringDesc*) &TMP3461), ((NimStringDesc*) &TMP3459));
	}
	break;
	case ((NU8) 45):
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = rendertree_212058(n, 4);
		result = nsuReplaceStr(LOC14, ((NimStringDesc*) &TMP3462), ((NimStringDesc*) &TMP3463));
	}
	break;
	case ((NU8) 78):
	{
		result = getmodulename_250018((*n).kindU.S6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* LOC17;
		NimStringDesc* LOC18;
		LOC17 = 0;
		LOC17 = rendertree_212058(n, 0);
		LOC18 = 0;
		LOC18 = nsuFormatSingleElem(((NimStringDesc*) &TMP3464), LOC17);
		localerror_164171((*n).info, ((NU16) 4), LOC18);
		result = copyString(((NimStringDesc*) &TMP3459));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI32, checkmodulename_250064)(Tnode190813* n) {
	NI32 result;
	NimStringDesc* modulename;
	NimStringDesc* fullpath;
	NimStringDesc* LOC1;
	result = 0;
	modulename = getmodulename_250018(n);
	LOC1 = 0;
	LOC1 = tofullpath_163281((*n).info.fileindex);
	fullpath = findmodule_154351(modulename, LOC1);
	{
		if (!((fullpath ? fullpath->Sup.len : 0) == ((NI) 0))) goto LA4;
		localerror_164171((*n).info, ((NU16) 3), modulename);
		result = ((NI32) -1);
	}
	goto LA2;
	LA4: ;
	{
		result = fileinfoidx_162857(fullpath);
	}
	LA2: ;
	return result;
}

static N_INLINE(NI, len_191097)(Tnode190813* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tsym190843*, importmoduleas_250671)(Tnode190813* n, Tsym190843* realmodule) {
	Tsym190843* result;
	result = 0;
	result = realmodule;
	{
		if (!!(((*n).kind == ((NU8) 78)))) goto LA3;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NI LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = len_191097(n);
		LOC6 = !((LOC7 == ((NI) 2)));
		if (LOC6) goto LA8;
		LOC6 = !(((*(*n).kindU.S6.sons->data[((NI) 1)]).kind == ((NU8) 2)));
		LA8: ;
		if (!LOC6) goto LA9;
		localerror_164171((*n).info, ((NU16) 4), ((NimStringDesc*) &TMP3465));
	}
	goto LA1;
	LA9: ;
	{
		if (!!(((*(*(*n).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident).Sup.id == (*(*realmodule).name).Sup.id))) goto LA12;
		result = createmodulealias_193844(realmodule, (*(*n).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident, (*realmodule).info);
	}
	goto LA1;
	LA12: ;
	LA1: ;
	return result;
}

N_NIMCALL(Tsym190843*, myimportmodule_250708)(Tcontext243023* c, Tnode190813* n) {
	Tsym190843* result;
	NI32 f;
	result = 0;
	f = checkmodulename_250064(n);
	{
		Tsym190843* LOC5;
		if (!!((f == ((NI32) -1)))) goto LA3;
		LOC5 = 0;
		LOC5 = gimportmodule_240068((*c).module, f);
		result = importmoduleas_250671(n, LOC5);
		{
			if (!((*result).info.fileindex == (*n).info.fileindex)) goto LA8;
			localerror_164171((*n).info, ((NU16) 4), ((NimStringDesc*) &TMP3466));
		}
		LA8: ;
		{
			if (!(((*result).flags &(1<<((((NU8) 19))&31)))!=0)) goto LA12;
			message_164204((*n).info, ((NU16) 234), (*(*result).name).s);
		}
		LA12: ;
	}
	LA3: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NIM_BOOL, empty_188363)(Intset187056* s) {
	NIM_BOOL result;
	result = 0;
	result = ((*s).counter == ((NI) 0));
	return result;
}

static N_INLINE(NIM_BOOL, isroutine_195765)(Tsym190843* s) {
	NIM_BOOL result;
	result = 0;
	result = ((520192 &(1<<(((*s).kind)&31)))!=0);
	return result;
}

static N_INLINE(NIM_BOOL, haspattern_195785)(Tsym190843* s) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = isroutine_195765(s);
	if (!(LOC1)) goto LA2;
	LOC1 = !(((*(*(*s).ast).kindU.S6.sons->data[((NI) 1)]).kind == ((NU8) 1)));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, rawimportsymbol_250077)(Tcontext243023* c, Tsym190843* s) {
	Tsym190843* check;
	check = strtableget_198111((*(*c).importtable).symbols, (*s).name);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = !((check == NIM_NIL));
		if (!(LOC3)) goto LA4;
		LOC3 = !(((*check).Sup.id == (*s).Sup.id));
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!!(((520256 &(1<<(((*s).kind)&31)))!=0))) goto LA9;
			incl_187856((&(*c).ambiguoussymbols), (*s).Sup.id);
			incl_187856((&(*c).ambiguoussymbols), (*check).Sup.id);
		}
		LA9: ;
	}
	LA5: ;
	strtableadd_198103((&(*(*c).importtable).symbols), s);
	{
		Ttype190849* etyp;
		if (!((*s).kind == ((NU8) 7))) goto LA13;
		etyp = (*s).typ;
		{
			NIM_BOOL LOC17;
			LOC17 = 0;
			LOC17 = ((16386 &(IL64(1)<<(((*etyp).kind)&IL64(63))))!=0);
			if (!(LOC17)) goto LA18;
			LOC17 = !((((*s).flags &(1<<((((NU8) 9))&31)))!=0));
			LA18: ;
			if (!LOC17) goto LA19;
			{
				NI j_250157;
				NI HEX3Atmp_250213;
				NI LOC22;
				NI res_250216;
				j_250157 = 0;
				HEX3Atmp_250213 = 0;
				LOC22 = 0;
				LOC22 = sonslen_193403((*etyp).n);
				HEX3Atmp_250213 = (NI)(LOC22 - ((NI) 1));
				res_250216 = ((NI) 0);
				{
					while (1) {
						Tsym190843* e;
						Tidentiter198141 it;
						if (!(res_250216 <= HEX3Atmp_250213)) goto LA24;
						j_250157 = res_250216;
						e = (*(*(*etyp).n).kindU.S6.sons->data[j_250157]).kindU.S4.sym;
						{
							if (!!(((*e).kind == ((NU8) 20)))) goto LA27;
							internalerror_164215((*s).info, ((NimStringDesc*) &TMP3468));
						}
						LA27: ;
						memset((void*)(&it), 0, sizeof(it));
						check = initidentiter_198147((&it), (*(*c).importtable).symbols, (*e).name);
						{
							while (1) {
								if (!!((check == NIM_NIL))) goto LA30;
								{
									if (!((*check).Sup.id == (*e).Sup.id)) goto LA33;
									e = NIM_NIL;
									goto LA29;
								}
								LA33: ;
								check = nextidentiter_198156((&it), (*(*c).importtable).symbols);
							} LA30: ;
						} LA29: ;
						{
							if (!!((e == NIM_NIL))) goto LA37;
							rawimportsymbol_250077(c, e);
						}
						LA37: ;
						res_250216 += ((NI) 1);
					} LA24: ;
				}
			}
		}
		LA19: ;
	}
	goto LA11;
	LA13: ;
	{
		{
			if (!((*s).kind == ((NU8) 16))) goto LA42;
			addconverter_243571(c, s);
		}
		LA42: ;
		{
			NIM_BOOL LOC46;
			LOC46 = 0;
			LOC46 = haspattern_195785(s);
			if (!LOC46) goto LA47;
			addpattern_243582(c, s);
		}
		LA47: ;
	}
	LA11: ;
}

N_NIMCALL(void, importallsymbolsexcept_250315)(Tcontext243023* c, Tsym190843* frommod, Intset187056* exceptset) {
	Ttabiter198119 i;
	Tsym190843* s;
	memset((void*)(&i), 0, sizeof(i));
	s = inittabiter_198124((&i), (*frommod).kindU.S3.tab);
	{
		while (1) {
			if (!!((s == NIM_NIL))) goto LA2;
			{
				if (!!(((*s).kind == ((NU8) 6)))) goto LA5;
				{
					if (!!(((*s).kind == ((NU8) 20)))) goto LA9;
					{
						NimStringDesc* LOC15;
						if (!!(((43513728 &(1<<(((*s).kind)&31)))!=0))) goto LA13;
						LOC15 = 0;
						LOC15 = rawNewString(reprEnum((*s).kind, (&NTI190441))->Sup.len + 18);
appendString(LOC15, ((NimStringDesc*) &TMP3467));
appendString(LOC15, reprEnum((*s).kind, (&NTI190441)));
						internalerror_164215((*s).info, LOC15);
					}
					LA13: ;
					{
						NIM_BOOL LOC18;
						NIM_BOOL LOC20;
						LOC18 = 0;
						LOC18 = empty_188363(exceptset);
						if (LOC18) goto LA19;
						LOC20 = 0;
						LOC20 = contains_187829(exceptset, (*(*s).name).Sup.id);
						LOC18 = !(LOC20);
						LA19: ;
						if (!LOC18) goto LA21;
						rawimportsymbol_250077(c, s);
					}
					LA21: ;
				}
				LA9: ;
			}
			LA5: ;
			s = nextiter_198132((&i), (*frommod).kindU.S3.tab);
		} LA2: ;
	}
}

N_NIMCALL(Tnode190813*, evalimport_250004)(Tcontext243023* c, Tnode190813* n) {
	Tnode190813* result;
	Intset187056 emptyset;
	result = 0;
	result = n;
	memset((void*)(&emptyset), 0, sizeof(emptyset));
	{
		NI i_250751;
		NI HEX3Atmp_250768;
		NI LOC2;
		NI res_250771;
		i_250751 = 0;
		HEX3Atmp_250768 = 0;
		LOC2 = 0;
		LOC2 = sonslen_193403(n);
		HEX3Atmp_250768 = (NI)(LOC2 - ((NI) 1));
		res_250771 = ((NI) 0);
		{
			while (1) {
				Tsym190843* m;
				if (!(res_250771 <= HEX3Atmp_250768)) goto LA4;
				i_250751 = res_250771;
				m = myimportmodule_250708(c, (*n).kindU.S6.sons->data[i_250751]);
				{
					if (!!((m == NIM_NIL))) goto LA7;
					adddecl_248611(c, m);
					importallsymbolsexcept_250315(c, m, (&emptyset));
				}
				LA7: ;
				res_250771 += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(Tnode190813*, evalimportexcept_250857)(Tcontext243023* c, Tnode190813* n) {
	Tnode190813* result;
	Tsym190843* m;
	result = 0;
	result = n;
	checkminsonslen_244275(n, ((NI) 2));
	m = myimportmodule_250708(c, (*n).kindU.S6.sons->data[((NI) 0)]);
	{
		Intset187056 exceptset;
		if (!!((m == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 0)]), newsymnode_192325(m));
		adddecl_248611(c, m);
		memset((void*)(&exceptset), 0, sizeof(exceptset));
		chckNil((void*)(&exceptset));
		memset((void*)(&exceptset), 0, sizeof(exceptset));
		initintset_187927((&exceptset));
		{
			NI i_250890;
			NI HEX3Atmp_250895;
			NI LOC6;
			NI res_250898;
			i_250890 = 0;
			HEX3Atmp_250895 = 0;
			LOC6 = 0;
			LOC6 = sonslen_193403(n);
			HEX3Atmp_250895 = (NI)(LOC6 - ((NI) 1));
			res_250898 = ((NI) 1);
			{
				while (1) {
					Tident166021* ident;
					if (!(res_250898 <= HEX3Atmp_250895)) goto LA8;
					i_250890 = res_250898;
					ident = considerquotedident_248010((*n).kindU.S6.sons->data[i_250890]);
					incl_187856((&exceptset), (*ident).Sup.id);
					res_250898 += ((NI) 1);
				} LA8: ;
			}
		}
		importallsymbolsexcept_250315(c, m, (&exceptset));
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, importsymbol_250241)(Tcontext243023* c, Tnode190813* n, Tsym190843* frommod) {
	Tident166021* ident;
	Tsym190843* s;
	ident = considerquotedident_248010(n);
	s = strtableget_198111((*frommod).kindU.S3.tab, ident);
	{
		if (!(s == NIM_NIL)) goto LA3;
		localerror_164171((*n).info, ((NU16) 61), (*ident).s);
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!((*s).kind == ((NU8) 23))) goto LA8;
			loadstub_234638(s);
		}
		LA8: ;
		{
			if (!!(((43513728 &(1<<(((*s).kind)&31)))!=0))) goto LA12;
			internalerror_164215((*n).info, ((NimStringDesc*) &TMP3470));
		}
		LA12: ;
		switch ((*s).kind) {
		case ((NU8) 12):
		case ((NU8) 18):
		case ((NU8) 17):
		case ((NU8) 14):
		case ((NU8) 15):
		case ((NU8) 13):
		case ((NU8) 16):
		{
			Tidentiter198141 it;
			Tsym190843* e;
			memset((void*)(&it), 0, sizeof(it));
			e = initidentiter_198147((&it), (*frommod).kindU.S3.tab, (*s).name);
			{
				while (1) {
					if (!!((e == NIM_NIL))) goto LA16;
					{
						if (!!(((*(*e).name).Sup.id == (*(*s).name).Sup.id))) goto LA19;
						internalerror_164215((*n).info, ((NimStringDesc*) &TMP3471));
					}
					LA19: ;
					rawimportsymbol_250077(c, e);
					e = nextidentiter_198156((&it), (*frommod).kindU.S3.tab);
				} LA16: ;
			}
		}
		break;
		default:
		{
			rawimportsymbol_250077(c, s);
		}
		break;
		}
	}
	LA1: ;
}

N_NIMCALL(Tnode190813*, evalfrom_250011)(Tcontext243023* c, Tnode190813* n) {
	Tnode190813* result;
	Tsym190843* m;
	result = 0;
	result = n;
	checkminsonslen_244275(n, ((NI) 2));
	m = myimportmodule_250708(c, (*n).kindU.S6.sons->data[((NI) 0)]);
	{
		if (!!((m == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 0)]), newsymnode_192325(m));
		adddecl_248611(c, m);
		{
			NI i_250822;
			NI HEX3Atmp_250835;
			NI LOC6;
			NI res_250838;
			i_250822 = 0;
			HEX3Atmp_250835 = 0;
			LOC6 = 0;
			LOC6 = sonslen_193403(n);
			HEX3Atmp_250835 = (NI)(LOC6 - ((NI) 1));
			res_250838 = ((NI) 1);
			{
				while (1) {
					if (!(res_250838 <= HEX3Atmp_250835)) goto LA8;
					i_250822 = res_250838;
					{
						if (!!(((*(*n).kindU.S6.sons->data[i_250822]).kind == ((NU8) 23)))) goto LA11;
						importsymbol_250241(c, (*n).kindU.S6.sons->data[i_250822], m);
					}
					LA11: ;
					res_250838 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, importallsymbols_250389)(Tcontext243023* c, Tsym190843* frommod) {
	Intset187056 exceptset;
	memset((void*)(&exceptset), 0, sizeof(exceptset));
	importallsymbolsexcept_250315(c, frommod, (&exceptset));
}
NIM_EXTERNC N_NOINLINE(void, compiler_importerInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_importerDatInit)(void) {
}

