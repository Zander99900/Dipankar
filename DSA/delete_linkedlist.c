#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next; //pointer of type struct node, that points towards the next node
};

struct Node *DeleteAtHead(struct Node *head){
    struct Node * ptr = head;
    head = head->next;
     free(ptr);
     return head;
}

struct Node *DeleteAtIndex(struct Node *head, int index){
    struct Node * p = head;
    struct Node * q= head->next;
  for (int i = 0; i < index-1; i++) //we cannot use while loop here because we cannot use pointer q against index which is int datatype
    {
        p= p->next; //here we traverse the pointer p from head to the one position before where we want to delete the element
        q= q->next; //here we traverse the pointer p from head to one position after p pointer
    }
    p->next=q->next; // here we link the element to p which was earlier linked with q hence breaking the link of q
     free(q); // here we free the memory allocated to q
     return head;
}

struct Node *DeleteAtValue(struct Node *head, int value){
    struct Node * p = head;
    struct Node * q= head->next;
    while (q->data!=value && q->next!= NULL)
    {
        p= p->next;
        q= q->next;
    }
    if (q->data == value)
    {
        p->next=q->next; 
        free(q);
    }
    
     return head;
}

struct Node *DeleteAtEnd(struct Node *head){
    struct Node * p = head;
    struct Node * q= head->next;
    while (q->next!=NULL)
    {
        p= p->next;
        q= q->next;
    }
    p->next=NULL;
     free(q);
     return head;
}
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
printf("List Before Deletion is: \n");
Traversal(head);
printf("List After Deletion is: \n");
// head = DeleteAtHead(head);
// head = DeleteAtIndex(head, 1);
// head = DeleteAtEnd(head);
head = DeleteAtValue(head, 30);
Traversal(head);
return 0;
}
