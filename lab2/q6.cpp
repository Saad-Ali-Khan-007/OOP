#include <iostream>
using namespace std;

int startlab2()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 02" << endl;
    return 0;
}

int l2q6()
{
    int num1, num2, operation;
    cout << "Welcome to simple calculator" << endl;
    cout << "Enter 1 number: ";
    cin >> num1;
    cout << "Enter 2 number: ";
    cin >> num2;
    cout << "Operations" << endl;
    cout << "Enter 1 for addition" << endl;
    cout << "Enter 2 for subtraction" << endl;
    cout << "Enter 3 for multiplication" << endl;
    cout << "Enter 4 for division" << endl;
    cin >> operation;
    if (operation == 1)
    {
        cout << "The sum is: " << num1 + num2;
    }
    else if (operation == 2)
    {
        cout << "The difference is: " << num1 - num2;
    }
    else if (operation == 3)
    {
        cout << "The product is: " << num1 * num2;
    }
    else if (operation == 4)
    {
        cout << "The division is: " << num1 / num2;
    }
    else
    {
        cout << "Operation is not valid";
    }
    return 0;
}

int main()
{
    startlab2();
    l2q6();
    return 0;
}