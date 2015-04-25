/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <netinet/in.h>

#include <sys/socket.h>

#include <string.h>

#include <netdb.h>

#include <errno.h>

#include <arpa/inet.h>

#include <setjmp.h>
typedef struct Socketimpl514407 Socketimpl514407;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Oserror3433 Oserror3433;
typedef struct Systemerror3429 Systemerror3429;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct Tcell46146 Tcell46146;
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
typedef struct Timeouterror514415 Timeouterror514415;
typedef struct TY517225 TY517225;
typedef struct TSafePoint TSafePoint;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef NIM_CHAR TY514420[4001];
struct  Socketimpl514407  {
int fd;
NIM_BOOL isbuffered;
union{
struct {TY514420 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Systemerror3429  {
  Exception Sup;
};
struct  Oserror3433  {
  Systemerror3429 Sup;
NI32 errorcode;
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
struct  Timeouterror514415  {
  Exception Sup;
};
typedef int TY517227[1];
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
typedef NIM_CHAR TY106380[256];
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
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct TY517225 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP4988)(void* p, NI op);
N_NIMCALL(int, newrawsocket_510004)(NU8 domain, NU8 typ, NU8 protocol);
N_NIMCALL(void, raiseoserror_115809)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_115833)(void);
N_NIMCALL(Socketimpl514407*, newsocket_514708)(int fd, NIM_BOOL isbuff);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(int, toint_509829)(NU8 domain);
N_NIMCALL(NI16, htons_511017)(NI16 x);
N_NIMCALL(NI32, htonl_511007)(NI32 x);
N_NIMCALL(int, bindaddr_510214)(int socket, struct sockaddr* name, socklen_t namelen);
N_NIMCALL(struct addrinfo*, getaddrinfo_510408)(NimStringDesc* address, NU16 port, NU8 af, NU8 typ, NU8 prot);
N_NIMCALL(void, dealloc_510621)(struct addrinfo* ai);
N_NIMCALL(int, listen_510227)(int socket, int backlog);
N_NIMCALL(NI, send_518715)(Socketimpl514407* socket, void* data, NI size);
N_NIMCALL(NIM_BOOL, isdisconnectionerror_514481)(NU8 flags, NI32 lasterror);
N_NIMCALL(void, socketerror_515025)(Socketimpl514407* socket, NI err, NIM_BOOL async, NI32 lasterror);
N_NIMCALL(NI32, getsocketerror_515001)(Socketimpl514407* socket);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, acceptaddr_515813)(Socketimpl514407* server, Socketimpl514407** client, NimStringDesc** address, NU8 flags);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, waitfor_517818)(Socketimpl514407* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5001)(void* p, NI op);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NF, ntepochTime)(void);
N_NIMCALL(NI, select_517207)(Socketimpl514407* readfd, NI timeout);
N_NIMCALL(NIM_BOOL, hasdatabuffered_517001)(Socketimpl514407* s);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NI, select_512913)(TY517225** readfds, NI timeout);
static N_INLINE(void, HEX2BHEX3D_102688)(NF* x, NF y);
N_NIMCALL(NI, recv_517425)(Socketimpl514407* socket, void* data, NI size);
N_NIMCALL(NI, readintobuf_517237)(Socketimpl514407* socket, NI32 flags);
N_NIMCALL(NI, peekchar_518444)(Socketimpl514407* socket, NIM_CHAR* c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_510028)(int socket);
N_NIMCALL(void, reraiseException)(void);
TNimNode* NimDT_514407_isbuffered[3];
STRING_LITERAL(TMP4997, "No valid socket error code available", 36);
STRING_LITERAL(TMP4998, "Could not send all data.", 24);
STRING_LITERAL(TMP5000, "", 0);
STRING_LITERAL(TMP5002, "Call to \'", 9);
STRING_LITERAL(TMP5003, "\' timed out.", 12);
STRING_LITERAL(TMP5005, "readLine", 8);
STRING_LITERAL(TMP5006, "\015\012", 2);
TNimType NTI514407; /* SocketImpl */
extern TNimType NTI5811; /* cint */
extern TNimType NTI138; /* bool */
extern TNimType NTI147; /* char */
TNimType NTI514420; /* array[0..4000, char] */
extern TNimType NTI108; /* int */
extern TNimType NTI114; /* int32 */
TNimType NTI514409; /* Socket */
extern int osinvalidsocket_509651;
extern TNimType NTI115812; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern Tgcheap48016 gch_48044;
extern TNimType NTI3427; /* Exception */
TNimType NTI514415; /* TimeoutError */
TNimType NTI518014; /* ref TimeoutError */
extern TNimType NTI517225; /* seq[SocketHandle] */
extern TSafePoint* exchandler_17043;
N_NIMCALL(void, TMP4988)(void* p, NI op) {
	Socketimpl514407* a;
	NI LOC1;
	a = (Socketimpl514407*)p;
	switch ((*a).isbuffered) {
	case NIM_TRUE:
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 4001; LOC1++) {
	}
	break;
	case NIM_FALSE:
	break;
	} 
}

