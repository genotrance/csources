/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <time.h>
#include <sys/select.h>
#include <sys/time.h>
#undef linux
#undef near
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TimeInfo_sGezGiKtnmyCJvsDB0xApg TimeInfo_sGezGiKtnmyCJvsDB0xApg;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Month_JS0JuFvCBbC2GL3xXBnPQw;
typedef NU8 WeekDay_SVfemTA9aCOyua2TJYa6yBg;
struct  TimeInfo_sGezGiKtnmyCJvsDB0xApg  {
  TNimObject Sup;
NI second;
NI minute;
NI hour;
NI monthday;
Month_JS0JuFvCBbC2GL3xXBnPQw month;
NI year;
WeekDay_SVfemTA9aCOyua2TJYa6yBg weekday;
NI yearday;
NIM_BOOL isDST;
NI timezone;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef WeekDay_SVfemTA9aCOyua2TJYa6yBg TY_GGEBht517aMvSZUh5qcO0A[7];
N_NIMCALL(void, getLocalTime_Ql5lAb5s0QPmy9b8QhS3ucg)(time_t t, TimeInfo_sGezGiKtnmyCJvsDB0xApg* Result);
N_NIMCALL(void, tmToTimeInfo_qFsEbGfYkdT2YiBOfTVRZQ)(struct tm* tm, NIM_BOOL local, TimeInfo_sGezGiKtnmyCJvsDB0xApg* Result);
N_NIMCALL(NI, getTimezone_Pf4IClgFYbbYvrR1AK9cUFA)(void);
N_NIMCALL(void, genericShallowAssign)(void* dest, void* src, TNimType* mt);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(time_t, getTime_wqmoaGqnr3gMTpWruGQ3FA)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x, NI minchars);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_sGezGiKtnmyCJvsDB0xApg_;
extern TNimType NTI_Uk8TiHqxGdO37NabyvfS5g_;
extern TNimType NTI_LBgXxpmYOpS8xroRZgNvbg_;
extern TNimType NTI_Gz6vwaK0PZQIDIwfuvKsOg_;
extern TNimType NTI_DcZ5N67dL3rBj9bxGtx09bFg_;
TNimType NTI_JS0JuFvCBbC2GL3xXBnPQw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_SVfemTA9aCOyua2TJYa6yBg_;
extern TNimType NTI_g9buja9c9aeh0rkDpqsXOJF9bA_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
NIM_CONST TY_GGEBht517aMvSZUh5qcO0A weekDays_bqPkAYhTkibk0Ue2wrgY9cQ = {((WeekDay_SVfemTA9aCOyua2TJYa6yBg) 6),
((WeekDay_SVfemTA9aCOyua2TJYa6yBg) 0),
((WeekDay_SVfemTA9aCOyua2TJYa6yBg) 1),
((WeekDay_SVfemTA9aCOyua2TJYa6yBg) 2),
((WeekDay_SVfemTA9aCOyua2TJYa6yBg) 3),
((WeekDay_SVfemTA9aCOyua2TJYa6yBg) 4),
((WeekDay_SVfemTA9aCOyua2TJYa6yBg) 5)}
;

N_NIMCALL(NI, getTimezone_Pf4IClgFYbbYvrR1AK9cUFA)(void) {
	NI result;
	time_t a;
	struct tm* lt;
{	result = (NI)0;
	a = time(NIM_NIL);
	lt = localtime((&a));
	result = ((NI32)-((*lt).tm_gmtoff));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, tmToTimeInfo_qFsEbGfYkdT2YiBOfTVRZQ)(struct tm* tm, NIM_BOOL local, TimeInfo_sGezGiKtnmyCJvsDB0xApg* Result) {
	TimeInfo_sGezGiKtnmyCJvsDB0xApg T1_;
	T1_.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg_);
	memset((void*)(&T1_), 0, sizeof(T1_));
	T1_.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg_);
	T1_.second = ((NI) (((NI) ((*tm).tm_sec))));
	T1_.minute = ((NI) (((NI) ((*tm).tm_min))));
	T1_.hour = ((NI) (((NI) ((*tm).tm_hour))));
	T1_.monthday = ((NI) (((NI) ((*tm).tm_mday))));
	T1_.month = ((Month_JS0JuFvCBbC2GL3xXBnPQw) ((*tm).tm_mon));
	T1_.year = ((NI) ((NI32)((*tm).tm_year + ((NI32) 1900))));
	T1_.weekday = weekDays_bqPkAYhTkibk0Ue2wrgY9cQ[(((NI) ((*tm).tm_wday)))- 0];
	T1_.yearday = ((NI) (((NI) ((*tm).tm_yday))));
	T1_.isDST = (((NI32) 0) < (*tm).tm_isdst);
	{
		if (!local) goto LA4_;
		T1_.timezone = getTimezone_Pf4IClgFYbbYvrR1AK9cUFA();
	}
	goto LA2_;
	LA4_: ;
	{
		T1_.timezone = ((NI) 0);
	}
	LA2_: ;
	genericShallowAssign((void*)Result, (void*)(&T1_), (&NTI_sGezGiKtnmyCJvsDB0xApg_));
}

