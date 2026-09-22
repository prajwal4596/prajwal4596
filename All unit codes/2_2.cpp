#include<iostream>
#include <string>
using namespace std;
class Book {
    private:
        int bookID;
        string title;
        string author;
        float price;
        static int bookCount; 
    public:
        Book(int id = 0, string t = "Unknown", string a = "Unknown", float p = 0) {
            bookID = id;
            title = t;
            author = a;
            price = p;
            bookCount++;
            cout << "Book created . Total Books: " << bookCount << endl;

        }
        Book(const Book &b) {
            bookID = b.bookID;
            title = b.title;
            author = b.author;
            price = b.price;
            bookCount++;
            cout << "Book copied . Total Books: " << bookCount << endl;
        }
        ~Book() {
            bookCount--;
            cout << "Book destroyed . Total Books: " << bookCount << endl;
        }
        void displayBookDetails() {
            cout << "Book ID: " << bookID << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
        }
        static int getBookCount() {
            return bookCount;
        }
};
int Book::bookCount = 0;

int main() {
    Book book1(1, "The Great Gatsby", "F. Scott Fitzgerald", 10.99);
    book1.displayBookDetails();

    Book book2(2, "To Kill a Mockingbird", "Harper Lee", 12.99);
    book2.displayBookDetails();

    cout << "Total Books: " << Book::getBookCount() << endl;
    return 0;
}
