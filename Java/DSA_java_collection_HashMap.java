package com.zander;

import java.util.HashMap;

public class DSA_java_collection_HashMap {
    public static void main(String[] args) {

        HashMap<Integer,Integer> map = new HashMap<>();
        map.put(0, 10);
        map.put(1, 20);
        map.put(2, 30);
        map.put(3, 40);
        map.put(4, 50);
        System.out.println(map.get(3));
    }
}
