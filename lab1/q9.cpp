#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 01" << endl;
    return 0;
}

int l1q9()
{
    int year;
    cout << "Enter year to check for leap: ";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << year << " is a leap year";
    }
    else
    {
        cout << year << " is not a leap year";
    }

    return 0;
}

int main()
{
    startlab1();
    l1q9();
    return 0;
}