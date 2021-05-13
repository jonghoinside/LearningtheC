#include <stdio.h>

int main(void)
{
	int nums[] = {50, 90, 30, 10, 100, 20, 40, 60, 80, 70};
	
	for (int i = 0 ; i < 10-1 ; ++i)
		for (int j = i + 1 ; j < 10 ; ++j)
			if (nums[i] > nums[j]) {
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
	
	for (int i = 0; i < 10 ; ++i) {
		printf("%d\t", nums[i]);
	}
	printf("\n");

	return 0;
}
