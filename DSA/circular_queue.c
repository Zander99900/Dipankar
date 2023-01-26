#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int rear;
    int front;
    int *arr;
};

int isEmpty(struct circularQueue *ptr)
{
    if (ptr->rear == ptr->front)
    {
        return 1;
    }
    else
        return 0;
}

int isFull(struct circularQueue *ptr)
{
    if ((ptr->rear+1)%ptr->size == ptr->front) //this % (modulus funcn.) is used to link the last node of queue to the inital node
    {
        return 1;
    }
    else
        return 0;
}

int EnQueue(struct circularQueue *q, int value)
{
    if (isFull(q))
    {
        printf("circularQueue is full\n"); //here we can add elements within the spaces that gets empty using dequeue operation,
    }                                 // in nrml queue once both front & rear reach the last node, we cannot use the empty memory place again! 
    else
    {
        q->rear = (q->rear+1)%q->size;
        q->arr[q->rear] = value;
        printf("Enqueued valus is %d\n", value);
    }
    return value;
}

int DeQueue(struct circularQueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This circularQueue is empty\n");
    }
    else{
        q->front = (q->front+1)%q->size; //here we have a empty space that will clear the memory as front gets incremented!
        a= q->arr[q->front];
    }
    return a;
}

int main()
{
    struct circularQueue a;
    a.front = a.rear = 0;   //here we set the front and rear as 0 because we need to check the condition of full & empty
    a.size = 10;
    a.arr = (int *)malloc(a.size * sizeof(int));
    printf("The circularQueue is:\n");
    EnQueue(&a, 90);
    EnQueue(&a, 80);
    EnQueue(&a, 70);
    EnQueue(&a, 60);
    EnQueue(&a, 50);
    EnQueue(&a, 40);
    EnQueue(&a, 30);
    EnQueue(&a, 20);
    EnQueue(&a, 10);
    printf("\nThe removed Value is: %d\n",DeQueue(&a));
    printf("\nThe removed Value is: %d\n",DeQueue(&a));
    printf("\nThe removed Value is: %d\n",DeQueue(&a));
    printf("\nThe removed Value is: %d\n",DeQueue(&a));
    printf("\nThe removed Value is: %d\n",DeQueue(&a));
    printf("\nThe removed Value is: %d\n",DeQueue(&a));
    printf("\nThe removed Value is: %d\n",DeQueue(&a));
    printf("\nThe removed Value is: %d\n",DeQueue(&a));
    printf("\nThe removed Value is: %d\n",DeQueue(&a));
    printf("\nThe removed Value is: %d\n",DeQueue(&a)); //this one denotes empty queue
    EnQueue(&a, 500);

    return 0;
}

//suppose, the queue size 10 -> 0 to 9, when the rear will reach 9th position then, q->rear =9 & q->size -1 is also 9, hence 9 % 9 = 0 
//so the rear pointer will insert element in 0th position, if it's memory space is empty