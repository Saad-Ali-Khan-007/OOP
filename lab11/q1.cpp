#include <iostream>
using namespace std;

int startlab11()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 11" << endl;
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

int l11q1()
{
    Date date(15, 7, 2021);
    Book book("The Great Gatsby", "F. Scott Fitzgerald", date);
    book.display();
    return 0;
    return 0;
}

int main()
{
    startlab11();
    l11q1();
    return 0;
}
