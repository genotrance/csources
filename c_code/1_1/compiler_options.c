/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <stdio.h>

#include <stdlib.h>
typedef struct Tlinkedlist132028 Tlinkedlist132028;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcell46146 Tcell46146;
typedef struct TNimType TNimType;
typedef struct Tcellseq46162 Tcellseq46162;
typedef struct Tgcheap48016 Tgcheap48016;
typedef struct Tcellset46158 Tcellset46158;
typedef struct Tpagedesc46154 Tpagedesc46154;
typedef struct Tmemregion28010 Tmemregion28010;
typedef struct Tsmallchunk27240 Tsmallchunk27240;
typedef struct Tllchunk28004 Tllchunk28004;
typedef struct Tbigchunk27242 Tbigchunk27242;
typedef struct Tintset27217 Tintset27217;
typedef struct Ttrunk27213 Ttrunk27213;
typedef struct Tavlnode28008 Tavlnode28008;
typedef struct Tgcstat48014 Tgcstat48014;
typedef struct Stringtableobj136012 Stringtableobj136012;
typedef struct TNimNode TNimNode;
typedef struct TY123008 TY123008;
typedef struct Keyvaluepair136008 Keyvaluepair136008;
typedef struct Twin32finddata105219 Twin32finddata105219;
typedef struct Tfiletime104245 Tfiletime104245;
typedef struct TY118789 TY118789;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct Tstrentry132024 Tstrentry132024;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Keyvaluepairseq136010 Keyvaluepairseq136010;
struct  Tlinkedlist132028  {
Tlistentry132022* head;
Tlistentry132022* tail;
NI counter;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tcell46146  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46162  {
NI len;
NI cap;
Tcell46146** d;
};
struct  Tcellset46158  {
NI counter;
NI max;
Tpagedesc46154* head;
Tpagedesc46154** data;
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
Tcellseq46162 zct;
Tcellseq46162 decstack;
Tcellset46158 cycleroots;
Tcellseq46162 tempstack;
NI recgclock;
Tmemregion28010 region;
Tgcstat48014 stat;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepair136008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tfiletime104245  {
NI32 dwlowdatetime;
NI32 dwhighdatetime;
};
typedef NI16 TY105228[260];
typedef NI16 TY105232[14];
struct  Twin32finddata105219  {
NI32 dwfileattributes;
Tfiletime104245 ftcreationtime;
Tfiletime104245 ftlastaccesstime;
Tfiletime104245 ftlastwritetime;
NI32 nfilesizehigh;
NI32 nfilesizelow;
NI32 dwreserved0;
NI32 dwreserved1;
TY105228 cfilename;
TY105232 calternatefilename;
};
struct TY118789 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef N_STDCALL_PTR(NI32, TY105245) (NI hfindfile, Twin32finddata105219* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY105405) (NI hfindfile);
struct  TNimObject  {
TNimType* m_type;
};
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
typedef NimStringDesc* TY165580[1];
typedef NimStringDesc* TY155945[2];
struct  Tlistentry132022  {
  TNimObject Sup;
Tlistentry132022* prev;
Tlistentry132022* next;
};
struct  Tstrentry132024  {
  Tlistentry132022 Sup;
NimStringDesc* data;
};
typedef NU8 TY179407[32];
typedef NI TY27220[16];
struct  Tpagedesc46154  {
Tpagedesc46154* next;
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
struct  Stringtableobj136012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq136010* data;
NU8 mode;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct TY123008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq136010 {
  TGenericSeq Sup;
  Keyvaluepair136008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(Stringtableobj136012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46146* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46146* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46146* c);
N_NOINLINE(void, incl_46865)(Tcellset46158* s, Tcell46146* cell);
static N_INLINE(void, decref_51604)(Tcell46146* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getprefixdir_155371)(void);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, Keyvaluepair136008* Result);
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj136012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj136012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, HEX2F_118492)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NI, findfirstfile_115416)(NimStringDesc* a, Twin32finddata105219* b);
static N_INLINE(NIM_BOOL, skipfinddata_115436)(Twin32finddata105219* f);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118789* Result);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, HEX24_80789)(NI16* s);
N_NIMCALL(void, nstPut)(Stringtableobj136012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, getgeneratedpath_155428)(void);
N_NIMCALL(NimStringDesc*, shortendir_155407)(NimStringDesc* dir);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, noscreateDir)(NimStringDesc* dir);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, writeln_156205)(FILE* f, NimStringDesc** x, NI xLen0);
N_NIMCALL(void, write_13457)(FILE* f, NimStringDesc* s);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, getpackagename_155825)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, findfile_156341)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rawfindfile_156282)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, canonicalizepath_155380)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, rawfindfile2_156308)(NimStringDesc* f);
N_NIMCALL(void, bringtofront_132705)(Tlinkedlist132028* list, Tlistentry132022* entry);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, canondynlibname_156459)(NimStringDesc* s);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, TY179407 chars, NI start);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(void, libcandidates_156409)(NimStringDesc* s, TY123008** dest);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
STRING_LITERAL(TMP41, "", 0);
STRING_LITERAL(TMP1441, "*.nimble", 8);
STRING_LITERAL(TMP1442, "*.babel", 7);
STRING_LITERAL(TMP1443, "nimcache", 8);
STRING_LITERAL(TMP1445, "\015\012", 2);
STRING_LITERAL(TMP1446, "cannot create directory: ", 25);
STRING_LITERAL(TMP1493, "nim", 3);
STRING_LITERAL(TMP1873, "lib", 3);
static NIM_CONST TY179407 TMP1874 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1875, "true", 4);
NU8 gidecmd_155115;
NU32 goptions_155126;
NU32 gglobaloptions_155128;
NI8 gexitcode_155129;
NU8 gcmd_155130;
NU8 gselectedgc_155131;
Tlinkedlist132028 searchpaths_155132;
Tlinkedlist132028 lazypaths_155133;
NimStringDesc* outfile_155134;
extern Tgcheap48016 gch_48044;
NimStringDesc* docseesrcurl_155135;
NimStringDesc* headerfile_155136;
NI gverbosity_155137;
NI gnumberofprocessors_155138;
NIM_BOOL gwholeproject_155139;
NimStringDesc* gevalexpr_155140;
NF glastcmdtime_155141;
NIM_BOOL glistfullpaths_155142;
NIM_BOOL isserving_155143;
NIM_BOOL gnonimblepath_155144;
NIM_BOOL gexperimentalmode_155145;
Stringtableobj136012* gconfigvars_155231;
Stringtableobj136012* gdlloverrides_155232;
NimStringDesc* libpath_155233;
NimStringDesc* gprojectname_155234;
NimStringDesc* gprojectpath_155235;
NimStringDesc* gprojectfull_155236;
NI32 gprojectmainidx_155237;
NimStringDesc* nimcachedir_155238;
NimStringDesc* command_155239;
TY123008* commandargs_155259;
extern TNimType NTI123008; /* seq[string] */
NIM_BOOL gkeepcomments_155260;
TY123008* implicitimports_155280;
TY123008* implicitincludes_155300;
Stringtableobj136012* packagecache_155601;
TNimType NTI155014; /* TOption */
TNimType NTI155016; /* TOptions */
extern TY105245 Dl_105244;
extern TY105405 Dl_105404;
extern TSafePoint* exchandler_17043;
extern TNimType NTI3433; /* OSError */
extern Exception* currexception_17045;

