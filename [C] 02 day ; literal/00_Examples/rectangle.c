#include <stdio.h>

int main(void)
{
	int width, height;
	scanf("%d %d", &width, &height);
	
	int area;
	area = width * height;
	
	printf("area: %d\n", area);
	return 0;
}
