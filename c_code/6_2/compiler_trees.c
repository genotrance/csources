/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct TNode_bROa11lyF5vxEN9aYNbHmhw TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct TType_LTUWCZolpovw9cWE3JBWSUw TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TSym_AXG7xcvKqaxY6koRX1xkCw TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct TIdent_4umxGerWTHGPwUms7Yqu3g TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ TY_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct TIdObj_raN9cHVgzmvaXisezY9aGg9cg TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct TStrTable_f07aOS3dr28kGa5wcE29aFA TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct TLoc_EtHNvCB0bgfu9bFjzx9cb6aA TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct RopeObj_HF4qJnb6xiOddgPmsxodtQ RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct TLib_NBMxlJ6g3utqUlplqTTHkA TLib_NBMxlJ6g3utqUlplqTTHkA;
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
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
struct  TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw  {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU16 TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg_Set;
typedef NU8 TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNode_bROa11lyF5vxEN9aYNbHmhw  {
TType_LTUWCZolpovw9cWE3JBWSUw* typ;
TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg_Set flags;
TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} S1;
struct {NF floatVal;
} S2;
struct {NimStringDesc* strVal;
} S3;
struct {TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
} S4;
struct {TIdent_4umxGerWTHGPwUms7Yqu3g* ident;
} S5;
struct {TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
struct  TIdObj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
};
typedef NU8 TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct  TStrTable_f07aOS3dr28kGa5wcE29aFA  {
NI counter;
TY_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw_Set;
typedef NU32 TOption_WspMeQySXNP2XoTWR5MTgg_Set;
typedef NU8 TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 TLocFlag_o2bqJgR4ceIupnUSpxiudA_Set;
struct  TLoc_EtHNvCB0bgfu9bFjzx9cb6aA  {
TLocKind_O7PRFZKuiBBWbku09cayVBg k;
TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw s;
TLocFlag_o2bqJgR4ceIupnUSpxiudA_Set flags;
TType_LTUWCZolpovw9cWE3JBWSUw* t;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* r;
};
struct  TSym_AXG7xcvKqaxY6koRX1xkCw  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {TY_zuqP4Riz26Oi5fWgPYVEgA* typeInstCache;
} S1;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
TSym_AXG7xcvKqaxY6koRX1xkCw* gcUnsafetyReason;
} S2;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {TSym_AXG7xcvKqaxY6koRX1xkCw* guard;
NI bitsize;
} S4;
} kindU;
TMagic_shZhZOdbVC5nnFvcXQAImg magic;
TType_LTUWCZolpovw9cWE3JBWSUw* typ;
TIdent_4umxGerWTHGPwUms7Yqu3g* name;
TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw_Set flags;
TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
TOption_WspMeQySXNP2XoTWR5MTgg_Set options;
NI position;
NI offset;
TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
struct  TIdent_4umxGerWTHGPwUms7Yqu3g  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
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
typedef NU16 TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw;
typedef NU64 TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag_Set;
typedef NU8 TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw_Set;
struct  TType_LTUWCZolpovw9cWE3JBWSUw  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind;
TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA callConv;
TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw_Set flags;
TY_zuqP4Riz26Oi5fWgPYVEgA* sons;
TNode_bROa11lyF5vxEN9aYNbHmhw* n;
TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
TSym_AXG7xcvKqaxY6koRX1xkCw* destructor;
TSym_AXG7xcvKqaxY6koRX1xkCw* deepCopy;
TSym_AXG7xcvKqaxY6koRX1xkCw* assignment;
TY_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
TType_LTUWCZolpovw9cWE3JBWSUw* typeInst;
};
typedef NU8 TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
struct  RopeObj_HF4qJnb6xiOddgPmsxodtQ  {
  TNimObject Sup;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* left;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
};
typedef NU8 TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ;
struct  TLib_NBMxlJ6g3utqUlplqTTHkA  {
TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ kind;
NIM_BOOL generated;
NIM_BOOL isOverriden;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* name;
TNode_bROa11lyF5vxEN9aYNbHmhw* path;
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
struct TY_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA  {
TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
TY_zuqP4Riz26Oi5fWgPYVEgA* concreteTypes;
NI compilesId;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct TY_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  TType_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct TY_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct TY_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NIM_BOOL, exprStructuralEquivalent_XApnXRaD9btY9a4pkMO0ITTg)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b, NIM_BOOL strictSymEquality);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NIM_BOOL, cyclicTreeAux_fJtdv7gqXOKIakDjzod6NA)(TNode_bROa11lyF5vxEN9aYNbHmhw* n, TY_ehmV9bTklH2Gt9cXHV9c0HLeQ** visited);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(TNode_bROa11lyF5vxEN9aYNbHmhw*, pop_d29cpXTitwhGntYusVkzaCgtrees)(TY_ehmV9bTklH2Gt9cXHV9c0HLeQ** s);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen);
N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w)(TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_NIMCALL(void, unnestStmts_9c5lwXyiq4AUtthHD0LdCvQ)(TNode_bROa11lyF5vxEN9aYNbHmhw* n, TNode_bROa11lyF5vxEN9aYNbHmhw* result);
static N_INLINE(NI, safeLen_CdME9baJhvveuPEDZE9bXoxArenderer)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(void, add_gCCf68XrWL79bKes6htzFjQ_3)(TNode_bROa11lyF5vxEN9aYNbHmhw* father, TNode_bROa11lyF5vxEN9aYNbHmhw* son);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw, whichKeyword_WhYAAh6vF1PoyH6Hsspu4Q)(TIdent_4umxGerWTHGPwUms7Yqu3g* id);
N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, newNodeI_jIQp9ciM8if1a6TX6toZelw)(TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, NI children);
N_NIMCALL(NIM_BOOL, isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(TType_LTUWCZolpovw9cWE3JBWSUw*, skipTypes_pLCdCGDuirMe9cspwviV9aVA)(TType_LTUWCZolpovw9cWE3JBWSUw* t, TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag_Set kinds);
N_NIMCALL(NIM_BOOL, isCaseObj_FTbvAnf1y9b9c3Krp9bsHDTiw_3)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
extern TNimType NTI_ehmV9bTklH2Gt9cXHV9c0HLeQ_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size) {
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
	T11_ = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, exprStructuralEquivalent_XApnXRaD9btY9a4pkMO0ITTg)(TNode_bROa11lyF5vxEN9aYNbHmhw* a, TNode_bROa11lyF5vxEN9aYNbHmhw* b, NIM_BOOL strictSymEquality) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		NIM_BOOL T7_;
		T6_ = (NIM_BOOL)0;
		T7_ = (NIM_BOOL)0;
		T7_ = !((a == NIM_NIL));
		if (!(T7_)) goto LA8_;
		T7_ = !((b == NIM_NIL));
		LA8_: ;
		T6_ = T7_;
		if (!(T6_)) goto LA9_;
		T6_ = ((*a).kind == (*b).kind);
		LA9_: ;
		if (!T6_) goto LA10_;
		switch ((*a).kind) {
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			{
				if (!strictSymEquality) goto LA15_;
				result = ((*a).kindU.S4.sym == (*b).kindU.S4.sym);
			}
			goto LA13_;
			LA15_: ;
			{
				result = ((*(*(*a).kindU.S4.sym).name).Sup.id == (*(*(*b).kindU.S4.sym).name).Sup.id);
			}
			LA13_: ;
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2):
		{
			result = ((*(*a).kindU.S5.ident).Sup.id == (*(*b).kindU.S5.ident).Sup.id);
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 15):
		{
			result = ((*a).kindU.S1.intVal == (*b).kindU.S1.intVal);
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 18):
		{
			result = ((*a).kindU.S2.floatVal == (*b).kindU.S2.floatVal);
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
		{
			result = eqStrings((*a).kindU.S3.strVal, (*b).kindU.S3.strVal);
		}
		break;
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 4):
		{
			result = NIM_TRUE;
		}
		break;
		default:
		{
			{
				NI T26_;
				NI T27_;
				T26_ = (NI)0;
				T26_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(a);
				T27_ = (NI)0;
				T27_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(b);
				if (!(T26_ == T27_)) goto LA28_;
				{
					NI i;
					NI colontmp_;
					NI T31_;
					NI res;
					i = (NI)0;
					colontmp_ = (NI)0;
					T31_ = (NI)0;
					T31_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(a);
					colontmp_ = (NI)(T31_ - ((NI) 1));
					res = ((NI) 0);
					{
						while (1) {
							if (!(res <= colontmp_)) goto LA33;
							i = res;
							{
								NIM_BOOL T36_;
								T36_ = (NIM_BOOL)0;
								T36_ = exprStructuralEquivalent_XApnXRaD9btY9a4pkMO0ITTg((*a).kindU.S6.sons->data[i], (*b).kindU.S6.sons->data[i], strictSymEquality);
								if (!!(T36_)) goto LA37_;
								goto BeforeRet_;
							}
							LA37_: ;
							res += ((NI) 1);
						} LA33: ;
					}
				}
				result = NIM_TRUE;
			}
			LA28_: ;
		}
		break;
		}
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(TMagic_shZhZOdbVC5nnFvcXQAImg, getMagic_gSv3iFkSzJc9bXZaNBHR9bQA)(TNode_bROa11lyF5vxEN9aYNbHmhw* op) {
	TMagic_shZhZOdbVC5nnFvcXQAImg result;
	result = (TMagic_shZhZOdbVC5nnFvcXQAImg)0;
	switch ((*op).kind) {
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 27):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 29):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 30):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 31):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 26):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 28):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 32):
	{
		switch ((*(*op).kindU.S6.sons->data[((NI) 0)]).kind) {
		case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			result = (*(*(*op).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).magic;
		}
		break;
		default:
		{
			result = ((TMagic_shZhZOdbVC5nnFvcXQAImg) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result = ((TMagic_shZhZOdbVC5nnFvcXQAImg) 0);
	}
	break;
	}
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

static N_INLINE(TNode_bROa11lyF5vxEN9aYNbHmhw*, pop_d29cpXTitwhGntYusVkzaCgtrees)(TY_ehmV9bTklH2Gt9cXHV9c0HLeQ** s) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	NI L;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	L = (NI)(((*s) ? (*s)->Sup.len : 0) - ((NI) 1));
	result = (*s)->data[L];
	(*s) = (TY_ehmV9bTklH2Gt9cXHV9c0HLeQ*) setLengthSeq(&((*s))->Sup, sizeof(TNode_bROa11lyF5vxEN9aYNbHmhw*), ((NI) (L)));
	return result;
}

N_NIMCALL(NIM_BOOL, cyclicTreeAux_fJtdv7gqXOKIakDjzod6NA)(TNode_bROa11lyF5vxEN9aYNbHmhw* n, TY_ehmV9bTklH2Gt9cXHV9c0HLeQ** visited) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!(n == NIM_NIL)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		TNode_bROa11lyF5vxEN9aYNbHmhw* v;
		TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* colontmp_;
		NI i;
		NI L;
		v = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
		colontmp_ = (TY_ehmV9bTklH2Gt9cXHV9c0HLeQ*)0;
		colontmp_ = (*visited);
		i = ((NI) 0);
		L = (colontmp_ ? colontmp_->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA7;
				v = colontmp_->data[i];
				{
					if (!(v == n)) goto LA10_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA10_: ;
				i += ((NI) 1);
			} LA7: ;
		}
	}
	{
		TNode_bROa11lyF5vxEN9aYNbHmhw* T24_;
		if (!!(((*n).kind >= ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1) && (*n).kind <= ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23)))) goto LA14_;
		(*visited) = (TY_ehmV9bTklH2Gt9cXHV9c0HLeQ*) incrSeqV2(&((*visited))->Sup, sizeof(TNode_bROa11lyF5vxEN9aYNbHmhw*));
		asgnRefNoCycle((void**) (&(*visited)->data[(*visited)->Sup.len]), n);
		++(*visited)->Sup.len;
		{
			TNode_bROa11lyF5vxEN9aYNbHmhw* nSon;
			TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* colontmp__2;
			NI i_2;
			NI L_2;
			nSon = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
			colontmp__2 = (TY_ehmV9bTklH2Gt9cXHV9c0HLeQ*)0;
			colontmp__2 = (*n).kindU.S6.sons;
			i_2 = ((NI) 0);
			L_2 = (colontmp__2 ? colontmp__2->Sup.len : 0);
			{
				while (1) {
					if (!(i_2 < L_2)) goto LA18;
					nSon = colontmp__2->data[i_2];
					{
						NIM_BOOL T21_;
						T21_ = (NIM_BOOL)0;
						T21_ = cyclicTreeAux_fJtdv7gqXOKIakDjzod6NA(nSon, visited);
						if (!T21_) goto LA22_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA22_: ;
					i_2 += ((NI) 1);
				} LA18: ;
			}
		}
		T24_ = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
		T24_ = pop_d29cpXTitwhGntYusVkzaCgtrees(visited);
	}
	LA14_: ;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclicTree_FTbvAnf1y9b9c3Krp9bsHDTiw)(TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NIM_BOOL result;
	TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* visited;
	result = (NIM_BOOL)0;
	visited = (TY_ehmV9bTklH2Gt9cXHV9c0HLeQ*) newSeq((&NTI_ehmV9bTklH2Gt9cXHV9c0HLeQ_), 0);
	result = cyclicTreeAux_fJtdv7gqXOKIakDjzod6NA(n, (&visited));
	return result;
}