static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr) {
	Tcell46146* result;
	result = 0;
	result = ((Tcell46146*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46146))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46146* c) {
	addzct_49617((&gch_48044.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46146* c;
	c = usrtocell_49646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46146* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50423)(Tcell46146* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_46865((&gch_48044.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52022)(Tcell46146* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50423(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51604)(Tcell46146* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
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
		Tcell46146* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49646(src);
		incref_52022(LOC5);
	}
	LA3: ;
	{
		Tcell46146* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49646((*dest));
		decref_51604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(NimStringDesc*, canonicalizepath_155380)(NimStringDesc* path) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosexpandFilename(path);
	result = nsuToLowerStr(LOC1);
	return result;
}

N_NIMCALL(NimStringDesc*, getprefixdir_155371)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	Keyvaluepair136008 LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetAppDir();
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	nossplitPath(LOC1, (&LOC2));
	result = copyString(LOC2.Field0);
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, shortendir_155407)(NimStringDesc* dir) {
	NimStringDesc* result;
	NimStringDesc* prefix;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC8;
{	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getprefixdir_155371();
	LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 92);
	prefix = LOC1;
	{
		NIM_BOOL LOC5;
		LOC5 = 0;
		LOC5 = nsuStartsWith(dir, prefix);
		if (!LOC5) goto LA6;
		result = copyStr(dir, (prefix ? prefix->Sup.len : 0));
		goto BeforeRet;
	}
	LA6: ;
	LOC8 = 0;
	LOC8 = rawNewString(gprojectpath_155235->Sup.len + 1);
appendString(LOC8, gprojectpath_155235);
appendChar(LOC8, 92);
	prefix = LOC8;
	{
		NIM_BOOL LOC11;
		LOC11 = 0;
		LOC11 = nsuStartsWith(dir, prefix);
		if (!LOC11) goto LA12;
		result = copyStr(dir, (prefix ? prefix->Sup.len : 0));
		goto BeforeRet;
	}
	LA12: ;
	result = copyString(dir);
	}BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, skipfinddata_115436)(Twin32finddata105219* f) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC3;
	NIM_BOOL LOC5;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NI) ((*f).cfilename[(((NI) 0))- 0])) == ((NI) 46));
	if (!(LOC1)) goto LA2;
	LOC3 = 0;
	LOC3 = (((NI) ((*f).cfilename[(((NI) 1))- 0])) == ((NI) 0));
	if (LOC3) goto LA4;
	LOC5 = 0;
	LOC5 = (((NI) ((*f).cfilename[(((NI) 1))- 0])) == ((NI) 46));
	if (!(LOC5)) goto LA6;
	LOC5 = (((NI) ((*f).cfilename[(((NI) 2))- 0])) == ((NI) 0));
	LA6: ;
	LOC3 = LOC5;
	LA4: ;
	LOC1 = LOC3;
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NimStringDesc*, getpackagename_155825)(NimStringDesc* path) {
	NimStringDesc* result;
	NI parents;
{	result = 0;
	parents = ((NI) 0);
	{
		{
			NimStringDesc* d_155831;
			NimStringDesc* current_155872;
			d_155831 = 0;
			current_155872 = copyString(path);
			{
				while (1) {
					current_155872 = nosparentDir(current_155872);
					{
						if (!((current_155872 ? current_155872->Sup.len : 0) == ((NI) 0))) goto LA7;
						goto LA3;
					}
					LA7: ;
					d_155831 = current_155872;
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = nsthasKey(packagecache_155601, d_155831);
						if (!LOC11) goto LA12;
						result = nstGet(packagecache_155601, d_155831);
						goto BeforeRet;
					}
					LA12: ;
					parents += ((NI) 1);
					{
						NimStringDesc* file_155841;
						NimStringDesc* HEX3Atmp_155855;
						Twin32finddata105219 f_155858;
						NI res_155860;
						file_155841 = 0;
						HEX3Atmp_155855 = 0;
						HEX3Atmp_155855 = HEX2F_118492(d_155831, ((NimStringDesc*) &TMP1441));
						memset((void*)(&f_155858), 0, sizeof(f_155858));
						res_155860 = 0;
						res_155860 = findfirstfile_115416(HEX3Atmp_155855, (&f_155858));
						{
							if (!!((res_155860 == ((NI) -1)))) goto LA17;
							{
								while (1) {
									{
										NIM_BOOL LOC23;
										NIM_BOOL LOC24;
										TY118789 LOC28;
										NimStringDesc* LOC29;
										NimStringDesc* LOC30;
										TY118789 LOC31;
										LOC23 = 0;
										LOC24 = 0;
										LOC24 = skipfinddata_115436((&f_155858));
										LOC23 = !(LOC24);
										if (!(LOC23)) goto LA25;
										LOC23 = ((NI32)(f_155858.dwfileattributes & ((NI32) 16)) == ((NI32) 0));
										LA25: ;
										if (!LOC23) goto LA26;
										memset((void*)(&LOC28), 0, sizeof(LOC28));
										nossplitFile(HEX3Atmp_155855, (&LOC28));
										LOC29 = 0;
										LOC29 = HEX24_80789(((NI16*) ((&f_155858.cfilename[(((NI) 0))- 0]))));
										LOC30 = 0;
										LOC30 = nosextractFilename(LOC29);
										file_155841 = HEX2F_118492(LOC28.Field0, LOC30);
										memset((void*)(&LOC31), 0, sizeof(LOC31));
										nossplitFile(file_155841, (&LOC31));
										result = copyString(LOC31.Field1);
										goto LA1;
									}
									LA26: ;
									{
										NI32 LOC34;
										LOC34 = 0;
										LOC34 = Dl_105244(res_155860, (&f_155858));
										if (!(LOC34 == ((NI32) 0))) goto LA35;
										goto LA19;
									}
									LA35: ;
								}
							} LA19: ;
							Dl_105404(res_155860);
						}
						LA17: ;
					}
					{
						NimStringDesc* file_155842;
						NimStringDesc* HEX3Atmp_155863;
						Twin32finddata105219 f_155866;
						NI res_155868;
						file_155842 = 0;
						HEX3Atmp_155863 = 0;
						HEX3Atmp_155863 = HEX2F_118492(d_155831, ((NimStringDesc*) &TMP1442));
						memset((void*)(&f_155866), 0, sizeof(f_155866));
						res_155868 = 0;
						res_155868 = findfirstfile_115416(HEX3Atmp_155863, (&f_155866));
						{
							if (!!((res_155868 == ((NI) -1)))) goto LA40;
							{
								while (1) {
									{
										NIM_BOOL LOC46;
										NIM_BOOL LOC47;
										TY118789 LOC51;
										NimStringDesc* LOC52;
										NimStringDesc* LOC53;
										TY118789 LOC54;
										LOC46 = 0;
										LOC47 = 0;
										LOC47 = skipfinddata_115436((&f_155866));
										LOC46 = !(LOC47);
										if (!(LOC46)) goto LA48;
										LOC46 = ((NI32)(f_155866.dwfileattributes & ((NI32) 16)) == ((NI32) 0));
										LA48: ;
										if (!LOC46) goto LA49;
										memset((void*)(&LOC51), 0, sizeof(LOC51));
										nossplitFile(HEX3Atmp_155863, (&LOC51));
										LOC52 = 0;
										LOC52 = HEX24_80789(((NI16*) ((&f_155866.cfilename[(((NI) 0))- 0]))));
										LOC53 = 0;
										LOC53 = nosextractFilename(LOC52);
										file_155842 = HEX2F_118492(LOC51.Field0, LOC53);
										memset((void*)(&LOC54), 0, sizeof(LOC54));
										nossplitFile(file_155842, (&LOC54));
										result = copyString(LOC54.Field1);
										goto LA1;
									}
									LA49: ;
									{
										NI32 LOC57;
										LOC57 = 0;
										LOC57 = Dl_105244(res_155868, (&f_155866));
										if (!(LOC57 == ((NI32) 0))) goto LA58;
										goto LA42;
									}
									LA58: ;
								}
							} LA42: ;
							Dl_105404(res_155868);
						}
						LA40: ;
					}
				}
			} LA3: ;
		}
	} LA1: ;
	{
		if (!result == 0) goto LA62;
		result = copyString(((NimStringDesc*) &TMP41));
	}
	LA62: ;
	{
		NimStringDesc* d_155843;
		NimStringDesc* current_155876;
		d_155843 = 0;
		current_155876 = copyString(path);
		{
			while (1) {
				current_155876 = nosparentDir(current_155876);
				{
					if (!((current_155876 ? current_155876->Sup.len : 0) == ((NI) 0))) goto LA69;
					goto LA65;
				}
				LA69: ;
				d_155843 = current_155876;
				nstPut(packagecache_155601, d_155843, result);
				parents -= ((NI) 1);
				{
					if (!(parents <= ((NI) 0))) goto LA73;
					goto LA64;
				}
				LA73: ;
			}
		} LA65: ;
	} LA64: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getgeneratedpath_155428)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(((NI) 0) < (nimcachedir_155238 ? nimcachedir_155238->Sup.len : 0))) goto LA3;
		result = copyString(nimcachedir_155238);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		LOC6 = 0;
		LOC6 = shortendir_155407(gprojectpath_155235);
		result = HEX2F_118492(LOC6, ((NimStringDesc*) &TMP1443));
	}
	LA1: ;
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_17045;
	return result;
}

