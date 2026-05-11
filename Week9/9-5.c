#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i = 1;
	int number;
	printf("구구단의 숫자를 입력하시오 : ");
	scanf("%d", &number);
	while (i <=9)
	{
		printf("%d * %d = %d\n", number, i, number*i);
		i++;
	}
	return 0;
}