/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#undef linux
#undef near
typedef struct TNode_bROa11lyF5vxEN9aYNbHmhw TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ;
typedef struct TSym_AXG7xcvKqaxY6koRX1xkCw TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct TIdObj_raN9cHVgzmvaXisezY9aGg9cg TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct TStrTable_f07aOS3dr28kGa5wcE29aFA TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct TType_LTUWCZolpovw9cWE3JBWSUw TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct TIdent_4umxGerWTHGPwUms7Yqu3g TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct TLoc_EtHNvCB0bgfu9bFjzx9cb6aA TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct RopeObj_HF4qJnb6xiOddgPmsxodtQ RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct TLib_NBMxlJ6g3utqUlplqTTHkA TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY_7q7q3E6Oj24ZNVJb9aonhAg TY_7q7q3E6Oj24ZNVJb9aonhAg;
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
typedef struct IntSet_PQrmFm4BXFkFSVOUl1ojSg IntSet_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct Trunk_ul49aWfv9aes8cutmeltT3gQ Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct TY_9brg1xNurxcus33lU4IE1Dw TY_9brg1xNurxcus33lU4IE1Dw;
typedef struct Table_tfmlwa8ktiw8woWAs5vhtQ Table_tfmlwa8ktiw8woWAs5vhtQ;
typedef struct TY_kxu4GK0onha2t9bo86mdVAg TY_kxu4GK0onha2t9bo86mdVAg;
typedef struct TY_48JTohSgTy339bRxHzUD8KA TY_48JTohSgTy339bRxHzUD8KA;
typedef struct ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct TY_npTAlnSu9cyJr3PNURLEKhQ TY_npTAlnSu9cyJr3PNURLEKhQ;
typedef struct TRodReader_16TURXdqtpMMssNVfU5WqQ TRodReader_16TURXdqtpMMssNVfU5WqQ;
typedef struct TLLStream_IHsOGFu33dIY69a9bLlFHlHw TLLStream_IHsOGFu33dIY69a9bLlFHlHw;
typedef struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ TY_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct TY_xDU9bZmv1ZbZkJDaATBekIQ TY_xDU9bZmv1ZbZkJDaATBekIQ;
typedef struct HashSet_pOhUohTPuRItuGmDY0Ddzg HashSet_pOhUohTPuRItuGmDY0Ddzg;
typedef struct TY_4eRCaZmrYLLw2k30GPTiMw TY_4eRCaZmrYLLw2k30GPTiMw;
typedef struct TY_c3iwyH3aQEvxlw6WDIN9c0g TY_c3iwyH3aQEvxlw6WDIN9c0g;
typedef struct TIndex_hUZsEw7f9bvoVPQYLWHrTDQ TIndex_hUZsEw7f9bvoVPQYLWHrTDQ;
typedef struct TIITable_2ud26DHRGdy6LEqDPifSOA TIITable_2ud26DHRGdy6LEqDPifSOA;
typedef struct TY_h0IAOvrRzVzO3NpUxaxxvQ TY_h0IAOvrRzVzO3NpUxaxxvQ;
typedef struct Table_DYt7wxxRVZ9c5PDjh5cfgPA Table_DYt7wxxRVZ9c5PDjh5cfgPA;
typedef struct TY_eBSwX9aa9c1W8S1FJPmehz9aQ TY_eBSwX9aa9c1W8S1FJPmehz9aQ;
typedef struct MemFile_j4SnXNrJDFBxAz4BlbM9aIQ MemFile_j4SnXNrJDFBxAz4BlbM9aIQ;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct TY_QeWl6B6ffS4pU6WWrtcrDw TY_QeWl6B6ffS4pU6WWrtcrDw;
typedef struct TIIPair_Vwj9bWy1xJ8WVCE9ctkEPJDA TIIPair_Vwj9bWy1xJ8WVCE9ctkEPJDA;
typedef struct TY_XUtHSCESHcg7KVfuMIqQmw TY_XUtHSCESHcg7KVfuMIqQmw;
typedef N_NIMCALL_PTR(TNode_bROa11lyF5vxEN9aYNbHmhw*, TY_P9bpkXeUSTn55zt9cNyjKJQA) (ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, TSym_AXG7xcvKqaxY6koRX1xkCw* m, NI32 fileIdx, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache);
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
struct  TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw  {
NI16 line;
NI16 col;
NI32 fileIndex;
};
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
typedef N_NIMCALL_PTR(TSym_AXG7xcvKqaxY6koRX1xkCw*, TY_y9aVVLUC7Upj1FbhiBI5Rsg) (ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, TSym_AXG7xcvKqaxY6koRX1xkCw* m, NI32 fileIdx, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache);
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY_7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
struct  TIdent_4umxGerWTHGPwUms7Yqu3g  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef NU16 TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw;
struct  IntSet_PQrmFm4BXFkFSVOUl1ojSg  {
NI counter;
NI max;
Trunk_ul49aWfv9aes8cutmeltT3gQ* head;
TY_9brg1xNurxcus33lU4IE1Dw* data;
};
struct  Table_tfmlwa8ktiw8woWAs5vhtQ  {
TY_kxu4GK0onha2t9bo86mdVAg* data;
NI counter;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (void* ClE_0);
void* ClE_0;
} TY_xdLb0cyzx3FuM6Q4NnRTpQ;
struct  ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ  {
TY_sksVpmPRIkNR9axiwtD1Guw* modules;
TStrTable_f07aOS3dr28kGa5wcE29aFA packageSyms;
IntSet_PQrmFm4BXFkFSVOUl1ojSg deps;
NIM_BOOL suggestMode;
NIM_BOOL invalidTransitiveClosure;
Table_tfmlwa8ktiw8woWAs5vhtQ inclToMod;
TY_48JTohSgTy339bRxHzUD8KA* importStack;
TNimObject* backend;
ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* config;
TY_xdLb0cyzx3FuM6Q4NnRTpQ doStopCompile;
TSym_AXG7xcvKqaxY6koRX1xkCw* usageSym;
TY_sksVpmPRIkNR9axiwtD1Guw* owners;
TY_npTAlnSu9cyJr3PNURLEKhQ* methods;
};
typedef NU8 TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU8 TCommands_VH3ghgQVwLSg3krOAoXigw;
typedef NU64 TMsgKind_P7z69ae9cO2FQBJme8oWEJoA_Set;
typedef NU16 TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg_Set;
typedef NU8 TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
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
typedef TIdent_4umxGerWTHGPwUms7Yqu3g* TY_CBfZt49asUfAsBVM7a3Rc9cw[8192];
struct  IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw  {
TY_CBfZt49asUfAsBVM7a3Rc9cw buckets;
NI wordCounter;
TIdent_4umxGerWTHGPwUms7Yqu3g* idAnon;
TIdent_4umxGerWTHGPwUms7Yqu3g* idDelegator;
TIdent_4umxGerWTHGPwUms7Yqu3g* emptyIdent;
};
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
struct  Trunk_ul49aWfv9aes8cutmeltT3gQ  {
Trunk_ul49aWfv9aes8cutmeltT3gQ* next;
NI key;
TY_9agrCtWKhCnWWMJpKKugJag bits;
};
struct TY_xDU9bZmv1ZbZkJDaATBekIQ {
NI Field0;
NI32 Field1;
NI32 Field2;
};
struct  HashSet_pOhUohTPuRItuGmDY0Ddzg  {
TY_4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
struct  ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw  {
HashSet_pOhUohTPuRItuGmDY0Ddzg cppDefines;
NimStringDesc* headerFile;
};
struct TY_c3iwyH3aQEvxlw6WDIN9c0g {
TY_sksVpmPRIkNR9axiwtD1Guw* Field0;
TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
typedef NU8 TReasonForRecompile_CESX1DWEXOC2bslyDO2n5A;
struct  TIITable_2ud26DHRGdy6LEqDPifSOA  {
NI counter;
TY_h0IAOvrRzVzO3NpUxaxxvQ* data;
};
struct  TIndex_hUZsEw7f9bvoVPQYLWHrTDQ  {
NI lastIdxKey;
NI lastIdxVal;
TIITable_2ud26DHRGdy6LEqDPifSOA tab;
NimStringDesc* r;
NI offset;
};
struct  Table_DYt7wxxRVZ9c5PDjh5cfgPA  {
TY_eBSwX9aa9c1W8S1FJPmehz9aQ* data;
NI counter;
};
struct  MemFile_j4SnXNrJDFBxAz4BlbM9aIQ  {
void* mem;
NI size;
int handle;
};
struct  TRodReader_16TURXdqtpMMssNVfU5WqQ  {
  TNimObject Sup;
NI pos;
NCSTRING s;
TOption_WspMeQySXNP2XoTWR5MTgg_Set options;
TReasonForRecompile_CESX1DWEXOC2bslyDO2n5A reason;
TY_48JTohSgTy339bRxHzUD8KA* modDeps;
TY_48JTohSgTy339bRxHzUD8KA* files;
NI dataIdx;
NI convertersIdx;
NI initIdx;
NI interfIdx;
NI compilerProcsIdx;
NI methodsIdx;
NimStringDesc* filename;
TIndex_hUZsEw7f9bvoVPQYLWHrTDQ index;
TIndex_hUZsEw7f9bvoVPQYLWHrTDQ imports;
NI readerIndex;
NI line;
NI moduleID;
Table_DYt7wxxRVZ9c5PDjh5cfgPA syms;
MemFile_j4SnXNrJDFBxAz4BlbM9aIQ memfile;
TY_sksVpmPRIkNR9axiwtD1Guw* methods;
NimStringDesc* origFile;
NIM_BOOL inViewMode;
IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache;
};
typedef NU8 TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ;
struct  TLLStream_IHsOGFu33dIY69a9bLlFHlHw  {
  TNimObject Sup;
TLLStreamKind_jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineOffset;
};
struct  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA  {
TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
TY_zuqP4Riz26Oi5fWgPYVEgA* concreteTypes;
NI compilesId;
};
struct TY_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct TY_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
struct  TIIPair_Vwj9bWy1xJ8WVCE9ctkEPJDA  {
NI key;
NI val;
};
struct TY_XUtHSCESHcg7KVfuMIqQmw {
NI Field0;
NI Field1;
TSym_AXG7xcvKqaxY6koRX1xkCw* Field2;
};
struct TY_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
struct TY_48JTohSgTy339bRxHzUD8KA {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  TType_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct TY_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct TY_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
struct TY_kxu4GK0onha2t9bo86mdVAg {
  TGenericSeq Sup;
  TY_xDU9bZmv1ZbZkJDaATBekIQ data[SEQ_DECL_SIZE];
};
struct TY_npTAlnSu9cyJr3PNURLEKhQ {
  TGenericSeq Sup;
  TY_c3iwyH3aQEvxlw6WDIN9c0g data[SEQ_DECL_SIZE];
};
struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct TY_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  TY_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct TY_h0IAOvrRzVzO3NpUxaxxvQ {
  TGenericSeq Sup;
  TIIPair_Vwj9bWy1xJ8WVCE9ctkEPJDA data[SEQ_DECL_SIZE];
};
struct TY_eBSwX9aa9c1W8S1FJPmehz9aQ {
  TGenericSeq Sup;
  TY_XUtHSCESHcg7KVfuMIqQmw data[SEQ_DECL_SIZE];
};
N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, includeModule_JppwGSTRzMyyxpvbvCZqpg)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, TSym_AXG7xcvKqaxY6koRX1xkCw* s, NI32 fileIdx, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache);
N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, parseFile_9cEZ7X5V9c6ooHZhVrYd0X7Q)(NI32 fileIdx, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache);
N_NIMCALL(void, addDep_bpTLmRO2YCcsGWIIZuYw3w)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* g, TSym_AXG7xcvKqaxY6koRX1xkCw* m, NI32 dep);
N_NIMCALL(void, addIncludeDep_8AuVl1X7MAtzKBj1JR4bNw)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* g, NI32 module, NI32 includeFile);
N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, importModule_vLU55x06M6gkPBEl4n83xQ)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, TSym_AXG7xcvKqaxY6koRX1xkCw* s, NI32 fileIdx, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache);
N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, compileModule_4whAi4Q0NnMZgd9cwfvXbVg)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, NI32 fileIdx, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache, TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw_Set flags);
N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, getModule_pXsjDtOjTbIc0Z4pPVTuIA)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* g, NI32 fileIdx);
N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, newModule_x9bAmXhM9bUiXGO4VWhXsPNg)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, NI32 fileIdx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, toFullPath_7s19cb7WBgztz9aqEBzwwuqA)(NI32 fileIdx);
N_NIMCALL(TIdent_4umxGerWTHGPwUms7Yqu3g*, getIdent_oH8GBf4tG3b1F5BIuNPwtA)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY_7q7q3E6Oj24ZNVJb9aonhAg* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(NIM_BOOL, isNimIdentifier_n0zyXjleUOF89crTSRzYbGQ)(NimStringDesc* s);
N_NIMCALL(void, rawMessage_tBJ8mvo7MzzirsGkrHVc9cw)(TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc* arg);
N_NIMCALL(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw, newLineInfo_Shbbzc11c9bnWkBc9b42npzA)(NI32 fileInfoIdx, NI line, NI col);
N_NIMCALL(NimStringDesc*, getPackageName_UaWiM5ZjesnVJ9aMCHdFTlg)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, strTableGet_lwInE2j9aCwWqT2bvslVRNA)(TStrTable_f07aOS3dr28kGa5wcE29aFA t, TIdent_4umxGerWTHGPwUms7Yqu3g* name);
N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, newSym_2uJTpCZGZAi7a4eAm1ds8Q)(TSymKind_cNCW9acsSznmEccl1fgQwkw symKind, TIdent_4umxGerWTHGPwUms7Yqu3g* name, TSym_AXG7xcvKqaxY6koRX1xkCw* owner, TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info);
N_NIMCALL(void, initStrTable_dDG9ckEId9ai4WID9aLQcRYNg)(TStrTable_f07aOS3dr28kGa5wcE29aFA* x);
N_NIMCALL(void, strTableAdd_Tcb9aDxXz9ch8cAXKFCMrlbA)(TStrTable_f07aOS3dr28kGa5wcE29aFA* t, TSym_AXG7xcvKqaxY6koRX1xkCw* n);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen);
N_NIMCALL(void, localError_GarD0CQJ5aQhoHekHYinVQ)(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NIM_BOOL, strTableIncl_ZkoOMnVPhudcLs4AfKupyg)(TStrTable_f07aOS3dr28kGa5wcE29aFA* t, TSym_AXG7xcvKqaxY6koRX1xkCw* n, NIM_BOOL onConflictKeepOld);
N_NIMCALL(TRodReader_16TURXdqtpMMssNVfU5WqQ*, handleSymbolFile_GdfZQXu9boYqDgDFA9bGeomg)(TSym_AXG7xcvKqaxY6koRX1xkCw* module, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache);
N_NIMCALL(void, internalError_5XY9cUy7hZmUusM38U9cYYdw)(NimStringDesc* errMsg);
static N_INLINE(NI, getID_2S0wtMB4mi8h75E9a7bA6mAast)(void);
N_NIMCALL(NIM_BOOL, processModule_pyM9ad0hA9cMjwxiROot9a9cSw)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, TSym_AXG7xcvKqaxY6koRX1xkCw* module, TLLStream_IHsOGFu33dIY69a9bLlFHlHw* stream, TRodReader_16TURXdqtpMMssNVfU5WqQ* rd, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache);
N_NIMCALL(TLLStream_IHsOGFu33dIY69a9bLlFHlHw*, llStreamOpen_8hTxoBHhwtwZR9cM9bBLMsCQ)(FILE* f);
N_NIMCALL(NIM_BOOL, isDirty_tNb7AgepscAanJnzSeLytQ)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* g, TSym_AXG7xcvKqaxY6koRX1xkCw* m);
N_NIMCALL(void, markClientsDirty_m8vBjzOPK6kug9cJ6IVqGng)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* g, NI32 fileIdx);
N_NIMCALL(NI32, fileInfoIdx_RXxXBoV2drjjVnQa9abo19cQ)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, slash__lXoMhn1ZYc9cAJa9bfA61msg)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, resetSysTypes_ZrgFZHzu3Y75COwdP7g2TQ)(void);
N_NIMCALL(void, wantMainModule_PaLBcYS9amHGl2vf0V7P07w)(void);
N_NIMCALL(void, fatal_VpilfPWbplGz6ny7O9cfr2g_4)(TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
N_NIMCALL(void, compileSystemModule_xhh9aF6yqEx9bJF3Ncp7tcpw)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache);
N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, makeModule_cYj9cbH6oZp9cHKUXpOSwCGw)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, NimStringDesc* filename);
extern TY_P9bpkXeUSTn55zt9cNyjKJQA gIncludeFile_xRgu8Wul7H8ptXIl9aVbwIw;
extern TY_y9aVVLUC7Upj1FbhiBI5Rsg gImportModule_6yHi5jlyB9bdgfbMGpclQWg;
extern TNimType NTI_83n62yi1b9bgUtRR9axFWW9ag_;
extern TNimType NTI_AXG7xcvKqaxY6koRX1xkCw_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern NI gMainPackageId_9cwEOFAmQDogkWTNLtVENxw;
extern TCommands_VH3ghgQVwLSg3krOAoXigw gCmd_0oKScFtMiSKnjiHF9cU9c5GQ;
extern NI gFrontEndId_gyRrMPnY7JyC6tAu9bCfGng;
extern NIM_BOOL gProjectIsStdin_YvC8IOG0BaMX6AECkLfsTg;
extern TMsgKind_P7z69ae9cO2FQBJme8oWEJoA_Set gNotes_ra0BBMaJz6cOxn1JA3c6Bg;
extern TMsgKind_P7z69ae9cO2FQBJme8oWEJoA_Set gMainPackageNotes_g0SF5CYRDJtnU59byFMXYHg;
extern TMsgKind_P7z69ae9cO2FQBJme8oWEJoA_Set ForeignPackageNotes_5QHXi4dPy9aohMG3tPKFteA;
extern TSym_AXG7xcvKqaxY6koRX1xkCw* systemModule_zVRpbHNEGZHBIbdtvq2fVg;
extern NI32 systemFileIdx_q0u9cGGPPFNGrj9c5inL1WXQ;
extern NimStringDesc* libpath_sniQ2ei4mGD9av6vrH9bfUgg;
extern NimStringDesc* gProjectFull_V1rcVHDANDR4ly2ul00asg;
extern TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw gCmdLineInfo_yhfh3fjBy4h9bf6keLoh9aXQ;
extern NI32 gProjectMainIdx_s51E9a7f5CnUiA9bhp5yxOJQ;
STRING_LITERAL(TM_M5T16KOkc0tDi9bZeKl6v1w_2, "unknown", 7);
STRING_LITERAL(TM_M5T16KOkc0tDi9bZeKl6v1w_3, "module names need to be unique per Nimble package; module clash"
"es with ", 71);
STRING_LITERAL(TM_M5T16KOkc0tDi9bZeKl6v1w_4, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TM_M5T16KOkc0tDi9bZeKl6v1w_5, "system.nim", 10);
STRING_LITERAL(TM_M5T16KOkc0tDi9bZeKl6v1w_6, "", 0);
STRING_LITERAL(TM_M5T16KOkc0tDi9bZeKl6v1w_7, "nim", 3);
STRING_LITERAL(TM_M5T16KOkc0tDi9bZeKl6v1w_8, "stdin", 5);

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, includeModule_JppwGSTRzMyyxpvbvCZqpg)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, TSym_AXG7xcvKqaxY6koRX1xkCw* s, NI32 fileIdx, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = parseFile_9cEZ7X5V9c6ooHZhVrYd0X7Q(fileIdx, cache);
	addDep_bpTLmRO2YCcsGWIIZuYw3w(graph, s, fileIdx);
	addIncludeDep_8AuVl1X7MAtzKBj1JR4bNw(graph, ((NI32) ((*s).position)), fileIdx);
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
			if (!((NU32)((*c_2).refcount) < (NU32)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, newModule_x9bAmXhM9bUiXGO4VWhXsPNg)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, NI32 fileIdx) {
	TSym_AXG7xcvKqaxY6koRX1xkCw* result;
	NimStringDesc* filename;
	TY_7q7q3E6Oj24ZNVJb9aonhAg T1_;
	NimStringDesc* pck;
	NimStringDesc* pck2;
	TIdent_4umxGerWTHGPwUms7Yqu3g* pack;
	TSym_AXG7xcvKqaxY6koRX1xkCw* packSym;
	TSym_AXG7xcvKqaxY6koRX1xkCw* existing;
	NIM_BOOL T29_;
	result = (TSym_AXG7xcvKqaxY6koRX1xkCw*)0;
	result = (TSym_AXG7xcvKqaxY6koRX1xkCw*) newObj((&NTI_83n62yi1b9bgUtRR9axFWW9ag_), sizeof(TSym_AXG7xcvKqaxY6koRX1xkCw));
	(*result).Sup.Sup.m_type = (&NTI_AXG7xcvKqaxY6koRX1xkCw_);
	(*result).Sup.id = ((NI) -1);
	(*result).kind = ((TSymKind_cNCW9acsSznmEccl1fgQwkw) 6);
	filename = toFullPath_7s19cb7WBgztz9aqEBzwwuqA(fileIdx);
	memset((void*)(&T1_), 0, sizeof(T1_));
	nossplitFile(filename, (&T1_));
	asgnRefNoCycle((void**) (&(*result).name), getIdent_oH8GBf4tG3b1F5BIuNPwtA(T1_.Field1));
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = isNimIdentifier_n0zyXjleUOF89crTSRzYbGQ((*(*result).name).s);
		if (!!(T4_)) goto LA5_;
		rawMessage_tBJ8mvo7MzzirsGkrHVc9cw(((TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 22), (*(*result).name).s);
	}
	LA5_: ;
	(*result).info = newLineInfo_Shbbzc11c9bnWkBc9b42npzA(fileIdx, ((NI) 1), ((NI) 1));
	pck = getPackageName_UaWiM5ZjesnVJ9aMCHdFTlg(filename);
	{
		if (!(((NI) 0) < (pck ? pck->Sup.len : 0))) goto LA9_;
		pck2 = pck;
	}
	goto LA7_;
	LA9_: ;
	{
		pck2 = copyString(((NimStringDesc*) &TM_M5T16KOkc0tDi9bZeKl6v1w_2));
	}
	LA7_: ;
	pack = getIdent_oH8GBf4tG3b1F5BIuNPwtA(pck2);
	packSym = strTableGet_lwInE2j9aCwWqT2bvslVRNA((*graph).packageSyms, pack);
	{
		TIdent_4umxGerWTHGPwUms7Yqu3g* T16_;
		if (!(packSym == NIM_NIL)) goto LA14_;
		T16_ = (TIdent_4umxGerWTHGPwUms7Yqu3g*)0;
		T16_ = getIdent_oH8GBf4tG3b1F5BIuNPwtA(pck2);
		packSym = newSym_2uJTpCZGZAi7a4eAm1ds8Q(((TSymKind_cNCW9acsSznmEccl1fgQwkw) 23), T16_, NIM_NIL, (*result).info);
		initStrTable_dDG9ckEId9ai4WID9aLQcRYNg((&(*packSym).kindU.S3.tab));
		strTableAdd_Tcb9aDxXz9ch8cAXKFCMrlbA((&(*graph).packageSyms), packSym);
	}
	LA14_: ;
	asgnRefNoCycle((void**) (&(*result).owner), packSym);
	(*result).position = ((NI) (fileIdx));
	{
		if (!(((*graph).modules ? (*graph).modules->Sup.len : 0) <= ((NI) (fileIdx)))) goto LA19_;
		(*graph).modules = (TY_sksVpmPRIkNR9axiwtD1Guw*) setLengthSeq(&((*graph).modules)->Sup, sizeof(TSym_AXG7xcvKqaxY6koRX1xkCw*), ((NI) ((NI32)(fileIdx + ((NI32) 1)))));
	}
	LA19_: ;
	asgnRefNoCycle((void**) (&(*graph).modules->data[(*result).position]), result);
	(*result).flags |= ((NU64)1)<<((((TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 0))%(sizeof(NU64)*8));
	initStrTable_dDG9ckEId9ai4WID9aLQcRYNg((&(*result).kindU.S3.tab));
	strTableAdd_Tcb9aDxXz9ch8cAXKFCMrlbA((&(*result).kindU.S3.tab), result);
	existing = strTableGet_lwInE2j9aCwWqT2bvslVRNA((*packSym).kindU.S3.tab, (*result).name);
	{
		NIM_BOOL T23_;
		NimStringDesc* T27_;
		NimStringDesc* T28_;
		T23_ = (NIM_BOOL)0;
		T23_ = !((existing == NIM_NIL));
		if (!(T23_)) goto LA24_;
		T23_ = !(((*existing).info.fileIndex == (*result).info.fileIndex));
		LA24_: ;
		if (!T23_) goto LA25_;
		T27_ = (NimStringDesc*)0;
		T28_ = (NimStringDesc*)0;
		T28_ = toFullPath_7s19cb7WBgztz9aqEBzwwuqA((*existing).info.fileIndex);
		T27_ = rawNewString(T28_->Sup.len + 71);
appendString(T27_, ((NimStringDesc*) &TM_M5T16KOkc0tDi9bZeKl6v1w_3));
appendString(T27_, T28_);
		localError_GarD0CQJ5aQhoHekHYinVQ((*result).info, T27_);
	}
	LA25_: ;
	T29_ = (NIM_BOOL)0;
	T29_ = strTableIncl_ZkoOMnVPhudcLs4AfKupyg((&(*packSym).kindU.S3.tab), result, NIM_FALSE);
	return result;
}

static N_INLINE(NI, getID_2S0wtMB4mi8h75E9a7bA6mAast)(void) {
	NI result;
	result = (NI)0;
	result = gFrontEndId_gyRrMPnY7JyC6tAu9bCfGng;
	gFrontEndId_gyRrMPnY7JyC6tAu9bCfGng += ((NI) 1);
	return result;
}

N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, compileModule_4whAi4Q0NnMZgd9cwfvXbVg)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, NI32 fileIdx, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache, TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw_Set flags) {
	TSym_AXG7xcvKqaxY6koRX1xkCw* result;
{	result = (TSym_AXG7xcvKqaxY6koRX1xkCw*)0;
	result = getModule_pXsjDtOjTbIc0Z4pPVTuIA(graph, fileIdx);
	{
		TRodReader_16TURXdqtpMMssNVfU5WqQ* rd;
		TLLStream_IHsOGFu33dIY69a9bLlFHlHw* T18_;
		NIM_BOOL T26_;
		if (!(result == NIM_NIL)) goto LA3_;
		result = newModule_x9bAmXhM9bUiXGO4VWhXsPNg(graph, fileIdx);
		rd = (TRodReader_16TURXdqtpMMssNVfU5WqQ*)0;
		(*result).flags = ((*result).flags | flags);
		{
			if (!(((*result).flags &((NU64)1<<((NU)(((TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 12))&63U)))!=0)) goto LA7_;
			gMainPackageId_9cwEOFAmQDogkWTNLtVENxw = (*(*result).owner).Sup.id;
		}
		LA7_: ;
		{
			if (!((36870 &(1U<<((NU)(gCmd_0oKScFtMiSKnjiHF9cU9c5GQ)&31U)))!=0)) goto LA11_;
			rd = handleSymbolFile_GdfZQXu9boYqDgDFA9bGeomg(result, cache);
			{
				if (!((*result).Sup.id < ((NI) 0))) goto LA15_;
				internalError_5XY9cUy7hZmUusM38U9cYYdw(((NimStringDesc*) &TM_M5T16KOkc0tDi9bZeKl6v1w_4));
				goto BeforeRet_;
			}
			LA15_: ;
		}
		goto LA9_;
		LA11_: ;
		{
			(*result).Sup.id = getID_2S0wtMB4mi8h75E9a7bA6mAast();
		}
		LA9_: ;
		T18_ = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*)0;
		{
			NIM_BOOL T21_;
			T21_ = (NIM_BOOL)0;
			T21_ = ((flags &((NU64)1<<((NU)(((TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 12))&63U)))!=0);
			if (!(T21_)) goto LA22_;
			T21_ = gProjectIsStdin_YvC8IOG0BaMX6AECkLfsTg;
			LA22_: ;
			if (!T21_) goto LA23_;
			T18_ = llStreamOpen_8hTxoBHhwtwZR9cM9bBLMsCQ(stdin);
		}
		goto LA19_;
		LA23_: ;
		{
			T18_ = NIM_NIL;
		}
		LA19_: ;
		T26_ = (NIM_BOOL)0;
		T26_ = processModule_pyM9ad0hA9cMjwxiROot9a9cSw(graph, result, T18_, rd, cache);
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T28_;
		TLLStream_IHsOGFu33dIY69a9bLlFHlHw* T31_;
		NIM_BOOL T39_;
		T28_ = (NIM_BOOL)0;
		T28_ = isDirty_tNb7AgepscAanJnzSeLytQ(graph, result);
		if (!T28_) goto LA29_;
		(*result).flags &= ~(((NU64)1) << ((((TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 9)) % (sizeof(NU64)*8)));
		initStrTable_dDG9ckEId9ai4WID9aLQcRYNg((&(*result).kindU.S3.tab));
		asgnRefNoCycle((void**) (&(*result).ast), NIM_NIL);
		T31_ = (TLLStream_IHsOGFu33dIY69a9bLlFHlHw*)0;
		{
			NIM_BOOL T34_;
			T34_ = (NIM_BOOL)0;
			T34_ = ((flags &((NU64)1<<((NU)(((TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 12))&63U)))!=0);
			if (!(T34_)) goto LA35_;
			T34_ = gProjectIsStdin_YvC8IOG0BaMX6AECkLfsTg;
			LA35_: ;
			if (!T34_) goto LA36_;
			T31_ = llStreamOpen_8hTxoBHhwtwZR9cM9bBLMsCQ(stdin);
		}
		goto LA32_;
		LA36_: ;
		{
			T31_ = NIM_NIL;
		}
		LA32_: ;
		T39_ = (NIM_BOOL)0;
		T39_ = processModule_pyM9ad0hA9cMjwxiROot9a9cSw(graph, result, T31_, NIM_NIL, cache);
		markClientsDirty_m8vBjzOPK6kug9cJ6IVqGng(graph, fileIdx);
	}
	goto LA1_;
	LA29_: ;
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, importModule_vLU55x06M6gkPBEl4n83xQ)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, TSym_AXG7xcvKqaxY6koRX1xkCw* s, NI32 fileIdx, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache) {
	TSym_AXG7xcvKqaxY6koRX1xkCw* result;
	result = (TSym_AXG7xcvKqaxY6koRX1xkCw*)0;
	result = compileModule_4whAi4Q0NnMZgd9cwfvXbVg(graph, fileIdx, cache, 0);
	addDep_bpTLmRO2YCcsGWIIZuYw3w(graph, s, fileIdx);
	{
		if (!((*(*s).owner).Sup.id == gMainPackageId_9cwEOFAmQDogkWTNLtVENxw)) goto LA3_;
		gNotes_ra0BBMaJz6cOxn1JA3c6Bg = gMainPackageNotes_g0SF5CYRDJtnU59byFMXYHg;
	}
	goto LA1_;
	LA3_: ;
	{
		gNotes_ra0BBMaJz6cOxn1JA3c6Bg = ForeignPackageNotes_5QHXi4dPy9aohMG3tPKFteA;
	}
	LA1_: ;
	return result;
}

N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, makeModule_cYj9cbH6oZp9cHKUXpOSwCGw)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, NimStringDesc* filename) {
	TSym_AXG7xcvKqaxY6koRX1xkCw* result;
	NI32 T1_;
	result = (TSym_AXG7xcvKqaxY6koRX1xkCw*)0;
	T1_ = (NI32)0;
	T1_ = fileInfoIdx_RXxXBoV2drjjVnQa9abo19cQ(filename);
	result = newModule_x9bAmXhM9bUiXGO4VWhXsPNg(graph, T1_);
	(*result).Sup.id = getID_2S0wtMB4mi8h75E9a7bA6mAast();
	return result;
}

N_NIMCALL(void, compileSystemModule_xhh9aF6yqEx9bJF3Ncp7tcpw)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache) {
	{
		NimStringDesc* T5_;
		TSym_AXG7xcvKqaxY6koRX1xkCw* T6_;
		if (!(systemModule_zVRpbHNEGZHBIbdtvq2fVg == NIM_NIL)) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = slash__lXoMhn1ZYc9cAJa9bfA61msg(libpath_sniQ2ei4mGD9av6vrH9bfUgg, ((NimStringDesc*) &TM_M5T16KOkc0tDi9bZeKl6v1w_5));
		systemFileIdx_q0u9cGGPPFNGrj9c5inL1WXQ = fileInfoIdx_RXxXBoV2drjjVnQa9abo19cQ(T5_);
		T6_ = (TSym_AXG7xcvKqaxY6koRX1xkCw*)0;
		T6_ = compileModule_4whAi4Q0NnMZgd9cwfvXbVg(graph, systemFileIdx_q0u9cGGPPFNGrj9c5inL1WXQ, cache, 8192);
	}
	LA3_: ;
}

