/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#undef linux
#undef near
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY_sdDP1TTkc2gaTu5fV53Zqg TY_sdDP1TTkc2gaTu5fV53Zqg;
typedef struct TY_qERWGavQjzug69cyzEYP39bQ TY_qERWGavQjzug69cyzEYP39bQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct RopeObj_HF4qJnb6xiOddgPmsxodtQ RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct TNimObject TNimObject;
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
typedef struct TY_LViedqhb8iWVoqgZs5LifA TY_LViedqhb8iWVoqgZs5LifA;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef NU8 RopesError_6JbePhffafOqwRh04O9bTyA;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (RopesError_6JbePhffafOqwRh04O9bTyA err, NimStringDesc* msg, NIM_BOOL useWarning, void* ClE_0);
void* ClE_0;
} TY_TyNj9auVRF1VyYw9auw0bhYg;
struct TY_sdDP1TTkc2gaTu5fV53Zqg {
void* Field0;
TY_qERWGavQjzug69cyzEYP39bQ* Field1;
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
struct TY_qERWGavQjzug69cyzEYP39bQ {
char dummy;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef RopeObj_HF4qJnb6xiOddgPmsxodtQ* TY_Z5POizpB19bVj5ol9cPC1eKw[4096];
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
struct  RopeObj_HF4qJnb6xiOddgPmsxodtQ  {
  TNimObject Sup;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* left;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
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
typedef N_CLOSURE_PTR(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_9) (RopesError_6JbePhffafOqwRh04O9bTyA err, NimStringDesc* msg, NIM_BOOL useWarning);
typedef N_CLOSURE_PTR(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_10) (RopesError_6JbePhffafOqwRh04O9bTyA err, NimStringDesc* msg, NIM_BOOL useWarning);
typedef N_CLOSURE_PTR(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_11) (RopesError_6JbePhffafOqwRh04O9bTyA err, NimStringDesc* msg, NIM_BOOL useWarning);
typedef N_CLOSURE_PTR(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_12) (RopesError_6JbePhffafOqwRh04O9bTyA err, NimStringDesc* msg, NIM_BOOL useWarning);
typedef NU8 FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
typedef N_CLOSURE_PTR(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_13) (RopesError_6JbePhffafOqwRh04O9bTyA err, NimStringDesc* msg, NIM_BOOL useWarning);
typedef NIM_CHAR TY_9bKy7UA2LOi2vzOViufaW1Q[1024];
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
struct TY_LViedqhb8iWVoqgZs5LifA {
  TGenericSeq Sup;
  RopeObj_HF4qJnb6xiOddgPmsxodtQ* data[SEQ_DECL_SIZE];
};
static N_NIMCALL(void, Marker_TY_j4IZVEbOYTm9aXKJeVb8ILQ)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_3)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_NIMCALL(void, Marker_TY_d0QF71x0BgMQlc7zEXMYTQ)(void* p, NI op);
static N_NIMCALL(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_5)(void);
static N_NIMCALL(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_6)(void);
N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, newRope_FFvNE9bTZHQQSLFPakYFt8w)(NimStringDesc* data);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_NIMCALL(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_7)(void);
N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, amp__FyliSLNPyN7IibfEAQfpRA)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* a, RopeObj_HF4qJnb6xiOddgPmsxodtQ* b);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, insertInCache_53CHEX05HP0HacydnwoUYg_2)(NimStringDesc* s);
N_NIMCALL(NI, hash_uBstFm5SYVQeOL3j9c9bc58A)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NI, len_Z8dKuB9cr9b9ciPiCD63t6h5w)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* a);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, pop_Uwv9aKTtuI0HDD9bflz9aw9cCAropes)(TY_LViedqhb8iWVoqgZs5LifA** s);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, rope_53CHEX05HP0HacydnwoUYg)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ)(FILE* f, NimStringDesc* s);
N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, amp__sUFtkQXj2TQTADyk9cLFdDg)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* a, NimStringDesc* b);
N_NIMCALL(void, add_cDalAhgBlDWoYHadkaqqxw)(RopeObj_HF4qJnb6xiOddgPmsxodtQ** a, RopeObj_HF4qJnb6xiOddgPmsxodtQ* b);
N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, percent__tH0lgOCTcFVFSKThSUgFEg)(NimStringDesc* frmt, RopeObj_HF4qJnb6xiOddgPmsxodtQ** args, NI argsLen_0);
N_NIMCALL(void, add_UJnSY21g59awhvSFBxJ9a9aPg)(RopeObj_HF4qJnb6xiOddgPmsxodtQ** a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NIM_BOOL, open_sEp0GH2306oGo9bqBpj5oTQ)(FILE** f, NimStringDesc* filename, FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
N_NIMCALL(void, writeRope_PkOcWnH9aQsX1yfnD0BW2Dg)(FILE* f, RopeObj_HF4qJnb6xiOddgPmsxodtQ* r);
N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_3)(FILE* f);
N_NIMCALL(NIM_BOOL, equalsFile_J1CvHJJz3W7oEXSmrd5b9aA)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* r, FILE* f);
N_NIMCALL(NI, readBuffer_1qjbrvfnPD4PaIieHVDvhw_2)(FILE* f, void* buffer, NI len);
N_NIMCALL(NIM_BOOL, equalsFile_NRjmJ38NeonBbXARkPJquA)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* r, NimStringDesc* filename);
N_NIMCALL(void, writeRope_BleoID9btBn4KgpblZYx8nQ)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* head, NimStringDesc* filename, NIM_BOOL useWarning);
TY_TyNj9auVRF1VyYw9auw0bhYg errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ;
TNimType NTI_TyNj9auVRF1VyYw9auw0bhYg_;
TNimType NTI_vr5DoT1jILTGdRlYv1OYpw_;
TNimType NTI_qERWGavQjzug69cyzEYP39bQ_;
TNimType NTI_j4IZVEbOYTm9aXKJeVb8ILQ_;
TY_Z5POizpB19bVj5ol9cPC1eKw cache_WGMp5Wo1NlgbAMOysPIfmQ;
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_HF4qJnb6xiOddgPmsxodtQ_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_d0QF71x0BgMQlc7zEXMYTQ_;
TNimType NTI_Z5POizpB19bVj5ol9cPC1eKw_;
NI gCacheTries_5GfZTThHPBfB9bjRZdFluBw;
NI gCacheMisses_fLRm9am8S0daYBVNK6JKyBg;
NI gCacheIntTries_opyfsNv023Md1P05mqsDew;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* rnl_cGyNlPEm9bfohklPdVEsyNg;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern NimStringDesc* tnl_Gp8EwkcsAP9am1klnCCHM4w;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* softRnl_iUOtmgRcRwCUc9cEJC66Hsw;
extern TNimType NTI_LViedqhb8iWVoqgZs5LifA_;
STRING_LITERAL(TM_Vw9cfUOQOae9b9bzZBlucMZQg_8, "$", 1);
static N_NIMCALL(void, Marker_TY_j4IZVEbOYTm9aXKJeVb8ILQ)(void* p, NI op) {
	TY_qERWGavQjzug69cyzEYP39bQ* a;
	a = (TY_qERWGavQjzug69cyzEYP39bQ*)p;
}
static N_NIMCALL(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_3)(void) {
	nimGCvisit((void*)errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClE_0, 0);
}
static N_NIMCALL(void, Marker_TY_d0QF71x0BgMQlc7zEXMYTQ)(void* p, NI op) {
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* a;
	a = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)p;
	nimGCvisit((void*)(*a).left, op);
	nimGCvisit((void*)(*a).right, op);
	nimGCvisit((void*)(*a).data, op);
}
static N_NIMCALL(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_5)(void) {
	NI T1_;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 4096; T1_++) {
	nimGCvisit((void*)cache_WGMp5Wo1NlgbAMOysPIfmQ[T1_], 0);
	}
}
static N_NIMCALL(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_6)(void) {
	nimGCvisit((void*)rnl_cGyNlPEm9bfohklPdVEsyNg, 0);
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

N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, newRope_FFvNE9bTZHQQSLFPakYFt8w)(NimStringDesc* data) {
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* result;
	result = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	result = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*) newObj((&NTI_d0QF71x0BgMQlc7zEXMYTQ_), sizeof(RopeObj_HF4qJnb6xiOddgPmsxodtQ));
	(*result).Sup.m_type = (&NTI_HF4qJnb6xiOddgPmsxodtQ_);
	{
		NimStringDesc* T5_;
		if (!!((data == NIM_NIL))) goto LA3_;
		(*result).length = (data ? data->Sup.len : 0);
		T5_ = (NimStringDesc*)0;
		T5_ = (*result).data; (*result).data = copyStringRC1(data);
		if (T5_) nimGCunrefNoCycle(T5_);
	}
	LA3_: ;
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
static N_NIMCALL(void, TM_Vw9cfUOQOae9b9bzZBlucMZQg_7)(void) {
	nimGCvisit((void*)softRnl_iUOtmgRcRwCUc9cEJC66Hsw, 0);
}

