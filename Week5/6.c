#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c;
	a = 10;
	b = ++a;
	c = a++ + ++a;
	printf("a : %d\n", a);
	printf("++a : %d\n", b);
	printf("a++ : %d", c);
	return 0;
}