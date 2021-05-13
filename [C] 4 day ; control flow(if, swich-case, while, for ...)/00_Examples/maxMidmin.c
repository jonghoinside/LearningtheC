#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("input 3 number : ");
	scanf("%d %d %d", &a, &b, &c);
	
	int max, mid, min;
	
	if (a > b)
		if (c > a) {
			max = c;
			mid = a;
			min = b;
		} else if (c < b) {
			max = a;
			mid = b;
			min = c;
		} else {
			max = a;
			mid = c;
			min = b;
		}
	else // b > a
		if (c > b) {
			max = c;
			mid = b;
			min = a;
		} else if (c < a) {
			max = b;
			mid = a;
			min = c;
		} else {
			max = b;
			mid = c;
			min = a;
		}
	
	printf("Max : %d\tMid : %d\tMin : %d\n", max, mid, min);
	
/*	
	if (a > b && a > c) {
		printf("Max : %d\t", a);
		if (b > c)
			printf("Mid : %d\tMin : %d\n", b, c);
		else
			printf("Mid : %d\tMin : %d\n", c, b);
	} else if (b > a && b > c) {
		printf("Max : %d\t", b);
		if (a > c)
			printf("Mid : %d\tMin : %d\n", a, c);
		else
			printf("Mid : %d\tMin : %d\n", c, a);
	} else {
		printf("Max : %d\t", c);
		if (a > b)
			printf("Mid : %d\tMin : %d\n", a, b);
		else
			printf("Mid : %d\tMin : %d\n", b, a);
	}
*/	
	return 0;
}
