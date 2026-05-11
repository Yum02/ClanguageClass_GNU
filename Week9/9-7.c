#include<stdio.h>
#include<limits.h>
#pragma warning(disable:4996)

int main()
{
	int i = 0;
	int number, min = INT_MAX;
	printf("숫자 입력하시오 : \n");
	while (i < 3)
	{
		scanf("%d", &number);
		if (number < min)
			min = number;
		i++;
	}
	printf("최솟값은 %d입니다.", min);
	return 0;
}