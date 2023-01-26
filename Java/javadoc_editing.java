package com.zander;

/**
 * @author Zander
 * @version 2.0
 * @since 2022
 *
 */
public class javadoc_editing {
    /**
     *the main function is static, so we used static int to make the objects of same type
     * @param n1 takes the first integer
     * @param n2 takes second integer
     * @param n3 takes third integer
     * @return the sum of the three integers
     */
        public static int sum3(int n1, int n2, int n3){
            return n1 + n2 + n3;
        }
    /**
     * this is the main method
     * @param args this method takes arguments
     */
    public static void main(String[] args) {
           int a = sum3(4,5,6);
        System.out.println(a);
            }
    }
