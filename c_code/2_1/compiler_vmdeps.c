/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>

#include <string.h>

#include <sys/types.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tsym191843 Tsym191843;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident167021 Tident167021;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tlib191831 Tlib191831;
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
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Processobj143405 Processobj143405;
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct Streamobj137027 Streamobj137027;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct TY191933 TY191933;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
struct  Tlineinfo163338  {
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
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
typedef Tnode191813* TY209694[1];
typedef NimStringDesc* TY219714[1];
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
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
struct  Processobj143405  {
  TNimObject Sup;
int inhandle;
int outhandle;
int errhandle;
Streamobj137027* instream;
Streamobj137027* outstream;
Streamobj137027* errstream;
pid_t id;
int exitcode;
};
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
typedef N_NIMCALL_PTR(void, TY137028) (Streamobj137027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY137032) (Streamobj137027* s);
typedef N_NIMCALL_PTR(void, TY137036) (Streamobj137027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY137041) (Streamobj137027* s);
typedef N_NIMCALL_PTR(NI, TY137045) (Streamobj137027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY137051) (Streamobj137027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY137057) (Streamobj137027* s);
struct  Streamobj137027  {
  TNimObject Sup;
TY137028 closeimpl;
TY137032 atendimpl;
TY137036 setpositionimpl;
TY137041 getpositionimpl;
TY137045 readdataimpl;
TY137051 writedataimpl;
TY137057 flushimpl;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct Keyvaluepair133008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  Keyvaluepair133008 data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode191813*, maptypetoast_380086)(Ttype191849* t, Tlineinfo163338 info, NIM_BOOL allowrecursion);
N_NIMCALL(Tnode191813*, atomictypex_380072)(NimStringDesc* name, Ttype191849* t, Tlineinfo163338 info);
N_NIMCALL(Tsym191843*, newsym_192656)(NU8 symkind, Tident167021* name, Tsym191843* owner, Tlineinfo163338 info);
N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(Tnode191813*, newsymnode_193325)(Tsym191843* sym);
N_NIMCALL(Tnode191813*, newnodeit_193807)(NU8 kind, Tlineinfo163338 info, Ttype191849* typ);
N_NIMCALL(void, add_192164)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(Ttype191849*, base_221039)(Ttype191849* t);
N_NIMCALL(NI, len_194377)(Ttype191849* n);
N_NIMCALL(Ttype191849*, lastson_194442)(Ttype191849* n);
N_NIMCALL(Tnode191813*, maptypetobracket_380094)(NimStringDesc* name, Ttype191849* t, Tlineinfo163338 info);
N_NIMCALL(Ttype191849*, newtype_194144)(NU8 kind, Tsym191843* owner);
N_NIMCALL(Tnode191813*, copytree_196028)(Tnode191813* src);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, findfile_155341)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_13434)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_192911)(Tsym191843* m, Tnode191813* n);
N_NIMCALL(Tnode191813*, newnode_193607)(NU8 kind, Tlineinfo163338 info, Tnodeseq191807* sons, Ttype191849* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tnode191813*, newstrnode_192644)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_165171)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46147* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46147* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46147* c);
N_NOINLINE(void, incl_46865)(Tcellset46159* s, Tcell46147* cell);
static N_INLINE(void, decref_51604)(Tcell46147* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(Processobj143405*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj133012* env, NU8 options);
N_NIMCALL(void, write_137233)(Streamobj137027* s, NimStringDesc* x);
N_NIMCALL(Streamobj137027*, nospinputStream)(Processobj143405* p);
N_NIMCALL(void, close_137085)(Streamobj137027* s);
N_NIMCALL(NimStringDesc*, readoutput_380009)(Processobj143405* p);
N_NIMCALL(Streamobj137027*, nospoutputStream)(Processobj143405* p);
N_NIMCALL(NIM_BOOL, atend_137111)(Streamobj137027* s);
N_NIMCALL(NimStringDesc*, readline_137531)(Streamobj137027* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, nospwaitForExit)(Processobj143405* p, NI timeout);
STRING_LITERAL(TMP2832, "none", 4);
STRING_LITERAL(TMP2833, "bool", 4);
STRING_LITERAL(TMP2834, "char", 4);
STRING_LITERAL(TMP2835, "nil", 3);
STRING_LITERAL(TMP2836, "expr", 4);
STRING_LITERAL(TMP2837, "stmt", 4);
STRING_LITERAL(TMP2838, "void", 4);
STRING_LITERAL(TMP2839, "array", 5);
STRING_LITERAL(TMP2840, "typeDesc", 8);
STRING_LITERAL(TMP2841, "typeDesc", 8);
STRING_LITERAL(TMP2842, "void", 4);
STRING_LITERAL(TMP2843, "distinct", 8);
STRING_LITERAL(TMP2844, "tuple", 5);
STRING_LITERAL(TMP2845, "set", 3);
STRING_LITERAL(TMP2846, "ptr", 3);
STRING_LITERAL(TMP2847, "ref", 3);
STRING_LITERAL(TMP2848, "var", 3);
STRING_LITERAL(TMP2849, "seq", 3);
STRING_LITERAL(TMP2850, "proc", 4);
STRING_LITERAL(TMP2851, "openArray", 9);
STRING_LITERAL(TMP2852, "range", 5);
STRING_LITERAL(TMP2853, "pointer", 7);
STRING_LITERAL(TMP2854, "string", 6);
STRING_LITERAL(TMP2855, "cstring", 7);
STRING_LITERAL(TMP2856, "int", 3);
STRING_LITERAL(TMP2857, "int8", 4);
STRING_LITERAL(TMP2858, "int16", 5);
STRING_LITERAL(TMP2859, "int32", 5);
STRING_LITERAL(TMP2860, "int64", 5);
STRING_LITERAL(TMP2861, "float", 5);
STRING_LITERAL(TMP2862, "float32", 7);
STRING_LITERAL(TMP2863, "float64", 7);
STRING_LITERAL(TMP2864, "float128", 8);
STRING_LITERAL(TMP2865, "uint", 4);
STRING_LITERAL(TMP2866, "uint8", 5);
STRING_LITERAL(TMP2867, "uint16", 6);
STRING_LITERAL(TMP2868, "uint32", 6);
STRING_LITERAL(TMP2869, "uint64", 6);
STRING_LITERAL(TMP2870, "bignum", 6);
STRING_LITERAL(TMP2871, "const", 5);
STRING_LITERAL(TMP2872, "mutable", 7);
STRING_LITERAL(TMP2873, "varargs", 7);
STRING_LITERAL(TMP2874, "iter", 4);
STRING_LITERAL(TMP2875, "error", 5);
STRING_LITERAL(TMP2876, "builtinTypeClass", 16);
STRING_LITERAL(TMP2877, "concept", 7);
STRING_LITERAL(TMP2878, "compositeTypeClass", 18);
STRING_LITERAL(TMP2879, "and", 3);
STRING_LITERAL(TMP2880, "or", 2);
STRING_LITERAL(TMP2881, "not", 3);
STRING_LITERAL(TMP2882, "anything", 8);
STRING_LITERAL(TMP2883, "static", 6);
STRING_LITERAL(TMP2887, "", 0);
STRING_LITERAL(TMP2899, "\012", 1);
extern Tgcheap48016 gch_48044;
extern Tnode191813* emptynode_192807;
extern TSafePoint* exchandler_17043;
extern TNimType NTI191807; /* TNodeSeq */
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17045;
extern TNimType NTI3433; /* OSError */

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

N_NIMCALL(Tnode191813*, atomictypex_380072)(NimStringDesc* name, Ttype191849* t, Tlineinfo163338 info) {
	Tnode191813* result;
	Tsym191843* sym;
	Tident167021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_167463(name);
	sym = newsym_192656(((NU8) 7), LOC1, (*t).owner, info);
	asgnRefNoCycle((void**) (&(*sym).typ), t);
	result = newsymnode_193325(sym);
	asgnRefNoCycle((void**) (&(*result).typ), t);
	return result;
}

N_NIMCALL(Tnode191813*, maptypetobracket_380094)(NimStringDesc* name, Ttype191849* t, Tlineinfo163338 info) {
	Tnode191813* result;
	Tnode191813* LOC1;
	result = 0;
	result = newnodeit_193807(((NU8) 42), info, t);
	LOC1 = 0;
	LOC1 = atomictypex_380072(name, t, info);
	add_192164(result, LOC1);
	{
		NI i_380119;
		NI HEX3Atmp_380136;
		NI LOC3;
		NI res_380139;
		i_380119 = 0;
		HEX3Atmp_380136 = 0;
		LOC3 = 0;
		LOC3 = len_194377(t);
		HEX3Atmp_380136 = (LOC3 - 1);
		res_380139 = ((NI) 0);
		{
			while (1) {
				if (!(res_380139 <= HEX3Atmp_380136)) goto LA5;
				i_380119 = res_380139;
				{
					Tnode191813* void_380132;
					if (!((*t).sons->data[i_380119] == NIM_NIL)) goto LA8;
					void_380132 = atomictypex_380072(((NimStringDesc*) &TMP2842), t, info);
					asgnRefNoCycle((void**) (&(*void_380132).typ), newtype_194144(((NU8) 3), (*t).owner));
					add_192164(result, void_380132);
				}
				goto LA6;
				LA8: ;
				{
					Tnode191813* LOC11;
					LOC11 = 0;
					LOC11 = maptypetoast_380086((*t).sons->data[i_380119], info, NIM_FALSE);
					add_192164(result, LOC11);
				}
				LA6: ;
				res_380139 += ((NI) 1);
			} LA5: ;
		}
	}
	return result;
}

N_NIMCALL(Tnode191813*, maptypetoast_380086)(Ttype191849* t, Tlineinfo163338 info, NIM_BOOL allowrecursion) {
	Tnode191813* result;
	result = 0;
	switch ((*t).kind) {
	case ((NU8) 0):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2832), t, info);
	}
	break;
	case ((NU8) 1):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2833), t, info);
	}
	break;
	case ((NU8) 2):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2834), t, info);
	}
	break;
	case ((NU8) 5):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2835), t, info);
	}
	break;
	case ((NU8) 6):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2836), t, info);
	}
	break;
	case ((NU8) 7):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2837), t, info);
	}
	break;
	case ((NU8) 3):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2838), t, info);
	}
	break;
	case ((NU8) 4):
	case ((NU8) 16):
	{
		Tnode191813* LOC9;
		Tnode191813* LOC10;
		Tnode191813* LOC11;
		result = newnodeit_193807(((NU8) 42), info, t);
		LOC9 = 0;
		LOC9 = atomictypex_380072(((NimStringDesc*) &TMP2839), t, info);
		add_192164(result, LOC9);
		LOC10 = 0;
		LOC10 = maptypetoast_380086((*t).sons->data[((NI) 0)], info, NIM_FALSE);
		add_192164(result, LOC10);
		LOC11 = 0;
		LOC11 = maptypetoast_380086((*t).sons->data[((NI) 1)], info, NIM_FALSE);
		add_192164(result, LOC11);
	}
	break;
	case ((NU8) 8):
	{
		{
			Ttype191849* LOC15;
			Tnode191813* LOC18;
			Ttype191849* LOC19;
			Tnode191813* LOC20;
			LOC15 = 0;
			LOC15 = base_221039(t);
			if (!!((LOC15 == NIM_NIL))) goto LA16;
			result = newnodeit_193807(((NU8) 42), info, t);
			LOC18 = 0;
			LOC18 = atomictypex_380072(((NimStringDesc*) &TMP2840), t, info);
			add_192164(result, LOC18);
			LOC19 = 0;
			LOC19 = base_221039(t);
			LOC20 = 0;
			LOC20 = maptypetoast_380086(LOC19, info, NIM_FALSE);
			add_192164(result, LOC20);
		}
		goto LA13;
		LA16: ;
		{
			result = atomictypex_380072(((NimStringDesc*) &TMP2841), t, info);
		}
		LA13: ;
	}
	break;
	case ((NU8) 9):
	{
		result = newnodeit_193807(((NU8) 42), info, t);
		{
			NI i_380203;
			NI HEX3Atmp_380249;
			NI LOC24;
			NI res_380252;
			i_380203 = 0;
			HEX3Atmp_380249 = 0;
			LOC24 = 0;
			LOC24 = len_194377(t);
			HEX3Atmp_380249 = (LOC24 - 1);
			res_380252 = ((NI) 0);
			{
				while (1) {
					Tnode191813* LOC27;
					if (!(res_380252 <= HEX3Atmp_380249)) goto LA26;
					i_380203 = res_380252;
					LOC27 = 0;
					LOC27 = maptypetoast_380086((*t).sons->data[i_380203], info, NIM_FALSE);
					add_192164(result, LOC27);
					res_380252 += ((NI) 1);
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
		Ttype191849* LOC29;
		LOC29 = 0;
		LOC29 = lastson_194442(t);
		result = maptypetoast_380086(LOC29, info, NIM_FALSE);
	}
	break;
	case ((NU8) 13):
	{
		{
			if (!allowrecursion) goto LA33;
			result = maptypetobracket_380094(((NimStringDesc*) &TMP2843), t, info);
		}
		goto LA31;
		LA33: ;
		{
			result = atomictypex_380072((*(*(*t).sym).name).s, t, info);
		}
		LA31: ;
	}
	break;
	case ((NU8) 12):
	case ((NU8) 30):
	{
		result = atomictypex_380072((*(*(*t).sym).name).s, t, info);
	}
	break;
	case ((NU8) 17):
	{
		{
			Tnode191813* LOC48;
			if (!allowrecursion) goto LA40;
			result = newnodeit_193807(((NU8) 133), info, t);
			{
				if (!((*t).sons->data[((NI) 0)] == NIM_NIL)) goto LA44;
				add_192164(result, emptynode_192807);
			}
			goto LA42;
			LA44: ;
			{
				Tnode191813* LOC47;
				LOC47 = 0;
				LOC47 = maptypetoast_380086((*t).sons->data[((NI) 0)], info, NIM_FALSE);
				add_192164(result, LOC47);
			}
			LA42: ;
			LOC48 = 0;
			LOC48 = copytree_196028((*t).n);
			add_192164(result, LOC48);
		}
		goto LA38;
		LA40: ;
		{
			result = atomictypex_380072((*(*(*t).sym).name).s, t, info);
		}
		LA38: ;
	}
	break;
	case ((NU8) 14):
	{
		Tnode191813* LOC51;
		result = newnodeit_193807(((NU8) 150), info, t);
		LOC51 = 0;
		LOC51 = copytree_196028((*t).n);
		add_192164(result, LOC51);
	}
	break;
	case ((NU8) 18):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2844), t, info);
	}
	break;
	case ((NU8) 19):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2845), t, info);
	}
	break;
	case ((NU8) 21):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2846), t, info);
	}
	break;
	case ((NU8) 22):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2847), t, info);
	}
	break;
	case ((NU8) 23):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2848), t, info);
	}
	break;
	case ((NU8) 24):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2849), t, info);
	}
	break;
	case ((NU8) 25):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2850), t, info);
	}
	break;
	case ((NU8) 27):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2851), t, info);
	}
	break;
	case ((NU8) 20):
	{
		Tnode191813* LOC61;
		Tnode191813* LOC62;
		Tnode191813* LOC63;
		result = newnodeit_193807(((NU8) 42), info, t);
		LOC61 = 0;
		LOC61 = atomictypex_380072(((NimStringDesc*) &TMP2852), t, info);
		add_192164(result, LOC61);
		LOC62 = 0;
		LOC62 = copytree_196028((*(*t).n).kindU.S6.sons->data[((NI) 0)]);
		add_192164(result, LOC62);
		LOC63 = 0;
		LOC63 = copytree_196028((*(*t).n).kindU.S6.sons->data[((NI) 1)]);
		add_192164(result, LOC63);
	}
	break;
	case ((NU8) 26):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2853), t, info);
	}
	break;
	case ((NU8) 28):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2854), t, info);
	}
	break;
	case ((NU8) 29):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2855), t, info);
	}
	break;
	case ((NU8) 31):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2856), t, info);
	}
	break;
	case ((NU8) 32):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2857), t, info);
	}
	break;
	case ((NU8) 33):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2858), t, info);
	}
	break;
	case ((NU8) 34):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2859), t, info);
	}
	break;
	case ((NU8) 35):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2860), t, info);
	}
	break;
	case ((NU8) 36):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2861), t, info);
	}
	break;
	case ((NU8) 37):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2862), t, info);
	}
	break;
	case ((NU8) 38):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2863), t, info);
	}
	break;
	case ((NU8) 39):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2864), t, info);
	}
	break;
	case ((NU8) 40):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2865), t, info);
	}
	break;
	case ((NU8) 41):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2866), t, info);
	}
	break;
	case ((NU8) 42):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2867), t, info);
	}
	break;
	case ((NU8) 43):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2868), t, info);
	}
	break;
	case ((NU8) 44):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2869), t, info);
	}
	break;
	case ((NU8) 45):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2870), t, info);
	}
	break;
	case ((NU8) 46):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2871), t, info);
	}
	break;
	case ((NU8) 47):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2872), t, info);
	}
	break;
	case ((NU8) 48):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2873), t, info);
	}
	break;
	case ((NU8) 49):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2874), t, info);
	}
	break;
	case ((NU8) 50):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2875), t, info);
	}
	break;
	case ((NU8) 51):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2876), t, info);
	}
	break;
	case ((NU8) 52):
	{
		Tnode191813* LOC89;
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2877), t, info);
		LOC89 = 0;
		LOC89 = copytree_196028((*t).n);
		add_192164(result, LOC89);
	}
	break;
	case ((NU8) 54):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2878), t, info);
	}
	break;
	case ((NU8) 55):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2879), t, info);
	}
	break;
	case ((NU8) 56):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2880), t, info);
	}
	break;
	case ((NU8) 57):
	{
		result = maptypetobracket_380094(((NimStringDesc*) &TMP2881), t, info);
	}
	break;
	case ((NU8) 58):
	{
		result = atomictypex_380072(((NimStringDesc*) &TMP2882), t, info);
	}
	break;
	case ((NU8) 59):
	case ((NU8) 60):
	case ((NU8) 61):
	{
		Tnode191813* LOC96;
		result = newnodeit_193807(((NU8) 42), info, t);
		LOC96 = 0;
		LOC96 = atomictypex_380072(((NimStringDesc*) &TMP2883), t, info);
		add_192164(result, LOC96);
		{
			Tnode191813* LOC101;
			if (!!(((*t).n == NIM_NIL))) goto LA99;
			LOC101 = 0;
			LOC101 = copytree_196028((*t).n);
			add_192164(result, LOC101);
		}
		LA99: ;
	}
	break;
	}
	return result;
}

