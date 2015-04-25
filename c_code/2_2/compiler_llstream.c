/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>

#include <string.h>

#include <stdlib.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream178204 Tllstream178204;
typedef struct TNimObject TNimObject;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef NU8 TY178407[32];
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
N_NIMCALL(void, TMP1098)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_BOOL, readline_13481)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, readbuffer_13515)(FILE* f, void* buffer, NI len);
N_NIMCALL(NI, llreadfromstdin_178528)(Tllstream178204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readlinefromstdin_178319)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(void, write_13457)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NI, counttriples_178483)(NimStringDesc* s);
static N_INLINE(NIM_BOOL, continueline_178460)(NimStringDesc* line, NIM_BOOL intriplestring);
N_NIMCALL(NIM_BOOL, endswith_178404)(NimStringDesc* x, TY178407 s);
N_NIMCALL(NI, writebuffer_13537)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, llstreamwrite_178665)(Tllstream178204* s, NimStringDesc* data);
STRING_LITERAL(TMP1109, "", 0);
STRING_LITERAL(TMP1110, "\012", 1);
STRING_LITERAL(TMP1111, ">>> ", 4);
STRING_LITERAL(TMP1112, "... ", 4);
static NIM_CONST TY178407 TMP1113 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY178407 TMP1412 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3411; /* RootObj */
TNimType NTI178204; /* TLLStream */
TNimType NTI178202; /* TLLStreamKind */
extern TNimType NTI13004; /* File */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI178206; /* PLLStream */
extern Tgcheap48016 gch_48044;
N_NIMCALL(void, TMP1098)(void* p, NI op) {
	Tllstream178204* a;
	a = (Tllstream178204*)p;
	nimGCvisit((void*)(*a).s, op);
}

N_NIMCALL(Tllstream178204*, llstreamopen_178256)(NimStringDesc* filename, NU8 mode) {
	Tllstream178204* result;
	result = 0;
	result = (Tllstream178204*) newObj((&NTI178206), sizeof(Tllstream178204));
	(*result).Sup.m_type = (&NTI178204);
	(*result).kind = ((NU8) 2);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&(*result).f, filename, mode, ((NI) -1));
		if (!!(LOC3)) goto LA4;
		result = NIM_NIL;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NIM_BOOL, llstreamreadline_178610)(Tllstream178204* s, NimStringDesc** line) {
	NIM_BOOL result;
	result = 0;
	(*line) = setLengthStr((*line), ((NI) 0));
	switch ((*s).kind) {
	case ((NU8) 0):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 1):
	{
		NIM_BOOL LOC12;
		{
			while (1) {
				if (!((*s).rd < ((*s).s ? (*s).s->Sup.len : 0))) goto LA4;
				switch (((NU8)((*s).s->data[(*s).rd]))) {
				case 13:
				{
					(*s).rd += ((NI) 1);
					{
						if (!((NU8)((*s).s->data[(*s).rd]) == (NU8)(10))) goto LA8;
						(*s).rd += ((NI) 1);
					}
					LA8: ;
					goto LA3;
				}
				break;
				case 10:
				{
					(*s).rd += ((NI) 1);
					goto LA3;
				}
				break;
				default:
				{
					(*line) = addChar((*line), (*s).s->data[(*s).rd]);
					(*s).rd += ((NI) 1);
				}
				break;
				}
			} LA4: ;
		} LA3: ;
		LOC12 = 0;
		LOC12 = (((NI) 0) < ((*line) ? (*line)->Sup.len : 0));
		if (LOC12) goto LA13;
		LOC12 = ((*s).rd < ((*s).s ? (*s).s->Sup.len : 0));
		LA13: ;
		result = LOC12;
	}
	break;
	case ((NU8) 2):
	{
		result = readline_13481((*s).f, line);
	}
	break;
	case ((NU8) 3):
	{
		result = readline_13481(stdin, line);
	}
	break;
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

N_NIMCALL(NIM_BOOL, readlinefromstdin_178319)(NimStringDesc* prompt, NimStringDesc** line) {
	NIM_BOOL result;
	result = 0;
	write_13457(stdout, prompt);
	result = readline_13481(stdin, line);
	{
		if (!!(result)) goto LA3;
		write_13457(stdout, ((NimStringDesc*) &TMP1110));
		exit(((NI) 0));
	}
	LA3: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NI, counttriples_178483)(NimStringDesc* s) {
	NI result;
	NI i;
	result = 0;
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < (s ? s->Sup.len : 0))) goto LA2;
			{
				NIM_BOOL LOC5;
				NIM_BOOL LOC6;
				LOC5 = 0;
				LOC6 = 0;
				LOC6 = ((NU8)(s->data[i]) == (NU8)(34));
				if (!(LOC6)) goto LA7;
				LOC6 = ((NU8)(s->data[(NI)(i + ((NI) 1))]) == (NU8)(34));
				LA7: ;
				LOC5 = LOC6;
				if (!(LOC5)) goto LA8;
				LOC5 = ((NU8)(s->data[(NI)(i + ((NI) 2))]) == (NU8)(34));
				LA8: ;
				if (!LOC5) goto LA9;
				result += ((NI) 1);
				i += ((NI) 2);
			}
			LA9: ;
			i += ((NI) 1);
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, endswith_178404)(NimStringDesc* x, TY178407 s) {
	NIM_BOOL result;
	NI i;
	result = 0;
	i = (NI)((x ? x->Sup.len : 0) - ((NI) 1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (((NI) 0) <= i);
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(x->data[i]) == (NU8)(32));
			LA4: ;
			if (!LOC3) goto LA2;
			i -= ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (((NI) 0) <= i);
		if (!(LOC7)) goto LA8;
		LOC7 = ((s[((NU8)(x->data[i]))/8] &(1<<(((NU8)(x->data[i]))%8)))!=0);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_TRUE;
	}
	LA9: ;
	return result;
}

