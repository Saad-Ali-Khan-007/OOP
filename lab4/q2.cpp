#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 04" << endl;
    return 0;
}

int reverseArray(int num[], int size)
{
    cout << endl;
    cout << "After" << endl;
    int *ptr = num;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << ptr[i] << " ";
        ptr[i]--;
    }

    return 0;
}

int l4q2()
{
    int num[] = {1, 10, 24, 4, 5};
    int size = sizeof(num) / sizeof(int);
    cout << "Before Swap:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    reverseArray(num, size);
    return 0;
}

int main()
{
    startlab1();
    l4q2();
    return 0;
}