/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Ttype191849 Ttype191849;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tnode191813 Tnode191813;
typedef struct Tsym191843 Tsym191843;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
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
typedef struct Tidpair191857 Tidpair191857;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tinfocpu159479 Tinfocpu159479;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY191933 TY191933;
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
typedef Tidtable191861 TY454272[62];
typedef Ttype191849* TY238060[62];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Tidpair191857  {
Tidobj167015* key;
TNimObject* val;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct Tinfocpu159479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu159479 TY159497[14];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, inittypetables_454285)(void);
N_NIMCALL(void, initidtable_195057)(Tidtable191861* x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(void, internalerror_165234)(NimStringDesc* errmsg);
N_NIMCALL(Ttype191849*, getuniquetype_454656)(Ttype191849* key);
N_NIMCALL(Ttype191849*, lastson_194442)(Ttype191849* n);
N_NIMCALL(Ttype191849*, slowsearch_454601)(Ttype191849* key, NU8 k);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_199205)(Tidtable191861 t, Tidobj167015* key);
N_NIMCALL(NIM_BOOL, samebackendtype_228024)(Ttype191849* x, Ttype191849* y);
N_NIMCALL(void, idtableput_199196)(Tidtable191861* t, Tidobj167015* key, TNimObject* val);
N_NIMCALL(TNimObject*, idtableget_199182)(Tidtable191861 t, Tidobj167015* key);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, tocchar_163441)(NIM_CHAR c);
N_NIMCALL(Tnode191813*, getpragmastmt_454017)(Tnode191813* n, NU16 w);
static N_INLINE(NI, len_192097)(Tnode191813* n);
static N_INLINE(Tnode191813*, HEX5BHEX5D_192246)(Tnode191813* n, NI i);
N_NIMCALL(NU16, whichpragma_220673)(Tnode191813* n);
STRING_LITERAL(TMP3492, "N", 1);
STRING_LITERAL(TMP3493, "HEX", 3);
STRING_LITERAL(TMP3501, "getUniqueType", 13);
STRING_LITERAL(TMP3590, "\"", 1);
extern NIM_CONST TY159497 Cpu_159496;
TY454272 gtypetable_454275;
TY238060 gcanonicaltypes_454279;
extern Tgcheap48016 gch_48044;
extern NU8 targetcpu_159600;

