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
    }
    return value;
}

int dequeue(struct Queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("This Queue is empty\n");
    }
    else
    {
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

    // BFS Implementation
    int node;
    int i = 0;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0}; //it is important to make it in matrix because it will check entire rows at once
    int m[7][7] = {
        //     0  1  2  3  4  5  6
        /*0*/ {0, 1, 1, 1, 0, 0, 0},
        /*1*/ {1, 0, 1, 0, 0, 0, 0},
        /*2*/ {1, 1, 0, 1, 1, 0, 0},
        /*3*/ {1, 0, 1, 0, 1, 0, 0},
        /*4*/ {0, 0, 1, 1, 0, 1, 1},
        /*5*/ {0, 0, 0, 0, 1, 0, 0},
        /*6*/ {0, 0, 0, 0, 1, 0, 0}}; // the graph is created

    printf("%d ", i); // starting traversal from start node (0)
    visited[i] = 1;
    EnQueue(&a, i);      // enqueue i for exploring the node
    while (!isEmpty(&a)) // this algorithm will go on until queue becomes empty
    {
        int node = dequeue(&a); // this will save the emptied queue in the variable node as we go on visiting different nodes
        for (int j = 0; j < 7; j++)
        {
            if (m[node][j] == 1 && visited[j] == 0) // this will check whwether a node is previously visited or not, if visited status will be 1 then it will dequeue the node
            {
                printf("%d ", j); // traversal of next nodes
                visited[j] = 1;   // mark the newly explored node as visited
                EnQueue(&a, j);   // this will enqueue the visited nodes and avoid repitition
            }
        }
    }

    return 0;
}