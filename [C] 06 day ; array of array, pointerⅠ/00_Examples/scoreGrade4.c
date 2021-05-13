#include <stdio.h>

int main(void) {
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	char grades[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
	char grade;
	grade = grades[score /10];
	
	printf("score : %d\tgrade : %c\n", score, grade);
	
	return 0;
}
