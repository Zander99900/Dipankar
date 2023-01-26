package com.zander;

abstract class Telephone{
    abstract void Ring();
    abstract void lift();
    abstract void disconnect();
}

interface GPS{
    default void location(){
        System.out.println("This is your current location");
    }
}

interface Media_Player{
     void PlayMusic();
}
class SmartPhone2 extends Telephone implements GPS,Media_Player{
    public void Ring() {
        System.out.println("Phone is Ringing");
    }
    public void lift() {
        System.out.println("Lifting The Phone");
    }
    public void disconnect() {
        System.out.println("Disconnecting The call");
    }
    public void PlayMusic(){
        System.out.println("Now we are playing honey singh songs!!!");
    }
}

interface TVRemote{
    void volume();
    void channels();
    void on_off();
}

interface SmartTVRemote extends TVRemote{
    void netflix();
    void AmazonPrime();
    void Disney_Hotstar();
}

class TV implements SmartTVRemote{
    public void volume(){
        System.out.println("Turning volume up/down");
    }
    public void channels(){
        System.out.println("Changing Channels");
    }
    public void on_off(){
        System.out.println("Turning Tv on/off");
    }
    public void netflix(){
        System.out.println("Opening Netflix");
    }
    public void AmazonPrime(){
        System.out.println("Opening Amazon Prime");
    }
    public void Disney_Hotstar(){
        System.out.println("Opening Disney + Hotstar!");
    }
}
//In this ex: we can use smartphone as GPS, as media player and demonstrate polymorphism, we can only use the methods declared in those respective methods
public class Polymorphism_Practice {
    public static void main(String[] args) {
//        GPS g = new SmartPhone2();
////        g.location(); //This object "g" can only use methods defined/declared in interface GPS
////        g.Ring(); -> throws error
//
//        Media_Player play = new SmartPhone2();
//        play.PlayMusic(); //we only declared this method in interface Media_Player, but still we can use here

        TVRemote Sony = new TV();
        Sony.volume();
        Sony.channels();
        Sony.on_off();
    }
}
