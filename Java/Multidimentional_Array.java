package com.zander;

public class Multidimentional_Array {
    public static void main(String[] args) {
        int[][] flats = new int[2][3];
        flats[0][0] = 100;
        flats[0][1] = 101;
        flats[0][2] = 102;
        flats[1][0] = 103;
        flats[1][1] = 104;
        flats[1][2] = 105;

        for (int i = 0; i < flats.length; i++) {
            System.out.println("for floor: " +i+ ", The FLats are:" );
            for (int j = 0; j < flats[i].length; j++) {
                System.out.print(flats[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