static N_INLINE(NI, safeLen_CdME9baJhvveuPEDZE9bXoxArenderer)(TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((*n).kind >= ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 0) && (*n).kind <= ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23));
		if (T3_) goto LA4_;
		T3_ = ((*n).kindU.S6.sons == 0);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1_: ;
	return result;
}

N_NIMCALL(void, unnestStmts_9c5lwXyiq4AUtthHD0LdCvQ)(TNode_bROa11lyF5vxEN9aYNbHmhw* n, TNode_bROa11lyF5vxEN9aYNbHmhw* result) {
	{
		if (!((*n).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 115))) goto LA3_;
		{
			TNode_bROa11lyF5vxEN9aYNbHmhw* x;
			x = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
			{
				NI i;
				NI colontmp_;
				NI T7_;
				NI res;
				i = (NI)0;
				colontmp_ = (NI)0;
				T7_ = (NI)0;
				T7_ = safeLen_CdME9baJhvveuPEDZE9bXoxArenderer(n);
				colontmp_ = (T7_ - 1);
				res = ((NI) 0);
				{
					while (1) {
						if (!(res <= colontmp_)) goto LA9;
						i = res;
						x = (*n).kindU.S6.sons->data[i];
						unnestStmts_9c5lwXyiq4AUtthHD0LdCvQ(x, result);
						res += ((NI) 1);
					} LA9: ;
				}
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		if (!!(((*n).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 125) || (*n).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23)))) goto LA11_;
		add_gCCf68XrWL79bKes6htzFjQ_3(result, n);
	}
	goto LA1_;
	LA11_: ;
	LA1_: ;
}

