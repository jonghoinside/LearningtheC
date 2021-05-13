#include <stdio.h>

int main(void)
{
	char ch;
	printf("input char : ");
	scanf("%c", &ch);
	
	if ('a' <= ch && ch <= 'z') {
		ch = ch - 'a' + 'A';
	}
	
	printf("char : %c\n", ch);
	
	return 0;
}
