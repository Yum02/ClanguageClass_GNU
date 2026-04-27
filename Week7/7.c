#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int x, y;
	char op;
	printf("수식을 입력하시오\n <예 : 2 + 5>\n>>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
	
		printf("%d + %d = %d\n", x, y, x + y);
	
	else if (op == '-')
	
		printf("%d - %d = %d\n", x, y, x - y);
	
	else if (op == '*')
	
		printf("%d * %d = %d\n", x, y, x * y);
	
	else if (op == '/')
	{
		if (y != 0)
			printf("%d / %d = %.2f\n", x, y, (float)x / y);
		else
			printf("0으로 나눌 수 없습니다.\n");
	}
	else if(op == '%')
	{
		if (y != 0)
			printf("%d %% %d = %d\n", x, y, x % y);
		else
			printf("0으로 나눌 수 없습니다.\n");
	}
	else
	{
		printf("잘못된 연산자입니다.\n");
	}
	return 0;
}