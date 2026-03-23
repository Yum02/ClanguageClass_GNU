#include<stdio.h>
#define PI 3.141592

int main()
{
	float radius = 10.0;
	float area;

	area = PI * radius * radius;
	printf("circle : %f", area);

	return 0;
}