static N_INLINE(NIM_BOOL, continueline_178460)(NimStringDesc* line, NIM_BOOL intriplestring) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = intriplestring;
	if (LOC2) goto LA3;
	LOC2 = ((NU8)(line->data[((NI) 0)]) == (NU8)(32));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = endswith_178404(line, TMP1113);
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI, llreadfromstdin_178528)(Tllstream178204* s, void* buf, NI buflen) {
	NI result;
	NimStringDesc* LOC1;
	NimStringDesc* line;
	NI triples;
	result = 0;
	LOC1 = 0;
	LOC1 = (*s).s; (*s).s = copyStringRC1(((NimStringDesc*) &TMP1109));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*s).rd = ((NI) 0);
	line = rawNewString(((NI) 120));
	triples = ((NI) 0);
	{
		while (1) {
			NimStringDesc* LOC4;
			NIM_BOOL LOC10;
			NI LOC11;
			LOC4 = 0;
			{
				if (!(((*s).s ? (*s).s->Sup.len : 0) == ((NI) 0))) goto LA7;
				LOC4 = copyString(((NimStringDesc*) &TMP1111));
			}
			goto LA5;
			LA7: ;
			{
				LOC4 = copyString(((NimStringDesc*) &TMP1112));
			}
			LA5: ;
			LOC10 = 0;
			LOC10 = readlinefromstdin_178319(LOC4, (&line));
			if (!LOC10) goto LA3;
			(*s).s = resizeString((*s).s, line->Sup.len + 0);
appendString((*s).s, line);
			(*s).s = resizeString((*s).s, 1);
appendString((*s).s, ((NimStringDesc*) &TMP1110));
			LOC11 = 0;
			LOC11 = counttriples_178483(line);
			triples += LOC11;
			{
				NIM_BOOL LOC14;
				LOC14 = 0;
				LOC14 = continueline_178460(line, (((NI) ((NI)(triples & ((NI) 1)))) == ((NI) 1)));
				if (!!(LOC14)) goto LA15;
				goto LA2;
			}
			LA15: ;
		} LA3: ;
	} LA2: ;
	(*s).lineoffset += ((NI) 1);
	result = ((buflen <= (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd)) ? buflen : (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd));
	{
		if (!(((NI) 0) < result)) goto LA19;
		memcpy(buf, ((void*) ((&(*s).s->data[(*s).rd]))), ((NI) (result)));
		(*s).rd += result;
	}
	LA19: ;
	return result;
}

N_NIMCALL(NI, llstreamread_178584)(Tllstream178204* s, void* buf, NI buflen) {
	NI result;
	result = 0;
	switch ((*s).kind) {
	case ((NU8) 0):
	{
		result = ((NI) 0);
	}
	break;
	case ((NU8) 1):
	{
		result = ((buflen <= (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd)) ? buflen : (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd));
		{
			if (!(((NI) 0) < result)) goto LA5;
			memcpy(buf, ((void*) ((&(*s).s->data[(NI)(((NI) 0) + (*s).rd)]))), ((NI) (result)));
			(*s).rd += result;
		}
		LA5: ;
	}
	break;
	case ((NU8) 2):
	{
		result = readbuffer_13515((*s).f, buf, ((NI) (buflen)));
	}
	break;
	case ((NU8) 3):
	{
		result = llreadfromstdin_178528(s, buf, buflen);
	}
	break;
	}
	return result;
}

N_NIMCALL(Tllstream178204*, llstreamopen_178220)(NimStringDesc* data) {
	Tllstream178204* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Tllstream178204*) newObj((&NTI178206), sizeof(Tllstream178204));
	(*result).Sup.m_type = (&NTI178204);
	LOC1 = 0;
	LOC1 = (*result).s; (*result).s = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).kind = ((NU8) 1);
	return result;
}

N_NIMCALL(void, llstreamclose_178310)(Tllstream178204* s) {
	switch ((*s).kind) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 2):
	{
		fclose((*s).f);
	}
	break;
	}
}

