/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <math.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef NU8 tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA;

N_LIB_PRIVATE N_NIMCALL(NF, log2_ofkAe2ROmA188x6KIGzcDA)(NF x) {
	NF result;
	NF T1_;
	NF T2_;
{	result = (NF)0;
	T1_ = (NF)0;
	T1_ = log(x);
	T2_ = (NF)0;
	T2_ = log(2.0000000000000000e+00);
	result = ((NF)(T1_) / (NF)(T2_));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NF, round_FL9bhksfuQsfLDCxRHuknsg)(NF x, NI places) {
	NF result;
	result = (NF)0;
	{
		if (!(places == ((NI) 0))) goto LA3_;
		result = round(x);
	}
	goto LA1_;
	LA3_: ;
	{
		NF mult;
		NF T6_;
		mult = pow(1.0000000000000000e+01, ((NF) (places)));
		T6_ = (NF)0;
		T6_ = round(((NF)(x) * (NF)(mult)));
		result = ((NF)(T6_) / (NF)(mult));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg)(NI x) {
	NIM_BOOL result;
	NIM_BOOL T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI) 0) < x);
	if (!(T1_)) goto LA2_;
	T1_ = ((NI)(x & (NI)(x - ((NI) 1))) == ((NI) 0));
	LA2_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA, classify_rfodLs2J9b87EDgWnWZoObA)(NF x) {
	tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA result;
{	result = (tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA)0;
	{
		if (!(x == 0.0)) goto LA3_;
		{
			if (!(((NF)(1.0000000000000000e+00) / (NF)(x)) == INF)) goto LA7_;
			result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 2);
			goto BeforeRet_;
		}
		goto LA5_;
		LA7_: ;
		{
			result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 3);
			goto BeforeRet_;
		}
		LA5_: ;
	}
	LA3_: ;
	{
		if (!(((NF)(x) * (NF)(5.0000000000000000e-01)) == x)) goto LA12_;
		{
			if (!(0.0 < x)) goto LA16_;
			result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 5);
			goto BeforeRet_;
		}
		goto LA14_;
		LA16_: ;
		{
			result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 6);
			goto BeforeRet_;
		}
		LA14_: ;
	}
	LA12_: ;
	{
		if (!!((x == x))) goto LA21_;
		result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 4);
		goto BeforeRet_;
	}
	LA21_: ;
	result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 0);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA)(NI x) {
	NI result;
	result = (NI)0;
	result = (NI)(x - ((NI) 1));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 16))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 8))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 4))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 2))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 1))));
	result += (NI)(((NI) 1) + (x <= ((NI) 0)));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void) {
}

