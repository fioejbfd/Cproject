#include <stdio.h> //����� ����
#include <stdarg.h>//�������� ����
#include <math.h>  //���� ��� ����
//1��
//2��
//3��
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
//4��
void isOdd(int a)
{
	if(int isOdd %% 2 == 0)
}
//5��

int main()
{
	printf("root 4 = %.2f\n", sqrt(4));
	
	//x - 2x = 2�� Ǯ���Ͻÿ�.
	double a = 1;
	double b = -2;
	double c = -2;
	Quadformula(a,b,c);
	//��Ʈ : 2�� �������� Ǯ�� ���ؼ� ���� ������ �̿��غ��ϴ�.

	//2. ���� ������ �����ϴ� printRank�� �����ϼ���.
	int rank = 1;
	printRank(rank); //1st
	rank = 2;
	printRank(rank); //2nd
	rank = 3;
	printRank(rank); //3rd
	//1st, 2nd, 3rd, 4th, ... 21st

	//3. ���� ������ �����ϴ� average�� �����ϼ���.
	float result = average(3, 100, 95, 90);  //95.00
	float result2 = average(4, 100, 95, 90, 80);//91.25
	//��Ʈ) printf("%.2f, value);�� Ȱ���ϸ� �Ҽ��� 2�ڸ����� ��� ����

	//4. ���� ������ �����ϴ� isOdd�� �����ϼ���.
	isOdd(3);  //"YES"
	isOdd(4);  //"NO"
	isOdd(5);  //"YES"

	//5. ���� ������ �����ϴ� getPrime�� �����ϼ���.
	
	for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("�� ���� �Ҽ��Դϴ�.\n");
		}
		else
		{
			printf("�� ���� �Ҽ��� �ƴմϴ�.\n");
		}
	}

	return 0;
}