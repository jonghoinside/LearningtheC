#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("CHAR_BIT : %d\n", CHAR_BIT);
	
	printf("CHAR_MIN : %d\n", CHAR_MIN);
	printf("CHAR_MAX : %d\n", CHAR_MAX);
	
	printf("INT_MIN : %d\n", INT_MIN);
	printf("INT_MAX : %d\n", INT_MAX);
	
	printf("LONG_MIN : %ldL\n", LONG_MIN);
	printf("LONG_MAX : %ldL\n", LONG_MAX);
	
	return 0;
}
