#include <stdio.h>

int main(void)
{
	int year;
	printf("input year : ");
	scanf("%d", &year);
	
	int isLeap;
//	isLeap = ((((year%4 == 0) && (year%100 != 0)) == 1) || (year%400 == 0));
	isLeap = (year%400 == 0 || year%4 == 0 && year%100 != 0);
	
	printf("%d is a leap year : %d\n", year, isLeap);
	return 0;
}
