#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	double uc, cg = 3000.0;
	printf("현재 남아있는 충전량 : %lf\n", cg);
	for (;;)
	{
		printf("충전<+>/사용<-> : ");
		scanf("%lf", &uc);
		cg = cg + uc;
		printf("현재 남아있는 충전량 : %lf\n", cg);
		if (cg <= 300 && cg > 0)
		{
			printf("Warrning!! 충전량이 300이하이므로 충전하여 주세요.\n");
			continue;
		}
		else if (cg > 300)
			continue;
		else
		{
			printf("충전량이 0이므로 꺼집니다.");
			break;
		}
	}

	return 0;
}