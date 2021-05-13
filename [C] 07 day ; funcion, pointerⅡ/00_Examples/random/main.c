#include <stdio.h>
#include <time.h>
#include "rand.h"

int main(void) {
	
	my_srand(time(NULL));
	
	for (int i = 0 ; i <= 10; ++i) {
		printf("%d\n", my_rand());
	}
	
	return 0;
}
