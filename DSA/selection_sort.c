#include <stdio.h>
int printarr(int *arr, int n) // here don't use arr[] because it will take one memory of entire array but if we simply pass *arr, then it will take entire array at once
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void SelectionSort(int *arr, int size)
{   //key is storing the index of minimun value
    int key, i, j, temp;
    for (i = 0; i < size-1; i++)
    {
        key = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[key])
            {
                key = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[key];
        arr[key] = temp;
    }
}
int main()
{
    int arr[] = {2, 5, 1, 9, 7, 4};
    int size = 6;
    printf("Original array is:\n");
    printarr(arr, size);
    printf("Sorted Array is: \n");
    SelectionSort(arr, size);
    printarr(arr, size);
    return 0;
}