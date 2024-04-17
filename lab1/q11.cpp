#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 01" << endl;
    return 0;
}

int l1q11()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int sum = num1 + num2;
    double average = (sum) / 2;

    cout << "Sum is " << sum << endl;
    cout << "Average is " << average << endl;

    return 0;
}

int main()
{
    startlab1();
    l1q11();
    return 0;
}