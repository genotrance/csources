/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct Tident166021 Tident166021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu158479 Tinfocpu158479;
typedef struct Tinfoos158049 Tinfoos158049;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
typedef struct Tcell46147 Tcell46147;
typedef struct Tcellset46159 Tcellset46159;
typedef struct Tgcheap48016 Tgcheap48016;
typedef struct Tcellseq46163 Tcellseq46163;
typedef struct Tpagedesc46155 Tpagedesc46155;
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
struct Tinfocpu158479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu158479 TY158497[14];
struct Tinfoos158049 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef Tinfoos158049 TY158071[24];
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
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
struct Keyvaluepair133008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  Keyvaluepair133008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, isdefined_167031)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj133012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj133012* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(Stringtableobj133012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46147* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46147* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46147* c);
N_NOINLINE(void, incl_46865)(Tcellset46159* s, Tcell46147* cell);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, decref_51604)(Tcell46147* c);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(void, definesymbol_167013)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(Stringtableobj133012* t, NimStringDesc* key, NimStringDesc* val);
STRING_LITERAL(TMP1465, "false", 5);
extern NIM_CONST TY158497 Cpu_158496;
extern NIM_CONST TY158071 Os_158070;
STRING_LITERAL(TMP1466, "x86", 3);
STRING_LITERAL(TMP1467, "itanium", 7);
STRING_LITERAL(TMP1468, "x8664", 5);
STRING_LITERAL(TMP1469, "posix", 5);
STRING_LITERAL(TMP1470, "unix", 4);
STRING_LITERAL(TMP1471, "bsd", 3);
STRING_LITERAL(TMP1472, "emulatedthreadvars", 18);
STRING_LITERAL(TMP1473, "msdos", 5);
STRING_LITERAL(TMP1474, "mswindows", 9);
STRING_LITERAL(TMP1475, "win32", 5);
STRING_LITERAL(TMP1476, "macintosh", 9);
STRING_LITERAL(TMP1477, "sunos", 5);
STRING_LITERAL(TMP1478, "littleendian", 12);
STRING_LITERAL(TMP1479, "bigendian", 9);
STRING_LITERAL(TMP1480, "cpu8", 4);
STRING_LITERAL(TMP1481, "cpu16", 5);
STRING_LITERAL(TMP1482, "cpu32", 5);
STRING_LITERAL(TMP1483, "cpu64", 5);
STRING_LITERAL(TMP1484, "nimrawsetjmp", 12);
STRING_LITERAL(TMP1513, "true", 4);
STRING_LITERAL(TMP1514, "nimrod", 6);
STRING_LITERAL(TMP1515, "nimhygiene", 10);
STRING_LITERAL(TMP1516, "niminheritable", 14);
STRING_LITERAL(TMP1517, "nimmixin", 8);
STRING_LITERAL(TMP1518, "nimeffects", 10);
STRING_LITERAL(TMP1519, "nimbabel", 8);
STRING_LITERAL(TMP1520, "nimcomputedgoto", 15);
STRING_LITERAL(TMP1521, "nimunion", 8);
STRING_LITERAL(TMP1522, "nimnewshared", 12);
STRING_LITERAL(TMP1523, "nimrequiresnimframe", 19);
STRING_LITERAL(TMP1524, "nimparsebiggestfloatmagic", 25);
STRING_LITERAL(TMP1525, "nimalias", 8);
STRING_LITERAL(TMP1526, "nimlocks", 8);
STRING_LITERAL(TMP1527, "nimnode", 7);
Stringtableobj133012* gsymbols_167004;
extern NU8 targetcpu_158600;
extern NU8 targetos_158602;
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

N_NIMCALL(NIM_BOOL, isdefined_167031)(NimStringDesc* symbol) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC6;
		LOC3 = 0;
		LOC3 = nsthasKey(gsymbols_167004, symbol);
		if (!LOC3) goto LA4;
		LOC6 = 0;
		LOC6 = nstGet(gsymbols_167004, symbol);
		result = !(eqStrings(LOC6, ((NimStringDesc*) &TMP1465)));
	}
	goto LA1;
	LA4: ;
	{
		NI LOC8;
		LOC8 = 0;
		LOC8 = nsuCmpIgnoreStyle(symbol, Cpu_158496[(targetcpu_158600)- 1].Field0);
		if (!(LOC8 == ((NI) 0))) goto LA9;
		result = NIM_TRUE;
	}
	goto LA1;
	LA9: ;
	{
		NI LOC12;
		LOC12 = 0;
		LOC12 = nsuCmpIgnoreStyle(symbol, Os_158070[(targetos_158602)- 1].Field0);
		if (!(LOC12 == ((NI) 0))) goto LA13;
		result = NIM_TRUE;
	}
	goto LA1;
	LA13: ;
	{
		NimStringDesc* LOC16;
		LOC16 = 0;
		LOC16 = nsuNormalize(symbol);
		switch (hashString(LOC16) & 31) {
		case 2: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1476))) goto LA25;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1482))) goto LA31;
break;
		case 6: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1471))) goto LA21;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1479))) goto LA28;
break;
		case 7: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1468))) goto LA19;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1478))) goto LA27;
break;
		case 8: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1475))) goto LA24;
break;
		case 11: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1473))) goto LA23;
break;
		case 13: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1477))) goto LA26;
break;
		case 15: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1466))) goto LA17;
break;
		case 17: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1472))) goto LA22;
break;
		case 19: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1470))) goto LA20;
break;
		case 20: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1484))) goto LA33;
break;
		case 22: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1480))) goto LA29;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1481))) goto LA30;
break;
		case 25: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1483))) goto LA32;
break;
		case 27: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1467))) goto LA18;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1474))) goto LA24;
