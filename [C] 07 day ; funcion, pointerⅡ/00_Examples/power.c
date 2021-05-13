#include <stdio.h>

long long power(int base, int exponent) {
	
	long long result = 1LL;
	for (int i = 1 ; i <= exponent; ++i) {
		result *= base;		//	result = result * base;
								//	sum = sum + nums[i];
								//	sum += nums[i];
	}
	
	return result;
}


int main(void) {
	
	for (int i = 0 ; i <= 32 ; ++i) {
		long long result;
		result = power(2, i);
		
		printf("2 power of %d = %lld\n", i, result);
	}	
	
	return 0;
}
