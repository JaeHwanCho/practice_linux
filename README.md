# practical_c

실전코딩 2021 여름 학기

## 이름

조재환, 201923718

## Lab01

### 터미널

단말기의 개념에 대해서 배움
* Terminal
* 호스트 - 터미널 연결상태

### stdio
* stdio.h 파일은 /usr/include 에 있음
* stdin, stdout, stderr 등은 FILE *

## Lab02

### Redirection

				 CPU
				  l
    Input Device	->	Memory	->	Output Deveices
			    	  l
			   Storage Devices

* stdin -> keyboard
* stdout, stderr -> screen

* stdin	: 0< = <
* stdout: 1> = >
* stderr: 2>
* stdout, stderr : &>

---
### Buffer
* Buffering : The file is in the buffer instead of going to the disk

* setvbuf() : Buffer Settings	
	* _IONBF = unbuff
	* _IOLBF = line buff
	* _IOFBF = fully buff

## Lab03

**tty**: let me know my pts (virtual number)

Search Terms -> Wikipedia

Search Method -> Google

### Pipe
Work by creating a new shell

wc : word count
-> It's in line, word, letter order.

grep : Command to find 


**;** : Runs the command before and then the command after

At this point, the previous command executes the command after the error.

**&&** : Runs the command before and then the command after

At this point, it is not run the command after the previous command fails

**|** : It runs simultaneously.

---
	        stdin	stdout/stdin  stdout/stdin   stdout
	 keyboard -> program1 -> program2 -> program3	-> display
	        stderr					-> display
	                        stderr			-> display
	                                  stderr	-> display
---

**ps**: View Background Operations

**jobs** : View process

**fg** : Run process at foreground

**bg**, **&** : Run process at background

**|****&****;**: Parallel work

**kill id** : kill id process

**kill -9 id**: Definitely kills the id process.

**^C** : Interrupt

**^Z** : Suspend Stop working in the foreground and send to the background

**^D** : End of file


**fg %n**		Imported background tasks for n into the foreground

## Lab04

**Import files from PC** : scp file name account: location

  - ex) scp aaaa.txt pc-u17@git.ajou.ac.kr:./practical_c/lab04

**pushd** : Save current location

**popd** : Go to Saved Location

**od** : View files in octal numbers

**strings** :	search for strings

**wget** : Imported file for link address

find . -name "*.out" -exec file {} \;


**-R**(option) : (R :Recursive) All Down to Recurses

**tar cvf lab01.tar lab01** : Compress lab01 to lab01.tar

**tar xvf lab01.tar** : decompress lab01.tar

## Lab05

### C

**sudo su** : Become a Superuser

**chown -R** : owner Rights

**chgrp -R** : group Rights

---

### d/rwx/rwx/rwx
file type/owner(user)/group/others

at

Read Permission / Write Permission / Execute Permission

---

### gcc compile options
**cpp** = c preprocessor ("#")

**-c** : generate .o file

**-g** : for debug

**-pg** : for profile

**-0** : Optimization

**gdb** : debugging

---

**localization** (= l10n)

**internationalization** (= l18n)

**cc -o main** : main.c 

**cc -c main.c** : make o file

viEditor also modifies o-files and executables.

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

## Lab07

### double (*f[10])(int const *a, double (*g[10])(double h));

It's a function.

Return is Double

Two parameters

const modifies int.

f라고 하는 함수의 포인터 어레이입니다.

f는	// 매개변수를 상수 정수 가리키는 포인터 a와 // g라는 매개변수 h 1개있는 포인터함수의 크기가 10인 어레이 // 2개를 매개변수로 갖는다.

리턴 value는 double

---
### Pointer

%val - Address of val

*ptr - Value in address val

int *a // c++ increment by 4

long long *b // c++ increment by 8

void *c // c++ increment by 1

**unsigned, const Position**

-> unsigned int const a;

---
### Memory model

Automatic : Basic

static : same place throughout the life of the program

Manual : malloc and free

| | Static | Auto | Manual |  
|:--- | :---: | :---: | :---: |  
| static to zero on startup | O |  |  | 
| Scope set values on init | O | O |  | 
| Can set values on init | O | O |  | 
| Can set nonconstant values on init |  | O |  | 
| sizeof measures array size | O | O |  | 
| persists accross function calls | O |  | O | 
| can be global | O |  | O | 
| Array size can be set at runtime |  | O | O | 
| Can be resized |  |  | O | 

**const**

int const A : A constant integer

