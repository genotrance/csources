/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#undef linux
#undef near
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TLLStream_IHsOGFu33dIY69a9bLlFHlHw TLLStream_IHsOGFu33dIY69a9bLlFHlHw;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TLLStream_IHsOGFu33dIY69a9bLlFHlHw  {
  TNimObject Sup;
TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineOffset;
};
typedef NU8 FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
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
typedef NU8 TY_nmiMWKVIe46vacnhAFrQvw_Set[32];
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
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_TY_f4WZajr79aZLBPITqz2rcdA)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, open_sEp0GH2306oGo9bqBpj5oTQ)(FILE** f, NimStringDesc* filename, FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_BOOL, readLine_sO1bQXVRA6RP9cdYJXNKeSw)(FILE* f, NimStringDesc** line);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
N_NIMCALL(NI, readBuffer_nZ0pNe9cd9cXtoayexCiaDtA_2)(FILE* f, void* buffer, NI len);
N_NIMCALL(NI, llReadFromStdin_rgyTKC8s50wthTlyUpoMQg_2)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, void* buf, NI bufLen);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readLineFromStdin_uSz3afZdESO5uHQzkWghlQ)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NI, countTriples_c9cKaDHVjOVjZCf9b4gTUrFg)(NimStringDesc* s);
static N_INLINE(NIM_BOOL, continueLine_65hI3axOH0fBcQFDum9aTZgllstream)(NimStringDesc* line, NIM_BOOL inTripleString);
N_NIMCALL(NIM_BOOL, endsWith_RTbJaR5kDAZUyj9bXErnbyg)(NimStringDesc* x, TY_nmiMWKVIe46vacnhAFrQvw_Set s);
N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_3)(FILE* f);
N_NIMCALL(NI, writeBuffer_nZ0pNe9cd9cXtoayexCiaDtA)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, llStreamWrite_p1fwzwO1YKdwAKg6V27RTw)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NimStringDesc* data);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_IHsOGFu33dIY69a9bLlFHlHw_;
TNimType NTI_jVcKY16LbOamXE9bxXUD6pQ_;
extern TNimType NTI_7BHnQsEj49a9c6QtudqWTo1w_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_f4WZajr79aZLBPITqz2rcdA_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_ml9aueblxGz9aYsRLKvPmpow_6, "", 0);
STRING_LITERAL(TM_ml9aueblxGz9aYsRLKvPmpow_7, "\012", 1);
STRING_LITERAL(TM_ml9aueblxGz9aYsRLKvPmpow_8, ">>> ", 4);
STRING_LITERAL(TM_ml9aueblxGz9aYsRLKvPmpow_9, "... ", 4);
static NIM_CONST TY_nmiMWKVIe46vacnhAFrQvw_Set TM_ml9aueblxGz9aYsRLKvPmpow_10 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY_nmiMWKVIe46vacnhAFrQvw_Set TM_ml9aueblxGz9aYsRLKvPmpow_11 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static N_NIMCALL(void, Marker_TY_f4WZajr79aZLBPITqz2rcdA)(void* p, NI op) {
	TLLStream_IHsOGFu33dIY69a9bLlFHlHw* a;
	a = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*)p;
	nimGCvisit((void*)(*a).s, op);
}

