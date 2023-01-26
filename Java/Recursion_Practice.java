package com.zander;

import java.util.SortedMap;

public class Recursion_Practice {
    static void Reverse_Pattern(int n) {
        if (n > 0) {
            System.out.println();
            for (int j = n; j >=1; j--) {
                System.out.print("*");
            }
            Reverse_Pattern(n - 1);
        }
    }
    static void Pattern(int n) {
        if (n > 0) {
            Pattern(n - 1);
            for (int j = 0; j < n; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
//Series: 0, 1, 1, 2, 3, 5, 8, 13, 21...
    //If Q is written as nth term, we start from index 1, else we start from index 0
    static int Fibonacci_series(int n){
        int result = 0;
        if (n == 1 || n == 2){
            return n-1;
        }
        else{
            result += Fibonacci_series(n-1) + Fibonacci_series(n-2);
        }
        return result;
    }
    public static void main(String[] args) {

//        Pattern(6);
//        Reverse_Pattern(8);

        System.out.println("The 6th element in Fibonacci Series is: "+Fibonacci_series(6));
    }
}
