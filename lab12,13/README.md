# practical_c

실전코딩 2021 여름 학기

## 이름

조재환, 201923718

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
