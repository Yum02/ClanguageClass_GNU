#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int i=5;

	for (;;)
	{
		if (i > 0)
		{
			printf("%d\n", i);
			i--;
		}
		else
			break;
	}
	printf("¹ß½Î");
	return 0;
}