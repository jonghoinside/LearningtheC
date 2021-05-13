#include <stdio.h>
#include "date.h"
/*
void printDate(Date d) {
	printf("(%4d/%02d/%02d)\n", d.year, d.month, d.day);
}
*/
void printDate(const Date *pd) {
//	printf("(%4d/%02d/%02d)\n", (*pd).year, (*pd).month, (*pd).day);
	printf("(%4d/%02d/%02d)\n", pd -> year, pd -> month, pd -> day);
} 
