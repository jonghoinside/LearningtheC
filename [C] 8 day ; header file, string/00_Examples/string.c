#include <stdio.h>

int main(void) {
//	char str[] = {'h', 'e', 'l'. 'l', 'o', '\0'};
	char str[] = "hello, world";
	
	printf("str : %s\n", str);
//	printf("str + 7 : %s\n", str + 7);
	
	char str2[13];
	
//	str2 = str; (X)		//	&str2[0] = &str[0];		100 = 200;
	int i;
	for (i = 0; str[i] /* != '\0' */; ++i) {
		str2[i] = str[i];
	}
	str2[i] = '\0';
	
	printf("str2 : %s\n", str2);
	
//	if (str == str2) {	// if (&str[0] == &str[0])
	
	for (i = 0; str[i] ; ++i) {
		if (str[i] != str2[i])
			break;
	}
	
	if (str[i] == '\0') {
		printf("str and str2 are equal\n");
	} else {
		printf("str and str2 are not equal\n");
	}
	return 0;
}
