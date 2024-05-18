#include <iostream>
using namespace std;

int main()
{
    const int row = 3;
    const int col = 3;
    int matrix1[row][col];
    int matrix2[row][col];
    int mul[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Row: " << i << "\tColumn: " << j << ":";
            cin >> matrix1[i][j];
        }
    }
    cout << "Matrix 1" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix1[i][j] << "\t";
        }
        cout << "\n";
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Row: " << i << "\tColumn: " << j << ":";
            cin >> matrix2[i][j];
        }
    }
    cout << "Matrix 2" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix2[i][j] << "\t";
        }
        cout << "\n";
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                mul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Multiplication" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mul[i][j] << "\t";
        }
        cout << "\n";
    }
}