#include <iostream>
using namespace std;

int startlab1()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 04" << endl;
    return 0;
}

int findMax(int num[], int size)
{
    int *ptr = num;
    int temp_max = *ptr;
    int *ptr2;
    for (int i = 0; i < size; i++)
    {
        if (temp_max < ptr[i + 1])
        {
            temp_max = ptr[i + 1];
        }
        else
        {
            continue;
        }
    }
    ptr2 = &temp_max;

    cout << "The maximum element in array is: " << *ptr2 << endl;
    return 0;
}

int l4q3()
{
    int num[] = {87, 32, 5, 92, 31, 54};
    int size = sizeof(num) / sizeof(int);
    findMax(num, size);

    return 0;
}

int main()
{
    startlab1();
    l4q3();
    return 0;
}