package com.zander;
import java.util.*;
public class DSA_java_collection_ArrayList {
    public static void main(String[] args) {
        ArrayList<Integer> li1 = new ArrayList<>();
        ArrayList<Integer> li2 = new ArrayList<>();
        li1.add(10);
        li1.add(20);
        li1.add(30);
        li1.add(40);
        li1.add(50);

        li2.add(123);
        li2.add(124);
        li2.add(125);
        li2.add(126);
        li2.add(127);

        li1.addAll(li2); //Another arrayList added in the ending of original array
        System.out.println(li1);
//      li1.clear();
        System.out.println("The element 30 is present at index: "+li1.indexOf(30));
        li1.remove(3);
        System.out.println(li1);
    }
}
