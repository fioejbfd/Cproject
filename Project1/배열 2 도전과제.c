#include <stdio.h>


int main()
{


	// 출력 예시
	// 1 2 3
	// 6 5 4
	// 7 8 9
	int value1[3][3];
	int value = 1;

	for (int i = 0; i < 3; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				value1[i][j] = value++;
			}
		}
		else
		{
			for (int j = 2; j >= 0; j--)
			{
				value1[i][j] = value++;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", value1[i][j]);
		}
		printf("\n");
	}

	// 출력 예시
	// 1 2 3
	// 8 9 4
	// 7 6 5







	return 0;
}