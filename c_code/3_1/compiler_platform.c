/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#undef linux
#undef near
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY_UpiOGlu5Ux6DLM73wSrdpg TY_UpiOGlu5Ux6DLM73wSrdpg;
typedef struct TY_5L3fCt9bX0gyEcO30ervPLw TY_5L3fCt9bX0gyEcO30ervPLw;
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
typedef NU8 TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ;
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
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef NU8 TEndian_bQ3yFYQJojZPNYsZnS7Zjg;
struct TY_UpiOGlu5Ux6DLM73wSrdpg {
NimStringDesc* Field0;
NI Field1;
TEndian_bQ3yFYQJojZPNYsZnS7Zjg Field2;
NI Field3;
NI Field4;
};
typedef TY_UpiOGlu5Ux6DLM73wSrdpg TY_AkFlnp1eOXOampCkGKpGYA[19];
typedef NU8 TInfoOSProp_thetQwB9agpeQ13qFmAcWhg_Set;
struct TY_5L3fCt9bX0gyEcO30ervPLw {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
TInfoOSProp_thetQwB9agpeQ13qFmAcWhg_Set Field12;
};
typedef TY_5L3fCt9bX0gyEcO30ervPLw TY_si56KzQTNZIB6Sn9aBGl9cIg[26];
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
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_LEa0rTUoGHqcCT74IoUuTg_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_NIMCALL(TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag, nameToCPU_JQ5BAe9a4dm5IfbYpemguNA)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ, nameToOS_G9aqbBV7MHYHy8iWiblt9c6w)(NimStringDesc* name);
N_NIMCALL(void, setTarget_VrZPDGVfj7q09clDXxZtPNw)(TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ o, TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag;
TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag hostCPU_NC5ykU0V2OtuVwnPAFnkrg;
TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ;
TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ hostOS_5OFrMEFYXsDinn36E7KWLw;
NI intSize_a1bNgZBNVciKYuzCi2sD5A;
NI floatSize_9aPM39cxaqttCZlYIk3psY3g;
NI ptrSize_3AYcIlvHY9bTK1eNdc8MESQ;
NimStringDesc* tnl_Gp8EwkcsAP9am1klnCCHM4w;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_3, "i386", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_4, "m68k", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_5, "alpha", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_6, "powerpc", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_7, "powerpc64", 9);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_8, "powerpc64el", 11);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_9, "sparc", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_10, "vm", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_11, "ia64", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_12, "amd64", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_13, "mips", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_14, "mipsel", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_15, "arm", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_16, "arm64", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_17, "js", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_18, "nimrodvm", 8);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_19, "avr", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_20, "msp430", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_21, "sparc64", 7);
NIM_CONST TY_AkFlnp1eOXOampCkGKpGYA CPU_uYXopJX8pM87pQDCtmgWfQ = {{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_3),
((NI) 32),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_4),
((NI) 32),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_5),
((NI) 64),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_6),
((NI) 32),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_7),
((NI) 64),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_8),
((NI) 64),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_9),
((NI) 32),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_10),
((NI) 32),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_11),
((NI) 64),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_12),
((NI) 64),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_13),
((NI) 32),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_14),
((NI) 32),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_15),
((NI) 32),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_16),
((NI) 64),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_17),
((NI) 32),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_18),
((NI) 32),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_19),
((NI) 16),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 32),
((NI) 16)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_20),
((NI) 16),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 32),
((NI) 16)}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_21),
((NI) 64),
((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 64)}
}
;
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_22, "DOS", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_23, "..", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_24, "$1.dll", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_25, "/", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_26, ".obj", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_27, "\015\012", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_28, ";", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_29, "\\", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_30, ".bat", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_31, ".", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_32, ".exe", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_33, "Windows", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_34, "OS2", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_35, "Linux", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_36, "lib$1.so", 8);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_37, ".o", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_38, "\012", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_39, ":", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_40, ".sh", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_41, "", 0);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_42, "MorphOS", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_43, "SkyOS", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_44, "Solaris", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_45, "Irix", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_46, "NetBSD", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_47, "FreeBSD", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_48, "OpenBSD", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_49, "DragonFly", 9);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_50, "AIX", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_51, "PalmOS", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_52, "QNX", 3);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_53, "Amiga", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_54, "$1.library", 10);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_55, "Atari", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_56, ".tpp", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_57, "Netware", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_58, "$1.nlm", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_59, ".nlm", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_60, "MacOS", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_61, "::", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_62, "$1Lib", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_63, "\015", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_64, ",", 1);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_65, "MacOSX", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_66, "lib$1.dylib", 11);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_67, "Haiku", 5);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_68, "VxWorks", 7);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_69, ".vxe", 4);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_70, "Genode", 6);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_71, "$1.lib.so", 9);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_72, "JS", 2);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_73, "NimrodVM", 8);
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_74, "Standalone", 10);
NIM_CONST TY_si56KzQTNZIB6Sn9aBGl9cIg OS_Jx0qy9c9bSo4fGkMxUfUaAaw = {{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_22),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_28),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_29),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_30),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_32),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
2}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_33),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_28),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_29),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_30),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_32),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
2}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_34),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_28),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_29),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_30),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_32),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
2}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_35),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_42),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_43),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_44),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_45),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_46),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_47),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_48),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_49),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_50),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_51),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
1}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_52),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_53),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_54),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
1}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_55),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_56),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
1}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_57),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_58),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_59),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
2}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_60),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_61),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_62),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_63),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_64),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
2}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_65),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_66),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
13}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_67),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
13}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_68),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_28),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_29),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_69),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
13}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_70),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_71),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
9}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_72),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
0}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_73),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
0}
,
{((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_74),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_31),
0}
}
;
STRING_LITERAL(TM_LEa0rTUoGHqcCT74IoUuTg_75, "macosx", 6);
static N_NIMCALL(void, TM_LEa0rTUoGHqcCT74IoUuTg_2)(void) {
	nimGCvisit((void*)tnl_Gp8EwkcsAP9am1klnCCHM4w, 0);
}