N_NIMCALL(void, getLocalTime_Ql5lAb5s0QPmy9b8QhS3ucg)(time_t t, TimeInfo_sGezGiKtnmyCJvsDB0xApg* Result) {
	time_t a;
	struct tm* lt;
	a = t;
	lt = localtime((&a));
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_sGezGiKtnmyCJvsDB0xApg_));
	(*Result).Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg_);
	tmToTimeInfo_qFsEbGfYkdT2YiBOfTVRZQ((&(*lt)), NIM_TRUE, Result);
}

N_NIMCALL(time_t, getTime_wqmoaGqnr3gMTpWruGQ3FA)(void) {
	time_t result;
{	result = (time_t)0;
	result = time(NIM_NIL);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
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

N_NIMCALL(NimStringDesc*, ntgetDateStr)(void) {
	NimStringDesc* result;
	TimeInfo_sGezGiKtnmyCJvsDB0xApg ti;
	time_t T1_;
	NimStringDesc* T2_;
	NimStringDesc* T3_;
	NimStringDesc* T4_;
	NimStringDesc* T5_;
	result = (NimStringDesc*)0;
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg_);
	T1_ = (time_t)0;
	T1_ = getTime_wqmoaGqnr3gMTpWruGQ3FA();
	chckNil((void*)(&ti));
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg_);
	getLocalTime_Ql5lAb5s0QPmy9b8QhS3ucg(T1_, (&ti));
	T2_ = (NimStringDesc*)0;
	T3_ = (NimStringDesc*)0;
	T3_ = nimIntToStr(ti.year);
	T4_ = (NimStringDesc*)0;
	T4_ = nsuIntToStr(((NI) ((NI)(((NI) (ti.month)) + ((NI) 1)))), ((NI) 2));
	T5_ = (NimStringDesc*)0;
	T5_ = nsuIntToStr(((NI) (ti.monthday)), ((NI) 2));
	T2_ = rawNewString(T3_->Sup.len + T4_->Sup.len + T5_->Sup.len + 2);
appendString(T2_, T3_);
appendChar(T2_, 45);
appendString(T2_, T4_);
appendChar(T2_, 45);
appendString(T2_, T5_);
	result = T2_;
	return result;
}

N_NIMCALL(NimStringDesc*, ntgetClockStr)(void) {
	NimStringDesc* result;
	TimeInfo_sGezGiKtnmyCJvsDB0xApg ti;
	time_t T1_;
	NimStringDesc* T2_;
	NimStringDesc* T3_;
	NimStringDesc* T4_;
	NimStringDesc* T5_;
	result = (NimStringDesc*)0;
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg_);
	T1_ = (time_t)0;
	T1_ = getTime_wqmoaGqnr3gMTpWruGQ3FA();
	chckNil((void*)(&ti));
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg_);
	getLocalTime_Ql5lAb5s0QPmy9b8QhS3ucg(T1_, (&ti));
	T2_ = (NimStringDesc*)0;
	T3_ = (NimStringDesc*)0;
	T3_ = nsuIntToStr(((NI) (ti.hour)), ((NI) 2));
	T4_ = (NimStringDesc*)0;
	T4_ = nsuIntToStr(((NI) (ti.minute)), ((NI) 2));
	T5_ = (NimStringDesc*)0;
	T5_ = nsuIntToStr(((NI) (ti.second)), ((NI) 2));
	T2_ = rawNewString(T3_->Sup.len + T4_->Sup.len + T5_->Sup.len + 2);
appendString(T2_, T3_);
appendChar(T2_, 58);
appendString(T2_, T4_);
appendChar(T2_, 58);
appendString(T2_, T5_);
	result = T2_;
	return result;
}

N_NIMCALL(NF, toSeconds_Gg29bvJbPEnFoG9aNRGMxIFw)(time_t time_0) {
	NF result;
	result = (NF)0;
	result = ((NF) (time_0));
	return result;
}

N_NIMCALL(NF, ntepochTime)(void) {
	NF result;
	struct timeval a;
	result = (NF)0;
	memset((void*)(&a), 0, sizeof(a));
	gettimeofday((&a), NIM_NIL);
	result = ((NF)(((double) (a.tv_sec))) + (NF)(((NF)(((double) (a.tv_usec))) * (NF)(9.9999999999999995e-07))));
	return result;
}

