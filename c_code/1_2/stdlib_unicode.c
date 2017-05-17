/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
#undef near
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
STRING_LITERAL(TM_e1RUVS0Bw7xmj9cnDPXLJMQ_2, "", 0);

N_NIMCALL(NimStringDesc*, nuctoUTF8)(NI32 c) {
	NimStringDesc* result;
	NI32 i;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM_e1RUVS0Bw7xmj9cnDPXLJMQ_2));
	i = c;
	{
		if (!((NU32)(i) <= (NU32)(((NI32) 127)))) goto LA3_;
		result = setLengthStr(result, ((NI) 1));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) (i))));
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((NU32)(i) <= (NU32)(((NI32) 2047)))) goto LA6_;
		result = setLengthStr(result, ((NI) 2));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 6))) | ((NI32) 192))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)(i & ((NI32) 63)))) | ((NI) 128))))));
	}
	goto LA1_;
	LA6_: ;
	{
		if (!((NU32)(i) <= (NU32)(((NI32) 65535)))) goto LA9_;
		result = setLengthStr(result, ((NI) 3));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 12))) | ((NI32) 224))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)(i & ((NI32) 63)))) | ((NI) 128))))));
	}
	goto LA1_;
	LA9_: ;
	{
		if (!((NU32)(i) <= (NU32)(((NI32) 2097151)))) goto LA12_;
		result = setLengthStr(result, ((NI) 4));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 18))) | ((NI32) 240))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 12))) & ((NI32) 63)))) | ((NI) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128))))));
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)(i & ((NI32) 63)))) | ((NI) 128))))));
	}
	goto LA1_;
	LA12_: ;
	{
		if (!((NU32)(i) <= (NU32)(((NI32) 67108863)))) goto LA15_;
		result = setLengthStr(result, ((NI) 5));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 24))) | ((NI32) 248))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 18))) & ((NI32) 63)))) | ((NI) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 12))) & ((NI32) 63)))) | ((NI) 128))))));
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128))))));
		result->data[((NI) 4)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)(i & ((NI32) 63)))) | ((NI) 128))))));
	}
	goto LA1_;
	LA15_: ;
	{
		if (!((NU32)(i) <= (NU32)(((NI32) 2147483647)))) goto LA18_;
		result = setLengthStr(result, ((NI) 6));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 30))) | ((NI32) 252))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 24))) & ((NI32) 63)))) | ((NI) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 18))) & ((NI32) 63)))) | ((NI) 128))))));
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 12))) & ((NI32) 63)))) | ((NI) 128))))));
		result->data[((NI) 4)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128))))));
		result->data[((NI) 5)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)(i & ((NI32) 63)))) | ((NI) 128))))));
	}
	goto LA1_;
	LA18_: ;
	{
	}
	LA1_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit000)(void) {
}

