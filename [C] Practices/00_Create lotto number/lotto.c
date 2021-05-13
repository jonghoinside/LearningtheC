#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int lottonums[6] = {-6,-5,-4,-3,-2,-1};
	
	srand(time(NULL));
/*	
	lottonums[0] = rand() % 45 + 1;
	do lottonums[1] = rand() % 45 + 1;
	while (lottonums[0] == lottonums[1]);
	
	do lottonums[2] = rand() % 45 + 1;
	while (lottonums[0] == lottonums[2] || lottonums[1] == lottonums[2]);
*/
	
	for (int i = 0; i < 6; ++i) {
		lottonums[i] = rand()%45 + 1;
		
		for (int j = 0; j < 6; ++j){
			if (i == j)
				break;
			while (lottonums[i] == lottonums[j])
				lottonums[i] = rand()%45 + 1;
		}
		printf("%d\t", lottonums[i]);
	}
	printf("\n");
	
	return 0;
}
