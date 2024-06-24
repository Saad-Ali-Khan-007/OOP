#include <iostream>
using namespace std;

int startlab5()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 05" << endl;
    return 0;
}

int l5q2()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int transpose[3][3];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int main()
{
    startlab5();
    l5q2();
    return 0;
}