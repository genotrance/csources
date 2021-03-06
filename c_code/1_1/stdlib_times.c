/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <time.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_DateTime_S7qec11z7km5Pal3UXrHmw tyObject_DateTime_S7qec11z7km5Pal3UXrHmw;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA;
typedef struct tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ;
typedef struct tyTuple_2uzTbg8jwom7zHhmM2RgHg tyTuple_2uzTbg8jwom7zHhmM2RgHg;
typedef struct tyObject_Env_libslashpureslashtimesdotnim__sO5O0Qy9bzKs0atwA6HUBAw tyObject_Env_libslashpureslashtimesdotnim__sO5O0Qy9bzKs0atwA6HUBAw;
typedef struct tyTuple_XjuGlLf9cyYx66ViXrBCvPQ tyTuple_XjuGlLf9cyYx66ViXrBCvPQ;
typedef struct tyTuple_47w2DboNEPf69aPgubZdd7Q tyTuple_47w2DboNEPf69aPgubZdd7Q;
typedef struct tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
typedef NU8 tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw;
typedef NU8 tyEnum_WeekDay_SVfemTA9aCOyua2TJYa6yBg;
struct tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ {
NI64 adjTime;
NI utcOffset;
NIM_BOOL isDst;
};
typedef struct {
N_NIMCALL_PTR(tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ, ClP_0) (NI64 time_0, void* ClE_0);
void* ClE_0;
} tyProc_ye9aJuuf18PyKew55REW9aIA;
struct tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA {
tyProc_ye9aJuuf18PyKew55REW9aIA zoneInfoFromUtc;
tyProc_ye9aJuuf18PyKew55REW9aIA zoneInfoFromTz;
NimStringDesc* name;
};
struct tyObject_DateTime_S7qec11z7km5Pal3UXrHmw {
  RootObj Sup;
NI second;
NI minute;
NI hour;
NI monthday;
tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw month;
NI year;
tyEnum_WeekDay_SVfemTA9aCOyua2TJYa6yBg weekday;
NI yearday;
NIM_BOOL isDst;
tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA timezone;
NI utcOffset;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyTuple_2uzTbg8jwom7zHhmM2RgHg {
void* Field0;
tyObject_Env_libslashpureslashtimesdotnim__sO5O0Qy9bzKs0atwA6HUBAw* Field1;
};
typedef N_CLOSURE_PTR(tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ, TM_6NbDwwj5FY059b1gz2AsAZQ_11) (NI64 time_0);
struct tyTuple_XjuGlLf9cyYx66ViXrBCvPQ {
NI Field0;
tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw Field1;
NI Field2;
};
struct tyTuple_47w2DboNEPf69aPgubZdd7Q {
NI Field0;
NI Field1;
NI Field2;
};
typedef NI tyArray_Splpnswz3rudLg9bDsQoDXg[12];
typedef N_CLOSURE_PTR(tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ, TM_6NbDwwj5FY059b1gz2AsAZQ_12) (NI64 time_0, void* ClE_0);
typedef N_CLOSURE_PTR(tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ, TM_6NbDwwj5FY059b1gz2AsAZQ_13) (NI64 adjTime, void* ClE_0);
struct tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw {
NI32 dwLowDateTime;
NI32 dwHighDateTime;
};
typedef N_STDCALL_PTR(void, tyProc_9bc9cLDdaqTE6n5J78feKRYg) (tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw* lpSystemTimeAsFileTime);
struct tyObject_Env_libslashpureslashtimesdotnim__sO5O0Qy9bzKs0atwA6HUBAw {
  RootObj Sup;
};
N_LIB_PRIVATE N_NIMCALL(void, now_d1K9bEvprvRT065W47OkDBQ)(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw* Result);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void, local_hVIxY9b0jArUwtFpeFlykaw)(NI64 t, tyObject_DateTime_S7qec11z7km5Pal3UXrHmw* Result);
N_LIB_PRIVATE N_NIMCALL(void, inZone_qxJwIAgtfftqwwC9bRQp48Q)(NI64 time_0, tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA zone, tyObject_DateTime_S7qec11z7km5Pal3UXrHmw* Result);
N_LIB_PRIVATE N_NIMCALL(void, initDateTime_uD4AK48B0hp9bgfSusd1h5w)(tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ zt, tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA zone, tyObject_DateTime_S7qec11z7km5Pal3UXrHmw* Result);
N_LIB_PRIVATE N_NIMCALL(tyTuple_XjuGlLf9cyYx66ViXrBCvPQ, fromEpochDay_mJEaQzDB47WyotCnk4B9c2A)(NI64 epochday);
N_LIB_PRIVATE N_NIMCALL(tyEnum_WeekDay_SVfemTA9aCOyua2TJYa6yBg, getDayOfWeek_NgjKhNpZaAlscp2jmCchuA)(NI monthday, tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw month, NI year);
static N_INLINE(void, assertValidDate_oFHP8g45fJYczB5bgKWFQQtimes)(NI monthday, tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw month, NI year);
N_LIB_PRIVATE N_NIMCALL(NI64, toEpochDay_BB6kKpP0ite6Jp9a5rrEt5w)(NI monthday, tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw month, NI year);
N_LIB_PRIVATE N_NIMCALL(NI, getDayOfYear_MH9agrbA2S9bCWbHnQW6iSgg)(NI monthday, tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw month, NI year);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isLeapYear_yparhddyYdVywEbz0lSrTA)(NI year);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, local_jKhnotGEODw9cTbPlQYY7nw)(tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA* Result);
N_LIB_PRIVATE N_NIMCALL(tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ, localZoneInfoFromUtc_OZhV4VYjnsXnCQnuY4nkyA)(NI64 time_0);
N_LIB_PRIVATE N_NIMCALL(struct tm, getStructTm_N6PHKCbc3yXK9a8AowE9bNpg)(NI64 time_0);
N_LIB_PRIVATE N_NIMCALL(NI64, toAdjTime_LW9bFZkDixh7bt3BbEpgcVQ)(struct tm* tm);
N_LIB_PRIVATE N_NIMCALL(NI64, toUnix_KOVzgXVRJxxlPUOsrk3eDQ)(NI64 t);
N_LIB_PRIVATE N_NIMCALL(tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ, localZoneInfoFromTz_V1YfnncByYx9cGlKR6nLnvg)(NI64 adjTime);
N_LIB_PRIVATE N_NIMCALL(struct tm, getStructTm_09cCNsL0q0G39cJDbvHgvxXw)(NI64 time_0);
N_LIB_PRIVATE N_NIMCALL(NI64, getTime_wqmoaGqnr3gMTpWruGQ3FA)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x, NI minchars);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NI64, rdFileTime_8xfVp1z4bc5fRCRgoEFhIQ)(tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw f);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_S7qec11z7km5Pal3UXrHmw_;
extern TNimType NTI_rUuqTvFmkC6KKRqDAazGEA_;
extern TNimType NTI_LBgXxpmYOpS8xroRZgNvbg_;
extern TNimType NTI_Gz6vwaK0PZQIDIwfuvKsOg_;
extern TNimType NTI_DcZ5N67dL3rBj9bxGtx09bFg_;
TNimType NTI_JS0JuFvCBbC2GL3xXBnPQw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_SVfemTA9aCOyua2TJYa6yBg_;
extern TNimType NTI_g9buja9c9aeh0rkDpqsXOJF9bA_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
TNimType NTI_g1TRr0fUzr8gtJpVPUSSnA_;
TNimType NTI_ye9aJuuf18PyKew55REW9aIA_;
extern TNimType NTI_vr5DoT1jILTGdRlYv1OYpw_;
extern TNimType NTI_58EFneeS9at7cA541QCoGAw_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern tyProc_9bc9cLDdaqTE6n5J78feKRYg Dl_134625_;
NIM_CONST tyArray_Splpnswz3rudLg9bDsQoDXg daysUntilMonthLeap_bWLQu3i9bqoFDTyygQP29aFA = {((NI) 0),
((NI) 31),
((NI) 60),
((NI) 91),
((NI) 121),
((NI) 152),
((NI) 182),
((NI) 213),
((NI) 244),
((NI) 274),
((NI) 305),
((NI) 335)}
;
NIM_CONST tyArray_Splpnswz3rudLg9bDsQoDXg daysUntilMonth_TV2R7Va3CeAXpg6eZUosdg = {((NI) 0),
((NI) 31),
((NI) 59),
((NI) 90),
((NI) 120),
((NI) 151),
((NI) 181),
((NI) 212),
((NI) 243),
((NI) 273),
((NI) 304),
((NI) 334)}
;
STRING_LITERAL(TM_6NbDwwj5FY059b1gz2AsAZQ_14, "LOCAL", 5);

