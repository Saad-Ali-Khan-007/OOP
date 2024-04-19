#include <iostream>
using namespace std;

int startlab2()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 02" << endl;
    return 0;
}

int l2q1()
{
    char a;
    cout << "Enter a character: ";
    cin >> a;
    int i = int(a);
    if (i >= 65 && i <= 90)
    {
        cout << "Capital letter";
    }
    else if (i >= 97 && i <= 122)
    {
        cout << "Small letter";
    }
    else if (i >= 48 && i <= 57)
    {
        cout << "Digit";
    }
    else
    {
        cout << "Special Character";
    }
    return 0;
}

int main()
{
    startlab2();
    l2q1();
    return 0;
}