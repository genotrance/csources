/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA;
typedef struct RootObj RootObj;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NU8 tyEnum_TCmdLinePass_IiBn9cB6WYIMDHOT44O82wA;
struct RootObj {
TNimType* m_type;
};
typedef NU8 tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA;
struct tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA {
  RootObj Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inShortState;
tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU32 tySet_tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw;
typedef NU16 tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw;
typedef NimStringDesc* tyArray_8ZvwQIddfpj2THRVPsFzIQ[1];
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NI align;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9agrCtWKhCnWWMJpKKugJag[16];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9agrCtWKhCnWWMJpKKugJag bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9agrCtWKhCnWWMJpKKugJag bits;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_AxyNANBXigTKyIcRAbufXw_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_NIMCALL(void, TM_AxyNANBXigTKyIcRAbufXw_4)(void);
N_LIB_PRIVATE N_NIMCALL(void, initOptParser_xt25Cv9cQqaNt3Mscl7nHFA)(NimStringDesc* cmdline, tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA* Result);
N_LIB_PRIVATE N_NIMCALL(void, nponext)(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA* p);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a, void* b, NI size);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, processArgument_lWiIBVoVYe1MHypeoTZrBw)(tyEnum_TCmdLinePass_IiBn9cB6WYIMDHOT44O82wA pass, tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA* p, NI* argsCount);
N_LIB_PRIVATE N_NIMCALL(void, processSwitch_TdGOW9ciAVvdBm6nv23Sz9aA)(tyEnum_TCmdLinePass_IiBn9cB6WYIMDHOT44O82wA pass, tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA* p);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, rawMessage_wSQLHRsYvHJ4DSWgdFrFaA)(tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc** args, NI argsLen_0);
NimStringDesc* curCaasCmd_d9bbs0fkusQpq9c9aV1N2b4Ew;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NimStringDesc* lastCaasCmd_XN0FKBK4eJUnsxrDhlKHzg;
extern TNimType NTI_fe5bDDfRbVwQIuUOouExnA_;
extern tySet_tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw gGlobalOptions_j042VVDC9cT5ENYoXnmhhVg;
extern NimStringDesc* arguments_J4sVmqKDJ3MkfxziRX9cODA;
extern NimStringDesc* command_zo83h8QWwtDIGDuqkGhjqg;
STRING_LITERAL(TM_AxyNANBXigTKyIcRAbufXw_3, "", 0);
STRING_LITERAL(TM_AxyNANBXigTKyIcRAbufXw_5, " ", 1);
STRING_LITERAL(TM_AxyNANBXigTKyIcRAbufXw_6, "-", 1);
STRING_LITERAL(TM_AxyNANBXigTKyIcRAbufXw_7, "run", 3);
static N_NIMCALL(void, TM_AxyNANBXigTKyIcRAbufXw_2)(void) {
	nimGCvisit((void*)curCaasCmd_d9bbs0fkusQpq9c9aV1N2b4Ew, 0);
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (ptrdiff_t) (usr))) - (NU32)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}
static N_NIMCALL(void, TM_AxyNANBXigTKyIcRAbufXw_4)(void) {
	nimGCvisit((void*)lastCaasCmd_XN0FKBK4eJUnsxrDhlKHzg, 0);
}

