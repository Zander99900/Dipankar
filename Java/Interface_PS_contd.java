package com.zander;
class Monkey{
    public void jump(){
        System.out.println("Monkey is jumping!");
    }
    public void bite(){
        System.out.println("Monkey is biting!");
    }
}

interface BasicAnimal{
    void Eat();
    void Sleep();
}

class Human extends Monkey implements BasicAnimal{
    public void Eat(){
        System.out.println("This man is eating");
    }
    public void Sleep(){
        System.out.println("This man is sleeping");
    }
    @Override
    public void jump(){
        System.out.println("Human is jumping");
    }
}
public class Interface_PS_contd {
    public static void main(String[] args) {
        Human zander = new Human();
        zander.Eat();
        zander.Sleep();
        zander.jump();
    }
}
