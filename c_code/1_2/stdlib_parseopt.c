/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Optparser_fe5bDDfRbVwQIuUOouExnA Optparser_fe5bDDfRbVwQIuUOouExnA;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 Tnimkind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p0);
struct  TNimType  {
NI size;
Tnimkind_jIBKr1ejBgsfM33Kxw4j7A kind;
Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
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
typedef NU8 Cmdlinekind_XkdXq9atxjiuhkFFh0XYrSA;
struct  Optparser_fe5bDDfRbVwQIuUOouExnA  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
Cmdlinekind_XkdXq9atxjiuhkFFh0XYrSA kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU8 TY_nmiMWKVIe46vacnhAFrQvw_Set[32];
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NI, nosparamCount)(void);
N_NIMCALL(NimStringDesc*, quote_yY2O2tPIqumYuvhyVZH8Zg)(NimStringDesc* s0);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s0, TY_nmiMWKVIe46vacnhAFrQvw_Set chars0, NI start0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NI, parseword_JAw9bP8tjPXKSullchoBwUA)(NimStringDesc* s0, NI i0, NimStringDesc** w0, TY_nmiMWKVIe46vacnhAFrQvw_Set delim0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, nosparamStr)(NI i0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NIMCALL(void, handleshortoption_7aIl9cJUX5tPqtQBG33k9aMg)(Optparser_fe5bDDfRbVwQIuUOouExnA* p0);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s0, NIM_BOOL leading0, NIM_BOOL trailing0, TY_nmiMWKVIe46vacnhAFrQvw_Set chars0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_WPWyPKk58Cr5a6XFFviMjg, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA;
TNimType NTI_fe5bDDfRbVwQIuUOouExnA;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ;
TNimType NTI_XkdXq9atxjiuhkFFh0XYrSA;
STRING_LITERAL(T_GYgvYKeHVTEls0AcywABHQ_6, "", 0);
static NIM_CONST TY_nmiMWKVIe46vacnhAFrQvw_Set T_GYgvYKeHVTEls0AcywABHQ_7 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY_nmiMWKVIe46vacnhAFrQvw_Set T_GYgvYKeHVTEls0AcywABHQ_8 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(T_GYgvYKeHVTEls0AcywABHQ_9, "", 0);
static NIM_CONST TY_nmiMWKVIe46vacnhAFrQvw_Set T_GYgvYKeHVTEls0AcywABHQ_10 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY_nmiMWKVIe46vacnhAFrQvw_Set T_GYgvYKeHVTEls0AcywABHQ_11 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;

N_NIMCALL(NI, parseword_JAw9bP8tjPXKSullchoBwUA)(NimStringDesc* s0, NI i0, NimStringDesc** w0, TY_nmiMWKVIe46vacnhAFrQvw_Set delim0) {
	NI result0;
	result0 = (NI)0;
	result0 = i0;
	{
		if (!((NU8)(s0->data[result0]) == (NU8)(34))) goto LA3;
		result0 += ((NI) 1);
		{
			while (1) {
				if (!!((((NU8)(s0->data[result0])) == ((NU8)(0)) || ((NU8)(s0->data[result0])) == ((NU8)(34))))) goto LA6;
				(*w0) = addChar((*w0), s0->data[result0]);
				result0 += ((NI) 1);
			} LA6: ;
		}
		{
			if (!((NU8)(s0->data[result0]) == (NU8)(34))) goto LA9;
			result0 += ((NI) 1);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			while (1) {
				if (!!(((delim0[(NU)(((NU8)(s0->data[result0])))>>3] &(1U<<((NU)(((NU8)(s0->data[result0])))&7U)))!=0))) goto LA13;
				(*w0) = addChar((*w0), s0->data[result0]);
				result0 += ((NI) 1);
			} LA13: ;
		}
	}
	LA1: ;
	return result0;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(NimStringDesc*, quote_yY2O2tPIqumYuvhyVZH8Zg)(NimStringDesc* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	{
		NIM_BOOL LOC3;
		NI LOC4;
		LOC3 = (NIM_BOOL)0;
		LOC4 = (NI)0;
		LOC4 = nsuFindCharSet(s0, T_GYgvYKeHVTEls0AcywABHQ_7, ((NI) 0));
		LOC3 = (((NI) 0) <= LOC4);
		if (!(LOC3)) goto LA5;
		LOC3 = !(((NU8)(s0->data[((NI) 0)]) == (NU8)(34)));
		LA5: ;
		if (!LOC3) goto LA6;
		{
			NI i0;
			if (!((NU8)(s0->data[((NI) 0)]) == (NU8)(45))) goto LA10;
			result0 = rawNewString(((NI) ((s0 ? s0->Sup.len : 0))));
			i0 = parseword_JAw9bP8tjPXKSullchoBwUA(s0, ((NI) 0), (&result0), T_GYgvYKeHVTEls0AcywABHQ_8);
			{
				if (!(((NU8)(s0->data[i0])) == ((NU8)(58)) || ((NU8)(s0->data[i0])) == ((NU8)(61)))) goto LA14;
				result0 = addChar(result0, s0->data[i0]);
				i0 += ((NI) 1);
			}
			LA14: ;
			result0 = addChar(result0, 34);
			{
				while (1) {
					if (!(i0 < (s0 ? s0->Sup.len : 0))) goto LA17;
					result0 = addChar(result0, s0->data[i0]);
					i0 += ((NI) 1);
				} LA17: ;
			}
			result0 = addChar(result0, 34);
		}
		goto LA8;
		LA10: ;
		{
			NimStringDesc* LOC19;
			LOC19 = (NimStringDesc*)0;
			LOC19 = rawNewString(s0->Sup.len + 2);
appendChar(LOC19, 34);
appendString(LOC19, s0);
appendChar(LOC19, 34);
			result0 = LOC19;
		}
		LA8: ;
	}
	goto LA1;
	LA6: ;
	{
		result0 = copyString(s0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, initoptparser_xt25Cv9cQqaNt3Mscl7nHFA)(NimStringDesc* cmdline0, Optparser_fe5bDDfRbVwQIuUOouExnA* Result) {
	(*Result).pos = ((NI) 0);
	(*Result).inshortstate = NIM_FALSE;
	{
		if (!!(((cmdline0) && (cmdline0)->Sup.len == 0))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(cmdline0));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(((NimStringDesc*) &T_GYgvYKeHVTEls0AcywABHQ_6)));
		{
			NI i_9bigZk1c9cxlHhjhl9al4Y7GQ;
			NI HEX3Atmp_GXMe30iBS9buuMusyj1h8ZQ;
			NI res_tbl6twNG2HNhqMi9bpESIyA;
			i_9bigZk1c9cxlHhjhl9al4Y7GQ = (NI)0;
			HEX3Atmp_GXMe30iBS9buuMusyj1h8ZQ = (NI)0;
			HEX3Atmp_GXMe30iBS9buuMusyj1h8ZQ = nosparamCount();
			res_tbl6twNG2HNhqMi9bpESIyA = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC9;
					NimStringDesc* LOC10;
					if (!(res_tbl6twNG2HNhqMi9bpESIyA <= HEX3Atmp_GXMe30iBS9buuMusyj1h8ZQ)) goto LA8;
					i_9bigZk1c9cxlHhjhl9al4Y7GQ = res_tbl6twNG2HNhqMi9bpESIyA;
					LOC9 = (NimStringDesc*)0;
					LOC9 = nosparamStr(i_9bigZk1c9cxlHhjhl9al4Y7GQ);
					LOC10 = (NimStringDesc*)0;
					LOC10 = quote_yY2O2tPIqumYuvhyVZH8Zg(LOC9);
					(*Result).cmd = resizeString((*Result).cmd, LOC10->Sup.len + 0);
appendString((*Result).cmd, LOC10);
					(*Result).cmd = addChar((*Result).cmd, 32);
					res_tbl6twNG2HNhqMi9bpESIyA += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA1: ;
	(*Result).kind = ((Cmdlinekind_XkdXq9atxjiuhkFFh0XYrSA) 0);
	unsureAsgnRef((void**) (&(*Result).key), copyString(((NimStringDesc*) &T_GYgvYKeHVTEls0AcywABHQ_9)));
	unsureAsgnRef((void**) (&(*Result).val), copyString(((NimStringDesc*) &T_GYgvYKeHVTEls0AcywABHQ_9)));
}

N_NIMCALL(void, handleshortoption_7aIl9cJUX5tPqtQBG33k9aMg)(Optparser_fe5bDDfRbVwQIuUOouExnA* p0) {
	NI i0;
	i0 = (*p0).pos;
	(*p0).kind = ((Cmdlinekind_XkdXq9atxjiuhkFFh0XYrSA) 3);
	(*p0).key = addChar((*p0).key, (*p0).cmd->data[i0]);
	i0 += ((NI) 1);
	(*p0).inshortstate = NIM_TRUE;
	{
		while (1) {
			if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(9)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(32)))) goto LA2;
			i0 += ((NI) 1);
			(*p0).inshortstate = NIM_FALSE;
		} LA2: ;
	}
	{
		if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(58)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(61)))) goto LA5;
		i0 += ((NI) 1);
		(*p0).inshortstate = NIM_FALSE;
		{
			while (1) {
				if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(9)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(32)))) goto LA8;
				i0 += ((NI) 1);
			} LA8: ;
		}
		i0 = parseword_JAw9bP8tjPXKSullchoBwUA((*p0).cmd, i0, (&(*p0).val), T_GYgvYKeHVTEls0AcywABHQ_10);
	}
	LA5: ;
	{
		if (!((NU8)((*p0).cmd->data[i0]) == (NU8)(0))) goto LA11;
		(*p0).inshortstate = NIM_FALSE;
	}
	LA11: ;
	(*p0).pos = i0;
}

