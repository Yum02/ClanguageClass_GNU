#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int i;
	int s[5] = {0};

	for (i = 0; i < 5; i++)
	{
		printf("점수 입력 : ");
		scanf(" %d",&s[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%2d", s[i]);
	}

	return 0;
}