static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	result = (NI)0;
	{
		if (!((*n).kindU.S6.sons == 0)) goto LA3_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1_: ;
	return result;
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, flattenStmts_kDuk7Mp6Hb4CD2EwZbGQ3g)(TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w(((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 115), (*n).info);
	unnestStmts_9c5lwXyiq4AUtthHD0LdCvQ(n, result);
	{
		NI T3_;
		T3_ = (NI)0;
		T3_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(result);
		if (!(T3_ == ((NI) 1))) goto LA4_;
		result = (*result).kindU.S6.sons->data[((NI) 0)];
	}
	LA4_: ;
	return result;
}

N_NIMCALL(TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw, whichPragma_tadMdqrtQd2cek9aFwyE1XQ)(TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw result;
	TNode_bROa11lyF5vxEN9aYNbHmhw* key;
	result = (TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw)0;
	{
		if (!((*n).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 34))) goto LA3_;
		key = (*n).kindU.S6.sons->data[((NI) 0)];
	}
	goto LA1_;
	LA3_: ;
	{
		key = n;
	}
	LA1_: ;
	{
		if (!((*key).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2))) goto LA8_;
		result = whichKeyword_WhYAAh6vF1PoyH6Hsspu4Q((*key).kindU.S5.ident);
	}
	LA8_: ;
	return result;
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, extractRange_hXdHXhYIaWyizlIOoxd1YA)(TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw k, TNode_bROa11lyF5vxEN9aYNbHmhw* n, NI a, NI b) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = newNodeI_jIQp9ciM8if1a6TX6toZelw(k, (*n).info, (NI)((NI)(b - a) + ((NI) 1)));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(b - a);
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.sons->data[i]), (*n).kindU.S6.sons->data[(NI)(i + a)]);
				res += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, isCaseObj_FTbvAnf1y9b9c3Krp9bsHDTiw_3)(TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!((*n).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 139))) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = safeLen_CdME9baJhvveuPEDZE9bXoxArenderer(n);
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < colontmp_)) goto LA7;
				i = i_2;
				{
					NIM_BOOL T10_;
					T10_ = (NIM_BOOL)0;
					T10_ = isCaseObj_FTbvAnf1y9b9c3Krp9bsHDTiw_3((*n).kindU.S6.sons->data[i]);
					if (!T10_) goto LA11_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA11_: ;
				i_2 += ((NI) 1);
			} LA7: ;
		}
	}
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2)(TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	switch ((*n).kind) {
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 10):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 18):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
	{
		result = NIM_TRUE;
	}
	break;
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 33):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 34):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 58):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 59):
	{
		result = isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*n).kindU.S6.sons->data[((NI) 1)]);
	}
	break;
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 39):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 41):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 37):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 38):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 155):
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44):
	{
		{
			NI i;
			NI colontmp_;
			NI colontmp__2;
			NI T5_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp__2 = (NI)0;
			colontmp_ = ((*n).kind == ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 38));
			T5_ = (NI)0;
			T5_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			colontmp__2 = (T5_ - 1);
			res = ((NI) (colontmp_));
			{
				while (1) {
					if (!(res <= colontmp__2)) goto LA7;
					i = res;
					{
						NIM_BOOL T10_;
						T10_ = (NIM_BOOL)0;
						T10_ = isDeepConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*n).kindU.S6.sons->data[i]);
						if (!!(T10_)) goto LA11_;
						result = NIM_FALSE;
						goto BeforeRet_;
					}
					LA11_: ;
					res += ((NI) 1);
				} LA7: ;
			}
		}
		{
			if (!((*n).typ == 0)) goto LA15_;
			result = NIM_TRUE;
		}
		goto LA13_;
		LA15_: ;
		{
			TType_LTUWCZolpovw9cWE3JBWSUw* t;
			t = skipTypes_pLCdCGDuirMe9cspwviV9aVA((*n).typ, 10256);
			{
				if (!((6291456 &((NU64)1<<((NU)((*t).kind)&63U)))!=0)) goto LA20_;
				result = NIM_FALSE;
				goto BeforeRet_;
			}
			LA20_: ;
			{
				NIM_BOOL T24_;
				NIM_BOOL T26_;
				T24_ = (NIM_BOOL)0;
				T24_ = !(((*t).kind == ((TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 17)));
				if (T24_) goto LA25_;
				T26_ = (NIM_BOOL)0;
				T26_ = isCaseObj_FTbvAnf1y9b9c3Krp9bsHDTiw_3((*t).n);
				T24_ = !(T26_);
				LA25_: ;
				if (!T24_) goto LA27_;
				result = NIM_TRUE;
			}
			LA27_: ;
		}
		LA13_: ;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isConstExpr_FTbvAnf1y9b9c3Krp9bsHDTiw_4)(TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((*n).kind >= ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5) && (*n).kind <= ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23));
	if (T1_) goto LA2_;
	T1_ = (((*n).flags &(1U<<((NU)(((TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg) 4))&15U)))!=0);
	LA2_: ;
	result = T1_;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit000)(void) {
}