N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, amp__FyliSLNPyN7IibfEAQfpRA)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* a, RopeObj_HF4qJnb6xiOddgPmsxodtQ* b) {
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* result;
	result = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	{
		if (!(a == NIM_NIL)) goto LA3_;
		result = b;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(b == NIM_NIL)) goto LA6_;
		result = a;
	}
	goto LA1_;
	LA6_: ;
	{
		result = newRope_FFvNE9bTZHQQSLFPakYFt8w(NIM_NIL);
		(*result).length = (NI)((*a).length + (*b).length);
		asgnRefNoCycle((void**) (&(*result).left), a);
		asgnRefNoCycle((void**) (&(*result).right), b);
	}
	LA1_: ;
	return result;
}

N_NIMCALL(void, add_cDalAhgBlDWoYHadkaqqxw)(RopeObj_HF4qJnb6xiOddgPmsxodtQ** a, RopeObj_HF4qJnb6xiOddgPmsxodtQ* b) {
	unsureAsgnRef((void**) (&(*a)), amp__FyliSLNPyN7IibfEAQfpRA((*a), b));
}

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

N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, insertInCache_53CHEX05HP0HacydnwoUYg_2)(NimStringDesc* s) {
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* result;
	NI h;
	NI T1_;
	result = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	gCacheTries_5GfZTThHPBfB9bjRZdFluBw += ((NI) 1);
	T1_ = (NI)0;
	T1_ = hash_uBstFm5SYVQeOL3j9c9bc58A(s);
	h = (NI)(T1_ & ((NI) 4095));
	result = cache_WGMp5Wo1NlgbAMOysPIfmQ[(h)- 0];
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = (result == 0);
		if (T4_) goto LA5_;
		T4_ = !(eqStrings((*result).data, s));
		LA5_: ;
		if (!T4_) goto LA6_;
		gCacheMisses_fLRm9am8S0daYBVNK6JKyBg += ((NI) 1);
		result = newRope_FFvNE9bTZHQQSLFPakYFt8w(s);
		asgnRefNoCycle((void**) (&cache_WGMp5Wo1NlgbAMOysPIfmQ[(h)- 0]), result);
	}
	LA6_: ;
	return result;
}

