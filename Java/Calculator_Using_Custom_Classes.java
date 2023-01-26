package com.zander;
import java.util.Scanner;
class Calculator { //we cannot use multiple Public class within a single java file, but if we just create a class without using public keyword, then we can use it anywhere

    public void Add(int a, int b) {
        System.out.println("The sum of the numbers is: " + a + b);
    }

    public void Subtract(int a, int b) {
        if (a > b) {
            int c = a - b;
            System.out.println("The result after subtracting the numbers is: " + c);
        }
        if (a < b) {
            int c = b - a;
            System.out.println("2nd number is greater than 1st so we subtracted 2nd from 1st, The result after subtracting the numbers is: " + c);
        }
    }

    public void Multiply(int a, int b) {
        System.out.println("The product of the numbers is: " + a * b);
    }

    public void divide(int a, int b) {
        if(a<b){
            System.out.println("Cannot Divide!");
        }
        else {
        System.out.println("The quotient of the numbers is: " + a / b);
        }
    }

    public void percentage(int a, int b) {
        float c = (float) (a * b / 100);
        System.out.println("The quotient of the numbers is: " + c);
    }
}

class Geometry{

    Scanner sc = new Scanner(System.in);
    public void Circle_Op(float radius){
        System.out.println("Press 1 to find area, 2 for Circumference: ");
        int option = sc.nextInt();
        if (option==1){
            float result = 2*3.14f*radius;
            String res = String.format("%.2f",result); // used to limit the result in 2 decimal places
            System.out.println("The area is: "+res);
        }
        else if(option==2){
            float result = 2*3.14f*radius;
            String res = String.format("%.2f",result);
            System.out.println("The Perimeter is: "+res);
        }
        else {
            System.out.println("Wrong Input! try Again");
        }

    }
    public void Area(int a,int b){
    if(a==b) {
        System.out.println("It is a square!");
        System.out.println("Area is:" +a*a);
    }
    else {
        System.out.println("It is a Rectangle!");
        System.out.println("Area is:" +a*b);
    }
    }

    public void Perimeter(int a,int b){
        if(a==b) {
            System.out.println("It is a square!");
            System.out.println("Perimeter is:" +4*a);
        }
        else {
            System.out.println("It is a Rectangle!");
            System.out.println("Perimeter is:" +2*(a+b));
        }
    }
}

public class Calculator_Using_Custom_Classes {

    public static void main(String[] args) {
//        System.out.println("Choose 1 for addition \t2 for subtraction \t3 for multiplication \t 4 for division \t5 to find Percentage");
        Scanner sc = new Scanner(System.in);
//        int option = sc.nextInt();
//
//        //Instantiation of an object of class calculator.
//        Calculator obj = new Calculator();
//        if(option>5){
//            System.out.println("Wrong Input! try Again");
//        }
//        else {
//            System.out.println("Enter Two Numbers: ");
//            int a= sc.nextInt(), b= sc.nextInt();
//            if (option == 1) {
//                obj.Add(a, b); //this reduces the redundancy of writing the code again & again, if we want to use a method of any other class, we can just call it using '.'
//            }
//            else if (option == 2) {
//                obj.Subtract(a, b);
//            }
//            else if (option == 3) {
//                obj.Multiply(a, b);
//            }
//            else if (option == 4) {
//                obj.divide(a, b);
//
//            } else if (option == 5) {
//                obj.percentage(a, b);
//            }
//        }

//          Program To find perimeter & Area Of any shape
        Geometry obj = new Geometry();
        System.out.println("Enter 1 for Area, 2 for Perimeter, 3 for Circle");
        int option = sc.nextInt();
        if (option > 3) {
            System.out.println("Wrong Input!");
        }
        else if (option == 3){
            System.out.println("Enter The Radius of Circle: ");
            float a = sc.nextFloat();
            obj.Circle_Op(a);
        }
        else {
            System.out.println("Enter the numbers:");
            int a = sc.nextInt();
            int b = sc.nextInt();
            if (option == 1) {
                obj.Area(a, b);
            }
            else{
                obj.Perimeter(a, b);
            }

        }
    }
}
