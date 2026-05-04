#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int x, y;
	char op;
	printf("수식을 입력하시오\n <예 : 2 + 5>\n>>");
	scanf("%d %c %d", &x, &op, &y);

	switch (op)
	{
		case '+':
			printf("%d + %d = %d\n", x, y, x + y);
			break;
		case '-':
			printf("%d - %d = %d\n", x, y, x - y);
			break;
		case '*':
			printf("%d * %d = %d\n", x, y, x * y);
			break;
		case '/':
			printf("%d / %d = %.2f\n", x, y, (float)x / y);
			break;
		case '%':
			printf("%d %% %d = %d\n", x, y, x % y);
			break;
		default:
			printf("잘못된 연산자입니다.\n");
	}

	return 0;
}