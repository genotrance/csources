/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
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
N_NIMCALL(NimStringDesc*, findexe_127616)(NimStringDesc* exe);
STRING_LITERAL(TMP5026, "nodejs", 6);
STRING_LITERAL(TMP5027, "node", 4);

N_NIMCALL(NimStringDesc*, findnodejs_527009)(void) {
	NimStringDesc* result;
	result = 0;
	result = findexe_127616(((NimStringDesc*) &TMP5026));
	{
		if (!((result) && (result)->Sup.len == 0)) goto LA3;
		result = findexe_127616(((NimStringDesc*) &TMP5027));
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nodejsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nodejsDatInit)(void) {
}

