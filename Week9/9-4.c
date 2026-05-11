#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i = 1;
	int pac = 1;
	while (i <= 10)
	{
		pac = pac * i;
		i++;
	}
	printf("10! = %d\n", pac);
	return 0;
}