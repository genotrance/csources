/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct HashSet_pOhUohTPuRItuGmDY0Ddzg HashSet_pOhUohTPuRItuGmDY0Ddzg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY_4eRCaZmrYLLw2k30GPTiMw TY_4eRCaZmrYLLw2k30GPTiMw;
typedef struct TY_QeWl6B6ffS4pU6WWrtcrDw TY_QeWl6B6ffS4pU6WWrtcrDw;
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
struct  HashSet_pOhUohTPuRItuGmDY0Ddzg  {
TY_4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
struct TY_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
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
NI align;
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
typedef NI TY_9agrCtWKhCnWWMJpKKugJag[16];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9agrCtWKhCnWWMJpKKugJag bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9agrCtWKhCnWWMJpKKugJag bits;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct TY_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  TY_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, rawGet_SaVNwZAzzx9cfbfqIaCbK7Qsets)(HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI* hc);
N_NIMCALL(NI, hash_uBstFm5SYVQeOL3j9c9bc58A)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, isFilled_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a, void* b, NI size);
static N_INLINE(NI, nextTry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h, NI maxHash);
static N_INLINE(NIM_BOOL, mustRehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length, NI counter);
N_NIMCALL(void, enlarge_AdJq4wBW1P1lPO9b8ZHnO2g)(HashSet_pOhUohTPuRItuGmDY0Ddzg* s);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_TY_4eRCaZmrYLLw2k30GPTiMw)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets)(HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawInsert_NHve4XdmAn7u81IC9bnRBng)(HashSet_pOhUohTPuRItuGmDY0Ddzg* s, TY_4eRCaZmrYLLw2k30GPTiMw** data, NimStringDesc* key, NI hc, NI h);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, init_dG7qwLANa3DTWvQLq7ZA7g)(HashSet_pOhUohTPuRItuGmDY0Ddzg* s, NI initialSize);
TNimType NTI_QeWl6B6ffS4pU6WWrtcrDw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_4eRCaZmrYLLw2k30GPTiMw_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
TNimType NTI_pOhUohTPuRItuGmDY0Ddzg_;

