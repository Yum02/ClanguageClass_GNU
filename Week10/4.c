#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int i, j, k, mx=0,mn=0, sum = 0;
	printf("초기값과 끝값을 입력하시오 : ");
	scanf("%d %d", &j, &k);

	mx = (j > k) ? j : k;
	mn = (k > j) ? j : k;

	for (i = mn; i <= mx; i++)
	{
		sum += i;
	}
	printf("%d부터 %d까지의 정수의 합 : %d", mn, mx, sum);
	return 0;
}