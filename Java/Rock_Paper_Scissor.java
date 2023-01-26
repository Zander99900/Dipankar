package com.zander;
import java.util.Scanner;
import java.util.Random;
public class Rock_Paper_Scissor {

    static void ViewResult(int result){
        if (result<0){
            System.out.println("Computer Won!");
        }
        if (result==0){
            System.out.println("Tie");
        }
        if (result>0){
            System.out.println("User Won!");
        }
    }
    public static void main(String[] args) {

        String user = "User Won!";
        String comp = "Computer Won!";
        String tie = "Tie! try Again";
        int result = 0;
        int i = 0;
        while (i!=5) {

        //User Input
        Scanner sc = new Scanner(System.in);
        System.out.println("Press 0 for Rock, 1 for Paper, 2 for Scissor");
        int a = sc.nextInt();

        //computer generated number
        Random io = new Random();
        int b = io.nextInt(3);
        System.out.println(b);

        //comparing both inputs
            if (a == b) {
                System.out.println(tie);
                result += 0;
            }
            else if (a == 0) {
                if (b == 1) {
                    System.out.println(comp);
                    result -= 1;
                }
                if (b == 2) {
                    System.out.println(user);
                    result +=1;
                }
            }
            else if (a == 1) {
                if (b == 0) {
                    System.out.println(user);
                    result +=1;

                }
                if (b == 2) {
                    System.out.println(comp);
                    result -= 1;
                }
            }
            else if (a == 2) {
                if (b == 0) {
                    System.out.println(comp);
                    result -= 1;
                }
                if (b == 1) {
                    System.out.println(user);
                    result +=1;
                }
            }
            else {
                System.out.println("Invalid Input");
                result += 0;
            }
            i++;
        }
        //Comparing results
        System.out.println("Final Results:");
        ViewResult(result);
    }
}
