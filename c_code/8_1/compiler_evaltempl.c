/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Tsym190843 Tsym190843;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype190849 Ttype190849;
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
typedef struct Templctx382019 Templctx382019;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct TY86145 TY86145;
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
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tidpair190857 Tidpair190857;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct TY190933 TY190933;
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
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
struct  Templctx382019  {
Tsym190843* owner;
Tsym190843* gensymowner;
NIM_BOOL instlines;
Tidtable190861 mapping;
};
struct TY86145 {
NimStringDesc* Field0;
NI Field1;
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
struct  Tidpair190857  {
Tidobj166015* key;
TNimObject* val;
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
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_164150)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode190813*, evaltemplateargs_382184)(Tnode190813* n, Tsym190843* s);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(NI, sonslen_193351)(Ttype190849* n);
N_NIMCALL(Tnode190813*, newnodei_192351)(NU8 kind, Tlineinfo162338 info);
N_NIMCALL(Tnode190813*, copytree_195028)(Tnode190813* src);
N_NIMCALL(void, localerror_164171)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_192819)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(void, initidtable_194057)(Tidtable190861* x);
N_NIMCALL(Tnode190813*, getbody_234648)(Tsym190843* s);
static N_INLINE(NIM_BOOL, isatom_195905)(Tnode190813* n);
N_NIMCALL(void, evaltemplateaux_382039)(Tnode190813* templ, Tnode190813* actual, Templctx382019* c, Tnode190813* result);
static N_INLINE(NI, len_191097)(Tnode190813* n);
N_NIMCALL(void, add_191164)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(void, internalerror_164234)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_164322)(TY86145 x);
N_NIMCALL(TNimObject*, idtableget_198182)(Tidtable190861 t, Tidobj166015* key);
N_NIMCALL(Tsym190843*, copysym_193607)(Tsym190843* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(void, idtableput_198196)(Tidtable190861* t, Tidobj166015* key, TNimObject* val);
N_NIMCALL(Tnode190813*, newsymnode_192338)(Tsym190843* sym, Tlineinfo162338 info);
N_NIMCALL(Tnode190813*, copynode_382027)(Templctx382019* ctx, Tnode190813* a, Tnode190813* b);
N_NIMCALL(Tnode190813*, copynode_194644)(Tnode190813* src);
N_NIMCALL(NimStringDesc*, rendertree_212058)(Tnode190813* n, NU8 renderflags);
static N_INLINE(NI, safelen_191125)(Tnode190813* n);
STRING_LITERAL(TMP2818, "", 0);
STRING_LITERAL(TMP2820, "compiler/evaltempl.nim", 22);
NIM_CONST TY86145 TMP2819 = {((NimStringDesc*) &TMP2820),
((NI) 39)}
;
NI evaltemplatecounter_382256;
extern Tgcheap48016 gch_48044;

N_NIMCALL(Tnode190813*, evaltemplateargs_382184)(Tnode190813* n, Tsym190843* s) {
	Tnode190813* result;
	NI a;
	NI f;
	result = 0;
	a = 0;
	switch ((*n).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		a = sonslen_193403(n);
	}
	break;
	default:
	{
		a = ((NI) 0);
	}
	break;
	}
	f = sonslen_193351((*s).typ);
	{
		if (!(f < a)) goto LA5;
		globalerror_164150((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP2818));
	}
	LA5: ;
	result = newnodei_192351(((NU8) 152), (*n).info);
	{
		NI i_382204;
		NI HEX3Atmp_382234;
		NI res_382237;
		i_382204 = 0;
		HEX3Atmp_382234 = 0;
		HEX3Atmp_382234 = (NI)(f - ((NI) 1));
		res_382237 = ((NI) 1);
		{
			while (1) {
				Tnode190813* arg;
				if (!(res_382237 <= HEX3Atmp_382234)) goto LA9;
				i_382204 = res_382237;
				{
					if (!(i_382204 < a)) goto LA12;
					arg = (*n).kindU.S6.sons->data[i_382204];
				}
				goto LA10;
				LA12: ;
				{
					arg = copytree_195028((*(*(*(*(*s).typ).n).kindU.S6.sons->data[i_382204]).kindU.S4.sym).ast);
				}
				LA10: ;
				{
					NIM_BOOL LOC17;
					LOC17 = 0;
					LOC17 = (arg == NIM_NIL);
					if (LOC17) goto LA18;
					LOC17 = ((*arg).kind == ((NU8) 1));
					LA18: ;
					if (!LOC17) goto LA19;
					localerror_164171((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP2818));
				}
				LA19: ;
				addson_192819(result, arg);
				res_382237 += ((NI) 1);
			} LA9: ;
		}
	}
	return result;
}

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

