/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY186169 TY186169;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct Tlexer181185 Tlexer181185;
typedef struct Tbaselexer179024 Tbaselexer179024;
typedef struct TNimObject TNimObject;
typedef struct Tllstream178204 Tllstream178204;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Ttoken181181 Ttoken181181;
typedef struct Tident167021 Tident167021;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tbaselexer179024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream178204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo163338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler181183;
struct  Tlexer181185  {
  Tbaselexer179024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler181183 errorhandler;
};
struct  Ttoken181181  {
NU8 toktype;
NI indent;
Tident167021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
typedef NimStringDesc* TY176063[3];
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
struct  Tllstream178204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct Keyvaluepair133008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY186169 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  Keyvaluepair133008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP720)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, getprefixdir_154371)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, readconfigfile_186522)(NimStringDesc* filename);
N_NIMCALL(Tllstream178204*, llstreamopen_178256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_181369)(Ttoken181181* L);
N_NIMCALL(void, openlexer_181412)(Tlexer181185* lex, NimStringDesc* filename, Tllstream178204* inputstream);
N_NIMCALL(void, conftok_186379)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, ppgettok_186009)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, rawgettok_184848)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, parsedirective_186344)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(NU16, whichkeyword_172386)(Tident167021* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_186147)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(NIM_BOOL, parseexpr_186039)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_186088)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(NIM_BOOL, parseatom_186048)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, lexmessage_181483)(Tlexer181185* L, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_168167)(Tident167021* symbol);
N_NIMCALL(void, jumptodirective_186222)(Tlexer181185* L, Ttoken181181* tok, NU8 dest);
N_NIMCALL(void, doelse_186232)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, doelif_186253)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, doend_186193)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(void, msgwriteln_164538)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj133012* t, NU8 flags);
N_NIMCALL(NimStringDesc*, toktostr_181323)(Ttoken181181* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_121669)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_121644)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_186441)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier);
static N_INLINE(Tlineinfo163338, getlineinfo_181218)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(Tlineinfo163338, newlineinfo_163870)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_186410)(Tlexer181185* L, Ttoken181181* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_176040)(NimStringDesc* switch_176042, NimStringDesc* arg, NU8 pass, Tlineinfo163338 info);
N_NIMCALL(void, closelexer_181424)(Tlexer181185* lex);
N_NIMCALL(void, rawmessage_164970)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_186592)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getuserconfigpath_186580)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_118292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_117010)(NimStringDesc* filename);
STRING_LITERAL(TMP1873, "/usr", 4);
STRING_LITERAL(TMP1874, "/usr/lib/nim", 12);
STRING_LITERAL(TMP1875, "/usr/local", 10);
STRING_LITERAL(TMP1876, "/usr/local/lib/nim", 18);
STRING_LITERAL(TMP1877, "lib", 3);
STRING_LITERAL(TMP1878, "@", 1);
STRING_LITERAL(TMP1879, "\')\'", 3);
STRING_LITERAL(TMP1880, "\':\'", 3);
STRING_LITERAL(TMP1881, "@if", 3);
STRING_LITERAL(TMP1882, "@end", 4);
STRING_LITERAL(TMP1884, "putenv", 6);
STRING_LITERAL(TMP1885, "prependenv", 10);
STRING_LITERAL(TMP1886, "appendenv", 9);
STRING_LITERAL(TMP1887, "-", 1);
STRING_LITERAL(TMP1888, "--", 2);
STRING_LITERAL(TMP1889, "", 0);
STRING_LITERAL(TMP1890, "\']\'", 3);
STRING_LITERAL(TMP1891, "%=", 2);
STRING_LITERAL(TMP1892, "&", 1);
STRING_LITERAL(TMP1893, "config", 6);
STRING_LITERAL(TMP1894, "etc", 3);
STRING_LITERAL(TMP1895, "/etc/", 5);
STRING_LITERAL(TMP1897, "nimcfg", 6);
STRING_LITERAL(TMP1898, "nim.cfg", 7);
STRING_LITERAL(TMP1899, "nimrod.cfg", 10);
TY186169* condstack_186188;
extern TNimType NTI138; /* bool */
TNimType NTI186169; /* seq[bool] */
extern Tgcheap48016 gch_48044;
extern NimStringDesc* libpath_154233;
extern NU32 gglobaloptions_154128;
extern TNimType NTI181185; /* TLexer */
extern Stringtableobj133012* gconfigvars_154231;
extern NI gverbosity_154137;
extern NimStringDesc* gprojectpath_154235;
extern NimStringDesc* gprojectname_154234;
extern NimStringDesc* gprojectfull_154236;
N_NIMCALL(void, TMP720)(void* p, NI op) {
	TY186169* a;
	NI LOC1;
	a = (TY186169*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46146* c;
	c = usrtocell_49646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
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

N_NIMCALL(void, ppgettok_186009)(Tlexer181185* L, Ttoken181181* tok) {
	rawgettok_184848(L, tok);
	{
		while (1) {
			if (!((*tok).toktype == ((NU8) 113))) goto LA2;
			rawgettok_184848(L, tok);
		} LA2: ;
	}
}

N_NIMCALL(NIM_BOOL, parseatom_186048)(Tlexer181185* L, Ttoken181181* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).toktype == ((NU8) 93))) goto LA3;
		ppgettok_186009(L, tok);
		result = parseexpr_186039(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 94))) goto LA7;
			ppgettok_186009(L, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1879));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).ident).Sup.id == ((NI) 45))) goto LA11;
		ppgettok_186009(L, tok);
		LOC13 = 0;
		LOC13 = parseatom_186048(L, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_168167((*tok).ident);
		ppgettok_186009(L, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_186088)(Tlexer181185* L, Ttoken181181* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_186048(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 2))) goto LA2;
			ppgettok_186009(L, tok);
			b = parseatom_186048(L, tok);
			LOC3 = 0;
			LOC3 = result;
			if (!(LOC3)) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, parseexpr_186039)(Tlexer181185* L, Ttoken181181* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_186088(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 49))) goto LA2;
			ppgettok_186009(L, tok);
			b = parseandexpr_186088(L, tok);
			LOC3 = 0;
			LOC3 = result;
			if (LOC3) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, evalppif_186147)(Tlexer181185* L, Ttoken181181* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_186009(L, tok);
	result = parseexpr_186039(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA3;
		ppgettok_186009(L, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1880));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_186232)(Tlexer181185* L, Ttoken181181* tok) {
	{
		if (!((condstack_186188 ? (condstack_186188->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1881));
	}
	LA3: ;
	ppgettok_186009(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA7;
		ppgettok_186009(L, tok);
	}
	LA7: ;
	{
		if (!condstack_186188->data[(condstack_186188 ? (condstack_186188->Sup.len-1) : -1)]) goto LA11;
		jumptodirective_186222(L, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_186253)(Tlexer181185* L, Ttoken181181* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_186188 ? (condstack_186188->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1881));
	}
	LA3: ;
	res = evalppif_186147(L, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_186188->data[(condstack_186188 ? (condstack_186188->Sup.len-1) : -1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_186222(L, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_186188->data[(condstack_186188 ? (condstack_186188->Sup.len-1) : -1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_186193)(Tlexer181185* L, Ttoken181181* tok) {
	{
		if (!((condstack_186188 ? (condstack_186188->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1881));
	}
	LA3: ;
	ppgettok_186009(L, tok);
	condstack_186188 = (TY186169*) setLengthSeq(&(condstack_186188)->Sup, sizeof(NIM_BOOL), ((NI) ((condstack_186188 ? (condstack_186188->Sup.len-1) : -1))));
}

N_NIMCALL(void, jumptodirective_186222)(Tlexer181185* L, Ttoken181181* tok, NU8 dest) {
	NI nestedifs;
	nestedifs = ((NI) 0);
	{
		while (1) {
			{
				NIM_BOOL LOC5;
				NU16 LOC9;
				LOC5 = 0;
				LOC5 = !(((*tok).ident == NIM_NIL));
				if (!(LOC5)) goto LA6;
				LOC5 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP1878));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_186009(L, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_172386((*tok).ident);
				switch (LOC9) {
				case ((NU16) 31):
				{
					nestedifs += ((NI) 1);
				}
				break;
				case ((NU16) 21):
				{
					{
						NIM_BOOL LOC14;
						LOC14 = 0;
						LOC14 = (dest == ((NU8) 1));
						if (!(LOC14)) goto LA15;
						LOC14 = (nestedifs == ((NI) 0));
						LA15: ;
						if (!LOC14) goto LA16;
						doelse_186232(L, tok);
						goto LA1;
					}
					LA16: ;
				}
				break;
				case ((NU16) 20):
				{
					{
						NIM_BOOL LOC21;
						LOC21 = 0;
						LOC21 = (dest == ((NU8) 1));
						if (!(LOC21)) goto LA22;
						LOC21 = (nestedifs == ((NI) 0));
						LA22: ;
						if (!LOC21) goto LA23;
						doelif_186253(L, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU16) 22):
				{
					{
						if (!(nestedifs == ((NI) 0))) goto LA28;
						doend_186193(L, tok);
						goto LA1;
					}
					LA28: ;
					{
						if (!(((NI) 0) < nestedifs)) goto LA32;
						nestedifs -= ((NI) 1);
					}
					LA32: ;
				}
				break;
				default:
				{
				}
				break;
				}
				ppgettok_186009(L, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).toktype == ((NU8) 1))) goto LA36;
				lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1882));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_186009(L, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_186344)(Tlexer181185* L, Ttoken181181* tok) {
	NU16 LOC1;
	ppgettok_186009(L, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_172386((*tok).ident);
	switch (LOC1) {
	case ((NU16) 31):
	{
		NIM_BOOL res;
		condstack_186188 = (TY186169*) setLengthSeq(&(condstack_186188)->Sup, sizeof(NIM_BOOL), ((NI) ((NI)((condstack_186188 ? condstack_186188->Sup.len : 0) + ((NI) 1)))));
		res = evalppif_186147(L, tok);
		condstack_186188->data[(condstack_186188 ? (condstack_186188->Sup.len-1) : -1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_186222(L, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU16) 20):
	{
		doelif_186253(L, tok);
	}
	break;
	case ((NU16) 21):
	{
		doelse_186232(L, tok);
	}
	break;
	case ((NU16) 22):
	{
		doend_186193(L, tok);
	}
	break;
	case ((NU16) 180):
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		ppgettok_186009(L, tok);
		LOC11 = 0;
		LOC11 = toktostr_181323((&(*tok)));
		LOC12 = 0;
		LOC12 = nstFormat(LOC11, gconfigvars_154231, 5);
		msgwriteln_164538(LOC12);
		ppgettok_186009(L, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = nsuNormalize((*(*tok).ident).s);
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1884))) goto LA15;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1885))) goto LA16;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1886))) goto LA17;
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC21;
			ppgettok_186009(L, tok);
			key = toktostr_181323((&(*tok)));
			ppgettok_186009(L, tok);
			LOC21 = 0;
			LOC21 = toktostr_181323((&(*tok)));
			putenv_121669(key, LOC21);
			ppgettok_186009(L, tok);
		}
		goto LA19;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			ppgettok_186009(L, tok);
			key = toktostr_181323((&(*tok)));
			ppgettok_186009(L, tok);
			LOC23 = 0;
			LOC24 = 0;
			LOC24 = toktostr_181323((&(*tok)));
			LOC25 = 0;
			LOC25 = getenv_121644(key);
			LOC23 = rawNewString(LOC24->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, LOC25);
			putenv_121669(key, LOC23);
			ppgettok_186009(L, tok);
		}
		goto LA19;
		LA17: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NimStringDesc* LOC29;
			ppgettok_186009(L, tok);
			key = toktostr_181323((&(*tok)));
			ppgettok_186009(L, tok);
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = getenv_121644(key);
			LOC29 = 0;
			LOC29 = toktostr_181323((&(*tok)));
			LOC27 = rawNewString(LOC28->Sup.len + LOC29->Sup.len + 0);
appendString(LOC27, LOC28);
appendString(LOC27, LOC29);
			putenv_121669(key, LOC27);
			ppgettok_186009(L, tok);
		}
		goto LA19;
		LA18: ;
		{
			NimStringDesc* LOC31;
			LOC31 = 0;
			LOC31 = toktostr_181323((&(*tok)));
			lexmessage_181483((&(*L)), ((NU16) 30), LOC31);
		}
		LA19: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_186379)(Tlexer181185* L, Ttoken181181* tok) {
	ppgettok_186009(L, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP1878));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_186344(L, tok);
		} LA2: ;
	}
}

