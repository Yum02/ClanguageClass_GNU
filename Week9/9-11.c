#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i = 10;
	do
	{
		printf("Hello %d\n", i);
		i--;
	} while (i > 0);
}