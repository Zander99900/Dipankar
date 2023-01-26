package com.zander;
import java.util.Scanner;
public class Practice_Set_loops {
    static int Factorial(int n){
        if(n==0 || n==1){
            return 1;
        }
        else{
        return (n*(Factorial(n-1)));
        }
    }
    public static void main(String[] args) {
        //1. Print first n even numbers using while loop
        Scanner sc = new Scanner(System.in);
//        System.out.print("Enter the number of terms: ");
//        int n = sc.nextInt();
//        int sum = 0;
//        int i = 0;
//        while (i!=n){
//            sum = sum + (2*i);
//            i++;
//        }
//
//        System.out.println("The Sum of 1st "+n+" even numbers is: " +sum);
        //2. Print Multiplication Table
//        System.out.print("Enter the number: ");
//        int n = sc.nextInt();
//        for (int i = 10; i >= 1; i--) {
//            System.out.println(n+ "*" +i+ "=" +(n*i));
//        }

        //3. Use recursion to find factorial of a number
         System.out.print("Enter the number: ");
                int n = sc.nextInt();
                int fact=Factorial(n);
        System.out.println("The factorial of " +n+ " is: " +fact);
    }
}