static N_INLINE(NIM_BOOL, isFilled_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = !((hcode == ((NI) 0)));
	return result;
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

static N_INLINE(NI, nextTry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h, NI maxHash) {
	NI result;
	result = (NI)0;
	result = (NI)((NI)(h + ((NI) 1)) & maxHash);
	return result;
}

static N_INLINE(NI, rawGet_SaVNwZAzzx9cfbfqIaCbK7Qsets)(HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
{	result = (NI)0;
	(*hc) = hash_uBstFm5SYVQeOL3j9c9bc58A(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3_;
		(*hc) = ((NI) 314159265);
	}
	LA3_: ;
	h = (NI)((*hc) & (s.data ? (s.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL T7_;
			T7_ = (NIM_BOOL)0;
			T7_ = isFilled_UshbaKGVTNLaJdFZ6zcwswsets(s.data->data[h].Field0);
			if (!T7_) goto LA6;
			{
				NIM_BOOL T10_;
				T10_ = (NIM_BOOL)0;
				T10_ = (s.data->data[h].Field0 == (*hc));
				if (!(T10_)) goto LA11_;
				T10_ = eqStrings(s.data->data[h].Field1, key);
				LA11_: ;
				if (!T10_) goto LA12_;
				result = h;
				goto BeforeRet_;
			}
			LA12_: ;
			h = nextTry_iM1OyigHU0QXXBzsM5QjYAsets(h, (s.data ? (s.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustRehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (T1_) goto LA2_;
	T1_ = ((NI)(length - counter) < ((NI) 4));
	LA2_: ;
	result = T1_;
	return result;
}
static N_NIMCALL(void, Marker_TY_4eRCaZmrYLLw2k30GPTiMw)(void* p, NI op) {
	TY_4eRCaZmrYLLw2k30GPTiMw* a;
	NI T1_;
	a = (TY_4eRCaZmrYLLw2k30GPTiMw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < a->Sup.len; T1_++) {
	nimGCvisit((void*)a->data[T1_].Field1, op);
	}
}

static N_INLINE(NI, rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets)(HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
{	result = (NI)0;
	h = (NI)(hc & (s.data ? (s.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = isFilled_UshbaKGVTNLaJdFZ6zcwswsets(s.data->data[h].Field0);
			if (!T3_) goto LA2;
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = (s.data->data[h].Field0 == hc);
				if (!(T6_)) goto LA7_;
				T6_ = eqStrings(s.data->data[h].Field1, key);
				LA7_: ;
				if (!T6_) goto LA8_;
				result = h;
				goto BeforeRet_;
			}
			LA8_: ;
			h = nextTry_iM1OyigHU0QXXBzsM5QjYAsets(h, (s.data ? (s.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
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
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

N_NIMCALL(void, rawInsert_NHve4XdmAn7u81IC9bnRBng)(HashSet_pOhUohTPuRItuGmDY0Ddzg* s, TY_4eRCaZmrYLLw2k30GPTiMw** data, NimStringDesc* key, NI hc, NI h) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (T1_) nimGCunrefNoCycle(T1_);
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_AdJq4wBW1P1lPO9b8ZHnO2g)(HashSet_pOhUohTPuRItuGmDY0Ddzg* s) {
	TY_4eRCaZmrYLLw2k30GPTiMw* n;
	TY_4eRCaZmrYLLw2k30GPTiMw* T1_;
	n = (TY_4eRCaZmrYLLw2k30GPTiMw*)0;
	n = (TY_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI) ((NI)(((*s).data ? (*s).data->Sup.len : 0) * ((NI) 2)))));
	T1_ = (TY_4eRCaZmrYLLw2k30GPTiMw*)0;
	T1_ = (*s).data;
	unsureAsgnRef((void**) (&(*s).data), n);
	n = T1_;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (n ? (n->Sup.len-1) : -1);
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				{
					NIM_BOOL T7_;
					NI j;
					NI T10_;
					T7_ = (NIM_BOOL)0;
					T7_ = isFilled_UshbaKGVTNLaJdFZ6zcwswsets(n->data[i].Field0);
					if (!T7_) goto LA8_;
					T10_ = (NI)0;
					T10_ = rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets((*s), n->data[i].Field1, n->data[i].Field0);
					j = (NI)(((NI) -1) - T10_);
					rawInsert_NHve4XdmAn7u81IC9bnRBng(s, (&(*s).data), n->data[i].Field1, n->data[i].Field0, j);
				}
				LA8_: ;
				res += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, incl_I6VFHFuzEfqdUNaUfyr6kA)(HashSet_pOhUohTPuRItuGmDY0Ddzg* s, NimStringDesc* key) {
	NI hc;
	NI index;
	hc = (NI)0;
	index = rawGet_SaVNwZAzzx9cfbfqIaCbK7Qsets((*s), key, (&hc));
	{
		if (!(index < ((NI) 0))) goto LA3_;
		{
			NIM_BOOL T7_;
			T7_ = (NIM_BOOL)0;
			T7_ = mustRehash_flzFqVXoQqeNJHN4qDyOhwsets(((*s).data ? (*s).data->Sup.len : 0), (*s).counter);
			if (!T7_) goto LA8_;
			enlarge_AdJq4wBW1P1lPO9b8ZHnO2g(s);
			index = rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets((*s), key, hc);
		}
		LA8_: ;
		rawInsert_NHve4XdmAn7u81IC9bnRBng(s, (&(*s).data), key, hc, (NI)(((NI) -1) - index));
		(*s).counter += ((NI) 1);
	}
	LA3_: ;
}

N_NIMCALL(void, init_dG7qwLANa3DTWvQLq7ZA7g)(HashSet_pOhUohTPuRItuGmDY0Ddzg* s, NI initialSize) {
	(*s).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*s).data), (TY_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI) (initialSize))));
}

N_NIMCALL(void, initSet_Fwi9bjybHpZuLlzfdutND9cw)(NI initialSize, HashSet_pOhUohTPuRItuGmDY0Ddzg* Result) {
	init_dG7qwLANa3DTWvQLq7ZA7g(Result, initialSize);
}

N_NIMCALL(NIM_BOOL, contains_QUwFXAtgP2RpEd1T8OivlA)(HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI index;
	result = (NIM_BOOL)0;
	hc = (NI)0;
	index = rawGet_SaVNwZAzzx9cfbfqIaCbK7Qsets(s, key, (&hc));
	result = (((NI) 0) <= index);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit000)(void) {
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_2[2];
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_3[2];
static TNimNode TM_0JXiWyhP5OCO8jWMA6sb1w_0[6];
NTI_QeWl6B6ffS4pU6WWrtcrDw_.size = sizeof(TY_QeWl6B6ffS4pU6WWrtcrDw);
NTI_QeWl6B6ffS4pU6WWrtcrDw_.kind = 18;
NTI_QeWl6B6ffS4pU6WWrtcrDw_.base = 0;
NTI_QeWl6B6ffS4pU6WWrtcrDw_.flags = 2;
TM_0JXiWyhP5OCO8jWMA6sb1w_2[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[1];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].offset = offsetof(TY_QeWl6B6ffS4pU6WWrtcrDw, Field0);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].name = "Field0";
TM_0JXiWyhP5OCO8jWMA6sb1w_2[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[2];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].offset = offsetof(TY_QeWl6B6ffS4pU6WWrtcrDw, Field1);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].name = "Field1";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_2[0];
NTI_QeWl6B6ffS4pU6WWrtcrDw_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[0];
NTI_4eRCaZmrYLLw2k30GPTiMw_.size = sizeof(TY_4eRCaZmrYLLw2k30GPTiMw*);
NTI_4eRCaZmrYLLw2k30GPTiMw_.kind = 24;
NTI_4eRCaZmrYLLw2k30GPTiMw_.base = (&NTI_QeWl6B6ffS4pU6WWrtcrDw_);
NTI_4eRCaZmrYLLw2k30GPTiMw_.flags = 2;
NTI_4eRCaZmrYLLw2k30GPTiMw_.marker = Marker_TY_4eRCaZmrYLLw2k30GPTiMw;
NTI_pOhUohTPuRItuGmDY0Ddzg_.size = sizeof(HashSet_pOhUohTPuRItuGmDY0Ddzg);
NTI_pOhUohTPuRItuGmDY0Ddzg_.kind = 18;
NTI_pOhUohTPuRItuGmDY0Ddzg_.base = 0;
NTI_pOhUohTPuRItuGmDY0Ddzg_.flags = 2;
TM_0JXiWyhP5OCO8jWMA6sb1w_3[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[4];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].offset = offsetof(HashSet_pOhUohTPuRItuGmDY0Ddzg, data);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].typ = (&NTI_4eRCaZmrYLLw2k30GPTiMw_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].name = "data";
TM_0JXiWyhP5OCO8jWMA6sb1w_3[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[5];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].offset = offsetof(HashSet_pOhUohTPuRItuGmDY0Ddzg, counter);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].name = "counter";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_3[0];
NTI_pOhUohTPuRItuGmDY0Ddzg_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[3];
}

