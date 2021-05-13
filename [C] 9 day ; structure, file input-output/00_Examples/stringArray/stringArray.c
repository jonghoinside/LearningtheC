#include <stdio.h>

void printStringArray(const char (*strArray)[20] , int size) {
	for (int i = 0 ; i < size ; ++i) {
		printf("%s\n", strArray[i]);		// &strArray[i][0] == strArray[i]
	}
}

void printStirngArray2(const char **strArray , int size) {
	for (int i = 0 ; i < size ; ++i) {
		printf("%s\n", strArray[i]);		//	&strArray[i][0]
	}
}
