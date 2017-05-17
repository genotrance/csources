/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef NU8 TY_YtcvxHNKV4YiecPE9ap1mcA[20];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU32 TY_xsE8WL1yT5DKfrMdYB89bYA[5];
typedef NU32 TY_BhDmUZcWSpYFIy5J8Xi8mQ[80];
N_NIMCALL(void, secureHash_iXA7ojfe1syFxhtO0guLpg)(NimStringDesc* str, TY_YtcvxHNKV4YiecPE9ap1mcA Result);
N_NIMCALL(void, sha1_9aTd6QKIPh47P9cab3MQ58pg)(NimStringDesc* src, TY_YtcvxHNKV4YiecPE9ap1mcA Result);
N_NIMCALL(void, sha1_7wQ07XxB49cQVmHre59bNftw)(NCSTRING src, NI len, TY_YtcvxHNKV4YiecPE9ap1mcA Result);
N_NIMCALL(void, init_1FhlX6i1LE6EQdyY79bMZ6A)(NU32* result);
N_NIMCALL(void, innerHash_zaIrNw9b9b0rKA9c6mi2NyudA)(NU32* state, NU32* w);
static N_INLINE(void, zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem)(void* p, NI size);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(NimStringDesc*, readFile_T9cm5LIRX2tKEH9aREBZ8A0w)(NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, eqeq__Ql5vZ51gew5fqwplIYujaw)(TY_YtcvxHNKV4YiecPE9ap1mcA x, TY_YtcvxHNKV4YiecPE9ap1mcA y);
N_NIMCALL(NI, nsuParseHexInt)(NimStringDesc* s);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
extern TNimType NTI_k3HXouOuhqAKq0dx450lXQ_;
TNimType NTI_YtcvxHNKV4YiecPE9ap1mcA_;
STRING_LITERAL(TM_vvZ67p0IGcFrRHVAevBkPw_2, "", 0);

N_NIMCALL(void, init_1FhlX6i1LE6EQdyY79bMZ6A)(NU32* result) {
	result[(((NI) 0))- 0] = ((NU32) 1732584193);
	result[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	result[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	result[(((NI) 3))- 0] = ((NU32) 271733878);
	result[(((NI) 4))- 0] = ((NU32) IL64(3285377520));
}

N_NIMCALL(void, innerHash_zaIrNw9b9b0rKA9c6mi2NyudA)(NU32* state, NU32* w) {
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
	NU32 e;
	NI round_1;
	NU32 v;
	NU32 v_2;
	NU32 v_3;
	NU32 v_4;
	NU32 v_5;
	a = state[(((NI) 0))- 0];
	b = state[(((NI) 1))- 0];
	c = state[(((NI) 2))- 0];
	d = state[(((NI) 3))- 0];
	e = state[(((NI) 4))- 0];
	round_1 = ((NI) 0);
	{
		while (1) {
			NU32 t;
			if (!(round_1 < ((NI) 16))) goto LA2;
			t = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((NU32)((NU32)(b & c) | (NU32)((NU32)((NU32) ~(b)) & d))))) + (NU32)(e))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w[(round_1)- 0]));
			e = d;
			d = c;
			c = (NU32)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t;
			round_1 += ((NI) 1);
		} LA2: ;
	}
	{
		while (1) {
			NU32 t_2;
			if (!(round_1 < ((NI) 20))) goto LA4;
			w[(round_1)- 0] = (NU32)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_2 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((NU32)((NU32)(b & c) | (NU32)((NU32)((NU32) ~(b)) & d))))) + (NU32)(e))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w[(round_1)- 0]));
			e = d;
			d = c;
			c = (NU32)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_2;
			round_1 += ((NI) 1);
		} LA4: ;
	}
	{
		while (1) {
			NU32 t_3;
			if (!(round_1 < ((NI) 40))) goto LA6;
			w[(round_1)- 0] = (NU32)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_3 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(e))) + (NU32)(((NU32) 1859775393)))) + (NU32)(w[(round_1)- 0]));
			e = d;
			d = c;
			c = (NU32)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_3;
			round_1 += ((NI) 1);
		} LA6: ;
	}
	{
		while (1) {
			NU32 t_4;
			if (!(round_1 < ((NI) 60))) goto LA8;
			w[(round_1)- 0] = (NU32)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_4 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((NU32)((NU32)((NU32)(b & c) | (NU32)(b & d)) | (NU32)(c & d))))) + (NU32)(e))) + (NU32)(((NU32) IL64(2400959708))))) + (NU32)(w[(round_1)- 0]));
			e = d;
			d = c;
			c = (NU32)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_4;
			round_1 += ((NI) 1);
		} LA8: ;
	}
	{
		while (1) {
			NU32 t_5;
			if (!(round_1 < ((NI) 80))) goto LA10;
			w[(round_1)- 0] = (NU32)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round_1 - ((NI) 3)))- 0] ^ w[((NI)(round_1 - ((NI) 8)))- 0]) ^ w[((NI)(round_1 - ((NI) 14)))- 0]) ^ w[((NI)(round_1 - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_5 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(e))) + (NU32)(((NU32) IL64(3395469782))))) + (NU32)(w[(round_1)- 0]));
			e = d;
			d = c;
			c = (NU32)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_5;
			round_1 += ((NI) 1);
		} LA10: ;
	}
	v = (NU32)((NU32)(state[(((NI) 0))- 0]) + (NU32)(a));
	state[(((NI) 0))- 0] = v;
	v_2 = (NU32)((NU32)(state[(((NI) 1))- 0]) + (NU32)(b));
	state[(((NI) 1))- 0] = v_2;
	v_3 = (NU32)((NU32)(state[(((NI) 2))- 0]) + (NU32)(c));
	state[(((NI) 2))- 0] = v_3;
	v_4 = (NU32)((NU32)(state[(((NI) 3))- 0]) + (NU32)(d));
	state[(((NI) 3))- 0] = v_4;
	v_5 = (NU32)((NU32)(state[(((NI) 4))- 0]) + (NU32)(e));
	state[(((NI) 4))- 0] = v_5;
}

