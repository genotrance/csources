/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>

#include <string.h>
typedef struct Tnode192813 Tnode192813;
typedef struct Ttype192849 Ttype192849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct Tsym192843 Tsym192843;
typedef struct Tloc192827 Tloc192827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident168021 Tident168021;
typedef struct Tscope192837 Tscope192837;
typedef struct TY192944 TY192944;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tsymseq192815 Tsymseq192815;
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
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Processobj145402 Processobj145402;
typedef struct Stringtableobj136012 Stringtableobj136012;
typedef struct Streamobj140027 Streamobj140027;
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Keyvaluepairseq136010 Keyvaluepairseq136010;
typedef struct TY192933 TY192933;
typedef struct Keyvaluepair136008 Keyvaluepair136008;
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tloc192827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype192849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
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
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15609 raiseAction;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef Tnode192813* TY210694[1];
typedef NimStringDesc* TY220714[1];
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope192837  {
NI depthlevel;
Tstrtable192817 symbols;
Tnodeseq192807* usingsyms;
Tscope192837* parent;
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
struct  Processobj145402  {
  TNimObject Sup;
NI fprocesshandle;
int inhandle;
int outhandle;
int errhandle;
NI id;
int exitcode;
};
struct  Stringtableobj136012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq136010* data;
NU8 mode;
};
typedef N_NIMCALL_PTR(void, TY140028) (Streamobj140027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY140032) (Streamobj140027* s);
typedef N_NIMCALL_PTR(void, TY140036) (Streamobj140027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY140041) (Streamobj140027* s);
typedef N_NIMCALL_PTR(NI, TY140045) (Streamobj140027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY140051) (Streamobj140027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY140057) (Streamobj140027* s);
struct  Streamobj140027  {
  TNimObject Sup;
TY140028 closeimpl;
TY140032 atendimpl;
TY140036 setpositionimpl;
TY140041 getpositionimpl;
TY140045 readdataimpl;
TY140051 writedataimpl;
TY140057 flushimpl;
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
struct Keyvaluepair136008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct Keyvaluepairseq136010 {
  TGenericSeq Sup;
  Keyvaluepair136008 data[SEQ_DECL_SIZE];
};
struct TY192933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode192813*, maptypetoast_381086)(Ttype192849* t, Tlineinfo164338 info, NIM_BOOL allowrecursion);
N_NIMCALL(Tnode192813*, atomictypex_381072)(NimStringDesc* name, Ttype192849* t, Tlineinfo164338 info);
N_NIMCALL(Tsym192843*, newsym_193656)(NU8 symkind, Tident168021* name, Tsym192843* owner, Tlineinfo164338 info);
N_NIMCALL(Tident168021*, getident_168463)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(Tnode192813*, newsymnode_194325)(Tsym192843* sym);
N_NIMCALL(Tnode192813*, newnodeit_194807)(NU8 kind, Tlineinfo164338 info, Ttype192849* typ);
N_NIMCALL(void, add_193164)(Tnode192813* father, Tnode192813* son);
N_NIMCALL(Ttype192849*, base_222039)(Ttype192849* t);
N_NIMCALL(NI, len_195377)(Ttype192849* n);
N_NIMCALL(Ttype192849*, lastson_195442)(Ttype192849* n);
N_NIMCALL(Tnode192813*, maptypetobracket_381094)(NimStringDesc* name, Ttype192849* t, Tlineinfo164338 info);
N_NIMCALL(Ttype192849*, newtype_195144)(NU8 kind, Tsym192843* owner);
N_NIMCALL(Tnode192813*, copytree_197028)(Tnode192813* src);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, findfile_156341)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_13434)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_193911)(Tsym192843* m, Tnode192813* n);
N_NIMCALL(Tnode192813*, newnode_194607)(NU8 kind, Tlineinfo164338 info, Tnodeseq192807* sons, Ttype192849* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tnode192813*, newstrnode_193644)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_166171)(Tlineinfo164338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46146* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46146* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46146* c);
N_NOINLINE(void, incl_46865)(Tcellset46158* s, Tcell46146* cell);
static N_INLINE(void, decref_51604)(Tcell46146* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(Processobj145402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj136012* env, NU8 options);
N_NIMCALL(void, write_140233)(Streamobj140027* s, NimStringDesc* x);
N_NIMCALL(Streamobj140027*, nospinputStream)(Processobj145402* p);
N_NIMCALL(void, close_140085)(Streamobj140027* s);
N_NIMCALL(NimStringDesc*, readoutput_381009)(Processobj145402* p);
N_NIMCALL(Streamobj140027*, nospoutputStream)(Processobj145402* p);
N_NIMCALL(NIM_BOOL, atend_140111)(Streamobj140027* s);
N_NIMCALL(NimStringDesc*, readline_140531)(Streamobj140027* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, nospwaitForExit)(Processobj145402* p, NI timeout);
STRING_LITERAL(TMP2834, "none", 4);
STRING_LITERAL(TMP2835, "bool", 4);
STRING_LITERAL(TMP2836, "char", 4);
STRING_LITERAL(TMP2837, "nil", 3);
STRING_LITERAL(TMP2838, "expr", 4);
STRING_LITERAL(TMP2839, "stmt", 4);
STRING_LITERAL(TMP2840, "void", 4);
STRING_LITERAL(TMP2841, "array", 5);
STRING_LITERAL(TMP2842, "typeDesc", 8);
STRING_LITERAL(TMP2843, "typeDesc", 8);
STRING_LITERAL(TMP2844, "void", 4);
STRING_LITERAL(TMP2845, "distinct", 8);
STRING_LITERAL(TMP2846, "tuple", 5);
STRING_LITERAL(TMP2847, "set", 3);
STRING_LITERAL(TMP2848, "ptr", 3);
STRING_LITERAL(TMP2849, "ref", 3);
STRING_LITERAL(TMP2850, "var", 3);
STRING_LITERAL(TMP2851, "seq", 3);
STRING_LITERAL(TMP2852, "proc", 4);
STRING_LITERAL(TMP2853, "openArray", 9);
STRING_LITERAL(TMP2854, "range", 5);
STRING_LITERAL(TMP2855, "pointer", 7);
STRING_LITERAL(TMP2856, "string", 6);
STRING_LITERAL(TMP2857, "cstring", 7);
STRING_LITERAL(TMP2858, "int", 3);
STRING_LITERAL(TMP2859, "int8", 4);
STRING_LITERAL(TMP2860, "int16", 5);
STRING_LITERAL(TMP2861, "int32", 5);
STRING_LITERAL(TMP2862, "int64", 5);
STRING_LITERAL(TMP2863, "float", 5);
STRING_LITERAL(TMP2864, "float32", 7);
STRING_LITERAL(TMP2865, "float64", 7);
STRING_LITERAL(TMP2866, "float128", 8);
STRING_LITERAL(TMP2867, "uint", 4);
STRING_LITERAL(TMP2868, "uint8", 5);
STRING_LITERAL(TMP2869, "uint16", 6);
STRING_LITERAL(TMP2870, "uint32", 6);
STRING_LITERAL(TMP2871, "uint64", 6);
STRING_LITERAL(TMP2872, "bignum", 6);
STRING_LITERAL(TMP2873, "const", 5);
STRING_LITERAL(TMP2874, "mutable", 7);
STRING_LITERAL(TMP2875, "varargs", 7);
STRING_LITERAL(TMP2876, "iter", 4);
STRING_LITERAL(TMP2877, "error", 5);
STRING_LITERAL(TMP2878, "builtinTypeClass", 16);
STRING_LITERAL(TMP2879, "concept", 7);
STRING_LITERAL(TMP2880, "compositeTypeClass", 18);
STRING_LITERAL(TMP2881, "and", 3);
STRING_LITERAL(TMP2882, "or", 2);
STRING_LITERAL(TMP2883, "not", 3);
STRING_LITERAL(TMP2884, "anything", 8);
STRING_LITERAL(TMP2885, "static", 6);
STRING_LITERAL(TMP2889, "", 0);
STRING_LITERAL(TMP2897, "\015\012", 2);
extern Tgcheap48016 gch_48044;
extern Tnode192813* emptynode_193807;
extern TSafePoint* exchandler_17043;
extern TNimType NTI192807; /* TNodeSeq */
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17045;
extern TNimType NTI3433; /* OSError */

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

N_NIMCALL(Tnode192813*, atomictypex_381072)(NimStringDesc* name, Ttype192849* t, Tlineinfo164338 info) {
	Tnode192813* result;
	Tsym192843* sym;
	Tident168021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_168463(name);
	sym = newsym_193656(((NU8) 7), LOC1, (*t).owner, info);
	asgnRefNoCycle((void**) (&(*sym).typ), t);
	result = newsymnode_194325(sym);
	asgnRefNoCycle((void**) (&(*result).typ), t);
	return result;
}

N_NIMCALL(Tnode192813*, maptypetobracket_381094)(NimStringDesc* name, Ttype192849* t, Tlineinfo164338 info) {
	Tnode192813* result;
	Tnode192813* LOC1;
	result = 0;
	result = newnodeit_194807(((NU8) 42), info, t);
	LOC1 = 0;
	LOC1 = atomictypex_381072(name, t, info);
	add_193164(result, LOC1);
	{
		NI i_381119;
		NI HEX3Atmp_381136;
		NI LOC3;
		NI res_381139;
		i_381119 = 0;
		HEX3Atmp_381136 = 0;
		LOC3 = 0;
		LOC3 = len_195377(t);
		HEX3Atmp_381136 = (LOC3 - 1);
		res_381139 = ((NI) 0);
		{
			while (1) {
				if (!(res_381139 <= HEX3Atmp_381136)) goto LA5;
				i_381119 = res_381139;
				{
					Tnode192813* void_381132;
					if (!((*t).sons->data[i_381119] == NIM_NIL)) goto LA8;
					void_381132 = atomictypex_381072(((NimStringDesc*) &TMP2844), t, info);
					asgnRefNoCycle((void**) (&(*void_381132).typ), newtype_195144(((NU8) 3), (*t).owner));
					add_193164(result, void_381132);
				}
				goto LA6;
				LA8: ;
				{
					Tnode192813* LOC11;
					LOC11 = 0;
					LOC11 = maptypetoast_381086((*t).sons->data[i_381119], info, NIM_FALSE);
					add_193164(result, LOC11);
				}
				LA6: ;
				res_381139 += ((NI) 1);
			} LA5: ;
		}
	}
	return result;
}

N_NIMCALL(Tnode192813*, maptypetoast_381086)(Ttype192849* t, Tlineinfo164338 info, NIM_BOOL allowrecursion) {
	Tnode192813* result;
	result = 0;
	switch ((*t).kind) {
	case ((NU8) 0):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2834), t, info);
	}
	break;
	case ((NU8) 1):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2835), t, info);
	}
	break;
	case ((NU8) 2):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2836), t, info);
	}
	break;
	case ((NU8) 5):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2837), t, info);
	}
	break;
	case ((NU8) 6):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2838), t, info);
	}
	break;
	case ((NU8) 7):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2839), t, info);
	}
	break;
	case ((NU8) 3):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2840), t, info);
	}
	break;
	case ((NU8) 4):
	case ((NU8) 16):
	{
		Tnode192813* LOC9;
		Tnode192813* LOC10;
		Tnode192813* LOC11;
		result = newnodeit_194807(((NU8) 42), info, t);
		LOC9 = 0;
		LOC9 = atomictypex_381072(((NimStringDesc*) &TMP2841), t, info);
		add_193164(result, LOC9);
		LOC10 = 0;
		LOC10 = maptypetoast_381086((*t).sons->data[((NI) 0)], info, NIM_FALSE);
		add_193164(result, LOC10);
		LOC11 = 0;
		LOC11 = maptypetoast_381086((*t).sons->data[((NI) 1)], info, NIM_FALSE);
		add_193164(result, LOC11);
	}
	break;
	case ((NU8) 8):
	{
		{
			Ttype192849* LOC15;
			Tnode192813* LOC18;
			Ttype192849* LOC19;
			Tnode192813* LOC20;
			LOC15 = 0;
			LOC15 = base_222039(t);
			if (!!((LOC15 == NIM_NIL))) goto LA16;
			result = newnodeit_194807(((NU8) 42), info, t);
			LOC18 = 0;
			LOC18 = atomictypex_381072(((NimStringDesc*) &TMP2842), t, info);
			add_193164(result, LOC18);
			LOC19 = 0;
			LOC19 = base_222039(t);
			LOC20 = 0;
			LOC20 = maptypetoast_381086(LOC19, info, NIM_FALSE);
			add_193164(result, LOC20);
		}
		goto LA13;
		LA16: ;
		{
			result = atomictypex_381072(((NimStringDesc*) &TMP2843), t, info);
		}
		LA13: ;
	}
	break;
	case ((NU8) 9):
	{
		result = newnodeit_194807(((NU8) 42), info, t);
		{
			NI i_381203;
			NI HEX3Atmp_381249;
			NI LOC24;
			NI res_381252;
			i_381203 = 0;
			HEX3Atmp_381249 = 0;
			LOC24 = 0;
			LOC24 = len_195377(t);
			HEX3Atmp_381249 = (LOC24 - 1);
			res_381252 = ((NI) 0);
			{
				while (1) {
					Tnode192813* LOC27;
					if (!(res_381252 <= HEX3Atmp_381249)) goto LA26;
					i_381203 = res_381252;
					LOC27 = 0;
					LOC27 = maptypetoast_381086((*t).sons->data[i_381203], info, NIM_FALSE);
					add_193164(result, LOC27);
					res_381252 += ((NI) 1);
				} LA26: ;
			}
		}
	}
	break;
	case ((NU8) 11):
	case ((NU8) 10):
	case ((NU8) 15):
	case ((NU8) 53):
	{
		Ttype192849* LOC29;
		LOC29 = 0;
		LOC29 = lastson_195442(t);
		result = maptypetoast_381086(LOC29, info, NIM_FALSE);
	}
	break;
	case ((NU8) 13):
	{
		{
			if (!allowrecursion) goto LA33;
			result = maptypetobracket_381094(((NimStringDesc*) &TMP2845), t, info);
		}
		goto LA31;
		LA33: ;
		{
			result = atomictypex_381072((*(*(*t).sym).name).s, t, info);
		}
		LA31: ;
	}
	break;
	case ((NU8) 12):
	case ((NU8) 30):
	{
		result = atomictypex_381072((*(*(*t).sym).name).s, t, info);
	}
	break;
	case ((NU8) 17):
	{
		{
			Tnode192813* LOC48;
			if (!allowrecursion) goto LA40;
			result = newnodeit_194807(((NU8) 133), info, t);
			{
				if (!((*t).sons->data[((NI) 0)] == NIM_NIL)) goto LA44;
				add_193164(result, emptynode_193807);
			}
			goto LA42;
			LA44: ;
			{
				Tnode192813* LOC47;
				LOC47 = 0;
				LOC47 = maptypetoast_381086((*t).sons->data[((NI) 0)], info, NIM_FALSE);
				add_193164(result, LOC47);
			}
			LA42: ;
			LOC48 = 0;
			LOC48 = copytree_197028((*t).n);
			add_193164(result, LOC48);
		}
		goto LA38;
		LA40: ;
		{
			result = atomictypex_381072((*(*(*t).sym).name).s, t, info);
		}
		LA38: ;
	}
	break;
	case ((NU8) 14):
	{
		Tnode192813* LOC51;
		result = newnodeit_194807(((NU8) 150), info, t);
		LOC51 = 0;
		LOC51 = copytree_197028((*t).n);
		add_193164(result, LOC51);
	}
	break;
	case ((NU8) 18):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2846), t, info);
	}
	break;
	case ((NU8) 19):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2847), t, info);
	}
	break;
	case ((NU8) 21):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2848), t, info);
	}
	break;
	case ((NU8) 22):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2849), t, info);
	}
	break;
	case ((NU8) 23):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2850), t, info);
	}
	break;
	case ((NU8) 24):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2851), t, info);
	}
	break;
	case ((NU8) 25):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2852), t, info);
	}
	break;
	case ((NU8) 27):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2853), t, info);
	}
	break;
	case ((NU8) 20):
	{
		Tnode192813* LOC61;
		Tnode192813* LOC62;
		Tnode192813* LOC63;
		result = newnodeit_194807(((NU8) 42), info, t);
		LOC61 = 0;
		LOC61 = atomictypex_381072(((NimStringDesc*) &TMP2854), t, info);
		add_193164(result, LOC61);
		LOC62 = 0;
		LOC62 = copytree_197028((*(*t).n).kindU.S6.sons->data[((NI) 0)]);
		add_193164(result, LOC62);
		LOC63 = 0;
		LOC63 = copytree_197028((*(*t).n).kindU.S6.sons->data[((NI) 1)]);
		add_193164(result, LOC63);
	}
	break;
	case ((NU8) 26):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2855), t, info);
	}
	break;
	case ((NU8) 28):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2856), t, info);
	}
	break;
	case ((NU8) 29):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2857), t, info);
	}
	break;
	case ((NU8) 31):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2858), t, info);
	}
	break;
	case ((NU8) 32):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2859), t, info);
	}
	break;
	case ((NU8) 33):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2860), t, info);
	}
	break;
	case ((NU8) 34):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2861), t, info);
	}
	break;
	case ((NU8) 35):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2862), t, info);
	}
	break;
	case ((NU8) 36):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2863), t, info);
	}
	break;
	case ((NU8) 37):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2864), t, info);
	}
	break;
	case ((NU8) 38):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2865), t, info);
	}
	break;
	case ((NU8) 39):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2866), t, info);
	}
	break;
	case ((NU8) 40):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2867), t, info);
	}
	break;
	case ((NU8) 41):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2868), t, info);
	}
	break;
	case ((NU8) 42):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2869), t, info);
	}
	break;
	case ((NU8) 43):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2870), t, info);
	}
	break;
	case ((NU8) 44):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2871), t, info);
	}
	break;
	case ((NU8) 45):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2872), t, info);
	}
	break;
	case ((NU8) 46):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2873), t, info);
	}
	break;
	case ((NU8) 47):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2874), t, info);
	}
	break;
	case ((NU8) 48):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2875), t, info);
	}
	break;
	case ((NU8) 49):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2876), t, info);
	}
	break;
	case ((NU8) 50):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2877), t, info);
	}
	break;
	case ((NU8) 51):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2878), t, info);
	}
	break;
	case ((NU8) 52):
	{
		Tnode192813* LOC89;
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2879), t, info);
		LOC89 = 0;
		LOC89 = copytree_197028((*t).n);
		add_193164(result, LOC89);
	}
	break;
	case ((NU8) 54):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2880), t, info);
	}
	break;
	case ((NU8) 55):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2881), t, info);
	}
	break;
	case ((NU8) 56):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2882), t, info);
	}
	break;
	case ((NU8) 57):
	{
		result = maptypetobracket_381094(((NimStringDesc*) &TMP2883), t, info);
	}
	break;
	case ((NU8) 58):
	{
		result = atomictypex_381072(((NimStringDesc*) &TMP2884), t, info);
	}
	break;
	case ((NU8) 59):
	case ((NU8) 60):
	case ((NU8) 61):
	{
		Tnode192813* LOC96;
		result = newnodeit_194807(((NU8) 42), info, t);
		LOC96 = 0;
		LOC96 = atomictypex_381072(((NimStringDesc*) &TMP2885), t, info);
		add_193164(result, LOC96);
		{
			Tnode192813* LOC101;
			if (!!(((*t).n == NIM_NIL))) goto LA99;
			LOC101 = 0;
			LOC101 = copytree_197028((*t).n);
			add_193164(result, LOC101);
		}
		LA99: ;
	}
	break;
	}
	return result;
}

