#ifndef QUEUE_H
#define QUEUE_H

typedef struct {
	int *pArr;
	int size;
	int front;
	int rear;
} Queue;

void initQueue(Queue* ps, int size);
void cleanupQueue(Queue* ps);
void push(Queue* ps, int data);
int pop(Queue* ps);

#endif
