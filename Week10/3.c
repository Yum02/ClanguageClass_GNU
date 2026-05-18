#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int i, j, pac = 1;
	printf("어디까지 계산할까요 : ");
	scanf("%d", &j);

	for (i = 1; i <= j; i++)
	{
		pac *= i;
	}
	printf("1부터 %d까지의 정수의 팩토리얼 : %d", j, pac);
	return 0;
}