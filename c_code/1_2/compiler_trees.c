/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode192813 Tnode192813;
typedef struct Ttype192849 Ttype192849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym192843 Tsym192843;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct Tscope192837 Tscope192837;
typedef struct TY192944 TY192944;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tsymseq192815 Tsymseq192815;
typedef struct Tloc192827 Tloc192827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib192831 Tlib192831;
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
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct TY192933 TY192933;
struct  Tlineinfo164338  {
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
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope192837  {
NI depthlevel;
Tstrtable192817 symbols;
Tnodeseq192807* usingsyms;
Tscope192837* parent;
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
struct  Tinstantiation192833  {
Tsym192843* sym;
Ttypeseq192845* concretetypes;
TY192933* usedby;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct Tnodeseq192807 {
  TGenericSeq Sup;
  Tnode192813* data[SEQ_DECL_SIZE];
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
struct TY192933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, sonslen_195403)(Tnode192813* n);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_221149)(Tnode192813* a, Tnode192813* b);
N_NIMCALL(Tnode192813*, newnodei_194351)(NU8 kind, Tlineinfo164338 info);
N_NIMCALL(NIM_BOOL, cyclictreeaux_221072)(Tnode192813* n, Tnode192813* s);
N_NIMCALL(NIM_BOOL, hasson_221019)(Tnode192813* father, Tnode192813* son);
N_NIMCALL(void, addson_194819)(Tnode192813* father, Tnode192813* son);
N_NIMCALL(void, delson_196581)(Tnode192813* father, NI idx);
N_NIMCALL(void, unneststmts_221704)(Tnode192813* n, Tnode192813* result);
static N_INLINE(NI, len_193097)(Tnode192813* n);
N_NIMCALL(void, add_193164)(Tnode192813* father, Tnode192813* son);
N_NIMCALL(Tnode192813*, newnodei_194407)(NU8 kind, Tlineinfo164338 info, NI children);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_221459)(Tnode192813* n);
N_NIMCALL(Ttype192849*, skiptypes_196167)(Ttype192849* t, NU64 kinds);
N_NIMCALL(NU16, whichkeyword_173386)(Tident168021* id);
extern Tgcheap48016 gch_48044;

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

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_221149)(Tnode192813* a, Tnode192813* b) {
	NIM_BOOL result;
{	result = 0;
	result = NIM_FALSE;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a).kind == (*b).kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a).kind) {
		case ((NU8) 3):
		{
			result = ((*(*(*a).kindU.S4.sym).name).Sup.id == (*(*(*b).kindU.S4.sym).name).Sup.id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.ident).Sup.id == (*(*b).kindU.S5.ident).Sup.id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 10):
		{
			result = ((*a).kindU.S1.intval == (*b).kindU.S1.intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			result = ((*a).kindU.S2.floatval == (*b).kindU.S2.floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			result = eqStrings((*a).kindU.S3.strval, (*b).kindU.S3.strval);
		}
		break;
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_195403(a);
				LOC22 = 0;
				LOC22 = sonslen_195403(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_221222;
					NI HEX3Atmp_221226;
					NI LOC26;
					NI res_221229;
					i_221222 = 0;
					HEX3Atmp_221226 = 0;
					LOC26 = 0;
					LOC26 = sonslen_195403(a);
					HEX3Atmp_221226 = (NI)(LOC26 - ((NI) 1));
					res_221229 = ((NI) 0);
					{
						while (1) {
							if (!(res_221229 <= HEX3Atmp_221226)) goto LA28;
							i_221222 = res_221229;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = exprstructuralequivalent_221149((*a).kindU.S6.sons->data[i_221222], (*b).kindU.S6.sons->data[i_221222]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_221229 += ((NI) 1);
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU16, getmagic_221403)(Tnode192813* op) {
	NU16 result;
	result = 0;
	switch ((*op).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		switch ((*(*op).kindU.S6.sons->data[((NI) 0)]).kind) {
		case ((NU8) 3):
		{
			result = (*(*(*op).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).magic;
		}
		break;
		default:
		{
			result = ((NU16) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result = ((NU16) 0);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, hasson_221019)(Tnode192813* father, Tnode192813* son) {
	NIM_BOOL result;
{	result = 0;
	{
		NI i_221036;
		NI HEX3Atmp_221050;
		NI LOC2;
		NI res_221053;
		i_221036 = 0;
		HEX3Atmp_221050 = 0;
		LOC2 = 0;
		LOC2 = sonslen_195403(father);
		HEX3Atmp_221050 = (NI)(LOC2 - ((NI) 1));
		res_221053 = ((NI) 0);
		{
			while (1) {
				if (!(res_221053 <= HEX3Atmp_221050)) goto LA4;
				i_221036 = res_221053;
				{
					if (!((*father).kindU.S6.sons->data[i_221036] == son)) goto LA7;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA7: ;
				res_221053 += ((NI) 1);
			} LA4: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_221072)(Tnode192813* n, Tnode192813* s) {
	NIM_BOOL result;
	NI m;
{	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = hasson_221019(s, n);
		if (!LOC7) goto LA8;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA8: ;
	m = sonslen_195403(s);
	addson_194819(s, n);
	{
		if (!!(((*n).kind >= ((NU8) 1) && (*n).kind <= ((NU8) 23)))) goto LA12;
		{
			NI i_221113;
			NI HEX3Atmp_221116;
			NI LOC15;
			NI res_221119;
			i_221113 = 0;
			HEX3Atmp_221116 = 0;
			LOC15 = 0;
			LOC15 = sonslen_195403(n);
			HEX3Atmp_221116 = (NI)(LOC15 - ((NI) 1));
			res_221119 = ((NI) 0);
			{
				while (1) {
					if (!(res_221119 <= HEX3Atmp_221116)) goto LA17;
					i_221113 = res_221119;
					{
						NIM_BOOL LOC20;
						LOC20 = 0;
						LOC20 = cyclictreeaux_221072((*n).kindU.S6.sons->data[i_221113], s);
						if (!LOC20) goto LA21;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA21: ;
					res_221119 += ((NI) 1);
				} LA17: ;
			}
		}
	}
	LA12: ;
	result = NIM_FALSE;
	delson_196581(s, m);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictree_221138)(Tnode192813* n) {
	NIM_BOOL result;
	Tnode192813* s;
	result = 0;
	s = newnodei_194351(((NU8) 1), (*n).info);
	result = cyclictreeaux_221072(n, s);
	return result;
}

static N_INLINE(NI, len_193097)(Tnode192813* n) {
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

N_NIMCALL(void, unneststmts_221704)(Tnode192813* n, Tnode192813* result) {
	{
		if (!((*n).kind == ((NU8) 115))) goto LA3;
		{
			Tnode192813* x_221717;
			x_221717 = 0;
			{
				NI i_221734;
				NI HEX3Atmp_221736;
				NI LOC7;
				NI res_221738;
				i_221734 = 0;
				HEX3Atmp_221736 = 0;
				LOC7 = 0;
				LOC7 = len_193097(n);
				HEX3Atmp_221736 = (LOC7 - 1);
				res_221738 = ((NI) 0);
				{
					while (1) {
						if (!(res_221738 <= HEX3Atmp_221736)) goto LA9;
						i_221734 = res_221738;
						x_221717 = (*n).kindU.S6.sons->data[i_221734];
						unneststmts_221704(x_221717, result);
						res_221738 += ((NI) 1);
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n).kind == ((NU8) 125) || (*n).kind == ((NU8) 23)))) goto LA11;
		add_193164(result, n);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(Tnode192813*, flattenstmts_221759)(Tnode192813* n) {
	Tnode192813* result;
	result = 0;
	result = newnodei_194351(((NU8) 115), (*n).info);
	unneststmts_221704(n, result);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_193097(result);
		if (!(LOC3 == ((NI) 1))) goto LA4;
		result = (*result).kindU.S6.sons->data[((NI) 0)];
	}
	LA4: ;
	return result;
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

N_NIMCALL(Tnode192813*, extractrange_221771)(NU8 k, Tnode192813* n, NI a, NI b) {
	Tnode192813* result;
	result = 0;
	result = newnodei_194407(k, (*n).info, (NI)((NI)(b - a) + ((NI) 1)));
	{
		NI i_221788;
		NI HEX3Atmp_221792;
		NI res_221795;
		i_221788 = 0;
		HEX3Atmp_221792 = 0;
		HEX3Atmp_221792 = (NI)(b - a);
		res_221795 = ((NI) 0);
		{
			while (1) {
				if (!(res_221795 <= HEX3Atmp_221792)) goto LA3;
				i_221788 = res_221795;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.sons->data[i_221788]), (*n).kindU.S6.sons->data[(NI)(i_221788 + a)]);
				res_221795 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_221459)(Tnode192813* n) {
	NIM_BOOL result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 5) ... ((NU8) 10):
	case ((NU8) 20) ... ((NU8) 22):
	case ((NU8) 16) ... ((NU8) 18):
	case ((NU8) 23):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 33):
	case ((NU8) 34):
	case ((NU8) 58):
	case ((NU8) 59):
	{
		result = isdeepconstexpr_221459((*n).kindU.S6.sons->data[((NI) 1)]);
	}
	break;
	case ((NU8) 39):
	case ((NU8) 41):
	case ((NU8) 37):
	case ((NU8) 38):
	case ((NU8) 155):
	{
		NIM_BOOL LOC13;
		Ttype192849* LOC15;
		{
			NI i_221483;
			NI HEX3Atmp_221504;
			NI LOC5;
			NI res_221507;
			i_221483 = 0;
			HEX3Atmp_221504 = 0;
			LOC5 = 0;
			LOC5 = len_193097(n);
			HEX3Atmp_221504 = (LOC5 - 1);
			res_221507 = ((NI) 0);
			{
				while (1) {
					if (!(res_221507 <= HEX3Atmp_221504)) goto LA7;
					i_221483 = res_221507;
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = isdeepconstexpr_221459((*n).kindU.S6.sons->data[i_221483]);
						if (!!(LOC10)) goto LA11;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_221507 += ((NI) 1);
				} LA7: ;
			}
		}
		LOC13 = 0;
		LOC13 = (*n).typ == 0;
		if (LOC13) goto LA14;
		LOC15 = 0;
		LOC15 = skiptypes_196167((*n).typ, 10240);
		LOC13 = !(((*LOC15).kind == ((NU8) 17)));
		LA14: ;
		result = LOC13;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isconstexpr_221428)(Tnode192813* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((*n).kind >= ((NU8) 5) && (*n).kind <= ((NU8) 10) || (*n).kind >= ((NU8) 20) && (*n).kind <= ((NU8) 22) || (*n).kind >= ((NU8) 16) && (*n).kind <= ((NU8) 18) || (*n).kind == ((NU8) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n).flags &(1<<((((NU8) 4))&15)))!=0);
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU16, whichpragma_221673)(Tnode192813* n) {
	NU16 result;
	Tnode192813* key;
	result = 0;
	{
		if (!((*n).kind == ((NU8) 34))) goto LA3;
		key = (*n).kindU.S6.sons->data[((NI) 0)];
	}
	goto LA1;
	LA3: ;
	{
		key = n;
	}
	LA1: ;
	{
		if (!((*key).kind == ((NU8) 2))) goto LA8;
		result = whichkeyword_173386((*key).kindU.S5.ident);
	}
	LA8: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit)(void) {
}

