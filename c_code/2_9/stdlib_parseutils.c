/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
#undef near
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct OverflowError_I3Jtn27626sFBOls6BBQ2Q OverflowError_I3Jtn27626sFBOls6BBQ2Q;
typedef struct ArithmeticError_QcJsjWXxMFpjHfkCIK5ExA ArithmeticError_QcJsjWXxMFpjHfkCIK5ExA;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct TY_ujsjpB2O9cjj3uDHsXbnSzg TY_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  ArithmeticError_QcJsjWXxMFpjHfkCIK5ExA  {
  Exception Sup;
};
struct  OverflowError_I3Jtn27626sFBOls6BBQ2Q  {
  ArithmeticError_QcJsjWXxMFpjHfkCIK5ExA Sup;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct TY_ujsjpB2O9cjj3uDHsXbnSzg {
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef TY_ujsjpB2O9cjj3uDHsXbnSzg TY_LzOv2eCDGiceMKQstCLmhw[30];
struct  HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg  {
NI len;
TY_LzOv2eCDGiceMKQstCLmhw chunks;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
struct  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevSize;
NI size;
};
struct  SmallChunk_tXn60W2f8h3jgAYdEmy5NQ  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct  LLChunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  BigChunk_Rv9c70Uhp2TytkX7eH78qEg  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
N_NIMCALL(NI, nimParseBiggestFloat)(NimStringDesc* s, NF* number, NI start);
N_NIMCALL(NI, nimParseBiggestFloat)(NimStringDesc* s, NF* number, NI start);
N_NIMCALL(NI, rawParseInt_ZzngwN3GXlI9aVYNxHLGOXQ)(NimStringDesc* s, NI64* b, NI start);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
extern TNimType NTI_6woiEp3hwhYMr1p5tjkZvA_;
extern TNimType NTI_I3Jtn27626sFBOls6BBQ2Q_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_vI9aZNKIcImom6dDyKXW1ZA_11, "overflow", 8);

N_NIMCALL(NI, npuParseFloat)(NimStringDesc* s, NF* number, NI start) {
	NI result;
	NF bf;
	result = (NI)0;
	bf = (NF)0;
	result = nimParseBiggestFloat(s, (&bf), start);
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		(*number) = bf;
	}
	LA3_: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NI, rawParseInt_ZzngwN3GXlI9aVYNxHLGOXQ)(NimStringDesc* s, NI64* b, NI start) {
	NI result;
	NI64 sign;
	NI i;
	result = (NI)0;
	sign = IL64(-1);
	i = start;
	{
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_2;
		if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA3_;
		TM_vI9aZNKIcImom6dDyKXW1ZA_2 = addInt(i, ((NI) 1));
		i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_2);
	}
	goto LA1_;
	LA3_: ;
	{
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_3;
		if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA6_;
		TM_vI9aZNKIcImom6dDyKXW1ZA_3 = addInt(i, ((NI) 1));
		i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_3);
		sign = IL64(1);
	}
	goto LA1_;
	LA6_: ;
	LA1_: ;
	{
		NI64 TM_vI9aZNKIcImom6dDyKXW1ZA_9;
		NI TM_vI9aZNKIcImom6dDyKXW1ZA_10;
		if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA10_;
		(*b) = IL64(0);
		{
			while (1) {
				NI64 TM_vI9aZNKIcImom6dDyKXW1ZA_4;
				NI TM_vI9aZNKIcImom6dDyKXW1ZA_5;
				NI64 TM_vI9aZNKIcImom6dDyKXW1ZA_6;
				NI TM_vI9aZNKIcImom6dDyKXW1ZA_7;
				if (!(((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)))) goto LA13;
				TM_vI9aZNKIcImom6dDyKXW1ZA_4 = mulInt64((*b), IL64(10));
				TM_vI9aZNKIcImom6dDyKXW1ZA_5 = subInt(((NI) (((NU8)(s->data[i])))), ((NI) 48));
				TM_vI9aZNKIcImom6dDyKXW1ZA_6 = subInt64((NI64)(TM_vI9aZNKIcImom6dDyKXW1ZA_4), ((NI64) ((NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_5))));
				(*b) = (NI64)(TM_vI9aZNKIcImom6dDyKXW1ZA_6);
				TM_vI9aZNKIcImom6dDyKXW1ZA_7 = addInt(i, ((NI) 1));
				i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_7);
				{
					while (1) {
						NI TM_vI9aZNKIcImom6dDyKXW1ZA_8;
						if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA15;
						TM_vI9aZNKIcImom6dDyKXW1ZA_8 = addInt(i, ((NI) 1));
						i = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_8);
					} LA15: ;
				}
			} LA13: ;
		}
		TM_vI9aZNKIcImom6dDyKXW1ZA_9 = mulInt64((*b), sign);
		(*b) = (NI64)(TM_vI9aZNKIcImom6dDyKXW1ZA_9);
		TM_vI9aZNKIcImom6dDyKXW1ZA_10 = subInt(i, start);
		result = (NI)(TM_vI9aZNKIcImom6dDyKXW1ZA_10);
	}
	LA10_: ;
	return result;
}