N_NIMCALL(void, resetSystemArtifacts_t8G2jUOjNcq3hJq28ntCGg)(void) {
	resetSysTypes_ZrgFZHzu3Y75COwdP7g2TQ();
}

N_NIMCALL(void, wantMainModule_PaLBcYS9amHGl2vf0V7P07w)(void) {
	NimStringDesc* T5_;
	{
		if (!((gProjectFull_V1rcVHDANDR4ly2ul00asg ? gProjectFull_V1rcVHDANDR4ly2ul00asg->Sup.len : 0) == ((NI) 0))) goto LA3_;
		fatal_VpilfPWbplGz6ny7O9cfr2g_4(gCmdLineInfo_yhfh3fjBy4h9bf6keLoh9aXQ, ((TMsgKind_IGAWgv9aR2KqPKJfPZPEWaw) 192), ((NimStringDesc*) &TM_M5T16KOkc0tDi9bZeKl6v1w_6));
	}
	LA3_: ;
	T5_ = (NimStringDesc*)0;
	T5_ = nosaddFileExt(gProjectFull_V1rcVHDANDR4ly2ul00asg, ((NimStringDesc*) &TM_M5T16KOkc0tDi9bZeKl6v1w_7));
	gProjectMainIdx_s51E9a7f5CnUiA9bhp5yxOJQ = fileInfoIdx_RXxXBoV2drjjVnQa9abo19cQ(T5_);
}

