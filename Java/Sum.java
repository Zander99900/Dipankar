package com.zander;

public class Sum { //whatever functions you are making, never make it out of the class
    int sum(int n1, int n2, int n3){ //the main function is static, so we used static int to make the objects of same type
        return n1 + n2 + n3;
    }
    public void main(String[] args) {
	// Code to add three Numbers
        int num1 = 3;
        int num2 = 4;
        int num3 = 5;
        int a = sum(num1,num2,num3);
        System.out.print("The sum of these integer is : ");
        System.out.println(a);
//        int a = 'a';
//        char b = (char)(5+a);
//        System.out.println(b);
    }
}
