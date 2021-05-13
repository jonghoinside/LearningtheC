#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initQueue(Queue* ps) {
	(*ps).front = 0;
	(*ps).rear = 0;
}

void push(Queue* ps, int data) {
	if ((*ps).rear == QUEUESIZE) {
		fprintf(stderr, "Queue is full\n");
		exit(1);
	}
	
	(*ps).array[(*ps).rear] = data;
	
	++(*ps).rear;
}

int pop(Queue* ps) {
//	if ((*ps).rear == 0 || (*ps).rear == (*ps).front && (*ps).rear != 0) {
	if ((*ps).rear == (*ps).front) {
	
		fprintf(stderr, "Queue is empty\n");
		exit(2);
	}
	
	return (*ps).array[(*ps).front++];
}
