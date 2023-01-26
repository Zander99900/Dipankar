#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    return 0;
}

int isFull(struct stack * ptr){
    if (ptr->top == ptr->size-1) 
    {
        return 1;
    }
    else
        return 0;
}


void push(struct stack *ptr, int value){
    if (isFull(ptr)) // checks the condition if stack is full or not
    {
        printf("Stack Overflow... cannot push %d in stack\n", value); 
    }
    else{
    ptr->top++;
    ptr->arr[ptr->top] = value; //simply assigns the value to top position, hence becoming the topmost element 
    }
}

int pop(struct stack *ptr){
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else{
    int value = ptr->arr[ptr->top];
    ptr->top--;   //decrements the value to top and assigns the old top value to an integer "value", hence value no longer belongs to the stack
    return value;   
    } 
}

int peek(struct stack *ptr, int i){   //peek simply means printing the values stored in stack
    int arrindex = ptr->top -i + 1;
    if (arrindex < 0)
    {
        printf("position is not valid");
        return -1;
    }
    else
    {
        return ptr->arr[arrindex];
    }
}

int stackTop(struct stack *ptr){
    return ptr->arr[ptr->top];
}
int stackBottom(struct stack *ptr){
    return ptr->arr[0];
}

int main()
{
    // struct stack a;
    //     a.top = -1;
    //     a.size = 50;
    //     a.arr= (int *)malloc(a.size * sizeof(int));   this is call by value method

    struct stack *a = (struct stack *)malloc (sizeof(struct stack));
    a->size = 10;
    a->top = -1;
    a->arr = (int *)malloc(a->size * sizeof(int)); //dynamically allocation the size of array according to the size provided by user

    printf("Before Pushing, Stack is empty: %d \n",isEmpty(a));
    printf("Before Pushing, Stack is full: %d \n", isFull(a));
    push(a, 5);
    push(a, 10);
    push(a, 15);
    push(a, 20);
    push(a, 25);
    push(a, 30);
    push(a, 35);
    push(a, 40);
    push(a, 45);
    push(a, 50);
    push(a, 55);
    printf("After Pushing, Stack is empty: %d \n",isEmpty(a));
    printf("After Pushing, Stack is full: %d \n", isFull(a));
    printf("\nThe Popped Value is: %d\n",pop(a));

    for (int j = 0; j <= a->top+1; j++)
    {
        printf("the value at position %d is %d\n",j , peek(a, j));
    }

    printf("\n\n The Topmost element in stack is: %d\n", stackTop(a));
    printf("The Bottom most element in stack is: %d\n", stackBottom(a));
    
    return 0;
}