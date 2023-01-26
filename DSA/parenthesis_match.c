#include <stdio.h>
#include <stdlib.h>
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

int isFull(struct stack * ptr){
    if (ptr->top == ptr->size-1) 
    {
        return 1;
    }
    else
        return 0;
}

void push(struct stack *ptr, char value){
    if (isFull(ptr)) // checks the condition if stack is full or not
    {
        printf("Stack Overflow"); 
    }
    else{
    ptr->top++;
    ptr->arr[ptr->top] = value; //simply assigns the value to top position, hence becoming the topmost element 
    }
}

char pop(struct stack *ptr){
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else{
    char value = ptr->arr[ptr->top];
    ptr->top--;   //decrements the value to top and assigns the old top value to an integer "value", hence value no longer belongs to the stack
    return value;   
    } 
}

int match(int a, int b){
    if (a=='(' && b ==')')
    {
        return 1;
    } 
    if (a=='{' && b =='}')
    {
        return 1;
    }
    if (a=='[' && b ==']')
    {
        return 1;
    }
    else
    return 0;
}
int parenthesis(char *exp){
    struct stack * a;
    a->size = 100;
    a->top = -1;
    a->arr = (char *)malloc (sizeof(char));
    char popped;
    for (int i = 0; exp[i]!= '\0'; i++)
    {
        if (exp[i]=='(' || exp[i]=='{' || exp[i]=='[') //push ( into the stack and when you will find ')' , the pop out ( from the stack
        {
            push(a, exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']') // condition o check if ) is present in expression or not 
        {
            if (isEmpty(a))
            {
                return 0; //here, we if we find ) and there is no ( found earlier, then we declare that this parenthesis is incomplete
            }
            else
            popped = pop(a); //checking whether parenthesis is balanced
            if (!match(popped, exp[i]))
            {
                return 0;
            }            
        } 
    }
    if (isEmpty(a))
    {
        return 1; // at the end of loop, the stack should be empty, it implies that all the parenthesis are balanced and there is no prblm in expression!
    }
    else 
        return 0;
}

int main()
{
    // char * exp = "19)*(9)"; //example of improper parenthesis match 
     char * exp = "({19-10})*(9+[15*20])"; //example of proper parenthesis match
    //  char * exp = "({19-10})*(9+{[15*20])]"; //example of proper parenthesis match

    if (parenthesis(exp))
    {
        printf("Parenthesis is balanced");
    }
    else
        printf("Parenthesis are not balanced");
    return 0;
}

//this program only matches parenthesis and gives no answer whether expression is valid or not!!