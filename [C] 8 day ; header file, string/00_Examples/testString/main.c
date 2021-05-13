#include <stdio.h>
//	#include <string.h>
#include "string.h"

int main(void) {
	char *str = "hello, world";
	
	int len = my_strlen(str);
	printf("str1 len : %d\n", len);
	
	printf("str1 : %s\n", str);
	
//	char str2[20];
	char str2[30];
	my_strcpy(str2, str);		//	strcpy(&str2[0], &str[0]);
	
	printf("str2 : %s\n", str2);
	
	if ( my_strcmp(str, str2) == 0 )
		printf("str and str2 are equal\n");
	else
		printf("str and str2 are not equal\n");
	
	my_strcat(str2, ", ");
	my_strcat(str2, "ros drone!");
	
	printf("str2 : %s\n", str2);
	
	if ( my_strcmp(str, str2) == 0 )
		printf("str and str2 are equal\n");
	else
		printf("str and str2 are not equal\n");
	
	return 0;
}
