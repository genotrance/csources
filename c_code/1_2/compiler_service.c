/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include "winsock2.h"
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
typedef struct Optparser176011 Optparser176011;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY523428 TY523428;
typedef struct Socketimpl515407 Socketimpl515407;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Optparser176011  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
NU8 kind;
NimStringDesc* key;
NimStringDesc* val;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY220714[1];
typedef N_NIMCALL_PTR(void, TY523259) (void);
struct  TY523428  {
NI HEX3Astate;
Socketimpl515407* stdoutsocket523408;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NimStringDesc* output, void* ClEnv);
void* ClEnv;
} TY165060;
typedef NI TY27220[8];
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
typedef NIM_CHAR TY515420[4001];
struct  Socketimpl515407  {
NI fd;
NIM_BOOL isbuffered;
union{
struct {TY515420 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(void, initoptparser_176030)(NimStringDesc* cmdline, Optparser176011* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(Optparser176011* p);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, processargument_178740)(NU8 pass, Optparser176011* p, NI* argscount);
N_NIMCALL(void, processswitch_178727)(NU8 pass, Optparser176011* p);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_165898)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4986)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, getconfigvar_155340)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, readline_13478)(FILE* f);
N_NIMCALL(void, processcmdline_523209)(NU8 pass, NimStringDesc* cmd);
N_NIMCALL(Socketimpl515407*, newsocket_515830)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, bindaddr_516619)(Socketimpl515407* socket, NU16 port, NimStringDesc* address);
N_NIMCALL(void, listen_516609)(Socketimpl515407* socket, int backlog);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_CLOSURE(void, HEX3Aanonymous_523409)(NimStringDesc* line, void* ClEnv);
N_NIMCALL(void, send_520007)(Socketimpl515407* socket, NimStringDesc* data, NU8 flags);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(Tcell46146* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(Tcell46146* c);
static N_INLINE(void, rtladdcycleroot_50423)(Tcell46146* c);
N_NOINLINE(void, incl_46865)(Tcellset46158* s, Tcell46146* cell);
static N_INLINE(void, decref_51604)(Tcell46146* c);
N_NIMCALL(void, accept_517401)(Socketimpl515407* server, Socketimpl515407** client, NU8 flags);
N_NIMCALL(void, readline_519608)(Socketimpl515407* socket, NimStringDesc** line, NI timeout, NU8 flags);
N_NIMCALL(void, close_517417)(Socketimpl515407* socket);
N_NIMCALL(void, msgquit_165112)(NI8 x);
STRING_LITERAL(TMP1089, "", 0);
STRING_LITERAL(TMP1548, " ", 1);
STRING_LITERAL(TMP1549, "-", 1);
STRING_LITERAL(TMP1878, "run", 3);
STRING_LITERAL(TMP4987, "server.type", 11);
STRING_LITERAL(TMP4988, "stdin", 5);
STRING_LITERAL(TMP4989, "tcp", 3);
STRING_LITERAL(TMP4991, "quit", 4);
STRING_LITERAL(TMP4992, "server.port", 11);
STRING_LITERAL(TMP4993, "server.address", 14);
STRING_LITERAL(TMP4996, "\015\012", 2);
STRING_LITERAL(TMP5005, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_523204;
extern Tgcheap48016 gch_48044;
NimStringDesc* lastcaascmd_523205;
extern TNimType NTI176011; /* OptParser */
extern NU32 gglobaloptions_155128;
extern NimStringDesc* arguments_178723;
extern NimStringDesc* command_155239;
TNimType NTI523428; /* object */
extern TNimType NTI311033; /* range -1..0(int) */
extern TNimType NTI515409; /* Socket */
TNimType NTI523450; /* ref object */
extern NI gerrorcounter_165016;
extern TY165060 writelnhook_165063;

static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr) {
	Tcell46146* result;
	result = 0;
	result = ((Tcell46146*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46146))))));
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
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
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

