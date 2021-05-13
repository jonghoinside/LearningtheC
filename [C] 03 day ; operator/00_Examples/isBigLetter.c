#include <stdio.h>

int main(void)
{
/*
	int code;
	printf("Input code : ");
	scanf("%d", &code);
	
	int isBigLetter;
//	isBigLetter = (65 <= code && code <= 90);
	isBigLetter = ('A' <= code && code <= 'Z');
	
	printf("code : %d --- isBigLetter : %d\n", code, isBigLetter);
*/

	char ch;
	printf("Input char : ");
	scanf("%c", &ch);
	
	int isBigLetter;
	isBigLetter = ('A' <= ch && ch <= 'Z');
	
	int isSmallLetter;
	isSmallLetter = ('a' <= ch && ch <= 'z');
	
	int isNumeric;
	isNumeric = ('0' <= ch && ch <= '9');
	
	printf("character: %c --- isBigLetter: %d\n", ch, isBigLetter);
	printf("character: %c --- isSmallLetter: %d\n", ch, isSmallLetter);
	printf("character: %c --- isNumeric: %d\n", ch, isNumeric);
	
	return 0;
}
