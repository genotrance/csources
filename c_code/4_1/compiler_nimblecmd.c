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
typedef struct Tlineinfo162338 Tlineinfo162338;
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
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist129028  {
Tlistentry129022* head;
Tlistentry129022* tail;
NI counter;
};
typedef NIM_CHAR TY106377[256];
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
N_NIMCALL(void, addpathrec_172258)(NimStringDesc* dir, Tlineinfo162338 info);
N_NIMCALL(Stringtableobj133012*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, HEX2F_118292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, addpackage_172126)(Stringtableobj133012* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_172023)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_172064)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj133012* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj133012* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_172175)(NimStringDesc* p, Tlineinfo162338 info);
N_NIMCALL(void, message_164204)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1659, ".", 1);
STRING_LITERAL(TMP1660, "..", 2);
STRING_LITERAL(TMP1661, "head", 4);
extern Tlinkedlist129028 searchpaths_153132;
extern NI gverbosity_153137;
extern Tlinkedlist129028 lazypaths_153133;

N_NIMCALL(void, addpath_172012)(NimStringDesc* path, Tlineinfo162338 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_129219(searchpaths_153132, path);
		if (!!(LOC3)) goto LA4;
		prependstr_129419((&searchpaths_153132), path);
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

N_NIMCALL(NI, versionsplitpos_172023)(NimStringDesc* s) {
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_172064)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1661))) goto LA3;
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

N_NIMCALL(void, addpackage_172126)(Stringtableobj133012* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_172023(p);
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
			LOC8 = HEX3CHEX2E_172064(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1661));
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

N_NIMCALL(void, addnimblepath_172175)(NimStringDesc* p, Tlineinfo162338 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_129219(searchpaths_153132, p);
		if (!!(LOC3)) goto LA4;
		{
			if (!(((NI) 1) <= gverbosity_153137)) goto LA8;
			message_164204(info, ((NU16) 273), p);
		}
		LA8: ;
		prependstr_129419((&lazypaths_153133), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_172258)(NimStringDesc* dir, Tlineinfo162338 info) {
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
		NU8 k_172284;
		NimStringDesc* p_172285;
		DIR* d_172299;
		k_172284 = 0;
		p_172285 = 0;
		d_172299 = opendir(dir->data);
		{
			int LOC43;
			if (!!((d_172299 == NIM_NIL))) goto LA8;
			{
				while (1) {
					struct dirent* x_172301;
					NimStringDesc* y_172303;
					x_172301 = readdir(d_172299);
					{
						if (!(x_172301 == NIM_NIL)) goto LA14;
						goto LA10;
					}
					LA14: ;
					y_172303 = cstrToNimstr(((NCSTRING) ((*x_172301).d_name)));
					{
						NIM_BOOL LOC18;
						struct stat s_172305;
						NU8 k_172307;
						LOC18 = 0;
						LOC18 = !(eqStrings(y_172303, ((NimStringDesc*) &TMP1659)));
						if (!(LOC18)) goto LA19;
						LOC18 = !(eqStrings(y_172303, ((NimStringDesc*) &TMP1660)));
						LA19: ;
						if (!LOC18) goto LA20;
						memset((void*)(&s_172305), 0, sizeof(s_172305));
						y_172303 = HEX2F_118292(dir, y_172303);
						k_172307 = ((NU8) 0);
						{
							int LOC24;
							LOC24 = 0;
							LOC24 = lstat(y_172303->data, (&s_172305));
							if (!(LOC24 < ((NI32) 0))) goto LA25;
							goto LA10;
						}
						LA25: ;
						{
							NIM_BOOL LOC29;
							LOC29 = 0;
							LOC29 = S_ISDIR(s_172305.st_mode);
							if (!LOC29) goto LA30;
							k_172307 = ((NU8) 2);
						}
						LA30: ;
						{
							NIM_BOOL LOC34;
							LOC34 = 0;
							LOC34 = S_ISLNK(s_172305.st_mode);
							if (!LOC34) goto LA35;
							k_172307 = (NU8)(k_172307 + ((NI) 1));
						}
						LA35: ;
						k_172284 = k_172307;
						p_172285 = y_172303;
						{
							NIM_BOOL LOC39;
							LOC39 = 0;
							LOC39 = (k_172284 == ((NU8) 2));
							if (!(LOC39)) goto LA40;
							LOC39 = !(((NU8)(p_172285->data[pos]) == (NU8)(46)));
							LA40: ;
							if (!LOC39) goto LA41;
							addpackage_172126(packages, p_172285);
						}
						LA41: ;
					}
					LA20: ;
				}
			} LA10: ;
			LOC43 = 0;
			LOC43 = closedir(d_172299);
		}
		LA8: ;
	}
	{
		NimStringDesc* p_172295;
		p_172295 = 0;
		{
			NimStringDesc* key_172313;
			NimStringDesc* val_172315;
			key_172313 = 0;
			val_172315 = 0;
			{
				NI h_172317;
				NI HEX3Atmp_172319;
				NI res_172321;
				h_172317 = 0;
				HEX3Atmp_172319 = 0;
				HEX3Atmp_172319 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				res_172321 = ((NI) 0);
				{
					while (1) {
						if (!(res_172321 <= HEX3Atmp_172319)) goto LA48;
						h_172317 = res_172321;
						{
							NimStringDesc* res_172325;
							if (!!((*packages).data->data[h_172317].Field0 == 0)) goto LA51;
							key_172313 = (*packages).data->data[h_172317].Field0;
							val_172315 = (*packages).data->data[h_172317].Field1;
							{
								if (!eqStrings(val_172315, ((NimStringDesc*) &TMP1661))) goto LA55;
								res_172325 = key_172313;
							}
							goto LA53;
							LA55: ;
							{
								NimStringDesc* LOC58;
								LOC58 = 0;
								LOC58 = rawNewString(key_172313->Sup.len + val_172315->Sup.len + 1);
appendString(LOC58, key_172313);
appendChar(LOC58, 45);
appendString(LOC58, val_172315);
								res_172325 = LOC58;
							}
							LA53: ;
							p_172295 = res_172325;
							addnimblepath_172175(p_172295, info);
						}
						LA51: ;
						res_172321 += ((NI) 1);
					} LA48: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_172356)(NimStringDesc* path, Tlineinfo162338 info) {
	addpathrec_172258(path, info);
	addnimblepath_172175(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit)(void) {
}

