#include <stdio.h>
unsigned long long factorial(int a) {
	unsigned long long result = 1;
	for (int i = 2; i <= a ; ++i) {
	//	printf("%d %d\n", i, a);
		result *= i;
	}
	return result; 
}

int main(void) {
	for (int i = 1; i <= 100; ++i) {
		unsigned long long result;
		result = factorial(i);
		
		printf("%d! = %lld\n", i, result);
	}
	
	return 0;
}
