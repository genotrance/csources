/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
#undef near
typedef struct SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw;
typedef struct TY_mTiy9c8mw9a9au6ssROw72IaA TY_mTiy9c8mw9a9au6ssROw72IaA;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY_sM4lkSb7zS6F7OVMvW9cffQ TY_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg;
typedef struct TY_5PunAJrNQYcB8dF0jau3pQ TY_5PunAJrNQYcB8dF0jau3pQ;
typedef struct TIdent_4umxGerWTHGPwUms7Yqu3g TIdent_4umxGerWTHGPwUms7Yqu3g;
typedef struct TIdObj_raN9cHVgzmvaXisezY9aGg9cg TIdObj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* x, SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* y, void* ClE_0);
void* ClE_0;
} TY_IYECAoZKK3KVT9azKuMVzsA;
typedef NU8 SortOrder_8iBc6wlNqBa9cju9cUAhUAxA;
struct  TGenericSeq  {
NI len;
NI reserved;
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
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_2) (SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* x, SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* y);
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_3) (SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* x, SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* y);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (NimStringDesc* x, NimStringDesc* y, void* ClE_0);
void* ClE_0;
} TY_kTj9c3SX9agxDQPZYwemi6ug;
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_4) (NimStringDesc* x, NimStringDesc* y);
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_5) (NimStringDesc* x, NimStringDesc* y);
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* x, IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* y, void* ClE_0);
void* ClE_0;
} TY_zzrK9cTwi9admDvOCMDMSIXQ;
struct  IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg  {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linkTitle;
NimStringDesc* linkDesc;
};
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_6) (IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* x, IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* y);
typedef N_CLOSURE_PTR(NI, TM_JdC9c6SaUkvO1XjYuWP1JWQ_7) (IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* x, IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* y);
typedef NU8 IdeCmd_1Ced39bl5eePmZ1PKMPXigQ;
typedef NU8 TSymKind_cNCW9acsSznmEccl1fgQwkw;
typedef NU8 PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q;
struct  SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw  {
IdeCmd_1Ced39bl5eePmZ1PKMPXigQ section;
TY_sM4lkSb7zS6F7OVMvW9cffQ* qualifiedPath;
TIdent_4umxGerWTHGPwUms7Yqu3g* name;
NimStringDesc* filePath;
NI line;
NI column;
NimStringDesc* doc;
TSymKind_cNCW9acsSznmEccl1fgQwkw symkind;
NimStringDesc* forth;
NI quality;
NIM_BOOL isGlobal;
NIM_BOOL contextFits;
PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q prefix;
NI scope;
NI localUsages;
NI globalUsages;
NI tokenLen;
};
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
struct TY_mTiy9c8mw9a9au6ssROw72IaA {
  TGenericSeq Sup;
  SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw* data[SEQ_DECL_SIZE];
};
struct TY_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY_5PunAJrNQYcB8dF0jau3pQ {
  TGenericSeq Sup;
  IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_GWMV2YOOR869aJn359cF21Gw)(SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw** a, NI aLen_0, SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw** b, NI bLen_0, NI lo, NI m, NI hi, TY_IYECAoZKK3KVT9azKuMVzsA cmp, SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order);
static N_INLINE(NI, star__mciSqxUij8SrsZknIQqvwwalgorithm)(NI x, SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, merge_KHePwML9ba2tSMRLHxcf3EQ)(NimStringDesc** a, NI aLen_0, NimStringDesc** b, NI bLen_0, NI lo, NI m, NI hi, TY_kTj9c3SX9agxDQPZYwemi6ug cmp, SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order);
N_NIMCALL(void, merge_eK1oOcG1wrLw7IUmkc5hMQ)(IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* a, NI aLen_0, IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* b, NI bLen_0, NI lo, NI m, NI hi, TY_zzrK9cTwi9admDvOCMDMSIXQ cmp, SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order);
extern TNimType NTI_mTiy9c8mw9a9au6ssROw72IaA_;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern TNimType NTI_5PunAJrNQYcB8dF0jau3pQ_;

static N_INLINE(NI, star__mciSqxUij8SrsZknIQqvwwalgorithm)(NI x, SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI result;
	NI y;
	result = (NI)0;
	y = (NI)(((NI) (order)) - ((NI) 1));
	result = (NI)((NI)(x ^ ((NI) (y))) - ((NI) (y)));
	return result;
}

