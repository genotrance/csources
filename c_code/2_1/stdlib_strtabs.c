/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct Valueerror3449 Valueerror3449;
typedef struct Exception Exception;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
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
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Valueerror3449  {
  Exception Sup;
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
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP44)(void* p, NI op);
N_NIMCALL(void, TMP48)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NI, rawget_133418)(Stringtableobj133012* t, NimStringDesc* key);
N_NIMCALL(NI, myhash_133177)(Stringtableobj133012* t, NimStringDesc* key);
N_NIMCALL(NI, hash_130839)(NimStringDesc* x);
N_NIMCALL(NI, hashignorecase_130978)(NimStringDesc* x);
N_NIMCALL(NI, hashignorestyle_130887)(NimStringDesc* x);
N_NIMCALL(NIM_BOOL, mycmp_133188)(Stringtableobj133012* t, NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, cmp_4717)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_133407)(NI h, NI maxhash);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, mustrehash_133200)(NI length, NI counter);
N_NIMCALL(void, enlarge_133510)(Stringtableobj133012* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, rawinsert_133488)(Stringtableobj133012* t, Keyvaluepairseq133010** data, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, getvalue_133630)(Stringtableobj133012* t, NU8 flags, NimStringDesc* key);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj133012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj133012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, getenv_121644)(NimStringDesc* key);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, raiseformatexception_133610)(NimStringDesc* s);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
STRING_LITERAL(TMP1434, "", 0);
STRING_LITERAL(TMP1883, "format string: key not found: ", 30);
extern TNimType NTI3411; /* RootObj */
TNimType NTI133012; /* StringTableObj */
extern TNimType NTI108; /* int */
TNimType NTI133008; /* KeyValuePair */
extern TNimType NTI149; /* string */
TNimType NTI133010; /* KeyValuePairSeq */
TNimType NTI133006; /* StringTableMode */
TNimType NTI133014; /* StringTableRef */
extern Tgcheap48016 gch_48044;
extern TNimType NTI22201; /* ref ValueError */
extern TNimType NTI3449; /* ValueError */
N_NIMCALL(void, TMP44)(void* p, NI op) {
	Keyvaluepairseq133010* a;
	NI LOC1;
	a = (Keyvaluepairseq133010*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP48)(void* p, NI op) {
	Stringtableobj133012* a;
	a = (Stringtableobj133012*)p;
	nimGCvisit((void*)(*a).data, op);
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

N_NIMCALL(Stringtableobj133012*, nstnewStringTable)(NU8 mode) {
	Stringtableobj133012* result;
	result = 0;
	result = (Stringtableobj133012*) newObj((&NTI133014), sizeof(Stringtableobj133012));
	(*result).Sup.m_type = (&NTI133012);
	(*result).mode = mode;
	(*result).counter = ((NI) 0);
	if ((*result).data) nimGCunrefNoCycle((*result).data);
	(*result).data = (Keyvaluepairseq133010*) newSeqRC1((&NTI133010), ((NI) 64));
	return result;
}

N_NIMCALL(NI, myhash_133177)(Stringtableobj133012* t, NimStringDesc* key) {
	NI result;
	result = 0;
	switch ((*t).mode) {
	case ((NU8) 0):
	{
		result = hash_130839(key);
	}
	break;
	case ((NU8) 1):
	{
		result = hashignorecase_130978(key);
	}
	break;
	case ((NU8) 2):
	{
		result = hashignorestyle_130887(key);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, mycmp_133188)(Stringtableobj133012* t, NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = 0;
	switch ((*t).mode) {
	case ((NU8) 0):
	{
		NI LOC2;
		LOC2 = 0;
		LOC2 = cmp_4717(a, b);
		result = (LOC2 == ((NI) 0));
	}
	break;
	case ((NU8) 1):
	{
		NI LOC4;
		LOC4 = 0;
		LOC4 = nsuCmpIgnoreCase(a, b);
		result = (LOC4 == ((NI) 0));
	}
	break;
	case ((NU8) 2):
	{
		NI LOC6;
		LOC6 = 0;
		LOC6 = nsuCmpIgnoreStyle(a, b);
		result = (LOC6 == ((NI) 0));
	}
	break;
	}
	return result;
}

static N_INLINE(NI, nexttry_133407)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(NI, rawget_133418)(Stringtableobj133012* t, NimStringDesc* key) {
	NI result;
	NI h;
	NI LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = myhash_133177(t, key);
	h = (NI)(LOC1 & ((*t).data ? ((*t).data->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*t).data->data[h].Field0 == 0)) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = mycmp_133188(t, (*t).data->data[h].Field0, key);
				if (!LOC6) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_133407(h, ((*t).data ? ((*t).data->Sup.len-1) : -1));
		} LA3: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj133012* t, NimStringDesc* key) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rawget_133418(t, key);
	result = (((NI) 0) <= LOC1);
	return result;
}

N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj133012* t, NimStringDesc* key) {
	NimStringDesc* result;
	NI index;
	result = 0;
	index = rawget_133418(t, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = copyString((*t).data->data[index].Field1);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP1434));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, mustrehash_133200)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI)(length - counter) < ((NI) 4));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, rawinsert_133488)(Stringtableobj133012* t, Keyvaluepairseq133010** data, NimStringDesc* key, NimStringDesc* val) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	LOC1 = 0;
	LOC1 = myhash_133177(t, key);
	h = (NI)(LOC1 & ((*data) ? ((*data)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*data)->data[h].Field0 == 0)) goto LA3;
			h = nexttry_133407(h, ((*data) ? ((*data)->Sup.len-1) : -1));
		} LA3: ;
	}
	LOC4 = 0;
	LOC4 = (*data)->data[h].Field0; (*data)->data[h].Field0 = copyStringRC1(key);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	LOC5 = 0;
	LOC5 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(val);
	if (LOC5) nimGCunrefNoCycle(LOC5);
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