static N_INLINE(void, writeln_156205)(FILE* f, NimStringDesc** x, NI xLen0) {
	{
		NimStringDesc* i_156221;
		NI i_156229;
		i_156221 = 0;
		i_156229 = ((NI) 0);
		{
			while (1) {
				if (!(i_156229 < xLen0)) goto LA3;
				i_156221 = x[i_156229];
				write_13457(f, i_156221);
				i_156229 += ((NI) 1);
			} LA3: ;
		}
	}
	write_13457(f, ((NimStringDesc*) &TMP1445));
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(NimStringDesc*, completegeneratedfilepath_156001)(NimStringDesc* f, NIM_BOOL createsubdir) {
	NimStringDesc* result;
	Keyvaluepair136008 LOC1;
	NimStringDesc* head;
	NimStringDesc* tail;
	NimStringDesc* subdir;
	result = 0;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitPath(f, (&LOC1));
	head = 0;
	head = copyString(LOC1.Field0);
	tail = 0;
	tail = copyString(LOC1.Field1);
	subdir = getgeneratedpath_155428();
	{
		TSafePoint TMP1444;
		if (!createsubdir) goto LA4;
		pushSafePoint(&TMP1444);
		TMP1444.status = setjmp(TMP1444.context);
		if (TMP1444.status == 0) {
			noscreateDir(subdir);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
				TY165580 LOC9;
				NimStringDesc* LOC10;
				TMP1444.status = 0;
				memset((void*)LOC9, 0, sizeof(LOC9));
				LOC10 = 0;
				LOC10 = rawNewString(subdir->Sup.len + 25);
appendString(LOC10, ((NimStringDesc*) &TMP1446));
appendString(LOC10, subdir);
				LOC9[0] = LOC10;
				writeln_156205(stdout, LOC9, 1);
				exit(((NI) 1));
				popCurrentException();
			}
		}
		if (TMP1444.status != 0) reraiseException();
	}
	LA4: ;
	result = nosjoinPath(subdir, tail);
	return result;
}

