/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef linux
typedef struct Tidtable_9aiv9bp2t5icFNINcg9c4xi1Q Tidtable_9aiv9bp2t5icFNINcg9c4xi1Q;
typedef struct TY_Mh9agqM29bm9aP5AUL1x7dZGA TY_Mh9agqM29bm9aP5AUL1x7dZGA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype_LTUWCZolpovw9cWE3JBWSUw Ttype_LTUWCZolpovw9cWE3JBWSUw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode_bROa11lyF5vxEN9aYNbHmhw Tnode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct Tsym_AXG7xcvKqaxY6koRX1xkCw Tsym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct Tident_4umxGerWTHGPwUms7Yqu3g Tident_4umxGerWTHGPwUms7Yqu3g;
typedef struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ TY_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct TY_UpiOGlu5Ux6DLM73wSrdpg TY_UpiOGlu5Ux6DLM73wSrdpg;
typedef struct Tidpair_AdFnD2YdADPeuJbG2YJ4vg Tidpair_AdFnD2YdADPeuJbG2YJ4vg;
typedef struct Tidobj_raN9cHVgzmvaXisezY9aGg9cg Tidobj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct Tloc_EtHNvCB0bgfu9bFjzx9cb6aA Tloc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct Ropeobj_HF4qJnb6xiOddgPmsxodtQ Ropeobj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct Tstrtable_f07aOS3dr28kGa5wcE29aFA Tstrtable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct Tlib_4f9aBgmqEuj7uWJdBBGcRgA Tlib_4f9aBgmqEuj7uWJdBBGcRgA;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q;
struct  Tidtable_9aiv9bp2t5icFNINcg9c4xi1Q  {
NI counter;
TY_Mh9agqM29bm9aP5AUL1x7dZGA* data;
};
typedef Tidtable_9aiv9bp2t5icFNINcg9c4xi1Q TY_lH3aCMKKYLVdnvOW3MwMBQ[63];
typedef NU8 Tnimkind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p0);
struct  TNimType  {
NI size;
Tnimkind_jIBKr1ejBgsfM33Kxw4j7A kind;
Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef Ttype_LTUWCZolpovw9cWE3JBWSUw* TY_3PQufyGAQFOztiWDnPtfsQ[63];
typedef NU8 Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU16 Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw;
struct  Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag_jyh9acXHkhZANSSvPIY7ZLg_Set;
typedef NU8 Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw;
struct  Tnode_bROa11lyF5vxEN9aYNbHmhw  {
Ttype_LTUWCZolpovw9cWE3JBWSUw* typ;
Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
Tnodeflag_jyh9acXHkhZANSSvPIY7ZLg_Set flags;
Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym_AXG7xcvKqaxY6koRX1xkCw* sym;
} S4;
struct {Tident_4umxGerWTHGPwUms7Yqu3g* ident;
} S5;
struct {TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 Tendian_bQ3yFYQJojZPNYsZnS7Zjg;
struct TY_UpiOGlu5Ux6DLM73wSrdpg {
NimStringDesc* Field0;
NI Field1;
Tendian_bQ3yFYQJojZPNYsZnS7Zjg Field2;
NI Field3;
NI Field4;
};
typedef TY_UpiOGlu5Ux6DLM73wSrdpg TY_AkFlnp1eOXOampCkGKpGYA[19];
typedef NU8 Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag;
struct  Tidpair_AdFnD2YdADPeuJbG2YJ4vg  {
Tidobj_raN9cHVgzmvaXisezY9aGg9cg* key;
TNimObject* val;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tcallingconvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU32 Ttypeflag_x2m5g1NpbmDig4wLT3Ylhw_Set;
typedef NU8 Tlockind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 Tstorageloc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 Tlocflag_o2bqJgR4ceIupnUSpxiudA_Set;
struct  Tloc_EtHNvCB0bgfu9bFjzx9cb6aA  {
Tlockind_O7PRFZKuiBBWbku09cayVBg k;
Tstorageloc_JK9cKMX3XnqHaUky9b6gkGEw s;
Tlocflag_o2bqJgR4ceIupnUSpxiudA_Set flags;
Ttype_LTUWCZolpovw9cWE3JBWSUw* t;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* r;
};
struct  Ttype_LTUWCZolpovw9cWE3JBWSUw  {
  Tidobj_raN9cHVgzmvaXisezY9aGg9cg Sup;
Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag kind;
Tcallingconvention_yjAJ8w0h1PBaSwSGJ3P7IA callconv;
Ttypeflag_x2m5g1NpbmDig4wLT3Ylhw_Set flags;
TY_zuqP4Riz26Oi5fWgPYVEgA* sons;
Tnode_bROa11lyF5vxEN9aYNbHmhw* n;
Tsym_AXG7xcvKqaxY6koRX1xkCw* owner;
Tsym_AXG7xcvKqaxY6koRX1xkCw* sym;
Tsym_AXG7xcvKqaxY6koRX1xkCw* destructor;
Tsym_AXG7xcvKqaxY6koRX1xkCw* deepcopy;
Tsym_AXG7xcvKqaxY6koRX1xkCw* assignment;
TY_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
Ttype_LTUWCZolpovw9cWE3JBWSUw* typeinst;
};
typedef NU8 Tsymkind_cNCW9acsSznmEccl1fgQwkw;
struct  Tstrtable_f07aOS3dr28kGa5wcE29aFA  {
NI counter;
TY_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 Tmagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU32 Tsymflag_K9ay6LWMat9bUiT9bIbMxpDHw_Set;
typedef NU32 Toption_WspMeQySXNP2XoTWR5MTgg_Set;
struct  Tsym_AXG7xcvKqaxY6koRX1xkCw  {
  Tidobj_raN9cHVgzmvaXisezY9aGg9cg Sup;
Tsymkind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {TY_zuqP4Riz26Oi5fWgPYVEgA* typeinstcache;
} S1;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* procinstcache;
Tsym_AXG7xcvKqaxY6koRX1xkCw* gcunsafetyreason;
} S2;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* usedgenerics;
Tstrtable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {Tsym_AXG7xcvKqaxY6koRX1xkCw* guard;
NI bitsize;
} S4;
} kindU;
Tmagic_shZhZOdbVC5nnFvcXQAImg magic;
Ttype_LTUWCZolpovw9cWE3JBWSUw* typ;
Tident_4umxGerWTHGPwUms7Yqu3g* name;
Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
Tsym_AXG7xcvKqaxY6koRX1xkCw* owner;
Tsymflag_K9ay6LWMat9bUiT9bIbMxpDHw_Set flags;
Tnode_bROa11lyF5vxEN9aYNbHmhw* ast;
Toption_WspMeQySXNP2XoTWR5MTgg_Set options;
NI position;
NI offset;
Tloc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
Tlib_4f9aBgmqEuj7uWJdBBGcRgA* annex;
Tnode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
struct  Tident_4umxGerWTHGPwUms7Yqu3g  {
  Tidobj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
Tident_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
struct TY_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
Tsym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct  Ropeobj_HF4qJnb6xiOddgPmsxodtQ  {
  TNimObject Sup;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* left;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q  {
  TNimObject Sup;
Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q* prev;
Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q* next;
};
typedef NU8 Tlibkind_9b8v60kso59bBaw9cp8B9a9apKQ;
struct  Tlib_4f9aBgmqEuj7uWJdBBGcRgA  {
  Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q Sup;
Tlibkind_9b8v60kso59bBaw9cp8B9a9apKQ kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* name;
Tnode_bROa11lyF5vxEN9aYNbHmhw* path;
};
struct  Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA  {
Tsym_AXG7xcvKqaxY6koRX1xkCw* sym;
TY_zuqP4Riz26Oi5fWgPYVEgA* concretetypes;
NI compilesid;
};
struct TY_Mh9agqM29bm9aP5AUL1x7dZGA {
  TGenericSeq Sup;
  Tidpair_AdFnD2YdADPeuJbG2YJ4vg data[SEQ_DECL_SIZE];
};
struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  Tnode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct TY_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  Ttype_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct TY_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct TY_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  Tsym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
static N_NIMCALL(void, T_Z07Nb1SkYoziC0Zz9be4mTA_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerproc0);
static N_NIMCALL(void, T_Z07Nb1SkYoziC0Zz9be4mTA_3)(void);
N_NIMCALL(void, inittypetables_4YlP5qn2t1x9bA7fF1JGO9aA)(void);
N_NIMCALL(void, initidtable_9cUS2oaKn1IFXKjLdglPZHQ)(Tidtable_9aiv9bp2t5icFNINcg9c4xi1Q* x0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, tocchar_8tBycpmTbY1bylVySsCO1w)(NIM_CHAR c0);
N_NIMCALL(Tnode_bROa11lyF5vxEN9aYNbHmhw*, getpragmastmt_PG78PfsLry5P9aXm4OpkYGw)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw w0);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
static N_INLINE(Tnode_bROa11lyF5vxEN9aYNbHmhw*, HEX5BHEX5D_4mGh5VHoHoaSkXDYdG6pyAitersgen)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NI i0);
N_NIMCALL(Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw, whichpragma_tadMdqrtQd2cek9aFwyE1XQ)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
TY_lH3aCMKKYLVdnvOW3MwMBQ gtypetable_6Ppg2od9bJ4L5DCo8agKeUQ;
extern TNimType NTI_9aiv9bp2t5icFNINcg9c4xi1Q;
TNimType NTI_lH3aCMKKYLVdnvOW3MwMBQ;
TY_3PQufyGAQFOztiWDnPtfsQ gcanonicaltypes_qqf22SW9aaNKMic9cRqA9cBxQ;
extern TNimType NTI_3PQufyGAQFOztiWDnPtfsQ;
extern Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag;
STRING_LITERAL(T_Z07Nb1SkYoziC0Zz9be4mTA_4, "N", 1);
STRING_LITERAL(T_Z07Nb1SkYoziC0Zz9be4mTA_5, "HEX", 3);
STRING_LITERAL(T_Z07Nb1SkYoziC0Zz9be4mTA_6, "\"", 1);
extern NIM_CONST TY_AkFlnp1eOXOampCkGKpGYA Cpu_uYXopJX8pM87pQDCtmgWfQ;
static N_NIMCALL(void, T_Z07Nb1SkYoziC0Zz9be4mTA_2)(void) {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 63; LOC1++) {
	nimGCvisit((void*)gtypetable_6Ppg2od9bJ4L5DCo8agKeUQ[LOC1].data, 0);
	}
}
static N_NIMCALL(void, T_Z07Nb1SkYoziC0Zz9be4mTA_3)(void) {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 63; LOC1++) {
	nimGCvisit((void*)gcanonicaltypes_qqf22SW9aaNKMic9cRqA9cBxQ[LOC1], 0);
	}
}

N_NIMCALL(void, inittypetables_4YlP5qn2t1x9bA7fF1JGO9aA)(void) {
	{
		Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag i_XPOKnQ9c7cFYcx48ge6EujA;
		NI res_SOJ0y7d9auJ4om2o0ZyGDbg;
		i_XPOKnQ9c7cFYcx48ge6EujA = (Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag)0;
		res_SOJ0y7d9auJ4om2o0ZyGDbg = ((NI) 0);
		{
			while (1) {
				if (!(res_SOJ0y7d9auJ4om2o0ZyGDbg <= ((NI) 62))) goto LA3;
				i_XPOKnQ9c7cFYcx48ge6EujA = ((Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag) (res_SOJ0y7d9auJ4om2o0ZyGDbg));
				initidtable_9cUS2oaKn1IFXKjLdglPZHQ((&gtypetable_6Ppg2od9bJ4L5DCo8agKeUQ[(i_XPOKnQ9c7cFYcx48ge6EujA)- 0]));
				res_SOJ0y7d9auJ4om2o0ZyGDbg += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, mangle_0ctHksTXSPyaxjBOgK4TiA)(NimStringDesc* name0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = rawNewString(((NI) ((name0 ? name0->Sup.len : 0))));
	switch (((NU8)(name0->data[((NI) 0)]))) {
	case 65 ... 90:
	case 97 ... 122:
	{
		result0 = addChar(result0, name0->data[((NI) 0)]);
	}
	break;
	case 48 ... 57:
	{
		NimStringDesc* LOC3;
		LOC3 = (NimStringDesc*)0;
		LOC3 = rawNewString(2);
appendString(LOC3, ((NimStringDesc*) &T_Z07Nb1SkYoziC0Zz9be4mTA_4));
appendChar(LOC3, name0->data[((NI) 0)]);
		result0 = resizeString(result0, LOC3->Sup.len + 0);
appendString(result0, LOC3);
	}
	break;
	default:
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		LOC5 = (NimStringDesc*)0;
		LOC6 = (NimStringDesc*)0;
		LOC6 = nsuToHex(((NI64) (((NU8)(name0->data[((NI) 0)])))), ((NI) 2));
		LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &T_Z07Nb1SkYoziC0Zz9be4mTA_5));
appendString(LOC5, LOC6);
		result0 = LOC5;
	}
	break;
	}
	{
		NI i_QN1vXCw421CqHkU9bIu6xaw;
		NI HEX3Atmp_Asbw6VKqqs9bXPq9bmtHwE0g;
		NI res_ppq1BCQv6cpC7nTq6bW0DQ;
		i_QN1vXCw421CqHkU9bIu6xaw = (NI)0;
		HEX3Atmp_Asbw6VKqqs9bXPq9bmtHwE0g = (NI)0;
		HEX3Atmp_Asbw6VKqqs9bXPq9bmtHwE0g = (NI)((name0 ? name0->Sup.len : 0) - ((NI) 1));
		res_ppq1BCQv6cpC7nTq6bW0DQ = ((NI) 1);
		{
			while (1) {
				NIM_CHAR c0;
				if (!(res_ppq1BCQv6cpC7nTq6bW0DQ <= HEX3Atmp_Asbw6VKqqs9bXPq9bmtHwE0g)) goto LA9;
				i_QN1vXCw421CqHkU9bIu6xaw = res_ppq1BCQv6cpC7nTq6bW0DQ;
				c0 = name0->data[i_QN1vXCw421CqHkU9bIu6xaw];
				switch (((NU8)(c0))) {
				case 65 ... 90:
				{
					NIM_CHAR LOC11;
					LOC11 = (NIM_CHAR)0;
					LOC11 = nsuToLowerAsciiChar(c0);
					result0 = addChar(result0, LOC11);
				}
				break;
				case 95:
				{
				}
				break;
				case 97 ... 122:
				case 48 ... 57:
				{
					result0 = addChar(result0, c0);
				}
				break;
				default:
				{
					NimStringDesc* LOC15;
					NimStringDesc* LOC16;
					LOC15 = (NimStringDesc*)0;
					LOC16 = (NimStringDesc*)0;
					LOC16 = nsuToHex(((NI64) (((NU8)(c0)))), ((NI) 2));
					LOC15 = rawNewString(LOC16->Sup.len + 3);
appendString(LOC15, ((NimStringDesc*) &T_Z07Nb1SkYoziC0Zz9be4mTA_5));
appendString(LOC15, LOC16);
					result0 = resizeString(result0, LOC15->Sup.len + 0);
appendString(result0, LOC15);
				}
				break;
				}
				res_ppq1BCQv6cpC7nTq6bW0DQ += ((NI) 1);
			} LA9: ;
		}
	}
	return result0;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_59a1Z83zpqnyWoTdIAQEfHQ)(NimStringDesc* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &T_Z07Nb1SkYoziC0Zz9be4mTA_6));
	{
		NIM_CHAR c_GnmoRz9c2FhQhcNfIAOFxhQ;
		NI i_nIpvuQyKuKHYo8XjJG9cMpA;
		NI L_A4S9akQxnAV7xCh6NSN9c0Iw;
		c_GnmoRz9c2FhQhcNfIAOFxhQ = (NIM_CHAR)0;
		i_nIpvuQyKuKHYo8XjJG9cMpA = ((NI) 0);
		L_A4S9akQxnAV7xCh6NSN9c0Iw = (s0 ? s0->Sup.len : 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_nIpvuQyKuKHYo8XjJG9cMpA < L_A4S9akQxnAV7xCh6NSN9c0Iw)) goto LA3;
				c_GnmoRz9c2FhQhcNfIAOFxhQ = s0->data[i_nIpvuQyKuKHYo8XjJG9cMpA];
				LOC4 = (NimStringDesc*)0;
				LOC4 = tocchar_8tBycpmTbY1bylVySsCO1w(c_GnmoRz9c2FhQhcNfIAOFxhQ);
				result0 = resizeString(result0, LOC4->Sup.len + 0);
