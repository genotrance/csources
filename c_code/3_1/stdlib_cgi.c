/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct Keyvaluepair134008 Keyvaluepair134008;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepair134008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  Keyvaluepair134008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
Stringtableobj134012* gcookies_336120;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, encodeurl_335004)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(((NI) ((NI)((s ? s->Sup.len : 0) + (NI)((NU32)((s ? s->Sup.len : 0)) >> (NU32)(((NI) 2)))))));
	{
		NI i_335018;
		NI HEX3Atmp_335028;
		NI res_335031;
		i_335018 = 0;
		HEX3Atmp_335028 = 0;
		HEX3Atmp_335028 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res_335031 = ((NI) 0);
		{
			while (1) {
				if (!(res_335031 <= HEX3Atmp_335028)) goto LA3;
				i_335018 = res_335031;
				switch (((NU8)(s->data[i_335018]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					result = addChar(result, s->data[i_335018]);
				}
				break;
				case 32:
				{
					result = addChar(result, 43);
				}
				break;
				default:
				{
					NimStringDesc* LOC7;
					result = addChar(result, 37);
					LOC7 = 0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s->data[i_335018])))), ((NI) 2));
					result = resizeString(result, LOC7->Sup.len + 0);
appendString(result, LOC7);
				}
				break;
				}
				res_335031 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cgiDatInit)(void) {
}

