#include <stdio.h>

int main(void)
{
	for (int i = 1 ; i <= 5 ; ++i) {
		for (int j = 1 ; j <= i + i - 1 ; ++j)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
