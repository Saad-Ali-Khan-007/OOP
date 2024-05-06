#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 04" << endl;
    return 0;
}

int swap(int *ptr1, int *ptr2)
{
    int *temp;
    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    return 0;
}

int l4q1()
{
    int num1, num2;
    int *ptr1, *ptr2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;

    ptr1 = &num1;
    ptr2 = &num2;
    cout << "Before Swap" << endl;
    cout << "num1 = " << *ptr1 << endl;
    cout << "num2 = " << *ptr2 << endl;
    swap(*ptr1, *ptr2);
    cout << "After Swap" << endl;
    cout << "num1 = " << *ptr1 << endl;
    cout << "num2 = " << *ptr2 << endl;
    return 0;
}

int main()
{
    startlab1();
    l4q1();
    return 0;
}