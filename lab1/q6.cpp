#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 01" << endl;
    return 0;
}

int l1q6()
{
    int num;
    bool flagprime;
    cout << "Enter a number to check for prime: ";
    cin >> num;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flagprime = false;
        }
        else
        {
            flagprime = true;
        }
    }
    if (flagprime == true)
    {
        cout << num << " is prime";
    }
    else
    {
        cout << num << " is not prime";
    }
    return 0;
}

int main()
{
    startlab1();
    l1q6();
    return 0;
}