N_NIMCALL(Socketimpl514407*, newsocket_514708)(int fd, NIM_BOOL isbuff) {
	Socketimpl514407* result;
	result = 0;
	result = (Socketimpl514407*) newObj((&NTI514409), sizeof(Socketimpl514407));
	(*result).fd = fd;
	(*result).isbuffered = isbuff;
	{
		if (!isbuff) goto LA3;
		(*result).isbufferedU.S1.currpos = ((NI) 0);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Socketimpl514407*, newsocket_514830)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered) {
	Socketimpl514407* result;
	int fd;
	result = 0;
	fd = newrawsocket_510004(domain, typ, protocol);
	{
		NI32 LOC5;
		if (!(fd == osinvalidsocket_509651)) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_115833();
		raiseoserror_115809(LOC5);
	}
	LA3: ;
	result = newsocket_514708(fd, buffered);
	return result;
}

N_NIMCALL(void, bindaddr_515620)(Socketimpl514407* socket, NU16 port, NimStringDesc* address) {
	{
		struct sockaddr_in name;
		if (!((address) && (address)->Sup.len == 0)) goto LA3;
		memset((void*)(&name), 0, sizeof(name));
		name.sin_family = toint_509829(((NU8) 2));
		name.sin_port = htons_511017(((NI16) (port)));
		name.sin_addr.s_addr = htonl_511007(INADDR_ANY);
		{
			int LOC7;
			NI32 LOC10;
			LOC7 = 0;
			LOC7 = bindaddr_510214((*socket).fd, ((struct sockaddr*) ((&name))), ((socklen_t) (((NI)sizeof(struct sockaddr_in)))));
			if (!(LOC7 < ((NI32) 0))) goto LA8;
			LOC10 = 0;
			LOC10 = oslasterror_115833();
			raiseoserror_115809(LOC10);
		}
		LA8: ;
	}
	goto LA1;
	LA3: ;
	{
		struct addrinfo* ailist;
		ailist = getaddrinfo_510408(address, port, ((NU8) 2), ((NU8) 1), ((NU8) 6));
		{
			int LOC14;
			NI32 LOC17;
			LOC14 = 0;
			LOC14 = bindaddr_510214((*socket).fd, (*ailist).ai_addr, (*ailist).ai_addrlen);
			if (!(LOC14 < ((NI32) 0))) goto LA15;
			dealloc_510621(ailist);
			LOC17 = 0;
			LOC17 = oslasterror_115833();
			raiseoserror_115809(LOC17);
		}
		LA15: ;
		dealloc_510621(ailist);
	}
	LA1: ;
}

N_NIMCALL(void, listen_515610)(Socketimpl514407* socket, int backlog) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = listen_510227((*socket).fd, backlog);
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_115833();
		raiseoserror_115809(LOC6);
	}
	LA4: ;
}

N_NIMCALL(NI, send_518715)(Socketimpl514407* socket, void* data, NI size) {
	NI result;
	result = 0;
	result = send((*socket).fd, data, size, MSG_NOSIGNAL);
	return result;
}

