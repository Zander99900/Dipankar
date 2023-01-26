package com.zander;
import java.util.Scanner;
public class string_check {
    public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
        //String y = sc.next(); //Used to print only the words before a space occurs
//        String x = sc.nextLine(); //Used to print the entire sentence(all after space)
        String x = "IntelliJ IDEA Community";
        System.out.println("This function prints the string in  Upper Case: " + x.toUpperCase());
        System.out.println("This function prints the Length of the string: " + x.length());
        System.out.println("This function prints the character at a specific index: " + x.charAt(2));
        System.out.println("This function prints the string from a specific index: " + x.replace('i','a'));
        System.out.println("This function prints the string from a specific index: " + x.startsWith("Int"));
        System.out.println("This function prints the string ending with a specific index: " + x.endsWith("Int"));
        System.out.println("This function prints the string from a specific index: " + x.lastIndexOf("DEA",15));
        System.out.println("This function prints whether the string is equal to another string or not : " + x.equals("IntelliJ Idea Community"));
        System.out.println("This function prints whether the string is equal to another string or not(ignoring case): " + x.equalsIgnoreCase("Intellij idea Community"));
        System.out.println("This function prints \" \n \t \b \\ escape sequence characters  " );


    }
}
