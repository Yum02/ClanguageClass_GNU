#include<stdio.h>
#pragma warning(disable:4996)
#define c 300000
#define l 149600000

int main()
{
	double time;
	time = l / c;
	printf("빛의 속도는 %d km/s\n", c);
	printf("태양과 지구와의 거리%d km\n ", l);
	printf("도달 시간은 %.6f 초", time);
	
	return 0;
}