N_NIMCALL(void, inittypetables_454285)(void) {
	{
		NU8 i_454423;
		NI res_454430;
		i_454423 = 0;
		res_454430 = ((NI) 0);
		{
			while (1) {
				if (!(res_454430 <= ((NI) 61))) goto LA3;
				i_454423 = ((NU8) (res_454430));
				initidtable_195057((&gtypetable_454275[(i_454423)- 0]));
				res_454430 += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, mangle_454896)(NimStringDesc* name) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(((NI) ((name ? name->Sup.len : 0))));
	switch (((NU8)(name->data[((NI) 0)]))) {
	case 65 ... 90:
	case 97 ... 122:
	{
		result = addChar(result, name->data[((NI) 0)]);
	}
	break;
	case 48 ... 57:
	{
		NimStringDesc* LOC3;
		LOC3 = 0;
		LOC3 = rawNewString(2);
appendString(LOC3, ((NimStringDesc*) &TMP3492));
appendChar(LOC3, name->data[((NI) 0)]);
		result = resizeString(result, LOC3->Sup.len + 0);
appendString(result, LOC3);
	}
	break;
	default:
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = nsuToHex(((NI64) (((NU8)(name->data[((NI) 0)])))), ((NI) 2));
		LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &TMP3493));
appendString(LOC5, LOC6);
		result = LOC5;
	}
	break;
	}
	{
		NI i_454918;
		NI HEX3Atmp_454929;
		NI res_454932;
		i_454918 = 0;
		HEX3Atmp_454929 = 0;
		HEX3Atmp_454929 = (NI)((name ? name->Sup.len : 0) - ((NI) 1));
		res_454932 = ((NI) 1);
		{
			while (1) {
				NIM_CHAR c;
				if (!(res_454932 <= HEX3Atmp_454929)) goto LA9;
				i_454918 = res_454932;
				c = name->data[i_454918];
				switch (((NU8)(c))) {
				case 65 ... 90:
				{
					NIM_CHAR LOC11;
					LOC11 = 0;
					LOC11 = nsuToLowerChar(c);
					result = addChar(result, LOC11);
				}
				break;
				case 95:
				{
				}
				break;
				case 97 ... 122:
				case 48 ... 57:
				{
					result = addChar(result, c);
				}
				break;
				default:
				{
					NimStringDesc* LOC15;
					NimStringDesc* LOC16;
					LOC15 = 0;
					LOC16 = 0;
					LOC16 = nsuToHex(((NI64) (((NU8)(c)))), ((NI) 2));
					LOC15 = rawNewString(LOC16->Sup.len + 3);
appendString(LOC15, ((NimStringDesc*) &TMP3493));
appendString(LOC15, LOC16);
					result = resizeString(result, LOC15->Sup.len + 0);
appendString(result, LOC15);
				}
				break;
				}
				res_454932 += ((NI) 1);
			} LA9: ;
		}
	}
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
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Ttype191849*, slowsearch_454601)(Ttype191849* key, NU8 k) {
	Ttype191849* result;
	Tidobj167015* LOC16;
	TNimObject* LOC17;
{	result = 0;
	{
		Tidobj167015* LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC3 = &key->Sup;
		LOC4 = 0;
		LOC4 = idtablehasobjectaskey_199205(gtypetable_454275[(k)- 0], LOC3);
		if (!LOC4) goto LA5;
		result = key;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI h_454618;
		NI HEX3Atmp_454634;
		NI res_454637;
		h_454618 = 0;
		HEX3Atmp_454634 = 0;
		HEX3Atmp_454634 = (gtypetable_454275[(k)- 0].data ? (gtypetable_454275[(k)- 0].data->Sup.len-1) : -1);
		res_454637 = ((NI) 0);
		{
			while (1) {
				Ttype191849* t;
				if (!(res_454637 <= HEX3Atmp_454634)) goto LA9;
				h_454618 = res_454637;
				t = ((Ttype191849*) (gtypetable_454275[(k)- 0].data->data[h_454618].key));
				{
					NIM_BOOL LOC12;
					LOC12 = 0;
					LOC12 = !((t == NIM_NIL));
					if (!(LOC12)) goto LA13;
					LOC12 = samebackendtype_228024(t, key);
					LA13: ;
					if (!LOC12) goto LA14;
					result = t;
					goto BeforeRet;
				}
				LA14: ;
				res_454637 += ((NI) 1);
			} LA9: ;
		}
	}
	LOC16 = 0;
	LOC16 = &key->Sup;
	LOC17 = 0;
	LOC17 = &key->Sup.Sup;
	idtableput_199196((&gtypetable_454275[(k)- 0]), LOC16, LOC17);
	result = key;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Ttype191849*, getuniquetype_454656)(Ttype191849* key) {
	Ttype191849* result;
	NU8 k;
{	result = 0;
	{
		if (!(key == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	k = (*key).kind;
	switch (k) {
	case ((NU8) 1):
	case ((NU8) 2):
	case ((NU8) 31) ... ((NU8) 44):
	{
		result = key;
	}
	break;
	case ((NU8) 3):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 7):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 29):
	case ((NU8) 0):
	case ((NU8) 45):
	{
		result = gcanonicaltypes_454279[(k)- 0];
		{
			if (!(result == NIM_NIL)) goto LA9;
			asgnRefNoCycle((void**) (&gcanonicaltypes_454279[(k)- 0]), key);
			result = key;
		}
		LA9: ;
	}
	break;
	case ((NU8) 8):
	case ((NU8) 51):
	case ((NU8) 12):
	case ((NU8) 60):
	case ((NU8) 61):
	case ((NU8) 54):
	case ((NU8) 52):
	case ((NU8) 53):
	case ((NU8) 55):
	case ((NU8) 56):
	case ((NU8) 57):
	case ((NU8) 58):
	{
		internalerror_165234(((NimStringDesc*) &TMP3501));
	}
	break;
	case ((NU8) 13):
	{
		{
			if (!!(((*key).deepcopy == NIM_NIL))) goto LA15;
			result = key;
		}
		goto LA13;
		LA15: ;
		{
			Ttype191849* LOC18;
			LOC18 = 0;
			LOC18 = lastson_194442(key);
			result = getuniquetype_454656(LOC18);
		}
		LA13: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 15):
	case ((NU8) 47):
	case ((NU8) 46):
	case ((NU8) 49):
	case ((NU8) 59):
	{
		Ttype191849* LOC20;
		LOC20 = 0;
		LOC20 = lastson_194442(key);
		result = getuniquetype_454656(LOC20);
	}
	break;
	case ((NU8) 21):
	case ((NU8) 22):
	case ((NU8) 23):
	{
		Ttype191849* elemtype;
		elemtype = lastson_194442(key);
		{
			if (!((IL64(35182224605190) &(IL64(1)<<(((*elemtype).kind)&IL64(63))))!=0)) goto LA24;
			result = key;
		}
		goto LA22;
		LA24: ;
		{
			result = slowsearch_454601(key, k);
		}
		LA22: ;
	}
	break;
	case ((NU8) 4):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 27):
	case ((NU8) 16):
	case ((NU8) 19):
	case ((NU8) 20):
	case ((NU8) 18):
	case ((NU8) 24):
	case ((NU8) 30):
	case ((NU8) 48):
	case ((NU8) 50):
	{
		result = slowsearch_454601(key, k);
	}
	break;
	case ((NU8) 17):
	{
		{
			Tidobj167015* LOC33;
			TNimObject* LOC34;
			if (!!((((*key).flags &(1<<((((NU8) 8))&31)))!=0))) goto LA31;
			LOC33 = 0;
			LOC33 = &key->Sup;
			LOC34 = 0;
			LOC34 = idtableget_199182(gtypetable_454275[(k)- 0], LOC33);
			result = ((Ttype191849*) (LOC34));
			{
				Tidobj167015* LOC39;
				TNimObject* LOC40;
				if (!(result == NIM_NIL)) goto LA37;
				LOC39 = 0;
				LOC39 = &key->Sup;
				LOC40 = 0;
				LOC40 = &key->Sup.Sup;
				idtableput_199196((&gtypetable_454275[(k)- 0]), LOC39, LOC40);
				result = key;
			}
			LA37: ;
		}
		goto LA29;
		LA31: ;
		{
			Tidobj167015* LOC57;
			TNimObject* LOC58;
			{
				Tidobj167015* LOC44;
				NIM_BOOL LOC45;
				LOC44 = 0;
				LOC44 = &key->Sup;
				LOC45 = 0;
				LOC45 = idtablehasobjectaskey_199205(gtypetable_454275[(k)- 0], LOC44);
				if (!LOC45) goto LA46;
				result = key;
				goto BeforeRet;
			}
			LA46: ;
			{
				NI h_454744;
				NI HEX3Atmp_454782;
				NI res_454785;
				h_454744 = 0;
				HEX3Atmp_454782 = 0;
				HEX3Atmp_454782 = (gtypetable_454275[(k)- 0].data ? (gtypetable_454275[(k)- 0].data->Sup.len-1) : -1);
				res_454785 = ((NI) 0);
				{
					while (1) {
						Ttype191849* t;
						if (!(res_454785 <= HEX3Atmp_454782)) goto LA50;
						h_454744 = res_454785;
						t = ((Ttype191849*) (gtypetable_454275[(k)- 0].data->data[h_454744].key));
						{
							NIM_BOOL LOC53;
							LOC53 = 0;
							LOC53 = !((t == NIM_NIL));
							if (!(LOC53)) goto LA54;
							LOC53 = samebackendtype_228024(t, key);
							LA54: ;
							if (!LOC53) goto LA55;
							result = t;
							goto BeforeRet;
						}
						LA55: ;
						res_454785 += ((NI) 1);
					} LA50: ;
				}
			}
			LOC57 = 0;
			LOC57 = &key->Sup;
			LOC58 = 0;
			LOC58 = &key->Sup.Sup;
			idtableput_199196((&gtypetable_454275[(k)- 0]), LOC57, LOC58);
			result = key;
		}
		LA29: ;
	}
	break;
	case ((NU8) 14):
	{
		Tidobj167015* LOC60;
		TNimObject* LOC61;
		LOC60 = 0;
		LOC60 = &key->Sup;
		LOC61 = 0;
		LOC61 = idtableget_199182(gtypetable_454275[(k)- 0], LOC60);
		result = ((Ttype191849*) (LOC61));
		{
			Tidobj167015* LOC66;
			TNimObject* LOC67;
			if (!(result == NIM_NIL)) goto LA64;
			LOC66 = 0;
			LOC66 = &key->Sup;
			LOC67 = 0;
			LOC67 = &key->Sup.Sup;
			idtableput_199196((&gtypetable_454275[(k)- 0]), LOC66, LOC67);
			result = key;
		}
		LA64: ;
	}
	break;
	case ((NU8) 25):
	{
		{
			if (!!(((*key).callconv == ((NU8) 8)))) goto LA71;
			result = key;
		}
		goto LA69;
		LA71: ;
		{
			result = slowsearch_454601(key, k);
		}
		LA69: ;
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_454870)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP3590));
	{
		NIM_CHAR c_454874;
		NI i_454878;
		NI L_454880;
		c_454874 = 0;
		i_454878 = ((NI) 0);
		L_454880 = (s ? s->Sup.len : 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_454878 < L_454880)) goto LA3;
				c_454874 = s->data[i_454878];
				LOC4 = 0;
				LOC4 = tocchar_163441(c_454874);
				result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
				i_454878 += ((NI) 1);
			} LA3: ;
		}
	}
	result = addChar(result, 34);
	return result;
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

