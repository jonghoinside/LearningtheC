#include <stdio.h>

int main(void)
{
/*
	char i = 'A';
	while (i <= 'Z') {
		printf("%c\n", i);
		++i;
	}
*/
	for (char i = 'A' ; i <= 'Z' ; ++i)
		printf("%c", i);
	
	printf("\n");
	return 0;
}
