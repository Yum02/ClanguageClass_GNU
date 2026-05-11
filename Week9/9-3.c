#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i = 1;
	int sum = 0;
	while (i <= 10)
	{
		sum = sum + i;
		i++;
	}
	printf("sum = %d\n", sum);
	return 0;
}