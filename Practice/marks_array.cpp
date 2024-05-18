#include <iostream>
using namespace std;

int main()
{
    int marks[10];
    int sum = 0;
    int average;
    int size = sizeof(marks) / sizeof(int);
    for (int i = 0; i <= size; i++)
    {
        cout << "Enter Marks: ";
        cin >> marks[i];
        sum = sum + marks[i];
    }

    average = sum / size;
    cout << average;

    return 0;
}