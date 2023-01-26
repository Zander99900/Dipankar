package com.zander;
//SA cuboid: 2lh+2lw+2hw
import java.util.Scanner;
class Rectangle{
    int length;
    int breadth;
    Rectangle(int l, int b){
        this.length = l;
        this.breadth = b;
    }
    public int rectangle_area(){
        return this.length*this.breadth;
    }
}

class cuboid extends Rectangle{
    int height;
    cuboid(int l, int b, int h){
        super(l, b);
        this.height = h;
    }
    public int cuboid_Area(){
        return 2*((this.length* this.breadth) + (this.length* this.height) + (this.height* this.breadth));
    }
}
public class Inheritance_Practice_rectangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter The length of cuboid");
        int length = sc.nextInt();
        System.out.println("Enter The breadth of cuboid");
        int breadth = sc.nextInt();
        System.out.println("Enter The height of cuboid");
        int height = sc.nextInt();
//        Rectangle obj = new Rectangle(length,breadth);
//        System.out.println("The area of the rectangle is: "+obj.rectangle_area());
        cuboid obj = new cuboid(length,breadth,height);
        System.out.println("The surface area of the cuboid is: "+obj.cuboid_Area());
    }
}