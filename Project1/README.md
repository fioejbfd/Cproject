# Cproject
 2025 - 02 - 08 ~ 2025 - 03 - 15

## 목차
 [깃허브 데스크톱](#깃허브-데스크톱)

 [코드 기본구성](#코드-기본-구성)

 [printf](#printf)
 
<hr/>

# 깃허브 데스크톱

+ 설치 방법
  > https://desktop.github.com/download/

<hr/>

# 코드 기본 구성
+ 전처리기
+ main

```c
#include <stdio.h>

int main()
{
    printf("C programming");
    return 0;
}
```
<hr/>

# printf

> stdio.h에서 제공해주는 C언어의 대표적인 문장 출력용 기능(함수)입니다.<br>
> 일반적으로는 printf("작성하고싶은 문장");을 작성해 사용합니다.

예시)
```c
#include <stdio.h>

int main()
{
    printf("Good dat to study");
    return 0;
}
```
# 서식 지정자
|지정자 명칭|설명|
|-----|-----|
|%d|정수에 대한 지정자|
|%f|실수에 대한 지정자|
|%c|문자에 대한 지정자|
<hr/>

# 변수
+ C언어에서 특정 하나의 데이터를 사용자가 이름지어서 저장하는 방법(공간)
+ 변수에 저장되어있는 데이터의 값은 일반적으로 언제든지 변경이 가능합니다.
+ C언어에서의 변수는 변수마다 정해진 데이터의 형태(자료형)이 존재하며, 각 변수는 할당된 값을 가지고 있습니다.

# 자료형
> 프로그램이 데이터를 판단하는 기준, 데이터의 형태를 의미합니다.

+ 대표적인 자료형

|이름|표현하는 형태|크기|표현 범위|
|----|------|------|------------|
|int|정수|4 byte|-2147483648 ~ 21748347|
|float|실수|4 byte|3.4 * 10 -38제곱 ~ 3.4 * 10 +38제곱|
|char|문자|1 byte|-128 ~ 127|

> float(실수)는 소수점 이하 6자리까지 정확하게 표현

```c
include <stdio.h>

int main()
{
   int count;
   count = 5;

   printf("현재의 카운트는 %d입니다.\n", count);

   float PI = 3.141592f;
   int a, b, c;
   int number3 = 50, number4 = 40;

   int octo = 015;
   int hexa = 0x6;

   printf("8진수 octo = %o\n", octo);
   printf("16진수 hexa = %x\n", hexa);
   printf("8진수 표기법 출력 octo = %#o\n", octo);
   printf("16진수 표기법 출력 hexa = %#x\n", hexa);
   printf("8진수 표기법 출력(8자리) octo : %0.8o\n", octo);
   printf("16진수 표기법 출력(8자리) hexa : %0.8x\n", hexa);

   return 0;
}
```
<hr/>

# 변수 규칙

+ 대소문자를 구분합니다.
+ 변수의 이름은 숫자가 맨 앞에 나올 수 없습니다.
+ 변수의 이름에 특수문자 사용이 불가능합니다.(예외 : 언더바(_),달러($)는 가능)
+ 변수의 이름으로 키워드(Keyword)를 사용할 수 없습니다.
+ 변수의 선언과 초기화를 동시에 진행할 수 있습니다.
+ 데이터의 형태가 같다면, 여러 개를 한번에 선언할 수 있습니다.
+ 선언과 초기화를 동시에 여러 개를 진행할 수 있습니다.
+ C언어에서 10진수 이외의 8진수나 16진수를 지정할 수 있습니다.

<hr/>

# 입력(input)

+ 사용자가 직접 값을 이력하고 그 값을, 특정 위치에 전달합니다.
+ 일반적으로는 변수를 만들고, 그 변수에 입력한 값을 적용하는 방식으로 사용합니다.
+ define _CRT_SECURE_NO_WARNINGS
> 프로그램에서의 안전 검사를 하지 않도록 설정하는 코드
> 이 코드를 추가할 경우 visual studio 내에서 scanf를 사용할 수 있습니다.

```c
include <stdio.h>

int main()
{
   int number;
   printf("Input the number : ");
   scanf_s("%d", &number);
   printf("number : %d\n", number);

   getchar();

   char Key;
   printf("키를 하나 입력해주세요 >> ");
   Key = getchar();
   putchar(Key);

   getchar();

   char word[10];
   printf("단어를 입력해주세요 >>");
   gets(word);
   puts(word);

   char item[10];
   printf("아이템의 이름을 이력해주세요 >> ");
   scanf("%s", item);
   printf("아이템의 이름 : %s입니다.\n", item);

   return 0;
}
```
<hr/>

# 입력 코드 설명
+ Visual Studio에서 사용하는 경우라면 scanf_s를 통해 오류를 막을 수 있습니다.
+ getchar()
> 키보드로부터 하나의 문자를 읽어내는 함수
> 이 기능은 버퍼를 비우는 용도로도 사용됩니다.

> 입력 버퍼(buffer) : C언어에서 입력을 진행할 경우 바로 값을 넘기는게 아니라 임시로 데이터를 저장하는 별도의 공간에 값을 넣고 전달하는 방식입니다.

> 문자를 다 받기 때문에 enter같은 기능도 값으로 남게 됩니다.

+ putchar(문자)
> 전달받은 문자형 데이터를 화면에 출력하는 기능

+ 문자열 만드는 방법
> char 변수명[문자의 개수];

> gets(word); 문자열 입력

> puts(word); 전달한 문장 출력

+ 주의 사항
> C언어에서 한글을 입력하는 경우 한글 한 단어에 2칸을 소모합니다.

> 현재 word는 10개의 단어를 사용할 수 있습니다.

> 한글을 기준으로는 5개의 단어까지 입력이 가능합니다.

> 입력을 진행할 경우 문자의 개수보다 1개정도 적게 작성합니다.

> 영단어는 9글자, 한글은 4글자까지 가능합니다.

+ 문자열을 받을 경우에는 item 앞에 &를 붙이지 않아도 됩니다.
> %s는 문자열을 받는 지정자입니다.

[목차로](#목차)



