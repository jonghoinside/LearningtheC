#include <stdio.h>

int main(void) {
	int *p;
	//p = NULL;
	
	int a;
	p = &a;
	
	int nums[5];
	p = &nums[1];
	
	*p = 100;
	
	printf("*p : %d\n", *p);
	
	return 0;
}
