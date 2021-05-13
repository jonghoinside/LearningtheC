#include <stdio.h>

int main(void)
{
	int a = 5;
	int b;
	
	b = ++a;
	printf("a : %d\tb: %d\n", a, b);
	
	a = 5;
	b = a++;
	printf("a : %d\tb: %d\n", a, b);
	
	return 0;
}
