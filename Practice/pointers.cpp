#include <iostream>
using namespace std;

int main()
{
    // cout << "Non constant pointer with non constant value" << endl;
    // int a = 100;
    // int *ptr1 = &a;
    // cout << *ptr1 << endl;
    // cout << ptr1 << endl;
    // cout << a << endl;
    // cout << &a << endl;
    // cout << "Non constant pointer with constant value cannot be set" << endl;
    // int const a = 100;
    // int *ptr1 = &a;
    // cout << *ptr1 << endl;
    // cout << ptr1 << endl;
    // cout << a << endl;
    // cout << &a << endl;
    // cout << "constant pointer with constant value" << endl;
    // int const a = 100;
    // int const *ptr1 = &a;
    // cout << *ptr1 << endl;
    // cout << ptr1 << endl;
    // cout << a << endl;
    // cout << &a << endl;
    cout << "constant pointer with non-constant value" << endl;
    int a = 100;
    int const *ptr1 = &a;
    cout << *ptr1 << endl;
    cout << ptr1 << endl;
    cout << a << endl;
    cout << &a << endl;
    return 0;
}