N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start) {
	NI result;
	NI64 res;
	result = (NI)0;
	res = (NI64)0;
	result = rawParseInt_ZzngwN3GXlI9aVYNxHLGOXQ(s, (&res), start);
	(*number) = res;
	return result;
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start) {
	NI result;
	NI64 res;
	result = (NI)0;
	res = (NI64)0;
	result = npuParseBiggestInt(s, (&res), start);
	{
		NIM_BOOL T3_;
		NIM_BOOL T5_;
		OverflowError_I3Jtn27626sFBOls6BBQ2Q* e;
		NimStringDesc* T9_;
		T3_ = (NIM_BOOL)0;
		T3_ = NIM_FALSE;
		if (!(T3_)) goto LA4_;
		T5_ = (NIM_BOOL)0;
		T5_ = (res < (IL64(-9223372036854775807) - IL64(1)));
		if (T5_) goto LA6_;
		T5_ = (IL64(9223372036854775807) < res);
		LA6_: ;
		T3_ = T5_;
		LA4_: ;
		if (!T3_) goto LA7_;
		e = (OverflowError_I3Jtn27626sFBOls6BBQ2Q*)0;
		e = (OverflowError_I3Jtn27626sFBOls6BBQ2Q*) newObj((&NTI_6woiEp3hwhYMr1p5tjkZvA_), sizeof(OverflowError_I3Jtn27626sFBOls6BBQ2Q));
		(*e).Sup.Sup.Sup.m_type = (&NTI_I3Jtn27626sFBOls6BBQ2Q_);
		T9_ = (NimStringDesc*)0;
		T9_ = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM_vI9aZNKIcImom6dDyKXW1ZA_11));
		if (T9_) nimGCunrefNoCycle(T9_);
		asgnRef((void**) (&(*e).Sup.Sup.parent), NIM_NIL);
		raiseException((Exception*)e, "OverflowError");
	}
	goto LA1_;
	LA7_: ;
	{
		if (!!((result == ((NI) 0)))) goto LA11_;
		(*number) = ((NI) (res));
	}
	goto LA1_;
	LA11_: ;
	LA1_: ;
	return result;
}

N_NIMCALL(NI, npuParseHex)(NimStringDesc* s, NI* number, NI start, NI maxLen) {
	NI result;
	NI i;
	NIM_BOOL foundDigit;
	NI last;
	result = (NI)0;
	i = start;
	foundDigit = NIM_FALSE;
	{
		NIM_BOOL T3_;
		NIM_BOOL T5_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((NU8)(s->data[i]) == (NU8)(48));
		if (!(T3_)) goto LA4_;
		T5_ = (NIM_BOOL)0;
		T5_ = ((NU8)(s->data[(NI)(i + ((NI) 1))]) == (NU8)(120));
		if (T5_) goto LA6_;
		T5_ = ((NU8)(s->data[(NI)(i + ((NI) 1))]) == (NU8)(88));
		LA6_: ;
		T3_ = T5_;
		LA4_: ;
		if (!T3_) goto LA7_;
		i += ((NI) 2);
	}
	goto LA1_;
	LA7_: ;
	{
		if (!((NU8)(s->data[i]) == (NU8)(35))) goto LA10_;
		i += ((NI) 1);
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	{
		if (!(maxLen == ((NI) 0))) goto LA14_;
		last = (s ? s->Sup.len : 0);
	}
	goto LA12_;
	LA14_: ;
	{
		last = (NI)(i + maxLen);
	}
	LA12_: ;
	{
		while (1) {
			if (!(i < last)) goto LA18;
			switch (((NU8)(s->data[i]))) {
			case 95:
			{
			}
			break;
			case 48 ... 57:
			{
				(*number) = (NI)((NI)((NU64)((*number)) << (NU64)(((NI) 4))) | ((NI) ((NI)(((NI) (((NU8)(s->data[i])))) - ((NI) 48)))));
				foundDigit = NIM_TRUE;
			}
			break;
			case 97 ... 102:
			{
				(*number) = (NI)((NI)((NU64)((*number)) << (NU64)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s->data[i])))) - ((NI) 97)))) + ((NI) 10)))));
				foundDigit = NIM_TRUE;
			}
			break;
			case 65 ... 70:
			{
				(*number) = (NI)((NI)((NU64)((*number)) << (NU64)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s->data[i])))) - ((NI) 65)))) + ((NI) 10)))));
				foundDigit = NIM_TRUE;
			}
			break;
			default:
			{
				goto LA17;
			}
			break;
			}
			i += ((NI) 1);
		} LA18: ;
	} LA17: ;
	{
		if (!foundDigit) goto LA26_;
		result = (NI)(i - start);
	}
	LA26_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void) {
}

