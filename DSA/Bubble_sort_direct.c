#include <stdio.h>

int printarr(int *arr, int n) //here don't use arr[] because it will take one memory of entire array but if we simply pass *arr, then it will take entire array at once
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {2, 5, 1, 9, 12, 4};
    int n = 6;
    int temp;
    printf("Original array is:\n");
    printarr(arr, n);
    for (int i = 0; i < n - 1; i++) // the number of pass 
    {
        printf("The number of passes done is: %d\n",i+1);
         // the comparison is done here
        for (int j = 0; j < n - 1 - i; j++) //**don't use i <=n-1 because it will run for another n times and it will give garbage values
        { 
            if (arr[j] > arr[j + 1])
            {
                // temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                arr[j] = arr[j] + arr[j+1]; //this method work here because here we are directly accessing the value of array and we cannot add two pointers but we can add two integers here!!
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
     printarr(arr, n);
    return 0;
}

