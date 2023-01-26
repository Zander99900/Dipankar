package com.zander;

import java.util.Scanner;

public class Converter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter distance in km: ");
        float a = sc.nextFloat();
        double b = a * 0.621371;
        System.out.println("The Distance in miles is: "+ b);
    }
}

