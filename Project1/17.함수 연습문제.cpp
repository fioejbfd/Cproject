#include <stdio.h> //입출력 제공
#include <stdarg.h>//가변인자 제공
#include <math.h>  //수학 기능 제공
//1번
//2번
//3번
void average(int count, ...)
{
	result = average
	va_list args;
	va_start(args, count);
	for (int i = 0; i <= count; i++)
	{
		printf("%.2f\n", result);
		printf("%.2f ", result2);
	}
	printf("\n");
	va_end(args);
}
//4번
void isOdd(int a)
{
	if(int isOdd %% 2 == 0)
}
//5번

int main()
{
	printf("root 4 = %.2f\n", sqrt(4));
	
	//x - 2x = 2를 풀이하시오.
	double a = 1;
	double b = -2;
	double c = -2;
	Quadformula(a,b,c);
	//힌트 : 2차 방정식을 풀기 위해선 근의 공식을 이용해봅니다.

	//2. 다음 조건을 만족하는 printRank를 구현하세요.
	int rank = 1;
	printRank(rank); //1st
	rank = 2;
	printRank(rank); //2nd
	rank = 3;
	printRank(rank); //3rd
	//1st, 2nd, 3rd, 4th, ... 21st

	//3. 다음 조건을 만족하는 average를 구현하세요.
	float result = average(3, 100, 95, 90);  //95.00
	float result2 = average(4, 100, 95, 90, 80);//91.25
	//힌트) printf("%.2f, value);를 활용하면 소수점 2자리까지 출력 가능

	//4. 다음 조건을 만족하는 isOdd를 구현하세요.
	isOdd(3);  //"YES"
	isOdd(4);  //"NO"
	isOdd(5);  //"YES"

	//5. 다음 조건을 만족하는 getPrime을 구현하세요.
	
	for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("이 값은 소수입니다.\n");
		}
		else
		{
			printf("이 값은 소수가 아닙니다.\n");
		}
	}

	return 0;
}