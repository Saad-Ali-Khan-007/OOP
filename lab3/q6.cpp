#include <iostream>
using namespace std;

int startlab3()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 03" << endl;
    return 0;
}
struct Book
{
    string title;
    string author;
    string genre;
    int year_of_publictaion;
};

int l3q6()
{
    Book b1[4] = {"Humanity", "Saad Ali Khan", "Drama", 2024};
    Book b2[4] = {"Art of War", "Muzammil Ali Khan", "Drama,War", 2000};
    Book b3[4] = {"Chemical of life", "Anus Ali Khan", "Sci-fi", 2002};
    cout << "Title: " << b1->title << "\t\t"
         << "Author: " << b1->author << "\t\t"
         << "Genre:" << b1->genre << "\t"
         << "Publication: " << b1->year_of_publictaion << endl;
    cout << "Title: " << b2->title << "\t"
         << "Author: " << b2->author << "\t"
         << "Genre:" << b2->genre << "\t"
         << "Publication: " << b2->year_of_publictaion << endl;
    cout << "Title: " << b3->title << "\t"
         << "Author: " << b3->author << "\t\t"
         << "Genre:" << b3->genre << "\t"
         << "Publication: " << b3->year_of_publictaion << endl;
    if (b1->year_of_publictaion < b2->year_of_publictaion && b1->year_of_publictaion < b3->year_of_publictaion)
    {
        cout << "Book 1 was released before book 2 and book 3 in year:" << b1->year_of_publictaion;
    }
    else if (b2->year_of_publictaion < b1->year_of_publictaion && b2->year_of_publictaion < b3->year_of_publictaion)
    {
        cout << "Book 2 was released before book 1 and book 3 in year:" << b2->year_of_publictaion;
    }
    else
    {
        cout << "Book 3 was released before book 1 and book 2 in year:" << b3->year_of_publictaion;
    }
    return 0;
}

int main()
{
    startlab3();
    l3q6();
    return 0;
}