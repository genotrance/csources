/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY247019 TY247019;
typedef struct Tsourcefile247008 Tsourcefile247008;
typedef struct TY121008 TY121008;
typedef struct NimStringDesc NimStringDesc;
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
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident166021 Tident166021;
typedef struct TY118589 TY118589;
typedef struct Baselexer245024 Baselexer245024;
typedef struct TNimObject TNimObject;
typedef struct Streamobj137027 Streamobj137027;
typedef struct Filestreamobj137692 Filestreamobj137692;
typedef struct Slice85573 Slice85573;
typedef struct Tidobj166015 Tidobj166015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Ttype190849 Ttype190849;
typedef struct Tnode190813 Tnode190813;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY190933 TY190933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile247008  {
TY121008* lines;
NIM_BOOL dirty;
NIM_BOOL isnimfixfile;
NimStringDesc* fullpath;
NimStringDesc* newline;
NI32 fileidx;
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
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct TY118589 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Baselexer245024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj137027* input;
NI linenumber;
NI sentinel;
NI linestart;
NIM_BOOL fileopened;
};
struct  Slice85573  {
NI a;
NI b;
};
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
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
struct  Filestreamobj137692  {
  Streamobj137027 Sup;
FILE* f;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
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
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct TY247019 {
  TGenericSeq Sup;
  Tsourcefile247008 data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP859)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, replacedeprecated_247212)(Tlineinfo162338 info, Tident166021* oldsym, Tident166021* newsym);
N_NIMCALL(void, loadfile_247043)(Tlineinfo162338 info);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, tofullpath_163284)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118589* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_13217)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_13481)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_245040)(Baselexer245024* L, Streamobj137027* input, NI buflen);
N_NIMCALL(Filestreamobj137692*, newfilestream_137773)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_245050)(Baselexer245024* L);
N_NIMCALL(NI, identlen_247151)(NimStringDesc* line, NI start);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_85566)(NimStringDesc* s, Slice85573 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(Slice85573, HEX2EHEX2E_104273)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP2679, ".nimfix", 7);
STRING_LITERAL(TMP2687, "\015\012", 2);
STRING_LITERAL(TMP2688, "\012", 1);
TY247019* gsourcefiles_247038;
TNimType NTI247008; /* TSourceFile */
extern TNimType NTI121008; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI247019; /* seq[TSourceFile] */
extern Tgcheap48016 gch_48044;
extern TNimType NTI245024; /* BaseLexer */
N_NIMCALL(void, TMP859)(void* p, NI op) {
	TY247019* a;
	NI LOC1;
	a = (TY247019*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].lines, op);
	nimGCvisit((void*)a->data[LOC1].fullpath, op);
	nimGCvisit((void*)a->data[LOC1].newline, op);
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46147* c;
	c = usrtocell_49646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
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

N_NIMCALL(void, loadfile_247043)(Tlineinfo162338 info) {
	NI32 i;
	i = info.fileindex;
	{
		if (!((gsourcefiles_247038 ? gsourcefiles_247038->Sup.len : 0) <= ((NI) (i)))) goto LA3;
		gsourcefiles_247038 = (TY247019*) setLengthSeq(&(gsourcefiles_247038)->Sup, sizeof(Tsourcefile247008), ((NI) ((NI32)(i + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY118589 LOC10;
		Baselexer245024 lex;
		Filestreamobj137692* LOC16;
		Streamobj137027* LOC17;
		NI pos;
		if (!gsourcefiles_247038->data[i].lines == 0) goto LA7;
		gsourcefiles_247038->data[i].fileidx = info.fileindex;
		if (gsourcefiles_247038->data[i].lines) nimGCunrefNoCycle(gsourcefiles_247038->data[i].lines);
		gsourcefiles_247038->data[i].lines = (TY121008*) newSeqRC1((&NTI121008), 0);
		path = tofullpath_163284(info.fileindex);
		LOC9 = 0;
		LOC9 = gsourcefiles_247038->data[i].fullpath; gsourcefiles_247038->data[i].fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path, (&LOC10));
		gsourcefiles_247038->data[i].isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2679));
		{
			NimStringDesc* line_247092;
			FILE* f_247119;
			NimStringDesc* res_247121;
			line_247092 = 0;
			f_247119 = open_13217(path, ((NU8) 0), ((NI) 8000));
			res_247121 = rawNewString(((NI) 80));
			{
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_13481(f_247119, (&res_247121));
					if (!LOC14) goto LA13;
					line_247092 = res_247121;
					gsourcefiles_247038->data[i].lines = (TY121008*) incrSeq(&(gsourcefiles_247038->data[i].lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_247038->data[i].lines->data[gsourcefiles_247038->data[i].lines->Sup.len-1]; gsourcefiles_247038->data[i].lines->data[gsourcefiles_247038->data[i].lines->Sup.len-1] = copyStringRC1(line_247092);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			fclose(f_247119);
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI245024);
		LOC16 = 0;
		LOC16 = newfilestream_137773(path, ((NU8) 0));
		LOC17 = 0;
		LOC17 = &LOC16->Sup;
		open_245040((&lex), LOC17, ((NI) 8192));
		pos = lex.bufpos;
		{
			while (1) {
				switch (((NU8)(lex.buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC21;
					LOC21 = 0;
					LOC21 = gsourcefiles_247038->data[i].newline; gsourcefiles_247038->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP2687));
					if (LOC21) nimGCunrefNoCycle(LOC21);
					goto LA18;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC23;
					LOC23 = 0;
					LOC23 = gsourcefiles_247038->data[i].newline; gsourcefiles_247038->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP2688));
					if (LOC23) nimGCunrefNoCycle(LOC23);
					goto LA18;
				}
				break;
				default:
				{
				}
				break;
				}
				pos += ((NI) 1);
			}
		} LA18: ;
		close_245050((&lex));
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_247151)(NimStringDesc* line, NI start) {
	NI result;
	result = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = ((NI)(start + result) < (line ? line->Sup.len : 0));
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(start + result)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result += ((NI) 1);
		} LA2: ;
	}
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_85566)(NimStringDesc* s, Slice85573 x) {
	NimStringDesc* result;
	result = 0;
	result = copyStrLast(s, x.a, x.b);
	return result;
}

