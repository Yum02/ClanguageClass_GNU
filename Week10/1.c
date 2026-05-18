#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("Hello World!");
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 반복 \n", i);
	}
	printf("반복 종료");

	return 0;
}