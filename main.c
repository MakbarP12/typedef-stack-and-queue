#include <stdio.h>
#include "stack.h"
#include "queue.h"

int main() {

    Stack S;
    createStack(&S);
    printf("=====STACK=====\n\n");

    printf("IsEmpty: %s\n\n", isEmptyStack(S) ? "Iya" : "Tidak");

    push(&S, 10);
    push(&S, 20);
    push(&S, 30);
    printf("Push 10,20,30\n\n");

    printf("Top: %d\n", peek(S));
    printf("Length: %d\n\n", lengthStack(S));

    pop(&S);
    printf("Pop 1x\n\n");

    printf("Top sekarang: %d\n", peek(S));
    printf("Length sekarang: %d\n\n", lengthStack(S));

    destroyStack(&S);
    printf("Destroy Stack\n");
    printf("Length setelah destroy: %d\n\n", lengthStack(S));



    Queue Q;
    createQueue(&Q);
    printf("=====QUEUE=====\n");

    printf("IsEmpty: %s\n", isEmptyQueue(Q) ? "Ya" : "Tidak");

    enqueue(&Q, 100);
    enqueue(&Q, 200);
    enqueue(&Q, 300);
    printf("Enqueue 100,200,300\n\n");

    printf("Front: %d\n", frontValue(Q));
    printf("Length: %d\n\n", lengthQueue(Q));

    dequeue(&Q);
    printf("Dequeue 1x\n\n");

    printf("Front sekarang: %d\n", frontValue(Q));
    printf("Length sekarang: %d\n\n", lengthQueue(Q));

    destroyQueue(&Q);
    printf("Destroy Queue\n");
    printf("Length setelah destroy: %d\n", lengthQueue(Q));

    return 0;
}
