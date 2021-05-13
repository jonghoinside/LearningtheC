#include <stdio.h>

int main(void)
{
	int year;
	printf("input year : ");
	scanf("%d", &year);
	
	int isOrdinary;
//	isLeap = (year%4 == 0 && year%100 != 0 || year%400 == 0);
	isOrdinary = !(year%4 == 0 && year%100 != 0 || year%400 == 0);
//	isOrdinary = (year % 4 != 0 || year % 100 == 0 && year%400 != 0);
	
	printf("%d is a Ordinary year : %d\n", year, isOrdinary);
	return 0;
}
