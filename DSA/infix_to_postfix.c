#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    char *arr;
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

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
        return 0;
}

void push(struct stack *ptr, char value)
{
    if (isFull(ptr)) // checks the condition if stack is full or not
    {
        printf("Stack Overflow... cannot push %d in stack\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value; // simply assigns the value to top position, hence becoming the topmost element
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top--; // decrements the value to top and assigns the old top value to an integer "value", hence value no longer belongs to the stack
        return value;
    }
}

int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int precedence (char b){
    if (b == '*' || b == '/')
    {
        return 3;
    }
    if (b == '+' || b == '-')
    {
        return 2;
    }
    else
    return 0;
}

int isOperator(char c){
        if (c == '*' || c == '/' || c == '+' || c == '-')
    {
        return 1;
    }
    else
    return 0;
}

char *InfixToPostfix(char *infix)
{
    struct stack *a = (struct stack *)malloc(sizeof(struct stack));     
    a->size = 100;
    a->top = -1;
    a->arr = (char *)malloc(a->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i]; // this function checks if the pointer is pointing towards operand... if its operand then it simply places the value in postfix stack
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(a)))  // this function will push the operator in stack
            {
                push(a, infix[i]);
                i++;
            }
            else {                    // if precedence is less than or equal to the previous stacked element then we will pop the operator
                postfix[j] = pop(a); // and show it in the postfix stack
            j++;
            }   //never forget brackets in loops which are not 1-liners
        }
    }
    while (!isEmpty(a))
    {
        postfix[j] = pop(a); //when there are no more operators left, this will pop every operator in the stack to postfix and will continue this until stack becomes empty
        j++;
    }
    postfix[j] = '\0'; // to ensure the postfix reaches its end
    return postfix;
}

int main()
{

    char *infix ="a+b/c";
    printf("Postfix Expression is: %s",InfixToPostfix(infix));
    return 0;
}