N_NIMCALL(NimStringDesc*, togeneratedfile_155936)(NimStringDesc* path, NimStringDesc* ext) {
	NimStringDesc* result;
	Keyvaluepair136008 LOC1;
	NimStringDesc* head;
	NimStringDesc* tail;
	TY155945 LOC2;
	result = 0;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitPath(path, (&LOC1));
	head = 0;
	head = copyString(LOC1.Field0);
	tail = 0;
	tail = copyString(LOC1.Field1);
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = getgeneratedpath_155428();
	LOC2[1] = noschangeFileExt(tail, ext);
	result = nosjoinPathOpenArray(LOC2, 2);
	return result;
}

N_NIMCALL(NimStringDesc*, withpackagename_155922)(NimStringDesc* path) {
	NimStringDesc* result;
	NimStringDesc* x;
	result = 0;
	x = getpackagename_155825(path);
	{
		if (!((x ? x->Sup.len : 0) == ((NI) 0))) goto LA3;
		result = copyString(path);
	}
	goto LA1;
	LA3: ;
	{
		TY118789 LOC6;
		NimStringDesc* p;
		NimStringDesc* file;
		NimStringDesc* ext;
		NimStringDesc* LOC7;
		NimStringDesc* LOC8;
		NimStringDesc* LOC9;
		memset((void*)(&LOC6), 0, sizeof(LOC6));
		nossplitFile(path, (&LOC6));
		p = 0;
		p = LOC6.Field0;
		file = 0;
		file = LOC6.Field1;
		ext = 0;
		ext = LOC6.Field2;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = rawNewString(x->Sup.len + file->Sup.len + 1);
appendString(LOC8, x);
appendChar(LOC8, 95);
appendString(LOC8, file);
		LOC9 = 0;
		LOC9 = HEX2F_118492(p, LOC8);
		LOC7 = rawNewString(LOC9->Sup.len + ext->Sup.len + 0);
appendString(LOC7, LOC9);
appendString(LOC7, ext);
		result = LOC7;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile_156282)(NimStringDesc* f) {
	NimStringDesc* result;
{	result = 0;
	{
		NimStringDesc* it_156286;
		Tstrentry132024* it_156292;
		it_156286 = 0;
		it_156292 = ((Tstrentry132024*) (searchpaths_155132.head));
		{
			while (1) {
				if (!!((it_156292 == NIM_NIL))) goto LA3;
				it_156286 = (*it_156292).data;
				result = nosjoinPath(it_156286, f);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = nosexistsFile(result);
					if (!LOC6) goto LA7;
					result = canonicalizepath_155380(result);
					goto BeforeRet;
				}
				LA7: ;
				it_156292 = ((Tstrentry132024*) ((*it_156292).Sup.next));
			} LA3: ;
		}
	}
	result = copyString(((NimStringDesc*) &TMP41));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile2_156308)(NimStringDesc* f) {
	NimStringDesc* result;
	Tstrentry132024* it;
{	result = 0;
	it = ((Tstrentry132024*) (lazypaths_155133.head));
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			result = nosjoinPath((*it).data, f);
			{
				NIM_BOOL LOC5;
				Tlistentry132022* LOC8;
				LOC5 = 0;
				LOC5 = nosexistsFile(result);
				if (!LOC5) goto LA6;
				LOC8 = 0;
				LOC8 = &it->Sup;
				bringtofront_132705((&lazypaths_155133), LOC8);
				result = canonicalizepath_155380(result);
				goto BeforeRet;
			}
			LA6: ;
			it = ((Tstrentry132024*) ((*it).Sup.next));
		} LA2: ;
	}
	result = copyString(((NimStringDesc*) &TMP41));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findfile_156341)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = rawfindfile_156282(f);
	{
		NimStringDesc* LOC5;
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = nsuToLowerStr(f);
		result = rawfindfile_156282(LOC5);
		{
			if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA8;
			result = rawfindfile2_156308(f);
			{
				NimStringDesc* LOC14;
				if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA12;
				LOC14 = 0;
				LOC14 = nsuToLowerStr(f);
				result = rawfindfile2_156308(LOC14);
			}
			LA12: ;
		}
		LA8: ;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findmodule_156351)(NimStringDesc* modulename, NimStringDesc* currentmodule) {
	NimStringDesc* result;
	NimStringDesc* m;
	NimStringDesc* currentpath;
	TY118789 LOC1;
	result = 0;
	m = nosaddFileExt(modulename, ((NimStringDesc*) &TMP1493));
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(currentmodule, (&LOC1));
	currentpath = LOC1.Field0;
	result = HEX2F_118492(currentpath, m);
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		result = findfile_156341(m);
	}
	LA5: ;
	return result;
}

