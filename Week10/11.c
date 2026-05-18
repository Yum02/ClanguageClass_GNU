#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int i;
	for (i = 0; i <= 20; i++)
	{
		if (i % 3 == 0||i%5==0)
		{
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}