N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, rope_53CHEX05HP0HacydnwoUYg)(NimStringDesc* s) {
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* result;
	result = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	{
		if (!((s ? s->Sup.len : 0) == ((NI) 0))) goto LA3_;
		result = NIM_NIL;
	}
	goto LA1_;
	LA3_: ;
	{
		result = insertInCache_53CHEX05HP0HacydnwoUYg_2(s);
	}
	LA1_: ;
	return result;
}

N_NIMCALL(NI, len_Z8dKuB9cr9b9ciPiCD63t6h5w)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* a) {
	NI result;
	result = (NI)0;
	{
		if (!(a == NIM_NIL)) goto LA3_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = (*a).length;
	}
	LA1_: ;
	return result;
}

static N_INLINE(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, pop_Uwv9aKTtuI0HDD9bflz9aw9cCAropes)(TY_LViedqhb8iWVoqgZs5LifA** s) {
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* result;
	NI L;
	result = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	L = (NI)(((*s) ? (*s)->Sup.len : 0) - ((NI) 1));
	result = (*s)->data[L];
	(*s) = (TY_LViedqhb8iWVoqgZs5LifA*) setLengthSeq(&((*s))->Sup, sizeof(RopeObj_HF4qJnb6xiOddgPmsxodtQ*), ((NI) (L)));
	return result;
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, dollar__PstQrDfj9a7hGXM74AN2wzg)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* r) {
	NimStringDesc* result;
	NI T1_;
	result = (NimStringDesc*)0;
	T1_ = (NI)0;
	T1_ = len_Z8dKuB9cr9b9ciPiCD63t6h5w(r);
	result = mnewString(((NI) (T1_)));
	result = setLengthStr(result, ((NI) 0));
	{
		NimStringDesc* s;
		s = (NimStringDesc*)0;
		{
			TY_LViedqhb8iWVoqgZs5LifA* stack;
			if (!!((r == NIM_NIL))) goto LA5_;
			stack = (TY_LViedqhb8iWVoqgZs5LifA*) newSeq((&NTI_LViedqhb8iWVoqgZs5LifA_), 1);
			asgnRefNoCycle((void**) (&stack->data[0]), r);
			{
				while (1) {
					RopeObj_HF4qJnb6xiOddgPmsxodtQ* it;
					if (!(((NI) 0) < (stack ? stack->Sup.len : 0))) goto LA8;
					it = pop_Uwv9aKTtuI0HDD9bflz9aw9cCAropes((&stack));
					{
						while (1) {
							if (!((*it).data == 0)) goto LA10;
							stack = (TY_LViedqhb8iWVoqgZs5LifA*) incrSeqV2(&(stack)->Sup, sizeof(RopeObj_HF4qJnb6xiOddgPmsxodtQ*));
							asgnRefNoCycle((void**) (&stack->data[stack->Sup.len]), (*it).right);
							++stack->Sup.len;
							it = (*it).left;
						} LA10: ;
					}
					s = (*it).data;
					result = resizeString(result, s->Sup.len + 0);
appendString(result, s);
				} LA8: ;
			}
		}
		LA5_: ;
	}
	return result;
}

