#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void) {
	int size;
	scanf("%d", &size);
	
	int *pArr;
	pArr = malloc(sizeof(int) * size);
	
	assert(pArr /* != NULL */);
	
	for (int i = 0 ; i < size ; ++i) {
		pArr[i] = i + 1;
	}
	
	for (int i = 0 ; i < size ; ++i) {
		printf("%d ", pArr[i]);
	}
	printf("\n");
	
	free(pArr);
	
	return 0;
}
