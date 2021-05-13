#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	
	int buket[45];
	// buket <-- ball
	for (int i = 0 ; i < 45 ; ++i) {
		buket[i] = i + 1;
	}
	
	// shurffle
	srand(time(NULL));
	for (int i = 0 ; i <= 1000000 ; ++i) {
		int x = rand() % 45;
		int y = rand() % 45;
		
		int tmp = buket[x];
		buket[x] = buket[y];
		buket[y] = tmp;
	}
	
	for (int i = 0 ; i < 7 ; ++i) {
		printf("%2d ", buket[i]);
	}
	
	printf("\n");
	
	return 0;
}
