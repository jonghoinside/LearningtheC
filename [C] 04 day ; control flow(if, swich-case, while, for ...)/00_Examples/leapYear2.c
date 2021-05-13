#include <stdio.h>

int main(void)
{
	int year;
	printf("input year : ");
	scanf("%d", &year);

	if (year%4 == 0 && year%100 != 0 || year%400 == 0) {
		printf("%d is a leap year\n", year);
	}	else {
		printf("%d is a common year\n", year);
	}
/*
	printf("%d is a %s year\n", year, 
		(year%4 == 0 && year%100 != 0 || year%400 == 0) ? "leap" : "common" );
*/	
	return 0;
}
