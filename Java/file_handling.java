package com.zander;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.util.Scanner;

public class file_handling {
    public static void main(String[] args) throws Exception {
        //creating file
//        try {
//        File f1 = new File("Zander.txt");
//        f1.createNewFile();
//        }
//        catch (Exception e){
//            System.out.println("Error in file creation");
//        }

        //Writing using file handling
//        try {
//                FileWriter fileWriter = new FileWriter("Zander.txt");
//                fileWriter.write("This is file handling in java");
//                fileWriter.close();
//            }
//            catch (Exception e){
//                System.out.println("Error in writing in file");
//            }
//        try {
//            File f1 = new File("Zander.txt");
//            Scanner sc = new Scanner(f1);
//            while (sc.hasNextLine()) {
//                System.out.println(sc.nextLine());
//            }
//            sc.close();
//        }
//            catch (Exception e){
//                System.out.println("Error in file reading");
//            }

        //Deleting files
        File f1 = new File("Zander.txt");
        if(f1.delete()){
            System.out.println("File has been deleted successfully");
        }
        else {
            System.out.println("Some problem occured");
        }
    }
}
