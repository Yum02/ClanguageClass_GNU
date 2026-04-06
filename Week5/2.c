#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, r;

	print("Input integer : ");
	scanf("%d", &n);
	r = n % 2;
	printf("2 Modulus : %d", r);

	return 0;
}