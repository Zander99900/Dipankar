package com.zander;

public class Methods {
    float Divide(float a, float b){ //without using static keyword, we need to create an object in main in order to use it
        float c;
        if(a>b){
            c = (a/b)*2;
        }
        else{
            c = (a/b)*3;
        }
        return c;
    }

    //Method Overloading means we can create multiple methods of same name but with different parameters i.e, multiply(int a, int b) 7 multiply (int a) can be created in same class
    static int multiply(int a, int b){ //if we create a static method, we can call the method directly in main or any other method
        int c = a*b;
        return c;
    }
    static int multiply(int a){
        int c = a*5;
        return c;
    }
    static void multiply(){
        System.out.println(" 5 * 5 is: 25");
    }
    public static void main(String[] args) {
        //Invoking Method By creating Object
            Methods obj = new Methods();//If U create a method without using static keyword, then u have to create an object in order to use it
        float c = obj.Divide(4.3f,5.8f);
        System.out.println(c);

        System.out.println("This method takes only one argument " + multiply(5)); //Calling method directly without creating a separate object
        System.out.println("This method takes only one argument " + multiply(3,6));
        System.out.print("This method takes no argument: "); multiply();

    }
}