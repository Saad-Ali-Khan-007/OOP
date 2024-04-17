#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 01" << endl;
    return 0;
}

int l1q15()
{
    int number;
    cout << "Enter a 2 digit integer value: ";
    cin >> number;

    int tens_digit = number / 10;
    int ones_digit = number % 10;
    int reversed_number = ones_digit * 10 + tens_digit;

    cout << "Reverse of this value is: " << reversed_number << endl;

    return 0;
}

int main()
{
    startlab1();
    l1q15();
    return 0;
}