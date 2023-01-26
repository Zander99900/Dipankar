package com.zander;
interface movies{
    void Hollywood();
    void Bollywood();
    void Tollywood();
}

interface actors extends movies{ //We cannot inherit the properties of interface in a class, we can only implement them, but here we can inherit
    void US_Actors();
    void Europe_Actors();
    void Tamil_Actors();
}

class film_data implements actors{//After implementing all methods from interface actors, it still gives error because we need to implement the methods of interface movies as well
    public void US_Actors(){}
    public void Europe_Actors(){}
    public void Tamil_Actors(){
        System.out.println("It has suriya as actor");
    }
//Implementing methods of movies interface
    public void Hollywood(){}
    public void Bollywood(){}
    public void Tollywood(){
        System.out.println("It is a south movie");
    }
}
public class Inheritance_of_Interface {
    public static void main(String[] args) {
        film_data udaan = new film_data();
        udaan.Tamil_Actors();
        udaan.Tollywood();
    }
}
