/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q;
typedef struct TY_Mh9agqM29bm9aP5AUL1x7dZGA TY_Mh9agqM29bm9aP5AUL1x7dZGA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TType_LTUWCZolpovw9cWE3JBWSUw TType_LTUWCZolpovw9cWE3JBWSUw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNode_bROa11lyF5vxEN9aYNbHmhw TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct TSym_AXG7xcvKqaxY6koRX1xkCw TSym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct TIdent_4umxGerWTHGPwUms7Yqu3g TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ TY_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct TY_UpiOGlu5Ux6DLM73wSrdpg TY_UpiOGlu5Ux6DLM73wSrdpg;
typedef struct TIdPair_AdFnD2YdADPeuJbG2YJ4vg TIdPair_AdFnD2YdADPeuJbG2YJ4vg;
typedef struct TIdObj_raN9cHVgzmvaXisezY9aGg9cg TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct TLoc_EtHNvCB0bgfu9bFjzx9cb6aA TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct RopeObj_HF4qJnb6xiOddgPmsxodtQ RopeObj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct TStrTable_f07aOS3dr28kGa5wcE29aFA TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct TLib_NBMxlJ6g3utqUlplqTTHkA TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
struct  TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q  {
NI counter;
TY_Mh9agqM29bm9aP5AUL1x7dZGA* data;
};
typedef TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q TY_lH3aCMKKYLVdnvOW3MwMBQ[64];
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
typedef TType_LTUWCZolpovw9cWE3JBWSUw* TY_3PQufyGAQFOztiWDnPtfsQ[64];
typedef NU8 TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU16 TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw;
struct  TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw  {
NI16 line;
NI16 col;
NI32 fileIndex;
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
struct  TIdPair_AdFnD2YdADPeuJbG2YJ4vg  {
TIdObj_raN9cHVgzmvaXisezY9aGg9cg* key;
TNimObject* val;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  TIdObj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
};
typedef NU8 TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw_Set;
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
typedef NU8 TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct  TStrTable_f07aOS3dr28kGa5wcE29aFA  {
NI counter;
TY_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw_Set;
typedef NU32 TOption_WspMeQySXNP2XoTWR5MTgg_Set;
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
struct TY_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
TSym_AXG7xcvKqaxY6koRX1xkCw* Field1;
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
struct  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA  {
TSym_AXG7xcvKqaxY6koRX1xkCw* sym;
TY_zuqP4Riz26Oi5fWgPYVEgA* concreteTypes;
NI compilesId;
};
struct TY_Mh9agqM29bm9aP5AUL1x7dZGA {
  TGenericSeq Sup;
  TIdPair_AdFnD2YdADPeuJbG2YJ4vg data[SEQ_DECL_SIZE];
};
struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct TY_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  TType_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct TY_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct TY_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  TSym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_Z07Nb1SkYoziC0Zz9be4mTA_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_NIMCALL(void, TM_Z07Nb1SkYoziC0Zz9be4mTA_3)(void);
N_NIMCALL(void, initTypeTables_4YlP5qn2t1x9bA7fF1JGO9aA)(void);
N_NIMCALL(void, initIdTable_9cUS2oaKn1IFXKjLdglPZHQ)(TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q* x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, toCChar_8tBycpmTbY1bylVySsCO1w)(NIM_CHAR c);
N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw)(TNode_bROa11lyF5vxEN9aYNbHmhw* n, TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw w);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw, whichPragma_tadMdqrtQd2cek9aFwyE1XQ)(TNode_bROa11lyF5vxEN9aYNbHmhw* n);
TY_lH3aCMKKYLVdnvOW3MwMBQ gTypeTable_6Ppg2od9bJ4L5DCo8agKeUQ;
extern TNimType NTI_9aiv9bp2t5icFNINcg9c4xi1Q_;
TNimType NTI_lH3aCMKKYLVdnvOW3MwMBQ_;
TY_3PQufyGAQFOztiWDnPtfsQ gCanonicalTypes_qqf22SW9aaNKMic9cRqA9cBxQ;
extern TNimType NTI_3PQufyGAQFOztiWDnPtfsQ_;
extern TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag;
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_4, "X", 1);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_5, "dollar", 6);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_6, "percent", 7);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_7, "amp", 3);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_8, "roof", 4);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_9, "emark", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_10, "qmark", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_11, "star", 4);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_12, "plus", 4);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_13, "minus", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_14, "slash", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_15, "eq", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_16, "lt", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_17, "gt", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_18, "tilde", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_19, "colon", 5);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_20, "dot", 3);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_21, "at", 2);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_22, "bar", 3);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_23, "_", 1);
STRING_LITERAL(TM_Z07Nb1SkYoziC0Zz9be4mTA_24, "\"", 1);
extern NIM_CONST TY_AkFlnp1eOXOampCkGKpGYA CPU_uYXopJX8pM87pQDCtmgWfQ;
static N_NIMCALL(void, TM_Z07Nb1SkYoziC0Zz9be4mTA_2)(void) {
	NI T1_;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 64; T1_++) {
	nimGCvisit((void*)gTypeTable_6Ppg2od9bJ4L5DCo8agKeUQ[T1_].data, 0);
	}
}
static N_NIMCALL(void, TM_Z07Nb1SkYoziC0Zz9be4mTA_3)(void) {
	NI T1_;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 64; T1_++) {
	nimGCvisit((void*)gCanonicalTypes_qqf22SW9aaNKMic9cRqA9cBxQ[T1_], 0);
	}
}