N_NIMCALL(Tnode192813*, opmaptypetoast_381271)(Ttype192849* t, Tlineinfo164338 info) {
	Tnode192813* result;
	result = 0;
	result = maptypetoast_381086(t, info, NIM_TRUE);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_17045;
	return result;
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
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
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
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(NimStringDesc*, opslurp_381044)(NimStringDesc* file, Tlineinfo164338 info, Tsym192843* module) {
	NimStringDesc* volatile result;
	TSafePoint TMP2888;
	result = 0;
	pushSafePoint(&TMP2888);
	TMP2888.status = setjmp(TMP2888.context);
	if (TMP2888.status == 0) {
		NimStringDesc* filename;
		Tnodeseq192807* LOC2;
		TY210694 LOC3;
		Tnode192813* LOC4;
		filename = findfile_156341(file);
		result = readfile_13434(filename);
		LOC2 = 0;
		LOC2 = (Tnodeseq192807*) newSeq((&NTI192807), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		LOC3[0] = newstrnode_193644(((NU8) 20), filename);
		asgnRefNoCycle((void**) (&LOC2->data[0]), LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_194607(((NU8) 121), info, LOC2, NIM_NIL);
		appendtomodule_193911(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
			TMP2888.status = 0;
			localerror_166171(info, ((NU16) 3), file);
			result = copyString(((NimStringDesc*) &TMP2889));
			popCurrentException();
		}
	}
	if (TMP2888.status != 0) reraiseException();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, readoutput_381009)(Processobj145402* p) {
	NimStringDesc* result;
	Streamobj140027* output;
	NI LOC5;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP2889));
	output = nospoutputStream(p);
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* LOC4;
			LOC3 = 0;
			LOC3 = atend_140111(output);
			if (!!(LOC3)) goto LA2;
			LOC4 = 0;
			LOC4 = readline_140531(output);
			result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
			result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP2897));
		} LA2: ;
	}
	result = setLengthStr(result, ((NI) ((NI)((result ? result->Sup.len : 0) - ((NI) 2)))));
	LOC5 = 0;
	LOC5 = nospwaitForExit(p, ((NI) -1));
	return result;
}

N_NIMCALL(NimStringDesc*, opgorge_381027)(NimStringDesc* cmd, NimStringDesc* input) {
	NimStringDesc* volatile result;
	TSafePoint TMP2890;
	result = 0;
	pushSafePoint(&TMP2890);
	TMP2890.status = setjmp(TMP2890.context);
	if (TMP2890.status == 0) {
		Processobj145402* p;
		TY220714 LOC2;
		memset((void*)LOC2, 0, sizeof(LOC2));
		p = nospstartProcess(cmd, ((NimStringDesc*) &TMP2889), LOC2, 0, NIM_NIL, 4);
		{
			Streamobj140027* LOC7;
			Streamobj140027* LOC8;
			if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA5;
			LOC7 = 0;
			LOC7 = nospinputStream(p);
			write_140233(LOC7, input);
			LOC8 = 0;
			LOC8 = nospinputStream(p);
			close_140085(LOC8);
		}
		LA5: ;
		result = readoutput_381009(p);
		popSafePoint();
	}
	else {
		popSafePoint();
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))||isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
			TMP2890.status = 0;
			result = copyString(((NimStringDesc*) &TMP2889));
			popCurrentException();
		}
	}
	if (TMP2890.status != 0) reraiseException();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsDatInit)(void) {
}

