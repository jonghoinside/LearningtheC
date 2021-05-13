#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

void initQueue(Queue* ps, int size) {
	(*ps).pArr = malloc(sizeof(int) + size);
	assert((*ps).pArr );
	(*ps).size = size;
	(*ps).front = 0;
	(*ps).rear = 0;
}

void cleanupQueue(Queue* ps){
	free((*ps).pArr);
}

void push(Queue* ps, int data) {
//	ps->array[ps->tos] = data;
	assert((*ps).rear != (*ps).size);
	
	(*ps).pArr[(*ps).rear] = data;
	
//	printf("[push] (*ps).array[(*ps).tos] is %d, data is %d\n", (*ps).array[(*ps).tos], data);
	++(*ps).rear;
}

int pop(Queue* ps) {
	assert(((*ps).rear == 0 || (*ps).rear == (*ps).front && (*ps).rear != 0) == 0);
	
//	printf("[pop] (*ps).array[(*ps).tos] is %d\n", (*ps).array[(*ps).tos]);
	
	return (*ps).pArr[(*ps).front++];
}
