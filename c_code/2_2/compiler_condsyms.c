/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TIdent_4umxGerWTHGPwUms7Yqu3g TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY_UpiOGlu5Ux6DLM73wSrdpg TY_UpiOGlu5Ux6DLM73wSrdpg;
typedef struct TY_5L3fCt9bX0gyEcO30ervPLw TY_5L3fCt9bX0gyEcO30ervPLw;
typedef struct TIdObj_raN9cHVgzmvaXisezY9aGg9cg TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct TY_4eQHGndY6XBYpFOH09apV8Q TY_4eQHGndY6XBYpFOH09apV8Q;
typedef struct TY_UV3llMMYFckfui8YMBuUZA TY_UV3llMMYFckfui8YMBuUZA;
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
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TEndian_bQ3yFYQJojZPNYsZnS7Zjg;
struct TY_UpiOGlu5Ux6DLM73wSrdpg {
NimStringDesc* Field0;
NI Field1;
TEndian_bQ3yFYQJojZPNYsZnS7Zjg Field2;
NI Field3;
NI Field4;
};
typedef TY_UpiOGlu5Ux6DLM73wSrdpg TY_AkFlnp1eOXOampCkGKpGYA[19];
typedef NU8 TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag;
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
typedef NU8 TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ;
typedef NU8 TInfoOSProp_thetQwB9agpeQ13qFmAcWhg;
struct  TNimObject  {
TNimType* m_type;
};
struct  TIdObj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
};
struct  TIdent_4umxGerWTHGPwUms7Yqu3g  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef NU8 StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ;
struct  StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw  {
  TNimObject Sup;
NI counter;
TY_4eQHGndY6XBYpFOH09apV8Q* data;
StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct TY_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct TY_4eQHGndY6XBYpFOH09apV8Q {
  TGenericSeq Sup;
  TY_UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_UpH3CWy69aOHB2xkQBDirlg_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_NIMCALL(NIM_BOOL, isDefined_BNPf2mtM9a7JF7UKiCAngvg)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc**, nstTake)(StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw*, nstnewStringTable)(StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, defineSymbol_9aZwRQ421PtIIOO9cHOBczPA)(NimStringDesc* symbol, NimStringDesc* value);
N_NIMCALL(void, nstPut)(StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, lookupSymbol_P9buDVDzBybAj9b6sfnhhrtw)(NimStringDesc* symbol);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* gSymbols_tS4f2TwBfIz6zIuFAktH6g;
extern TNimType NTI_pkhT5bYRU9ayIZ9cBuuCx4Xw_;
extern TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag;
extern TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_3, "false", 5);
extern NIM_CONST TY_AkFlnp1eOXOampCkGKpGYA CPU_uYXopJX8pM87pQDCtmgWfQ;
extern NIM_CONST TY_si56KzQTNZIB6Sn9aBGl9cIg OS_Jx0qy9c9bSo4fGkMxUfUaAaw;
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_4, "x86", 3);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_5, "itanium", 7);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_6, "x8664", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_7, "posix", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_8, "unix", 4);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_9, "bsd", 3);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_10, "emulatedthreadvars", 18);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_11, "msdos", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_12, "mswindows", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_13, "win32", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_14, "macintosh", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_15, "sunos", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_16, "littleendian", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_17, "bigendian", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_18, "cpu8", 4);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_19, "cpu16", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_20, "cpu32", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_21, "cpu64", 5);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_22, "nimrawsetjmp", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_23, "nimrod", 6);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_24, "true", 4);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_25, "nimhygiene", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_26, "niminheritable", 14);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_27, "nimmixin", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_28, "nimeffects", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_29, "nimbabel", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_30, "nimcomputedgoto", 15);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_31, "nimunion", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_32, "nimnewshared", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_33, "nimrequiresnimframe", 19);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_34, "nimparsebiggestfloatmagic", 25);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_35, "nimalias", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_36, "nimlocks", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_37, "nimnode", 7);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_38, "nimnomagic64", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_39, "nimvarargstyped", 15);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_40, "nimtypedescfixed", 16);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_41, "nimKnowsNimvm", 13);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_42, "nimArrIdx", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_43, "nimImmediateDeprecated", 22);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_44, "nimNewShiftOps", 14);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_45, "nimDistros", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_46, "nimHasCppDefine", 15);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_47, "nimGenericInOutFlags", 20);
static N_NIMCALL(void, TM_UpH3CWy69aOHB2xkQBDirlg_2)(void) {
	nimGCvisit((void*)gSymbols_tS4f2TwBfIz6zIuFAktH6g, 0);
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

N_NIMCALL(NIM_BOOL, isDefined_BNPf2mtM9a7JF7UKiCAngvg)(NimStringDesc* symbol) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		NimStringDesc** T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = nsthasKey(gSymbols_tS4f2TwBfIz6zIuFAktH6g, symbol);
		if (!T3_) goto LA4_;
		T6_ = (NimStringDesc**)0;
		T6_ = nstTake(gSymbols_tS4f2TwBfIz6zIuFAktH6g, symbol);
		result = !(eqStrings((*T6_), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3)));
	}
	goto LA1_;
	LA4_: ;
	{
		NI T8_;
		T8_ = (NI)0;
		T8_ = nsuCmpIgnoreStyle(symbol, CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field0);
		if (!(T8_ == ((NI) 0))) goto LA9_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA9_: ;
	{
		NI T12_;
		T12_ = (NI)0;
		T12_ = nsuCmpIgnoreStyle(symbol, OS_Jx0qy9c9bSo4fGkMxUfUaAaw[(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)- 1].Field0);
		if (!(T12_ == ((NI) 0))) goto LA13_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA13_: ;
	{
		NimStringDesc* T16_;
		T16_ = (NimStringDesc*)0;
		T16_ = nsuNormalize(symbol);
		switch (hashString(T16_) & 31) {
		case 0: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_13))) goto LA24_;
break;
		case 1: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_12))) goto LA24_;
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_22))) goto LA33_;
break;
		case 2: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_20))) goto LA31_;
