/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef int TY141201[4];
#include <sys/types.h>
#include <sys/sysctl.h>

N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	TY141201 mib;
	NI numcpu;
	size_t len;
	int LOC1;
	result = 0;
	memset((void*)mib, 0, sizeof(mib));
	numcpu = 0;
	len = 0;
	mib[(((NI) 0))- 0] = ((int) 6);
	mib[(((NI) 1))- 0] = ((int) 25);
	len = ((NI) 4);
	LOC1 = 0;
	LOC1 = sysctl(mib, ((int) 2), ((void*) ((&numcpu))), (&len), NIM_NIL, ((NI) 0));
	{
		int LOC6;
		if (!(numcpu < ((NI) 1))) goto LA4;
		mib[(((NI) 1))- 0] = ((int) 3);
		LOC6 = 0;
		LOC6 = sysctl(mib, ((int) 2), ((void*) ((&numcpu))), (&len), NIM_NIL, ((NI) 0));
	}
	LA4: ;
	result = numcpu;
	{
		if (!(result <= ((NI) 0))) goto LA9;
		result = ((NI) 1);
	}
	LA9: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit)(void) {
}

