#include<stdio.h>

int main()
{
	const float PI = 3.141592;
	float radius = 10.0;
	float area;

	area = PI * radius * radius;
	printf("circle : %f", area);

	return 0;
}