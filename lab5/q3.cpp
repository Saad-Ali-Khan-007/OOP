#include <iostream>
using namespace std;

int startlab5()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 05" << endl;
    return 0;
}

bool isSymmetric(int matrix[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return false;
            }
        }
    }
    return true;
}

int l5q3()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}};

    if (isSymmetric(matrix))
    {
        cout << "The matrix is symmetric." << endl;
    }
    else
    {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}

int main()
{
    startlab5();
    l5q3();
    return 0;
}