package com.zander;
class Base{
    int b=5;
    Base(){
        System.out.println("This is Base Class! "+b);
    }
    Base(int x){
        System.out.println("This is Base Class! and value of x is: "+x); //this will print 6 because we used the super keyword to set the value of x
    }
}

class derived extends Base{
    int a=10;
    derived(){ //constructor
        System.out.println("This is derived Class! "+a);
    }

    derived(int x, int y){ //constructor
        super(x); //used to call the constructors in base class which have some parameters
        System.out.println("This is overloaded constructor of derived Class! and value of y is: "+y);
    }
}

class ChildOfDerived extends derived{
    int a=50;
    ChildOfDerived(){ //constructor
        System.out.println("This is derived Class! "+a);
    }

    ChildOfDerived(int x, int y, int z){ //constructor
        super(x, y); //used to call the constructors in base class which have some parameters
        System.out.println("This is overloaded constructor of ChildOfDerived Class! and value of z is: "+z);
    }
}
public class Inheritance_and_Constructors {
    public static void main(String[] args) {
        //1. it will call the derived class which doesn't have any parameters
        // derived a = new derived();
        //2. it will call the derived class which have one parameter
        // derived a1 = new derived(6); //to set value in derived class
        ChildOfDerived child = new ChildOfDerived(20,30,40);
    }
}
