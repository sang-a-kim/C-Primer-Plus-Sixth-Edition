# C 첫걸음
## C 프로그램 살펴보기
### # include 지시자와 헤더 파일
#### #include
* #include문은 C 전처리기 지시자(preprocessor directive)의 한 예이다.
> 전처리란?
> 일반적으로 C 컴파일러는 컴파일 하기 전에 소스 코드를 대상으로 몇 가지 사전 작업을 실시한다. 이 작업을 전처리라 한다.
#### 헤더 파일
* stdio.h의 이름은 standard input/output header이다.
* C 사용자들은 파일의 상단에 놓이는 정보의 집합을 헤더(header)라고 부른다.
* 헤더 파일에는 컴파일러가 최종 실행 프로그램을 만드는 데 사용하는 정보가 들어있다. 그러나 실제 코드는 헤더 파일이 아니라, 미리 컴파일된 코드로 구성된 라이브러러리 파일에 들어 있다. 헤더 파일은 컴파일러가 프로그램을 바르게 구성하도록 안내하는 역할을 한다. 
### main() 함수
* C 프로그램은 언제나 main()이라는 함수로부터 실행을 시작한다.
* main()은 반드시 있어야 한다.
> 함수는 C 프로그램을 구성하는 기본 모듈이다.
### 선언문
* C에서 모든 변수들은 사용하기 전에 미리 선언해야 한다.
* 전통적으로 C 언어는 선언 앞에 다른 종류의 문장이 오는 것을 허용하지 않고, 변수를 블록의 시작 위치에 선언할 것을 요구했다.
### 변수명
* 변수 이름에는 대문자, 소문자, 숫자, 밑줄(_)을 임의로 조합하여 사용할 수 있다.
* 첫 문자는 반드시 영문자나 밑줄을 사용해야 한다.
### return statement
* main()에서 리턴문을 빠트린 경우에, 프로그램은 닫는 }에 도달했을 때 0을 리턴한다. 그래서 main()의 끝에 있는 리턴문을 생략할 수 있다.
## 여러개의 함수
* 모든 C 프로그램은, main()이 프로그램 파일들의 어디에 있든지 간에 main()으로부터 시작된다는 사실을 기억하라. 하지만 C의 일반적인 관행은 main()을 맨앞에 놓는다.
## 키워드와 예약된 식별자
### 키워드
* 키워드란 C의 어휘들이다. 
* 키워드는 C가 특별한 용도로 사용하는 어휘이므로, 식별자나 변수이름으로 사용할 수 없다.
* 키워드를 변수 이름을 사용하려 시도하면, 컴파일러는 이것을 신택스 에러로 잡아낸다.
### 예약된 식별자
* 예약된 식별자란 이미 C가 사용하고 있거나 사용을 예약해둔 식별자들이다.
* 예약된 식별자는 유효한 이름이기 때문에 신택스 에러를 일으키지 않는다.