N_NIMCALL(void, enlarge_133510)(Stringtableobj133012* t) {
	Keyvaluepairseq133010* n;
	Keyvaluepairseq133010* LOC8;
	n = 0;
	n = (Keyvaluepairseq133010*) newSeq((&NTI133010), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	{
		NI i_133544;
		NI HEX3Atmp_133558;
		NI res_133561;
		i_133544 = 0;
		HEX3Atmp_133558 = 0;
		HEX3Atmp_133558 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
		res_133561 = ((NI) 0);
		{
			while (1) {
				if (!(res_133561 <= HEX3Atmp_133558)) goto LA3;
				i_133544 = res_133561;
				{
					if (!!((*t).data->data[i_133544].Field0 == 0)) goto LA6;
					rawinsert_133488(t, (&n), (*t).data->data[i_133544].Field0, (*t).data->data[i_133544].Field1);
				}
				LA6: ;
				res_133561 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).data;
	asgnRefNoCycle((void**) (&(*t).data), n);
	n = LOC8;
}

N_NIMCALL(void, nstPut)(Stringtableobj133012* t, NimStringDesc* key, NimStringDesc* val) {
	NI index;
	index = rawget_133418(t, key);
	{
		NimStringDesc* LOC5;
		if (!(((NI) 0) <= index)) goto LA3;
		LOC5 = 0;
		LOC5 = (*t).data->data[index].Field1; (*t).data->data[index].Field1 = copyStringRC1(val);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC9;
			LOC9 = 0;
			LOC9 = mustrehash_133200(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC9) goto LA10;
			enlarge_133510(t);
		}
		LA10: ;
		rawinsert_133488(t, (&(*t).data), key, val);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, raiseformatexception_133610)(NimStringDesc* s) {
	Valueerror3449* e;
	NimStringDesc* LOC1;
	e = 0;
	e = (Valueerror3449*) newObj((&NTI22201), sizeof(Valueerror3449));
	(*e).Sup.Sup.m_type = (&NTI3449);
	LOC1 = 0;
	LOC1 = rawNewString(s->Sup.len + 30);
appendString(LOC1, ((NimStringDesc*) &TMP1883));
appendString(LOC1, s);
	asgnRefNoCycle((void**) (&(*e).Sup.message), LOC1);
	raiseException((Exception*)e, "ValueError");
}

N_NIMCALL(NimStringDesc*, getvalue_133630)(Stringtableobj133012* t, NU8 flags, NimStringDesc* key) {
	NimStringDesc* result;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsthasKey(t, key);
		if (!LOC3) goto LA4;
		result = nstGet(t, key);
		goto BeforeRet;
	}
	LA4: ;
	{
		if (!((flags &(1<<((((NU8) 0))&7)))!=0)) goto LA8;
		result = getenv_121644(key);
	}
	goto LA6;
	LA8: ;
	{
		result = copyString(((NimStringDesc*) &TMP1434));
	}
	LA6: ;
	{
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA13;
		{
			NimStringDesc* LOC19;
			if (!((flags &(1<<((((NU8) 2))&7)))!=0)) goto LA17;
			LOC19 = 0;
			LOC19 = rawNewString(key->Sup.len + 1);
appendChar(LOC19, 36);
appendString(LOC19, key);
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			if (!!(((flags &(1<<((((NU8) 1))&7)))!=0))) goto LA21;
			raiseformatexception_133610(key);
		}
		goto LA15;
		LA21: ;
		LA15: ;
	}
	LA13: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj133012* t, NU8 flags) {
	NimStringDesc* result;
	NI i;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP1434));
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < (f ? f->Sup.len : 0))) goto LA2;
			{
				if (!((NU8)(f->data[i]) == (NU8)(36))) goto LA5;
				switch (((NU8)(f->data[(NI)(i + ((NI) 1))]))) {
				case 36:
				{
					result = addChar(result, 36);
					i += ((NI) 2);
				}
				break;
				case 123:
				{
					NI j;
					NimStringDesc* LOC13;
					NimStringDesc* LOC14;
					j = (NI)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL LOC11;
							LOC11 = 0;
							LOC11 = (j < (f ? f->Sup.len : 0));
							if (!(LOC11)) goto LA12;
							LOC11 = !(((NU8)(f->data[j]) == (NU8)(125)));
							LA12: ;
							if (!LOC11) goto LA10;
							j += ((NI) 1);
						} LA10: ;
					}
					LOC13 = 0;
					LOC13 = copyStrLast(f, (NI)(i + ((NI) 2)), (NI)(j - ((NI) 1)));
					LOC14 = 0;
					LOC14 = getvalue_133630(t, flags, LOC13);
					result = resizeString(result, LOC14->Sup.len + 0);
appendString(result, LOC14);
					i = (NI)(j + ((NI) 1));
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NI j;
					NimStringDesc* LOC20;
					NimStringDesc* LOC21;
					j = (NI)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL LOC18;
							LOC18 = 0;
							LOC18 = (j < (f ? f->Sup.len : 0));
							if (!(LOC18)) goto LA19;
							LOC18 = (((NU8)(f->data[j])) >= ((NU8)(97)) && ((NU8)(f->data[j])) <= ((NU8)(122)) || ((NU8)(f->data[j])) >= ((NU8)(65)) && ((NU8)(f->data[j])) <= ((NU8)(90)) || ((NU8)(f->data[j])) >= ((NU8)(48)) && ((NU8)(f->data[j])) <= ((NU8)(57)) || ((NU8)(f->data[j])) == ((NU8)(95)) || ((NU8)(f->data[j])) >= ((NU8)(128)) && ((NU8)(f->data[j])) <= ((NU8)(255)));
							LA19: ;
							if (!LOC18) goto LA17;
							j += ((NI) 1);
						} LA17: ;
					}
					LOC20 = 0;
					LOC20 = copyStrLast(f, (NI)(i + ((NI) 1)), (NI)(j - ((NI) 1)));
					LOC21 = 0;
					LOC21 = getvalue_133630(t, flags, LOC20);
					result = resizeString(result, LOC21->Sup.len + 0);
