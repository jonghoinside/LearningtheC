#include <stdio.h>

int main(void)
{
	int sum = 0;	
	
	int i = 1;
	while (i <= 10) {
		sum = sum + i++;
	}
	
	printf("sum one to ten : %d\n", sum);
	
	return 0;
}
