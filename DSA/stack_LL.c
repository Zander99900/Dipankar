#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL; // declaring top as global variable

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
        return 0;
};

int isFull(struct Node *top)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return 1;
    }
    else
        return 0;
};

struct Node *push(struct Node *top, int data)
{                                                         // push operation simply means insertion in LL at head
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Stack Overflow");
    }
    else
    {
        n->data = data;
        n->next = top;
        top = n;
        return n;
    }
}

int pop(struct Node **top) //we use pointer of pointer because top already a memory address which keeps on changing when we run the loop so we store memory location
{ // pop operation simply means deletion in LL at head
    if (*top == NULL)
    {
        printf("Stack Underflow");
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

void Traversal(struct Node *top)
{
    while (top != NULL)
    {
        printf("Element pushed is = %d\n", top->data); // print the data stored in the struct node, and change the pointer to the next node.
        top = top->next;
    }
}

int peek(int pos)
{
    struct Node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
        if (ptr != NULL)
        {
            return ptr->data;  //we return the data of the node 
        }
        else
       return -1;
}

int stacktop(){
    return top->data;
}

int stackbottom(){
    struct Node *ptr = top;
    for (int i = 0; ptr->next != NULL; i++)
    {
        ptr = ptr->next; //we run this loop this ptr->next reaches null hence it is the last node & we return the value of the node
    }
    return ptr->data;
}


int main()
{
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    Traversal(top);
    // int e = pop(&top);
    // printf("Element popped is %d\n",e);
    for (int i = 1; i <= 4; i++)
    {
        printf("Value of position at %d is %d\n", i, peek(i));
    }

    printf("Topmost Element of Stack is %d\n",stacktop());
    printf("Bottom most Element of Stack is %d",stackbottom());
    
    return 0;
}