/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct Tcell46346 Tcell46346;
typedef struct Tcellseq46362 Tcellseq46362;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46358 Tcellset46358;
typedef struct Tpagedesc46354 Tpagedesc46354;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct TY119789 TY119789;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
} TY15809;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15809 raiseAction;
};
struct  Tcell46346  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46362  {
NI len;
NI cap;
Tcell46346** d;
};
struct  Tcellset46358  {
NI counter;
NI max;
Tpagedesc46354* head;
Tpagedesc46354** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46362 zct;
Tcellseq46362 decstack;
Tcellset46358 cycleroots;
Tcellseq46362 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY119789 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NI TY27420[8];
struct  Tpagedesc46354  {
Tpagedesc46354* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
N_NIMCALL(void, Gcdisablemarkandsweep_8819)(void);
N_NIMCALL(void, initdefines_168254)(void);
N_NIMCALL(void, handlecmdline_528607)(void);
N_NIMCALL(NI, paramcount_126030)(void);
N_NIMCALL(void, writecommandlineusage_176020)(void);
N_NIMCALL(void, processcmdline_522209)(NU8 pass, NimStringDesc* cmd);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, canonicalizepath_154380)(NimStringDesc* path);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46346* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46346* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46346* c);
N_NOINLINE(void, incl_47065)(Tcellset46358* s, Tcell46346* cell);
static N_INLINE(void, decref_51804)(Tcell46346* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY119789* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(void, loadconfigs_186811)(NimStringDesc* cfg);
N_NIMCALL(void, initvars_170876)(void);
N_NIMCALL(void, maincommand_525628)(void);
N_NIMCALL(NimStringDesc*, Gcgetstatistics_8821)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, prependcurdir_528401)(NimStringDesc* f);
N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, completecfilepath_170912)(NimStringDesc* cfile, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, execexternalprogram_170985)(NimStringDesc* cmd, NimStringDesc* prettycmd);
N_NIMCALL(NimStringDesc*, findnodejs_527009)(void);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(void, msgquit_164112)(NI8 x);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
NIM_EXTERNC N_NOINLINE(void, systemInit)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_testabilityInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_testabilityDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_listsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_listsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_optionsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_optionsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_platformInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ropesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ropesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_msgsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_msgsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nversionInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nversionDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_identsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_identsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_crcInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_crcDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_extccompInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_extccompDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_commandsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_commandsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lexerInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lexerDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_astInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_astDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_astalgoInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_astalgoDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_parserInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_parserDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pbracesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pbracesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rendererInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rendererDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_typesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_typesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodreadInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodreadDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_magicsysInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_magicsysDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_treetabInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_treetabDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semdataInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semdataDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lookupsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lookupsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_importerInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_importerDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodwriteInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_rodwriteDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_saturateInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_saturateDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semfoldInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semfoldDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pragmasInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pragmasDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semtypinstInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semtypinstDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_prettyInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_prettyDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_highliteInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_highliteDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_guardsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_guardsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_sempass2Init)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_sempass2DatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_typesrendererDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_docgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_docgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_sigmatchInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_sigmatchDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgmethInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgmethDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_loweringsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_loweringsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lambdaliftingInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_lambdaliftingDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_transfInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_transfDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmmarshalInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmmarshalDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_vmDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_patternsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_patternsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semparallelInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semparallelDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pluginsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_pluginsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_activeInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_activeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_semDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ccgutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ccgmergeInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_ccgmergeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_cgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_jsgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_jsgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_passauxInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_passauxDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_dependsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_dependsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_rawsocketsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_mainInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_mainDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nodejsInit)(void);
NIM_EXTERNC N_NOINLINE(void, compiler_nodejsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimDatInit)(void);
STRING_LITERAL(TMP1867, "", 0);
STRING_LITERAL(TMP1896, "nim.cfg", 7);
STRING_LITERAL(TMP5021, "-", 1);
STRING_LITERAL(TMP5022, "stdinfile", 9);
STRING_LITERAL(TMP5023, "./", 2);
STRING_LITERAL(TMP5024, "js", 2);
STRING_LITERAL(TMP5028, " ", 1);
extern NimStringDesc* gprojectname_154234;
extern TSafePoint* exchandler_17243;
extern NimStringDesc* gprojectfull_154236;
extern Tgcheap48216 gch_48244;
extern TNimType NTI3433; /* OSError */
extern Exception* currexception_17245;
extern NimStringDesc* gprojectpath_154235;
extern NI gverbosity_154137;
extern NI gerrorcounter_164016;
extern NU32 gglobaloptions_154128;
extern NU8 gcmd_154130;
extern NimStringDesc* outfile_154134;
extern NimStringDesc* arguments_177723;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17243;
	exchandler_17243 = s;
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17243 = (*exchandler_17243).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_17245;
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46346* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46346* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50623)(Tcell46346* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47065((&gch_48244.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52222)(Tcell46346* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50623(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51804)(Tcell46346* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49867(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50623(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46346* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49846(src);
		incref_52222(LOC5);
	}
	LA3: ;
	{
		Tcell46346* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49846((*dest));
		decref_51804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17245), (*currexception_17245).parent);
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, prependcurdir_528401)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nosisAbsolute(f);
		if (!LOC3) goto LA4;
		result = copyString(f);
	}
	goto LA1;
	LA4: ;
	{
		NimStringDesc* LOC7;
		LOC7 = 0;
		LOC7 = rawNewString(f->Sup.len + 2);
appendString(LOC7, ((NimStringDesc*) &TMP5023));
appendString(LOC7, f);
		result = LOC7;
	}
	LA1: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, handlecmdline_528607)(void) {
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = paramcount_126030();
		if (!(LOC3 == ((NI) 0))) goto LA4;
		writecommandlineusage_176020();
	}
	goto LA1;
	LA4: ;
	{
		processcmdline_522209(((NU8) 0), ((NimStringDesc*) &TMP1867));
		{
			TSafePoint TMP1868;
			TY119789 p;
			NimStringDesc* LOC15;
			NimStringDesc* LOC16;
			if (!!(((gprojectname_154234) && (gprojectname_154234)->Sup.len == 0))) goto LA9;
			pushSafePoint(&TMP1868);
			TMP1868.status = _setjmp(TMP1868.context);
			if (TMP1868.status == 0) {
				asgnRefNoCycle((void**) (&gprojectfull_154236), canonicalizepath_154380(gprojectname_154234));
				popSafePoint();
			}
			else {
				popSafePoint();
				if (isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
					NimStringDesc* LOC14;
					TMP1868.status = 0;
					LOC14 = 0;
					LOC14 = gprojectfull_154236; gprojectfull_154236 = copyStringRC1(gprojectname_154234);
					if (LOC14) nimGCunrefNoCycle(LOC14);
					popCurrentException();
				}
			}
			if (TMP1868.status != 0) reraiseException();
			memset((void*)(&p), 0, sizeof(p));
			chckNil((void*)(&p));
			memset((void*)(&p), 0, sizeof(p));
			nossplitFile(gprojectfull_154236, (&p));
			LOC15 = 0;
			LOC15 = gprojectpath_154235; gprojectpath_154235 = copyStringRC1(p.Field0);
			if (LOC15) nimGCunrefNoCycle(LOC15);
			LOC16 = 0;
			LOC16 = gprojectname_154234; gprojectname_154234 = copyStringRC1(p.Field1);
			if (LOC16) nimGCunrefNoCycle(LOC16);
		}
		goto LA7;
		LA9: ;
		{
			asgnRefNoCycle((void**) (&gprojectpath_154235), nosgetCurrentDir());
		}
		LA7: ;
		loadconfigs_186811(((NimStringDesc*) &TMP1896));
		initvars_170876();
		processcmdline_522209(((NU8) 1), ((NimStringDesc*) &TMP1867));
		maincommand_525628();
		{
			NimStringDesc* LOC22;
			if (!(((NI) 2) <= gverbosity_154137)) goto LA20;
			LOC22 = 0;
			LOC22 = Gcgetstatistics_8821();
			printf("%s\012", LOC22? (LOC22)->data:"nil");
		}
		LA20: ;
		{
			if (!(gerrorcounter_164016 == ((NI) 0))) goto LA25;
			{
				if (!((gglobaloptions_154128 &(1<<((((NU8) 13))&31)))!=0)) goto LA29;
				{
					NimStringDesc* LOC35;
					if (!eqStrings(gprojectname_154234, ((NimStringDesc*) &TMP5021))) goto LA33;
					LOC35 = 0;
					LOC35 = gprojectfull_154236; gprojectfull_154236 = copyStringRC1(((NimStringDesc*) &TMP5022));
					if (LOC35) nimGCunrefNoCycle(LOC35);
				}
				LA33: ;
				{
					NimStringDesc* ex;
					NimStringDesc* LOC49;
					NimStringDesc* LOC50;
					if (!(gcmd_154130 == ((NU8) 4))) goto LA38;
					ex = 0;
					{
						NimStringDesc* LOC44;
						if (!(((NI) 0) < (outfile_154134 ? outfile_154134->Sup.len : 0))) goto LA42;
						LOC44 = 0;
						LOC44 = prependcurdir_528401(outfile_154134);
						ex = nospquoteShell(LOC44);
					}
					goto LA40;
					LA42: ;
					{
						NimStringDesc* LOC46;
						NimStringDesc* LOC47;
						NimStringDesc* LOC48;
						LOC46 = 0;
						LOC46 = noschangeFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP5024));
						LOC47 = 0;
						LOC47 = prependcurdir_528401(LOC46);
						LOC48 = 0;
						LOC48 = completecfilepath_170912(LOC47, NIM_TRUE);
						ex = nospquoteShell(LOC48);
					}
					LA40: ;
					LOC49 = 0;
					LOC50 = 0;
					LOC50 = findnodejs_527009();
					LOC49 = rawNewString(LOC50->Sup.len + ex->Sup.len + arguments_177723->Sup.len + 2);
appendString(LOC49, LOC50);
appendString(LOC49, ((NimStringDesc*) &TMP5028));
appendString(LOC49, ex);
appendChar(LOC49, 32);
appendString(LOC49, arguments_177723);
					execexternalprogram_170985(LOC49, ((NimStringDesc*) &TMP1867));
				}
				goto LA36;
				LA38: ;
				{
					NimStringDesc* binpath;
					NimStringDesc* ex;
					NimStringDesc* LOC58;
					binpath = 0;
					{
						if (!(((NI) 0) < (outfile_154134 ? outfile_154134->Sup.len : 0))) goto LA54;
						binpath = prependcurdir_528401(outfile_154134);
					}
					goto LA52;
					LA54: ;
					{
						NimStringDesc* LOC57;
						LOC57 = 0;
						LOC57 = noschangeFileExt(gprojectfull_154236, ((NimStringDesc*) &TMP1867));
						binpath = prependcurdir_528401(LOC57);
					}
					LA52: ;
					ex = nospquoteShell(binpath);
					LOC58 = 0;
					LOC58 = rawNewString(ex->Sup.len + arguments_177723->Sup.len + 1);
appendString(LOC58, ex);
appendChar(LOC58, 32);
appendString(LOC58, arguments_177723);
					execexternalprogram_170985(LOC58, ((NimStringDesc*) &TMP1867));
				}
				LA36: ;
			}
			LA29: ;
		}
		LA25: ;
	}
	LA1: ;
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner() {
	systemInit();
	compiler_testabilityDatInit();
	stdlib_parseutilsDatInit();
	stdlib_strutilsDatInit();
	stdlib_timesDatInit();
	stdlib_posixDatInit();
	stdlib_osDatInit();
	compiler_listsDatInit();
	stdlib_hashesDatInit();
	stdlib_strtabsDatInit();
	stdlib_streamsDatInit();
	stdlib_cpuinfoDatInit();
	stdlib_osprocDatInit();
	stdlib_mathDatInit();
	stdlib_setsDatInit();
	compiler_optionsDatInit();
	stdlib_tablesDatInit();
	compiler_platformDatInit();
	compiler_ropesDatInit();
	compiler_msgsDatInit();
	compiler_nversionDatInit();
	compiler_identsDatInit();
	compiler_condsymsDatInit();
	compiler_crcDatInit();
	compiler_extccompDatInit();
	compiler_wordrecgDatInit();
	compiler_nimblecmdDatInit();
	stdlib_parseoptDatInit();
	compiler_commandsDatInit();
	compiler_llstreamDatInit();
	compiler_nimlexbaseDatInit();
	compiler_lexerDatInit();
	compiler_nimconfDatInit();
	stdlib_intsetsDatInit();
	compiler_idgenDatInit();
	compiler_astDatInit();
	compiler_rodutilsDatInit();
	compiler_astalgoDatInit();
	compiler_parserDatInit();
	compiler_pbracesDatInit();
	compiler_rendererDatInit();
	compiler_filtersDatInit();
	compiler_filter_tmplDatInit();
	compiler_syntaxesDatInit();
	compiler_treesDatInit();
	compiler_typesDatInit();
	stdlib_memfilesDatInit();
	compiler_rodreadDatInit();
	compiler_magicsysDatInit();
	compiler_bitsetsDatInit();
	compiler_nimsetsDatInit();
	compiler_passesDatInit();
	compiler_treetabDatInit();
	compiler_vmdefDatInit();
	compiler_semdataDatInit();
	stdlib_lexbaseDatInit();
	compiler_prettybaseDatInit();
	compiler_lookupsDatInit();
	compiler_importerDatInit();
	compiler_rodwriteDatInit();
	compiler_saturateDatInit();
	compiler_semfoldDatInit();
	compiler_procfindDatInit();
	compiler_pragmasDatInit();
	compiler_semtypinstDatInit();
	compiler_parampatternsDatInit();
	compiler_prettyDatInit();
	stdlib_unicodeDatInit();
	stdlib_macrosDatInit();
	stdlib_jsonDatInit();
	docutils_rstastDatInit();
	docutils_rstDatInit();
	docutils_highliteDatInit();
	stdlib_sequtilsDatInit();
	stdlib_algorithmDatInit();
	docutils_rstgenDatInit();
	compiler_guardsDatInit();
	compiler_sempass2DatInit();
	stdlib_xmltreeDatInit();
	stdlib_cookiesDatInit();
	stdlib_cgiDatInit();
	compiler_typesrendererDatInit();
	compiler_docgenDatInit();
	compiler_sigmatchDatInit();
	compiler_cgmethDatInit();
	compiler_loweringsDatInit();
	compiler_lambdaliftingDatInit();
	compiler_transfDatInit();
	stdlib_unsignedDatInit();
	compiler_vmgenDatInit();
	compiler_vmdepsDatInit();
	compiler_vmmarshalDatInit();
	compiler_evaltemplDatInit();
	compiler_vmDatInit();
	compiler_aliasesDatInit();
	compiler_patternsDatInit();
	compiler_semmacrosanityDatInit();
	compiler_semparallelDatInit();
	compiler_pluginsDatInit();
	compiler_localsDatInit();
	compiler_activeDatInit();
	compiler_semDatInit();
	compiler_ccgutilsDatInit();
	compiler_cgendataDatInit();
	compiler_ccgmergeDatInit();
	compiler_cgenDatInit();
	compiler_jsgenDatInit();
	compiler_passauxDatInit();
	compiler_dependsDatInit();
	compiler_docgen2DatInit();
	stdlib_rawsocketsDatInit();
	stdlib_netDatInit();
	compiler_serviceDatInit();
	compiler_modulesDatInit();
	compiler_mainDatInit();
	compiler_nodejsDatInit();
	nimDatInit();
	compiler_testabilityInit();
	stdlib_parseutilsInit();
	stdlib_strutilsInit();
	stdlib_timesInit();
	stdlib_posixInit();
	stdlib_osInit();
	compiler_listsInit();
	stdlib_hashesInit();
	stdlib_strtabsInit();
	stdlib_streamsInit();
	stdlib_cpuinfoInit();
	stdlib_osprocInit();
	stdlib_mathInit();
	stdlib_setsInit();
	compiler_optionsInit();
	stdlib_tablesInit();
	compiler_platformInit();
	compiler_ropesInit();
	compiler_msgsInit();
	compiler_nversionInit();
	compiler_identsInit();
	compiler_condsymsInit();
	compiler_crcInit();
	compiler_extccompInit();
	compiler_wordrecgInit();
	compiler_nimblecmdInit();
	stdlib_parseoptInit();
	compiler_commandsInit();
	compiler_llstreamInit();
	compiler_nimlexbaseInit();
	compiler_lexerInit();
	compiler_nimconfInit();
	stdlib_intsetsInit();
	compiler_idgenInit();
	compiler_astInit();
	compiler_rodutilsInit();
	compiler_astalgoInit();
	compiler_parserInit();
	compiler_pbracesInit();
	compiler_rendererInit();
	compiler_filtersInit();
	compiler_filter_tmplInit();
	compiler_syntaxesInit();
	compiler_treesInit();
	compiler_typesInit();
	stdlib_memfilesInit();
	compiler_rodreadInit();
	compiler_magicsysInit();
	compiler_bitsetsInit();
	compiler_nimsetsInit();
	compiler_passesInit();
	compiler_treetabInit();
	compiler_vmdefInit();
	compiler_semdataInit();
	stdlib_lexbaseInit();
	compiler_prettybaseInit();
	compiler_lookupsInit();
	compiler_importerInit();
	compiler_rodwriteInit();
	compiler_saturateInit();
	compiler_semfoldInit();
	compiler_procfindInit();
	compiler_pragmasInit();
	compiler_semtypinstInit();
	compiler_parampatternsInit();
	compiler_prettyInit();
	stdlib_unicodeInit();
	stdlib_macrosInit();
	stdlib_jsonInit();
	docutils_rstastInit();
	docutils_rstInit();
	docutils_highliteInit();
	stdlib_sequtilsInit();
	stdlib_algorithmInit();
	docutils_rstgenInit();
	compiler_guardsInit();
	compiler_sempass2Init();
	stdlib_xmltreeInit();
	stdlib_cookiesInit();
	stdlib_cgiInit();
	compiler_typesrendererInit();
	compiler_docgenInit();
	compiler_sigmatchInit();
	compiler_cgmethInit();
	compiler_loweringsInit();
	compiler_lambdaliftingInit();
	compiler_transfInit();
	stdlib_unsignedInit();
	compiler_vmgenInit();
	compiler_vmdepsInit();
	compiler_vmmarshalInit();
	compiler_evaltemplInit();
	compiler_vmInit();
	compiler_aliasesInit();
	compiler_patternsInit();
	compiler_semmacrosanityInit();
	compiler_semparallelInit();
	compiler_pluginsInit();
	compiler_localsInit();
	compiler_activeInit();
	compiler_semInit();
	compiler_ccgutilsInit();
	compiler_cgendataInit();
	compiler_ccgmergeInit();
	compiler_cgenInit();
	compiler_jsgenInit();
	compiler_passauxInit();
	compiler_dependsInit();
	compiler_docgen2Init();
	stdlib_rawsocketsInit();
	stdlib_netInit();
	compiler_serviceInit();
	compiler_modulesInit();
	compiler_mainInit();
	compiler_nodejsInit();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	nimInit();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, nimInit)(void) {
	Gcdisablemarkandsweep_8819();
	initdefines_168254();
	handlecmdline_528607();
	msgquit_164112(((NI8) ((((NI) 0) < gerrorcounter_164016))));
}

NIM_EXTERNC N_NOINLINE(void, nimDatInit)(void) {
}