int const *A : A (variable) pointer to a constant integer

int * const A : A constant pointer to a (variable) integer

int * const * A : A pointer to a constant pointer to an integer

int const * * A : A pointer to a pointer to a constant integer

int const * const * : A pointer to a constant pointer to a constant integer

---

**Array vs Pointer**

**Array**

1. Allocate more free space
1. bind allocate space

**Pointer**

1. just pointer
1. a = malloc(16*4);

---

**How to change const**
```
a[0] = 100;
int const *b = a;
*(int *)b = 200;
-> a[0] = 200
```

---
**Pointer**

function pointer
```
float (*f)(int, double);
void (*f)(int a);
```
---

[unsigned] char 0~255(2^8-1)

[signed] char -128(-2^7) ~ 127(2^7-1)

long long : 64bit

int : 32bit

short : 16bit

char : 8bit

---

**representation of a number**

#### (sign*-1 + 1)*(1.0 + fraction * 2*-23) * 2^(exp-127)

| | sign | exp | fraction |  
|:---: | :---: | :---: | :---: |  
| float | 1bit | 8bit | 23bit | 
| half | 1bit | 5bit | 11bit | 
| double | 1bit | 11bit | 53bit | 
| quadruple | 1bit | 15bit | 113bit | 


| b7 | b6 | b5 | b4 | b3 | b2 | b1 | b0 | 
|:---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |  
| X | 2^2 | 2^1 | 2^0 |  2^-1 | 2^-2 | 2^-3 | 2^-4 |

If b7 is sign bit -1, change to 2 remuneration

---

* plus / minus
	* iv = iv_a + iv_b

* multiple
	* iv = iv_a * iv_b * 2^-q

---

### 실습

**에러가 나거나 값이 안나오는 이유**

파일형을 바꾸는 과정에서 숫자를 곱하거나 나누게 되는데,

그 때, 범위를 나가게 되어 값에 에러가 나거나

값으로 나눠주며 int에서 0으로 바뀌면서 문제가 발생한다.

##### 추가

fx_s2308.c 에서 8388607까지 가능하고, 8388608부터 에러가 발생한다.

fx_test.c에서 추가적인 몇가지를 테스트해보았는데 곱하는 과정과 나누는 과정에서 문제가 발생하는 것을 확인하였다.

최댓값 2^23 - 2^(-8), 최솟값 -2^23의 범위와 일치한다.

## Lab08

### Tip
Put as many parentheses as we can.

Command to find parentheses : %

### Pointer
When using a pointer, you need () to tie the pointer.

### Debugging
in VS
 - Debug : Have -g option
 - Release : Don't have -g

#### Macros are faster than functions in terms of performance.
 - Overflow

#### Shift operations are faster than arithmetic operations.
##### Multiplication and addition are about the same.

---

```
#define fx_mul2(a,b)    (fromFloat(((toFloat(a))*(toFloat(b)))))
#define fx_mul3(a,b)    (((a)*(b))>>FX_QNUM)
#define fx_mul4(a,b)    ((((long long)(a))*((long long)(b)))>>FX_QNUM)
#define fx_mul5(a,b)    (((a)>>FX_QNUM_HALF1)*((b)>>FX_QNUM_HALF2))
```

mul2	It does everything it can, but it takes a long time to calculate.

mul3	Overflow occurs too quickly

mul4	Took too long at 32 bits

mul5	Mul5 is more advantageous than Mul4 when the number greater than 1 comes because it is faster than Mul4.

---

### Typecasting

**"+"**

int + int = int

int + float = float

float + float = float

**"-"**

int - int = int

int - float = float

float - float = float

**"*"**

int * int = int

int * float = float

float * float = float

**"/"**

int / int = float

int / float = float

float / float = float

**"%"**

int % int = int

---
### gdb Debugging

cc -g FILENAME1.c

gdb FILENAME2.out

list : Show the code

list NUMBER : Show the code near line NUMBER

run : Run the file

break NUMBER : Stop at NUMBER

next : run next code

step : run next code

cont : Continue the file

print @ : print @'s value

## Lab09

### what make differnet performance
#### Golden Rule

Speed : CPU > Memory > Storage > IO

Register > Cache > Memory

Locality

Pipeline - Multiple operations at the same time (in Computer architecture)

Error - overflow (Performance slows down.)

function

---

**Depend on HW**
 - 1cycle execution : +, -, >>, <<, >?

---

Ex)     **a = a + b;**

