/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <dirent.h>

#include <sys/types.h>

#include <string.h>

#include <sys/stat.h>

#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tlinkedlist129028 Tlinkedlist129028;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Stringtableobj133012 Stringtableobj133012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq133010 Keyvaluepairseq133010;
typedef struct Keyvaluepair133008 Keyvaluepair133008;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist129028  {
Tlistentry129022* head;
Tlistentry129022* tail;
NI counter;
};
typedef NIM_CHAR TY106380[256];
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
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepairseq133010 {
  TGenericSeq Sup;
  Keyvaluepair133008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_129219)(Tlinkedlist129028 list, NimStringDesc* data);
N_NIMCALL(void, prependstr_129419)(Tlinkedlist129028* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_173266)(NimStringDesc* dir, Tlineinfo163338 info);
N_NIMCALL(Stringtableobj133012*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, HEX2F_118292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, addpackage_173126)(Stringtableobj133012* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_173023)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_173064)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj133012* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj133012* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_173175)(NimStringDesc* p, Tlineinfo163338 info);
N_NIMCALL(void, message_165204)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1660, ".", 1);
STRING_LITERAL(TMP1661, "..", 2);
STRING_LITERAL(TMP1662, "head", 4);
extern Tlinkedlist129028 searchpaths_154132;
extern NI gverbosity_154137;
extern Tlinkedlist129028 lazypaths_154133;

N_NIMCALL(void, addpath_173012)(NimStringDesc* path, Tlineinfo163338 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_129219(searchpaths_154132, path);
		if (!!(LOC3)) goto LA4;
		prependstr_129419((&searchpaths_154132), path);
	}
	LA4: ;
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

