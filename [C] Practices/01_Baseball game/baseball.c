#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3];
	int answer[3];
	
	int strike;
	int ball;
	
	int count = 0;
	
// Question

	srand(time(NULL));
/*
	while (question[0] == question[1] || 
			question[1] == question[2] || 
			question[0] == question[2]) {
		question[0] = rand() % 9 + 1;
		question[1] = rand() % 9 + 1;
		question[2] = rand() % 9 + 1;
	}
*/	
	question[0] = rand() % 9 + 1;
	do question[1] = rand() % 9 + 1;
	while (question[0] == question[1]);
	
	do question[2] = rand() % 9 + 1;
	while (question[0] == question[2] || question[1] == question[2]);
	
	printf("question : %d %d %d\n", question[0], question[1], question[2]);
	
	while (strike != 3) {
		strike = 0;
		ball = 0;
		
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
		
		for (int i = 0; i < 3; ++i)		
			for (int j = 0; j < 3; ++j)
				if (question[i] == answer[j]) {
					if (i == j)
						++strike;
					else
						++ball;
				}
		
		if (strike != 3)
			printf("#strike : %d\t#ball : %d\n\n", strike, ball);
		
		++count;
	} 
	
	printf("Congraturation! count : %d\n", count);
	return 0;
}
