/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#ifndef __clib__
#define __clib__
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
N_NOCONV(void, signalHandler)(int sign);
N_NIMCALL(NI, getRefcount)(void* p);
N_NIMCALL(NCSTRING, hello_echo)(NCSTRING message);
N_CDECL(void, NimMain)(void);
#endif /* __clib__ */
