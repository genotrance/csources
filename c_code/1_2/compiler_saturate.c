/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
#undef near

N_NIMCALL(NI64, barminusbar__ob65GDP1gLUz8UD9bFXYfng)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		if (!(IL64(0) < b)) goto LA9_;
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7_;
	LA9_: ;
	{
		result = IL64(9223372036854775807);
	}
	LA7_: ;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NI64, barplusbar__ob65GDP1gLUz8UD9bFXYfng_2)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = (NI64)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = (a < IL64(0));
		if (T9_) goto LA10_;
		T9_ = (b < IL64(0));
		LA10_: ;
		if (!T9_) goto LA11_;
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7_;
	LA11_: ;
	{
		result = IL64(9223372036854775807);
	}
	LA7_: ;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NI64, barstarbar__ob65GDP1gLUz8UD9bFXYfng_3)(NI64 a, NI64 b) {
	NI64 result;
	NF resAsFloat;
	NF floatProd;
{	result = (NI64)0;
	resAsFloat = (NF)0;
	floatProd = (NF)0;
	result = (NI64)((NU64)(a) * (NU64)(b));
	floatProd = ((double) (a));
	floatProd = ((NF)(floatProd) * (NF)(((double) (b))));
	resAsFloat = ((double) (result));
	{
		if (!(resAsFloat == floatProd)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		if (!(((NF)(3.2000000000000000e+01) * (NF)((((NF)(resAsFloat) - (NF)(floatProd)) < 0? -(((NF)(resAsFloat) - (NF)(floatProd))) : (((NF)(resAsFloat) - (NF)(floatProd)))))) <= (floatProd < 0? -(floatProd) : (floatProd)))) goto LA7_;
		goto BeforeRet_;
	}
	LA7_: ;
	{
		if (!(0.0 <= floatProd)) goto LA11_;
		result = IL64(9223372036854775807);
	}
	goto LA9_;
	LA11_: ;
	{
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	LA9_: ;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NI64, bardivbar__ob65GDP1gLUz8UD9bFXYfng_4)(NI64 a, NI64 b) {
	NI64 result;
	result = (NI64)0;
	{
		if (!(b == IL64(0))) goto LA3_;
		result = a;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(T6_)) goto LA7_;
		T6_ = (b == IL64(-1));
		LA7_: ;
		if (!T6_) goto LA8_;
		result = IL64(9223372036854775807);
	}
	goto LA1_;
	LA8_: ;
	{
		result = (NI64)(a / b);
	}
	LA1_: ;
	return result;
}

N_NIMCALL(NI64, barmodbar__ob65GDP1gLUz8UD9bFXYfng_5)(NI64 a, NI64 b) {
	NI64 result;
	result = (NI64)0;
	{
		if (!(b == IL64(0))) goto LA3_;
		result = a;
	}
	goto LA1_;
	LA3_: ;
	{
		result = (NI64)(a % b);
	}
	LA1_: ;
	return result;
}

N_NIMCALL(NI64, barabsbar__7goHQbEFKco1IgR9aUHGQ3g)(NI64 a) {
	NI64 result;
	result = (NI64)0;
	{
		if (!!((a == (IL64(-9223372036854775807) - IL64(1))))) goto LA3_;
		{
			if (!(IL64(0) <= a)) goto LA7_;
			result = a;
		}
		goto LA5_;
		LA7_: ;
		{
			result = -(a);
		}
		LA5_: ;
	}
	goto LA1_;
	LA3_: ;
	{
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	LA1_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_saturateInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_saturateDatInit000)(void) {
}

