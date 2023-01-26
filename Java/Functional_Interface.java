package com.zander;

@FunctionalInterface
//This annotation is used if an interface has only one abstract method i.e., if we need to use it only once in main function then it is preferable
interface funct{
    public int sum4(int a, int b);
   // public void divide();
}

//class operation implements funct{
//    @Override
//    public int sum4(int a, int b) {
//        return a+b;
//    }
//}
public class Functional_Interface {
    public static void main(String[] args) {
        //Lambda expression (we can directly create an instance without creating an object, we can directly define here
        funct op = (a,b)->{
            return a+b;
        };
        int x = op.sum4(4,6);
        System.out.println("The sum of 4 & 6 is: "+x);
    }
}