N_NIMCALL(TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, llStreamOpen_TMcHzC3C639c0ccC0wtKA2w)(NimStringDesc* filename, FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode) {
	TLLStream_IHsOGFu33dIY69a9bLlFHlHw* result;
	result = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	result = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*) newObj((&NTI_f4WZajr79aZLBPITqz2rcdA_), sizeof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw));
	(*result).Sup.m_type = (&NTI_IHsOGFu33dIY69a9bLlFHlHw_);
	(*result).kind = ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 2);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open_sEp0GH2306oGo9bqBpj5oTQ(&(*result).f, filename, mode, ((NI) -1));
		if (!!(T3_)) goto LA4_;
		result = NIM_NIL;
	}
	LA4_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, llStreamReadLine_Qwm1ilRhcaI3znjOGn4xBg)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NimStringDesc** line) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	(*line) = setLengthStr((*line), ((NI) 0));
	switch ((*s).kind) {
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 0):
	{
		result = NIM_TRUE;
	}
	break;
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		NIM_BOOL T12_;
		{
			while (1) {
				if (!((*s).rd < ((*s).s ? (*s).s->Sup.len : 0))) goto LA4;
				switch (((NU8)((*s).s->data[(*s).rd]))) {
				case 13:
				{
					(*s).rd += ((NI) 1);
					{
						if (!((NU8)((*s).s->data[(*s).rd]) == (NU8)(10))) goto LA8_;
						(*s).rd += ((NI) 1);
					}
					LA8_: ;
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
		T12_ = (NIM_BOOL)0;
		T12_ = (((NI) 0) < ((*line) ? (*line)->Sup.len : 0));
		if (T12_) goto LA13_;
		T12_ = ((*s).rd < ((*s).s ? (*s).s->Sup.len : 0));
		LA13_: ;
		result = T12_;
	}
	break;
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		result = readLine_sO1bQXVRA6RP9cdYJXNKeSw((*s).f, line);
	}
	break;
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
		result = readLine_sO1bQXVRA6RP9cdYJXNKeSw(stdin, line);
	}
	break;
	}
	return result;
}

static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
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

N_NIMCALL(NIM_BOOL, readLineFromStdin_uSz3afZdESO5uHQzkWghlQ)(NimStringDesc* prompt, NimStringDesc** line) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	write_c4mGyJBvK73pdM22jiweKQ(stdout, prompt);
	result = readLine_sO1bQXVRA6RP9cdYJXNKeSw(stdin, line);
	{
		if (!!(result)) goto LA3_;
		write_c4mGyJBvK73pdM22jiweKQ(stdout, ((NimStringDesc*) &TM_ml9aueblxGz9aYsRLKvPmpow_7));
		exit(((NI) 0));
	}
	LA3_: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NI, countTriples_c9cKaDHVjOVjZCf9b4gTUrFg)(NimStringDesc* s) {
	NI result;
	NI i;
	result = (NI)0;
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < (s ? s->Sup.len : 0))) goto LA2;
			{
				NIM_BOOL T5_;
				NIM_BOOL T6_;
				T5_ = (NIM_BOOL)0;
				T6_ = (NIM_BOOL)0;
				T6_ = ((NU8)(s->data[i]) == (NU8)(34));
				if (!(T6_)) goto LA7_;
				T6_ = ((NU8)(s->data[(NI)(i + ((NI) 1))]) == (NU8)(34));
				LA7_: ;
				T5_ = T6_;
				if (!(T5_)) goto LA8_;
				T5_ = ((NU8)(s->data[(NI)(i + ((NI) 2))]) == (NU8)(34));
				LA8_: ;
				if (!T5_) goto LA9_;
				result += ((NI) 1);
				i += ((NI) 2);
			}
			LA9_: ;
			i += ((NI) 1);
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, endsWith_RTbJaR5kDAZUyj9bXErnbyg)(NimStringDesc* x, TY_nmiMWKVIe46vacnhAFrQvw_Set s) {
	NIM_BOOL result;
	NI i;
	result = (NIM_BOOL)0;
	i = (NI)((x ? x->Sup.len : 0) - ((NI) 1));
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = (((NI) 0) <= i);
			if (!(T3_)) goto LA4_;
			T3_ = ((NU8)(x->data[i]) == (NU8)(32));
			LA4_: ;
			if (!T3_) goto LA2;
			i -= ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (((NI) 0) <= i);
		if (!(T7_)) goto LA8_;
		T7_ = ((s[(NU)(((NU8)(x->data[i])))>>3] &(1U<<((NU)(((NU8)(x->data[i])))&7U)))!=0);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_TRUE;
	}
	LA9_: ;
	return result;
}

