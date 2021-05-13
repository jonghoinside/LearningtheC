#include <stdio.h>

int main(void)
{
	char i = 'A';
	
	while (i <= 'Z') {
		printf("%c\n", i);
		++i;
	}
	
	return 0;
}
