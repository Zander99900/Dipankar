package com.zander;

import java.util.Scanner;

public class scan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st Number: ");
        int a = sc.nextInt();
        System.out.println("Enter 2nd Number: ");
        int b = sc.nextInt();
        int c = a+b;
        System.out.println("The Sum of these Numbers are: ");
        System.out.println(c);
    }


}
