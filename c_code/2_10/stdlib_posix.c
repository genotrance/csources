/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/types.h>
#undef linux
#undef near
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
TNimType NTI_CHeEDdL3roTPu81s9cOH0Bw_;
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit000)(void) {
NTI_CHeEDdL3roTPu81s9cOH0Bw_.size = sizeof(pid_t);
NTI_CHeEDdL3roTPu81s9cOH0Bw_.kind = 31;
NTI_CHeEDdL3roTPu81s9cOH0Bw_.base = 0;
NTI_CHeEDdL3roTPu81s9cOH0Bw_.flags = 3;
}

