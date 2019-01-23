/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
struct NimStringDesc;
struct TGenericSeq;
struct tyObject_LoggercolonObjectType__9bhietBQiofDPLK3sBa0qPQ;
struct RootObj;
struct TNimType;
struct TNimNode;
struct tyObject_RollingFileLoggercolonObjectType__RVbeT0aVEu0OfdbVn1KX0g;
struct tyObject_FileLoggercolonObjectType__IRs4hY6GNcXZ1akep9cf7jA;
struct tyObject_ConsoleLoggercolonObjectType__4w707i5soOx7A2LWkxurNA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc : public TGenericSeq {
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
typedef NU8 tyEnum_Level_pW4mH4lipH6u2NKDGEWdGg;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_LoggercolonObjectType__9bhietBQiofDPLK3sBa0qPQ : public RootObj {
tyEnum_Level_pW4mH4lipH6u2NKDGEWdGg levelThreshold;
NimStringDesc* fmtStr;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
N_NIMCALL(NCSTRING, hello_echo)(NCSTRING message);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, add_XyS0BXa1E5ylXzhvUQlY9cg)(NimStringDesc*& x, NCSTRING y);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, nimGC_setStackBottom)(void* theStackBottom);
N_NIMCALL(void, chckNilDisp)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, log_rG6osqE0luZSJUlLifxyVg)(tyObject_RollingFileLoggercolonObjectType__RVbeT0aVEu0OfdbVn1KX0g* logger, tyEnum_Level_pW4mH4lipH6u2NKDGEWdGg level, NimStringDesc** args, NI argsLen_0);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NIM_BOOL, isObjWithCache)(TNimType* obj, TNimType* subclass, TNimType** cache);
N_LIB_PRIVATE N_NOINLINE(NIM_BOOL, isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg)(TNimType* obj, TNimType* subclass, TNimType** cache);
N_LIB_PRIVATE N_NIMCALL(void, log_m2nFIuqvJSzncok28dY8Kg)(tyObject_FileLoggercolonObjectType__IRs4hY6GNcXZ1akep9cf7jA* logger, tyEnum_Level_pW4mH4lipH6u2NKDGEWdGg level, NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(void, log_A500h04AJ9cHQgD9ad6BzDYw)(tyObject_ConsoleLoggercolonObjectType__4w707i5soOx7A2LWkxurNA* logger, tyEnum_Level_pW4mH4lipH6u2NKDGEWdGg level, NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(void, log_2EMZHteAOCjvMWyiczAS7w)(tyObject_LoggercolonObjectType__9bhietBQiofDPLK3sBa0qPQ* logger, tyEnum_Level_pW4mH4lipH6u2NKDGEWdGg level, NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(void, systemDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, systemInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_posixInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_osDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_osInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_loggingDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_loggingInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TNimType NTI_RVbeT0aVEu0OfdbVn1KX0g_;
extern TNimType NTI_IRs4hY6GNcXZ1akep9cf7jA_;
static TNimType* Nim_OfCheck_CACHE7[2];
extern TNimType NTI_4w707i5soOx7A2LWkxurNA_;
extern TNimType NTI_9bhietBQiofDPLK3sBa0qPQ_;
static TNimType* Nim_OfCheck_CACHE8[2];
STRING_LITERAL(TM_M6NC2A5LzDhCH7omMS7LSg_3, "clib initialized", 16);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_M6NC2A5LzDhCH7omMS7LSg_2 = {((NimStringDesc*) &TM_M6NC2A5LzDhCH7omMS7LSg_3)}
;
STRING_LITERAL(TM_M6NC2A5LzDhCH7omMS7LSg_4, " echo", 5);
STRING_LITERAL(TM_M6NC2A5LzDhCH7omMS7LSg_5, "Nim echo result: ", 17);

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
{		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[(*dest).len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).len + ((NI) 1)))));
		(*dest).len += (*src).len;
}	}
	LA3_: ;
}

static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
{		result = "";
}	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}

static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem(p, ((int) 0), size);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
{		T1_ = ((NI) 0);
}	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA9_;
{		callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g();
}	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(NCSTRING, hello_echo)(NCSTRING message) {
	NCSTRING result;
	NimStringDesc* fmtRes;
	tyArray_nHXaesL0DJZHyVS07ARPRA T1_;
	NimStringDesc* fmtRes_2;
	nimfr_("hello_echo", "clib.nim");
	result = (NCSTRING)0;
	nimln_(11, "clib.nim");
	fmtRes = rawNewString(((NI) 24));
	nimln_(268, "strformat.nim");
	add_XyS0BXa1E5ylXzhvUQlY9cg(fmtRes, message);
	nimln_(11, "clib.nim");
	fmtRes = resizeString(fmtRes, 5);
appendString(fmtRes, ((NimStringDesc*) &TM_M6NC2A5LzDhCH7omMS7LSg_4));
	result = nimToCStringConv(fmtRes);
	nimln_(12, "clib.nim");
	nimZeroMem((void*)T1_, sizeof(tyArray_nHXaesL0DJZHyVS07ARPRA));
	fmtRes_2 = rawNewString(((NI) 35));
	fmtRes_2 = resizeString(fmtRes_2, 17);
appendString(fmtRes_2, ((NimStringDesc*) &TM_M6NC2A5LzDhCH7omMS7LSg_5));
	nimln_(268, "strformat.nim");
	add_XyS0BXa1E5ylXzhvUQlY9cg(fmtRes_2, result);
	T1_[0] = copyString(fmtRes_2);
	echoBinSafe(T1_, 1);
	popFrame();
	return result;
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	nimGC_setStackBottom(locals);
}

