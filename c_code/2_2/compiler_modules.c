/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tsym191843 Tsym191843;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct TY523056 TY523056;
typedef struct Tmoduleinmemory523017 Tmoduleinmemory523017;
typedef struct TY191933 TY191933;
typedef struct Tnode191813 Tnode191813;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident167021 Tident167021;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY118589 TY118589;
typedef struct Trodreader233030 Trodreader233030;
typedef struct Tllstream178204 Tllstream178204;
typedef struct TY86145 TY86145;
typedef struct TY456155 TY456155;
typedef struct Tcgen456038 Tcgen456038;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tindex233028 Tindex233028;
typedef struct Tiitable199274 Tiitable199274;
typedef struct Tiipairseq199272 Tiipairseq199272;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Memfile231208 Memfile231208;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tlinkedlist129028 Tlinkedlist129028;
typedef struct Tcproc456034 Tcproc456034;
typedef struct Tnodetable191873 Tnodetable191873;
typedef struct Tnodepairseq191871 Tnodepairseq191871;
typedef struct Tiipair199270 Tiipair199270;
typedef struct Tidpair191857 Tidpair191857;
typedef struct TY163351 TY163351;
typedef struct TY456106 TY456106;
typedef struct Tnodepair191869 Tnodepair191869;
typedef struct Tblock456032 Tblock456032;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  Tmoduleinmemory523017  {
NF compiledat;
NI32 crc;
TY191933* deps;
NU8 needsrecompile;
NU8 crcstatus;
};
typedef N_NIMCALL_PTR(Tnode191813*, TY241069) (Tsym191843* m, NI32 fileidx);
struct  TNimObject  {
TNimType* m_type;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tsym191843*, TY241064) (Tsym191843* m, NI32 fileidx);
struct TY118589 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct TY86145 {
NimStringDesc* Field0;
NI Field1;
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
struct  Tiitable199274  {
NI counter;
Tiipairseq199272* data;
};
struct  Tindex233028  {
NI lastidxkey;
NI lastidxval;
Tiitable199274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
struct  Memfile231208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader233030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY191933* moddeps;
TY191933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex233028 index;
Tindex233028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable191861 syms;
Memfile231208 memfile;
Tsymseq191815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tllstream178204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef Ropeobj161009* Tcfilesections456022[18];
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
};
struct  Tlinkedlist129028  {
Tlistentry129022* head;
Tlistentry129022* tail;
NI counter;
};
struct  Tnodetable191873  {
NI counter;
Tnodepairseq191871* data;
};
typedef Ropeobj161009* TY456143[10];
struct  Tcgen456038  {
  Tpasscontext241005 Sup;
Tsym191843* module;
NimStringDesc* filename;
Tcfilesections456022 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable191861 typecache;
Tidtable191861 forwtypecache;
Intset188056 declaredthings;
Intset188056 declaredprotos;
Tlinkedlist129028 headerfiles;
Intset188056 typeinfomarker;
Tcproc456034* initproc;
Tcproc456034* postinitproc;
Tcproc456034* preinitproc;
Ttypeseq191845* typestack;
Tnodetable191873 datacache;
Tsymseq191815* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj161009* typenodesname;
Ropeobj161009* nimtypesname;
NI labels;
TY456143 extensionloaders;
Ropeobj161009* injectstmt;
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
struct  Tiipair199270  {
NI key;
NI val;
};
struct  Tidpair191857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27220 bits;
};
struct  Tcproc456034  {
Tsym191843* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo163338 lastlineinfo;
Tnodeseq191807* nestedtrystmts;
NI inexceptblock;
TY163351* finallysafepoints;
NI labels;
TY456106* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen456038* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj161009* gcframetype;
};
struct  Tnodepair191869  {
NI h;
Tnode191813* key;
NI val;
};
typedef Ropeobj161009* Tcprocsections456026[3];
struct  Tblock456032  {
NI id;
Ropeobj161009* label;
Tcprocsections456026 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY523056 {
  TGenericSeq Sup;
  Tmoduleinmemory523017 data[SEQ_DECL_SIZE];
};
struct TY456155 {
  TGenericSeq Sup;
  Tcgen456038* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Tiipairseq199272 {
  TGenericSeq Sup;
  Tiipair199270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq191871 {
  TGenericSeq Sup;
  Tnodepair191869 data[SEQ_DECL_SIZE];
};
struct TY163351 {
  TGenericSeq Sup;
  Ropeobj161009* data[SEQ_DECL_SIZE];
};
struct TY456106 {
  TGenericSeq Sup;
  Tblock456032 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1087)(void* p, NI op);
N_NIMCALL(Tnode191813*, includemodule_523851)(Tsym191843* s, NI32 fileidx);
N_NIMCALL(Tnode191813*, parsefile_219041)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_523152)(Tsym191843* x, NI32 dep);
N_NIMCALL(void, safeadd_523176)(TY191933** x, NI32 y);
N_NIMCALL(void, docrc_523134)(NI32 fileidx);
N_NIMCALL(NI32, crcfromfile_169051)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, tofilename_164271)(NI32 fileidx);
N_NIMCALL(Tsym191843*, importmodule_523815)(Tsym191843* s, NI32 fileidx);
N_NIMCALL(Tsym191843*, compilemodule_523726)(NI32 fileidx, NU32 flags);
N_NIMCALL(Tsym191843*, getmodule_523081)(NI32 fileidx);
N_NIMCALL(Tsym191843*, newmodule_523646)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, tofullpath_164281)(NI32 fileidx);
N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118589* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, isnimidentifier_181257)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_164970)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tlineinfo163338, newlineinfo_163870)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(Tsym191843*, newsym_192655)(NU8 symkind, Tident167021* name, Tsym191843* owner, Tlineinfo163338 info);
N_NIMCALL(NimStringDesc*, getpackagename_154825)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_195007)(Tstrtable191817* x);
N_NIMCALL(void, strtableadd_199103)(Tstrtable191817* t, Tsym191843* n);
N_NIMCALL(Trodreader233030*, handlesymbolfile_233071)(Tsym191843* module);
N_NIMCALL(void, internalerror_165234)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_190404)(void);
N_NIMCALL(void, processmodule_241056)(Tsym191843* module, Tllstream178204* stream, Trodreader233030* rd);
N_NIMCALL(NU8, checkdepmem_523404)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, crcchanged_523105)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_165322)(TY86145 x);
N_NIMCALL(void, resetmodule_523323)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46147* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46147* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46147* c);
N_NOINLINE(void, incl_46865)(Tcellset46159* s, Tcell46147* cell);
static N_INLINE(void, decref_51604)(Tcell46147* c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_523187)(TY191933* x, TY191933* y);
N_NIMCALL(void, localerror_165171)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, wantmainmodule_523922)(void);
N_NIMCALL(void, fatal_165139)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_163857)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, HEX2F_118292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, compilesystemmodule_523901)(void);
N_NIMCALL(void, resetpackagecache_154605)(void);
STRING_LITERAL(TMP1433, "-", 1);
STRING_LITERAL(TMP1507, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1512, "compiler/modules.nim", 20);
NIM_CONST TY86145 TMP1511 = {((NimStringDesc*) &TMP1512),
((NI) 41)}
;
STRING_LITERAL(TMP4268, "", 0);
STRING_LITERAL(TMP4269, "nim", 3);
STRING_LITERAL(TMP4270, "system.nim", 10);
STRING_LITERAL(TMP4981, "stdin", 5);
Tsymseq191815* gcompiledmodules_523055;
extern TNimType NTI191815; /* TSymSeq */
extern Tgcheap48016 gch_48044;
TY523056* gmemcachedata_523075;
TNimType NTI523017; /* TModuleInMemory */
extern TNimType NTI128; /* float */
extern TNimType NTI169015; /* TCrc32 */
extern TNimType NTI191933; /* seq[int32] */
TNimType NTI523013; /* TNeedRecompile */
TNimType NTI523015; /* TCrcStatus */
TNimType NTI523056; /* seq[TModuleInMemory] */
extern TY241069 gincludefile_241073;
extern NU32 gglobaloptions_154128;
extern TY241064 gimportmodule_241068;
extern TNimType NTI191811; /* PSym */
extern TNimType NTI191843; /* TSym */
extern NU8 gcmd_154130;
extern NI gfrontendid_190012;
extern NF glastcmdtime_154141;
extern TY456155* gmodules_456174;
Tsym191843* stdinmodule_523998;
extern NimStringDesc* gprojectfull_154236;
extern Tlineinfo163338 gcmdlineinfo_163925;
extern NI32 gprojectmainidx_154237;
extern NimStringDesc* libpath_154233;
extern Tsym191843* systemmodule_238019;
extern NI32 systemfileidx_163435;

