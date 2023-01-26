package com.zander;
import java.lang.Exception;
import java.util.Scanner;

class MyCustomException extends Exception{
    @Override
    public String toString() {
        return "I am custom exception";
    }

    @Override
    public String getMessage() {
        return "I am getMessage()";
    }
}

class MyRetriesException extends Exception{
    @Override
    public String getMessage() {
        return "Max Limit Reached";
    }
}
public class Errors_PSet {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

//        if (a > 9) {
//            try {
//                System.out.println("This is try block");
//                throw new MyCustomException();
//            }
//            catch (Exception e) {
//                System.out.println(e.getMessage());
//                System.out.println(e.toString());
//                e.printStackTrace();
//            }

//            try {
//                System.out.println("Enter the number you want to divide");
//                int b = sc.nextInt();
//                int c = a/b;
//                System.out.println(c);
//                float d = a/b*100;
//                if(d<0 || d>100){
//                    throw new IllegalArgumentException("This is bad percentage");
//                }
//                System.out.println("The percentage is: "+d);
//            }
//            catch (ArithmeticException e) {
//                System.out.println("This is arithmetic Exception");
//            }
//            catch (IllegalArgumentException e) {
//                System.out.println(e.getMessage());
//                System.out.println("I am IllegalArgumentException");
//            }
//        }

        int[] arr = {4, 5, 6};
        int len = arr.length;
        int key = 0;
        System.out.println("You Only Have 5 rounds, Play wisely! ");
        while(true) {
            System.out.println("Guess The size of array: ");
            int a = sc.nextInt();
            if (a > len) {
                key++;
                System.out.println("Your Guess is wrong");
            }
            else {
                System.out.println("your guess is correct");
                break;
            }
            if(key>=5){
               try{
                   throw new MyRetriesException();
               }
               catch (MyRetriesException e) {
                   System.out.println(e.getMessage());
                   break;
               }
               finally {
                   System.out.println("This finally block runs at any cost no matter whether you return, break, get exception, anything, this block is a must ");
               }
            }
        }
    }
}