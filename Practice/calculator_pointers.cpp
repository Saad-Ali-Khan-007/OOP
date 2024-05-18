#include <iostream>
using namespace std;

void sum(int *ptr1, int *ptr2)
{
    int *sum;
    int ans;
    sum = &ans;
    *sum = *ptr1 + *ptr2;
    cout << *sum;
}
void diff(int *ptr1, int *ptr2)
{
    int *diff;
    int ans;
    diff = &ans;
    *diff = *ptr1 - *ptr2;
    cout << *diff;
}
void prod(int *ptr1, int *ptr2)
{
    int *prod;
    int ans;
    prod = &ans;
    *prod = *ptr1 * *ptr2;
    cout << *prod;
}
void div(int *ptr1, int *ptr2)
{
    int *div;
    int ans;
    div = &ans;
    *div = *ptr1 / *ptr2;
    cout << *div;
}

int main()
{
    int *ptr1;
    int *ptr2;
    int num1;
    int num2;
    string operat;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << "Enter operator(+,-,*,/): ";
    cin >> operat;
    ptr1 = &num1;
    ptr2 = &num2;
    if (operat == "+")
    {
        sum(ptr1, ptr2);
    }
    else if (operat == "-")
    {
        diff(ptr1, ptr2);
    }
    else if (operat == "*")
    {
        prod(ptr1, ptr2);
    }
    else if (operat == "/")
    {
        div(ptr1, ptr2);
    }
    else
    {
        cout << "Operator Not Found" << endl;
    }

    return 0;
}