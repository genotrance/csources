/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct TY355242 TY355242;
typedef struct TY355243 TY355243;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tsym191843 Tsym191843;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident167021 Tident167021;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tnode191813 Tnode191813;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib191831 Tlib191831;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct TY355243 {
Tsymseq191815* Field0;
Tsym191843* Field1;
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
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
typedef NimStringDesc* TY154967[2];
typedef Tsym191843* TY244446[1];
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
};
typedef NI TY27420[8];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib191831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode191813* path;
};
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27420 bits;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY355242 {
  TGenericSeq Sup;
  TY355243 data[SEQ_DECL_SIZE];
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
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP927)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NIM_BOOL, samemethodbucket_355269)(Tsym191843* a, Tsym191843* b);
N_NIMCALL(NI, sonslen_194351)(Ttype191849* n);
N_NIMCALL(NIM_BOOL, sametypeornil_226110)(Ttype191849* a, Ttype191849* b, NU8 flags);
N_NIMCALL(Ttype191849*, skiptypes_195167)(Ttype191849* t, NU64 kinds);
N_NIMCALL(Ttype191849*, lastson_194442)(Ttype191849* n);
N_NIMCALL(NIM_BOOL, sametype_226094)(Ttype191849* a, Ttype191849* b, NU8 flags);
N_NIMCALL(NI, inheritancediff_228064)(Ttype191849* a, Ttype191849* b);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, attachdispatcher_355368)(Tsym191843* s, Tnode191813* dispatcher);
static N_INLINE(NI, len_192097)(Tnode191813* n);
N_NIMCALL(void, add_192164)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Tnode191813*, lastson_194431)(Tnode191813* n);
N_NIMCALL(void, fixupdispatcher_355484)(Tsym191843* meth, Tsym191843* disp);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
N_NIMCALL(Tnode191813*, copytree_196028)(Tnode191813* src);
N_NIMCALL(void, message_165204)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, HEX24_194100)(NI16 x);
N_NIMCALL(void, checkmethodeffects_329189)(Tsym191843* disp, Tsym191843* branch);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tsym191843*, createdispatcher_355409)(Tsym191843* s);
N_NIMCALL(Tsym191843*, copysym_194607)(Tsym191843* s, NIM_BOOL keepid);
N_NIMCALL(Ttype191849*, copytype_194549)(Ttype191849* t, Tsym191843* owner, NIM_BOOL keepid);
N_NIMCALL(void, addson_193819)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Tnode191813*, newsymnode_193325)(Tsym191843* sym);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_81204, TNimType* mt);
N_NIMCALL(void, internalerror_165215)(Tlineinfo163338 info, NimStringDesc* errmsg);
N_NIMCALL(Tnode191813*, genconv_355017)(Tnode191813* n, Ttype191849* d, NIM_BOOL downcast);
N_NIMCALL(Tnode191813*, newnodeit_193807)(NU8 kind, Tlineinfo163338 info, Ttype191849* typ);
N_NIMCALL(Tnode191813*, newnode_192401)(NU8 kind);
N_NIMCALL(void, initintset_188927)(Intset188056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, relevantcol_355853)(Tsymseq191815* methods, NI col);
N_NIMCALL(void, incl_188856)(Intset188056* s, NI key);
N_NIMCALL(void, sortbucket_355959)(Tsymseq191815** a, Intset188056* relevantcols);
N_NIMCALL(NI, cmpsignatures_355907)(Tsym191843* a, Tsym191843* b, Intset188056* relevantcols);
N_NIMCALL(NIM_BOOL, contains_188829)(Intset188056* s, NI key);
N_NIMCALL(Tsym191843*, gendispatcher_356033)(Tsymseq191815* methods, Intset188056* relevantcols);
N_NIMCALL(Tnode191813*, newnodei_193351)(NU8 kind, Tlineinfo163338 info);
N_NIMCALL(Tsym191843*, getsyssym_238054)(NimStringDesc* name);
N_NIMCALL(Ttype191849*, getsystype_238030)(NU8 kind);
STRING_LITERAL(TMP3263, "method has lock level $1, but another method has $2", 51);
STRING_LITERAL(TMP3271, "no method dispatcher found", 26);
STRING_LITERAL(TMP3272, "cgmeth.genConv", 14);
STRING_LITERAL(TMP3273, "cgmeth.genConv: no upcast allowed", 33);
STRING_LITERAL(TMP3274, "cgmeth.genConv: no downcast allowed", 35);
STRING_LITERAL(TMP4206, "and", 3);
STRING_LITERAL(TMP4207, "of", 2);
TY355242* gmethods_355264;
TNimType NTI355243; /* tuple[methods: TSymSeq, dispatcher: PSym] */
extern TNimType NTI191815; /* TSymSeq */
extern TNimType NTI191811; /* PSym */
TNimType NTI355242; /* seq[tuple[methods: TSymSeq, dispatcher: PSym]] */
extern Tgcheap48216 gch_48244;
extern Tnode191813* emptynode_192807;
N_NIMCALL(void, TMP927)(void* p, NI op) {
	TY355242* a;
	NI LOC1;
	a = (TY355242*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, samemethodbucket_355269)(Tsym191843* a, Tsym191843* b) {
	NIM_BOOL result;
{	result = 0;
	result = NIM_FALSE;
	{
		if (!!(((*(*a).name).Sup.id == (*(*b).name).Sup.id))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI LOC7;
		NI LOC8;
		LOC7 = 0;
		LOC7 = sonslen_194351((*a).typ);
		LOC8 = 0;
		LOC8 = sonslen_194351((*b).typ);
		if (!!((LOC7 == LOC8))) goto LA9;
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = sametypeornil_226110((*(*a).typ).sons->data[((NI) 0)], (*(*b).typ).sons->data[((NI) 0)], 0);
		if (!!(LOC13)) goto LA14;
		goto BeforeRet;
	}
	LA14: ;
	{
		NI i_355293;
		NI HEX3Atmp_355340;
		NI LOC17;
		NI res_355343;
		i_355293 = 0;
		HEX3Atmp_355340 = 0;
		LOC17 = 0;
		LOC17 = sonslen_194351((*a).typ);
		HEX3Atmp_355340 = (NI)(LOC17 - ((NI) 1));
		res_355343 = ((NI) 1);
		{
			while (1) {
				Ttype191849* aa;
				Ttype191849* bb;
				if (!(res_355343 <= HEX3Atmp_355340)) goto LA19;
				i_355293 = res_355343;
				aa = (*(*a).typ).sons->data[i_355293];
				bb = (*(*b).typ).sons->data[i_355293];
				{
					while (1) {
						aa = skiptypes_195167(aa, 2048);
						bb = skiptypes_195167(bb, 2048);
						{
							NIM_BOOL LOC24;
							LOC24 = 0;
							LOC24 = ((*aa).kind == (*bb).kind);
							if (!(LOC24)) goto LA25;
							LOC24 = ((14680064 &(IL64(1)<<(((*aa).kind)&IL64(63))))!=0);
							LA25: ;
							if (!LOC24) goto LA26;
							aa = lastson_194442(aa);
							bb = lastson_194442(bb);
						}
						goto LA22;
						LA26: ;
						{
							goto LA20;
						}
						LA22: ;
					}
				} LA20: ;
				{
					NIM_BOOL LOC31;
					NIM_BOOL LOC33;
					NIM_BOOL LOC34;
					NI LOC37;
					LOC31 = 0;
					LOC31 = sametype_226094(aa, bb, 0);
					if (LOC31) goto LA32;
					LOC33 = 0;
					LOC34 = 0;
					LOC34 = ((*aa).kind == ((NU8) 17));
					if (!(LOC34)) goto LA35;
					LOC34 = ((*bb).kind == ((NU8) 17));
					LA35: ;
					LOC33 = LOC34;
					if (!(LOC33)) goto LA36;
					LOC37 = 0;
					LOC37 = inheritancediff_228064(bb, aa);
					LOC33 = (LOC37 < ((NI) 0));
					LA36: ;
					LOC31 = LOC33;
					LA32: ;
					if (!LOC31) goto LA38;
				}
				goto LA29;
				LA38: ;
				{
					goto BeforeRet;
				}
				LA29: ;
				res_355343 += ((NI) 1);
			} LA19: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46347* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46347* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NI, len_192097)(Tnode191813* n) {
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

N_NIMCALL(void, attachdispatcher_355368)(Tsym191843* s, Tnode191813* dispatcher) {
	NI L;
	NI LOC1;
	Tnode191813* x;
	LOC1 = 0;
	LOC1 = len_192097((*s).ast);
	L = (NI)(LOC1 - ((NI) 1));
	x = (*(*s).ast).kindU.S6.sons->data[L];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = ((*x).kind == ((NU8) 3));
		if (!(LOC4)) goto LA5;
		LOC4 = (((*(*x).kindU.S4.sym).flags &(1<<((((NU8) 25))&31)))!=0);
		LA5: ;
		if (!LOC4) goto LA6;
		asgnRefNoCycle((void**) (&(*(*s).ast).kindU.S6.sons->data[L]), dispatcher);
	}
	goto LA2;
	LA6: ;
	{
		add_192164((*s).ast, dispatcher);
	}
	LA2: ;
}

N_NIMCALL(void, fixupdispatcher_355484)(Tsym191843* meth, Tsym191843* disp) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI LOC5;
		NI LOC7;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = sonslen_194403((*disp).ast);
		LOC4 = (((NI) 7) < LOC5);
		if (!(LOC4)) goto LA6;
		LOC7 = 0;
		LOC7 = sonslen_194403((*meth).ast);
		LOC4 = (((NI) 7) < LOC7);
		LA6: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*disp).ast).kindU.S6.sons->data[((NI) 7)] == emptynode_192807);
		LA8: ;
		if (!LOC3) goto LA9;
		asgnRefNoCycle((void**) (&(*(*disp).ast).kindU.S6.sons->data[((NI) 7)]), copytree_196028((*(*meth).ast).kindU.S6.sons->data[((NI) 7)]));
	}
	LA9: ;
	{
		if (!((*(*disp).typ).locklevel == ((NI16) -1))) goto LA13;
		(*(*disp).typ).locklevel = (*(*meth).typ).locklevel;
	}
	goto LA11;
	LA13: ;
	{
		NIM_BOOL LOC16;
		TY154967 LOC20;
		NimStringDesc* LOC21;
		LOC16 = 0;
		LOC16 = !(((*(*meth).typ).locklevel == ((NI16) -1)));
		if (!(LOC16)) goto LA17;
		LOC16 = !(((*(*meth).typ).locklevel == (*(*disp).typ).locklevel));
		LA17: ;
		if (!LOC16) goto LA18;
		memset((void*)LOC20, 0, sizeof(LOC20));
		LOC20[0] = HEX24_194100((*(*meth).typ).locklevel);
		LOC20[1] = HEX24_194100((*(*disp).typ).locklevel);
		LOC21 = 0;
		LOC21 = nsuFormatOpenArray(((NimStringDesc*) &TMP3263), LOC20, 2);
		message_165204((*meth).info, ((NU16) 258), LOC21);
		{
			if (!((*(*disp).typ).locklevel < (*(*meth).typ).locklevel)) goto LA24;
			(*(*disp).typ).locklevel = (*(*meth).typ).locklevel;
		}
		LA24: ;
	}
	goto LA11;
	LA18: ;
	LA11: ;
}

