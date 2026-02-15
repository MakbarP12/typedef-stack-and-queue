#include <stdio.h>
#include "stack.h"

void createStack(Stack *S) {
    S->top = -1;
}

bool isEmptyStack(Stack S) {
    return (S.top == -1);
}

bool isFullStack(Stack S) {
    return (S.top == MAX - 1);
}

void push(Stack *S, int value) {
    if (!isFullStack(*S)) {
        S->top++;
        S->data[S->top] = value;
    }
}

void pop(Stack *S) {
    if (!isEmptyStack(*S)) {
        S->top--;
    }
}

int peek(Stack S) {
    if (!isEmptyStack(S))
        return S.data[S.top];
    return -1;
}

int lengthStack(Stack S) {
    return S.top + 1;
}

void destroyStack(Stack *S){
    S->top = -1;
}