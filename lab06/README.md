# practical_c

실전코딩 2021 여름 학기

## 이름

조재환, 201923718

## Lab06

### C Preprocessor
1. Include head files
1. Define macro
1. Conditional Compilation
1. Line Control

ex)

A=200

echo A -> A

echo $A -> 200

---
$? : Error in the most recent command

ansi -> c99 -> c11 -> c17

available : c11, c99 

-m32 : 32bit

-m64 : 64bit

-c : generate .o file

-E : generate preprocessing

-g : for debug

-pg : for profile

-0 : Optimization

-m32 m64 : 32bit, 64bit

-------------------------------------
utf-8

LF, CR LF and CR processing

if-trigraphs

long line with "\" -> merge

All comments -> "" (ex) don't use Powerpoint's [""])

---

**tokenization with space**

```
### cpp header file
#pragma once Declared only once
'''
'''
#ifdef _MATH_
#include <math.h>	already declared and therefore not declared
#endif
```
**Multiple lines**
```
	#define NUMBERS 1, \
			2, \
			3
	int x[] = {NUMBERS}; : int x[] = {1,2,3};
```
**Define**
```
foo = X;
#define X 4
bar = X;  -> foo = X, bar = 4
```
```
#define TABLESIZE BUFSIZE
#define BUFSIZE 1024 : TABLESIZE -> BUFSIZE -> 1024
```
```
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37 : TABLESIZE = 37
```
```
#define min(X,Y) ((X) < (Y) ? (X) : (Y))
x = min(a,b); -> ((a) < (b) ? (a) : (b));
z = min(a+28); -> ((a+28) < (*p) ? (a+28) : (*p))
```
**BAD Examples**
```
#define f(a) a*a
b = f(20+13) : 20 + 13 * 20 + 13
```
**Omit parameter (never don't use. just understand)**
```
min(,Y) (() < (Y) ? () : (Y))
min(X,) ((X) < () ? (X) : ())
min(,) (() < () ? () : ())
min((,),) (((,)) < () ? ((,)) : ())
```
**Concatenation**
```
#define COMMAND(name) {#name, name ## _command}
COMMAND(quit) : {"quit", quit_command}
```
**Variadic**
```
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
eprintf("%s:%d: ", input_file, lineno)
    -> fprintf(stderr, "%s:%d: ", input_file, lineno)
#define eprintf(format, ...) fprintf (stderr, format __VA_OPT__(,)__VA_ARGS__)
```
**Predefined Macros**

__FILE__ = Filename

__LINE__ = Line

```
#if, #ifdef, #ifndef, #elif, #else, #endif
```
**Select code with condition**
```
#ifdef _VERSION_
#if _VERSION_ >= 3
  printf("Version is greater or equal than 3\n“);
#elif _VERSION_ == 2
#error VERSION 2 IS NOT SUPPORTED
#endif
#endif  // ifdef _VERSION_
```
**Delete code**
```
#if 0
```
**print error msg**
```
#error "error msg"
```

**linenumber change**
```
#line linenumber filename
```
**#pragma**
```
#pragma once
```