N_NIMCALL(void, merge_GWMV2YOOR869aJn359cF21Gw)(SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw** a, NI aLen_0, SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw** b, NI bLen_0, NI lo, NI m, NI hi, TY_IYECAoZKK3KVT9azKuMVzsA cmp, SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0(a[m], a[(NI)(m + ((NI) 1))], cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_2)(cmp.ClP_0))(a[m], a[(NI)(m + ((NI) 1))]);
		T4_ = (NI)0;
		T4_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T3_, order);
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (k < j);
			if (!(T11_)) goto LA12_;
			T11_ = (j <= hi);
			LA12_: ;
			if (!T11_) goto LA10;
			{
				NI T15_;
				NI T16_;
				T15_ = (NI)0;
				T15_ = cmp.ClE_0? cmp.ClP_0(b[i], a[j], cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_3)(cmp.ClP_0))(b[i], a[j]);
				T16_ = (NI)0;
				T16_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T15_, order);
				if (!(T16_ <= ((NI) 0))) goto LA17_;
				unsureAsgnRef((void**) (&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13_;
			LA17_: ;
			{
				unsureAsgnRef((void**) (&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13_: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet_: ;
}

N_NIMCALL(void, sort_E9cOgpqEVWNEOm6NGlX3U0w)(SuggestcolonObjectType__naAWaiCgIMLdebM9aiJfPzw** a, NI aLen_0, TY_IYECAoZKK3KVT9azKuMVzsA cmp, SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI n;
	TY_mTiy9c8mw9a9au6ssROw72IaA* b;
	NI s;
	n = aLen_0;
	b = (TY_mTiy9c8mw9a9au6ssROw72IaA*)0;
	b = (TY_mTiy9c8mw9a9au6ssROw72IaA*) newSeq((&NTI_mTiy9c8mw9a9au6ssROw72IaA_), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_GWMV2YOOR869aJn359cF21Gw(a, aLen_0, b->data, b->Sup.len, (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_KHePwML9ba2tSMRLHxcf3EQ)(NimStringDesc** a, NI aLen_0, NimStringDesc** b, NI bLen_0, NI lo, NI m, NI hi, TY_kTj9c3SX9agxDQPZYwemi6ug cmp, SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0(a[m], a[(NI)(m + ((NI) 1))], cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_4)(cmp.ClP_0))(a[m], a[(NI)(m + ((NI) 1))]);
		T4_ = (NI)0;
		T4_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T3_, order);
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (k < j);
			if (!(T11_)) goto LA12_;
			T11_ = (j <= hi);
			LA12_: ;
			if (!T11_) goto LA10;
			{
				NI T15_;
				NI T16_;
				T15_ = (NI)0;
				T15_ = cmp.ClE_0? cmp.ClP_0(b[i], a[j], cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_5)(cmp.ClP_0))(b[i], a[j]);
				T16_ = (NI)0;
				T16_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T15_, order);
				if (!(T16_ <= ((NI) 0))) goto LA17_;
				unsureAsgnRef((void**) (&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13_;
			LA17_: ;
			{
				unsureAsgnRef((void**) (&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13_: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet_: ;
}

N_NIMCALL(void, sort_9a7klSx0Yu33UIahhT1Of7Q)(NimStringDesc** a, NI aLen_0, TY_kTj9c3SX9agxDQPZYwemi6ug cmp, SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI n;
	TY_sM4lkSb7zS6F7OVMvW9cffQ* b;
	NI s;
	n = aLen_0;
	b = (TY_sM4lkSb7zS6F7OVMvW9cffQ*)0;
	b = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_KHePwML9ba2tSMRLHxcf3EQ(a, aLen_0, b->data, b->Sup.len, (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_eK1oOcG1wrLw7IUmkc5hMQ)(IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* a, NI aLen_0, IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* b, NI bLen_0, NI lo, NI m, NI hi, TY_zzrK9cTwi9admDvOCMDMSIXQ cmp, SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0((&a[m]), (&a[(NI)(m + ((NI) 1))]), cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_6)(cmp.ClP_0))((&a[m]), (&a[(NI)(m + ((NI) 1))]));
		T4_ = (NI)0;
		T4_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T3_, order);
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb].keyword), a[j].keyword);
			unsureAsgnRef((void**) (&b[bb].link), a[j].link);
			unsureAsgnRef((void**) (&b[bb].linkTitle), a[j].linkTitle);
			unsureAsgnRef((void**) (&b[bb].linkDesc), a[j].linkDesc);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (k < j);
			if (!(T11_)) goto LA12_;
			T11_ = (j <= hi);
			LA12_: ;
			if (!T11_) goto LA10;
			{
				NI T15_;
				NI T16_;
				T15_ = (NI)0;
				T15_ = cmp.ClE_0? cmp.ClP_0((&b[i]), (&a[j]), cmp.ClE_0):((TM_JdC9c6SaUkvO1XjYuWP1JWQ_7)(cmp.ClP_0))((&b[i]), (&a[j]));
				T16_ = (NI)0;
				T16_ = star__mciSqxUij8SrsZknIQqvwwalgorithm(T15_, order);
				if (!(T16_ <= ((NI) 0))) goto LA17_;
				unsureAsgnRef((void**) (&a[k].keyword), b[i].keyword);
				unsureAsgnRef((void**) (&a[k].link), b[i].link);
				unsureAsgnRef((void**) (&a[k].linkTitle), b[i].linkTitle);
				unsureAsgnRef((void**) (&a[k].linkDesc), b[i].linkDesc);
				i += ((NI) 1);
			}
			goto LA13_;
			LA17_: ;
			{
				unsureAsgnRef((void**) (&a[k].keyword), a[j].keyword);
				unsureAsgnRef((void**) (&a[k].link), a[j].link);
				unsureAsgnRef((void**) (&a[k].linkTitle), a[j].linkTitle);
				unsureAsgnRef((void**) (&a[k].linkDesc), a[j].linkDesc);
				j += ((NI) 1);
			}
			LA13_: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k].keyword), b[i].keyword);
			unsureAsgnRef((void**) (&a[k].link), b[i].link);
			unsureAsgnRef((void**) (&a[k].linkTitle), b[i].linkTitle);
			unsureAsgnRef((void**) (&a[k].linkDesc), b[i].linkDesc);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet_: ;
}

N_NIMCALL(void, sort_LBrAL7WLeSCnpfzkOqm4Fg)(IndexEntry_G9ccBDFWfr9aYnLgXTNGDHDg* a, NI aLen_0, TY_zzrK9cTwi9admDvOCMDMSIXQ cmp, SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI n;
	TY_5PunAJrNQYcB8dF0jau3pQ* b;
	NI s;
	n = aLen_0;
	b = (TY_5PunAJrNQYcB8dF0jau3pQ*)0;
	b = (TY_5PunAJrNQYcB8dF0jau3pQ*) newSeq((&NTI_5PunAJrNQYcB8dF0jau3pQ_), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_eK1oOcG1wrLw7IUmkc5hMQ(a, aLen_0, b->data, b->Sup.len, (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void) {
}

