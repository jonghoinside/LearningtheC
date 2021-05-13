#include <stdio.h>
#include "stack.h"

int main(void) {
	
	Stack s1, s2;
	
	initStack(&s1);
	initStack(&s2);
	
	push(&s1, 100);
	push(&s1, 200);
	push(&s1, 300);
	
	printf("s1 1st pop() : %d \n", pop(&s1));
	printf("s1 2nd pop() : %d \n", pop(&s1));
	printf("s1 3rd pop() : %d \n", pop(&s1));
//	pop(&s1);		stack is empty
	
	push(&s2, 900);
	push(&s2, 800);
	push(&s2, 700);
	
	printf("s2 1st pop() : %d \n", pop(&s2));
	printf("s2 2nd pop() : %d \n", pop(&s2));
	printf("s2 3rd pop() : %d \n", pop(&s2));
	
	return 0;
}
