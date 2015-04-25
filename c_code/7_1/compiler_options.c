/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <glob.h>

#include <setjmp.h>

#include <stdio.h>

#include <stdlib.h>
typedef struct Tlinkedlist129028 Tlinkedlist129028;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcell46147 Tcell46147;
typedef struct TNimType TNimType;
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
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct TNimNode TNimNode;
typedef struct TY121008 TY121008;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
typedef struct TY118589 TY118589;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct Tstrentry129024 Tstrentry129024;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
struct  Tlinkedlist129028  {
Tlistentry129022* head;
Tlistentry129022* tail;
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
struct Keyvaluepair133008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY118589 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
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
typedef NimStringDesc* TY163580[1];
typedef NimStringDesc* TY153967[2];
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tstrentry129024  {
  Tlistentry129022 Sup;
NimStringDesc* data;
};
typedef NU8 TY177407[32];
typedef NI TY27220[16];
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
struct  Stringtableobj133012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq133010* data;
NU8 mode;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct TY121008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  Keyvaluepair133008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
N_NIMCALL(Stringtableobj133012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46147* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46147* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46147* c);
N_NOINLINE(void, incl_46865)(Tcellset46159* s, Tcell46147* cell);
static N_INLINE(void, decref_51604)(Tcell46147* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getprefixdir_153371)(void);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, Keyvaluepair133008* Result);
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj133012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj133012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, HEX2F_118292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118589* Result);
N_NIMCALL(void, nstPut)(Stringtableobj133012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, getgeneratedpath_153428)(void);
N_NIMCALL(NimStringDesc*, shortendir_153407)(NimStringDesc* dir);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, noscreateDir)(NimStringDesc* dir);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, writeln_154205)(FILE* f, NimStringDesc** x, NI xLen0);
N_NIMCALL(void, write_13457)(FILE* f, NimStringDesc* s);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, getpackagename_153825)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, findfile_154341)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rawfindfile_154282)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, canonicalizepath_153380)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, rawfindfile2_154308)(NimStringDesc* f);
N_NIMCALL(void, bringtofront_129705)(Tlinkedlist129028* list, Tlistentry129022* entry);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, canondynlibname_154459)(NimStringDesc* s);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, TY177407 chars, NI start);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(void, libcandidates_154409)(NimStringDesc* s, TY121008** dest);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
STRING_LITERAL(TMP39, "", 0);
STRING_LITERAL(TMP1433, "*.nimble", 8);
STRING_LITERAL(TMP1434, "*.babel", 7);
STRING_LITERAL(TMP1435, "nimcache", 8);
STRING_LITERAL(TMP1437, "\012", 1);
STRING_LITERAL(TMP1438, "cannot create directory: ", 25);
STRING_LITERAL(TMP1485, "nim", 3);
STRING_LITERAL(TMP1863, "lib", 3);
static NIM_CONST TY177407 TMP1864 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1865, "true", 4);
NU8 gidecmd_153115;
NU32 goptions_153126;
NU32 gglobaloptions_153128;
NI8 gexitcode_153129;
NU8 gcmd_153130;
NU8 gselectedgc_153131;
Tlinkedlist129028 searchpaths_153132;
Tlinkedlist129028 lazypaths_153133;
NimStringDesc* outfile_153134;
extern Tgcheap48016 gch_48044;
NimStringDesc* docseesrcurl_153135;
NimStringDesc* headerfile_153136;
NI gverbosity_153137;
NI gnumberofprocessors_153138;
NIM_BOOL gwholeproject_153139;
NimStringDesc* gevalexpr_153140;
NF glastcmdtime_153141;
NIM_BOOL glistfullpaths_153142;
NIM_BOOL isserving_153143;
NIM_BOOL gnonimblepath_153144;
NIM_BOOL gexperimentalmode_153145;
Stringtableobj133012* gconfigvars_153231;
Stringtableobj133012* gdlloverrides_153232;
NimStringDesc* libpath_153233;
NimStringDesc* gprojectname_153234;
NimStringDesc* gprojectpath_153235;
NimStringDesc* gprojectfull_153236;
NI32 gprojectmainidx_153237;
NimStringDesc* nimcachedir_153238;
NimStringDesc* command_153239;
TY121008* commandargs_153259;
extern TNimType NTI121008; /* seq[string] */
NIM_BOOL gkeepcomments_153260;
TY121008* implicitimports_153280;
TY121008* implicitincludes_153300;
Stringtableobj133012* packagecache_153601;
TNimType NTI153014; /* TOption */
TNimType NTI153016; /* TOptions */
extern TSafePoint* exchandler_17043;
extern TNimType NTI3433; /* OSError */
extern Exception* currexception_17045;

