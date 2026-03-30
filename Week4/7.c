#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	//short<int<long<long long
	short a;
	int b;
	long c;
	long long d;

	printf("Short : %d\n", sizeof(a));
	printf("Int : %d\n", sizeof(b));
	printf("Long : %d\n", sizeof(c));
	printf("LongLong : %d", sizeof(d));

	return 0;
}