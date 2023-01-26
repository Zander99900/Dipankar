#include<stdio.h>
#include"insert_algo.c"
#include"delete_algo.c"
void display(int arr[], int n){
	int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
int arr[10] = {1,2,3,4,5};
int size = 5, element =10, index = 1;
display(arr, size); //call the fucking function u dumbass!!!!
// insert(arr, size, element, 10, index);
delete(arr, size, 10, index);
size--;
printf( "After deletion, New array is: \n ");
display(arr, size);
return 0;
}
