#include <stdio.h>

int main(void) {
	void *p;
	
	int a;
	a = 100;
	
	p = &a;
	printf("&a : %p\n", &a);
	
//	*p = 200; 이건 안됨.
	*(int *)p = 200;
	
	
	
	double d;
	d = 3.14;
	
	p = &d;
	*(double *)p = 2.718;
	
	printf("a : %d\td: %f\n", a, d);
	
	return 0;
}
