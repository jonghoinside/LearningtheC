#include <stdio.h>

int swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;	
	
	return 0;
}

int main(void) {
	int a = 100;
	int b = 200;
	
	printf("a : %d\tb : %d\n", a, b);
	
	swap(0);
	
	printf("a : %d\tb : %d\n", a, b);
	
	return 0;
}
