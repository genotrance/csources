/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct Tnode190813 Tnode190813;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident166021 Tident166021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tllstream177204 Tllstream177204;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlib190831 Tlib190831;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY190933 TY190933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo162338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident166021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj160009* r;
Ropeobj160009* heaproot;
};
struct  Ttype190849  {
  Tidobj166015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tsym190843  {
  Tidobj166015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident166021* name;
Tlineinfo162338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Tllstream177204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tlib190831  {
  Tlistentry129022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj160009* name;
Tnode190813* path;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode190813*, getarg_216057)(Tnode190813* n, NimStringDesc* name, NI pos);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(void, invalidpragma_216047)(Tnode190813* n);
N_NIMCALL(void, localerror_164171)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_212058)(Tnode190813* n, NU8 renderflags);
N_NIMCALL(NIM_BOOL, identeq_166484)(Tident166021* id, NimStringDesc* name);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, strarg_216029)(Tnode190813* n, NimStringDesc* name, NI pos, NimStringDesc* default_216034);
N_NIMCALL(NIM_BOOL, boolarg_216038)(Tnode190813* n, NimStringDesc* name, NI pos, NIM_BOOL default_216043);
N_NIMCALL(Tllstream177204*, llstreamopen_177220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_177610)(Tllstream177204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_177686)(Tllstream177204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_177310)(Tllstream177204* s);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
STRING_LITERAL(TMP1422, "startswith", 10);
STRING_LITERAL(TMP1423, "", 0);
STRING_LITERAL(TMP1424, "true", 4);
STRING_LITERAL(TMP1425, "false", 5);
STRING_LITERAL(TMP1426, "leading", 7);
STRING_LITERAL(TMP1427, "trailing", 8);
STRING_LITERAL(TMP1428, "sub", 3);
STRING_LITERAL(TMP1429, "by", 2);

N_NIMCALL(void, invalidpragma_216047)(Tnode190813* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_212058(n, 4);
	localerror_164171((*n).info, ((NU16) 163), LOC1);
}