break;
		case 3: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_11))) goto LA23_;
break;
		case 6: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_9))) goto LA21_;
break;
		case 13: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_15))) goto LA26_;
break;
		case 15: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4))) goto LA17_;
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_5))) goto LA18_;
break;
		case 19: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_8))) goto LA20_;
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_10))) goto LA22_;
break;
		case 20: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_17))) goto LA28_;
break;
		case 22: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_18))) goto LA29_;
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_19))) goto LA30_;
break;
		case 23: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_6))) goto LA19_;
break;
		case 25: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_21))) goto LA32_;
break;
		case 27: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_16))) goto LA27_;
break;
		case 30: 
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_7))) goto LA20_;
if (eqStrings(T16_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_14))) goto LA25_;
break;
		}
		goto LA34_;
		LA17_: ;
		{
			result = (targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag == ((TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag) 1));
		}
		goto LA35_;
		LA18_: ;
		{
			result = (targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag == ((TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag) 9));
		}
		goto LA35_;
		LA19_: ;
		{
			result = (targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag == ((TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag) 10));
		}
		goto LA35_;
		LA20_: ;
		{
			result = ((7536624 &(1U<<((NU)(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA35_;
		LA21_: ;
		{
			result = ((7680 &(1U<<((NU)(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA35_;
		LA22_: ;
		{
			result = ((OS_Jx0qy9c9bSo4fGkMxUfUaAaw[(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)- 1].Field12 &(1U<<((NU)(((TInfoOSProp_thetQwB9agpeQ13qFmAcWhg) 3))&7U)))!=0);
		}
		goto LA35_;
		LA23_: ;
		{
			result = (targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ == ((TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ) 1));
		}
		goto LA35_;
		LA24_: ;
		{
			result = (targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ == ((TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ) 2));
		}
		goto LA35_;
		LA25_: ;
		{
			result = ((1572864 &(1U<<((NU)(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA35_;
		LA26_: ;
		{
			result = (targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ == ((TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ) 7));
		}
		goto LA35_;
		LA27_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field2 == ((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 0));
		}
		goto LA35_;
		LA28_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field2 == ((TEndian_bQ3yFYQJojZPNYsZnS7Zjg) 1));
		}
		goto LA35_;
		LA29_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 8));
		}
		goto LA35_;
		LA30_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 16));
		}
		goto LA35_;
		LA31_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 32));
		}
		goto LA35_;
		LA32_: ;
		{
			result = (CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 64));
		}
		goto LA35_;
		LA33_: ;
		{
			result = ((1056384 &(1U<<((NU)(targetOS_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA35_;
		LA34_: ;
		{
		}
		LA35_: ;
	}
	LA1_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isDefined_rrIlGPFUdgeaN36zhjolNA)(TIdent_4umxGerWTHGPwUms7Yqu3g* symbol) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = isDefined_BNPf2mtM9a7JF7UKiCAngvg((*symbol).s);
	return result;
}

N_NIMCALL(NI, countDefinedSymbols_0PZoTF9cuNqw59bHjttVR3uw)(void) {
	NI result;
	result = (NI)0;
	result = ((NI) 0);
	{
		NimStringDesc* key;
		NimStringDesc* val;
		key = (NimStringDesc*)0;
		val = (NimStringDesc*)0;
		{
			NI h;
			NI colontmp_;
			NI res;
			h = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = ((*gSymbols_tS4f2TwBfIz6zIuFAktH6g).data ? ((*gSymbols_tS4f2TwBfIz6zIuFAktH6g).data->Sup.len-1) : -1);
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA4;
					h = res;
					{
						if (!!(((*gSymbols_tS4f2TwBfIz6zIuFAktH6g).data->data[h].Field0 == 0))) goto LA7_;
						key = (*gSymbols_tS4f2TwBfIz6zIuFAktH6g).data->data[h].Field0;
						val = (*gSymbols_tS4f2TwBfIz6zIuFAktH6g).data->data[h].Field1;
						{
							if (!!(eqStrings(val, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3)))) goto LA11_;
							result += ((NI) 1);
						}
						LA11_: ;
					}
					LA7_: ;
					res += ((NI) 1);
				} LA4: ;
			}
		}
	}
	return result;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
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

N_NIMCALL(void, defineSymbol_9aZwRQ421PtIIOO9cHOBczPA)(NimStringDesc* symbol, NimStringDesc* value) {
	nstPut(gSymbols_tS4f2TwBfIz6zIuFAktH6g, symbol, value);
}

N_NIMCALL(void, initDefines_cpH2nhcvqZlKU3W1Gx7n5Q)(void) {
	asgnRef((void**) (&gSymbols_tS4f2TwBfIz6zIuFAktH6g), nstnewStringTable(((StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ) 2)));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_23), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_25), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_26), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_27), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_28), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_29), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_30), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_31), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_32), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_33), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_34), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_35), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_36), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_37), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_38), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_39), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_40), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_41), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_42), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_43), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_44), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_45), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_46), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
	defineSymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_47), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24));
}

