#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int i;
	int s[5];
	s[0] = 10;
	s[1] = 20;
	s[2] = 30;
	s[3] = 40;
	s[4] = 50;
	//s[5] = {10, 20, 30, 40, 50}

	for (i = 0; i < 5; i++)
	{
		printf("S[%d] = %d\n", i, s[i]);
	}

	return 0;
}