static N_INLINE(void, zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem)(void* p, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(p, ((int) 0), ((size_t) (size)));
}

N_NIMCALL(void, sha1_7wQ07XxB49cQVmHre59bNftw)(NCSTRING src, NI len, TY_YtcvxHNKV4YiecPE9ap1mcA Result) {
	TY_xsE8WL1yT5DKfrMdYB89bYA state;
	TY_BhDmUZcWSpYFIy5J8Xi8mQ w;
	NI byteLen;
	NI endOfFullBlocks;
	NI endCurrentBlock;
	NI currentBlock;
	NI lastBlockBytes;
	memset((void*)state, 0, sizeof(state));
	init_1FhlX6i1LE6EQdyY79bMZ6A(state);
	memset((void*)w, 0, sizeof(w));
	byteLen = len;
	endOfFullBlocks = (NI)(byteLen - ((NI) 64));
	endCurrentBlock = ((NI) 0);
	currentBlock = ((NI) 0);
	{
		while (1) {
			NI i;
			if (!(currentBlock <= endOfFullBlocks)) goto LA2;
			endCurrentBlock = (NI)(currentBlock + ((NI) 64));
			i = ((NI) 0);
			{
				while (1) {
					if (!(currentBlock < endCurrentBlock)) goto LA4;
					w[(i)- 0] = (NU32)((NU32)((NU32)(((NU32) (((NU8)(src[(NI)(currentBlock + ((NI) 3))])))) | (NU32)((NU32)(((NU32) (((NU8)(src[(NI)(currentBlock + ((NI) 2))]))))) << (NU32)(((NU32) 8)))) | (NU32)((NU32)(((NU32) (((NU8)(src[(NI)(currentBlock + ((NI) 1))]))))) << (NU32)(((NU32) 16)))) | (NU32)((NU32)(((NU32) (((NU8)(src[currentBlock]))))) << (NU32)(((NU32) 24))));
					currentBlock += ((NI) 4);
					i += ((NI) 1);
				} LA4: ;
			}
			innerHash_zaIrNw9b9b0rKA9c6mi2NyudA(state, w);
		} LA2: ;
	}
	endCurrentBlock = (NI)(byteLen - currentBlock);
	zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem(((void*) (w)), ((NI) 64));
	lastBlockBytes = ((NI) 0);
	{
		while (1) {
			NU32 value;
			if (!(lastBlockBytes < endCurrentBlock)) goto LA6;
			value = (NU32)((NU32)(((NU32) (((NU8)(src[(NI)(lastBlockBytes + currentBlock)]))))) << (NU32)((NU32)((NU64)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastBlockBytes & ((NI) 3))))))) << (NU64)(((NI) 3)))));
			w[((NI)((NU64)(lastBlockBytes) >> (NU64)(((NI) 2))))- 0] = (NU32)(w[((NI)((NU64)(lastBlockBytes) >> (NU64)(((NI) 2))))- 0] | value);
			lastBlockBytes += ((NI) 1);
		} LA6: ;
	}
	w[((NI)((NU64)(lastBlockBytes) >> (NU64)(((NI) 2))))- 0] = (NU32)(w[((NI)((NU64)(lastBlockBytes) >> (NU64)(((NI) 2))))- 0] | (NU32)((NU32)(((NU32) 128)) << (NU32)((NU32)((NU64)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastBlockBytes & ((NI) 3))))))) << (NU64)(((NI) 3))))));
	{
		if (!(((NI) 56) <= endCurrentBlock)) goto LA9_;
		innerHash_zaIrNw9b9b0rKA9c6mi2NyudA(state, w);
		zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem(((void*) (w)), ((NI) 64));
	}
	LA9_: ;
	w[(((NI) 15))- 0] = (NU32)((NU64)(((NU32) (byteLen))) << (NU64)(((NI) 3)));
	innerHash_zaIrNw9b9b0rKA9c6mi2NyudA(state, w);
	{
		NI i_2;
		NI res;
		i_2 = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) 19))) goto LA13;
				i_2 = res;
				Result[(i_2)- 0] = ((NU8) ((NI)((NI)((NU64)(((NI) (state[((NI)((NU64)(i_2) >> (NU64)(((NI) 2))))- 0]))) >> (NU64)((NI)((NI)(((NI) 3) - ((NI) ((NI)(i_2 & ((NI) 3))))) * ((NI) 8)))) & ((NI) 255))));
				res += ((NI) 1);
			} LA13: ;
		}
	}
}

