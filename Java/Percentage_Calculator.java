package com.zander;

import java.util.Scanner;

public class Percentage_Calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st Number: ");
        float a = sc.nextFloat();
        System.out.println("Enter 2nd Number: ");
        float b = sc.nextFloat();
        System.out.println("Enter 3rd Number: ");
        float c = sc.nextFloat();
        System.out.println("Enter 4th Number: ");
        float d = sc.nextFloat();
        System.out.println("Enter 5th Number: ");
        float e = sc.nextFloat();
        float f = ((a+b+c+d+e)/500)*100;
        System.out.println("Your Percentage is: " +f);
    }
}
