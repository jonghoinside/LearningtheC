#include <stdlib.h>
#include <assert.h>
#include "stack.h"

void initStack(Stack* ps, int size) {
	(*ps).pArr = malloc(sizeof(int) + size);
	assert((*ps).pArr );
	(*ps).size = size;
	(*ps).tos = 0;
}

void cleanupStack(Stack* ps){
	free((*ps).pArr);
}

void push(Stack* ps, int data) {
//	ps->array[ps->tos] = data;
	assert((*ps).tos != (*ps).size);
	
	(*ps).pArr[(*ps).tos] = data;
	
//	printf("[push] (*ps).array[(*ps).tos] is %d, data is %d\n", (*ps).array[(*ps).tos], data);
	++(*ps).tos;
}

int pop(Stack* ps) {
	assert((*ps).tos != 0);
	
//	--(*ps).tos;
	
//	printf("[pop] (*ps).array[(*ps).tos] is %d\n", (*ps).array[(*ps).tos]);
	
	return (*ps).pArr[--(*ps).tos];
}