N_NIMCALL(void, llstreamwrite_178665)(Tllstream178204* s, NimStringDesc* data) {
	switch ((*s).kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		(*s).s = resizeString((*s).s, data->Sup.len + 0);
appendString((*s).s, data);
		(*s).wr += (data ? data->Sup.len : 0);
	}
	break;
	case ((NU8) 2):
	{
		write_13457((*s).f, data);
	}
	break;
	}
}

N_NIMCALL(NIM_BOOL, endswithopr_178450)(NimStringDesc* x) {
	NIM_BOOL result;
	result = 0;
	result = endswith_178404(x, TMP1412);
	return result;
}

N_NIMCALL(void, llstreamwrite_178696)(Tllstream178204* s, NIM_CHAR data) {
	NIM_CHAR c;
	c = 0;
	switch ((*s).kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		(*s).s = addChar((*s).s, data);
		(*s).wr += ((NI) 1);
	}
	break;
	case ((NU8) 2):
	{
		NI LOC4;
		c = data;
		LOC4 = 0;
		LOC4 = writebuffer_13537((*s).f, ((void*) ((&c))), ((NI) 1));
	}
	break;
	}
}

N_NIMCALL(void, llstreamwriteln_178686)(Tllstream178204* s, NimStringDesc* data) {
	llstreamwrite_178665(s, data);
	llstreamwrite_178665(s, ((NimStringDesc*) &TMP1110));
}

N_NIMCALL(Tllstream178204*, llstreamopen_178238)(FILE* f) {
	Tllstream178204* result;
	result = 0;
	result = (Tllstream178204*) newObj((&NTI178206), sizeof(Tllstream178204));
	(*result).Sup.m_type = (&NTI178204);
	(*result).f = f;
	(*result).kind = ((NU8) 2);
	return result;
}

N_NIMCALL(Tllstream178204*, llstreamopenstdin_178293)(void) {
	Tllstream178204* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Tllstream178204*) newObj((&NTI178206), sizeof(Tllstream178204));
	(*result).Sup.m_type = (&NTI178204);
	(*result).kind = ((NU8) 3);
	LOC1 = 0;
	LOC1 = (*result).s; (*result).s = copyStringRC1(((NimStringDesc*) &TMP1109));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).lineoffset = ((NI) -1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_llstreamDatInit)(void) {
static TNimNode* TMP1094[6];
static TNimNode* TMP1095[4];
NI TMP1097;
static char* NIM_CONST TMP1096[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TMP715[12];
NTI178204.size = sizeof(Tllstream178204);
NTI178204.kind = 17;
NTI178204.base = (&NTI3411);
TMP1094[0] = &TMP715[1];
NTI178202.size = sizeof(NU8);
NTI178202.kind = 14;
NTI178202.base = 0;
NTI178202.flags = 3;
for (TMP1097 = 0; TMP1097 < 4; TMP1097++) {
TMP715[TMP1097+2].kind = 1;
TMP715[TMP1097+2].offset = TMP1097;
TMP715[TMP1097+2].name = TMP1096[TMP1097];
TMP1095[TMP1097] = &TMP715[TMP1097+2];
}
TMP715[6].len = 4; TMP715[6].kind = 2; TMP715[6].sons = &TMP1095[0];
NTI178202.node = &TMP715[6];
TMP715[1].kind = 1;
TMP715[1].offset = offsetof(Tllstream178204, kind);
TMP715[1].typ = (&NTI178202);
TMP715[1].name = "kind";
TMP1094[1] = &TMP715[7];
TMP715[7].kind = 1;
TMP715[7].offset = offsetof(Tllstream178204, f);
TMP715[7].typ = (&NTI13004);
TMP715[7].name = "f";
TMP1094[2] = &TMP715[8];
TMP715[8].kind = 1;
TMP715[8].offset = offsetof(Tllstream178204, s);
TMP715[8].typ = (&NTI149);
TMP715[8].name = "s";
TMP1094[3] = &TMP715[9];
TMP715[9].kind = 1;
TMP715[9].offset = offsetof(Tllstream178204, rd);
TMP715[9].typ = (&NTI108);
TMP715[9].name = "rd";
TMP1094[4] = &TMP715[10];
TMP715[10].kind = 1;
TMP715[10].offset = offsetof(Tllstream178204, wr);
TMP715[10].typ = (&NTI108);
TMP715[10].name = "wr";
TMP1094[5] = &TMP715[11];
TMP715[11].kind = 1;
TMP715[11].offset = offsetof(Tllstream178204, lineoffset);
TMP715[11].typ = (&NTI108);
TMP715[11].name = "lineOffset";
TMP715[0].len = 6; TMP715[0].kind = 2; TMP715[0].sons = &TMP1094[0];
NTI178204.node = &TMP715[0];
NTI178206.size = sizeof(Tllstream178204*);
NTI178206.kind = 22;
NTI178206.base = (&NTI178204);
NTI178206.marker = TMP1098;
}

