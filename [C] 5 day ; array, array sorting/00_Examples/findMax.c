#include <stdio.h>

int main(void)
{
	int nums[] = {50, 90, 30, 10, 100, 20, 40, 60, 80, 70};
	
	int max = num[0];
	
	for (int i = 1; i < 10 ; ++i)
		if (nums[i] > max)
			max = nums[i];
	
	printf("Max is %d\n", max);

	return 0;
}
