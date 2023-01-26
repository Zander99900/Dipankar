package com.zander;

//Using Thread Class
class Multi extends Thread{
    public void run(){
        int i = 0;
        while (i<100000){
            System.out.println("Good Night");
            i++;
        }
    }
}

class MultiNew extends Thread{
    public void run(){
        int i = 0;
        while (i<100000){
            System.out.println("Good Morning");
            i++;
        }
    }
}

class Multi3 implements Runnable {
    //This method is compulsory to use while using runnable interface
    @Override
    public void run() {
        int i = 0;
        while (i < 100000) {
            System.out.println("Zander is here boys");
            i++;
        }
    }
}

//delaying a thread execution
class MultiDelay extends Thread {
    //This method is compulsory to use while using runnable interface
    public void run() {
        int i = 0;
        while (i < 100000) {
            try {
                Thread.sleep(200);
            }
            catch (Exception e) {
                System.out.println(e);
            }
            System.out.println("Heyyyyy");
            i++;
        }
    }
}
public class MultiThreading_Practice {
    public static void main(String[] args) {
        Multi m = new Multi();
        MultiNew m2 = new MultiNew();
        //Using runnable interface requires you to use thread
        Multi3 bullet = new Multi3();
        MultiDelay m3 = new MultiDelay();
//      Thread gun = new Thread(bullet); //using thread to implement runnable class
//Thread.MAX_PRIORITY has value 10
//Thread.NORM_PRIORITY has value 5
//Thread.MIN_PRIORITY has value 1
        m.setPriority(Thread.MAX_PRIORITY);
        m2.setPriority(Thread.NORM_PRIORITY);
//      gun.setPriority(Thread.MIN_PRIORITY);
//
//        m.start();
//        m2.start();
        m3.start();
        System.out.println(m3.getPriority());
        System.out.println(m3.getState());
        System.out.println(Thread.currentThread().getState());
    }
}