static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr) {
	Tcell46147* result;
	result = 0;
	result = ((Tcell46147*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46147))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46147* c) {
	addzct_49617((&gch_48044.zct), c);
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
N_NIMCALL(void, TMP1087)(void* p, NI op) {
	TY523056* a;
	NI LOC1;
	a = (TY523056*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].deps, op);
	}
}

N_NIMCALL(void, adddep_523152)(Tsym191843* x, NI32 dep) {
	{
		if (!((gmemcachedata_523075 ? gmemcachedata_523075->Sup.len : 0) <= ((NI) (dep)))) goto LA3;
		gmemcachedata_523075 = (TY523056*) setLengthSeq(&(gmemcachedata_523075)->Sup, sizeof(Tmoduleinmemory523017), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_523176((&gmemcachedata_523075->data[(*x).position].deps), dep);
}

N_NIMCALL(void, docrc_523134)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_523075->data[fileidx].crcstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofilename_164271(fileidx);
		gmemcachedata_523075->data[fileidx].crc = crcfromfile_169051(LOC5);
	}
	LA3: ;
}

N_NIMCALL(Tnode191813*, includemodule_523851)(Tsym191843* s, NI32 fileidx) {
	Tnode191813* result;
	result = 0;
	result = parsefile_219041(fileidx);
	{
		if (!((gglobaloptions_154128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		{
			if (!((gmemcachedata_523075 ? gmemcachedata_523075->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_523075 = (TY523056*) setLengthSeq(&(gmemcachedata_523075)->Sup, sizeof(Tmoduleinmemory523017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_523152(s, fileidx);
		docrc_523134(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Tsym191843*, getmodule_523081)(NI32 fileidx) {
	Tsym191843* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gcompiledmodules_523055 ? gcompiledmodules_523055->Sup.len : 0));
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_523055->data[fileidx];
	}
	LA5: ;
	return result;
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

N_NIMCALL(Tsym191843*, newmodule_523646)(NI32 fileidx) {
	Tsym191843* result;
	NimStringDesc* filename;
	TY118589 LOC1;
	NimStringDesc* LOC9;
	Tident167021* LOC10;
	result = 0;
	result = (Tsym191843*) newObj((&NTI191811), sizeof(Tsym191843));
	(*result).Sup.Sup.m_type = (&NTI191843);
	(*result).Sup.id = ((NI) -1);
	(*result).kind = ((NU8) 6);
	filename = tofullpath_164281(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).name), getident_167463(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		NIM_BOOL LOC6;
		LOC4 = 0;
		LOC4 = !(eqStrings((*(*result).name).s, ((NimStringDesc*) &TMP1433)));
		if (!(LOC4)) goto LA5;
		LOC6 = 0;
		LOC6 = isnimidentifier_181257((*(*result).name).s);
		LOC4 = !(LOC6);
		LA5: ;
		if (!LOC4) goto LA7;
		rawmessage_164970(((NU16) 21), (*(*result).name).s);
	}
	LA7: ;
	(*result).info = newlineinfo_163870(fileidx, ((NI) 1), ((NI) 1));
	LOC9 = 0;
	LOC9 = getpackagename_154825(filename);
	LOC10 = 0;
	LOC10 = getident_167463(LOC9);
	asgnRefNoCycle((void**) (&(*result).owner), newsym_192655(((NU8) 24), LOC10, NIM_NIL, (*result).info));
	(*result).position = ((NI) (fileidx));
	{
		if (!((gmemcachedata_523075 ? gmemcachedata_523075->Sup.len : 0) <= ((NI) (fileidx)))) goto LA13;
		gmemcachedata_523075 = (TY523056*) setLengthSeq(&(gmemcachedata_523075)->Sup, sizeof(Tmoduleinmemory523017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA13: ;
	{
		if (!((gcompiledmodules_523055 ? gcompiledmodules_523055->Sup.len : 0) <= ((NI) (fileidx)))) goto LA17;
		gcompiledmodules_523055 = (Tsymseq191815*) setLengthSeq(&(gcompiledmodules_523055)->Sup, sizeof(Tsym191843*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA17: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_523055->data[(*result).position]), result);
	(*result).flags |= ((NI32)1)<<((((NU8) 0))%(sizeof(NI32)*8));
	initstrtable_195007((&(*result).kindU.S3.tab));
	strtableadd_199103((&(*result).kindU.S3.tab), result);
	return result;
}

static N_INLINE(NI, getid_190404)(void) {
	NI result;
	result = 0;
	result = gfrontendid_190012;
	gfrontendid_190012 += ((NI) 1);
	return result;
}

N_NIMCALL(NIM_BOOL, crcchanged_523105)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gmemcachedata_523075 ? gmemcachedata_523075->Sup.len : 0));
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_165322(TMP1511);
		internalerror_165234(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_523075->data[fileidx].crcstatus) {
	case ((NU8) 2):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 3):
	{
		result = NIM_FALSE;
	}
	break;
	case ((NU8) 1):
	{
		NI32 newcrc;
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = tofilename_164271(fileidx);
		newcrc = crcfromfile_169051(LOC11);
		result = !((newcrc == gmemcachedata_523075->data[fileidx].crc));
		gmemcachedata_523075->data[fileidx].crc = newcrc;
		{
			if (!result) goto LA14;
			gmemcachedata_523075->data[fileidx].crcstatus = ((NU8) 2);
		}
		goto LA12;
		LA14: ;
		{
			gmemcachedata_523075->data[fileidx].crcstatus = ((NU8) 3);
		}
		LA12: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC18;
		LOC18 = 0;
		LOC18 = tofilename_164271(fileidx);
		gmemcachedata_523075->data[fileidx].crc = crcfromfile_169051(LOC18);
		result = NIM_TRUE;
		{
			if (!result) goto LA21;
			gmemcachedata_523075->data[fileidx].crcstatus = ((NU8) 2);
		}
		goto LA19;
		LA21: ;
		{
			gmemcachedata_523075->data[fileidx].crcstatus = ((NU8) 3);
		}
		LA19: ;
	}
	break;
	}
	return result;
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

N_NIMCALL(void, resetmodule_523323)(NI32 fileidx) {
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmemcachedata_523075 ? gmemcachedata_523075->Sup.len : 0)))))) goto LA3;
		gmemcachedata_523075->data[fileidx].needsrecompile = ((NU8) 2);
	}
	LA3: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gcompiledmodules_523055 ? gcompiledmodules_523055->Sup.len : 0)))))) goto LA7;
		asgnRefNoCycle((void**) (&gcompiledmodules_523055->data[fileidx]), NIM_NIL);
	}
	LA7: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmodules_456174 ? gmodules_456174->Sup.len : 0)))))) goto LA11;
		asgnRef((void**) (&gmodules_456174->data[fileidx]), NIM_NIL);
	}
	LA11: ;
}

