#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL; // declaring front as global variable
struct Node *rear = NULL;  // declaring rear as global variable

int isEmpty(struct Node *front)
{
    if (front == NULL)
    {
        return 1;
    }
    else
        return 0;
};

int isFull(struct Node *rear)
{
    struct Node *n = rear;
    if (n->next == NULL)
    {
        return 1;
    }
    else
        return 0;
};

struct Node *EnQueue(int value) // we don't need to pass front and rear in this arguments as it will only keep a copy of those elements, better declare them as global variable and call them directly
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (isFull(n))
    {
        printf("Queue full");
    }
    else
    {
        // special case when queue is empty
        n->data = value;
        n->next = NULL;
        if (front == NULL)
        {
            front = rear = n;
        }

        // when queue has elements
        else
        {
            rear->next = n;
            rear = n;
        }
    }
    return n;
}

int DeQueue()
{
    struct Node *n = front;
    int a = -1;
    if (isEmpty(n))
    {
        printf("Queue is Empty, No value to remove!");
    }
    else
    {
        front = front->next;
        a = n->data;
        free(n);
        return a;
    }
}

void Traversal(struct Node *front)
{
    while (front->next != NULL)
    {
        printf("Element enqueued is = %d\n", front->data); // print the data stored in the struct node, and change the pointer to the next node.
        front = front->next;
    }
}

int main()
{
    rear = EnQueue(10);
    rear = EnQueue(20);
    rear = EnQueue(30);
    rear = EnQueue(40);
    Traversal(front);
    printf("Element dequeued is %d\n", DeQueue());
    return 0;
}
