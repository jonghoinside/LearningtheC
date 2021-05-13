#include <stdio.h>
#include "queue.h"

int main(void) {
	
	Queue s1, s2;
	
	initQueue(&s1, 100, sizeof(int));
	initQueue(&s2, 10, sizeof(double));
	
	int i;
	
	i = 100;			push(&s1, &i);		//push(&s1, &i, sizeof(int));
	i = 200;			push(&s1, &i);
	i = 300;			push(&s1, &i);
	
	pop(&s1, &i);		printf("s1 1st pop() : %d \n", i);
	pop(&s1, &i);		printf("s1 2nd pop() : %d \n", i);
	pop(&s1, &i);		printf("s1 3rd pop() : %d \n", i);
	
	double d;
	
	d = 1.1;			push(&s2, &d);
	d = 2.2;			push(&s2, &d);
	d = 3.3;			push(&s2, &d);
	
	pop(&s2, &d);		printf("s2 1st pop() : %f \n", d);
	pop(&s2, &d);		printf("s2 2nd pop() : %f \n", d);
	pop(&s2, &d);		printf("s2 3rd pop() : %f \n", d);
	
	pop(&s2, &d);
	
	cleanupQueue(&s1);
	cleanupQueue(&s2);
	
	return 0;
}
