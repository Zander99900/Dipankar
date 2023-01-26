#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int rear;
    int front;
    int *arr;
};

int isFull(struct Queue *ptr)
{
    if (ptr->rear == ptr->size - 1)
    {
        return 1;
    }
    else
        return 0;
}

int isEmpty(struct Queue *ptr)
{
    if (ptr->rear == ptr->front)
    {
        return 1;
    }
    else
        return 0;
}

int EnQueue(struct Queue *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("Queue is full");
    }
    else
    {
        ptr->rear++;
    ptr->arr[ptr->rear] = value;
        printf("%d\n", value);
    }
    return value;
}

int dequeue(struct Queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->front++;
        q->arr[q->front];
    }
    return q->arr[q->front];
}

int main()
{
    struct Queue a;
    a.front = -1;
    a.rear = -1;
    a.size = 10;
    a.arr = (int *)malloc(a.size * sizeof(int));
    printf("The Queue is:\n");
    EnQueue(&a, 90);
    EnQueue(&a, 90);
    EnQueue(&a, 90);
    EnQueue(&a, 90);
    EnQueue(&a, 90);
    EnQueue(&a, 90);
    EnQueue(&a, 90);
    EnQueue(&a, 90);
    printf("\nThe removed Value is: %d\n",dequeue(&a));
    if (isFull(&a))
    {
        printf("Queue is full, no element to add");
    }
    else {
        printf("Queue is not full");
    }
    return 0;
}