N_NIMCALL(void, processcmdline_523209)(NU8 pass, NimStringDesc* cmd) {
	Optparser176011 p;
	NI argscount;
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI176011);
	chckNil((void*)(&p));
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI176011);
	initoptparser_176030(cmd, (&p));
	argscount = ((NI) 0);
	{
		while (1) {
			nponext((&p));
			switch (p.kind) {
			case ((NU8) 0):
			{
				goto LA1;
			}
			break;
			case ((NU8) 2):
			case ((NU8) 3):
			{
				{
					if (!eqStrings(p.key, ((NimStringDesc*) &TMP1548))) goto LA7;
					p.key = copyString(((NimStringDesc*) &TMP1549));
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = processargument_178740(pass, (&p), (&argscount));
						if (!LOC11) goto LA12;
						goto LA1;
					}
					LA12: ;
				}
				goto LA5;
				LA7: ;
				{
					processswitch_178727(pass, (&p));
				}
				LA5: ;
			}
			break;
			case ((NU8) 1):
			{
				{
					NIM_BOOL LOC18;
					LOC18 = 0;
					LOC18 = processargument_178740(pass, (&p), (&argscount));
					if (!LOC18) goto LA19;
					goto LA1;
				}
				LA19: ;
			}
			break;
			}
		}
	} LA1: ;
	{
		if (!(pass == ((NU8) 1))) goto LA23;
		{
			NIM_BOOL LOC27;
			NIM_BOOL LOC28;
			NimStringDesc* LOC31;
			TY220714 LOC34;
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = !(((gglobaloptions_155128 &(1<<((((NU8) 13))&31)))!=0));
			if (!(LOC28)) goto LA29;
			LOC28 = !(((arguments_178723) && (arguments_178723)->Sup.len == 0));
			LA29: ;
			LOC27 = LOC28;
			if (!(LOC27)) goto LA30;
			LOC31 = 0;
			LOC31 = nsuNormalize(command_155239);
			LOC27 = !(eqStrings(LOC31, ((NimStringDesc*) &TMP1878)));
			LA30: ;
			if (!LOC27) goto LA32;
			memset((void*)LOC34, 0, sizeof(LOC34));
			rawmessage_165898(((NU16) 57), LOC34, 0);
		}
		LA32: ;
	}
	LA23: ;
}
N_NIMCALL(void, TMP4986)(void* p, NI op) {
	TY523428* a;
	a = (TY523428*)p;
	nimGCvisit((void*)(*a).stdoutsocket523408, op);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46146* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46146* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49646((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_CLOSURE(void, HEX3Aanonymous_523409)(NimStringDesc* line, void* ClEnv) {
	TY523428* HEX3Aenvp_523440;
	NimStringDesc* LOC1;
	HEX3Aenvp_523440 = (TY523428*) ClEnv;
	LOC1 = 0;
	LOC1 = rawNewString(line->Sup.len + 2);
appendString(LOC1, line);
appendString(LOC1, ((NimStringDesc*) &TMP4996));
	send_520007((*HEX3Aenvp_523440).stdoutsocket523408, LOC1, 2);
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

static N_INLINE(void, decref_51604)(Tcell46146* c) {
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

N_NIMCALL(void, serve_523257)(TY523259 action) {
	TY523428* HEX3Aenv_523449;
	NimStringDesc* typ;
	HEX3Aenv_523449 = 0;
	HEX3Aenv_523449 = (TY523428*) newObj((&NTI523450), sizeof(TY523428));
	typ = getconfigvar_155340(((NimStringDesc*) &TMP4987));
	if (eqStrings(typ, ((NimStringDesc*) &TMP4988))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP4989))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP1089))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			while (1) {
				NimStringDesc* line;
				NimStringDesc* LOC12;
				line = readline_13478(stdin);
				{
					if (!eqStrings(line, ((NimStringDesc*) &TMP4991))) goto LA10;
					exit(((NI) 0));
				}
				LA10: ;
				LOC12 = 0;
				LOC12 = curcaascmd_523204; curcaascmd_523204 = copyStringRC1(line);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				processcmdline_523209(((NU8) 1), line);
				action();
				gerrorcounter_165016 = ((NI) 0);
				printf("%s\015\012", ((NimStringDesc*) &TMP1089)? (((NimStringDesc*) &TMP1089))->data:"nil");
				fflush(stdout);
			}
		}
	}
	goto LA4;
	LA2: ;
	{
		Socketimpl515407* server;
		NimStringDesc* p;
		NU16 port;
		NimStringDesc* LOC20;
		NimStringDesc* inp;
		TY165060 LOC21;
		server = newsocket_515830(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE);
		p = getconfigvar_155340(((NimStringDesc*) &TMP4992));
		{
			NI LOC18;
			if (!(((NI) 0) < (p ? p->Sup.len : 0))) goto LA16;
			LOC18 = 0;
			LOC18 = nsuParseInt(p);
			port = ((NU16) (LOC18));
		}
		goto LA14;
		LA16: ;
		{
			port = ((NU16) 6000);
		}
		LA14: ;
		LOC20 = 0;
		LOC20 = getconfigvar_155340(((NimStringDesc*) &TMP4993));
		bindaddr_516619(server, port, LOC20);
		inp = copyString(((NimStringDesc*) &TMP1089));
		listen_516609(server, SOMAXCONN);
		asgnRefNoCycle((void**) (&(*HEX3Aenv_523449).stdoutsocket523408), newsocket_515830(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE));
		memset((void*)(&LOC21), 0, sizeof(LOC21));
		LOC21.ClPrc = HEX3Aanonymous_523409; LOC21.ClEnv = HEX3Aenv_523449;
		asgnRef((void**) (&writelnhook_165063.ClEnv), LOC21.ClEnv);
		writelnhook_165063.ClPrc = LOC21.ClPrc;
		{
			while (1) {
				NimStringDesc* LOC24;
				accept_517401(server, &(*HEX3Aenv_523449).stdoutsocket523408, 2);
				readline_519608((*HEX3Aenv_523449).stdoutsocket523408, (&inp), ((NI) -1), 2);
				LOC24 = 0;
				LOC24 = curcaascmd_523204; curcaascmd_523204 = copyStringRC1(inp);
				if (LOC24) nimGCunrefNoCycle(LOC24);
				processcmdline_523209(((NU8) 1), inp);
				action();
				gerrorcounter_165016 = ((NI) 0);
				send_520007((*HEX3Aenv_523449).stdoutsocket523408, ((NimStringDesc*) &TMP4996), 2);
				close_517417((*HEX3Aenv_523449).stdoutsocket523408);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		printf("%s%s\015\012", ((NimStringDesc*) &TMP5005)? (((NimStringDesc*) &TMP5005))->data:"nil", typ? (typ)->data:"nil");
		msgquit_165112(((NI8) 1));
	}
	LA4: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	LOC1 = 0;
	LOC1 = curcaascmd_523204; curcaascmd_523204 = copyStringRC1(((NimStringDesc*) &TMP1089));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = lastcaascmd_523205; lastcaascmd_523205 = copyStringRC1(((NimStringDesc*) &TMP1089));
	if (LOC2) nimGCunrefNoCycle(LOC2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit)(void) {
static TNimNode* TMP4982[2];
static TNimNode TMP1072[3];
NTI523428.size = sizeof(TY523428);
NTI523428.kind = 18;
NTI523428.base = 0;
NTI523428.flags = 2;
TMP4982[0] = &TMP1072[1];
TMP1072[1].kind = 1;
TMP1072[1].offset = offsetof(TY523428, HEX3Astate);
TMP1072[1].typ = (&NTI311033);
TMP1072[1].name = ":state";
TMP4982[1] = &TMP1072[2];
TMP1072[2].kind = 1;
TMP1072[2].offset = offsetof(TY523428, stdoutsocket523408);
TMP1072[2].typ = (&NTI515409);
TMP1072[2].name = "stdoutSocket523408";
TMP1072[0].len = 2; TMP1072[0].kind = 2; TMP1072[0].sons = &TMP4982[0];
NTI523428.node = &TMP1072[0];
NTI523450.size = sizeof(TY523428*);
NTI523450.kind = 22;
NTI523450.base = (&NTI523428);
NTI523450.flags = 2;
NTI523450.marker = TMP4986;
}

