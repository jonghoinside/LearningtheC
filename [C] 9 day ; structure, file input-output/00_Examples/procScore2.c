#include <stdio.h>
#include <stdlib.h>		//	exit()

typedef struct {
	char name[20];
	int kor;
	int eng;
	int mat;
	int sum;
	double average;
	int rank;
} Student;

int main(void) {

	FILE *fin;
	FILE *fout;
	
	fin = fopen("score.dat", "r");		//	"r" read only 용으로 쓰겠다.
	fout = fopen("score.out", "w");		//	"w"	 write 용으로 쓴다.
												//	"rw" 읽기쓰기용
	if (fin == NULL || fout == NULL) {
		printf("can't open file\n");
		exit(-1);
	}
	
	Student students[10];
	
	for (int i = 0 ; i < 10 ; ++i) {
		fscanf(fin, "%s %d %d %d", 
				students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
	}
	
	for (int i = 0 ; i < 10 ; ++i) {
		students[i].sum = students[i].kor + students[i].eng + students[i].mat;
		students[i].average = (double)students[i].sum / 3 ;
		students[i].rank = 1;
	}
	
//	rank

	for (int i = 0 ; i < 10 ; ++i) {
		for (int j = 0 ; j < 10 ; ++j) {
			if (students[i].sum < students[j].sum) {
				++students[i].rank;
			}
		}
	}

	
	fprintf(fout, "----------------------------------------------------------\n");
	fprintf(fout, "		  name	        kor eng mat sum   avg   rnk\n");
	fprintf(fout, "----------------------------------------------------------\n");
	
	
	for (int i = 0; i < 10 ; ++i) {
		fprintf(fout, "%-20s %3d %3d %3d %3d %6.2f %3d\n", students[i].name, students[i].kor, students[i].eng, 
				students[i].mat, students[i].sum, students[i].average, students[i].rank);
	}
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
