package com.zander;
abstract class Pen{
    abstract void write();
    abstract void refill();
}

class FountainPen extends Pen{
    public void write(){
        System.out.println("We are writing using This pen");
    }
    public void refill(){
        System.out.println("Time to refill!");
    }
    public void changeNib(){
        System.out.println("Time to Change Nib!");
    }
}
public class Interface_PracticeSet {
    public static void main(String[] args) {
        FountainPen trimax = new FountainPen();
        trimax.write();
        trimax.refill();
        trimax.changeNib();
    }
}
