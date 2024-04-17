#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 01" << endl;
    return 0;
}

int l1q7()
{
    int fact = 1, num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << num << ": " << fact;
    return 0;
}

int main()
{
    startlab1();
    l1q7();
    return 0;
}