static N_INLINE(Tlineinfo163338, getlineinfo_181218)(Tlexer181185* L, Ttoken181181* tok) {
	Tlineinfo163338 result;
	memset((void*)(&result), 0, sizeof(result));
	result = newlineinfo_163870((*L).fileidx, (*tok).line, (*tok).col);
	return result;
}

N_NIMCALL(void, checksymbol_186410)(Tlexer181185* L, Ttoken181181* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).toktype >= ((NU8) 2) && (*tok).toktype <= ((NU8) 72) || (*tok).toktype >= ((NU8) 87) && (*tok).toktype <= ((NU8) 89)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_181323(tok);
		lexmessage_181483(L, ((NU16) 19), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_186441)(Tlexer181185* L, Ttoken181181* tok) {
	Tlineinfo163338 info;
	NimStringDesc* s;
	NimStringDesc* val;
	NIM_BOOL percent;
	Tident167021* LOC22;
	{
		NIM_BOOL LOC3;
		Tident167021* LOC4;
		Tident167021* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_167463(((NimStringDesc*) &TMP1887));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC4).Sup.id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_167463(((NimStringDesc*) &TMP1888));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC6).Sup.id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_186379(L, tok);
	}
	LA7: ;
	info = getlineinfo_181218((&(*L)), (&(*tok)));
	checksymbol_186410((&(*L)), (&(*tok)));
	s = toktostr_181323((&(*tok)));
	conftok_186379(L, tok);
	val = copyString(((NimStringDesc*) &TMP1889));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).toktype == ((NU8) 110))) goto LA10;
			s = addChar(s, 46);
			conftok_186379(L, tok);
			checksymbol_186410((&(*L)), (&(*tok)));
			LOC11 = 0;
			LOC11 = toktostr_181323((&(*tok)));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_186379(L, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).toktype == ((NU8) 95))) goto LA14;
		conftok_186379(L, tok);
		checksymbol_186410((&(*L)), (&(*tok)));
		LOC16 = 0;
		LOC16 = toktostr_181323((&(*tok)));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_186379(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 96))) goto LA19;
			conftok_186379(L, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_181483((&(*L)), ((NU16) 23), ((NimStringDesc*) &TMP1890));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	LOC22 = 0;
	LOC22 = getident_167463(((NimStringDesc*) &TMP1891));
	percent = ((*(*tok).ident).Sup.id == (*LOC22).Sup.id);
	{
		NIM_BOOL LOC25;
		NimStringDesc* LOC33;
		LOC25 = 0;
		LOC25 = ((*tok).toktype == ((NU8) 107) || (*tok).toktype == ((NU8) 109));
		if (LOC25) goto LA26;
		LOC25 = percent;
		LA26: ;
		if (!LOC25) goto LA27;
		{
			if (!(((NI) 0) < (val ? val->Sup.len : 0))) goto LA31;
			val = addChar(val, 58);
		}
		LA31: ;
		conftok_186379(L, tok);
		checksymbol_186410((&(*L)), (&(*tok)));
		LOC33 = 0;
		LOC33 = toktostr_181323((&(*tok)));
		val = resizeString(val, LOC33->Sup.len + 0);
appendString(val, LOC33);
		conftok_186379(L, tok);
		{
			while (1) {
				NIM_BOOL LOC36;
				Tident167021* LOC38;
				NimStringDesc* LOC39;
				LOC36 = 0;
				LOC36 = !(((*tok).ident == NIM_NIL));
				if (!(LOC36)) goto LA37;
				LOC38 = 0;
				LOC38 = getident_167463(((NimStringDesc*) &TMP1892));
				LOC36 = ((*(*tok).ident).Sup.id == (*LOC38).Sup.id);
				LA37: ;
				if (!LOC36) goto LA35;
				conftok_186379(L, tok);
				checksymbol_186410((&(*L)), (&(*tok)));
				LOC39 = 0;
				LOC39 = toktostr_181323((&(*tok)));
				val = resizeString(val, LOC39->Sup.len + 0);
appendString(val, LOC39);
				conftok_186379(L, tok);
			} LA35: ;
		}
	}
	LA27: ;
	{
		NimStringDesc* LOC44;
		if (!percent) goto LA42;
		LOC44 = 0;
		LOC44 = nstFormat(val, gconfigvars_154231, 3);
		processswitch_176040(s, LOC44, ((NU8) 2), info);
	}
	goto LA40;
	LA42: ;
	{
		processswitch_176040(s, val, ((NU8) 2), info);
	}
	LA40: ;
}

