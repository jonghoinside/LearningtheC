#include <stdio.h>
#define PI 3.141592

int main(void)
{
	int radius;
	
	printf("input radius : ");
	scanf("%d", &radius);
	
	double circlearea = radius * radius * PI;
	
	printf("circle area: %.2f\n", circlearea);
	
	return 0;
}
