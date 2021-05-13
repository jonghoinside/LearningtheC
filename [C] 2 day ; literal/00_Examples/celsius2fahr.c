#include <stdio.h>

int main(void)
{
//	int celsius;
	double celsius;
	double fahr;
	
//	celsius = 37;
//	scanf("%d", &celsius);
	scanf("%lf", &celsius);
	
	fahr = 9.0 / 5.0 * celsius + 32;
	
	printf("celsius : %.2f  --->  fahr : %.1f\n", celsius, fahr);
	
	return 0;
}