N_NIMCALL(void, readconfigfile_186522)(NimStringDesc* filename) {
	Tlexer181185 L;
	Ttoken181181 tok;
	Tllstream178204* stream;
	memset((void*)(&L), 0, sizeof(L));
	L.Sup.Sup.m_type = (&NTI181185);
	memset((void*)(&tok), 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_178256(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_181369((&tok));
		openlexer_181412((&L), filename, stream);
		tok.toktype = ((NU8) 1);
		conftok_186379((&L), (&tok));
		{
			while (1) {
				if (!!((tok.toktype == ((NU8) 1)))) goto LA6;
				parseassignment_186441((&L), (&tok));
			} LA6: ;
		}
		{
			if (!(((NI) 0) < (condstack_186188 ? condstack_186188->Sup.len : 0))) goto LA9;
			lexmessage_181483((&L), ((NU16) 23), ((NimStringDesc*) &TMP1882));
		}
		LA9: ;
		closelexer_181424((&L));
		{
			if (!(((NI) 1) <= gverbosity_154137)) goto LA13;
			rawmessage_164970(((NU16) 272), filename);
		}
		LA13: ;
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_186592)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY176063 LOC1;
	result = 0;
	p = getprefixdir_154371();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP1893));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY176063 LOC7;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p);
		LOC7[1] = copyString(((NimStringDesc*) &TMP1894));
		LOC7[2] = copyString(filename);
		result = nosjoinPathOpenArray(LOC7, 3);
	}
	LA5: ;
	{
		NIM_BOOL LOC10;
		NimStringDesc* LOC13;
		LOC10 = 0;
		LOC10 = nosexistsFile(result);
		if (!!(LOC10)) goto LA11;
		LOC13 = 0;
		LOC13 = rawNewString(filename->Sup.len + 5);
appendString(LOC13, ((NimStringDesc*) &TMP1895));
appendString(LOC13, filename);
		result = LOC13;
	}
	LA11: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_186580)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_117010)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_186811)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	{
		NimStringDesc* prefix;
		if (!((libpath_154233) && (libpath_154233)->Sup.len == 0)) goto LA3;
		prefix = getprefixdir_154371();
		{
			NimStringDesc* LOC9;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1873))) goto LA7;
			LOC9 = 0;
			LOC9 = libpath_154233; libpath_154233 = copyStringRC1(((NimStringDesc*) &TMP1874));
			if (LOC9) nimGCunrefNoCycle(LOC9);
		}
		goto LA5;
		LA7: ;
		{
			NimStringDesc* LOC13;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1875))) goto LA11;
			LOC13 = 0;
			LOC13 = libpath_154233; libpath_154233 = copyStringRC1(((NimStringDesc*) &TMP1876));
			if (LOC13) nimGCunrefNoCycle(LOC13);
		}
		goto LA5;
		LA11: ;
		{
			asgnRefNoCycle((void**) (&libpath_154233), nosjoinPath(prefix, ((NimStringDesc*) &TMP1877)));
		}
		LA5: ;
	}
	LA3: ;
	{
		NimStringDesc* LOC19;
		if (!!(((gglobaloptions_154128 &(1<<((((NU8) 16))&31)))!=0))) goto LA17;
		LOC19 = 0;
		LOC19 = getsystemconfigpath_186592(cfg);
		readconfigfile_186522(LOC19);
	}
	LA17: ;
	{
		NimStringDesc* LOC24;
		if (!!(((gglobaloptions_154128 &(1<<((((NU8) 18))&31)))!=0))) goto LA22;
		LOC24 = 0;
		LOC24 = getuserconfigpath_186580(cfg);
		readconfigfile_186522(LOC24);
	}
	LA22: ;
	{
		if (!(((NI) 0) < (gprojectpath_154235 ? gprojectpath_154235->Sup.len : 0))) goto LA27;
		pd = copyString(gprojectpath_154235);
	}
	goto LA25;
	LA27: ;
	{
		pd = nosgetCurrentDir();
	}
	LA25: ;
	{
		if (!!(((gglobaloptions_154128 &(1<<((((NU8) 19))&31)))!=0))) goto LA32;
		{
			NimStringDesc* dir_187034;
			dir_187034 = 0;
			{
				NimStringDesc* current_187051;
				if (!NIM_FALSE) goto LA37;
				current_187051 = copyString(pd);
				{
					NimStringDesc* LOC43;
					if (!NIM_FALSE) goto LA41;
					dir_187034 = pd;
					LOC43 = 0;
					LOC43 = HEX2F_118292(dir_187034, cfg);
					readconfigfile_186522(LOC43);
				}
				LA41: ;
				{
					while (1) {
						NimStringDesc* LOC51;
						{
							NIM_BOOL LOC48;
							LOC48 = 0;
							LOC48 = nosisRootDir(current_187051);
							if (!LOC48) goto LA49;
							goto LA44;
						}
						LA49: ;
						current_187051 = nosparentDir(current_187051);
						dir_187034 = current_187051;
						LOC51 = 0;
						LOC51 = HEX2F_118292(dir_187034, cfg);
						readconfigfile_186522(LOC51);
					}
				} LA44: ;
			}
			goto LA35;
			LA37: ;
			{
				{
					NI i_187053;
					NI HEX3Atmp_187055;
					NI res_187057;
					i_187053 = 0;
					HEX3Atmp_187055 = 0;
					HEX3Atmp_187055 = (NI)((pd ? pd->Sup.len : 0) - ((NI) 2));
					res_187057 = ((NI) 0);
					{
						while (1) {
							if (!(res_187057 <= HEX3Atmp_187055)) goto LA55;
							i_187053 = res_187057;
							{
								NIM_BOOL LOC58;
								NIM_BOOL LOC60;
								NimStringDesc* LOC64;
								LOC58 = 0;
								LOC58 = (((NU8)(pd->data[i_187053])) == ((NU8)(47)) || ((NU8)(pd->data[i_187053])) == ((NU8)(47)));
								if (!(LOC58)) goto LA59;
								LOC60 = 0;
								LOC60 = (i_187053 == ((NI) 0));
								if (LOC60) goto LA61;
								LOC60 = !((((NU8)(pd->data[(NI)(i_187053 - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(pd->data[(NI)(i_187053 - ((NI) 1))])) == ((NU8)(47))));
								LA61: ;
								LOC58 = LOC60;
								LA59: ;
								if (!LOC58) goto LA62;
								dir_187034 = copyStrLast(pd, ((NI) 0), i_187053);
								LOC64 = 0;
								LOC64 = HEX2F_118292(dir_187034, cfg);
								readconfigfile_186522(LOC64);
							}
							LA62: ;
							res_187057 += ((NI) 1);
						} LA55: ;
					}
				}
				{
					NimStringDesc* LOC69;
					if (!NIM_FALSE) goto LA67;
					dir_187034 = pd;
					LOC69 = 0;
					LOC69 = HEX2F_118292(dir_187034, cfg);
					readconfigfile_186522(LOC69);
				}
				LA67: ;
			}
			LA35: ;
		}
	}
	LA32: ;
	{
		NimStringDesc* LOC74;
		if (!!(((gglobaloptions_154128 &(1<<((((NU8) 17))&31)))!=0))) goto LA72;
		LOC74 = 0;
		LOC74 = HEX2F_118292(pd, cfg);
		readconfigfile_186522(LOC74);
		{
			NimStringDesc* projectconfig;
			if (!!(((gprojectname_154234 ? gprojectname_154234->Sup.len : 0) == ((NI) 0)))) goto LA77;
			projectconfig = noschangeFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP1897));
			{
				NIM_BOOL LOC81;
				LOC81 = 0;
				LOC81 = fileexists_117010(projectconfig);
				if (!!(LOC81)) goto LA82;
				projectconfig = noschangeFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP1898));
			}
			LA82: ;
			{
				NIM_BOOL LOC86;
				LOC86 = 0;
				LOC86 = fileexists_117010(projectconfig);
				if (!!(LOC86)) goto LA87;
				projectconfig = noschangeFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP1899));
				{
					NIM_BOOL LOC91;
					LOC91 = 0;
					LOC91 = fileexists_117010(projectconfig);
					if (!LOC91) goto LA92;
					rawmessage_164970(((NU16) 234), projectconfig);
				}
				LA92: ;
			}
			LA87: ;
			readconfigfile_186522(projectconfig);
		}
		LA77: ;
	}
	LA72: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfInit)(void) {
	if (condstack_186188) nimGCunrefNoCycle(condstack_186188);
	condstack_186188 = (TY186169*) newSeqRC1((&NTI186169), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimconfDatInit)(void) {
NTI186169.size = sizeof(TY186169*);
NTI186169.kind = 24;
NTI186169.base = (&NTI138);
NTI186169.flags = 2;
NTI186169.marker = TMP720;
}

