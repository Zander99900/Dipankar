#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next; //pointer of type struct node, that points towards the next node
};

struct Node * CircularTraversal(struct Node * head){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    do
    {
        printf("Element is : %d\n",ptr->data); //here it does not check the condition whether ptr is equal to head or not, it is essential to start the traversal
        ptr = ptr->next;
    } while (ptr!=head);
}

struct Node * InsertAtHead(struct Node * head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data= data;
    struct Node *p = head;
    while (p->next!=head)
    {
        p=p->next; // traverse until we reach the last node
    }
    p->next= ptr; // here we break the last link and link it to ptr
    ptr->next= head; //here we point the inserted node towards the original head 
    head=ptr; //here we assign the new head
    return head; 
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
third->next = head;
printf("List Before Insertion is: \n");
CircularTraversal(head);
head = InsertAtHead(head, 20);
printf("List After Insertion is: \n");
CircularTraversal(head);
return 0;
}