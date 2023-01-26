package com.zander;
import java.util.Scanner;
public class pass_fail_check {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Marks Scored in C:");
        int m1 = sc.nextInt();
        System.out.println("Marks Scored in C++:");
        int m2 = sc.nextInt();
        System.out.println("Marks Scored in Java:");
        int m3 = sc.nextInt();
        float avg =((m1 + m2 + m3)/3.0f);
        System.out.println("The Average Marks scored is: "+ avg);
        if(avg>=40 && m1>=33 && m2>=33 && m3 >=33) {
                System.out.println("Pass");
            }
            else{
                System.out.println("fail");
            }
        }
    }
