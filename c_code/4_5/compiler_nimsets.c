/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
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
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw tyObject_TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tySequence_pxbIse2JUQkJU0n9blV9bY5g tySequence_pxbIse2JUQkJU0n9blV9bY5g;
typedef struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_zuqP4Riz26Oi5fWgPYVEgA tySequence_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct tySequence_iGkpo9aKQdr3NWelKC4cnJA tySequence_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ;
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
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_sksVpmPRIkNR9axiwtD1Guw tySequence_sksVpmPRIkNR9axiwtD1Guw;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg tyTuple_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw {
NI16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ;
tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
} S1;
struct {NF floatVal;
} S2;
struct {NimStringDesc* strVal;
} S3;
struct {tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
} S4;
struct {tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* ident;
} S5;
struct {tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg {
  RootObj Sup;
NI id;
};
typedef NU8 tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* r;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* dup;
};
struct tyObject_TType_LTUWCZolpovw9cWE3JBWSUw {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence_zuqP4Riz26Oi5fWgPYVEgA* sons;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* destructor;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* deepCopy;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* assignment;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sink;
tySequence_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typeInst;
};
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
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
struct tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence_zuqP4Riz26Oi5fWgPYVEgA* typeInstCache;
} S1;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* gcUnsafetyReason;
} S2;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* guard;
NI bitsize;
} S4;
} kindU;
tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* name;
tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* owner;
tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
struct tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g {
  tyObject_TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
tyObject_TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
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
struct tyTuple_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ {
  RootObj Sup;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* left;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
};
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
typedef NU8 tyEnum_TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ;
struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA {
tyEnum_TLibKind_9b8v60kso59bBaw9cp8B9a9apKQ kind;
NIM_BOOL generated;
NIM_BOOL isOverriden;
tyObject_RopeObj_HF4qJnb6xiOddgPmsxodtQ* name;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* path;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA {
tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
tySequence_zuqP4Riz26Oi5fWgPYVEgA* concreteTypes;
NI compilesId;
};
struct tySequence_pxbIse2JUQkJU0n9blV9bY5g {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct tySequence_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  tyTuple_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  tyObject_TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, internalError_MXmtqrCmYwtOPkDCFgUWKQ)(tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, NimStringDesc* errMsg);
N_LIB_PRIVATE N_NIMCALL(NI, sonsLen_qPWPHw7WgJeEVYUdcaRIig)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, leValue_1Qdwg1ZguEjbL3mmgPJD3w_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, sameValue_1Qdwg1ZguEjbL3mmgPJD3w)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b);
N_LIB_PRIVATE N_NIMCALL(void, toBitSet_Bgj7mr9bCmLIhOzddHDtD0A)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* s, tySequence_pxbIse2JUQkJU0n9blV9bY5g** b);
N_LIB_PRIVATE N_NIMCALL(NI64, firstOrd_HUiBYxvKiECXCv8BzQNheg)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* t);
N_LIB_PRIVATE N_NIMCALL(void, bitSetInit_9bKA1DbmAErHy3uIMkQY9bUQ)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** b, NI length);
N_LIB_PRIVATE N_NIMCALL(NI64, getSize_spMpEAO8ubfQavMigOxQdA)(tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ);
N_LIB_PRIVATE N_NIMCALL(NI64, getOrdValue_MzTDl1zEXJLD4sql7PhCwA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(void, bitSetIncl_tznoRhsCn6M9csUzVp17S1w)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** x, NI64 elem);
N_LIB_PRIVATE N_NIMCALL(void, bitSetDiff_zN8mfRIlfkwl4UeelbWZPg)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, toTreeSet_T7faK845phyHxY50P3qxIQ)(tySequence_pxbIse2JUQkJU0n9blV9bY5g* s, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* settype, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetIn_Z5HI0xhB5Wx2mWRfrJc2NQ)(tySequence_pxbIse2JUQkJU0n9blV9bY5g* x, NI64 e);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newIntTypeNode_v0NY9cuqixP6ToMm9avHw5ig)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, NI64 intVal, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* typ);
N_LIB_PRIVATE N_NIMCALL(void, addSon_gCCf68XrWL79bKes6htzFjQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* father, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* son);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetContains_gqMsWrr3fORAvmtdSaP4rA)(tySequence_pxbIse2JUQkJU0n9blV9bY5g* x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetEquals_gqMsWrr3fORAvmtdSaP4rA_2)(tySequence_pxbIse2JUQkJU0n9blV9bY5g* x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y);
N_LIB_PRIVATE N_NIMCALL(void, bitSetIntersect_zN8mfRIlfkwl4UeelbWZPg_2)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y);
N_LIB_PRIVATE N_NIMCALL(void, bitSetUnion_zN8mfRIlfkwl4UeelbWZPg_3)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y);
N_LIB_PRIVATE N_NIMCALL(void, bitSetSymDiff_zN8mfRIlfkwl4UeelbWZPg_4)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y);
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_RCpa9aHGGIKsR9cKRKvszwow_2, "inSet", 5);

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, inSet_b4nxsJCvqXRlyalSWskgNA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* s, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* elem) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!!(((*s).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 39)))) goto LA3_;
		internalError_MXmtqrCmYwtOPkDCFgUWKQ((*s).info, ((NimStringDesc*) &TM_RCpa9aHGGIKsR9cKRKvszwow_2));
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI T6_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T6_ = (NI)0;
		T6_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(s);
		colontmp_ = (NI)(T6_ - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA8;
				i = res;
				{
					if (!((*(*s).kindU.S6.sons->data[i]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA11_;
					{
						NIM_BOOL T15_;
						T15_ = (NIM_BOOL)0;
						T15_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2((*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 0)], elem);
						if (!(T15_)) goto LA16_;
						T15_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2(elem, (*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 1)]);
						LA16_: ;
						if (!T15_) goto LA17_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA17_: ;
				}
				goto LA9_;
				LA11_: ;
				{
					{
						NIM_BOOL T22_;
						T22_ = (NIM_BOOL)0;
						T22_ = sameValue_1Qdwg1ZguEjbL3mmgPJD3w((*s).kindU.S6.sons->data[i], elem);
						if (!T22_) goto LA23_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA23_: ;
				}
				LA9_: ;
				res += ((NI) 1);
			} LA8: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, toBitSet_Bgj7mr9bCmLIhOzddHDtD0A)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* s, tySequence_pxbIse2JUQkJU0n9blV9bY5g** b) {
	NI64 first;
	NI64 j;
	NI64 T1_;
	first = (NI64)0;
	j = (NI64)0;
	first = firstOrd_HUiBYxvKiECXCv8BzQNheg((*(*s).typ).sons->data[((NI) 0)]);
	T1_ = (NI64)0;
	T1_ = getSize_spMpEAO8ubfQavMigOxQdA((*s).typ);
	bitSetInit_9bKA1DbmAErHy3uIMkQY9bUQ(b, ((NI) (T1_)));
	{
		NI i;
		NI colontmp_;
		NI T3_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T3_ = (NI)0;
		T3_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(s);
		colontmp_ = (NI)(T3_ - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA5;
				i = res;
				{
					if (!((*(*s).kindU.S6.sons->data[i]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA8_;
					j = getOrdValue_MzTDl1zEXJLD4sql7PhCwA((*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 0)]);
					{
						while (1) {
							NI64 T12_;
							T12_ = (NI64)0;
							T12_ = getOrdValue_MzTDl1zEXJLD4sql7PhCwA((*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 1)]);
							if (!(j <= T12_)) goto LA11;
							bitSetIncl_tznoRhsCn6M9csUzVp17S1w(b, (NI64)(j - first));
							j += ((NI) 1);
						} LA11: ;
					}
				}
				goto LA6_;
				LA8_: ;
				{
					NI64 T14_;
					T14_ = (NI64)0;
					T14_ = getOrdValue_MzTDl1zEXJLD4sql7PhCwA((*s).kindU.S6.sons->data[i]);
					bitSetIncl_tznoRhsCn6M9csUzVp17S1w(b, (NI64)(T14_ - first));
				}
				LA6_: ;
				res += ((NI) 1);
			} LA5: ;
		}
	}
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

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU32)((*c_2).refcount) < (NU32)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, toTreeSet_T7faK845phyHxY50P3qxIQ)(tySequence_pxbIse2JUQkJU0n9blV9bY5g* s, tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* settype, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	tyObject_TType_LTUWCZolpovw9cWE3JBWSUw* elemType;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	a = (NI64)0;
	b = (NI64)0;
	e = (NI64)0;
	first = (NI64)0;
	elemType = (tyObject_TType_LTUWCZolpovw9cWE3JBWSUw*)0;
	n = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	elemType = (*settype).sons->data[((NI) 0)];
	first = firstOrd_HUiBYxvKiECXCv8BzQNheg(elemType);
	result = newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 39), info);
	asgnRefNoCycle((void**) (&(*result).typ), settype);
	(*result).info = info;
	e = IL64(0);
	{
		while (1) {
			NI T3_;
			T3_ = (s ? s->Sup.len : 0);
			if (!(e < ((NI64) ((NI)(T3_ * ((NI) 8)))))) goto LA2;
			{
				NIM_BOOL T6_;
				tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* aa;
				T6_ = (NIM_BOOL)0;
				T6_ = bitSetIn_Z5HI0xhB5Wx2mWRfrJc2NQ(s, e);
				if (!T6_) goto LA7_;
				a = e;
				b = e;
				{
					while (1) {
						b += ((NI) 1);
						{
							NIM_BOOL T13_;
							NI T14_;
							NIM_BOOL T16_;
							T13_ = (NIM_BOOL)0;
							T14_ = (s ? s->Sup.len : 0);
							T13_ = (((NI64) ((NI)(T14_ * ((NI) 8)))) <= b);
							if (T13_) goto LA15_;
							T16_ = (NIM_BOOL)0;
							T16_ = bitSetIn_Z5HI0xhB5Wx2mWRfrJc2NQ(s, b);
							T13_ = !(T16_);
							LA15_: ;
							if (!T13_) goto LA17_;
							goto LA9;
						}
						LA17_: ;
					}
				} LA9: ;
				b -= ((NI) 1);
				aa = newIntTypeNode_v0NY9cuqixP6ToMm9avHw5ig(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 6), (NI64)(a + first), elemType);
				(*aa).info = info;
				{
					if (!(a == b)) goto LA21_;
					addSon_gCCf68XrWL79bKes6htzFjQ(result, aa);
				}
				goto LA19_;
				LA21_: ;
				{
					tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* bb;
					n = newNodeI_PIqgSH9b0m7nFpOyXf9cpz5w(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44), info);
					asgnRefNoCycle((void**) (&(*n).typ), elemType);
					addSon_gCCf68XrWL79bKes6htzFjQ(n, aa);
					bb = newIntTypeNode_v0NY9cuqixP6ToMm9avHw5ig(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 6), (NI64)(b + first), elemType);
					(*bb).info = info;
					addSon_gCCf68XrWL79bKes6htzFjQ(n, bb);
					addSon_gCCf68XrWL79bKes6htzFjQ(result, n);
				}
				LA19_: ;
				e = b;
			}
			LA7_: ;
			e += ((NI) 1);
		} LA2: ;
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, diffSets_E71eQfYz9b4v2qiZfNF2cdw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* x;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	bitSetDiff_zN8mfRIlfkwl4UeelbWZPg((&x), y);
	result = toTreeSet_T7faK845phyHxY50P3qxIQ(x, (*a).typ, (*a).info);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, cardSet_q9cOPX0ih7rvjzlPoLISJTQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* s) {
	NI64 result;
	result = (NI64)0;
	result = IL64(0);
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = (NI)0;
		T2_ = sonsLen_qPWPHw7WgJeEVYUdcaRIig(s);
		colontmp_ = (NI)(T2_ - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				{
					NI64 T9_;
					NI64 T10_;
					if (!((*(*s).kindU.S6.sons->data[i]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA7_;
					T9_ = (NI64)0;
					T9_ = getOrdValue_MzTDl1zEXJLD4sql7PhCwA((*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 1)]);
					T10_ = (NI64)0;
					T10_ = getOrdValue_MzTDl1zEXJLD4sql7PhCwA((*(*s).kindU.S6.sons->data[i]).kindU.S6.sons->data[((NI) 0)]);
					result = (NI64)((NI64)((NI64)(result + T9_) - T10_) + IL64(1));
				}
				goto LA5_;
				LA7_: ;
				{
					result += ((NI) 1);
				}
				LA5_: ;
				res += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsSets_tlIBRycg3YyKwtO2aPbGGg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	NIM_BOOL result;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* x;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (NIM_BOOL)0;
	x = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	result = bitSetContains_gqMsWrr3fORAvmtdSaP4rA(x, y);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, equalSets_tlIBRycg3YyKwtO2aPbGGg_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	NIM_BOOL result;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* x;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (NIM_BOOL)0;
	x = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	result = bitSetEquals_gqMsWrr3fORAvmtdSaP4rA_2(x, y);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, intersectSets_E71eQfYz9b4v2qiZfNF2cdw_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* x;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	bitSetIntersect_zN8mfRIlfkwl4UeelbWZPg_2((&x), y);
	result = toTreeSet_T7faK845phyHxY50P3qxIQ(x, (*a).typ, (*a).info);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, unionSets_E71eQfYz9b4v2qiZfNF2cdw_3)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* x;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	bitSetUnion_zN8mfRIlfkwl4UeelbWZPg_3((&x), y);
	result = toTreeSet_T7faK845phyHxY50P3qxIQ(x, (*a).typ, (*a).info);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, symdiffSets_E71eQfYz9b4v2qiZfNF2cdw_4)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* x;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* y;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	y = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(b, (&y));
	bitSetSymDiff_zN8mfRIlfkwl4UeelbWZPg_4((&x), y);
	result = toTreeSet_T7faK845phyHxY50P3qxIQ(x, (*a).typ, (*a).info);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, overlap_GLYFox9ciWitxKuirhftGHg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!((*a).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA3_;
		{
			NIM_BOOL T9_;
			if (!((*b).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA7_;
			T9_ = (NIM_BOOL)0;
			T9_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2((*a).kindU.S6.sons->data[((NI) 0)], (*b).kindU.S6.sons->data[((NI) 1)]);
			if (!(T9_)) goto LA10_;
			T9_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2((*b).kindU.S6.sons->data[((NI) 0)], (*a).kindU.S6.sons->data[((NI) 1)]);
			LA10_: ;
			result = T9_;
		}
		goto LA5_;
		LA7_: ;
		{
			NIM_BOOL T12_;
			T12_ = (NIM_BOOL)0;
			T12_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2((*a).kindU.S6.sons->data[((NI) 0)], b);
			if (!(T12_)) goto LA13_;
			T12_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2(b, (*a).kindU.S6.sons->data[((NI) 1)]);
			LA13_: ;
			result = T12_;
		}
		LA5_: ;
	}
	goto LA1_;
	LA3_: ;
	{
		{
			NIM_BOOL T19_;
			if (!((*b).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA17_;
			T19_ = (NIM_BOOL)0;
			T19_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2((*b).kindU.S6.sons->data[((NI) 0)], a);
			if (!(T19_)) goto LA20_;
			T19_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2(a, (*b).kindU.S6.sons->data[((NI) 1)]);
			LA20_: ;
			result = T19_;
		}
		goto LA15_;
		LA17_: ;
		{
			result = sameValue_1Qdwg1ZguEjbL3mmgPJD3w(a, b);
		}
		LA15_: ;
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, complement_Yi8Z7ip2BRBum7p5Po1zUQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* x;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = (x ? (x->Sup.len-1) : -1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				x->data[i] = (NI8)((NU8) ~(x->data[i]));
				res += ((NI) 1);
			} LA4: ;
		}
	}
	result = toTreeSet_T7faK845phyHxY50P3qxIQ(x, (*a).typ, (*a).info);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, emptyRange_GLYFox9ciWitxKuirhftGHg_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = leValue_1Qdwg1ZguEjbL3mmgPJD3w_2(a, b);
	result = !(T1_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, deduplicate_Yi8Z7ip2BRBum7p5Po1zUQ_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* x;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)0;
	toBitSet_Bgj7mr9bCmLIhOzddHDtD0A(a, (&x));
	result = toTreeSet_T7faK845phyHxY50P3qxIQ(x, (*a).typ, (*a).info);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit000)(void) {
}

