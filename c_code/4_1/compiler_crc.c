/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NI TY168071[256];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(NI, readbuffer_13515)(FILE* f, void* buffer, NI len);
static N_INLINE(NI32, updatecrc32_168024)(NI8 val, NI32 crc);
N_NOCONV(void, dealloc_6048)(void* p);
static N_INLINE(NI32, updatecrc32_168031)(NIM_CHAR val, NI32 crc);
NIM_CONST TY168071 crc32table_168070 = {((NI) 0),
((NI) 1996959894),
((NI) -301047508),
((NI) -1727442502),
((NI) 124634137),
((NI) 1886057615),
((NI) -379345611),
((NI) -1637575261),
((NI) 249268274),
((NI) 2044508324),
((NI) -522852066),
((NI) -1747789432),
((NI) 162941995),
((NI) 2125561021),
((NI) -407360249),
((NI) -1866523247),
((NI) 498536548),
((NI) 1789927666),
((NI) -205950648),
((NI) -2067906082),
((NI) 450548861),
((NI) 1843258603),
((NI) -187386543),
((NI) -2083289657),
((NI) 325883990),
((NI) 1684777152),
((NI) -43845254),
((NI) -1973040660),
((NI) 335633487),
((NI) 1661365465),
((NI) -99664541),
((NI) -1928851979),
((NI) 997073096),
((NI) 1281953886),
((NI) -715111964),
((NI) -1570279054),
((NI) 1006888145),
((NI) 1258607687),
((NI) -770865667),
((NI) -1526024853),
((NI) 901097722),
((NI) 1119000684),
((NI) -608450090),
((NI) -1396901568),
((NI) 853044451),
((NI) 1172266101),
((NI) -589951537),
((NI) -1412350631),
((NI) 651767980),
((NI) 1373503546),
((NI) -925412992),
((NI) -1076862698),
((NI) 565507253),
((NI) 1454621731),
((NI) -809855591),
((NI) -1195530993),
((NI) 671266974),
((NI) 1594198024),
((NI) -972236366),
((NI) -1324619484),
((NI) 795835527),
((NI) 1483230225),
((NI) -1050600021),
((NI) -1234817731),
((NI) 1994146192),
((NI) 31158534),
((NI) -1731059524),
((NI) -271249366),
((NI) 1907459465),
((NI) 112637215),
((NI) -1614814043),
((NI) -390540237),
((NI) 2013776290),
((NI) 251722036),
((NI) -1777751922),
((NI) -519137256),
((NI) 2137656763),
((NI) 141376813),
((NI) -1855689577),
((NI) -429695999),
((NI) 1802195444),
((NI) 476864866),
((NI) -2056965928),
((NI) -228458418),
((NI) 1812370925),
((NI) 453092731),
((NI) -2113342271),
((NI) -183516073),
((NI) 1706088902),
((NI) 314042704),
((NI) -1950435094),
((NI) -54949764),
((NI) 1658658271),
((NI) 366619977),
((NI) -1932296973),
((NI) -69972891),
((NI) 1303535960),
((NI) 984961486),
((NI) -1547960204),
((NI) -725929758),
((NI) 1256170817),
((NI) 1037604311),
((NI) -1529756563),
((NI) -740887301),
((NI) 1131014506),
((NI) 879679996),
((NI) -1385723834),
((NI) -631195440),
((NI) 1141124467),
((NI) 855842277),
((NI) -1442165665),
((NI) -586318647),
((NI) 1342533948),
((NI) 654459306),
((NI) -1106571248),
((NI) -921952122),
((NI) 1466479909),
((NI) 544179635),
((NI) -1184443383),
((NI) -832445281),
((NI) 1591671054),
((NI) 702138776),
((NI) -1328506846),
((NI) -942167884),
((NI) 1504918807),
((NI) 783551873),
((NI) -1212326853),
((NI) -1061524307),
((NI) -306674912),
((NI) -1698712650),
((NI) 62317068),
((NI) 1957810842),
((NI) -355121351),
((NI) -1647151185),
((NI) 81470997),
((NI) 1943803523),
((NI) -480048366),
((NI) -1805370492),
((NI) 225274430),
((NI) 2053790376),
((NI) -468791541),
((NI) -1828061283),
((NI) 167816743),
((NI) 2097651377),
((NI) -267414716),
((NI) -2029476910),
((NI) 503444072),
((NI) 1762050814),
((NI) -144550051),
((NI) -2140837941),
((NI) 426522225),
((NI) 1852507879),
((NI) -19653770),
((NI) -1982649376),
((NI) 282753626),
((NI) 1742555852),
((NI) -105259153),
((NI) -1900089351),
((NI) 397917763),
((NI) 1622183637),
((NI) -690576408),
((NI) -1580100738),
((NI) 953729732),
((NI) 1340076626),
((NI) -776247311),
((NI) -1497606297),
((NI) 1068828381),
((NI) 1219638859),
((NI) -670225446),
((NI) -1358292148),
((NI) 906185462),
((NI) 1090812512),
((NI) -547295293),
((NI) -1469587627),
((NI) 829329135),
((NI) 1181335161),
((NI) -882789492),
((NI) -1134132454),
((NI) 628085408),
((NI) 1382605366),
((NI) -871598187),
((NI) -1156888829),
((NI) 570562233),
((NI) 1426400815),
((NI) -977650754),
((NI) -1296233688),
((NI) 733239954),
((NI) 1555261956),
((NI) -1026031705),
((NI) -1244606671),
((NI) 752459403),
((NI) 1541320221),
((NI) -1687895376),
((NI) -328994266),
((NI) 1969922972),
((NI) 40735498),
((NI) -1677130071),
((NI) -351390145),
((NI) 1913087877),
((NI) 83908371),
((NI) -1782625662),
((NI) -491226604),
((NI) 2075208622),
((NI) 213261112),
((NI) -1831694693),
((NI) -438977011),
((NI) 2094854071),
((NI) 198958881),
((NI) -2032938284),
((NI) -237706686),
((NI) 1759359992),
((NI) 534414190),
((NI) -2118248755),
((NI) -155638181),
((NI) 1873836001),
((NI) 414664567),
((NI) -2012718362),
((NI) -15766928),
((NI) 1711684554),
((NI) 285281116),
((NI) -1889165569),
((NI) -127750551),
((NI) 1634467795),
((NI) 376229701),
((NI) -1609899400),
((NI) -686959890),
((NI) 1308918612),
((NI) 956543938),
((NI) -1486412191),
((NI) -799009033),
((NI) 1231636301),
((NI) 1047427035),
((NI) -1362007478),
((NI) -640263460),
((NI) 1088359270),
((NI) 936918000),
((NI) -1447252397),
((NI) -558129467),
((NI) 1202900863),
((NI) 817233897),
((NI) -1111625188),
((NI) -893730166),
((NI) 1404277552),
((NI) 615818150),
((NI) -1160759803),
((NI) -841546093),
((NI) 1423857449),
((NI) 601450431),
((NI) -1285129682),
((NI) -1000256840),
((NI) 1567103746),
((NI) 711928724),
((NI) -1274298825),
((NI) -1022587231),
((NI) 1510334235),
((NI) 755167117)}
;
TNimType NTI168015; /* TCrc32 */

