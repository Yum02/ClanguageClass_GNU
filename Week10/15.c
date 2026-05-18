#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int s[5], i;
	printf("정수 5개 입력 : ");
	for (i = 0; i < 5; i++)
		scanf("%d", &s[i]);

	for (i = 0; i < 5; i++)
		printf("%d\n", s[i]);

	return 0;
}