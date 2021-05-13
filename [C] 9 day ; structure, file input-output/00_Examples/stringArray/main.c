#include "stringArray.h"

int main(void) {

	char cities[][20] = {
		"seoul", "Los Angeles", "Paris", "Rio de Janeiro", "Daejun"
	};
	
	printStringArray(cities, 5);

	char *cities2[] = {
		"seoul", "Los Angeles", "Paris", "Rio de Janeiro", "Daejun"
	};
	
	printStirngArray2(cities2, 5);
	
	return 0;
}
