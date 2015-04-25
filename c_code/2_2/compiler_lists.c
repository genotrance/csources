/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TNimObject TNimObject;
typedef struct Tlinkedlist129028 Tlinkedlist129028;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tstrentry129024 Tstrentry129024;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tlinkedlist129028  {
Tlistentry129022* head;
Tlistentry129022* tail;
NI counter;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tstrentry129024  {
  Tlistentry129022 Sup;
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
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP777)(void* p, NI op);
N_NIMCALL(void, remove_129639)(Tlinkedlist129028* list, Tlistentry129022* entry);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46147* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46147* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46147* c);
N_NOINLINE(void, incl_46865)(Tcellset46159* s, Tcell46147* cell);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, decref_51604)(Tcell46147* c);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(void, prepend_129291)(Tlinkedlist129028* list, Tlistentry129022* entry);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(Tstrentry129024*, newstrentry_129250)(NimStringDesc* data);
N_NIMCALL(void, TMP1652)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* patha, NimStringDesc* pathb);
N_NIMCALL(void, append_129053)(Tlinkedlist129028* list, Tlistentry129022* entry);
N_NIMCALL(NIM_BOOL, contains_129219)(Tlinkedlist129028* list, NimStringDesc* data);
N_NIMCALL(void, appendstr_129268)(Tlinkedlist129028* list, NimStringDesc* data);
extern TNimType NTI3411; /* RootObj */
TNimType NTI129022; /* TListEntry */
TNimType NTI129020; /* PListEntry */
TNimType NTI129028; /* TLinkedList */
extern TNimType NTI108; /* int */
extern Tgcheap48016 gch_48044;
TNimType NTI129024; /* TStrEntry */
extern TNimType NTI149; /* string */
TNimType NTI129026; /* PStrEntry */
N_NIMCALL(void, TMP777)(void* p, NI op) {
	Tlistentry129022* a;
	a = (Tlistentry129022*)p;
	nimGCvisit((void*)(*a).prev, op);
	nimGCvisit((void*)(*a).next, op);
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
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
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
	result = ((Tcell46147*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46147))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46147* c) {
	addzct_49617((&gch_48044.zct), c);
}

static N_INLINE(void, decref_51604)(Tcell46147* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
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

N_NIMCALL(void, remove_129639)(Tlinkedlist129028* list, Tlistentry129022* entry) {
	(*list).counter -= ((NI) 1);
	{
		if (!(entry == (*list).tail)) goto LA3;
		unsureAsgnRef((void**) (&(*list).tail), (*entry).prev);
	}
	LA3: ;
	{
		if (!(entry == (*list).head)) goto LA7;
		unsureAsgnRef((void**) (&(*list).head), (*entry).next);
	}
	LA7: ;
	{
		if (!!(((*entry).next == NIM_NIL))) goto LA11;
		asgnRef((void**) (&(*(*entry).next).prev), (*entry).prev);
	}
	LA11: ;
	{
		if (!!(((*entry).prev == NIM_NIL))) goto LA15;
		asgnRef((void**) (&(*(*entry).prev).next), (*entry).next);
	}
	LA15: ;
}

N_NIMCALL(void, prepend_129291)(Tlinkedlist129028* list, Tlistentry129022* entry) {
	(*list).counter += ((NI) 1);
	asgnRef((void**) (&(*entry).prev), NIM_NIL);
	asgnRef((void**) (&(*entry).next), (*list).head);
	{
		if (!!(((*list).head == NIM_NIL))) goto LA3;
		asgnRef((void**) (&(*(*list).head).prev), entry);
	}
	LA3: ;
	unsureAsgnRef((void**) (&(*list).head), entry);
	{
		if (!((*list).tail == NIM_NIL)) goto LA7;
		unsureAsgnRef((void**) (&(*list).tail), entry);
	}
	LA7: ;
}

N_NIMCALL(void, bringtofront_129705)(Tlinkedlist129028* list, Tlistentry129022* entry) {
	remove_129639(list, entry);
	prepend_129291(list, entry);
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

N_NIMCALL(NIM_BOOL, contains_129219)(Tlinkedlist129028* list, NimStringDesc* data) {
	NIM_BOOL result;
	Tlistentry129022* it;
{	result = 0;
	it = (*list).head;
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			{
				if (!eqStrings((*((Tstrentry129024*) (it))).data, data)) goto LA5;
				result = NIM_TRUE;
				goto BeforeRet;
			}
			LA5: ;
			it = (*it).next;
		} LA2: ;
	}
	}BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP1652)(void* p, NI op) {
	Tstrentry129024* a;
	a = (Tstrentry129024*)p;
	nimGCvisit((void*)(*a).Sup.prev, op);
	nimGCvisit((void*)(*a).Sup.next, op);
	nimGCvisit((void*)(*a).data, op);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46147* c;
	c = usrtocell_49646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
}

N_NIMCALL(Tstrentry129024*, newstrentry_129250)(NimStringDesc* data) {
	Tstrentry129024* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Tstrentry129024*) newObj((&NTI129026), sizeof(Tstrentry129024));
	(*result).Sup.Sup.m_type = (&NTI129024);
	LOC1 = 0;
	LOC1 = (*result).data; (*result).data = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

