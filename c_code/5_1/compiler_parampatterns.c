/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode190813 Tnode190813;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tsym190843 Tsym190843;
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
typedef struct TY86145 TY86145;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct TY190933 TY190933;
typedef NIM_BOOL TY268289[65];
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
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct TY86145 {
NimStringDesc* Field0;
NI Field1;
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
typedef NI TY27220[16];
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
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
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
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isatom_195905)(Tnode190813* n);
N_NIMCALL(NU8, isassignable_268056)(Tsym190843* owner, Tnode190813* n);
N_NIMCALL(Ttype190849*, skiptypes_194167)(Ttype190849* t, NU64 kinds);
N_NIMCALL(NIM_BOOL, comparetypes_227047)(Ttype190849* x, Ttype190849* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU16, getmagic_219403)(Tnode190813* op);
N_NIMCALL(NU8, checkforsideeffects_267869)(Tnode190813* n);
static N_INLINE(NIM_BOOL, isroutine_195764)(Tsym190843* s);
static N_INLINE(NI, len_191097)(Tnode190813* n);
N_NIMCALL(Tnode190813*, newnodei_192351)(NU8 kind, Tlineinfo162338 info);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, compileconstraints_267113)(Tnode190813* p, NimStringDesc** result);
N_NIMCALL(void, patternerror_267051)(Tnode190813* n);
N_NIMCALL(void, localerror_164171)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_212058)(Tnode190813* n, NU8 renderflags);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(void, add_267061)(NimStringDesc** code, NU8 op);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(void, internalerror_164234)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_164322)(TY86145 x);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_82329, TNimType* typ);
N_NIMCALL(void, internalerror_164215)(Tlineinfo162338 info, NimStringDesc* errmsg);
STRING_LITERAL(TMP3112, "|", 1);
STRING_LITERAL(TMP3113, "&", 1);
STRING_LITERAL(TMP3114, "~", 1);
STRING_LITERAL(TMP3115, "atom", 4);
STRING_LITERAL(TMP3116, "lit", 3);
STRING_LITERAL(TMP3117, "sym", 3);
STRING_LITERAL(TMP3118, "ident", 5);
STRING_LITERAL(TMP3119, "call", 4);
STRING_LITERAL(TMP3120, "alias", 5);
STRING_LITERAL(TMP3121, "noalias", 7);
STRING_LITERAL(TMP3122, "lvalue", 6);
STRING_LITERAL(TMP3123, "local", 5);
STRING_LITERAL(TMP3124, "sideeffect", 10);
STRING_LITERAL(TMP3125, "nosideeffect", 12);
STRING_LITERAL(TMP3127, "compiler/parampatterns.nim", 26);
NIM_CONST TY86145 TMP3126 = {((NimStringDesc*) &TMP3127),
((NI) 100)}
;
NIM_CONST TY86145 TMP3128 = {((NimStringDesc*) &TMP3127),
((NI) 107)}
;
STRING_LITERAL(TMP3129, "parameter pattern too complex", 29);
extern Tgcheap48016 gch_48044;
extern TNimType NTI190441; /* TSymKind */
extern TNimType NTI190029; /* TNodeKind */