static N_INLINE(NIM_BOOL, isObjWithCache)(TNimType* obj, TNimType* subclass, TNimType** cache) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!(obj == subclass)) goto LA3_;
{		result = NIM_TRUE;
		goto BeforeRet_;
}	}
	LA3_: ;
	{
		if (!((*obj).base == subclass)) goto LA7_;
{		result = NIM_TRUE;
		goto BeforeRet_;
}	}
	LA7_: ;
	{
		if (!(cache[(((NI) 0))- 0] == obj)) goto LA11_;
{		result = NIM_FALSE;
		goto BeforeRet_;
}	}
	LA11_: ;
	{
		if (!(cache[(((NI) 1))- 0] == obj)) goto LA15_;
{		result = NIM_TRUE;
		goto BeforeRet_;
}	}
	LA15_: ;
	result = isObjSlowPath_yEa9cUwzxhGRtg9cspcfCIHg(obj, subclass, cache);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, log_3UB9b0flreHbZSduHV9cBGOA)(tyObject_LoggercolonObjectType__9bhietBQiofDPLK3sBa0qPQ* logger, tyEnum_Level_pW4mH4lipH6u2NKDGEWdGg level, NimStringDesc** args, NI argsLen_0) {
	nimfr_("log", "logging.nim");
	nimln_(67, "chcks.nim");
	chckNilDisp(logger);
	nimln_(143, "logging.nim");
	{
		if (!((logger) && ((*logger).m_type == (&NTI_RVbeT0aVEu0OfdbVn1KX0g_)))) goto LA3_;
{		if (logger) chckObj((*logger).m_type, (&NTI_RVbeT0aVEu0OfdbVn1KX0g_));
		log_rG6osqE0luZSJUlLifxyVg(((tyObject_RollingFileLoggercolonObjectType__RVbeT0aVEu0OfdbVn1KX0g*) (logger)), level, args, argsLen_0);
}	}
	goto LA1_;
	LA3_: ;
	{
		if (!((logger) && (isObjWithCache((*logger).m_type, (&NTI_IRs4hY6GNcXZ1akep9cf7jA_), Nim_OfCheck_CACHE7)))) goto LA6_;
{		if (logger) chckObj((*logger).m_type, (&NTI_IRs4hY6GNcXZ1akep9cf7jA_));
		log_m2nFIuqvJSzncok28dY8Kg(((tyObject_FileLoggercolonObjectType__IRs4hY6GNcXZ1akep9cf7jA*) (logger)), level, args, argsLen_0);
}	}
	goto LA1_;
	LA6_: ;
	{
		if (!((logger) && ((*logger).m_type == (&NTI_4w707i5soOx7A2LWkxurNA_)))) goto LA9_;
{		if (logger) chckObj((*logger).m_type, (&NTI_4w707i5soOx7A2LWkxurNA_));
		log_A500h04AJ9cHQgD9ad6BzDYw(((tyObject_ConsoleLoggercolonObjectType__4w707i5soOx7A2LWkxurNA*) (logger)), level, args, argsLen_0);
}	}
	goto LA1_;
	LA9_: ;
	{
		if (!((logger) && (isObjWithCache((*logger).m_type, (&NTI_9bhietBQiofDPLK3sBa0qPQ_), Nim_OfCheck_CACHE8)))) goto LA12_;
{		log_2EMZHteAOCjvMWyiczAS7w(logger, level, args, argsLen_0);
}	}
	goto LA1_;
	LA12_: ;
	LA1_: ;
	popFrame();
}
void PreMainInner(void) {
	stdlib_posixInit000();
	stdlib_timesInit000();
	stdlib_osInit000();
	stdlib_loggingInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	inner = PreMainInner;
	systemDatInit000();
	initStackBottomWith((void *)&inner);
	systemInit000();
	stdlib_timesDatInit000();
	stdlib_osDatInit000();
	stdlib_loggingDatInit000();
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
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

N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void) {
{
	TFrame FR_; FR_.len = 0;
}
	nimfr_("clib", "clib.nim");
	nimln_(7, "clib.nim");
	echoBinSafe(TM_M6NC2A5LzDhCH7omMS7LSg_2, 1);
	popFrame();
}