N_NIMCALL(Tnode190813*, getarg_216057)(Tnode190813* n, NimStringDesc* name, NI pos) {
	Tnode190813* result;
{	result = 0;
	result = NIM_NIL;
	{
		if (!((*n).kind >= ((NU8) 1) && (*n).kind <= ((NU8) 23))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_216086;
		NI HEX3Atmp_216115;
		NI LOC6;
		NI res_216118;
		i_216086 = 0;
		HEX3Atmp_216115 = 0;
		LOC6 = 0;
		LOC6 = sonslen_193403(n);
		HEX3Atmp_216115 = (NI)(LOC6 - ((NI) 1));
		res_216118 = ((NI) 1);
		{
			while (1) {
				if (!(res_216118 <= HEX3Atmp_216115)) goto LA8;
				i_216086 = res_216118;
				{
					if (!((*(*n).kindU.S6.sons->data[i_216086]).kind == ((NU8) 33))) goto LA11;
					{
						if (!!(((*(*(*n).kindU.S6.sons->data[i_216086]).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2)))) goto LA15;
						invalidpragma_216047(n);
					}
					LA15: ;
					{
						NIM_BOOL LOC19;
						LOC19 = 0;
						LOC19 = identeq_166484((*(*(*n).kindU.S6.sons->data[i_216086]).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, name);
						if (!LOC19) goto LA20;
						result = (*(*n).kindU.S6.sons->data[i_216086]).kindU.S6.sons->data[((NI) 1)];
						goto BeforeRet;
					}
					LA20: ;
				}
				goto LA9;
				LA11: ;
				{
					if (!(i_216086 == pos)) goto LA23;
					result = (*n).kindU.S6.sons->data[i_216086];
					goto BeforeRet;
				}
				goto LA9;
				LA23: ;
				LA9: ;
				res_216118 += ((NI) 1);
			} LA8: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_CHAR, chararg_216020)(Tnode190813* n, NimStringDesc* name, NI pos, NIM_CHAR default_216025) {
	NIM_CHAR result;
	Tnode190813* x;
	result = 0;
	x = getarg_216057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_216025;
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).kind == ((NU8) 5))) goto LA6;
		result = ((NIM_CHAR) (((NI) (((NI) ((*x).kindU.S1.intval))))));
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_216047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_216029)(Tnode190813* n, NimStringDesc* name, NI pos, NimStringDesc* default_216034) {
	NimStringDesc* result;
	Tnode190813* x;
	result = 0;
	x = getarg_216057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = copyString(default_216034);
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).kind >= ((NU8) 20) && (*x).kind <= ((NU8) 22))) goto LA6;
		result = copyString((*x).kindU.S3.strval);
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_216047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_216038)(Tnode190813* n, NimStringDesc* name, NI pos, NIM_BOOL default_216043) {
	NIM_BOOL result;
	Tnode190813* x;
	result = 0;
	x = getarg_216057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_216043;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = ((*x).kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		LOC6 = identeq_166484((*x).kindU.S5.ident, ((NimStringDesc*) &TMP1424));
		LA7: ;
		if (!LOC6) goto LA8;
		result = NIM_TRUE;
	}
	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		LOC11 = 0;
		LOC11 = ((*x).kind == ((NU8) 2));
		if (!(LOC11)) goto LA12;
		LOC11 = identeq_166484((*x).kindU.S5.ident, ((NimStringDesc*) &TMP1425));
		LA12: ;
		if (!LOC11) goto LA13;
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		invalidpragma_216047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tllstream177204*, filterstrip_216012)(Tllstream177204* stdin_216014, NimStringDesc* filename, Tnode190813* call) {
	Tllstream177204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	result = 0;
	pattern = strarg_216029(call, ((NimStringDesc*) &TMP1422), ((NI) 1), ((NimStringDesc*) &TMP1423));
	leading = boolarg_216038(call, ((NimStringDesc*) &TMP1426), ((NI) 2), NIM_TRUE);
	trailing = boolarg_216038(call, ((NimStringDesc*) &TMP1427), ((NI) 3), NIM_TRUE);
	result = llstreamopen_177220(((NimStringDesc*) &TMP1423));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* stripped;
			LOC3 = 0;
			LOC3 = llstreamreadline_177610(stdin_216014, (&line));
			if (!LOC3) goto LA2;
			stripped = nsuStrip(line, leading, trailing);
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = ((pattern ? pattern->Sup.len : 0) == ((NI) 0));
				if (LOC6) goto LA7;
				LOC6 = nsuStartsWith(stripped, pattern);
				LA7: ;
				if (!LOC6) goto LA8;
				llstreamwriteln_177686(result, stripped);
			}
			goto LA4;
			LA8: ;
			{
				llstreamwriteln_177686(result, line);
			}
			LA4: ;
		} LA2: ;
	}
	llstreamclose_177310(stdin_216014);
	return result;
}

N_NIMCALL(Tllstream177204*, filterreplace_216004)(Tllstream177204* stdin_216006, NimStringDesc* filename, Tnode190813* call) {
	Tllstream177204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	result = 0;
	sub = strarg_216029(call, ((NimStringDesc*) &TMP1428), ((NI) 1), ((NimStringDesc*) &TMP1423));
	{
		if (!((sub ? sub->Sup.len : 0) == ((NI) 0))) goto LA3;
		invalidpragma_216047(call);
	}
	LA3: ;
	by = strarg_216029(call, ((NimStringDesc*) &TMP1429), ((NI) 2), ((NimStringDesc*) &TMP1423));
	result = llstreamopen_177220(((NimStringDesc*) &TMP1423));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC7;
			NimStringDesc* LOC8;
			LOC7 = 0;
			LOC7 = llstreamreadline_177610(stdin_216006, (&line));
			if (!LOC7) goto LA6;
			LOC8 = 0;
			LOC8 = nsuReplaceStr(line, sub, by);
			llstreamwriteln_177686(result, LOC8);
		} LA6: ;
	}
	llstreamclose_177310(stdin_216006);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit)(void) {
}

