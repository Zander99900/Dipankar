package com.zander;

public class array_operations {
    public static void main(String[] args) {
        //there are 3 main methods to use array
        //1. Declaration and Initialization
        int[] marks = new int[5];
        //Assignment
        marks[0] = 48;
        marks[1] = 38;
        marks[2] = 28;
        marks[3] = 18;
        marks[4] = 68;

        //2. Declaration and then Initialization
        int[]score;
        score = new int[7];
        //Assignment as done in previous method

        //3. Declaration Initialization & Assignment all at once
        int[] roll = {2, 8, 4, 6, 9};
        System.out.println(roll.length);
        for (int element: marks) {
            System.out.print(element + "\t");
        }
    }
}
