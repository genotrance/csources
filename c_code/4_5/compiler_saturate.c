/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

N_NIMCALL(NI64, HEX7CHEX2DHEX7C_255030)(NI64 a, NI64 b) {
	NI64 result;
{	result = 0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(0) <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		if (!(IL64(0) < b)) goto LA9;
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7;
	LA9: ;
	{
		result = IL64(9223372036854775807);
	}
	LA7: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI64, HEX7CabsHEX7C_255041)(NI64 a) {
	NI64 result;
	result = 0;
	{
		if (!!((a == (IL64(-9223372036854775807) - IL64(1))))) goto LA3;
		{
			if (!(IL64(0) <= a)) goto LA7;
			result = a;
		}
		goto LA5;
		LA7: ;
		{
			result = -(a);
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI64, HEX7CHEX2BHEX7C_255019)(NI64 a, NI64 b) {
	NI64 result;
{	result = 0;
	result = (NI64)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (IL64(0) <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = (a < IL64(0));
		if (LOC9) goto LA10;
		LOC9 = (b < IL64(0));
		LA10: ;
		if (!LOC9) goto LA11;
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7;
	LA11: ;
	{
		result = IL64(9223372036854775807);
	}
	LA7: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI64, HEX7CHEX2AHEX7C_255073)(NI64 a, NI64 b) {
	NI64 result;
	NF resasfloat;
	NF floatprod;
{	result = 0;
	resasfloat = 0;
	floatprod = 0;
	result = (NI64)((NU64)(a) * (NU64)(b));
	floatprod = ((double) (a));
	floatprod = ((NF)(floatprod) * (NF)(((double) (b))));
	resasfloat = ((double) (result));
	{
		if (!(resasfloat == floatprod)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(((NF)(3.2000000000000000e+01) * (NF)((((NF)(resasfloat) - (NF)(floatprod)) > 0? (((NF)(resasfloat) - (NF)(floatprod))) : -(((NF)(resasfloat) - (NF)(floatprod)))))) <= (floatprod > 0? (floatprod) : -(floatprod)))) goto LA7;
		goto BeforeRet;
	}
	LA7: ;
	{
		if (!(0.0 <= floatprod)) goto LA11;
		result = IL64(9223372036854775807);
	}
	goto LA9;
	LA11: ;
	{
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	LA9: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI64, HEX7CdivHEX7C_255051)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == IL64(0))) goto LA3;
		result = a;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC6)) goto LA7;
		LOC6 = (b == IL64(-1));
		LA7: ;
		if (!LOC6) goto LA8;
		result = IL64(9223372036854775807);
	}
	goto LA1;
	LA8: ;
	{
		result = (NI64)(a / b);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_saturateInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_saturateDatInit)(void) {
}