| unsigned int a, b; | signed short a, b; |
|:---: | :---: |  
| ADD r0, r0, r1 | ADD r2, r0, r1 | 
|  |  LSL r2, r2, #16 | 
|  |  ASR r0, r2, #16 |

**signed short** is slower than **unsigned int**

---

### How to profile and optimize

#### GNU Profiler

**cc -pg "c file name(.c)"**
 - Compile c file with pg option
 - cc -pg fx_s2308.c

**./"Execute file name(.out)" <<< "A_value B_value"**
 - Execute file and insert A_value and B_value
 - ./a.out <<< "0.1 0.1"

**gprof "Execute file name(.out)" gmon.out > "prof file name(.prof)"**
 - make profile ".prof"
 - gprof a.out gmon.out > a.prof

## Lab10

### Tip

If you want to use the command as a parameter
ls -> `ls`

| Symbol | call |
|:---: | :---: |  
| * | Asterisk, star | 
| & | Ampersand | 
| ` | Grave | 
| ~ | Tilde | 
| ! | Exclamation | 
| # | Number Sign, Sharpp, Crosshatch | 
| $ | Dollar Sign | 
| % | Percent Sign | 
| ^ | Caret | 
| - | Hyphen, Dash |
| _ | Underscore, Low Dash |
| = | Equals Sign |
| " | Quotation Mark |
| ' | Apostrophe |
| : | Colon |
| ; | Semicolon |
| , | Comma |
| . | Period, Dot |
| ? | Question Mark |
| / | Slash |
| | | Vertical Bar, Bat |
| \ | Backslash |
| ( | Left Parenthesis |
| ) | Right Parenthesis |
| { | Left Brace |
| } | Right Brace |
| [ | Left Braket |
| ] | Right Braket |
| < | Left Angle Braket |
| > | Right Angle Braket |

grep main *
-> find main's location

grep * | wc
-> if line is 2 -> main is 1

!ls *c : Briefly out of vi Editor

---

### Make
#### Makefile
**in Makefile**
```
main.o : main.c main.h

(tab) cc -c main.c -o main.o
```
* When you need "make" but you can't.

    * "touch *.c" and "make" change the time of the c-file to the present, enabling "make".


$@ -> main.o (target)

$< -> main.c (prerequisite) (dependency)

&^ -> main.c, main.h (all)

&? -> updated file (newer)

&% -> archive member

#### CMake

1. make file "CMakeLists.txt"

1. ADD_EXECUTABLE(fx_main fx_main.c fx_test.c fx_s2308.c)

1. cmake .

1. make

## Lab11

### Tip

#### Important
**Logout must be done after using ssh.**

Only administrators can increase the priority

Lowering the priority is "nice {command}"

---
### Context Switching
A computer can only do one task at a time.

To solve this problem, several tasks are executed alternately in a very short period of time.



### Core vs Thread
**Core** is a physical CPU.(Actual)

**Thread** is a logical CPU.(Virtual)

CPU -> Processor

**fork, clone : Creating a process**

These days, we use clone more than fork.

Because fork is dangerous.

exit : Commands to terminate a process

---

**Thread.h** - C11 - Visual Studio(microsoft), OS
```
#include <threads.h>
#include <stdio.h>

int run(void *arg)
{
    printf("Hello world of C11 threads.");
    return 0;
}

int main(int argc, const char *argv[])
{
    thrd_t thread;
    int result;
    thrd_create(&thread, run, NULL);
    thrd_join(&thread, &result);
    printf("Thread return %d at the end\n", result);
}
```

---

**pthread.h** - POSIX - IEEE, GNU, gcc
```
#include <pthread.h>
#include <stdio.h>

void *run (void *arg)
{
    printf("Hello world of POSXI threads.");
    return 0;

}

int main()
{
	pthread_t thread;
	int result; 
	pthread_create(&thread, NULL, run, NULL );
	pthread_join(thread, &result);
	printf("Thread return %d at the end\n", result);
}
```


#### pthread.h

int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg);

const pthread_attr_t *attr -> NULL

- because very difficult task

pthread_create() : Create Threads

pthread_join() : Wait until the thread is terminated, and when it is terminated, release the resource.

**mutex** - Use of "mutax" due to "static"
```
 static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
        static int a;
        if (pthread_mutex_lock(&mutex) == 0)
        {
                ++a;
                pthread_mutex_unlock(&mutex);
        }
        return(a);