static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr) {
	Tcell46147* result;
	result = 0;
	result = ((Tcell46147*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46147))))));
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
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
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

static N_INLINE(void, decref_51604)(Tcell46147* c) {
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

N_NIMCALL(NimStringDesc*, canonicalizepath_153380)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	result = nosexpandFilename(path);
	return result;
}

N_NIMCALL(NimStringDesc*, getprefixdir_153371)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	Keyvaluepair133008 LOC2;
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

N_NIMCALL(NimStringDesc*, shortendir_153407)(NimStringDesc* dir) {
	NimStringDesc* result;
	NimStringDesc* prefix;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC8;
{	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getprefixdir_153371();
	LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 47);
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
	LOC8 = rawNewString(gprojectpath_153235->Sup.len + 1);
appendString(LOC8, gprojectpath_153235);
appendChar(LOC8, 47);
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

N_NIMCALL(NimStringDesc*, getpackagename_153825)(NimStringDesc* path) {
	NimStringDesc* result;
	NI parents;
{	result = 0;
	parents = ((NI) 0);
	{
		{
			NimStringDesc* d_153831;
			NimStringDesc* current_153888;
			d_153831 = 0;
			current_153888 = copyString(path);
			{
				while (1) {
					current_153888 = nosparentDir(current_153888);
					{
						if (!((current_153888 ? current_153888->Sup.len : 0) == ((NI) 0))) goto LA7;
						goto LA3;
					}
					LA7: ;
					d_153831 = current_153888;
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = nsthasKey(packagecache_153601, d_153831);
						if (!LOC11) goto LA12;
						result = nstGet(packagecache_153601, d_153831);
						goto BeforeRet;
					}
					LA12: ;
					parents += ((NI) 1);
					{
						NimStringDesc* file_153841;
						NimStringDesc* HEX3Atmp_153855;
						glob_t f_153859;
						NI res_153861;
						int LOC15;
						file_153841 = 0;
						HEX3Atmp_153855 = 0;
						HEX3Atmp_153855 = HEX2F_118292(d_153831, ((NimStringDesc*) &TMP1433));
						memset((void*)(&f_153859), 0, sizeof(f_153859));
						res_153861 = 0;
						f_153859.gl_offs = ((NI) 0);
						f_153859.gl_pathc = ((NI) 0);
						f_153859.gl_pathv = NIM_NIL;
						LOC15 = 0;
						LOC15 = glob(HEX3Atmp_153855->data, ((int) 0), NIM_NIL, (&f_153859));
						res_153861 = ((NI) (LOC15));
						{
							if (!(res_153861 == ((NI) 0))) goto LA18;
							{
								NI i_153863;
								NI HEX3Atmp_153865;
								NI res_153867;
								i_153863 = 0;
								HEX3Atmp_153865 = 0;
								HEX3Atmp_153865 = (NI)(f_153859.gl_pathc - ((NI) 1));
								res_153867 = ((NI) 0);
								{
									while (1) {
										TY118589 LOC23;
										if (!(res_153867 <= HEX3Atmp_153865)) goto LA22;
										i_153863 = res_153867;
										file_153841 = cstrToNimstr(f_153859.gl_pathv[(i_153863)- 0]);
										memset((void*)(&LOC23), 0, sizeof(LOC23));
										nossplitFile(file_153841, (&LOC23));
										result = copyString(LOC23.Field1);
										goto LA1;
										res_153867 += ((NI) 1);
									} LA22: ;
								}
							}
						}
						LA18: ;
						globfree((&f_153859));
					}
					{
						NimStringDesc* file_153842;
						NimStringDesc* HEX3Atmp_153871;
						glob_t f_153875;
						NI res_153877;
						int LOC25;
						file_153842 = 0;
						HEX3Atmp_153871 = 0;
						HEX3Atmp_153871 = HEX2F_118292(d_153831, ((NimStringDesc*) &TMP1434));
						memset((void*)(&f_153875), 0, sizeof(f_153875));
						res_153877 = 0;
						f_153875.gl_offs = ((NI) 0);
						f_153875.gl_pathc = ((NI) 0);
						f_153875.gl_pathv = NIM_NIL;
						LOC25 = 0;
						LOC25 = glob(HEX3Atmp_153871->data, ((int) 0), NIM_NIL, (&f_153875));
						res_153877 = ((NI) (LOC25));
						{
							if (!(res_153877 == ((NI) 0))) goto LA28;
							{
								NI i_153879;
								NI HEX3Atmp_153881;
								NI res_153883;
								i_153879 = 0;
								HEX3Atmp_153881 = 0;
								HEX3Atmp_153881 = (NI)(f_153875.gl_pathc - ((NI) 1));
								res_153883 = ((NI) 0);
								{
									while (1) {
										TY118589 LOC33;
										if (!(res_153883 <= HEX3Atmp_153881)) goto LA32;
										i_153879 = res_153883;
										file_153842 = cstrToNimstr(f_153875.gl_pathv[(i_153879)- 0]);
										memset((void*)(&LOC33), 0, sizeof(LOC33));
										nossplitFile(file_153842, (&LOC33));
										result = copyString(LOC33.Field1);
										goto LA1;
										res_153883 += ((NI) 1);
									} LA32: ;
								}
							}
						}
						LA28: ;
						globfree((&f_153875));
					}
				}
			} LA3: ;
		}
	} LA1: ;
	{
		if (!result == 0) goto LA36;
		result = copyString(((NimStringDesc*) &TMP39));
	}
	LA36: ;
	{
		NimStringDesc* d_153843;
		NimStringDesc* current_153892;
		d_153843 = 0;
		current_153892 = copyString(path);
		{
			while (1) {
				current_153892 = nosparentDir(current_153892);
				{
					if (!((current_153892 ? current_153892->Sup.len : 0) == ((NI) 0))) goto LA43;
					goto LA39;
				}
				LA43: ;
				d_153843 = current_153892;
				nstPut(packagecache_153601, d_153843, result);
				parents -= ((NI) 1);
				{
					if (!(parents <= ((NI) 0))) goto LA47;
					goto LA38;
				}
				LA47: ;
			}
		} LA39: ;
	} LA38: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getgeneratedpath_153428)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(((NI) 0) < (nimcachedir_153238 ? nimcachedir_153238->Sup.len : 0))) goto LA3;
		result = copyString(nimcachedir_153238);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		LOC6 = 0;
		LOC6 = shortendir_153407(gprojectpath_153235);
		result = HEX2F_118292(LOC6, ((NimStringDesc*) &TMP1435));
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

