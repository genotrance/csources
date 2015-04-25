/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
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
typedef NIM_CHAR TY197031[81];
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, hexchar_197091)(NIM_CHAR c, NI* xi);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, encodevintaux_197269)(NI x, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, encodevbiggestintaux_197230)(NI64 x, NimStringDesc** result);
STRING_LITERAL(TMP989, "", 0);
STRING_LITERAL(TMP997, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(TMP3656, "NAN", 3);
STRING_LITERAL(TMP3657, "0.0", 3);
STRING_LITERAL(TMP3658, "INF", 3);
STRING_LITERAL(TMP3659, "-INF", 4);

N_NIMCALL(NI, decodevint_197351)(NCSTRING s, NI* pos) {
	NI result;
	NI i_197358;
	NI sign_197360;
	result = 0;
	i_197358 = (*pos);
	sign_197360 = ((NI) -1);
	{
		if (!((NU8)(s[i_197358]) == (NU8)(45))) goto LA3;
		i_197358 += ((NI) 1);
		sign_197360 = ((NI) 1);
	}
	LA3: ;
	result = ((NI) 0);
	{
		while (1) {
			switch (((NU8)(s[i_197358]))) {
			case 48 ... 57:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) (((NU8)(s[i_197358])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_197358])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_197358])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_197358])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_197358 += ((NI) 1);
		}
	} LA5: ;
	result = (NI)((NU64)((NI)(result * sign_197360)) - (NU64)(((NI) 5)));
	(*pos) = i_197358;
	return result;
}

N_NIMCALL(void, hexchar_197091)(NIM_CHAR c, NI* xi) {
	switch (((NU8)(c))) {
	case 48 ... 57:
	{
		(*xi) = (NI)((NI)((NU64)((*xi)) << (NU64)(((NI) 4))) | ((NI) ((NI)(((NI) (((NU8)(c)))) - ((NI) 48)))));
	}
	break;
	case 97 ... 102:
	{
		(*xi) = (NI)((NI)((NU64)((*xi)) << (NU64)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(c)))) - ((NI) 97)))) + ((NI) 10)))));
	}
	break;
	case 65 ... 70:
	{
		(*xi) = (NI)((NI)((NU64)((*xi)) << (NU64)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(c)))) - ((NI) 65)))) + ((NI) 10)))));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(NimStringDesc*, decodestr_197157)(NCSTRING s, NI* pos) {
	NimStringDesc* result;
	NI i;
	result = 0;
	i = (*pos);
	result = copyString(((NimStringDesc*) &TMP989));
	{
		while (1) {
			switch (((NU8)(s[i]))) {
			case 92:
			{
				NI xi;
				i += ((NI) 3);
				xi = ((NI) 0);
				hexchar_197091(s[(NI)(i - ((NI) 2))], (&xi));
				hexchar_197091(s[(NI)(i - ((NI) 1))], (&xi));
				result = addChar(result, ((NIM_CHAR) (((NI) (xi)))));
			}
			break;
			case 97 ... 122:
			case 65 ... 90:
			case 48 ... 57:
			case 95:
			{
				result = addChar(result, s[i]);
				i += ((NI) 1);
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*pos) = i;
	return result;
}

N_NIMCALL(NI64, decodevbiggestint_197512)(NCSTRING s, NI* pos) {
	NI64 result;
	NI i_197519;
	NI sign_197521;
	result = 0;
	i_197519 = (*pos);
	sign_197521 = ((NI) -1);
	{
		if (!((NU8)(s[i_197519]) == (NU8)(45))) goto LA3;
		i_197519 += ((NI) 1);
		sign_197521 = ((NI) 1);
	}
	LA3: ;
	result = IL64(0);
	{
		while (1) {
			switch (((NU8)(s[i_197519]))) {
			case 48 ... 57:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) (((NU8)(s[i_197519])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_197519])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_197519])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_197519])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_197519 += ((NI) 1);
		}
	} LA5: ;
	result = (NI64)((NU64)((NI64)(result * ((NI64) (sign_197521)))) - (NU64)(IL64(5)));
	(*pos) = i_197519;
	return result;
}

