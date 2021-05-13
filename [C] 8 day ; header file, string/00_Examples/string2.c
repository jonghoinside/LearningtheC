#include <stdio.h>
#include <string.h>

int main(void) {
	char *str = "hello, world";
	
	int len = strlen(str);
	
	printf("len : %d\n", len);
	
//	char str2[20];
	char str2[30];
	strcpy(str2, str);		//	strcpy(&str2[0], &str[0]);
	
	if ( strcmp(str, str2) == 0 )
		printf("str and str2 are equal\n");
	else
		printf("str and str2 are not equal\n");
	
	printf("str2 : %s\n", str2);
	
	strcat(str2, ", ");
	strcat(str2, "ros drone!");
	
	printf("str2 : %s\n", str2);
	
	if ( strcmp(str, str2) == 0 )
		printf("str and str2 are equal\n");
	else
		printf("str and str2 are not equal\n");
	
	return 0;
}