N_LIB_PRIVATE N_NIMCALL(tyTuple_XjuGlLf9cyYx66ViXrBCvPQ, fromEpochDay_mJEaQzDB47WyotCnk4B9c2A)(NI64 epochday) {
	tyTuple_XjuGlLf9cyYx66ViXrBCvPQ result;
	NI64 z;
	NI64 era;
	NI64 T1_;
	NI64 doe;
	NI64 yoe;
	NI64 y;
	NI64 doy;
	NI64 mp;
	NI64 d;
	NI64 m;
	NI T7_;
{	memset((void*)(&result), 0, sizeof(result));
	z = epochday;
	z += ((NI) 719468);
	T1_ = (NI64)0;
	{
		if (!(IL64(0) <= z)) goto LA4_;
		T1_ = z;
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = (NI64)(z - IL64(146096));
	}
	LA2_: ;
	era = (NI64)(T1_ / IL64(146097));
	doe = (NI64)(z - (NI64)(era * IL64(146097)));
	yoe = (NI64)((NI64)((NI64)((NI64)(doe - (NI64)(doe / IL64(1460))) + (NI64)(doe / IL64(36524))) - (NI64)(doe / IL64(146096))) / IL64(365));
	y = (NI64)(yoe + (NI64)(era * IL64(400)));
	doy = (NI64)(doe - (NI64)((NI64)((NI64)(IL64(365) * yoe) + (NI64)(yoe / IL64(4))) - (NI64)(yoe / IL64(100))));
	mp = (NI64)((NI64)((NI64)(IL64(5) * doy) + IL64(2)) / IL64(153));
	d = (NI64)((NI64)(doy - (NI64)((NI64)((NI64)(IL64(153) * mp) + IL64(2)) / IL64(5))) + IL64(1));
	T7_ = (NI)0;
	{
		if (!(mp < IL64(10))) goto LA10_;
		T7_ = ((NI) 3);
	}
	goto LA8_;
	LA10_: ;
	{
		T7_ = ((NI) -9);
	}
	LA8_: ;
	m = (NI64)(mp + ((NI64) (T7_)));
	result.Field0 = ((NI) (d));
	result.Field1 = ((tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw) (m));
	result.Field2 = ((NI) ((NI64)(y + ((NI64) ((m <= IL64(2)))))));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, assertValidDate_oFHP8g45fJYczB5bgKWFQQtimes)(NI monthday, tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw month, NI year) {
}

N_LIB_PRIVATE N_NIMCALL(NI64, toEpochDay_BB6kKpP0ite6Jp9a5rrEt5w)(NI monthday, tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw month, NI year) {
	NI64 result;
	tyTuple_47w2DboNEPf69aPgubZdd7Q T1_;
	NI y;
	NI m;
	NI d;
	NI era;
	NI T6_;
	NI yoe;
	NI doy;
	NI T12_;
	NI doe;
{	result = (NI64)0;
	assertValidDate_oFHP8g45fJYczB5bgKWFQQtimes(monthday, month, year);
	T1_.Field0 = year;
	T1_.Field1 = month;
	T1_.Field2 = ((NI) (monthday));
	y = T1_.Field0;
	m = T1_.Field1;
	d = T1_.Field2;
	{
		if (!(m <= ((NI) 2))) goto LA4_;
		y -= ((NI) 1);
	}
	LA4_: ;
	T6_ = (NI)0;
	{
		if (!(((NI) 0) <= y)) goto LA9_;
		T6_ = y;
	}
	goto LA7_;
	LA9_: ;
	{
		T6_ = (NI)(y - ((NI) 399));
	}
	LA7_: ;
	era = (NI)(T6_ / ((NI) 400));
	yoe = (NI)(y - (NI)(era * ((NI) 400)));
	T12_ = (NI)0;
	{
		if (!(((NI) 2) < m)) goto LA15_;
		T12_ = ((NI) -3);
	}
	goto LA13_;
	LA15_: ;
	{
		T12_ = ((NI) 9);
	}
	LA13_: ;
	doy = (NI)((NI)((NI)((NI)((NI)(((NI) 153) * (NI)(m + T12_)) + ((NI) 2)) / ((NI) 5)) + d) - ((NI) 1));
	doe = (NI)((NI)((NI)((NI)(yoe * ((NI) 365)) + (NI)(yoe / ((NI) 4))) - (NI)(yoe / ((NI) 100))) + doy);
	result = ((NI64) ((NI)((NI)((NI)(era * ((NI) 146097)) + doe) - ((NI) 719468))));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_WeekDay_SVfemTA9aCOyua2TJYa6yBg, getDayOfWeek_NgjKhNpZaAlscp2jmCchuA)(NI monthday, tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw month, NI year) {
	tyEnum_WeekDay_SVfemTA9aCOyua2TJYa6yBg result;
	NI64 days;
	NI64 T1_;
	NI64 weeks;
	NI64 T2_;
	NI64 wd;
	result = (tyEnum_WeekDay_SVfemTA9aCOyua2TJYa6yBg)0;
	assertValidDate_oFHP8g45fJYczB5bgKWFQQtimes(monthday, month, year);
	T1_ = (NI64)0;
	T1_ = toEpochDay_BB6kKpP0ite6Jp9a5rrEt5w(monthday, month, year);
	days = (NI64)(T1_ - IL64(3));
	T2_ = (NI64)0;
	{
		if (!(IL64(0) <= days)) goto LA5_;
		T2_ = days;
	}
	goto LA3_;
	LA5_: ;
	{
		T2_ = (NI64)(days - IL64(6));
	}
	LA3_: ;
	weeks = (NI64)(T2_ / IL64(7));
	wd = (NI64)(days - (NI64)(weeks * IL64(7)));
	{
		if (!(wd == IL64(0))) goto LA10_;
		result = ((tyEnum_WeekDay_SVfemTA9aCOyua2TJYa6yBg) 6);
	}
	goto LA8_;
	LA10_: ;
	{
		result = ((tyEnum_WeekDay_SVfemTA9aCOyua2TJYa6yBg) ((NI64)(wd - IL64(1))));
	}
	LA8_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isLeapYear_yparhddyYdVywEbz0lSrTA)(NI year) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T3_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((NI)(year % ((NI) 4)) == ((NI) 0));
	if (!(T1_)) goto LA2_;
	T3_ = (NIM_BOOL)0;
	T3_ = !(((NI)(year % ((NI) 100)) == ((NI) 0)));
	if (T3_) goto LA4_;
	T3_ = ((NI)(year % ((NI) 400)) == ((NI) 0));
	LA4_: ;
	T1_ = T3_;
	LA2_: ;
	result = T1_;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, getDayOfYear_MH9agrbA2S9bCWbHnQW6iSgg)(NI monthday, tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw month, NI year) {
	NI result;
	result = (NI)0;
	assertValidDate_oFHP8g45fJYczB5bgKWFQQtimes(monthday, month, year);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isLeapYear_yparhddyYdVywEbz0lSrTA(year);
		if (!T3_) goto LA4_;
		result = ((NI) ((NI)((NI)(daysUntilMonthLeap_bWLQu3i9bqoFDTyygQP29aFA[(month)- 1] + ((NI) (monthday))) - ((NI) 1))));
	}
	goto LA1_;
	LA4_: ;
	{
		result = ((NI) ((NI)((NI)(daysUntilMonth_TV2R7Va3CeAXpg6eZUosdg[(month)- 1] + ((NI) (monthday))) - ((NI) 1))));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, initDateTime_uD4AK48B0hp9bgfSusd1h5w)(tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ zt, tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA zone, tyObject_DateTime_S7qec11z7km5Pal3UXrHmw* Result) {
	NI64 adjTime;
	NI64 epochday;
	NI64 T1_;
	NI64 rem;
	NI64 hour;
	NI64 minute;
	NI64 second;
	tyTuple_XjuGlLf9cyYx66ViXrBCvPQ T7_;
	NI d;
	tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw m;
	NI y;
	genericReset((void*)Result, (&NTI_S7qec11z7km5Pal3UXrHmw_));
	(*Result).Sup.m_type = (&NTI_S7qec11z7km5Pal3UXrHmw_);
	adjTime = zt.adjTime;
	T1_ = (NI64)0;
	{
		if (!(IL64(0) <= adjTime)) goto LA4_;
		T1_ = adjTime;
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = (NI64)(adjTime - IL64(86399));
	}
	LA2_: ;
	epochday = (NI64)(T1_ / IL64(86400));
	rem = (NI64)(zt.adjTime - (NI64)(epochday * IL64(86400)));
	hour = (NI64)(rem / IL64(3600));
	rem = (NI64)(rem - (NI64)(hour * IL64(3600)));
	minute = (NI64)(rem / IL64(60));
	rem = (NI64)(rem - (NI64)(minute * IL64(60)));
	second = rem;
	T7_ = fromEpochDay_mJEaQzDB47WyotCnk4B9c2A(epochday);
	d = T7_.Field0;
	m = T7_.Field1;
	y = T7_.Field2;
	genericReset((void*)Result, (&NTI_S7qec11z7km5Pal3UXrHmw_));
	(*Result).Sup.m_type = (&NTI_S7qec11z7km5Pal3UXrHmw_);
	(*Result).year = y;
	(*Result).month = m;
	(*Result).monthday = d;
	(*Result).hour = ((NI) (hour));
	(*Result).minute = ((NI) (minute));
	(*Result).second = ((NI) (second));
	(*Result).weekday = getDayOfWeek_NgjKhNpZaAlscp2jmCchuA(d, m, y);
	(*Result).yearday = getDayOfYear_MH9agrbA2S9bCWbHnQW6iSgg(d, m, y);
	(*Result).isDst = zt.isDst;
	unsureAsgnRef((void**) (&(*Result).timezone.zoneInfoFromUtc.ClE_0), zone.zoneInfoFromUtc.ClE_0);
	(*Result).timezone.zoneInfoFromUtc.ClP_0 = zone.zoneInfoFromUtc.ClP_0;
	unsureAsgnRef((void**) (&(*Result).timezone.zoneInfoFromTz.ClE_0), zone.zoneInfoFromTz.ClE_0);
	(*Result).timezone.zoneInfoFromTz.ClP_0 = zone.zoneInfoFromTz.ClP_0;
	unsureAsgnRef((void**) (&(*Result).timezone.name), copyString(zone.name));
	(*Result).utcOffset = zt.utcOffset;
}

N_LIB_PRIVATE N_NIMCALL(void, inZone_qxJwIAgtfftqwwC9bRQp48Q)(NI64 time_0, tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA zone, tyObject_DateTime_S7qec11z7km5Pal3UXrHmw* Result) {
	tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ zoneInfo;
	genericReset((void*)Result, (&NTI_S7qec11z7km5Pal3UXrHmw_));
	(*Result).Sup.m_type = (&NTI_S7qec11z7km5Pal3UXrHmw_);
	zoneInfo = zone.zoneInfoFromUtc.ClE_0? zone.zoneInfoFromUtc.ClP_0(time_0, zone.zoneInfoFromUtc.ClE_0):((TM_6NbDwwj5FY059b1gz2AsAZQ_11)(zone.zoneInfoFromUtc.ClP_0))(time_0);
	initDateTime_uD4AK48B0hp9bgfSusd1h5w(zoneInfo, zone, Result);
}

N_LIB_PRIVATE N_NIMCALL(struct tm, getStructTm_N6PHKCbc3yXK9a8AowE9bNpg)(NI64 time_0) {
	struct tm result;
	NI64 timei64;
	NI64 a;
	struct tm* T9_;
	memset((void*)(&result), 0, sizeof(result));
	timei64 = time_0;
	{
		if (!(timei64 < (IL64(-9223372036854775807) - IL64(1)))) goto LA3_;
		a = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(IL64(9223372036854775807) < timei64)) goto LA6_;
		a = IL64(9223372036854775807);
	}
	goto LA1_;
	LA6_: ;
	{
		a = timei64;
	}
	LA1_: ;
	T9_ = (struct tm*)0;
	T9_ = localtime((&a));
	result = (*T9_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, toAdjTime_LW9bFZkDixh7bt3BbEpgcVQ)(struct tm* tm) {
	NI64 result;
	NI64 epochDay;
	result = (NI64)0;
	epochDay = toEpochDay_BB6kKpP0ite6Jp9a5rrEt5w(((NI) ((*tm).tm_mday)), ((tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw) ((NI32)((*tm).tm_mon + ((NI32) 1)))), (NI)(((NI) ((*tm).tm_year)) + ((NI) 1900)));
	result = (NI64)(epochDay * IL64(86400));
	result += ((NI) ((NI32)((*tm).tm_hour * ((NI32) 3600))));
	result += ((NI) ((NI32)((*tm).tm_min * ((NI32) 60))));
	result += ((NI) ((*tm).tm_sec));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, toUnix_KOVzgXVRJxxlPUOsrk3eDQ)(NI64 t) {
	NI64 result;
	result = (NI64)0;
	result = t;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ, localZoneInfoFromUtc_OZhV4VYjnsXnCQnuY4nkyA)(NI64 time_0) {
	tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ result;
	struct tm tm;
	NI64 adjTime;
	NI64 T1_;
	NI64 T2_;
	memset((void*)(&result), 0, sizeof(result));
	tm = getStructTm_N6PHKCbc3yXK9a8AowE9bNpg(time_0);
	adjTime = toAdjTime_LW9bFZkDixh7bt3BbEpgcVQ((&tm));
	result.adjTime = adjTime;
	T1_ = (NI64)0;
	T1_ = toUnix_KOVzgXVRJxxlPUOsrk3eDQ(time_0);
	T2_ = (NI64)0;
	T2_ = toUnix_KOVzgXVRJxxlPUOsrk3eDQ(adjTime);
	result.utcOffset = ((NI) ((NI64)(T1_ - T2_)));
	result.isDst = (((NI32) 0) < tm.tm_isdst);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(struct tm, getStructTm_09cCNsL0q0G39cJDbvHgvxXw)(NI64 time_0) {
	struct tm result;
	NI64 timei64;
	NI64 a;
	struct tm* T9_;
	memset((void*)(&result), 0, sizeof(result));
	timei64 = time_0;
	{
		if (!(timei64 < (IL64(-9223372036854775807) - IL64(1)))) goto LA3_;
		a = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(IL64(9223372036854775807) < timei64)) goto LA6_;
		a = IL64(9223372036854775807);
	}
	goto LA1_;
	LA6_: ;
	{
		a = timei64;
	}
	LA1_: ;
	T9_ = (struct tm*)0;
	T9_ = localtime((&a));
	result = (*T9_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ, localZoneInfoFromTz_V1YfnncByYx9cGlKR6nLnvg)(NI64 adjTime) {
	tyObject_ZonedTime_WigfH9apQAxJ69bBPh3wB8RQ result;
	NI64 adjTimei64;
	NI64 past;
	struct tm tm;
	NI64 pastOffset;
	NI64 T1_;
	NI64 future;
	NI64 futureOffset;
	NI64 T2_;
	NI utcOffset;
	NI64 utcTime;
	memset((void*)(&result), 0, sizeof(result));
	adjTimei64 = adjTime;
	past = (NI64)(adjTimei64 - IL64(86400));
	tm = getStructTm_09cCNsL0q0G39cJDbvHgvxXw(past);
	T1_ = (NI64)0;
	T1_ = toAdjTime_LW9bFZkDixh7bt3BbEpgcVQ((&tm));
	pastOffset = (NI64)(past - T1_);
	future = (NI64)(adjTimei64 + IL64(86400));
	tm = getStructTm_09cCNsL0q0G39cJDbvHgvxXw(future);
	T2_ = (NI64)0;
	T2_ = toAdjTime_LW9bFZkDixh7bt3BbEpgcVQ((&tm));
	futureOffset = (NI64)(future - T2_);
	utcOffset = (NI)0;
	{
		if (!(pastOffset == futureOffset)) goto LA5_;
		utcOffset = ((NI) (pastOffset));
	}
	goto LA3_;
	LA5_: ;
	{
		struct tm T12_;
		NI64 T13_;
		{
			if (!(futureOffset < pastOffset)) goto LA10_;
			adjTimei64 -= ((NI) 3600);
		}
		LA10_: ;
		adjTimei64 += pastOffset;
		T12_ = getStructTm_09cCNsL0q0G39cJDbvHgvxXw(adjTimei64);
		T13_ = (NI64)0;
		T13_ = toAdjTime_LW9bFZkDixh7bt3BbEpgcVQ((&T12_));
		utcOffset = ((NI) ((NI64)(adjTimei64 - T13_)));
	}
	LA3_: ;
	utcTime = (NI64)(adjTime + ((NI64) (utcOffset)));
	tm = getStructTm_09cCNsL0q0G39cJDbvHgvxXw(utcTime);
	result.adjTime = toAdjTime_LW9bFZkDixh7bt3BbEpgcVQ((&tm));
	result.utcOffset = ((NI) ((NI64)(utcTime - result.adjTime)));
	result.isDst = (((NI32) 0) < tm.tm_isdst);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, local_jKhnotGEODw9cTbPlQYY7nw)(tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA* Result) {
	tyProc_ye9aJuuf18PyKew55REW9aIA T1_;
	tyProc_ye9aJuuf18PyKew55REW9aIA T2_;
	genericReset((void*)Result, (&NTI_g1TRr0fUzr8gtJpVPUSSnA_));
	genericReset((void*)Result, (&NTI_g1TRr0fUzr8gtJpVPUSSnA_));
	memset((void*)(&T1_), 0, sizeof(T1_));
	T1_.ClP_0 = ((TM_6NbDwwj5FY059b1gz2AsAZQ_12) (localZoneInfoFromUtc_OZhV4VYjnsXnCQnuY4nkyA)); T1_.ClE_0 = NIM_NIL;
	unsureAsgnRef((void**) (&(*Result).zoneInfoFromUtc.ClE_0), T1_.ClE_0);
	(*Result).zoneInfoFromUtc.ClP_0 = T1_.ClP_0;
	memset((void*)(&T2_), 0, sizeof(T2_));
	T2_.ClP_0 = ((TM_6NbDwwj5FY059b1gz2AsAZQ_13) (localZoneInfoFromTz_V1YfnncByYx9cGlKR6nLnvg)); T2_.ClE_0 = NIM_NIL;
	unsureAsgnRef((void**) (&(*Result).zoneInfoFromTz.ClE_0), T2_.ClE_0);
	(*Result).zoneInfoFromTz.ClP_0 = T2_.ClP_0;
	unsureAsgnRef((void**) (&(*Result).name), copyString(((NimStringDesc*) &TM_6NbDwwj5FY059b1gz2AsAZQ_14)));
}

N_LIB_PRIVATE N_NIMCALL(void, local_hVIxY9b0jArUwtFpeFlykaw)(NI64 t, tyObject_DateTime_S7qec11z7km5Pal3UXrHmw* Result) {
	tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA T1_;
	genericReset((void*)Result, (&NTI_S7qec11z7km5Pal3UXrHmw_));
	(*Result).Sup.m_type = (&NTI_S7qec11z7km5Pal3UXrHmw_);
	memset((void*)(&T1_), 0, sizeof(T1_));
	local_jKhnotGEODw9cTbPlQYY7nw((&T1_));
	inZone_qxJwIAgtfftqwwC9bRQp48Q(t, T1_, Result);
}

N_LIB_PRIVATE N_NIMCALL(NI64, getTime_wqmoaGqnr3gMTpWruGQ3FA)(void) {
	NI64 result;
	result = (NI64)0;
	result = time(NIM_NIL);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, now_d1K9bEvprvRT065W47OkDBQ)(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw* Result) {
	NI64 T1_;
	genericReset((void*)Result, (&NTI_S7qec11z7km5Pal3UXrHmw_));
	(*Result).Sup.m_type = (&NTI_S7qec11z7km5Pal3UXrHmw_);
	T1_ = (NI64)0;
	T1_ = getTime_wqmoaGqnr3gMTpWruGQ3FA();
	local_hVIxY9b0jArUwtFpeFlykaw(T1_, Result);
}

static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, ntgetDateStr)(void) {
	NimStringDesc* result;
	tyObject_DateTime_S7qec11z7km5Pal3UXrHmw ti;
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	NimStringDesc* T3_;
	NimStringDesc* T4_;
	result = (NimStringDesc*)0;
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI_S7qec11z7km5Pal3UXrHmw_);
	now_d1K9bEvprvRT065W47OkDBQ((&ti));
	T1_ = (NimStringDesc*)0;
	T2_ = (NimStringDesc*)0;
	T2_ = nimIntToStr(ti.year);
	T3_ = (NimStringDesc*)0;
	T3_ = nsuIntToStr(ti.month, ((NI) 2));
	T4_ = (NimStringDesc*)0;
	T4_ = nsuIntToStr(((NI) (ti.monthday)), ((NI) 2));
	T1_ = rawNewString(T2_->Sup.len + T3_->Sup.len + T4_->Sup.len + 2);
appendString(T1_, T2_);
appendChar(T1_, 45);
appendString(T1_, T3_);
appendChar(T1_, 45);
appendString(T1_, T4_);
	result = T1_;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, ntgetClockStr)(void) {
	NimStringDesc* result;
	tyObject_DateTime_S7qec11z7km5Pal3UXrHmw ti;
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	NimStringDesc* T3_;
	NimStringDesc* T4_;
	result = (NimStringDesc*)0;
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI_S7qec11z7km5Pal3UXrHmw_);
	now_d1K9bEvprvRT065W47OkDBQ((&ti));
	T1_ = (NimStringDesc*)0;
	T2_ = (NimStringDesc*)0;
	T2_ = nsuIntToStr(((NI) (ti.hour)), ((NI) 2));
	T3_ = (NimStringDesc*)0;
	T3_ = nsuIntToStr(((NI) (ti.minute)), ((NI) 2));
	T4_ = (NimStringDesc*)0;
	T4_ = nsuIntToStr(((NI) (ti.second)), ((NI) 2));
	T1_ = rawNewString(T2_->Sup.len + T3_->Sup.len + T4_->Sup.len + 2);