N_NIMCALL(Tnode190813*, copynode_382027)(Templctx382019* ctx, Tnode190813* a, Tnode190813* b) {
	Tnode190813* result;
	result = 0;
	result = copynode_194644(a);
	{
		if (!(*ctx).instlines) goto LA3;
		(*result).info = (*b).info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_382039)(Tnode190813* templ, Tnode190813* actual, Templctx382019* c, Tnode190813* result) {
	switch ((*templ).kind) {
	case ((NU8) 3):
	{
		Tsym190843* s;
		s = (*templ).kindU.S4.sym;
		{
			if (!((*(*s).owner).Sup.id == (*(*c).owner).Sup.id)) goto LA4;
			{
				NIM_BOOL LOC8;
				Tnode190813* x;
				LOC8 = 0;
				LOC8 = ((*s).kind == ((NU8) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s).flags &(1<<((((NU8) 31))&31)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				x = (*actual).kindU.S6.sons->data[(*s).position];
				{
					if (!((*x).kind == ((NU8) 152))) goto LA14;
					{
						Tnode190813* y_382083;
						y_382083 = 0;
						{
							NI i_382142;
							NI HEX3Atmp_382144;
							NI LOC18;
							NI res_382146;
							i_382142 = 0;
							HEX3Atmp_382144 = 0;
							LOC18 = 0;
							LOC18 = len_191097(x);
							HEX3Atmp_382144 = (LOC18 - 1);
							res_382146 = ((NI) 0);
							{
								while (1) {
									if (!(res_382146 <= HEX3Atmp_382144)) goto LA20;
									i_382142 = res_382146;
									y_382083 = (*x).kindU.S6.sons->data[i_382142];
									add_191164(result, y_382083);
									res_382146 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode190813* LOC22;
					LOC22 = 0;
					LOC22 = copytree_195028(x);
					add_191164(result, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				Tsym190843* x;
				Tidobj166015* LOC29;
				TNimObject* LOC30;
				Tlineinfo162338 LOC37;
				Tnode190813* LOC43;
				{
					NimStringDesc* LOC28;
					if (!!((((*s).flags &(1<<((((NU8) 31))&31)))!=0))) goto LA26;
					LOC28 = 0;
					LOC28 = HEX24_164322(TMP2819);
					internalerror_164234(LOC28);
				}
				LA26: ;
				LOC29 = 0;
				LOC29 = &s->Sup;
				LOC30 = 0;
				LOC30 = idtableget_198182((*c).mapping, LOC29);
				x = ((Tsym190843*) (LOC30));
				{
					Tidobj166015* LOC35;
					TNimObject* LOC36;
					if (!(x == NIM_NIL)) goto LA33;
					x = copysym_193607(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x).owner), (*c).gensymowner);
					LOC35 = 0;
					LOC35 = &s->Sup;
					LOC36 = 0;
					LOC36 = &x->Sup.Sup;
					idtableput_198196((&(*c).mapping), LOC35, LOC36);
				}
				LA33: ;
				{
					if (!(*c).instlines) goto LA40;
					LOC37 = (*actual).info;
				}
				goto LA38;
				LA40: ;
				{
					LOC37 = (*templ).info;
				}
				LA38: ;
				LOC43 = 0;
				LOC43 = newsymnode_192338(x, LOC37);
				add_191164(result, LOC43);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode190813* LOC45;
			LOC45 = 0;
			LOC45 = copynode_382027((&(*c)), templ, actual);
			add_191164(result, LOC45);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		Tnode190813* LOC47;
		LOC47 = 0;
		LOC47 = copynode_382027((&(*c)), templ, actual);
		add_191164(result, LOC47);
	}
	break;
	default:
	{
		Tnode190813* res;
		res = copynode_382027((&(*c)), templ, actual);
		{
			NI i_382135;
			NI HEX3Atmp_382150;
			NI LOC50;
			NI res_382153;
			i_382135 = 0;
			HEX3Atmp_382150 = 0;
			LOC50 = 0;
			LOC50 = sonslen_193403(templ);
			HEX3Atmp_382150 = (NI)(LOC50 - ((NI) 1));
			res_382153 = ((NI) 0);
			{
				while (1) {
					if (!(res_382153 <= HEX3Atmp_382150)) goto LA52;
					i_382135 = res_382153;
					evaltemplateaux_382039((*templ).kindU.S6.sons->data[i_382135], actual, c, res);
					res_382153 += ((NI) 1);
				} LA52: ;
			}
		}
		add_191164(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_191125)(Tnode190813* n) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind >= ((NU8) 0) && (*n).kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		LOC3 = (*n).kindU.S6.sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode190813*, evaltemplate_382260)(Tnode190813* n, Tsym190843* tmpl, Tsym190843* gensymowner) {
	Tnode190813* result;
	Tnode190813* args;
	Templctx382019 ctx;
	Tnode190813* body;
	result = 0;
	evaltemplatecounter_382256 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_382256)) goto LA3;
		globalerror_164150((*n).info, ((NU16) 183), ((NimStringDesc*) &TMP2818));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_382184(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.owner = tmpl;
	ctx.gensymowner = gensymowner;
	initidtable_194057((&ctx.mapping));
	body = getbody_234648(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_195905(body);
		if (!LOC7) goto LA8;
		result = newnodei_192351(((NU8) 37), (*body).info);
		evaltemplateaux_382039(body, args, (&ctx), result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_191097(result);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result = (*result).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_212058(result, 4);
			localerror_164171((*result).info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_194644(body);
		ctx.instlines = !(((*body).kind == ((NU8) 115) || (*body).kind == ((NU8) 126) || (*body).kind == ((NU8) 112) || (*body).kind == ((NU8) 127)));
		{
			if (!ctx.instlines) goto LA20;
			(*result).info = (*n).info;
		}
		LA20: ;
		{
			NI i_382308;
			NI HEX3Atmp_382322;
			NI LOC23;
			NI res_382325;
			i_382308 = 0;
			HEX3Atmp_382322 = 0;
			LOC23 = 0;
			LOC23 = safelen_191125(body);
			HEX3Atmp_382322 = (NI)(LOC23 - ((NI) 1));
			res_382325 = ((NI) 0);
			{
				while (1) {
					if (!(res_382325 <= HEX3Atmp_382322)) goto LA25;
					i_382308 = res_382325;
					evaltemplateaux_382039((*body).kindU.S6.sons->data[i_382308], args, (&ctx), result);
					res_382325 += ((NI) 1);
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_382256 -= ((NI) 1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit)(void) {
	evaltemplatecounter_382256 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit)(void) {
}