N_NIMCALL(NimStringDesc*, removetrailingdirsep_155418)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) < (path ? path->Sup.len : 0));
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))]) == (NU8)(92));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyStrLast(path, ((NI) 0), (NI)((path ? path->Sup.len : 0) - ((NI) 2)));
	}
	goto LA1;
	LA5: ;
	{
		result = copyString(path);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, existsconfigvar_155330)(NimStringDesc* key) {
	NIM_BOOL result;
	result = 0;
	result = nsthasKey(gconfigvars_155231, key);
	return result;
}

N_NIMCALL(NimStringDesc*, getconfigvar_155340)(NimStringDesc* key) {
	NimStringDesc* result;
	result = 0;
	result = nstGet(gconfigvars_155231, key);
	return result;
}

N_NIMCALL(NimStringDesc*, canondynlibname_156459)(NimStringDesc* s) {
	NimStringDesc* result;
	NI start;
	NI ende;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsuStartsWith(s, ((NimStringDesc*) &TMP1873));
		if (!LOC3) goto LA4;
		start = ((NI) 3);
	}
	goto LA1;
	LA4: ;
	{
		start = ((NI) 0);
	}
	LA1: ;
	ende = nsuFindCharSet(s, TMP1874, ((NI) 0));
	{
		if (!(((NI) 0) <= ende)) goto LA9;
		result = copyStrLast(s, start, (NI)(ende - ((NI) 1)));
	}
	goto LA7;
	LA9: ;
	{
		result = copyStr(s, start);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, incldynliboverride_156472)(NimStringDesc* lib) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = canondynlibname_156459(lib);
	nstPut(gdlloverrides_155232, LOC1, ((NimStringDesc*) &TMP1875));
}

