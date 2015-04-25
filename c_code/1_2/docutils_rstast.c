/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Trstnode297011 Trstnode297011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Trstnodeseq297009 Trstnodeseq297009;
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
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Trstnode297011  {
NU8 kind;
NimStringDesc* text;
NI level;
Trstnodeseq297009* sons;
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
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct Trstnodeseq297009 {
  TGenericSeq Sup;
  Trstnode297011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2457)(void* p, NI op);
N_NIMCALL(void, TMP2458)(void* p, NI op);
N_NIMCALL(Trstnode297011*, newrstnode_297102)(NU8 kind);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, add_297167)(Trstnode297011* father, Trstnode297011* son);
TNimType NTI297011; /* TRstNode */
TNimType NTI297005; /* TRstNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI297009; /* TRstNodeSeq */
TNimType NTI297007; /* PRstNode */
extern Tgcheap48016 gch_48044;

N_NIMCALL(NI, len_297084)(Trstnode297011* n) {
	NI result;
	result = 0;
	result = ((*n).sons ? (*n).sons->Sup.len : 0);
	return result;
}

N_NIMCALL(Trstnode297011*, lastson_297149)(Trstnode297011* n) {
	Trstnode297011* result;
	result = 0;
	result = (*n).sons->data[(NI)(((*n).sons ? (*n).sons->Sup.len : 0) - ((NI) 1))];
	return result;
}
N_NIMCALL(void, TMP2457)(void* p, NI op) {
	Trstnodeseq297009* a;
	NI LOC1;
	a = (Trstnodeseq297009*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP2458)(void* p, NI op) {
	Trstnode297011* a;
	a = (Trstnode297011*)p;
	nimGCvisit((void*)(*a).text, op);
	nimGCvisit((void*)(*a).sons, op);
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

N_NIMCALL(Trstnode297011*, newrstnode_297102)(NU8 kind) {
	Trstnode297011* result;
	result = 0;
	result = (Trstnode297011*) newObj((&NTI297007), sizeof(Trstnode297011));
	if ((*result).sons) nimGCunrefNoCycle((*result).sons);
	(*result).sons = (Trstnodeseq297009*) newSeqRC1((&NTI297009), 0);
	(*result).kind = kind;
	return result;
}

N_NIMCALL(Trstnode297011*, newrstnode_297138)(NU8 kind, NimStringDesc* s) {
	Trstnode297011* result;
	NimStringDesc* LOC1;
	result = 0;
	result = newrstnode_297102(kind);
	LOC1 = 0;
	LOC1 = (*result).text; (*result).text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
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

N_NIMCALL(void, add_297167)(Trstnode297011* father, Trstnode297011* son) {
	(*father).sons = (Trstnodeseq297009*) incrSeq(&((*father).sons)->Sup, sizeof(Trstnode297011*));
	asgnRefNoCycle((void**) (&(*father).sons->data[(*father).sons->Sup.len-1]), son);
}

N_NIMCALL(void, addifnotnil_297187)(Trstnode297011* father, Trstnode297011* son) {
	{
		if (!!((son == NIM_NIL))) goto LA3;
		add_297167(father, son);
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void) {
static TNimNode* TMP2453[4];
static TNimNode* TMP2454[65];
NI TMP2456;
static char* NIM_CONST TMP2455[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP882[71];
NTI297011.size = sizeof(Trstnode297011);
NTI297011.kind = 18;
NTI297011.base = 0;
NTI297011.flags = 2;
TMP2453[0] = &TMP882[1];
NTI297005.size = sizeof(NU8);
NTI297005.kind = 14;
NTI297005.base = 0;
NTI297005.flags = 3;
for (TMP2456 = 0; TMP2456 < 65; TMP2456++) {
TMP882[TMP2456+2].kind = 1;
TMP882[TMP2456+2].offset = TMP2456;
TMP882[TMP2456+2].name = TMP2455[TMP2456];
TMP2454[TMP2456] = &TMP882[TMP2456+2];
}
TMP882[67].len = 65; TMP882[67].kind = 2; TMP882[67].sons = &TMP2454[0];
NTI297005.node = &TMP882[67];
TMP882[1].kind = 1;
TMP882[1].offset = offsetof(Trstnode297011, kind);
TMP882[1].typ = (&NTI297005);
TMP882[1].name = "kind";
TMP2453[1] = &TMP882[68];
TMP882[68].kind = 1;
TMP882[68].offset = offsetof(Trstnode297011, text);
TMP882[68].typ = (&NTI149);
TMP882[68].name = "text";
TMP2453[2] = &TMP882[69];
TMP882[69].kind = 1;
TMP882[69].offset = offsetof(Trstnode297011, level);
TMP882[69].typ = (&NTI108);
TMP882[69].name = "level";
TMP2453[3] = &TMP882[70];
NTI297009.size = sizeof(Trstnodeseq297009*);
NTI297009.kind = 24;
NTI297009.base = (&NTI297007);
NTI297009.flags = 2;
NTI297009.marker = TMP2457;
TMP882[70].kind = 1;
TMP882[70].offset = offsetof(Trstnode297011, sons);
TMP882[70].typ = (&NTI297009);
TMP882[70].name = "sons";
TMP882[0].len = 4; TMP882[0].kind = 2; TMP882[0].sons = &TMP2453[0];
NTI297011.node = &TMP882[0];
NTI297007.size = sizeof(Trstnode297011*);
NTI297007.kind = 22;
NTI297007.base = (&NTI297011);
NTI297007.flags = 2;
NTI297007.marker = TMP2458;
}

