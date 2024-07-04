#include <iostream>
#include <vector>
#include <string>
using namespace std;

int startlab11()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 11" << endl;
    return 0;
}
class Date
{
public:
    int day, month, year;

    Date(int d, int m, int y) : day(d), month(m), year(y) {}
};

class Book
{
private:
    string title;
    string author;
    Date publicationDate;

public:
    Book(const string &t, const string &a, const Date &d) : title(t), author(a), publicationDate(d) {}

    void display() const
    {
        cout << "Title: " << title << "\nAuthor: " << author
             << "\nPublication Date: " << publicationDate.day << "/"
             << publicationDate.month << "/" << publicationDate.year << endl;
    }
};

class Library
{
private:
    vector<Book> books;

public:
    void addBook(const Book &book)
    {
        books.push_back(book);
    }

    void displayBooks() const
    {
        for (const auto &book : books)
        {
            book.display();
            cout << endl;
        }
    }
};

int l11q2()
{
    Library library;
    Date date1(15, 7, 2021);
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", date1);
    Date date2(1, 1, 2000);
    Book book2("Harry Potter and the Philosopher's Stone", "J.K. Rowling", date2);

    library.addBook(book1);
    library.addBook(book2);

    library.displayBooks();
    return 0;
    return 0;
}

int main()
{
    startlab11();
    l11q2();
    return 0;
}