N_NIMCALL(NIM_BOOL, isdisconnectionerror_514481)(NU8 flags, NI32 lasterror) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((flags &(1<<((((NU8) 1))&7)))!=0);
	if (!(LOC1)) goto LA2;
	LOC1 = (lasterror == ((NI) (ECONNRESET)) || lasterror == ((NI) (EPIPE)) || lasterror == ((NI) (ENETRESET)));
	LA2: ;
	result = LOC1;
	return result;
}

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

N_NIMCALL(NI32, getsocketerror_515001)(Socketimpl514407* socket) {
	NI32 result;
	result = 0;
	result = oslasterror_115833();
	{
		if (!(result == ((NI32) 0))) goto LA3;
		result = (*socket).lasterror;
	}
	LA3: ;
	{
		Oserror3433* e_515008;
		NimStringDesc* LOC9;
		if (!(result == ((NI32) 0))) goto LA7;
		e_515008 = 0;
		e_515008 = (Oserror3433*) newObj((&NTI115812), sizeof(Oserror3433));
		(*e_515008).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC9 = 0;
		LOC9 = (*e_515008).Sup.Sup.message; (*e_515008).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP4997));
		if (LOC9) nimGCunrefNoCycle(LOC9);
		raiseException((Exception*)e_515008, "OSError");
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, socketerror_515025)(Socketimpl514407* socket, NI err, NIM_BOOL async, NI32 lasterror) {
{	{
		NIM_BOOL LOC3;
		NI32 laste;
		LOC3 = 0;
		LOC3 = (err == ((NI) -1));
		if (!(LOC3)) goto LA4;
		LOC3 = NIM_TRUE;
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!(((NI) (lasterror)) == ((NI) -1))) goto LA9;
			laste = getsocketerror_515001(socket);
		}
		goto LA7;
		LA9: ;
		{
			laste = lasterror;
		}
		LA7: ;
		{
			if (!async) goto LA14;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = (laste == EAGAIN);
				if (LOC18) goto LA19;
				LOC18 = (laste == EWOULDBLOCK);
				LA19: ;
				if (!LOC18) goto LA20;
				goto BeforeRet;
			}
			goto LA16;
			LA20: ;
			{
				raiseoserror_115809(laste);
			}
			LA16: ;
		}
		goto LA12;
		LA14: ;
		{
			raiseoserror_115809(laste);
		}
		LA12: ;
	}
	LA5: ;
	}BeforeRet: ;
}

N_NIMCALL(void, send_519208)(Socketimpl514407* socket, NimStringDesc* data, NU8 flags) {
	NI sent;
{	sent = send_518715(socket, ((void*) (data->data)), (data ? data->Sup.len : 0));
	{
		NI32 lasterror;
		if (!(sent < ((NI) 0))) goto LA3;
		lasterror = oslasterror_115833();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_514481(flags, lasterror);
			if (!LOC7) goto LA8;
			goto BeforeRet;
		}
		LA8: ;
		socketerror_515025(socket, ((NI) -1), NIM_FALSE, lasterror);
	}
	LA3: ;
	{
		Oserror3433* e_519219;
		NimStringDesc* LOC14;
		if (!!((sent == (data ? data->Sup.len : 0)))) goto LA12;
		e_519219 = 0;
		e_519219 = (Oserror3433*) newObj((&NTI115812), sizeof(Oserror3433));
		(*e_519219).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC14 = 0;
		LOC14 = (*e_519219).Sup.Sup.message; (*e_519219).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP4998));
		if (LOC14) nimGCunrefNoCycle(LOC14);
		raiseException((Exception*)e_519219, "OSError");
	}
	LA12: ;
	}BeforeRet: ;
}

