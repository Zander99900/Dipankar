package com.zander;

public class Using_VarArgs {
    //VarArgs is used when we want to use the same function with changing parameters i.e., int sum (int a, int b) is limited to find sum of only two arguments
    //but, if we want to find the sum of more than 2 integers, then we need to create separate function again and again varargs reduces this problem but taking inputs as array
    static int Sum(int ...arr) {
        int i = 0;
        int result = 0;
            for (int a : arr) {
                result += a;
        }
        return result;
    }
    public static void main(String[] args) {
        int c = Sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10); //this method can take any number of arguments
        System.out.println("Sum Of 1st 10 Natural Numbers Is: "+c);
    }
}
