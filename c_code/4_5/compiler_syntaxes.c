/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Tparsers219035 Tparsers219035;
typedef struct Tparser207205 Tparser207205;
typedef struct Tlexer181185 Tlexer181185;
typedef struct Tbaselexer179024 Tbaselexer179024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream178204 Tllstream178204;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken181181 Ttoken181181;
typedef struct Tident167021 Tident167021;
typedef struct Ttype191849 Ttype191849;
typedef struct Tsym191843 Tsym191843;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tlib191831 Tlib191831;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
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
struct  Tbaselexer179024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream178204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo163338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler181183;
struct  Tlexer181185  {
  Tbaselexer179024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler181183 errorhandler;
};
struct  Ttoken181181  {
NU8 toktype;
NI indent;
Tident167021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser207205  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer181185 lex;
Ttoken181181 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers219035  {
NU8 skin;
Tparser207205 parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NimStringDesc* TY219026[4];
typedef NimStringDesc* TY219020[4];
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
typedef NimStringDesc* TY219714[1];
struct  Tllstream178204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Ttype191849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tsym191843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib191831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode191813* path;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_164407)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_164970)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_219047)(Tparsers219035* p, NI32 fileidx, Tllstream178204* inputstream);
N_NIMCALL(Tnode191813*, parsepipe_219170)(NimStringDesc* filename, Tllstream178204* inputstream);
N_NIMCALL(Tllstream178204*, llstreamopen_178256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_178610)(Tllstream178204* s, NimStringDesc** line);
N_NIMCALL(NI, utf8bom_219122)(NimStringDesc* s);
N_NIMCALL(NIM_BOOL, containsshebang_219132)(NimStringDesc* s, NI i);
N_NIMCALL(void, openparser_207417)(Tparser207205* p, NimStringDesc* filename, Tllstream178204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(Tllstream178204*, llstreamopen_178220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(Tnode191813*, parseall_207216)(Tparser207205* p);
N_NIMCALL(void, closeparser_207223)(Tparser207205* p);
N_NIMCALL(void, llstreamclose_178310)(Tllstream178204* s);
N_NIMCALL(Tllstream178204*, evalpipe_219728)(Tparsers219035* p, Tnode191813* n, NimStringDesc* filename, Tllstream178204* start);
N_NIMCALL(NIM_BOOL, identeq_167484)(Tident167021* id, NimStringDesc* name);
N_NIMCALL(Tllstream178204*, applyfilter_219689)(Tparsers219035* p, Tnode191813* n, NimStringDesc* filename, Tllstream178204* stdin_219695);
N_NIMCALL(Tident167021*, getcallee_219647)(Tnode191813* n);
N_NIMCALL(NimStringDesc*, rendertree_213058)(Tnode191813* n, NU8 renderflags);
N_NIMCALL(NU8, getfilter_219239)(Tident167021* ident);
N_NIMCALL(NU8, getparser_219447)(Tident167021* ident);
N_NIMCALL(Tllstream178204*, filtertmpl_218009)(Tllstream178204* stdin_218011, NimStringDesc* filename, Tnode191813* call);
N_NIMCALL(Tllstream178204*, filterstrip_217012)(Tllstream178204* stdin_217014, NimStringDesc* filename, Tnode191813* call);
N_NIMCALL(Tllstream178204*, filterreplace_217004)(Tllstream178204* stdin_217006, NimStringDesc* filename, Tnode191813* call);
N_NIMCALL(void, rawmessage_164898)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_164538)(NimStringDesc* s);
N_NIMCALL(void, openparser_207402)(Tparser207205* p, NI32 fileidx, Tllstream178204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(Tllstream178204*, llstreamopen_178238)(FILE* f);
N_NIMCALL(Tnode191813*, parseall_219063)(Tparsers219035* p);
N_NIMCALL(Tnode191813*, parseall_212009)(Tparser207205* p);
N_NIMCALL(void, internalerror_165234)(NimStringDesc* errmsg);
N_NIMCALL(void, closeparsers_219056)(Tparsers219035* p);
N_NIMCALL(Tnode191813*, parsetoplevelstmt_207230)(Tparser207205* p);
N_NIMCALL(Tnode191813*, parsetoplevelstmt_212020)(Tparser207205* p);
STRING_LITERAL(TMP1283, "|", 1);
STRING_LITERAL(TMP1393, "none", 4);
STRING_LITERAL(TMP1394, "stdtmpl", 7);
STRING_LITERAL(TMP1395, "replace", 7);
STRING_LITERAL(TMP1396, "strip", 5);
NIM_CONST TY219026 filternames_219025 = {((NimStringDesc*) &TMP1393),
((NimStringDesc*) &TMP1394),
((NimStringDesc*) &TMP1395),
((NimStringDesc*) &TMP1396)}
;
STRING_LITERAL(TMP1397, "standard", 8);
STRING_LITERAL(TMP1398, "strongspaces", 12);
STRING_LITERAL(TMP1399, "braces", 6);
STRING_LITERAL(TMP1400, "endx", 4);
NIM_CONST TY219020 parsernames_219019 = {((NimStringDesc*) &TMP1397),
((NimStringDesc*) &TMP1398),
((NimStringDesc*) &TMP1399),
((NimStringDesc*) &TMP1400)}
;
STRING_LITERAL(TMP1431, "parser to implement", 19);
TNimType NTI219035; /* TParsers */
TNimType NTI219007; /* TParserKind */
extern TNimType NTI207205; /* TParser */
extern Tnode191813* emptynode_192807;
extern NI gverbosity_154137;

N_NIMCALL(NI, utf8bom_219122)(NimStringDesc* s) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)(s->data[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)(s->data[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)(s->data[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		result = ((NI) 3);
	}
	goto LA1;
	LA7: ;
	{
		result = ((NI) 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsshebang_219132)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NI j;
		LOC3 = 0;
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(s->data[(NI)(i + ((NI) 1))]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		j = (NI)(i + ((NI) 2));
		{
			while (1) {
				if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA8;
				j += ((NI) 1);
			} LA8: ;
		}
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}
	LA5: ;
	return result;
}

N_NIMCALL(Tnode191813*, parsepipe_219170)(NimStringDesc* filename, Tllstream178204* inputstream) {
	Tnode191813* result;
	Tllstream178204* s;
	result = 0;
	result = emptynode_192807;
	s = llstreamopen_178256(filename, ((NU8) 0));
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		if (!!((s == NIM_NIL))) goto LA3;
		line = rawNewString(((NI) 80));
		LOC5 = 0;
		LOC5 = llstreamreadline_178610(s, (&line));
		i = utf8bom_219122(line);
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = 0;
			LOC8 = containsshebang_219132(line, i);
			if (!LOC8) goto LA9;
			LOC11 = 0;
			LOC11 = llstreamreadline_178610(s, (&line));
			i = ((NI) 0);
		}
		LA9: ;
		{
			NIM_BOOL LOC14;
			Tparser207205 q;
			NimStringDesc* LOC20;
			Tllstream178204* LOC21;
			LOC14 = 0;
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			LOC14 = ((NU8)(line->data[(NI)(i + ((NI) 1))]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			i += ((NI) 2);
			{
				while (1) {
					if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA19;
					i += ((NI) 1);
				} LA19: ;
			}
			memset((void*)(&q), 0, sizeof(q));
			objectInit((&q), (&NTI207205));
			LOC20 = 0;
			LOC20 = copyStr(line, i);
			LOC21 = 0;
			LOC21 = llstreamopen_178220(LOC20);
			openparser_207417((&q), filename, LOC21, NIM_FALSE);
			result = parseall_207216((&q));
			closeparser_207223((&q));
		}
		LA16: ;
		llstreamclose_178310(s);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Tident167021*, getcallee_219647)(Tnode191813* n) {
	Tident167021* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind == ((NU8) 27) || (*n).kind == ((NU8) 29) || (*n).kind == ((NU8) 30) || (*n).kind == ((NU8) 31) || (*n).kind == ((NU8) 26) || (*n).kind == ((NU8) 28) || (*n).kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		result = (*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
	}
	goto LA1;
	LA5: ;
	{
		if (!((*n).kind == ((NU8) 2))) goto LA8;
		result = (*n).kindU.S5.ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = rendertree_213058(n, 0);
		rawmessage_164970(((NU16) 163), LOC11);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, getfilter_219239)(Tident167021* ident) {
	NU8 result;
{	result = 0;
	{
		NU8 i_219423;
		NI res_219429;
		i_219423 = 0;
		res_219429 = ((NI) 0);
		{
			while (1) {
				if (!(res_219429 <= ((NI) 3))) goto LA3;
				i_219423 = ((NU8) (res_219429));
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_167484(ident, filternames_219025[(i_219423)- 0]);
					if (!LOC6) goto LA7;
					result = i_219423;
					goto BeforeRet;
				}
				LA7: ;
				res_219429 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, getparser_219447)(Tident167021* ident) {
	NU8 result;
{	result = 0;
	{
		NU8 i_219623;
		NI res_219629;
		i_219623 = 0;
		res_219629 = ((NI) 0);
		{
			while (1) {
				if (!(res_219629 <= ((NI) 3))) goto LA3;
				i_219623 = ((NU8) (res_219629));
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_167484(ident, parsernames_219019[(i_219623)- 0]);
					if (!LOC6) goto LA7;
					result = i_219623;
					goto BeforeRet;
				}
				LA7: ;
				res_219629 += ((NI) 1);
			} LA3: ;
		}
	}
	rawmessage_164970(((NU16) 30), (*ident).s);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tllstream178204*, applyfilter_219689)(Tparsers219035* p, Tnode191813* n, NimStringDesc* filename, Tllstream178204* stdin_219695) {
	Tllstream178204* result;
	Tident167021* ident;
	NU8 f;
	result = 0;
	ident = getcallee_219647(n);
	f = getfilter_219239(ident);
	switch (f) {
	case ((NU8) 0):
	{
		(*p).skin = getparser_219447(ident);
		result = stdin_219695;
	}
	break;
	case ((NU8) 1):
	{
		result = filtertmpl_218009(stdin_219695, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		result = filterstrip_217012(stdin_219695, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		result = filterreplace_217004(stdin_219695, filename, n);
	}
	break;
	}
	{
		if (!!((f == ((NU8) 0)))) goto LA7;
		{
			TY219714 LOC13;
			TY219714 LOC14;
			if (!(((NI) 2) <= gverbosity_154137)) goto LA11;
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_164898(((NU16) 270), LOC13, 0);
			msgwriteln_164538((*result).s);
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_164898(((NU16) 271), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	return result;
}

N_NIMCALL(Tllstream178204*, evalpipe_219728)(Tparsers219035* p, Tnode191813* n, NimStringDesc* filename, Tllstream178204* start) {
	Tllstream178204* result;
{	result = 0;
	result = start;
	{
		if (!((*n).kind == ((NU8) 1))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = ((*n).kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		LOC8 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		LOC7 = identeq_167484((*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, ((NimStringDesc*) &TMP1283));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_219778;
			NI res_219804;
			i_219778 = 0;
			res_219804 = ((NI) 1);
			{
				while (1) {
					if (!(res_219804 <= ((NI) 2))) goto LA15;
					i_219778 = res_219804;
					{
						if (!((*(*n).kindU.S6.sons->data[i_219778]).kind == ((NU8) 29))) goto LA18;
						result = evalpipe_219728(p, (*n).kindU.S6.sons->data[i_219778], filename, result);
					}
					goto LA16;
					LA18: ;
					{
						result = applyfilter_219689(p, (*n).kindU.S6.sons->data[i_219778], filename, result);
					}
					LA16: ;
					res_219804 += ((NI) 1);
				} LA15: ;
			}
		}
	}
	goto LA5;
	LA11: ;
	{
		if (!((*n).kind == ((NU8) 115))) goto LA22;
		result = evalpipe_219728(p, (*n).kindU.S6.sons->data[((NI) 0)], filename, result);
	}
	goto LA5;
	LA22: ;
	{
		result = applyfilter_219689(p, n, filename, result);
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, openparsers_219047)(Tparsers219035* p, NI32 fileidx, Tllstream178204* inputstream) {
	Tllstream178204* s;
	NimStringDesc* filename;
	Tnode191813* pipe;
	s = 0;
	(*p).skin = ((NU8) 0);
	filename = tofullpathconsiderdirty_164407(fileidx);
	pipe = parsepipe_219170(filename, inputstream);
	{
		if (!!((pipe == NIM_NIL))) goto LA3;
		s = evalpipe_219728(p, pipe, filename, inputstream);
	}
	goto LA1;
	LA3: ;
	{
		s = inputstream;
	}
	LA1: ;
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 2):
	case ((NU8) 3):
	{
		openparser_207402((&(*p).parser), fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		openparser_207402((&(*p).parser), fileidx, s, NIM_TRUE);
	}
	break;
	}
}

N_NIMCALL(Tnode191813*, parseall_219063)(Tparsers219035* p) {
	Tnode191813* result;
	result = 0;
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parseall_207216((&(*p).parser));
	}
	break;
	case ((NU8) 2):
	{
		result = parseall_212009((&(*p).parser));
	}
	break;
	case ((NU8) 3):
	{
		internalerror_165234(((NimStringDesc*) &TMP1431));
		result = emptynode_192807;
	}
	break;
	}
	return result;
}

N_NIMCALL(void, closeparsers_219056)(Tparsers219035* p) {
	closeparser_207223((&(*p).parser));
}

N_NIMCALL(Tnode191813*, parsefile_219041)(NI32 fileidx) {
	Tnode191813* result;
	Tparsers219035 p;
	FILE* f;
	NimStringDesc* filename;
	Tllstream178204* LOC6;
{	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI219035));
	f = 0;
	filename = tofullpathconsiderdirty_164407(fileidx);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&f, filename, ((NU8) 0), ((NI) -1));
		if (!!(LOC3)) goto LA4;
		rawmessage_164970(((NU16) 3), filename);
		goto BeforeRet;
	}
	LA4: ;
	LOC6 = 0;
	LOC6 = llstreamopen_178238(f);
	openparsers_219047((&p), fileidx, LOC6);
	result = parseall_219063((&p));
	closeparsers_219056((&p));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tnode191813*, parsetoplevelstmt_219070)(Tparsers219035* p) {
	Tnode191813* result;
	result = 0;
	switch ((*p).skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parsetoplevelstmt_207230((&(*p).parser));
	}
	break;
	case ((NU8) 2):
	{
		result = parsetoplevelstmt_212020((&(*p).parser));
	}
	break;
	case ((NU8) 3):
	{
		internalerror_165234(((NimStringDesc*) &TMP1431));
		result = emptynode_192807;
	}
	break;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit)(void) {
static TNimNode* TMP1086[2];
static TNimNode* TMP1087[4];
NI TMP1089;
static char* NIM_CONST TMP1088[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP797[8];
NTI219035.size = sizeof(Tparsers219035);
NTI219035.kind = 18;
NTI219035.base = 0;
TMP1086[0] = &TMP797[1];
NTI219007.size = sizeof(NU8);
NTI219007.kind = 14;
NTI219007.base = 0;
NTI219007.flags = 3;
for (TMP1089 = 0; TMP1089 < 4; TMP1089++) {
TMP797[TMP1089+2].kind = 1;
TMP797[TMP1089+2].offset = TMP1089;
TMP797[TMP1089+2].name = TMP1088[TMP1089];
TMP1087[TMP1089] = &TMP797[TMP1089+2];
}
TMP797[6].len = 4; TMP797[6].kind = 2; TMP797[6].sons = &TMP1087[0];
NTI219007.node = &TMP797[6];
TMP797[1].kind = 1;
TMP797[1].offset = offsetof(Tparsers219035, skin);
TMP797[1].typ = (&NTI219007);
TMP797[1].name = "skin";
TMP1086[1] = &TMP797[7];
TMP797[7].kind = 1;
TMP797[7].offset = offsetof(Tparsers219035, parser);
TMP797[7].typ = (&NTI207205);
TMP797[7].name = "parser";
TMP797[0].len = 2; TMP797[0].kind = 2; TMP797[0].sons = &TMP1086[0];
NTI219035.node = &TMP797[0];
}

