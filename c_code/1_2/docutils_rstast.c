/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
#undef near
typedef struct RstNode_CjRS2xrmuD58kdGedE3yyg RstNode_CjRS2xrmuD58kdGedE3yyg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY_sawZST1Esj3o7EY9ayWwGPw TY_sawZST1Esj3o7EY9ayWwGPw;
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
typedef NU8 RstNodeKind_Q1jM9a8f0MKlvbLZpipB3qg;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  RstNode_CjRS2xrmuD58kdGedE3yyg  {
RstNodeKind_Q1jM9a8f0MKlvbLZpipB3qg kind;
NimStringDesc* text;
NI level;
TY_sawZST1Esj3o7EY9ayWwGPw* sons;
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
struct TY_sawZST1Esj3o7EY9ayWwGPw {
  TGenericSeq Sup;
  RstNode_CjRS2xrmuD58kdGedE3yyg* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_TY_sawZST1Esj3o7EY9ayWwGPw)(void* p, NI op);
static N_NIMCALL(void, Marker_TY_eiDrOE3AS6QEbCsY2gtdWQ)(void* p, NI op);
N_NIMCALL(RstNode_CjRS2xrmuD58kdGedE3yyg*, newRstNode_a0gNerhK9cSe5kzN5MHB6OQ)(RstNodeKind_Q1jM9a8f0MKlvbLZpipB3qg kind);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, add_ZvlV89auQrVc4pTJdjhNQiQ)(RstNode_CjRS2xrmuD58kdGedE3yyg* father, RstNode_CjRS2xrmuD58kdGedE3yyg* son);
TNimType NTI_CjRS2xrmuD58kdGedE3yyg_;
TNimType NTI_Q1jM9a8f0MKlvbLZpipB3qg_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_sawZST1Esj3o7EY9ayWwGPw_;
TNimType NTI_eiDrOE3AS6QEbCsY2gtdWQ_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
static N_NIMCALL(void, Marker_TY_sawZST1Esj3o7EY9ayWwGPw)(void* p, NI op) {
	TY_sawZST1Esj3o7EY9ayWwGPw* a;
	NI T1_;
	a = (TY_sawZST1Esj3o7EY9ayWwGPw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < a->Sup.len; T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
static N_NIMCALL(void, Marker_TY_eiDrOE3AS6QEbCsY2gtdWQ)(void* p, NI op) {
	RstNode_CjRS2xrmuD58kdGedE3yyg* a;
	a = (RstNode_CjRS2xrmuD58kdGedE3yyg*)p;
	nimGCvisit((void*)(*a).text, op);
	nimGCvisit((void*)(*a).sons, op);
}

N_NIMCALL(NI, len_7sZ6jl1AobLSRAIdrbIp6A)(RstNode_CjRS2xrmuD58kdGedE3yyg* n) {
	NI result;
	result = (NI)0;
	result = ((*n).sons ? (*n).sons->Sup.len : 0);
	return result;
}

N_NIMCALL(RstNode_CjRS2xrmuD58kdGedE3yyg*, lastSon_6THavcP7GUSgGy7kiweW4w)(RstNode_CjRS2xrmuD58kdGedE3yyg* n) {
	RstNode_CjRS2xrmuD58kdGedE3yyg* result;
	result = (RstNode_CjRS2xrmuD58kdGedE3yyg*)0;
	result = (*n).sons->data[(NI)(((*n).sons ? (*n).sons->Sup.len : 0) - ((NI) 1))];
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

N_NIMCALL(RstNode_CjRS2xrmuD58kdGedE3yyg*, newRstNode_a0gNerhK9cSe5kzN5MHB6OQ)(RstNodeKind_Q1jM9a8f0MKlvbLZpipB3qg kind) {
	RstNode_CjRS2xrmuD58kdGedE3yyg* result;
	result = (RstNode_CjRS2xrmuD58kdGedE3yyg*)0;
	result = (RstNode_CjRS2xrmuD58kdGedE3yyg*) newObj((&NTI_eiDrOE3AS6QEbCsY2gtdWQ_), sizeof(RstNode_CjRS2xrmuD58kdGedE3yyg));
	if ((*result).sons) nimGCunrefNoCycle((*result).sons);
	(*result).sons = (TY_sawZST1Esj3o7EY9ayWwGPw*) newSeqRC1((&NTI_sawZST1Esj3o7EY9ayWwGPw_), 0);
	(*result).kind = kind;
	return result;
}

N_NIMCALL(RstNode_CjRS2xrmuD58kdGedE3yyg*, newRstNode_5U9cRbUMTUnFZvEj9bgqsRSg)(RstNodeKind_Q1jM9a8f0MKlvbLZpipB3qg kind, NimStringDesc* s) {
	RstNode_CjRS2xrmuD58kdGedE3yyg* result;
	NimStringDesc* T1_;
	result = (RstNode_CjRS2xrmuD58kdGedE3yyg*)0;
	result = newRstNode_a0gNerhK9cSe5kzN5MHB6OQ(kind);
	T1_ = (NimStringDesc*)0;
	T1_ = (*result).text; (*result).text = copyStringRC1(s);
	if (T1_) nimGCunrefNoCycle(T1_);
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

N_NIMCALL(void, add_ZvlV89auQrVc4pTJdjhNQiQ)(RstNode_CjRS2xrmuD58kdGedE3yyg* father, RstNode_CjRS2xrmuD58kdGedE3yyg* son) {
	(*father).sons = (TY_sawZST1Esj3o7EY9ayWwGPw*) incrSeqV2(&((*father).sons)->Sup, sizeof(RstNode_CjRS2xrmuD58kdGedE3yyg*));
	asgnRefNoCycle((void**) (&(*father).sons->data[(*father).sons->Sup.len]), son);
	++(*father).sons->Sup.len;
}

N_NIMCALL(void, addIfNotNil_ZvlV89auQrVc4pTJdjhNQiQ_2)(RstNode_CjRS2xrmuD58kdGedE3yyg* father, RstNode_CjRS2xrmuD58kdGedE3yyg* son) {
	{
		if (!!((son == NIM_NIL))) goto LA3_;
		add_ZvlV89auQrVc4pTJdjhNQiQ(father, son);
	}
	LA3_: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit000)(void) {
static TNimNode* TM_MI3pYf9cgAsIrjZXIlQqHnQ_2[4];
static TNimNode* TM_MI3pYf9cgAsIrjZXIlQqHnQ_3[65];
NI TM_MI3pYf9cgAsIrjZXIlQqHnQ_5;
static char* NIM_CONST TM_MI3pYf9cgAsIrjZXIlQqHnQ_4[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[71];
NTI_CjRS2xrmuD58kdGedE3yyg_.size = sizeof(RstNode_CjRS2xrmuD58kdGedE3yyg);
NTI_CjRS2xrmuD58kdGedE3yyg_.kind = 18;
NTI_CjRS2xrmuD58kdGedE3yyg_.base = 0;
NTI_CjRS2xrmuD58kdGedE3yyg_.flags = 2;
TM_MI3pYf9cgAsIrjZXIlQqHnQ_2[0] = &TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[1];
NTI_Q1jM9a8f0MKlvbLZpipB3qg_.size = sizeof(RstNodeKind_Q1jM9a8f0MKlvbLZpipB3qg);
NTI_Q1jM9a8f0MKlvbLZpipB3qg_.kind = 14;
NTI_Q1jM9a8f0MKlvbLZpipB3qg_.base = 0;
NTI_Q1jM9a8f0MKlvbLZpipB3qg_.flags = 3;
for (TM_MI3pYf9cgAsIrjZXIlQqHnQ_5 = 0; TM_MI3pYf9cgAsIrjZXIlQqHnQ_5 < 65; TM_MI3pYf9cgAsIrjZXIlQqHnQ_5++) {
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[TM_MI3pYf9cgAsIrjZXIlQqHnQ_5+2].kind = 1;
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[TM_MI3pYf9cgAsIrjZXIlQqHnQ_5+2].offset = TM_MI3pYf9cgAsIrjZXIlQqHnQ_5;
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[TM_MI3pYf9cgAsIrjZXIlQqHnQ_5+2].name = TM_MI3pYf9cgAsIrjZXIlQqHnQ_4[TM_MI3pYf9cgAsIrjZXIlQqHnQ_5];
TM_MI3pYf9cgAsIrjZXIlQqHnQ_3[TM_MI3pYf9cgAsIrjZXIlQqHnQ_5] = &TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[TM_MI3pYf9cgAsIrjZXIlQqHnQ_5+2];
}
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[67].len = 65; TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[67].kind = 2; TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[67].sons = &TM_MI3pYf9cgAsIrjZXIlQqHnQ_3[0];
NTI_Q1jM9a8f0MKlvbLZpipB3qg_.node = &TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[67];
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[1].kind = 1;
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[1].offset = offsetof(RstNode_CjRS2xrmuD58kdGedE3yyg, kind);
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[1].typ = (&NTI_Q1jM9a8f0MKlvbLZpipB3qg_);
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[1].name = "kind";
TM_MI3pYf9cgAsIrjZXIlQqHnQ_2[1] = &TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[68];
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[68].kind = 1;
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[68].offset = offsetof(RstNode_CjRS2xrmuD58kdGedE3yyg, text);
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[68].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[68].name = "text";
TM_MI3pYf9cgAsIrjZXIlQqHnQ_2[2] = &TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[69];
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[69].kind = 1;
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[69].offset = offsetof(RstNode_CjRS2xrmuD58kdGedE3yyg, level);
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[69].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[69].name = "level";
TM_MI3pYf9cgAsIrjZXIlQqHnQ_2[3] = &TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[70];
NTI_sawZST1Esj3o7EY9ayWwGPw_.size = sizeof(TY_sawZST1Esj3o7EY9ayWwGPw*);
NTI_sawZST1Esj3o7EY9ayWwGPw_.kind = 24;
NTI_sawZST1Esj3o7EY9ayWwGPw_.base = (&NTI_eiDrOE3AS6QEbCsY2gtdWQ_);
NTI_sawZST1Esj3o7EY9ayWwGPw_.flags = 2;
NTI_sawZST1Esj3o7EY9ayWwGPw_.marker = Marker_TY_sawZST1Esj3o7EY9ayWwGPw;
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[70].kind = 1;
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[70].offset = offsetof(RstNode_CjRS2xrmuD58kdGedE3yyg, sons);
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[70].typ = (&NTI_sawZST1Esj3o7EY9ayWwGPw_);
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[70].name = "sons";
TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[0].len = 4; TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[0].kind = 2; TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[0].sons = &TM_MI3pYf9cgAsIrjZXIlQqHnQ_2[0];
NTI_CjRS2xrmuD58kdGedE3yyg_.node = &TM_MI3pYf9cgAsIrjZXIlQqHnQ_0[0];
NTI_eiDrOE3AS6QEbCsY2gtdWQ_.size = sizeof(RstNode_CjRS2xrmuD58kdGedE3yyg*);
NTI_eiDrOE3AS6QEbCsY2gtdWQ_.kind = 22;
NTI_eiDrOE3AS6QEbCsY2gtdWQ_.base = (&NTI_CjRS2xrmuD58kdGedE3yyg_);
NTI_eiDrOE3AS6QEbCsY2gtdWQ_.flags = 2;
NTI_eiDrOE3AS6QEbCsY2gtdWQ_.marker = Marker_TY_eiDrOE3AS6QEbCsY2gtdWQ;
}

