# practical_c

실전코딩 2021 여름 학기

## 이름

조재환, 201923718

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
