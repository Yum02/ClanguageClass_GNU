#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	float Q1, Q2, mid, final, total;
	printf("=======QUIZZES=======\n");
	printf("퀴즈 성적 : ");
	scanf("%f", &Q1);
	printf("퀴즈 성적 :");
	scanf("%f", &Q2);
	printf("=======MID-TERM=======\n");
	printf("중간고사 성적 : ");
	scanf("%f", &mid);
	printf("=======FINAL=======\n");
	printf("기말고사 성적 : ");
	scanf("%f", &final);
	printf("Quize Total : %f\n", Q1+Q2);
	printf("Mid : %f\n", mid);
	printf("Final : %f\n", final);
	printf("------------------------------\n");
	total = Q1 + Q2 + mid + final;
	printf("Total : %f", total);

	return 0;
}