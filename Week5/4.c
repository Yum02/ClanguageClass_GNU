#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int won, price, a, b, c, d;
	int total;
	printf("고객으로부터 받은 돈 : ");
	scanf("%d", &won);
	printf("물건값 : ");
	scanf(" %d", &price);
	total = won - price;
	a = total / 5000;
	printf("오천원 : %d\n", a);
	b = (total%5000) / 1000;
	printf("천원 : %d\n", b);
	c = (total%5000%1000) / 500;
	printf("오백원 : %d\n", c);
	d = (total%5000%1000%500) / 100;
	printf("백원 : %d", d);

	return 0;
}