static N_INLINE(void, writeln_154205)(FILE* f, NimStringDesc** x, NI xLen0) {
	{
		NimStringDesc* i_154221;
		NI i_154229;
		i_154221 = 0;
		i_154229 = ((NI) 0);
		{
			while (1) {
				if (!(i_154229 < xLen0)) goto LA3;
				i_154221 = x[i_154229];
				write_13457(f, i_154221);
				i_154229 += ((NI) 1);
			} LA3: ;
		}
	}
	write_13457(f, ((NimStringDesc*) &TMP1437));
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(NimStringDesc*, completegeneratedfilepath_154001)(NimStringDesc* f, NIM_BOOL createsubdir) {
	NimStringDesc* result;
	Keyvaluepair133008 LOC1;
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
	subdir = getgeneratedpath_153428();
	{
		TSafePoint TMP1436;
		if (!createsubdir) goto LA4;
		pushSafePoint(&TMP1436);
		TMP1436.status = _setjmp(TMP1436.context);
		if (TMP1436.status == 0) {
			noscreateDir(subdir);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
				TY163580 LOC9;
				NimStringDesc* LOC10;
				TMP1436.status = 0;
				memset((void*)LOC9, 0, sizeof(LOC9));
				LOC10 = 0;
				LOC10 = rawNewString(subdir->Sup.len + 25);
appendString(LOC10, ((NimStringDesc*) &TMP1438));
appendString(LOC10, subdir);
				LOC9[0] = LOC10;
				writeln_154205(stdout, LOC9, 1);
				exit(((NI) 1));
				popCurrentException();
			}
		}
		if (TMP1436.status != 0) reraiseException();
	}
	LA4: ;
	result = nosjoinPath(subdir, tail);
	return result;
}