N_NIMCALL(Tsym191843*, createdispatcher_355409)(Tsym191843* s) {
	Tsym191843* result;
	Tsym191843* disp;
	Tnode191813* LOC15;
	Tnode191813* LOC16;
{	result = 0;
	disp = copysym_194607(s, NIM_FALSE);
	(*disp).flags |= ((NI32)1)<<((((NU8) 25))%(sizeof(NI32)*8));
	(*disp).flags &= ~(((NI32)1) << ((((NU8) 1)) % (sizeof(NI32)*8)));
	asgnRefNoCycle((void**) (&(*disp).typ), copytype_194549((*disp).typ, (*(*disp).typ).owner, NIM_FALSE));
	{
		if (!((*(*disp).typ).callconv == ((NU8) 5))) goto LA3;
		(*(*disp).typ).callconv = ((NU8) 0);
	}
	LA3: ;
	asgnRefNoCycle((void**) (&(*disp).ast), copytree_196028((*s).ast));
	asgnRefNoCycle((void**) (&(*(*disp).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_192807);
	asgnRefNoCycle((void**) (&(*disp).loc.r), NIM_NIL);
	{
		if (!!(((*(*s).typ).sons->data[((NI) 0)] == NIM_NIL))) goto LA7;
		{
			NI LOC11;
			LOC11 = 0;
			LOC11 = sonslen_194403((*disp).ast);
			if (!(((NI) 7) < LOC11)) goto LA12;
			asgnRefNoCycle((void**) (&(*(*(*disp).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym), copysym_194607((*(*(*s).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym, NIM_FALSE));
		}
		goto LA9;
		LA12: ;
		{
			addson_193819((*disp).ast, emptynode_192807);
		}
		LA9: ;
	}
	LA7: ;
	LOC15 = 0;
	LOC15 = newsymnode_193325(disp);
	attachdispatcher_355368(s, LOC15);
	LOC16 = 0;
	LOC16 = newsymnode_193325(disp);
	attachdispatcher_355368(disp, LOC16);
	result = disp;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, methoddef_355636)(Tsym191843* s, NIM_BOOL fromcache) {
	NI L;
	TY355243 LOC10;
	TY244446 LOC11;
{	L = (gmethods_355264 ? gmethods_355264->Sup.len : 0);
	{
		NI i_355661;
		NI HEX3Atmp_355831;
		NI res_355834;
		i_355661 = 0;
		HEX3Atmp_355831 = 0;
		HEX3Atmp_355831 = (NI)(L - ((NI) 1));
		res_355834 = ((NI) 0);
		{
			while (1) {
				Tsym191843* disp;
				if (!(res_355834 <= HEX3Atmp_355831)) goto LA3;
				i_355661 = res_355834;
				disp = gmethods_355264->data[i_355661].Field1;
				{
					NIM_BOOL LOC6;
					Tnode191813* LOC9;
					LOC6 = 0;
					LOC6 = samemethodbucket_355269(disp, s);
					if (!LOC6) goto LA7;
					gmethods_355264->data[i_355661].Field0 = (Tsymseq191815*) incrSeq(&(gmethods_355264->data[i_355661].Field0)->Sup, sizeof(Tsym191843*));
					asgnRefNoCycle((void**) (&gmethods_355264->data[i_355661].Field0->data[gmethods_355264->data[i_355661].Field0->Sup.len-1]), s);
					LOC9 = 0;
					LOC9 = lastson_194431((*disp).ast);
					attachdispatcher_355368(s, LOC9);
					fixupdispatcher_355484(s, disp);
					checkmethodeffects_329189(disp, s);
					goto BeforeRet;
				}
				LA7: ;
				res_355834 += ((NI) 1);
			} LA3: ;
		}
	}
	memset((void*)(&LOC10), 0, sizeof(LOC10));
	LOC10.Field0 = (Tsymseq191815*) newSeq((&NTI191815), 1);
	memset((void*)LOC11, 0, sizeof(LOC11));
	LOC11[0] = s;
	asgnRefNoCycle((void**) (&LOC10.Field0->data[0]), LOC11[0]);
	LOC10.Field1 = createdispatcher_355409(s);
	gmethods_355264 = (TY355242*) incrSeq(&(gmethods_355264)->Sup, sizeof(TY355243));
	genericSeqAssign((&gmethods_355264->data[gmethods_355264->Sup.len-1].Field0), LOC10.Field0, (&NTI191815));
	asgnRefNoCycle((void**) (&gmethods_355264->data[gmethods_355264->Sup.len-1].Field1), LOC10.Field1);
	{
		if (!fromcache) goto LA14;
		internalerror_165215((*s).info, ((NimStringDesc*) &TMP3271));
	}
	LA14: ;
	}BeforeRet: ;
}

N_NIMCALL(Tnode191813*, genconv_355017)(Tnode191813* n, Ttype191849* d, NIM_BOOL downcast) {
	Tnode191813* result;
	Ttype191849* dest;
	Ttype191849* source;
	result = 0;
	dest = skiptypes_195167(d, IL64(211106247256320));
	source = skiptypes_195167((*n).typ, IL64(211106247256320));
	{
		NIM_BOOL LOC3;
		NI diff;
		LOC3 = 0;
		LOC3 = ((*source).kind == ((NU8) 17));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*dest).kind == ((NU8) 17));
		LA4: ;
		if (!LOC3) goto LA5;
		diff = inheritancediff_228064(dest, source);
		{
			if (!(diff == ((NI) IL64(9223372036854775807)))) goto LA9;
			internalerror_165215((*n).info, ((NimStringDesc*) &TMP3272));
		}
		LA9: ;
		{
			if (!(diff < ((NI) 0))) goto LA13;
			result = newnodeit_193807(((NU8) 67), (*n).info, d);
			addson_193819(result, n);
			{
				if (!downcast) goto LA17;
				internalerror_165215((*n).info, ((NimStringDesc*) &TMP3273));
			}
			LA17: ;
		}
		goto LA11;
		LA13: ;
		{
			if (!(((NI) 0) < diff)) goto LA20;
			result = newnodeit_193807(((NU8) 66), (*n).info, d);
			addson_193819(result, n);
			{
				if (!!(downcast)) goto LA24;
				internalerror_165215((*n).info, ((NimStringDesc*) &TMP3274));
			}
			LA24: ;
		}
		goto LA11;
		LA20: ;
		{
			result = n;
		}
		LA11: ;
	}
	goto LA1;
	LA5: ;
	{
		result = n;
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode191813*, methodcall_355054)(Tnode191813* n) {
	Tnode191813* result;
	Tsym191843* disp;
	Tnode191813* LOC1;
	result = 0;
	result = n;
	LOC1 = 0;
	LOC1 = lastson_194431((*(*(*result).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).ast);
	disp = (*LOC1).kindU.S4.sym;
	asgnRefNoCycle((void**) (&(*(*result).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym), disp);
	{
		NI i_355215;
		NI HEX3Atmp_355220;
		NI LOC3;
		NI res_355223;
		i_355215 = 0;
		HEX3Atmp_355220 = 0;
		LOC3 = 0;
		LOC3 = sonslen_194403(result);
		HEX3Atmp_355220 = (NI)(LOC3 - ((NI) 1));
		res_355223 = ((NI) 1);
		{
			while (1) {
				if (!(res_355223 <= HEX3Atmp_355220)) goto LA5;
				i_355215 = res_355223;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.sons->data[i_355215]), genconv_355017((*result).kindU.S6.sons->data[i_355215], (*(*disp).typ).sons->data[i_355215], NIM_TRUE));
				res_355223 += ((NI) 1);
			} LA5: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, relevantcol_355853)(Tsymseq191815* methods, NI col) {
	NIM_BOOL result;
	Ttype191849* t;
{	result = 0;
	t = skiptypes_195167((*(*methods->data[((NI) 0)]).typ).sons->data[col], IL64(211106247215360));
	{
		if (!((*t).kind == ((NU8) 17))) goto LA3;
		{
			NI i_355881;
			NI HEX3Atmp_355885;
			NI res_355888;
			i_355881 = 0;
			HEX3Atmp_355885 = 0;
			HEX3Atmp_355885 = (methods ? (methods->Sup.len-1) : -1);
			res_355888 = ((NI) 1);
			{
				while (1) {
					Ttype191849* t2;
					if (!(res_355888 <= HEX3Atmp_355885)) goto LA7;
					i_355881 = res_355888;
					t2 = skiptypes_195167((*(*methods->data[i_355881]).typ).sons->data[col], IL64(211106247215360));
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = sametype_226094(t2, t, 0);
						if (!!(LOC10)) goto LA11;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA11: ;
					res_355888 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	LA3: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, cmpsignatures_355907)(Tsym191843* a, Tsym191843* b, Intset188056* relevantcols) {
	NI result;
{	result = 0;
	{
		NI col_355926;
		NI HEX3Atmp_355937;
		NI LOC2;
		NI res_355940;
		col_355926 = 0;
		HEX3Atmp_355937 = 0;
		LOC2 = 0;
		LOC2 = sonslen_194351((*a).typ);
		HEX3Atmp_355937 = (NI)(LOC2 - ((NI) 1));
		res_355940 = ((NI) 1);
		{
			while (1) {
				if (!(res_355940 <= HEX3Atmp_355937)) goto LA4;
				col_355926 = res_355940;
				{
					NIM_BOOL LOC7;
					Ttype191849* aa;
					Ttype191849* bb;
					NI d;
					LOC7 = 0;
					LOC7 = contains_188829(relevantcols, col_355926);
					if (!LOC7) goto LA8;
					aa = skiptypes_195167((*(*a).typ).sons->data[col_355926], IL64(211106247215360));
					bb = skiptypes_195167((*(*b).typ).sons->data[col_355926], IL64(211106247215360));
					d = inheritancediff_228064(aa, bb);
					{
						if (!!((d == ((NI) IL64(9223372036854775807))))) goto LA12;
						result = d;
						goto BeforeRet;
					}
					LA12: ;
				}
				LA8: ;
				res_355940 += ((NI) 1);
			} LA4: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, sortbucket_355959)(Tsymseq191815** a, Intset188056* relevantcols) {
	NI n;
	NI h;
	n = ((*a) ? (*a)->Sup.len : 0);
	h = ((NI) 1);
	{
		while (1) {
			h = (NI)((NI)(((NI) 3) * h) + ((NI) 1));
			{
				if (!(n < h)) goto LA5;
				goto LA1;
			}
			LA5: ;
		}
	} LA1: ;
	{
		while (1) {
			h = (NI)(h / ((NI) 3));
			{
				NI i_355986;
				NI HEX3Atmp_355993;
				NI res_355996;
				i_355986 = 0;
				HEX3Atmp_355993 = 0;
				HEX3Atmp_355993 = (NI)(n - ((NI) 1));
				res_355996 = h;
				{
					while (1) {
						Tsym191843* v;
						NI j;
						if (!(res_355996 <= HEX3Atmp_355993)) goto LA11;
						i_355986 = res_355996;
						v = (*a)->data[i_355986];
						j = i_355986;
						{
							while (1) {
								NI LOC14;
								LOC14 = 0;
								LOC14 = cmpsignatures_355907((*a)->data[(NI)(j - h)], v, relevantcols);
								if (!(((NI) 0) <= LOC14)) goto LA13;
								asgnRefNoCycle((void**) (&(*a)->data[j]), (*a)->data[(NI)(j - h)]);
								j = (NI)(j - h);
								{
									if (!(j < h)) goto LA17;
									goto LA12;
								}
								LA17: ;
							} LA13: ;
						} LA12: ;
						asgnRefNoCycle((void**) (&(*a)->data[j]), v);
						res_355996 += ((NI) 1);
					} LA11: ;
				}
			}
			{
				if (!(h == ((NI) 1))) goto LA21;
				goto LA7;
			}
			LA21: ;
		}
	} LA7: ;
}

N_NIMCALL(Tsym191843*, gendispatcher_356033)(Tsymseq191815* methods, Intset188056* relevantcols) {
	Tsym191843* result;
	Tsym191843* base;
	Tnode191813* LOC1;
	NI paramlen;
	Tnode191813* disp;
	Tsym191843* ands;
	Tsym191843* iss;
	result = 0;
	LOC1 = 0;
	LOC1 = lastson_194431((*methods->data[((NI) 0)]).ast);
	base = (*LOC1).kindU.S4.sym;
	result = base;
	paramlen = sonslen_194351((*base).typ);
	disp = newnodei_193351(((NU8) 92), (*base).info);
	ands = getsyssym_238054(((NimStringDesc*) &TMP4206));
	iss = getsyssym_238054(((NimStringDesc*) &TMP4207));
	{
		NI meth_356059;
		NI HEX3Atmp_356170;
		NI res_356173;
		meth_356059 = 0;
		HEX3Atmp_356170 = 0;
		HEX3Atmp_356170 = (methods ? (methods->Sup.len-1) : -1);
		res_356173 = ((NI) 0);
		{
			while (1) {
				Tsym191843* curr;
				Tnode191813* cond;
				Tnode191813* call;
				Tnode191813* LOC24;
				Tnode191813* ret;
				if (!(res_356173 <= HEX3Atmp_356170)) goto LA4;
				meth_356059 = res_356173;
				curr = methods->data[meth_356059];
				cond = NIM_NIL;
				{
					NI col_356074;
					NI HEX3Atmp_356154;
					NI res_356157;
					col_356074 = 0;
					HEX3Atmp_356154 = 0;
					HEX3Atmp_356154 = (NI)(paramlen - ((NI) 1));
					res_356157 = ((NI) 1);
					{
						while (1) {
							if (!(res_356157 <= HEX3Atmp_356154)) goto LA7;
							col_356074 = res_356157;
							{
								NIM_BOOL LOC10;
								Tnode191813* isn;
								Ttype191849* LOC13;
								Tnode191813* LOC14;
								Tnode191813* LOC15;
								Tnode191813* LOC16;
								LOC10 = 0;
								LOC10 = contains_188829(relevantcols, col_356074);
								if (!LOC10) goto LA11;
								LOC13 = 0;
								LOC13 = getsystype_238030(((NU8) 1));
								isn = newnodeit_193807(((NU8) 27), (*base).info, LOC13);
								LOC14 = 0;
								LOC14 = newsymnode_193325(iss);
								addson_193819(isn, LOC14);
								LOC15 = 0;
								LOC15 = newsymnode_193325((*(*(*(*base).typ).n).kindU.S6.sons->data[col_356074]).kindU.S4.sym);
								addson_193819(isn, LOC15);
								LOC16 = 0;
								LOC16 = newnodeit_193807(((NU8) 4), (*base).info, (*(*curr).typ).sons->data[col_356074]);
								addson_193819(isn, LOC16);
								{
									Tnode191813* a;
									Ttype191849* LOC21;
									Tnode191813* LOC22;
									if (!!((cond == NIM_NIL))) goto LA19;
									LOC21 = 0;
									LOC21 = getsystype_238030(((NU8) 1));
									a = newnodeit_193807(((NU8) 27), (*base).info, LOC21);
									LOC22 = 0;
									LOC22 = newsymnode_193325(ands);
									addson_193819(a, LOC22);
									addson_193819(a, cond);
									addson_193819(a, isn);
									cond = a;
								}
								goto LA17;
								LA19: ;
								{
									cond = isn;
								}
								LA17: ;
							}
							LA11: ;
							res_356157 += ((NI) 1);
						} LA7: ;
					}
				}
				call = newnodei_193351(((NU8) 27), (*base).info);
				LOC24 = 0;
				LOC24 = newsymnode_193325(curr);
				addson_193819(call, LOC24);
				{
					NI col_356110;
					NI HEX3Atmp_356162;
					NI res_356165;
					col_356110 = 0;
					HEX3Atmp_356162 = 0;
					HEX3Atmp_356162 = (NI)(paramlen - ((NI) 1));
					res_356165 = ((NI) 1);
					{
						while (1) {
							Tnode191813* LOC28;
							Tnode191813* LOC29;
							if (!(res_356165 <= HEX3Atmp_356162)) goto LA27;
							col_356110 = res_356165;
							LOC28 = 0;
							LOC28 = newsymnode_193325((*(*(*(*base).typ).n).kindU.S6.sons->data[col_356110]).kindU.S4.sym);
							LOC29 = 0;
							LOC29 = genconv_355017(LOC28, (*(*curr).typ).sons->data[col_356110], NIM_FALSE);
							addson_193819(call, LOC29);
							res_356165 += ((NI) 1);
						} LA27: ;
					}
				}
				ret = 0;
				{
					Tnode191813* a;
					Tnode191813* LOC34;
					if (!!(((*(*base).typ).sons->data[((NI) 0)] == NIM_NIL))) goto LA32;
					a = newnodei_193351(((NU8) 73), (*base).info);
					LOC34 = 0;
					LOC34 = newsymnode_193325((*(*(*base).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym);
					addson_193819(a, LOC34);
					addson_193819(a, call);
					ret = newnodei_193351(((NU8) 109), (*base).info);
					addson_193819(ret, a);
				}
				goto LA30;
				LA32: ;
				{
					ret = call;
				}
				LA30: ;
				{
					Tnode191813* a;
					if (!!((cond == NIM_NIL))) goto LA38;
					a = newnodei_193351(((NU8) 86), (*base).info);
					addson_193819(a, cond);
					addson_193819(a, ret);
					addson_193819(disp, a);
				}
				goto LA36;
				LA38: ;
				{
					disp = ret;
				}
				LA36: ;
				res_356173 += ((NI) 1);
			} LA4: ;
		}
	}
	asgnRefNoCycle((void**) (&(*(*result).ast).kindU.S6.sons->data[((NI) 6)]), disp);
	return result;
}

N_NIMCALL(Tnode191813*, generatemethoddispatchers_356210)(void) {
	Tnode191813* result;
	result = 0;
	result = newnode_192401(((NU8) 115));
	{
		NI bucket_356233;
		NI HEX3Atmp_356260;
		NI res_356263;
		bucket_356233 = 0;
		HEX3Atmp_356260 = 0;
		HEX3Atmp_356260 = (NI)((gmethods_355264 ? gmethods_355264->Sup.len : 0) - ((NI) 1));
		res_356263 = ((NI) 0);
		{
			while (1) {
				Intset188056 relevantcols;
				Tsym191843* LOC13;
				Tnode191813* LOC14;
				if (!(res_356263 <= HEX3Atmp_356260)) goto LA3;
				bucket_356233 = res_356263;
				memset((void*)(&relevantcols), 0, sizeof(relevantcols));
				chckNil((void*)(&relevantcols));
				memset((void*)(&relevantcols), 0, sizeof(relevantcols));
				initintset_188927((&relevantcols));
				{
					NI col_356248;
					NI HEX3Atmp_356253;
					NI LOC5;
					NI res_356256;
					col_356248 = 0;
					HEX3Atmp_356253 = 0;
					LOC5 = 0;
					LOC5 = sonslen_194351((*gmethods_355264->data[bucket_356233].Field0->data[((NI) 0)]).typ);
					HEX3Atmp_356253 = (NI)(LOC5 - ((NI) 1));
					res_356256 = ((NI) 1);
					{
						while (1) {
							if (!(res_356256 <= HEX3Atmp_356253)) goto LA7;
							col_356248 = res_356256;
							{
								NIM_BOOL LOC10;
								LOC10 = 0;
								LOC10 = relevantcol_355853(gmethods_355264->data[bucket_356233].Field0, col_356248);
								if (!LOC10) goto LA11;
								incl_188856((&relevantcols), col_356248);
							}
							LA11: ;
							res_356256 += ((NI) 1);
						} LA7: ;
					}
				}
				sortbucket_355959((&gmethods_355264->data[bucket_356233].Field0), (&relevantcols));
				LOC13 = 0;
				LOC13 = gendispatcher_356033(gmethods_355264->data[bucket_356233].Field0, (&relevantcols));
				LOC14 = 0;
				LOC14 = newsymnode_193325(LOC13);
				addson_193819(result, LOC14);
				res_356263 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgmethInit)(void) {
	if (gmethods_355264) nimGCunrefNoCycle(gmethods_355264);
	gmethods_355264 = (TY355242*) newSeqRC1((&NTI355242), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgmethDatInit)(void) {
static TNimNode* TMP926[2];
static TNimNode TMP924[3];
NTI355243.size = sizeof(TY355243);
NTI355243.kind = 18;
NTI355243.base = 0;
NTI355243.flags = 2;
TMP926[0] = &TMP924[1];
TMP924[1].kind = 1;
TMP924[1].offset = offsetof(TY355243, Field0);
TMP924[1].typ = (&NTI191815);
TMP924[1].name = "Field0";
TMP926[1] = &TMP924[2];
TMP924[2].kind = 1;
TMP924[2].offset = offsetof(TY355243, Field1);
TMP924[2].typ = (&NTI191811);
TMP924[2].name = "Field1";
TMP924[0].len = 2; TMP924[0].kind = 2; TMP924[0].sons = &TMP926[0];
NTI355243.node = &TMP924[0];
NTI355242.size = sizeof(TY355242*);
NTI355242.kind = 24;
NTI355242.base = (&NTI355243);
NTI355242.flags = 2;
NTI355242.marker = TMP927;
}

