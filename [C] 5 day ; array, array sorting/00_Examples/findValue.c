#include <stdio.h>

int main(void)
{
	int nums[] = {50, 90, 30, 10, 100, 20, 40, 60, 80, 70};
	
	int value;
	printf("input num : ");
	scanf("%d", &value);
	
	int i;
	for (i = 0; i < sizeof(nums); ++i) {
		if (value == nums[i]) {
			break;
		}
	}
	
	if (i < sizeof(nums))
		printf("%d is found. index: %d\n", value, i);
	else
		printf("%d is not found.\n", value);
	
	return 0;
}
