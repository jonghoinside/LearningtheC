#include <stdio.h>

int main(void) {
	int nums[] = {1, 2, 3, 4, 5};
	int *p;
	
	p = nums;
	
	for (int i = 0 ; i < 5 ; ++i) {
		printf("%d ", nums[i]);
	}
	printf("\n");
	
	for (int i = 0 ; i < 5 ; ++i) {
		printf("%d ", *(nums + i));
	}
	printf("\n");
	
	for (int i = 0 ; i < 5 ; ++i) {
		printf("%d ", *(p + i));
	}
	printf("\n");
	
	for (int i = 0 ; i < 5 ; ++i) {
		printf("%d ", p[i]);
	}
	printf("\n");
	
	return 0;
}