appendString(result, LOC21);
					i = j;
				}
				break;
				default:
				{
					result = addChar(result, f->data[i]);
					i += ((NI) 1);
				}
				break;
				}
			}
			goto LA3;
			LA5: ;
			{
				result = addChar(result, f->data[i]);
				i += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NI, nstlen)(Stringtableobj133012* t) {
	NI result;
	result = 0;
	result = (*t).counter;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void) {
static TNimNode* TMP42[3];
static TNimNode* TMP43[2];
static TNimNode* TMP45[3];
NI TMP47;
static char* NIM_CONST TMP46[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TMP25[11];
NTI133012.size = sizeof(Stringtableobj133012);
NTI133012.kind = 17;
NTI133012.base = (&NTI3411);
TMP42[0] = &TMP25[1];
TMP25[1].kind = 1;
TMP25[1].offset = offsetof(Stringtableobj133012, counter);
TMP25[1].typ = (&NTI108);
TMP25[1].name = "counter";
TMP42[1] = &TMP25[2];
NTI133008.size = sizeof(Keyvaluepair133008);
NTI133008.kind = 18;
NTI133008.base = 0;
NTI133008.flags = 2;
TMP43[0] = &TMP25[4];
TMP25[4].kind = 1;
TMP25[4].offset = offsetof(Keyvaluepair133008, Field0);
TMP25[4].typ = (&NTI149);
TMP25[4].name = "Field0";
TMP43[1] = &TMP25[5];
TMP25[5].kind = 1;
TMP25[5].offset = offsetof(Keyvaluepair133008, Field1);
TMP25[5].typ = (&NTI149);
TMP25[5].name = "Field1";
TMP25[3].len = 2; TMP25[3].kind = 2; TMP25[3].sons = &TMP43[0];
NTI133008.node = &TMP25[3];
NTI133010.size = sizeof(Keyvaluepairseq133010*);
NTI133010.kind = 24;
NTI133010.base = (&NTI133008);
NTI133010.flags = 2;
NTI133010.marker = TMP44;
TMP25[2].kind = 1;
TMP25[2].offset = offsetof(Stringtableobj133012, data);
TMP25[2].typ = (&NTI133010);
TMP25[2].name = "data";
TMP42[2] = &TMP25[6];
NTI133006.size = sizeof(NU8);
NTI133006.kind = 14;
NTI133006.base = 0;
NTI133006.flags = 3;
for (TMP47 = 0; TMP47 < 3; TMP47++) {
TMP25[TMP47+7].kind = 1;
TMP25[TMP47+7].offset = TMP47;
TMP25[TMP47+7].name = TMP46[TMP47];
TMP45[TMP47] = &TMP25[TMP47+7];
}
TMP25[10].len = 3; TMP25[10].kind = 2; TMP25[10].sons = &TMP45[0];
NTI133006.node = &TMP25[10];
TMP25[6].kind = 1;
TMP25[6].offset = offsetof(Stringtableobj133012, mode);
TMP25[6].typ = (&NTI133006);
TMP25[6].name = "mode";
TMP25[0].len = 3; TMP25[0].kind = 2; TMP25[0].sons = &TMP42[0];
NTI133012.node = &TMP25[0];
NTI133014.size = sizeof(Stringtableobj133012*);
NTI133014.kind = 22;
NTI133014.base = (&NTI133012);
NTI133014.marker = TMP48;
}

