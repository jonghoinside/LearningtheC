#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("input 3 number : ");
	scanf("%d %d %d", &a, &b, &c);
	
	int max, mid, min;
	
	if (a > b) {
		max = a;
		min = b;
	} else {	// b > a
		max = b;
		min = a;
	}
	
	if (c > max) {
		mid = max;
		max = c;
	} else if (c > min) {
		mid = c;
	} else {
		mid = min;
		min = c;
	}
	
	printf("Max : %d\tMid : %d\tMin : %d\n", max, mid, min);
	
	return 0;
}
