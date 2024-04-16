#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 01" << endl;
    return 0;
}

int l1q4()
{
    int num1, num2, num3;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << "Maximum number: " << num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Maximum number: " << num2;
    }
    else
    {
        cout << "Maximum number: " << num3;
    }

    return 0;
}

int main()
{
    startlab1();
    l1q4();
    return 0;
}