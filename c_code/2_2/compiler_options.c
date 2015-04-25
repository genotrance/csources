/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
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
typedef NimStringDesc* TY164580[1];
typedef NimStringDesc* TY154967[2];
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tstrentry129024  {
  Tlistentry129022 Sup;
NimStringDesc* data;
};
typedef NU8 TY178407[32];
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
N_NIMCALL(NimStringDesc*, getprefixdir_154371)(void);
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
N_NIMCALL(NimStringDesc*, getgeneratedpath_154428)(void);
N_NIMCALL(NimStringDesc*, shortendir_154407)(NimStringDesc* dir);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, noscreateDir)(NimStringDesc* dir);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, writeln_155205)(FILE* f, NimStringDesc** x, NI xLen0);
N_NIMCALL(void, write_13457)(FILE* f, NimStringDesc* s);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, getpackagename_154825)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, findfile_155341)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rawfindfile_155282)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, canonicalizepath_154380)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, rawfindfile2_155308)(NimStringDesc* f);
N_NIMCALL(void, bringtofront_129705)(Tlinkedlist129028* list, Tlistentry129022* entry);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, canondynlibname_155459)(NimStringDesc* s);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, TY178407 chars, NI start);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(void, libcandidates_155409)(NimStringDesc* s, TY121008** dest);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
STRING_LITERAL(TMP41, "", 0);
STRING_LITERAL(TMP1435, "*.nimble", 8);
STRING_LITERAL(TMP1436, "*.babel", 7);
STRING_LITERAL(TMP1437, "nimcache", 8);
STRING_LITERAL(TMP1439, "\012", 1);
STRING_LITERAL(TMP1440, "cannot create directory: ", 25);
STRING_LITERAL(TMP1487, "nim", 3);
STRING_LITERAL(TMP1865, "lib", 3);
static NIM_CONST TY178407 TMP1866 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1867, "true", 4);
NU8 gidecmd_154115;
NU32 goptions_154126;
NU32 gglobaloptions_154128;
NI8 gexitcode_154129;
NU8 gcmd_154130;
NU8 gselectedgc_154131;
Tlinkedlist129028 searchpaths_154132;
Tlinkedlist129028 lazypaths_154133;
NimStringDesc* outfile_154134;
extern Tgcheap48016 gch_48044;
NimStringDesc* docseesrcurl_154135;
NimStringDesc* headerfile_154136;
NI gverbosity_154137;
NI gnumberofprocessors_154138;
NIM_BOOL gwholeproject_154139;
NimStringDesc* gevalexpr_154140;
NF glastcmdtime_154141;
NIM_BOOL glistfullpaths_154142;
NIM_BOOL isserving_154143;
NIM_BOOL gnonimblepath_154144;
NIM_BOOL gexperimentalmode_154145;
Stringtableobj133012* gconfigvars_154231;
Stringtableobj133012* gdlloverrides_154232;
NimStringDesc* libpath_154233;
NimStringDesc* gprojectname_154234;
NimStringDesc* gprojectpath_154235;
NimStringDesc* gprojectfull_154236;
NI32 gprojectmainidx_154237;
NimStringDesc* nimcachedir_154238;
NimStringDesc* command_154239;
TY121008* commandargs_154259;
extern TNimType NTI121008; /* seq[string] */
NIM_BOOL gkeepcomments_154260;
TY121008* implicitimports_154280;
TY121008* implicitincludes_154300;
Stringtableobj133012* packagecache_154601;
TNimType NTI154014; /* TOption */
TNimType NTI154016; /* TOptions */
extern TSafePoint* exchandler_17043;
extern TNimType NTI3433; /* OSError */
extern Exception* currexception_17045;

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

N_NIMCALL(NimStringDesc*, canonicalizepath_154380)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	result = nosexpandFilename(path);
	return result;
}

