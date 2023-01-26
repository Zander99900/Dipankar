#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next; //pointer of type struct node, that points towards the next node
};

void Traversal(struct Node *ptr){
    while(ptr!= NULL)
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

Traversal(head);
return 0;
}
