package com.zander;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;

public class Multiplication_Table_Generation {
    public static void main(String[] args) throws Exception {
        String[] Name = {"2Table","3Table","4Table","5Table","6Table","7Table","8Table","9Table"};
        for (int i = 0; i < Name.length; i++) {
            File f1 = new File("E:\\Multiplication\\" + Name[i] +".txt");
            f1.createNewFile();
        }
        for (int i = 2; i <= 9; i++) {
            String table = "";
            for (int j = 0; j < 10; j++) {
                table += i + "X" + (j + 1) + "=" + i * (j + 1);
                table += "\n";
            }
            try {
                FileWriter fileWriter = new FileWriter("E:\\Multiplication\\"+Name[i-2]+".txt");
                fileWriter.write(table);
                fileWriter.close();
            } catch (FileNotFoundException e) {
                System.out.println("Error in writing in file");
            }
        }
    }
}