appendString(T1_, T2_);
appendChar(T1_, 58);
appendString(T1_, T3_);
appendChar(T1_, 58);
appendString(T1_, T4_);
	result = T1_;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, fromUnix_C77WZNbbZYep1XVMN2QCfA)(NI64 unix) {
	NI64 result;
	result = (NI64)0;
	result = unix;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, winTimeToUnixTime_0MF1tc32ZEJI7wo2ukv7DQ)(NI64 time_0) {
	NI64 result;
	result = (NI64)0;
	result = (NI64)((NI64)(time_0 - IL64(116444736000000000)) / IL64(10000000));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NF, ntepochTime)(void) {
	NF result;
	tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw f;
	NI64 i64;
	NI64 T1_;
	NI64 secs;
	NI64 subsecs;
	result = (NF)0;
	memset((void*)(&f), 0, sizeof(f));
	Dl_134625_((&f));
	T1_ = (NI64)0;
	T1_ = rdFileTime_8xfVp1z4bc5fRCRgoEFhIQ(f);
	i64 = (NI64)(T1_ - IL64(116444736000000000));
	secs = (NI64)(i64 / IL64(10000000));
	subsecs = (NI64)(i64 % IL64(10000000));
	result = ((NF)(((double) (((NI) (secs))))) + (NF)(((NF)(((double) (((NI) (subsecs))))) * (NF)(9.9999999999999995e-08))));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, ntDiffTime)(NI64 a, NI64 b) {
	NI64 result;
	NI64 T1_;
	NI64 T2_;
	result = (NI64)0;
	T1_ = (NI64)0;
	T1_ = toUnix_KOVzgXVRJxxlPUOsrk3eDQ(a);
	T2_ = (NI64)0;
	T2_ = toUnix_KOVzgXVRJxxlPUOsrk3eDQ(b);
	result = (NI64)(T1_ - T2_);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void) {
static TNimNode* TM_6NbDwwj5FY059b1gz2AsAZQ_2[11];
static TNimNode* TM_6NbDwwj5FY059b1gz2AsAZQ_3[12];
NI TM_6NbDwwj5FY059b1gz2AsAZQ_5;
static char* NIM_CONST TM_6NbDwwj5FY059b1gz2AsAZQ_4[12] = {
"mJan", 
"mFeb", 
"mMar", 
"mApr", 
"mMay", 
"mJun", 
"mJul", 
"mAug", 
"mSep", 
"mOct", 
"mNov", 
"mDec"};
static TNimNode* TM_6NbDwwj5FY059b1gz2AsAZQ_6[7];
NI TM_6NbDwwj5FY059b1gz2AsAZQ_8;
static char* NIM_CONST TM_6NbDwwj5FY059b1gz2AsAZQ_7[7] = {
"dMon", 
"dTue", 
"dWed", 
"dThu", 
"dFri", 
"dSat", 
"dSun"};
static TNimNode* TM_6NbDwwj5FY059b1gz2AsAZQ_9[3];
static TNimNode* TM_6NbDwwj5FY059b1gz2AsAZQ_10[2];
static TNimNode TM_6NbDwwj5FY059b1gz2AsAZQ_0[40];
NTI_S7qec11z7km5Pal3UXrHmw_.size = sizeof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw);
NTI_S7qec11z7km5Pal3UXrHmw_.kind = 17;
NTI_S7qec11z7km5Pal3UXrHmw_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
TM_6NbDwwj5FY059b1gz2AsAZQ_2[0] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[1];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[1].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[1].offset = offsetof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw, second);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[1].typ = (&NTI_rUuqTvFmkC6KKRqDAazGEA_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[1].name = "second";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[1] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[2];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[2].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[2].offset = offsetof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw, minute);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[2].typ = (&NTI_LBgXxpmYOpS8xroRZgNvbg_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[2].name = "minute";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[2] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[3];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[3].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[3].offset = offsetof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw, hour);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[3].typ = (&NTI_Gz6vwaK0PZQIDIwfuvKsOg_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[3].name = "hour";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[3] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[4];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[4].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[4].offset = offsetof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw, monthday);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[4].typ = (&NTI_DcZ5N67dL3rBj9bxGtx09bFg_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[4].name = "monthday";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[4] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[5];
NTI_JS0JuFvCBbC2GL3xXBnPQw_.size = sizeof(tyEnum_Month_JS0JuFvCBbC2GL3xXBnPQw);
NTI_JS0JuFvCBbC2GL3xXBnPQw_.kind = 14;
NTI_JS0JuFvCBbC2GL3xXBnPQw_.base = 0;
NTI_JS0JuFvCBbC2GL3xXBnPQw_.flags = 3;
for (TM_6NbDwwj5FY059b1gz2AsAZQ_5 = 0; TM_6NbDwwj5FY059b1gz2AsAZQ_5 < 12; TM_6NbDwwj5FY059b1gz2AsAZQ_5++) {
TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_5+6].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_5+6].offset = TM_6NbDwwj5FY059b1gz2AsAZQ_5;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_5+6].name = TM_6NbDwwj5FY059b1gz2AsAZQ_4[TM_6NbDwwj5FY059b1gz2AsAZQ_5];
TM_6NbDwwj5FY059b1gz2AsAZQ_3[TM_6NbDwwj5FY059b1gz2AsAZQ_5] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_5+6];
}
TM_6NbDwwj5FY059b1gz2AsAZQ_0[6].offset = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[7].offset = 2;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[8].offset = 3;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[9].offset = 4;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[10].offset = 5;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[11].offset = 6;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[12].offset = 7;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[13].offset = 8;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[14].offset = 9;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[15].offset = 10;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[16].offset = 11;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[17].offset = 12;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[18].len = 12; TM_6NbDwwj5FY059b1gz2AsAZQ_0[18].kind = 2; TM_6NbDwwj5FY059b1gz2AsAZQ_0[18].sons = &TM_6NbDwwj5FY059b1gz2AsAZQ_3[0];
NTI_JS0JuFvCBbC2GL3xXBnPQw_.node = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[18];
NTI_JS0JuFvCBbC2GL3xXBnPQw_.flags = 1<<2;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[5].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[5].offset = offsetof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw, month);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[5].typ = (&NTI_JS0JuFvCBbC2GL3xXBnPQw_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[5].name = "month";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[5] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[19];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[19].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[19].offset = offsetof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw, year);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[19].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[19].name = "year";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[6] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[20];
NTI_SVfemTA9aCOyua2TJYa6yBg_.size = sizeof(tyEnum_WeekDay_SVfemTA9aCOyua2TJYa6yBg);
NTI_SVfemTA9aCOyua2TJYa6yBg_.kind = 14;
NTI_SVfemTA9aCOyua2TJYa6yBg_.base = 0;
NTI_SVfemTA9aCOyua2TJYa6yBg_.flags = 3;
for (TM_6NbDwwj5FY059b1gz2AsAZQ_8 = 0; TM_6NbDwwj5FY059b1gz2AsAZQ_8 < 7; TM_6NbDwwj5FY059b1gz2AsAZQ_8++) {
TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_8+21].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_8+21].offset = TM_6NbDwwj5FY059b1gz2AsAZQ_8;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_8+21].name = TM_6NbDwwj5FY059b1gz2AsAZQ_7[TM_6NbDwwj5FY059b1gz2AsAZQ_8];
TM_6NbDwwj5FY059b1gz2AsAZQ_6[TM_6NbDwwj5FY059b1gz2AsAZQ_8] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_8+21];
}
TM_6NbDwwj5FY059b1gz2AsAZQ_0[28].len = 7; TM_6NbDwwj5FY059b1gz2AsAZQ_0[28].kind = 2; TM_6NbDwwj5FY059b1gz2AsAZQ_0[28].sons = &TM_6NbDwwj5FY059b1gz2AsAZQ_6[0];
NTI_SVfemTA9aCOyua2TJYa6yBg_.node = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[28];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[20].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[20].offset = offsetof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw, weekday);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[20].typ = (&NTI_SVfemTA9aCOyua2TJYa6yBg_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[20].name = "weekday";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[7] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[29];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[29].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[29].offset = offsetof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw, yearday);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[29].typ = (&NTI_g9buja9c9aeh0rkDpqsXOJF9bA_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[29].name = "yearday";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[8] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[30];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[30].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[30].offset = offsetof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw, isDst);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[30].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[30].name = "isDst";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[9] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[31];
NTI_g1TRr0fUzr8gtJpVPUSSnA_.size = sizeof(tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA);
NTI_g1TRr0fUzr8gtJpVPUSSnA_.kind = 18;
NTI_g1TRr0fUzr8gtJpVPUSSnA_.base = 0;
TM_6NbDwwj5FY059b1gz2AsAZQ_9[0] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[33];
NTI_ye9aJuuf18PyKew55REW9aIA_.size = sizeof(tyTuple_2uzTbg8jwom7zHhmM2RgHg);
NTI_ye9aJuuf18PyKew55REW9aIA_.kind = 18;
NTI_ye9aJuuf18PyKew55REW9aIA_.base = 0;
TM_6NbDwwj5FY059b1gz2AsAZQ_10[0] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[35];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[35].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[35].offset = offsetof(tyTuple_2uzTbg8jwom7zHhmM2RgHg, Field0);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[35].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[35].name = "Field0";
TM_6NbDwwj5FY059b1gz2AsAZQ_10[1] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[36];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[36].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[36].offset = offsetof(tyTuple_2uzTbg8jwom7zHhmM2RgHg, Field1);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[36].typ = (&NTI_58EFneeS9at7cA541QCoGAw_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[36].name = "Field1";
TM_6NbDwwj5FY059b1gz2AsAZQ_0[34].len = 2; TM_6NbDwwj5FY059b1gz2AsAZQ_0[34].kind = 2; TM_6NbDwwj5FY059b1gz2AsAZQ_0[34].sons = &TM_6NbDwwj5FY059b1gz2AsAZQ_10[0];
NTI_ye9aJuuf18PyKew55REW9aIA_.node = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[34];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[33].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[33].offset = offsetof(tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA, zoneInfoFromUtc);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[33].typ = (&NTI_ye9aJuuf18PyKew55REW9aIA_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[33].name = "zoneInfoFromUtc";
TM_6NbDwwj5FY059b1gz2AsAZQ_9[1] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[37];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[37].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[37].offset = offsetof(tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA, zoneInfoFromTz);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[37].typ = (&NTI_ye9aJuuf18PyKew55REW9aIA_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[37].name = "zoneInfoFromTz";
TM_6NbDwwj5FY059b1gz2AsAZQ_9[2] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[38];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[38].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[38].offset = offsetof(tyObject_Timezone_g1TRr0fUzr8gtJpVPUSSnA, name);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[38].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[38].name = "name";
TM_6NbDwwj5FY059b1gz2AsAZQ_0[32].len = 3; TM_6NbDwwj5FY059b1gz2AsAZQ_0[32].kind = 2; TM_6NbDwwj5FY059b1gz2AsAZQ_0[32].sons = &TM_6NbDwwj5FY059b1gz2AsAZQ_9[0];
NTI_g1TRr0fUzr8gtJpVPUSSnA_.node = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[32];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[31].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[31].offset = offsetof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw, timezone);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[31].typ = (&NTI_g1TRr0fUzr8gtJpVPUSSnA_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[31].name = "timezone";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[10] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[39];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[39].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[39].offset = offsetof(tyObject_DateTime_S7qec11z7km5Pal3UXrHmw, utcOffset);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[39].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[39].name = "utcOffset";
TM_6NbDwwj5FY059b1gz2AsAZQ_0[0].len = 11; TM_6NbDwwj5FY059b1gz2AsAZQ_0[0].kind = 2; TM_6NbDwwj5FY059b1gz2AsAZQ_0[0].sons = &TM_6NbDwwj5FY059b1gz2AsAZQ_2[0];
NTI_S7qec11z7km5Pal3UXrHmw_.node = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[0];
}