static N_INLINE(NI32, updatecrc32_168024)(NI8 val, NI32 crc) {
	NI32 result;
	result = 0;
	result = (NI32)(((NI32) (crc32table_168070[((NI)((NI)(((NI) (crc)) ^ ((NI) ((NI)(((NI) (val)) & ((NI) 255))))) & ((NI) 255)))- 0])) ^ (NI32)((NU32)(crc) >> (NU32)(((NI32) 8))));
	return result;
}

N_NIMCALL(NI32, crcfromfile_168051)(NimStringDesc* filename) {
	NI32 result;
	FILE* bin;
	void* buf;
	NI8* p;
{	result = 0;
	bin = 0;
	result = ((NI32) -1);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&bin, filename, ((NU8) 0), ((NI) -1));
		if (!!(LOC3)) goto LA4;
		goto BeforeRet;
	}
	LA4: ;
	buf = alloc_6001(((NI) 8000));
	p = ((NI8*) (buf));
	{
		while (1) {
			NI readbytes;
			readbytes = readbuffer_13515(bin, buf, ((NI) 8000));
			{
				NI i_168654;
				NI HEX3Atmp_168659;
				NI res_168662;
				i_168654 = 0;
				HEX3Atmp_168659 = 0;
				HEX3Atmp_168659 = (NI)(readbytes - ((NI) 1));
				res_168662 = ((NI) 0);
				{
					while (1) {
						if (!(res_168662 <= HEX3Atmp_168659)) goto LA10;
						i_168654 = res_168662;
						result = updatecrc32_168024(p[(i_168654)- 0], result);
						res_168662 += ((NI) 1);
					} LA10: ;
				}
			}
			{
				if (!!((readbytes == ((NI) 8000)))) goto LA13;
				goto LA6;
			}
			LA13: ;
		}
	} LA6: ;
	dealloc_6048(buf);
	fclose(bin);
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI32, updatecrc32_168031)(NIM_CHAR val, NI32 crc) {
	NI32 result;
	result = 0;
	result = updatecrc32_168024(((NI8)(NU8)(NU)(((NI) (((NU8)(val)))))), crc);
	return result;
}

N_NIMCALL(NI32, HEX3EHEX3C_168540)(NI32 c, NimStringDesc* s) {
	NI32 result;
	result = 0;
	result = c;
	{
		NI i_168555;
		NI HEX3Atmp_168557;
		NI res_168560;
		i_168555 = 0;
		HEX3Atmp_168557 = 0;
		HEX3Atmp_168557 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res_168560 = ((NI) 0);
		{
			while (1) {
				if (!(res_168560 <= HEX3Atmp_168557)) goto LA3;
				i_168555 = res_168560;
				result = updatecrc32_168031(s->data[i_168555], result);
				res_168560 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_crcInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_crcDatInit)(void) {
NTI168015.size = sizeof(NI32);
NTI168015.kind = 34;
NTI168015.base = 0;
NTI168015.flags = 3;
}

