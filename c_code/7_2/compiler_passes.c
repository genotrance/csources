/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Tsym190843 Tsym190843;
typedef struct Tnode190813 Tnode190813;
typedef struct Tpass240017 Tpass240017;
typedef struct Tpasscontext240005 Tpasscontext240005;
typedef struct Trodreader232030 Trodreader232030;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tllstream177204 Tllstream177204;
typedef struct Tparsers218035 Tparsers218035;
typedef struct Tparser206205 Tparser206205;
typedef struct Tlexer180185 Tlexer180185;
typedef struct Tbaselexer178024 Tbaselexer178024;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken180181 Ttoken180181;
typedef struct Tident166021 Tident166021;
typedef struct Tidobj166015 Tidobj166015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Ttype190849 Ttype190849;
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
typedef struct TY121008 TY121008;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct TY431293 TY431293;
typedef struct TY190933 TY190933;
typedef struct Tindex232028 Tindex232028;
typedef struct Tiitable198274 Tiitable198274;
typedef struct Tiipairseq198272 Tiipairseq198272;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Memfile230208 Memfile230208;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Tiipair198270 Tiipair198270;
typedef struct Tidpair190857 Tidpair190857;
typedef N_NIMCALL_PTR(Tsym190843*, TY240064) (Tsym190843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(Tnode190813*, TY240069) (Tsym190843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(Tpasscontext240005*, Tpassopen240009) (Tsym190843* module);
typedef N_NIMCALL_PTR(Tpasscontext240005*, Tpassopencached240011) (Tsym190843* module, Trodreader232030* rd);
typedef N_NIMCALL_PTR(Tnode190813*, Tpassprocess240015) (Tpasscontext240005* p, Tnode190813* toplevelstmt);
typedef N_NIMCALL_PTR(Tnode190813*, Tpassclose240013) (Tpasscontext240005* p, Tnode190813* n);
struct Tpass240017 {
Tpassopen240009 Field0;
Tpassopencached240011 Field1;
Tpassprocess240015 Field2;
Tpassclose240013 Field3;
};
typedef Tpass240017 TY240173[10];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext240005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tbaselexer178024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream177204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  Tlineinfo162338  {
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
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo162338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler180183;
struct  Tlexer180185  {
  Tbaselexer178024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler180183 errorhandler;
};
struct  Ttoken180181  {
NU8 toktype;
NI indent;
Tident166021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser206205  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer180185 lex;
Ttoken180181 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers218035  {
NU8 skin;
Tparser206205 parser;
};
typedef Tpasscontext240005* Tpasscontextarray240168[10];
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
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
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
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
struct  Tllstream177204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
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
struct TY431293 {
Tnode190813* Field0;
Tnode190813* Field1;
};
struct  Tiitable198274  {
NI counter;
Tiipairseq198272* data;
};
struct  Tindex232028  {
NI lastidxkey;
NI lastidxval;
Tiitable198274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
struct  Memfile230208  {
void* mem;
NI size;
int handle;
};
struct  Trodreader232030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY190933* moddeps;
TY190933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex232028 index;
Tindex232028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable190861 syms;
Memfile230208 memfile;
Tsymseq190815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
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
struct  Tiipair198270  {
NI key;
NI val;
};
struct  Tidpair190857  {
Tidobj166015* key;
TNimObject* val;
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
struct TY121008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq198272 {
  TGenericSeq Sup;
  Tiipair198270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(void, openpasses_240293)(Tpasscontext240005** a, Tsym190843* module);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_163407)(NI32 fileidx);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(Tllstream177204*, llstreamopen_177238)(FILE* f);
N_NIMCALL(Tllstream177204*, llstreamopen_177256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_163970)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_218047)(Tparsers218035* p, NI32 fileidx, Tllstream177204* inputstream);
N_NIMCALL(void, processimplicits_240621)(TY121008* implicits, NU8 nodekind, Tpasscontext240005** a);
N_NIMCALL(Tnode190813*, newnodei_192351)(NU8 kind, Tlineinfo162338 info);
N_NIMCALL(Tnode190813*, newstrnode_191643)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_192819)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_240454)(Tnode190813* n, Tpasscontext240005** a);
N_NIMCALL(Tnode190813*, parsetoplevelstmt_218070)(Tparsers218035* p);
N_NIMCALL(void, closeparsers_218056)(Tparsers218035* p);
N_NIMCALL(void, closepasses_240404)(Tpasscontext240005** a);
N_NIMCALL(void, idsynchronizationpoint_189453)(NI idrange);
N_NIMCALL(void, openpassescached_240342)(Tpasscontext240005** a, Tsym190843* module, Trodreader232030* rd);
N_NIMCALL(Tnode190813*, loadinitsection_232077)(Trodreader232030* r);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(void, processtoplevelstmtcached_240513)(Tnode190813* n, Tpasscontext240005** a);
N_NIMCALL(void, closepassescached_240563)(Tpasscontext240005** a);
N_NIMCALL(void, carrypass_240208)(Tpass240017* p, Tsym190843* module, TY431293 m, TY431293* Result);
STRING_LITERAL(TMP1506, "-", 1);
STRING_LITERAL(TMP1507, "stdinfile", 9);
TY240064 gimportmodule_240068;
TY240069 gincludefile_240073;
TY240173 gpasses_240175;
NI gpasseslen_240176;
extern TNimType NTI3411; /* RootObj */
TNimType NTI240005; /* TPassContext */
extern TNimType NTI138; /* bool */
extern TNimType NTI218035; /* TParsers */
extern Tgcheap48016 gch_48044;
extern Tlineinfo162338 gcmdlineinfo_162925;
extern TY121008* implicitimports_153280;
extern TY121008* implicitincludes_153300;

N_NIMCALL(void, openpasses_240293)(Tpasscontext240005** a, Tsym190843* module) {
	{
		NI i_240310;
		NI HEX3Atmp_240319;
		NI res_240322;
		i_240310 = 0;
		HEX3Atmp_240319 = 0;
		HEX3Atmp_240319 = (NI)(gpasseslen_240176 - ((NI) 1));
		res_240322 = ((NI) 0);
		{
			while (1) {
				if (!(res_240322 <= HEX3Atmp_240319)) goto LA3;
				i_240310 = res_240322;
				{
					if (!!(gpasses_240175[(i_240310)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_240310)- 0]), gpasses_240175[(i_240310)- 0].Field0(module));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_240310)- 0]), NIM_NIL);
				}
				LA4: ;
				res_240322 += ((NI) 1);
			} LA3: ;
		}
	}
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

