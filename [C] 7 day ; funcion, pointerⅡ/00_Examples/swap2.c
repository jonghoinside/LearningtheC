#include <stdio.h>
/*
void swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;	
	
	return 0;
}
*/

void swap(int *pa, int *pb) {
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main(void) {
	int a = 100;
	int b = 200;
	
	printf("a : %d\tb : %d\n", a, b);
	
	swap(&a, &b);
	
	printf("a : %d\tb : %d\n", a, b);
	
	return 0;
}