N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, rope_pEztpD6TFe5jk3aCrOSACA)(NI64 i) {
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* result;
	NimStringDesc* T1_;
	result = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	gCacheIntTries_opyfsNv023Md1P05mqsDew += ((NI) 1);
	T1_ = (NimStringDesc*)0;
	T1_ = nimInt64ToStr(i);
	result = rope_53CHEX05HP0HacydnwoUYg(T1_);
	return result;
}

N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, amp__OL8oYU3myMrLfqhcdP9b3Ig)(NimStringDesc* a, RopeObj_HF4qJnb6xiOddgPmsxodtQ* b) {
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* result;
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* T1_;
	result = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	T1_ = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	T1_ = rope_53CHEX05HP0HacydnwoUYg(a);
	result = amp__FyliSLNPyN7IibfEAQfpRA(T1_, b);
	return result;
}

N_NIMCALL(void, writeRope_PkOcWnH9aQsX1yfnD0BW2Dg)(FILE* f, RopeObj_HF4qJnb6xiOddgPmsxodtQ* r) {
	{
		NimStringDesc* s;
		s = (NimStringDesc*)0;
		{
			TY_LViedqhb8iWVoqgZs5LifA* stack;
			if (!!((r == NIM_NIL))) goto LA4_;
			stack = (TY_LViedqhb8iWVoqgZs5LifA*) newSeq((&NTI_LViedqhb8iWVoqgZs5LifA_), 1);
			asgnRefNoCycle((void**) (&stack->data[0]), r);
			{
				while (1) {
					RopeObj_HF4qJnb6xiOddgPmsxodtQ* it;
					if (!(((NI) 0) < (stack ? stack->Sup.len : 0))) goto LA7;
					it = pop_Uwv9aKTtuI0HDD9bflz9aw9cCAropes((&stack));
					{
						while (1) {
							if (!((*it).data == 0)) goto LA9;
							stack = (TY_LViedqhb8iWVoqgZs5LifA*) incrSeqV2(&(stack)->Sup, sizeof(RopeObj_HF4qJnb6xiOddgPmsxodtQ*));
							asgnRefNoCycle((void**) (&stack->data[stack->Sup.len]), (*it).right);
							++stack->Sup.len;
							it = (*it).left;
						} LA9: ;
					}
					s = (*it).data;
					write_c4mGyJBvK73pdM22jiweKQ(f, s);
				} LA7: ;
			}
		}
		LA4_: ;
	}
}

N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, amp__sUFtkQXj2TQTADyk9cLFdDg)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* a, NimStringDesc* b) {
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* result;
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* T1_;
	result = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	T1_ = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	T1_ = rope_53CHEX05HP0HacydnwoUYg(b);
	result = amp__FyliSLNPyN7IibfEAQfpRA(a, T1_);
	return result;
}

N_NIMCALL(void, add_UJnSY21g59awhvSFBxJ9a9aPg)(RopeObj_HF4qJnb6xiOddgPmsxodtQ** a, NimStringDesc* b) {
	unsureAsgnRef((void**) (&(*a)), amp__sUFtkQXj2TQTADyk9cLFdDg((*a), b));
}