static N_INLINE(NIM_BOOL, isatom_195905)(Tnode190813* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU8, isassignable_268056)(Tsym190843* owner, Tnode190813* n) {
	NU8 result;
	result = 0;
	result = ((NU8) 0);
	switch ((*n).kind) {
	case ((NU8) 3):
	{
		{
			if (!((2336 &(1<<(((*(*n).kindU.S4.sym).kind)&31)))!=0)) goto LA4;
			{
				NIM_BOOL LOC8;
				NIM_BOOL LOC9;
				LOC8 = 0;
				LOC9 = 0;
				LOC9 = !((owner == NIM_NIL));
				if (!(LOC9)) goto LA10;
				LOC9 = ((*owner).Sup.id == (*(*(*n).kindU.S4.sym).owner).Sup.id);
				LA10: ;
				LOC8 = LOC9;
				if (!(LOC8)) goto LA11;
				LOC8 = !((((*(*n).kindU.S4.sym).flags &(1<<((((NU8) 3))&31)))!=0));
				LA11: ;
				if (!LOC8) goto LA12;
				result = ((NU8) 2);
			}
			goto LA6;
			LA12: ;
			{
				result = ((NU8) 1);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			NIM_BOOL LOC16;
			LOC16 = 0;
			LOC16 = ((*(*n).kindU.S4.sym).kind == ((NU8) 3));
			if (!(LOC16)) goto LA17;
			LOC16 = ((*(*(*n).kindU.S4.sym).typ).kind == ((NU8) 23));
			LA17: ;
			if (!LOC16) goto LA18;
			result = ((NU8) 1);
		}
		goto LA2;
		LA18: ;
		{
			Ttype190849* t;
			if (!((*(*n).kindU.S4.sym).kind == ((NU8) 7))) goto LA21;
			t = skiptypes_194167((*(*n).kindU.S4.sym).typ, 256);
			{
				if (!((*t).kind == ((NU8) 23))) goto LA25;
				result = ((NU8) 4);
			}
			LA25: ;
		}
		goto LA2;
		LA21: ;
		LA2: ;
	}
	break;
	case ((NU8) 45):
	{
		{
			Ttype190849* LOC30;
			LOC30 = 0;
			LOC30 = skiptypes_194167((*(*n).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((*LOC30).kind == ((NU8) 23) || (*LOC30).kind == ((NU8) 21) || (*LOC30).kind == ((NU8) 22))) goto LA31;
			result = ((NU8) 1);
		}
		goto LA28;
		LA31: ;
		{
			result = isassignable_268056(owner, (*n).kindU.S6.sons->data[((NI) 0)]);
		}
		LA28: ;
		{
			NIM_BOOL LOC36;
			LOC36 = 0;
			LOC36 = !((result == ((NU8) 0)));
			if (!(LOC36)) goto LA37;
			LOC36 = (((*(*(*n).kindU.S6.sons->data[((NI) 1)]).kindU.S4.sym).flags &(1<<((((NU8) 18))&31)))!=0);
			LA37: ;
			if (!LOC36) goto LA38;
			result = ((NU8) 3);
		}
		LA38: ;
	}
	break;
	case ((NU8) 42):
	{
		{
			Ttype190849* LOC43;
			LOC43 = 0;
			LOC43 = skiptypes_194167((*(*n).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((*LOC43).kind == ((NU8) 23) || (*LOC43).kind == ((NU8) 21) || (*LOC43).kind == ((NU8) 22))) goto LA44;
			result = ((NU8) 1);
		}
		goto LA41;
		LA44: ;
		{
			result = isassignable_268056(owner, (*n).kindU.S6.sons->data[((NI) 0)]);
		}
		LA41: ;
	}
	break;
	case ((NU8) 58):
	case ((NU8) 59):
	case ((NU8) 60):
	{
		{
			Ttype190849* LOC50;
			LOC50 = 0;
			LOC50 = skiptypes_194167((*n).typ, IL64(211106247256064));
			if (!((*LOC50).kind == ((NU8) 27) || (*LOC50).kind == ((NU8) 18) || (*LOC50).kind == ((NU8) 17))) goto LA51;
			result = isassignable_268056(owner, (*n).kindU.S6.sons->data[((NI) 1)]);
		}
		goto LA48;
		LA51: ;
		{
			NIM_BOOL LOC54;
			LOC54 = 0;
			LOC54 = comparetypes_227047((*n).typ, (*(*n).kindU.S6.sons->data[((NI) 1)]).typ, ((NU8) 1), 0);
			if (!LOC54) goto LA55;
			result = isassignable_268056(owner, (*n).kindU.S6.sons->data[((NI) 1)]);
		}
		goto LA48;
		LA55: ;
		LA48: ;
	}
	break;
	case ((NU8) 65):
	case ((NU8) 47):
	case ((NU8) 64):
	{
		result = ((NU8) 1);
	}
	break;
	case ((NU8) 67):
	case ((NU8) 66):
	case ((NU8) 46):
	{
		result = isassignable_268056(owner, (*n).kindU.S6.sons->data[((NI) 0)]);
	}
	break;
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		{
			NU16 LOC62;
			LOC62 = 0;
			LOC62 = getmagic_219403(n);
			if (!(LOC62 == ((NU16) 150))) goto LA63;
			result = isassignable_268056(owner, (*n).kindU.S6.sons->data[((NI) 1)]);
		}
		LA63: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, isroutine_195764)(Tsym190843* s) {
	NIM_BOOL result;
	result = 0;
	result = ((520192 &(1<<(((*s).kind)&31)))!=0);
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

N_NIMCALL(NU8, checkforsideeffects_267869)(Tnode190813* n) {
	NU8 result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		Tnode190813* op;
		op = (*n).kindU.S6.sons->data[((NI) 0)];
		{
			NIM_BOOL LOC4;
			Tsym190843* s;
			LOC4 = 0;
			LOC4 = ((*op).kind == ((NU8) 3));
			if (!(LOC4)) goto LA5;
			LOC4 = isroutine_195764((*op).kindU.S4.sym);
			LA5: ;
			if (!LOC4) goto LA6;
			s = (*op).kindU.S4.sym;
			{
				if (!(((*s).flags &(1<<((((NU8) 11))&31)))!=0)) goto LA10;
				result = ((NU8) 1);
				goto BeforeRet;
			}
			LA10: ;
			result = ((NU8) 2);
		}
		goto LA2;
		LA6: ;
		{
			if (!(((*(*op).typ).flags &(1<<((((NU8) 1))&31)))!=0)) goto LA13;
			result = ((NU8) 2);
		}
		goto LA2;
		LA13: ;
		{
			result = ((NU8) 1);
			goto BeforeRet;
		}
		LA2: ;
		{
			NI i_267927;
			NI HEX3Atmp_268007;
			NI LOC17;
			NI res_268010;
			i_267927 = 0;
			HEX3Atmp_268007 = 0;
			LOC17 = 0;
			LOC17 = len_191097(n);
			HEX3Atmp_268007 = (LOC17 - 1);
			res_268010 = ((NI) 0);
			{
				while (1) {
					NU8 ret;
					if (!(res_268010 <= HEX3Atmp_268007)) goto LA19;
					i_267927 = res_268010;
					ret = checkforsideeffects_267869((*n).kindU.S6.sons->data[i_267927]);
					{
						if (!(ret == ((NU8) 1))) goto LA22;
						result = ret;
						goto BeforeRet;
					}
					goto LA20;
					LA22: ;
					{
						NIM_BOOL LOC25;
						LOC25 = 0;
						LOC25 = (ret == ((NU8) 0));
						if (!(LOC25)) goto LA26;
						LOC25 = (result == ((NU8) 2));
						LA26: ;
						if (!LOC25) goto LA27;
						result = ((NU8) 0);
					}
					goto LA20;
					LA27: ;
					LA20: ;
					res_268010 += ((NI) 1);
				} LA19: ;
			}
		}
	}
	break;
	case ((NU8) 0) ... ((NU8) 23):
	{
		result = ((NU8) 2);
	}
	break;
	default:
	{
		result = ((NU8) 2);
		{
			NI i_267976;
			NI HEX3Atmp_268015;
			NI LOC32;
			NI res_268018;
			i_267976 = 0;
			HEX3Atmp_268015 = 0;
			LOC32 = 0;
			LOC32 = len_191097(n);
			HEX3Atmp_268015 = (LOC32 - 1);
			res_268018 = ((NI) 0);
			{
				while (1) {
					NU8 ret;
					if (!(res_268018 <= HEX3Atmp_268015)) goto LA34;
					i_267976 = res_268018;
					ret = checkforsideeffects_267869((*n).kindU.S6.sons->data[i_267976]);
					{
						if (!(ret == ((NU8) 1))) goto LA37;
						result = ret;
						goto BeforeRet;
					}
					goto LA35;
					LA37: ;
					{
						NIM_BOOL LOC40;
						LOC40 = 0;
						LOC40 = (ret == ((NU8) 0));
						if (!(LOC40)) goto LA41;
						LOC40 = (result == ((NU8) 2));
						LA41: ;
						if (!LOC40) goto LA42;
						result = ((NU8) 0);
					}
					goto LA35;
					LA42: ;
					LA35: ;
					res_268018 += ((NI) 1);
				} LA34: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, matchnodekinds_268284)(Tnode190813* p, Tnode190813* n) {
	NIM_BOOL result;
	TY268289 stack;
	NI sp;
	NimStringDesc* code;
	NI pc;
	result = 0;
	stack[(((NI) 0))- 0] = NIM_TRUE;
	sp = ((NI) 1);
	code = (*p).kindU.S3.strval;
	pc = ((NI) 1);
	{
		while (1) {
			switch (((NU8) (((NU8)(code->data[pc]))))) {
			case ((NU8) 1):
			{
				goto LA1;
			}
			break;
			case ((NU8) 2):
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = stack[((NI)(sp - ((NI) 1)))- 0];
				if (LOC5) goto LA6;
				LOC5 = stack[((NI)(sp - ((NI) 2)))- 0];
				LA6: ;
				stack[((NI)(sp - ((NI) 2)))- 0] = LOC5;
				sp -= ((NI) 1);
			}
			break;
			case ((NU8) 3):
			{
				NIM_BOOL LOC8;
				LOC8 = 0;
				LOC8 = stack[((NI)(sp - ((NI) 1)))- 0];
				if (!(LOC8)) goto LA9;
				LOC8 = stack[((NI)(sp - ((NI) 2)))- 0];
				LA9: ;
				stack[((NI)(sp - ((NI) 2)))- 0] = LOC8;
				sp -= ((NI) 1);
			}
			break;
			case ((NU8) 4):
			{
				stack[((NI)(sp - ((NI) 1)))- 0] = !(stack[((NI)(sp - ((NI) 1)))- 0]);
			}
			break;
			case ((NU8) 5):
			{
				stack[(sp)- 0] = ((*n).kind == ((NU8) 3));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 6):
			{
				stack[(sp)- 0] = isatom_195905(n);
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 7):
			{
				stack[(sp)- 0] = ((*n).kind >= ((NU8) 5) && (*n).kind <= ((NU8) 23));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 8):
			{
				stack[(sp)- 0] = ((*n).kind == ((NU8) 2));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 9):
			{
				stack[(sp)- 0] = ((*n).kind == ((NU8) 27) || (*n).kind == ((NU8) 29) || (*n).kind == ((NU8) 30) || (*n).kind == ((NU8) 31) || (*n).kind == ((NU8) 26) || (*n).kind == ((NU8) 28) || (*n).kind == ((NU8) 32));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 10):
			{
				NU8 kind;
				NIM_BOOL LOC17;
				kind = ((NU8) (((NU8)(code->data[(NI)(pc + ((NI) 1))]))));
				LOC17 = 0;
				LOC17 = ((*n).kind == ((NU8) 3));
				if (!(LOC17)) goto LA18;
				LOC17 = ((*(*n).kindU.S4.sym).kind == kind);
				LA18: ;
				stack[(sp)- 0] = LOC17;
				sp += ((NI) 1);
				pc += ((NI) 1);
			}
			break;
			case ((NU8) 11):
			{
				NU8 kind;
				kind = ((NU8) (((NU8)(code->data[(NI)(pc + ((NI) 1))]))));
				stack[(sp)- 0] = ((*n).kind == kind);
				sp += ((NI) 1);
				pc += ((NI) 1);
			}
			break;
			case ((NU8) 12):
			{
				NU8 LOC21;
				LOC21 = 0;
				LOC21 = isassignable_268056(NIM_NIL, n);
				stack[(sp)- 0] = ((6 &(1<<((LOC21)&7)))!=0);
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 13):
			{
				NU8 LOC23;
				LOC23 = 0;
				LOC23 = isassignable_268056(NIM_NIL, n);
				stack[(sp)- 0] = (LOC23 == ((NU8) 2));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 14):
			{
				NU8 LOC25;
				LOC25 = 0;
				LOC25 = checkforsideeffects_267869(n);
				stack[(sp)- 0] = (LOC25 == ((NU8) 1));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 15):
			{
				NU8 LOC27;
				LOC27 = 0;
				LOC27 = checkforsideeffects_267869(n);
				stack[(sp)- 0] = !((LOC27 == ((NU8) 1)));
				sp += ((NI) 1);
			}
			break;
			}
			pc += ((NI) 1);
		}
	} LA1: ;
	result = stack[((NI)(sp - ((NI) 1)))- 0];
	return result;
}

N_NIMCALL(NIM_BOOL, islvalue_268263)(Tnode190813* n) {
	NIM_BOOL result;
	NU8 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = isassignable_268056(NIM_NIL, n);
	result = ((22 &(1<<((LOC1)&7)))!=0);
	return result;
}

static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr) {
	Tcell46147* result;
	result = 0;
	result = ((Tcell46147*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46147))))));
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
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, patternerror_267051)(Tnode190813* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_212058(n, 4);
	localerror_164171((*n).info, ((NU16) 1), LOC1);
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

static N_INLINE(void, add_267061)(NimStringDesc** code, NU8 op) {
	(*code) = addChar((*code), ((NIM_CHAR) (((NI) (op)))));
}

N_NIMCALL(void, compileconstraints_267113)(Tnode190813* p, NimStringDesc** result) {
{	switch ((*p).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		Tident166021* op;
		{
			if (!!(((*(*p).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2)))) goto LA4;
			patternerror_267051((*p).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA4: ;
		op = (*(*p).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
		{
			NI LOC8;
			LOC8 = 0;
			LOC8 = len_191097(p);
			if (!(LOC8 == ((NI) 3))) goto LA9;
			{
				NIM_BOOL LOC13;
				LOC13 = 0;
				LOC13 = eqStrings((*op).s, ((NimStringDesc*) &TMP3112));
				if (LOC13) goto LA14;
				LOC13 = ((*op).Sup.id == ((NI) 49));
				LA14: ;
				if (!LOC13) goto LA15;
				compileconstraints_267113((*p).kindU.S6.sons->data[((NI) 1)], result);
				compileconstraints_267113((*p).kindU.S6.sons->data[((NI) 2)], result);
				add_267061(result, ((NU8) 2));
			}
			goto LA11;
			LA15: ;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = eqStrings((*op).s, ((NimStringDesc*) &TMP3113));
				if (LOC18) goto LA19;
				LOC18 = ((*op).Sup.id == ((NI) 2));
				LA19: ;
				if (!LOC18) goto LA20;
				compileconstraints_267113((*p).kindU.S6.sons->data[((NI) 1)], result);
				compileconstraints_267113((*p).kindU.S6.sons->data[((NI) 2)], result);
				add_267061(result, ((NU8) 3));
			}
			goto LA11;
			LA20: ;
			{
				patternerror_267051(p);
			}
			LA11: ;
		}
		goto LA6;
		LA9: ;
		{
			NIM_BOOL LOC24;
			NI LOC25;
			NIM_BOOL LOC27;
			LOC24 = 0;
			LOC25 = 0;
			LOC25 = len_191097(p);
			LOC24 = (LOC25 == ((NI) 2));
			if (!(LOC24)) goto LA26;
			LOC27 = 0;
			LOC27 = eqStrings((*op).s, ((NimStringDesc*) &TMP3114));
			if (LOC27) goto LA28;
			LOC27 = ((*op).Sup.id == ((NI) 45));
			LA28: ;
			LOC24 = LOC27;
			LA26: ;
			if (!LOC24) goto LA29;
			compileconstraints_267113((*p).kindU.S6.sons->data[((NI) 1)], result);
			add_267061(result, ((NU8) 4));
		}
		goto LA6;
		LA29: ;
		{
			patternerror_267051(p);
		}
		LA6: ;
	}
	break;
	case ((NU8) 53):
	case ((NU8) 37):
	{
		{
			NI LOC35;
			LOC35 = 0;
			LOC35 = len_191097(p);
			if (!(LOC35 == ((NI) 1))) goto LA36;
			compileconstraints_267113((*p).kindU.S6.sons->data[((NI) 0)], result);
		}
		goto LA33;
		LA36: ;
		{
			patternerror_267051(p);
		}
		LA33: ;
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* spec;
		spec = nsuNormalize((*(*p).kindU.S5.ident).s);
		switch (hashString(spec) & 15) {
		case 1: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3125))) goto LA50;
break;
		case 3: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3121))) goto LA46;
if (eqStrings(spec, ((NimStringDesc*) &TMP3122))) goto LA47;
if (eqStrings(spec, ((NimStringDesc*) &TMP3124))) goto LA49;
break;
		case 4: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3117))) goto LA42;