static N_INLINE(Tnode191813*, HEX5BHEX5D_192246)(Tnode191813* n, NI i) {
	Tnode191813* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

N_NIMCALL(Tnode191813*, getpragmastmt_454017)(Tnode191813* n, NU16 w) {
	Tnode191813* result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 115):
	{
		{
			NI i_454041;
			NI HEX3Atmp_454084;
			NI LOC3;
			NI res_454087;
			i_454041 = 0;
			HEX3Atmp_454084 = 0;
			LOC3 = 0;
			LOC3 = len_192097(n);
			HEX3Atmp_454084 = (LOC3 - 1);
			res_454087 = ((NI) 0);
			{
				while (1) {
					Tnode191813* LOC6;
					if (!(res_454087 <= HEX3Atmp_454084)) goto LA5;
					i_454041 = res_454087;
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_192246(n, i_454041);
					result = getpragmastmt_454017(LOC6, w);
					{
						if (!!((result == NIM_NIL))) goto LA9;
						goto LA2;
					}
					LA9: ;
					res_454087 += ((NI) 1);
				} LA5: ;
			}
		} LA2: ;
	}
	break;
	case ((NU8) 90):
	{
		{
			NI i_454073;
			NI HEX3Atmp_454092;
			NI LOC13;
			NI res_454095;
			i_454073 = 0;
			HEX3Atmp_454092 = 0;
			LOC13 = 0;
			LOC13 = len_192097(n);
			HEX3Atmp_454092 = (LOC13 - 1);
			res_454095 = ((NI) 0);
			{
				while (1) {
					if (!(res_454095 <= HEX3Atmp_454092)) goto LA15;
					i_454073 = res_454095;
					{
						Tnode191813* LOC18;
						NU16 LOC19;
						LOC18 = 0;
						LOC18 = HEX5BHEX5D_192246(n, i_454073);
						LOC19 = 0;
						LOC19 = whichpragma_220673(LOC18);
						if (!(LOC19 == w)) goto LA20;
						result = HEX5BHEX5D_192246(n, i_454073);
						goto BeforeRet;
					}
					LA20: ;
					res_454095 += ((NI) 1);
				} LA15: ;
			}
		}
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

N_NIMCALL(NIM_BOOL, stmtscontainpragma_454123)(Tnode191813* n, NU16 w) {
	NIM_BOOL result;
	Tnode191813* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getpragmastmt_454017(n, w);
	result = !((LOC1 == NIM_NIL));
	return result;
}

N_NIMCALL(NI64, hashstring_454146)(NimStringDesc* s) {
	NI64 result;
	result = 0;
	{
		NI64 b;
		if (!(Cpu_159496[(targetcpu_159600)- 1].Field4 == ((NI) 64))) goto LA3;
		b = IL64(0);
		{
			NI i_454163;
			NI HEX3Atmp_454232;
			NI res_454235;
			i_454163 = 0;
			HEX3Atmp_454232 = 0;
			HEX3Atmp_454232 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_454235 = ((NI) 0);
			{
				while (1) {
					if (!(res_454235 <= HEX3Atmp_454232)) goto LA7;
					i_454163 = res_454235;
					b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i_454163]))))));
					b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(10)))));
					b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(6))));
					res_454235 += ((NI) 1);
				} LA7: ;
			}
		}
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(3)))));
		b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(11))));
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(15)))));
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		NI32 a;
		a = ((NI32) 0);
		{
			NI i_454185;
			NI HEX3Atmp_454241;
			NI res_454244;
			i_454185 = 0;
			HEX3Atmp_454241 = 0;
			HEX3Atmp_454241 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_454244 = ((NI) 0);
			{
				while (1) {
					if (!(res_454244 <= HEX3Atmp_454241)) goto LA11;
					i_454185 = res_454244;
					a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_454185]))))));
					a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
					a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
					res_454244 += ((NI) 1);
				} LA11: ;
			}
		}
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 3)))));
		a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 11))));
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 15)))));
		result = ((NI64) (a));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetcaches_454448)(void) {
	inittypetables_454285();
	{
		NU8 i_454460;
		NI res_454464;
		i_454460 = 0;
		res_454464 = ((NI) 0);
		{
			while (1) {
				if (!(res_454464 <= ((NI) 61))) goto LA3;
				i_454460 = ((NU8) (res_454464));
				asgnRefNoCycle((void**) (&gcanonicaltypes_454279[(i_454460)- 0]), NIM_NIL);
				res_454464 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsInit)(void) {
	inittypetables_454285();
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsDatInit)(void) {
}

