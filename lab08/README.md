# practical_c

실전코딩 2021 여름 학기

## 이름

조재환, 201923718

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