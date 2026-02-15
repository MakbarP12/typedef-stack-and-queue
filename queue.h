#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#define MAX 10

typedef struct {
    int data[MAX];
    int front;
    int rear;
} Queue;

void createQueue(Queue *Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue *Q, int value);
void dequeue(Queue *Q);
int frontValue(Queue Q);
int lengthQueue(Queue Q);
void destroyQueue(Queue *Q);


#endif