static N_INLINE(NIM_BOOL, continueLine_65hI3axOH0fBcQFDum9aTZgllstream)(NimStringDesc* line, NIM_BOOL inTripleString) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = inTripleString;
	if (T2_) goto LA3_;
	T2_ = ((NU8)(line->data[((NI) 0)]) == (NU8)(32));
	LA3_: ;
	T1_ = T2_;
	if (T1_) goto LA4_;
	T1_ = endsWith_RTbJaR5kDAZUyj9bXErnbyg(line, TM_ml9aueblxGz9aYsRLKvPmpow_10);
	LA4_: ;
	result = T1_;
	return result;
}

N_NIMCALL(NI, llReadFromStdin_rgyTKC8s50wthTlyUpoMQg_2)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, void* buf, NI bufLen) {
	NI result;
	NimStringDesc* T1_;
	NimStringDesc* line;
	NI triples;
	result = (NI)0;
	T1_ = (NimStringDesc*)0;
	T1_ = (*s).s; (*s).s = copyStringRC1(((NimStringDesc*) &TM_ml9aueblxGz9aYsRLKvPmpow_6));
	if (T1_) nimGCunrefNoCycle(T1_);
	(*s).rd = ((NI) 0);
	line = rawNewString(((NI) 120));
	triples = ((NI) 0);
	{
		while (1) {
			NimStringDesc* T4_;
			NIM_BOOL T10_;
			NI T11_;
			T4_ = (NimStringDesc*)0;
			{
				if (!(((*s).s ? (*s).s->Sup.len : 0) == ((NI) 0))) goto LA7_;
				T4_ = copyString(((NimStringDesc*) &TM_ml9aueblxGz9aYsRLKvPmpow_8));
			}
			goto LA5_;
			LA7_: ;
			{
				T4_ = copyString(((NimStringDesc*) &TM_ml9aueblxGz9aYsRLKvPmpow_9));
			}
			LA5_: ;
			T10_ = (NIM_BOOL)0;
			T10_ = readLineFromStdin_uSz3afZdESO5uHQzkWghlQ(T4_, (&line));
			if (!T10_) goto LA3;
			(*s).s = resizeString((*s).s, line->Sup.len + 0);
appendString((*s).s, line);
			(*s).s = resizeString((*s).s, 1);
appendString((*s).s, ((NimStringDesc*) &TM_ml9aueblxGz9aYsRLKvPmpow_7));
			T11_ = (NI)0;
			T11_ = countTriples_c9cKaDHVjOVjZCf9b4gTUrFg(line);
			triples += T11_;
			{
				NIM_BOOL T14_;
				T14_ = (NIM_BOOL)0;
				T14_ = continueLine_65hI3axOH0fBcQFDum9aTZgllstream(line, (((NI) ((NI)(triples & ((NI) 1)))) == ((NI) 1)));
				if (!!(T14_)) goto LA15_;
				goto LA2;
			}
			LA15_: ;
		} LA3: ;
	} LA2: ;
	(*s).lineOffset += ((NI) 1);
	result = ((bufLen <= (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd)) ? bufLen : (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd));
	{
		if (!(((NI) 0) < result)) goto LA19_;
		copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(buf, ((void*) ((&(*s).s->data[(*s).rd]))), ((NI) (result)));
		(*s).rd += result;
	}
	LA19_: ;
	return result;
}

N_NIMCALL(NI, llStreamRead_rgyTKC8s50wthTlyUpoMQg)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, void* buf, NI bufLen) {
	NI result;
	result = (NI)0;
	switch ((*s).kind) {
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 0):
	{
		result = ((NI) 0);
	}
	break;
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		result = ((bufLen <= (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd)) ? bufLen : (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd));
		{
			if (!(((NI) 0) < result)) goto LA5_;
			copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(buf, ((void*) ((&(*s).s->data[(NI)(((NI) 0) + (*s).rd)]))), ((NI) (result)));
			(*s).rd += result;
		}
		LA5_: ;
	}
	break;
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		result = readBuffer_nZ0pNe9cd9cXtoayexCiaDtA_2((*s).f, buf, ((NI) (bufLen)));
	}
	break;
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
		result = llReadFromStdin_rgyTKC8s50wthTlyUpoMQg_2(s, buf, bufLen);
	}
	break;
	}
	return result;
}

