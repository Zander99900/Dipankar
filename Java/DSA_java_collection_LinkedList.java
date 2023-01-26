package com.zander;

import java.util.LinkedList;

public class DSA_java_collection_LinkedList {
    public static void main(String[] args) {
        LinkedList<Integer> li1 = new LinkedList<>();
        LinkedList<Integer> li2 = new LinkedList<>();
        li1.add(10); //Insertion at head in serial order
        li1.add(20);
        li1.add(1,30); //Insertion at Index
        li1.add(40);
        li1.add(50);

        li2.add(123);
        li2.add(124);
        li2.add(125);
        li2.add(126);
        li2.add(127);

        li1.addAll(li2); //Another LinkedList added in the ending of original array
        System.out.println(li1);
//      li1.clear();
//        System.out.println("The element 30 is present at index: "+li1.indexOf(30));
//        li1.remove(3); similar to deletion in LL
//        System.out.println(li1);

    }
}
