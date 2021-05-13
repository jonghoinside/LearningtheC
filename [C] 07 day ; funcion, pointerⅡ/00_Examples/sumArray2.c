#include <stdio.h>

int sumArray(const int* pArr, int size) {
//int sumArray(int pAAr[], int size) {		함수의 인자 안에 []는 포인터
	int sum = 0;
	for (int i = 0; i < size ; ++i) {
		sum = sum + pArr[i];			// *(pArr + i)
	}
	
	return sum;
}

int main(void) {
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	int sum;
//	sum = sumArray(nums, 10);		//	sum = sumArray(&nums[0]) 포인터와 배열 관계 2번
	sum = sumArray(nums + 5, 5);	//	sum = sumArray(&nums[5], 5);
	
	printf("sum : %d\n", sum);
	return 0;
}
