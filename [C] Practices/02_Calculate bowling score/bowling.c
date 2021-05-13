#include <stdio.h>
#include "board.h"

int main(void)
{
	int frame = 1;
	int firstpin, secondpin, thirdpin;
	unsigned int strikeNum = 0;
	int spare = 0;
	int totalScore = 0;
	
	while (frame != 11) {
		firstpin = 0;
		secondpin = 0;
		thirdpin = 0;
		//	1. 첫번쨰 투구 핀 입력 받기
		printBoard();
		printf("[%d frame] input first pin number : ", frame);
		scanf("%d", &firstpin);
		// 입력 숫자 잘못됐을 때 에러 출력
		while (0 > firstpin || firstpin > 10) {
			printBoard();
			printf("Error! [%d frame] input 0 ~ 10 : ", frame);
			scanf("%d", &firstpin);
		}
		setScore(frame, 1, firstpin);
		
		//	2. 첫번째 투구가 스트라이크일 때
		if (firstpin == 10) {
			++strikeNum;
			// 2-1. 첫번째 투구가 스트라이크이면서 이전 투구에 스페어 처리가 됐을 때
			if (spare == 1) {
				totalScore = 10 + firstpin + totalScore;
			//	printf("\t%d frame score : %d\n", frame-1, totalScore);
				setFrameScore(frame-1, totalScore);
				spare = 0;
			}
			// 2-2-1. 첫번째 투구가 스트라이크이면서
			// 누적 스트라이크 횟수가 2이상이면서 현재 프레임이 10번째 프레임이 아닐 떄
			if (strikeNum > 2 && frame != 10) {
				// totlaScore 점수에 30점을 더해서 전전 프레임 점수로 출력
				totalScore = 30 + totalScore;
			//	printf("\t%d frame score : %d\n", frame-2, totalScore);
				setFrameScore(frame-2, totalScore);
				--strikeNum;
			} 
			// 2-2-2. 첫번째 투구가 스트라이크이면서 현재 프레임이 10번째 프레임일 때
			else if (frame == 10 ) {
				// 2-2-3. 누적 스트라이크 횟수에 따라서 이전 프레임 점수들 출력
				switch (strikeNum) {
					case 1:		// 누적 스트라이크 횟수가 1번일 때
						// 20점을 +해서 전 프레임 점수로 출력
						totalScore = 20 + totalScore;
					//	printf("\t%d frame score : %d\n", frame-1, totalScore);
						setFrameScore(frame-1, totalScore);
						--strikeNum;
						break;
					case 2: case 3: // 누적 스트라이크 횟수가 2-3번일 때
						// 30점씩 +해서 전전 및 전 프레임 점수로 출력
						totalScore = 30 + totalScore;
					//	printf("\t%d frame score : %d\n", frame-2, totalScore);
						setFrameScore(frame-2, totalScore);
						totalScore = 30 + totalScore;
					//	printf("\t%d frame score : %d\n", frame-1, totalScore);
						setFrameScore(frame-1, totalScore);
						--strikeNum;
						break;
				}
				printBoard();
				// 2-2-4. 10번째 프레임의 두번째 투구 입력 (첫번째 투구는 strike)
				printf("[%d frame] input second pin number : ", frame);
				scanf("%d", &secondpin);
				while (0 > secondpin || secondpin > 10) {
					printBoard();
					printf("Error! [%d frame] input 0 ~ 10 : ", frame);
					scanf("%d", &secondpin);
				}
				setScore(frame, 2, secondpin);
				printBoard();
				// 2-2-5. 10번째 프레임의 세번째 투구 입력
				printf("[%d frame] input third pin number : ", frame);
				scanf("%d", &thirdpin);
				// 2-2-6. 10번째 프레임의 두번째 투구가 strike라면
				if (secondpin == 10) {
					while (0 > thirdpin || thirdpin > 10) {
						printBoard();
						printf("Error! [%d frame] input 0 ~ 10 : ", frame);
						scanf("%d", &thirdpin);
					}
				}
				// 2-2-7. 10번쨰 프레임의 두번째 투구가 strike가 아니라면
				else {
					while (0 > thirdpin || secondpin + thirdpin > 10) {
						printBoard();
						printf("Error! [%d frame] input 0 ~ %d : ", frame, 10 - secondpin);
						scanf("%d", &thirdpin);
					}
				}
				setScore(frame, 3, thirdpin);
				
				// 2-2-8. 현재까지 점수 + 10번째 프레임의 점수 출력
				totalScore = firstpin + secondpin + thirdpin + totalScore;
			//	printf("\t%d frame score : %d\n", frame, totalScore);
				setFrameScore(frame, totalScore);
				printBoard();
			}
			
		}
		// 3. 첫번째 투구가 스트라이크가 아닐 때
		else {
			// 3-1. 이전 투구가 스페어처리가 됐다면
			if (spare == 1) {
				// 현재 프레임의 첫번째 투구 + 10점을 +해서 이전 프레임 점수로 출력
				totalScore = 10 + firstpin + totalScore;
			//	printf("\t%d frame score : %d\n", frame-1, totalScore);
				setFrameScore(frame-1, totalScore);
			}

			switch (strikeNum) {
				case 2:		//	누적 스트라이크 횟수가 2일 때
							//  전전 프레임 점수 = 20 + 첫번째 핀 점수 + totalScore
					totalScore = 20 + firstpin + totalScore;
				//	printf("\t%d frame score : %d\n", frame-2, totalScore);
					setFrameScore(frame-2, totalScore);
					--strikeNum;
					break;
			}
			printBoard();
			// 3-2. 두번째 핀 점수 입력
			printf("[%d frame] input second pin number : ", frame);
			scanf("%d", &secondpin);
			// 점수 입력 오류 메세지 출력
			while (0 > secondpin || firstpin+secondpin > 10) {
				printBoard();
				printf("Error! [%d frame] input 0 ~ %d : ", frame, 10 - firstpin);
				scanf("%d", &secondpin);
			}
			setScore(frame, 2, secondpin);
			
			// 3-3. 첫번째 핀과 두번째 핀의 합이 10점이라면 -> spare 처리를 했다면
			if (firstpin + secondpin == 10) {
				// spare 플래그를 1로 설정
				spare = 1;
				// 누적 스트라이크 횟수에 따라서
				switch (strikeNum) {
					case 1:	//	현재 핀의 합 10에 10을 +해서 이전 프레임 점수로 출력
						totalScore = 20 + totalScore;
					//	printf("\t%d frame score : %d\n", frame-1, totalScore);
						setFrameScore(frame-1, totalScore);
						--strikeNum;
						break;
				}
				// 3-3-1. 현재 프레임이 10번째 프레임일 떄
				if (frame == 10) {
					// 세번쨰 핀 점수 입력
					printBoard();
					printf("[%d frame] input third pin number : ", frame);
					scanf("%d", &thirdpin);
					while (0 > thirdpin || thirdpin > 10) {
						printBoard();
						printf("Error! [%d frame] input 0 ~ 10 : ", frame);
						scanf("%d", &thirdpin);
					}
					setScore(frame, 3, thirdpin);
					// 3-3-2. 10번째 프레임 점수 출력
					totalScore = firstpin + secondpin + thirdpin + totalScore;
				//	printf("\t%d frame score : %d\n", frame, totalScore);
					setFrameScore(frame, totalScore);
				}
			}
			// 3-4. 두번째 투구에도 스페어 처리를 못했을 때
			else {
				// spare 플래그는 0으로 설정
				spare = 0;
				switch (strikeNum) {
					// 누적 스트라이크 횟수가 0일 떄는
					// 첫번째 점수 + 두번쨰 점수 합해서 현재 프레임 점수로 출력
					case 0:
						totalScore = firstpin + secondpin + totalScore;
					//	printf("\t%d frame score : %d\n", frame, totalScore);
						setFrameScore(frame, totalScore);
						--strikeNum;
						break;
					// 누적 스트라이크 횟수가 1일 떄는
					// 이전 프레임 점수 = 현재 점수 + 10 으로 출력
					case 1:
						totalScore = 10 + firstpin + secondpin + totalScore;
					//	printf("\t%d frame score : %d\n", frame-1, totalScore);
						setFrameScore(frame-1, totalScore);
						totalScore = firstpin + secondpin + totalScore;
					//	printf("\t%d frame score : %d\n", frame, totalScore);
						setFrameScore(frame, totalScore);
						--strikeNum;
						break;
				}
			}
		}
		++frame;
	}
	
	return 0;
}