N_NIMCALL(TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, llStreamOpen_HQSZA6kzdilYF0Pf022dhA)(NimStringDesc* data) {
	TLLStream_IHsOGFu33dIY69a9bLlFHlHw* result;
	NimStringDesc* T1_;
	result = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	result = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*) newObj((&NTI_f4WZajr79aZLBPITqz2rcdA_), sizeof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw));
	(*result).Sup.m_type = (&NTI_IHsOGFu33dIY69a9bLlFHlHw_);
	T1_ = (NimStringDesc*)0;
	T1_ = (*result).s; (*result).s = copyStringRC1(data);
	if (T1_) nimGCunrefNoCycle(T1_);
	(*result).kind = ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 1);
	return result;
}

N_NIMCALL(void, llStreamClose_TQe1mwqs39ccgay5ywsr9azw)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s) {
	switch ((*s).kind) {
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 0):
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 1):
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
	}
	break;
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		close_BWnr8V7RERYno9bIdPmw8Hw_3((*s).f);
	}
	break;
	}
}

N_NIMCALL(void, llStreamWrite_p1fwzwO1YKdwAKg6V27RTw)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NimStringDesc* data) {
	switch ((*s).kind) {
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 0):
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
	}
	break;
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		(*s).s = resizeString((*s).s, data->Sup.len + 0);
appendString((*s).s, data);
		(*s).wr += (data ? data->Sup.len : 0);
	}
	break;
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		write_c4mGyJBvK73pdM22jiweKQ((*s).f, data);
	}
	break;
	}
}

N_NIMCALL(NIM_BOOL, endsWithOpr_PeZavdQq7bAHwH9b808pP4g)(NimStringDesc* x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = endsWith_RTbJaR5kDAZUyj9bXErnbyg(x, TM_ml9aueblxGz9aYsRLKvPmpow_11);
	return result;
}

N_NIMCALL(void, llStreamWrite_qahxCxkD1WgPXDAm4CZKqw)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NIM_CHAR data) {
	NIM_CHAR c;
	c = (NIM_CHAR)0;
	switch ((*s).kind) {
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 0):
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
	}
	break;
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		(*s).s = addChar((*s).s, data);
		(*s).wr += ((NI) 1);
	}
	break;
	case ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		NI T4_;
		c = data;
		T4_ = (NI)0;
		T4_ = writeBuffer_nZ0pNe9cd9cXtoayexCiaDtA((*s).f, ((void*) ((&c))), ((NI) 1));
	}
	break;
	}
}

N_NIMCALL(void, llStreamWriteln_p1fwzwO1YKdwAKg6V27RTw_2)(TLLStream_IHsOGFu33dIY69a9bLlFHlHw* s, NimStringDesc* data) {
	llStreamWrite_p1fwzwO1YKdwAKg6V27RTw(s, data);
	llStreamWrite_p1fwzwO1YKdwAKg6V27RTw(s, ((NimStringDesc*) &TM_ml9aueblxGz9aYsRLKvPmpow_7));
}

N_NIMCALL(TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, llStreamOpen_8hTxoBHhwtwZR9cM9bBLMsCQ)(FILE* f) {
	TLLStream_IHsOGFu33dIY69a9bLlFHlHw* result;
	result = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	result = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*) newObj((&NTI_f4WZajr79aZLBPITqz2rcdA_), sizeof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw));
	(*result).Sup.m_type = (&NTI_IHsOGFu33dIY69a9bLlFHlHw_);
	(*result).f = f;
	(*result).kind = ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 2);
	return result;
}

