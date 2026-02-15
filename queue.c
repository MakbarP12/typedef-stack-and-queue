#include "queue.h"

void createQueue(Queue *Q) {
    Q->front = 0;
    Q->rear = -1;
}

bool isEmptyQueue(Queue Q) {
    return (Q.rear < Q.front);
}

bool isFullQueue(Queue Q) {
    return (Q.rear == MAX - 1);
}

void enqueue(Queue *Q, int value) {
    if (!isFullQueue(*Q)) {
        Q->rear++;
        Q->data[Q->rear] = value;
    }
}

void dequeue(Queue *Q) {
    if (!isEmptyQueue(*Q)) {
        Q->front++;
    }
}

int frontValue(Queue Q) {
    if (!isEmptyQueue(Q))
        return Q.data[Q.front];
    return -1;
}

int lengthQueue(Queue Q) {
    if (isEmptyQueue(Q))
        return 0;
    return Q.rear - Q.front + 1;
}

void destroyQueue(Queue *Q) {
    Q->front = 0;
    Q->rear = -1;
}

