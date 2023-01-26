package com.zander;
import java.util.Objects;
import java.util.Scanner;

class Library {
    String[] books = new String[100];
    {
        books[0] = "C";
        books[1] = "Java";
        books[2] = "Python";
    }
    String BookName;
    Library() {
//        System.out.println("The available books are:");
    }

    public void seeAvailableBooks() {
        for (int i = 0; i < books.length; i++) {
            if (books[i] != null) {
                System.out.println(books[i]);
            }
        }
    }

    Library(String b) {
        this.BookName = b;
    }

    public void IssueBook() {
        for (int i = 0; i < books.length; i++) {
            if (Objects.equals(this.BookName, books[i])) {
                books[i] = null;
                System.out.println("Book Issued Successfully");
                break;
            } else {
                System.out.println("Book unavailable");
                break;
            }
        }
    }

    public void ReturnBook() {
        for (int i = 0; i < books.length; i++) {
            if (books[i] == null) {
                books[i] = this.BookName;
                i++;
                System.out.println("Book Returned successfully");
                break;
            } else {
                System.out.println("Library is full");
                break;
            }
        }
    }

    public void AddBook() {
        ReturnBook();
    }

    public void choice(int key){
        if(key == 1){
            IssueBook();
        }
        if(key == 2){
            ReturnBook();
        }
        if(key == 3){
            seeAvailableBooks();
        }
        if(key == 4){
            AddBook();
        }
    }
}
public class Library_System {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Library obj3 = new Library();
        String c = "Enter 1 to Issue books, 2 to return book, 3 to see available books, 4 to add (donate) books, 0 to end session";
        System.out.println(c);
        int choice = sc.nextInt();
        switch (choice){
            case 1:
                System.out.println("Enter The name of Book You want to issue");
                String BookIssue = sc.next();
                Library obj = new Library(BookIssue);
                obj.IssueBook();
                System.out.println(c);
                choice = sc.nextInt();
                obj.choice(choice);
                break;
            case 2:
                System.out.println("Enter The name of Book You want to return");
                String BookReturn = sc.next();
                Library obj2 = new Library(BookReturn);
                obj2.ReturnBook();
                System.out.println(c);
                choice = sc.nextInt();
                obj2.choice(choice);
                break;

            case 3:
                obj3.seeAvailableBooks();
                System.out.println(c);
                choice = sc.nextInt();
                obj3.choice(choice);
                break;
            case 4:
                System.out.println("Enter The name of Book You want to Donate");
                String BookAdd = sc.next();
                Library obj4 = new Library(BookAdd);
                obj4.AddBook();
                System.out.println(c);
                choice = sc.nextInt();
                obj4.choice(choice);
                break;
            case 0:
                break;
            default:
                System.out.println("Invalid Option");
        }
    }
}