N_NIMCALL(void, sha1_9aTd6QKIPh47P9cab3MQ58pg)(NimStringDesc* src, TY_YtcvxHNKV4YiecPE9ap1mcA Result) {
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_YtcvxHNKV4YiecPE9ap1mcA_));
	sha1_7wQ07XxB49cQVmHre59bNftw(src->data, (src ? src->Sup.len : 0), Result);
}

N_NIMCALL(void, secureHash_iXA7ojfe1syFxhtO0guLpg)(NimStringDesc* str, TY_YtcvxHNKV4YiecPE9ap1mcA Result) {
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_YtcvxHNKV4YiecPE9ap1mcA_));
	sha1_9aTd6QKIPh47P9cab3MQ58pg(str, Result);
}

N_NIMCALL(void, secureHashFile_WH9bD1JrTXe4j39astgya4oA)(NimStringDesc* filename, TY_YtcvxHNKV4YiecPE9ap1mcA Result) {
	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = readFile_T9cm5LIRX2tKEH9aREBZ8A0w(filename);
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_YtcvxHNKV4YiecPE9ap1mcA_));
	secureHash_iXA7ojfe1syFxhtO0guLpg(T1_, Result);
}

N_NIMCALL(NIM_BOOL, eqeq__D9cw7Ut67uVRyWe3YecX0SQ)(TY_YtcvxHNKV4YiecPE9ap1mcA a, TY_YtcvxHNKV4YiecPE9ap1mcA b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = eqeq__Ql5vZ51gew5fqwplIYujaw(a, b);
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, parseSecureHash_z6ogq7oeMr7FogkL734yew)(NimStringDesc* hash, TY_YtcvxHNKV4YiecPE9ap1mcA Result) {
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				NimStringDesc* T4_;
				NI T5_;
				if (!(res <= ((NI) 19))) goto LA3;
				i = res;
				T4_ = (NimStringDesc*)0;
				T4_ = rawNewString(2);
appendChar(T4_, hash->data[(NI)(i * ((NI) 2))]);
appendChar(T4_, hash->data[(NI)((NI)(i * ((NI) 2)) + ((NI) 1))]);
				T5_ = (NI)0;
				T5_ = nsuParseHexInt(T4_);
				Result[(i)- 0] = ((NU8) (T5_));
				res += ((NI) 1);
			} LA3: ;
		}
	}
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

N_NIMCALL(NimStringDesc*, dollar__At9aCTfZ0LzVIMgxCh2oK7g)(TY_YtcvxHNKV4YiecPE9ap1mcA self) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM_vvZ67p0IGcFrRHVAevBkPw_2));
	{
		NU8 v;
		TY_YtcvxHNKV4YiecPE9ap1mcA colontmp_;
		NI i;
		v = (NU8)0;
		memset((void*)colontmp_, 0, sizeof(colontmp_));
		memcpy((void*)colontmp_, (NIM_CONST void*)self, sizeof(TY_YtcvxHNKV4YiecPE9ap1mcA));
		i = ((NI) 0);
		{
			if (!(((NI) (i)) <= ((NI) 19))) goto LA4_;
			{
				while (1) {
					NimStringDesc* T8_;
					v = colontmp_[(i)- 0];
					T8_ = (NimStringDesc*)0;
					T8_ = nsuToHex(((NI64) (((NI) (v)))), ((NI) 2));
					result = resizeString(result, T8_->Sup.len + 0);
appendString(result, T8_);
					{
						if (!(((NI) 19) <= ((NI) (i)))) goto LA11_;
						goto LA6;
					}
					LA11_: ;
					i += ((NI) 1);
				}
			} LA6: ;
		}
		LA4_: ;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_securehashInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_securehashDatInit000)(void) {
NTI_YtcvxHNKV4YiecPE9ap1mcA_.size = sizeof(TY_YtcvxHNKV4YiecPE9ap1mcA);
NTI_YtcvxHNKV4YiecPE9ap1mcA_.kind = 16;
NTI_YtcvxHNKV4YiecPE9ap1mcA_.base = (&NTI_k3HXouOuhqAKq0dx450lXQ_);
NTI_YtcvxHNKV4YiecPE9ap1mcA_.flags = 3;
}