N_NIMCALL(void, prependstr_129419)(Tlinkedlist129028* list, NimStringDesc* data) {
	Tstrentry129024* LOC1;
	Tlistentry129022* LOC2;
	LOC1 = 0;
	LOC1 = newstrentry_129250(data);
	LOC2 = 0;
	LOC2 = &LOC1->Sup;
	prepend_129291(list, LOC2);
}

N_NIMCALL(void, excludepath_129807)(Tlinkedlist129028* list, NimStringDesc* data) {
	Tlistentry129022* it;
	it = (*list).head;
	{
		while (1) {
			Tlistentry129022* nxt;
			if (!!((it == NIM_NIL))) goto LA2;
			nxt = (*it).next;
			{
				NI LOC5;
				LOC5 = 0;
				LOC5 = noscmpPaths((*((Tstrentry129024*) (it))).data, data);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				remove_129639(list, it);
			}
			LA6: ;
			it = nxt;
		} LA2: ;
	}
}

N_NIMCALL(void, append_129053)(Tlinkedlist129028* list, Tlistentry129022* entry) {
	(*list).counter += ((NI) 1);
	asgnRef((void**) (&(*entry).next), NIM_NIL);
	asgnRef((void**) (&(*entry).prev), (*list).tail);
	{
		if (!!(((*list).tail == NIM_NIL))) goto LA3;
		asgnRef((void**) (&(*(*list).tail).next), entry);
	}
	LA3: ;
	unsureAsgnRef((void**) (&(*list).tail), entry);
	{
		if (!((*list).head == NIM_NIL)) goto LA7;
		unsureAsgnRef((void**) (&(*list).head), entry);
	}
	LA7: ;
}

N_NIMCALL(void, appendstr_129268)(Tlinkedlist129028* list, NimStringDesc* data) {
	Tstrentry129024* LOC1;
	Tlistentry129022* LOC2;
	LOC1 = 0;
	LOC1 = newstrentry_129250(data);
	LOC2 = 0;
	LOC2 = &LOC1->Sup;
	append_129053(list, LOC2);
}

N_NIMCALL(void, initlinkedlist_129043)(Tlinkedlist129028* list) {
	(*list).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*list).head), NIM_NIL);
	unsureAsgnRef((void**) (&(*list).tail), NIM_NIL);
}

N_NIMCALL(NIM_BOOL, includestr_129279)(Tlinkedlist129028* list, NimStringDesc* data) {
	NIM_BOOL result;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_129219((&(*list)), data);
		if (!LOC3) goto LA4;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA4: ;
	appendstr_129268(list, data);
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_listsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_listsDatInit)(void) {
static TNimNode* TMP776[2];
static TNimNode* TMP1050[3];
static TNimNode TMP23[8];
NTI129022.size = sizeof(Tlistentry129022);
NTI129022.kind = 17;
NTI129022.base = (&NTI3411);
TMP776[0] = &TMP23[1];
NTI129020.size = sizeof(Tlistentry129022*);
NTI129020.kind = 22;
NTI129020.base = (&NTI129022);
NTI129020.marker = TMP777;
TMP23[1].kind = 1;
TMP23[1].offset = offsetof(Tlistentry129022, prev);
TMP23[1].typ = (&NTI129020);
TMP23[1].name = "prev";
TMP776[1] = &TMP23[2];
TMP23[2].kind = 1;
TMP23[2].offset = offsetof(Tlistentry129022, next);
TMP23[2].typ = (&NTI129020);
TMP23[2].name = "next";
TMP23[0].len = 2; TMP23[0].kind = 2; TMP23[0].sons = &TMP776[0];
NTI129022.node = &TMP23[0];
NTI129028.size = sizeof(Tlinkedlist129028);
NTI129028.kind = 18;
NTI129028.base = 0;
TMP1050[0] = &TMP23[4];
TMP23[4].kind = 1;
TMP23[4].offset = offsetof(Tlinkedlist129028, head);
TMP23[4].typ = (&NTI129020);
TMP23[4].name = "head";
TMP1050[1] = &TMP23[5];
TMP23[5].kind = 1;
TMP23[5].offset = offsetof(Tlinkedlist129028, tail);
TMP23[5].typ = (&NTI129020);
TMP23[5].name = "tail";
TMP1050[2] = &TMP23[6];
TMP23[6].kind = 1;
TMP23[6].offset = offsetof(Tlinkedlist129028, counter);
TMP23[6].typ = (&NTI108);
TMP23[6].name = "counter";
TMP23[3].len = 3; TMP23[3].kind = 2; TMP23[3].sons = &TMP1050[0];
NTI129028.node = &TMP23[3];
NTI129024.size = sizeof(Tstrentry129024);
NTI129024.kind = 17;
NTI129024.base = (&NTI129022);
TMP23[7].kind = 1;
TMP23[7].offset = offsetof(Tstrentry129024, data);
TMP23[7].typ = (&NTI149);
TMP23[7].name = "data";
NTI129024.node = &TMP23[7];
NTI129026.size = sizeof(Tstrentry129024*);
NTI129026.kind = 22;
NTI129026.base = (&NTI129024);
NTI129026.marker = TMP1652;
}

