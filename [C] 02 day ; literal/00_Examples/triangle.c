#include <stdio.h>

int main(void){
	
	int base, height;
	
	printf("input base height : ");
	scanf("%d %d", &base, &height);
	
	double trianglearea = (base * height)/2;
	
	printf("triangle area: %.2f\n", trianglearea);
	
	return 0;
}
