#include <stdio.h>

int main(void)
{
	int sum = 0;	
/*	
	int i = 1;
	while (i <= 10) {
		sum = sum + i++;
	}
*/	
	for (int i = 1 ; i <= 10 ; ++i)
		sum = sum + i;
	
	printf("sum one to ten : %d\n", sum);
	
	return 0;
}
