package com.zander;
import java.util.Scanner;

class Geometry_Circle_Sphere{
    private int radius;
    private int height;
    private int opt;
    float pi = 3.14f;
    public int getRadius() {
        return radius;
    }

    public void setRadius(int radius) {
        this.radius = radius;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    int UserInput() {
        System.out.println("Enter 1 for Cylinder, 2 for Sphere:");
        Scanner sc = new Scanner(System.in);
        opt = sc.nextInt();
        return opt;
    }


        void volumeCylinder(int radius, int height){
        float volume = pi*(radius*radius)*height;
            System.out.println("The Volume of the Cylinder is: "+volume);
        }

        void surfaceAreaCylinder(int radius, int height){
        float SArea = (2*pi*radius)*(radius+height);
        System.out.println("The Surface Area of the Cylinder is: "+SArea);
        }

        void volumeSphere(int radius){
        float volumeS = 4/3*pi*(radius*radius*radius);
        System.out.println("The Volume of the Sphere is: "+volumeS);
        }

        void surfaceAreaSphere(int radius){
        float SAreaS = 4*pi*(radius*radius);
        System.out.println("The Surface Area of the Sphere is: "+SAreaS);
        }
}
public class new_Geometry {
    static int option(int x){
        Geometry_Circle_Sphere obj = new Geometry_Circle_Sphere();
        if(x==1){
            return 1;
        }
        else if(x==2){
            return 2;
        }
        System.out.println("Invalid Input! Try again");
        return option(obj.UserInput());
    }
    public static void main(String[] args) {
        Geometry_Circle_Sphere obj = new Geometry_Circle_Sphere();
        String arr[] = {"Y", "N"};
        System.out.println("Enter 1 for Cylinder, 2 for Sphere:");
            Scanner sc = new Scanner(System.in);
            int a = sc.nextInt();
            int b = option(a);
        if (b==1){
            System.out.println("Enter Radius: ");
            int rad = sc.nextInt();
            obj.setRadius(rad);
            System.out.println("Enter Height: ");
            int h = sc.nextInt();
            obj.setHeight(h);
            System.out.println("Enter 1 to find volume, 2 to find Surface Area:");
            int m = sc.nextInt();
            if(m<=0|| m>2){
                System.out.println("Invalid Input! Try again");

                main(arr);
                return;
            }
            else {
                int opt2 = option(m);
                if (opt2 == 1) {
                    obj.volumeCylinder(obj.getRadius(), obj.getHeight());
                }
                if (opt2 == 2) {
                    obj.surfaceAreaCylinder(obj.getRadius(), obj.getHeight());
                }
            }

        }
        if (b==2) {
            System.out.println("Enter Radius: ");
            int rad = sc.nextInt();
            obj.setRadius(rad);
            System.out.println("Enter 1 to find volume, 2 to find Surface Area:");
            int m = sc.nextInt();
            if(m<=0|| m>2){
                System.out.println("Invalid Input! Try again");
                main(arr);
            }
            else {
                int opt2 = option(m);
                if (opt2 == 1) {
                    obj.volumeSphere(obj.getRadius());
                }
                if (opt2 == 2) {
                    obj.surfaceAreaSphere(obj.getRadius());
                }
            }
        }
    }
}