N_NIMCALL(NimStringDesc*, togeneratedfile_153958)(NimStringDesc* path, NimStringDesc* ext) {
	NimStringDesc* result;
	Keyvaluepair133008 LOC1;
	NimStringDesc* head;
	NimStringDesc* tail;
	TY153967 LOC2;
	result = 0;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitPath(path, (&LOC1));
	head = 0;
	head = copyString(LOC1.Field0);
	tail = 0;
	tail = copyString(LOC1.Field1);
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = getgeneratedpath_153428();
	LOC2[1] = noschangeFileExt(tail, ext);
	result = nosjoinPathOpenArray(LOC2, 2);
	return result;
}

N_NIMCALL(NimStringDesc*, withpackagename_153944)(NimStringDesc* path) {
	NimStringDesc* result;
	NimStringDesc* x;
	result = 0;
	x = getpackagename_153825(path);
	{
		if (!((x ? x->Sup.len : 0) == ((NI) 0))) goto LA3;
		result = copyString(path);
	}
	goto LA1;
	LA3: ;
	{
		TY118589 LOC6;
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
		LOC9 = HEX2F_118292(p, LOC8);
		LOC7 = rawNewString(LOC9->Sup.len + ext->Sup.len + 0);
appendString(LOC7, LOC9);
appendString(LOC7, ext);
		result = LOC7;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile_154282)(NimStringDesc* f) {
	NimStringDesc* result;
{	result = 0;
	{
		NimStringDesc* it_154286;
		Tstrentry129024* it_154292;
		it_154286 = 0;
		it_154292 = ((Tstrentry129024*) (searchpaths_153132.head));
		{
			while (1) {
				if (!!((it_154292 == NIM_NIL))) goto LA3;
				it_154286 = (*it_154292).data;
				result = nosjoinPath(it_154286, f);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = nosexistsFile(result);
					if (!LOC6) goto LA7;
					result = canonicalizepath_153380(result);
					goto BeforeRet;
				}
				LA7: ;
				it_154292 = ((Tstrentry129024*) ((*it_154292).Sup.next));
			} LA3: ;
		}
	}
	result = copyString(((NimStringDesc*) &TMP39));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile2_154308)(NimStringDesc* f) {
	NimStringDesc* result;
	Tstrentry129024* it;
{	result = 0;
	it = ((Tstrentry129024*) (lazypaths_153133.head));
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			result = nosjoinPath((*it).data, f);
			{
				NIM_BOOL LOC5;
				Tlistentry129022* LOC8;
				LOC5 = 0;
				LOC5 = nosexistsFile(result);
				if (!LOC5) goto LA6;
				LOC8 = 0;
				LOC8 = &it->Sup;
				bringtofront_129705((&lazypaths_153133), LOC8);
				result = canonicalizepath_153380(result);
				goto BeforeRet;
			}
			LA6: ;
			it = ((Tstrentry129024*) ((*it).Sup.next));
		} LA2: ;
	}
	result = copyString(((NimStringDesc*) &TMP39));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findfile_154341)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = rawfindfile_154282(f);
	{
		NimStringDesc* LOC5;
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = nsuToLowerStr(f);
		result = rawfindfile_154282(LOC5);
		{
			if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA8;
			result = rawfindfile2_154308(f);
			{
				NimStringDesc* LOC14;
				if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA12;
				LOC14 = 0;
				LOC14 = nsuToLowerStr(f);
				result = rawfindfile2_154308(LOC14);
			}
			LA12: ;
		}
		LA8: ;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findmodule_154351)(NimStringDesc* modulename, NimStringDesc* currentmodule) {
	NimStringDesc* result;
	NimStringDesc* m;
	NimStringDesc* currentpath;
	TY118589 LOC1;
	result = 0;
	m = nosaddFileExt(modulename, ((NimStringDesc*) &TMP1485));
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(currentmodule, (&LOC1));
	currentpath = LOC1.Field0;
	result = HEX2F_118292(currentpath, m);
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		result = findfile_154341(m);
	}
	LA5: ;
	return result;
}

