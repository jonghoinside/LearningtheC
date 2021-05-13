#include <stdio.h>

int main(void)
{
	int nums[] = {50, 90, 30, 10, 100, 20, 40, 60, 80, 70};
	
	for (int i = 9; i >= 1 ; --i)
		for (int j = 0; j < i ; ++j)
			if (nums[j] > nums[j+1]) {
				int tmp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = tmp;
			}
	
	for (int i = 0; i < 10 ; ++i) {
		printf("%d\t", nums[i]);
	}
	printf("\n");

	return 0;
}
