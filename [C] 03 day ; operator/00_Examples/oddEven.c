#include <stdio.h>

int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d", &num);
	
	int isOdd;
	//isOdd = num % 2 == 1;
	isOdd = num % 2;
	
	printf("%d is a odd number : %d\n", num, isOdd);
	
	return 0;
}