N_NIMCALL(void, acceptaddr_515813)(Socketimpl514407* server, Socketimpl514407** client, NimStringDesc** address, NU8 flags) {
	struct sockaddr_in sockaddress;
	socklen_t addrlen;
	int sock;
	memset((void*)(&sockaddress), 0, sizeof(sockaddress));
	addrlen = ((socklen_t) (((NI)sizeof(struct sockaddr_in))));
	sock = accept((*server).fd, ((struct sockaddr*) ((&sockaddress))), (&addrlen));
	{
		NI32 err;
		if (!(sock == osinvalidsocket_509651)) goto LA3;
		err = oslasterror_115833();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_514481(flags, err);
			if (!LOC7) goto LA8;
			acceptaddr_515813(server, client, address, flags);
		}
		LA8: ;
		raiseoserror_115809(err);
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING LOC11;
		(*(*client)).fd = sock;
		(*(*client)).isbuffered = (*server).isbuffered;
		LOC11 = 0;
		LOC11 = inet_ntoa(sockaddress.sin_addr);
		unsureAsgnRef((void**) (&(*address)), cstrToNimstr(LOC11));
	}
	LA1: ;
}

N_NIMCALL(void, accept_516401)(Socketimpl514407* server, Socketimpl514407** client, NU8 flags) {
	NimStringDesc* addrdummy;
	addrdummy = copyString(((NimStringDesc*) &TMP5000));
	acceptaddr_515813(server, client, (&addrdummy), flags);
}
N_NIMCALL(void, TMP5001)(void* p, NI op) {
	Timeouterror514415* a;
	a = (Timeouterror514415*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(NIM_BOOL, hasdatabuffered_517001)(Socketimpl514407* s) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		NIM_BOOL LOC5;
		if (!(*s).isbuffered) goto LA3;
		LOC5 = 0;
		LOC5 = (((NI) 0) < (*s).isbufferedU.S1.buflen);
		if (!(LOC5)) goto LA6;
		LOC5 = !(((*s).isbufferedU.S1.currpos == (*s).isbufferedU.S1.buflen));
		LA6: ;
		result = LOC5;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, select_517207)(Socketimpl514407* readfd, NI timeout) {
	NI result;
	TY517225* fds;
	TY517227 LOC6;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = hasdatabuffered_517001(readfd);
		if (!LOC3) goto LA4;
		result = ((NI) 1);
		goto BeforeRet;
	}
	LA4: ;
	fds = (TY517225*) newSeq((&NTI517225), 1);
	LOC6[0] = (*readfd).fd;
	fds->data[0] = LOC6[0];
	result = select_512913((&fds), timeout);
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, HEX2BHEX3D_102688)(NF* x, NF y) {
	(*x) = ((NF)((*x)) + (NF)(y));
}

