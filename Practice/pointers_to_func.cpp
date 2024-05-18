#include <iostream>
using namespace std;

void sum(int *ptr1, int *ptr2)
{
    int c[5];
    int *sum = c;
    for (int i = 0; i < 5; i++)
    {
        *sum = *ptr1 + *ptr2;
        cout << "a[" << i << "]" << " = " << *ptr1 << "\tb[" << i << "] = " << *ptr2 << "\tsum[" << i << "] = " << *sum << endl;
        ptr1++;
        ptr2++;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3, 4, 5};
    int *ptr1 = a;
    int *ptr2 = b;
    sum(ptr1, ptr2);
    cout << "Array Elements Adresses using &" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "array[" << i << "]" << " = " << &a[i] << endl;
    }
    cout << "Array Elements Adresses using pointers" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "array[" << i << "]" << " = " << ptr1 + i << endl;
    }
    cout << "Data insertion in an array using pointer" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter data" << endl;
        cin >> *(ptr1 + i);
    }
    cout << "Showing data in an array using pointer" << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << *(ptr1 + i) << "\t";
    }

    return 0;
}