#include<stdio.h>
// int LinearSearch(int arr[], int size, int element){
//     for (int i = 0; i < size-1; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//         else{
//             return -1;
//         }
//     }
     int BinarySearch (int arr[], int size, int element){
         int low, mid , high;
         low = 0;
         high = size-1;
         while (low<=high)
         {
         mid = (low + high)/2;
         for (int i = 0; i < size-1; i++)
         {
            if (arr[mid] == element)
            {
                return mid;
            }

            if (arr[mid] < element)
            {
                low = mid+1;
            }
            
            else{
                high = mid - 1;
            }
            
         }
         }
        return -1;
     }
int main(){
    int arr[10]= {1, 24, 35, 69, 80, 98}, element = 24;
    int size = sizeof(arr)/sizeof(int); //common mistake.. this is used to automatically enter the size of array in case of changing arrays
    int mysearch = BinarySearch(arr, size, element);
         printf("The element %d is found at position %d",element,mysearch);
return 0;
}