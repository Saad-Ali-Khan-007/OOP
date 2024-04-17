#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 01" << endl;
    return 0;
}

int l1q13()
{
    int amount;
    cout << "Enter amount in rupees: ";
    cin >> amount;
    int thousands = amount / 1000;
    amount %= 1000;
    int five_hundreds = amount / 500;
    amount %= 500;
    int hundreds = amount / 100;
    amount %= 100;
    int fifties = amount / 50;
    amount %= 50;
    int tens = amount / 10;
    amount %= 10;
    int fives = amount / 5;
    amount %= 5;
    int twos = amount / 2;
    amount %= 2;
    int ones = amount;
    cout << "1000’s in the given amount is: " << thousands << endl;
    cout << "500’s in the given amount is: " << five_hundreds << endl;
    cout << "100’s in the given amount is: " << hundreds << endl;
    cout << "50’s in the given amount is: " << fifties << endl;
    cout << "10’s in the given amount is: " << tens << endl;
    cout << "5’s in the given amount is: " << fives << endl;
    cout << "2’s in the given amount is: " << twos << endl;
    cout << "1’s in the given amount is: " << ones << endl;
    return 0;
}

int main()
{
    startlab1();
    l1q13();
    return 0;
}