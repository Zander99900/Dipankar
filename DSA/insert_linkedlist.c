#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next; //pointer of type struct node, that points towards the next node
};

struct Node *InsertAtHead(struct Node *head)
{
    struct Node *ptr= (struct Node *) malloc(sizeof(int));
    ptr->data= 5;
    ptr->next = head;
    return ptr;
    
};

struct Node *InsertAtIndex(struct Node *head, int index, int data)
{
    struct Node *ptr= (struct Node *) malloc(sizeof(int));
    struct Node *p = head;
    int i = 0;
    while (i!= index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data= data;
    ptr->next = p->next;
    p->next= ptr;
           return head;
};

struct Node *InsertAtEnd(struct Node *head)
{
    struct Node *ptr= (struct Node *) malloc(sizeof(int));
    struct Node *p = head;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next= ptr;
    ptr->data= 5;
    ptr->next = NULL;
    return head;
};

struct Node *InsertAtValue(struct Node *head, struct Node *prevnode, int data)
{
    struct Node *ptr= (struct Node *) malloc(sizeof(int));
    ptr->data= data;
    ptr->next = prevnode->next;
    prevnode->next= ptr;
    return head;
};


void Traversal(struct Node *ptr){
    while (ptr!= NULL)
    {
        printf("Element = %d\n", ptr->data); //print the data stored in the struct node, and change the pointer to the next node.
        ptr= ptr->next;
    }
    
}

int main(){
    struct Node *head; //common mistake: mark the capital & small terms, node & Node are different terms and can cause error while declaration.
    struct Node *first;
    struct Node *second;
    struct Node *third;
// Here we allocate the elements as struct node type from the heap memory
head = (struct Node *)malloc(sizeof(struct Node));
first = (struct Node *)malloc(sizeof(struct Node));
second= (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));
head->data = 10;
head->next = first;

first->data = 20;
first->next = second;

second->data= 30;
second->next = third;

third->data= 40;
third->next = NULL;
printf("List Before Insertion is: \n");
Traversal(head);
printf("List After Insertion is: \n");
// head = InsertAtHead(head);
// head = InsertAtIndex(head, 1, 5);
// head = InsertAtEnd(head);
head = InsertAtValue(head, second, 5);
Traversal(head);
return 0;
}
