package com.zander;
abstract class phone2{ //abstract class means khyali pulao
    void ring(){
        System.out.println("Ringing..");
    }
    abstract void Boot(); //This abstract method is just defined here, and will later be defined in its subclasses
}

class samsung extends phone2{ //we need to at least define the method boot in whichever class this parent class is inherited
    void Boot() { //Defining this method is mandatory
        System.out.println("Samsung galaxy M30s powered by android 11");
    }
    public void MyFiles(){
        System.out.println("Opening My files..."); //This is optional
    }
}

class realme extends phone2{
    void Boot(){
        System.out.println("Realme X50pro powered by android 10"); }
}
public class Abstract_Classes {
    public static void main(String[] args) {
        //We cannot create an object of abstract class, we can use methods by creating object of a concrete class->
        samsung M30s = new samsung();
        M30s.Boot();

        realme X50pro = new realme();
        X50pro.Boot(); //Boot is a mandatory method for creating a phone, so it is used by every model which inherits the functionalities of phone
    }
}
