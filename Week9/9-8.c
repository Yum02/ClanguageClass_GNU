#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i;
	printf("숫자를 입력하시오 : ");
	scanf("%d", &i);

	while (i > 0)
	{
		printf("%d\n", i);
		i--;
	}
	printf("발사!");
}