N_NIMCALL(NIM_BOOL, processtoplevelstmt_240454)(Tnode190813* n, Tpasscontext240005** a) {
	NIM_BOOL result;
	Tnode190813* m;
{	result = 0;
	m = n;
	{
		NI i_240473;
		NI HEX3Atmp_240490;
		NI res_240493;
		i_240473 = 0;
		HEX3Atmp_240490 = 0;
		HEX3Atmp_240490 = (NI)(gpasseslen_240176 - ((NI) 1));
		res_240493 = ((NI) 0);
		{
			while (1) {
				if (!(res_240493 <= HEX3Atmp_240490)) goto LA3;
				i_240473 = res_240493;
				{
					if (!!(gpasses_240175[(i_240473)- 0].Field2 == 0)) goto LA6;
					m = gpasses_240175[(i_240473)- 0].Field2(a[(i_240473)- 0], m);
					{
						if (!m == 0) goto LA10;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_240493 += ((NI) 1);
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, processimplicits_240621)(TY121008* implicits, NU8 nodekind, Tpasscontext240005** a) {
	{
		NimStringDesc* module_240637;
		NI i_240644;
		NI L_240646;
		module_240637 = 0;
		i_240644 = ((NI) 0);
		L_240646 = (implicits ? implicits->Sup.len : 0);
		{
			while (1) {
				Tnode190813* importstmt;
				Tnode190813* str;
				if (!(i_240644 < L_240646)) goto LA3;
				module_240637 = implicits->data[i_240644];
				importstmt = newnodei_192351(nodekind, gcmdlineinfo_162925);
				str = newstrnode_191643(((NU8) 20), module_240637);
				(*str).info = gcmdlineinfo_162925;
				addson_192819(importstmt, str);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = processtoplevelstmt_240454(importstmt, a);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_240644 += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_240404)(Tpasscontext240005** a) {
	Tnode190813* m;
	m = NIM_NIL;
	{
		NI i_240421;
		NI HEX3Atmp_240431;
		NI res_240434;
		i_240421 = 0;
		HEX3Atmp_240431 = 0;
		HEX3Atmp_240431 = (NI)(gpasseslen_240176 - ((NI) 1));
		res_240434 = ((NI) 0);
		{
			while (1) {
				if (!(res_240434 <= HEX3Atmp_240431)) goto LA3;
				i_240421 = res_240434;
				{
					if (!!(gpasses_240175[(i_240421)- 0].Field3 == 0)) goto LA6;
					m = gpasses_240175[(i_240421)- 0].Field3(a[(i_240421)- 0], m);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a[(i_240421)- 0]), NIM_NIL);
				res_240434 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_240342)(Tpasscontext240005** a, Tsym190843* module, Trodreader232030* rd) {
	{
		NI i_240360;
		NI HEX3Atmp_240381;
		NI res_240384;
		i_240360 = 0;
		HEX3Atmp_240381 = 0;
		HEX3Atmp_240381 = (NI)(gpasseslen_240176 - ((NI) 1));
		res_240384 = ((NI) 0);
		{
			while (1) {
				if (!(res_240384 <= HEX3Atmp_240381)) goto LA3;
				i_240360 = res_240384;
				{
					if (!!(gpasses_240175[(i_240360)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_240360)- 0]), gpasses_240175[(i_240360)- 0].Field1(module, rd));
					{
						if (!!((a[(i_240360)- 0] == NIM_NIL))) goto LA10;
						(*a[(i_240360)- 0]).fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_240360)- 0]), NIM_NIL);
				}
				LA4: ;
				res_240384 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processtoplevelstmtcached_240513)(Tnode190813* n, Tpasscontext240005** a) {
	Tnode190813* m;
	m = n;
	{
		NI i_240531;
		NI HEX3Atmp_240540;
		NI res_240543;
		i_240531 = 0;
		HEX3Atmp_240540 = 0;
		HEX3Atmp_240540 = (NI)(gpasseslen_240176 - ((NI) 1));
		res_240543 = ((NI) 0);
		{
			while (1) {
				if (!(res_240543 <= HEX3Atmp_240540)) goto LA3;
				i_240531 = res_240543;
				{
					if (!!(gpasses_240175[(i_240531)- 0].Field1 == 0)) goto LA6;
					m = gpasses_240175[(i_240531)- 0].Field2(a[(i_240531)- 0], m);
				}
				LA6: ;
				res_240543 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_240563)(Tpasscontext240005** a) {
	Tnode190813* m;
	m = NIM_NIL;
	{
		NI i_240580;
		NI HEX3Atmp_240597;
		NI res_240600;
		i_240580 = 0;
		HEX3Atmp_240597 = 0;
		HEX3Atmp_240597 = (NI)(gpasseslen_240176 - ((NI) 1));
		res_240600 = ((NI) 0);
		{
			while (1) {
				if (!(res_240600 <= HEX3Atmp_240597)) goto LA3;
				i_240580 = res_240600;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = !(gpasses_240175[(i_240580)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_240175[(i_240580)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m = gpasses_240175[(i_240580)- 0].Field3(a[(i_240580)- 0], m);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a[(i_240580)- 0]), NIM_NIL);
				res_240600 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_240056)(Tsym190843* module, Tllstream177204* stream, Trodreader232030* rd) {
	Tparsers218035 p;
	Tpasscontextarray240168 a;
	Tllstream177204* s;
	NI32 fileidx;
{	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI218035));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	fileidx = ((NI32) ((*module).position));
	{
		if (!(rd == NIM_NIL)) goto LA3;
		openpasses_240293(a, module);
		{
			NimStringDesc* filename;
			if (!(stream == NIM_NIL)) goto LA7;
			filename = tofullpathconsiderdirty_163407(fileidx);
			{
				NimStringDesc* LOC13;
				if (!eqStrings((*(*module).name).s, ((NimStringDesc*) &TMP1506))) goto LA11;
				LOC13 = 0;
				LOC13 = (*(*module).name).s; (*(*module).name).s = copyStringRC1(((NimStringDesc*) &TMP1507));
				if (LOC13) nimGCunrefNoCycle(LOC13);
				s = llstreamopen_177238(stdin);
			}
			goto LA9;
			LA11: ;
			{
				s = llstreamopen_177256(filename, ((NU8) 0));
			}
			LA9: ;
			{
				if (!(s == NIM_NIL)) goto LA17;
				rawmessage_163970(((NU16) 3), filename);
				goto BeforeRet;
			}
			LA17: ;
		}
		goto LA5;
		LA7: ;
		{
			s = stream;
		}
		LA5: ;
		{
			while (1) {
				openparsers_218047((&p), fileidx, s);
				{
					if (!!((((*module).flags &(1<<((((NU8) 13))&31)))!=0))) goto LA24;
					processimplicits_240621(implicitimports_153280, ((NU8) 116), a);
					processimplicits_240621(implicitincludes_153300, ((NU8) 121), a);
				}
				LA24: ;
				{
					while (1) {
						Tnode190813* n;
						n = parsetoplevelstmt_218070((&p));
						{
							if (!((*n).kind == ((NU8) 1))) goto LA30;
							goto LA26;
						}
						LA30: ;
						{
							NIM_BOOL LOC34;
							LOC34 = 0;
							LOC34 = processtoplevelstmt_240454(n, a);
							if (!!(LOC34)) goto LA35;
							goto LA26;
						}
						LA35: ;
					}
				} LA26: ;
				closeparsers_218056((&p));
				{
					if (!!(((*s).kind == ((NU8) 3)))) goto LA39;
					goto LA20;
				}
				LA39: ;
			}
		} LA20: ;
		closepasses_240404(a);
		idsynchronizationpoint_189453(((NI) 1000));
	}
	goto LA1;
	LA3: ;
	{
		Tnode190813* n;
		openpassescached_240342(a, module, rd);
		n = loadinitsection_232077(rd);
		{
			NI i_240766;
			NI HEX3Atmp_240776;
			NI LOC43;
			NI res_240779;
			i_240766 = 0;
			HEX3Atmp_240776 = 0;
			LOC43 = 0;
			LOC43 = sonslen_193403(n);
			HEX3Atmp_240776 = (NI)(LOC43 - ((NI) 1));
			res_240779 = ((NI) 0);
			{
				while (1) {
					if (!(res_240779 <= HEX3Atmp_240776)) goto LA45;
					i_240766 = res_240779;
					processtoplevelstmtcached_240513((*n).kindU.S6.sons->data[i_240766], a);
					res_240779 += ((NI) 1);
				} LA45: ;
			}
		}
		closepassescached_240563(a);
	}
	LA1: ;
	}BeforeRet: ;
}

N_NIMCALL(void, clearpasses_240182)(void) {
	gpasseslen_240176 = ((NI) 0);
}

N_NIMCALL(void, registerpass_240190)(Tpass240017* p) {
	gpasses_240175[(gpasseslen_240176)- 0] = (*p);
	gpasseslen_240176 += ((NI) 1);
}

N_NIMCALL(NIM_BOOL, astneeded_240093)(Tsym190843* s) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = ((12288 &(1<<(((*s).kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		LOC5 = ((8454144 & (*s).flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		LOC4 = !(((*(*s).typ).callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*(*s).ast).kindU.S6.sons->data[((NI) 2)]).kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		result = NIM_FALSE;
	}
	goto LA1;
	LA9: ;
	{
		result = NIM_TRUE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, carrypass_240208)(Tpass240017* p, Tsym190843* module, TY431293 m, TY431293* Result) {
	Tpasscontext240005* c;
	c = (*p).Field0(module);
	unsureAsgnRef((void**) (&(*Result).Field0), (*p).Field2(c, m.Field0));
	{
		if (!!(((*p).Field3 == NIM_NIL))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).Field1), (*p).Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field1), m.Field1);
	}
	LA1: ;
}

N_NIMCALL(void, carrypasses_240231)(Tnode190813* nodes, Tsym190843* module, Tpass240017* passes, NI passesLen0) {
	TY431293 passdata;
	memset((void*)(&passdata), 0, sizeof(passdata));
	passdata.Field0 = nodes;
	{
		Tpass240017 pass_240272;
		NI i_240277;
		memset((void*)(&pass_240272), 0, sizeof(pass_240272));
		i_240277 = ((NI) 0);
		{
			while (1) {
				TY431293 LOC4;
				if (!(i_240277 < passesLen0)) goto LA3;
				pass_240272 = passes[i_240277];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_240208((&pass_240272), module, passdata, (&LOC4));
				passdata.Field0 = LOC4.Field0;
				passdata.Field1 = LOC4.Field1;
				i_240277 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit)(void) {
static TNimNode TMP836[1];
NTI240005.size = sizeof(Tpasscontext240005);
NTI240005.kind = 17;
NTI240005.base = (&NTI3411);
NTI240005.flags = 1;
TMP836[0].kind = 1;
TMP836[0].offset = offsetof(Tpasscontext240005, fromcache);
TMP836[0].typ = (&NTI138);
TMP836[0].name = "fromCache";
NTI240005.node = &TMP836[0];
}

