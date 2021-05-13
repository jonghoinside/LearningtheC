#ifndef QUEUE_H
#define QUEUE_H
#define QUEUESIZE 100

typedef struct {
	int array[QUEUESIZE];
	int front;
	int rear;
} Queue;

void initQueue(Queue* ps);
void push(Queue* ps, int data);
int pop(Queue* ps);

#endif
