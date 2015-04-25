/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <sys/types.h>

#include <unistd.h>

#include <setjmp.h>

#include <errno.h>

#include <fcntl.h>

#include <stdio.h>

#include <sys/wait.h>

#include <stdlib.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Processobj142402 Processobj142402;
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj137027 Streamobj137027;
typedef struct TY121008 TY121008;
typedef struct Tcell46147 Tcell46147;
typedef struct Tcellseq46163 Tcellseq46163;
typedef struct Tgcheap48016 Tgcheap48016;
typedef struct Tcellset46159 Tcellset46159;
typedef struct Tpagedesc46155 Tpagedesc46155;
typedef struct Tmemregion28010 Tmemregion28010;
typedef struct Tsmallchunk27240 Tsmallchunk27240;
typedef struct Tllchunk28004 Tllchunk28004;
typedef struct Tbigchunk27242 Tbigchunk27242;
typedef struct Tintset27217 Tintset27217;
typedef struct Ttrunk27213 Ttrunk27213;
typedef struct Tavlnode28008 Tavlnode28008;
typedef struct Tgcstat48014 Tgcstat48014;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
typedef struct Tstartprocessdata143948 Tstartprocessdata143948;
typedef struct Filestreamobj137692 Filestreamobj137692;
typedef struct TY143201 TY143201;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TY177407[32];
typedef int TY144022[2];
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
struct  Processobj142402  {
  TNimObject Sup;
int inhandle;
int outhandle;
int errhandle;
Streamobj137027* instream;
Streamobj137027* outstream;
Streamobj137027* errstream;
pid_t id;
int exitcode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY175063[3];
struct  Tcell46147  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46163  {
NI len;
NI cap;
Tcell46147** d;
};
struct  Tcellset46159  {
NI counter;
NI max;
Tpagedesc46155* head;
Tpagedesc46155** data;
};
typedef Tsmallchunk27240* TY28022[512];
typedef Ttrunk27213* Ttrunkbuckets27215[256];
struct  Tintset27217  {
Ttrunkbuckets27215 data;
};
struct  Tmemregion28010  {
NI minlargeobj;
NI maxlargeobj;
TY28022 freesmallchunks;
Tllchunk28004* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27242* freechunkslist;
Tintset27217 chunkstarts;
Tavlnode28008* root;
Tavlnode28008* deleted;
Tavlnode28008* last;
Tavlnode28008* freeavlnodes;
};
struct  Tgcstat48014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48016  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46163 zct;
Tcellseq46163 decstack;
Tcellset46159 cycleroots;
Tcellseq46163 tempstack;
NI recgclock;
Tmemregion28010 region;
Tgcstat48014 stat;
};
typedef NimStringDesc* TY163580[1];
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15609 raiseAction;
};
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
struct Keyvaluepair133008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tstartprocessdata143948  {
NCSTRING syscommand;
NCSTRING* sysargs;
NCSTRING* sysenv;
NCSTRING workingdir;
TY144022 pstdin;
TY144022 pstdout;
TY144022 pstderr;
TY144022 perrorpipe;
NIM_BOOL optionpousepath;
NIM_BOOL optionpoparentstreams;
NIM_BOOL optionpostderrtostdout;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NI idx, void* ClEnv);
void* ClEnv;
} TY170656;
typedef N_CLOSURE_PTR(void, TMP4340) (NI idx);
typedef NimStringDesc* TY218714[1];
typedef N_CLOSURE_PTR(void, TMP4342) (NI idx);
typedef N_CLOSURE_PTR(void, TMP4343) (NI idx);
typedef N_NIMCALL_PTR(void, TY137028) (Streamobj137027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY137032) (Streamobj137027* s);
typedef N_NIMCALL_PTR(void, TY137036) (Streamobj137027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY137041) (Streamobj137027* s);
typedef N_NIMCALL_PTR(NI, TY137045) (Streamobj137027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY137051) (Streamobj137027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY137057) (Streamobj137027* s);
struct  Streamobj137027  {
  TNimObject Sup;
TY137028 closeimpl;
TY137032 atendimpl;
TY137036 setpositionimpl;
TY137041 getpositionimpl;
TY137045 readdataimpl;
TY137051 writedataimpl;
TY137057 flushimpl;
};
typedef NI TY27220[8];
struct  Tpagedesc46155  {
Tpagedesc46155* next;
NI key;
TY27220 bits;
};
struct  Tbasechunk27238  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27240  {
  Tbasechunk27238 Sup;
Tsmallchunk27240* next;
Tsmallchunk27240* prev;
Tfreecell27230* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28004  {
NI size;
NI acc;
Tllchunk28004* next;
};
struct  Tbigchunk27242  {
  Tbasechunk27238 Sup;
Tbigchunk27242* next;
Tbigchunk27242* prev;
NI align;
NF data;
};
struct  Ttrunk27213  {
Ttrunk27213* next;
NI key;
TY27220 bits;
};
typedef Tavlnode28008* TY28014[2];
struct  Tavlnode28008  {
TY28014 link;
NI key;
NI upperbound;
NI level;
};
struct  Filestreamobj137692  {
  Streamobj137027 Sup;
FILE* f;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct TY121008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY143201 {
  TGenericSeq Sup;
  Processobj142402* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  Keyvaluepair133008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, nospquoteShellPosix)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, allcharsinset_97459)(NimStringDesc* s, TY177407 theset);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2888)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, raiseoserror_115809)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_115833)(void);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NCSTRING*, alloccstringarray_14001)(NimStringDesc** a, NI aLen0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NCSTRING*, envtocstringarray_143854)(void);
