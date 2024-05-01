#include <iostream>
using namespace std;

int startlab3()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 03" << endl;
    return 0;
}
struct Number
{
    int num;
};

int l3q3()
{
    Number num1, num2;
    cout << "Enter number 1: ";
    cin >> num1.num;
    cout << "Enter number 2: ";
    cin >> num2.num;
    cout << "Before Swap: " << endl;
    cout << "num1 = " << num1.num << endl;
    cout << "num2 = " << num2.num << endl;
    swap(num1, num2);
    cout << "After Swap: " << endl;
    cout << "num1 = " << num1.num << endl;
    cout << "num2 = " << num2.num << endl;
    return 0;
}
int swap(Number n1, Number n2)
{

    Number temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    return 0;
}
int main()
{
    startlab3();
    l3q3();
    return 0;
}