N_NIMCALL(void, nponext)(Optparser_fe5bDDfRbVwQIuUOouExnA* p0) {
	NI i0;
{	i0 = (*p0).pos;
	{
		while (1) {
			if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(9)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(32)))) goto LA2;
			i0 += ((NI) 1);
		} LA2: ;
	}
	(*p0).pos = i0;
	(*p0).key = setLengthStr((*p0).key, ((NI) 0));
	(*p0).val = setLengthStr((*p0).val, ((NI) 0));
	{
		if (!(*p0).inshortstate) goto LA5;
		handleshortoption_7aIl9cJUX5tPqtQBG33k9aMg(p0);
		goto BeforeRet;
	}
	LA5: ;
	switch (((NU8)((*p0).cmd->data[i0]))) {
	case 0:
	{
		(*p0).kind = ((Cmdlinekind_XkdXq9atxjiuhkFFh0XYrSA) 0);
	}
	break;
	case 45:
	{
		i0 += ((NI) 1);
		{
			if (!((NU8)((*p0).cmd->data[i0]) == (NU8)(45))) goto LA11;
			(*p0).kind = ((Cmdlinekind_XkdXq9atxjiuhkFFh0XYrSA) 2);
			i0 += ((NI) 1);
			i0 = parseword_JAw9bP8tjPXKSullchoBwUA((*p0).cmd, i0, (&(*p0).key), T_GYgvYKeHVTEls0AcywABHQ_8);
			{
				while (1) {
					if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(9)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(32)))) goto LA14;
					i0 += ((NI) 1);
				} LA14: ;
			}
			{
				if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(58)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(61)))) goto LA17;
				i0 += ((NI) 1);
				{
					while (1) {
						if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(9)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(32)))) goto LA20;
						i0 += ((NI) 1);
					} LA20: ;
				}
				(*p0).pos = parseword_JAw9bP8tjPXKSullchoBwUA((*p0).cmd, i0, (&(*p0).val), T_GYgvYKeHVTEls0AcywABHQ_10);
			}
			goto LA15;
			LA17: ;
			{
				(*p0).pos = i0;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*p0).pos = i0;
			handleshortoption_7aIl9cJUX5tPqtQBG33k9aMg(p0);
		}
		LA9: ;
	}
	break;
	default:
	{
		(*p0).kind = ((Cmdlinekind_XkdXq9atxjiuhkFFh0XYrSA) 1);
		(*p0).pos = parseword_JAw9bP8tjPXKSullchoBwUA((*p0).cmd, i0, (&(*p0).key), T_GYgvYKeHVTEls0AcywABHQ_10);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, npocmdLineRest)(Optparser_fe5bDDfRbVwQIuUOouExnA* p0) {
	NimStringDesc* result0;
	NimStringDesc* LOC1;
	result0 = (NimStringDesc*)0;
	LOC1 = (NimStringDesc*)0;
	LOC1 = copyStrLast((*p0).cmd, (*p0).pos, (NI)(((*p0).cmd ? (*p0).cmd->Sup.len : 0) - ((NI) 1)));
	result0 = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE, T_GYgvYKeHVTEls0AcywABHQ_11);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit000)(void) {
static TNimNode* T_GYgvYKeHVTEls0AcywABHQ_2[6];
static TNimNode* T_GYgvYKeHVTEls0AcywABHQ_3[4];
NI T_GYgvYKeHVTEls0AcywABHQ_5;
static char* NIM_CONST T_GYgvYKeHVTEls0AcywABHQ_4[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode T_GYgvYKeHVTEls0AcywABHQ_0[12];
NTI_fe5bDDfRbVwQIuUOouExnA.size = sizeof(Optparser_fe5bDDfRbVwQIuUOouExnA);
NTI_fe5bDDfRbVwQIuUOouExnA.kind = 17;
NTI_fe5bDDfRbVwQIuUOouExnA.base = (&NTI_13RNkKqUOX1TtorOUlKtqA);
T_GYgvYKeHVTEls0AcywABHQ_2[0] = &T_GYgvYKeHVTEls0AcywABHQ_0[1];
T_GYgvYKeHVTEls0AcywABHQ_0[1].kind = 1;
T_GYgvYKeHVTEls0AcywABHQ_0[1].offset = offsetof(Optparser_fe5bDDfRbVwQIuUOouExnA, cmd);
T_GYgvYKeHVTEls0AcywABHQ_0[1].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg);
T_GYgvYKeHVTEls0AcywABHQ_0[1].name = "cmd";
T_GYgvYKeHVTEls0AcywABHQ_2[1] = &T_GYgvYKeHVTEls0AcywABHQ_0[2];
T_GYgvYKeHVTEls0AcywABHQ_0[2].kind = 1;
T_GYgvYKeHVTEls0AcywABHQ_0[2].offset = offsetof(Optparser_fe5bDDfRbVwQIuUOouExnA, pos);
T_GYgvYKeHVTEls0AcywABHQ_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_GYgvYKeHVTEls0AcywABHQ_0[2].name = "pos";
T_GYgvYKeHVTEls0AcywABHQ_2[2] = &T_GYgvYKeHVTEls0AcywABHQ_0[3];
T_GYgvYKeHVTEls0AcywABHQ_0[3].kind = 1;
T_GYgvYKeHVTEls0AcywABHQ_0[3].offset = offsetof(Optparser_fe5bDDfRbVwQIuUOouExnA, inshortstate);
T_GYgvYKeHVTEls0AcywABHQ_0[3].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ);
T_GYgvYKeHVTEls0AcywABHQ_0[3].name = "inShortState";
T_GYgvYKeHVTEls0AcywABHQ_2[3] = &T_GYgvYKeHVTEls0AcywABHQ_0[4];
NTI_XkdXq9atxjiuhkFFh0XYrSA.size = sizeof(Cmdlinekind_XkdXq9atxjiuhkFFh0XYrSA);
NTI_XkdXq9atxjiuhkFFh0XYrSA.kind = 14;
NTI_XkdXq9atxjiuhkFFh0XYrSA.base = 0;
NTI_XkdXq9atxjiuhkFFh0XYrSA.flags = 3;
for (T_GYgvYKeHVTEls0AcywABHQ_5 = 0; T_GYgvYKeHVTEls0AcywABHQ_5 < 4; T_GYgvYKeHVTEls0AcywABHQ_5++) {
T_GYgvYKeHVTEls0AcywABHQ_0[T_GYgvYKeHVTEls0AcywABHQ_5+5].kind = 1;
T_GYgvYKeHVTEls0AcywABHQ_0[T_GYgvYKeHVTEls0AcywABHQ_5+5].offset = T_GYgvYKeHVTEls0AcywABHQ_5;
T_GYgvYKeHVTEls0AcywABHQ_0[T_GYgvYKeHVTEls0AcywABHQ_5+5].name = T_GYgvYKeHVTEls0AcywABHQ_4[T_GYgvYKeHVTEls0AcywABHQ_5];
T_GYgvYKeHVTEls0AcywABHQ_3[T_GYgvYKeHVTEls0AcywABHQ_5] = &T_GYgvYKeHVTEls0AcywABHQ_0[T_GYgvYKeHVTEls0AcywABHQ_5+5];
}
T_GYgvYKeHVTEls0AcywABHQ_0[9].len = 4; T_GYgvYKeHVTEls0AcywABHQ_0[9].kind = 2; T_GYgvYKeHVTEls0AcywABHQ_0[9].sons = &T_GYgvYKeHVTEls0AcywABHQ_3[0];
NTI_XkdXq9atxjiuhkFFh0XYrSA.node = &T_GYgvYKeHVTEls0AcywABHQ_0[9];
T_GYgvYKeHVTEls0AcywABHQ_0[4].kind = 1;
T_GYgvYKeHVTEls0AcywABHQ_0[4].offset = offsetof(Optparser_fe5bDDfRbVwQIuUOouExnA, kind);
T_GYgvYKeHVTEls0AcywABHQ_0[4].typ = (&NTI_XkdXq9atxjiuhkFFh0XYrSA);
T_GYgvYKeHVTEls0AcywABHQ_0[4].name = "kind";
T_GYgvYKeHVTEls0AcywABHQ_2[4] = &T_GYgvYKeHVTEls0AcywABHQ_0[10];
T_GYgvYKeHVTEls0AcywABHQ_0[10].kind = 1;
T_GYgvYKeHVTEls0AcywABHQ_0[10].offset = offsetof(Optparser_fe5bDDfRbVwQIuUOouExnA, key);
T_GYgvYKeHVTEls0AcywABHQ_0[10].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg);
T_GYgvYKeHVTEls0AcywABHQ_0[10].name = "key";
T_GYgvYKeHVTEls0AcywABHQ_2[5] = &T_GYgvYKeHVTEls0AcywABHQ_0[11];
T_GYgvYKeHVTEls0AcywABHQ_0[11].kind = 1;
T_GYgvYKeHVTEls0AcywABHQ_0[11].offset = offsetof(Optparser_fe5bDDfRbVwQIuUOouExnA, val);
T_GYgvYKeHVTEls0AcywABHQ_0[11].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg);
T_GYgvYKeHVTEls0AcywABHQ_0[11].name = "val";
T_GYgvYKeHVTEls0AcywABHQ_0[0].len = 6; T_GYgvYKeHVTEls0AcywABHQ_0[0].kind = 2; T_GYgvYKeHVTEls0AcywABHQ_0[0].sons = &T_GYgvYKeHVTEls0AcywABHQ_2[0];
NTI_fe5bDDfRbVwQIuUOouExnA.node = &T_GYgvYKeHVTEls0AcywABHQ_0[0];
}
