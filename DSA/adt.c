#include<stdio.h>
#include<stdlib.h>
struct myadt            //abstract data type means that the mechanism behind the data is hidden, here
// have reserved 10 memory spaces for an array of abstract data type but we will initialize only 2 memory space 
{
    int total_size;
    int used_size;
    int* ptr;
};

void CreateArray(struct myadt * a, int tsize, int usize){
//   (*a).total_size = tsize;
//   (*a).used_size = usize;  
//   (*a).ptr = (int*)malloc(tsize * sizeof(int)); malloc is used to dynamically allocate the 
//total number of integers in the pointer
  a->total_size = tsize;
  a->used_size = usize;  
  a->ptr = (int*)malloc(tsize * sizeof(int));
  //another way to represent the same allocation
};

void dkout(struct myadt *a){
    for ( int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }  
}

void dkin(struct myadt *a){
    int n;
    for ( int i = 0; i < a->used_size; i++)
    {
        printf("Enter Element %d\n", i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }  
}
int main(){
struct myadt marks;
CreateArray(&marks, 10, 2);
printf("Now we will take input\n");
dkin(&marks);
printf("Here's what you've enetered!\n");
dkout(&marks);
return 0;
}