static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = memcmp(a, b, ((size_t) (size)));
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL T11_;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == NIM_NIL);
		if (T7_) goto LA8_;
		T7_ = (b == NIM_NIL);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA9_: ;
	T11_ = (NIM_BOOL)0;
	T11_ = ((*a).Sup.len == (*b).Sup.len);
	if (!(T11_)) goto LA12_;
	T11_ = equalMem_DCrUjdaMvFDHaR1hs7sQGwropes(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, processCmdLine_tw2pZl8Nisz38VPmsT5WZA)(tyEnum_TCmdLinePass_IiBn9cB6WYIMDHOT44O82wA pass, NimStringDesc* cmd) {
	tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA p;
	NI argsCount;
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI_fe5bDDfRbVwQIuUOouExnA_);
	initOptParser_xt25Cv9cQqaNt3Mscl7nHFA(cmd, (&p));
	argsCount = ((NI) 0);
	{
		while (1) {
			nponext((&p));
			switch (p.kind) {
			case ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 0):
			{
				goto LA1;
			}
			break;
			case ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 2):
			case ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 3):
			{
				{
					if (!eqStrings(p.key, ((NimStringDesc*) &TM_AxyNANBXigTKyIcRAbufXw_5))) goto LA7_;
					p.key = copyString(((NimStringDesc*) &TM_AxyNANBXigTKyIcRAbufXw_6));
					{
						NIM_BOOL T11_;
						T11_ = (NIM_BOOL)0;
						T11_ = processArgument_lWiIBVoVYe1MHypeoTZrBw(pass, (&p), (&argsCount));
						if (!T11_) goto LA12_;
						goto LA1;
					}
					LA12_: ;
				}
				goto LA5_;
				LA7_: ;
				{
					processSwitch_TdGOW9ciAVvdBm6nv23Sz9aA(pass, (&p));
				}
				LA5_: ;
			}
			break;
			case ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 1):
			{
				{
					NIM_BOOL T18_;
					T18_ = (NIM_BOOL)0;
					T18_ = processArgument_lWiIBVoVYe1MHypeoTZrBw(pass, (&p), (&argsCount));
					if (!T18_) goto LA19_;
					goto LA1;
				}
				LA19_: ;
			}
			break;
			}
		}
	} LA1: ;
	{
		if (!(pass == ((tyEnum_TCmdLinePass_IiBn9cB6WYIMDHOT44O82wA) 1))) goto LA23_;
		{
			NIM_BOOL T27_;
			NIM_BOOL T28_;
			NimStringDesc* T31_;
			tyArray_8ZvwQIddfpj2THRVPsFzIQ T34_;
			T27_ = (NIM_BOOL)0;
			T28_ = (NIM_BOOL)0;
			T28_ = !(((gGlobalOptions_j042VVDC9cT5ENYoXnmhhVg &(1U<<((NU)(((tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw) 12))&31U)))!=0));
			if (!(T28_)) goto LA29_;
			T28_ = !(((arguments_J4sVmqKDJ3MkfxziRX9cODA) && (arguments_J4sVmqKDJ3MkfxziRX9cODA)->Sup.len == 0));
			LA29_: ;
			T27_ = T28_;
			if (!(T27_)) goto LA30_;
			T31_ = (NimStringDesc*)0;
			T31_ = nsuNormalize(command_zo83h8QWwtDIGDuqkGhjqg);
			T27_ = !(eqStrings(T31_, ((NimStringDesc*) &TM_AxyNANBXigTKyIcRAbufXw_7)));
			LA30_: ;
			if (!T27_) goto LA32_;
			memset((void*)T34_, 0, sizeof(T34_));
			rawMessage_wSQLHRsYvHJ4DSWgdFrFaA(((tyEnum_TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 60), T34_, 0);
		}
		LA32_: ;
	}
	LA23_: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit000)(void) {
	NimStringDesc* T1_;
	NimStringDesc* T2_;
nimRegisterGlobalMarker(TM_AxyNANBXigTKyIcRAbufXw_2);
nimRegisterGlobalMarker(TM_AxyNANBXigTKyIcRAbufXw_4);
	T1_ = (NimStringDesc*)0;
	T1_ = curCaasCmd_d9bbs0fkusQpq9c9aV1N2b4Ew; curCaasCmd_d9bbs0fkusQpq9c9aV1N2b4Ew = copyStringRC1(((NimStringDesc*) &TM_AxyNANBXigTKyIcRAbufXw_3));
	if (T1_) nimGCunrefNoCycle(T1_);
	T2_ = (NimStringDesc*)0;
	T2_ = lastCaasCmd_XN0FKBK4eJUnsxrDhlKHzg; lastCaasCmd_XN0FKBK4eJUnsxrDhlKHzg = copyStringRC1(((NimStringDesc*) &TM_AxyNANBXigTKyIcRAbufXw_3));
	if (T2_) nimGCunrefNoCycle(T2_);
}

NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit000)(void) {
}