N_NIMCALL(NI64, ntDiffTime)(time_t a, time_t b) {
	NI64 result;
	NF T1_;
{	result = (NI64)0;
	T1_ = (NF)0;
	T1_ = difftime(a, b);
	result = float64ToInt64(T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void) {
static TNimNode* TM_6NbDwwj5FY059b1gz2AsAZQ_2[10];
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
static TNimNode TM_6NbDwwj5FY059b1gz2AsAZQ_0[32];
NTI_sGezGiKtnmyCJvsDB0xApg_.size = sizeof(TimeInfo_sGezGiKtnmyCJvsDB0xApg);
NTI_sGezGiKtnmyCJvsDB0xApg_.kind = 17;
NTI_sGezGiKtnmyCJvsDB0xApg_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
NTI_sGezGiKtnmyCJvsDB0xApg_.flags = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_2[0] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[1];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[1].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[1].offset = offsetof(TimeInfo_sGezGiKtnmyCJvsDB0xApg, second);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[1].typ = (&NTI_Uk8TiHqxGdO37NabyvfS5g_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[1].name = "second";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[1] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[2];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[2].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[2].offset = offsetof(TimeInfo_sGezGiKtnmyCJvsDB0xApg, minute);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[2].typ = (&NTI_LBgXxpmYOpS8xroRZgNvbg_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[2].name = "minute";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[2] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[3];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[3].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[3].offset = offsetof(TimeInfo_sGezGiKtnmyCJvsDB0xApg, hour);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[3].typ = (&NTI_Gz6vwaK0PZQIDIwfuvKsOg_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[3].name = "hour";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[3] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[4];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[4].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[4].offset = offsetof(TimeInfo_sGezGiKtnmyCJvsDB0xApg, monthday);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[4].typ = (&NTI_DcZ5N67dL3rBj9bxGtx09bFg_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[4].name = "monthday";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[4] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[5];
NTI_JS0JuFvCBbC2GL3xXBnPQw_.size = sizeof(Month_JS0JuFvCBbC2GL3xXBnPQw);
NTI_JS0JuFvCBbC2GL3xXBnPQw_.kind = 14;
NTI_JS0JuFvCBbC2GL3xXBnPQw_.base = 0;
NTI_JS0JuFvCBbC2GL3xXBnPQw_.flags = 3;
for (TM_6NbDwwj5FY059b1gz2AsAZQ_5 = 0; TM_6NbDwwj5FY059b1gz2AsAZQ_5 < 12; TM_6NbDwwj5FY059b1gz2AsAZQ_5++) {
TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_5+6].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_5+6].offset = TM_6NbDwwj5FY059b1gz2AsAZQ_5;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_5+6].name = TM_6NbDwwj5FY059b1gz2AsAZQ_4[TM_6NbDwwj5FY059b1gz2AsAZQ_5];
TM_6NbDwwj5FY059b1gz2AsAZQ_3[TM_6NbDwwj5FY059b1gz2AsAZQ_5] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[TM_6NbDwwj5FY059b1gz2AsAZQ_5+6];
}
TM_6NbDwwj5FY059b1gz2AsAZQ_0[18].len = 12; TM_6NbDwwj5FY059b1gz2AsAZQ_0[18].kind = 2; TM_6NbDwwj5FY059b1gz2AsAZQ_0[18].sons = &TM_6NbDwwj5FY059b1gz2AsAZQ_3[0];
NTI_JS0JuFvCBbC2GL3xXBnPQw_.node = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[18];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[5].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[5].offset = offsetof(TimeInfo_sGezGiKtnmyCJvsDB0xApg, month);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[5].typ = (&NTI_JS0JuFvCBbC2GL3xXBnPQw_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[5].name = "month";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[5] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[19];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[19].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[19].offset = offsetof(TimeInfo_sGezGiKtnmyCJvsDB0xApg, year);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[19].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[19].name = "year";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[6] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[20];
NTI_SVfemTA9aCOyua2TJYa6yBg_.size = sizeof(WeekDay_SVfemTA9aCOyua2TJYa6yBg);
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
TM_6NbDwwj5FY059b1gz2AsAZQ_0[20].offset = offsetof(TimeInfo_sGezGiKtnmyCJvsDB0xApg, weekday);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[20].typ = (&NTI_SVfemTA9aCOyua2TJYa6yBg_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[20].name = "weekday";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[7] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[29];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[29].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[29].offset = offsetof(TimeInfo_sGezGiKtnmyCJvsDB0xApg, yearday);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[29].typ = (&NTI_g9buja9c9aeh0rkDpqsXOJF9bA_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[29].name = "yearday";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[8] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[30];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[30].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[30].offset = offsetof(TimeInfo_sGezGiKtnmyCJvsDB0xApg, isDST);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[30].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[30].name = "isDST";
TM_6NbDwwj5FY059b1gz2AsAZQ_2[9] = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[31];
TM_6NbDwwj5FY059b1gz2AsAZQ_0[31].kind = 1;
TM_6NbDwwj5FY059b1gz2AsAZQ_0[31].offset = offsetof(TimeInfo_sGezGiKtnmyCJvsDB0xApg, timezone);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[31].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_6NbDwwj5FY059b1gz2AsAZQ_0[31].name = "timezone";
TM_6NbDwwj5FY059b1gz2AsAZQ_0[0].len = 10; TM_6NbDwwj5FY059b1gz2AsAZQ_0[0].kind = 2; TM_6NbDwwj5FY059b1gz2AsAZQ_0[0].sons = &TM_6NbDwwj5FY059b1gz2AsAZQ_2[0];
NTI_sGezGiKtnmyCJvsDB0xApg_.node = &TM_6NbDwwj5FY059b1gz2AsAZQ_0[0];
}