N_NIMCALL(TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, llStreamOpenStdIn_SrHwYi0hR04lgsK58IEpNA)(void) {
	TLLStream_IHsOGFu33dIY69a9bLlFHlHw* result;
	NimStringDesc* T1_;
	result = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	result = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*) newObj((&NTI_f4WZajr79aZLBPITqz2rcdA_), sizeof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw));
	(*result).Sup.m_type = (&NTI_IHsOGFu33dIY69a9bLlFHlHw_);
	(*result).kind = ((TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ) 3);
	T1_ = (NimStringDesc*)0;
	T1_ = (*result).s; (*result).s = copyStringRC1(((NimStringDesc*) &TM_ml9aueblxGz9aYsRLKvPmpow_6));
	if (T1_) nimGCunrefNoCycle(T1_);
	(*result).lineOffset = ((NI) -1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_llstreamDatInit000)(void) {
static TNimNode* TM_ml9aueblxGz9aYsRLKvPmpow_2[6];
static TNimNode* TM_ml9aueblxGz9aYsRLKvPmpow_3[4];
NI TM_ml9aueblxGz9aYsRLKvPmpow_5;
static char* NIM_CONST TM_ml9aueblxGz9aYsRLKvPmpow_4[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TM_ml9aueblxGz9aYsRLKvPmpow_0[12];
NTI_IHsOGFu33dIY69a9bLlFHlHw_.size = sizeof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw);
NTI_IHsOGFu33dIY69a9bLlFHlHw_.kind = 17;
NTI_IHsOGFu33dIY69a9bLlFHlHw_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
TM_ml9aueblxGz9aYsRLKvPmpow_2[0] = &TM_ml9aueblxGz9aYsRLKvPmpow_0[1];
NTI_jVcKY16LbOamXE9bxXUD6pQ_.size = sizeof(TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ);
NTI_jVcKY16LbOamXE9bxXUD6pQ_.kind = 14;
NTI_jVcKY16LbOamXE9bxXUD6pQ_.base = 0;
NTI_jVcKY16LbOamXE9bxXUD6pQ_.flags = 3;
for (TM_ml9aueblxGz9aYsRLKvPmpow_5 = 0; TM_ml9aueblxGz9aYsRLKvPmpow_5 < 4; TM_ml9aueblxGz9aYsRLKvPmpow_5++) {
TM_ml9aueblxGz9aYsRLKvPmpow_0[TM_ml9aueblxGz9aYsRLKvPmpow_5+2].kind = 1;
TM_ml9aueblxGz9aYsRLKvPmpow_0[TM_ml9aueblxGz9aYsRLKvPmpow_5+2].offset = TM_ml9aueblxGz9aYsRLKvPmpow_5;
TM_ml9aueblxGz9aYsRLKvPmpow_0[TM_ml9aueblxGz9aYsRLKvPmpow_5+2].name = TM_ml9aueblxGz9aYsRLKvPmpow_4[TM_ml9aueblxGz9aYsRLKvPmpow_5];
TM_ml9aueblxGz9aYsRLKvPmpow_3[TM_ml9aueblxGz9aYsRLKvPmpow_5] = &TM_ml9aueblxGz9aYsRLKvPmpow_0[TM_ml9aueblxGz9aYsRLKvPmpow_5+2];
}
TM_ml9aueblxGz9aYsRLKvPmpow_0[6].len = 4; TM_ml9aueblxGz9aYsRLKvPmpow_0[6].kind = 2; TM_ml9aueblxGz9aYsRLKvPmpow_0[6].sons = &TM_ml9aueblxGz9aYsRLKvPmpow_3[0];
NTI_jVcKY16LbOamXE9bxXUD6pQ_.node = &TM_ml9aueblxGz9aYsRLKvPmpow_0[6];
TM_ml9aueblxGz9aYsRLKvPmpow_0[1].kind = 1;
TM_ml9aueblxGz9aYsRLKvPmpow_0[1].offset = offsetof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw, kind);
TM_ml9aueblxGz9aYsRLKvPmpow_0[1].typ = (&NTI_jVcKY16LbOamXE9bxXUD6pQ_);
TM_ml9aueblxGz9aYsRLKvPmpow_0[1].name = "kind";
TM_ml9aueblxGz9aYsRLKvPmpow_2[1] = &TM_ml9aueblxGz9aYsRLKvPmpow_0[7];
TM_ml9aueblxGz9aYsRLKvPmpow_0[7].kind = 1;
TM_ml9aueblxGz9aYsRLKvPmpow_0[7].offset = offsetof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw, f);
TM_ml9aueblxGz9aYsRLKvPmpow_0[7].typ = (&NTI_7BHnQsEj49a9c6QtudqWTo1w_);
TM_ml9aueblxGz9aYsRLKvPmpow_0[7].name = "f";
TM_ml9aueblxGz9aYsRLKvPmpow_2[2] = &TM_ml9aueblxGz9aYsRLKvPmpow_0[8];
TM_ml9aueblxGz9aYsRLKvPmpow_0[8].kind = 1;
TM_ml9aueblxGz9aYsRLKvPmpow_0[8].offset = offsetof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw, s);
TM_ml9aueblxGz9aYsRLKvPmpow_0[8].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_ml9aueblxGz9aYsRLKvPmpow_0[8].name = "s";
TM_ml9aueblxGz9aYsRLKvPmpow_2[3] = &TM_ml9aueblxGz9aYsRLKvPmpow_0[9];
TM_ml9aueblxGz9aYsRLKvPmpow_0[9].kind = 1;
TM_ml9aueblxGz9aYsRLKvPmpow_0[9].offset = offsetof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw, rd);
TM_ml9aueblxGz9aYsRLKvPmpow_0[9].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_ml9aueblxGz9aYsRLKvPmpow_0[9].name = "rd";
TM_ml9aueblxGz9aYsRLKvPmpow_2[4] = &TM_ml9aueblxGz9aYsRLKvPmpow_0[10];
TM_ml9aueblxGz9aYsRLKvPmpow_0[10].kind = 1;
TM_ml9aueblxGz9aYsRLKvPmpow_0[10].offset = offsetof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw, wr);
TM_ml9aueblxGz9aYsRLKvPmpow_0[10].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_ml9aueblxGz9aYsRLKvPmpow_0[10].name = "wr";
TM_ml9aueblxGz9aYsRLKvPmpow_2[5] = &TM_ml9aueblxGz9aYsRLKvPmpow_0[11];
TM_ml9aueblxGz9aYsRLKvPmpow_0[11].kind = 1;
TM_ml9aueblxGz9aYsRLKvPmpow_0[11].offset = offsetof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw, lineOffset);
TM_ml9aueblxGz9aYsRLKvPmpow_0[11].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_ml9aueblxGz9aYsRLKvPmpow_0[11].name = "lineOffset";
TM_ml9aueblxGz9aYsRLKvPmpow_0[0].len = 6; TM_ml9aueblxGz9aYsRLKvPmpow_0[0].kind = 2; TM_ml9aueblxGz9aYsRLKvPmpow_0[0].sons = &TM_ml9aueblxGz9aYsRLKvPmpow_2[0];
NTI_IHsOGFu33dIY69a9bLlFHlHw_.node = &TM_ml9aueblxGz9aYsRLKvPmpow_0[0];
NTI_f4WZajr79aZLBPITqz2rcdA_.size = sizeof(TLLStream_IHsOGFu33dIY69a9bLlFHlHw*);
NTI_f4WZajr79aZLBPITqz2rcdA_.kind = 22;
NTI_f4WZajr79aZLBPITqz2rcdA_.base = (&NTI_IHsOGFu33dIY69a9bLlFHlHw_);
NTI_f4WZajr79aZLBPITqz2rcdA_.marker = Marker_TY_f4WZajr79aZLBPITqz2rcdA;
}