N_NIMCALL(RopeObj_HF4qJnb6xiOddgPmsxodtQ*, percent__tH0lgOCTcFVFSKThSUgFEg)(NimStringDesc* frmt, RopeObj_HF4qJnb6xiOddgPmsxodtQ** args, NI argsLen_0) {
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* result;
	NI i;
	NI length;
	NI num;
	result = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	i = ((NI) 0);
	length = (frmt ? frmt->Sup.len : 0);
	result = NIM_NIL;
	num = ((NI) 0);
	{
		while (1) {
			NI start;
			if (!(i < length)) goto LA2;
			{
				if (!((NU8)(frmt->data[i]) == (NU8)(36))) goto LA5_;
				i += ((NI) 1);
				switch (((NU8)(frmt->data[i]))) {
				case 36:
				{
					add_UJnSY21g59awhvSFBxJ9a9aPg(&result, ((NimStringDesc*) &TM_Vw9cfUOQOae9b9bzZBlucMZQg_8));
					i += ((NI) 1);
				}
				break;
				case 35:
				{
					i += ((NI) 1);
					add_cDalAhgBlDWoYHadkaqqxw(&result, args[num]);
					num += ((NI) 1);
				}
				break;
				case 48 ... 57:
				{
					NI j;
					j = ((NI) 0);
					{
						while (1) {
							j = (NI)((NI)((NI)(j * ((NI) 10)) + ((NI) (((NU8)(frmt->data[i]))))) - ((NI) 48));
							i += ((NI) 1);
							{
								if (!!((((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57))))) goto LA14_;
								goto LA10;
							}
							LA14_: ;
						}
					} LA10: ;
					num = j;
					{
						NimStringDesc* T20_;
						if (!((NI)((argsLen_0-1) + ((NI) 1)) < j)) goto LA18_;
						T20_ = (NimStringDesc*)0;
						T20_ = nimIntToStr(j);
						errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClE_0? errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClP_0(((RopesError_6JbePhffafOqwRh04O9bTyA) 1), T20_, NIM_FALSE, errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClE_0):((TM_Vw9cfUOQOae9b9bzZBlucMZQg_9)(errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClP_0))(((RopesError_6JbePhffafOqwRh04O9bTyA) 1), T20_, NIM_FALSE);
					}
					goto LA16_;
					LA18_: ;
					{
						add_cDalAhgBlDWoYHadkaqqxw(&result, args[(NI)(j - ((NI) 1))]);
					}
					LA16_: ;
				}
				break;
				case 123:
				{
					NI j_2;
					i += ((NI) 1);
					j_2 = ((NI) 0);
					{
						while (1) {
							if (!(((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57)))) goto LA24;
							j_2 = (NI)((NI)((NI)(j_2 * ((NI) 10)) + ((NI) (((NU8)(frmt->data[i]))))) - ((NI) 48));
							i += ((NI) 1);
						} LA24: ;
					}
					num = j_2;
					{
						if (!((NU8)(frmt->data[i]) == (NU8)(125))) goto LA27_;
						i += ((NI) 1);
					}
					goto LA25_;
					LA27_: ;
					{
						NimStringDesc* T30_;
						T30_ = (NimStringDesc*)0;
						T30_ = nimCharToStr(frmt->data[i]);
						errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClE_0? errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClP_0(((RopesError_6JbePhffafOqwRh04O9bTyA) 1), T30_, NIM_FALSE, errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClE_0):((TM_Vw9cfUOQOae9b9bzZBlucMZQg_10)(errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClP_0))(((RopesError_6JbePhffafOqwRh04O9bTyA) 1), T30_, NIM_FALSE);
					}
					LA25_: ;
					{
						NimStringDesc* T35_;
						if (!((NI)((argsLen_0-1) + ((NI) 1)) < j_2)) goto LA33_;
						T35_ = (NimStringDesc*)0;
						T35_ = nimIntToStr(j_2);
						errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClE_0? errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClP_0(((RopesError_6JbePhffafOqwRh04O9bTyA) 1), T35_, NIM_FALSE, errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClE_0):((TM_Vw9cfUOQOae9b9bzZBlucMZQg_11)(errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClP_0))(((RopesError_6JbePhffafOqwRh04O9bTyA) 1), T35_, NIM_FALSE);
					}
					goto LA31_;
					LA33_: ;
					{
						add_cDalAhgBlDWoYHadkaqqxw(&result, args[(NI)(j_2 - ((NI) 1))]);
					}
					LA31_: ;
				}
				break;
				case 110:
				{
					add_cDalAhgBlDWoYHadkaqqxw(&result, softRnl_iUOtmgRcRwCUc9cEJC66Hsw);
					i += ((NI) 1);
				}
				break;
				case 78:
				{
					add_cDalAhgBlDWoYHadkaqqxw(&result, rnl_cGyNlPEm9bfohklPdVEsyNg);
					i += ((NI) 1);
				}
				break;
				default:
				{
					NimStringDesc* T40_;
					T40_ = (NimStringDesc*)0;
					T40_ = nimCharToStr(frmt->data[i]);
					errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClE_0? errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClP_0(((RopesError_6JbePhffafOqwRh04O9bTyA) 1), T40_, NIM_FALSE, errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClE_0):((TM_Vw9cfUOQOae9b9bzZBlucMZQg_12)(errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClP_0))(((RopesError_6JbePhffafOqwRh04O9bTyA) 1), T40_, NIM_FALSE);
				}
				break;
				}
			}
			LA5_: ;
			start = i;
			{
				while (1) {
					if (!(i < length)) goto LA42;
					{
						if (!!(((NU8)(frmt->data[i]) == (NU8)(36)))) goto LA45_;
						i += ((NI) 1);
					}
					goto LA43_;
					LA45_: ;
					{
						goto LA41;
					}
					LA43_: ;
				} LA42: ;
			} LA41: ;
			{
				NimStringDesc* T52_;
				if (!(start <= (NI)(i - ((NI) 1)))) goto LA50_;
				T52_ = (NimStringDesc*)0;
				T52_ = copyStrLast(frmt, start, (NI)(i - ((NI) 1)));
				add_UJnSY21g59awhvSFBxJ9a9aPg(&result, T52_);
			}
			LA50_: ;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(void, addf_8UUGW4xtgpag0J4uEnVLuQ)(RopeObj_HF4qJnb6xiOddgPmsxodtQ** c, NimStringDesc* frmt, RopeObj_HF4qJnb6xiOddgPmsxodtQ** args, NI argsLen_0) {
	RopeObj_HF4qJnb6xiOddgPmsxodtQ* T1_;
	T1_ = (RopeObj_HF4qJnb6xiOddgPmsxodtQ*)0;
	T1_ = percent__tH0lgOCTcFVFSKThSUgFEg(frmt, args, argsLen_0);
	add_cDalAhgBlDWoYHadkaqqxw(c, T1_);
}

N_NIMCALL(void, prepend_cDalAhgBlDWoYHadkaqqxw_2)(RopeObj_HF4qJnb6xiOddgPmsxodtQ** a, RopeObj_HF4qJnb6xiOddgPmsxodtQ* b) {
	unsureAsgnRef((void**) (&(*a)), amp__FyliSLNPyN7IibfEAQfpRA(b, (*a)));
}

N_NIMCALL(void, writeRope_BleoID9btBn4KgpblZYx8nQ)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* head, NimStringDesc* filename, NIM_BOOL useWarning) {
	FILE* f;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open_sEp0GH2306oGo9bqBpj5oTQ(&f, filename, ((FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 1), ((NI) -1));
		if (!T3_) goto LA4_;
		{
			if (!!((head == NIM_NIL))) goto LA8_;
			writeRope_PkOcWnH9aQsX1yfnD0BW2Dg(f, head);
		}
		LA8_: ;
		close_BWnr8V7RERYno9bIdPmw8Hw_3(f);
	}
	goto LA1_;
	LA4_: ;
	{
		errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClE_0? errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClP_0(((RopesError_6JbePhffafOqwRh04O9bTyA) 0), filename, useWarning, errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClE_0):((TM_Vw9cfUOQOae9b9bzZBlucMZQg_13)(errorHandler_TAnYbcufPVh4Ie6Bi1RCCQ.ClP_0))(((RopesError_6JbePhffafOqwRh04O9bTyA) 0), filename, useWarning);
	}
	LA1_: ;
}

N_NIMCALL(NIM_BOOL, equalsFile_J1CvHJJz3W7oEXSmrd5b9aA)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* r, FILE* f) {
	NIM_BOOL result;
	TY_9bKy7UA2LOi2vzOViufaW1Q buf;
	NI bpos;
	NI blen;
	NI btotal;
	NI rtotal;
	NIM_BOOL T25_;
	NI T26_;
{	result = (NIM_BOOL)0;
	memset((void*)buf, 0, sizeof(buf));
	bpos = ((NI) 1024);
	blen = ((NI) 1024);
	btotal = ((NI) 0);
	rtotal = ((NI) 0);
	{
		NimStringDesc* s;
		s = (NimStringDesc*)0;
		{
			TY_LViedqhb8iWVoqgZs5LifA* stack;
			if (!!((r == NIM_NIL))) goto LA4_;
			stack = (TY_LViedqhb8iWVoqgZs5LifA*) newSeq((&NTI_LViedqhb8iWVoqgZs5LifA_), 1);
			asgnRefNoCycle((void**) (&stack->data[0]), r);
			{
				while (1) {
					RopeObj_HF4qJnb6xiOddgPmsxodtQ* it;
					NI spos;
					NI slen;
					if (!(((NI) 0) < (stack ? stack->Sup.len : 0))) goto LA7;
					it = pop_Uwv9aKTtuI0HDD9bflz9aw9cCAropes((&stack));
					{
						while (1) {
							if (!((*it).data == 0)) goto LA9;
							stack = (TY_LViedqhb8iWVoqgZs5LifA*) incrSeqV2(&(stack)->Sup, sizeof(RopeObj_HF4qJnb6xiOddgPmsxodtQ*));
							asgnRefNoCycle((void**) (&stack->data[stack->Sup.len]), (*it).right);
							++stack->Sup.len;
							it = (*it).left;
						} LA9: ;
					}
					s = (*it).data;
					spos = ((NI) 0);
					slen = (s ? s->Sup.len : 0);
					rtotal += slen;
					{
						while (1) {
							NI n;
							if (!(spos < slen)) goto LA11;
							{
								if (!(bpos == blen)) goto LA14_;
								bpos = ((NI) 0);
								blen = readBuffer_1qjbrvfnPD4PaIieHVDvhw_2(f, ((void*) ((&buf[(((NI) 0))- 0]))), ((NI) 1024));
								btotal += blen;
								{
									if (!(blen == ((NI) 0))) goto LA18_;
									result = NIM_FALSE;
									goto BeforeRet_;
								}
								LA18_: ;
							}
							LA14_: ;
							n = (((NI)(blen - bpos) <= (NI)(slen - spos)) ? (NI)(blen - bpos) : (NI)(slen - spos));
							{
								NIM_BOOL T22_;
								T22_ = (NIM_BOOL)0;
								T22_ = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes(((void*) ((&buf[(bpos)- 0]))), ((void*) ((NI)(((NI) (s->data)) + spos))), ((NI) (n)));
								if (!!(T22_)) goto LA23_;
								result = NIM_FALSE;
								goto BeforeRet_;
							}
							LA23_: ;
							spos += n;
							bpos += n;
						} LA11: ;
					}
				} LA7: ;
			}
		}
		LA4_: ;
	}
	T25_ = (NIM_BOOL)0;
	T26_ = (NI)0;
	T26_ = readBuffer_1qjbrvfnPD4PaIieHVDvhw_2(f, ((void*) ((&buf[(((NI) 0))- 0]))), ((NI) 1));
	T25_ = (T26_ == ((NI) 0));
	if (!(T25_)) goto LA27_;
	T25_ = (btotal == rtotal);
	LA27_: ;
	result = T25_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, equalsFile_NRjmJ38NeonBbXARkPJquA)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* r, NimStringDesc* filename) {
	NIM_BOOL result;
	FILE* f;
	result = (NIM_BOOL)0;
	f = (FILE*)0;
	result = open_sEp0GH2306oGo9bqBpj5oTQ(&f, filename, ((FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 0), ((NI) -1));
	{
		if (!result) goto LA3_;
		result = equalsFile_J1CvHJJz3W7oEXSmrd5b9aA(r, f);
		close_BWnr8V7RERYno9bIdPmw8Hw_3(f);
	}
	LA3_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, writeRopeIfNotEqual_oaAc5rjj5CT7oZUrYvXsyw)(RopeObj_HF4qJnb6xiOddgPmsxodtQ* r, NimStringDesc* filename) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = equalsFile_NRjmJ38NeonBbXARkPJquA(r, filename);
		if (!!(T3_)) goto LA4_;
		writeRope_BleoID9btBn4KgpblZYx8nQ(r, filename, NIM_FALSE);
		result = NIM_TRUE;
	}
	goto LA1_;
	LA4_: ;
	{
		result = NIM_FALSE;
	}
	LA1_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_ropesInit000)(void) {
nimRegisterGlobalMarker(TM_Vw9cfUOQOae9b9bzZBlucMZQg_3);
nimRegisterGlobalMarker(TM_Vw9cfUOQOae9b9bzZBlucMZQg_5);
nimRegisterGlobalMarker(TM_Vw9cfUOQOae9b9bzZBlucMZQg_6);
nimRegisterGlobalMarker(TM_Vw9cfUOQOae9b9bzZBlucMZQg_7);
	gCacheTries_5GfZTThHPBfB9bjRZdFluBw = ((NI) 0);
	gCacheMisses_fLRm9am8S0daYBVNK6JKyBg = ((NI) 0);
	gCacheIntTries_opyfsNv023Md1P05mqsDew = ((NI) 0);
	asgnRefNoCycle((void**) (&rnl_cGyNlPEm9bfohklPdVEsyNg), newRope_FFvNE9bTZHQQSLFPakYFt8w(tnl_Gp8EwkcsAP9am1klnCCHM4w));
	asgnRefNoCycle((void**) (&softRnl_iUOtmgRcRwCUc9cEJC66Hsw), newRope_FFvNE9bTZHQQSLFPakYFt8w(tnl_Gp8EwkcsAP9am1klnCCHM4w));
}

