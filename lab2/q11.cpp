#include <iostream>
using namespace std;

int startlab2()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 02" << endl;
    return 0;
}

int l2q11()
{
    // Pattern 1
    for (int i = 0; i < 4; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "* ";
        }
        for (int l = 0; l < i + 1; l++)
        {

            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "  ";
        }
        for (int k = 4; k > i; k--)
        {
            cout << "* ";
        }
        for (int l = 5; l > i; l--)
        {

            cout << "* ";
        }
        cout << endl;
    }

    // Pattern 2
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4 ||
                j == 0 || j == 4)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    // Pattern 3
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << "* ";
        }
        for (int k = 1; k < i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    startlab2();
    l2q11();
    return 0;
}