```

## Lab12

### Suresoft Special Lecture

jshan@suresofttech.com

---

**Software Testing -> for Safety**

---

#### Software Testing

소프트웨어의 내부 구조 파악 여부

**White Box**
- 소스코드의 구조를 기반으로 테스트를 수행하는 기법
- 코드의 수행 경로, 불필요한 코드 혹은 테스트 되지 못한 부분을 확인

**Black Box**
- 소프트웨어의 내부를 보지않고 기능의 유효성을 판단하는 테스트 기법

소프트웨어의 실행 여부

**Static**
- 프로그램을 실행하지 않고 소스 코드 전체 또는 일부를 분석하는 기법

**Dynamic**
- SW를 실행하여 다양한 입력 값에 대해 기대하는 결과 값이 나타나는 지 확인하는 테스팅 기법

|  | Black Box Testing | White Box Testing |
|:---: | :---: | :---: | 
| Static Testing | Documentation Review | Source code Review | 
| Dynamic Testing |  Specification based Testing | Structural Testing | 

#### Summary

SW Testing : 소프트웨어 개발 과정에서의 발생할 수 있는 오류들을 가정하고, 그러한 오류들을 발견해 내는 활동

소스를 본다 -> Black Box

소스를 안본다 -> White Box

소스를 실행한다 -> 동적 Test

소스를 실행안한다 -> 정적 Test

---

#### 소프트웨어 기능안전
**기능안전(Functional Safety)**
- 시스템이나 장비의 총체적 안전의 일환으로 하드웨어 고장, 소프트웨어 오류, 운영자 오류 그리고 환경적인 영향 등에 대한 안전 관리
- 1998년 IEC 61508 : 기능안전(Functional Safety) 관련 국제표준

**소프트웨어 산업의 선순환 구조**

- 개발이 늘어나고

- 검증이 늘어나고

- 품질이 좋아지고

- 투자가 늘어난다.

---

#### 정적 테스트
**소프트웨어를 실행시키지 않고 결함을 검출하는 방법**
- 정적 분석 = 정적 테스트

정적 테스트는 검사 결과와 특정한 판단 기준을 비교하여 오류를 찾는다.

- Syntax
    - 소스코드의 문법 결함 발견
- Semantic
    - 의미적인 결함 발견

**장점**
- 빠른 시간에 소프트웨어 결함 검출
- 수행 노력이 작다.

**단점**
- 잘못된 패턴 판단으로 False 알림 가능
- 기능 동작 테스트 불가

**이슈사항**

- 소프트웨어에서 검출하고자 하는 오류 유형에 맞는 수행 방식 선정

- 소프트웨어에 요구되는 품질 수준에 따라 테스트 종료 기준 설정 필요

**정적 테스팅 수행**

Review : 계획부터 후속처리확인 과정까지 사람이 직접 테스트하는 방식

Syntax : 소프트웨어 소스코드에 존재하는 문법적인 오류를 미리 정해놓은 패턴의 기준으로 검사하여 발견하는 정적 테스트 방법

자동화 도구를 사용하여 테스트하는 것이 효율적

---

#### 동적 테스트
**소프트웨어 실행을 통하여 소프트웨어에 존재하는 결함을 검출하는 방법**
동적 테스트를 위한 조건
- 소프트웨어가 실행 가능한 환경 구축
- 소프트웨어를 실행하기 위한 입력, 수행 결과를 관찰하기 위한 방법

**구분**

단위 동적 테스트 -> 통합 동적 테스트 -> 시스템 동적 테스트

**장점**
- 소프트웨어 기능 동작에 대한 정밀한 검증 가능
- 테스트 수행결과의 False 알림 빈도 낮음

**단점**
- 결함 검출 과정 시간과 노력 필요

**이슈사항**
- 소프트웨어에서 실행시 입력할 적절한 테스트케이스 설계 전략 선정 필요
- 소프트웨어에 요구되는 품질 수준에 따라 테스트 종료 기준 설정 필요

**테스트 케이스 설계 전략 방법**
- 동등 클래스 분할
- 경계값 분석
- 상태전이 기반
- 경로 기반

**종료 기준**
- **테스트 커버리지**
    - **테스트의 완성도를 나타내는 정량적 수치**
    - 테스트 종료 기준 선정 시 테스트 종류에 따라 적절한 테스트 커버리지를 선택

**테스트 커버리지 종류**
- 단위 테스트
    - 구문 커버리지
        - 구문의 수행한 정도
    - 조건 커버리지
        - 개별 조건에 대해 수행한 정도
    - 결정(분기) 커버리지
        - 조건문, 분기문의 수행한 정도
    - 변경조건/결정 커버리지
        - 각 개별 조건이 다른 조건의 영향을 받지 않고 전체 조건의 결과에 독립적으로 미치는 영향의 정도

- 통합 테스트
    - 함수 커버리지
        - 함수의 호출에 대해 수행한 정도
    - 함수 콜 커버리지
        - 함수의 호출 지점에 대해 수행한 정도
- 시스템 테스트
    - 명세 커버리지
        - 기술된 요구명세에 대하여 수행한 정도

** MC/DC Coverage **
- **변경 조건/결정 커버리지**
- 조건 커버리지와 분기 커버리지를 보완해서 만든 커버리지

1. 결과를 다르게 만드는 조건들을 모아서 테스트 케이스를 만든다.

1. 그 케이스들을 소프트웨어가 모두 통과 : MC/DC 커버리지 = 100%

---

### 실습

#### CI

![pic_0](https://git.ajou.ac.kr/Jaehwan/practical_c/-/raw/master/jpg/0.jpg)

lab10의 파일을 CodeScroll Code Inspector 3.7로 실행시키게 되면 위와 같은 메세지로

위배되는 갯수 165개와 자동수정가능한 갯수 16개를 알려준다.

자동수정 되는 파일들을 보면

![pic_1](https://git.ajou.ac.kr/Jaehwan/practical_c/-/raw/master/jpg/1.jpg)

![pic_2](https://git.ajou.ac.kr/Jaehwan/practical_c/-/raw/master/jpg/2.jpg)

위와 같이 // 로 주석한 것들을 /* */ 을 통해 주석으로 바꿔준다.


![pic_3](https://git.ajou.ac.kr/Jaehwan/practical_c/-/raw/master/jpg/3.jpg)

그리고 위와 같이 {}로 안묶인 것들을 {}로 묶어주는 작업을 해준다.

그리고 수동으로 몇가지를 고쳐준다.

a나 i를 통해 반복적인 변수명을 바꿔주는 작업, 빈 괄호에 void를 적어주는 작업 등등을 하게 되면

그리고 수동으로 고칠수 있는 작업을 하게 되면 104개까지 줄일 수 있게 된다.

- 남은 작업들은 float, int, long long 을 사용하여 오류가 생긴 42개

- 이전에 선언을 해주지 않아 생긴 7개

- 사용하지 않았지만 extern fixed fx_divN(~~) 을 통해 미리 정의해준 6개

- int -> float로 타입을 변경하며 생긴 7개

- int -> long long으로 타입을 변경하며 생긴 1개

- float -> int로 타입을 변경하며 생긴 4개

- print 호출로 인한 오류 15개

- 매크로 사용으로 인한 오류 7개

- printf는 금지되어 생긴 오류 14개와 include <stdio.h> 가 금지된 파일로 생긴 오류 1개

이 작업을 통해 많은 미스라 규칙을 알 수 있다.

#### CT

lab10의 파일을 CodeScroll Controller Tester 3.5로 실행시키게 되면

![pic_9](https://git.ajou.ac.kr/Jaehwan/practical_c/-/raw/master/jpg/9.jpg)

위와 같은 커버리지를 보여준다.

그리고 제어 흐름 그래프를 보고싶다면,

![pic_6](https://git.ajou.ac.kr/Jaehwan/practical_c/-/raw/master/jpg/6.jpg)

![pic_7](https://git.ajou.ac.kr/Jaehwan/practical_c/-/raw/master/jpg/7.jpg)

![pic_8](https://git.ajou.ac.kr/Jaehwan/practical_c/-/raw/master/jpg/8.jpg)
위와 같은 제어 흐름 그래프를 보여준다.

fx_div1, fx_div2, fx_div3 의 제어흐름 그래프는 같고

test_div1, test_div2, test_div3, test_mul2, test_mul3, test_mul4, test_mul5의 제어흐름 그래프는 같다.

현재 if문들이 없어 MC/DC 등의 조사는 힘들고

커버리지를 100% 채우기엔 test 함수들의 반복 횟수로 인해 timeout이 발생해 100%를 채우기는 불가능하다.

---

CI 프로그램은 2500만원, CT 프로그램을 5000만원이라고 한다.

이번 2일간의 슈어소프트 팀장님의 강의와 소프트웨어 검사를 해주는 프로그램을 실제로 경험해보고

소프트웨어를 보다 안전하게 만드는 것의 중요함을 다시 깨닫는 경험이 되었다.

#### **Software Testing -> for Safety**
