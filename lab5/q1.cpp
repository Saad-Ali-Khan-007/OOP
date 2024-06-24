#include <iostream>
using namespace std;

int startlab5()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 05" << endl;
    return 0;
}

int l5q1()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int sum = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            sum += matrix[i][j];
        }
    }

    cout << "Sum of all elements: " << sum << endl;
    return 0;
}

int main()
{
    startlab5();
    l5q1();
    return 0;
}