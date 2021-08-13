# practical_c

실전코딩 2021 여름 학기

## 이름

조재환, 201923718

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