N_NIMCALL(TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag, nameToCPU_JQ5BAe9a4dm5IfbYpemguNA)(NimStringDesc* name) {
	TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag result;
{	result = (TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag)0;
	{
		TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag i;
		NI res;
		i = (TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag)0;
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= ((NI) 19))) goto LA3;
				i = ((TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag) (res));
				{
					NI T6_;
					T6_ = (NI)0;
					T6_ = nsuCmpIgnoreStyle(name, CPU_uYXopJX8pM87pQDCtmgWfQ[(i)- 1].Field0);
					if (!(T6_ == ((NI) 0))) goto LA7_;
					result = i;
					goto BeforeRet_;
				}
				LA7_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag) 0);
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ, nameToOS_G9aqbBV7MHYHy8iWiblt9c6w)(NimStringDesc* name) {
	TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ result;
{	result = (TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ)0;
	{
		TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ i;
		NI res;
		i = (TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ)0;
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= ((NI) 26))) goto LA3;
				i = ((TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ) (res));
				{
					NI T6_;
					T6_ = (NI)0;
					T6_ = nsuCmpIgnoreStyle(name, OS_Jx0qy9c9bSo4fGkMxUfUaAaw[(i)- 1].Field0);
					if (!(T6_ == ((NI) 0))) goto LA7_;
					result = i;
					goto BeforeRet_;
				}
				LA7_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ) 0);
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

N_NIMCALL(void, setTarget_VrZPDGVfj7q09clDXxZtPNw)(TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ o, TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag c) {
	NimStringDesc* T1_;
	targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag = c;
	targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ = o;
	intSize_a1bNgZBNVciKYuzCi2sD5A = (NI)(CPU_uYXopJX8pM87pQDCtmgWfQ[(c)- 1].Field1 / ((NI) 8));
	floatSize_9aPM39cxaqttCZlYIk3psY3g = (NI)(CPU_uYXopJX8pM87pQDCtmgWfQ[(c)- 1].Field3 / ((NI) 8));
	ptrSize_3AYcIlvHY9bTK1eNdc8MESQ = (NI)(CPU_uYXopJX8pM87pQDCtmgWfQ[(c)- 1].Field4 / ((NI) 8));
	T1_ = (NimStringDesc*)0;
	T1_ = tnl_Gp8EwkcsAP9am1klnCCHM4w; tnl_Gp8EwkcsAP9am1klnCCHM4w = copyStringRC1(OS_Jx0qy9c9bSo4fGkMxUfUaAaw[(o)- 1].Field5);
	if (T1_) nimGCunrefNoCycle(T1_);
}
NIM_EXTERNC N_NOINLINE(void, compiler_platformInit000)(void) {
nimRegisterGlobalMarker(TM_LEa0rTUoGHqcCT74IoUuTg_2);
	hostCPU_NC5ykU0V2OtuVwnPAFnkrg = nameToCPU_JQ5BAe9a4dm5IfbYpemguNA(((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_3));
	hostOS_5OFrMEFYXsDinn36E7KWLw = nameToOS_G9aqbBV7MHYHy8iWiblt9c6w(((NimStringDesc*) &TM_LEa0rTUoGHqcCT74IoUuTg_75));
	setTarget_VrZPDGVfj7q09clDXxZtPNw(hostOS_5OFrMEFYXsDinn36E7KWLw, hostCPU_NC5ykU0V2OtuVwnPAFnkrg);
}

NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit000)(void) {
}