N_NIMCALL(NI, waitfor_517818)(Socketimpl514407* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname) {
	NI result;
{	result = 0;
	result = ((NI) 1);
	{
		if (!(size <= ((NI) 0))) goto LA3;
	}
	LA3: ;
	{
		if (!(timeout == ((NI) -1))) goto LA7;
		result = size;
		goto BeforeRet;
	}
	LA7: ;
	{
		NIM_BOOL LOC11;
		NIM_BOOL LOC12;
		LOC11 = 0;
		LOC12 = 0;
		LOC12 = (*socket).isbuffered;
		if (!(LOC12)) goto LA13;
		LOC12 = !(((*socket).isbufferedU.S1.buflen == ((NI) 0)));
		LA13: ;
		LOC11 = LOC12;
		if (!(LOC11)) goto LA14;
		LOC11 = !(((*socket).isbufferedU.S1.buflen == (*socket).isbufferedU.S1.currpos));
		LA14: ;
		if (!LOC11) goto LA15;
		result = (NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos);
		result = ((result <= size) ? result : size);
	}
	goto LA9;
	LA15: ;
	{
		NF starttime;
		NI selret;
		NF LOC33;
		{
			Timeouterror514415* e_518013;
			NimStringDesc* LOC22;
			if (!((NI)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))) < ((NI) 1))) goto LA20;
			e_518013 = 0;
			e_518013 = (Timeouterror514415*) newObj((&NTI518014), sizeof(Timeouterror514415));
			(*e_518013).Sup.Sup.m_type = (&NTI514415);
			LOC22 = 0;
			LOC22 = rawNewString(funcname->Sup.len + 21);
appendString(LOC22, ((NimStringDesc*) &TMP5002));
appendString(LOC22, funcname);
appendString(LOC22, ((NimStringDesc*) &TMP5003));
			asgnRefNoCycle((void**) (&(*e_518013).Sup.message), LOC22);
			raiseException((Exception*)e_518013, "TimeoutError");
		}
		LA20: ;
		starttime = ntepochTime();
		selret = select_517207(socket, (NI)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))));
		{
			NI32 LOC27;
			if (!(selret < ((NI) 0))) goto LA25;
			LOC27 = 0;
			LOC27 = oslasterror_115833();
			raiseoserror_115809(LOC27);
		}
		LA25: ;
		{
			Timeouterror514415* e_518206;
			NimStringDesc* LOC32;
			if (!!((selret == ((NI) 1)))) goto LA30;
			e_518206 = 0;
			e_518206 = (Timeouterror514415*) newObj((&NTI518014), sizeof(Timeouterror514415));
			(*e_518206).Sup.Sup.m_type = (&NTI514415);
			LOC32 = 0;
			LOC32 = rawNewString(funcname->Sup.len + 21);
appendString(LOC32, ((NimStringDesc*) &TMP5002));
appendString(LOC32, funcname);
appendString(LOC32, ((NimStringDesc*) &TMP5003));
			asgnRefNoCycle((void**) (&(*e_518206).Sup.message), LOC32);
			raiseException((Exception*)e_518206, "TimeoutError");
		}
		LA30: ;
		LOC33 = 0;
		LOC33 = ntepochTime();
		HEX2BHEX3D_102688(waited, ((NF)(LOC33) - (NF)(starttime)));
	}
	LA9: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, readintobuf_517237)(Socketimpl514407* socket, NI32 flags) {
	NI result;
{	result = 0;
	result = ((NI) 0);
	result = recv((*socket).fd, ((void*) ((*socket).isbufferedU.S1.buffer)), ((NI) 4000), flags);
	{
		if (!(result < ((NI) 0))) goto LA3;
		(*socket).lasterror = oslasterror_115833();
	}
	LA3: ;
	{
		if (!(result <= ((NI) 0))) goto LA7;
		(*socket).isbufferedU.S1.buflen = ((NI) 0);
		(*socket).isbufferedU.S1.currpos = ((NI) 0);
		goto BeforeRet;
	}
	LA7: ;
	(*socket).isbufferedU.S1.buflen = result;
	(*socket).isbufferedU.S1.currpos = ((NI) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, recv_517425)(Socketimpl514407* socket, void* data, NI size) {
	NI result;
{	result = 0;
	{
		if (!(size == ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI read;
		if (!(*socket).isbuffered) goto LA7;
		{
			NI res;
			if (!((*socket).isbufferedU.S1.buflen == ((NI) 0))) goto LA11;
			res = readintobuf_517237(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA15;
				{
					if (!NIM_FALSE) goto LA19;
					result = ((NI) 0);
					goto BeforeRet;
				}
				goto LA17;
				LA19: ;
				{
					result = res;
					goto BeforeRet;
				}
				LA17: ;
			}
			LA15: ;
		}
		LA11: ;
		read = ((NI) 0);
		{
			while (1) {
				NI chunk;
				NCSTRING d;
				if (!(read < size)) goto LA23;
				{
					NI res;
					if (!((*socket).isbufferedU.S1.buflen <= (*socket).isbufferedU.S1.currpos)) goto LA26;
					res = readintobuf_517237(socket, ((NI32) 0));
					{
						if (!(res <= ((NI) 0))) goto LA30;
						{
							if (!(((NI) 0) < read)) goto LA34;
							result = read;
							goto BeforeRet;
						}
						goto LA32;
						LA34: ;
						{
							result = res;
							goto BeforeRet;
						}
						LA32: ;
					}
					LA30: ;
				}
				LA26: ;
				chunk = (((NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos) <= (NI)(size - read)) ? (NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos) : (NI)(size - read));
				d = ((NCSTRING) (data));
				memcpy(((void*) ((&d[read]))), ((void*) ((&(*socket).isbufferedU.S1.buffer[((*socket).isbufferedU.S1.currpos)- 0]))), ((NI) (chunk)));
				read += chunk;
				(*socket).isbufferedU.S1.currpos += chunk;
			} LA23: ;
		}
		result = read;
	}
	goto LA5;
	LA7: ;
	{
		result = recv((*socket).fd, data, ((NI) (((int) (size)))), ((NI32) 0));
		{
			if (!(result < ((NI) 0))) goto LA40;
			(*socket).lasterror = oslasterror_115833();
		}
		LA40: ;
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, peekchar_518444)(Socketimpl514407* socket, NIM_CHAR* c) {
	NI result;
	result = 0;
	{
		if (!(*socket).isbuffered) goto LA3;
		result = ((NI) 1);
		{
			NIM_BOOL LOC7;
			NI res;
			LOC7 = 0;
			LOC7 = ((*socket).isbufferedU.S1.buflen == ((NI) 0));
			if (LOC7) goto LA8;
			LOC7 = ((NI)((*socket).isbufferedU.S1.buflen - ((NI) 1)) < (*socket).isbufferedU.S1.currpos);
			LA8: ;
			if (!LOC7) goto LA9;
			res = readintobuf_517237(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA13;
				result = res;
			}
			LA13: ;
		}
		LA9: ;
		(*c) = (*socket).isbufferedU.S1.buffer[((*socket).isbufferedU.S1.currpos)- 0];
	}
	goto LA1;
	LA3: ;
	{
		result = recv((*socket).fd, ((void*) (c)), ((NI) 1), MSG_PEEK);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, readline_518608)(Socketimpl514407* socket, NimStringDesc** line, NI timeout, NU8 flags) {
	NF waited;
{	waited = 0.0;
	(*line) = setLengthStr((*line), ((NI) 0));
	{
		while (1) {
			NIM_CHAR c;
			NI LOC3;
			NI n;
			c = 0;
			LOC3 = 0;
			LOC3 = waitfor_517818(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP5005));
			n = recv_517425(socket, ((void*) ((&c))), ((NI) 1));
			{
				NI32 lasterror;
				if (!(n < ((NI) 0))) goto LA6;
				lasterror = getsocketerror_515001(socket);
				{
					NIM_BOOL LOC10;
					LOC10 = 0;
					LOC10 = isdisconnectionerror_514481(flags, lasterror);
					if (!LOC10) goto LA11;
					(*line) = setLengthStr((*line), ((NI) 0));
					goto BeforeRet;
				}
				LA11: ;
				socketerror_515025(socket, n, NIM_FALSE, lasterror);
			}
			goto LA4;
			LA6: ;
			{
				if (!(n == ((NI) 0))) goto LA14;
				(*line) = setLengthStr((*line), ((NI) 0));
				goto BeforeRet;
			}
			goto LA4;
			LA14: ;
			LA4: ;
			{
				NI LOC20;
				if (!((NU8)(c) == (NU8)(13))) goto LA18;
				LOC20 = 0;
				LOC20 = waitfor_517818(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP5005));
				n = peekchar_518444(socket, (&c));
				{
					NIM_BOOL LOC23;
					NI LOC27;
					LOC23 = 0;
					LOC23 = (((NI) 0) < n);
					if (!(LOC23)) goto LA24;
					LOC23 = ((NU8)(c) == (NU8)(10));
					LA24: ;
					if (!LOC23) goto LA25;
					LOC27 = 0;
					LOC27 = recv_517425(socket, ((void*) ((&c))), ((NI) 1));
				}
				goto LA21;
				LA25: ;
				{
					NI32 lasterror;
					if (!(n <= ((NI) 0))) goto LA29;
					lasterror = getsocketerror_515001(socket);
					{
						NIM_BOOL LOC33;
						LOC33 = 0;
						LOC33 = isdisconnectionerror_514481(flags, lasterror);
						if (!LOC33) goto LA34;
						(*line) = setLengthStr((*line), ((NI) 0));
						goto BeforeRet;
					}
					LA34: ;
					socketerror_515025(socket, n, NIM_FALSE, lasterror);
				}
				goto LA21;
				LA29: ;
				LA21: ;
				{
					if (!(((*line) ? (*line)->Sup.len : 0) == ((NI) 0))) goto LA38;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP5006));
				}
				LA38: ;
				goto BeforeRet;
			}
			goto LA16;
			LA18: ;
			{
				if (!((NU8)(c) == (NU8)(10))) goto LA41;
				{
					if (!(((*line) ? (*line)->Sup.len : 0) == ((NI) 0))) goto LA45;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP5006));
				}
				LA45: ;
				goto BeforeRet;
			}
			goto LA16;
			LA41: ;
			LA16: ;
			(*line) = addChar((*line), c);
		}
	}
	}BeforeRet: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

N_NIMCALL(void, close_516417)(Socketimpl514407* socket) {
	TSafePoint TMP5007;
	pushSafePoint(&TMP5007);
	TMP5007.status = setjmp(TMP5007.context);
	if (TMP5007.status == 0) {
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		close_510028((*socket).fd);
	}
	if (TMP5007.status != 0) reraiseException();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit)(void) {
static TNimNode* TMP4986[3];
static TNimNode* TMP4987[3];
static TNimNode TMP1073[10];
NTI514407.size = sizeof(Socketimpl514407);
NTI514407.kind = 18;
NTI514407.base = 0;
NTI514407.flags = 3;
TMP4986[0] = &TMP1073[1];
TMP1073[1].kind = 1;
TMP1073[1].offset = offsetof(Socketimpl514407, fd);
TMP1073[1].typ = (&NTI5811);
TMP1073[1].name = "fd";
TMP4986[1] = &TMP1073[2];
TMP1073[2].kind = 3;
TMP1073[2].offset = offsetof(Socketimpl514407, isbuffered);
TMP1073[2].typ = (&NTI138);
TMP1073[2].name = "isBuffered";
TMP1073[2].sons = &NimDT_514407_isbuffered[0];
TMP1073[2].len = 2;
TMP4987[0] = &TMP1073[4];
NTI514420.size = sizeof(TY514420);
NTI514420.kind = 16;
NTI514420.base = (&NTI147);
NTI514420.flags = 3;
TMP1073[4].kind = 1;
TMP1073[4].offset = offsetof(Socketimpl514407, isbufferedU.S1.buffer);
TMP1073[4].typ = (&NTI514420);
TMP1073[4].name = "buffer";
TMP4987[1] = &TMP1073[5];
TMP1073[5].kind = 1;
TMP1073[5].offset = offsetof(Socketimpl514407, isbufferedU.S1.currpos);
TMP1073[5].typ = (&NTI108);
TMP1073[5].name = "currPos";
TMP4987[2] = &TMP1073[6];
TMP1073[6].kind = 1;
TMP1073[6].offset = offsetof(Socketimpl514407, isbufferedU.S1.buflen);
TMP1073[6].typ = (&NTI108);
TMP1073[6].name = "bufLen";
TMP1073[3].len = 3; TMP1073[3].kind = 2; TMP1073[3].sons = &TMP4987[0];
NimDT_514407_isbuffered[1] = &TMP1073[3];
TMP1073[7].len = 0; TMP1073[7].kind = 2;
NimDT_514407_isbuffered[0] = &TMP1073[7];
TMP4986[2] = &TMP1073[8];
TMP1073[8].kind = 1;
TMP1073[8].offset = offsetof(Socketimpl514407, lasterror);
TMP1073[8].typ = (&NTI114);
TMP1073[8].name = "lastError";
TMP1073[0].len = 3; TMP1073[0].kind = 2; TMP1073[0].sons = &TMP4986[0];
NTI514407.node = &TMP1073[0];
NTI514409.size = sizeof(Socketimpl514407*);
NTI514409.kind = 22;
NTI514409.base = (&NTI514407);
NTI514409.flags = 2;
NTI514409.marker = TMP4988;
NTI514415.size = sizeof(Timeouterror514415);
NTI514415.kind = 17;
NTI514415.base = (&NTI3427);
TMP1073[9].len = 0; TMP1073[9].kind = 2;
NTI514415.node = &TMP1073[9];
NTI518014.size = sizeof(Timeouterror514415*);
NTI518014.kind = 22;
NTI518014.base = (&NTI514415);
NTI518014.marker = TMP5001;
}

