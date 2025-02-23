#include <stdio.h>


int main()
{
	printf("\n1번 과제\n");
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
	printf("\n2번 과제\n");

	int value2[3][3];
	value = 1;

	int top = 0;
	int bottom = 2;
	int left = 0;
	int right = 2;

	for (int arrays = 0; arrays < (sizeof(value2) / sizeof(int)) - 1; arrays++)

	// -> 방향 구현
	for (int i = left; i <= right; i++)
	{
		value2[top][i] = value++;
	}
	top++;
	//오른쪽 방향 구현
	for (int i = top; i <= bottom; i++)
	{
		value2[i][right] = value++;
	}
	right--;
	//아래 방향
	for (int i = right; i >= left; i--)
	{
		value2[bottom][i] = value++;
	}
	bottom--;
	for (int i = bottom; i >= top; i--)
	{
		value2[i][left] = value++;
	}
	left++;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", value2[i][j]);
		}
		printf("\n");
	}




	return 0;
}