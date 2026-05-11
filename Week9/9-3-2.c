#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, k, min, max, sum = 0;
	printf("초기값과 끝값을 입력하시오 : ");
	scanf("%d %d", &i, &j);

	min = (i < j) ? i : j;
	max = (i > j) ? i : j;
	k = min;

	while (min <= max)
	{
		sum = sum + min;
		min++;
	}
	printf("%d부터 %d까지의 합 : %d\n", k, max, sum);
	return 0;
}