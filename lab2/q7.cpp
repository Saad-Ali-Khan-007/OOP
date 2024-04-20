#include <iostream>
using namespace std;

int startlab2()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 02" << endl;
    return 0;
}

int l2q6()
{
    int num1 = 0, num2 = 1, sum = 0, limit;
    cout << "Enter number of terms: ";
    cin >> limit;
    for (int i = 0; i <= limit; i++)
    {
        sum = num1 + num2;
        cout << num1 << " ";
        num1 = num2;
        num2 = sum;
    }

    return 0;
}

int main()
{
    startlab2();
    l2q6();
    return 0;
}