N_NIMCALL(void, initTypeTables_4YlP5qn2t1x9bA7fF1JGO9aA)(void) {
	{
		TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag i;
		NI res;
		i = (TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) 63))) goto LA3;
				i = ((TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) (res));
				initIdTable_9cUS2oaKn1IFXKjLdglPZHQ((&gTypeTable_6Ppg2od9bJ4L5DCo8agKeUQ[(i)- 0]));
				res += ((NI) 1);
			} LA3: ;
		}
	}
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

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, mangle_0ctHksTXSPyaxjBOgK4TiA)(NimStringDesc* name) {
	NimStringDesc* result;
	NI start;
	NIM_BOOL requiresUnderscore;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((name ? name->Sup.len : 0))));
	start = ((NI) 0);
	{
		NimStringDesc* T5_;
		if (!(((NU8)(name->data[((NI) 0)])) >= ((NU8)(48)) && ((NU8)(name->data[((NI) 0)])) <= ((NU8)(57)))) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = rawNewString(2);
appendString(T5_, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_4));
appendChar(T5_, name->data[((NI) 0)]);
		result = resizeString(result, T5_->Sup.len + 0);
appendString(result, T5_);
		start = ((NI) 1);
	}
	LA3_: ;
	requiresUnderscore = NIM_FALSE;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((name ? name->Sup.len : 0) - ((NI) 1));
		res = start;
		{
			while (1) {
				NIM_CHAR c;
				if (!(res <= colontmp_)) goto LA8;
				i = res;
				c = name->data[i];
				switch (((NU8)(c))) {
				case 97 ... 122:
				case 48 ... 57:
				case 65 ... 90:
				{
					result = addChar(result, c);
				}
				break;
				case 95:
				{
					{
						NIM_BOOL T13_;
						NIM_BOOL T14_;
						T13_ = (NIM_BOOL)0;
						T14_ = (NIM_BOOL)0;
						T14_ = (((NI) 0) < i);
						if (!(T14_)) goto LA15_;
						T14_ = (i < (NI)((name ? name->Sup.len : 0) - ((NI) 1)));
						LA15_: ;
						T13_ = T14_;
						if (!(T13_)) goto LA16_;
						T13_ = (((NU8)(name->data[(NI)(i + ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(name->data[(NI)(i + ((NI) 1))])) <= ((NU8)(57)));
						LA16_: ;
						if (!T13_) goto LA17_;
					}
					goto LA11_;
					LA17_: ;
					{
						result = addChar(result, c);
					}
					LA11_: ;
				}
				break;
				case 36:
				{
					result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_5));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 37:
				{
					result = resizeString(result, 7);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_6));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 38:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_7));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 94:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_8));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 33:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_9));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 63:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_10));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 42:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_11));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 43:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_12));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 45:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_13));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 47:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_14));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 61:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_15));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 60:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_16));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 62:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_17));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 126:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_18));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 58:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_19));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 46:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_20));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 64:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_21));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 124:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_22));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				default:
				{
					NimStringDesc* T39_;
					NimStringDesc* T40_;
					T39_ = (NimStringDesc*)0;
					T40_ = (NimStringDesc*)0;
					T40_ = nsuToHex(((NI64) (((NU8)(c)))), ((NI) 2));
					T39_ = rawNewString(T40_->Sup.len + 1);
appendString(T39_, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_4));
appendString(T39_, T40_);
					result = resizeString(result, T39_->Sup.len + 0);
appendString(result, T39_);
					requiresUnderscore = NIM_TRUE;
				}
				break;
				}
				res += ((NI) 1);
			} LA8: ;
		}
	}
	{
		if (!requiresUnderscore) goto LA43_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_23));
	}
	LA43_: ;
	return result;
}

N_NIMCALL(NimStringDesc*, makeSingleLineCString_59a1Z83zpqnyWoTdIAQEfHQ)(NimStringDesc* s) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM_Z07Nb1SkYoziC0Zz9be4mTA_24));
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				NimStringDesc* T4_;
				if (!(i < L)) goto LA3;
				c = s->data[i];
				T4_ = (NimStringDesc*)0;
				T4_ = toCChar_8tBycpmTbY1bylVySsCO1w(c);
				result = resizeString(result, T4_->Sup.len + 0);
