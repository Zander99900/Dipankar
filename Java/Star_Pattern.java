package com.zander;

public class Star_Pattern {
    public static void main(String[] args) {
        int i,j;
        int row = 5;
        for ( i = 1; i <= row ; i++) {
            for (j = row; j >i ; j--) {
                System.out.print("*");
            }
            for (int p = 1; p<=(i*2)-1 ; p++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