break;
		case 30: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1469))) goto LA20;
break;
		}
		goto LA34;
		LA17: ;
		{
			result = (targetcpu_158600 == ((NU8) 1));
		}
		goto LA35;
		LA18: ;
		{
			result = (targetcpu_158600 == ((NU8) 8));
		}
		goto LA35;
		LA19: ;
		{
			result = (targetcpu_158600 == ((NU8) 9));
		}
		goto LA35;
		LA20: ;
		{
			result = ((3768304 &(1<<((targetos_158602)&31)))!=0);
		}
		goto LA35;
		LA21: ;
		{
			result = ((3584 &(1<<((targetos_158602)&31)))!=0);
		}
		goto LA35;
		LA22: ;
		{
			result = ((Os_158070[(targetos_158602)- 1].Field12 &(1<<((((NU8) 3))&7)))!=0);
		}
		goto LA35;
		LA23: ;
		{
			result = (targetos_158602 == ((NU8) 1));
		}
		goto LA35;
		LA24: ;
		{
			result = (targetos_158602 == ((NU8) 2));
		}
		goto LA35;
		LA25: ;
		{
			result = ((786432 &(1<<((targetos_158602)&31)))!=0);
		}
		goto LA35;
		LA26: ;
		{
			result = (targetos_158602 == ((NU8) 7));
		}
		goto LA35;
		LA27: ;
		{
			result = (Cpu_158496[(targetcpu_158600)- 1].Field2 == ((NU8) 0));
		}
		goto LA35;
		LA28: ;
		{
			result = (Cpu_158496[(targetcpu_158600)- 1].Field2 == ((NU8) 1));
		}
		goto LA35;
		LA29: ;
		{
			result = (Cpu_158496[(targetcpu_158600)- 1].Field4 == ((NI) 8));
		}
		goto LA35;
		LA30: ;
		{
			result = (Cpu_158496[(targetcpu_158600)- 1].Field4 == ((NI) 16));
		}
		goto LA35;
		LA31: ;
		{
			result = (Cpu_158496[(targetcpu_158600)- 1].Field4 == ((NI) 32));
		}
		goto LA35;
		LA32: ;
		{
			result = (Cpu_158496[(targetcpu_158600)- 1].Field4 == ((NI) 64));
		}
		goto LA35;
		LA33: ;
		{
			result = ((528000 &(1<<((targetos_158602)&31)))!=0);
		}
		goto LA35;
		LA34: ;
		{
		}
		LA35: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_167167)(Tident166021* symbol) {
	NIM_BOOL result;
	result = 0;
	result = isdefined_167031((*symbol).s);
	return result;
}

N_NIMCALL(NI, countdefinedsymbols_167211)(void) {
	NI result;
	result = 0;
	result = ((NI) 0);
	{
		NimStringDesc* key_167214;
		NimStringDesc* val_167215;
		key_167214 = 0;
		val_167215 = 0;
		{
			NI h_167229;
			NI HEX3Atmp_167231;
			NI res_167233;
			h_167229 = 0;
			HEX3Atmp_167231 = 0;
			HEX3Atmp_167231 = ((*gsymbols_167004).data ? ((*gsymbols_167004).data->Sup.len-1) : -1);
			res_167233 = ((NI) 0);
			{
				while (1) {
					if (!(res_167233 <= HEX3Atmp_167231)) goto LA4;
					h_167229 = res_167233;
					{
						if (!!((*gsymbols_167004).data->data[h_167229].Field0 == 0)) goto LA7;
						key_167214 = (*gsymbols_167004).data->data[h_167229].Field0;
						val_167215 = (*gsymbols_167004).data->data[h_167229].Field1;
						{
							if (!!(eqStrings(val_167215, ((NimStringDesc*) &TMP1465)))) goto LA11;
							result += ((NI) 1);
						}
						LA11: ;
					}
					LA7: ;
					res_167233 += ((NI) 1);
				} LA4: ;
			}
		}
	}
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

static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr) {
	Tcell46147* result;
	result = 0;
	result = ((Tcell46147*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46147))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46147* c) {
	addzct_49617((&gch_48044.zct), c);
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

N_NIMCALL(void, definesymbol_167013)(NimStringDesc* symbol) {
	nstPut(gsymbols_167004, symbol, ((NimStringDesc*) &TMP1513));
}

N_NIMCALL(void, initdefines_167254)(void) {
	asgnRef((void**) (&gsymbols_167004), nstnewStringTable(((NU8) 2)));
	definesymbol_167013(((NimStringDesc*) &TMP1514));
	definesymbol_167013(((NimStringDesc*) &TMP1515));
	definesymbol_167013(((NimStringDesc*) &TMP1516));
	definesymbol_167013(((NimStringDesc*) &TMP1517));
	definesymbol_167013(((NimStringDesc*) &TMP1518));
	definesymbol_167013(((NimStringDesc*) &TMP1519));
	definesymbol_167013(((NimStringDesc*) &TMP1520));
	definesymbol_167013(((NimStringDesc*) &TMP1521));
	definesymbol_167013(((NimStringDesc*) &TMP1522));
	definesymbol_167013(((NimStringDesc*) &TMP1523));
	definesymbol_167013(((NimStringDesc*) &TMP1524));
	definesymbol_167013(((NimStringDesc*) &TMP1525));
	definesymbol_167013(((NimStringDesc*) &TMP1526));
	definesymbol_167013(((NimStringDesc*) &TMP1527));
}

N_NIMCALL(void, undefsymbol_167022)(NimStringDesc* symbol) {
	nstPut(gsymbols_167004, symbol, ((NimStringDesc*) &TMP1465));
}
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_condsymsDatInit)(void) {
}

