#include<stdio.h>
#pragma warning(disable:4996)
#include<math.h>

int main()
{
	double pay, year, money, end_money;
	pay = 1000000.0;
	printf("예치 기간 입력(년)>>");
	scanf("%lf", &year);
	money = pow((1.0 + 0.045), year);
	end_money = money * pay;
	printf("이율 : 4.5%% 총금액: %.2lf", end_money);

	return 0;
}