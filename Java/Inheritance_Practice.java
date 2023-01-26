package com.zander;
import java.util.Scanner;
class Circle{
    int radius;
    Circle(int r){
       this.radius = r; //This sets the value of radius in the local variable
    }
    public float Circle_Area(){
        return (float) (Math.PI*this.radius*this.radius);
    }
}

class Cylinder extends Circle{
    int height;
    Cylinder(int r, int h){
        super(r); //This sets the value of radius in the base class of circle
        this.height = h;
    }
    public float Volume(){
        return Circle_Area()*height;
    }
}
public class Inheritance_Practice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Radius of circle");
        int radius = sc.nextInt();
        System.out.println("Enter The height of circle");
        int height = sc.nextInt();
//        Circle obj = new Circle(radius);
        Cylinder obj2 = new Cylinder(radius,height);
        System.out.println("Area of Circle with radius: "+radius+ " and height: " +height+ " is: "+obj2.Volume());
    }
}
