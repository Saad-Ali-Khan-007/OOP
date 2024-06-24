#include <iostream>
using namespace std;

int startlab5()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 05" << endl;
    return 0;
}

int l5q4()
{
    int matrix1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    int matrix2[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}};

    int result[2][2] = {0};

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int main()
{
    startlab5();
    l5q4();
    return 0;
}