N_NIMCALL(NimStringDesc*, getprefixdir_154371)(void) {
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

N_NIMCALL(NimStringDesc*, shortendir_154407)(NimStringDesc* dir) {
	NimStringDesc* result;
	NimStringDesc* prefix;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC8;
{	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getprefixdir_154371();
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
	LOC8 = rawNewString(gprojectpath_154235->Sup.len + 1);
appendString(LOC8, gprojectpath_154235);
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

N_NIMCALL(NimStringDesc*, getpackagename_154825)(NimStringDesc* path) {
	NimStringDesc* result;
	NI parents;
{	result = 0;
	parents = ((NI) 0);
	{
		{
			NimStringDesc* d_154831;
			NimStringDesc* current_154888;
			d_154831 = 0;
			current_154888 = copyString(path);
			{
				while (1) {
					current_154888 = nosparentDir(current_154888);
					{
						if (!((current_154888 ? current_154888->Sup.len : 0) == ((NI) 0))) goto LA7;
						goto LA3;
					}
					LA7: ;
					d_154831 = current_154888;
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = nsthasKey(packagecache_154601, d_154831);
						if (!LOC11) goto LA12;
						result = nstGet(packagecache_154601, d_154831);
						goto BeforeRet;
					}
					LA12: ;
					parents += ((NI) 1);
					{
						NimStringDesc* file_154841;
						NimStringDesc* HEX3Atmp_154855;
						glob_t f_154859;
						NI res_154861;
						int LOC15;
						file_154841 = 0;
						HEX3Atmp_154855 = 0;
						HEX3Atmp_154855 = HEX2F_118292(d_154831, ((NimStringDesc*) &TMP1435));
						memset((void*)(&f_154859), 0, sizeof(f_154859));
						res_154861 = 0;
						f_154859.gl_offs = ((NI) 0);
						f_154859.gl_pathc = ((NI) 0);
						f_154859.gl_pathv = NIM_NIL;
						LOC15 = 0;
						LOC15 = glob(HEX3Atmp_154855->data, ((int) 0), NIM_NIL, (&f_154859));
						res_154861 = ((NI) (LOC15));
						{
							if (!(res_154861 == ((NI) 0))) goto LA18;
							{
								NI i_154863;
								NI HEX3Atmp_154865;
								NI res_154867;
								i_154863 = 0;
								HEX3Atmp_154865 = 0;
								HEX3Atmp_154865 = (NI)(f_154859.gl_pathc - ((NI) 1));
								res_154867 = ((NI) 0);
								{
									while (1) {
										TY118589 LOC23;
										if (!(res_154867 <= HEX3Atmp_154865)) goto LA22;
										i_154863 = res_154867;
										file_154841 = cstrToNimstr(f_154859.gl_pathv[(i_154863)- 0]);
										memset((void*)(&LOC23), 0, sizeof(LOC23));
										nossplitFile(file_154841, (&LOC23));
										result = copyString(LOC23.Field1);
										goto LA1;
										res_154867 += ((NI) 1);
									} LA22: ;
								}
							}
						}
						LA18: ;
						globfree((&f_154859));
					}
					{
						NimStringDesc* file_154842;
						NimStringDesc* HEX3Atmp_154871;
						glob_t f_154875;
						NI res_154877;
						int LOC25;
						file_154842 = 0;
						HEX3Atmp_154871 = 0;
						HEX3Atmp_154871 = HEX2F_118292(d_154831, ((NimStringDesc*) &TMP1436));
						memset((void*)(&f_154875), 0, sizeof(f_154875));
						res_154877 = 0;
						f_154875.gl_offs = ((NI) 0);
						f_154875.gl_pathc = ((NI) 0);
						f_154875.gl_pathv = NIM_NIL;
						LOC25 = 0;
						LOC25 = glob(HEX3Atmp_154871->data, ((int) 0), NIM_NIL, (&f_154875));
						res_154877 = ((NI) (LOC25));
						{
							if (!(res_154877 == ((NI) 0))) goto LA28;
							{
								NI i_154879;
								NI HEX3Atmp_154881;
								NI res_154883;
								i_154879 = 0;
								HEX3Atmp_154881 = 0;
								HEX3Atmp_154881 = (NI)(f_154875.gl_pathc - ((NI) 1));
								res_154883 = ((NI) 0);
								{
									while (1) {
										TY118589 LOC33;
										if (!(res_154883 <= HEX3Atmp_154881)) goto LA32;
										i_154879 = res_154883;
										file_154842 = cstrToNimstr(f_154875.gl_pathv[(i_154879)- 0]);
										memset((void*)(&LOC33), 0, sizeof(LOC33));
										nossplitFile(file_154842, (&LOC33));
										result = copyString(LOC33.Field1);
										goto LA1;
										res_154883 += ((NI) 1);
									} LA32: ;
								}
							}
						}
						LA28: ;
						globfree((&f_154875));
					}
				}
			} LA3: ;
		}
	} LA1: ;
	{
		if (!result == 0) goto LA36;
		result = copyString(((NimStringDesc*) &TMP41));
	}
	LA36: ;
	{
		NimStringDesc* d_154843;
		NimStringDesc* current_154892;
		d_154843 = 0;
		current_154892 = copyString(path);
		{
			while (1) {
				current_154892 = nosparentDir(current_154892);
				{
					if (!((current_154892 ? current_154892->Sup.len : 0) == ((NI) 0))) goto LA43;
					goto LA39;
				}
				LA43: ;
				d_154843 = current_154892;
				nstPut(packagecache_154601, d_154843, result);
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

N_NIMCALL(NimStringDesc*, getgeneratedpath_154428)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(((NI) 0) < (nimcachedir_154238 ? nimcachedir_154238->Sup.len : 0))) goto LA3;
		result = copyString(nimcachedir_154238);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		LOC6 = 0;
		LOC6 = shortendir_154407(gprojectpath_154235);
		result = HEX2F_118292(LOC6, ((NimStringDesc*) &TMP1437));
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

static N_INLINE(void, writeln_155205)(FILE* f, NimStringDesc** x, NI xLen0) {
	{
		NimStringDesc* i_155221;
		NI i_155229;
		i_155221 = 0;
		i_155229 = ((NI) 0);
		{
			while (1) {
				if (!(i_155229 < xLen0)) goto LA3;
				i_155221 = x[i_155229];
				write_13457(f, i_155221);
				i_155229 += ((NI) 1);
			} LA3: ;
		}
	}
	write_13457(f, ((NimStringDesc*) &TMP1439));
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(NimStringDesc*, completegeneratedfilepath_155001)(NimStringDesc* f, NIM_BOOL createsubdir) {
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
	subdir = getgeneratedpath_154428();
	{
		TSafePoint TMP1438;
		if (!createsubdir) goto LA4;
		pushSafePoint(&TMP1438);
		TMP1438.status = setjmp(TMP1438.context);
		if (TMP1438.status == 0) {
			noscreateDir(subdir);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
				TY164580 LOC9;
				NimStringDesc* LOC10;
				TMP1438.status = 0;
				memset((void*)LOC9, 0, sizeof(LOC9));
				LOC10 = 0;
				LOC10 = rawNewString(subdir->Sup.len + 25);
appendString(LOC10, ((NimStringDesc*) &TMP1440));
appendString(LOC10, subdir);
				LOC9[0] = LOC10;
				writeln_155205(stdout, LOC9, 1);
				exit(((NI) 1));
				popCurrentException();
			}
		}
		if (TMP1438.status != 0) reraiseException();
	}
	LA4: ;
	result = nosjoinPath(subdir, tail);
	return result;
}

N_NIMCALL(NimStringDesc*, togeneratedfile_154958)(NimStringDesc* path, NimStringDesc* ext) {
	NimStringDesc* result;
	Keyvaluepair133008 LOC1;
	NimStringDesc* head;
	NimStringDesc* tail;
	TY154967 LOC2;
	result = 0;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitPath(path, (&LOC1));
	head = 0;
	head = copyString(LOC1.Field0);
	tail = 0;
	tail = copyString(LOC1.Field1);
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = getgeneratedpath_154428();
	LOC2[1] = noschangeFileExt(tail, ext);
	result = nosjoinPathOpenArray(LOC2, 2);
	return result;
}

N_NIMCALL(NimStringDesc*, withpackagename_154944)(NimStringDesc* path) {
	NimStringDesc* result;
	NimStringDesc* x;
	result = 0;
	x = getpackagename_154825(path);
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

N_NIMCALL(NimStringDesc*, rawfindfile_155282)(NimStringDesc* f) {
	NimStringDesc* result;
{	result = 0;
	{
		NimStringDesc* it_155286;
		Tstrentry129024* it_155292;
		it_155286 = 0;
		it_155292 = ((Tstrentry129024*) (searchpaths_154132.head));
		{
			while (1) {
				if (!!((it_155292 == NIM_NIL))) goto LA3;
				it_155286 = (*it_155292).data;
				result = nosjoinPath(it_155286, f);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = nosexistsFile(result);
					if (!LOC6) goto LA7;
					result = canonicalizepath_154380(result);
					goto BeforeRet;
				}
				LA7: ;
				it_155292 = ((Tstrentry129024*) ((*it_155292).Sup.next));
			} LA3: ;
		}
	}
	result = copyString(((NimStringDesc*) &TMP41));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile2_155308)(NimStringDesc* f) {
	NimStringDesc* result;
	Tstrentry129024* it;
{	result = 0;
	it = ((Tstrentry129024*) (lazypaths_154133.head));
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
				bringtofront_129705((&lazypaths_154133), LOC8);
				result = canonicalizepath_154380(result);
				goto BeforeRet;
			}
			LA6: ;
			it = ((Tstrentry129024*) ((*it).Sup.next));
		} LA2: ;
	}
	result = copyString(((NimStringDesc*) &TMP41));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findfile_155341)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = rawfindfile_155282(f);
	{
		NimStringDesc* LOC5;
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = nsuToLowerStr(f);
		result = rawfindfile_155282(LOC5);
		{
			if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA8;
			result = rawfindfile2_155308(f);
			{
				NimStringDesc* LOC14;
				if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA12;
				LOC14 = 0;
				LOC14 = nsuToLowerStr(f);
				result = rawfindfile2_155308(LOC14);
			}
			LA12: ;
		}
		LA8: ;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findmodule_155351)(NimStringDesc* modulename, NimStringDesc* currentmodule) {
	NimStringDesc* result;
	NimStringDesc* m;
	NimStringDesc* currentpath;
	TY118589 LOC1;
	result = 0;
	m = nosaddFileExt(modulename, ((NimStringDesc*) &TMP1487));
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(currentmodule, (&LOC1));
	currentpath = LOC1.Field0;
	result = HEX2F_118292(currentpath, m);
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		result = findfile_155341(m);
	}
	LA5: ;
	return result;
}

N_NIMCALL(NimStringDesc*, removetrailingdirsep_154418)(NimStringDesc* path) {
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

N_NIMCALL(NIM_BOOL, existsconfigvar_154330)(NimStringDesc* key) {
	NIM_BOOL result;
	result = 0;
	result = nsthasKey(gconfigvars_154231, key);
	return result;
}

N_NIMCALL(NimStringDesc*, getconfigvar_154340)(NimStringDesc* key) {
	NimStringDesc* result;
	result = 0;
	result = nstGet(gconfigvars_154231, key);
	return result;
}

N_NIMCALL(NimStringDesc*, canondynlibname_155459)(NimStringDesc* s) {
	NimStringDesc* result;
	NI start;
	NI ende;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsuStartsWith(s, ((NimStringDesc*) &TMP1865));
		if (!LOC3) goto LA4;
		start = ((NI) 3);
	}
	goto LA1;
	LA4: ;
	{
		start = ((NI) 0);
	}
	LA1: ;
	ende = nsuFindCharSet(s, TMP1866, ((NI) 0));
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

N_NIMCALL(void, incldynliboverride_155472)(NimStringDesc* lib) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = canondynlibname_155459(lib);
	nstPut(gdlloverrides_154232, LOC1, ((NimStringDesc*) &TMP1867));
}

N_NIMCALL(void, setconfigvar_154350)(NimStringDesc* key, NimStringDesc* val) {
	nstPut(gconfigvars_154231, key, val);
}

N_NIMCALL(NIM_BOOL, isdynliboverride_155481)(NimStringDesc* lib) {
	NIM_BOOL result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = canondynlibname_155459(lib);
	result = nsthasKey(gdlloverrides_154232, LOC1);
	return result;
}

N_NIMCALL(void, libcandidates_155409)(NimStringDesc* s, TY121008** dest) {
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
			NimStringDesc* middle_155419;
			NimStringDesc* HEX3Atmp_155431;
			NI last_155435;
			middle_155419 = 0;
			HEX3Atmp_155431 = 0;
			HEX3Atmp_155431 = copyStrLast(s, (NI)(le + ((NI) 1)), (NI)(ri - ((NI) 1)));
			last_155435 = ((NI) 0);
			{
				if (!(((NI) 0) < (HEX3Atmp_155431 ? HEX3Atmp_155431->Sup.len : 0))) goto LA10;
				{
					while (1) {
						NI first_155437;
						NimStringDesc* LOC18;
						if (!(last_155435 <= (HEX3Atmp_155431 ? HEX3Atmp_155431->Sup.len : 0))) goto LA13;
						first_155437 = last_155435;
						{
							while (1) {
								NIM_BOOL LOC16;
								LOC16 = 0;
								LOC16 = (last_155435 < (HEX3Atmp_155431 ? HEX3Atmp_155431->Sup.len : 0));
								if (!(LOC16)) goto LA17;
								LOC16 = !(((NU8)(HEX3Atmp_155431->data[last_155435]) == (NU8)(124)));
								LA17: ;
								if (!LOC16) goto LA15;
								last_155435 += ((NI) 1);
							} LA15: ;
						}
						middle_155419 = copyStrLast(HEX3Atmp_155431, first_155437, (NI)(last_155435 - ((NI) 1)));
						LOC18 = 0;
						LOC18 = rawNewString(prefix->Sup.len + middle_155419->Sup.len + suffix->Sup.len + 0);
appendString(LOC18, prefix);
appendString(LOC18, middle_155419);
appendString(LOC18, suffix);
						libcandidates_155409(LOC18, dest);
						last_155435 += ((NI) 1);
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

N_NIMCALL(NimStringDesc*, getoutfile_154360)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!(((outfile_154134) && (outfile_154134)->Sup.len == 0))) goto LA3;
		result = copyString(outfile_154134);
	}
	goto LA1;
	LA3: ;
	{
		result = noschangeFileExt(filename, ext);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, maincommandarg_154313)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(((NI) 0) < (commandargs_154259 ? commandargs_154259->Sup.len : 0))) goto LA3;
		result = copyString(commandargs_154259->data[((NI) 0)]);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(gprojectname_154234);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetpackagecache_154605)(void) {
	asgnRef((void**) (&packagecache_154601), nstnewStringTable(((NU8) 1)));
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
	goptions_154126 = 2202238;
	gglobaloptions_154128 = 8388608;
	gcmd_154130 = ((NU8) 0);
	gselectedgc_154131 = ((NU8) 3);
	LOC1 = 0;
	LOC1 = outfile_154134; outfile_154134 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = docseesrcurl_154135; docseesrcurl_154135 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = headerfile_154136; headerfile_154136 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	gverbosity_154137 = ((NI) 1);
	LOC4 = 0;
	LOC4 = gevalexpr_154140; gevalexpr_154140 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC4) nimGCunrefNoCycle(LOC4);
	isserving_154143 = NIM_FALSE;
	gnonimblepath_154144 = NIM_FALSE;
	asgnRef((void**) (&gconfigvars_154231), nstnewStringTable(((NU8) 2)));
	asgnRef((void**) (&gdlloverrides_154232), nstnewStringTable(((NU8) 1)));
	LOC5 = 0;
	LOC5 = libpath_154233; libpath_154233 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC5) nimGCunrefNoCycle(LOC5);
	LOC6 = 0;
	LOC6 = gprojectname_154234; gprojectname_154234 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC6) nimGCunrefNoCycle(LOC6);
	LOC7 = 0;
	LOC7 = gprojectpath_154235; gprojectpath_154235 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC7) nimGCunrefNoCycle(LOC7);
	LOC8 = 0;
	LOC8 = gprojectfull_154236; gprojectfull_154236 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC8) nimGCunrefNoCycle(LOC8);
	LOC9 = 0;
	LOC9 = nimcachedir_154238; nimcachedir_154238 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC9) nimGCunrefNoCycle(LOC9);
	LOC10 = 0;
	LOC10 = command_154239; command_154239 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC10) nimGCunrefNoCycle(LOC10);
	if (commandargs_154259) nimGCunrefNoCycle(commandargs_154259);
	commandargs_154259 = (TY121008*) newSeqRC1((&NTI121008), 0);
	gkeepcomments_154260 = NIM_TRUE;
	if (implicitimports_154280) nimGCunrefNoCycle(implicitimports_154280);
	implicitimports_154280 = (TY121008*) newSeqRC1((&NTI121008), 0);
	if (implicitincludes_154300) nimGCunrefNoCycle(implicitincludes_154300);
	implicitincludes_154300 = (TY121008*) newSeqRC1((&NTI121008), 0);
	asgnRef((void**) (&packagecache_154601), nstnewStringTable(((NU8) 1)));
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
static TNimNode TMP21[24];
NTI154014.size = sizeof(NU8);
NTI154014.kind = 14;
NTI154014.base = 0;
NTI154014.flags = 3;
for (TMP765 = 0; TMP765 < 22; TMP765++) {
TMP21[TMP765+0].kind = 1;
TMP21[TMP765+0].offset = TMP765;
TMP21[TMP765+0].name = TMP764[TMP765];
TMP763[TMP765] = &TMP21[TMP765+0];
}
TMP21[22].len = 22; TMP21[22].kind = 2; TMP21[22].sons = &TMP763[0];
NTI154014.node = &TMP21[22];
NTI154016.size = sizeof(NU32);
NTI154016.kind = 19;
NTI154016.base = (&NTI154014);
NTI154016.flags = 3;
TMP21[23].len = 0; TMP21[23].kind = 0;
NTI154016.node = &TMP21[23];
}