N_NIMCALL(void, getenvvarsc_121202)(void);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NOCONV(void*, alloc0_6017)(NI size);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(NCSTRING*, envtocstringarray_143806)(Stringtableobj133012* t);
N_NIMCALL(NI, nstlen)(Stringtableobj133012* t);
N_NIMCALL(pid_t, startprocessauxfork_144001)(Tstartprocessdata143948* data);
N_CDECL(void, startprocessafterfork_144004)(Tstartprocessdata143948* data);
N_NIMCALL(void, startprocessfail_144824)(Tstartprocessdata143948* data);
N_NOINLINE(void, nosraiseOSError)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
N_NIMCALL(void, dealloccstringarray_14250)(NCSTRING* a);
N_NIMCALL(void, createstream_145641)(Streamobj137027** stream, int* handle, NU8 filemode);
N_NIMCALL(NIM_BOOL, open_13211)(FILE** f, int filehandle, NU8 mode);
N_NIMCALL(Filestreamobj137692*, newfilestream_137759)(FILE* f);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, ncpicountProcessors)(void);
N_NIMCALL(void, TMP4338)(void* p, NI op);
N_NIMCALL(Processobj142402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj133012* env, NU8 options);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46147* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46147* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46147* c);
N_NOINLINE(void, incl_46865)(Tcellset46159* s, Tcell46147* cell);
static N_INLINE(void, decref_51604)(Tcell46147* c);
N_NIMCALL(void, nossleep)(NI milsecs);
N_NIMCALL(NIM_BOOL, nosprunning)(Processobj142402* p);
N_NIMCALL(NI, nospwaitForExit)(Processobj142402* p, NI timeout);
N_NIMCALL(void, nospclose)(Processobj142402* p);
N_NIMCALL(void, close_137085)(Streamobj137027* s);
STRING_LITERAL(TMP1766, "\'\'", 2);
static NIM_CONST TY177407 TMP1767 = {
0x00, 0x00, 0x00, 0x00, 0x20, 0xE8, 0xFF, 0x27,
0xFF, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1768, "\'", 1);
STRING_LITERAL(TMP1769, "\'\"\'\"\'", 5);
STRING_LITERAL(TMP2889, "/bin/sh", 7);
STRING_LITERAL(TMP2890, "-c", 2);
STRING_LITERAL(TMP2892, "=", 1);
STRING_LITERAL(TMP2895, " ", 1);
static NIM_CONST TY170656 TMP4339 = {NIM_NIL,NIM_NIL};
STRING_LITERAL(TMP4341, "", 0);
extern TNimType NTI3411; /* RootObj */
TNimType NTI142402; /* ProcessObj */
extern TNimType NTI13008; /* FileHandle */
extern TNimType NTI137025; /* Stream */
extern TNimType NTI106285; /* TPid */
extern TNimType NTI5811; /* cint */
TNimType NTI142404; /* Process */
extern TNimType NTI121008; /* seq[string] */
extern Tgcheap48016 gch_48044;
extern TSafePoint* exchandler_17043;
extern TY121008* environment_121009;
TNimType NTI143201; /* seq[Process] */

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, nospquoteShellPosix)(NimStringDesc* s) {
	NimStringDesc* result;
	NIM_BOOL safe;
{	result = 0;
	{
		if (!((s ? s->Sup.len : 0) == ((NI) 0))) goto LA3;
		result = copyString(((NimStringDesc*) &TMP1766));
		goto BeforeRet;
	}
	LA3: ;
	safe = allcharsinset_97459(s, TMP1767);
	{
		if (!safe) goto LA7;
		result = copyString(s);
		goto BeforeRet;
	}
	goto LA5;
	LA7: ;
	{
		NimStringDesc* LOC10;
		NimStringDesc* LOC11;
		LOC10 = 0;
		LOC11 = 0;
		LOC11 = nsuReplaceStr(s, ((NimStringDesc*) &TMP1768), ((NimStringDesc*) &TMP1769));
		LOC10 = rawNewString(LOC11->Sup.len + 2);
appendString(LOC10, ((NimStringDesc*) &TMP1768));
appendString(LOC10, LOC11);
appendString(LOC10, ((NimStringDesc*) &TMP1768));
		result = LOC10;
		goto BeforeRet;
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s) {
	NimStringDesc* result;
{	result = 0;
	result = nospquoteShellPosix(s);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP2888)(void* p, NI op) {
	Processobj142402* a;
	a = (Processobj142402*)p;
	nimGCvisit((void*)(*a).instream, op);
	nimGCvisit((void*)(*a).outstream, op);
	nimGCvisit((void*)(*a).errstream, op);
}

static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr) {
	Tcell46147* result;
	result = 0;
	result = ((Tcell46147*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46147))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46147* c) {
	addzct_49617((&gch_48044.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46147* c;
	c = usrtocell_49646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

N_NIMCALL(NCSTRING*, envtocstringarray_143854)(void) {
	NCSTRING* result;
	NI counter;
	void* LOC5;
	NI i;
	result = 0;
	counter = ((NI) 0);
	{
		NimStringDesc* key_143858;
		NimStringDesc* val_143859;
		key_143858 = 0;
		val_143859 = 0;
		getenvvarsc_121202();
		{
			NI i_143888;
			NI HEX3Atmp_143890;
			NI res_143892;
			i_143888 = 0;
			HEX3Atmp_143890 = 0;
			HEX3Atmp_143890 = (environment_121009 ? (environment_121009->Sup.len-1) : -1);
			res_143892 = ((NI) 0);
			{
				while (1) {
					NI p_143896;
					if (!(res_143892 <= HEX3Atmp_143890)) goto LA4;
					i_143888 = res_143892;
					p_143896 = nsuFindChar(environment_121009->data[i_143888], 61, ((NI) 0));
					key_143858 = copyStrLast(environment_121009->data[i_143888], ((NI) 0), (NI)(p_143896 - ((NI) 1)));
					val_143859 = copyStr(environment_121009->data[i_143888], (NI)(p_143896 + ((NI) 1)));
					counter += ((NI) 1);
					res_143892 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	LOC5 = 0;
	LOC5 = alloc0_6017(((NI) ((NI)((NI)(counter + ((NI) 1)) * ((NI) 8)))));
	result = ((NCSTRING*) (LOC5));
	i = ((NI) 0);
	{
		NimStringDesc* key_143871;
		NimStringDesc* val_143872;
		key_143871 = 0;
		val_143872 = 0;
		getenvvarsc_121202();
		{
			NI i_143909;
			NI HEX3Atmp_143911;
			NI res_143913;
			i_143909 = 0;
			HEX3Atmp_143911 = 0;
			HEX3Atmp_143911 = (environment_121009 ? (environment_121009->Sup.len-1) : -1);
			res_143913 = ((NI) 0);
			{
				while (1) {
					NI p_143917;
					NimStringDesc* x;
					NimStringDesc* LOC10;
					void* LOC11;
					if (!(res_143913 <= HEX3Atmp_143911)) goto LA9;
					i_143909 = res_143913;
					p_143917 = nsuFindChar(environment_121009->data[i_143909], 61, ((NI) 0));
					key_143871 = copyStrLast(environment_121009->data[i_143909], ((NI) 0), (NI)(p_143917 - ((NI) 1)));
					val_143872 = copyStr(environment_121009->data[i_143909], (NI)(p_143917 + ((NI) 1)));
					LOC10 = 0;
					LOC10 = rawNewString(key_143871->Sup.len + val_143872->Sup.len + 1);
appendString(LOC10, key_143871);
appendString(LOC10, ((NimStringDesc*) &TMP2892));
appendString(LOC10, val_143872);
					x = LOC10;
					LOC11 = 0;
					LOC11 = alloc_6001(((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
					result[(i)- 0] = ((NCSTRING) (LOC11));
					memcpy(((void*) (result[(i)- 0])), ((void*) ((&x->data[((NI) 0)]))), ((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
					i += ((NI) 1);
					res_143913 += ((NI) 1);
				} LA9: ;
			}
		}
	}
	return result;
}

N_NIMCALL(NCSTRING*, envtocstringarray_143806)(Stringtableobj133012* t) {
	NCSTRING* result;
	NI LOC1;
	void* LOC2;
	NI i;
	result = 0;
	LOC1 = 0;
	LOC1 = nstlen(t);
	LOC2 = 0;
	LOC2 = alloc0_6017(((NI) ((NI)((NI)(LOC1 + ((NI) 1)) * ((NI) 8)))));
	result = ((NCSTRING*) (LOC2));
	i = ((NI) 0);
	{
		NimStringDesc* key_143812;
		NimStringDesc* val_143813;
		key_143812 = 0;
		val_143813 = 0;
		{
			NI h_143832;
			NI HEX3Atmp_143834;
			NI res_143836;
			h_143832 = 0;
			HEX3Atmp_143834 = 0;
			HEX3Atmp_143834 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
			res_143836 = ((NI) 0);
			{
				while (1) {
					if (!(res_143836 <= HEX3Atmp_143834)) goto LA6;
					h_143832 = res_143836;
					{
						NimStringDesc* x;
						NimStringDesc* LOC11;
						void* LOC12;
						if (!!((*t).data->data[h_143832].Field0 == 0)) goto LA9;
						key_143812 = (*t).data->data[h_143832].Field0;
						val_143813 = (*t).data->data[h_143832].Field1;
						LOC11 = 0;
						LOC11 = rawNewString(key_143812->Sup.len + val_143813->Sup.len + 1);
appendString(LOC11, key_143812);
appendString(LOC11, ((NimStringDesc*) &TMP2892));
appendString(LOC11, val_143813);
						x = LOC11;
						LOC12 = 0;
						LOC12 = alloc_6001(((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
						result[(i)- 0] = ((NCSTRING) (LOC12));
						memcpy(((void*) (result[(i)- 0])), ((void*) ((&x->data[((NI) 0)]))), ((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
						i += ((NI) 1);
					}
					LA9: ;
					res_143836 += ((NI) 1);
				} LA6: ;
			}
		}
	}
	return result;
}

N_NIMCALL(void, startprocessfail_144824)(Tstartprocessdata143948* data) {
	int error;
	NI LOC1;
	error = errno;
	LOC1 = 0;
	LOC1 = write((*data).perrorpipe[(((NI) 1))- 0], ((void*) ((&error))), ((NI) 4));
	_exit(((NI) 1));
}

N_CDECL(void, startprocessafterfork_144004)(Tstartprocessdata143948* data) {
	int LOC42;
	int LOC43;
	{
		int LOC5;
		int LOC11;
		int LOC17;
		if (!!((*data).optionpoparentstreams)) goto LA3;
		LOC5 = 0;
		LOC5 = close((*data).pstdin[(((NI) 1))- 0]);
		{
			int LOC8;
			LOC8 = 0;
			LOC8 = dup2((*data).pstdin[(((NI) 0))- 0], ((int) 0));
			if (!(LOC8 < ((NI32) 0))) goto LA9;
			startprocessfail_144824(data);
		}
		LA9: ;
		LOC11 = 0;
		LOC11 = close((*data).pstdout[(((NI) 0))- 0]);
		{
			int LOC14;
			LOC14 = 0;
			LOC14 = dup2((*data).pstdout[(((NI) 1))- 0], ((int) 1));
			if (!(LOC14 < ((NI32) 0))) goto LA15;
			startprocessfail_144824(data);
		}
		LA15: ;
		LOC17 = 0;
		LOC17 = close((*data).pstderr[(((NI) 0))- 0]);
		{
			if (!(*data).optionpostderrtostdout) goto LA20;
			{
				int LOC24;
				LOC24 = 0;
				LOC24 = dup2((*data).pstdout[(((NI) 1))- 0], ((int) 2));
				if (!(LOC24 < ((NI32) 0))) goto LA25;
				startprocessfail_144824(data);
			}
			LA25: ;
		}
		goto LA18;
		LA20: ;
		{
			{
				int LOC30;
				LOC30 = 0;
				LOC30 = dup2((*data).pstderr[(((NI) 1))- 0], ((int) 2));
				if (!(LOC30 < ((NI32) 0))) goto LA31;
				startprocessfail_144824(data);
			}
			LA31: ;
		}
		LA18: ;
	}
	LA3: ;
	{
		if (!(((NI) 0) < ((*data).workingdir ? strlen((*data).workingdir) : 0))) goto LA35;
		{
			int LOC39;
			LOC39 = 0;
			LOC39 = chdir((*data).workingdir);
			if (!(LOC39 < ((NI32) 0))) goto LA40;
			startprocessfail_144824(data);
		}
		LA40: ;
	}
	LA35: ;
	LOC42 = 0;
	LOC42 = close((*data).perrorpipe[(((NI) 0))- 0]);
	LOC43 = 0;
	LOC43 = fcntl((*data).perrorpipe[(((NI) 1))- 0], F_SETFD, FD_CLOEXEC);
	{
		int LOC48;
		if (!(*data).optionpousepath) goto LA46;
		LOC48 = 0;
		LOC48 = execvpe((*data).syscommand, (*data).sysargs, (*data).sysenv);
	}
	goto LA44;
	LA46: ;
	{
		int LOC50;
		LOC50 = 0;
		LOC50 = execve((*data).syscommand, (*data).sysargs, (*data).sysenv);
	}
	LA44: ;
	startprocessfail_144824(data);
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

N_NIMCALL(pid_t, startprocessauxfork_144001)(Tstartprocessdata143948* data) {
	pid_t volatile result;
	TSafePoint TMP2894;
{	result = 0;
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = pipe((*data).perrorpipe);
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_115833();
		raiseoserror_115809(LOC6);
	}
	LA4: ;
	pushSafePoint(&TMP2894);
	TMP2894.status = setjmp(TMP2894.context);
	if (TMP2894.status == 0) {
		pid_t volatile pid;
		Tstartprocessdata143948 datacopy;
		int LOC12;
		int error;
		NI sizeread;
		int LOC24;
		pid = 0;
		datacopy = (*data);
		pid = fork();
		{
			if (!(pid == ((NI) 0))) goto LA10;
			startprocessafterfork_144004((&datacopy));
			_exit(((NI) 1));
		}
		LA10: ;
		LOC12 = 0;
		LOC12 = close((*data).perrorpipe[(((NI) 1))- 0]);
		{
			NI32 LOC17;
			if (!(pid < ((NI) 0))) goto LA15;
			LOC17 = 0;
			LOC17 = oslasterror_115833();
			raiseoserror_115809(LOC17);
		}
		LA15: ;
		error = 0;
		sizeread = read((*data).perrorpipe[(((NI) 0))- 0], ((void*) ((&error))), ((NI) 4));
		{
			NCSTRING LOC22;
			NimStringDesc* LOC23;
			if (!(sizeread == ((NI) 4))) goto LA20;
			LOC22 = 0;
			LOC22 = strerror(error);
			LOC23 = 0;
			LOC23 = cstrToNimstr(LOC22);
			nosraiseOSError(LOC23);
		}
		LA20: ;
		result = pid;
		popSafePoint();
		LOC24 = 0;
		LOC24 = close((*data).perrorpipe[(((NI) 0))- 0]);
		goto BeforeRet;
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		int LOC27;
		LOC27 = 0;
		LOC27 = close((*data).perrorpipe[(((NI) 0))- 0]);
	}
	if (TMP2894.status != 0) reraiseException();
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Processobj142402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj133012* env, NU8 options) {
	Processobj142402* result;
	TY144022 pstdin;
	TY144022 pstdout;
	TY144022 pstderr;
	NimStringDesc* syscommand;
	TY121008* sysargsraw;
	pid_t volatile pid;
	NCSTRING* sysargs;
	TSafePoint TMP2891;
	result = 0;
	memset((void*)pstdin, 0, sizeof(pstdin));
	memset((void*)pstdout, 0, sizeof(pstdout));
	memset((void*)pstderr, 0, sizeof(pstderr));
	result = (Processobj142402*) newObj((&NTI142404), sizeof(Processobj142402));
	(*result).Sup.m_type = (&NTI142402);
	(*result).exitcode = ((int) -3);
	{
		if (!!(((options &(1<<((((NU8) 4))&7)))!=0))) goto LA3;
		{
			NIM_BOOL LOC7;
			NIM_BOOL LOC8;
			int LOC9;
			int LOC11;
			int LOC13;
			NI32 LOC16;
			LOC7 = 0;
			LOC8 = 0;
			LOC9 = 0;
			LOC9 = pipe(pstdin);
			LOC8 = !((LOC9 == ((NI32) 0)));
			if (LOC8) goto LA10;
			LOC11 = 0;
			LOC11 = pipe(pstdout);
			LOC8 = !((LOC11 == ((NI32) 0)));
			LA10: ;
			LOC7 = LOC8;
			if (LOC7) goto LA12;
			LOC13 = 0;
			LOC13 = pipe(pstderr);
			LOC7 = !((LOC13 == ((NI32) 0)));
			LA12: ;
			if (!LOC7) goto LA14;
			LOC16 = 0;
			LOC16 = oslasterror_115833();
			raiseoserror_115809(LOC16);
		}
		LA14: ;
	}
	LA3: ;
	syscommand = 0;
	sysargsraw = 0;
	{
		TY175063 LOC21;
		NimStringDesc* LOC22;
		NimStringDesc* LOC23;
		NimStringDesc* LOC24;
		if (!((options &(1<<((((NU8) 2))&7)))!=0)) goto LA19;
		syscommand = copyString(((NimStringDesc*) &TMP2889));
		sysargsraw = (TY121008*) newSeq((&NTI121008), 3);
		memset((void*)LOC21, 0, sizeof(LOC21));
		LOC21[0] = copyString(syscommand);
		LOC21[1] = copyString(((NimStringDesc*) &TMP2890));
		LOC21[2] = copyString(command);
		LOC22 = 0;
		LOC22 = sysargsraw->data[0]; sysargsraw->data[0] = copyStringRC1(LOC21[0]);
		if (LOC22) nimGCunrefNoCycle(LOC22);
		LOC23 = 0;
		LOC23 = sysargsraw->data[1]; sysargsraw->data[1] = copyStringRC1(LOC21[1]);
		if (LOC23) nimGCunrefNoCycle(LOC23);
		LOC24 = 0;
		LOC24 = sysargsraw->data[2]; sysargsraw->data[2] = copyStringRC1(LOC21[2]);
		if (LOC24) nimGCunrefNoCycle(LOC24);
	}
	goto LA17;
	LA19: ;
	{
		TY163580 LOC26;
		NimStringDesc* LOC27;
		syscommand = copyString(command);
		sysargsraw = (TY121008*) newSeq((&NTI121008), 1);
		memset((void*)LOC26, 0, sizeof(LOC26));
		LOC26[0] = copyString(command);
		LOC27 = 0;
		LOC27 = sysargsraw->data[0]; sysargsraw->data[0] = copyStringRC1(LOC26[0]);
		if (LOC27) nimGCunrefNoCycle(LOC27);
		{
			NimStringDesc* arg_144224;
			NI i_144481;
			arg_144224 = 0;
			i_144481 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC31;
					if (!(i_144481 < argsLen0)) goto LA30;
					arg_144224 = args[i_144481];
					sysargsraw = (TY121008*) incrSeq(&(sysargsraw)->Sup, sizeof(NimStringDesc*));
					LOC31 = 0;
					LOC31 = sysargsraw->data[sysargsraw->Sup.len-1]; sysargsraw->data[sysargsraw->Sup.len-1] = copyStringRC1(arg_144224);
					if (LOC31) nimGCunrefNoCycle(LOC31);
					i_144481 += ((NI) 1);
				} LA30: ;
			}
		}
	}
	LA17: ;
	pid = 0;
	sysargs = alloccstringarray_14001(sysargsraw->data, sysargsraw->Sup.len);
	pushSafePoint(&TMP2891);
	TMP2891.status = setjmp(TMP2891.context);
	if (TMP2891.status == 0) {
		NCSTRING* sysenv;
		TSafePoint TMP2893;
		{
			if (!(env == NIM_NIL)) goto LA35;
			sysenv = envtocstringarray_143854();
		}
		goto LA33;
		LA35: ;
		{
			sysenv = envtocstringarray_143806(env);
		}
		LA33: ;
		pushSafePoint(&TMP2893);
		TMP2893.status = setjmp(TMP2893.context);
		if (TMP2893.status == 0) {
			Tstartprocessdata143948 data;
			memset((void*)(&data), 0, sizeof(data));
			data.syscommand = syscommand->data;
			data.sysargs = sysargs;
			data.sysenv = sysenv;
			memcpy((void*)data.pstdin, (NIM_CONST void*)pstdin, sizeof(data.pstdin));
			memcpy((void*)data.pstdout, (NIM_CONST void*)pstdout, sizeof(data.pstdout));
			memcpy((void*)data.pstderr, (NIM_CONST void*)pstderr, sizeof(data.pstderr));
			data.optionpoparentstreams = ((options &(1<<((((NU8) 4))&7)))!=0);
			data.optionpousepath = ((options &(1<<((((NU8) 1))&7)))!=0);
			data.optionpostderrtostdout = ((options &(1<<((((NU8) 3))&7)))!=0);
			data.workingdir = workingdir->data;
			pid = startprocessauxfork_144001((&data));
			{
				NimStringDesc* LOC43;
				if (!((options &(1<<((((NU8) 0))&7)))!=0)) goto LA41;
				LOC43 = 0;
				LOC43 = nsuJoinSep(args, argsLen0, ((NimStringDesc*) &TMP2895));
				printf("%s%s%s\012", command? (command)->data:"nil", ((NimStringDesc*) &TMP2895)? (((NimStringDesc*) &TMP2895))->data:"nil", LOC43? (LOC43)->data:"nil");
			}
			LA41: ;
			(*result).id = pid;
			{
				if (!((options &(1<<((((NU8) 4))&7)))!=0)) goto LA46;
				(*result).inhandle = ((int) 0);
				(*result).outhandle = ((int) 1);
				{
					if (!((options &(1<<((((NU8) 3))&7)))!=0)) goto LA50;
					(*result).errhandle = (*result).outhandle;
				}
				goto LA48;
				LA50: ;
				{
					(*result).errhandle = ((int) 2);
				}
				LA48: ;
			}
			goto LA44;
			LA46: ;
			{
				int LOC60;
				int LOC61;
				int LOC62;
				(*result).inhandle = pstdin[(((NI) 1))- 0];
				(*result).outhandle = pstdout[(((NI) 0))- 0];
				{
					int LOC58;
					if (!((options &(1<<((((NU8) 3))&7)))!=0)) goto LA56;
					(*result).errhandle = (*result).outhandle;
					LOC58 = 0;
					LOC58 = close(pstderr[(((NI) 0))- 0]);
				}
				goto LA54;
				LA56: ;
				{
					(*result).errhandle = pstderr[(((NI) 0))- 0];
				}
				LA54: ;
				LOC60 = 0;
				LOC60 = close(pstderr[(((NI) 1))- 0]);
				LOC61 = 0;
				LOC61 = close(pstdin[(((NI) 0))- 0]);
				LOC62 = 0;
				LOC62 = close(pstdout[(((NI) 1))- 0]);
			}
			LA44: ;
			popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			dealloccstringarray_14250(sysenv);
		}
		if (TMP2893.status != 0) reraiseException();
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		dealloccstringarray_14250(sysargs);
	}
	if (TMP2891.status != 0) reraiseException();
	return result;
}

N_NIMCALL(void, createstream_145641)(Streamobj137027** stream, int* handle, NU8 filemode) {
	FILE* f;
	Filestreamobj137692* LOC7;
	f = 0;
	{
		NIM_BOOL LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = open_13211(&f, (*handle), filemode);
		if (!!(LOC3)) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_115833();
		raiseoserror_115809(LOC6);
	}
	LA4: ;
	LOC7 = 0;
	LOC7 = newfilestream_137759(f);
	unsureAsgnRef((void**) (&(*stream)), &LOC7->Sup);
}

N_NIMCALL(Streamobj137027*, nospinputStream)(Processobj142402* p) {
	Streamobj137027* result;
{	result = 0;
	{
		if (!((*p).instream == NIM_NIL)) goto LA3;
		createstream_145641(&(*p).instream, (&(*p).inhandle), ((NU8) 1));
	}
	LA3: ;
	result = (*p).instream;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Streamobj137027*, nospoutputStream)(Processobj142402* p) {
	Streamobj137027* result;
{	result = 0;
	{
		if (!((*p).outstream == NIM_NIL)) goto LA3;
		createstream_145641(&(*p).outstream, (&(*p).outhandle), ((NU8) 0));
	}
	LA3: ;
	result = (*p).outstream;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, nospwaitForExit)(Processobj142402* p, NI timeout) {
	NI result;
{	result = 0;
	{
		if (!!(((*p).exitcode == ((NI32) -3)))) goto LA3;
		result = ((NI) ((*p).exitcode));
		goto BeforeRet;
	}
	LA3: ;
	{
		pid_t LOC7;
		NI32 LOC10;
		LOC7 = 0;
		LOC7 = waitpid((*p).id, (&(*p).exitcode), ((int) 0));
		if (!(LOC7 < ((NI) 0))) goto LA8;
		(*p).exitcode = ((int) -3);
		LOC10 = 0;
		LOC10 = oslasterror_115833();
		raiseoserror_115809(LOC10);
	}
	LA8: ;
	result = (NI)((NU64)(((NI) ((*p).exitcode))) >> (NU64)(((NI) 8)));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, nospcountProcessors)(void) {
	NI result;
	result = 0;
	result = ncpicountProcessors();
	return result;
}

N_NIMCALL(NI, nospexecCmd)(NimStringDesc* command) {
	NI result;
	int LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = system(command->data);
	result = ((NI) (LOC1));
	return result;
}
N_NIMCALL(void, TMP4338)(void* p, NI op) {
	TY143201* a;
	NI LOC1;
	a = (TY143201*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46147* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50423)(Tcell46147* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_46865((&gch_48044.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52022)(Tcell46147* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50423(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51604)(Tcell46147* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50423(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46147* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49646(src);
		incref_52022(LOC5);
	}
	LA3: ;
	{
		Tcell46147* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49646((*dest));
		decref_51604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(NIM_BOOL, nosprunning)(Processobj142402* p) {
	NIM_BOOL result;
	NI ret;
{	result = 0;
	ret = 0;
	ret = waitpid((*p).id, (&(*p).exitcode), WNOHANG);
	{
		if (!(ret == ((NI) 0))) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	result = (ret == (*p).id);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, nospclose)(Processobj142402* p) {
	int LOC13;
	int LOC14;
	int LOC15;
	{
		if (!!(((*p).instream == NIM_NIL))) goto LA3;
		close_137085((*p).instream);
	}
	LA3: ;
	{
		if (!!(((*p).outstream == NIM_NIL))) goto LA7;
		close_137085((*p).outstream);
	}
	LA7: ;
	{
		if (!!(((*p).errstream == NIM_NIL))) goto LA11;
		close_137085((*p).errstream);
	}
	LA11: ;
	LOC13 = 0;
	LOC13 = close((*p).inhandle);
	LOC14 = 0;
	LOC14 = close((*p).outhandle);
	LOC15 = 0;
	LOC15 = close((*p).errhandle);
}

N_NIMCALL(NI, nospexecProcesses)(NimStringDesc** cmds, NI cmdsLen0, NU8 options_142795, NI n, TY170656 beforerunevent) {
	NI result;
	NU8 options;
	result = 0;
	options = (options_142795 & ~ 16);
	{
		TY143201* q;
		NI m;
		NI i;
		if (!(((NI) 1) < n)) goto LA3;
		q = 0;
		q = (TY143201*) newSeq((&NTI143201), ((NI) (n)));
		m = ((n <= cmdsLen0) ? n : cmdsLen0);
		{
			NI i_143235;
			NI HEX3Atmp_143536;
			NI res_143539;
			i_143235 = 0;
			HEX3Atmp_143536 = 0;
			HEX3Atmp_143536 = (NI)(m - ((NI) 1));
			res_143539 = ((NI) 0);
			{
				while (1) {
					TY218714 LOC12;
					if (!(res_143539 <= HEX3Atmp_143536)) goto LA7;
					i_143235 = res_143539;
					{
						if (!!((beforerunevent.ClPrc == TMP4339.ClPrc && beforerunevent.ClEnv == TMP4339.ClEnv))) goto LA10;
						beforerunevent.ClEnv? beforerunevent.ClPrc(i_143235, beforerunevent.ClEnv):((TMP4340)(beforerunevent.ClPrc))(i_143235);
					}
					LA10: ;
					memset((void*)LOC12, 0, sizeof(LOC12));
					asgnRef((void**) (&q->data[i_143235]), nospstartProcess(cmds[i_143235], ((NimStringDesc*) &TMP4341), LOC12, 0, NIM_NIL, (options | 4)));
					res_143539 += ((NI) 1);
				} LA7: ;
			}
		}
		i = m;
		{
			while (1) {
				if (!(i <= (cmdsLen0-1))) goto LA14;
				nossleep(((NI) 50));
				{
					NI r_143413;
					NI HEX3Atmp_143545;
					NI res_143548;
					r_143413 = 0;
					HEX3Atmp_143545 = 0;
					HEX3Atmp_143545 = (NI)(n - ((NI) 1));
					res_143548 = ((NI) 0);
					{
						while (1) {
							if (!(res_143548 <= HEX3Atmp_143545)) goto LA17;
							r_143413 = res_143548;
							{
								NIM_BOOL LOC20;
								NI LOC23;
								TY218714 LOC32;
								LOC20 = 0;
								LOC20 = nosprunning(q->data[r_143413]);
								if (!!(LOC20)) goto LA21;
								LOC23 = 0;
								LOC23 = nospwaitForExit(q->data[r_143413], ((NI) -1));
								result = ((LOC23 >= result) ? LOC23 : result);
								{
									if (!!((q->data[r_143413] == NIM_NIL))) goto LA26;
									nospclose(q->data[r_143413]);
								}
								LA26: ;
								{
									if (!!((beforerunevent.ClPrc == TMP4339.ClPrc && beforerunevent.ClEnv == TMP4339.ClEnv))) goto LA30;
									beforerunevent.ClEnv? beforerunevent.ClPrc(i, beforerunevent.ClEnv):((TMP4342)(beforerunevent.ClPrc))(i);
								}
								LA30: ;
								memset((void*)LOC32, 0, sizeof(LOC32));
								asgnRef((void**) (&q->data[r_143413]), nospstartProcess(cmds[i], ((NimStringDesc*) &TMP4341), LOC32, 0, NIM_NIL, (options | 4)));
								i += ((NI) 1);
								{
									if (!((cmdsLen0-1) < i)) goto LA35;
									goto LA15;
								}
								LA35: ;
							}
							LA21: ;
							res_143548 += ((NI) 1);
						} LA17: ;
					}
				} LA15: ;
			} LA14: ;
		}
		{
			NI j_143475;
			NI HEX3Atmp_143553;
			NI res_143556;
			j_143475 = 0;
			HEX3Atmp_143553 = 0;
			HEX3Atmp_143553 = (NI)(m - ((NI) 1));
			res_143556 = ((NI) 0);
			{
				while (1) {
					NI LOC40;
					if (!(res_143556 <= HEX3Atmp_143553)) goto LA39;
					j_143475 = res_143556;
					LOC40 = 0;
					LOC40 = nospwaitForExit(q->data[j_143475], ((NI) -1));
					result = ((LOC40 >= result) ? LOC40 : result);
					{
						if (!!((q->data[j_143475] == NIM_NIL))) goto LA43;
						nospclose(q->data[j_143475]);
					}
					LA43: ;
					res_143556 += ((NI) 1);
				} LA39: ;
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		{
			NI i_143502;
			NI HEX3Atmp_143561;
			NI res_143564;
			i_143502 = 0;
			HEX3Atmp_143561 = 0;
			HEX3Atmp_143561 = (cmdsLen0-1);
			res_143564 = ((NI) 0);
			{
				while (1) {
					Processobj142402* p;
					TY218714 LOC53;
					NI LOC54;
					if (!(res_143564 <= HEX3Atmp_143561)) goto LA48;
					i_143502 = res_143564;
					{
						if (!!((beforerunevent.ClPrc == TMP4339.ClPrc && beforerunevent.ClEnv == TMP4339.ClEnv))) goto LA51;
						beforerunevent.ClEnv? beforerunevent.ClPrc(i_143502, beforerunevent.ClEnv):((TMP4343)(beforerunevent.ClPrc))(i_143502);
					}
					LA51: ;
					memset((void*)LOC53, 0, sizeof(LOC53));
					p = nospstartProcess(cmds[i_143502], ((NimStringDesc*) &TMP4341), LOC53, 0, NIM_NIL, (options | 4));
					LOC54 = 0;
					LOC54 = nospwaitForExit(p, ((NI) -1));
					result = ((LOC54 >= result) ? LOC54 : result);
					nospclose(p);
					res_143564 += ((NI) 1);
				} LA48: ;
			}
		}
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osprocDatInit)(void) {
static TNimNode* TMP2887[8];
static TNimNode TMP29[9];
NTI142402.size = sizeof(Processobj142402);
NTI142402.kind = 17;
NTI142402.base = (&NTI3411);
TMP2887[0] = &TMP29[1];
TMP29[1].kind = 1;
TMP29[1].offset = offsetof(Processobj142402, inhandle);
TMP29[1].typ = (&NTI13008);
TMP29[1].name = "inHandle";
TMP2887[1] = &TMP29[2];
TMP29[2].kind = 1;
TMP29[2].offset = offsetof(Processobj142402, outhandle);
TMP29[2].typ = (&NTI13008);
TMP29[2].name = "outHandle";
TMP2887[2] = &TMP29[3];
TMP29[3].kind = 1;
TMP29[3].offset = offsetof(Processobj142402, errhandle);
TMP29[3].typ = (&NTI13008);
TMP29[3].name = "errHandle";
TMP2887[3] = &TMP29[4];
TMP29[4].kind = 1;
TMP29[4].offset = offsetof(Processobj142402, instream);
TMP29[4].typ = (&NTI137025);
TMP29[4].name = "inStream";
TMP2887[4] = &TMP29[5];
TMP29[5].kind = 1;
TMP29[5].offset = offsetof(Processobj142402, outstream);
TMP29[5].typ = (&NTI137025);
TMP29[5].name = "outStream";
TMP2887[5] = &TMP29[6];
TMP29[6].kind = 1;
TMP29[6].offset = offsetof(Processobj142402, errstream);
TMP29[6].typ = (&NTI137025);
TMP29[6].name = "errStream";
TMP2887[6] = &TMP29[7];
TMP29[7].kind = 1;
TMP29[7].offset = offsetof(Processobj142402, id);
TMP29[7].typ = (&NTI106285);
TMP29[7].name = "id";
TMP2887[7] = &TMP29[8];
TMP29[8].kind = 1;
TMP29[8].offset = offsetof(Processobj142402, exitcode);
TMP29[8].typ = (&NTI5811);
TMP29[8].name = "exitCode";
TMP29[0].len = 8; TMP29[0].kind = 2; TMP29[0].sons = &TMP2887[0];
NTI142402.node = &TMP29[0];
NTI142404.size = sizeof(Processobj142402*);
NTI142404.kind = 22;
NTI142404.base = (&NTI142402);
NTI142404.marker = TMP2888;
NTI143201.size = sizeof(TY143201*);
NTI143201.kind = 24;
NTI143201.base = (&NTI142404);
NTI143201.marker = TMP4338;
}