N_NIMCALL(void, compileProject_9aLjcEMW43J17TVjXtx6HQg)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache, NI32 projectFileIdx) {
	NI32 systemFileIdx;
	NimStringDesc* T1_;
	NI32 projectFile;
	wantMainModule_PaLBcYS9amHGl2vf0V7P07w();
	T1_ = (NimStringDesc*)0;
	T1_ = slash__lXoMhn1ZYc9cAJa9bfA61msg(libpath_sniQ2ei4mGD9av6vrH9bfUgg, ((NimStringDesc*) &TM_M5T16KOkc0tDi9bZeKl6v1w_5));
	systemFileIdx = fileInfoIdx_RXxXBoV2drjjVnQa9abo19cQ(T1_);
	{
		if (!(projectFileIdx < ((NI32) 0))) goto LA4_;
		projectFile = gProjectMainIdx_s51E9a7f5CnUiA9bhp5yxOJQ;
	}
	goto LA2_;
	LA4_: ;
	{
		projectFile = projectFileIdx;
	}
	LA2_: ;
	(*graph).importStack = (TY_48JTohSgTy339bRxHzUD8KA*) incrSeqV2(&((*graph).importStack)->Sup, sizeof(NI32));
	(*graph).importStack->data[(*graph).importStack->Sup.len] = projectFile;
	++(*graph).importStack->Sup.len;
	{
		TSym_AXG7xcvKqaxY6koRX1xkCw* T11_;
		if (!(projectFile == systemFileIdx)) goto LA9_;
		T11_ = (TSym_AXG7xcvKqaxY6koRX1xkCw*)0;
		T11_ = compileModule_4whAi4Q0NnMZgd9cwfvXbVg(graph, projectFile, cache, 12288);
	}
	goto LA7_;
	LA9_: ;
	{
		TSym_AXG7xcvKqaxY6koRX1xkCw* T13_;
		compileSystemModule_xhh9aF6yqEx9bJF3Ncp7tcpw(graph, cache);
		T13_ = (TSym_AXG7xcvKqaxY6koRX1xkCw*)0;
		T13_ = compileModule_4whAi4Q0NnMZgd9cwfvXbVg(graph, projectFile, cache, 4096);
	}
	LA7_: ;
}

N_NIMCALL(TSym_AXG7xcvKqaxY6koRX1xkCw*, makeStdinModule_RdnhQ7RPFZ4bkbs3PJMn5g)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph) {
	TSym_AXG7xcvKqaxY6koRX1xkCw* result;
	result = (TSym_AXG7xcvKqaxY6koRX1xkCw*)0;
	result = makeModule_cYj9cbH6oZp9cHKUXpOSwCGw(graph, ((NimStringDesc*) &TM_M5T16KOkc0tDi9bZeKl6v1w_8));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit000)(void) {
	gIncludeFile_xRgu8Wul7H8ptXIl9aVbwIw = includeModule_JppwGSTRzMyyxpvbvCZqpg;
	gImportModule_6yHi5jlyB9bdgfbMGpclQWg = importModule_vLU55x06M6gkPBEl4n83xQ;
}

NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit000)(void) {
}

