package com.zander;
import java.util.Scanner;
public class Practice_set_array {
    public static void main(String[] args) {
        /*
1. Array of 5 floats and their sum
        Scanner sc = new Scanner(System.in);
        float[] arr = new float[5];
        float j=0;
        System.out.println("Enter 5 Numbers: ");
        for (int i = 0; i<5; i++) {
            arr[i] = sc.nextFloat(); //you cannot use foreach loop to take user inputs
        }
        for (float key: arr) {
            j = j + key;
        }
        System.out.println("The sum of array is: "+j);
2. Find an element in the array
        System.out.println("Enter The element You are searching: ");
        float key = sc.nextFloat();
        for (int i = 0; i<5;i++) {
            if(arr[i] == key){
                System.out.println("The Required element found at position: "+i);
            }
            else {
                System.out.println("Element Not Present In array!");
            }
        }
3. Average Marks of an array
        float sum = 0;
        float avg;
        for (float element:arr) {
            sum = sum + element;
        }
        avg = sum/arr.length;
        System.out.println("The Average marks is: "+avg);
4. Addition Of 2D Matrix
        int[][]arr1 = {{1, 2 , 3},
                       {4, 5 , 6}};
        int[][]arr2 = {{4, 5 , 6},
                       {10, 20, 30}};
        int[][]arr3 = {{0, 0 , 0},
                    {0, 0 , 0}};
        for (int i = 0; i < arr1.length; i++) {
            for (int j = 0; j < arr1[i].length; j++) {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
                System.out.print(arr3[i][j] + "\t");
            }
            System.out.println();
        }
5. Reverse Of an array
                int[]arr = {1, 2, 3, 4, 5, 6};
                int len = arr.length;
                int n = Math.floorDiv(len,2);
                int temp;
        for (int i = 0; i < n; i++) {
            temp = arr[i];
            arr[i] = arr[len - i - 1];
            arr[len - i - 1] = temp;

        }
        for (int element:arr) {
            System.out.print(element + " ");
        }
        System.out.println();
6. Find Greatest number in array
        int[]arr = {1, 2, 3, 4, 5, 6};
        int max = 0;
        for (int a:arr) {
            if (max<a){
                max = a;
            }
        }
        System.out.println(max);
7. Find the Smallest number in array
        int[]arr = {1, 2, 3, 4, 5, 6};
        int max = Integer.MAX_VALUE; //Take the largest value and replace it with a smaller value
        for (int a:arr) {
            if (max>a){
                max = a;
            }
        }
        System.out.println(max);
8. Find Whether Array is sorted or not
*/

        int[]arr = {1, 2, 36, 4, 5, 6};
                boolean IsSorted = true;
        for (int i = 0; i < arr.length-1; i++) {
            //For Ascending Order
            if (arr[i] > arr[i + 1]) {
                IsSorted = false; //The array is not sorted
                break;
            }
        }
            if (IsSorted){
                System.out.println("The Array is sorted!");
            }
            else {
                System.out.println("The Array is not sorted!");
            }
    }
    }
