/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <setjmp.h>
#undef linux
#undef near
typedef struct TPassContext_qNsm39cWb35W2r5AAd9ch87g TPassContext_qNsm39cWb35W2r5AAd9ch87g;
typedef struct ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ;
typedef struct TSym_AXG7xcvKqaxY6koRX1xkCw TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct TGen_1n9c8bLkAy1k20AgnlhyBBw TGen_1n9c8bLkAy1k20AgnlhyBBw;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw;
typedef struct TIdObj_raN9cHVgzmvaXisezY9aGg9cg TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct TStrTable_f07aOS3dr28kGa5wcE29aFA TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct TType_LTUWCZolpovw9cWE3JBWSUw TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct TIdent_4umxGerWTHGPwUms7Yqu3g TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct TNode_bROa11lyF5vxEN9aYNbHmhw TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct TLoc_EtHNvCB0bgfu9bFjzx9cb6aA TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct RopeObj_HF4qJnb6xiOddgPmsxodtQ RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct TLib_NBMxlJ6g3utqUlplqTTHkA TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct TY_YLg9aN9cjdxVYWdZ7YCb9batg TY_YLg9aN9cjdxVYWdZ7YCb9batg;
typedef struct TFileInfo_UOayjckboTXG9aVx8iKOs9aQ TFileInfo_UOayjckboTXG9aVx8iKOs9aQ;
typedef struct TY_LViedqhb8iWVoqgZs5LifA TY_LViedqhb8iWVoqgZs5LifA;
typedef struct RstGenerator_bnsEnRKte9bKKfeTFpYaoSQ RstGenerator_bnsEnRKte9bKKfeTFpYaoSQ;
typedef struct TY_b7kA8pLABz0wMAUNGYo6Wg TY_b7kA8pLABz0wMAUNGYo6Wg;
typedef struct Table_zjMaDBasw1LnKbj11akpfw Table_zjMaDBasw1LnKbj11akpfw;
typedef struct TY_pUxI6Ljo6IKKHXKOZkQ7Og TY_pUxI6Ljo6IKKHXKOZkQ7Og;
typedef struct JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct IntSet_PQrmFm4BXFkFSVOUl1ojSg IntSet_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct Trunk_ul49aWfv9aes8cutmeltT3gQ Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct TY_9brg1xNurxcus33lU4IE1Dw TY_9brg1xNurxcus33lU4IE1Dw;
typedef struct Table_tfmlwa8ktiw8woWAs5vhtQ Table_tfmlwa8ktiw8woWAs5vhtQ;
typedef struct TY_kxu4GK0onha2t9bo86mdVAg TY_kxu4GK0onha2t9bo86mdVAg;
typedef struct TY_48JTohSgTy339bRxHzUD8KA TY_48JTohSgTy339bRxHzUD8KA;
typedef struct ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct TY_npTAlnSu9cyJr3PNURLEKhQ TY_npTAlnSu9cyJr3PNURLEKhQ;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct TY_4eQHGndY6XBYpFOH09apV8Q TY_4eQHGndY6XBYpFOH09apV8Q;
typedef struct TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ TY_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct TocEntry_z7kal23LlR1mL50YJIPMCw TocEntry_z7kal23LlR1mL50YJIPMCw;
typedef struct RstNode_CjRS2xrmuD58kdGedE3yyg RstNode_CjRS2xrmuD58kdGedE3yyg;
typedef struct TY_sr3s7uVHpu9cEbbDnCSg8yQ TY_sr3s7uVHpu9cEbbDnCSg8yQ;
typedef struct OrderedTable_AF39bJ7XDr6gpANuGpxkHrw OrderedTable_AF39bJ7XDr6gpANuGpxkHrw;
typedef struct TY_MlAD6nAPq9bHKla9cWiIZP0g TY_MlAD6nAPq9bHKla9cWiIZP0g;
typedef struct TY_oLpBKXzW3hF9aCVMo5EymfQ TY_oLpBKXzW3hF9aCVMo5EymfQ;
typedef struct TY_xDU9bZmv1ZbZkJDaATBekIQ TY_xDU9bZmv1ZbZkJDaATBekIQ;
typedef struct HashSet_pOhUohTPuRItuGmDY0Ddzg HashSet_pOhUohTPuRItuGmDY0Ddzg;
typedef struct TY_4eRCaZmrYLLw2k30GPTiMw TY_4eRCaZmrYLLw2k30GPTiMw;
typedef struct TY_c3iwyH3aQEvxlw6WDIN9c0g TY_c3iwyH3aQEvxlw6WDIN9c0g;
typedef struct TY_UV3llMMYFckfui8YMBuUZA TY_UV3llMMYFckfui8YMBuUZA;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct TY_sawZST1Esj3o7EY9ayWwGPw TY_sawZST1Esj3o7EY9ayWwGPw;
typedef struct TY_awOivLjlO76sGdHY7nQUjQ TY_awOivLjlO76sGdHY7nQUjQ;
typedef struct TY_QeWl6B6ffS4pU6WWrtcrDw TY_QeWl6B6ffS4pU6WWrtcrDw;
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
struct  TPassContext_qNsm39cWb35W2r5AAd9ch87g  {
  TNimObject Sup;
NIM_BOOL fromCache;
};
struct  TGen_1n9c8bLkAy1k20AgnlhyBBw  {
  TPassContext_qNsm39cWb35W2r5AAd9ch87g Sup;
TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* doc;
TSym_AXG7xcvKqaxY6koRX1xkCw* module;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TFileInfo_UOayjckboTXG9aVx8iKOs9aQ  {
NimStringDesc* fullPath;
NimStringDesc* projPath;
NimStringDesc* shortName;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* quotedName;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* quotedFullName;
TY_LViedqhb8iWVoqgZs5LifA* lines;
NimStringDesc* dirtyfile;
};
typedef NU8 OutputTarget_lDlBg9cTod71s9abpUj82lsw;
typedef NU8 RstParseOption_fiZmsylYkyh6nEciRZcPsw_Set;
typedef N_NIMCALL_PTR(NimStringDesc*, TY_zTTG1BW0RKgQJxZCxtMtzw) (NimStringDesc* filename);
typedef NU8 MsgKind_iviJnHlj9acPYlnNRbd9bhkQ;
typedef N_NIMCALL_PTR(void, TY_tyrxeYd2fCCwD9a8BTYcYJA) (NimStringDesc* filename, NI line, NI col, MsgKind_iviJnHlj9acPYlnNRbd9bhkQ msgKind, NimStringDesc* arg);
typedef NimStringDesc* TY_C9cQfUOxfT2Mk6yT19cPu9aIA[5];
struct  Table_zjMaDBasw1LnKbj11akpfw  {
TY_pUxI6Ljo6IKKHXKOZkQ7Og* data;
NI counter;
};
struct  RstGenerator_bnsEnRKte9bKKfeTFpYaoSQ  {
  TNimObject Sup;
OutputTarget_lDlBg9cTod71s9abpUj82lsw target;
StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* config;
NI splitAfter;
NI listingCounter;
TY_b7kA8pLABz0wMAUNGYo6Wg* tocPart;
NIM_BOOL hasToc;
NimStringDesc* theIndex;
RstParseOption_fiZmsylYkyh6nEciRZcPsw_Set options;
TY_zTTG1BW0RKgQJxZCxtMtzw findFile;
TY_tyrxeYd2fCCwD9a8BTYcYJA msgHandler;
NimStringDesc* filename;
TY_C9cQfUOxfT2Mk6yT19cPu9aIA meta;
NimStringDesc* currentSection;
Table_zjMaDBasw1LnKbj11akpfw seenIndexTerms;
};
typedef RopeObj_HF4qJnb6xiOddgPmsxodtQ* TY_YAK3AUlia0Xx2JCfYWAUzg[25];
struct  TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ  {
  RstGenerator_bnsEnRKte9bKKfeTFpYaoSQ Sup;
RopeObj_HF4qJnb6xiOddgPmsxodtQ* modDesc;
NI id;
TY_YAK3AUlia0Xx2JCfYWAUzg toc;
TY_YAK3AUlia0Xx2JCfYWAUzg section;
NimStringDesc* indexValFilename;
NimStringDesc* analytics;
StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* seenSymbols;
JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* jArray;
TStrTable_f07aOS3dr28kGa5wcE29aFA types;
NIM_BOOL isPureRst;
};
typedef NU8 TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} TY_KeeAOYBd84Ofsw6Y7LizaQ;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
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
typedef TIdent_4umxGerWTHGPwUms7Yqu3g* TY_CBfZt49asUfAsBVM7a3Rc9cw[8192];
struct  IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw  {
TY_CBfZt49asUfAsBVM7a3Rc9cw buckets;
NI wordCounter;
TIdent_4umxGerWTHGPwUms7Yqu3g* idAnon;
TIdent_4umxGerWTHGPwUms7Yqu3g* idDelegator;
TIdent_4umxGerWTHGPwUms7Yqu3g* emptyIdent;
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
typedef NU8 StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ;
struct  StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw  {
  TNimObject Sup;
NI counter;
TY_4eQHGndY6XBYpFOH09apV8Q* data;
StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
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
struct  TIdent_4umxGerWTHGPwUms7Yqu3g  {
  TIdObj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
TIdent_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
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
struct  TocEntry_z7kal23LlR1mL50YJIPMCw  {
RstNode_CjRS2xrmuD58kdGedE3yyg* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct TY_sr3s7uVHpu9cEbbDnCSg8yQ {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
typedef NU8 JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg;
struct  OrderedTable_AF39bJ7XDr6gpANuGpxkHrw  {
TY_MlAD6nAPq9bHKla9cWiIZP0g* data;
NI counter;
NI first;
NI last;
};
struct  JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q  {
JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg kind;
union{
struct {NimStringDesc* str;
} S1;
struct {NI64 num;
} S2;
struct {NF fnum;
} S3;
struct {NIM_BOOL bval;
} S4;
struct {OrderedTable_AF39bJ7XDr6gpANuGpxkHrw fields;
} S6;
struct {TY_oLpBKXzW3hF9aCVMo5EymfQ* elems;
} S7;
} kindU;
};
struct  Trunk_ul49aWfv9aes8cutmeltT3gQ  {
Trunk_ul49aWfv9aes8cutmeltT3gQ* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
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
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct TY_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
typedef NU8 RstNodeKind_Q1jM9a8f0MKlvbLZpipB3qg;
struct  RstNode_CjRS2xrmuD58kdGedE3yyg  {
RstNodeKind_Q1jM9a8f0MKlvbLZpipB3qg kind;
NimStringDesc* text;
NI level;
TY_sawZST1Esj3o7EY9ayWwGPw* sons;
};
struct TY_awOivLjlO76sGdHY7nQUjQ {
NI Field0;
NI Field1;
NimStringDesc* Field2;
JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* Field3;
};
struct TY_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
struct TY_YLg9aN9cjdxVYWdZ7YCb9batg {
  TGenericSeq Sup;
  TFileInfo_UOayjckboTXG9aVx8iKOs9aQ data[SEQ_DECL_SIZE];
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
struct TY_LViedqhb8iWVoqgZs5LifA {
  TGenericSeq Sup;
  RopeObj_HF4qJnb6xiOddgPmsxodtQ* data[SEQ_DECL_SIZE];
};
struct TY_b7kA8pLABz0wMAUNGYo6Wg {
  TGenericSeq Sup;
  TocEntry_z7kal23LlR1mL50YJIPMCw data[SEQ_DECL_SIZE];
};
struct TY_pUxI6Ljo6IKKHXKOZkQ7Og {
  TGenericSeq Sup;
  TY_sr3s7uVHpu9cEbbDnCSg8yQ data[SEQ_DECL_SIZE];
};
struct TY_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
struct TY_kxu4GK0onha2t9bo86mdVAg {
  TGenericSeq Sup;
  TY_xDU9bZmv1ZbZkJDaATBekIQ data[SEQ_DECL_SIZE];
};
struct TY_48JTohSgTy339bRxHzUD8KA {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY_npTAlnSu9cyJr3PNURLEKhQ {
  TGenericSeq Sup;
  TY_c3iwyH3aQEvxlw6WDIN9c0g data[SEQ_DECL_SIZE];
};
struct TY_4eQHGndY6XBYpFOH09apV8Q {
  TGenericSeq Sup;
  TY_UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct TY_MlAD6nAPq9bHKla9cWiIZP0g {
  TGenericSeq Sup;
  TY_awOivLjlO76sGdHY7nQUjQ data[SEQ_DECL_SIZE];
};
struct TY_oLpBKXzW3hF9aCVMo5EymfQ {
  TGenericSeq Sup;
  JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* data[SEQ_DECL_SIZE];
};
struct TY_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  TY_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct TY_sawZST1Esj3o7EY9ayWwGPw {
  TGenericSeq Sup;
  RstNode_CjRS2xrmuD58kdGedE3yyg* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_TY_AVGCMPDeV3LjhYUWMtIGNg)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ*, newDocumentor_rSEpP0BL6scT9c33BSLRVKA)(NimStringDesc* filename, StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* config);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, generateJson_9b0I15wtPowpEmmkrKBaI4w_3)(TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d, TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(void, writeOutputJson_UPjOukO9a2qO3DBJCbtcQ1A_2)(TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d, NimStringDesc* filename, NimStringDesc* outExt, NIM_BOOL useWarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateIndex_wjz2ZVW4SxHaKoMYPYCeKw)(TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, generateDoc_9b0I15wtPowpEmmkrKBaI4w)(TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d, TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(void, writeOutput_UPjOukO9a2qO3DBJCbtcQ1A)(TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d, NimStringDesc* filename, NimStringDesc* outExt, NIM_BOOL useWarning);
extern TNimType NTI_qNsm39cWb35W2r5AAd9ch87g_;
TNimType NTI_1n9c8bLkAy1k20AgnlhyBBw_;
extern TNimType NTI_cx9b0GT2NB8xz1hKV89ay5lQ_;
extern TNimType NTI_83n62yi1b9bgUtRR9axFWW9ag_;
TNimType NTI_AVGCMPDeV3LjhYUWMtIGNg_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TY_YLg9aN9cjdxVYWdZ7YCb9batg* fileInfos_0nMtuXd9csTLLtuDok8ckXw;
extern StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* gConfigVars_0Vkej44DF5osh1Rc3US8qw;
extern NI gMainPackageId_9cwEOFAmQDogkWTNLtVENxw;
extern NIM_BOOL gWholeProject_MjauEmf9c7n25a6W6FpTptQ;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI_9czoZw3pzPyrBmb5zTHY1OQ_;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
STRING_LITERAL(TM_87tQLGE73DKq5cz9cph1IqQ_3, "\?\?\?", 3);
STRING_LITERAL(TM_87tQLGE73DKq5cz9cph1IqQ_4, ".json", 5);
STRING_LITERAL(TM_87tQLGE73DKq5cz9cph1IqQ_6, "html", 4);
static N_NIMCALL(void, Marker_TY_AVGCMPDeV3LjhYUWMtIGNg)(void* p, NI op) {
	TGen_1n9c8bLkAy1k20AgnlhyBBw* a;
	a = (TGen_1n9c8bLkAy1k20AgnlhyBBw*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
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

N_NIMCALL(TPassContext_qNsm39cWb35W2r5AAd9ch87g*, myOpen_rpfo9abXCMEv9a9bRFmJZFMRw)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, TSym_AXG7xcvKqaxY6koRX1xkCw* module, IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache) {
	TPassContext_qNsm39cWb35W2r5AAd9ch87g* result;
	TGen_1n9c8bLkAy1k20AgnlhyBBw* g;
	TDocumentor_AoMzi1HUj6N6QwYiA5PvoQ* d;
	NimStringDesc* T1_;
	result = (TPassContext_qNsm39cWb35W2r5AAd9ch87g*)0;
	g = (TGen_1n9c8bLkAy1k20AgnlhyBBw*)0;
	g = (TGen_1n9c8bLkAy1k20AgnlhyBBw*) newObj((&NTI_AVGCMPDeV3LjhYUWMtIGNg_), sizeof(TGen_1n9c8bLkAy1k20AgnlhyBBw));
	(*g).Sup.Sup.m_type = (&NTI_1n9c8bLkAy1k20AgnlhyBBw_);
	asgnRefNoCycle((void**) (&(*g).module), module);
	T1_ = (NimStringDesc*)0;
	{
		if (!(((NI32) ((*module).position)) < ((NI32) 0))) goto LA4_;
		T1_ = copyString(((NimStringDesc*) &TM_87tQLGE73DKq5cz9cph1IqQ_3));
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = copyString(fileInfos_0nMtuXd9csTLLtuDok8ckXw->data[((NI32) ((*module).position))].projPath);
	}
	LA2_: ;
	d = newDocumentor_rSEpP0BL6scT9c33BSLRVKA(T1_, gConfigVars_0Vkej44DF5osh1Rc3US8qw);
	(*d).Sup.hasToc = NIM_TRUE;
	asgnRef((void**) (&(*g).doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, processNodeJson_LQRyeStN9aRWJcDweUXsVpg)(TPassContext_qNsm39cWb35W2r5AAd9ch87g* c, TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	TGen_1n9c8bLkAy1k20AgnlhyBBw* g;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = n;
	g = ((TGen_1n9c8bLkAy1k20AgnlhyBBw*) (c));
	generateJson_9b0I15wtPowpEmmkrKBaI4w_3((*g).doc, n);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = (Exception*)0;
	result = currException_9bVPeDJlYTi9bQApZpfH8wjg;
	return result;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currException_9bVPeDJlYTi9bQApZpfH8wjg), NIM_NIL);
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, closeJson_qpYYCfxDyNmwR1J59b7C3lw)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, TPassContext_qNsm39cWb35W2r5AAd9ch87g* p, TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	TGen_1n9c8bLkAy1k20AgnlhyBBw* g;
	NIM_BOOL useWarning;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	g = ((TGen_1n9c8bLkAy1k20AgnlhyBBw*) (p));
	useWarning = !((((*(*g).module).flags &((NU64)1<<((NU)(((TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 12))&63U)))!=0));
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NimStringDesc* T9_;
		TSafePoint TM_87tQLGE73DKq5cz9cph1IqQ_5;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((*(*(*g).module).owner).Sup.id == gMainPackageId_9cwEOFAmQDogkWTNLtVENxw);
		if (!(T4_)) goto LA5_;
		T4_ = gWholeProject_MjauEmf9c7n25a6W6FpTptQ;
		LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T3_ = (((*(*g).module).flags &((NU64)1<<((NU)(((TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 12))&63U)))!=0);
		LA6_: ;
		if (!T3_) goto LA7_;
		T9_ = (NimStringDesc*)0;
		{
			if (!(((NI32) ((*(*g).module).position)) < ((NI32) 0))) goto LA12_;
			T9_ = copyString(((NimStringDesc*) &TM_87tQLGE73DKq5cz9cph1IqQ_3));
		}
		goto LA10_;
		LA12_: ;
		{
			T9_ = copyString(fileInfos_0nMtuXd9csTLLtuDok8ckXw->data[((NI32) ((*(*g).module).position))].projPath);
		}
		LA10_: ;
		writeOutputJson_UPjOukO9a2qO3DBJCbtcQ1A_2((*g).doc, T9_, ((NimStringDesc*) &TM_87tQLGE73DKq5cz9cph1IqQ_4), useWarning);
		pushSafePoint(&TM_87tQLGE73DKq5cz9cph1IqQ_5);
		TM_87tQLGE73DKq5cz9cph1IqQ_5.status = setjmp(TM_87tQLGE73DKq5cz9cph1IqQ_5.context);
		if (TM_87tQLGE73DKq5cz9cph1IqQ_5.status == 0) {
			generateIndex_wjz2ZVW4SxHaKoMYPYCeKw((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI_9czoZw3pzPyrBmb5zTHY1OQ_))) {
				TM_87tQLGE73DKq5cz9cph1IqQ_5.status = 0;
				popCurrentException();
			}
		}
		if (TM_87tQLGE73DKq5cz9cph1IqQ_5.status != 0) reraiseException();
	}
	LA7_: ;
	return result;
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, processNode_LQRyeStN9aRWJcDweUXsVpg_2)(TPassContext_qNsm39cWb35W2r5AAd9ch87g* c, TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	TGen_1n9c8bLkAy1k20AgnlhyBBw* g;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = n;
	g = ((TGen_1n9c8bLkAy1k20AgnlhyBBw*) (c));
	generateDoc_9b0I15wtPowpEmmkrKBaI4w((*g).doc, n);
	return result;
}

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, close_qpYYCfxDyNmwR1J59b7C3lw_2)(ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph, TPassContext_qNsm39cWb35W2r5AAd9ch87g* p, TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	TGen_1n9c8bLkAy1k20AgnlhyBBw* g;
	NIM_BOOL useWarning;
	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	g = ((TGen_1n9c8bLkAy1k20AgnlhyBBw*) (p));
	useWarning = !((((*(*g).module).flags &((NU64)1<<((NU)(((TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 12))&63U)))!=0));
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NimStringDesc* T9_;
		TSafePoint TM_87tQLGE73DKq5cz9cph1IqQ_7;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((*(*(*g).module).owner).Sup.id == gMainPackageId_9cwEOFAmQDogkWTNLtVENxw);
		if (!(T4_)) goto LA5_;
		T4_ = gWholeProject_MjauEmf9c7n25a6W6FpTptQ;
		LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T3_ = (((*(*g).module).flags &((NU64)1<<((NU)(((TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 12))&63U)))!=0);
		LA6_: ;
		if (!T3_) goto LA7_;
		T9_ = (NimStringDesc*)0;
		{
			if (!(((NI32) ((*(*g).module).position)) < ((NI32) 0))) goto LA12_;
			T9_ = copyString(((NimStringDesc*) &TM_87tQLGE73DKq5cz9cph1IqQ_3));
		}
		goto LA10_;
		LA12_: ;
		{
			T9_ = copyString(fileInfos_0nMtuXd9csTLLtuDok8ckXw->data[((NI32) ((*(*g).module).position))].projPath);
		}
		LA10_: ;
		writeOutput_UPjOukO9a2qO3DBJCbtcQ1A((*g).doc, T9_, ((NimStringDesc*) &TM_87tQLGE73DKq5cz9cph1IqQ_6), useWarning);
		pushSafePoint(&TM_87tQLGE73DKq5cz9cph1IqQ_7);
		TM_87tQLGE73DKq5cz9cph1IqQ_7.status = setjmp(TM_87tQLGE73DKq5cz9cph1IqQ_7.context);
		if (TM_87tQLGE73DKq5cz9cph1IqQ_7.status == 0) {
			generateIndex_wjz2ZVW4SxHaKoMYPYCeKw((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI_9czoZw3pzPyrBmb5zTHY1OQ_))) {
				TM_87tQLGE73DKq5cz9cph1IqQ_7.status = 0;
				popCurrentException();
			}
		}
		if (TM_87tQLGE73DKq5cz9cph1IqQ_7.status != 0) reraiseException();
	}
	LA7_: ;
	return result;
}

N_NIMCALL(void, finishDoc2Pass_pE3h5lr2g9bTHoEs1gBt2xg)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit000)(void) {
static TNimNode* TM_87tQLGE73DKq5cz9cph1IqQ_2[2];
static TNimNode TM_87tQLGE73DKq5cz9cph1IqQ_0[3];
NTI_1n9c8bLkAy1k20AgnlhyBBw_.size = sizeof(TGen_1n9c8bLkAy1k20AgnlhyBBw);
NTI_1n9c8bLkAy1k20AgnlhyBBw_.kind = 17;
NTI_1n9c8bLkAy1k20AgnlhyBBw_.base = (&NTI_qNsm39cWb35W2r5AAd9ch87g_);
TM_87tQLGE73DKq5cz9cph1IqQ_2[0] = &TM_87tQLGE73DKq5cz9cph1IqQ_0[1];
TM_87tQLGE73DKq5cz9cph1IqQ_0[1].kind = 1;
TM_87tQLGE73DKq5cz9cph1IqQ_0[1].offset = offsetof(TGen_1n9c8bLkAy1k20AgnlhyBBw, doc);
TM_87tQLGE73DKq5cz9cph1IqQ_0[1].typ = (&NTI_cx9b0GT2NB8xz1hKV89ay5lQ_);
TM_87tQLGE73DKq5cz9cph1IqQ_0[1].name = "doc";
TM_87tQLGE73DKq5cz9cph1IqQ_2[1] = &TM_87tQLGE73DKq5cz9cph1IqQ_0[2];
TM_87tQLGE73DKq5cz9cph1IqQ_0[2].kind = 1;
TM_87tQLGE73DKq5cz9cph1IqQ_0[2].offset = offsetof(TGen_1n9c8bLkAy1k20AgnlhyBBw, module);
TM_87tQLGE73DKq5cz9cph1IqQ_0[2].typ = (&NTI_83n62yi1b9bgUtRR9axFWW9ag_);
TM_87tQLGE73DKq5cz9cph1IqQ_0[2].name = "module";
TM_87tQLGE73DKq5cz9cph1IqQ_0[0].len = 2; TM_87tQLGE73DKq5cz9cph1IqQ_0[0].kind = 2; TM_87tQLGE73DKq5cz9cph1IqQ_0[0].sons = &TM_87tQLGE73DKq5cz9cph1IqQ_2[0];
NTI_1n9c8bLkAy1k20AgnlhyBBw_.node = &TM_87tQLGE73DKq5cz9cph1IqQ_0[0];
NTI_AVGCMPDeV3LjhYUWMtIGNg_.size = sizeof(TGen_1n9c8bLkAy1k20AgnlhyBBw*);
NTI_AVGCMPDeV3LjhYUWMtIGNg_.kind = 22;
NTI_AVGCMPDeV3LjhYUWMtIGNg_.base = (&NTI_1n9c8bLkAy1k20AgnlhyBBw_);
NTI_AVGCMPDeV3LjhYUWMtIGNg_.marker = Marker_TY_AVGCMPDeV3LjhYUWMtIGNg;
}

