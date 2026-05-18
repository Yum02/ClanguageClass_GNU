#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int i, j, k, sum = 0;
	printf("원하는 수들의 합이 되는 경우의 수를 찾아보자.\n");
	printf("수 입력하시오 : ");
	scanf("%d", &sum);
	printf("------------------------------------------\n");
	printf("주사위A\t주사위B\t주사위C\n");
	printf("------------------------------------------\n");
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= 6; j++)
		{
			for (k = 1; k <= 6; k++)
			{
				if (i + j + k == sum)
				{
					printf("%4d\t%4d\t%4d\n", i, j, k);
				}
			}
		}
	}

	return 0;
}