N_NIMCALL(NU8, checkdepmem_523404)(NI32 fileidx) {
	NU8 result;
{	result = 0;
	{
		if (!!((gmemcachedata_523075->data[fileidx].needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_523075->data[fileidx].needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_154128 &(1<<((((NU8) 1))&31)))!=0);
		if (LOC7) goto LA8;
		LOC7 = crcchanged_523105(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_523323(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_523187(gmemcachedata_523075->data[fileidx].deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_523075->data[fileidx].needsrecompile = ((NU8) 3);
		{
			NI32 dep_523611;
			TY191933* HEX3Atmp_523625;
			NI i_523628;
			NI L_523630;
			dep_523611 = 0;
			HEX3Atmp_523625 = 0;
			HEX3Atmp_523625 = gmemcachedata_523075->data[fileidx].deps;
			i_523628 = ((NI) 0);
			L_523630 = (HEX3Atmp_523625 ? HEX3Atmp_523625->Sup.len : 0);
			{
				while (1) {
					NU8 d;
					if (!(i_523628 < L_523630)) goto LA18;
					dep_523611 = HEX3Atmp_523625->data[i_523628];
					d = checkdepmem_523404(dep_523611);
					{
						if (!((20 &(1<<((d)&7)))!=0)) goto LA21;
						resetmodule_523323(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_523628 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_523075->data[fileidx].needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym191843*, compilemodule_523726)(NI32 fileidx, NU32 flags) {
	Tsym191843* result;
{	result = 0;
	result = getmodule_523081(fileidx);
	{
		Trodreader233030* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!((gmemcachedata_523075 ? gmemcachedata_523075->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_523075 = (TY523056*) setLengthSeq(&(gmemcachedata_523075)->Sup, sizeof(Tmoduleinmemory523017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_523075->data[fileidx].needsrecompile = ((NU8) 3);
		result = newmodule_523646(fileidx);
		rd = 0;
		(*result).flags = ((*result).flags | flags);
		{
			if (!((18438 &(1<<((gcmd_154130)&31)))!=0)) goto LA11;
			rd = handlesymbolfile_233071(result);
			{
				if (!((*result).Sup.id < ((NI) 0))) goto LA15;
				internalerror_165234(((NimStringDesc*) &TMP1507));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.id = getid_190404();
		}
		LA9: ;
		processmodule_241056(result, NIM_NIL, rd);
		{
			if (!((gglobaloptions_154128 &(1<<((((NU8) 15))&31)))!=0)) goto LA20;
			gmemcachedata_523075->data[fileidx].compiledat = glastcmdtime_154141;
			gmemcachedata_523075->data[fileidx].needsrecompile = ((NU8) 4);
			docrc_523134(fileidx);
		}
		LA20: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC25;
			LOC25 = 0;
			LOC25 = checkdepmem_523404(fileidx);
			if (!(LOC25 == ((NU8) 2))) goto LA26;
			result = compilemodule_523726(fileidx, flags);
		}
		goto LA23;
		LA26: ;
		{
			result = gcompiledmodules_523055->data[fileidx];
		}
		LA23: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym191843*, importmodule_523815)(Tsym191843* s, NI32 fileidx) {
	Tsym191843* result;
	result = 0;
	result = compilemodule_523726(fileidx, 0);
	{
		if (!((gglobaloptions_154128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		adddep_523152(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).flags &(1<<((((NU8) 13))&31)))!=0)) goto LA7;
		localerror_165171((*result).info, ((NU16) 40), (*(*result).name).s);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, wantmainmodule_523922)(void) {
	NimStringDesc* LOC5;
	{
		if (!((gprojectfull_154236 ? gprojectfull_154236->Sup.len : 0) == ((NI) 0))) goto LA3;
		fatal_165139(gcmdlineinfo_163925, ((NU16) 186), ((NimStringDesc*) &TMP4268));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP4269));
	gprojectmainidx_154237 = fileinfoidx_163857(LOC5);
}

N_NIMCALL(void, compilesystemmodule_523901)(void) {
	{
		NimStringDesc* LOC5;
		Tsym191843* LOC6;
		if (!(systemmodule_238019 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_118292(libpath_154233, ((NimStringDesc*) &TMP4270));
		systemfileidx_163435 = fileinfoidx_163857(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_523726(systemfileidx_163435, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, compileproject_523985)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_523922();
	LOC1 = 0;
	LOC1 = HEX2F_118292(libpath_154233, ((NimStringDesc*) &TMP4270));
	systemfileidx = fileinfoidx_163857(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_154237;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		Tsym191843* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_523726(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		Tsym191843* LOC13;
		compilesystemmodule_523901();
		LOC13 = 0;
		LOC13 = compilemodule_523726(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(Tsym191843*, makestdinmodule_524003)(void) {
	Tsym191843* result;
	result = 0;
	{
		NI32 LOC5;
		if (!(stdinmodule_523998 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = fileinfoidx_163857(((NimStringDesc*) &TMP4981));
		asgnRefNoCycle((void**) (&stdinmodule_523998), newmodule_523646(LOC5));
		(*stdinmodule_523998).Sup.id = getid_190404();
	}
	LA3: ;
	result = stdinmodule_523998;
	return result;
}

N_NIMCALL(void, resetallmodules_523356)(void) {
	{
		NI i_523368;
		NI HEX3Atmp_523382;
		NI res_523385;
		i_523368 = 0;
		HEX3Atmp_523382 = 0;
		HEX3Atmp_523382 = (gcompiledmodules_523055 ? (gcompiledmodules_523055->Sup.len-1) : -1);
		res_523385 = ((NI) 0);
		{
			while (1) {
				if (!(res_523385 <= HEX3Atmp_523382)) goto LA3;
				i_523368 = res_523385;
				{
					if (!!((gcompiledmodules_523055->data[i_523368] == NIM_NIL))) goto LA6;
					resetmodule_523323(((NI32) (i_523368)));
				}
				LA6: ;
				res_523385 += ((NI) 1);
			} LA3: ;
		}
	}
	resetpackagecache_154605();
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit)(void) {
	if (gcompiledmodules_523055) nimGCunrefNoCycle(gcompiledmodules_523055);
	gcompiledmodules_523055 = (Tsymseq191815*) newSeqRC1((&NTI191815), 0);
	if (gmemcachedata_523075) nimGCunrefNoCycle(gmemcachedata_523075);
	gmemcachedata_523075 = (TY523056*) newSeqRC1((&NTI523056), 0);
	gincludefile_241073 = includemodule_523851;
	gimportmodule_241068 = importmodule_523815;
}

NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit)(void) {
static TNimNode* TMP1080[5];
static TNimNode* TMP1081[5];
NI TMP1083;
static char* NIM_CONST TMP1082[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP1084[4];
NI TMP1086;
static char* NIM_CONST TMP1085[4] = {
"crcNotTaken", 
"crcCached", 
"crcHasChanged", 
"crcNotChanged"};
static TNimNode TMP1078[17];
NTI523017.size = sizeof(Tmoduleinmemory523017);
NTI523017.kind = 18;
NTI523017.base = 0;
NTI523017.flags = 2;
TMP1080[0] = &TMP1078[1];
TMP1078[1].kind = 1;
TMP1078[1].offset = offsetof(Tmoduleinmemory523017, compiledat);
TMP1078[1].typ = (&NTI128);
TMP1078[1].name = "compiledAt";
TMP1080[1] = &TMP1078[2];
TMP1078[2].kind = 1;
TMP1078[2].offset = offsetof(Tmoduleinmemory523017, crc);
TMP1078[2].typ = (&NTI169015);
TMP1078[2].name = "crc";
TMP1080[2] = &TMP1078[3];
TMP1078[3].kind = 1;
TMP1078[3].offset = offsetof(Tmoduleinmemory523017, deps);
TMP1078[3].typ = (&NTI191933);
TMP1078[3].name = "deps";
TMP1080[3] = &TMP1078[4];
NTI523013.size = sizeof(NU8);
NTI523013.kind = 14;
NTI523013.base = 0;
NTI523013.flags = 3;
for (TMP1083 = 0; TMP1083 < 5; TMP1083++) {
TMP1078[TMP1083+5].kind = 1;
TMP1078[TMP1083+5].offset = TMP1083;
TMP1078[TMP1083+5].name = TMP1082[TMP1083];
TMP1081[TMP1083] = &TMP1078[TMP1083+5];
}
TMP1078[10].len = 5; TMP1078[10].kind = 2; TMP1078[10].sons = &TMP1081[0];
NTI523013.node = &TMP1078[10];
TMP1078[4].kind = 1;
TMP1078[4].offset = offsetof(Tmoduleinmemory523017, needsrecompile);
TMP1078[4].typ = (&NTI523013);
TMP1078[4].name = "needsRecompile";
TMP1080[4] = &TMP1078[11];
NTI523015.size = sizeof(NU8);
NTI523015.kind = 14;
NTI523015.base = 0;
NTI523015.flags = 3;
for (TMP1086 = 0; TMP1086 < 4; TMP1086++) {
TMP1078[TMP1086+12].kind = 1;
TMP1078[TMP1086+12].offset = TMP1086;
TMP1078[TMP1086+12].name = TMP1085[TMP1086];
TMP1084[TMP1086] = &TMP1078[TMP1086+12];
}
TMP1078[16].len = 4; TMP1078[16].kind = 2; TMP1078[16].sons = &TMP1084[0];
NTI523015.node = &TMP1078[16];
TMP1078[11].kind = 1;
TMP1078[11].offset = offsetof(Tmoduleinmemory523017, crcstatus);
TMP1078[11].typ = (&NTI523015);
TMP1078[11].name = "crcStatus";
TMP1078[0].len = 5; TMP1078[0].kind = 2; TMP1078[0].sons = &TMP1080[0];
NTI523017.node = &TMP1078[0];
NTI523056.size = sizeof(TY523056*);
NTI523056.kind = 24;
NTI523056.base = (&NTI523017);
NTI523056.flags = 2;
NTI523056.marker = TMP1087;
}