NIM_EXTERNC N_NOINLINE(void, compiler_ropesDatInit000)(void) {
static TNimNode* TM_Vw9cfUOQOae9b9bzZBlucMZQg_2[2];
static TNimNode* TM_Vw9cfUOQOae9b9bzZBlucMZQg_4[4];
static TNimNode TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[9];
NTI_TyNj9auVRF1VyYw9auw0bhYg_.size = sizeof(TY_sdDP1TTkc2gaTu5fV53Zqg);
NTI_TyNj9auVRF1VyYw9auw0bhYg_.kind = 18;
NTI_TyNj9auVRF1VyYw9auw0bhYg_.base = 0;
NTI_TyNj9auVRF1VyYw9auw0bhYg_.flags = 2;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_2[0] = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[1];
NTI_vr5DoT1jILTGdRlYv1OYpw_.size = sizeof(void*);
NTI_vr5DoT1jILTGdRlYv1OYpw_.kind = 26;
NTI_vr5DoT1jILTGdRlYv1OYpw_.base = 0;
NTI_vr5DoT1jILTGdRlYv1OYpw_.flags = 3;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[1].kind = 1;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[1].offset = offsetof(TY_sdDP1TTkc2gaTu5fV53Zqg, Field0);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[1].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[1].name = "Field0";
TM_Vw9cfUOQOae9b9bzZBlucMZQg_2[1] = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[2];
NTI_qERWGavQjzug69cyzEYP39bQ_.size = sizeof(TY_qERWGavQjzug69cyzEYP39bQ);
NTI_qERWGavQjzug69cyzEYP39bQ_.kind = 18;
NTI_qERWGavQjzug69cyzEYP39bQ_.base = 0;
NTI_qERWGavQjzug69cyzEYP39bQ_.flags = 3;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[3].len = 0; TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[3].kind = 2;
NTI_qERWGavQjzug69cyzEYP39bQ_.node = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[3];
NTI_j4IZVEbOYTm9aXKJeVb8ILQ_.size = sizeof(TY_qERWGavQjzug69cyzEYP39bQ*);
NTI_j4IZVEbOYTm9aXKJeVb8ILQ_.kind = 22;
NTI_j4IZVEbOYTm9aXKJeVb8ILQ_.base = (&NTI_qERWGavQjzug69cyzEYP39bQ_);
NTI_j4IZVEbOYTm9aXKJeVb8ILQ_.flags = 2;
NTI_j4IZVEbOYTm9aXKJeVb8ILQ_.marker = Marker_TY_j4IZVEbOYTm9aXKJeVb8ILQ;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[2].kind = 1;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[2].offset = offsetof(TY_sdDP1TTkc2gaTu5fV53Zqg, Field1);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[2].typ = (&NTI_j4IZVEbOYTm9aXKJeVb8ILQ_);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[2].name = "Field1";
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[0].len = 2; TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[0].kind = 2; TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[0].sons = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_2[0];
NTI_TyNj9auVRF1VyYw9auw0bhYg_.node = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[0];
NTI_HF4qJnb6xiOddgPmsxodtQ_.size = sizeof(RopeObj_HF4qJnb6xiOddgPmsxodtQ);
NTI_HF4qJnb6xiOddgPmsxodtQ_.kind = 17;
NTI_HF4qJnb6xiOddgPmsxodtQ_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
NTI_HF4qJnb6xiOddgPmsxodtQ_.flags = 2;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_4[0] = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[5];
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[5].kind = 1;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[5].offset = offsetof(RopeObj_HF4qJnb6xiOddgPmsxodtQ, left);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[5].typ = (&NTI_d0QF71x0BgMQlc7zEXMYTQ_);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[5].name = "left";
TM_Vw9cfUOQOae9b9bzZBlucMZQg_4[1] = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[6];
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[6].kind = 1;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[6].offset = offsetof(RopeObj_HF4qJnb6xiOddgPmsxodtQ, right);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[6].typ = (&NTI_d0QF71x0BgMQlc7zEXMYTQ_);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[6].name = "right";
TM_Vw9cfUOQOae9b9bzZBlucMZQg_4[2] = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[7];
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[7].kind = 1;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[7].offset = offsetof(RopeObj_HF4qJnb6xiOddgPmsxodtQ, length);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[7].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[7].name = "length";
TM_Vw9cfUOQOae9b9bzZBlucMZQg_4[3] = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[8];
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[8].kind = 1;
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[8].offset = offsetof(RopeObj_HF4qJnb6xiOddgPmsxodtQ, data);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[8].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[8].name = "data";
TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[4].len = 4; TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[4].kind = 2; TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[4].sons = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_4[0];
NTI_HF4qJnb6xiOddgPmsxodtQ_.node = &TM_Vw9cfUOQOae9b9bzZBlucMZQg_0[4];
NTI_d0QF71x0BgMQlc7zEXMYTQ_.size = sizeof(RopeObj_HF4qJnb6xiOddgPmsxodtQ*);
NTI_d0QF71x0BgMQlc7zEXMYTQ_.kind = 22;
NTI_d0QF71x0BgMQlc7zEXMYTQ_.base = (&NTI_HF4qJnb6xiOddgPmsxodtQ_);
NTI_d0QF71x0BgMQlc7zEXMYTQ_.flags = 2;
NTI_d0QF71x0BgMQlc7zEXMYTQ_.marker = Marker_TY_d0QF71x0BgMQlc7zEXMYTQ;
NTI_Z5POizpB19bVj5ol9cPC1eKw_.size = sizeof(TY_Z5POizpB19bVj5ol9cPC1eKw);
NTI_Z5POizpB19bVj5ol9cPC1eKw_.kind = 16;
NTI_Z5POizpB19bVj5ol9cPC1eKw_.base = (&NTI_d0QF71x0BgMQlc7zEXMYTQ_);
NTI_Z5POizpB19bVj5ol9cPC1eKw_.flags = 2;
}

