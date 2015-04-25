/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
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
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, addescaped_331039)(NimStringDesc** result, NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TMP4794, "&lt;", 4);
STRING_LITERAL(TMP4795, "&gt;", 4);
STRING_LITERAL(TMP4796, "&amp;", 5);
STRING_LITERAL(TMP4797, "&quot;", 6);
STRING_LITERAL(TMP4798, "&#x27;", 6);
STRING_LITERAL(TMP4799, "&#x2F;", 6);

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, addescaped_331039)(NimStringDesc** result, NimStringDesc* s) {
	{
		NIM_CHAR c_331044;
		NI i_331048;
		NI L_331050;
		c_331044 = 0;
		i_331048 = ((NI) 0);
		L_331050 = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i_331048 < L_331050)) goto LA3;
				c_331044 = s->data[i_331048];
				switch (((NU8)(c_331044))) {
				case 60:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4794));
				}
				break;
				case 62:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4795));
				}
				break;
				case 38:
				{
					(*result) = resizeString((*result), 5);
appendString((*result), ((NimStringDesc*) &TMP4796));
				}
				break;
				case 34:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4797));
				}
				break;
				case 39:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4798));
				}
				break;
				case 47:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4799));
				}
				break;
				default:
				{
					(*result) = addChar((*result), c_331044);
				}
				break;
				}
				i_331048 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NimStringDesc*, escape_331066)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(((NI) ((s ? s->Sup.len : 0))));
	addescaped_331039((&result), s);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeDatInit)(void) {
}

