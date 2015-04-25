/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TGenericSeq TGenericSeq;
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
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
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
typedef NI TY27220[16];
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27220 bits;
};
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1048)(void* p, NI op);
N_NIMCALL(void, TMP1049)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Ttrunk188052*, intsetget_188218)(Intset188056 t, NI key);
static N_INLINE(NI, nexttry_188207)(NI h, NI maxhash);
N_NIMCALL(void, incl_188856)(Intset188056* s, NI key);
N_NIMCALL(Ttrunk188052*, intsetput_188689)(Intset188056* t, NI key);
static N_INLINE(NIM_BOOL, mustrehash_188073)(NI length, NI counter);
N_NIMCALL(void, intsetenlarge_188614)(Intset188056* t);
N_NIMCALL(void, intsetrawinsert_188249)(Intset188056 t, Ttrunkseq188054** data, Ttrunk188052* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46147* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46147* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46147* c);
N_NOINLINE(void, incl_46865)(Tcellset46159* s, Tcell46147* cell);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, decref_51604)(Tcell46147* c);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
TNimType NTI188056; /* IntSet */
extern TNimType NTI108; /* int */
TNimType NTI188052; /* TTrunk */
extern TNimType NTI27220; /* array[0..15, int] */
TNimType NTI188050; /* PTrunk */
TNimType NTI188054; /* TTrunkSeq */
extern Tgcheap48016 gch_48044;
N_NIMCALL(void, TMP1048)(void* p, NI op) {
	Ttrunk188052* a;
	NI LOC1;
	a = (Ttrunk188052*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 16; LOC1++) {
	}
}
N_NIMCALL(void, TMP1049)(void* p, NI op) {
	Ttrunkseq188054* a;
	NI LOC1;
	a = (Ttrunkseq188054*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_188927)(Intset188056* Result) {
	unsureAsgnRef((void**) (&(*Result).data), (Ttrunkseq188054*) newSeq((&NTI188054), ((NI) 8)));
	(*Result).max = ((NI) 7);
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
}

static N_INLINE(NI, nexttry_188207)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(Ttrunk188052*, intsetget_188218)(Intset188056 t, NI key) {
	Ttrunk188052* result;
	NI h;
{	result = 0;
	h = (NI)(key & t.max);
	{
		while (1) {
			if (!!((t.data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*t.data->data[h]).key == key)) goto LA5;
				result = t.data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_188207(h, t.max);
		} LA2: ;
	}
	result = NIM_NIL;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_188073)(NI length, NI counter) {
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

N_NIMCALL(void, intsetrawinsert_188249)(Intset188056 t, Ttrunkseq188054** data, Ttrunk188052* desc) {
	NI h;
	h = (NI)((*desc).key & t.max);
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			h = nexttry_188207(h, t.max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h]), desc);
}

N_NIMCALL(void, intsetenlarge_188614)(Intset188056* t) {
	Ttrunkseq188054* n;
	NI oldmax;
	Ttrunkseq188054* LOC8;
	n = 0;
	oldmax = (*t).max;
	(*t).max = (NI)((NI)((NI)((*t).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n = (Ttrunkseq188054*) newSeq((&NTI188054), ((NI) ((NI)((*t).max + ((NI) 1)))));
	{
		NI i_188642;
		NI res_188670;
		i_188642 = 0;
		res_188670 = ((NI) 0);
		{
			while (1) {
				if (!(res_188670 <= oldmax)) goto LA3;
				i_188642 = res_188670;
				{
					if (!!(((*t).data->data[i_188642] == NIM_NIL))) goto LA6;
					intsetrawinsert_188249((*t), (&n), (*t).data->data[i_188642]);
				}
				LA6: ;
				res_188670 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC8;
}

N_NIMCALL(Ttrunk188052*, intsetput_188689)(Intset188056* t, NI key) {
	Ttrunk188052* result;
	NI h;
{	result = 0;
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).data->data[h]).key == key)) goto LA5;
				result = (*t).data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_188207(h, (*t).max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = mustrehash_188073((NI)((*t).max + ((NI) 1)), (*t).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_188614(t);
	}
	LA10: ;
	(*t).counter += ((NI) 1);
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA13;
			h = nexttry_188207(h, (*t).max);
		} LA13: ;
	}
	result = (Ttrunk188052*) newObj((&NTI188050), sizeof(Ttrunk188052));
	asgnRef((void**) (&(*result).next), (*t).head);
	(*result).key = key;
	unsureAsgnRef((void**) (&(*t).head), result);
	asgnRef((void**) (&(*t).data->data[h]), result);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, incl_188856)(Intset188056* s, NI key) {
	Ttrunk188052* t;
	NI u;
	t = intsetput_188689(s, (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] | (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))));
}

N_NIMCALL(NIM_BOOL, containsorincl_188898)(Intset188056* s, NI key) {
	NIM_BOOL result;
	Ttrunk188052* t;
	result = 0;
	t = intsetget_188218((*s), (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31))))))) == ((NI) 0)));
		{
			if (!!(result)) goto LA7;
			(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] | (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		incl_188856(s, key);
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_188829)(Intset188056 s, NI key) {
	NIM_BOOL result;
	Ttrunk188052* t;
	result = 0;
	t = intsetget_188218(s, (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31))))))) == ((NI) 0)));
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, excl_188871)(Intset188056* s, NI key) {
	Ttrunk188052* t;
	t = intsetget_188218((*s), (NI)((NU32)(key) >> (NU32)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		(*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t).bits[((NI)((NU32)(((NI) (u))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32) ~((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u)) & ((NI) 31)))))))));
	}
	LA3: ;
}

