#include <iostream>
using namespace std;

int main()
{
    const int row = 3;
    const int col = 3;
    int matrix1[row][col];
    int matrix2[row][col];
    int sum[row][col];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Row: " << i << "\tColumn: " << j << ":";
            cin >> matrix1[i][j];
        }
    }
    cout << "Matrix 1" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix1[i][j] << '\t';
        }
        cout << '\n';
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Row: " << i << "\tColumn: " << j << ":";
            cin >> matrix2[i][j];
        }
    }
    cout << "Matrix 2" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix2[i][j] << '\t';
        }
        cout << '\n';
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Sum" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sum[i][j] << '\t';
        }
        cout << '\n';
    }
    return 0;
}