break;
		case 6: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3118))) goto LA43;
if (eqStrings(spec, ((NimStringDesc*) &TMP3123))) goto LA48;
break;
		case 11: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3115))) goto LA40;
break;
		case 12: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3116))) goto LA41;
break;
		case 13: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3119))) goto LA44;
break;
		case 14: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3120))) goto LA45;
break;
		}
		goto LA51;
		LA40: ;
		{
			add_267061(result, ((NU8) 6));
		}
		goto LA52;
		LA41: ;
		{
			add_267061(result, ((NU8) 7));
		}
		goto LA52;
		LA42: ;
		{
			add_267061(result, ((NU8) 5));
		}
		goto LA52;
		LA43: ;
		{
			add_267061(result, ((NU8) 8));
		}
		goto LA52;
		LA44: ;
		{
			add_267061(result, ((NU8) 9));
		}
		goto LA52;
		LA45: ;
		{
			(*result)->data[((NI) 0)] = 2;
		}
		goto LA52;
		LA46: ;
		{
			(*result)->data[((NI) 0)] = 3;
		}
		goto LA52;
		LA47: ;
		{
			add_267061(result, ((NU8) 12));
		}
		goto LA52;
		LA48: ;
		{
			add_267061(result, ((NU8) 13));
		}
		goto LA52;
		LA49: ;
		{
			add_267061(result, ((NU8) 14));
		}
		goto LA52;
		LA50: ;
		{
			add_267061(result, ((NU8) 15));
		}
		goto LA52;
		LA51: ;
		{
			{
				NimStringDesc* LOC69;
				if (!NIM_FALSE) goto LA67;
				LOC69 = 0;
				LOC69 = HEX24_164322(TMP3126);
				internalerror_164234(LOC69);
			}
			LA67: ;
			{
				NU8 i_267423;
				NI res_267644;
				i_267423 = 0;
				res_267644 = ((NI) 0);
				{
					while (1) {
						if (!(res_267644 <= ((NI) 25))) goto LA72;
						i_267423 = ((NU8) (res_267644));
						{
							NimStringDesc* LOC75;
							NI LOC76;
							LOC75 = 0;
							LOC75 = copyStr(reprEnum(i_267423, (&NTI190441)), ((NI) 2));
							LOC76 = 0;
							LOC76 = nsuCmpIgnoreStyle(LOC75, spec);
							if (!(LOC76 == ((NI) 0))) goto LA77;
							add_267061(result, ((NU8) 10));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_267423)))));
							goto BeforeRet;
						}
						LA77: ;
						res_267644 += ((NI) 1);
					} LA72: ;
				}
			}
			{
				NimStringDesc* LOC83;
				if (!NIM_FALSE) goto LA81;
				LOC83 = 0;
				LOC83 = HEX24_164322(TMP3128);
				internalerror_164234(LOC83);
			}
			LA81: ;
			{
				NU8 i_267623;
				NI res_267652;
				i_267623 = 0;
				res_267652 = ((NI) 0);
				{
					while (1) {
						if (!(res_267652 <= ((NI) 158))) goto LA86;
						i_267623 = ((NU8) (res_267652));
						{
							NI LOC89;
							LOC89 = 0;
							LOC89 = nsuCmpIgnoreStyle(reprEnum(i_267623, (&NTI190029)), spec);
							if (!(LOC89 == ((NI) 0))) goto LA90;
							add_267061(result, ((NU8) 11));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_267623)))));
							goto BeforeRet;
						}
						LA90: ;
						res_267652 += ((NI) 1);
					} LA86: ;
				}
			}
			patternerror_267051(p);
		}
		LA52: ;
	}
	break;
	default:
	{
		patternerror_267051(p);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(Tnode190813*, semnodekindconstraints_267679)(Tnode190813* p) {
	Tnode190813* result;
	result = 0;
	result = newnodei_192351(((NU8) 20), (*p).info);
	asgnRefNoCycle((void**) (&(*result).kindU.S3.strval), rawNewString(((NI) 10)));
	(*result).kindU.S3.strval = addChar((*result).kindU.S3.strval, 1);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_191097(p);
		if (!(((NI) 2) <= LOC3)) goto LA4;
		{
			NI i_267831;
			NI HEX3Atmp_267839;
			NI LOC7;
			NI res_267842;
			i_267831 = 0;
			HEX3Atmp_267839 = 0;
			LOC7 = 0;
			LOC7 = len_191097(p);
			HEX3Atmp_267839 = (LOC7 - 1);
			res_267842 = ((NI) 1);
			{
				while (1) {
					if (!(res_267842 <= HEX3Atmp_267839)) goto LA9;
					i_267831 = res_267842;
					compileconstraints_267113((*p).kindU.S6.sons->data[i_267831], (&(*result).kindU.S3.strval));
					res_267842 += ((NI) 1);
				} LA9: ;
			}
		}
		{
			if (!(((NI) 63) < ((*result).kindU.S3.strval ? (*result).kindU.S3.strval->Sup.len : 0))) goto LA12;
			internalerror_164215((*p).info, ((NimStringDesc*) &TMP3129));
		}
		LA12: ;
	}
	goto LA1;
	LA4: ;
	{
		patternerror_267051(p);
	}
	LA1: ;
	add_267061((&(*result).kindU.S3.strval), ((NU8) 1));
	return result;
}

N_NIMCALL(NU8, whichalias_267080)(Tsym190843* p) {
	NU8 result;
	result = 0;
	{
		if (!!(((*p).constraint == NIM_NIL))) goto LA3;
		result = ((NU8) (((NU8)((*(*p).constraint).kindU.S3.strval->data[((NI) 0)]))));
	}
	goto LA1;
	LA3: ;
	{
		result = ((NU8) 1);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsDatInit)(void) {
}

