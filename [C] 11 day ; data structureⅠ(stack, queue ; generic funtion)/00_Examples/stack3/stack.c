#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void initStack(Stack* ps) {
	(*ps).tos = 0;
}

void push(Stack* ps, int data) {
//	ps->array[ps->tos] = data;
	if ((*ps).tos == STACKSIZE) {
		fprintf(stderr, "stack is full\n");
		exit(1);
	}
	
	(*ps).array[(*ps).tos] = data;
	
//	printf("[push] (*ps).array[(*ps).tos] is %d, data is %d\n", (*ps).array[(*ps).tos], data);
	++(*ps).tos;
}

int pop(Stack* ps) {
	if ((*ps).tos == 0) {
		fprintf(stderr, "stack is empty\n");
		exit(2);
	}
	
	--(*ps).tos;
	
//	printf("[pop] (*ps).array[(*ps).tos] is %d\n", (*ps).array[(*ps).tos]);
	
	return (*ps).array[(*ps).tos];
}
