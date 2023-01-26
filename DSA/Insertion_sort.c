#include<stdio.h>
int printarr(int *arr, int n) //here don't use arr[] because it will take one memory of entire array but if we simply pass *arr, then it will take entire array at once
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void InsertionSort(int *arr, int size){
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i-1;
        //checks if the element is greater than sorted array side, then it will swap the elements
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= key;
    }
}
int main(){
    //How function works:
    /*  -1  0  1  2  3  4   5
            2, 5, 1, 9, 7,  4  i= 1, j = 0, key = '5' 
            2,| 5, 1, 9, 7, 4 -> 1st pass over, no swaps

            2, 5,| 1, 9, 7, 4   i = 2, j = 1, key = '1'
            2, 1,| 5, 9, 7, 4   -> i = 2, j = 0, key = '1' 1 swapped 
            1, 2,| 5, 9, 7, 4   -> 2nd pass over j becomes -1, element 1 gets its position as while loop condition becomes false

            1, 2, 5,| 9, 7, 4   i = 3, j = 2, key = '9'
            1, 2, 5,| 9, 7, 4   3rd pass over, no swaps

            1, 2, 5, 9,| 7, 4   i = 4, j = 3, key = '7'
            1, 2, 5, 7,| 9, 4   i = 4, j = 2, key = '7' 7 swapped
            1, 2, 5, 7,| 9, 4   3rd  passed over

            after 4th pass, end result is:
            1, 2, 4, 5, 7, 9| j reaches the end
    */
    int arr[] = {2, 5, 1, 9, 7, 4};
    int size = 6;
    printf("Original array is:\n");
    printarr(arr, size);
    InsertionSort(arr, size);
    printf("Sorted Array is: \n");
    printarr(arr, size);
return 0;
}