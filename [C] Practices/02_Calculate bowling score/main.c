#include "board.h"

int main(void) {
	setScore(5, 1, 9);
	setScore(5, 2, 0);
	setScore(10, 1, 10);
	setScore(10, 2, 1);
	setScore(10, 3, 9);
	setScore(8, 1, 10);
	
	setFrameScore(1, 10);
	setFrameScore(2, 40);
	setFrameScore(3, 100);
	setFrameScore(5, 9);
	setFrameScore(10, 299);
	
	printBoard();
	
	return 0;
} 
