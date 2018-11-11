#ifndef QUEUE
#define QUEUE
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Queue;
struct Queue* createQueue(unsigned capacity);
int isFull(struct Queue* queue);
int isEmpty(struct Queue* queue);
void enqueue(struct Queue* queue, int item);
int dequeue(struct Queue* queue);
int front(struct Queue* queue);
int rear(struct Queue* queue);

#endif