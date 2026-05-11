#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, min, max;
	int sum = 0;
	int k = 1;
	printf("초기값과 끝값을 입력하시오 : ");
	scanf("%d %d", &i, &j);
	min = (i < j) ? i : j;
	max = (i > j) ? i : j;

	while (min <= max)
	{
		if(min%3==0)
		sum = sum + min;
		min++;
	}
	printf("%d부터 %d까지의 3의 배수의 합 : %d\n", k, max, sum);
	
	return 0;
}