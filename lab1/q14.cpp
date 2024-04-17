#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 01" << endl;
    return 0;
}

int l1q14()
{
    double fahrenheit;
    cout << "Enter the Fahrenheit temperature: ";
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Celsius Temperature: " << celsius << endl;
    return 0;
}

int main()
{
    startlab1();
    l1q14();
    return 0;
}