N_NIMCALL(void, encodevintaux_197269)(NI x, NimStringDesc** result) {
	NIM_CHAR d_197275;
	NI v_197277;
	NI rem_197279;
	NI idx_197281;
	d_197275 = 0;
	v_197277 = x;
	rem_197279 = (NI)(v_197277 % ((NI) 190));
	{
		if (!(((NI) (rem_197279)) < ((NI) 0))) goto LA3;
		(*result) = addChar((*result), 45);
		v_197277 = ((NI64)-((NI)(v_197277 / ((NI) 190))));
		rem_197279 = ((NI64)-(((NI) (rem_197279))));
	}
	goto LA1;
	LA3: ;
	{
		v_197277 = (NI)(v_197277 / ((NI) 190));
	}
	LA1: ;
	idx_197281 = ((NI) (rem_197279));
	{
		if (!(idx_197281 < ((NI) 62))) goto LA8;
		d_197275 = ((NimStringDesc*) &TMP997)->data[idx_197281];
	}
	goto LA6;
	LA8: ;
	{
		d_197275 = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_197281 - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_197277 == ((NI) 0)))) goto LA13;
		encodevintaux_197269(v_197277, result);
	}
	LA13: ;
	(*result) = addChar((*result), d_197275);
}

N_NIMCALL(void, encodevint_197296)(NI x, NimStringDesc** result) {
	encodevintaux_197269((NI)((NU64)(x) + (NU64)(((NI) 5))), result);
}

N_NIMCALL(NimStringDesc*, tostrmaxprecision_197024)(NF f) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!((f == f))) goto LA3;
		result = copyString(((NimStringDesc*) &TMP3656));
	}
	goto LA1;
	LA3: ;
	{
		if (!(f == 0.0)) goto LA6;
		result = copyString(((NimStringDesc*) &TMP3657));
	}
	goto LA1;
	LA6: ;
	{
		if (!(f == ((NF)(5.0000000000000000e-01) * (NF)(f)))) goto LA9;
		{
			if (!(0.0 < f)) goto LA13;
			result = copyString(((NimStringDesc*) &TMP3658));
		}
		goto LA11;
		LA13: ;
		{
			result = copyString(((NimStringDesc*) &TMP3659));
		}
		LA11: ;
	}
	goto LA1;
	LA9: ;
	{
		TY197031 buf;
		memset((void*)buf, 0, sizeof(buf));
		sprintf(((NCSTRING) (buf)), "%#.16e", f);
		result = cstrToNimstr(((NCSTRING) (buf)));
	}
	LA1: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, encodestr_197042)(NimStringDesc* s, NimStringDesc** result) {
	{
		NI i_197059;
		NI HEX3Atmp_197069;
		NI res_197072;
		i_197059 = 0;
		HEX3Atmp_197069 = 0;
		HEX3Atmp_197069 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res_197072 = ((NI) 0);
		{
			while (1) {
				if (!(res_197072 <= HEX3Atmp_197069)) goto LA3;
				i_197059 = res_197072;
				switch (((NU8)(s->data[i_197059]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					(*result) = addChar((*result), s->data[i_197059]);
				}
				break;
				default:
				{
					NimStringDesc* LOC6;
					NimStringDesc* LOC7;
					LOC6 = 0;
					LOC7 = 0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s->data[i_197059])))), ((NI) 2));
					LOC6 = rawNewString(LOC7->Sup.len + 1);
appendChar(LOC6, 92);
appendString(LOC6, LOC7);
					(*result) = resizeString((*result), LOC6->Sup.len + 0);
appendString((*result), LOC6);
				}
				break;
				}
				res_197072 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, encodevbiggestintaux_197230)(NI64 x, NimStringDesc** result) {
	NIM_CHAR d_197236;
	NI64 v_197238;
	NI64 rem_197240;
	NI idx_197242;
	d_197236 = 0;
	v_197238 = x;
	rem_197240 = (NI64)(v_197238 % IL64(190));
	{
		if (!(((NI) (rem_197240)) < ((NI) 0))) goto LA3;
		(*result) = addChar((*result), 45);
		v_197238 = -((NI64)(v_197238 / IL64(190)));
		rem_197240 = -(((NI64) (rem_197240)));
	}
	goto LA1;
	LA3: ;
	{
		v_197238 = (NI64)(v_197238 / IL64(190));
	}
	LA1: ;
	idx_197242 = ((NI) (rem_197240));
	{
		if (!(idx_197242 < ((NI) 62))) goto LA8;
		d_197236 = ((NimStringDesc*) &TMP997)->data[idx_197242];
	}
	goto LA6;
	LA8: ;
	{
		d_197236 = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_197242 - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_197238 == IL64(0)))) goto LA13;
		encodevbiggestintaux_197230(v_197238, result);
	}
	LA13: ;
	(*result) = addChar((*result), d_197236);
}

N_NIMCALL(void, encodevbiggestint_197258)(NI64 x, NimStringDesc** result) {
	encodevbiggestintaux_197230((NI64)((NU64)(x) + (NU64)(IL64(5))), result);
}
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsDatInit)(void) {
}

