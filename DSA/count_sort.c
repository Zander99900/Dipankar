#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int printarr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int maximum(int *a, int size)
{
    int i;
    int max = INT_MIN;
    for (i = 0; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
void CountSort(int *a, int size)
{
    int i;
    int j;
    // save the max memory in memory
    int max = maximum(a, size);
    // create a count array
    int *count = (int *)malloc((max + 1) * sizeof(int));

    for (i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    // increment the index in count array
    for (i = 0; i < size; i++)
    {
        count[a[i]]++;
    }
    i = 0; // for counter array
    j = 0; // for given array

    while (i <= max)
    {
        if (count[i] > 0)
        {
            a[j] = i;
            count[i]--; // here we set the value that the value is present in array
            j++;
        }
        else
            i++; // for elements not present in given array
    }
}
int main()
{
    int a[] = {7, 8, 1, 2, 6};
    int size = 5;
    printf("Original array is:\n");
    printarr(a, size);
    printf("Sorted Array is: \n");
    CountSort(a, size);
    printarr(a, size);
    return 0;
}