#include <stdio.h>

int printarr(int *arr, int n) // here don't use arr[] because it will take one memory of entire array but if we simply pass *arr, then it will take entire array at once
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void BubbleSort(int *arr, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // the number of pass
    {
        printf("The number of passes done is: %d\n", i + 1);
        isSorted = 1; // this method is used for pre-sorted arrays
                      //  the comparison is done here
        for (int j = 0; j < n - 1 - i; j++) //**don't use i <=n-1 because it will run for another n times and it will give garbage values
        {
            if (arr[j] > arr[j + 1])
            {
                // arr[j] = arr[j] + arr[j+1]; //this method doesn't work because here we are taking the address of array and we cannot add two pointers!!
                // arr[j+1] = arr[j] - arr[j+1];
                // arr[j] = arr[j] - arr[j+1];
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0; // the integer will scan if the array is already sorted the it will not take any further pass and it will return the original array at once
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int arr[] = {6, 4, 23, 19, 8, 5};
    int n = 6;
    printf("Original array is: \n");
    printarr(arr, n);
    BubbleSort(arr, n);
    printf("Sorted Array is: \n");
    printarr(arr, n);
    return 0;
}