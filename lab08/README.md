# practical_c

실전코딩 2021 여름 학기

## 이름

조재환, 201923718

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
