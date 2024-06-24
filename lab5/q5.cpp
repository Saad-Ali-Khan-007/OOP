#include <iostream>
#include <algorithm>
using namespace std;

int startlab5()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 05" << endl;
    return 0;
}

int l5q5()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; ++i)
    {
        int maxElement = *max_element(matrix[i], matrix[i] + 3);
        cout << "Largest element in row " << i + 1 << ": " << maxElement << endl;
    }

    return 0;
}

int main()
{
    startlab5();
    l5q5();
    return 0;
}