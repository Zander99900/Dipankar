package com.zander;
//the only difference between abstract classes and interface is that, it can have normal methods defined within the class whereas in interface all methods are
//mandatory to be abstract & multiple inheritance is possible using interface and not using classes
interface Gear{
    void Gear_input(int gear);
    void HeadLight(); //Mandatory methods declared here
    default void indicator(int a){ //if we used a method from an interface in so many classes, and we want to add some constant methods like this one, we use default keyword and declare it in interface itself
        if(a==1){
            System.out.println("Left indicator");
        }
        else {
            System.out.println("Right indicator");
        }
    }
}

interface break_system{
    void break_lvl();
}

class bike{
    public void self_start(){
        System.out.println("Bike started using self start");
    }
    public void kick_start(){
        System.out.println("Bike started using kick start");
    }
}

class Honda_Bike extends bike implements Gear,break_system{ //Multiple interfaces called in a single class & inherited the properties of class bike
    public void Gear_input(int gear){
        System.out.println("this bike has: "+gear+ " gears");
    }
    public void engine_Type(){
        System.out.println("This is BS4 engine");
    }
    public void HeadLight(){
        System.out.println("Lights on...");
    }
    public void break_lvl(){
        System.out.println("Applying Brakes!");
    } //Since we implemented break_system interface, we need to define its methods as well
}

public class Interface_Practice {
    public static void main(String[] args) {
        Honda_Bike neo = new Honda_Bike();
        neo.Gear_input(4);
        neo.HeadLight();
        neo.self_start();
        neo.engine_Type();
        neo.kick_start();
        neo.indicator(2);
    }
}
