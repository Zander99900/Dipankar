#include <stdio.h>
int printarr(int *arr, int n) // here don't use arr[] because it will take one memory of entire array but if we simply pass *arr, then it will take entire array at once
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void merge(int a[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    int b[high + 1];
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        } // comparing the arrays till one sub-array reaches its end
        /* code */
    }
    // after any one sub-array is completely compared & still some elements left, we simply place the elements as it is
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    // replacing the original array with sorted array
    for (int x = low; x <= high; x++)
    {
        a[x] = b[x];
    }
}

void MergeSort(int a[], int low, int high)
{
    int i = low;
    int j = high;
    if (i < j)
    {
        int mid = (low + high) / 2;
        MergeSort(a, low, mid); //everytime a merge point found, we break the array into two sub-arrays, we do it recursively
        MergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
        // printarr(a, high);
    }
}
int main()
{
    int a[] = {7, 8, 1, 2, 10};
    //int size = high+1 = 5;
    int low = 0;
    int high = 4;
    printf("Original array is:\n");
    printarr(a, high+1); //the printarr function will print the entire array starting from index 1,
    //so we use size as high+1 i.e., 4+1 = 5 
    printf("Sorted Array is: \n");
    MergeSort(a, low, high);
    printarr(a, high+1);
    return 0;
}