N_NIMCALL(NI, versionsplitpos_173023)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = (NI)((s ? s->Sup.len : 0) - ((NI) 2));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (((NI) 1) < result);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			result -= ((NI) 1);
		} LA2: ;
	}
	{
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA7;
		result = (s ? s->Sup.len : 0);
	}
	LA7: ;
	return result;
}

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_173064)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1662))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	i = ((NI) 0);
	j = ((NI) 0);
	vera = ((NI) 0);
	verb = ((NI) 0);
	{
		while (1) {
			NI ii;
			NI jj;
			ii = npuParseInt(a, (&vera), i);
			jj = npuParseInt(b, (&verb), j);
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = (ii <= ((NI) 0));
				if (LOC9) goto LA10;
				LOC9 = (jj <= ((NI) 0));
				LA10: ;
				if (!LOC9) goto LA11;
				result = (((NI) 0) < jj);
				goto BeforeRet;
			}
			LA11: ;
			{
				if (!(vera < verb)) goto LA15;
				result = NIM_TRUE;
				goto BeforeRet;
			}
			goto LA13;
			LA15: ;
			{
				if (!(verb < vera)) goto LA18;
				result = NIM_FALSE;
				goto BeforeRet;
			}
			goto LA13;
			LA18: ;
			LA13: ;
			i += ii;
			j += jj;
			{
				if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA22;
				i += ((NI) 1);
			}
			LA22: ;
			{
				if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA26;
				j += ((NI) 1);
			}
			LA26: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, addpackage_173126)(Stringtableobj133012* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_173023(p);
	name = copyStrLast(p, ((NI) 0), (NI)(x - ((NI) 1)));
	{
		NimStringDesc* version;
		if (!(x < (p ? p->Sup.len : 0))) goto LA3;
		version = copyStr(p, (NI)(x + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_173064(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1662));
	}
	LA1: ;
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

N_NIMCALL(void, addnimblepath_173175)(NimStringDesc* p, Tlineinfo163338 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_129219(searchpaths_154132, p);
		if (!!(LOC3)) goto LA4;
		{
			if (!(((NI) 1) <= gverbosity_154137)) goto LA8;
			message_165204(info, ((NU16) 273), p);
		}
		LA8: ;
		prependstr_129419((&lazypaths_154133), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_173266)(NimStringDesc* dir, Tlineinfo163338 info) {
	Stringtableobj133012* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += ((NI) 1);
	}
	LA3: ;
	{
		NU8 k_173292;
		NimStringDesc* p_173293;
		DIR* d_173308;
		k_173292 = 0;
		p_173293 = 0;
		d_173308 = opendir(dir->data);
		{
			int LOC62;
			if (!!((d_173308 == NIM_NIL))) goto LA8;
			{
				while (1) {
					{
						struct dirent* x_173310;
						NimStringDesc* y_173312;
						x_173310 = readdir(d_173308);
						{
							if (!(x_173310 == NIM_NIL)) goto LA15;
							goto LA10;
						}
						LA15: ;
						y_173312 = cstrToNimstr(((NCSTRING) ((*x_173310).d_name)));
						{
							NIM_BOOL LOC19;
							struct stat s_173314;
							NU8 k_173316;
							LOC19 = 0;
							LOC19 = !(eqStrings(y_173312, ((NimStringDesc*) &TMP1660)));
							if (!(LOC19)) goto LA20;
							LOC19 = !(eqStrings(y_173312, ((NimStringDesc*) &TMP1661)));
							LA20: ;
							if (!LOC19) goto LA21;
							memset((void*)(&s_173314), 0, sizeof(s_173314));
							y_173312 = HEX2F_118292(dir, y_173312);
							k_173316 = ((NU8) 0);
							{
								if (!!(((*x_173310).d_type == ((NI8) 0)))) goto LA25;
								{
									if (!((*x_173310).d_type == ((NI8) 4))) goto LA29;
									k_173316 = ((NU8) 2);
								}
								LA29: ;
								{
									if (!((*x_173310).d_type == ((NI8) 10))) goto LA33;
									k_173316 = (NU8)(k_173316 + ((NI) 1));
								}
								LA33: ;
								k_173292 = k_173316;
								p_173293 = y_173312;
								{
									NIM_BOOL LOC37;
									LOC37 = 0;
									LOC37 = (k_173292 == ((NU8) 2));
									if (!(LOC37)) goto LA38;
									LOC37 = !(((NU8)(p_173293->data[pos]) == (NU8)(46)));
									LA38: ;
									if (!LOC37) goto LA39;
									addpackage_173126(packages, p_173293);
								}
								LA39: ;
								goto LA12;
							}
							LA25: ;
							{
								int LOC43;
								LOC43 = 0;
								LOC43 = lstat(y_173312->data, (&s_173314));
								if (!(LOC43 < ((NI32) 0))) goto LA44;
								goto LA10;
							}
							LA44: ;
							{
								NIM_BOOL LOC48;
								LOC48 = 0;
								LOC48 = S_ISDIR(s_173314.st_mode);
								if (!LOC48) goto LA49;
								k_173316 = ((NU8) 2);
							}
							LA49: ;
							{
								NIM_BOOL LOC53;
								LOC53 = 0;
								LOC53 = S_ISLNK(s_173314.st_mode);
								if (!LOC53) goto LA54;
								k_173316 = (NU8)(k_173316 + ((NI) 1));
							}
							LA54: ;
							k_173292 = k_173316;
							p_173293 = y_173312;
							{
								NIM_BOOL LOC58;
								LOC58 = 0;
								LOC58 = (k_173292 == ((NU8) 2));
								if (!(LOC58)) goto LA59;
								LOC58 = !(((NU8)(p_173293->data[pos]) == (NU8)(46)));
								LA59: ;
								if (!LOC58) goto LA60;
								addpackage_173126(packages, p_173293);
							}
							LA60: ;
						}
						LA21: ;
					} LA12: ;
				}
			} LA10: ;
			LOC62 = 0;
			LOC62 = closedir(d_173308);
		}
		LA8: ;
	}
	{
		NimStringDesc* p_173303;
		p_173303 = 0;
		{
			NimStringDesc* key_173322;
			NimStringDesc* val_173324;
			key_173322 = 0;
			val_173324 = 0;
			{
				NI h_173326;
				NI HEX3Atmp_173328;
				NI res_173330;
				h_173326 = 0;
				HEX3Atmp_173328 = 0;
				HEX3Atmp_173328 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				res_173330 = ((NI) 0);
				{
					while (1) {
						if (!(res_173330 <= HEX3Atmp_173328)) goto LA67;
						h_173326 = res_173330;
						{
							NimStringDesc* res_173334;
							if (!!((*packages).data->data[h_173326].Field0 == 0)) goto LA70;
							key_173322 = (*packages).data->data[h_173326].Field0;
							val_173324 = (*packages).data->data[h_173326].Field1;
							{
								if (!eqStrings(val_173324, ((NimStringDesc*) &TMP1662))) goto LA74;
								res_173334 = key_173322;
							}
							goto LA72;
							LA74: ;
							{
								NimStringDesc* LOC77;
								LOC77 = 0;
								LOC77 = rawNewString(key_173322->Sup.len + val_173324->Sup.len + 1);
appendString(LOC77, key_173322);
appendChar(LOC77, 45);
appendString(LOC77, val_173324);
								res_173334 = LOC77;
							}
							LA72: ;
							p_173303 = res_173334;
							addnimblepath_173175(p_173303, info);
						}
						LA70: ;
						res_173330 += ((NI) 1);
					} LA67: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_173368)(NimStringDesc* path, Tlineinfo163338 info) {
	addpathrec_173266(path, info);
	addnimblepath_173175(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit)(void) {
}

