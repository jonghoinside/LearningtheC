#include <stdio.h>

int main(void)
{
	int score;
	printf("Input you score : ");
	scanf ("%d", &score);
	
	int isPass;
	isPass = (score >= 60);
	
	printf("score: %d\tisPass: %d\n", score, isPass);
	
	return 0;
}
