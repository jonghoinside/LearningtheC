#include <stdio.h>

int main(void)
{
	for (int i = 1 ; i <= 5 ; ++i){
		for (int j = 1 ; j + i <= 5 ; ++j)
			printf(" ");

		for (int k = 1 ; k <= i + i - 1 ; ++k)
			printf("*");
		printf("\n");
	}

	return 0;
}