N_NIMCALL(void, assign_188946)(Intset188056* dest, Intset188056 src) {
	Ttrunk188052* it;
	(*dest).counter = src.counter;
	(*dest).max = src.max;
	unsureAsgnRef((void**) (&(*dest).data), (Ttrunkseq188054*) newSeq((&NTI188054), ((NI) ((src.data ? src.data->Sup.len : 0)))));
	it = src.head;
	{
		while (1) {
			NI h;
			Ttrunk188052* n;
			if (!!((it == NIM_NIL))) goto LA2;
			h = (NI)((*it).key & (*dest).max);
			{
				while (1) {
					if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA4;
					h = nexttry_188207(h, (*dest).max);
				} LA4: ;
			}
			n = 0;
			n = (Ttrunk188052*) newObj((&NTI188050), sizeof(Ttrunk188052));
			asgnRef((void**) (&(*n).next), (*dest).head);
			(*n).key = (*it).key;
			memcpy((void*)(*n).bits, (NIM_CONST void*)(*it).bits, sizeof((*n).bits));
			unsureAsgnRef((void**) (&(*dest).head), n);
			asgnRef((void**) (&(*dest).data->data[h]), n);
			it = (*it).next;
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit)(void) {
static TNimNode* TMP1046[4];
static TNimNode* TMP1047[3];
static TNimNode TMP725[9];
NTI188056.size = sizeof(Intset188056);
NTI188056.kind = 18;
NTI188056.base = 0;
NTI188056.flags = 2;
TMP1046[0] = &TMP725[1];
TMP725[1].kind = 1;
TMP725[1].offset = offsetof(Intset188056, counter);
TMP725[1].typ = (&NTI108);
TMP725[1].name = "counter";
TMP1046[1] = &TMP725[2];
TMP725[2].kind = 1;
TMP725[2].offset = offsetof(Intset188056, max);
TMP725[2].typ = (&NTI108);
TMP725[2].name = "max";
TMP1046[2] = &TMP725[3];
NTI188052.size = sizeof(Ttrunk188052);
NTI188052.kind = 18;
NTI188052.base = 0;
TMP1047[0] = &TMP725[5];
TMP725[5].kind = 1;
TMP725[5].offset = offsetof(Ttrunk188052, next);
TMP725[5].typ = (&NTI188050);
TMP725[5].name = "next";
TMP1047[1] = &TMP725[6];
TMP725[6].kind = 1;
TMP725[6].offset = offsetof(Ttrunk188052, key);
TMP725[6].typ = (&NTI108);
TMP725[6].name = "key";
TMP1047[2] = &TMP725[7];
TMP725[7].kind = 1;
TMP725[7].offset = offsetof(Ttrunk188052, bits);
TMP725[7].typ = (&NTI27220);
TMP725[7].name = "bits";
TMP725[4].len = 3; TMP725[4].kind = 2; TMP725[4].sons = &TMP1047[0];
NTI188052.node = &TMP725[4];
NTI188050.size = sizeof(Ttrunk188052*);
NTI188050.kind = 22;
NTI188050.base = (&NTI188052);
NTI188050.marker = TMP1048;
TMP725[3].kind = 1;
TMP725[3].offset = offsetof(Intset188056, head);
TMP725[3].typ = (&NTI188050);
TMP725[3].name = "head";
TMP1046[3] = &TMP725[8];
NTI188054.size = sizeof(Ttrunkseq188054*);
NTI188054.kind = 24;
NTI188054.base = (&NTI188050);
NTI188054.flags = 2;
NTI188054.marker = TMP1049;
TMP725[8].kind = 1;
TMP725[8].offset = offsetof(Intset188056, data);
TMP725[8].typ = (&NTI188054);
TMP725[8].name = "data";
TMP725[0].len = 4; TMP725[0].kind = 2; TMP725[0].sons = &TMP1046[0];
NTI188056.node = &TMP725[0];
}