appendString(result0, LOC4);
				i_nIpvuQyKuKHYo8XjJG9cMpA += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = addChar(result0, 34);
	return result0;
}

N_NIMCALL(Ttype_LTUWCZolpovw9cWE3JBWSUw*, getuniquetype_HEGWNfEn5UAm9aUHUXxHEwQ)(Ttype_LTUWCZolpovw9cWE3JBWSUw* key0) {
	Ttype_LTUWCZolpovw9cWE3JBWSUw* result0;
	result0 = (Ttype_LTUWCZolpovw9cWE3JBWSUw*)0;
	result0 = key0;
	return result0;
}

static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!((*n0).kindU.S6.sons == 0)) goto LA3;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

static N_INLINE(Tnode_bROa11lyF5vxEN9aYNbHmhw*, HEX5BHEX5D_4mGh5VHoHoaSkXDYdG6pyAitersgen)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NI i0) {
	Tnode_bROa11lyF5vxEN9aYNbHmhw* result0;
	result0 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

N_NIMCALL(Tnode_bROa11lyF5vxEN9aYNbHmhw*, getpragmastmt_PG78PfsLry5P9aXm4OpkYGw)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw w0) {
	Tnode_bROa11lyF5vxEN9aYNbHmhw* result0;
{	result0 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
	switch ((*n0).kind) {
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 115):
	{
		{
			NI i_lRY3xXNDK8Uyyn9aKa9cWlOQ;
			NI HEX3Atmp_s8VMQnkJSdm1FdJ9c50MnKw;
			NI LOC3;
			NI res_aua25pSctrzmvcatGNHjvQ;
			i_lRY3xXNDK8Uyyn9aKa9cWlOQ = (NI)0;
			HEX3Atmp_s8VMQnkJSdm1FdJ9c50MnKw = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n0);
			HEX3Atmp_s8VMQnkJSdm1FdJ9c50MnKw = (LOC3 - 1);
			res_aua25pSctrzmvcatGNHjvQ = ((NI) 0);
			{
				while (1) {
					Tnode_bROa11lyF5vxEN9aYNbHmhw* LOC6;
					if (!(res_aua25pSctrzmvcatGNHjvQ <= HEX3Atmp_s8VMQnkJSdm1FdJ9c50MnKw)) goto LA5;
					i_lRY3xXNDK8Uyyn9aKa9cWlOQ = res_aua25pSctrzmvcatGNHjvQ;
					LOC6 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
					LOC6 = HEX5BHEX5D_4mGh5VHoHoaSkXDYdG6pyAitersgen(n0, i_lRY3xXNDK8Uyyn9aKa9cWlOQ);
					result0 = getpragmastmt_PG78PfsLry5P9aXm4OpkYGw(LOC6, w0);
					{
						if (!!((result0 == NIM_NIL))) goto LA9;
						goto LA2;
					}
					LA9: ;
					res_aua25pSctrzmvcatGNHjvQ += ((NI) 1);
				} LA5: ;
			}
		} LA2: ;
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 90):
	{
		{
			NI i_lRY3xXNDK8Uyyn9aKa9cWlOQ_2;
			NI HEX3Atmp_s8VMQnkJSdm1FdJ9c50MnKw_2;
			NI LOC13;
			NI res_aua25pSctrzmvcatGNHjvQ_2;
			i_lRY3xXNDK8Uyyn9aKa9cWlOQ_2 = (NI)0;
			HEX3Atmp_s8VMQnkJSdm1FdJ9c50MnKw_2 = (NI)0;
			LOC13 = (NI)0;
			LOC13 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n0);
			HEX3Atmp_s8VMQnkJSdm1FdJ9c50MnKw_2 = (LOC13 - 1);
			res_aua25pSctrzmvcatGNHjvQ_2 = ((NI) 0);
			{
				while (1) {
					if (!(res_aua25pSctrzmvcatGNHjvQ_2 <= HEX3Atmp_s8VMQnkJSdm1FdJ9c50MnKw_2)) goto LA15;
					i_lRY3xXNDK8Uyyn9aKa9cWlOQ_2 = res_aua25pSctrzmvcatGNHjvQ_2;
					{
						Tnode_bROa11lyF5vxEN9aYNbHmhw* LOC18;
						Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw LOC19;
						LOC18 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
						LOC18 = HEX5BHEX5D_4mGh5VHoHoaSkXDYdG6pyAitersgen(n0, i_lRY3xXNDK8Uyyn9aKa9cWlOQ_2);
						LOC19 = (Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw)0;
						LOC19 = whichpragma_tadMdqrtQd2cek9aFwyE1XQ(LOC18);
						if (!(LOC19 == w0)) goto LA20;
						result0 = HEX5BHEX5D_4mGh5VHoHoaSkXDYdG6pyAitersgen(n0, i_lRY3xXNDK8Uyyn9aKa9cWlOQ_2);
						goto BeforeRet;
					}
					LA20: ;
					res_aua25pSctrzmvcatGNHjvQ_2 += ((NI) 1);
				} LA15: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, stmtscontainpragma_9aY8Dd0aB4xmQTh5kptvVOg)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw w0) {
	NIM_BOOL result0;
	Tnode_bROa11lyF5vxEN9aYNbHmhw* LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
	LOC1 = getpragmastmt_PG78PfsLry5P9aXm4OpkYGw(n0, w0);
	result0 = !((LOC1 == NIM_NIL));
	return result0;
}

N_NIMCALL(NI64, hashstring_Pyx5T9crDr8ERTxY9apZjP2g)(NimStringDesc* s0) {
	NI64 result0;
	result0 = (NI64)0;
	{
		NI64 b0;
		if (!(Cpu_uYXopJX8pM87pQDCtmgWfQ[(targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 64))) goto LA3;
		b0 = IL64(0);
		{
			NI i_2Fvauht1egIk2mKLbrlrhg;
			NI HEX3Atmp_GWD4ZcIsS9aqEr2zVMjfVvA;
			NI res_S4rPUVrC0GguZlYetzCJKQ;
			i_2Fvauht1egIk2mKLbrlrhg = (NI)0;
			HEX3Atmp_GWD4ZcIsS9aqEr2zVMjfVvA = (NI)0;
			HEX3Atmp_GWD4ZcIsS9aqEr2zVMjfVvA = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
			res_S4rPUVrC0GguZlYetzCJKQ = ((NI) 0);
			{
				while (1) {
					if (!(res_S4rPUVrC0GguZlYetzCJKQ <= HEX3Atmp_GWD4ZcIsS9aqEr2zVMjfVvA)) goto LA7;
					i_2Fvauht1egIk2mKLbrlrhg = res_S4rPUVrC0GguZlYetzCJKQ;
					b0 = (NI64)((NU64)(b0) + (NU64)(((NI64) (((NU8)(s0->data[i_2Fvauht1egIk2mKLbrlrhg]))))));
					b0 = (NI64)((NU64)(b0) + (NU64)((NI64)((NU64)(b0) << (NU64)(((NI) 10)))));
					b0 = (NI64)(b0 ^ (NI64)((NU64)(b0) >> (NU64)(((NI) 6))));
					res_S4rPUVrC0GguZlYetzCJKQ += ((NI) 1);
				} LA7: ;
			}
		}
		b0 = (NI64)((NU64)(b0) + (NU64)((NI64)((NU64)(b0) << (NU64)(((NI) 3)))));
		b0 = (NI64)(b0 ^ (NI64)((NU64)(b0) >> (NU64)(((NI) 11))));
		b0 = (NI64)((NU64)(b0) + (NU64)((NI64)((NU64)(b0) << (NU64)(((NI) 15)))));
		result0 = b0;
	}
	goto LA1;
	LA3: ;
	{
		NI32 a0;
		a0 = ((NI32) 0);
		{
			NI i_2Fvauht1egIk2mKLbrlrhg_2;
			NI HEX3Atmp_GWD4ZcIsS9aqEr2zVMjfVvA_2;
			NI res_S4rPUVrC0GguZlYetzCJKQ_2;
			i_2Fvauht1egIk2mKLbrlrhg_2 = (NI)0;
			HEX3Atmp_GWD4ZcIsS9aqEr2zVMjfVvA_2 = (NI)0;
			HEX3Atmp_GWD4ZcIsS9aqEr2zVMjfVvA_2 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
			res_S4rPUVrC0GguZlYetzCJKQ_2 = ((NI) 0);
			{
				while (1) {
					if (!(res_S4rPUVrC0GguZlYetzCJKQ_2 <= HEX3Atmp_GWD4ZcIsS9aqEr2zVMjfVvA_2)) goto LA11;
					i_2Fvauht1egIk2mKLbrlrhg_2 = res_S4rPUVrC0GguZlYetzCJKQ_2;
					a0 = (NI32)((NU32)(a0) + (NU32)(((NI32) (((NU8)(s0->data[i_2Fvauht1egIk2mKLbrlrhg_2]))))));
					a0 = (NI32)((NU32)(a0) + (NU32)((NI32)((NU32)(a0) << (NU32)(((NI32) 10)))));
					a0 = (NI32)(a0 ^ (NI32)((NU32)(a0) >> (NU32)(((NI32) 6))));
					res_S4rPUVrC0GguZlYetzCJKQ_2 += ((NI) 1);
				} LA11: ;
			}
		}
		a0 = (NI32)((NU32)(a0) + (NU32)((NI32)((NU32)(a0) << (NU32)(((NI32) 3)))));
		a0 = (NI32)(a0 ^ (NI32)((NU32)(a0) >> (NU32)(((NI32) 11))));
		a0 = (NI32)((NU32)(a0) + (NU32)((NI32)((NU32)(a0) << (NU32)(((NI32) 15)))));
		result0 = ((NI64) (a0));
	}
	LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsInit000)(void) {
nimRegisterGlobalMarker(T_Z07Nb1SkYoziC0Zz9be4mTA_2);
nimRegisterGlobalMarker(T_Z07Nb1SkYoziC0Zz9be4mTA_3);
	inittypetables_4YlP5qn2t1x9bA7fF1JGO9aA();
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsDatInit000)(void) {
NTI_lH3aCMKKYLVdnvOW3MwMBQ.size = sizeof(TY_lH3aCMKKYLVdnvOW3MwMBQ);
NTI_lH3aCMKKYLVdnvOW3MwMBQ.kind = 16;
NTI_lH3aCMKKYLVdnvOW3MwMBQ.base = (&NTI_9aiv9bp2t5icFNINcg9c4xi1Q);
}