N_NIMCALL(Tnode191813*, opmaptypetoast_380271)(Ttype191849* t, Tlineinfo163338 info) {
	Tnode191813* result;
	result = 0;
	result = maptypetoast_380086(t, info, NIM_TRUE);
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

static N_INLINE(void, decref_51604)(Tcell46147* c) {
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(NimStringDesc*, opslurp_380044)(NimStringDesc* file, Tlineinfo163338 info, Tsym191843* module) {
	NimStringDesc* volatile result;
	TSafePoint TMP2886;
	result = 0;
	pushSafePoint(&TMP2886);
	TMP2886.status = setjmp(TMP2886.context);
	if (TMP2886.status == 0) {
		NimStringDesc* filename;
		Tnodeseq191807* LOC2;
		TY209694 LOC3;
		Tnode191813* LOC4;
		filename = findfile_155341(file);
		result = readfile_13434(filename);
		LOC2 = 0;
		LOC2 = (Tnodeseq191807*) newSeq((&NTI191807), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		LOC3[0] = newstrnode_192644(((NU8) 20), filename);
		asgnRefNoCycle((void**) (&LOC2->data[0]), LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_193607(((NU8) 121), info, LOC2, NIM_NIL);
		appendtomodule_192911(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
			TMP2886.status = 0;
			localerror_165171(info, ((NU16) 3), file);
			result = copyString(((NimStringDesc*) &TMP2887));
			popCurrentException();
		}
	}
	if (TMP2886.status != 0) reraiseException();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, readoutput_380009)(Processobj143405* p) {
	NimStringDesc* result;
	Streamobj137027* output;
	NI LOC5;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP2887));
	output = nospoutputStream(p);
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* LOC4;
			LOC3 = 0;
			LOC3 = atend_137111(output);
			if (!!(LOC3)) goto LA2;
			LOC4 = 0;
			LOC4 = readline_137531(output);
			result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
			result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP2899));
		} LA2: ;
	}
	result = setLengthStr(result, ((NI) ((NI)((result ? result->Sup.len : 0) - ((NI) 1)))));
	LOC5 = 0;
	LOC5 = nospwaitForExit(p, ((NI) -1));
	return result;
}

N_NIMCALL(NimStringDesc*, opgorge_380027)(NimStringDesc* cmd, NimStringDesc* input) {
	NimStringDesc* volatile result;
	TSafePoint TMP2888;
	result = 0;
	pushSafePoint(&TMP2888);
	TMP2888.status = setjmp(TMP2888.context);
	if (TMP2888.status == 0) {
		Processobj143405* p;
		TY219714 LOC2;
		memset((void*)LOC2, 0, sizeof(LOC2));
		p = nospstartProcess(cmd, ((NimStringDesc*) &TMP2887), LOC2, 0, NIM_NIL, 4);
		{
			Streamobj137027* LOC7;
			Streamobj137027* LOC8;
			if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA5;
			LOC7 = 0;
			LOC7 = nospinputStream(p);
			write_137233(LOC7, input);
			LOC8 = 0;
			LOC8 = nospinputStream(p);
			close_137085(LOC8);
		}
		LA5: ;
		result = readoutput_380009(p);
		popSafePoint();
	}
	else {
		popSafePoint();
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))||isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
			TMP2888.status = 0;
			result = copyString(((NimStringDesc*) &TMP2887));
			popCurrentException();
		}
	}
	if (TMP2888.status != 0) reraiseException();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsDatInit)(void) {
}

