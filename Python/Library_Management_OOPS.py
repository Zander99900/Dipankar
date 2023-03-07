class Library:
    def __init__(self, books, book_count):
        self.books = books
        self.book_count = book_count
        
    def print_original_book(self):
        print("The books after adding new book is:")
        for i in self.books:
            print(i)
        print(f"count of books is {self.book_count}")
        
class Addbook(Library):
    def book_add(self, new_book):
        self.books.append(new_book)
        self.book_count += 1
        
a = Library(["C", "C++", "Python"], len(["C", "C++", "Python"]))
a.print_original_book()

b = Addbook(a.books, a.book_count)
b.book_add("Java")
b.print_original_book()