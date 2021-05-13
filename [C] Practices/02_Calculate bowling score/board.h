#ifndef BOARD_H
#define BOARD_H

extern char board[][50];

void printBoard(void);
void setScore(int frame, int bow, int score);
void setFrameScore(int frame, int frameScore);

#endif