N_NIMCALL(void, setconfigvar_155350)(NimStringDesc* key, NimStringDesc* val) {
	nstPut(gconfigvars_155231, key, val);
}

N_NIMCALL(NIM_BOOL, isdynliboverride_156481)(NimStringDesc* lib) {
	NIM_BOOL result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = canondynlibname_156459(lib);
	result = nsthasKey(gdlloverrides_155232, LOC1);
	return result;
}

N_NIMCALL(void, libcandidates_156409)(NimStringDesc* s, TY123008** dest) {
	NI le;
	NI ri;
	le = nsuFindChar(s, 40, ((NI) 0));
	ri = nsuFindChar(s, 41, ((NI) ((NI)(le + ((NI) 1)))));
	{
		NIM_BOOL LOC3;
		NimStringDesc* prefix;
		NimStringDesc* suffix;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= le);
		if (!(LOC3)) goto LA4;
		LOC3 = (le < ri);
		LA4: ;
		if (!LOC3) goto LA5;
		prefix = copyStrLast(s, ((NI) 0), (NI)(le - ((NI) 1)));
		suffix = copyStr(s, (NI)(ri + ((NI) 1)));
		{
			NimStringDesc* middle_156419;
			NimStringDesc* HEX3Atmp_156431;
			NI last_156435;
			middle_156419 = 0;
			HEX3Atmp_156431 = 0;
			HEX3Atmp_156431 = copyStrLast(s, (NI)(le + ((NI) 1)), (NI)(ri - ((NI) 1)));
			last_156435 = ((NI) 0);
			{
				if (!(((NI) 0) < (HEX3Atmp_156431 ? HEX3Atmp_156431->Sup.len : 0))) goto LA10;
				{
					while (1) {
						NI first_156437;
						NimStringDesc* LOC18;
						if (!(last_156435 <= (HEX3Atmp_156431 ? HEX3Atmp_156431->Sup.len : 0))) goto LA13;
						first_156437 = last_156435;
						{
							while (1) {
								NIM_BOOL LOC16;
								LOC16 = 0;
								LOC16 = (last_156435 < (HEX3Atmp_156431 ? HEX3Atmp_156431->Sup.len : 0));
								if (!(LOC16)) goto LA17;
								LOC16 = !(((NU8)(HEX3Atmp_156431->data[last_156435]) == (NU8)(124)));
								LA17: ;
								if (!LOC16) goto LA15;
								last_156435 += ((NI) 1);
							} LA15: ;
						}
						middle_156419 = copyStrLast(HEX3Atmp_156431, first_156437, (NI)(last_156435 - ((NI) 1)));
						LOC18 = 0;
						LOC18 = rawNewString(prefix->Sup.len + middle_156419->Sup.len + suffix->Sup.len + 0);
appendString(LOC18, prefix);
appendString(LOC18, middle_156419);
appendString(LOC18, suffix);
						libcandidates_156409(LOC18, dest);
						last_156435 += ((NI) 1);
					} LA13: ;
				}
			}
			LA10: ;
		}
	}
	goto LA1;
	LA5: ;
	{
		NimStringDesc* LOC20;
		(*dest) = (TY123008*) incrSeq(&((*dest))->Sup, sizeof(NimStringDesc*));
		LOC20 = 0;
		LOC20 = (*dest)->data[(*dest)->Sup.len-1]; (*dest)->data[(*dest)->Sup.len-1] = copyStringRC1(s);
		if (LOC20) nimGCunrefNoCycle(LOC20);
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, getoutfile_155360)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!(((outfile_155134) && (outfile_155134)->Sup.len == 0))) goto LA3;
		result = copyString(outfile_155134);
	}
	goto LA1;
	LA3: ;
	{
		result = noschangeFileExt(filename, ext);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, maincommandarg_155313)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(((NI) 0) < (commandargs_155259 ? commandargs_155259->Sup.len : 0))) goto LA3;
		result = copyString(commandargs_155259->data[((NI) 0)]);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(gprojectname_155234);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetpackagecache_155605)(void) {
	asgnRef((void**) (&packagecache_155601), nstnewStringTable(((NU8) 0)));
}
NIM_EXTERNC N_NOINLINE(void, compiler_optionsInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	NimStringDesc* LOC7;
	NimStringDesc* LOC8;
	NimStringDesc* LOC9;
	NimStringDesc* LOC10;
	goptions_155126 = 2202238;
	gglobaloptions_155128 = 8388608;
	gcmd_155130 = ((NU8) 0);
	gselectedgc_155131 = ((NU8) 3);
	LOC1 = 0;
	LOC1 = outfile_155134; outfile_155134 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = docseesrcurl_155135; docseesrcurl_155135 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = headerfile_155136; headerfile_155136 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	gverbosity_155137 = ((NI) 1);
	LOC4 = 0;
	LOC4 = gevalexpr_155140; gevalexpr_155140 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC4) nimGCunrefNoCycle(LOC4);
	isserving_155143 = NIM_FALSE;
	gnonimblepath_155144 = NIM_FALSE;
	asgnRef((void**) (&gconfigvars_155231), nstnewStringTable(((NU8) 2)));
	asgnRef((void**) (&gdlloverrides_155232), nstnewStringTable(((NU8) 1)));
	LOC5 = 0;
	LOC5 = libpath_155233; libpath_155233 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC5) nimGCunrefNoCycle(LOC5);
	LOC6 = 0;
	LOC6 = gprojectname_155234; gprojectname_155234 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC6) nimGCunrefNoCycle(LOC6);
	LOC7 = 0;
	LOC7 = gprojectpath_155235; gprojectpath_155235 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC7) nimGCunrefNoCycle(LOC7);
	LOC8 = 0;
	LOC8 = gprojectfull_155236; gprojectfull_155236 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC8) nimGCunrefNoCycle(LOC8);
	LOC9 = 0;
	LOC9 = nimcachedir_155238; nimcachedir_155238 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC9) nimGCunrefNoCycle(LOC9);
	LOC10 = 0;
	LOC10 = command_155239; command_155239 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC10) nimGCunrefNoCycle(LOC10);
	if (commandargs_155259) nimGCunrefNoCycle(commandargs_155259);
	commandargs_155259 = (TY123008*) newSeqRC1((&NTI123008), 0);
	gkeepcomments_155260 = NIM_TRUE;
	if (implicitimports_155280) nimGCunrefNoCycle(implicitimports_155280);
	implicitimports_155280 = (TY123008*) newSeqRC1((&NTI123008), 0);
	if (implicitincludes_155300) nimGCunrefNoCycle(implicitincludes_155300);
	implicitincludes_155300 = (TY123008*) newSeqRC1((&NTI123008), 0);
	asgnRef((void**) (&packagecache_155601), nstnewStringTable(((NU8) 0)));
}