N_NIMCALL(NimStringDesc*, removetrailingdirsep_153418)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) < (path ? path->Sup.len : 0));
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))]) == (NU8)(47));
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

N_NIMCALL(NIM_BOOL, existsconfigvar_153330)(NimStringDesc* key) {
	NIM_BOOL result;
	result = 0;
	result = nsthasKey(gconfigvars_153231, key);
	return result;
}

N_NIMCALL(NimStringDesc*, getconfigvar_153340)(NimStringDesc* key) {
	NimStringDesc* result;
	result = 0;
	result = nstGet(gconfigvars_153231, key);
	return result;
}

N_NIMCALL(NimStringDesc*, canondynlibname_154459)(NimStringDesc* s) {
	NimStringDesc* result;
	NI start;
	NI ende;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsuStartsWith(s, ((NimStringDesc*) &TMP1863));
		if (!LOC3) goto LA4;
		start = ((NI) 3);
	}
	goto LA1;
	LA4: ;
	{
		start = ((NI) 0);
	}
	LA1: ;
	ende = nsuFindCharSet(s, TMP1864, ((NI) 0));
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

N_NIMCALL(void, incldynliboverride_154472)(NimStringDesc* lib) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = canondynlibname_154459(lib);
	nstPut(gdlloverrides_153232, LOC1, ((NimStringDesc*) &TMP1865));
}

N_NIMCALL(void, setconfigvar_153350)(NimStringDesc* key, NimStringDesc* val) {
	nstPut(gconfigvars_153231, key, val);
}

N_NIMCALL(NIM_BOOL, isdynliboverride_154481)(NimStringDesc* lib) {
	NIM_BOOL result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = canondynlibname_154459(lib);
	result = nsthasKey(gdlloverrides_153232, LOC1);
	return result;
}