N_NIMCALL(void, undefSymbol_A5AFbr8Omc1Bw39cFWCpEFg)(NimStringDesc* symbol) {
	nstPut(gSymbols_tS4f2TwBfIz6zIuFAktH6g, symbol, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
}

N_NIMCALL(NimStringDesc*, lookupSymbol_P9buDVDzBybAj9b6sfnhhrtw)(NimStringDesc* symbol) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		NimStringDesc** T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = isDefined_BNPf2mtM9a7JF7UKiCAngvg(symbol);
		if (!T3_) goto LA4_;
		T6_ = (NimStringDesc**)0;
		T6_ = nstTake(gSymbols_tS4f2TwBfIz6zIuFAktH6g, symbol);
		result = copyString((*T6_));
	}
	goto LA1_;
	LA4_: ;
	{
		result = copyString(NIM_NIL);
	}
	LA1_: ;
	return result;
}

N_NIMCALL(NimStringDesc*, lookupSymbol_nkM7rGGDtF7m9cAXTVU51ig)(TIdent_4umxGerWTHGPwUms7Yqu3g* symbol) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = lookupSymbol_P9buDVDzBybAj9b6sfnhhrtw((*symbol).s);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsInit000)(void) {
nimRegisterGlobalMarker(TM_UpH3CWy69aOHB2xkQBDirlg_2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_condsymsDatInit000)(void) {
}

