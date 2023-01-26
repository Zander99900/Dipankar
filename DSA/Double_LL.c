#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev; //pointer of type struct node, that points towards the previous node
    struct Node *next; //pointer of type struct node, that points towards the next node
};

struct Node * ForwardTraversal(struct Node * head){
    struct Node * ptr = head;
        printf("Element is : %d\n",ptr->data);
    do{
        ptr = ptr->next;
        printf("Element is : %d\n",ptr->data);
    }while (ptr->next!= NULL);
}

struct Node * BackwardTraversal(struct Node * head){
    struct Node * ptr = head;
        do{
        ptr = ptr->next;
    }while (ptr->next!= NULL);
        printf("Element is : %d\n",ptr->data);
    do{
        ptr = ptr->prev;
        printf("Element is : %d\n",ptr->data);
    }while (ptr->prev!= NULL);
}

//Alternate Method

struct Node * ForwardTraversal2(struct Node * head){
    struct Node * ptr = head;
    do{
        printf("Element is : %d\n",ptr->data);
        ptr = ptr->next;
    }while (ptr!= NULL);
}

struct Node * BackwardTraversal2(struct Node * head){
    struct Node * ptr = head;
    do{
        printf("Element is : %d\n",ptr->data);
        ptr = ptr->prev;
    }while (ptr!= NULL);
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
head->prev = NULL;
head->next = first;

first->data = 20;
first->prev = head;
first->next = second;

second->data = 30;
second->prev = first;
second->next = third;

third->data = 40;
third->prev = second;
third->next = NULL;
printf("List in Forward direction is: \n");
// ForwardTraversal(head);
ForwardTraversal2(head);
printf("List in Backward direction is: \n");
// BackwardTraversal(head);
BackwardTraversal2(third);
return 0;
}