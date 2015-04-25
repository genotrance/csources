/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tlinkedlist132028 Tlinkedlist132028;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct Stringtableobj136012 Stringtableobj136012;
typedef struct Twin32finddata105219 Twin32finddata105219;
typedef struct Tfiletime104245 Tfiletime104245;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq136010 Keyvaluepairseq136010;
typedef struct Keyvaluepair136008 Keyvaluepair136008;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist132028  {
Tlistentry132022* head;
Tlistentry132022* tail;
NI counter;
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
typedef N_STDCALL_PTR(NI32, TY105245) (NI hfindfile, Twin32finddata105219* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY105405) (NI hfindfile);
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
struct  Stringtableobj136012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq136010* data;
NU8 mode;
};
struct Keyvaluepair136008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tlistentry132022  {
  TNimObject Sup;
Tlistentry132022* prev;
Tlistentry132022* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepairseq136010 {
  TGenericSeq Sup;
  Keyvaluepair136008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_132219)(Tlinkedlist132028 list, NimStringDesc* data);
N_NIMCALL(void, prependstr_132419)(Tlinkedlist132028* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_174252)(NimStringDesc* dir, Tlineinfo164338 info);
N_NIMCALL(Stringtableobj136012*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NI, findfirstfile_115416)(NimStringDesc* a, Twin32finddata105219* b);
N_NIMCALL(NimStringDesc*, HEX2F_118492)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(NIM_BOOL, skipfinddata_115436)(Twin32finddata105219* f);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, HEX24_80789)(NI16* s);
N_NIMCALL(void, addpackage_174126)(Stringtableobj136012* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_174023)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_174064)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj136012* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj136012* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_174175)(NimStringDesc* p, Tlineinfo164338 info);
N_NIMCALL(void, message_166204)(Tlineinfo164338 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1669, "*", 1);
STRING_LITERAL(TMP1670, "head", 4);
extern Tlinkedlist132028 searchpaths_155132;
extern TY105245 Dl_105244;
extern TY105405 Dl_105404;
extern NI gverbosity_155137;
extern Tlinkedlist132028 lazypaths_155133;

N_NIMCALL(void, addpath_174012)(NimStringDesc* path, Tlineinfo164338 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_132219(searchpaths_155132, path);
		if (!!(LOC3)) goto LA4;
		prependstr_132419((&searchpaths_155132), path);
	}
	LA4: ;
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

N_NIMCALL(NI, versionsplitpos_174023)(NimStringDesc* s) {
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_174064)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1670))) goto LA3;
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

N_NIMCALL(void, addpackage_174126)(Stringtableobj136012* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_174023(p);
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
			LOC8 = HEX3CHEX2E_174064(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1670));
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

N_NIMCALL(void, addnimblepath_174175)(NimStringDesc* p, Tlineinfo164338 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_132219(searchpaths_155132, p);
		if (!!(LOC3)) goto LA4;
		{
			if (!(((NI) 1) <= gverbosity_155137)) goto LA8;
			message_166204(info, ((NU16) 273), p);
		}
		LA8: ;
		prependstr_132419((&lazypaths_155133), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_174252)(NimStringDesc* dir, Tlineinfo164338 info) {
	Stringtableobj136012* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(92)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += ((NI) 1);
	}
	LA3: ;
	{
		NU8 k_174278;
		NimStringDesc* p_174279;
		Twin32finddata105219 f_174293;
		NI h_174295;
		NimStringDesc* LOC6;
		k_174278 = 0;
		p_174279 = 0;
		memset((void*)(&f_174293), 0, sizeof(f_174293));
		LOC6 = 0;
		LOC6 = HEX2F_118492(dir, ((NimStringDesc*) &TMP1669));
		h_174295 = findfirstfile_115416(LOC6, (&f_174293));
		{
			if (!!((h_174295 == ((NI) -1)))) goto LA9;
			{
				while (1) {
					NU8 k_174297;
					k_174297 = ((NU8) 0);
					{
						NIM_BOOL LOC15;
						NimStringDesc* LOC26;
						NimStringDesc* LOC27;
						LOC15 = 0;
						LOC15 = skipfinddata_115436((&f_174293));
						if (!!(LOC15)) goto LA16;
						{
							if (!!(((NI32)(f_174293.dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA20;
							k_174297 = ((NU8) 2);
						}
						LA20: ;
						{
							if (!!(((NI32)(f_174293.dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA24;
							k_174297 = (NU8)(k_174297 + ((NI) 1));
						}
						LA24: ;
						k_174278 = k_174297;
						LOC26 = 0;
						LOC26 = HEX24_80789(((NI16*) ((&f_174293.cfilename[(((NI) 0))- 0]))));
						LOC27 = 0;
						LOC27 = nosextractFilename(LOC26);
						p_174279 = HEX2F_118492(dir, LOC27);
						{
							NIM_BOOL LOC30;
							LOC30 = 0;
							LOC30 = (k_174278 == ((NU8) 2));
							if (!(LOC30)) goto LA31;
							LOC30 = !(((NU8)(p_174279->data[pos]) == (NU8)(46)));
							LA31: ;
							if (!LOC30) goto LA32;
							addpackage_174126(packages, p_174279);
						}
						LA32: ;
					}
					LA16: ;
					{
						NI32 LOC36;
						LOC36 = 0;
						LOC36 = Dl_105244(h_174295, (&f_174293));
						if (!(LOC36 == ((NI32) 0))) goto LA37;
						goto LA11;
					}
					LA37: ;
				}
			} LA11: ;
			Dl_105404(h_174295);
		}
		LA9: ;
	}
	{
		NimStringDesc* p_174289;
		p_174289 = 0;
		{
			NimStringDesc* key_174304;
			NimStringDesc* val_174306;
			key_174304 = 0;
			val_174306 = 0;
			{
				NI h_174308;
				NI HEX3Atmp_174310;
				NI res_174312;
				h_174308 = 0;
				HEX3Atmp_174310 = 0;
				HEX3Atmp_174310 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				res_174312 = ((NI) 0);
				{
					while (1) {
						if (!(res_174312 <= HEX3Atmp_174310)) goto LA43;
						h_174308 = res_174312;
						{
							NimStringDesc* res_174316;
							if (!!((*packages).data->data[h_174308].Field0 == 0)) goto LA46;
							key_174304 = (*packages).data->data[h_174308].Field0;
							val_174306 = (*packages).data->data[h_174308].Field1;
							{
								if (!eqStrings(val_174306, ((NimStringDesc*) &TMP1670))) goto LA50;
								res_174316 = key_174304;
							}
							goto LA48;
							LA50: ;
							{
								NimStringDesc* LOC53;
								LOC53 = 0;
								LOC53 = rawNewString(key_174304->Sup.len + val_174306->Sup.len + 1);
appendString(LOC53, key_174304);
appendChar(LOC53, 45);
appendString(LOC53, val_174306);
								res_174316 = LOC53;
							}
							LA48: ;
							p_174289 = res_174316;
							addnimblepath_174175(p_174289, info);
						}
						LA46: ;
						res_174312 += ((NI) 1);
					} LA43: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_174347)(NimStringDesc* path, Tlineinfo164338 info) {
	addpathrec_174252(path, info);
	addnimblepath_174175(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit)(void) {
}