NIM_EXTERNC N_NOINLINE(void, compiler_optionsDatInit)(void) {
static TNimNode* TMP763[22];
NI TMP765;
static char* NIM_CONST TMP764[22] = {
"optNone", 
"optObjCheck", 
"optFieldCheck", 
"optRangeCheck", 
"optBoundsCheck", 
"optOverflowCheck", 
"optNilCheck", 
"optNaNCheck", 
"optInfCheck", 
"optAssert", 
"optLineDir", 
"optWarns", 
"optHints", 
"optOptimizeSpeed", 
"optOptimizeSize", 
"optStackTrace", 
"optLineTrace", 
"optEndb", 
"optByRef", 
"optProfiler", 
"optImplicitStatic", 
"optPatterns"};
static TNimNode TMP23[24];
NTI155014.size = sizeof(NU8);
NTI155014.kind = 14;
NTI155014.base = 0;
NTI155014.flags = 3;
for (TMP765 = 0; TMP765 < 22; TMP765++) {
TMP23[TMP765+0].kind = 1;
TMP23[TMP765+0].offset = TMP765;
TMP23[TMP765+0].name = TMP764[TMP765];
TMP763[TMP765] = &TMP23[TMP765+0];
}
TMP23[22].len = 22; TMP23[22].kind = 2; TMP23[22].sons = &TMP763[0];
NTI155014.node = &TMP23[22];
NTI155016.size = sizeof(NU32);
NTI155016.kind = 19;
NTI155016.base = (&NTI155014);
NTI155016.flags = 3;
TMP23[23].len = 0; TMP23[23].kind = 0;
NTI155016.node = &TMP23[23];
}

