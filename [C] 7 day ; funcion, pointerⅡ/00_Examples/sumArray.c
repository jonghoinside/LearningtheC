#include <stdio.h>

int sumArray(int nums[]) {
	int sum = 0;
	
	for (int i = 0 ; i < sizeof(nums) / sizeof(nums[0]) ; ++i) {
	//	이게 안되는 이유는 여기서 인자가 받는 int nums[]는 포인터 개념이기 때문에
	//	포인터의 size는 4B가 되니까 우리가 원하는 40이 되지 않는다.
		sum += nums[i];
	}
}



int main(void) {
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	int sum;
	for (int i = 0 ; i < sizeof(nums) / sizeof(nums[0]) ; ++i) {
	//	sizeof(nums) 여기서 nums는 예외상황으로 배열전체를 의미
	//	4B * 10개 = 40이 나오니까 배열 하나의 값(nums[0]) 사이즈로 나누면 10이 된다.
	//	하지만 이건 main에서만 가능
		sum += nums[i];
	}
	
	printf("sum : %d\n", sum);
	
	sum = sumArray(nums);

	printf("sum : %d\n", sum);
	return 0;
}
