#include <stdio.h>
int printarr(int *arr, int n) // here don't use arr[] because it will take one memory of entire array but if we simply pass *arr, then it will take entire array at once
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int partition(int arr[], int low, int high)
{

    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot) //if the value of arr[i] > pivot element then i will stay there
        {
            i++;
        }
        while (arr[j] > pivot) //if the value of arr[j] < pivot element then j will stay there
        {
            j--;
        }
        if (i < j) //at a point when value of j is greater than i, the value of i and j will interchange
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;  //at a point when value of i will be greater than j, then they will swap the pivot with jth element
    return j; //after swapping we send the new pivot as j and from that point, the array will get partitioned in two sub arrays where quicksort is performed recursively
}

void QuickSort(int arr[], int low, int high)
{
    int partitionint;
    if (low < high)
    {
        partitionint = partition(arr, low, high); //here, the partitioned int is sorted in its position and from there two quicksorts are performed simultaneously
        QuickSort(arr, low, partitionint - 1);
        QuickSort(arr, partitionint + 1, high);
    // printarr(arr, high);
    }
}
int main()
{
    int arr[] = {7, 3, 8, 9, 1, 5, 2, 4, 12, 6 };
    int size = 10;
    printf("Original array is:\n");
    printarr(arr, size);
    printf("Sorted Array is: \n");
    QuickSort(arr, 0, size - 1);
    printarr(arr, size);
    return 0;
}