static N_INLINE(Slice85573, HEX2EHEX2E_104273)(NI a, NI b) {
	Slice85573 result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, replacedeprecated_247212)(Tlineinfo162338 info, Tident166021* oldsym, Tident166021* newsym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI LOC17;
{	loadfile_247043(info);
	line = gsourcefiles_247038->data[info.fileindex].lines->data[(NI16)(info.line - ((NI16) 1))];
	first = ((((NI) (info.col)) <= (line ? line->Sup.len : 0)) ? ((NI) (info.col)) : (line ? line->Sup.len : 0));
	{
		if (!(first < ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = (((NI) 0) < first);
			if (!(LOC7)) goto LA8;
			LOC7 = (((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			first -= ((NI) 1);
		} LA6: ;
	}
	{
		if (!(first < ((NI) 0))) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		first += ((NI) 1);
	}
	LA15: ;
	LOC17 = 0;
	LOC17 = identlen_247151(line, first);
	last = (NI)((NI)(first + LOC17) - ((NI) 1));
	{
		Slice85573 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_104273(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_85566(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).s);
		if (!(LOC22 == ((NI) 0))) goto LA23;
		LOC25 = 0;
		LOC26 = 0;
		LOC26 = copyStrLast(line, ((NI) 0), (NI)(first - ((NI) 1)));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI)(last + ((NI) 1)));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).s->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).s);
appendString(LOC25, LOC27);
		x = LOC25;
		asgnRefNoCycle((void**) (&gsourcefiles_247038->data[info.fileindex].lines->data[(NI16)(info.line - ((NI16) 1))]), x);
		gsourcefiles_247038->data[info.fileindex].dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_247277)(Tlineinfo162338 info, Tsym190843* oldsym, Tsym190843* newsym) {
	replacedeprecated_247212(info, (*oldsym).name, (*newsym).name);
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit)(void) {
	if (gsourcefiles_247038) nimGCunrefNoCycle(gsourcefiles_247038);
	gsourcefiles_247038 = (TY247019*) newSeqRC1((&NTI247019), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit)(void) {
static TNimNode* TMP858[6];
static TNimNode TMP854[7];
NTI247008.size = sizeof(Tsourcefile247008);
NTI247008.kind = 18;
NTI247008.base = 0;
NTI247008.flags = 2;
TMP858[0] = &TMP854[1];
TMP854[1].kind = 1;
TMP854[1].offset = offsetof(Tsourcefile247008, lines);
TMP854[1].typ = (&NTI121008);
TMP854[1].name = "lines";
TMP858[1] = &TMP854[2];
TMP854[2].kind = 1;
TMP854[2].offset = offsetof(Tsourcefile247008, dirty);
TMP854[2].typ = (&NTI138);
TMP854[2].name = "dirty";
TMP858[2] = &TMP854[3];
TMP854[3].kind = 1;
TMP854[3].offset = offsetof(Tsourcefile247008, isnimfixfile);
TMP854[3].typ = (&NTI138);
TMP854[3].name = "isNimfixFile";
TMP858[3] = &TMP854[4];
TMP854[4].kind = 1;
TMP854[4].offset = offsetof(Tsourcefile247008, fullpath);
TMP854[4].typ = (&NTI149);
TMP854[4].name = "fullpath";
TMP858[4] = &TMP854[5];
TMP854[5].kind = 1;
TMP854[5].offset = offsetof(Tsourcefile247008, newline);
TMP854[5].typ = (&NTI149);
TMP854[5].name = "newline";
TMP858[5] = &TMP854[6];
TMP854[6].kind = 1;
TMP854[6].offset = offsetof(Tsourcefile247008, fileidx);
TMP854[6].typ = (&NTI114);
TMP854[6].name = "fileIdx";
TMP854[0].len = 6; TMP854[0].kind = 2; TMP854[0].sons = &TMP858[0];
NTI247008.node = &TMP854[0];
NTI247019.size = sizeof(TY247019*);
NTI247019.kind = 24;
NTI247019.base = (&NTI247008);
NTI247019.flags = 2;
NTI247019.marker = TMP859;
}

