#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//static char *board[200] = {		//	이건 변경하지 않겠다는 의미
char board[][50] = {
	"-------------------------------------------",
	"| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |  10 |",
	"-------------------------------------------",
	"| | | | | | | | | | | | | | | | | | | | | |",
	"-------------------------------------------",
	"|   |   |   |   |   |   |   |   |   |     |",	
	"-------------------------------------------",
};

void printBoard(void) {
	system("clear");
	for (int i = 0 ; i < 7 ; ++i)
		printf("%s\n", &board[i][0]);
}

void setScore(int frame, int bow, int score) {
	// 'X' or '/' or number
	if (bow == 1 && score == 10 && frame != 10)
		board[3][4*(frame-1) + 2*bow] = 'X';
	else if 	(bow == 1 && score == 10 ||
				 frame == 10 && bow == 2 && score == 10 && (board[3][4*(10-1) + 1] - '0') != 0 ||
				 frame == 10 && bow == 3 && score == 10)
		board[3][4*(frame-1) + 2*bow-1] = 'X';
	else if 	(bow == 2 && (board[3][4*(frame-1) + 1] - '0') + score == 10 ||
				 frame == 10 && bow == 3 && (board[3][4*(frame-1) + 3] - '0') + score == 10)
		board[3][4*(frame-1) + 2*bow-1] = '/';
	else
		board[3][4*(frame-1) + 2*bow-1] = score + '0';
}

void setFrameScore(int frame, int frameScore) {
	char buf[4];
	sprintf(buf, "%3d", frameScore);
	
	int offset = (frame == 10);
	
	strncpy(&board[5][0] + 4*(frame-1) + 1 + offset, buf, 3);
	
//	snprintf(&board[5][0] + 4*(frame-1) + 1, 3, "%3d", frameScore);
}

//	char buf[1024];
//	sprintf(buf, "%3d %3d %3d %3d", kor, eng, mat);
//	snprintf(buf, 10,"%3d %3d %3d %3d", kor, eng, mat);