N_NIMCALL(void, libcandidates_154409)(NimStringDesc* s, TY121008** dest) {
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
			NimStringDesc* middle_154419;
			NimStringDesc* HEX3Atmp_154431;
			NI last_154435;
			middle_154419 = 0;
			HEX3Atmp_154431 = 0;
			HEX3Atmp_154431 = copyStrLast(s, (NI)(le + ((NI) 1)), (NI)(ri - ((NI) 1)));
			last_154435 = ((NI) 0);
			{
				if (!(((NI) 0) < (HEX3Atmp_154431 ? HEX3Atmp_154431->Sup.len : 0))) goto LA10;
				{
					while (1) {
						NI first_154437;
						NimStringDesc* LOC18;
						if (!(last_154435 <= (HEX3Atmp_154431 ? HEX3Atmp_154431->Sup.len : 0))) goto LA13;
						first_154437 = last_154435;
						{
							while (1) {
								NIM_BOOL LOC16;
								LOC16 = 0;
								LOC16 = (last_154435 < (HEX3Atmp_154431 ? HEX3Atmp_154431->Sup.len : 0));
								if (!(LOC16)) goto LA17;
								LOC16 = !(((NU8)(HEX3Atmp_154431->data[last_154435]) == (NU8)(124)));
								LA17: ;
								if (!LOC16) goto LA15;
								last_154435 += ((NI) 1);
							} LA15: ;
						}
						middle_154419 = copyStrLast(HEX3Atmp_154431, first_154437, (NI)(last_154435 - ((NI) 1)));
						LOC18 = 0;
						LOC18 = rawNewString(prefix->Sup.len + middle_154419->Sup.len + suffix->Sup.len + 0);
appendString(LOC18, prefix);
appendString(LOC18, middle_154419);
appendString(LOC18, suffix);
						libcandidates_154409(LOC18, dest);
						last_154435 += ((NI) 1);
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
		(*dest) = (TY121008*) incrSeq(&((*dest))->Sup, sizeof(NimStringDesc*));
		LOC20 = 0;
		LOC20 = (*dest)->data[(*dest)->Sup.len-1]; (*dest)->data[(*dest)->Sup.len-1] = copyStringRC1(s);
		if (LOC20) nimGCunrefNoCycle(LOC20);
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, getoutfile_153360)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!(((outfile_153134) && (outfile_153134)->Sup.len == 0))) goto LA3;
		result = copyString(outfile_153134);
	}
	goto LA1;
	LA3: ;
	{
		result = noschangeFileExt(filename, ext);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, maincommandarg_153313)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(((NI) 0) < (commandargs_153259 ? commandargs_153259->Sup.len : 0))) goto LA3;
		result = copyString(commandargs_153259->data[((NI) 0)]);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(gprojectname_153234);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetpackagecache_153605)(void) {
	asgnRef((void**) (&packagecache_153601), nstnewStringTable(((NU8) 1)));
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
	goptions_153126 = 2202238;
	gglobaloptions_153128 = 8388608;
	gcmd_153130 = ((NU8) 0);
	gselectedgc_153131 = ((NU8) 3);
	LOC1 = 0;
	LOC1 = outfile_153134; outfile_153134 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = docseesrcurl_153135; docseesrcurl_153135 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = headerfile_153136; headerfile_153136 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	gverbosity_153137 = ((NI) 1);
	LOC4 = 0;
	LOC4 = gevalexpr_153140; gevalexpr_153140 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC4) nimGCunrefNoCycle(LOC4);
	isserving_153143 = NIM_FALSE;
	gnonimblepath_153144 = NIM_FALSE;
	asgnRef((void**) (&gconfigvars_153231), nstnewStringTable(((NU8) 2)));
	asgnRef((void**) (&gdlloverrides_153232), nstnewStringTable(((NU8) 1)));
	LOC5 = 0;
	LOC5 = libpath_153233; libpath_153233 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC5) nimGCunrefNoCycle(LOC5);
	LOC6 = 0;
	LOC6 = gprojectname_153234; gprojectname_153234 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC6) nimGCunrefNoCycle(LOC6);
	LOC7 = 0;
	LOC7 = gprojectpath_153235; gprojectpath_153235 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC7) nimGCunrefNoCycle(LOC7);
	LOC8 = 0;
	LOC8 = gprojectfull_153236; gprojectfull_153236 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC8) nimGCunrefNoCycle(LOC8);
	LOC9 = 0;
	LOC9 = nimcachedir_153238; nimcachedir_153238 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC9) nimGCunrefNoCycle(LOC9);
	LOC10 = 0;
	LOC10 = command_153239; command_153239 = copyStringRC1(((NimStringDesc*) &TMP39));
	if (LOC10) nimGCunrefNoCycle(LOC10);
	if (commandargs_153259) nimGCunrefNoCycle(commandargs_153259);
	commandargs_153259 = (TY121008*) newSeqRC1((&NTI121008), 0);
	gkeepcomments_153260 = NIM_TRUE;
	if (implicitimports_153280) nimGCunrefNoCycle(implicitimports_153280);
	implicitimports_153280 = (TY121008*) newSeqRC1((&NTI121008), 0);
	if (implicitincludes_153300) nimGCunrefNoCycle(implicitincludes_153300);
	implicitincludes_153300 = (TY121008*) newSeqRC1((&NTI121008), 0);
	asgnRef((void**) (&packagecache_153601), nstnewStringTable(((NU8) 1)));
}

NIM_EXTERNC N_NOINLINE(void, compiler_optionsDatInit)(void) {
static TNimNode* TMP761[22];
NI TMP763;
static char* NIM_CONST TMP762[22] = {
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
static TNimNode TMP21[24];
NTI153014.size = sizeof(NU8);
NTI153014.kind = 14;
NTI153014.base = 0;
NTI153014.flags = 3;
for (TMP763 = 0; TMP763 < 22; TMP763++) {
TMP21[TMP763+0].kind = 1;
TMP21[TMP763+0].offset = TMP763;
TMP21[TMP763+0].name = TMP762[TMP763];
TMP761[TMP763] = &TMP21[TMP763+0];
}
TMP21[22].len = 22; TMP21[22].kind = 2; TMP21[22].sons = &TMP761[0];
NTI153014.node = &TMP21[22];
NTI153016.size = sizeof(NU32);
NTI153016.kind = 19;
NTI153016.base = (&NTI153014);
NTI153016.flags = 3;
TMP21[23].len = 0; TMP21[23].kind = 0;
NTI153016.node = &TMP21[23];
}

