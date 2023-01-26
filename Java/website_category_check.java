package com.zander;
import java.util.Scanner;
public class website_category_check {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        if(a.endsWith(".org")){
            System.out.println("Organizational website");
        }
        else if(a.endsWith(".com")){
            System.out.println("Commercial website");
        }
        else if(a.endsWith(".in")){
            System.out.println("Indian website");
        }
        else if(a.endsWith(".gov")){
            System.out.println("Government website");
        }
        else{
            System.out.println("Not a Valid Website");
        }
    }
}
