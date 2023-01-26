package com.zander;

import java.util.Scanner;
public class CheckSize {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your number: ");
        boolean a = sc.hasNextInt();
        System.out.println("The Number is integer: "+a);
        boolean b = sc.hasNextFloat();
        System.out.println("The Number is FLoat: "+b);
    }
}
