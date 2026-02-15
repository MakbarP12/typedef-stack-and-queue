#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define MAX 10

typedef struct {
    int data[MAX];
    int top;
} Stack;

void createStack(Stack *S);
bool isEmptyStack(Stack S);
bool isFullStack(Stack S);
void push(Stack *S, int value);
void pop(Stack *S);
int peek(Stack S);
int lengthStack(Stack S);
void destroyStack(Stack *S);

#endif
