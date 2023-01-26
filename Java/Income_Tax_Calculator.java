package com.zander;
import java.util.Scanner;
public class Income_Tax_Calculator {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float tax = 0.0f;
        System.out.println("Enter Income in LPA");
        float income = sc.nextFloat();
        System.out.print("Total Income tax deducted is:");
        if(income<=2.5f){ //if income below 2.5 LPA, then no tax deducted
            System.out.println(0);
        }
        else if(income>2.5f && income<=5.0f){ //if income below 5 LPA, then 5% tax deducted
            tax = (float) (tax + 0.05 * (income - 2.5f));
        }
        else if(income>5f && income<=10.0f){//if income below 10 LPA, then 20% tax deducted
            tax = (float) (tax + 0.05 * (5f - 2.5f));
            tax = (float) (tax + 0.2 * (income - 5f));
        }
        else if(income>10.0f){//if income below 2.5 LPA, then 30% tax deducted
            tax = (float) (tax + 0.05 * (5f - 2.5f));
            tax = (float) (tax + 0.2 * (10f - 5f));
            tax = (float) (tax + 0.3 * (income - 10f));
        }
        System.out.println(tax);
    }
}
