#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "queue.h"

void initQueue(Queue* ps, int size, int eleSize) {
	(*ps).pArr = malloc(eleSize * size);
	assert((*ps).pArr );
	
	(*ps).eleSize = eleSize;
	(*ps).size = size;
	(*ps).front = 0;
	(*ps).rear = 0;
}

void cleanupQueue(Queue* ps){
	free((*ps).pArr);
}

void push(Queue* ps, const void* pData) {
//	ps->array[ps->tos] = data;
	assert((*ps).rear != (*ps).size);
	
//	(*ps).pArr[(*ps).tos] = data;
	memcpy( (unsigned char *)(*ps).pArr + ((*ps).rear)*(*ps).eleSize, pData, (*ps).eleSize);
	
	++(*ps).rear;
}

void pop(Queue* ps, void* pData) {
	assert(((*ps).rear == 0 || (*ps).rear == (*ps).front && (*ps).rear != 0) == 0);
	
	memcpy(pData, (unsigned char *)(*ps).pArr + ((*ps).front++)*(*ps).eleSize, (*ps).eleSize);
	
//	*pRe = (*ps).pArr[(*ps).tos];
}
