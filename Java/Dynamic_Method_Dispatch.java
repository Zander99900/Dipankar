package com.zander;
class phone{
    public void greet(){
        System.out.println("Good Morning");
    }
    public void ring(){
        System.out.println("Your Phone Is ringing");
    }
}

class SmartPhone extends phone{
    public void music(){
    System.out.println("Playing: Blinding Lights by The Weekend");
}
    @Override //This keyword will produce error if any method is not overriding
    public void ring(){ //Here, we are using the methods from base class but modifying a method
        System.out.println("Your SmartPhone Is ringing");
    }}
public class Dynamic_Method_Dispatch {
    public static void main(String[] args) {
        phone obj = new SmartPhone();
        obj.greet(); //it is a simple example that it will run the base class method
        obj.ring(); //it will use the overriden method
       // obj.music(); //it will produce error as the object can only use methods described in class phone
    }
}