appendString(result, T4_);
				i += ((NI) 1);
			} LA3: ;
		}
	}
	result = addChar(result, 34);
	return result;
}

N_NIMCALL(TType_LTUWCZolpovw9cWE3JBWSUw*, getUniqueType_HEGWNfEn5UAm9aUHUXxHEwQ)(TType_LTUWCZolpovw9cWE3JBWSUw* key) {
	TType_LTUWCZolpovw9cWE3JBWSUw* result;
	result = (TType_LTUWCZolpovw9cWE3JBWSUw*)0;
	result = key;
	return result;
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

N_NIMCALL(TNode_bROa11lyF5vxEN9aYNbHmhw*, getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw)(TNode_bROa11lyF5vxEN9aYNbHmhw* n, TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw w) {
	TNode_bROa11lyF5vxEN9aYNbHmhw* result;
{	result = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	switch ((*n).kind) {
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 115):
	{
		{
			NI i;
			NI colontmp_;
			NI T3_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			T3_ = (NI)0;
			T3_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			colontmp_ = (T3_ - 1);
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA5;
					i = res;
					result = getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw((*n).kindU.S6.sons->data[i], w);
					{
						if (!!((result == NIM_NIL))) goto LA8_;
						goto LA2;
					}
					LA8_: ;
					res += ((NI) 1);
				} LA5: ;
			}
		} LA2: ;
	}
	break;
	case ((TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 90):
	{
		{
			NI i_2;
			NI colontmp__2;
			NI T12_;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			T12_ = (NI)0;
			T12_ = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n);
			colontmp__2 = (T12_ - 1);
			res_2 = ((NI) 0);
			{
				while (1) {
					if (!(res_2 <= colontmp__2)) goto LA14;
					i_2 = res_2;
					{
						TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw T17_;
						T17_ = (TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw)0;
						T17_ = whichPragma_tadMdqrtQd2cek9aFwyE1XQ((*n).kindU.S6.sons->data[i_2]);
						if (!(T17_ == w)) goto LA18_;
						result = (*n).kindU.S6.sons->data[i_2];
						goto BeforeRet_;
					}
					LA18_: ;
					res_2 += ((NI) 1);
				} LA14: ;
			}
		}
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

N_NIMCALL(NIM_BOOL, stmtsContainPragma_9aY8Dd0aB4xmQTh5kptvVOg)(TNode_bROa11lyF5vxEN9aYNbHmhw* n, TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw w) {
	NIM_BOOL result;
	TNode_bROa11lyF5vxEN9aYNbHmhw* T1_;
	result = (NIM_BOOL)0;
	T1_ = (TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T1_ = getPragmaStmt_PG78PfsLry5P9aXm4OpkYGw(n, w);
	result = !((T1_ == NIM_NIL));
	return result;
}

N_NIMCALL(NI64, hashString_Pyx5T9crDr8ERTxY9apZjP2g)(NimStringDesc* s) {
	NI64 result;
	result = (NI64)0;
	{
		NI64 b;
		if (!(CPU_uYXopJX8pM87pQDCtmgWfQ[(targetCPU_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 64))) goto LA3_;
		b = IL64(0);
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA7;
					i = res;
					b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i]))))));
					b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(((NI) 10)))));
					b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(((NI) 6))));
					res += ((NI) 1);
				} LA7: ;
			}
		}
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(((NI) 3)))));
		b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(((NI) 11))));
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(((NI) 15)))));
		result = b;
	}
	goto LA1_;
	LA3_: ;
	{
		NI32 a;
		a = ((NI32) 0);
		{
			NI i_2;
			NI colontmp__2;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_2 = ((NI) 0);
			{
				while (1) {
					if (!(res_2 <= colontmp__2)) goto LA11;
					i_2 = res_2;
					a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_2]))))));
					a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
					a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
					res_2 += ((NI) 1);
				} LA11: ;
			}
		}
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 3)))));
		a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 11))));
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 15)))));
		result = ((NI64) (a));
	}
	LA1_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsInit000)(void) {
nimRegisterGlobalMarker(TM_Z07Nb1SkYoziC0Zz9be4mTA_2);
nimRegisterGlobalMarker(TM_Z07Nb1SkYoziC0Zz9be4mTA_3);
	initTypeTables_4YlP5qn2t1x9bA7fF1JGO9aA();
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsDatInit000)(void) {
NTI_lH3aCMKKYLVdnvOW3MwMBQ_.size = sizeof(TY_lH3aCMKKYLVdnvOW3MwMBQ);
NTI_lH3aCMKKYLVdnvOW3MwMBQ_.kind = 16;
NTI_lH3aCMKKYLVdnvOW3MwMBQ_.base = (&NTI_9aiv9bp2t5icFNINcg9c4xi1Q_);
}

