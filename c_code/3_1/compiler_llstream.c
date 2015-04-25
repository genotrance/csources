/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
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
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
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
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
typedef NU8 TY178407[32];
typedef NI TY27420[16];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1096)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, open_13403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_BOOL, readline_13681)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, readbuffer_13715)(FILE* f, void* buffer, NI len);
N_NIMCALL(NI, llreadfromstdin_178528)(Tllstream178204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readlinefromstdin_178319)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(void, write_13657)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NI, counttriples_178483)(NimStringDesc* s);
static N_INLINE(NIM_BOOL, continueline_178460)(NimStringDesc* line, NIM_BOOL intriplestring);
N_NIMCALL(NIM_BOOL, endswith_178404)(NimStringDesc* x, TY178407 s);
N_NIMCALL(NI, writebuffer_13737)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, llstreamwrite_178665)(Tllstream178204* s, NimStringDesc* data);
STRING_LITERAL(TMP1107, "", 0);
STRING_LITERAL(TMP1108, "\012", 1);
STRING_LITERAL(TMP1109, ">>> ", 4);
STRING_LITERAL(TMP1110, "... ", 4);
static NIM_CONST TY178407 TMP1111 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY178407 TMP1406 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3411; /* RootObj */
TNimType NTI178204; /* TLLStream */
TNimType NTI178202; /* TLLStreamKind */
extern TNimType NTI13204; /* File */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI178206; /* PLLStream */
extern Tgcheap48216 gch_48244;
N_NIMCALL(void, TMP1096)(void* p, NI op) {
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
		LOC3 = open_13403(&(*result).f, filename, mode, ((NI) -1));
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
		result = readline_13681((*s).f, line);
	}
	break;
	case ((NU8) 3):
	{
		result = readline_13681(stdin, line);
	}
	break;
	}
	return result;
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, readlinefromstdin_178319)(NimStringDesc* prompt, NimStringDesc** line) {
	NIM_BOOL result;
	result = 0;
	write_13657(stdout, prompt);
	result = readline_13681(stdin, line);
	{
		if (!!(result)) goto LA3;
		write_13657(stdout, ((NimStringDesc*) &TMP1108));
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
	LOC1 = endswith_178404(line, TMP1111);
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
	LOC1 = (*s).s; (*s).s = copyStringRC1(((NimStringDesc*) &TMP1107));
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
				LOC4 = copyString(((NimStringDesc*) &TMP1109));
			}
			goto LA5;
			LA7: ;
			{
				LOC4 = copyString(((NimStringDesc*) &TMP1110));
			}
			LA5: ;
			LOC10 = 0;
			LOC10 = readlinefromstdin_178319(LOC4, (&line));
			if (!LOC10) goto LA3;
			(*s).s = resizeString((*s).s, line->Sup.len + 0);
appendString((*s).s, line);
			(*s).s = resizeString((*s).s, 1);
appendString((*s).s, ((NimStringDesc*) &TMP1108));
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
		result = readbuffer_13715((*s).f, buf, ((NI) (buflen)));
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
		write_13657((*s).f, data);
	}
	break;
	}
}

N_NIMCALL(NIM_BOOL, endswithopr_178450)(NimStringDesc* x) {
	NIM_BOOL result;
	result = 0;
	result = endswith_178404(x, TMP1406);
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
		LOC4 = writebuffer_13737((*s).f, ((void*) ((&c))), ((NI) 1));
	}
	break;
	}
}

N_NIMCALL(void, llstreamwriteln_178686)(Tllstream178204* s, NimStringDesc* data) {
	llstreamwrite_178665(s, data);
	llstreamwrite_178665(s, ((NimStringDesc*) &TMP1108));
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
	LOC1 = (*result).s; (*result).s = copyStringRC1(((NimStringDesc*) &TMP1107));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).lineoffset = ((NI) -1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_llstreamDatInit)(void) {
static TNimNode* TMP1092[6];
static TNimNode* TMP1093[4];
NI TMP1095;
static char* NIM_CONST TMP1094[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TMP713[12];
NTI178204.size = sizeof(Tllstream178204);
NTI178204.kind = 17;
NTI178204.base = (&NTI3411);
TMP1092[0] = &TMP713[1];
NTI178202.size = sizeof(NU8);
NTI178202.kind = 14;
NTI178202.base = 0;
NTI178202.flags = 3;
for (TMP1095 = 0; TMP1095 < 4; TMP1095++) {
TMP713[TMP1095+2].kind = 1;
TMP713[TMP1095+2].offset = TMP1095;
TMP713[TMP1095+2].name = TMP1094[TMP1095];
TMP1093[TMP1095] = &TMP713[TMP1095+2];
}
TMP713[6].len = 4; TMP713[6].kind = 2; TMP713[6].sons = &TMP1093[0];
NTI178202.node = &TMP713[6];
TMP713[1].kind = 1;
TMP713[1].offset = offsetof(Tllstream178204, kind);
TMP713[1].typ = (&NTI178202);
TMP713[1].name = "kind";
TMP1092[1] = &TMP713[7];
TMP713[7].kind = 1;
TMP713[7].offset = offsetof(Tllstream178204, f);
TMP713[7].typ = (&NTI13204);
TMP713[7].name = "f";
TMP1092[2] = &TMP713[8];
TMP713[8].kind = 1;
TMP713[8].offset = offsetof(Tllstream178204, s);
TMP713[8].typ = (&NTI149);
TMP713[8].name = "s";
TMP1092[3] = &TMP713[9];
TMP713[9].kind = 1;
TMP713[9].offset = offsetof(Tllstream178204, rd);
TMP713[9].typ = (&NTI108);
TMP713[9].name = "rd";
TMP1092[4] = &TMP713[10];
TMP713[10].kind = 1;
TMP713[10].offset = offsetof(Tllstream178204, wr);
TMP713[10].typ = (&NTI108);
TMP713[10].name = "wr";
TMP1092[5] = &TMP713[11];
TMP713[11].kind = 1;
TMP713[11].offset = offsetof(Tllstream178204, lineoffset);
TMP713[11].typ = (&NTI108);
TMP713[11].name = "lineOffset";
TMP713[0].len = 6; TMP713[0].kind = 2; TMP713[0].sons = &TMP1092[0];
NTI178204.node = &TMP713[0];
NTI178206.size = sizeof(Tllstream178204*);
NTI178206.kind = 22;
NTI178206.base = (&NTI178204);
NTI178206.marker = TMP1096;
}

